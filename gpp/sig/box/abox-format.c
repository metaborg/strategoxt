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
ATerm term_w_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_g_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_p_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_y_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__3, term_k_21, term_p_21, term_p_7);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm L_2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm);
ATerm list_1_0 (ATerm a_68 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm);
ATerm C_2_0 (ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm);
ATerm REF_2_0 (ATerm i_56 (ATerm), ATerm j_56 (ATerm), ATerm);
ATerm LBL_2_0 (ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm);
ATerm R_2_0 (ATerm u_56 (ATerm), ATerm v_56 (ATerm), ATerm);
ATerm AR_1_0 (ATerm y_56 (ATerm), ATerm);
ATerm AC_1_0 (ATerm x_56 (ATerm), ATerm);
ATerm AL_1_0 (ATerm w_56 (ATerm), ATerm);
ATerm AOPTIONS_1_0 (ATerm z_56 (ATerm), ATerm);
ATerm A_3_0 (ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm);
ATerm FFID_2_0 (ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm);
ATerm FNAT_2_0 (ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm);
ATerm F_1_0 (ATerm o_56 (ATerm), ATerm);
ATerm FBOX_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm);
ATerm ALT_2_0 (ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm);
ATerm HV_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm);
ATerm V_2_0 (ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm);
ATerm H_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm S_1_0 (ATerm w_55 (ATerm), ATerm);
ATerm Box_0_0 (ATerm);
ATerm _2_0 (ATerm l_54 (ATerm), ATerm m_54 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_68 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_67 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_55 (ATerm), ATerm v_55 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_85 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL;
  f_0 = t;
  t = term_p_7;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_0;
  return(t);
}
ATerm L_2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,v_0 = NULL,w_0 = NULL,c_1 = NULL,d_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_L_2))
    {
      n_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_1);
  m_0 = t;
  t = n_0;
  t = a_56(t);
  w_0 = t;
  t = v_0;
  t = b_56(t);
  c_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, w_0, c_1), m_0);
  return(t);
}
ATerm list_1_0 (ATerm a_68 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = Cons_2_0(a_68, p_1, t);
      }
    return(t);
  }
  t = p_1(t);
  return(t);
}
ATerm SOpt_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL,x_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_1);
  q_1 = t;
  t = s_1;
  t = i_57(t);
  u_1 = t;
  t = t_1;
  t = j_57(t);
  w_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, u_1, w_1), q_1);
  return(t);
}
ATerm C_2_0 (ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,l_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym_C_2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_2);
  c_2 = t;
  t = d_2;
  t = e_56(t);
  f_2 = t;
  t = e_2;
  t = f_56(t);
  g_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, f_2, g_2), c_2);
  return(t);
}
ATerm REF_2_0 (ATerm i_56 (ATerm), ATerm j_56 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  x_2 = t;
  if(match_cons(t, sym_REF_2))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_2);
  p_2 = t;
  t = t_2;
  t = i_56(t);
  v_2 = t;
  t = u_2;
  t = j_56(t);
  w_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, v_2, w_2), p_2);
  return(t);
}
ATerm LBL_2_0 (ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,d_3 = NULL,e_3 = NULL,p_3 = NULL,y_3 = NULL,m_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym_LBL_2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_4);
  a_3 = t;
  t = d_3;
  t = g_56(t);
  p_3 = t;
  t = e_3;
  t = h_56(t);
  y_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, p_3, y_3), a_3);
  return(t);
}
ATerm R_2_0 (ATerm u_56 (ATerm), ATerm v_56 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL,p_5 = NULL,c_6 = NULL,f_6 = NULL;
  f_6 = t;
  if(match_cons(t, sym_R_2))
    {
      j_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_6);
  i_5 = t;
  t = j_5;
  t = u_56(t);
  p_5 = t;
  t = l_5;
  t = v_56(t);
  c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, p_5, c_6), i_5);
  return(t);
}
ATerm AR_1_0 (ATerm y_56 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_AR_1))
    {
      o_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_6);
  k_6 = t;
  t = o_6;
  t = y_56(t);
  p_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, p_6), k_6);
  return(t);
}
ATerm AC_1_0 (ATerm x_56 (ATerm), ATerm t)
{
  ATerm v_6 = NULL,c_7 = NULL,n_7 = NULL,w_7 = NULL;
  w_7 = t;
  if(match_cons(t, sym_AC_1))
    {
      c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_7);
  v_6 = t;
  t = c_7;
  t = x_56(t);
  n_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, n_7), v_6);
  return(t);
}
ATerm AL_1_0 (ATerm w_56 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,l_8 = NULL,q_8 = NULL,v_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_AL_1))
    {
      l_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_8);
  i_8 = t;
  t = l_8;
  t = w_56(t);
  q_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, q_8), i_8);
  return(t);
}
ATerm AOPTIONS_1_0 (ATerm z_56 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      c_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_9);
  a_9 = t;
  t = c_9;
  t = z_56(t);
  d_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, d_9), a_9);
  return(t);
}
ATerm A_3_0 (ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,b_10 = NULL,e_10 = NULL,f_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_A_3))
    {
      b_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
      f_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_10);
  w_9 = t;
  t = b_10;
  t = r_56(t);
  i_10 = t;
  t = e_10;
  t = s_56(t);
  k_10 = t;
  t = f_10;
  t = t_56(t);
  l_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, i_10, k_10, l_10), w_9);
  return(t);
}
ATerm FFID_2_0 (ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_FFID_2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  r_10 = t;
  t = w_10;
  t = m_56(t);
  y_10 = t;
  t = x_10;
  t = n_56(t);
  z_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, y_10, z_10), r_10);
  return(t);
}
ATerm FNAT_2_0 (ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  f_11 = t;
  t = k_11;
  t = k_56(t);
  m_11 = t;
  t = l_11;
  t = l_56(t);
  n_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, m_11, n_11), f_11);
  return(t);
}
ATerm F_1_0 (ATerm o_56 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  z_11 = t;
  if(match_cons(t, sym_F_1))
    {
      x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  w_11 = t;
  t = x_11;
  t = o_56(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, y_11), w_11);
  return(t);
}
ATerm FBOX_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,t_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym_FBOX_2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  i_12 = t;
  t = j_12;
  t = p_56(t);
  l_12 = t;
  t = k_12;
  t = q_56(t);
  m_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, l_12, m_12), i_12);
  return(t);
}
ATerm ALT_2_0 (ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,g_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  m_13 = t;
  if(match_cons(t, sym_ALT_2))
    {
      g_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_13);
  e_13 = t;
  t = g_13;
  t = a_57(t);
  k_13 = t;
  t = j_13;
  t = b_57(t);
  l_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, k_13, l_13), e_13);
  return(t);
}
ATerm HV_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,i_14 = NULL,n_14 = NULL,p_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_HV_2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_14);
  e_14 = t;
  t = f_14;
  t = g_57(t);
  i_14 = t;
  t = g_14;
  t = h_57(t);
  n_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, i_14, n_14), e_14);
  return(t);
}
ATerm V_2_0 (ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  b_15 = t;
  if(match_cons(t, sym_V_2))
    {
      v_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_15);
  u_14 = t;
  t = v_14;
  t = e_57(t);
  z_14 = t;
  t = x_14;
  t = f_57(t);
  a_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, z_14, a_15), u_14);
  return(t);
}
ATerm H_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym_H_2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_15);
  e_15 = t;
  t = f_15;
  t = c_57(t);
  h_15 = t;
  t = g_15;
  t = d_57(t);
  i_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, h_15, i_15), e_15);
  return(t);
}
ATerm S_1_0 (ATerm w_55 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym_S_1))
    {
      n_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_15);
  m_15 = t;
  t = n_15;
  t = w_55(t);
  o_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, o_15), m_15);
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_0 (ATerm t)
      {
        ATerm s_15 = NULL;
        s_15 = t;
        t = SSL_is_string(s_15);
        return(t);
      }
      t = S_1_0(k_0, t);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              ATerm r_0 (ATerm t)
              {
                ATerm s_0 (ATerm t)
                {
                  ATerm x_7 = t;
                  int y_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_VS_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(y_7);
                    }
                  else
                    {
                      t = x_7;
                      {
                        ATerm z_7 = t;
                        int a_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(!(match_cons(t, sym_HS_0)))
                              _fail(t);
                            ;
                            LocalPopChoice(a_8);
                          }
                        else
                          {
                            t = z_7;
                            if(!(match_cons(t, sym_IS_0)))
                              _fail(t);
                          }
                      }
                    }
                  return(t);
                }
                ATerm t_0 (ATerm t)
                {
                  ATerm t_15 = NULL;
                  t_15 = t;
                  t = SSL_is_string(t_15);
                  return(t);
                }
                t = SOpt_2_0(s_0, t_0, t);
                return(t);
              }
              t = list_1_0(r_0, t);
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = list_1_0(Box_0_0, t);
              return(t);
            }
            t = H_2_0(o_0, p_0, t);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm b_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        ATerm d_8 = t;
                        int e_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(!(match_cons(t, sym_VS_0)))
                              _fail(t);
                            ;
                            LocalPopChoice(e_8);
                          }
                        else
                          {
                            t = d_8;
                            {
                              ATerm f_8 = t;
                              int g_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(!(match_cons(t, sym_HS_0)))
                                    _fail(t);
                                  ;
                                  LocalPopChoice(g_8);
                                }
                              else
                                {
                                  t = f_8;
                                  if(!(match_cons(t, sym_IS_0)))
                                    _fail(t);
                                }
                            }
                          }
                        return(t);
                      }
                      ATerm a_1 (ATerm t)
                      {
                        ATerm u_15 = NULL;
                        u_15 = t;
                        t = SSL_is_string(u_15);
                        return(t);
                      }
                      t = SOpt_2_0(z_0, a_1, t);
                      return(t);
                    }
                    t = list_1_0(y_0, t);
                    return(t);
                  }
                  ATerm x_0 (ATerm t)
                  {
                    t = list_1_0(Box_0_0, t);
                    return(t);
                  }
                  t = V_2_0(u_0, x_0, t);
                  ;
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = b_8;
                  {
                    ATerm h_8 = t;
                    int j_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 (ATerm t)
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm k_8 = t;
                              int m_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(!(match_cons(t, sym_VS_0)))
                                    _fail(t);
                                  ;
                                  LocalPopChoice(m_8);
                                }
                              else
                                {
                                  t = k_8;
                                  {
                                    ATerm n_8 = t;
                                    int o_8 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(!(match_cons(t, sym_HS_0)))
                                          _fail(t);
                                        ;
                                        LocalPopChoice(o_8);
                                      }
                                    else
                                      {
                                        t = n_8;
                                        if(!(match_cons(t, sym_IS_0)))
                                          _fail(t);
                                      }
                                  }
                                }
                              return(t);
                            }
                            ATerm k_1 (ATerm t)
                            {
                              ATerm v_15 = NULL;
                              v_15 = t;
                              t = SSL_is_string(v_15);
                              return(t);
                            }
                            t = SOpt_2_0(j_1, k_1, t);
                            return(t);
                          }
                          t = list_1_0(i_1, t);
                          return(t);
                        }
                        ATerm e_1 (ATerm t)
                        {
                          t = list_1_0(Box_0_0, t);
                          return(t);
                        }
                        t = HV_2_0(b_1, e_1, t);
                        ;
                        LocalPopChoice(j_8);
                      }
                    else
                      {
                        t = h_8;
                        {
                          ATerm p_8 = t;
                          int r_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2_0(Box_0_0, Box_0_0, t);
                              ;
                              LocalPopChoice(r_8);
                            }
                          else
                            {
                              t = p_8;
                              {
                                ATerm s_8 = t;
                                int t_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_1 (ATerm t)
                                    {
                                      ATerm u_8 = t;
                                      int w_8 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_1 (ATerm t)
                                          {
                                            ATerm n_1 (ATerm t)
                                            {
                                              ATerm x_8 = t;
                                              int y_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_1 (ATerm t)
                                                  {
                                                    ATerm z_8 = t;
                                                    int b_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(!(match_cons(t, sym_FN_0)))
                                                          _fail(t);
                                                        ;
                                                        LocalPopChoice(b_9);
                                                      }
                                                    else
                                                      {
                                                        t = z_8;
                                                        {
                                                          ATerm f_9 = t;
                                                          int g_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(!(match_cons(t, sym_FM_0)))
                                                                _fail(t);
                                                              ;
                                                              LocalPopChoice(g_9);
                                                            }
                                                          else
                                                            {
                                                              t = f_9;
                                                              {
                                                                ATerm h_9 = t;
                                                                int i_9 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(!(match_cons(t, sym_SE_0)))
                                                                      _fail(t);
                                                                    ;
                                                                    LocalPopChoice(i_9);
                                                                  }
                                                                else
                                                                  {
                                                                    t = h_9;
                                                                    {
                                                                      ATerm j_9 = t;
                                                                      int k_9 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(!(match_cons(t, sym_SH_0)))
                                                                            _fail(t);
                                                                          ;
                                                                          LocalPopChoice(k_9);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = j_9;
                                                                          {
                                                                            ATerm l_9 = t;
                                                                            int m_9 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(!(match_cons(t, sym_SZ_0)))
                                                                                  _fail(t);
                                                                                ;
                                                                                LocalPopChoice(m_9);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_9;
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
                                                  ATerm y_1 (ATerm t)
                                                  {
                                                    ATerm w_15 = NULL;
                                                    w_15 = t;
                                                    t = SSL_is_string(w_15);
                                                    return(t);
                                                  }
                                                  t = FNAT_2_0(v_1, y_1, t);
                                                  ;
                                                  LocalPopChoice(y_8);
                                                }
                                              else
                                                {
                                                  t = x_8;
                                                  {
                                                    ATerm z_1 (ATerm t)
                                                    {
                                                      ATerm n_9 = t;
                                                      int o_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_FN_0)))
                                                            _fail(t);
                                                          ;
                                                          LocalPopChoice(o_9);
                                                        }
                                                      else
                                                        {
                                                          t = n_9;
                                                          {
                                                            ATerm p_9 = t;
                                                            int q_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(!(match_cons(t, sym_FM_0)))
                                                                  _fail(t);
                                                                ;
                                                                LocalPopChoice(q_9);
                                                              }
                                                            else
                                                              {
                                                                t = p_9;
                                                                {
                                                                  ATerm r_9 = t;
                                                                  int s_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(!(match_cons(t, sym_SE_0)))
                                                                        _fail(t);
                                                                      ;
                                                                      LocalPopChoice(s_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_9;
                                                                      {
                                                                        ATerm t_9 = t;
                                                                        int u_9 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(!(match_cons(t, sym_SH_0)))
                                                                              _fail(t);
                                                                            ;
                                                                            LocalPopChoice(u_9);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_9;
                                                                            {
                                                                              ATerm v_9 = t;
                                                                              int x_9 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(!(match_cons(t, sym_SZ_0)))
                                                                                    _fail(t);
                                                                                  ;
                                                                                  LocalPopChoice(x_9);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = v_9;
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
                                                    ATerm a_2 (ATerm t)
                                                    {
                                                      ATerm x_15 = NULL;
                                                      x_15 = t;
                                                      t = SSL_is_string(x_15);
                                                      return(t);
                                                    }
                                                    t = FFID_2_0(z_1, a_2, t);
                                                  }
                                                }
                                              return(t);
                                            }
                                            t = list_1_0(n_1, t);
                                            return(t);
                                          }
                                          t = F_1_0(m_1, t);
                                          ;
                                          LocalPopChoice(w_8);
                                        }
                                      else
                                        {
                                          t = u_8;
                                          {
                                            ATerm y_9 = t;
                                            int z_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(!(match_cons(t, sym_KW_0)))
                                                  _fail(t);
                                                ;
                                                LocalPopChoice(z_9);
                                              }
                                            else
                                              {
                                                t = y_9;
                                                {
                                                  ATerm a_10 = t;
                                                  int c_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(!(match_cons(t, sym_VAR_0)))
                                                        _fail(t);
                                                      ;
                                                      LocalPopChoice(c_10);
                                                    }
                                                  else
                                                    {
                                                      t = a_10;
                                                      {
                                                        ATerm d_10 = t;
                                                        int g_10 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(!(match_cons(t, sym_NUM_0)))
                                                              _fail(t);
                                                            ;
                                                            LocalPopChoice(g_10);
                                                          }
                                                        else
                                                          {
                                                            t = d_10;
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
                                    t = FBOX_2_0(l_1, Box_0_0, t);
                                    ;
                                    LocalPopChoice(t_8);
                                  }
                                else
                                  {
                                    t = s_8;
                                    {
                                      ATerm h_10 = t;
                                      int j_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_2 (ATerm t)
                                          {
                                            ATerm j_2 (ATerm t)
                                            {
                                              ATerm k_2 (ATerm t)
                                              {
                                                ATerm n_10 = t;
                                                int o_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm m_2 (ATerm t)
                                                    {
                                                      ATerm n_2 (ATerm t)
                                                      {
                                                        ATerm o_2 (ATerm t)
                                                        {
                                                          ATerm p_10 = t;
                                                          int q_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(!(match_cons(t, sym_VS_0)))
                                                                _fail(t);
                                                              ;
                                                              LocalPopChoice(q_10);
                                                            }
                                                          else
                                                            {
                                                              t = p_10;
                                                              {
                                                                ATerm s_10 = t;
                                                                int t_10 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(!(match_cons(t, sym_HS_0)))
                                                                      _fail(t);
                                                                    ;
                                                                    LocalPopChoice(t_10);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_10;
                                                                    if(!(match_cons(t, sym_IS_0)))
                                                                      _fail(t);
                                                                  }
                                                              }
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm q_2 (ATerm t)
                                                        {
                                                          ATerm y_15 = NULL;
                                                          y_15 = t;
                                                          t = SSL_is_string(y_15);
                                                          return(t);
                                                        }
                                                        t = SOpt_2_0(o_2, q_2, t);
                                                        return(t);
                                                      }
                                                      t = list_1_0(n_2, t);
                                                      return(t);
                                                    }
                                                    t = AL_1_0(m_2, t);
                                                    ;
                                                    LocalPopChoice(o_10);
                                                  }
                                                else
                                                  {
                                                    t = n_10;
                                                    {
                                                      ATerm u_10 = t;
                                                      int v_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_2 (ATerm t)
                                                          {
                                                            ATerm s_2 (ATerm t)
                                                            {
                                                              ATerm y_2 (ATerm t)
                                                              {
                                                                ATerm a_11 = t;
                                                                int c_11 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(!(match_cons(t, sym_VS_0)))
                                                                      _fail(t);
                                                                    ;
                                                                    LocalPopChoice(c_11);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_11;
                                                                    {
                                                                      ATerm d_11 = t;
                                                                      int e_11 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(!(match_cons(t, sym_HS_0)))
                                                                            _fail(t);
                                                                          ;
                                                                          LocalPopChoice(e_11);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_11;
                                                                          if(!(match_cons(t, sym_IS_0)))
                                                                            _fail(t);
                                                                        }
                                                                    }
                                                                  }
                                                                return(t);
                                                              }
                                                              ATerm z_2 (ATerm t)
                                                              {
                                                                ATerm z_15 = NULL;
                                                                z_15 = t;
                                                                t = SSL_is_string(z_15);
                                                                return(t);
                                                              }
                                                              t = SOpt_2_0(y_2, z_2, t);
                                                              return(t);
                                                            }
                                                            t = list_1_0(s_2, t);
                                                            return(t);
                                                          }
                                                          t = AC_1_0(r_2, t);
                                                          ;
                                                          LocalPopChoice(v_10);
                                                        }
                                                      else
                                                        {
                                                          t = u_10;
                                                          {
                                                            ATerm b_3 (ATerm t)
                                                            {
                                                              ATerm c_3 (ATerm t)
                                                              {
                                                                ATerm f_3 (ATerm t)
                                                                {
                                                                  ATerm g_11 = t;
                                                                  int h_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(!(match_cons(t, sym_VS_0)))
                                                                        _fail(t);
                                                                      ;
                                                                      LocalPopChoice(h_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_11;
                                                                      {
                                                                        ATerm i_11 = t;
                                                                        int j_11 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(!(match_cons(t, sym_HS_0)))
                                                                              _fail(t);
                                                                            ;
                                                                            LocalPopChoice(j_11);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_11;
                                                                            if(!(match_cons(t, sym_IS_0)))
                                                                              _fail(t);
                                                                          }
                                                                      }
                                                                    }
                                                                  return(t);
                                                                }
                                                                ATerm g_3 (ATerm t)
                                                                {
                                                                  ATerm a_16 = NULL;
                                                                  a_16 = t;
                                                                  t = SSL_is_string(a_16);
                                                                  return(t);
                                                                }
                                                                t = SOpt_2_0(f_3, g_3, t);
                                                                return(t);
                                                              }
                                                              t = list_1_0(c_3, t);
                                                              return(t);
                                                            }
                                                            t = AR_1_0(b_3, t);
                                                          }
                                                        }
                                                    }
                                                  }
                                                return(t);
                                              }
                                              t = list_1_0(k_2, t);
                                              return(t);
                                            }
                                            t = AOPTIONS_1_0(j_2, t);
                                            return(t);
                                          }
                                          ATerm h_2 (ATerm t)
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              ATerm j_3 (ATerm t)
                                              {
                                                ATerm o_11 = t;
                                                int p_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(!(match_cons(t, sym_VS_0)))
                                                      _fail(t);
                                                    ;
                                                    LocalPopChoice(p_11);
                                                  }
                                                else
                                                  {
                                                    t = o_11;
                                                    {
                                                      ATerm r_11 = t;
                                                      int s_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_HS_0)))
                                                            _fail(t);
                                                          ;
                                                          LocalPopChoice(s_11);
                                                        }
                                                      else
                                                        {
                                                          t = r_11;
                                                          if(!(match_cons(t, sym_IS_0)))
                                                            _fail(t);
                                                        }
                                                    }
                                                  }
                                                return(t);
                                              }
                                              ATerm k_3 (ATerm t)
                                              {
                                                ATerm b_16 = NULL;
                                                b_16 = t;
                                                t = SSL_is_string(b_16);
                                                return(t);
                                              }
                                              t = SOpt_2_0(j_3, k_3, t);
                                              return(t);
                                            }
                                            t = list_1_0(i_3, t);
                                            return(t);
                                          }
                                          ATerm i_2 (ATerm t)
                                          {
                                            t = list_1_0(Box_0_0, t);
                                            return(t);
                                          }
                                          t = A_3_0(b_2, h_2, i_2, t);
                                          ;
                                          LocalPopChoice(j_10);
                                        }
                                      else
                                        {
                                          t = h_10;
                                          {
                                            ATerm t_11 = t;
                                            int u_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm l_3 (ATerm t)
                                                {
                                                  ATerm n_3 (ATerm t)
                                                  {
                                                    ATerm q_3 (ATerm t)
                                                    {
                                                      ATerm v_11 = t;
                                                      int a_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_VS_0)))
                                                            _fail(t);
                                                          ;
                                                          LocalPopChoice(a_12);
                                                        }
                                                      else
                                                        {
                                                          t = v_11;
                                                          {
                                                            ATerm b_12 = t;
                                                            int c_12 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(!(match_cons(t, sym_HS_0)))
                                                                  _fail(t);
                                                                ;
                                                                LocalPopChoice(c_12);
                                                              }
                                                            else
                                                              {
                                                                t = b_12;
                                                                if(!(match_cons(t, sym_IS_0)))
                                                                  _fail(t);
                                                              }
                                                          }
                                                        }
                                                      return(t);
                                                    }
                                                    ATerm r_3 (ATerm t)
                                                    {
                                                      ATerm c_16 = NULL;
                                                      c_16 = t;
                                                      t = SSL_is_string(c_16);
                                                      return(t);
                                                    }
                                                    t = SOpt_2_0(q_3, r_3, t);
                                                    return(t);
                                                  }
                                                  t = list_1_0(n_3, t);
                                                  return(t);
                                                }
                                                ATerm m_3 (ATerm t)
                                                {
                                                  t = list_1_0(Box_0_0, t);
                                                  return(t);
                                                }
                                                t = R_2_0(l_3, m_3, t);
                                                ;
                                                LocalPopChoice(u_11);
                                              }
                                            else
                                              {
                                                t = t_11;
                                                {
                                                  ATerm d_12 = t;
                                                  int e_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_3 (ATerm t)
                                                      {
                                                        ATerm d_16 = NULL;
                                                        d_16 = t;
                                                        t = SSL_is_string(d_16);
                                                        return(t);
                                                      }
                                                      t = LBL_2_0(s_3, Box_0_0, t);
                                                      ;
                                                      LocalPopChoice(e_12);
                                                    }
                                                  else
                                                    {
                                                      t = d_12;
                                                      {
                                                        ATerm f_12 = t;
                                                        int g_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm w_3 (ATerm t)
                                                            {
                                                              ATerm e_16 = NULL;
                                                              e_16 = t;
                                                              t = SSL_is_string(e_16);
                                                              return(t);
                                                            }
                                                            t = REF_2_0(w_3, Box_0_0, t);
                                                            ;
                                                            LocalPopChoice(g_12);
                                                          }
                                                        else
                                                          {
                                                            t = f_12;
                                                            {
                                                              ATerm h_12 = t;
                                                              int n_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_3 (ATerm t)
                                                                  {
                                                                    ATerm c_4 (ATerm t)
                                                                    {
                                                                      ATerm d_4 (ATerm t)
                                                                      {
                                                                        ATerm o_12 = t;
                                                                        int p_12 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(!(match_cons(t, sym_VS_0)))
                                                                              _fail(t);
                                                                            ;
                                                                            LocalPopChoice(p_12);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_12;
                                                                            {
                                                                              ATerm q_12 = t;
                                                                              int r_12 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(!(match_cons(t, sym_HS_0)))
                                                                                    _fail(t);
                                                                                  ;
                                                                                  LocalPopChoice(r_12);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_12;
                                                                                  if(!(match_cons(t, sym_IS_0)))
                                                                                    _fail(t);
                                                                                }
                                                                            }
                                                                          }
                                                                        return(t);
                                                                      }
                                                                      ATerm e_4 (ATerm t)
                                                                      {
                                                                        ATerm f_16 = NULL;
                                                                        f_16 = t;
                                                                        t = SSL_is_string(f_16);
                                                                        return(t);
                                                                      }
                                                                      t = SOpt_2_0(d_4, e_4, t);
                                                                      return(t);
                                                                    }
                                                                    t = list_1_0(c_4, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm b_4 (ATerm t)
                                                                  {
                                                                    t = list_1_0(Box_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = C_2_0(x_3, b_4, t);
                                                                  ;
                                                                  LocalPopChoice(n_12);
                                                                }
                                                              else
                                                                {
                                                                  t = h_12;
                                                                  {
                                                                    ATerm s_12 = t;
                                                                    int u_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2_0(Box_0_0, Box_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(u_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_12;
                                                                        {
                                                                          ATerm v_12 = t;
                                                                          int w_12 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              ;
                                                                              LocalPopChoice(w_12);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_12;
                                                                              {
                                                                                ATerm b_0 = NULL;
                                                                                b_0 = t;
                                                                                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue))));
                                                                                t = b_0;
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
ATerm _2_0 (ATerm l_54 (ATerm), ATerm m_54 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_16);
  g_16 = t;
  t = h_16;
  t = l_54(t);
  j_16 = t;
  t = i_16;
  t = m_54(t);
  k_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_16, k_16), g_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_16, term_x_12);
  t = open_stream_0_0(t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, p_16);
  t = x_81(t);
  t = fclose_0_0(t);
  t = p_16;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_4, t);
          ;
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          t = term_a_13;
          if(((s_16 != NULL) && (s_16 != t)))
            _fail(t);
          else
            s_16 = t;
        }
      return(t);
    }
    t = _2_0(f_4, _id, t);
    t = r_16;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm q_0 = NULL;
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), q_0);
        return(t);
      }
      t = _2_0(_id, h_4, t);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm l_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(l_4, t);
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              ATerm n_4 (ATerm t)
              {
                ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm d_13 = ATgetArgument(t, 0);
                    if(match_cons(d_13, sym_Stream_1))
                      {
                        t_16 = ATgetArgument(d_13, 0);
                      }
                    else
                      _fail(t);
                    u_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(t_16, u_16);
                v_16 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_16);
                return(t);
              }
              t = WriteToFile_1_0(n_4, t);
              return(t);
            }
            t = _2_0(i_4, j_4, t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm f_13 = ATgetArgument(t, 0);
                      if(match_cons(f_13, sym_Stream_1))
                        {
                          w_16 = ATgetArgument(f_13, 0);
                        }
                      else
                        _fail(t);
                      x_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(w_16, x_16);
                  y_16 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), y_16);
                  z_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
                  return(t);
                }
                t = WriteToFile_1_0(q_4, t);
                return(t);
              }
              t = _2_0(_id, o_4, t);
            }
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
ATerm apply_strategy_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  a_17 = t;
  t = dtime_0_0(t);
  t = a_17;
  t = a_83(t);
  b_17 = t;
  t = dtime_0_0(t);
  c_17 = t;
  t = b_17;
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Runtime_1, c_17)), e_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_17 (ATerm m_17, ATerm t)
  {
    t = SSL_fclose(m_17);
    return(t);
  }
  ATerm p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_17 = ATgetArgument(t, 0);
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_17);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = s_17(q_17, t);
          }
      }
    }
  else
    {
      t = s_17(q_17, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_stdin_stream();
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stdout_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_17 = NULL;
  t = SSL_stderr_stream();
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_17);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      ATerm o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL,g_1 = NULL;
        f_1 = t;
        t = SSL_explode_term(f_1);
        if(match_cons(t, sym__2))
          {
            ATerm r_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_13 = ATgetArgument(t, 1);
              if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
                {
                  g_1 = ATgetFirst((ATermList) s_13);
                  {
                    ATerm t_13 = (ATerm) ATgetNext((ATermList) s_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
              ATerm r_4 (ATerm t)
              {
                ATerm d_18 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    d_18 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_18;
                return(t);
              }
              t = _2_0(r_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_18 = ATgetArgument(t, 0);
                  b_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_18, b_18);
              c_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_18);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              {
                ATerm e_18 = NULL,f_18 = NULL,h_18 = NULL;
                ATerm s_4 (ATerm t)
                {
                  ATerm i_18 = NULL;
                  i_18 = t;
                  t = SSL_is_string(i_18);
                  return(t);
                }
                t = _2_0(s_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_18 = ATgetArgument(t, 0);
                    f_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_18, f_18);
                h_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL;
      m_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_18, term_y_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm h_1 = NULL;
        h_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_1;
        _fail(t);
      }
    }
  j_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_18);
  k_18 = t;
  t = j_18;
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
ATerm fetch_1_0 (ATerm h_68 (ATerm), ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_68, _id, t);
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = Cons_2_0(_id, r_18, t);
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
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
      {
        ATerm u_18 = NULL,v_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_18 = ATgetFirst((ATermList) t);
            v_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_18;
        {
          ATerm u_4 (ATerm t)
          {
            t = v_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm b_19 (ATerm t)
  {
    ATerm d_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_19, t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = d_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_68(t);
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm v_4 (ATerm t)
  {
    ATerm e_19 = NULL;
    e_19 = t;
    t = SSL_explode_string(e_19);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm f_19 = NULL;
    f_19 = t;
    t = SSL_explode_string(f_19);
    return(t);
  }
  t = _2_0(v_4, w_4, t);
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_19 = NULL,i_19 = NULL;
        if(match_cons(t, sym__2))
          {
            h_19 = ATgetArgument(t, 0);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_19;
        {
          ATerm y_4 (ATerm t)
          {
            t = i_19;
            return(t);
          }
          t = at_end_1_0(y_4, t);
        }
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm o_1 = NULL,r_1 = NULL;
          o_1 = t;
          t = SSL_explode_term(o_1);
          if(match_cons(t, sym__2))
            {
              ATerm l_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_1;
          t = concat_0_0(t);
        }
      }
    d_19 = t;
    t = SSL_implode_string(d_19);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_19 = NULL;
      u_19 = t;
      t = SSL_is_string(u_19);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = m_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 (ATerm t)
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = s_14;
                }
              return(t);
            }
            t = map_1_0(z_4, t);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
              y_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_19 = ATgetArgument(t, 0);
                  t = z_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_19 = ATgetArgument(t, 0);
                      t = z_19;
                      {
                        ATerm w_14 = t;
                        int y_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_19);
                            {
                              ATerm c_15 = t;
                              int d_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_3 = NULL;
                                  t = eval_config_0_0(t);
                                  h_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_19, h_3);
                                  t = h_3;
                                  ;
                                  LocalPopChoice(d_15);
                                }
                              else
                                {
                                  t = c_15;
                                }
                            }
                            ;
                            LocalPopChoice(y_14);
                          }
                        else
                          {
                            t = w_14;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = z_19;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_20 = NULL,f_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_19 = ATgetArgument(t, 0);
                          a_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_19;
                      t = eval_config_0_0(t);
                      e_20 = t;
                      t = a_20;
                      t = eval_config_0_0(t);
                      f_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_20, f_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,m_20 = NULL;
      k_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 = NULL;
            t = eval_config_0_0(t);
            o_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_3);
            t = o_3;
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
          }
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_20, term_m_16);
        t = geq_0_0(t);
        t = k_20;
        t = o_79(t);
      }
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm q_20 = NULL;
    q_20 = t;
    if(match_string(t, "-k"))
      {
        t = q_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_20;
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL;
    r_20 = t;
    t = SSL_string_to_int(r_20);
    s_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_20);
    t = r_20;
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_n_16;
    return(t);
  }
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 (ATerm t)
      {
        ATerm u_20 = NULL;
        u_20 = t;
        if(match_string(t, "-S"))
          {
            t = u_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_20;
          }
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_i_17;
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_j_17;
        return(t);
      }
      t = Option_3_0(d_5, e_5, f_5, t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm v_20 = NULL,w_20 = NULL;
              v_20 = t;
              t = SSL_string_to_int(v_20);
              w_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_20);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_20);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_n_17;
              return(t);
            }
            t = ArgOption_3_0(g_5, h_5, k_5, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm m_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_o_17;
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                t = term_r_17;
                return(t);
              }
              t = Option_3_0(m_5, n_5, o_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_21 = NULL;
      t = term_p_7;
      t = d_0(t);
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, b_21);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          a_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = a_0(t);
      t = term_p_7;
      t = c_0(t);
      e_21 = t;
      t = (ATerm) ATinsert(CheckATermList(a_21), e_21);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm g_21 = NULL;
    g_21 = t;
    if(match_string(t, "-o"))
      {
        t = g_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_21;
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm h_21 = NULL;
    h_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_21);
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = ArgOption_3_0(q_5, s_5, t_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__3))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      n_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  {
    ATerm z_17 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_21, m_21);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATempty;
      }
    o_21 = t;
    t = SSL_table_put(l_21, m_21, (ATerm) ATinsert(CheckATermList(o_21), n_21));
    t = (ATerm) ATmakeAppl(sym__3, l_21, m_21, n_21);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_22 = NULL;
      t = term_p_7;
      t = j_0(t);
      c_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, c_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      t = h_0(t);
      t = a_22;
      t = i_0(t);
      g_22 = t;
      t = (ATerm) ATinsert(CheckATermList(b_22), g_22);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm i_22 = NULL;
    i_22 = t;
    if(match_string(t, "-i"))
      {
        t = i_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_22;
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm j_22 = NULL;
    j_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_22);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_22);
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_p_18;
    return(t);
  }
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_7;
  t = whoami_0_0(t);
  k_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 = NULL;
        t = eval_config_0_0(t);
        t_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_3);
        t = t_3;
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = q_18;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t)
{
  ATerm t_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_74(t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = t_18;
      {
        ATerm o_22 = NULL,p_22 = NULL,s_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_22 = ATgetFirst((ATermList) t);
            p_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_22;
        t = foldr_2_0(n_74, o_74, t);
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, s_22);
        t = o_74(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_22 = NULL,u_3 = NULL,v_3 = NULL;
  t = times_0_0(t);
  u_3 = t;
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_h_17;
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm z_3 = NULL,a_4 = NULL;
      if(match_cons(t, sym__2))
        {
          z_3 = ATgetArgument(t, 0);
          a_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(z_3, a_4);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = SSL_addr(z_3, a_4);
          }
      }
      return(t);
    }
    t = foldr_2_0(y_5, z_5, t);
    v_22 = t;
    t = SSL_TicksToSeconds(v_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_23;
        if((m_23 != t))
          {
            _fail(t);
          }
        t = l_23;
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = a_19;
        t = l_23;
        {
          ATerm g_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_23, n_23);
              ;
              LocalPopChoice(j_19);
            }
          else
            {
              t = g_19;
              t = SSL_gtr(m_23, n_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_23, n_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_23 = NULL,s_23 = NULL;
      q_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL;
            t = eval_config_0_0(t);
            k_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_4);
            t = k_4;
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
          }
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, term_o_19);
        t = geq_0_0(t);
        t = q_23;
        t = n_79(t);
      }
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm u_23 = NULL,v_23 = NULL;
    t = run_time_0_0(t);
    u_23 = t;
    t = term_p_7;
    t = whoami_0_0(t);
    v_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_23));
    t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_19), u_23), term_q_19), v_23));
    return(t);
  }
  t = if_verbose1_1_0(a_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 = NULL;
            t = eval_config_0_0(t);
            p_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_4);
            t = p_4;
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
          }
      }
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm d_6 (ATerm t)
        {
          ATerm x_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = x_19;
              {
                ATerm c_20 = t;
                int d_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(d_20);
                  }
                else
                  {
                    t = c_20;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(d_6, t);
      }
    }
  t = y_83(t);
  return(t);
}
ATerm map_1_0 (ATerm w_67 (ATerm), ATerm t)
{
  ATerm w_23 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2_0(w_67, w_23, t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,b_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_23 = ATgetFirst((ATermList) t);
      b_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_24 = NULL,i_24 = NULL;
        t = b_24;
        t = g_0(t);
        f_24 = t;
        t = y_23;
        t = e_0(t);
        i_24 = t;
        t = b_24;
        {
          ATerm e_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_24), i_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, e_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  j_24 = t;
  t = k_24;
  t = m_62(t);
  l_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_24), j_24);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 = NULL;
            t = eval_config_0_0(t);
            t_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_4);
            t = t_4;
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = l_20;
          }
      }
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm g_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(g_6, t);
      }
    }
  t = term_o_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm i_6 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, i_6, t);
    {
      ATerm j_6 (ATerm t)
      {
        ATerm p_24 = NULL;
        p_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_24), term_p_20);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(j_6, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm t)
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
  t = n_62(t);
  s_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_24), q_24);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  {
    ATerm t_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_20 = ATgetFirst((ATermList) t);
                ATerm c_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_24;
          }
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = t_20;
        t = (ATerm) ATinsert(ATempty, x_24);
      }
    y_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_24);
    t = x_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        t = eval_config_0_0(t);
        x_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_4);
        t = x_4;
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = d_21;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_21;
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = term_r_21;
        return(t);
      }
      t = Option_3_0(l_6, m_6, n_6, t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm r_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_21;
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = term_t_21;
          return(t);
        }
        t = Option_3_0(r_6, s_6, t_6, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_55 (ATerm), ATerm v_55 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  h_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_25 = ATgetFirst((ATermList) t);
      e_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  c_25 = t;
  t = d_25;
  t = u_55(t);
  f_25 = t;
  t = e_25;
  t = v_55(t);
  g_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_25), f_25), c_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_21;
        t = w_85(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
      }
    t = l_25;
    {
      ATerm u_6 (ATerm t)
      {
        ATerm m_25 = NULL;
        m_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, m_25);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        ATerm x_21 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                t = w_85(t);
                t = Cons_2_0(_id, w_6, t);
              }
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = x_21;
            {
              ATerm o_25 = NULL,p_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_25 = ATgetFirst((ATermList) t);
                  p_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_25), (ATerm) ATmakeAppl(sym_Undefined_1, o_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_6, w_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_25;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm h_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_85(t);
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = h_22;
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_6 (ATerm t)
                {
                  ATerm z_25 = NULL;
                  z_25 = t;
                  if(match_string(t, "--help"))
                    {
                      t = z_25;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = z_25;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = z_25;
                        }
                    }
                  return(t);
                }
                ATerm z_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_q_22;
                  return(t);
                }
                ATerm a_7 (ATerm t)
                {
                  t = term_r_22;
                  return(t);
                }
                t = Option_3_0(y_6, z_6, a_7, t);
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_26 = NULL;
          e_26 = t;
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_26;
                {
                  ATerm y_22 = t;
                  int z_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm a_23 = t;
                        int b_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_5 = NULL;
                            t = eval_config_0_0(t);
                            r_5 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_5);
                            t = r_5;
                            ;
                            LocalPopChoice(b_23);
                          }
                        else
                          {
                            t = a_23;
                          }
                      }
                      ;
                      LocalPopChoice(z_22);
                    }
                  else
                    {
                      t = y_22;
                      {
                        ATerm b_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(b_7, t);
                      }
                    }
                  t = e_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm c_23 = t;
                  int d_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_5 = NULL;
                      t = eval_config_0_0(t);
                      x_5 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_5);
                      t = x_5;
                      ;
                      LocalPopChoice(d_23);
                    }
                  else
                    {
                      t = c_23;
                    }
                  t = e_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm e_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_7 (ATerm t)
                {
                  ATerm e_7 (ATerm t)
                  {
                    if(((x_25 != NULL) && (x_25 != t)))
                      _fail(t);
                    else
                      x_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_7, t);
                  return(t);
                }
                t = fetch_1_0(d_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_25)), term_g_23));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_23);
              }
            else
              {
                t = e_23;
              }
          }
        }
      y_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t)
{
  ATerm h_26 = NULL;
  t = parse_options_1_0(a_84, t);
  h_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), h_26);
  t = h_26;
  t = c_84(t);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_84, t);
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
              t = d_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_83(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm r_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_23);
            }
          else
            {
              t = r_23;
              {
                ATerm x_23 = t;
                int z_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_23);
                  }
                else
                  {
                    t = x_23;
                    {
                      ATerm a_24 = t;
                      int c_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_7 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm j_7 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_d_24;
                            return(t);
                          }
                          ATerm k_7 (ATerm t)
                          {
                            t = term_e_24;
                            return(t);
                          }
                          t = Option_3_0(i_7, j_7, k_7, t);
                          ;
                          LocalPopChoice(c_24);
                        }
                      else
                        {
                          t = a_24;
                          {
                            ATerm g_24 = t;
                            int h_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_24);
                              }
                            else
                              {
                                t = g_24;
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
  ATerm g_7 (ATerm t)
  {
    ATerm l_7 (ATerm t)
    {
      ATerm i_26 = NULL,j_26 = NULL;
      i_26 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = eval_config_0_0(t);
            b_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_6);
            t = b_6;
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
          }
        j_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, j_26));
        t = i_26;
      }
      return(t);
    }
    t = if_verbose2_1_0(l_7, t);
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm k_26 = NULL,l_26 = NULL,h_6 = NULL;
    k_26 = t;
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_26 != NULL) && (l_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_7, t);
          ;
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          t = term_w_24;
          l_26 = t;
        }
      t = not_null(l_26);
      t = ReadFromFile_0_0(t);
      h_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_26, h_6);
      t = apply_strategy_1_0(j_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_7, l_83, g_7, h_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = _2_0(_id, Box_0_0, t);
    return(t);
  }
  t = iowrap_3_0(o_7, _fail, default_usage_0_0, t);
  return(t);
}
