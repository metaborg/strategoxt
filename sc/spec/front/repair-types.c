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
ATerm term_z_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_k_13;
ATerm term_r_0;
void init_constant_terms (void)
{
  ATprotect(&(term_r_0));
  term_r_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__3, term_x_20, term_u_23, term_r_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm v_1 (ATerm x_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm RepairVarDec_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm);
ATerm map1_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm u_15 (ATerm);
ATerm x_15 (ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm _2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_111 (ATerm), ATerm);
ATerm y_5 (ATerm s_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_92 (ATerm), ATerm);
ATerm k_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_109 (ATerm), ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm c_17 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_109 (ATerm), ATerm);
ATerm f_17 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_17 (ATerm);
ATerm need_help_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm);
ATerm r_17 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_114 (ATerm), ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm parse_options_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm iowrap_3_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm);
ATerm i_18 (ATerm);
ATerm j_18 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,k_0 = NULL,l_0 = NULL,p_0 = NULL,q_0 = NULL,t_0 = NULL,u_0 = NULL;
  c_0 = t;
  t = term_r_0;
  t = whoami_0_0(t);
  e_0 = t;
  p_0 = t;
  t = term_k_13;
  k_0 = t;
  t = p_0;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_18), e_0), term_k_18);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  u_0 = t;
  t = term_m_18;
  t_0 = t;
  t = SSL_exit(t_0);
  t = c_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,y_0 = NULL,b_1 = NULL;
  y_0 = t;
  t = term_k_13;
  v_0 = t;
  t = y_0;
  b_1 = t;
  t = (ATerm) ATinsert(ATempty, term_n_18);
  w_0 = t;
  t = SSL_printnl(v_0, w_0);
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, (ATerm) ATinsert(ATempty, term_n_18));
  return(t);
}
ATerm at_end_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_0, t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_92(t);
      }
    return(t);
  }
  t = s_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm n_0 = NULL,o_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_0 = ATgetFirst((ATermList) t);
            o_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_0;
        {
          ATerm j_15 (ATerm t)
          {
            t = o_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_15, t);
        }
      }
    }
  return(t);
}
ATerm v_1 (ATerm x_0, ATerm t)
{
  ATerm z_0 = NULL;
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_1 = NULL,i_1 = NULL,j_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_15 (ATerm t)
            {
              t = i_1;
              return(t);
            }
            t = a_1;
            t = at_end_1_0(k_15, t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = v_1(j_1, t);
          }
      }
    }
  else
    {
      t = v_1(j_1, t);
    }
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_1 = ATgetArgument(t, 0);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(match_cons(v_18, sym_FunType_2))
          {
            ATerm w_18 = ATgetArgument(v_18, 0);
            if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
              {
                ATerm x_18 = ATgetFirst((ATermList) w_18);
                if(match_cons(x_18, sym_ConstType_1))
                  {
                    c_2 = ATgetArgument(x_18, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm y_18 = (ATerm) ATgetNext((ATermList) w_18);
                  d_2 = y_18;
                  if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
                    {
                      ATerm z_18 = ATgetFirst((ATermList) y_18);
                      if(match_cons(z_18, sym_FunType_2))
                        {
                          ATerm b_19 = ATgetArgument(z_18, 0);
                          ATerm c_19 = ATgetArgument(z_18, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm a_19 = (ATerm) ATgetNext((ATermList) y_18);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            f_2 = ATgetArgument(v_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  g_2 = t;
  t = o_84(t);
  h_2 = t;
  t = g_2;
  t = p_84(t);
  j_2 = t;
  e_1 = t;
  t = term_k_13;
  c_1 = t;
  t = e_1;
  f_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_19), j_2), term_f_19), h_2), term_e_19), z_1), term_d_19);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, c_2)));
  t = conc_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_1, (ATerm) ATmakeAppl(sym_FunType_2, k_2, f_2));
  return(t);
}
ATerm map1_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_92, _id, t);
      {
        ATerm l_15 (ATerm t)
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_92, t);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_15, t);
      }
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm m_15 (ATerm t)
        {
          t = map1_1_0(l_92, t);
          return(t);
        }
        t = Cons_2_0(_id, m_15, t);
      }
    }
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm n_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
      s_2 = ATgetArgument(t, 2);
      n_2 = ATgetArgument(t, 3);
      {
        ATerm b_3 = NULL;
        t = r_2;
        {
          ATerm n_15 (ATerm t)
          {
            ATerm p_15 (ATerm t)
            {
              t = q_2;
              return(t);
            }
            t = RepairVarDec_2_0(o_15, p_15, t);
            return(t);
          }
          t = map1_1_0(n_15, t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, q_2, b_3, s_2, n_2);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          q_2 = ATgetArgument(t, 0);
          r_2 = ATgetArgument(t, 1);
          s_2 = ATgetArgument(t, 2);
          {
            ATerm f_3 = NULL;
            t = r_2;
            {
              ATerm q_15 (ATerm t)
              {
                ATerm s_15 (ATerm t)
                {
                  t = q_2;
                  return(t);
                }
                t = RepairVarDec_2_0(r_15, s_15, t);
                return(t);
              }
              t = map1_1_0(q_15, t);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, q_2, f_3, s_2);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_2 = ATgetArgument(t, 0);
              r_2 = ATgetArgument(t, 1);
              s_2 = ATgetArgument(t, 2);
              n_2 = ATgetArgument(t, 3);
              {
                ATerm n_3 = NULL;
                t = r_2;
                {
                  ATerm t_15 (ATerm t)
                  {
                    ATerm v_15 (ATerm t)
                    {
                      t = q_2;
                      return(t);
                    }
                    t = RepairVarDec_2_0(u_15, v_15, t);
                    return(t);
                  }
                  t = map1_1_0(t_15, t);
                  n_3 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_2, n_3, s_2, n_2);
                }
              }
            }
          else
            {
              ATerm u_3 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  q_2 = ATgetArgument(t, 0);
                  r_2 = ATgetArgument(t, 1);
                  s_2 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_2;
              {
                ATerm w_15 (ATerm t)
                {
                  ATerm y_15 (ATerm t)
                  {
                    t = q_2;
                    return(t);
                  }
                  t = RepairVarDec_2_0(x_15, y_15, t);
                  return(t);
                }
                t = map1_1_0(w_15, t);
                u_3 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, q_2, u_3, s_2);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_87(t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = SRTS_some(v_3, t);
      }
    return(t);
  }
  t = v_3(t);
  return(t);
}
ATerm _2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,n_4 = NULL,o_4 = NULL,g_1 = NULL,h_1 = NULL;
  o_4 = t;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  c_4 = t;
  t = h_4;
  t = b_67(t);
  j_4 = t;
  t = i_4;
  t = c_67(t);
  n_4 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_4, n_4);
  g_1 = t;
  t = SSLsetAnnotations(g_1, c_4);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_4, term_p_19);
  t = open_stream_0_0(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, t_4);
  t = c_108(t);
  t = fclose_0_0(t);
  t = t_4;
  return(t);
}
ATerm c_16 (ATerm t)
{
  t = fetch_1_0(e_16, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = WriteToFile_1_0(f_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_19 = ATgetArgument(t, 0);
      if(match_cons(q_19, sym_Stream_1))
        {
          x_4 = ATgetArgument(q_19, 0);
        }
      else
        _fail(t);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(x_4, y_4);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_4);
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = WriteToFile_1_0(h_16, t);
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,k_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(match_cons(r_19, sym_Stream_1))
        {
          a_5 = ATgetArgument(r_19, 0);
        }
      else
        _fail(t);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_5, b_5);
  c_5 = t;
  o_1 = t;
  t = term_s_19;
  k_1 = t;
  t = SSL_fputc(k_1, c_5);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_5);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  v_4 = t;
  {
    ATerm z_15 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_4 != NULL) && (w_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_16, t);
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          t = term_v_19;
          if(((w_4 != NULL) && (w_4 != t)))
            _fail(t);
          else
            w_4 = t;
        }
      return(t);
    }
    t = _2_0(z_15, _id, t);
    t = v_4;
    {
      ATerm b_16 (ATerm t)
      {
        ATerm m_0 = NULL;
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), m_0);
        return(t);
      }
      t = _2_0(_id, b_16, t);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(c_16, d_16, t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = _2_0(_id, g_16, t);
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
ATerm apply_strategy_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  f_5 = t;
  t = dtime_0_0(t);
  t = f_5;
  t = e_111(t);
  g_5 = t;
  t = dtime_0_0(t);
  h_5 = t;
  t = g_5;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_5), (ATerm) ATmakeAppl(sym_Runtime_1, h_5)), j_5);
  return(t);
}
ATerm y_5 (ATerm s_5, ATerm t)
{
  t = SSL_fclose(s_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_5 = ATgetArgument(t, 0);
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_5);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            t = y_5(w_5, t);
          }
      }
    }
  else
    {
      t = y_5(w_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_5 = NULL;
  t = SSL_stdin_stream();
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_6 = NULL;
  t = SSL_stdout_stream();
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_6 = NULL;
  t = SSL_stderr_stream();
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_6);
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm l_6 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      l_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6;
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm p_6 = NULL;
  p_6 = t;
  t = SSL_is_string(p_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_20 = ATgetArgument(t, 0);
      ATerm b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL;
        l_1 = t;
        t = SSL_explode_term(l_1);
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_20 = ATgetArgument(t, 1);
              if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
                {
                  m_1 = ATgetFirst((ATermList) f_20);
                  {
                    ATerm g_20 = (ATerm) ATgetNext((ATermList) f_20);
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
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
              t = _2_0(i_16, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_6 = ATgetArgument(t, 0);
                  j_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_6, j_6);
              k_6 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_6);
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              {
                ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
                t = _2_0(j_16, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_6 = ATgetArgument(t, 0);
                    n_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_6, n_6);
                o_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_6 = NULL;
      t_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_6, term_l_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
        n_1 = t;
        t = term_m_20;
        r_1 = t;
        t = term_k_13;
        p_1 = t;
        t = r_1;
        s_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_1), term_m_20);
        q_1 = t;
        t = SSL_printnl(p_1, q_1);
        t = n_1;
        _fail(t);
      }
    }
  q_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_6);
  r_6 = t;
  t = q_6;
  t = fclose_0_0(t);
  t = r_6;
  return(t);
}
ATerm fetch_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_92, _id, t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = Cons_2_0(_id, y_6, t);
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 = NULL;
      h_7 = t;
      t = SSL_is_string(h_7);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_16, t);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
              y_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_7 = ATgetArgument(t, 0);
                  t = z_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_7 = ATgetArgument(t, 0);
                      t = z_7;
                      {
                        ATerm v_20 = t;
                        int w_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_1 = NULL,u_1 = NULL;
                            u_1 = t;
                            t = term_x_20;
                            t_1 = t;
                            t = SSL_table_get(t_1, z_7);
                            {
                              ATerm y_20 = t;
                              int z_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_3 = NULL,w_1 = NULL,x_1 = NULL;
                                  t = eval_config_0_0(t);
                                  i_3 = t;
                                  x_1 = t;
                                  t = term_x_20;
                                  w_1 = t;
                                  t = SSL_table_put(w_1, z_7, i_3);
                                  t = i_3;
                                  ;
                                  LocalPopChoice(z_20);
                                }
                              else
                                {
                                  t = y_20;
                                }
                            }
                            ;
                            LocalPopChoice(w_20);
                          }
                        else
                          {
                            t = v_20;
                            {
                              ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL,e_2 = NULL;
                              t = term_a_21;
                              b_2 = t;
                              t = term_k_13;
                              y_1 = t;
                              t = b_2;
                              e_2 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, z_7), term_a_21);
                              a_2 = t;
                              t = SSL_printnl(y_1, a_2);
                              t = z_7;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm a_4 = NULL,b_4 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_7 = ATgetArgument(t, 0);
                          a_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_7;
                      t = eval_config_0_0(t);
                      a_4 = t;
                      t = a_8;
                      t = eval_config_0_0(t);
                      b_4 = t;
                      t = SSL_strcat(a_4, b_4);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,k_8 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,o_2 = NULL;
      i_8 = t;
      t = term_d_21;
      m_2 = t;
      t = term_x_20;
      i_2 = t;
      t = m_2;
      o_2 = t;
      t = term_d_21;
      l_2 = t;
      t = SSL_table_get(i_2, l_2);
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 = NULL,p_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
            t = eval_config_0_0(t);
            m_4 = t;
            u_2 = t;
            t = term_x_20;
            p_2 = t;
            t = u_2;
            v_2 = t;
            t = term_d_21;
            t_2 = t;
            t = SSL_table_put(p_2, t_2, m_4);
            t = m_4;
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
          }
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_8, term_g_21);
        t = geq_0_0(t);
        t = i_8;
        t = n_109(t);
      }
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  if(match_string(t, "-k"))
    {
      t = m_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_8;
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  n_8 = t;
  t = SSL_string_to_int(n_8);
  o_8 = t;
  y_2 = t;
  t = term_x_20;
  w_2 = t;
  t = y_2;
  z_2 = t;
  t = term_h_21;
  x_2 = t;
  t = SSL_table_put(w_2, x_2, o_8);
  t = n_8;
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_16, m_16, n_16, t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  if(match_string(t, "-S"))
    {
      t = t_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_8;
    }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL;
  e_3 = t;
  t = term_x_20;
  a_3 = t;
  t = e_3;
  g_3 = t;
  t = term_d_21;
  c_3 = t;
  t = g_3;
  h_3 = t;
  t = term_j_21;
  d_3 = t;
  t = SSL_table_put(a_3, c_3, d_3);
  t = term_k_21;
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm u_8 = NULL,w_8 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  u_8 = t;
  t = SSL_string_to_int(u_8);
  w_8 = t;
  l_3 = t;
  t = term_x_20;
  j_3 = t;
  t = l_3;
  m_3 = t;
  t = term_d_21;
  k_3 = t;
  t = SSL_table_put(j_3, k_3, w_8);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_8);
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  t = term_x_20;
  o_3 = t;
  t = r_3;
  s_3 = t;
  t = term_n_21;
  p_3 = t;
  t = s_3;
  t_3 = t;
  t = term_r_0;
  q_3 = t;
  t = SSL_table_put(o_3, p_3, q_3);
  t = term_o_21;
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_16, p_16, q_16, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_16, s_16, t_16, t);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = Option_3_0(u_16, v_16, w_16, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,d_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_9 = NULL;
      t = term_r_0;
      t = d_0(t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_21, term_v_21, e_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm i_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_8 = ATgetFirst((ATermList) t);
          d_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_8;
      t = a_0(t);
      t = term_r_0;
      t = b_0(t);
      i_9 = t;
      t = (ATerm) ATinsert(CheckATermList(d_9), i_9);
    }
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  if(match_string(t, "-o"))
    {
      t = k_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_9;
    }
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm l_9 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  l_9 = t;
  y_3 = t;
  t = term_x_20;
  w_3 = t;
  t = y_3;
  z_3 = t;
  t = term_w_21;
  x_3 = t;
  t = SSL_table_put(w_3, x_3, l_9);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_9);
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_16, y_16, z_16, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__3))
    {
      o_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      q_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            ATerm b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_9, p_9);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATempty;
      }
    r_9 = t;
    e_4 = t;
    t = (ATerm) ATinsert(CheckATermList(r_9), q_9);
    d_4 = t;
    t = SSL_table_put(o_9, p_9, d_4);
    t = (ATerm) ATmakeAppl(sym__3, o_9, p_9, q_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_10 = NULL;
      t = term_r_0;
      t = j_0(t);
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_21, term_v_21, d_10);
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
ATerm a_17 (ATerm t)
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
ATerm b_17 (ATerm t)
{
  ATerm k_10 = NULL,f_4 = NULL,g_4 = NULL,k_4 = NULL,l_4 = NULL;
  k_10 = t;
  k_4 = t;
  t = term_x_20;
  f_4 = t;
  t = k_4;
  l_4 = t;
  t = term_c_22;
  g_4 = t;
  t = SSL_table_put(f_4, g_4, k_10);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_10);
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_17, b_17, c_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_10 = NULL,k_5 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,e_5 = NULL,n_5 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_0;
  t = whoami_0_0(t);
  l_10 = t;
  r_4 = t;
  t = term_k_13;
  p_4 = t;
  t = r_4;
  e_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_22), l_10);
  q_4 = t;
  t = SSL_printnl(p_4, q_4);
  n_5 = t;
  t = term_m_18;
  k_5 = t;
  t = SSL_exit(k_5);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL;
  t = term_f_22;
  r_5 = t;
  t = term_x_20;
  o_5 = t;
  t = r_5;
  t_5 = t;
  t = term_f_22;
  q_5 = t;
  t = SSL_table_get(o_5, q_5);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL,u_5 = NULL,x_5 = NULL,b_6 = NULL,d_6 = NULL;
        t = eval_config_0_0(t);
        l_5 = t;
        b_6 = t;
        t = term_x_20;
        u_5 = t;
        t = b_6;
        d_6 = t;
        t = term_f_22;
        x_5 = t;
        t = SSL_table_put(u_5, x_5, l_5);
        t = l_5;
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_97(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
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
        t = foldr_2_0(k_97, l_97, t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, s_10);
        t = l_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm g_6 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_6, b_7);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = SSL_addr(g_6, b_7);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_10 = NULL,m_5 = NULL,p_5 = NULL;
  t = times_0_0(t);
  m_5 = t;
  t = SSL_explode_term(m_5);
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
  t = foldr_2_0(d_17, e_17, t);
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
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_11;
        if((h_11 != t))
          {
            _fail(t);
          }
        t = g_11;
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = g_11;
        {
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_11, i_11);
              ;
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              t = SSL_gtr(h_11, i_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_11, i_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,n_11 = NULL,e_6 = NULL,f_6 = NULL,h_6 = NULL,u_6 = NULL;
      l_11 = t;
      t = term_d_21;
      h_6 = t;
      t = term_x_20;
      e_6 = t;
      t = h_6;
      u_6 = t;
      t = term_d_21;
      f_6 = t;
      t = SSL_table_get(e_6, f_6);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,z_6 = NULL;
            t = eval_config_0_0(t);
            q_8 = t;
            x_6 = t;
            t = term_x_20;
            v_6 = t;
            t = x_6;
            z_6 = t;
            t = term_d_21;
            w_6 = t;
            t = SSL_table_put(v_6, w_6, q_8);
            t = q_8;
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
          }
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_11, term_m_18);
        t = geq_0_0(t);
        t = l_11;
        t = m_109(t);
      }
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
    }
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,a_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  t = run_time_0_0(t);
  p_11 = t;
  t = term_r_0;
  t = whoami_0_0(t);
  q_11 = t;
  d_7 = t;
  t = term_k_13;
  a_7 = t;
  t = d_7;
  e_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_22), p_11), term_v_22), q_11);
  c_7 = t;
  t = SSL_printnl(a_7, c_7);
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_22), p_11), term_v_22), q_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  t = report_run_time_0_0(t);
  g_7 = t;
  t = term_j_21;
  f_7 = t;
  t = SSL_exit(f_7);
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
      t = term_d_23;
      k_7 = t;
      t = term_x_20;
      i_7 = t;
      t = k_7;
      l_7 = t;
      t = term_d_23;
      j_7 = t;
      t = SSL_table_get(i_7, j_7);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_8 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
            t = eval_config_0_0(t);
            x_8 = t;
            o_7 = t;
            t = term_x_20;
            m_7 = t;
            t = o_7;
            p_7 = t;
            t = term_d_23;
            n_7 = t;
            t = SSL_table_put(m_7, n_7, x_8);
            t = x_8;
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
          }
      }
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = fetch_1_0(g_17, t);
    }
  t = c_112(t);
  return(t);
}
ATerm map_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = Cons_2_0(j_92, r_11, t);
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
          ATerm h_17 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_11), z_11);
            return(t);
          }
          t = reverse_acc_2_0(f_0, h_17, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_0;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,q_7 = NULL,r_7 = NULL;
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
  t = i_84(t);
  c_12 = t;
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_12);
  q_7 = t;
  t = SSLsetAnnotations(q_7, a_12);
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_12), term_i_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
      t = term_f_22;
      u_7 = t;
      t = term_x_20;
      s_7 = t;
      t = u_7;
      v_7 = t;
      t = term_f_22;
      t_7 = t;
      t = SSL_table_get(s_7, t_7);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL,w_7 = NULL,x_7 = NULL,b_8 = NULL,c_8 = NULL;
            t = eval_config_0_0(t);
            f_9 = t;
            b_8 = t;
            t = term_x_20;
            w_7 = t;
            t = b_8;
            c_8 = t;
            t = term_f_22;
            x_7 = t;
            t = SSL_table_put(w_7, x_7, f_9);
            t = f_9;
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
          }
      }
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      t = fetch_1_0(i_17, t);
    }
  t = term_n_23;
  t = echo_0_0(t);
  f_8 = t;
  t = term_u_21;
  d_8 = t;
  t = f_8;
  g_8 = t;
  t = term_v_21;
  e_8 = t;
  t = SSL_table_get(d_8, e_8);
  t = reverse_acc_2_0(_id, j_17, t);
  t = map_1_0(k_17, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,h_8 = NULL,j_8 = NULL;
  l_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_12);
  i_12 = t;
  t = j_12;
  t = j_84(t);
  k_12 = t;
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_12);
  h_8 = t;
  t = SSLsetAnnotations(h_8, i_12);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,l_8 = NULL,p_8 = NULL;
  p_12 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_23 = ATgetFirst((ATermList) t);
                ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_12;
          }
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATinsert(ATempty, p_12);
      }
    q_12 = t;
    p_8 = t;
    t = term_v_19;
    l_8 = t;
    t = SSL_printnl(l_8, q_12);
    t = p_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,v_8 = NULL,y_8 = NULL;
  t = term_f_22;
  v_8 = t;
  t = term_x_20;
  r_8 = t;
  t = v_8;
  y_8 = t;
  t = term_f_22;
  s_8 = t;
  t = SSL_table_get(r_8, s_8);
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,g_9 = NULL;
        t = eval_config_0_0(t);
        w_9 = t;
        c_9 = t;
        t = term_x_20;
        a_9 = t;
        t = c_9;
        g_9 = t;
        t = term_f_22;
        b_9 = t;
        t = SSL_table_put(a_9, b_9, w_9);
        t = w_9;
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL,s_9 = NULL,t_9 = NULL;
  n_9 = t;
  t = term_x_20;
  h_9 = t;
  t = n_9;
  s_9 = t;
  t = term_u_23;
  j_9 = t;
  t = s_9;
  t_9 = t;
  t = term_r_0;
  m_9 = t;
  t = SSL_table_put(h_9, j_9, m_9);
  t = term_v_23;
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm o_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL;
  y_9 = t;
  t = term_x_20;
  u_9 = t;
  t = y_9;
  e_10 = t;
  t = term_u_23;
  v_9 = t;
  t = e_10;
  f_10 = t;
  t = term_r_0;
  x_9 = t;
  t = SSL_table_put(u_9, v_9, x_9);
  n_10 = t;
  t = term_x_20;
  g_10 = t;
  t = n_10;
  q_10 = t;
  t = term_x_23;
  i_10 = t;
  t = q_10;
  r_10 = t;
  t = term_r_0;
  m_10 = t;
  t = SSL_table_put(g_10, i_10, m_10);
  t = term_y_23;
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_17, m_17, n_17, t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      t = Option_3_0(o_17, p_17, q_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,t_10 = NULL,u_10 = NULL;
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
  t = q_71(t);
  x_12 = t;
  t = w_12;
  t = r_71(t);
  y_12 = t;
  u_10 = t;
  t = (ATerm) ATinsert(CheckATermList(y_12), x_12);
  t_10 = t;
  t = SSLsetAnnotations(t_10, u_12);
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm e_13 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  e_13 = t;
  y_10 = t;
  t = term_x_20;
  w_10 = t;
  t = y_10;
  z_10 = t;
  t = term_f_22;
  x_10 = t;
  t = SSL_table_put(w_10, x_10, e_13);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_24;
        t = f_114(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
      }
    t = d_13;
    {
      ATerm s_17 (ATerm t)
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_24 = t;
            int i_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_24);
              }
            else
              {
                t = h_24;
                t = f_114(t);
                t = Cons_2_0(_id, s_17, t);
              }
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
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
      t = Cons_2_0(r_17, s_17, t);
    }
  }
  return(t);
}
ATerm u_17 (ATerm t)
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
ATerm v_17 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,m_11 = NULL,o_11 = NULL,s_11 = NULL,v_11 = NULL;
  o_11 = t;
  t = term_x_20;
  j_11 = t;
  t = o_11;
  s_11 = t;
  t = term_d_23;
  k_11 = t;
  t = s_11;
  v_11 = t;
  t = term_r_0;
  m_11 = t;
  t = SSL_table_put(j_11, k_11, m_11);
  t = term_j_24;
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm x_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,z_13 = NULL,a_14 = NULL;
  o_13 = t;
  d_11 = t;
  t = term_u_21;
  a_11 = t;
  t = d_11;
  e_11 = t;
  t = term_v_21;
  b_11 = t;
  t = e_11;
  f_11 = t;
  t = (ATerm) ATempty;
  c_11 = t;
  t = SSL_table_put(a_11, b_11, c_11);
  t = o_13;
  {
    ATerm t_17 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_114(t);
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_17, v_17, w_17, t);
                ;
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_17, t);
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_14 = NULL;
          b_14 = t;
          {
            ATerm r_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_12 = NULL,s_12 = NULL;
                t = b_14;
                {
                  ATerm t_24 = t;
                  int u_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_11 = NULL,x_11 = NULL,e_12 = NULL,f_12 = NULL;
                      t = term_d_23;
                      e_12 = t;
                      t = term_x_20;
                      w_11 = t;
                      t = e_12;
                      f_12 = t;
                      t = term_d_23;
                      x_11 = t;
                      t = SSL_table_get(w_11, x_11);
                      {
                        ATerm v_24 = t;
                        int w_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_13 = NULL,g_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
                            t = eval_config_0_0(t);
                            v_13 = t;
                            n_12 = t;
                            t = term_x_20;
                            g_12 = t;
                            t = n_12;
                            o_12 = t;
                            t = term_d_23;
                            m_12 = t;
                            t = SSL_table_put(g_12, m_12, v_13);
                            t = v_13;
                            ;
                            LocalPopChoice(w_24);
                          }
                        else
                          {
                            t = v_24;
                          }
                      }
                      ;
                      LocalPopChoice(u_24);
                    }
                  else
                    {
                      t = t_24;
                      t = fetch_1_0(x_17, t);
                    }
                  t = b_14;
                  t = default_system_usage_0_0(t);
                  s_12 = t;
                  t = term_j_21;
                  r_12 = t;
                  t = SSL_exit(r_12);
                }
                ;
                LocalPopChoice(s_24);
              }
            else
              {
                t = r_24;
                {
                  ATerm t_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,m_13 = NULL,n_13 = NULL;
                  t = term_u_23;
                  b_13 = t;
                  t = term_x_20;
                  t_12 = t;
                  t = b_13;
                  c_13 = t;
                  t = term_u_23;
                  a_13 = t;
                  t = SSL_table_get(t_12, a_13);
                  {
                    ATerm x_24 = t;
                    int y_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_14 = NULL,f_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL;
                        t = eval_config_0_0(t);
                        o_14 = t;
                        j_13 = t;
                        t = term_x_20;
                        f_13 = t;
                        t = j_13;
                        l_13 = t;
                        t = term_u_23;
                        i_13 = t;
                        t = SSL_table_put(f_13, i_13, o_14);
                        t = o_14;
                        ;
                        LocalPopChoice(y_24);
                      }
                    else
                      {
                        t = x_24;
                      }
                    t = b_14;
                    t = default_system_about_0_0(t);
                    n_13 = t;
                    t = term_j_21;
                    m_13 = t;
                    t = SSL_exit(m_13);
                  }
                }
              }
          }
          ;
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
                ATerm y_17 (ATerm t)
                {
                  ATerm z_17 (ATerm t)
                  {
                    if(((p_13 != NULL) && (p_13 != t)))
                      _fail(t);
                    else
                      p_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_17, t);
                  return(t);
                }
                t = fetch_1_0(y_17, t);
                u_13 = t;
                t = term_k_13;
                s_13 = t;
                t = u_13;
                w_13 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_b_25);
                t_13 = t;
                t = SSL_printnl(s_13, t_13);
                t = (ATerm) ATmakeAppl(sym__2, term_k_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_b_25));
                t = default_system_usage_0_0(t);
                y_13 = t;
                t = term_m_18;
                x_13 = t;
                t = SSL_exit(x_13);
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
              }
          }
        }
      q_13 = t;
      a_14 = t;
      t = term_u_21;
      z_13 = t;
      t = SSL_table_destroy(z_13);
      t = q_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL,n_14 = NULL;
  t = parse_options_1_0(e_112, t);
  g_14 = t;
  d_14 = t;
  t = term_c_25;
  c_14 = t;
  t = SSL_table_create(c_14);
  m_14 = t;
  t = term_c_25;
  e_14 = t;
  t = m_14;
  n_14 = t;
  t = term_d_25;
  f_14 = t;
  t = SSL_table_put(e_14, f_14, g_14);
  t = g_14;
  t = g_112(t);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_112, t);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = if_verbose2_1_0(g_18, t);
  return(t);
}
ATerm d_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL;
  t_14 = t;
  t = term_x_20;
  p_14 = t;
  t = t_14;
  u_14 = t;
  t = term_i_25;
  q_14 = t;
  t = u_14;
  w_14 = t;
  t = term_r_0;
  r_14 = t;
  t = SSL_table_put(p_14, q_14, r_14);
  t = term_j_25;
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  h_14 = t;
  t = term_f_22;
  z_14 = t;
  t = term_x_20;
  x_14 = t;
  t = z_14;
  a_15 = t;
  t = term_f_22;
  y_14 = t;
  t = SSL_table_get(x_14, y_14);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
        t = eval_config_0_0(t);
        s_14 = t;
        d_15 = t;
        t = term_x_20;
        b_15 = t;
        t = d_15;
        e_15 = t;
        t = term_f_22;
        c_15 = t;
        t = SSL_table_put(b_15, c_15, s_14);
        t = s_14;
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
      }
    i_14 = t;
    h_15 = t;
    t = term_k_13;
    f_15 = t;
    t = h_15;
    i_15 = t;
    t = (ATerm) ATinsert(ATempty, i_14);
    g_15 = t;
    t = SSL_printnl(f_15, g_15);
    t = h_14;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t)
{
  ATerm a_18 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_111(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              {
                ATerm r_25 = t;
                int s_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_25);
                  }
                else
                  {
                    t = r_25;
                    {
                      ATerm t_25 = t;
                      int u_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_18, e_18, f_18, t);
                          ;
                          LocalPopChoice(u_25);
                        }
                      else
                        {
                          t = t_25;
                          {
                            ATerm v_25 = t;
                            int w_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_25);
                              }
                            else
                              {
                                t = v_25;
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
  ATerm c_18 (ATerm t)
  {
    ATerm j_14 = NULL,k_14 = NULL,v_14 = NULL;
    j_14 = t;
    {
      ATerm x_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_18 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_14 != NULL) && (k_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_18, t);
          ;
          LocalPopChoice(y_25);
        }
      else
        {
          t = x_25;
          t = term_z_25;
          k_14 = t;
        }
      t = not_null(k_14);
      t = ReadFromFile_0_0(t);
      v_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_14, v_14);
      t = apply_strategy_1_0(n_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_18, p_111, b_18, c_18, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = _2_0(_id, j_18, t);
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_14 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      l_14 = t;
      t = explanation_0_0(t);
      t = l_14;
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_18, _fail, default_usage_0_0, t);
  return(t);
}
