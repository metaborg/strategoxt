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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Undefined_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_d_42;
ATerm term_y_41;
ATerm term_t_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_n_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_e_38;
ATerm term_b_38;
ATerm term_y_37;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_k_13;
void init_constant_terms (void)
{
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_39);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__3, term_n_39, term_k_42, term_k_13);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm g_16 (ATerm);
ATerm n_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm v_16 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm m_17 (ATerm);
ATerm o_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm spaste_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm Let_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm);
ATerm t_17 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm RnBinding_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm rename_4_0 (ATerm h_98 (ATerm (ATerm), ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_98 (ATerm (ATerm), ATerm), ATerm);
ATerm i_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm p_18 (ATerm);
ATerm r_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm tpaste_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm i_74 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm diff_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm x_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm r_20 (ATerm);
ATerm free_vars_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm a_21 (ATerm);
ATerm d_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm s_21 (ATerm);
ATerm t_21 (ATerm);
ATerm v_21 (ATerm);
ATerm x_21 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm b_27 (ATerm t_26, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_21 (ATerm);
ATerm a_22 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_91 (ATerm), ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm g_22 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm m_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm s_22 (ATerm);
ATerm w_22 (ATerm);
ATerm x_22 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_22 (ATerm);
ATerm z_22 (ATerm);
ATerm a_23 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_23 (ATerm);
ATerm f_23 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm g_23 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_23 (ATerm);
ATerm need_help_1_0 (ATerm v_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm j_23 (ATerm);
ATerm k_23 (ATerm);
ATerm m_23 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_23 (ATerm);
ATerm o_23 (ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm r_23 (ATerm);
ATerm s_23 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm u_23 (ATerm);
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm);
ATerm x_23 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm b_24 (ATerm);
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm);
ATerm h_24 (ATerm);
ATerm j_24 (ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm m_24 (ATerm);
ATerm iowrap_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm);
ATerm p_24 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,p_0 = NULL,f_0 = NULL,k_0 = NULL,n_0 = NULL,o_0 = NULL,q_0 = NULL,s_0 = NULL;
  l_0 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  p_0 = t;
  n_0 = t;
  t = term_q_24;
  f_0 = t;
  t = n_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), p_0), term_r_24);
  k_0 = t;
  t = SSL_printnl(f_0, k_0);
  s_0 = t;
  t = term_t_24;
  q_0 = t;
  t = SSL_exit(q_0);
  t = l_0;
  return(t);
}
ATerm g_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
        _fail(t);
      {
        ATerm w_24 = ATgetArgument(t, 1);
        if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
        {
          y_0 = ATgetFirst((ATermList) x_24);
          a_1 = (ATerm) ATgetNext((ATermList) x_24);
        }
      else
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            z_0 = ATgetFirst((ATermList) y_24);
            b_1 = (ATerm) ATgetNext((ATermList) y_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_0, z_0), (ATerm) ATmakeAppl(sym__2, a_1, b_1));
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_1), d_1);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      h_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_1;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(a_25);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = z_24;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm c_25 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
            l_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_1, j_1, k_1, l_1);
      }
  }
  return(t);
}
ATerm v_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(((ATgetType(e_25) != AT_LIST) || !(ATisEmpty(e_25))))
        _fail(t);
      {
        ATerm f_25 = ATgetArgument(t, 1);
        if(((ATgetType(f_25) != AT_LIST) || !(ATisEmpty(f_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,g_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
        {
          x_1 = ATgetFirst((ATermList) m_25);
          g_2 = (ATerm) ATgetNext((ATermList) m_25);
        }
      else
        _fail(t);
      {
        ATerm n_25 = ATgetArgument(t, 1);
        if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
          {
            y_1 = ATgetFirst((ATermList) n_25);
            m_2 = (ATerm) ATgetNext((ATermList) n_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_1, y_1), (ATerm) ATmakeAppl(sym__2, g_2, m_2));
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm n_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_2), n_2);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_2;
  {
    ATerm p_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_25);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_3);
      }
    else
      {
        t = p_25;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            c_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_3, c_3);
      }
  }
  return(t);
}
ATerm g_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(((ATgetType(b_26) != AT_LIST) || !(ATisEmpty(b_26))))
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) != AT_LIST) || !(ATisEmpty(d_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
        {
          j_3 = ATgetFirst((ATermList) k_26);
          m_3 = (ATerm) ATgetNext((ATermList) k_26);
        }
      else
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
          {
            k_3 = ATgetFirst((ATermList) m_26);
            n_3 = (ATerm) ATgetNext((ATermList) m_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_3, k_3), (ATerm) ATmakeAppl(sym__2, m_3, n_3));
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_3), o_3);
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_26);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_3);
      }
    else
      {
        t = n_26;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            t_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_3, t_3);
      }
  }
  return(t);
}
ATerm m_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(((ATgetType(r_26) != AT_LIST) || !(ATisEmpty(r_26))))
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(((ATgetType(s_26) != AT_LIST) || !(ATisEmpty(s_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
        {
          c_4 = ATgetFirst((ATermList) u_26);
          h_4 = (ATerm) ATgetNext((ATermList) u_26);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
          {
            d_4 = ATgetFirst((ATermList) v_26);
            i_4 = (ATerm) ATgetNext((ATermList) v_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_4, d_4), (ATerm) ATmakeAppl(sym__2, h_4, i_4));
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_4), j_4);
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm n_4 = NULL,r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4;
  {
    ATerm w_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_26);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_4);
      }
    else
      {
        t = w_26;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_27 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_4, r_4);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 (ATerm t)
      {
        ATerm b_0 = NULL,m_0 = NULL;
        b_0 = t;
        t = j_84(t);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_0, m_0);
        t = genzip_4_0(g_16, n_16, s_16, t_16, t);
        return(t);
      }
      t = Let_2_0(f_16, _id, t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm i_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 (ATerm t)
            {
              ATerm r_0 = NULL,t_0 = NULL;
              r_0 = t;
              t = j_84(t);
              t_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_0, t_0);
              t = genzip_4_0(v_16, c_17, d_17, e_17, t);
              return(t);
            }
            t = SDef_3_0(_id, u_16, _id, t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = i_27;
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_17 (ATerm t)
                  {
                    ATerm w_0 = NULL,c_1 = NULL;
                    w_0 = t;
                    t = j_84(t);
                    c_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_0, c_1);
                    t = genzip_4_0(g_17, h_17, j_17, k_17, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, f_17, _id, _id, t);
                  ;
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  {
                    ATerm y_27 = t;
                    int a_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_17 (ATerm t)
                        {
                          ATerm p_1 = NULL,z_1 = NULL;
                          p_1 = t;
                          t = j_84(t);
                          z_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, p_1, z_1);
                          t = genzip_4_0(m_17, o_17, q_17, r_17, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, l_17, _id, _id, t);
                        ;
                        LocalPopChoice(a_28);
                      }
                    else
                      {
                        t = y_27;
                        {
                          ATerm s_17 (ATerm t)
                          {
                            ATerm m_6 = NULL;
                            t = j_84(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                m_6 = ATgetFirst((ATermList) t);
                                {
                                  ATerm b_28 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = m_6;
                            return(t);
                          }
                          t = Rec_2_0(s_17, _id, t);
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
ATerm Rec_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,b_7 = NULL,j_7 = NULL,l_7 = NULL,b_8 = NULL,g_8 = NULL,u_0 = NULL,v_0 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Rec_2))
    {
      b_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  o_6 = t;
  t = b_7;
  t = y_75(t);
  l_7 = t;
  t = j_7;
  t = z_75(t);
  b_8 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, l_7, b_8);
  u_0 = t;
  t = SSLsetAnnotations(u_0, o_6);
  return(t);
}
ATerm SDef_3_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,g_9 = NULL,n_9 = NULL,u_9 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,x_0 = NULL,f_1 = NULL;
  g_10 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      u_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_10);
  x_8 = t;
  t = g_9;
  t = q_77(t);
  d_10 = t;
  t = n_9;
  t = r_77(t);
  e_10 = t;
  t = u_9;
  t = s_77(t);
  f_10 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, d_10, e_10, f_10);
  x_0 = t;
  t = SSLsetAnnotations(x_0, x_8);
  return(t);
}
ATerm Let_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,g_1 = NULL,i_1 = NULL;
  o_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_10);
  j_10 = t;
  t = k_10;
  t = b_75(t);
  m_10 = t;
  t = l_10;
  t = c_75(t);
  n_10 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_10, n_10);
  g_1 = t;
  t = SSLsetAnnotations(g_1, j_10);
  return(t);
}
ATerm sboundin_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(k_84, k_84, t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm f_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(m_84, m_84, k_84, t);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = f_28;
            {
              ATerm i_28 = t;
              int j_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(m_84, m_84, m_84, k_84, t);
                  ;
                  LocalPopChoice(j_28);
                }
              else
                {
                  t = i_28;
                  t = Rec_2_0(m_84, k_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_10 = ATgetArgument(t, 0);
          {
            ATerm n_28 = ATgetArgument(t, 1);
          }
          {
            ATerm p_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_28);
      t = u_10;
    }
  else
    {
      t = k_28;
      if(match_cons(t, sym_SDefT_4))
        {
          u_10 = ATgetArgument(t, 0);
          {
            ATerm q_28 = ATgetArgument(t, 1);
          }
          {
            ATerm r_28 = ATgetArgument(t, 2);
          }
          {
            ATerm u_28 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_10;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm x_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_10;
  t = map_1_0(t_17, t);
  return(t);
}
ATerm SVar_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,g_11 = NULL,h_11 = NULL,n_1 = NULL,o_1 = NULL;
  h_11 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_11);
  a_11 = t;
  t = b_11;
  t = a_75(t);
  g_11 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, g_11);
  n_1 = t;
  t = SSLsetAnnotations(n_1, a_11);
  return(t);
}
ATerm DistBinding_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__3))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
      o_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_11;
  {
    ATerm u_17 (ATerm t)
    {
      ATerm p_11 = NULL;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_11, o_11);
      t = s_98(t);
      return(t);
    }
    ATerm v_17 (ATerm t)
    {
      ATerm r_11 = NULL;
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_11, n_11);
      t = s_98(t);
      return(t);
    }
    t = t_98(u_17, v_17, _id, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm x_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(((ATgetType(y_28) != AT_LIST) || !(ATisEmpty(y_28))))
        _fail(t);
      {
        ATerm z_28 = ATgetArgument(t, 1);
        if(((ATgetType(z_28) != AT_LIST) || !(ATisEmpty(z_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
        {
          i_12 = ATgetFirst((ATermList) a_29);
          k_12 = (ATerm) ATgetNext((ATermList) a_29);
        }
      else
        _fail(t);
      {
        ATerm b_29 = ATgetArgument(t, 1);
        if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
          {
            j_12 = ATgetFirst((ATermList) b_29);
            l_12 = (ATerm) ATgetNext((ATermList) b_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_12, j_12), (ATerm) ATmakeAppl(sym__2, k_12, l_12));
  return(t);
}
ATerm z_17 (ATerm t)
{
  ATerm m_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_12), m_12);
  return(t);
}
ATerm RnBinding_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11;
  t = m_98(t);
  x_11 = t;
  t = map_1_0(new_0_0, t);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
  t = genzip_4_0(x_17, y_17, z_17, _id, t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_12, w_11);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12;
        {
          ATerm a_18 (ATerm t)
          {
            t = w_11;
            return(t);
          }
          t = at_end_1_0(a_18, t);
        }
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        {
          ATerm f_2 = NULL,q_1 = NULL,r_1 = NULL;
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_12, w_11);
          q_1 = t;
          t = SSL_explode_term(q_1);
          if(match_cons(t, sym__2))
            {
              ATerm g_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_29) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_2;
          t = concat_0_0(t);
        }
      }
    e_12 = t;
    t = v_11;
    {
      ATerm b_18 (ATerm t)
      {
        t = y_11;
        return(t);
      }
      t = n_98(b_18, t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_12, w_11, e_12);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_13;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_12;
            if((a_13 != t))
              {
                _fail(t);
              }
            t = y_12;
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            t = (ATerm) ATmakeAppl(sym__2, a_13, d_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_13, d_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm o_2 = NULL,p_2 = NULL;
          ATerm c_18 (ATerm t)
          {
            ATerm q_2 = NULL;
            q_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_2, not_null(p_2));
            t = q_13(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((o_2 != NULL) && (o_2 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_2 = ATgetArgument(t, 0);
              if(((p_2 != NULL) && (p_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                p_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(o_2);
          t = SRTS_all(c_18, t);
        }
      }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm rename_4_0 (ATerm h_98 (ATerm (ATerm), ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, (ATerm) ATempty);
  {
    ATerm s_13 (ATerm t)
    {
      ATerm e_18 (ATerm t)
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL;
            ATerm f_18 (ATerm t)
            {
              ATerm x_2 = NULL;
              x_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_2, not_null(u_2));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_2 = ATgetArgument(t, 0);
                if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(t_2);
            t = h_98(f_18, t);
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = RnBinding_2_0(i_98, k_98, t);
            t = DistBinding_2_0(s_13, j_98, t);
          }
        return(t);
      }
      t = env_alltd_1_0(e_18, t);
      return(t);
    }
    t = s_13(t);
  }
  return(t);
}
ATerm i_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      if(((ATgetType(q_29) != AT_LIST) || !(ATisEmpty(q_29))))
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
        if(((ATgetType(s_29) != AT_LIST) || !(ATisEmpty(s_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
        {
          x_13 = ATgetFirst((ATermList) t_29);
          z_13 = (ATerm) ATgetNext((ATermList) t_29);
        }
      else
        _fail(t);
      {
        ATerm u_29 = ATgetArgument(t, 1);
        if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
          {
            y_13 = ATgetFirst((ATermList) u_29);
            a_14 = (ATerm) ATgetNext((ATermList) u_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_13, y_13), (ATerm) ATmakeAppl(sym__2, z_13, a_14));
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_14), b_14);
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm e_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_29);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_14);
      }
    else
      {
        t = v_29;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_30 = ATgetArgument(t, 0);
            g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, g_14);
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if(((ATgetType(b_30) != AT_LIST) || !(ATisEmpty(b_30))))
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(((ATgetType(c_30) != AT_LIST) || !(ATisEmpty(c_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
        {
          l_14 = ATgetFirst((ATermList) d_30);
          n_14 = (ATerm) ATgetNext((ATermList) d_30);
        }
      else
        _fail(t);
      {
        ATerm e_30 = ATgetArgument(t, 1);
        if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
          {
            m_14 = ATgetFirst((ATermList) e_30);
            o_14 = (ATerm) ATgetNext((ATermList) e_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_14, m_14), (ATerm) ATmakeAppl(sym__2, n_14, o_14));
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_14), p_14);
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm w_14 = NULL,a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_30);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_15);
      }
    else
      {
        t = g_30;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_30 = ATgetArgument(t, 0);
            a_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, a_15);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm r_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(f_84, _id, t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = r_30;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 (ATerm t)
            {
              ATerm l_3 = NULL,v_3 = NULL;
              l_3 = t;
              t = f_84(t);
              v_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_3, v_3);
              t = genzip_4_0(i_18, l_18, m_18, p_18, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, h_18, _id, t);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm q_18 (ATerm t)
              {
                ATerm e_4 = NULL,g_4 = NULL;
                e_4 = t;
                t = f_84(t);
                g_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_4, g_4);
                t = genzip_4_0(r_18, u_18, v_18, w_18, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, q_18, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,s_1 = NULL,t_1 = NULL;
  i_15 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  f_15 = t;
  t = g_15;
  t = i_74(t);
  h_15 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_15);
  s_1 = t;
  t = SSLsetAnnotations(s_1, f_15);
  return(t);
}
ATerm RDefT_4_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,r_15 = NULL,t_15 = NULL,v_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,d_16 = NULL,e_16 = NULL,u_1 = NULL,v_1 = NULL;
  e_16 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
      v_15 = ATgetArgument(t, 2);
      x_15 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_16);
  n_15 = t;
  t = r_15;
  t = z_73(t);
  z_15 = t;
  t = t_15;
  t = a_74(t);
  a_16 = t;
  t = v_15;
  t = b_74(t);
  b_16 = t;
  t = x_15;
  t = c_74(t);
  d_16 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, z_15, a_16, b_16, d_16);
  u_1 = t;
  t = SSLsetAnnotations(u_1, n_15);
  return(t);
}
ATerm SDefT_4_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,w_1 = NULL,a_2 = NULL;
  r_16 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      k_16 = ATgetArgument(t, 2);
      l_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_16);
  h_16 = t;
  t = i_16;
  t = t_77(t);
  m_16 = t;
  t = j_16;
  t = u_77(t);
  o_16 = t;
  t = k_16;
  t = v_77(t);
  p_16 = t;
  t = l_16;
  t = w_77(t);
  q_16 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_16, o_16, p_16, q_16);
  w_1 = t;
  t = SSLsetAnnotations(w_1, h_16);
  return(t);
}
ATerm Scope_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,b_2 = NULL,c_2 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  w_16 = t;
  t = x_16;
  t = l_75(t);
  z_16 = t;
  t = y_16;
  t = m_75(t);
  a_17 = t;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, z_16, a_17);
  b_2 = t;
  t = SSLsetAnnotations(b_2, w_16);
  return(t);
}
ATerm tboundin_3_0 (ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(i_84, g_84, t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm b_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(i_84, i_84, i_84, g_84, t);
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = b_31;
            {
              ATerm f_31 = t;
              int k_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(i_84, i_84, i_84, g_84, t);
                  ;
                  LocalPopChoice(k_31);
                }
              else
                {
                  t = f_31;
                  t = DynamicRules_1_0(g_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_17);
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm n_17 = NULL,p_17 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_17 = ATgetArgument(t, 0);
            t = n_17;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm p_31 = ATgetArgument(t, 0);
                    ATerm q_31 = ATgetArgument(t, 1);
                    p_17 = ATgetArgument(t, 2);
                    {
                      ATerm w_31 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_31);
                t = p_17;
                t = map_1_0(z_18, t);
              }
            else
              {
                t = n_31;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm x_31 = ATgetArgument(t, 0);
                    ATerm y_31 = ATgetArgument(t, 1);
                    p_17 = ATgetArgument(t, 2);
                    {
                      ATerm a_32 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = p_17;
                t = map_1_0(a_19, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_17 = ATgetArgument(t, 0);
          {
            ATerm i_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_32);
      t = w_17;
    }
  else
    {
      t = e_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_17;
    }
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm d_18 = NULL;
  ATerm j_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_18 = ATgetArgument(t, 0);
          {
            ATerm m_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_32);
      t = d_18;
    }
  else
    {
      t = j_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_18;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(x_18, y_18, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_18;
  {
    ATerm k_18 (ATerm t)
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_18;
          ;
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_4 = NULL,t_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_4 = ATgetFirst((ATermList) t);
                    t_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_18;
                {
                  ATerm f_19 (ATerm t)
                  {
                    ATerm u_4 = NULL;
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_4, u_4);
                    t = u_93(t);
                    return(t);
                  }
                  t = fetch_1_0(f_19, t);
                  t = t_4;
                  t = k_18(t);
                }
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = Cons_2_0(_id, k_18, t);
              }
          }
        }
      return(t);
    }
    t = k_18(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_96(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm n_18 = NULL,o_18 = NULL,s_18 = NULL,t_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_18 = ATgetFirst((ATermList) t);
            o_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_18;
        t = k_96(t);
        s_18 = t;
        t = o_18;
        t = foldr_3_0(i_96, j_96, k_96, t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_18, t_18);
        t = j_96(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_19;
  {
    ATerm d_19 (ATerm t)
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          {
            ATerm w_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_4 = NULL,z_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_4 = ATgetFirst((ATermList) t);
                    z_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_19;
                {
                  ATerm q_19 (ATerm t)
                  {
                    ATerm a_5 = NULL;
                    a_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_4, a_5);
                    t = p_93(t);
                    return(t);
                  }
                  t = fetch_1_0(q_19, t);
                  t = z_4;
                  t = d_19(t);
                }
                ;
                LocalPopChoice(x_32);
              }
            else
              {
                t = w_32;
                t = Cons_2_0(_id, d_19, t);
              }
          }
        }
      return(t);
    }
    t = d_19(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm e_19 (ATerm t)
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_89(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = s_89(t);
        t = _2_0(u_89, e_19, t);
        t = t_89(t);
      }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm r_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(((ATgetType(e_33) != AT_LIST) || !(ATisEmpty(e_33))))
        _fail(t);
      {
        ATerm g_33 = ATgetArgument(t, 1);
        if(((ATgetType(g_33) != AT_LIST) || !(ATisEmpty(g_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
        {
          n_19 = ATgetFirst((ATermList) h_33);
          p_19 = (ATerm) ATgetNext((ATermList) h_33);
        }
      else
        _fail(t);
      {
        ATerm l_33 = ATgetArgument(t, 1);
        if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
          {
            o_19 = ATgetFirst((ATermList) l_33);
            u_19 = (ATerm) ATgetNext((ATermList) l_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_19, o_19), (ATerm) ATmakeAppl(sym__2, p_19, u_19));
  return(t);
}
ATerm t_19 (ATerm t)
{
  ATerm v_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_19), v_19);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_33 = ATgetFirst((ATermList) t);
      if(match_cons(o_33, sym__2))
        {
          g_19 = ATgetArgument(o_33, 0);
          h_19 = ATgetArgument(o_33, 1);
        }
      else
        _fail(t);
      i_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_19);
  if(match_cons(t, sym__2))
    {
      if((j_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_19, k_19);
  t = genzip_4_0(r_19, s_19, t_19, _id, t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, i_19);
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_33 = ATgetArgument(t, 0);
            ATerm y_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_19;
        {
          ATerm w_19 (ATerm t)
          {
            t = i_19;
            return(t);
          }
          t = at_end_1_0(w_19, t);
        }
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        {
          ATerm g_5 = NULL,d_2 = NULL,e_2 = NULL;
          e_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_19, i_19);
          d_2 = t;
          t = SSL_explode_term(d_2);
          if(match_cons(t, sym__2))
            {
              ATerm e_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_5;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_102(t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = r_102(t);
        t = c_20(t);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
ATerm for_3_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  t = t_102(t);
  t = while_not_2_0(u_102, v_102, t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_20);
  return(t);
}
ATerm z_19 (ATerm t)
{
  t = _2_0(_id, b_20, t);
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, d_20, t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_20;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_20 = ATgetFirst((ATermList) t);
            x_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_20), w_20), x_20);
      }
    }
  return(t);
}
ATerm b_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm l_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_20 = ATgetFirst((ATermList) t);
          q_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      if(match_cons(t, sym__2))
        {
          o_20 = ATgetArgument(t, 0);
          p_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_20;
      if((o_20 != t))
        {
          _fail(t);
        }
      t = q_20;
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = l_34;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      if((b_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_19, z_19, a_20, t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      t = diff_1_0(e_20, t);
    }
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = union_1_0(k_20, t);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      if((s_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = union_1_0(r_20, t);
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      if((y_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_21 (ATerm t)
  {
    ATerm v_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_100(t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = v_34;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_21 = NULL,e_21 = NULL,m_5 = NULL,n_5 = NULL;
              c_21 = t;
              t = l_100(t);
              e_21 = t;
              t = c_21;
              {
                ATerm f_20 (ATerm t)
                {
                  ATerm i_5 = NULL;
                  t = h_21(t);
                  i_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_5, e_21);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_100(f_20, h_21, g_20, t);
                m_5 = t;
                t = SSL_explode_term(m_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_35 = ATgetArgument(t, 0);
                    n_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_5;
                t = foldr_3_0(i_20, j_20, _id, t);
              }
              ;
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              {
                ATerm t_5 = NULL,u_5 = NULL;
                t_5 = t;
                t = SSL_explode_term(t_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_35 = ATgetArgument(t, 0);
                    u_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_5;
                t = foldr_3_0(m_20, n_20, h_21, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm u_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_21);
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm w_21 = NULL,y_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_21 = ATgetArgument(t, 0);
            t = w_21;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_35 = ATgetArgument(t, 0);
                    ATerm o_35 = ATgetArgument(t, 1);
                    y_21 = ATgetArgument(t, 2);
                    {
                      ATerm q_35 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_35);
                t = y_21;
                t = map_1_0(y_20, t);
              }
            else
              {
                t = l_35;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm r_35 = ATgetArgument(t, 0);
                    ATerm x_35 = ATgetArgument(t, 1);
                    y_21 = ATgetArgument(t, 2);
                    {
                      ATerm y_35 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_21;
                t = map_1_0(z_20, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm f_22 = NULL;
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_22 = ATgetArgument(t, 0);
          {
            ATerm b_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_36);
      t = f_22;
    }
  else
    {
      t = z_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_22;
    }
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_22 = ATgetArgument(t, 0);
          {
            ATerm e_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_36);
      t = n_22;
    }
  else
    {
      t = c_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_22;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_21 = ATgetArgument(t, 0);
      t = r_21;
      if(match_cons(t, sym_Rule_3))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm f_36 = ATgetArgument(t, 1);
          }
          {
            ATerm g_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_21;
      t = free_vars_3_0(s_20, t_20, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm h_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_21;
    }
  return(t);
}
ATerm Var_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,h_2 = NULL,i_2 = NULL;
  v_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  r_22 = t;
  t = t_22;
  t = r_71(t);
  u_22 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_22);
  h_2 = t;
  t = SSLsetAnnotations(h_2, r_22);
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      {
        ATerm l_23 = NULL;
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm m_36 = ATgetArgument(t, 0);
                ATerm n_36 = ATgetArgument(t, 1);
                l_23 = ATgetArgument(t, 2);
                {
                  ATerm o_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_36);
            t = l_23;
            t = map_1_0(d_21, t);
          }
        else
          {
            t = k_36;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm p_36 = ATgetArgument(t, 0);
                ATerm q_36 = ATgetArgument(t, 1);
                l_23 = ATgetArgument(t, 2);
                {
                  ATerm r_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = l_23;
            t = map_1_0(f_21, t);
          }
      }
    }
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm t_23 = NULL;
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_23 = ATgetArgument(t, 0);
          {
            ATerm u_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_36);
      t = t_23;
    }
  else
    {
      t = s_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_23;
    }
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm a_24 = NULL;
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_24 = ATgetArgument(t, 0);
          {
            ATerm x_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_36);
      t = a_24;
    }
  else
    {
      t = v_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_24;
    }
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm e_24 = NULL,f_24 = NULL;
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm c_37 = ATgetArgument(t, 0);
                f_24 = ATgetArgument(t, 1);
                {
                  ATerm d_37 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_37);
            t = f_24;
            t = map_1_0(i_21, t);
          }
        else
          {
            t = a_37;
            {
              ATerm e_37 = t;
              int f_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_24 = ATgetArgument(t, 0);
                      {
                        ATerm g_37 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_37);
                  t = (ATerm) ATinsert(ATempty, e_24);
                }
              else
                {
                  t = e_37;
                  {
                    ATerm h_37 = t;
                    int i_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm j_37 = ATgetArgument(t, 0);
                            f_24 = ATgetArgument(t, 1);
                            {
                              ATerm k_37 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm l_37 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(i_37);
                        t = f_24;
                        t = map_1_0(j_21, t);
                      }
                    else
                      {
                        t = h_37;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm m_37 = ATgetArgument(t, 0);
                            f_24 = ATgetArgument(t, 1);
                            {
                              ATerm n_37 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm o_37 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = f_24;
                        t = map_1_0(k_21, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm n_24 = NULL;
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_24 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_37);
      t = n_24;
    }
  else
    {
      t = p_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_24;
    }
  return(t);
}
ATerm j_21 (ATerm t)
{
  ATerm v_24 = NULL;
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_24 = ATgetArgument(t, 0);
          {
            ATerm u_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_37);
      t = v_24;
    }
  else
    {
      t = s_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_24;
    }
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm d_25 = NULL;
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_25 = ATgetArgument(t, 0);
          {
            ATerm x_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_37);
      t = d_25;
    }
  else
    {
      t = v_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_25;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, a_21, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, g_21, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm _2_0 (ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,j_2 = NULL,k_2 = NULL;
  l_25 = t;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  g_25 = t;
  t = h_25;
  t = a_66(t);
  j_25 = t;
  t = i_25;
  t = b_66(t);
  k_25 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
  j_2 = t;
  t = SSLsetAnnotations(j_2, g_25);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,q_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_25, term_y_37);
  t = open_stream_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, q_25);
  t = k_106(t);
  t = fclose_0_0(t);
  t = q_25;
  return(t);
}
ATerm p_21 (ATerm t)
{
  t = fetch_1_0(s_21, t);
  return(t);
}
ATerm q_21 (ATerm t)
{
  t = WriteToFile_1_0(t_21, t);
  return(t);
}
ATerm s_21 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm v_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(match_cons(z_37, sym_Stream_1))
        {
          v_25 = ATgetArgument(z_37, 0);
        }
      else
        _fail(t);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_25, y_25);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = WriteToFile_1_0(x_21, t);
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm a_26 = NULL,c_26 = NULL,e_26 = NULL,f_26 = NULL,l_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_38 = ATgetArgument(t, 0);
      if(match_cons(a_38, sym_Stream_1))
        {
          a_26 = ATgetArgument(a_38, 0);
        }
      else
        _fail(t);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_26, c_26);
  e_26 = t;
  r_2 = t;
  t = term_b_38;
  l_2 = t;
  t = SSL_fputc(l_2, e_26);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t_25 = t;
  {
    ATerm l_21 (ATerm t)
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_21 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((u_25 != NULL) && (u_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_21, t);
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          t = term_e_38;
          if(((u_25 != NULL) && (u_25 != t)))
            _fail(t);
          else
            u_25 = t;
        }
      return(t);
    }
    t = _2_0(l_21, _id, t);
    t = t_25;
    {
      ATerm o_21 (ATerm t)
      {
        ATerm z_5 = NULL;
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), z_5);
        return(t);
      }
      t = _2_0(_id, o_21, t);
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_21, q_21, t);
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = _2_0(_id, v_21, t);
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
ATerm apply_strategy_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL;
  g_26 = t;
  t = dtime_0_0(t);
  t = g_26;
  t = x_102(t);
  h_26 = t;
  t = dtime_0_0(t);
  i_26 = t;
  t = h_26;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_26), (ATerm) ATmakeAppl(sym_Runtime_1, i_26)), l_26);
  return(t);
}
ATerm b_27 (ATerm t_26, ATerm t)
{
  t = SSL_fclose(t_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_26 = NULL,z_26 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_26 = ATgetArgument(t, 0);
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_26);
            ;
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            t = b_27(z_26, t);
          }
      }
    }
  else
    {
      t = b_27(z_26, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_stdin_stream();
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_stdout_stream();
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_stderr_stream();
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_27);
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm m_27 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_27;
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_is_string(q_27);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      ATerm k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_6 = NULL,q_6 = NULL;
        p_6 = t;
        t = SSL_explode_term(p_6);
        if(match_cons(t, sym__2))
          {
            ATerm n_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_38 = ATgetArgument(t, 1);
              if(((ATgetType(o_38) == AT_LIST) && !(ATisEmpty(o_38))))
                {
                  q_6 = ATgetFirst((ATermList) o_38);
                  {
                    ATerm p_38 = (ATerm) ATgetNext((ATermList) o_38);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
              t = _2_0(z_21, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_27 = ATgetArgument(t, 0);
                  k_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_27, k_27);
              l_27 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
              ;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              {
                ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
                t = _2_0(a_22, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_27 = ATgetArgument(t, 0);
                    o_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_27, o_27);
                p_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_27 = NULL;
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_27, term_u_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm r_6 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,a_3 = NULL;
        r_6 = t;
        t = term_v_38;
        y_2 = t;
        t = term_q_24;
        v_2 = t;
        t = y_2;
        a_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_6), term_v_38);
        w_2 = t;
        t = SSL_printnl(v_2, w_2);
        t = r_6;
        _fail(t);
      }
    }
  r_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_27);
  s_27 = t;
  t = r_27;
  t = fclose_0_0(t);
  t = s_27;
  return(t);
}
ATerm fetch_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm z_27 (ATerm t)
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_91, _id, t);
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = Cons_2_0(_id, z_27, t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm c_28 = NULL,g_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_28 = ATgetFirst((ATermList) t);
            g_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_28;
        {
          ATerm b_22 (ATerm t)
          {
            t = g_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_22, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm m_28 (ATerm t)
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_28, t);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_91(t);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm c_22 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_explode_string(s_28);
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  t = SSL_explode_string(t_28);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_28 = NULL;
  t = _2_0(c_22, d_22, t);
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL,w_28 = NULL;
        if(match_cons(t, sym__2))
          {
            v_28 = ATgetArgument(t, 0);
            w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_28;
        {
          ATerm e_22 (ATerm t)
          {
            t = w_28;
            return(t);
          }
          t = at_end_1_0(e_22, t);
        }
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm w_6 = NULL,x_6 = NULL;
          w_6 = t;
          t = SSL_explode_term(w_6);
          if(match_cons(t, sym__2))
            {
              ATerm e_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_6;
          t = concat_0_0(t);
        }
      }
    o_28 = t;
    t = SSL_implode_string(o_28);
  }
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL;
      h_29 = t;
      t = SSL_is_string(h_29);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_22, t);
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm o_29 = NULL,p_29 = NULL,r_29 = NULL;
              o_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_29 = ATgetArgument(t, 0);
                  t = p_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_29 = ATgetArgument(t, 0);
                      t = p_29;
                      {
                        ATerm l_39 = t;
                        int m_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_3 = NULL,e_3 = NULL;
                            e_3 = t;
                            t = term_n_39;
                            b_3 = t;
                            t = SSL_table_get(b_3, p_29);
                            {
                              ATerm o_39 = t;
                              int p_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_7 = NULL,f_3 = NULL,g_3 = NULL;
                                  t = eval_config_0_0(t);
                                  t_7 = t;
                                  g_3 = t;
                                  t = term_n_39;
                                  f_3 = t;
                                  t = SSL_table_put(f_3, p_29, t_7);
                                  t = t_7;
                                  ;
                                  LocalPopChoice(p_39);
                                }
                              else
                                {
                                  t = o_39;
                                }
                            }
                            ;
                            LocalPopChoice(m_39);
                          }
                        else
                          {
                            t = l_39;
                            {
                              ATerm h_3 = NULL,i_3 = NULL,q_3 = NULL,s_3 = NULL;
                              t = term_q_39;
                              q_3 = t;
                              t = term_q_24;
                              h_3 = t;
                              t = q_3;
                              s_3 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, p_29), term_q_39);
                              i_3 = t;
                              t = SSL_printnl(h_3, i_3);
                              t = p_29;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_29 = NULL,z_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_29 = ATgetArgument(t, 0);
                          r_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_29;
                      t = eval_config_0_0(t);
                      y_29 = t;
                      t = r_29;
                      t = eval_config_0_0(t);
                      z_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL,h_30 = NULL,u_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL;
      f_30 = t;
      t = term_t_39;
      y_3 = t;
      t = term_n_39;
      u_3 = t;
      t = y_3;
      z_3 = t;
      t = term_t_39;
      w_3 = t;
      t = SSL_table_get(u_3, w_3);
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL,a_4 = NULL,b_4 = NULL,f_4 = NULL,l_4 = NULL;
            t = eval_config_0_0(t);
            a_8 = t;
            f_4 = t;
            t = term_n_39;
            a_4 = t;
            t = f_4;
            l_4 = t;
            t = term_t_39;
            b_4 = t;
            t = SSL_table_put(a_4, b_4, a_8);
            t = a_8;
            ;
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
          }
        h_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_30, term_w_39);
        t = geq_0_0(t);
        t = f_30;
        t = s_112(t);
      }
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
    }
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  if(match_string(t, "-k"))
    {
      t = j_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_30;
    }
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,v_4 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  p_4 = t;
  t = term_n_39;
  m_4 = t;
  t = p_4;
  v_4 = t;
  t = term_x_39;
  o_4 = t;
  t = SSL_table_put(m_4, o_4, l_30);
  t = k_30;
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_22, i_22, j_22, t);
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-S"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
ATerm l_22 (ATerm t)
{
  ATerm w_4 = NULL,y_4 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  t = term_n_39;
  w_4 = t;
  t = c_5;
  d_5 = t;
  t = term_t_39;
  y_4 = t;
  t = d_5;
  e_5 = t;
  t = term_z_39;
  b_5 = t;
  t = SSL_table_put(w_4, y_4, b_5);
  t = term_a_40;
  return(t);
}
ATerm m_22 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm o_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL;
  o_30 = t;
  t = SSL_string_to_int(o_30);
  p_30 = t;
  j_5 = t;
  t = term_n_39;
  f_5 = t;
  t = j_5;
  k_5 = t;
  t = term_t_39;
  h_5 = t;
  t = SSL_table_put(f_5, h_5, p_30);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_30);
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm s_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_22 (ATerm t)
{
  ATerm l_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,v_5 = NULL;
  q_5 = t;
  t = term_n_39;
  l_5 = t;
  t = q_5;
  r_5 = t;
  t = term_d_40;
  o_5 = t;
  t = r_5;
  v_5 = t;
  t = term_k_13;
  p_5 = t;
  t = SSL_table_put(l_5, o_5, p_5);
  t = term_e_40;
  return(t);
}
ATerm x_22 (ATerm t)
{
  t = term_f_40;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_22, l_22, m_22, t);
      ;
      LocalPopChoice(h_40);
    }
  else
    {
      t = g_40;
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_22, p_22, q_22, t);
            ;
            LocalPopChoice(j_40);
          }
        else
          {
            t = i_40;
            t = Option_3_0(s_22, w_22, x_22, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_30 = NULL;
      t = term_k_13;
      t = d_0(t);
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_40, term_l_40, v_30);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_30 = ATgetFirst((ATermList) t);
          u_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_30;
      t = a_0(t);
      t = term_k_13;
      t = c_0(t);
      a_31 = t;
      t = (ATerm) ATinsert(CheckATermList(u_30), a_31);
    }
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  if(match_string(t, "-o"))
    {
      t = c_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_31;
    }
  return(t);
}
ATerm z_22 (ATerm t)
{
  ATerm d_31 = NULL,w_5 = NULL,x_5 = NULL,a_6 = NULL,b_6 = NULL;
  d_31 = t;
  a_6 = t;
  t = term_n_39;
  w_5 = t;
  t = a_6;
  b_6 = t;
  t = term_m_40;
  x_5 = t;
  t = SSL_table_put(w_5, x_5, d_31);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_31);
  return(t);
}
ATerm a_23 (ATerm t)
{
  t = term_n_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_22, z_22, a_23, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__3))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
      i_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_31, h_31);
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_40 = ATgetArgument(t, 0);
            ATerm r_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_31, h_31);
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = (ATerm) ATempty;
      }
    j_31 = t;
    d_6 = t;
    t = (ATerm) ATinsert(CheckATermList(j_31), i_31);
    c_6 = t;
    t = SSL_table_put(g_31, h_31, c_6);
    t = (ATerm) ATmakeAppl(sym__3, g_31, h_31, i_31);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_31 = NULL;
      t = term_k_13;
      t = j_0(t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_40, term_l_40, v_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_31 = ATgetFirst((ATermList) t);
          s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_31 = ATgetFirst((ATermList) t);
          u_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_31;
      t = h_0(t);
      t = t_31;
      t = i_0(t);
      z_31 = t;
      t = (ATerm) ATinsert(CheckATermList(u_31), z_31);
    }
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  if(match_string(t, "-i"))
    {
      t = b_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_32;
    }
  return(t);
}
ATerm c_23 (ATerm t)
{
  ATerm c_32 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  c_32 = t;
  g_6 = t;
  t = term_n_39;
  e_6 = t;
  t = g_6;
  h_6 = t;
  t = term_s_40;
  f_6 = t;
  t = SSL_table_put(e_6, f_6, c_32);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_32);
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = term_t_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_23, c_23, d_23, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_32 = NULL,n_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,s_6 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_13;
  t = whoami_0_0(t);
  d_32 = t;
  k_6 = t;
  t = term_q_24;
  i_6 = t;
  t = k_6;
  l_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_40), d_32);
  j_6 = t;
  t = SSL_printnl(i_6, j_6);
  s_6 = t;
  t = term_t_24;
  n_6 = t;
  t = SSL_exit(n_6);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,y_6 = NULL;
  t = term_v_40;
  v_6 = t;
  t = term_n_39;
  t_6 = t;
  t = v_6;
  y_6 = t;
  t = term_v_40;
  u_6 = t;
  t = SSL_table_get(t_6, u_6);
  {
    ATerm w_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL,z_6 = NULL,a_7 = NULL,c_7 = NULL,d_7 = NULL;
        t = eval_config_0_0(t);
        f_8 = t;
        c_7 = t;
        t = term_n_39;
        z_6 = t;
        t = c_7;
        d_7 = t;
        t = term_v_40;
        a_7 = t;
        t = SSL_table_put(z_6, a_7, f_8);
        t = f_8;
        ;
        LocalPopChoice(x_40);
      }
    else
      {
        t = w_40;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_96(t);
      ;
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      {
        ATerm g_32 = NULL,h_32 = NULL,k_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_32 = ATgetFirst((ATermList) t);
            h_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_32;
        t = foldr_2_0(g_96, h_96, t);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_32, k_32);
        t = h_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_23 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_8, n_8);
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        t = SSL_addr(m_8, n_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_32 = NULL,h_8 = NULL,j_8 = NULL;
  t = times_0_0(t);
  h_8 = t;
  t = SSL_explode_term(h_8);
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  t = foldr_2_0(e_23, f_23, t);
  n_32 = t;
  t = SSL_TicksToSeconds(n_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_33;
        if((z_32 != t))
          {
            _fail(t);
          }
        t = y_32;
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        t = y_32;
        {
          ATerm f_41 = t;
          int g_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_32, a_33);
              ;
              LocalPopChoice(g_41);
            }
          else
            {
              t = f_41;
              t = SSL_gtr(z_32, a_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL,f_33 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
      d_33 = t;
      t = term_t_39;
      g_7 = t;
      t = term_n_39;
      e_7 = t;
      t = g_7;
      h_7 = t;
      t = term_t_39;
      f_7 = t;
      t = SSL_table_get(e_7, f_7);
      {
        ATerm j_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL,i_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL;
            t = eval_config_0_0(t);
            c_9 = t;
            m_7 = t;
            t = term_n_39;
            i_7 = t;
            t = m_7;
            n_7 = t;
            t = term_t_39;
            k_7 = t;
            t = SSL_table_put(i_7, k_7, c_9);
            t = c_9;
            ;
            LocalPopChoice(k_41);
          }
        else
          {
            t = j_41;
          }
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_33, term_t_24);
        t = geq_0_0(t);
        t = d_33;
        t = r_112(t);
      }
      ;
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
    }
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  t = run_time_0_0(t);
  i_33 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  j_33 = t;
  q_7 = t;
  t = term_q_24;
  o_7 = t;
  t = q_7;
  r_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), i_33), term_l_41), j_33);
  p_7 = t;
  t = SSL_printnl(o_7, p_7);
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), i_33), term_l_41), j_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_23, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_7 = NULL,u_7 = NULL;
  t = report_run_time_0_0(t);
  u_7 = t;
  t = term_z_39;
  s_7 = t;
  t = SSL_exit(s_7);
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      {
        ATerm p_41 = t;
        int q_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(q_41);
          }
        else
          {
            t = p_41;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
      t = term_t_41;
      x_7 = t;
      t = term_n_39;
      v_7 = t;
      t = x_7;
      y_7 = t;
      t = term_t_41;
      w_7 = t;
      t = SSL_table_get(v_7, w_7);
      {
        ATerm u_41 = t;
        int v_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_9 = NULL,z_7 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
            t = eval_config_0_0(t);
            h_9 = t;
            d_8 = t;
            t = term_n_39;
            z_7 = t;
            t = d_8;
            e_8 = t;
            t = term_t_41;
            c_8 = t;
            t = SSL_table_put(z_7, c_8, h_9);
            t = h_9;
            ;
            LocalPopChoice(v_41);
          }
        else
          {
            t = u_41;
          }
      }
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      t = fetch_1_0(h_23, t);
    }
  t = v_103(t);
  return(t);
}
ATerm map_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        t = Cons_2_0(g_91, k_33, t);
      }
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_33 = ATgetFirst((ATermList) t);
      n_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_33 = NULL,s_33 = NULL;
        t = n_33;
        t = g_0(t);
        r_33 = t;
        t = m_33;
        t = e_0(t);
        s_33 = t;
        t = n_33;
        {
          ATerm i_23 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_33), s_33);
            return(t);
          }
          t = reverse_acc_2_0(e_0, i_23, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_13;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,i_8 = NULL,k_8 = NULL;
  w_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_33);
  t_33 = t;
  t = u_33;
  t = t_82(t);
  v_33 = t;
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_33);
  i_8 = t;
  t = SSLsetAnnotations(i_8, t_33);
  return(t);
}
ATerm j_23 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm k_23 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_23 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_33), term_y_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL;
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
      t = term_v_40;
      p_8 = t;
      t = term_n_39;
      l_8 = t;
      t = p_8;
      q_8 = t;
      t = term_v_40;
      o_8 = t;
      t = SSL_table_get(l_8, o_8);
      {
        ATerm b_42 = t;
        int c_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
            t = eval_config_0_0(t);
            l_9 = t;
            t_8 = t;
            t = term_n_39;
            r_8 = t;
            t = t_8;
            u_8 = t;
            t = term_v_40;
            s_8 = t;
            t = SSL_table_put(r_8, s_8, l_9);
            t = l_9;
            ;
            LocalPopChoice(c_42);
          }
        else
          {
            t = b_42;
          }
      }
      ;
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      t = fetch_1_0(j_23, t);
    }
  t = term_d_42;
  t = echo_0_0(t);
  y_8 = t;
  t = term_k_40;
  v_8 = t;
  t = y_8;
  z_8 = t;
  t = term_l_40;
  w_8 = t;
  t = SSL_table_get(v_8, w_8);
  t = reverse_acc_2_0(_id, k_23, t);
  t = map_1_0(m_23, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,a_9 = NULL,b_9 = NULL;
  d_34 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_34);
  a_34 = t;
  t = b_34;
  t = u_82(t);
  c_34 = t;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_34);
  a_9 = t;
  t = SSLsetAnnotations(a_9, a_34);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,d_9 = NULL,e_9 = NULL;
  h_34 = t;
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_42 = ATgetFirst((ATermList) t);
                ATerm h_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_34;
          }
        ;
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        t = (ATerm) ATinsert(ATempty, h_34);
      }
    i_34 = t;
    e_9 = t;
    t = term_e_38;
    d_9 = t;
    t = SSL_printnl(d_9, i_34);
    t = h_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  t = term_v_40;
  j_9 = t;
  t = term_n_39;
  f_9 = t;
  t = j_9;
  k_9 = t;
  t = term_v_40;
  i_9 = t;
  t = SSL_table_get(f_9, i_9);
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL,m_9 = NULL,o_9 = NULL,p_9 = NULL,r_9 = NULL;
        t = eval_config_0_0(t);
        q_9 = t;
        p_9 = t;
        t = term_n_39;
        m_9 = t;
        t = p_9;
        r_9 = t;
        t = term_v_40;
        o_9 = t;
        t = SSL_table_put(m_9, o_9, q_9);
        t = q_9;
        ;
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_23 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  t = term_n_39;
  s_9 = t;
  t = w_9;
  x_9 = t;
  t = term_k_42;
  t_9 = t;
  t = x_9;
  y_9 = t;
  t = term_k_13;
  v_9 = t;
  t = SSL_table_put(s_9, t_9, v_9);
  t = term_l_42;
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = term_m_42;
  return(t);
}
ATerm q_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_23 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,h_10 = NULL,i_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,v_10 = NULL,w_10 = NULL;
  c_10 = t;
  t = term_n_39;
  z_9 = t;
  t = c_10;
  h_10 = t;
  t = term_k_42;
  a_10 = t;
  t = h_10;
  i_10 = t;
  t = term_k_13;
  b_10 = t;
  t = SSL_table_put(z_9, a_10, b_10);
  t_10 = t;
  t = term_n_39;
  p_10 = t;
  t = t_10;
  v_10 = t;
  t = term_n_42;
  q_10 = t;
  t = v_10;
  w_10 = t;
  t = term_k_13;
  r_10 = t;
  t = SSL_table_put(p_10, q_10, r_10);
  t = term_o_42;
  return(t);
}
ATerm s_23 (ATerm t)
{
  t = term_p_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_23, o_23, p_23, t);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      t = Option_3_0(q_23, r_23, s_23, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,x_10 = NULL,y_10 = NULL;
  r_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_34 = ATgetFirst((ATermList) t);
      o_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_34);
  m_34 = t;
  t = n_34;
  t = p_70(t);
  p_34 = t;
  t = o_34;
  t = q_70(t);
  q_34 = t;
  y_10 = t;
  t = (ATerm) ATinsert(CheckATermList(q_34), p_34);
  x_10 = t;
  t = SSLsetAnnotations(x_10, m_34);
  return(t);
}
ATerm u_23 (ATerm t)
{
  ATerm x_34 = NULL,z_10 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL;
  x_34 = t;
  d_11 = t;
  t = term_n_39;
  z_10 = t;
  t = d_11;
  f_11 = t;
  t = term_v_40;
  c_11 = t;
  t = SSL_table_put(z_10, c_11, x_34);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_42;
        t = r_108(t);
        ;
        LocalPopChoice(t_42);
      }
    else
      {
        t = s_42;
      }
    t = w_34;
    {
      ATerm v_23 (ATerm t)
      {
        ATerm v_42 = t;
        int w_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_42 = t;
            int y_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_42);
              }
            else
              {
                t = x_42;
                t = r_108(t);
                t = Cons_2_0(_id, v_23, t);
              }
            ;
            LocalPopChoice(w_42);
          }
        else
          {
            t = v_42;
            {
              ATerm z_34 = NULL,a_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_34 = ATgetFirst((ATermList) t);
                  a_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_35), (ATerm) ATmakeAppl(sym_Undefined_1, z_34));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_23, v_23, t);
    }
  }
  return(t);
}
ATerm x_23 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  if(match_string(t, "--help"))
    {
      t = k_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_35;
        }
    }
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm t_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,f_12 = NULL,g_12 = NULL;
  b_12 = t;
  t = term_n_39;
  t_11 = t;
  t = b_12;
  f_12 = t;
  t = term_t_41;
  z_11 = t;
  t = f_12;
  g_12 = t;
  t = term_k_13;
  a_12 = t;
  t = SSL_table_put(t_11, z_11, a_12);
  t = term_z_42;
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = term_a_43;
  return(t);
}
ATerm b_24 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,q_11 = NULL,s_11 = NULL,i_14 = NULL,j_14 = NULL;
  h_35 = t;
  l_11 = t;
  t = term_k_40;
  i_11 = t;
  t = l_11;
  q_11 = t;
  t = term_l_40;
  j_11 = t;
  t = q_11;
  s_11 = t;
  t = (ATerm) ATempty;
  k_11 = t;
  t = SSL_table_put(i_11, j_11, k_11);
  t = h_35;
  {
    ATerm w_23 (ATerm t)
    {
      ATerm b_43 = t;
      int c_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_108(t);
          ;
          LocalPopChoice(c_43);
        }
      else
        {
          t = b_43;
          {
            ATerm d_43 = t;
            int e_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_23, y_23, z_23, t);
                ;
                LocalPopChoice(e_43);
              }
            else
              {
                t = d_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_23, t);
    {
      ATerm f_43 = t;
      int g_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_35 = NULL;
          p_35 = t;
          {
            ATerm h_43 = t;
            int i_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_12 = NULL,e_13 = NULL;
                t = p_35;
                {
                  ATerm j_43 = t;
                  int k_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
                      t = term_t_41;
                      r_12 = t;
                      t = term_n_39;
                      p_12 = t;
                      t = r_12;
                      s_12 = t;
                      t = term_t_41;
                      q_12 = t;
                      t = SSL_table_get(p_12, q_12);
                      {
                        ATerm l_43 = t;
                        int m_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_11 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
                            t = eval_config_0_0(t);
                            e_11 = t;
                            v_12 = t;
                            t = term_n_39;
                            t_12 = t;
                            t = v_12;
                            w_12 = t;
                            t = term_t_41;
                            u_12 = t;
                            t = SSL_table_put(t_12, u_12, e_11);
                            t = e_11;
                            ;
                            LocalPopChoice(m_43);
                          }
                        else
                          {
                            t = l_43;
                          }
                      }
                      ;
                      LocalPopChoice(k_43);
                    }
                  else
                    {
                      t = j_43;
                      t = fetch_1_0(b_24, t);
                    }
                  t = p_35;
                  t = default_system_usage_0_0(t);
                  e_13 = t;
                  t = term_z_39;
                  z_12 = t;
                  t = SSL_exit(z_12);
                }
                ;
                LocalPopChoice(i_43);
              }
            else
              {
                t = h_43;
                {
                  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,o_13 = NULL,p_13 = NULL;
                  t = term_k_42;
                  h_13 = t;
                  t = term_n_39;
                  f_13 = t;
                  t = h_13;
                  i_13 = t;
                  t = term_k_42;
                  g_13 = t;
                  t = SSL_table_get(f_13, g_13);
                  {
                    ATerm n_43 = t;
                    int o_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_11 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
                        t = eval_config_0_0(t);
                        u_11 = t;
                        m_13 = t;
                        t = term_n_39;
                        j_13 = t;
                        t = m_13;
                        n_13 = t;
                        t = term_k_42;
                        l_13 = t;
                        t = SSL_table_put(j_13, l_13, u_11);
                        t = u_11;
                        ;
                        LocalPopChoice(o_43);
                      }
                    else
                      {
                        t = n_43;
                      }
                    t = p_35;
                    t = default_system_about_0_0(t);
                    p_13 = t;
                    t = term_z_39;
                    o_13 = t;
                    t = SSL_exit(o_13);
                  }
                }
              }
          }
          ;
          LocalPopChoice(g_43);
        }
      else
        {
          t = f_43;
          {
            ATerm p_43 = t;
            int q_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,d_14 = NULL,f_14 = NULL;
                ATerm c_24 (ATerm t)
                {
                  ATerm d_24 (ATerm t)
                  {
                    if(((i_35 != NULL) && (i_35 != t)))
                      _fail(t);
                    else
                      i_35 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_24, t);
                  return(t);
                }
                t = fetch_1_0(c_24, t);
                v_13 = t;
                t = term_q_24;
                t_13 = t;
                t = v_13;
                w_13 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_35)), term_r_43);
                u_13 = t;
                t = SSL_printnl(t_13, u_13);
                t = (ATerm) ATmakeAppl(sym__2, term_q_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_35)), term_r_43));
                t = default_system_usage_0_0(t);
                f_14 = t;
                t = term_t_24;
                d_14 = t;
                t = SSL_exit(d_14);
                ;
                LocalPopChoice(q_43);
              }
            else
              {
                t = p_43;
              }
          }
        }
      j_35 = t;
      j_14 = t;
      t = term_k_40;
      i_14 = t;
      t = SSL_table_destroy(i_14);
      t = j_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,k_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t = parse_options_1_0(x_103, t);
  s_35 = t;
  r_14 = t;
  t = term_s_43;
  k_14 = t;
  t = SSL_table_create(k_14);
  u_14 = t;
  t = term_s_43;
  s_14 = t;
  t = u_14;
  v_14 = t;
  t = term_t_43;
  t_14 = t;
  t = SSL_table_put(s_14, t_14, s_35);
  t = s_35;
  t = z_103(t);
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_103, t);
        ;
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
        {
          ATerm w_43 = t;
          int x_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_43);
            }
          else
            {
              t = w_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_24 (ATerm t)
{
  t = if_verbose2_1_0(m_24, t);
  return(t);
}
ATerm j_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_24 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  t = term_n_39;
  x_14 = t;
  t = c_15;
  d_15 = t;
  t = term_y_43;
  y_14 = t;
  t = d_15;
  e_15 = t;
  t = term_k_13;
  z_14 = t;
  t = SSL_table_put(x_14, y_14, z_14);
  t = term_z_43;
  return(t);
}
ATerm l_24 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm m_24 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,u_15 = NULL,w_15 = NULL,y_15 = NULL,c_16 = NULL;
  t_35 = t;
  t = term_v_40;
  l_15 = t;
  t = term_n_39;
  j_15 = t;
  t = l_15;
  m_15 = t;
  t = term_v_40;
  k_15 = t;
  t = SSL_table_get(j_15, k_15);
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,s_15 = NULL;
        t = eval_config_0_0(t);
        c_12 = t;
        q_15 = t;
        t = term_n_39;
        o_15 = t;
        t = q_15;
        s_15 = t;
        t = term_v_40;
        p_15 = t;
        t = SSL_table_put(o_15, p_15, c_12);
        t = c_12;
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
      }
    u_35 = t;
    y_15 = t;
    t = term_q_24;
    u_15 = t;
    t = y_15;
    c_16 = t;
    t = (ATerm) ATinsert(ATempty, u_35);
    w_15 = t;
    t = SSL_printnl(u_15, w_15);
    t = t_35;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm g_24 (ATerm t)
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_103(t);
        ;
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        {
          ATerm f_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_44);
            }
          else
            {
              t = f_44;
              {
                ATerm h_44 = t;
                int i_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_44);
                  }
                else
                  {
                    t = h_44;
                    {
                      ATerm j_44 = t;
                      int k_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_24, k_24, l_24, t);
                          ;
                          LocalPopChoice(k_44);
                        }
                      else
                        {
                          t = j_44;
                          {
                            ATerm l_44 = t;
                            int m_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_44);
                              }
                            else
                              {
                                t = l_44;
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
  ATerm i_24 (ATerm t)
  {
    ATerm v_35 = NULL,w_35 = NULL,n_12 = NULL;
    v_35 = t;
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_24 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_35 != NULL) && (w_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_24, t);
          ;
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          t = term_p_44;
          w_35 = t;
        }
      t = not_null(w_35);
      t = ReadFromFile_0_0(t);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_35, n_12);
      t = apply_strategy_1_0(g_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_24, i_103, h_24, i_24, t);
  return(t);
}
ATerm p_24 (ATerm t)
{
  t = _2_0(_id, strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_24, _fail, default_usage_0_0, t);
  return(t);
}
