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
ATerm term_t_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_e_15;
ATerm term_y_14;
ATerm term_h_14;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_o_10;
ATerm term_h_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_l_7;
ATerm term_d_7;
ATerm term_x_3;
void init_constant_terms (void)
{
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_l_11);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_k_17);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_14);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__3, term_q_22, term_r_22, term_h_8);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm my_usage_0_0 (ATerm);
ATerm Option_2_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm);
ATerm ArgOption_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm);
ATerm ops_0_0 (ATerm);
ATerm echo_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm try_echo_1_0 (ATerm i_69 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm is_subterm_0_0 (ATerm);
ATerm check_option_0_0 (ATerm);
ATerm has_option_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm laydiff_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm laydiff_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm LConstoCons_0_0 (ATerm);
ATerm laydiff_squash_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm);
ATerm laydiff_squash_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm printtopdiff_0_0 (ATerm);
ATerm genzip_4_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm zip_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm L_1_0 (ATerm v_62 (ATerm), ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm layeq_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm);
ATerm printdiff_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm option_value_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm);
ATerm ldiff_0_0 (ATerm);
ATerm _2_0 (ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_93 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm);
ATerm iowrapNoOutput_3_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm my_usage_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  v_0 = t;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm x_0 = NULL;
      if(match_cons(t, sym_Program_1))
        {
          x_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_0;
      return(t);
    }
    t = option_value_2_0(b_0, _fail, t);
    w_0 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue))), w_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue))), w_0));
    t = SSL_exit((ATerm) ATmakeInt(1));
    t = v_0;
  }
  return(t);
}
ATerm Option_2_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_x_3;
    return(t);
  }
  t = Option_3_0(g_92, h_92, f_0, t);
  return(t);
}
ATerm ArgOption_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    t = term_x_3;
    return(t);
  }
  t = ArgOption_3_0(u_92, v_92, k_0, t);
  return(t);
}
ATerm ops_0_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_0 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i2", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm y_0 = NULL;
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym_Input2_1, y_0);
        return(t);
      }
      t = ArgOption_2_0(l_0, n_0, t);
      ;
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm b_7 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--path", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = term_d_7;
              return(t);
            }
            t = Option_2_0(o_0, p_0, t);
            ;
            LocalPopChoice(c_7);
          }
        else
          {
            t = b_7;
            {
              ATerm e_7 = t;
              int f_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_0 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--squashedpath", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  ATerm t_0 (ATerm t)
                  {
                    t = term_l_7;
                    return(t);
                  }
                  t = Option_2_0(s_0, t_0, t);
                  ;
                  LocalPopChoice(f_7);
                }
              else
                {
                  t = e_7;
                  {
                    ATerm m_7 = t;
                    int r_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_0 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nopath", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_1 (ATerm t)
                        {
                          t = term_s_7;
                          return(t);
                        }
                        t = Option_2_0(u_0, f_1, t);
                        ;
                        LocalPopChoice(r_7);
                      }
                    else
                      {
                        t = m_7;
                        {
                          ATerm t_7 = t;
                          int u_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_1 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--topmost", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm p_1 (ATerm t)
                              {
                                t = term_w_7;
                                return(t);
                              }
                              t = Option_2_0(i_1, p_1, t);
                              ;
                              LocalPopChoice(u_7);
                            }
                          else
                            {
                              t = t_7;
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--useambmark", 0, ATtrue)))
                                    _fail(t);
                                  return(t);
                                }
                                ATerm r_1 (ATerm t)
                                {
                                  t = term_x_7;
                                  return(t);
                                }
                                t = Option_2_0(q_1, r_1, t);
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
ATerm echo_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  z_0 = t;
  t = c_86(t);
  a_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATempty, z_0), a_1));
  t = z_0;
  return(t);
}
ATerm try_echo_1_0 (ATerm i_69 (ATerm), ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm y_7 = t;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          t = term_z_7;
          return(t);
        }
        t = has_option_1_0(u_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_7;
      }
    t = echo_1_0(i_69, t);
    return(t);
  }
  t = try_1_0(s_1, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm a_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        ;
        LocalPopChoice(c_8);
      }
    else
      {
        t = a_8;
        t = SRTS_one(b_1, t);
      }
    return(t);
  }
  t = b_1(t);
  return(t);
}
ATerm is_subterm_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  {
    ATerm v_1 (ATerm t)
    {
      if((c_1 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = oncetd_1_0(v_1, t);
    t = (ATerm) ATmakeAppl(sym__2, c_1, d_1);
  }
  return(t);
}
ATerm check_option_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  e_1 = t;
  t = get_options_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, g_1);
  t = is_subterm_0_0(t);
  t = term_h_8;
  return(t);
}
ATerm has_option_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  t = term_h_8;
  t = e_90(t);
  t = check_option_0_0(t);
  t = h_1;
  return(t);
}
ATerm laydiff_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm n_1 = NULL;
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 = NULL,w_1 = NULL,a_2 = NULL,m_0 = NULL;
        o_1 = t;
        if(match_cons(t, sym__2))
          {
            w_1 = ATgetArgument(t, 0);
            a_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_2;
        if((w_1 != t))
          {
            _fail(t);
          }
        t = SSL_explode_term(o_1);
        if(match_cons(t, sym__2))
          {
            ATerm m_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_8 = ATgetArgument(t, 1);
              if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                {
                  m_0 = ATgetFirst((ATermList) r_8);
                  {
                    ATerm s_8 = (ATerm) ATgetNext((ATermList) r_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_0;
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL,r_0 = NULL;
              t = _2_0(is_layout_0_0, is_layout_0_0, t);
              q_0 = t;
              t = SSL_explode_term(q_0);
              if(match_cons(t, sym__2))
                {
                  ATerm b_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm c_9 = ATgetArgument(t, 1);
                    if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
                      {
                        r_0 = ATgetFirst((ATermList) c_9);
                        {
                          ATerm e_9 = (ATerm) ATgetNext((ATermList) c_9);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = r_0;
              ;
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              {
                ATerm i_9 = t;
                int j_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
                    r_2 = t;
                    if(match_cons(t, sym__2))
                      {
                        s_2 = ATgetArgument(t, 0);
                        t_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(t_2);
                    if(match_cons(t, sym__2))
                      {
                        j_1 = ATgetArgument(t, 0);
                        k_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(s_2);
                    if(match_cons(t, sym__2))
                      {
                        if((j_1 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        l_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = l_1;
                    t = length_0_0(t);
                    m_1 = t;
                    t = k_1;
                    t = length_0_0(t);
                    if((m_1 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, l_1, k_1);
                    t = zip_1_0(m_3, t);
                    n_1 = t;
                    t = SSL_mkterm(j_1, n_1);
                    ;
                    LocalPopChoice(j_9);
                  }
                else
                  {
                    t = i_9;
                    {
                      ATerm k_9 = t;
                      int l_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_2 = NULL,x_2 = NULL;
                          t = p_69(t);
                          if(match_cons(t, sym__2))
                            {
                              ATerm m_9 = ATgetArgument(t, 0);
                              if(match_cons(m_9, sym_Label_2))
                                {
                                  ATerm n_9 = ATgetArgument(m_9, 0);
                                  u_2 = ATgetArgument(m_9, 1);
                                }
                              else
                                _fail(t);
                              x_2 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, u_2, x_2);
                          t = m_3(t);
                          ;
                          LocalPopChoice(l_9);
                        }
                      else
                        {
                          t = k_9;
                          {
                            ATerm o_9 = t;
                            int p_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_2 = NULL,a_3 = NULL;
                                t = p_69(t);
                                if(match_cons(t, sym__2))
                                  {
                                    z_2 = ATgetArgument(t, 0);
                                    {
                                      ATerm t_9 = ATgetArgument(t, 1);
                                      if(match_cons(t_9, sym_Label_2))
                                        {
                                          ATerm u_9 = ATgetArgument(t_9, 0);
                                          a_3 = ATgetArgument(t_9, 1);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, z_2, a_3);
                                t = m_3(t);
                                ;
                                LocalPopChoice(p_9);
                              }
                            else
                              {
                                t = o_9;
                                {
                                  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
                                  b_3 = t;
                                  if(match_cons(t, sym__2))
                                    {
                                      c_3 = ATgetArgument(t, 0);
                                      d_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm v_9 = t;
                                    int w_9 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = b_3;
                                        t = o_69(t);
                                        t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, c_3), (ATerm) ATmakeAppl(sym_amb2_1, d_3));
                                        ;
                                        LocalPopChoice(w_9);
                                      }
                                    else
                                      {
                                        t = v_9;
                                        t = (ATerm) ATmakeAppl(sym_amb_2, c_3, d_3);
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
  t = m_3(t);
  return(t);
}
ATerm laydiff_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  t = laydiff_2_0(n_69, _fail, t);
  return(t);
}
ATerm LConstoCons_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm r_3 = NULL,t_3 = NULL,w_3 = NULL;
        if(match_cons(t, sym_LCons_3))
          {
            r_3 = ATgetArgument(t, 0);
            {
              ATerm z_9 = ATgetArgument(t, 1);
            }
            t_3 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_3;
        t = LConstoCons_0_0(t);
        w_3 = t;
        t = (ATerm) ATinsert(CheckATermList(w_3), r_3);
      }
    }
  return(t);
}
ATerm laydiff_squash_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm y_4 = NULL;
    ATerm x_1 (ATerm t)
    {
      t = _2_0(LConstoCons_0_0, LConstoCons_0_0, t);
      return(t);
    }
    t = try_1_0(x_1, t);
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 = NULL,e_5 = NULL,g_5 = NULL,t_1 = NULL;
          c_5 = t;
          if(match_cons(t, sym__2))
            {
              e_5 = ATgetArgument(t, 0);
              g_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_5;
          if((e_5 != t))
            {
              _fail(t);
            }
          t = SSL_explode_term(c_5);
          if(match_cons(t, sym__2))
            {
              ATerm c_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm d_10 = ATgetArgument(t, 1);
                if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
                  {
                    t_1 = ATgetFirst((ATermList) d_10);
                    {
                      ATerm e_10 = (ATerm) ATgetNext((ATermList) d_10);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = t_1;
          {
            ATerm y_1 (ATerm t)
            {
              ATerm f_10 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_10;
                }
              t = term_o_10;
              return(t);
            }
            t = try_1_0(y_1, t);
          }
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          {
            ATerm q_10 = t;
            int s_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(is_layout_0_0, is_layout_0_0, t);
                t = term_o_10;
                ;
                LocalPopChoice(s_10);
              }
            else
              {
                t = q_10;
                {
                  ATerm t_10 = t;
                  int u_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_7 = NULL,h_7 = NULL,p_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          g_7 = ATgetArgument(t, 0);
                          h_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(h_7);
                      if(match_cons(t, sym__2))
                        {
                          p_2 = ATgetArgument(t, 0);
                          v_2 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(g_7);
                      if(match_cons(t, sym__2))
                        {
                          if((p_2 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          w_2 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_2;
                      t = length_0_0(t);
                      y_2 = t;
                      t = v_2;
                      t = length_0_0(t);
                      if((y_2 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym__2, w_2, v_2);
                      t = zip_1_0(v_7, t);
                      {
                        ATerm c_11 = t;
                        int k_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_l_11;
                            if((p_2 != t))
                              {
                                _fail(t);
                              }
                            t = term_m_11;
                            {
                              ATerm z_1 (ATerm t)
                              {
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                return(t);
                              }
                              t = Cons_2_0(_id, z_1, t);
                            }
                            ;
                            LocalPopChoice(k_11);
                          }
                        else
                          {
                            t = c_11;
                            {
                              ATerm b_2 (ATerm t)
                              {
                                ATerm s_11 = t;
                                int t_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_3 = NULL;
                                    ATerm c_2 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm d_2 (ATerm t)
                                    {
                                      ATerm e_2 (ATerm t)
                                      {
                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                          _fail(t);
                                        return(t);
                                      }
                                      ATerm f_2 (ATerm t)
                                      {
                                        g_3 = t;
                                        return(t);
                                      }
                                      t = Cons_2_0(e_2, f_2, t);
                                      return(t);
                                    }
                                    t = _2_0(c_2, d_2, t);
                                    t = (ATerm) ATinsert(CheckATermList(not_null(g_3)), term_o_10);
                                    ;
                                    LocalPopChoice(t_11);
                                  }
                                else
                                  {
                                    t = s_11;
                                    {
                                      ATerm a_4 = NULL,b_4 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          a_4 = ATgetArgument(t, 0);
                                          b_4 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = b_4;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          ATerm u_11 = t;
                                          int v_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = a_4;
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = a_4;
                                                }
                                              else
                                                {
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm w_11 = ATgetFirst((ATermList) t);
                                                      ATerm x_11 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_4;
                                                }
                                              t = a_4;
                                              ;
                                              LocalPopChoice(v_11);
                                            }
                                          else
                                            {
                                              t = u_11;
                                              t = (ATerm) ATinsert(CheckATermList(b_4), a_4);
                                            }
                                        }
                                      else
                                        {
                                          t = (ATerm) ATinsert(CheckATermList(b_4), a_4);
                                        }
                                    }
                                  }
                                return(t);
                              }
                              t = foldr_2_0(_id, b_2, t);
                            }
                          }
                        y_4 = t;
                        {
                          ATerm y_11 = t;
                          int a_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_l_11;
                              if((p_2 != t))
                                {
                                  _fail(t);
                                }
                              t = y_4;
                              {
                                ATerm g_2 (ATerm t)
                                {
                                  ATerm h_2 (ATerm t)
                                  {
                                    ATerm g_4 = NULL;
                                    ATerm b_12 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_4 = NULL;
                                        h_4 = t;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = h_4;
                                          }
                                        else
                                          {
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm e_12 = ATgetFirst((ATermList) t);
                                                ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = h_4;
                                          }
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = b_12;
                                      }
                                    g_4 = t;
                                    t = (ATerm) ATinsert(ATempty, g_4);
                                    return(t);
                                  }
                                  t = try_1_0(h_2, t);
                                  return(t);
                                }
                                t = Cons_2_0(_id, g_2, t);
                              }
                              ;
                              LocalPopChoice(a_12);
                            }
                          else
                            {
                              t = y_11;
                              {
                                ATerm l_12 = t;
                                int m_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm j_2 (ATerm t)
                                    {
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      return(t);
                                    }
                                    t = Cons_2_0(i_2, j_2, t);
                                    t = term_o_10;
                                    ;
                                    LocalPopChoice(m_12);
                                  }
                                else
                                  {
                                    t = l_12;
                                    t = SSL_mkterm(p_2, y_4);
                                  }
                              }
                            }
                        }
                      }
                      ;
                      LocalPopChoice(u_10);
                    }
                  else
                    {
                      t = t_10;
                      {
                        ATerm n_12 = t;
                        int o_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_7 = NULL,j_7 = NULL;
                            t = t_69(t);
                            if(match_cons(t, sym__2))
                              {
                                ATerm b_13 = ATgetArgument(t, 0);
                                if(match_cons(b_13, sym_Label_2))
                                  {
                                    ATerm h_13 = ATgetArgument(b_13, 0);
                                    i_7 = ATgetArgument(b_13, 1);
                                  }
                                else
                                  _fail(t);
                                j_7 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, i_7, j_7);
                            t = v_7(t);
                            ;
                            LocalPopChoice(o_12);
                          }
                        else
                          {
                            t = n_12;
                            {
                              ATerm l_13 = t;
                              int p_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_7 = NULL,n_7 = NULL;
                                  t = t_69(t);
                                  if(match_cons(t, sym__2))
                                    {
                                      k_7 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_13 = ATgetArgument(t, 1);
                                        if(match_cons(s_13, sym_Label_2))
                                          {
                                            ATerm t_13 = ATgetArgument(s_13, 0);
                                            n_7 = ATgetArgument(s_13, 1);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, k_7, n_7);
                                  t = v_7(t);
                                  ;
                                  LocalPopChoice(p_13);
                                }
                              else
                                {
                                  t = l_13;
                                  {
                                    ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
                                    o_7 = t;
                                    if(match_cons(t, sym__2))
                                      {
                                        p_7 = ATgetArgument(t, 0);
                                        q_7 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    {
                                      ATerm z_13 = t;
                                      int a_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = o_7;
                                          t = s_69(t);
                                          t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, p_7), (ATerm) ATmakeAppl(sym_amb2_1, q_7));
                                          ;
                                          LocalPopChoice(a_14);
                                        }
                                      else
                                        {
                                          t = z_13;
                                          t = (ATerm) ATmakeAppl(sym_amb_2, p_7, q_7);
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
  t = v_7(t);
  return(t);
}
ATerm laydiff_squash_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  t = laydiff_squash_2_0(r_69, _fail, t);
  return(t);
}
ATerm printtopdiff_0_0 (ATerm t)
{
  ATerm b_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_8);
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      {
        ATerm b_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(b_8);
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm d_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, e_8), f_8);
  {
    ATerm k_2 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = try_echo_1_0(k_2, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm) ATmakeInt(1));
    t = term_h_8;
  }
  return(t);
}
ATerm genzip_4_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm i_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_96(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = i_14;
        t = z_96(t);
        t = _2_0(b_97, g_8, t);
        t = a_97(t);
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm zip_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm m_14 = ATgetArgument(t, 0);
        if(((ATgetType(m_14) != AT_LIST) || !(ATisEmpty(m_14))))
          _fail(t);
        {
          ATerm t_14 = ATgetArgument(t, 1);
          if(((ATgetType(t_14) != AT_LIST) || !(ATisEmpty(t_14))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm k_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_14 = ATgetArgument(t, 0);
        if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
          {
            k_8 = ATgetFirst((ATermList) u_14);
            n_8 = (ATerm) ATgetNext((ATermList) u_14);
          }
        else
          _fail(t);
        {
          ATerm v_14 = ATgetArgument(t, 1);
          if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
            {
              l_8 = ATgetFirst((ATermList) v_14);
              o_8 = (ATerm) ATgetNext((ATermList) v_14);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_8, l_8), (ATerm) ATmakeAppl(sym__2, n_8, o_8));
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm p_8 = NULL,q_8 = NULL;
    if(match_cons(t, sym__2))
      {
        p_8 = ATgetArgument(t, 0);
        q_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(q_8), p_8);
    return(t);
  }
  t = genzip_4_0(l_2, m_2, n_2, d_97, t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_80(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm t_8 = NULL,u_8 = NULL,x_8 = NULL,y_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_8 = ATgetFirst((ATermList) t);
            u_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_8;
        t = c_80(t);
        x_8 = t;
        t = u_8;
        t = foldr_3_0(a_80, b_80, c_80, t);
        y_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
        t = b_80(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    t = term_y_14;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm z_8 = NULL,a_9 = NULL;
    if(match_cons(t, sym__2))
      {
        z_8 = ATgetArgument(t, 0);
        a_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(z_8, a_9);
          ;
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          t = SSL_addr(z_8, a_9);
        }
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  t = foldr_3_0(o_2, q_2, e_3, t);
  return(t);
}
ATerm L_1_0 (ATerm v_62 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_L_1))
    {
      f_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_9);
  d_9 = t;
  t = f_9;
  t = v_62(t);
  g_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_1, g_9), d_9);
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm f_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = f_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm layeq_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
        q_9 = t;
        if(match_cons(t, sym__2))
          {
            r_9 = ATgetArgument(t, 0);
            s_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_9;
        if((r_9 != t))
          {
            _fail(t);
          }
        t = q_9;
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm r_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(is_layout_0_0, is_layout_0_0, t);
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = r_15;
              {
                ATerm z_15 = t;
                int a_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
                    g_10 = t;
                    if(match_cons(t, sym__2))
                      {
                        h_10 = ATgetArgument(t, 0);
                        i_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(i_10);
                    if(match_cons(t, sym__2))
                      {
                        x_4 = ATgetArgument(t, 0);
                        z_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(h_10);
                    if(match_cons(t, sym__2))
                      {
                        if((x_4 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        a_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_5;
                    t = length_0_0(t);
                    b_5 = t;
                    t = z_4;
                    t = length_0_0(t);
                    if((b_5 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, a_5, z_4);
                    t = zip_1_0(n_10, t);
                    t = g_10;
                    ;
                    LocalPopChoice(a_16);
                  }
                else
                  {
                    t = z_15;
                    {
                      ATerm g_16 = t;
                      int h_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_10 = NULL,k_10 = NULL;
                          t = l_69(t);
                          if(match_cons(t, sym__2))
                            {
                              ATerm i_16 = ATgetArgument(t, 0);
                              if(match_cons(i_16, sym_Label_2))
                                {
                                  ATerm k_16 = ATgetArgument(i_16, 0);
                                  j_10 = ATgetArgument(i_16, 1);
                                }
                              else
                                _fail(t);
                              k_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, j_10, k_10);
                          t = n_10(t);
                          ;
                          LocalPopChoice(h_16);
                        }
                      else
                        {
                          t = g_16;
                          {
                            ATerm n_16 = t;
                            int o_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_10 = NULL,m_10 = NULL;
                                t = l_69(t);
                                if(match_cons(t, sym__2))
                                  {
                                    l_10 = ATgetArgument(t, 0);
                                    {
                                      ATerm p_16 = ATgetArgument(t, 1);
                                      if(match_cons(p_16, sym_Label_2))
                                        {
                                          ATerm q_16 = ATgetArgument(p_16, 0);
                                          m_10 = ATgetArgument(p_16, 1);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, l_10, m_10);
                                t = n_10(t);
                                ;
                                LocalPopChoice(o_16);
                              }
                            else
                              {
                                t = n_16;
                                t = k_69(t);
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
  t = n_10(t);
  return(t);
}
ATerm printdiff_0_0 (ATerm t)
{
  ATerm p_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, r_10), p_10);
  {
    ATerm f_3 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = try_echo_1_0(f_3, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)), (ATerm) ATmakeInt(1));
    t = term_h_8;
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm v_10 = NULL;
  ATerm h_3 (ATerm t)
  {
    t = t_81(t);
    v_10 = t;
    return(t);
  }
  t = fetch_1_0(h_3, t);
  t = not_null(v_10);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm option_value_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm r_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(f_90, t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = r_16;
      t = g_90(t);
    }
  return(t);
}
ATerm ldiff_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,h_5 = NULL;
  w_10 = t;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm y_10 = NULL;
      if(match_cons(t, sym_Input2_1))
        {
          y_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_10;
      return(t);
    }
    t = option_value_2_0(i_3, _fail, t);
    h_5 = t;
    t = SSL_access(h_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
    t = ReadFromFile_0_0(t);
    x_10 = t;
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_3 (ATerm t)
          {
            t = term_s_7;
            return(t);
          }
          t = has_option_1_0(j_3, t);
          t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)));
          t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
          t = layeq_2_0(printdiff_0_0, _id, t);
          {
            ATerm i_17 = t;
            int j_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_l_17;
                {
                  ATerm m_17 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm z_10 = NULL,a_11 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          z_10 = ATgetArgument(t, 0);
                          a_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_table_get(z_10, a_11);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = m_17;
                    }
                }
                ;
                LocalPopChoice(j_17);
              }
            else
              {
                t = i_17;
                t = SSL_exit((ATerm) ATmakeInt(1));
              }
          }
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_3 (ATerm t)
                {
                  t = term_w_7;
                  return(t);
                }
                t = has_option_1_0(k_3, t);
                t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue)));
                t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
                t = layeq_2_0(printtopdiff_0_0, _id, t);
                {
                  ATerm q_17 = t;
                  int u_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_17;
                      {
                        ATerm v_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm b_11 = NULL,d_11 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                b_11 = ATgetArgument(t, 0);
                                d_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = SSL_table_get(b_11, d_11);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = v_17;
                          }
                      }
                      ;
                      LocalPopChoice(u_17);
                    }
                  else
                    {
                      t = q_17;
                      t = SSL_exit((ATerm) ATmakeInt(1));
                    }
                }
                ;
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                {
                  ATerm w_17 = t;
                  int z_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_3 (ATerm t)
                      {
                        t = term_l_7;
                        return(t);
                      }
                      t = has_option_1_0(l_3, t);
                      t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
                      {
                        ATerm n_3 (ATerm t)
                        {
                          ATerm o_3 (ATerm t)
                          {
                            t = term_x_7;
                            return(t);
                          }
                          t = has_option_1_0(o_3, t);
                          return(t);
                        }
                        t = laydiff_squash_1_0(n_3, t);
                        {
                          ATerm p_3 (ATerm t)
                          {
                            ATerm a_18 = t;
                            if((PushChoice() == 0))
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                  _fail(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = a_18;
                              }
                            {
                              ATerm q_3 (ATerm t)
                              {
                                t = term_h_14;
                                return(t);
                              }
                              t = try_echo_1_0(q_3, t);
                              t = SSL_exit((ATerm) ATmakeInt(1));
                            }
                            return(t);
                          }
                          t = try_1_0(p_3, t);
                        }
                      }
                      ;
                      LocalPopChoice(z_17);
                    }
                  else
                    {
                      t = w_17;
                      {
                        ATerm s_3 (ATerm t)
                        {
                          t = term_d_7;
                          return(t);
                        }
                        t = has_option_1_0(s_3, t);
                        t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
                        {
                          ATerm u_3 (ATerm t)
                          {
                            ATerm v_3 (ATerm t)
                            {
                              t = term_x_7;
                              return(t);
                            }
                            t = has_option_1_0(v_3, t);
                            return(t);
                          }
                          t = laydiff_1_0(u_3, t);
                          {
                            ATerm y_3 (ATerm t)
                            {
                              ATerm d_18 = t;
                              if((PushChoice() == 0))
                                {
                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                    _fail(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = d_18;
                                }
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = term_h_14;
                                  return(t);
                                }
                                t = try_echo_1_0(z_3, t);
                                t = SSL_exit((ATerm) ATmakeInt(1));
                              }
                              return(t);
                            }
                            t = try_1_0(y_3, t);
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
ATerm _2_0 (ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym__2))
    {
      f_11 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_11);
  e_11 = t;
  t = f_11;
  t = j_61(t);
  h_11 = t;
  t = g_11;
  t = k_61(t);
  i_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, h_11, i_11), e_11);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  n_11 = t;
  t = dtime_0_0(t);
  t = n_11;
  t = d_90(t);
  o_11 = t;
  t = dtime_0_0(t);
  p_11 = t;
  t = o_11;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_11), (ATerm) ATmakeAppl(sym_Runtime_1, p_11)), r_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_12 (ATerm z_11, ATerm t)
  {
    t = SSL_fclose(z_11);
    return(t);
  }
  ATerm c_12 = NULL,d_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_12 = ATgetArgument(t, 0);
      {
        ATerm e_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_12);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = e_18;
            t = f_12(d_12, t);
          }
      }
    }
  else
    {
      t = f_12(d_12, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  t = SSL_stdin_stream();
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  t = SSL_stdout_stream();
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_stderr_stream();
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      ATerm l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL,t_5 = NULL;
        s_5 = t;
        t = SSL_explode_term(s_5);
        if(match_cons(t, sym__2))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_18 = ATgetArgument(t, 1);
              if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
                {
                  t_5 = ATgetFirst((ATermList) t_18);
                  {
                    ATerm v_18 = (ATerm) ATgetNext((ATermList) t_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_5;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = m_18;
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
              ATerm c_4 (ATerm t)
              {
                ATerm s_12 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_12 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_12;
                return(t);
              }
              t = _2_0(c_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_12 = ATgetArgument(t, 0);
                  q_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_12, q_12);
              r_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_12);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
                ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
                ATerm d_4 (ATerm t)
                {
                  ATerm w_12 = NULL;
                  w_12 = t;
                  t = SSL_is_string(w_12);
                  return(t);
                }
                t = _2_0(d_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_12 = ATgetArgument(t, 0);
                    u_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_12, u_12);
                v_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL;
      a_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_13, term_h_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm e_4 (ATerm t)
        {
          t = term_i_19;
          return(t);
        }
        t = debug_1_0(e_4, t);
        _fail(t);
      }
    }
  x_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_12);
  y_12 = t;
  t = x_12;
  t = fclose_0_0(t);
  t = y_12;
  return(t);
}
ATerm split_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  t = y_95(t);
  d_13 = t;
  t = c_13;
  t = z_95(t);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, e_13);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  f_13 = t;
  {
    ATerm l_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              g_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_4, t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = l_19;
        t = term_p_19;
        g_13 = t;
      }
    t = f_13;
    {
      ATerm i_4 (ATerm t)
      {
        t = not_null(g_13);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, i_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm i_13 = NULL;
    i_13 = t;
    if(match_string(t, "-k"))
      {
        t = i_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = i_13;
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm j_13 = NULL,k_13 = NULL;
    j_13 = t;
    t = SSL_string_to_int(j_13);
    k_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), k_13);
    t = j_13;
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm m_13 = NULL;
        m_13 = t;
        if(match_string(t, "-S"))
          {
            t = m_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = m_13;
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_19;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_y_19;
        return(t);
      }
      t = Option_3_0(m_4, n_4, o_4, t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = r_19;
      {
        ATerm z_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              ATerm n_13 = NULL,o_13 = NULL;
              n_13 = t;
              t = SSL_string_to_int(n_13);
              o_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, n_13);
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_c_20;
              return(t);
            }
            t = ArgOption_3_0(p_4, q_4, r_4, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = z_19;
            {
              ATerm s_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_d_20;
                return(t);
              }
              ATerm u_4 (ATerm t)
              {
                t = term_e_20;
                return(t);
              }
              t = Option_3_0(s_4, t_4, u_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm q_13 = NULL;
    q_13 = t;
    if(match_string(t, "-o"))
      {
        t = q_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = q_13;
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm r_13 = NULL;
    r_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, r_13);
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_h_20;
    return(t);
  }
  t = ArgOption_3_0(v_4, w_4, d_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm f_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_k_20;
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = term_l_20;
          return(t);
        }
        t = Option_3_0(f_5, i_5, j_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  u_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = u_13;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm c_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_13 = ATgetFirst((ATermList) t);
          w_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_13 = ATgetFirst((ATermList) t);
          y_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_13;
      t = h_0(t);
      t = x_13;
      t = i_0(t);
      c_14 = t;
      t = (ATerm) ATinsert(CheckATermList(y_13), c_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    if(match_string(t, "-i"))
      {
        t = e_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_14;
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_14);
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_m_20;
    return(t);
  }
  t = ArgOption_3_0(k_5, l_5, m_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  g_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_79(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm j_14 = NULL,k_14 = NULL,n_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_14 = ATgetFirst((ATermList) t);
            k_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_14;
        t = foldr_2_0(y_79, z_79, t);
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_14, n_14);
        t = z_79(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  o_14 = t;
  t = SSL_explode_term(o_14);
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_14;
  t = foldr_2_0(j_79, k_79, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = times_0_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = term_y_14;
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm r_14 = NULL,s_14 = NULL;
      if(match_cons(t, sym__2))
        {
          r_14 = ATgetArgument(t, 0);
          s_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(r_14, s_14);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            t = SSL_addr(r_14, s_14);
          }
      }
      return(t);
    }
    t = crush_2_0(n_5, o_5, t);
    q_14 = t;
    t = SSL_TicksToSeconds(q_14);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_15;
        if((c_15 != t))
          {
            _fail(t);
          }
        t = b_15;
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = b_15;
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_15, d_15);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              t = SSL_gtr(c_15, d_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_15, d_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm g_15 = NULL,h_15 = NULL;
    g_15 = t;
    t = term_b_21;
    t = get_config_0_0(t);
    h_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_15, term_e_15);
    t = geq_0_0(t);
    t = g_15;
    t = v_87(t);
    return(t);
  }
  t = try_1_0(p_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm j_15 = NULL,k_15 = NULL;
    t = run_time_0_0(t);
    j_15 = t;
    t = term_h_8;
    t = whoami_0_0(t);
    k_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_15));
    t = (ATerm) ATmakeAppl(sym__2, term_c_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_21), j_15), term_d_21), k_15));
    return(t);
  }
  t = if_verbose1_1_0(q_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              {
                ATerm k_21 = t;
                int l_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(l_21);
                  }
                else
                  {
                    t = k_21;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(r_5, t);
      }
    }
  t = b_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_15 = ATgetFirst((ATermList) t);
      o_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_15 = NULL,t_15 = NULL;
        t = o_15;
        t = g_0(t);
        s_15 = t;
        t = n_15;
        t = e_0(t);
        t_15 = t;
        t = o_15;
        {
          ATerm u_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_15), t_15);
            return(t);
          }
          t = reverse_acc_2_0(e_0, u_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_8;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  x_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  u_15 = t;
  t = v_15;
  t = y_68(t);
  w_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_15), u_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm w_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(w_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_o_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm x_5 (ATerm t)
    {
      ATerm b_16 = NULL;
      b_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, b_16), term_p_21);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(x_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  f_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_16);
  c_16 = t;
  t = d_16;
  t = z_68(t);
  e_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, e_16), c_16);
  return(t);
}
ATerm fetch_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm j_16 (ATerm t)
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_81, _id, t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = Cons_2_0(_id, j_16, t);
      }
    return(t);
  }
  t = j_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  t = fetch_1_0(b_92, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  l_16 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_21 = ATgetFirst((ATermList) t);
                ATerm v_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_16;
          }
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = (ATerm) ATinsert(ATempty, l_16);
      }
    m_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_16);
    t = l_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm s_16 = NULL,t_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_16 = ATgetFirst((ATermList) t);
            t_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_16;
        {
          ATerm y_5 (ATerm t)
          {
            t = t_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_5, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  t = SSL_explode_term(x_16);
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_16;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm z_16 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_16, t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_81(t);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  {
    ATerm z_5 (ATerm t)
    {
      t = a_17;
      return(t);
    }
    t = at_end_1_0(z_5, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_17 = NULL;
  ATerm a_6 (ATerm t)
  {
    ATerm d_17 = NULL;
    d_17 = t;
    t = SSL_explode_string(d_17);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm e_17 = NULL;
    e_17 = t;
    t = SSL_explode_string(e_17);
    return(t);
  }
  t = _2_0(a_6, b_6, t);
  t = conc_0_0(t);
  c_17 = t;
  t = SSL_implode_string(c_17);
  return(t);
}
ATerm debug_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  f_17 = t;
  t = e_86(t);
  g_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_17), g_17));
  t = f_17;
  return(t);
}
ATerm map_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = Cons_2_0(h_81, h_17, t);
      }
    return(t);
  }
  t = h_17(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL;
      n_17 = t;
      t = SSL_is_string(n_17);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(c_6, t);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
              r_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_17 = ATgetArgument(t, 0);
                  t = s_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_17 = ATgetArgument(t, 0);
                      t = s_17;
                      {
                        ATerm j_22 = t;
                        int k_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_22);
                          }
                        else
                          {
                            t = j_22;
                            {
                              ATerm d_6 (ATerm t)
                              {
                                t = term_l_22;
                                return(t);
                              }
                              t = debug_1_0(d_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_17 = NULL,y_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_17 = ATgetArgument(t, 0);
                          t_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_17;
                      t = eval_config_0_0(t);
                      x_17 = t;
                      t = t_17;
                      t = eval_config_0_0(t);
                      y_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_17, y_17);
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
  ATerm b_18 = NULL;
  b_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_18);
  {
    ATerm e_6 (ATerm t)
    {
      ATerm c_18 = NULL;
      t = eval_config_0_0(t);
      c_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_18, c_18);
      t = c_18;
      return(t);
    }
    t = try_1_0(e_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_71(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_s_22;
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        t = term_t_22;
        return(t);
      }
      t = Option_3_0(f_6, g_6, h_6, t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm i_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_22;
          return(t);
        }
        ATerm k_6 (ATerm t)
        {
          t = term_v_22;
          return(t);
        }
        t = Option_3_0(i_6, j_6, k_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__3))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      h_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_18, g_18);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_22 = ATgetArgument(t, 0);
            ATerm z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_18, g_18);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATempty;
      }
    i_18 = t;
    t = SSL_table_put(f_18, g_18, (ATerm) ATinsert(CheckATermList(i_18), h_18));
    t = (ATerm) ATmakeAppl(sym__3, f_18, g_18, h_18);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm n_18 = NULL;
  t = term_h_8;
  t = g_93(t);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_b_23, n_18);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_18;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm u_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_18 = ATgetFirst((ATermList) t);
          r_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_18;
      t = a_0(t);
      t = term_h_8;
      t = c_0(t);
      u_18 = t;
      t = (ATerm) ATinsert(CheckATermList(r_18), u_18);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm w_18 = NULL;
    w_18 = t;
    if(match_string(t, "--help"))
      {
        t = w_18;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = w_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = w_18;
          }
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_c_23;
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = Option_3_0(l_6, m_6, n_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  c_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_18 = ATgetFirst((ATermList) t);
      z_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_19);
  x_18 = t;
  t = y_18;
  t = s_62(t);
  a_19 = t;
  t = z_18;
  t = t_62(t);
  b_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_19), a_19), x_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  {
    ATerm o_6 (ATerm t)
    {
      t = term_e_23;
      t = e_93(t);
      return(t);
    }
    t = try_1_0(o_6, t);
    t = j_19;
    {
      ATerm p_6 (ATerm t)
      {
        ATerm k_19 = NULL;
        k_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, k_19);
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_23);
              }
            else
              {
                t = h_23;
                t = e_93(t);
                t = Cons_2_0(_id, q_6, t);
              }
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            {
              ATerm m_19 = NULL,n_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_19 = ATgetFirst((ATermList) t);
                  n_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_19), (ATerm) ATmakeAppl(sym_Undefined_1, m_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_6, q_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_19;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_93(t);
          ;
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_6, t);
    {
      ATerm s_6 (ATerm t)
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_20 = NULL;
            a_20 = t;
            {
              ATerm p_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_20;
                  {
                    ATerm r_23 = t;
                    int s_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_h_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(s_23);
                      }
                    else
                      {
                        t = r_23;
                        {
                          ATerm t_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(t_6, t);
                        }
                      }
                    t = a_20;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(q_23);
                }
              else
                {
                  t = p_23;
                  t = term_r_22;
                  t = get_config_0_0(t);
                  t = a_20;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            {
              ATerm u_6 (ATerm t)
              {
                ATerm v_6 (ATerm t)
                {
                  u_19 = t;
                  return(t);
                }
                t = Undefined_1_0(v_6, t);
                return(t);
              }
              t = option_defined_1_0(u_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_19)), term_t_23));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(s_6, t);
      v_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm s_19 = NULL;
  t = parse_options_1_0(d_91, t);
  s_19 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_19);
  t = s_19;
  t = f_91(t);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_91, t);
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
              t = g_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrapNoOutput_3_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_90(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(y_90, t);
    return(t);
  }
  t = option_wrap_4_0(w_6, a_91, _id, x_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = _2_0(_id, ldiff_0_0, t);
    return(t);
  }
  t = iowrapNoOutput_3_0(y_6, ops_0_0, my_usage_0_0, t);
  return(t);
}
