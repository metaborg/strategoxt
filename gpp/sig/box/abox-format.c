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
ATerm term_e_25;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_k_23;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_b_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_v_20;
ATerm term_i_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_p_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_f_14;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_u_7;
void init_constant_terms (void)
{
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__3, term_i_21, term_j_21, term_u_7);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm L_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm);
ATerm list_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm);
ATerm C_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm);
ATerm REF_2_0 (ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm);
ATerm LBL_2_0 (ATerm r_62 (ATerm), ATerm s_62 (ATerm), ATerm);
ATerm R_2_0 (ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm);
ATerm AR_1_0 (ATerm j_63 (ATerm), ATerm);
ATerm AC_1_0 (ATerm i_63 (ATerm), ATerm);
ATerm AL_1_0 (ATerm h_63 (ATerm), ATerm);
ATerm AOPTIONS_1_0 (ATerm k_63 (ATerm), ATerm);
ATerm A_3_0 (ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm);
ATerm FFID_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm);
ATerm FNAT_2_0 (ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm);
ATerm F_1_0 (ATerm z_62 (ATerm), ATerm);
ATerm FBOX_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm);
ATerm ALT_2_0 (ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm);
ATerm HV_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm V_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm);
ATerm H_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm S_1_0 (ATerm h_62 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm o_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm Box_0_0 (ATerm);
ATerm _2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_89 (ATerm), ATerm);
ATerm s_17 (ATerm m_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_74 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_86 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm need_help_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_92 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm parse_options_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm iowrap_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL;
  e_0 = t;
  t = term_u_7;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm L_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  s_0 = t;
  if(match_cons(t, sym_L_2))
    {
      n_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_0);
  m_0 = t;
  t = n_0;
  t = l_62(t);
  q_0 = t;
  t = p_0;
  t = m_62(t);
  r_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, q_0, r_0), m_0);
  return(t);
}
ATerm list_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = Cons_2_0(l_74, h_1, t);
      }
    return(t);
  }
  t = h_1(t);
  return(t);
}
ATerm SOpt_2_0 (ATerm t_63 (ATerm), ATerm u_63 (ATerm), ATerm t)
{
  ATerm i_1 = NULL,n_1 = NULL,r_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      n_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_1);
  i_1 = t;
  t = n_1;
  t = t_63(t);
  u_1 = t;
  t = r_1;
  t = u_63(t);
  v_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, u_1, v_1), i_1);
  return(t);
}
ATerm C_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_C_2))
    {
      c_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_2);
  b_2 = t;
  t = c_2;
  t = p_62(t);
  f_2 = t;
  t = e_2;
  t = q_62(t);
  h_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, f_2, h_2), b_2);
  return(t);
}
ATerm REF_2_0 (ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_REF_2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  l_2 = t;
  t = m_2;
  t = t_62(t);
  s_2 = t;
  t = n_2;
  t = u_62(t);
  u_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, s_2, u_2), l_2);
  return(t);
}
ATerm LBL_2_0 (ATerm r_62 (ATerm), ATerm s_62 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym_LBL_2))
    {
      a_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  y_2 = t;
  t = a_3;
  t = r_62(t);
  d_3 = t;
  t = c_3;
  t = s_62(t);
  e_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, d_3, e_3), y_2);
  return(t);
}
ATerm R_2_0 (ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL,x_3 = NULL,g_4 = NULL,t_4 = NULL;
  t_4 = t;
  if(match_cons(t, sym_R_2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  j_3 = t;
  t = m_3;
  t = f_63(t);
  x_3 = t;
  t = n_3;
  t = g_63(t);
  g_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, x_3, g_4), j_3);
  return(t);
}
ATerm AR_1_0 (ATerm j_63 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,u_5 = NULL,x_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym_AR_1))
    {
      s_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_5);
  r_5 = t;
  t = s_5;
  t = j_63(t);
  u_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, u_5), r_5);
  return(t);
}
ATerm AC_1_0 (ATerm i_63 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,t_6 = NULL,w_6 = NULL,x_6 = NULL;
  x_6 = t;
  if(match_cons(t, sym_AC_1))
    {
      t_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_6);
  o_6 = t;
  t = t_6;
  t = i_63(t);
  w_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, w_6), o_6);
  return(t);
}
ATerm AL_1_0 (ATerm h_63 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym_AL_1))
    {
      g_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_7);
  f_7 = t;
  t = g_7;
  t = h_63(t);
  h_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, h_7), f_7);
  return(t);
}
ATerm AOPTIONS_1_0 (ATerm k_63 (ATerm), ATerm t)
{
  ATerm x_7 = NULL,g_8 = NULL,p_8 = NULL,v_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      g_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_8);
  x_7 = t;
  t = g_8;
  t = k_63(t);
  p_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, p_8), x_7);
  return(t);
}
ATerm A_3_0 (ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,h_9 = NULL,m_9 = NULL,n_9 = NULL,p_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_A_3))
    {
      h_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
      n_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_9);
  c_9 = t;
  t = h_9;
  t = c_63(t);
  p_9 = t;
  t = m_9;
  t = d_63(t);
  t_9 = t;
  t = n_9;
  t = e_63(t);
  u_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, p_9, t_9, u_9), c_9);
  return(t);
}
ATerm FFID_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,b_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_FFID_2))
    {
      o_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  n_10 = t;
  t = o_10;
  t = x_62(t);
  v_10 = t;
  t = s_10;
  t = y_62(t);
  w_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, v_10, w_10), n_10);
  return(t);
}
ATerm FNAT_2_0 (ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL,n_11 = NULL,o_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      f_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_11);
  e_11 = t;
  t = f_11;
  t = v_62(t);
  i_11 = t;
  t = h_11;
  t = w_62(t);
  n_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, i_11, n_11), e_11);
  return(t);
}
ATerm F_1_0 (ATerm z_62 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  x_11 = t;
  if(match_cons(t, sym_F_1))
    {
      v_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_11);
  s_11 = t;
  t = v_11;
  t = z_62(t);
  w_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, w_11), s_11);
  return(t);
}
ATerm FBOX_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,h_12 = NULL,i_12 = NULL,m_12 = NULL,n_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_FBOX_2))
    {
      e_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  d_12 = t;
  t = e_12;
  t = a_63(t);
  i_12 = t;
  t = h_12;
  t = b_63(t);
  m_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, i_12, m_12), d_12);
  return(t);
}
ATerm ALT_2_0 (ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,t_12 = NULL,u_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_ALT_2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_13);
  q_12 = t;
  t = t_12;
  t = l_63(t);
  z_12 = t;
  t = u_12;
  t = m_63(t);
  a_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, z_12, a_13), q_12);
  return(t);
}
ATerm HV_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,p_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_HV_2))
    {
      p_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_14);
  m_13 = t;
  t = p_13;
  t = r_63(t);
  v_13 = t;
  t = u_13;
  t = s_63(t);
  x_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, v_13, x_13), m_13);
  return(t);
}
ATerm V_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,i_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_V_2))
    {
      i_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  d_14 = t;
  t = i_14;
  t = p_63(t);
  s_14 = t;
  t = r_14;
  t = q_63(t);
  t_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, s_14, t_14), d_14);
  return(t);
}
ATerm H_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,e_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_H_2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  x_14 = t;
  t = y_14;
  t = n_63(t);
  a_15 = t;
  t = z_14;
  t = o_63(t);
  b_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, a_15, b_15), x_14);
  return(t);
}
ATerm S_1_0 (ATerm h_62 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,m_15 = NULL,o_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_S_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  i_15 = t;
  t = l_15;
  t = h_62(t);
  m_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, m_15), i_15);
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm s_15 = NULL;
  s_15 = t;
  t = SSL_is_string(s_15);
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = list_1_0(v_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = list_1_0(Box_0_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = SOpt_2_0(w_0, x_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = SSL_is_string(t_15);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = list_1_0(a_1, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = list_1_0(Box_0_0, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = SOpt_2_0(b_1, c_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_is_string(u_15);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = list_1_0(f_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = list_1_0(Box_0_0, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = SOpt_2_0(g_1, j_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = SSL_is_string(v_15);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F_1_0(p_1, t);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_KW_0)))
              _fail(t);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm q_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_VAR_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  {
                    ATerm s_8 = t;
                    int t_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_NUM_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(t_8);
                      }
                    else
                      {
                        t = s_8;
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
ATerm p_1 (ATerm t)
{
  t = list_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm u_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FNAT_2_0(s_1, t_1, t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = u_8;
      t = FFID_2_0(y_1, z_1, t);
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_FN_0)))
        _fail(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_FM_0)))
              _fail(t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            {
              ATerm b_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_SE_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = b_9;
                  {
                    ATerm e_9 = t;
                    int f_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_SH_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_9);
                      }
                    else
                      {
                        t = e_9;
                        {
                          ATerm g_9 = t;
                          int i_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_SZ_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_9);
                            }
                          else
                            {
                              t = g_9;
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
ATerm t_1 (ATerm t)
{
  ATerm w_15 = NULL;
  w_15 = t;
  t = SSL_is_string(w_15);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_FN_0)))
        _fail(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm l_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_FM_0)))
              _fail(t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = l_9;
            {
              ATerm q_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_SE_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = q_9;
                  {
                    ATerm s_9 = t;
                    int w_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_SH_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(w_9);
                      }
                    else
                      {
                        t = s_9;
                        {
                          ATerm x_9 = t;
                          int y_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_SZ_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(y_9);
                            }
                          else
                            {
                              t = x_9;
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
ATerm z_1 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_is_string(x_15);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = AOPTIONS_1_0(k_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = list_1_0(l_3, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = list_1_0(Box_0_0, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = list_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1_0(p_2, t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AC_1_0(w_2, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            t = AR_1_0(g_3, t);
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = list_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = SOpt_2_0(r_2, t_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  t = SSL_is_string(y_15);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = list_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = SOpt_2_0(z_2, b_3, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  t = SSL_is_string(z_15);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = list_1_0(h_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = SOpt_2_0(i_3, k_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  t = SSL_is_string(a_16);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = SOpt_2_0(o_3, p_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm r_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = r_10;
      {
        ATerm u_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = u_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_is_string(b_16);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = list_1_0(s_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = list_1_0(Box_0_0, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = SOpt_2_0(t_3, v_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = a_11;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_is_string(c_16);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  t = SSL_is_string(d_16);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  t = SSL_is_string(e_16);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = list_1_0(b_4, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = list_1_0(Box_0_0, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = SOpt_2_0(d_4, e_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm d_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = d_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
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
ATerm Box_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1_0(k_0, t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = H_2_0(o_0, t_0, t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm r_11 = t;
              int t_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = V_2_0(y_0, z_0, t);
                  ;
                  LocalPopChoice(t_11);
                }
              else
                {
                  t = r_11;
                  {
                    ATerm u_11 = t;
                    int y_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = HV_2_0(d_1, e_1, t);
                        ;
                        LocalPopChoice(y_11);
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm z_11 = t;
                          int a_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2_0(Box_0_0, Box_0_0, t);
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
                                    t = FBOX_2_0(k_1, Box_0_0, t);
                                    ;
                                    LocalPopChoice(c_12);
                                  }
                                else
                                  {
                                    t = b_12;
                                    {
                                      ATerm f_12 = t;
                                      int g_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = A_3_0(d_2, g_2, j_2, t);
                                          ;
                                          LocalPopChoice(g_12);
                                        }
                                      else
                                        {
                                          t = f_12;
                                          {
                                            ATerm j_12 = t;
                                            int k_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = R_2_0(q_3, r_3, t);
                                                ;
                                                LocalPopChoice(k_12);
                                              }
                                            else
                                              {
                                                t = j_12;
                                                {
                                                  ATerm l_12 = t;
                                                  int o_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LBL_2_0(w_3, Box_0_0, t);
                                                      ;
                                                      LocalPopChoice(o_12);
                                                    }
                                                  else
                                                    {
                                                      t = l_12;
                                                      {
                                                        ATerm p_12 = t;
                                                        int r_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = REF_2_0(y_3, Box_0_0, t);
                                                            ;
                                                            LocalPopChoice(r_12);
                                                          }
                                                        else
                                                          {
                                                            t = p_12;
                                                            {
                                                              ATerm s_12 = t;
                                                              int v_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = C_2_0(z_3, a_4, t);
                                                                  ;
                                                                  LocalPopChoice(v_12);
                                                                }
                                                              else
                                                                {
                                                                  t = s_12;
                                                                  {
                                                                    ATerm w_12 = t;
                                                                    int x_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2_0(Box_0_0, Box_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(x_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_12;
                                                                        {
                                                                          ATerm y_12 = t;
                                                                          int c_13 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              ;
                                                                              LocalPopChoice(c_13);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_12;
                                                                              {
                                                                                ATerm c_0 = NULL;
                                                                                c_0 = t;
                                                                                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue))));
                                                                                t = c_0;
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
ATerm _2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm t)
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
  t = q_57(t);
  j_16 = t;
  t = i_16;
  t = r_57(t);
  k_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_16, k_16), g_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_16, term_d_13);
  t = open_stream_0_0(t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, p_16);
  t = i_88(t);
  t = fclose_0_0(t);
  t = p_16;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = fetch_1_0(q_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = WriteToFile_1_0(r_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(match_cons(e_13, sym_Stream_1))
        {
          t_16 = ATgetArgument(e_13, 0);
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
ATerm s_4 (ATerm t)
{
  t = WriteToFile_1_0(u_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
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
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_4 (ATerm t)
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
          t = fetch_1_0(k_4, t);
          ;
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          t = term_i_13;
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
      ATerm l_4 (ATerm t)
      {
        ATerm u_0 = NULL;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), u_0);
        return(t);
      }
      t = _2_0(_id, l_4, t);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(o_4, p_4, t);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = _2_0(_id, s_4, t);
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
ATerm apply_strategy_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  a_17 = t;
  t = dtime_0_0(t);
  t = a_17;
  t = l_89(t);
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
ATerm s_17 (ATerm m_17, ATerm t)
{
  t = SSL_fclose(m_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_17 = ATgetArgument(t, 0);
      {
        ATerm l_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_17);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = l_13;
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
ATerm v_4 (ATerm t)
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
ATerm w_4 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_is_string(h_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_13 = ATgetArgument(t, 0);
      ATerm q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL;
        l_1 = t;
        t = SSL_explode_term(l_1);
        if(match_cons(t, sym__2))
          {
            ATerm t_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_13 = ATgetArgument(t, 1);
              if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
                {
                  m_1 = ATgetFirst((ATermList) w_13);
                  {
                    ATerm y_13 = (ATerm) ATgetNext((ATermList) w_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        {
          ATerm z_13 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
              t = _2_0(v_4, _id, t);
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
              LocalPopChoice(b_14);
            }
          else
            {
              t = z_13;
              {
                ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                t = _2_0(w_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_18 = ATgetArgument(t, 0);
                    f_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_18, f_18);
                g_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  ATerm c_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL;
      l_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, term_f_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = c_14;
      {
        ATerm o_1 = NULL;
        o_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_1;
        _fail(t);
      }
    }
  i_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_18);
  j_18 = t;
  t = i_18;
  t = fclose_0_0(t);
  t = j_18;
  return(t);
}
ATerm fetch_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm q_18 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_74, _id, t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = Cons_2_0(_id, q_18, t);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm t_18 = NULL,u_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_18 = ATgetFirst((ATermList) t);
            u_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_18;
        {
          ATerm x_4 (ATerm t)
          {
            t = u_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_74 (ATerm), ATerm t)
{
  ATerm b_19 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_19, t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_74(t);
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_explode_string(e_19);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = SSL_explode_string(f_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = _2_0(y_4, z_4, t);
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
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
          ATerm a_5 (ATerm t)
          {
            t = i_19;
            return(t);
          }
          t = at_end_1_0(a_5, t);
        }
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm w_1 = NULL,a_2 = NULL;
          w_1 = t;
          t = SSL_explode_term(w_1);
          if(match_cons(t, sym__2))
            {
              ATerm p_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_2;
          t = concat_0_0(t);
        }
      }
    d_19 = t;
    t = SSL_implode_string(d_19);
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm q_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = q_14;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL;
      s_19 = t;
      t = SSL_is_string(s_19);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = w_14;
      {
        ATerm d_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_5, t);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = d_15;
            {
              ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
              w_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_19 = ATgetArgument(t, 0);
                  t = x_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_19 = ATgetArgument(t, 0);
                      t = x_19;
                      {
                        ATerm g_15 = t;
                        int h_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_19);
                            {
                              ATerm j_15 = t;
                              int k_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_3 = NULL;
                                  t = eval_config_0_0(t);
                                  u_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_19, u_3);
                                  t = u_3;
                                  ;
                                  LocalPopChoice(k_15);
                                }
                              else
                                {
                                  t = j_15;
                                }
                            }
                            ;
                            LocalPopChoice(h_15);
                          }
                        else
                          {
                            t = g_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = x_19;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_20 = NULL,d_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_19 = ATgetArgument(t, 0);
                          y_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_19;
                      t = eval_config_0_0(t);
                      c_20 = t;
                      t = y_19;
                      t = eval_config_0_0(t);
                      d_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_20, d_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm n_15 = t;
  int p_15 = stack_ptr;
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
            ATerm c_4 = NULL;
            t = eval_config_0_0(t);
            c_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_4);
            t = c_4;
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
        t = g_86(t);
      }
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  if(match_string(t, "-k"))
    {
      t = o_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_20;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  p_20 = t;
  t = SSL_string_to_int(p_20);
  q_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_20);
  t = p_20;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, g_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-S"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_g_17;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t_20 = t;
  t = SSL_string_to_int(t_20);
  u_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_20);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_20);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_17;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_5, i_5, k_5, t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      {
        ATerm o_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_5, m_5, n_5, t);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = o_17;
            t = Option_3_0(p_5, q_5, t_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_20 = NULL;
      t = term_u_7;
      t = d_0(t);
      z_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, z_20);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_20 = ATgetFirst((ATermList) t);
          y_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_20;
      t = a_0(t);
      t = term_u_7;
      t = b_0(t);
      c_21 = t;
      t = (ATerm) ATinsert(CheckATermList(y_20), c_21);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  if(match_string(t, "-o"))
    {
      t = e_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_21;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_21);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_21);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, y_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__3))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      m_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_21, l_21);
  {
    ATerm z_17 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_21, l_21);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATempty;
      }
    n_21 = t;
    t = SSL_table_put(k_21, l_21, (ATerm) ATinsert(CheckATermList(n_21), m_21));
    t = (ATerm) ATmakeAppl(sym__3, k_21, l_21, m_21);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_22 = NULL;
      t = term_u_7;
      t = j_0(t);
      a_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, a_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_21 = ATgetFirst((ATermList) t);
          w_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_21;
      t = h_0(t);
      t = x_21;
      t = i_0(t);
      e_22 = t;
      t = (ATerm) ATinsert(CheckATermList(y_21), e_22);
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  if(match_string(t, "-i"))
    {
      t = g_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_22;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), h_22);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_22);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_7;
  t = whoami_0_0(t);
  i_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), i_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = eval_config_0_0(t);
        h_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_4);
        t = h_4;
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_80(t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm l_22 = NULL,m_22 = NULL,p_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_22 = ATgetFirst((ATermList) t);
            m_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_22;
        t = foldr_2_0(y_80, z_80, t);
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_22, p_22);
        t = z_80(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_4, n_4);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = SSL_addr(m_4, n_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_22 = NULL,i_4 = NULL,j_4 = NULL;
  t = times_0_0(t);
  i_4 = t;
  t = SSL_explode_term(i_4);
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4;
  t = foldr_2_0(c_6, d_6, t);
  s_22 = t;
  t = SSL_TicksToSeconds(s_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_23;
        if((e_23 != t))
          {
            _fail(t);
          }
        t = d_23;
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = a_19;
        t = d_23;
        {
          ATerm g_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_23, f_23);
              ;
              LocalPopChoice(j_19);
            }
          else
            {
              t = g_19;
              t = SSL_gtr(e_23, f_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL,m_23 = NULL;
      j_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 = NULL;
            t = eval_config_0_0(t);
            b_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_5);
            t = b_5;
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
          }
        m_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_23, term_o_19);
        t = geq_0_0(t);
        t = j_23;
        t = f_86(t);
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
ATerm e_6 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  t = run_time_0_0(t);
  o_23 = t;
  t = term_u_7;
  t = whoami_0_0(t);
  p_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_23));
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_19), o_23), term_q_19), p_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm v_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = v_19;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 = NULL;
            t = eval_config_0_0(t);
            f_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_5);
            t = f_5;
            ;
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
          }
      }
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      t = fetch_1_0(f_6, t);
    }
  t = j_90(t);
  return(t);
}
ATerm map_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm q_23 (ATerm t)
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
        t = Cons_2_0(h_74, q_23, t);
      }
    return(t);
  }
  t = q_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_23 = ATgetFirst((ATermList) t);
      t_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_23 = NULL,y_23 = NULL;
        t = t_23;
        t = g_0(t);
        x_23 = t;
        t = s_23;
        t = f_0(t);
        y_23 = t;
        t = t_23;
        {
          ATerm g_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_23), y_23);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  c_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_24);
  z_23 = t;
  t = a_24;
  t = x_68(t);
  b_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_24), z_23);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_24), term_i_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 = NULL;
            t = eval_config_0_0(t);
            j_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_5);
            t = j_5;
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = n_20;
          }
      }
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = j_20;
      t = fetch_1_0(h_6, t);
    }
  t = term_v_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, i_6, t);
  t = map_1_0(k_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_24);
  g_24 = t;
  t = j_24;
  t = y_68(t);
  k_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_24), g_24);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  p_24 = t;
  {
    ATerm w_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_21 = ATgetFirst((ATermList) t);
                ATerm d_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_24;
          }
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = w_20;
        t = (ATerm) ATinsert(ATempty, p_24);
      }
    q_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_24);
    t = p_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = eval_config_0_0(t);
        o_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_5);
        t = o_5;
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_21;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_21;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_6, m_6, n_6, t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      t = Option_3_0(p_6, q_6, r_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  b_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_24 = ATgetFirst((ATermList) t);
      w_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  u_24 = t;
  t = v_24;
  t = f_62(t);
  z_24 = t;
  t = w_24;
  t = g_62(t);
  a_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_25), z_24), u_24);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, g_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  {
    ATerm u_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_22;
        t = h_92(t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = u_21;
      }
    t = f_25;
    {
      ATerm v_6 (ATerm t)
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = f_22;
                t = h_92(t);
                t = Cons_2_0(_id, v_6, t);
              }
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            {
              ATerm i_25 = NULL,j_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_25 = ATgetFirst((ATermList) t);
                  j_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_25), (ATerm) ATmakeAppl(sym_Undefined_1, i_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_6, v_6, t);
    }
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  if(match_string(t, "--help"))
    {
      t = u_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_25;
        }
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_22;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,t_25 = NULL;
  q_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_25;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm o_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_92(t);
          ;
          LocalPopChoice(q_22);
        }
      else
        {
          t = o_22;
          {
            ATerm r_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_7, b_7, c_7, t);
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = r_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_6, t);
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_25 = NULL;
          z_25 = t;
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_25;
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
                            ATerm j_6 = NULL;
                            t = eval_config_0_0(t);
                            j_6 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), j_6);
                            t = j_6;
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
                      t = fetch_1_0(d_7, t);
                    }
                  t = z_25;
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
                  int g_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_6 = NULL;
                      t = eval_config_0_0(t);
                      s_6 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_6);
                      t = s_6;
                      ;
                      LocalPopChoice(g_23);
                    }
                  else
                    {
                      t = c_23;
                    }
                  t = z_25;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          {
            ATerm h_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_7 (ATerm t)
                {
                  ATerm k_7 (ATerm t)
                  {
                    if(((r_25 != NULL) && (r_25 != t)))
                      _fail(t);
                    else
                      r_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_7, t);
                  return(t);
                }
                t = fetch_1_0(j_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_25)), term_k_23));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_23);
              }
            else
              {
                t = h_23;
              }
          }
        }
      t_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm c_26 = NULL;
  t = parse_options_1_0(l_90, t);
  c_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_26);
  t = c_26;
  t = n_90(t);
  {
    ATerm l_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_90, t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = l_23;
        {
          ATerm r_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = r_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = if_verbose2_1_0(r_7, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_23;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        t = eval_config_0_0(t);
        z_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_6);
        t = z_6;
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
      }
    e_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_26));
    t = d_26;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm o_24 = t;
                int r_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_24);
                  }
                else
                  {
                    t = o_24;
                    {
                      ATerm s_24 = t;
                      int t_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_7, p_7, q_7, t);
                          ;
                          LocalPopChoice(t_24);
                        }
                      else
                        {
                          t = s_24;
                          {
                            ATerm x_24 = t;
                            int y_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(y_24);
                              }
                            else
                              {
                                t = x_24;
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
  ATerm n_7 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,e_7 = NULL;
    f_26 = t;
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_26 != NULL) && (g_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_7, t);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          t = term_e_25;
          g_26 = t;
        }
      t = not_null(g_26);
      t = ReadFromFile_0_0(t);
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_26, e_7);
      t = apply_strategy_1_0(u_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(l_7, w_89, m_7, n_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = _2_0(_id, Box_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_7, _fail, default_usage_0_0, t);
  return(t);
}
