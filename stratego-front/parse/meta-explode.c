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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Anno_2;
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
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
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
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_j_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_g_15;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_v_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_u_9;
ATerm term_w_8;
ATerm term_n_8;
ATerm term_c_7;
ATerm term_o_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_Cong_2, term_h_5, (ATerm) ATempty);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Op_2, term_h_5, (ATerm) ATempty);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__3, term_x_15, term_y_15, term_s_4);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm i_1 (ATerm m_0, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm TrmCons_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm);
ATerm l_0 (ATerm);
ATerm TrmConc_0_0 (ATerm);
ATerm TrmAnno_0_0 (ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm n_0 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm _2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_105 (ATerm), ATerm);
ATerm p_7 (ATerm j_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm k_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm a_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_104 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm need_help_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm iowrap_3_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm);
ATerm r_4 (ATerm);
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
  t = term_s_4;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm i_1 (ATerm m_0, ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  t = SSL_explode_term(m_0);
  if(match_cons(t, sym__2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
  t = map_1_0(str_explode_0_0, t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, o_0, q_0);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      r_0 = ATgetArgument(t, 0);
      {
        ATerm t_4 = t;
        int v_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_0), (ATerm) ATempty);
            ;
            LocalPopChoice(v_4);
          }
        else
          {
            t = t_4;
            t = i_1(t_0, t);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          r_0 = ATgetArgument(t, 0);
          {
            ATerm w_4 = t;
            int y_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_0;
                t = MetaExplode_0_0(t);
                ;
                LocalPopChoice(y_4);
              }
            else
              {
                t = w_4;
                t = i_1(t_0, t);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              r_0 = ATgetArgument(t, 0);
              {
                ATerm z_4 = t;
                int c_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_0;
                    t = MetaExplode_0_0(t);
                    ;
                    LocalPopChoice(c_5);
                  }
                else
                  {
                    t = z_4;
                    t = i_1(t_0, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm e_5 = t;
                  int f_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_5;
                      ;
                      LocalPopChoice(f_5);
                    }
                  else
                    {
                      t = e_5;
                      t = i_1(t_0, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_0 = ATgetFirst((ATermList) t);
                      s_0 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm k_5 = t;
                        int n_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_1 = NULL,h_1 = NULL;
                            t = r_0;
                            t = str_explode_0_0(t);
                            d_1 = t;
                            t = s_0;
                            t = str_explode_0_0(t);
                            h_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Cong_2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, h_1), d_1));
                            ;
                            LocalPopChoice(n_5);
                          }
                        else
                          {
                            t = k_5;
                            t = i_1(t_0, t);
                          }
                      }
                    }
                  else
                    {
                      t = i_1(t_0, t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  j_1 = t;
  t = SSL_explode_term(j_1);
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  t = map_1_0(trm_explode_0_0, t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, l_1, n_1);
  return(t);
}
ATerm TrmCons_0_0 (ATerm t)
{
  ATerm o_1 = NULL,t_1 = NULL,x_1 = NULL,d_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_1 = ATgetFirst((ATermList) t);
      t_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_1;
  t = trm_explode_0_0(t);
  x_1 = t;
  t = t_1;
  t = trm_explode_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, d_2), x_1));
  return(t);
}
ATerm foldr_3_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  ATerm p_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_96(t);
      ;
      LocalPopChoice(r_5);
    }
  else
    {
      t = p_5;
      {
        ATerm r_2 = NULL,t_2 = NULL,x_2 = NULL,y_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_2 = ATgetFirst((ATermList) t);
            t_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_2;
        t = m_96(t);
        x_2 = t;
        t = t_2;
        t = foldr_3_0(k_96, l_96, m_96, t);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
        t = l_96(t);
      }
    }
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm o_3 = NULL,b_1 = NULL,g_1 = NULL;
  o_3 = t;
  t = SSL_explode_term(o_3);
  if(match_cons(t, sym__2))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_5 = ATgetArgument(t, 1);
        if(((ATgetType(t_5) == AT_LIST) && !(ATisEmpty(t_5))))
          {
            b_1 = ATgetFirst((ATermList) t_5);
            {
              ATerm v_5 = (ATerm) ATgetNext((ATermList) t_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_3);
  if(match_cons(t, sym__2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_6 = ATgetArgument(t, 1);
        if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
          {
            ATerm j_6 = ATgetFirst((ATermList) d_6);
            ATerm l_6 = (ATerm) ATgetNext((ATermList) d_6);
            if(((ATgetType(l_6) == AT_LIST) && !(ATisEmpty(l_6))))
              {
                g_1 = ATgetFirst((ATermList) l_6);
                {
                  ATerm q_6 = (ATerm) ATgetNext((ATermList) l_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, g_1), b_1));
  return(t);
}
ATerm TrmConc_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_3;
  {
    ATerm r_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_3 = NULL;
        if(match_cons(t, sym_meta_listvar_1))
          {
            g_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, g_3)));
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = r_6;
      }
    {
      ATerm k_0 (ATerm t)
      {
        t = e_3;
        {
          ATerm x_6 = t;
          int b_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL;
              if(match_cons(t, sym_meta_listvar_1))
                {
                  j_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, j_3))));
              ;
              LocalPopChoice(b_7);
            }
          else
            {
              t = x_6;
              t = trm_explode_0_0(t);
            }
        }
        return(t);
      }
      t = foldr_3_0(k_0, l_0, trm_explode_0_0, t);
    }
  }
  return(t);
}
ATerm TrmAnno_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym_WithAnno_2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3;
  t = trm_explode_0_0(t);
  u_3 = t;
  t = t_3;
  t = MetaExplode_0_0(t);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, u_3, y_3);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          i_4 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, i_4);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              i_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, i_4))));
        }
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = d_7;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            r_1 = t;
            t = SSL_is_string(r_1);
            q_1 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, q_1);
            ;
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            {
              ATerm i_7 = t;
              int k_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_4 = NULL;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      x_4 = ATgetArgument(t, 0);
                      t = x_4;
                      t = MetaExplode_0_0(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          x_4 = ATgetArgument(t, 0);
                          {
                            ATerm g_5 = NULL;
                            t = x_4;
                            t = MetaExplode_0_0(t);
                            g_5 = t;
                            t = (ATerm) ATmakeAppl(sym_RootApp_1, g_5);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              x_4 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = x_4;
                          t = MetaExplode_0_0(t);
                        }
                    }
                  ;
                  LocalPopChoice(k_7);
                }
              else
                {
                  t = i_7;
                  {
                    ATerm l_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmAnno_0_0(t);
                        ;
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = l_7;
                        {
                          ATerm q_7 = t;
                          int s_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmConc_0_0(t);
                              ;
                              LocalPopChoice(s_7);
                            }
                          else
                            {
                              t = q_7;
                              {
                                ATerm v_7 = t;
                                int w_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = term_c_7;
                                    ;
                                    LocalPopChoice(w_7);
                                  }
                                else
                                  {
                                    t = v_7;
                                    {
                                      ATerm x_7 = t;
                                      int y_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmCons_0_0(t);
                                          ;
                                          LocalPopChoice(y_7);
                                        }
                                      else
                                        {
                                          t = x_7;
                                          t = TrmOp_0_0(t);
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
ATerm alltd_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_86(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = SRTS_all(l_5, t);
      }
    return(t);
  }
  t = l_5(t);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm q_5 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      q_5 = ATgetArgument(t, 0);
      t = q_5;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          q_5 = ATgetArgument(t, 0);
          {
            ATerm u_5 = NULL;
            t = q_5;
            t = trm_explode_0_0(t);
            u_5 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, u_5);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              q_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_5;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(n_0, t);
  return(t);
}
ATerm _2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  b_6 = t;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  w_5 = t;
  t = x_5;
  t = t_64(t);
  z_5 = t;
  t = y_5;
  t = u_64(t);
  a_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_5, a_6), w_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_6, term_n_8);
  t = open_stream_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, f_6);
  t = w_102(t);
  t = fclose_0_0(t);
  t = f_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = fetch_1_0(z_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = WriteToFile_1_0(a_1, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm k_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          k_6 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(k_6, m_6);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = WriteToFile_1_0(e_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if(match_cons(r_8, sym_Stream_1))
        {
          o_6 = ATgetArgument(r_8, 0);
        }
      else
        _fail(t);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(o_6, p_6);
  s_6 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), s_6);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_6);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  h_6 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_6 != NULL) && (i_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_0, t);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          t = term_w_8;
          if(((i_6 != NULL) && (i_6 != t)))
            _fail(t);
          else
            i_6 = t;
        }
      return(t);
    }
    t = _2_0(u_0, _id, t);
    t = h_6;
    {
      ATerm w_0 (ATerm t)
      {
        ATerm s_1 = NULL;
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_6), s_1);
        return(t);
      }
      t = _2_0(_id, w_0, t);
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_0, y_0, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            t = _2_0(_id, c_1, t);
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
ATerm apply_strategy_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,w_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
  u_6 = t;
  t = dtime_0_0(t);
  t = u_6;
  t = y_105(t);
  w_6 = t;
  t = dtime_0_0(t);
  y_6 = t;
  t = w_6;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_6), (ATerm) ATmakeAppl(sym_Runtime_1, y_6)), a_7);
  return(t);
}
ATerm p_7 (ATerm j_7, ATerm t)
{
  t = SSL_fclose(j_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_7 = ATgetArgument(t, 0);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_7);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = p_7(n_7, t);
          }
      }
    }
  else
    {
      t = p_7(n_7, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_stdin_stream();
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  t = SSL_stdout_stream();
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  t = SSL_stderr_stream();
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm c_8 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm g_8 = NULL;
  g_8 = t;
  t = SSL_is_string(g_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      ATerm h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL,l_2 = NULL;
        k_2 = t;
        t = SSL_explode_term(k_2);
        if(match_cons(t, sym__2))
          {
            ATerm l_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_9 = ATgetArgument(t, 1);
              if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
                {
                  l_2 = ATgetFirst((ATermList) n_9);
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
        t = l_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
              t = _2_0(f_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_7 = ATgetArgument(t, 0);
                  a_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_7, a_8);
              b_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, b_8);
              ;
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              {
                ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
                t = _2_0(k_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_8 = ATgetArgument(t, 0);
                    e_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_8, e_8);
                f_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 = NULL;
      k_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_8, term_u_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm m_2 = NULL;
        m_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = m_2;
        _fail(t);
      }
    }
  h_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_8);
  i_8 = t;
  t = h_8;
  t = fclose_0_0(t);
  t = i_8;
  return(t);
}
ATerm fetch_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_90, _id, t);
        ;
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        t = Cons_2_0(_id, p_8, t);
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm s_8 = NULL,t_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_8 = ATgetFirst((ATermList) t);
            t_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_8;
        {
          ATerm p_1 (ATerm t)
          {
            t = t_8;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm a_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_9, t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = a_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_90(t);
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  t = SSL_explode_string(f_9);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_explode_string(g_9);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_9 = NULL;
  t = _2_0(u_1, v_1, t);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,m_9 = NULL;
        if(match_cons(t, sym__2))
          {
            i_9 = ATgetArgument(t, 0);
            m_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_9;
        {
          ATerm w_1 (ATerm t)
          {
            t = m_9;
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        {
          ATerm w_2 = NULL,z_2 = NULL;
          w_2 = t;
          t = SSL_explode_term(w_2);
          if(match_cons(t, sym__2))
            {
              ATerm h_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_2;
          t = concat_0_0(t);
        }
      }
    e_9 = t;
    t = SSL_implode_string(e_9);
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_9 = NULL;
      x_9 = t;
      t = SSL_is_string(x_9);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = k_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_1, t);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
              b_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_10 = ATgetArgument(t, 0);
                  t = c_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_10 = ATgetArgument(t, 0);
                      t = c_10;
                      {
                        ATerm q_10 = t;
                        int r_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_10);
                            {
                              ATerm s_10 = t;
                              int t_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_4 = NULL;
                                  t = eval_config_0_0(t);
                                  n_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_10, n_4);
                                  t = n_4;
                                  ;
                                  LocalPopChoice(t_10);
                                }
                              else
                                {
                                  t = s_10;
                                }
                            }
                            ;
                            LocalPopChoice(r_10);
                          }
                        else
                          {
                            t = q_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_10), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = c_10;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_10 = NULL,m_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_10 = ATgetArgument(t, 0);
                          d_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_10;
                      t = eval_config_0_0(t);
                      l_10 = t;
                      t = d_10;
                      t = eval_config_0_0(t);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_10, m_10);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm u_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL,x_10 = NULL;
      v_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_10 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 = NULL;
            t = eval_config_0_0(t);
            u_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_4);
            t = u_4;
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = y_10;
          }
        x_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_10, term_g_11);
        t = geq_0_0(t);
        t = v_10;
        t = h_104(t);
      }
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = u_10;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  if(match_string(t, "-k"))
    {
      t = z_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_10;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  t = SSL_string_to_int(a_11);
  b_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), b_11);
  t = a_11;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, a_2, b_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  if(match_string(t, "-S"))
    {
      t = d_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_11;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_m_11;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm g_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  t = SSL_string_to_int(e_11);
  f_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_11);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_11);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_11;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_2, e_2, f_2, t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_2, h_2, i_2, t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = Option_3_0(j_2, n_2, o_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_11 = NULL;
      t = term_s_4;
      t = d_0(t);
      k_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_12, term_j_12, k_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_11 = ATgetFirst((ATermList) t);
          j_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_11;
      t = a_0(t);
      t = term_s_4;
      t = b_0(t);
      n_11 = t;
      t = (ATerm) ATinsert(CheckATermList(j_11), n_11);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  if(match_string(t, "-o"))
    {
      t = p_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_11;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_11);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_11);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, s_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__3))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
      v_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
  {
    ATerm l_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            ATerm s_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_11, u_11);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATempty;
      }
    w_11 = t;
    t = SSL_table_put(t_11, u_11, (ATerm) ATinsert(CheckATermList(w_11), v_11));
    t = (ATerm) ATmakeAppl(sym__3, t_11, u_11, v_11);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_12 = NULL;
      t = term_s_4;
      t = j_0(t);
      i_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_12, term_j_12, i_12);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_12 = ATgetFirst((ATermList) t);
          f_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_12 = ATgetFirst((ATermList) t);
          h_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_12;
      t = h_0(t);
      t = g_12;
      t = i_0(t);
      m_12 = t;
      t = (ATerm) ATinsert(CheckATermList(h_12), m_12);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  if(match_string(t, "-i"))
    {
      t = o_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_12;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_12);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_12);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_4;
  t = whoami_0_0(t);
  q_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), q_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = eval_config_0_0(t);
        a_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_5);
        t = a_5;
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = w_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm z_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_96(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = z_12;
      {
        ATerm t_12 = NULL,u_12 = NULL,x_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_12 = ATgetFirst((ATermList) t);
            u_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_12;
        t = foldr_2_0(i_96, j_96, t);
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_12, x_12);
        t = j_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm j_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_5, m_5);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = c_13;
        t = SSL_addr(j_5, m_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_5 = NULL,d_5 = NULL;
  t = times_0_0(t);
  b_5 = t;
  t = SSL_explode_term(b_5);
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5;
  t = foldr_2_0(b_3, c_3, t);
  a_13 = t;
  t = SSL_TicksToSeconds(a_13);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_13;
        if((m_13 != t))
          {
            _fail(t);
          }
        t = l_13;
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = l_13;
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_13, n_13);
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              t = SSL_gtr(m_13, n_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm k_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_13 = NULL,s_13 = NULL;
      q_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = p_13;
          }
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_13, term_t_13);
        t = geq_0_0(t);
        t = q_13;
        t = g_104(t);
      }
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = k_13;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm u_13 = NULL,w_13 = NULL;
  t = run_time_0_0(t);
  u_13 = t;
  t = term_s_4;
  t = whoami_0_0(t);
  w_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), w_13));
  t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_14), u_13), term_y_13), w_13));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 = NULL;
            t = eval_config_0_0(t);
            q_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_8);
            t = q_8;
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
          }
      }
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      t = fetch_1_0(h_3, t);
    }
  t = w_106(t);
  return(t);
}
ATerm map_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm y_14 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = y_14;
        t = Cons_2_0(g_90, x_13, t);
      }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_13 = ATgetFirst((ATermList) t);
      a_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_14 = NULL,f_14 = NULL;
        t = a_14;
        t = g_0(t);
        e_14 = t;
        t = z_13;
        t = f_0(t);
        f_14 = t;
        t = a_14;
        {
          ATerm i_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_14), f_14);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_14);
  g_14 = t;
  t = h_14;
  t = n_75(t);
  i_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_14), g_14);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_14), term_g_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_9 = NULL;
            t = eval_config_0_0(t);
            d_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_9);
            t = d_9;
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = k_15;
          }
      }
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = fetch_1_0(k_3, t);
    }
  t = term_o_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, l_3, t);
  t = map_1_0(m_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_14);
  n_14 = t;
  t = o_14;
  t = o_75(t);
  p_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_14), n_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  {
    ATerm p_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_15 = ATgetFirst((ATermList) t);
                ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_14;
          }
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = p_15;
        t = (ATerm) ATinsert(ATempty, u_14);
      }
    v_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_14);
    t = u_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL;
        t = eval_config_0_0(t);
        r_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_9);
        t = r_9;
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_15;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_16;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, p_3, q_3, t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = h_16;
      t = Option_3_0(r_3, v_3, w_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  e_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  z_14 = t;
  t = a_15;
  t = i_69(t);
  c_15 = t;
  t = b_15;
  t = j_69(t);
  d_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_15), c_15), z_14);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_15);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  {
    ATerm k_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_16;
        t = z_108(t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = k_16;
      }
    t = l_15;
    {
      ATerm z_3 (ATerm t)
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                t = z_108(t);
                t = Cons_2_0(_id, z_3, t);
              }
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm q_15 = NULL,r_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_15 = ATgetFirst((ATermList) t);
                  r_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_15), (ATerm) ATmakeAppl(sym_Undefined_1, q_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_3, z_3, t);
    }
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  if(match_string(t, "--help"))
    {
      t = d_16;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_16;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_16;
        }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_16;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_16;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm y_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_108(t);
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = y_16;
          {
            ATerm a_17 = t;
            int b_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_4, c_4, d_4, t);
                ;
                LocalPopChoice(b_17);
              }
            else
              {
                t = a_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_4, t);
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_16 = NULL;
          i_16 = t;
          {
            ATerm e_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_16;
                {
                  ATerm g_17 = t;
                  int h_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm i_17 = t;
                        int j_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_11 = NULL;
                            t = eval_config_0_0(t);
                            o_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_11);
                            t = o_11;
                            ;
                            LocalPopChoice(j_17);
                          }
                        else
                          {
                            t = i_17;
                          }
                      }
                      ;
                      LocalPopChoice(h_17);
                    }
                  else
                    {
                      t = g_17;
                      t = fetch_1_0(e_4, t);
                    }
                  t = i_16;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(f_17);
              }
            else
              {
                t = e_17;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm k_17 = t;
                  int l_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_13 = NULL;
                      t = eval_config_0_0(t);
                      d_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), d_13);
                      t = d_13;
                      ;
                      LocalPopChoice(l_17);
                    }
                  else
                    {
                      t = k_17;
                    }
                  t = i_16;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm m_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm g_4 (ATerm t)
                  {
                    if(((b_16 != NULL) && (b_16 != t)))
                      _fail(t);
                    else
                      b_16 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_4, t);
                  return(t);
                }
                t = fetch_1_0(f_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_16)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_16)), term_o_17));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(n_17);
              }
            else
              {
                t = m_17;
              }
          }
        }
      c_16 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_16;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t)
{
  ATerm l_16 = NULL;
  t = parse_options_1_0(y_106, t);
  l_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_16);
  t = l_16;
  t = a_107(t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_106, t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = if_verbose2_1_0(p_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_17;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_14 = NULL;
        t = eval_config_0_0(t);
        t_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_14);
        t = t_14;
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
      }
    n_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_16));
    t = m_16;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_106(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              {
                ATerm b_18 = t;
                int c_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = b_18;
                    {
                      ATerm d_18 = t;
                      int e_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_4, m_4, o_4, t);
                          ;
                          LocalPopChoice(e_18);
                        }
                      else
                        {
                          t = d_18;
                          {
                            ATerm f_18 = t;
                            int g_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_18);
                              }
                            else
                              {
                                t = f_18;
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
  ATerm k_4 (ATerm t)
  {
    ATerm o_16 = NULL,p_16 = NULL,j_15 = NULL;
    o_16 = t;
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_16 != NULL) && (p_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_4, t);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = term_j_18;
          p_16 = t;
        }
      t = not_null(p_16);
      t = ReadFromFile_0_0(t);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_16, j_15);
      t = apply_strategy_1_0(h_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_4, j_106, j_4, k_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = _2_0(_id, MetaExplode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_4, _fail, default_usage_0_0, t);
  return(t);
}
