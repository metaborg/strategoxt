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
Symbol sym_Input2_1;
Symbol sym_Path_0;
Symbol sym_SquashedPath_0;
Symbol sym_NoPath_0;
Symbol sym_TopMost_0;
Symbol sym_UseAmbMark_0;
Symbol sym_NL_0;
Symbol sym_L_1;
Symbol sym_UL_0;
Symbol sym_Label_2;
Symbol sym_amb_2;
Symbol sym_amb1_1;
Symbol sym_amb2_1;
Symbol sym_LCons_3;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Undefined_0;
Symbol sym_Silent_0;
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
  sym_Input2_1 = ATmakeSymbol("Input2", 1, ATfalse);
  ATprotectSymbol(sym_Input2_1);
  sym_Path_0 = ATmakeSymbol("Path", 0, ATfalse);
  ATprotectSymbol(sym_Path_0);
  sym_SquashedPath_0 = ATmakeSymbol("SquashedPath", 0, ATfalse);
  ATprotectSymbol(sym_SquashedPath_0);
  sym_NoPath_0 = ATmakeSymbol("NoPath", 0, ATfalse);
  ATprotectSymbol(sym_NoPath_0);
  sym_TopMost_0 = ATmakeSymbol("TopMost", 0, ATfalse);
  ATprotectSymbol(sym_TopMost_0);
  sym_UseAmbMark_0 = ATmakeSymbol("UseAmbMark", 0, ATfalse);
  ATprotectSymbol(sym_UseAmbMark_0);
  sym_NL_0 = ATmakeSymbol("NL", 0, ATfalse);
  ATprotectSymbol(sym_NL_0);
  sym_L_1 = ATmakeSymbol("L", 1, ATfalse);
  ATprotectSymbol(sym_L_1);
  sym_UL_0 = ATmakeSymbol("UL", 0, ATfalse);
  ATprotectSymbol(sym_UL_0);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_amb_2 = ATmakeSymbol("amb", 2, ATfalse);
  ATprotectSymbol(sym_amb_2);
  sym_amb1_1 = ATmakeSymbol("amb1", 1, ATfalse);
  ATprotectSymbol(sym_amb1_1);
  sym_amb2_1 = ATmakeSymbol("amb2", 1, ATfalse);
  ATprotectSymbol(sym_amb2_1);
  sym_LCons_3 = ATmakeSymbol("LCons", 3, ATfalse);
  ATprotectSymbol(sym_LCons_3);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_u_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_y_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_r_22;
ATerm term_o_21;
ATerm term_w_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_v_19;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_l_12;
ATerm term_c_9;
ATerm term_z_8;
void init_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_n_15);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_e_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_8);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__3, term_n_26, term_o_26, term_b_17);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm oncetd_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm e_0 (ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm laydiff_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm LConstoCons_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm laydiff_squash_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm printtopdiff_0_0 (ATerm);
ATerm genzip_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm);
ATerm L_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm f_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm layeq_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm printdiff_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm ldiff_0_0 (ATerm);
ATerm _2_0 (ATerm v_64 (ATerm), ATerm w_64 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_96 (ATerm), ATerm);
ATerm f_13 (ATerm z_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm m_88 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm option_value_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm my_usage_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm l_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm ops_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm need_help_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm q_75 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm g_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_100 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm parse_options_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm n_3 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_80(t);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = n_3;
        t = SRTS_one(m_0, t);
      }
    return(t);
  }
  t = m_0(t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm i_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = i_8;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm k_0 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm g_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_2, i_2);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = SSL_addr(g_2, i_2);
      }
  }
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm j_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_2, m_2);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = SSL_addr(j_2, m_2);
      }
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
        _fail(t);
      {
        ATerm g_9 = ATgetArgument(t, 1);
        if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm q_2 = NULL,w_2 = NULL,a_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
        {
          q_2 = ATgetFirst((ATermList) k_9);
          a_3 = (ATerm) ATgetNext((ATermList) k_9);
        }
      else
        _fail(t);
      {
        ATerm m_9 = ATgetArgument(t, 1);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            w_2 = ATgetFirst((ATermList) m_9);
            e_3 = (ATerm) ATgetNext((ATermList) m_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_2, w_2), (ATerm) ATmakeAppl(sym__2, a_3, e_3));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_3), f_3);
  return(t);
}
ATerm laydiff_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm u_0 = NULL;
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,q_0 = NULL;
        v_0 = t;
        if(match_cons(t, sym__2))
          {
            w_0 = ATgetArgument(t, 0);
            x_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_0;
        if((w_0 != t))
          {
            _fail(t);
          }
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_9 = ATgetArgument(t, 1);
              if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
                {
                  q_0 = ATgetFirst((ATermList) q_9);
                  {
                    ATerm r_9 = (ATerm) ATgetNext((ATermList) q_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_0;
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL,f_1 = NULL;
              t = _2_0(c_0, e_0, t);
              t_0 = t;
              t = SSL_explode_term(t_0);
              if(match_cons(t, sym__2))
                {
                  ATerm u_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_9) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_9 = ATgetArgument(t, 1);
                    if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
                      {
                        f_1 = ATgetFirst((ATermList) v_9);
                        {
                          ATerm w_9 = (ATerm) ATgetNext((ATermList) v_9);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = f_1;
              ;
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              {
                ATerm x_9 = t;
                int y_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_1 = NULL,d_2 = NULL,h_2 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL;
                    v_1 = t;
                    if(match_cons(t, sym__2))
                      {
                        d_2 = ATgetArgument(t, 0);
                        h_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(h_2);
                    if(match_cons(t, sym__2))
                      {
                        a_2 = ATgetArgument(t, 0);
                        b_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(d_2);
                    if(match_cons(t, sym__2))
                      {
                        if((a_2 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        c_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = c_2;
                    t = foldr_3_0(k_0, l_0, n_0, t);
                    e_2 = t;
                    t = b_2;
                    t = foldr_3_0(o_0, p_0, r_0, t);
                    if((e_2 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, c_2, b_2);
                    t = genzip_4_0(s_0, y_0, z_0, y_2, t);
                    u_0 = t;
                    t = SSL_mkterm(a_2, u_0);
                    ;
                    LocalPopChoice(y_9);
                  }
                else
                  {
                    t = x_9;
                    {
                      ATerm z_9 = t;
                      int a_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_2 = NULL,l_2 = NULL;
                          t = h_76(t);
                          if(match_cons(t, sym__2))
                            {
                              ATerm b_10 = ATgetArgument(t, 0);
                              if(match_cons(b_10, sym_Label_2))
                                {
                                  ATerm c_10 = ATgetArgument(b_10, 0);
                                  k_2 = ATgetArgument(b_10, 1);
                                }
                              else
                                _fail(t);
                              l_2 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
                          t = y_2(t);
                          ;
                          LocalPopChoice(a_10);
                        }
                      else
                        {
                          t = z_9;
                          {
                            ATerm d_10 = t;
                            int e_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_2 = NULL,o_2 = NULL;
                                t = h_76(t);
                                if(match_cons(t, sym__2))
                                  {
                                    n_2 = ATgetArgument(t, 0);
                                    {
                                      ATerm f_10 = ATgetArgument(t, 1);
                                      if(match_cons(f_10, sym_Label_2))
                                        {
                                          ATerm g_10 = ATgetArgument(f_10, 0);
                                          o_2 = ATgetArgument(f_10, 1);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, n_2, o_2);
                                t = y_2(t);
                                ;
                                LocalPopChoice(e_10);
                              }
                            else
                              {
                                t = d_10;
                                {
                                  ATerm p_2 = NULL,r_2 = NULL,s_2 = NULL;
                                  p_2 = t;
                                  if(match_cons(t, sym__2))
                                    {
                                      r_2 = ATgetArgument(t, 0);
                                      s_2 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm h_10 = t;
                                    int i_10 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_2;
                                        t = g_76(t);
                                        t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, r_2), (ATerm) ATmakeAppl(sym_amb2_1, s_2));
                                        ;
                                        LocalPopChoice(i_10);
                                      }
                                    else
                                      {
                                        t = h_10;
                                        t = (ATerm) ATmakeAppl(sym_amb_2, r_2, s_2);
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
  t = y_2(t);
  return(t);
}
ATerm LConstoCons_0_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm c_3 = NULL,i_3 = NULL,m_3 = NULL;
        if(match_cons(t, sym_LCons_3))
          {
            c_3 = ATgetArgument(t, 0);
            {
              ATerm t_10 = ATgetArgument(t, 1);
            }
            i_3 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_3;
        t = LConstoCons_0_0(t);
        m_3 = t;
        t = (ATerm) ATinsert(CheckATermList(m_3), c_3);
      }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm x_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = x_10;
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      {
        ATerm i_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = i_11;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_5, j_5);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = n_11;
        t = SSL_addr(i_5, j_5);
      }
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_5, m_5);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = q_11;
        t = SSL_addr(k_5, m_5);
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if(((ATgetType(v_11) != AT_LIST) || !(ATisEmpty(v_11))))
        _fail(t);
      {
        ATerm x_11 = ATgetArgument(t, 1);
        if(((ATgetType(x_11) != AT_LIST) || !(ATisEmpty(x_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
        {
          n_5 = ATgetFirst((ATermList) y_11);
          p_5 = (ATerm) ATgetNext((ATermList) y_11);
        }
      else
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
        if(((ATgetType(b_12) == AT_LIST) && !(ATisEmpty(b_12))))
          {
            o_5 = ATgetFirst((ATermList) b_12);
            q_5 = (ATerm) ATgetNext((ATermList) b_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_5, o_5), (ATerm) ATmakeAppl(sym__2, p_5, q_5));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_5), r_5);
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL;
      ATerm p_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          if(((t_5 != NULL) && (t_5 != t)))
            _fail(t);
          else
            t_5 = t;
          return(t);
        }
        t = Cons_2_0(q_1, r_1, t);
        return(t);
      }
      t = _2_0(o_1, p_1, t);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_5)), term_l_12);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm x_7 = NULL,y_7 = NULL;
        if(match_cons(t, sym__2))
          {
            x_7 = ATgetArgument(t, 0);
            y_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_7;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm m_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_7;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = x_7;
                  }
                else
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm w_12 = ATgetFirst((ATermList) t);
                        ATerm x_12 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = x_7;
                  }
                t = x_7;
                ;
                LocalPopChoice(v_12);
              }
            else
              {
                t = m_12;
                t = (ATerm) ATinsert(CheckATermList(y_7), x_7);
              }
          }
        else
          {
            t = (ATerm) ATinsert(CheckATermList(y_7), x_7);
          }
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm y_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL;
      ATerm b_13 = t;
      if((PushChoice() == 0))
        {
          ATerm k_8 = NULL;
          k_8 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = k_8;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_13 = ATgetFirst((ATermList) t);
                  ATerm k_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_8;
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_13;
        }
      h_8 = t;
      t = (ATerm) ATinsert(ATempty, h_8);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = y_12;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm laydiff_squash_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm e_4 = NULL;
    ATerm l_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(LConstoCons_0_0, LConstoCons_0_0, t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = l_13;
      }
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_4 = NULL,m_4 = NULL,n_4 = NULL,d_4 = NULL;
          k_4 = t;
          if(match_cons(t, sym__2))
            {
              m_4 = ATgetArgument(t, 0);
              n_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4;
          if((m_4 != t))
            {
              _fail(t);
            }
          t = SSL_explode_term(k_4);
          if(match_cons(t, sym__2))
            {
              ATerm d_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm g_14 = ATgetArgument(t, 1);
                if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
                  {
                    d_4 = ATgetFirst((ATermList) g_14);
                    {
                      ATerm m_14 = (ATerm) ATgetNext((ATermList) g_14);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = d_4;
          {
            ATerm p_14 = t;
            int r_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_14 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_14;
                  }
                t = term_l_12;
                ;
                LocalPopChoice(r_14);
              }
            else
              {
                t = p_14;
              }
          }
          ;
          LocalPopChoice(c_14);
        }
      else
        {
          t = b_14;
          {
            ATerm a_15 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(a_1, b_1, t);
                t = term_l_12;
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
                      ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,y_4 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL;
                      w_6 = t;
                      if(match_cons(t, sym__2))
                        {
                          x_6 = ATgetArgument(t, 0);
                          y_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(y_6);
                      if(match_cons(t, sym__2))
                        {
                          y_4 = ATgetArgument(t, 0);
                          d_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(x_6);
                      if(match_cons(t, sym__2))
                        {
                          if((y_4 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          f_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_5;
                      t = foldr_3_0(c_1, d_1, e_1, t);
                      g_5 = t;
                      t = d_5;
                      t = foldr_3_0(g_1, h_1, i_1, t);
                      if((g_5 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym__2, f_5, d_5);
                      t = genzip_4_0(j_1, k_1, l_1, p_7, t);
                      {
                        ATerm f_15 = t;
                        int l_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_n_15;
                            if((y_4 != t))
                              {
                                _fail(t);
                              }
                            t = term_s_15;
                            t = Cons_2_0(_id, m_1, t);
                            ;
                            LocalPopChoice(l_15);
                          }
                        else
                          {
                            t = f_15;
                            t = foldr_2_0(_id, n_1, t);
                          }
                        e_4 = t;
                        {
                          ATerm t_15 = t;
                          int u_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_n_15;
                              if((y_4 != t))
                                {
                                  _fail(t);
                                }
                              t = e_4;
                              t = Cons_2_0(_id, s_1, t);
                              ;
                              LocalPopChoice(u_15);
                            }
                          else
                            {
                              t = t_15;
                              {
                                ATerm v_15 = t;
                                int w_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Cons_2_0(t_1, u_1, t);
                                    t = term_l_12;
                                    ;
                                    LocalPopChoice(w_15);
                                  }
                                else
                                  {
                                    t = v_15;
                                    t = SSL_mkterm(y_4, e_4);
                                  }
                              }
                            }
                        }
                      }
                      ;
                      LocalPopChoice(d_15);
                    }
                  else
                    {
                      t = c_15;
                      {
                        ATerm x_15 = t;
                        int z_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_6 = NULL,a_7 = NULL;
                            t = l_76(t);
                            if(match_cons(t, sym__2))
                              {
                                ATerm a_16 = ATgetArgument(t, 0);
                                if(match_cons(a_16, sym_Label_2))
                                  {
                                    ATerm g_16 = ATgetArgument(a_16, 0);
                                    z_6 = ATgetArgument(a_16, 1);
                                  }
                                else
                                  _fail(t);
                                a_7 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, z_6, a_7);
                            t = p_7(t);
                            ;
                            LocalPopChoice(z_15);
                          }
                        else
                          {
                            t = x_15;
                            {
                              ATerm h_16 = t;
                              int i_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_7 = NULL,c_7 = NULL;
                                  t = l_76(t);
                                  if(match_cons(t, sym__2))
                                    {
                                      b_7 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_16 = ATgetArgument(t, 1);
                                        if(match_cons(n_16, sym_Label_2))
                                          {
                                            ATerm o_16 = ATgetArgument(n_16, 0);
                                            c_7 = ATgetArgument(n_16, 1);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, b_7, c_7);
                                  t = p_7(t);
                                  ;
                                  LocalPopChoice(i_16);
                                }
                              else
                                {
                                  t = h_16;
                                  {
                                    ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
                                    d_7 = t;
                                    if(match_cons(t, sym__2))
                                      {
                                        e_7 = ATgetArgument(t, 0);
                                        f_7 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    {
                                      ATerm q_16 = t;
                                      int s_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = d_7;
                                          t = k_76(t);
                                          t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, e_7), (ATerm) ATmakeAppl(sym_amb2_1, f_7));
                                          ;
                                          LocalPopChoice(s_16);
                                        }
                                      else
                                        {
                                          t = q_16;
                                          t = (ATerm) ATmakeAppl(sym_amb_2, e_7, f_7);
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
  t = p_7(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm printtopdiff_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_7);
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      {
        ATerm t_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_7);
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      {
        ATerm v_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, v_7), a_8);
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        ATerm z_16 = t;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL;
            b_8 = t;
            t = term_a_17;
            t = get_options_0_0(t);
            t = oncetd_1_0(w_1, t);
            t = b_8;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_16;
          }
        h_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, h_9), (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue))));
        t = h_9;
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
      }
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm) ATmakeInt(1));
    t = term_b_17;
  }
  return(t);
}
ATerm genzip_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_103(t);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = v_103(t);
        t = _2_0(x_103, f_8, t);
        t = w_103(t);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_86(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm j_8 = NULL,m_8 = NULL,r_8 = NULL,s_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_8 = ATgetFirst((ATermList) t);
            m_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_8;
        t = u_86(t);
        r_8 = t;
        t = m_8;
        t = foldr_3_0(s_86, t_86, u_86, t);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
        t = t_86(t);
      }
    }
  return(t);
}
ATerm L_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_L_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  t_8 = t;
  t = u_8;
  t = n_69(t);
  v_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_1, v_8), t_8);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = i_17;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm q_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = q_17;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm a_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_12, h_12);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = SSL_addr(a_12, h_12);
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_12, t_12);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = SSL_addr(s_12, t_12);
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if(((ATgetType(b_18) != AT_LIST) || !(ATisEmpty(b_18))))
        _fail(t);
      {
        ATerm e_18 = ATgetArgument(t, 1);
        if(((ATgetType(e_18) != AT_LIST) || !(ATisEmpty(e_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm u_12 = NULL,g_13 = NULL,m_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
        {
          u_12 = ATgetFirst((ATermList) j_18);
          m_13 = (ATerm) ATgetNext((ATermList) j_18);
        }
      else
        _fail(t);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
          {
            g_13 = ATgetFirst((ATermList) k_18);
            t_13 = (ATerm) ATgetNext((ATermList) k_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_12, g_13), (ATerm) ATmakeAppl(sym__2, m_13, t_13));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_14), e_14);
  return(t);
}
ATerm layeq_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm t)
{
  ATerm s_10 (ATerm t)
  {
    ATerm l_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,j_9 = NULL,l_9 = NULL;
        i_9 = t;
        if(match_cons(t, sym__2))
          {
            j_9 = ATgetArgument(t, 0);
            l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_9;
        if((j_9 != t))
          {
            _fail(t);
          }
        t = i_9;
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = l_18;
        {
          ATerm s_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(x_1, y_1, t);
              ;
              LocalPopChoice(w_18);
            }
          else
            {
              t = s_18;
              {
                ATerm x_18 = t;
                int a_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,w_11 = NULL;
                    l_10 = t;
                    if(match_cons(t, sym__2))
                      {
                        m_10 = ATgetArgument(t, 0);
                        n_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(n_10);
                    if(match_cons(t, sym__2))
                      {
                        r_11 = ATgetArgument(t, 0);
                        s_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(m_10);
                    if(match_cons(t, sym__2))
                      {
                        if((r_11 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        t_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = t_11;
                    t = foldr_3_0(z_1, f_2, t_2, t);
                    w_11 = t;
                    t = s_11;
                    t = foldr_3_0(u_2, v_2, x_2, t);
                    if((w_11 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, t_11, s_11);
                    t = genzip_4_0(z_2, b_3, d_3, s_10, t);
                    t = l_10;
                    ;
                    LocalPopChoice(a_19);
                  }
                else
                  {
                    t = x_18;
                    {
                      ATerm b_19 = t;
                      int c_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_10 = NULL,p_10 = NULL;
                          t = d_76(t);
                          if(match_cons(t, sym__2))
                            {
                              ATerm d_19 = ATgetArgument(t, 0);
                              if(match_cons(d_19, sym_Label_2))
                                {
                                  ATerm e_19 = ATgetArgument(d_19, 0);
                                  o_10 = ATgetArgument(d_19, 1);
                                }
                              else
                                _fail(t);
                              p_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
                          t = s_10(t);
                          ;
                          LocalPopChoice(c_19);
                        }
                      else
                        {
                          t = b_19;
                          {
                            ATerm h_19 = t;
                            int i_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_10 = NULL,r_10 = NULL;
                                t = d_76(t);
                                if(match_cons(t, sym__2))
                                  {
                                    q_10 = ATgetArgument(t, 0);
                                    {
                                      ATerm j_19 = ATgetArgument(t, 1);
                                      if(match_cons(j_19, sym_Label_2))
                                        {
                                          ATerm l_19 = ATgetArgument(j_19, 0);
                                          r_10 = ATgetArgument(j_19, 1);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
                                t = s_10(t);
                                ;
                                LocalPopChoice(i_19);
                              }
                            else
                              {
                                t = h_19;
                                t = c_76(t);
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
  t = s_10(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm printdiff_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, v_10), u_10);
  {
    ATerm m_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL;
        ATerm p_19 = t;
        if((PushChoice() == 0))
          {
            ATerm w_10 = NULL;
            w_10 = t;
            t = term_a_17;
            t = get_options_0_0(t);
            t = oncetd_1_0(h_3, t);
            t = w_10;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_19;
          }
        v_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, v_14), (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue))));
        t = v_14;
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = m_19;
      }
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm) ATmakeInt(1));
    t = term_b_17;
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm c_11 = NULL;
  if(match_cons(t, sym_Input2_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_NoPath_0)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_TopMost_0)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_SquashedPath_0)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = term_v_19;
  t = get_options_0_0(t);
  t = oncetd_1_0(q_3, t);
  t = o_11;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(!(match_cons(t, sym_UseAmbMark_0)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Path_0)))
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  t = term_v_19;
  t = get_options_0_0(t);
  t = oncetd_1_0(u_3, t);
  t = z_11;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if(!(match_cons(t, sym_UseAmbMark_0)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm ldiff_0_0 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,b_11 = NULL;
  y_10 = t;
  t = option_value_2_0(j_3, _fail, t);
  z_10 = t;
  t = SSL_access(z_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
  t = ReadFromFile_0_0(t);
  b_11 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_20;
        t = get_options_0_0(t);
        t = oncetd_1_0(k_3, t);
        t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)));
        t = (ATerm) ATmakeAppl(sym__2, y_10, b_11);
        t = layeq_2_0(printdiff_0_0, _id, t);
        {
          ATerm b_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_g_20;
              {
                ATerm h_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_11 = NULL,j_11 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        g_11 = ATgetArgument(t, 0);
                        j_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_table_get(g_11, j_11);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_20;
                  }
              }
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = b_20;
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
        }
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_20;
              t = get_options_0_0(t);
              t = oncetd_1_0(l_3, t);
              t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)));
              t = (ATerm) ATmakeAppl(sym__2, y_10, b_11);
              t = layeq_2_0(printtopdiff_0_0, _id, t);
              {
                ATerm p_20 = t;
                int q_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_20;
                    {
                      ATerm r_20 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm l_11 = NULL,m_11 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              l_11 = ATgetArgument(t, 0);
                              m_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSL_table_get(l_11, m_11);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = r_20;
                        }
                    }
                    ;
                    LocalPopChoice(q_20);
                  }
                else
                  {
                    t = p_20;
                    t = SSL_exit((ATerm) ATmakeInt(1));
                  }
              }
              ;
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              {
                ATerm u_20 = t;
                int v_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_20;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(o_3, t);
                    t = (ATerm) ATmakeAppl(sym__2, y_10, b_11);
                    t = laydiff_squash_2_0(p_3, _fail, t);
                    {
                      ATerm x_20 = t;
                      int e_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_21 = t;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                _fail(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = f_21;
                            }
                          {
                            ATerm j_21 = t;
                            int m_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_15 = NULL;
                                ATerm n_21 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_15 = NULL;
                                    i_15 = t;
                                    t = term_a_17;
                                    t = get_options_0_0(t);
                                    t = oncetd_1_0(r_3, t);
                                    t = i_15;
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = n_21;
                                  }
                                m_15 = t;
                                t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, m_15), (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue))));
                                t = m_15;
                                ;
                                LocalPopChoice(m_21);
                              }
                            else
                              {
                                t = j_21;
                              }
                            t = SSL_exit((ATerm) ATmakeInt(1));
                          }
                          ;
                          LocalPopChoice(e_21);
                        }
                      else
                        {
                          t = x_20;
                        }
                    }
                    ;
                    LocalPopChoice(v_20);
                  }
                else
                  {
                    t = u_20;
                    t = term_o_21;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(s_3, t);
                    t = (ATerm) ATmakeAppl(sym__2, y_10, b_11);
                    t = laydiff_2_0(t_3, _fail, t);
                    {
                      ATerm p_21 = t;
                      int q_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_21 = t;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                _fail(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = r_21;
                            }
                          {
                            ATerm w_21 = t;
                            int x_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_16 = NULL;
                                ATerm y_21 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_15 = NULL;
                                    y_15 = t;
                                    t = term_a_17;
                                    t = get_options_0_0(t);
                                    t = oncetd_1_0(v_3, t);
                                    t = y_15;
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = y_21;
                                  }
                                j_16 = t;
                                t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, j_16), (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue))));
                                t = j_16;
                                ;
                                LocalPopChoice(x_21);
                              }
                            else
                              {
                                t = w_21;
                              }
                            t = SSL_exit((ATerm) ATmakeInt(1));
                          }
                          ;
                          LocalPopChoice(q_21);
                        }
                      else
                        {
                          t = p_21;
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
ATerm _2_0 (ATerm v_64 (ATerm), ATerm w_64 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  e_12 = t;
  t = f_12;
  t = v_64(t);
  i_12 = t;
  t = g_12;
  t = w_64(t);
  j_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_12, j_12), e_12);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  n_12 = t;
  t = dtime_0_0(t);
  t = n_12;
  t = z_96(t);
  o_12 = t;
  t = dtime_0_0(t);
  p_12 = t;
  t = o_12;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_12), (ATerm) ATmakeAppl(sym_Runtime_1, p_12)), r_12);
  return(t);
}
ATerm f_13 (ATerm z_12, ATerm t)
{
  t = SSL_fclose(z_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm z_21 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_13);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = z_21;
            t = f_13(d_13, t);
          }
      }
    }
  else
    {
      t = f_13(d_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stdin_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = SSL_stdout_stream();
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_13 = NULL;
  t = SSL_stderr_stream();
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_13);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm r_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  t = SSL_is_string(w_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      ATerm g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,y_18 = NULL;
        t_18 = t;
        t = SSL_explode_term(t_18);
        if(match_cons(t, sym__2))
          {
            ATerm j_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_22 = ATgetArgument(t, 1);
              if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
                {
                  y_18 = ATgetFirst((ATermList) k_22);
                  {
                    ATerm l_22 = (ATerm) ATgetNext((ATermList) k_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_18;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_18;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_18;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_18;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
              t = _2_0(w_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_13 = ATgetArgument(t, 0);
                  p_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(o_13, p_13);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_13);
              ;
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              {
                ATerm s_13 = NULL,u_13 = NULL,v_13 = NULL;
                t = _2_0(x_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_13 = ATgetArgument(t, 0);
                    u_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(s_13, u_13);
                v_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  ATerm o_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_14, term_r_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = o_22;
      {
        ATerm z_18 = NULL;
        z_18 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_18), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = z_18;
        _fail(t);
      }
    }
  x_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_13);
  y_13 = t;
  t = x_13;
  t = fclose_0_0(t);
  t = y_13;
  return(t);
}
ATerm fetch_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm s_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_88, _id, t);
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = s_22;
        t = Cons_2_0(_id, h_14, t);
      }
    return(t);
  }
  t = h_14(t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm i_14 = NULL;
  ATerm y_3 (ATerm t)
  {
    t = m_88(t);
    if(((i_14 != NULL) && (i_14 != t)))
      _fail(t);
    else
      i_14 = t;
    return(t);
  }
  t = fetch_1_0(y_3, t);
  t = not_null(i_14);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm option_value_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(b_97, t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      t = c_97(t);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm l_14 = NULL;
  if(match_cons(t, sym_Program_1))
    {
      l_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14;
  return(t);
}
ATerm my_usage_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  t = option_value_2_0(z_3, _fail, t);
  k_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue))), k_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue))), k_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = j_14;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  if(match_string(t, "-k"))
    {
      t = n_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_14;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm o_14 = NULL,q_14 = NULL;
  o_14 = t;
  t = SSL_string_to_int(o_14);
  q_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_14);
  t = o_14;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  if(match_string(t, "-S"))
    {
      t = s_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_14;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_z_22;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  t = SSL_string_to_int(t_14);
  u_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_14);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_23;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, h_4, t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, j_4, l_4, t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = Option_3_0(o_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_14 = NULL;
      t = term_b_17;
      t = d_0(t);
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_23, term_m_23, z_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_14 = ATgetFirst((ATermList) t);
          y_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_14;
      t = a_0(t);
      t = term_b_17;
      t = b_0(t);
      e_15 = t;
      t = (ATerm) ATinsert(CheckATermList(y_14), e_15);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  if(match_string(t, "-o"))
    {
      t = g_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_15;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm h_15 = NULL;
  h_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_15);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_15);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  if(match_string(t, "-i"))
    {
      t = j_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_15;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_15);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__3))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      q_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_15, p_15);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
    r_15 = t;
    t = SSL_table_put(o_15, p_15, (ATerm) ATinsert(CheckATermList(r_15), q_15));
    t = (ATerm) ATmakeAppl(sym__3, o_15, p_15, q_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_16 = NULL;
      t = term_b_17;
      t = j_0(t);
      f_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_23, term_m_23, f_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_16 = ATgetFirst((ATermList) t);
          e_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_16;
      t = h_0(t);
      t = d_16;
      t = i_0(t);
      k_16 = t;
      t = (ATerm) ATinsert(CheckATermList(e_16), k_16);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i2", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Input2_1, l_16);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--path", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--squashedpath", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nopath", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--topmost", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--useambmark", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm ops_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_4, z_4, a_5, t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_5, c_5, e_5, t);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_5, l_5, u_5, t);
                  ;
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  {
                    ATerm b_24 = t;
                    int c_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_5, w_5, x_5, t);
                        ;
                        LocalPopChoice(c_24);
                      }
                    else
                      {
                        t = b_24;
                        {
                          ATerm d_24 = t;
                          int e_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(y_5, z_5, a_6, t);
                              ;
                              LocalPopChoice(e_24);
                            }
                          else
                            {
                              t = d_24;
                              t = Option_3_0(b_6, c_6, d_6, t);
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
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_17;
  t = whoami_0_0(t);
  m_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL;
        t = eval_config_0_0(t);
        k_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_19);
        t = k_19;
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_86(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm p_16 = NULL,r_16 = NULL,u_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_16 = ATgetFirst((ATermList) t);
            r_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_16;
        t = foldr_2_0(q_86, r_86, t);
        u_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, u_16);
        t = r_86(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_20 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(f_20, g_21);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = SSL_addr(f_20, g_21);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_16 = NULL,n_19 = NULL,r_19 = NULL;
  t = times_0_0(t);
  n_19 = t;
  t = SSL_explode_term(n_19);
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_19;
  t = foldr_2_0(e_6, f_6, t);
  x_16 = t;
  t = SSL_TicksToSeconds(x_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_17;
        if((k_17 != t))
          {
            _fail(t);
          }
        t = j_17;
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = j_17;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_17, l_17);
              ;
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              t = SSL_gtr(k_17, l_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL,r_17 = NULL;
      p_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_22 = NULL;
            t = eval_config_0_0(t);
            p_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_22);
            t = p_22;
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
          }
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_17, term_c_9);
        t = geq_0_0(t);
        t = p_17;
        t = y_94(t);
      }
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  t = run_time_0_0(t);
  t_17 = t;
  t = term_b_17;
  t = whoami_0_0(t);
  u_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_17));
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_24), t_17), term_w_24), u_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm z_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = z_24;
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = NULL;
            t = eval_config_0_0(t);
            t_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_22);
            t = t_22;
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
          }
      }
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = fetch_1_0(h_6, t);
    }
  t = x_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_18 = NULL,d_18 = NULL;
        t = y_17;
        t = g_0(t);
        c_18 = t;
        t = x_17;
        t = f_0(t);
        d_18 = t;
        t = y_17;
        {
          ATerm i_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_18), d_18);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm q_75 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_18);
  f_18 = t;
  t = g_18;
  t = q_75(t);
  h_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_18), f_18);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_18), term_i_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_22 = NULL;
            t = eval_config_0_0(t);
            x_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_22);
            t = x_22;
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
          }
      }
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      t = fetch_1_0(j_6, t);
    }
  t = term_n_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, k_6, t);
  t = map_1_0(l_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  q_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  n_18 = t;
  t = o_18;
  t = r_75(t);
  p_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_18), n_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_25 = ATgetFirst((ATermList) t);
                ATerm r_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_18;
          }
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATinsert(ATempty, u_18);
      }
    v_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_18);
    t = u_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = eval_config_0_0(t);
        b_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_23);
        t = b_23;
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm f_19 = NULL,g_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_19 = ATgetFirst((ATermList) t);
            g_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_19;
        {
          ATerm m_6 (ATerm t)
          {
            t = g_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm q_19 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_19, t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_88(t);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_explode_string(t_19);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_explode_string(u_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_19 = NULL;
  t = _2_0(n_6, o_6, t);
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL,x_19 = NULL;
        if(match_cons(t, sym__2))
          {
            w_19 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_19;
        {
          ATerm p_6 (ATerm t)
          {
            t = x_19;
            return(t);
          }
          t = at_end_1_0(p_6, t);
        }
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        {
          ATerm e_23 = NULL,f_23 = NULL;
          e_23 = t;
          t = SSL_explode_term(e_23);
          if(match_cons(t, sym__2))
            {
              ATerm a_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_23;
          t = concat_0_0(t);
        }
      }
    s_19 = t;
    t = SSL_implode_string(s_19);
  }
  return(t);
}
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = Cons_2_0(z_87, c_20, t);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL;
      i_20 = t;
      t = SSL_is_string(i_20);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_6, t);
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            {
              ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
              m_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_20 = ATgetArgument(t, 0);
                  t = n_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_20 = ATgetArgument(t, 0);
                      t = n_20;
                      {
                        ATerm j_26 = t;
                        int k_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_20);
                            {
                              ATerm l_26 = t;
                              int m_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_23 = NULL;
                                  t = eval_config_0_0(t);
                                  y_23 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_20, y_23);
                                  t = y_23;
                                  ;
                                  LocalPopChoice(m_26);
                                }
                              else
                                {
                                  t = l_26;
                                }
                            }
                            ;
                            LocalPopChoice(k_26);
                          }
                        else
                          {
                            t = j_26;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_20 = NULL,t_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_20 = ATgetArgument(t, 0);
                          o_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_20;
                      t = eval_config_0_0(t);
                      s_20 = t;
                      t = o_20;
                      t = eval_config_0_0(t);
                      t_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_26;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_26;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, s_6, t_6, t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = Option_3_0(u_6, v_6, g_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  d_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_20 = ATgetFirst((ATermList) t);
      a_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_21);
  y_20 = t;
  t = z_20;
  t = k_69(t);
  b_21 = t;
  t = a_21;
  t = l_69(t);
  c_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_21), b_21), y_20);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_21);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_26;
        t = a_100(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
      }
    t = h_21;
    {
      ATerm i_7 (ATerm t)
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = a_100(t);
                t = Cons_2_0(_id, i_7, t);
              }
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm k_21 = NULL,l_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_21 = ATgetFirst((ATermList) t);
                  l_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_21), (ATerm) ATmakeAppl(sym_Undefined_1, k_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_7, i_7, t);
    }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_string(t, "--help"))
    {
      t = v_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_21;
        }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_27;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm n_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_21;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_99(t);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, l_7, m_7, t);
                ;
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_7, t);
    {
      ATerm i_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = NULL;
          a_22 = t;
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_22;
                {
                  ATerm m_27 = t;
                  int n_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm o_27 = t;
                        int p_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_24 = NULL;
                            t = eval_config_0_0(t);
                            q_24 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_24);
                            t = q_24;
                            ;
                            LocalPopChoice(p_27);
                          }
                        else
                          {
                            t = o_27;
                          }
                      }
                      ;
                      LocalPopChoice(n_27);
                    }
                  else
                    {
                      t = m_27;
                      t = fetch_1_0(n_7, t);
                    }
                  t = a_22;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm q_27 = t;
                  int r_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_24 = NULL;
                      t = eval_config_0_0(t);
                      x_24 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_24);
                      t = x_24;
                      ;
                      LocalPopChoice(r_27);
                    }
                  else
                    {
                      t = q_27;
                    }
                  t = a_22;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(j_27);
        }
      else
        {
          t = i_27;
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm q_7 (ATerm t)
                  {
                    if(((t_21 != NULL) && (t_21 != t)))
                      _fail(t);
                    else
                      t_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_7, t);
                  return(t);
                }
                t = fetch_1_0(o_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_v_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_21)), term_u_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
              }
          }
        }
      u_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  t = parse_options_1_0(z_97, t);
  d_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_22);
  t = d_22;
  t = b_98(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_98, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ops_0_0(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = d_28;
                  {
                    ATerm f_28 = t;
                    int g_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_7, z_7, c_8, t);
                        ;
                        LocalPopChoice(g_28);
                      }
                    else
                      {
                        t = f_28;
                        {
                          ATerm h_28 = t;
                          int i_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(i_28);
                            }
                          else
                            {
                              t = h_28;
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
ATerm s_7 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,a_25 = NULL;
  e_22 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((f_22 != NULL) && (f_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_8, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = term_l_28;
        f_22 = t;
      }
    t = not_null(f_22);
    t = ReadFromFile_0_0(t);
    a_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_22, a_25);
    t = apply_strategy_1_0(e_8, t);
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_28;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = _2_0(_id, ldiff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_7, my_usage_0_0, _id, s_7, t);
  return(t);
}
