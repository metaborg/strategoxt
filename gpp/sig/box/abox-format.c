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
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_k_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_k_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_x_6;
ATerm term_w_6;
void init_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__3, term_z_11, term_a_12, term_x_6);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm L_2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm list_1_0 (ATerm s_67 (ATerm), ATerm);
ATerm Space_Symbol_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm);
ATerm S_Option_0_0 (ATerm);
ATerm C_2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm);
ATerm REF_2_0 (ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm);
ATerm LBL_2_0 (ATerm z_55 (ATerm), ATerm a_56 (ATerm), ATerm);
ATerm R_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm);
ATerm AR_1_0 (ATerm r_56 (ATerm), ATerm);
ATerm AC_1_0 (ATerm q_56 (ATerm), ATerm);
ATerm AL_1_0 (ATerm p_56 (ATerm), ATerm);
ATerm A_Option_0_0 (ATerm);
ATerm AOPTIONS_1_0 (ATerm s_56 (ATerm), ATerm);
ATerm A_3_0 (ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm);
ATerm Font_Param_0_0 (ATerm);
ATerm FFID_2_0 (ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm);
ATerm FNAT_2_0 (ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm);
ATerm F_Option_0_0 (ATerm);
ATerm F_1_0 (ATerm h_56 (ATerm), ATerm);
ATerm Font_Operator_0_0 (ATerm);
ATerm FBOX_2_0 (ATerm i_56 (ATerm), ATerm j_56 (ATerm), ATerm);
ATerm ALT_2_0 (ATerm t_56 (ATerm), ATerm u_56 (ATerm), ATerm);
ATerm HV_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm);
ATerm V_2_0 (ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm);
ATerm H_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm);
ATerm S_1_0 (ATerm p_55 (ATerm), ATerm);
ATerm Box_0_0 (ATerm);
ATerm abox_format_0_0 (ATerm);
ATerm _2_0 (ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_68 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm);
ATerm crush_2_0 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_67 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_67 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm x_65 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_55 (ATerm), ATerm o_55 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_85 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm io_abox_format_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm L_2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,q_4 = NULL,r_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  y_4 = t;
  if(match_cons(t, sym_L_2))
    {
      q_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_4);
  f_4 = t;
  t = q_4;
  t = t_55(t);
  w_4 = t;
  t = r_4;
  t = u_55(t);
  x_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, w_4, x_4), f_4);
  return(t);
}
ATerm list_1_0 (ATerm s_67 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm g_4 = t;
    int h_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_4);
      }
    else
      {
        t = g_4;
        t = Cons_2_0(s_67, n_5, t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm Space_Symbol_0_0 (ATerm t)
{
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(j_4);
    }
  else
    {
      t = i_4;
      {
        ATerm k_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(l_4);
          }
        else
          {
            t = k_4;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2_0 (ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,x_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,l_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      x_5 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  p_5 = t;
  t = x_5;
  t = b_57(t);
  c_6 = t;
  t = b_6;
  t = c_57(t);
  d_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, c_6, d_6), p_5);
  return(t);
}
ATerm S_Option_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm f_7 = NULL;
    f_7 = t;
    t = SSL_is_string(f_7);
    return(t);
  }
  t = SOpt_2_0(Space_Symbol_0_0, c_0, t);
  return(t);
}
ATerm C_2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,j_7 = NULL,v_7 = NULL,z_7 = NULL,a_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_C_2))
    {
      h_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  g_7 = t;
  t = h_7;
  t = x_55(t);
  v_7 = t;
  t = j_7;
  t = y_55(t);
  z_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, v_7, z_7), g_7);
  return(t);
}
ATerm REF_2_0 (ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,r_8 = NULL,s_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_REF_2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  k_8 = t;
  t = l_8;
  t = b_56(t);
  n_8 = t;
  t = m_8;
  t = c_56(t);
  r_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, n_8, r_8), k_8);
  return(t);
}
ATerm LBL_2_0 (ATerm z_55 (ATerm), ATerm a_56 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_LBL_2))
    {
      d_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  c_9 = t;
  t = d_9;
  t = z_55(t);
  j_9 = t;
  t = i_9;
  t = a_56(t);
  k_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, j_9, k_9), c_9);
  return(t);
}
ATerm R_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_R_2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_10);
  t_9 = t;
  t = c_10;
  t = n_56(t);
  e_10 = t;
  t = d_10;
  t = o_56(t);
  f_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, e_10, f_10), t_9);
  return(t);
}
ATerm AR_1_0 (ATerm r_56 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,r_10 = NULL,t_10 = NULL,x_10 = NULL;
  x_10 = t;
  if(match_cons(t, sym_AR_1))
    {
      r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_10);
  p_10 = t;
  t = r_10;
  t = r_56(t);
  t_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, t_10), p_10);
  return(t);
}
ATerm AC_1_0 (ATerm q_56 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_AC_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_13);
  x_12 = t;
  t = y_12;
  t = q_56(t);
  z_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, z_12), x_12);
  return(t);
}
ATerm AL_1_0 (ATerm p_56 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  h_13 = t;
  if(match_cons(t, sym_AL_1))
    {
      f_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_13);
  e_13 = t;
  t = f_13;
  t = p_56(t);
  g_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, g_13), e_13);
  return(t);
}
ATerm A_Option_0_0 (ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        t = list_1_0(S_Option_0_0, t);
        return(t);
      }
      t = AL_1_0(e_0, t);
      ;
      LocalPopChoice(n_4);
    }
  else
    {
      t = m_4;
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_0 (ATerm t)
            {
              t = list_1_0(S_Option_0_0, t);
              return(t);
            }
            t = AC_1_0(k_0, t);
            ;
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm l_0 (ATerm t)
              {
                t = list_1_0(S_Option_0_0, t);
                return(t);
              }
              t = AR_1_0(l_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm AOPTIONS_1_0 (ATerm s_56 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_13);
  l_13 = t;
  t = m_13;
  t = s_56(t);
  n_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, n_13), l_13);
  return(t);
}
ATerm A_3_0 (ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym_A_3))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
      v_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  s_13 = t;
  t = t_13;
  t = k_56(t);
  w_13 = t;
  t = u_13;
  t = l_56(t);
  x_13 = t;
  t = v_13;
  t = m_56(t);
  y_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, w_13, x_13, y_13), s_13);
  return(t);
}
ATerm Font_Param_0_0 (ATerm t)
{
  ATerm s_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_FN_0)))
        _fail(t);
      ;
      LocalPopChoice(t_4);
    }
  else
    {
      t = s_4;
      {
        ATerm u_4 = t;
        int v_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_FM_0)))
              _fail(t);
            ;
            LocalPopChoice(v_4);
          }
        else
          {
            t = u_4;
            {
              ATerm z_4 = t;
              int a_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_SE_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(a_5);
                }
              else
                {
                  t = z_4;
                  {
                    ATerm b_5 = t;
                    int c_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_SH_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_5);
                      }
                    else
                      {
                        t = b_5;
                        {
                          ATerm d_5 = t;
                          int e_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_SZ_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(e_5);
                            }
                          else
                            {
                              t = d_5;
                              if(!(match_cons(t, sym_CL_0)))
                                _fail(t);
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
ATerm FFID_2_0 (ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  i_14 = t;
  if(match_cons(t, sym_FFID_2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_14);
  d_14 = t;
  t = e_14;
  t = f_56(t);
  g_14 = t;
  t = f_14;
  t = g_56(t);
  h_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, g_14, h_14), d_14);
  return(t);
}
ATerm FNAT_2_0 (ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_14);
  m_14 = t;
  t = n_14;
  t = d_56(t);
  p_14 = t;
  t = o_14;
  t = e_56(t);
  q_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, p_14, q_14), m_14);
  return(t);
}
ATerm F_Option_0_0 (ATerm t)
{
  ATerm f_5 = t;
  int g_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_0 (ATerm t)
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = SSL_is_string(v_14);
        return(t);
      }
      t = FNAT_2_0(Font_Param_0_0, m_0, t);
      ;
      LocalPopChoice(g_5);
    }
  else
    {
      t = f_5;
      {
        ATerm n_0 (ATerm t)
        {
          ATerm w_14 = NULL;
          w_14 = t;
          t = SSL_is_string(w_14);
          return(t);
        }
        t = FFID_2_0(Font_Param_0_0, n_0, t);
      }
    }
  return(t);
}
ATerm F_1_0 (ATerm h_56 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_F_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_15);
  x_14 = t;
  t = y_14;
  t = h_56(t);
  z_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, z_14), x_14);
  return(t);
}
ATerm Font_Operator_0_0 (ATerm t)
{
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_0 (ATerm t)
      {
        t = list_1_0(F_Option_0_0, t);
        return(t);
      }
      t = F_1_0(o_0, t);
      ;
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_KW_0)))
              _fail(t);
            ;
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            {
              ATerm l_5 = t;
              int m_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_VAR_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(m_5);
                }
              else
                {
                  t = l_5;
                  {
                    ATerm o_5 = t;
                    int q_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_NUM_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(q_5);
                      }
                    else
                      {
                        t = o_5;
                        if(!(match_cons(t, sym_MATH_0)))
                          _fail(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm FBOX_2_0 (ATerm i_56 (ATerm), ATerm j_56 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym_FBOX_2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_15);
  e_15 = t;
  t = f_15;
  t = i_56(t);
  h_15 = t;
  t = g_15;
  t = j_56(t);
  i_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, h_15, i_15), e_15);
  return(t);
}
ATerm ALT_2_0 (ATerm t_56 (ATerm), ATerm u_56 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  s_15 = t;
  if(match_cons(t, sym_ALT_2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_15);
  n_15 = t;
  t = o_15;
  t = t_56(t);
  q_15 = t;
  t = p_15;
  t = u_56(t);
  r_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, q_15, r_15), n_15);
  return(t);
}
ATerm HV_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_HV_2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  w_15 = t;
  t = x_15;
  t = z_56(t);
  z_15 = t;
  t = y_15;
  t = a_57(t);
  a_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, z_15, a_16), w_15);
  return(t);
}
ATerm V_2_0 (ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym_V_2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_16);
  f_16 = t;
  t = g_16;
  t = x_56(t);
  i_16 = t;
  t = h_16;
  t = y_56(t);
  j_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, i_16, j_16), f_16);
  return(t);
}
ATerm H_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_H_2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  o_16 = t;
  t = p_16;
  t = v_56(t);
  r_16 = t;
  t = q_16;
  t = w_56(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, r_16, s_16), o_16);
  return(t);
}
ATerm S_1_0 (ATerm p_55 (ATerm), ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym_S_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_17);
  x_16 = t;
  t = y_16;
  t = p_55(t);
  z_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, z_16), x_16);
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_0 (ATerm t)
      {
        ATerm e_17 = NULL;
        e_17 = t;
        t = SSL_is_string(e_17);
        return(t);
      }
      t = S_1_0(p_0, t);
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = list_1_0(S_Option_0_0, t);
              return(t);
            }
            ATerm r_0 (ATerm t)
            {
              t = list_1_0(Box_0_0, t);
              return(t);
            }
            t = H_2_0(q_0, r_0, t);
            ;
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm v_5 = t;
              int w_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_0 (ATerm t)
                  {
                    t = list_1_0(S_Option_0_0, t);
                    return(t);
                  }
                  ATerm t_0 (ATerm t)
                  {
                    t = list_1_0(Box_0_0, t);
                    return(t);
                  }
                  t = V_2_0(s_0, t_0, t);
                  ;
                  LocalPopChoice(w_5);
                }
              else
                {
                  t = v_5;
                  {
                    ATerm y_5 = t;
                    int z_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_0 (ATerm t)
                        {
                          t = list_1_0(S_Option_0_0, t);
                          return(t);
                        }
                        ATerm x_0 (ATerm t)
                        {
                          t = list_1_0(Box_0_0, t);
                          return(t);
                        }
                        t = HV_2_0(u_0, x_0, t);
                        ;
                        LocalPopChoice(z_5);
                      }
                    else
                      {
                        t = y_5;
                        {
                          ATerm a_6 = t;
                          int e_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2_0(Box_0_0, Box_0_0, t);
                              ;
                              LocalPopChoice(e_6);
                            }
                          else
                            {
                              t = a_6;
                              {
                                ATerm f_6 = t;
                                int g_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FBOX_2_0(Font_Operator_0_0, Box_0_0, t);
                                    ;
                                    LocalPopChoice(g_6);
                                  }
                                else
                                  {
                                    t = f_6;
                                    {
                                      ATerm h_6 = t;
                                      int i_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_0 (ATerm t)
                                          {
                                            ATerm b_1 (ATerm t)
                                            {
                                              t = list_1_0(A_Option_0_0, t);
                                              return(t);
                                            }
                                            t = AOPTIONS_1_0(b_1, t);
                                            return(t);
                                          }
                                          ATerm z_0 (ATerm t)
                                          {
                                            t = list_1_0(S_Option_0_0, t);
                                            return(t);
                                          }
                                          ATerm a_1 (ATerm t)
                                          {
                                            t = list_1_0(Box_0_0, t);
                                            return(t);
                                          }
                                          t = A_3_0(y_0, z_0, a_1, t);
                                          ;
                                          LocalPopChoice(i_6);
                                        }
                                      else
                                        {
                                          t = h_6;
                                          {
                                            ATerm j_6 = t;
                                            int k_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_1 (ATerm t)
                                                {
                                                  t = list_1_0(S_Option_0_0, t);
                                                  return(t);
                                                }
                                                ATerm d_1 (ATerm t)
                                                {
                                                  t = list_1_0(Box_0_0, t);
                                                  return(t);
                                                }
                                                t = R_2_0(c_1, d_1, t);
                                                ;
                                                LocalPopChoice(k_6);
                                              }
                                            else
                                              {
                                                t = j_6;
                                                {
                                                  ATerm m_6 = t;
                                                  int n_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_1 (ATerm t)
                                                      {
                                                        ATerm f_17 = NULL;
                                                        f_17 = t;
                                                        t = SSL_is_string(f_17);
                                                        return(t);
                                                      }
                                                      t = LBL_2_0(e_1, Box_0_0, t);
                                                      ;
                                                      LocalPopChoice(n_6);
                                                    }
                                                  else
                                                    {
                                                      t = m_6;
                                                      {
                                                        ATerm o_6 = t;
                                                        int p_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_1 (ATerm t)
                                                            {
                                                              ATerm g_17 = NULL;
                                                              g_17 = t;
                                                              t = SSL_is_string(g_17);
                                                              return(t);
                                                            }
                                                            t = REF_2_0(f_1, Box_0_0, t);
                                                            ;
                                                            LocalPopChoice(p_6);
                                                          }
                                                        else
                                                          {
                                                            t = o_6;
                                                            {
                                                              ATerm q_6 = t;
                                                              int r_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_1 (ATerm t)
                                                                  {
                                                                    t = list_1_0(S_Option_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm h_1 (ATerm t)
                                                                  {
                                                                    t = list_1_0(Box_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = C_2_0(g_1, h_1, t);
                                                                  ;
                                                                  LocalPopChoice(r_6);
                                                                }
                                                              else
                                                                {
                                                                  t = q_6;
                                                                  {
                                                                    ATerm s_6 = t;
                                                                    int t_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2_0(Box_0_0, Box_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(t_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_6;
                                                                        {
                                                                          ATerm u_6 = t;
                                                                          int v_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              ;
                                                                              LocalPopChoice(v_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_6;
                                                                              {
                                                                                ATerm i_1 (ATerm t)
                                                                                {
                                                                                  t = term_w_6;
                                                                                  return(t);
                                                                                }
                                                                                t = debug_1_0(i_1, t);
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
ATerm abox_format_0_0 (ATerm t)
{
  t = Box_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  h_17 = t;
  t = i_17;
  t = e_54(t);
  k_17 = t;
  t = j_17;
  t = f_54(t);
  l_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_17, l_17), h_17);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  r_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = q_17;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm u_17 = NULL,v_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_17 = ATgetFirst((ATermList) t);
            v_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_17;
        {
          ATerm j_1 (ATerm t)
          {
            t = v_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  t = SSL_explode_term(z_17);
  if(match_cons(t, sym__2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_68 (ATerm), ATerm t)
{
  ATerm b_18 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_18, t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_68(t);
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_18;
  {
    ATerm k_1 (ATerm t)
    {
      t = c_18;
      return(t);
    }
    t = at_end_1_0(k_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm f_18 = NULL;
    f_18 = t;
    t = SSL_explode_string(f_18);
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm g_18 = NULL;
    g_18 = t;
    t = SSL_explode_string(g_18);
    return(t);
  }
  t = _2_0(l_1, m_1, t);
  t = conc_0_0(t);
  e_18 = t;
  t = SSL_implode_string(e_18);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL;
      m_18 = t;
      t = SSL_is_string(m_18);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = i_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(n_1, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
              q_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_18 = ATgetArgument(t, 0);
                  t = r_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_18 = ATgetArgument(t, 0);
                      t = r_18;
                      {
                        ATerm n_7 = t;
                        int o_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_7);
                          }
                        else
                          {
                            t = n_7;
                            {
                              ATerm o_1 (ATerm t)
                              {
                                t = term_p_7;
                                return(t);
                              }
                              t = debug_1_0(o_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_18 = NULL,x_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_18 = ATgetArgument(t, 0);
                          s_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_18;
                      t = eval_config_0_0(t);
                      w_18 = t;
                      t = s_18;
                      t = eval_config_0_0(t);
                      x_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_18, x_18);
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
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_19);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm b_19 = NULL;
      t = eval_config_0_0(t);
      b_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_19, b_19);
      t = b_19;
      return(t);
    }
    t = try_1_0(p_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm c_19 = NULL,d_19 = NULL;
    c_19 = t;
    t = term_q_7;
    t = get_config_0_0(t);
    d_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_19, term_r_7);
    t = geq_0_0(t);
    t = c_19;
    t = g_79(t);
    return(t);
  }
  t = try_1_0(q_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_7 = ATgetArgument(t, 0);
        if(match_cons(s_7, sym_Stream_1))
          {
            e_19 = ATgetArgument(s_7, 0);
          }
        else
          _fail(t);
        f_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(e_19, f_19);
    g_19 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), g_19);
    h_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_19);
    return(t);
  }
  t = WriteToFile_1_0(r_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_19, term_t_7);
  t = open_stream_0_0(t);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_19, j_19);
  t = p_81(t);
  t = fclose_0_0(t);
  t = j_19;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_7 = ATgetArgument(t, 0);
        if(match_cons(u_7, sym_Stream_1))
          {
            l_19 = ATgetArgument(u_7, 0);
          }
        else
          _fail(t);
        m_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(l_19, m_19);
    n_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_19);
    return(t);
  }
  t = WriteToFile_1_0(s_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm w_7 = t;
      int x_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                p_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(u_1, t);
          ;
          LocalPopChoice(x_7);
        }
      else
        {
          t = w_7;
          t = term_y_7;
          p_19 = t;
        }
      return(t);
    }
    t = _2_0(t_1, _id, t);
    t = o_19;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = not_null(p_19);
          return(t);
        }
        t = split_2_0(w_1, _id, t);
        return(t);
      }
      t = _2_0(_id, v_1, t);
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(y_1, t);
              return(t);
            }
            t = _2_0(x_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
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
ATerm apply_strategy_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  q_19 = t;
  t = dtime_0_0(t);
  t = q_19;
  t = s_82(t);
  r_19 = t;
  t = dtime_0_0(t);
  s_19 = t;
  t = r_19;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_19), (ATerm) ATmakeAppl(sym_Runtime_1, s_19)), u_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_20 (ATerm c_20, ATerm t)
  {
    t = SSL_fclose(c_20);
    return(t);
  }
  ATerm f_20 = NULL,g_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_20 = ATgetArgument(t, 0);
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_20);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            t = i_20(g_20, t);
          }
      }
    }
  else
    {
      t = i_20(g_20, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  j_20 = t;
  t = b_81(t);
  k_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_20), k_20));
  t = j_20;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  t = SSL_stdin_stream();
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = SSL_stdout_stream();
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_20 = NULL;
  t = SSL_stderr_stream();
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_20);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      ATerm g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        v_0 = t;
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm j_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_8 = ATgetArgument(t, 1);
              if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
                {
                  w_0 = ATgetFirst((ATermList) o_8);
                  {
                    ATerm p_8 = (ATerm) ATgetNext((ATermList) o_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm q_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
              ATerm z_1 (ATerm t)
              {
                ATerm v_20 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    v_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = v_20;
                return(t);
              }
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  s_20 = ATgetArgument(t, 0);
                  t_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(s_20, t_20);
              u_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, u_20);
              ;
              LocalPopChoice(t_8);
            }
          else
            {
              t = q_8;
              {
                ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
                ATerm a_2 (ATerm t)
                {
                  ATerm z_20 = NULL;
                  z_20 = t;
                  t = SSL_is_string(z_20);
                  return(t);
                }
                t = _2_0(a_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    w_20 = ATgetArgument(t, 0);
                    x_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(w_20, x_20);
                y_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL;
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_21, term_w_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm b_2 (ATerm t)
        {
          t = term_x_8;
          return(t);
        }
        t = debug_1_0(b_2, t);
        _fail(t);
      }
    }
  a_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(c_21);
  b_21 = t;
  t = a_21;
  t = fclose_0_0(t);
  t = b_21;
  return(t);
}
ATerm split_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  t = r_66(t);
  g_21 = t;
  t = f_21;
  t = s_66(t);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  i_21 = t;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              j_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(c_2, t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = term_a_9;
        j_21 = t;
      }
    t = i_21;
    {
      ATerm d_2 (ATerm t)
      {
        t = not_null(j_21);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, d_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm l_21 = NULL;
    l_21 = t;
    if(match_string(t, "-k"))
      {
        t = l_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = l_21;
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm m_21 = NULL,n_21 = NULL;
    m_21 = t;
    t = SSL_string_to_int(m_21);
    n_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_21);
    t = m_21;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  t = ArgOption_3_0(e_2, f_2, g_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm p_21 = NULL;
        p_21 = t;
        if(match_string(t, "-S"))
          {
            t = p_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_21;
          }
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_9;
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_m_9;
        return(t);
      }
      t = Option_3_0(h_2, i_2, j_2, t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              ATerm s_21 = NULL,t_21 = NULL;
              s_21 = t;
              t = SSL_string_to_int(s_21);
              t_21 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_21);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, s_21);
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_p_9;
              return(t);
            }
            t = ArgOption_3_0(k_2, l_2, m_2, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm n_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_9;
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = term_r_9;
                return(t);
              }
              t = Option_3_0(n_2, o_2, p_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = s_9;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm v_21 = NULL;
    v_21 = t;
    if(match_string(t, "-o"))
      {
        t = v_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_21;
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm w_21 = NULL;
    w_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_21);
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = ArgOption_3_0(q_2, r_2, s_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm t_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_9;
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = Option_3_0(t_2, u_2, v_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  z_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_21;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm h_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_22 = ATgetFirst((ATermList) t);
          d_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      t = h_0(t);
      t = c_22;
      t = i_0(t);
      h_22 = t;
      t = (ATerm) ATinsert(CheckATermList(d_22), h_22);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_22 = NULL;
    j_22 = t;
    if(match_string(t, "-i"))
      {
        t = j_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = j_22;
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm k_22 = NULL;
    k_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_22);
    t = (ATerm) ATmakeAppl(sym_Input_1, k_22);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm b_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = b_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  t = whoami_0_0(t);
  m_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_74(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm p_22 = NULL,q_22 = NULL,t_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_22 = ATgetFirst((ATermList) t);
            q_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_22;
        t = foldr_2_0(f_74, g_74, t);
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_22, t_22);
        t = g_74(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  u_22 = t;
  t = SSL_explode_term(u_22);
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
  t = foldr_2_0(d_72, e_72, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_22 = NULL;
  t = times_0_0(t);
  {
    ATerm z_2 (ATerm t)
    {
      t = term_g_9;
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      ATerm x_22 = NULL,y_22 = NULL;
      if(match_cons(t, sym__2))
        {
          x_22 = ATgetArgument(t, 0);
          y_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(x_22, y_22);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = o_10;
            t = SSL_addr(x_22, y_22);
          }
      }
      return(t);
    }
    t = crush_2_0(z_2, a_3, t);
    w_22 = t;
    t = SSL_TicksToSeconds(w_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_23;
        if((n_23 != t))
          {
            _fail(t);
          }
        t = m_23;
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        t = m_23;
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_23, o_23);
              ;
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
              t = SSL_gtr(n_23, o_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm r_23 = NULL,s_23 = NULL;
    r_23 = t;
    t = term_q_7;
    t = get_config_0_0(t);
    s_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_23, term_y_10);
    t = geq_0_0(t);
    t = r_23;
    t = f_79(t);
    return(t);
  }
  t = try_1_0(b_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm u_23 = NULL,v_23 = NULL;
    t = run_time_0_0(t);
    u_23 = t;
    t = term_x_6;
    t = whoami_0_0(t);
    v_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_23));
    t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), u_23), term_a_11), v_23));
    return(t);
  }
  t = if_verbose1_1_0(c_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
              {
                ATerm h_11 = t;
                int i_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(i_11);
                  }
                else
                  {
                    t = h_11;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(d_3, t);
      }
    }
  t = q_83(t);
  return(t);
}
ATerm map_1_0 (ATerm p_67 (ATerm), ATerm t)
{
  ATerm x_23 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = Cons_2_0(p_67, x_23, t);
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_24 = ATgetFirst((ATermList) t);
      c_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_24 = NULL,h_24 = NULL;
        t = c_24;
        t = g_0(t);
        g_24 = t;
        t = b_24;
        t = f_0(t);
        h_24 = t;
        t = c_24;
        {
          ATerm f_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_24), h_24);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_24);
  i_24 = t;
  t = j_24;
  t = f_62(t);
  k_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_24), i_24);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm h_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(h_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_n_11;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm p_24 = NULL;
      p_24 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_24), term_o_11);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(i_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_24);
  q_24 = t;
  t = r_24;
  t = g_62(t);
  s_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_24), q_24);
  return(t);
}
ATerm fetch_1_0 (ATerm z_67 (ATerm), ATerm t)
{
  ATerm x_24 (ATerm t)
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_67, _id, t);
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = Cons_2_0(_id, x_24, t);
      }
    return(t);
  }
  t = x_24(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  t = fetch_1_0(l_84, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_11 = ATgetFirst((ATermList) t);
                ATerm u_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_24;
          }
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATinsert(ATempty, z_24);
      }
    a_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_25);
    t = z_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_65(t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_12;
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = Option_3_0(j_3, k_3, l_3, t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm m_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_12;
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = Option_3_0(m_3, n_3, o_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__3))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
      i_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_25, h_25);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_12 = ATgetArgument(t, 0);
            ATerm i_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_25, h_25);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATempty;
      }
    j_25 = t;
    t = SSL_table_put(g_25, h_25, (ATerm) ATinsert(CheckATermList(j_25), i_25));
    t = (ATerm) ATmakeAppl(sym__3, g_25, h_25, i_25);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm o_25 = NULL;
  t = term_x_6;
  t = q_85(t);
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_12, term_k_12, o_25);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_25;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_25 = ATgetFirst((ATermList) t);
          s_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_25;
      t = a_0(t);
      t = term_x_6;
      t = b_0(t);
      v_25 = t;
      t = (ATerm) ATinsert(CheckATermList(s_25), v_25);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm x_25 = NULL;
    x_25 = t;
    if(match_string(t, "--help"))
      {
        t = x_25;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = x_25;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = x_25;
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_l_12;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = Option_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_55 (ATerm), ATerm o_55 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  d_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_25 = ATgetFirst((ATermList) t);
      a_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  y_25 = t;
  t = z_25;
  t = n_55(t);
  b_26 = t;
  t = a_26;
  t = o_55(t);
  c_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_26), b_26), y_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_n_12;
      t = o_85(t);
      return(t);
    }
    t = try_1_0(s_3, t);
    t = k_26;
    {
      ATerm t_3 (ATerm t)
      {
        ATerm l_26 = NULL;
        l_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_26);
        t = (ATerm) ATmakeAppl(sym_Program_1, l_26);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_12 = t;
            int r_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_12);
              }
            else
              {
                t = q_12;
                t = o_85(t);
                t = Cons_2_0(_id, u_3, t);
              }
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm n_26 = NULL,o_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_26 = ATgetFirst((ATermList) t);
                  o_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATmakeAppl(sym_Undefined_1, n_26));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_3, u_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_26;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_85(t);
          ;
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          {
            ATerm u_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_12);
              }
            else
              {
                t = u_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_3, t);
    {
      ATerm w_3 (ATerm t)
      {
        ATerm w_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_27 = NULL;
            b_27 = t;
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_27;
                  {
                    ATerm i_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_e_11;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = i_13;
                        {
                          ATerm x_3 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(x_3, t);
                        }
                      }
                    t = b_27;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  t = term_a_12;
                  t = get_config_0_0(t);
                  t = b_27;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = w_12;
            {
              ATerm y_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  v_26 = t;
                  return(t);
                }
                t = Undefined_1_0(z_3, t);
                return(t);
              }
              t = option_defined_1_0(y_3, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_26)), term_k_13));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(w_3, t);
      w_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = w_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_3 = NULL;
  t = parse_options_1_0(s_83, t);
  e_3 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_3);
  t = e_3;
  t = u_83(t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_83, t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          ATerm r_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_14);
            }
          else
            {
              t = r_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(h_83, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_4, j_83, k_83, b_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm e_27 = NULL,f_27 = NULL;
      e_27 = t;
      t = term_k_10;
      t = get_config_0_0(t);
      f_27 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, f_27));
      t = e_27;
      return(t);
    }
    t = if_verbose2_1_0(d_4, t);
    return(t);
  }
  t = iowrap_4_0(b_83, c_83, d_83, c_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm t)
{
  t = iowrap_3_0(z_82, a_83, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    t = _2_0(_id, w_82, t);
    return(t);
  }
  t = iowrap_2_0(e_4, _fail, t);
  return(t);
}
ATerm io_abox_format_0_0 (ATerm t)
{
  t = iowrap_1_0(abox_format_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox_format_0_0(t);
  return(t);
}
