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
ATerm term_z_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_x_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_j_17;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
void init_constant_terms (void)
{
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_x_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_17);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_e_9);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_l_19);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_e_9);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_e_9);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_e_9);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_e_9);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm e_0 (ATerm);
ATerm m_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm w_0 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm spaste_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm f_5 (ATerm d_31, ATerm c_31, ATerm);
ATerm SVar_1_0 (ATerm l_75 (ATerm), ATerm);
ATerm q_5 (ATerm e_99 (ATerm), ATerm f_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_47, ATerm h_47, ATerm g_47, ATerm);
ATerm new_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm t_5 (ATerm y_98 (ATerm), ATerm z_98 (ATerm (ATerm), ATerm), ATerm a_47, ATerm d_47, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm rename_4_0 (ATerm t_98 (ATerm (ATerm), ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_98 (ATerm (ATerm), ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm tpaste_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_5 (ATerm e_94 (ATerm), ATerm m_39, ATerm l_39, ATerm);
ATerm foldr_3_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm l_5 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm q_39, ATerm p_39, ATerm);
ATerm m_5 (ATerm z_93 (ATerm), ATerm k_39, ATerm j_39, ATerm);
ATerm at_end_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_36 (ATerm u_35, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm y_3 (ATerm);
ATerm o_5 (ATerm y_535, ATerm d_536, ATerm g_63, ATerm);
ATerm while_not_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm for_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm n_39 (ATerm x_37, ATerm y_37, ATerm z_37, ATerm);
ATerm f_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm free_vars_3_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm a_6 (ATerm m_54, ATerm n_54, ATerm);
ATerm b_6 (ATerm x_58, ATerm y_58, ATerm);
ATerm d_6 (ATerm w_106 (ATerm), ATerm f_485, ATerm b_59, ATerm);
ATerm c_6 (ATerm t_58, ATerm u_58, ATerm);
ATerm j_5 (ATerm);
ATerm p_5 (ATerm);
ATerm u_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm a_51 (ATerm u_50, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_6 (ATerm z_58, ATerm);
ATerm f_6 (ATerm o_54, ATerm p_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_52 (ATerm m_51, ATerm);
ATerm a_53 (ATerm r_51, ATerm s_51, ATerm t_51, ATerm);
ATerm b_53 (ATerm i_52, ATerm k_52, ATerm l_52, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm z_5 (ATerm c_53, ATerm d_53, ATerm);
ATerm debug_1_0 (ATerm u_106 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm h_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm w_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_6 (ATerm j_63, ATerm k_63, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_6 (ATerm v_44, ATerm w_44, ATerm u_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_6 (ATerm z_42, ATerm a_43, ATerm);
ATerm foldr_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_7 (ATerm);
ATerm need_help_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm i_6 (ATerm m_46, ATerm n_46, ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_109 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm parse_options_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm iowrap_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,n_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  l_0 = t;
  t = term_e_9;
  t = whoami_0_0(t);
  n_0 = t;
  t = term_f_9;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_9), n_0), term_h_9);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_l_9;
  p_0 = t;
  t = SSL_exit(p_0);
  t = l_0;
  return(t);
}
ATerm c_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(((ATgetType(o_9) != AT_LIST) || !(ATisEmpty(o_9))))
        _fail(t);
      {
        ATerm p_9 = ATgetArgument(t, 1);
        if(((ATgetType(p_9) != AT_LIST) || !(ATisEmpty(p_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
        {
          x_0 = ATgetFirst((ATermList) q_9);
          y_0 = (ATerm) ATgetNext((ATermList) q_9);
        }
      else
        _fail(t);
      {
        ATerm r_9 = ATgetArgument(t, 1);
        if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
          {
            z_0 = ATgetFirst((ATermList) r_9);
            a_1 = (ATerm) ATgetNext((ATermList) r_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_0, z_0), (ATerm) ATmakeAppl(sym__2, y_0, a_1));
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_1), b_1);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_1;
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm u_9 = ATgetArgument(t, 0);
            g_1 = ATgetArgument(t, 1);
            h_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(t_9);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, g_1, h_1);
      }
    else
      {
        t = s_9;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm v_9 = ATgetArgument(t, 0);
            g_1 = ATgetArgument(t, 1);
            h_1 = ATgetArgument(t, 2);
            i_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_1, g_1, h_1, i_1);
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if(((ATgetType(w_9) != AT_LIST) || !(ATisEmpty(w_9))))
        _fail(t);
      {
        ATerm x_9 = ATgetArgument(t, 1);
        if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(((ATgetType(y_9) == AT_LIST) && !(ATisEmpty(y_9))))
        {
          v_2 = ATgetFirst((ATermList) y_9);
          w_2 = (ATerm) ATgetNext((ATermList) y_9);
        }
      else
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
          {
            x_2 = ATgetFirst((ATermList) z_9);
            z_2 = (ATerm) ATgetNext((ATermList) z_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_2, x_2), (ATerm) ATmakeAppl(sym__2, w_2, z_2));
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm c_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_3), c_3);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_3 = NULL,v_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      m_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_3;
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_3);
      }
    else
      {
        t = a_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_10 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_3, v_3);
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if(((ATgetType(e_10) != AT_LIST) || !(ATisEmpty(e_10))))
        _fail(t);
      {
        ATerm f_10 = ATgetArgument(t, 1);
        if(((ATgetType(f_10) != AT_LIST) || !(ATisEmpty(f_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
        {
          p_6 = ATgetFirst((ATermList) g_10);
          q_6 = (ATerm) ATgetNext((ATermList) g_10);
        }
      else
        _fail(t);
      {
        ATerm h_10 = ATgetArgument(t, 1);
        if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
          {
            r_6 = ATgetFirst((ATermList) h_10);
            s_6 = (ATerm) ATgetNext((ATermList) h_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_6, r_6), (ATerm) ATmakeAppl(sym__2, q_6, s_6));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_6), u_6);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm y_6 = NULL,c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_7);
      }
    else
      {
        t = i_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_10 = ATgetArgument(t, 0);
            c_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_7, c_7);
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(((ATgetType(m_10) != AT_LIST) || !(ATisEmpty(m_10))))
        _fail(t);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) != AT_LIST) || !(ATisEmpty(n_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
        {
          p_8 = ATgetFirst((ATermList) o_10);
          q_8 = (ATerm) ATgetNext((ATermList) o_10);
        }
      else
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
          {
            z_8 = ATgetFirst((ATermList) p_10);
            a_9 = (ATerm) ATgetNext((ATermList) p_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_8, z_8), (ATerm) ATmakeAppl(sym__2, q_8, a_9));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_9), g_9);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9;
  {
    ATerm r_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_9);
      }
    else
      {
        t = r_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_10 = ATgetArgument(t, 0);
            m_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_9, m_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,w_10 = NULL,y_10 = NULL,z_10 = NULL,h_11 = NULL;
  y_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_10 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      {
        ATerm o_0 = NULL,u_0 = NULL,v_0 = NULL,k_0 = NULL;
        t = SSLgetAnnotations(y_10);
        o_0 = t;
        t = z_10;
        t = u_84(t);
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, v_0);
        t = genzip_4_0(c_0, e_0, m_0, s_0, t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_0, h_11);
        k_0 = t;
        t = SSLsetAnnotations(k_0, o_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_10 = ATgetArgument(t, 0);
          h_11 = ATgetArgument(t, 1);
          s_10 = ATgetArgument(t, 2);
          {
            ATerm n_2 = NULL,r_2 = NULL,t_2 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(y_10);
            n_2 = t;
            t = h_11;
            t = u_84(t);
            t_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_11, t_2);
            t = genzip_4_0(t_0, w_0, d_1, f_1, t);
            r_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_10, r_2, s_10);
            j_1 = t;
            t = SSLsetAnnotations(j_1, n_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_10 = ATgetArgument(t, 0);
              h_11 = ATgetArgument(t, 1);
              s_10 = ATgetArgument(t, 2);
              w_10 = ATgetArgument(t, 3);
              {
                ATerm z_4 = NULL,n_5 = NULL,n_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(y_10);
                z_4 = t;
                t = h_11;
                t = u_84(t);
                n_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_11, n_6);
                t = genzip_4_0(o_1, p_1, q_1, r_1, t);
                n_5 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_10, n_5, s_10, w_10);
                k_1 = t;
                t = SSLsetAnnotations(k_1, z_4);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  z_10 = ATgetArgument(t, 0);
                  h_11 = ATgetArgument(t, 1);
                  s_10 = ATgetArgument(t, 2);
                  w_10 = ATgetArgument(t, 3);
                  {
                    ATerm d_8 = NULL,m_8 = NULL,n_8 = NULL,l_1 = NULL;
                    t = SSLgetAnnotations(y_10);
                    d_8 = t;
                    t = h_11;
                    t = u_84(t);
                    n_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_11, n_8);
                    t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                    m_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, z_10, m_8, s_10, w_10);
                    l_1 = t;
                    t = SSLsetAnnotations(l_1, d_8);
                  }
                }
              else
                {
                  ATerm q_10 = NULL,u_10 = NULL,n_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      z_10 = ATgetArgument(t, 0);
                      h_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_10);
                  q_10 = t;
                  t = z_10;
                  t = u_84(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm a_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, u_10, h_11);
                  n_1 = t;
                  t = SSLsetAnnotations(n_1, q_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,e_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
      {
        ATerm f_11 = NULL,o_11 = NULL,p_11 = NULL,x_1 = NULL;
        t = SSLgetAnnotations(z_15);
        f_11 = t;
        t = a_16;
        t = v_84(t);
        o_11 = t;
        t = e_16;
        t = v_84(t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_11, p_11);
        x_1 = t;
        t = SSLsetAnnotations(x_1, f_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_16 = ATgetArgument(t, 0);
          e_16 = ATgetArgument(t, 1);
          v_15 = ATgetArgument(t, 2);
          {
            ATerm m_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(z_15);
            m_12 = t;
            t = a_16;
            t = x_84(t);
            t_12 = t;
            t = e_16;
            t = x_84(t);
            u_12 = t;
            t = v_15;
            t = v_84(t);
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_12, u_12, v_12);
            z_1 = t;
            t = SSLsetAnnotations(z_1, m_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_16 = ATgetArgument(t, 0);
              e_16 = ATgetArgument(t, 1);
              v_15 = ATgetArgument(t, 2);
              y_15 = ATgetArgument(t, 3);
              {
                ATerm m_13 = NULL,u_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(z_15);
                m_13 = t;
                t = a_16;
                t = x_84(t);
                u_13 = t;
                t = e_16;
                t = x_84(t);
                c_14 = t;
                t = v_15;
                t = x_84(t);
                d_14 = t;
                t = y_15;
                t = v_84(t);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_13, c_14, d_14, e_14);
                b_2 = t;
                t = SSLsetAnnotations(b_2, m_13);
              }
            }
          else
            {
              ATerm p_14 = NULL,s_14 = NULL,u_14 = NULL,g_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  a_16 = ATgetArgument(t, 0);
                  e_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_15);
              p_14 = t;
              t = a_16;
              t = x_84(t);
              s_14 = t;
              t = e_16;
              t = v_84(t);
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_14, u_14);
              g_2 = t;
              t = SSLsetAnnotations(g_2, p_14);
            }
        }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm t_16 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_16 = ATgetArgument(t, 0);
          {
            ATerm d_11 = ATgetArgument(t, 1);
          }
          {
            ATerm e_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_11);
      t = t_16;
    }
  else
    {
      t = b_11;
      if(match_cons(t, sym_SDefT_4))
        {
          t_16 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
          {
            ATerm i_11 = ATgetArgument(t, 2);
          }
          {
            ATerm j_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = t_16;
    }
  return(t);
}
ATerm f_5 (ATerm d_31, ATerm c_31, ATerm t)
{
  t = d_31;
  t = map_1_0(w_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,a_3 = NULL;
  g_17 = t;
  if(match_cons(t, sym_SVar_1))
    {
      e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  d_17 = t;
  t = e_17;
  t = l_75(t);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_17);
  a_3 = t;
  t = SSLsetAnnotations(a_3, d_17);
  return(t);
}
ATerm q_5 (ATerm e_99 (ATerm), ATerm f_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_47, ATerm h_47, ATerm g_47, ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm i_17 = NULL;
    i_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_17, not_null(g_47));
    t = e_99(t);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm l_17 = NULL;
    l_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_17, not_null(h_47));
    t = e_99(t);
    return(t);
  }
  t = not_null(i_47);
  t = f_99(y_1, a_2, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(((ATgetType(k_11) != AT_LIST) || !(ATisEmpty(k_11))))
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) != AT_LIST) || !(ATisEmpty(l_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm e_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(((ATgetType(m_11) == AT_LIST) && !(ATisEmpty(m_11))))
        {
          e_18 = ATgetFirst((ATermList) m_11);
          j_18 = (ATerm) ATgetNext((ATermList) m_11);
        }
      else
        _fail(t);
      {
        ATerm n_11 = ATgetArgument(t, 1);
        if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
          {
            k_18 = ATgetFirst((ATermList) n_11);
            l_18 = (ATerm) ATgetNext((ATermList) n_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_18, k_18), (ATerm) ATmakeAppl(sym__2, j_18, l_18));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_18), m_18);
  return(t);
}
ATerm t_5 (ATerm y_98 (ATerm), ATerm z_98 (ATerm (ATerm), ATerm), ATerm a_47, ATerm d_47, ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,r_17 = NULL,y_17 = NULL,b_18 = NULL;
  t = not_null(a_47);
  t = y_98(t);
  if(((o_17 != NULL) && (o_17 != t)))
    _fail(t);
  else
    o_17 = t;
  t = map_1_0(new_0_0, t);
  if(((p_17 != NULL) && (p_17 != t)))
    _fail(t);
  else
    p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(p_17));
  t = genzip_4_0(c_2, d_2, e_2, _id, t);
  if(((b_18 != NULL) && (b_18 != t)))
    _fail(t);
  else
    b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(d_47));
  t = conc_0_0(t);
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = not_null(a_47);
  {
    ATerm f_2 (ATerm t)
    {
      t = not_null(p_17);
      return(t);
    }
    t = z_98(f_2, t);
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(y_17), not_null(d_47), not_null(r_17));
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,z_18 = NULL,c_19 = NULL,d_19 = NULL;
  w_18 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_19 = ATgetFirst((ATermList) t);
      d_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_19;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_18;
            if((x_18 != t))
              {
                _fail(t);
              }
            t = v_18;
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            t = (ATerm) ATmakeAppl(sym__2, x_18, d_19);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_18, d_19);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm a_21 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_99(t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm q_20 = NULL,s_20 = NULL,z_20 = NULL;
          ATerm h_2 (ATerm t)
          {
            ATerm f_15 = NULL;
            f_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_15, not_null(z_20));
            t = a_21(t);
            return(t);
          }
          if(((q_20 != NULL) && (q_20 != t)))
            _fail(t);
          else
            q_20 = t;
          if(match_cons(t, sym__2))
            {
              if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_20 = ATgetArgument(t, 0);
              if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                z_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(s_20);
          t = SRTS_all(h_2, t);
        }
      }
    return(t);
  }
  t = a_21(t);
  return(t);
}
ATerm rename_4_0 (ATerm t_98 (ATerm (ATerm), ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_21 = NULL;
  ATerm g_22 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      ATerm u_21 = NULL,w_21 = NULL,b_22 = NULL;
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      if(match_cons(t, sym__2))
        {
          if(((w_21 != NULL) && (w_21 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_21 = ATgetArgument(t, 0);
          if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm f_22 = NULL;
              f_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_22, not_null(b_22));
              t = lookup_0_0(t);
              return(t);
            }
            t = not_null(w_21);
            t = t_98(j_2, t);
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm w_15 = NULL,x_15 = NULL,b_16 = NULL;
              t = not_null(u_21);
              t = t_5(u_98, w_98, not_null(w_21), not_null(b_22), t);
              if(match_cons(t, sym__3))
                {
                  w_15 = ATgetArgument(t, 0);
                  x_15 = ATgetArgument(t, 1);
                  b_16 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_5(g_22, v_98, w_15, x_15, b_16, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(i_2, t);
    return(t);
  }
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), (ATerm) ATempty);
  t = g_22(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      if(((ATgetType(w_11) != AT_LIST) || !(ATisEmpty(w_11))))
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
ATerm l_2 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
        {
          f_18 = ATgetFirst((ATermList) y_11);
          g_18 = (ATerm) ATgetNext((ATermList) y_11);
        }
      else
        _fail(t);
      {
        ATerm z_11 = ATgetArgument(t, 1);
        if(((ATgetType(z_11) == AT_LIST) && !(ATisEmpty(z_11))))
          {
            h_18 = ATgetFirst((ATermList) z_11);
            i_18 = (ATerm) ATgetNext((ATermList) z_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_18, h_18), (ATerm) ATmakeAppl(sym__2, g_18, i_18));
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_18), p_18);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm s_18 = NULL,y_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_18;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_19);
      }
    else
      {
        t = a_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_12 = ATgetArgument(t, 0);
            y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_19, y_18);
      }
  }
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if(((ATgetType(e_12) != AT_LIST) || !(ATisEmpty(e_12))))
        _fail(t);
      {
        ATerm f_12 = ATgetArgument(t, 1);
        if(((ATgetType(f_12) != AT_LIST) || !(ATisEmpty(f_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,r_20 = NULL,t_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if(((ATgetType(g_12) == AT_LIST) && !(ATisEmpty(g_12))))
        {
          o_20 = ATgetFirst((ATermList) g_12);
          p_20 = (ATerm) ATgetNext((ATermList) g_12);
        }
      else
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
        if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
          {
            r_20 = ATgetFirst((ATermList) h_12);
            t_20 = (ATerm) ATgetNext((ATermList) h_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_20, r_20), (ATerm) ATmakeAppl(sym__2, p_20, t_20));
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_20), u_20);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm x_20 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_20;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_21);
      }
    else
      {
        t = i_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_12 = ATgetArgument(t, 0);
            b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_21, b_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  q_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
      {
        ATerm p_16 = NULL,x_16 = NULL,d_3 = NULL;
        t = SSLgetAnnotations(q_27);
        p_16 = t;
        t = x_27;
        t = q_84(t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_16, y_27);
        d_3 = t;
        t = SSLsetAnnotations(d_3, p_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          x_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
          z_27 = ATgetArgument(t, 2);
          a_28 = ATgetArgument(t, 3);
          {
            ATerm t_17 = NULL,z_17 = NULL,c_18 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(q_27);
            t_17 = t;
            t = z_27;
            t = q_84(t);
            c_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_27, c_18);
            t = genzip_4_0(k_2, l_2, m_2, o_2, t);
            z_17 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_27, y_27, z_17, a_28);
            e_3 = t;
            t = SSLsetAnnotations(e_3, t_17);
          }
        }
      else
        {
          ATerm a_20 = NULL,i_20 = NULL,j_20 = NULL,f_3 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              x_27 = ATgetArgument(t, 0);
              y_27 = ATgetArgument(t, 1);
              z_27 = ATgetArgument(t, 2);
              a_28 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_27);
          a_20 = t;
          t = z_27;
          t = q_84(t);
          j_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_27, j_20);
          t = genzip_4_0(p_2, q_2, s_2, u_2, t);
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_27, y_27, i_20, a_28);
          f_3 = t;
          t = SSLsetAnnotations(f_3, a_20);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
      {
        ATerm a_22 = NULL,j_22 = NULL,k_22 = NULL,l_3 = NULL;
        t = SSLgetAnnotations(h_31);
        a_22 = t;
        t = i_31;
        t = t_84(t);
        j_22 = t;
        t = e_31;
        t = r_84(t);
        k_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, k_22);
        l_3 = t;
        t = SSLsetAnnotations(l_3, a_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_31 = ATgetArgument(t, 0);
          e_31 = ATgetArgument(t, 1);
          f_31 = ATgetArgument(t, 2);
          g_31 = ATgetArgument(t, 3);
          {
            ATerm u_22 = NULL,z_22 = NULL,d_23 = NULL,e_23 = NULL,g_23 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(h_31);
            u_22 = t;
            t = i_31;
            t = t_84(t);
            z_22 = t;
            t = e_31;
            t = t_84(t);
            d_23 = t;
            t = f_31;
            t = t_84(t);
            e_23 = t;
            t = g_31;
            t = r_84(t);
            g_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_22, d_23, e_23, g_23);
            n_3 = t;
            t = SSLsetAnnotations(n_3, u_22);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              i_31 = ATgetArgument(t, 0);
              e_31 = ATgetArgument(t, 1);
              f_31 = ATgetArgument(t, 2);
              g_31 = ATgetArgument(t, 3);
              {
                ATerm b_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(h_31);
                b_24 = t;
                t = i_31;
                t = t_84(t);
                k_24 = t;
                t = e_31;
                t = t_84(t);
                l_24 = t;
                t = f_31;
                t = t_84(t);
                m_24 = t;
                t = g_31;
                t = r_84(t);
                n_24 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, k_24, l_24, m_24, n_24);
                o_3 = t;
                t = SSLsetAnnotations(o_3, b_24);
              }
            }
          else
            {
              ATerm l_25 = NULL,r_25 = NULL,p_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_31);
              l_25 = t;
              t = i_31;
              t = r_84(t);
              r_25 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_25);
              p_3 = t;
              t = SSLsetAnnotations(p_3, l_25);
            }
        }
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_31);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_31 = ATgetArgument(t, 0);
            t = s_31;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_31 = ATgetArgument(t, 0);
                t_31 = ATgetArgument(t, 1);
                u_31 = ATgetArgument(t, 2);
                v_31 = ATgetArgument(t, 3);
                t = u_31;
                t = map_1_0(h_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_31 = ATgetArgument(t, 0);
                    t_31 = ATgetArgument(t, 1);
                    u_31 = ATgetArgument(t, 2);
                    v_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_31;
                t = map_1_0(i_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm d_32 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_32 = ATgetArgument(t, 0);
          {
            ATerm r_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_12);
      t = d_32;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_32;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_32 = NULL;
  ATerm s_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_32 = ATgetArgument(t, 0);
          {
            ATerm x_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_12);
      t = m_32;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_32;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(y_2, b_3, tboundin_3_0, t);
  return(t);
}
ATerm k_5 (ATerm e_94 (ATerm), ATerm m_39, ATerm l_39, ATerm t)
{
  ATerm i_33 (ATerm t)
  {
    ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
    d_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(l_39);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_33 = ATgetFirst((ATermList) t);
            f_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_33;
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(l_39);
                  return(t);
                }
                t = l_5(e_94, j_3, not_null(e_33), not_null(f_33), t);
                t = i_33(t);
              }
              ;
              LocalPopChoice(z_12);
            }
          else
            {
              t = y_12;
              {
                ATerm e_26 = NULL,h_26 = NULL,x_3 = NULL;
                t = SSLgetAnnotations(d_33);
                e_26 = t;
                t = f_33;
                t = i_33(t);
                h_26 = t;
                t = (ATerm) ATinsert(CheckATermList(h_26), e_33);
                x_3 = t;
                t = SSLsetAnnotations(x_3, e_26);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(m_39);
  t = i_33(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_33;
      t = u_96(t);
    }
  else
    {
      ATerm s_33 = NULL,t_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_33 = ATgetFirst((ATermList) t);
          p_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_33;
      t = w_96(t);
      s_33 = t;
      t = p_33;
      t = foldr_3_0(u_96, v_96, w_96, t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_33, t_33);
      t = v_96(t);
    }
  return(t);
}
ATerm l_5 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm q_39, ATerm p_39, ATerm t)
{
  t = i_94(t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm w_33 = NULL;
      w_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_39), w_33);
      t = h_94(t);
      return(t);
    }
    t = fetch_1_0(k_3, t);
    t = not_null(p_39);
  }
  return(t);
}
ATerm m_5 (ATerm z_93 (ATerm), ATerm k_39, ATerm j_39, ATerm t)
{
  ATerm s_34 (ATerm t)
  {
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
    n_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_34 = ATgetFirst((ATermList) t);
            p_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_34;
              {
                ATerm q_3 (ATerm t)
                {
                  t = not_null(j_39);
                  return(t);
                }
                t = l_5(z_93, q_3, not_null(o_34), not_null(p_34), t);
                t = s_34(t);
              }
              ;
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              {
                ATerm u_26 = NULL,d_27 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(n_34);
                u_26 = t;
                t = p_34;
                t = s_34(t);
                d_27 = t;
                t = (ATerm) ATinsert(CheckATermList(d_27), o_34);
                z_3 = t;
                t = SSLsetAnnotations(z_3, u_26);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(k_39);
  t = s_34(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm q_35 (ATerm t)
  {
    ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
    n_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_35 = ATgetFirst((ATermList) t);
        m_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_27 = NULL,f_28 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(n_35);
          v_27 = t;
          t = m_35;
          t = q_35(t);
          f_28 = t;
          t = (ATerm) ATinsert(CheckATermList(f_28), l_35);
          b_4 = t;
          t = SSLsetAnnotations(b_4, v_27);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_35;
        t = h_92(t);
      }
    return(t);
  }
  t = q_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_34;
    }
  else
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(x_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_34 != NULL) && (w_34 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_34 = ATgetFirst((ATermList) t);
          if(((x_34 != NULL) && (x_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_34);
      t = at_end_1_0(r_3, t);
    }
  return(t);
}
ATerm d_36 (ATerm u_35, ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_explode_term(u_35);
  if(match_cons(t, sym__2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,a_36 = NULL;
  if(((a_36 != NULL) && (a_36 != t)))
    _fail(t);
  else
    a_36 = t;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              t = not_null(y_35);
              return(t);
            }
            t = not_null(x_35);
            t = at_end_1_0(s_3, t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = d_36(not_null(a_36), t);
          }
      }
    }
  else
    {
      t = d_36(not_null(a_36), t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm m_36 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_90(t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,d_4 = NULL;
          t = d_90(t);
          l_36 = t;
          if(match_cons(t, sym__2))
            {
              f_36 = ATgetArgument(t, 0);
              g_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_36);
          e_36 = t;
          t = f_36;
          t = f_90(t);
          j_36 = t;
          t = g_36;
          t = m_36(t);
          k_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
          d_4 = t;
          t = SSLsetAnnotations(d_4, e_36);
          t = e_90(t);
        }
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) != AT_LIST) || !(ATisEmpty(h_13))))
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
        if(((ATgetType(i_13) != AT_LIST) || !(ATisEmpty(i_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm t_36 = NULL,v_36 = NULL,w_36 = NULL,z_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      if(((ATgetType(j_13) == AT_LIST) && !(ATisEmpty(j_13))))
        {
          t_36 = ATgetFirst((ATermList) j_13);
          v_36 = (ATerm) ATgetNext((ATermList) j_13);
        }
      else
        _fail(t);
      {
        ATerm k_13 = ATgetArgument(t, 1);
        if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
          {
            w_36 = ATgetFirst((ATermList) k_13);
            z_36 = (ATerm) ATgetNext((ATermList) k_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_36, w_36), (ATerm) ATmakeAppl(sym__2, v_36, z_36));
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm a_37 = NULL,e_37 = NULL;
  if(match_cons(t, sym__2))
    {
      a_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_37), a_37);
  return(t);
}
ATerm o_5 (ATerm y_535, ATerm d_536, ATerm g_63, ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  t = SSL_explode_term(d_536);
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      q_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_535);
  if(match_cons(t, sym__2))
    {
      if((o_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  t = genzip_4_0(t_3, u_3, y_3, _id, t);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, g_63);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm g_37 (ATerm t)
  {
    ATerm l_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_103(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = l_13;
        t = d_103(t);
        t = g_37(t);
      }
    return(t);
  }
  t = g_37(t);
  return(t);
}
ATerm for_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  t = f_103(t);
  t = while_not_2_0(g_103, h_103, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_37);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,g_4 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_37);
  t_37 = t;
  t = v_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
  g_4 = t;
  t = SSLsetAnnotations(g_4, t_37);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_38 = ATgetFirst((ATermList) t);
      v_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_39(s_38, t_38, r_38, t);
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_38), u_38), v_38);
          }
      }
    }
  else
    {
      t = n_39(s_38, t_38, r_38, t);
    }
  return(t);
}
ATerm n_39 (ATerm x_37, ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm a_38 = NULL,f_38 = NULL,h_4 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  t = SSLgetAnnotations(z_37);
  a_38 = t;
  t = y_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_38 = ATgetFirst((ATermList) t);
      l_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_38;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_38;
        if((j_38 != t))
          {
            _fail(t);
          }
        t = l_38;
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = y_37;
        t = o_5(j_38, k_38, l_38, t);
      }
    f_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_37, f_38);
    h_4 = t;
    t = SSLsetAnnotations(h_4, a_38);
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm i_39 = NULL;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      if((i_39 != ATgetArgument(t, 1)))
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
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_4, c_4, e_4, t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
        d_39 = t;
        if(match_cons(t, sym__2))
          {
            e_39 = ATgetArgument(t, 0);
            f_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_39;
        t = m_5(f_4, e_39, f_39, t);
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(m_4, t_28, u_28, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      if((f_29 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm w_29 = NULL,b_30 = NULL;
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(r_4, w_29, b_30, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_30 = NULL;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      if((c_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_40 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_100(t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_40 = NULL,b_40 = NULL,k_28 = NULL,l_28 = NULL;
              if(((a_40 != NULL) && (a_40 != t)))
                _fail(t);
              else
                a_40 = t;
              t = x_100(t);
              if(((b_40 != NULL) && (b_40 != t)))
                _fail(t);
              else
                b_40 = t;
              t = not_null(a_40);
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm d_40 = NULL;
                  t = o_40(t);
                  d_40 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_40, not_null(b_40));
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_100(i_4, o_40, j_4, t);
                if(((l_28 != NULL) && (l_28 != t)))
                  _fail(t);
                else
                  l_28 = t;
                t = SSL_explode_term(not_null(l_28));
                if(match_cons(t, sym__2))
                  {
                    ATerm z_13 = ATgetArgument(t, 0);
                    if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(k_28);
                t = foldr_3_0(k_4, l_4, _id, t);
              }
              ;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              {
                ATerm h_29 = NULL,i_29 = NULL;
                i_29 = t;
                t = SSL_explode_term(i_29);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_14 = ATgetArgument(t, 0);
                    h_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_29;
                t = foldr_3_0(o_4, p_4, o_40, t);
              }
            }
        }
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm o_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_41);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm b_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = b_14;
      {
        ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_41 = ATgetArgument(t, 0);
            t = u_41;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_41 = ATgetArgument(t, 0);
                v_41 = ATgetArgument(t, 1);
                w_41 = ATgetArgument(t, 2);
                x_41 = ATgetArgument(t, 3);
                t = w_41;
                t = map_1_0(u_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_41 = ATgetArgument(t, 0);
                    v_41 = ATgetArgument(t, 1);
                    w_41 = ATgetArgument(t, 2);
                    x_41 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_41;
                t = map_1_0(v_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm l_42 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_42 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = l_42;
    }
  else
    {
      t = g_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_42;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm u_42 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_42 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = u_42;
    }
  else
    {
      t = j_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_42;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_41 = ATgetArgument(t, 0);
      t = h_41;
      if(match_cons(t, sym_Rule_3))
        {
          d_41 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
          }
          {
            ATerm n_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_41;
      t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_41 = ATgetArgument(t, 0);
          {
            ATerm o_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_41;
    }
  return(t);
}
ATerm Var_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL,n_4 = NULL;
  i_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_43);
  e_43 = t;
  t = f_43;
  t = c_72(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_43);
  n_4 = t;
  t = SSLsetAnnotations(n_4, e_43);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm t_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            t_43 = ATgetArgument(t, 0);
            u_43 = ATgetArgument(t, 1);
            w_43 = ATgetArgument(t, 2);
            x_43 = ATgetArgument(t, 3);
            t = w_43;
            t = map_1_0(x_4, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                t_43 = ATgetArgument(t, 0);
                u_43 = ATgetArgument(t, 1);
                w_43 = ATgetArgument(t, 2);
                x_43 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = w_43;
            t = map_1_0(c_5, t);
          }
      }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm i_44 = NULL;
  ATerm t_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm w_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_14);
      t = i_44;
    }
  else
    {
      t = t_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_44;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_44 = NULL;
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_44 = ATgetArgument(t, 0);
          {
            ATerm z_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_14);
      t = r_44;
    }
  else
    {
      t = x_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_44;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  x_44 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
      t = x_44;
      t = f_5(y_44, z_44, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_44 = ATgetArgument(t, 0);
          z_44 = ATgetArgument(t, 1);
          a_45 = ATgetArgument(t, 2);
          t = z_44;
          t = map_1_0(e_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              y_44 = ATgetArgument(t, 0);
              z_44 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, y_44);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  y_44 = ATgetArgument(t, 0);
                  z_44 = ATgetArgument(t, 1);
                  a_45 = ATgetArgument(t, 2);
                  b_45 = ATgetArgument(t, 3);
                  t = z_44;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_44 = ATgetArgument(t, 0);
                      z_44 = ATgetArgument(t, 1);
                      a_45 = ATgetArgument(t, 2);
                      b_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_44;
                  t = map_1_0(h_5, t);
                }
            }
        }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm j_45 = NULL;
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_45 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_15);
      t = j_45;
    }
  else
    {
      t = a_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_45;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm a_46 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_46 = ATgetArgument(t, 0);
          {
            ATerm g_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_15);
      t = a_46;
    }
  else
    {
      t = d_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_46;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_46 = NULL;
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_46 = ATgetArgument(t, 0);
          {
            ATerm j_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_15);
      t = s_46;
    }
  else
    {
      t = h_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_46;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, w_4, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, d_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm a_6 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm x_46 = NULL;
  t = SSL_fputc(m_54, n_54);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_46);
  return(t);
}
ATerm b_6 (ATerm x_58, ATerm y_58, ATerm t)
{
  ATerm y_46 = NULL;
  t = SSL_write_term_to_stream_text(x_58, y_58);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_46);
  return(t);
}
ATerm d_6 (ATerm w_106 (ATerm), ATerm f_485, ATerm b_59, ATerm t)
{
  ATerm f_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_485, term_k_15);
  t = open_stream_0_0(t);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_47, b_59);
  t = w_106(t);
  t = fclose_0_0(t);
  t = b_59;
  return(t);
}
ATerm c_6 (ATerm t_58, ATerm u_58, ATerm t)
{
  ATerm l_47 = NULL;
  t = SSL_write_term_to_stream_baf(t_58, u_58);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_47);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym_Stream_1))
        {
          o_31 = ATgetArgument(l_15, 0);
        }
      else
        _fail(t);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(o_31, p_31, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,d_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(match_cons(m_15, sym_Stream_1))
        {
          d_34 = ATgetArgument(m_15, 0);
        }
      else
        _fail(t);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(d_34, f_34, t);
  y_33 = t;
  t = term_n_15;
  z_33 = t;
  t = y_33;
  if(match_cons(t, sym_Stream_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, y_33);
  t = a_6(z_33, a_34, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,z_49 = NULL,a_50 = NULL,y_4 = NULL,q_4 = NULL;
  if(((t_47 != NULL) && (t_47 != t)))
    _fail(t);
  else
    t_47 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_48 != NULL) && (d_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_48 = ATgetArgument(t, 0);
      if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(t_47));
  if(((c_48 != NULL) && (c_48 != t)))
    _fail(t);
  else
    c_48 = t;
  t = not_null(d_48);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_47 != NULL) && (s_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_5, t);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = term_q_15;
        if(((s_47 != NULL) && (s_47 != t)))
          _fail(t);
        else
          s_47 = t;
      }
    if(((f_48 != NULL) && (f_48 != t)))
      _fail(t);
    else
      f_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_48), not_null(e_48));
    if(((q_4 != NULL) && (q_4 != t)))
      _fail(t);
    else
      q_4 = t;
    t = SSLsetAnnotations(not_null(q_4), not_null(c_48));
    t = not_null(t_47);
    if(match_cons(t, sym__2))
      {
        if(((y_47 != NULL) && (y_47 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_47 = ATgetArgument(t, 0);
        if(((z_47 != NULL) && (z_47 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(t_47));
    if(((x_47 != NULL) && (x_47 != t)))
      _fail(t);
    else
      x_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_47), (ATerm) ATmakeAppl(sym__2, not_null(s_47), not_null(z_47)));
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    t = SSLsetAnnotations(not_null(y_4), not_null(x_47));
    if(((b_48 != NULL) && (b_48 != t)))
      _fail(t);
    else
      b_48 = t;
    if(match_cons(t, sym__2))
      {
        if(((z_49 != NULL) && (z_49 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_49 = ATgetArgument(t, 0);
        if(((a_50 != NULL) && (a_50 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          a_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_30 = NULL,n_30 = NULL,y_30 = NULL,b_31 = NULL,n_31 = NULL,a_5 = NULL;
          t = SSLgetAnnotations(not_null(b_48));
          j_30 = t;
          t = not_null(z_49);
          t = fetch_1_0(j_5, t);
          n_30 = t;
          t = not_null(a_50);
          if(match_cons(t, sym__2))
            {
              b_31 = ATgetArgument(t, 0);
              n_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_6(p_5, b_31, n_31, t);
          y_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_30, y_30);
          a_5 = t;
          t = SSLsetAnnotations(a_5, j_30);
          ;
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          {
            ATerm z_32 = NULL,l_33 = NULL,m_33 = NULL,x_33 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(not_null(b_48));
            z_32 = t;
            t = not_null(a_50);
            if(match_cons(t, sym__2))
              {
                m_33 = ATgetArgument(t, 0);
                x_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_6(u_5, m_33, x_33, t);
            l_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_49), l_33);
            b_5 = t;
            t = SSLsetAnnotations(b_5, z_32);
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
ATerm apply_strategy_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  j_50 = t;
  t = dtime_0_0(t);
  t = j_50;
  t = j_103(t);
  i_50 = t;
  t = dtime_0_0(t);
  d_50 = t;
  t = i_50;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_50), (ATerm) ATmakeAppl(sym_Runtime_1, d_50)), h_50);
  return(t);
}
ATerm a_51 (ATerm u_50, ATerm t)
{
  t = SSL_fclose(u_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  y_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_50 = ATgetArgument(t, 0);
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_50);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = a_51(y_50, t);
          }
      }
    }
  else
    {
      t = a_51(y_50, t);
    }
  return(t);
}
ATerm e_6 (ATerm z_58, ATerm t)
{
  t = SSL_read_term_from_stream(z_58);
  return(t);
}
ATerm f_6 (ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm b_51 = NULL;
  t = SSL_fopen(o_54, p_54);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_51 = NULL;
  t = SSL_stdin_stream();
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_51 = NULL;
  t = SSL_stdout_stream();
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_51 = NULL;
  t = SSL_stderr_stream();
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_51);
  return(t);
}
ATerm z_52 (ATerm m_51, ATerm t)
{
  ATerm n_51 = NULL;
  t = SSL_explode_term(m_51);
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
          {
            n_51 = ATgetFirst((ATermList) d_16);
            {
              ATerm f_16 = (ATerm) ATgetNext((ATermList) d_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_51;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_51;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_51;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_51;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_53 (ATerm r_51, ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,g_52 = NULL,r_5 = NULL;
  t = SSLgetAnnotations(t_51);
  c_52 = t;
  t = r_51;
  if(match_cons(t, sym_Path_1))
    {
      g_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_52, s_51);
  r_5 = t;
  t = SSLsetAnnotations(r_5, c_52);
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(a_52, b_52, t);
  return(t);
}
ATerm b_53 (ATerm i_52, ATerm k_52, ATerm l_52, ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,t_52 = NULL,s_5 = NULL;
  t = SSLgetAnnotations(l_52);
  q_52 = t;
  t = SSL_is_string(i_52);
  t_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_52, k_52);
  s_5 = t;
  t = SSLsetAnnotations(s_5, q_52);
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(o_52, p_52, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      ATerm h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_52 = t;
  if(match_cons(t, sym__2))
    {
      x_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_52(w_52, t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_53(x_52, y_52, w_52, t);
                  ;
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = k_16;
                  t = b_53(x_52, y_52, w_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_52(w_52, t);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_53 = NULL;
      h_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_53, term_q_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      t = debug_1_0(v_5, t);
      _fail(t);
    }
  f_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(g_53, t);
  e_53 = t;
  t = f_53;
  t = fclose_0_0(t);
  t = e_53;
  return(t);
}
ATerm fetch_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm k_55 (ATerm t)
  {
    ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
    h_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_55 = ATgetFirst((ATermList) t);
        j_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_36 = NULL,x_36 = NULL,w_5 = NULL;
          t = SSLgetAnnotations(h_55);
          i_36 = t;
          t = i_55;
          t = b_92(t);
          x_36 = t;
          t = (ATerm) ATinsert(CheckATermList(j_55), x_36);
          w_5 = t;
          t = SSLsetAnnotations(w_5, i_36);
          ;
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          {
            ATerm k_37 = NULL,n_37 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(h_55);
            k_37 = t;
            t = j_55;
            t = k_55(t);
            n_37 = t;
            t = (ATerm) ATinsert(CheckATermList(n_37), i_55);
            x_5 = t;
            t = SSLsetAnnotations(x_5, k_37);
          }
        }
    }
    return(t);
  }
  t = k_55(t);
  return(t);
}
ATerm z_5 (ATerm c_53, ATerm d_53, ATerm t)
{
  t = SSL_strcat(c_53, d_53);
  return(t);
}
ATerm debug_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  n_55 = t;
  t = u_106(t);
  o_55 = t;
  t = term_f_9;
  p_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_55), o_55);
  q_55 = t;
  t = SSL_printnl(p_55, q_55);
  t = n_55;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_55 = NULL;
      x_55 = t;
      t = SSL_is_string(x_55);
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
            t = map_1_0(y_5, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
              j_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_56 = ATgetArgument(t, 0);
                  t = k_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_56 = ATgetArgument(t, 0);
                      t = k_56;
                      {
                        ATerm c_17 = t;
                        int h_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_17);
                          }
                        else
                          {
                            t = c_17;
                            t = debug_1_0(h_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_56 = NULL,t_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_56 = ATgetArgument(t, 0);
                          l_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_56;
                      t = eval_config_0_0(t);
                      s_56 = t;
                      t = l_56;
                      t = eval_config_0_0(t);
                      t_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_56, t_56);
                      t = z_5(s_56, t_56, t);
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
  ATerm x_56 = NULL,y_56 = NULL;
  x_56 = t;
  t = term_j_17;
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_17, x_56);
  t = i_6(y_56, x_56, t);
  {
    ATerm k_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_56 = NULL,a_57 = NULL;
        t = eval_config_0_0(t);
        z_56 = t;
        t = term_j_17;
        a_57 = t;
        t = SSL_table_put(a_57, x_56, z_56);
        t = z_56;
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = k_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  {
    ATerm n_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_57 = NULL;
        t = term_s_17;
        t = get_config_0_0(t);
        g_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_57, term_u_17);
        t = geq_0_0(t);
        t = e_57;
        t = e_113(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = n_17;
        t = e_57;
      }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  if(match_string(t, "-k"))
    {
      t = j_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_57;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  t = SSL_string_to_int(k_57);
  l_57 = t;
  t = term_v_17;
  m_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, l_57);
  t = l_6(m_57, l_57, t);
  t = k_57;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, o_6, w_6, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm o_57 = NULL;
  o_57 = t;
  if(match_string(t, "-S"))
    {
      t = o_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_57;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  t = term_s_17;
  p_57 = t;
  t = term_x_17;
  q_57 = t;
  t = term_a_18;
  t = l_6(p_57, q_57, t);
  t = term_d_18;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = SSL_string_to_int(r_57);
  s_57 = t;
  t = term_s_17;
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, s_57);
  t = l_6(t_57, s_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_57);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  t = term_t_18;
  u_57 = t;
  t = term_e_9;
  v_57 = t;
  t = term_b_19;
  t = l_6(u_57, v_57, t);
  t = term_e_19;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_6, a_7, b_7, t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_7, f_7, g_7, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = Option_3_0(h_7, i_7, j_7, t);
          }
      }
    }
  return(t);
}
ATerm l_6 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm w_57 = NULL;
  t = term_j_17;
  w_57 = t;
  t = SSL_table_put(w_57, j_63, k_63);
  t = (ATerm) ATmakeAppl(sym__3, term_j_17, j_63, k_63);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
      t = term_e_9;
      t = d_0(t);
      b_58 = t;
      t = term_k_19;
      c_58 = t;
      t = term_l_19;
      d_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_19, term_l_19, b_58);
      t = j_6(c_58, d_58, b_58, t);
      _fail(t);
    }
  else
    {
      ATerm g_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_57 = ATgetFirst((ATermList) t);
          a_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_57;
      t = a_0(t);
      t = term_e_9;
      t = b_0(t);
      g_58 = t;
      t = (ATerm) ATinsert(CheckATermList(a_58), g_58);
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  if(match_string(t, "-o"))
    {
      t = i_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_58;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  j_58 = t;
  t = term_m_19;
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, j_58);
  t = l_6(k_58, j_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_58);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, l_7, m_7, t);
  return(t);
}
ATerm j_6 (ATerm v_44, ATerm w_44, ATerm u_44, ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            ATerm r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
        t = i_6(v_44, w_44, t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = (ATerm) ATempty;
      }
    n_58 = t;
    t = (ATerm) ATinsert(CheckATermList(n_58), u_44);
    o_58 = t;
    t = SSL_table_put(v_44, w_44, o_58);
    t = m_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
      t = term_e_9;
      t = j_0(t);
      g_59 = t;
      t = term_k_19;
      h_59 = t;
      t = term_l_19;
      i_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_19, term_l_19, g_59);
      t = j_6(h_59, i_59, g_59, t);
      _fail(t);
    }
  else
    {
      ATerm m_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_59 = ATgetFirst((ATermList) t);
          d_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_59 = ATgetFirst((ATermList) t);
          f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_59;
      t = h_0(t);
      t = e_59;
      t = i_0(t);
      m_59 = t;
      t = (ATerm) ATinsert(CheckATermList(f_59), m_59);
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  if(match_string(t, "-i"))
    {
      t = o_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_59;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL;
  p_59 = t;
  t = term_s_19;
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, p_59);
  t = l_6(q_59, p_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_59);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_7, o_7, q_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_9;
  t = whoami_0_0(t);
  r_59 = t;
  t = term_f_9;
  t_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_19), r_59);
  u_59 = t;
  t = SSL_printnl(t_59, u_59);
  t = term_l_9;
  s_59 = t;
  t = SSL_exit(s_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_6 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_42, a_43);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      t = SSL_addr(z_42, a_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,d_60 = NULL;
  w_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_59;
      t = s_96(t);
    }
  else
    {
      ATerm g_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_59 = ATgetFirst((ATermList) t);
          d_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_60;
      t = foldr_2_0(s_96, t_96, t);
      g_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_59, g_60);
      t = t_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(w_39, x_39, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_60 = NULL,s_39 = NULL,t_39 = NULL;
  t = times_0_0(t);
  t_39 = t;
  t = SSL_explode_term(t_39);
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_39;
  t = foldr_2_0(s_7, u_7, t);
  j_60 = t;
  t = SSL_TicksToSeconds(j_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  v_60 = t;
  if(match_cons(t, sym__2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_60;
        if((w_60 != t))
          {
            _fail(t);
          }
        t = v_60;
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_60, x_60);
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              t = SSL_gtr(w_60, x_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL;
        t = term_s_17;
        t = get_config_0_0(t);
        d_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_61, term_l_9);
        t = geq_0_0(t);
        t = b_61;
        t = d_113(t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = b_61;
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,i_61 = NULL,j_61 = NULL;
  t = run_time_0_0(t);
  f_61 = t;
  t = term_e_9;
  t = whoami_0_0(t);
  g_61 = t;
  t = term_f_9;
  i_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), f_61), term_g_20), g_61);
  j_61 = t;
  t = SSL_printnl(i_61, j_61);
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), f_61), term_g_20), g_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_17;
  k_61 = t;
  t = SSL_exit(k_61);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_61 = ATgetArgument(t, 0);
          {
            ATerm w_40 = NULL,k_6 = NULL;
            t = SSLgetAnnotations(t_61);
            w_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_61);
            k_6 = t;
            t = SSLsetAnnotations(k_6, w_40);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      t = fetch_1_0(x_7, t);
    }
  t = h_104(t);
  return(t);
}
ATerm map_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm j_62 (ATerm t)
  {
    ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
    g_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_62;
      }
    else
      {
        ATerm j_41 = NULL,q_41 = NULL,r_41 = NULL,t_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_62 = ATgetFirst((ATermList) t);
            i_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_62);
        j_41 = t;
        t = h_62;
        t = r_91(t);
        q_41 = t;
        t = i_62;
        t = j_62(t);
        r_41 = t;
        t = (ATerm) ATinsert(CheckATermList(r_41), q_41);
        t_6 = t;
        t = SSLsetAnnotations(t_6, j_41);
      }
    return(t);
  }
  t = j_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_62 = ATgetFirst((ATermList) t);
      n_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_62 = NULL,s_62 = NULL;
        ATerm y_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_62)), not_null(s_62));
          return(t);
        }
        t = not_null(n_62);
        t = g_0(t);
        if(((r_62 != NULL) && (r_62 != t)))
          _fail(t);
        else
          r_62 = t;
        t = not_null(m_62);
        t = f_0(t);
        if(((s_62 != NULL) && (s_62 != t)))
          _fail(t);
        else
          s_62 = t;
        t = not_null(n_62);
        t = reverse_acc_2_0(f_0, y_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_9;
      t = g_0(t);
    }
  return(t);
}
ATerm i_6 (ATerm m_46, ATerm n_46, ATerm t)
{
  t = SSL_table_get(m_46, n_46);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_6 = NULL;
  y_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_62);
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_62);
  z_6 = t;
  t = SSLsetAnnotations(z_6, w_62);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm b_63 = NULL;
  b_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_63), term_n_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      t = fetch_1_0(z_7, t);
    }
  t = term_d_21;
  t = echo_0_0(t);
  t = term_k_19;
  u_62 = t;
  t = term_l_19;
  v_62 = t;
  t = term_e_21;
  t = i_6(u_62, v_62, t);
  t = reverse_acc_2_0(_id, a_8, t);
  t = map_1_0(b_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,l_63 = NULL;
  h_63 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_21 = ATgetFirst((ATermList) t);
                ATerm j_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_63;
          }
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATinsert(ATempty, h_63);
      }
    i_63 = t;
    t = term_q_15;
    l_63 = t;
    t = SSL_printnl(l_63, i_63);
    t = h_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  t = term_k_21;
  p_63 = t;
  t = term_e_9;
  q_63 = t;
  t = term_l_21;
  t = l_6(p_63, q_63, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm r_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
  t = term_k_21;
  y_63 = t;
  t = term_e_9;
  z_63 = t;
  t = term_l_21;
  t = l_6(y_63, z_63, t);
  t = term_n_21;
  r_63 = t;
  t = term_e_9;
  x_63 = t;
  t = term_o_21;
  t = l_6(r_63, x_63, t);
  t = term_p_21;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_8, e_8, f_8, t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      t = Option_3_0(g_8, h_8, i_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,p_7 = NULL;
  f_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_64 = ATgetFirst((ATermList) t);
      c_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_64);
  a_64 = t;
  t = b_64;
  t = v_70(t);
  d_64 = t;
  t = c_64;
  t = w_70(t);
  e_64 = t;
  t = (ATerm) ATinsert(CheckATermList(e_64), d_64);
  p_7 = t;
  t = SSLsetAnnotations(p_7, a_64);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,p_64 = NULL,q_64 = NULL,r_7 = NULL;
  if(((k_64 != NULL) && (k_64 != t)))
    _fail(t);
  else
    k_64 = t;
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_21;
        t = d_109(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
      }
    t = not_null(k_64);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_64 != NULL) && (m_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_64 = ATgetFirst((ATermList) t);
        if(((n_64 != NULL) && (n_64 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(k_64));
    if(((l_64 != NULL) && (l_64 != t)))
      _fail(t);
    else
      l_64 = t;
    t = term_v_19;
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(m_64));
    t = l_6(not_null(q_64), not_null(m_64), t);
    t = not_null(n_64);
    {
      ATerm a_65 (ATerm t)
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_64 = NULL;
                t_64 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_64;
                ;
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                t = d_109(t);
                t = Cons_2_0(_id, a_65, t);
              }
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
              ATerm w_64 = NULL,x_64 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_64 = ATgetFirst((ATermList) t);
                  x_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_64), (ATerm) ATmakeAppl(sym_Undefined_1, w_64));
            }
          }
        return(t);
      }
      t = a_65(t);
      if(((p_64 != NULL) && (p_64 != t)))
        _fail(t);
      else
        p_64 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_64)), (ATerm) ATmakeAppl(sym_Program_1, not_null(m_64)));
      if(((r_7 != NULL) && (r_7 != t)))
        _fail(t);
      else
        r_7 = t;
      t = SSLsetAnnotations(not_null(r_7), not_null(l_64));
    }
  }
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm m_65 = NULL;
  m_65 = t;
  if(match_string(t, "--help"))
    {
      t = m_65;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_65;
        }
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  t = term_m_20;
  n_65 = t;
  t = term_e_9;
  o_65 = t;
  t = term_e_22;
  t = l_6(n_65, o_65, t);
  t = term_h_22;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
  if(((h_65 != NULL) && (h_65 != t)))
    _fail(t);
  else
    h_65 = t;
  t = term_k_19;
  if(((j_65 != NULL) && (j_65 != t)))
    _fail(t);
  else
    j_65 = t;
  t = term_l_19;
  if(((k_65 != NULL) && (k_65 != t)))
    _fail(t);
  else
    k_65 = t;
  t = (ATerm) ATempty;
  if(((l_65 != NULL) && (l_65 != t)))
    _fail(t);
  else
    l_65 = t;
  t = SSL_table_put(not_null(j_65), not_null(k_65), not_null(l_65));
  t = not_null(h_65);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm l_22 = t;
      int m_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_109(t);
          ;
          LocalPopChoice(m_22);
        }
      else
        {
          t = l_22;
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_8, l_8, o_8, t);
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_8, t);
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_65 = NULL;
          v_65 = t;
          {
            ATerm r_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_42 = NULL;
                t = v_65;
                {
                  ATerm t_22 = t;
                  int v_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_22);
                    }
                  else
                    {
                      t = t_22;
                      t = fetch_1_0(r_8, t);
                    }
                  t = v_65;
                  t = default_system_usage_0_0(t);
                  t = term_x_17;
                  i_42 = t;
                  t = SSL_exit(i_42);
                }
                ;
                LocalPopChoice(s_22);
              }
            else
              {
                t = r_22;
                {
                  ATerm b_43 = NULL;
                  t = term_k_21;
                  t = get_config_0_0(t);
                  t = v_65;
                  t = default_system_about_0_0(t);
                  t = term_x_17;
                  b_43 = t;
                  t = SSL_exit(b_43);
                }
              }
          }
          ;
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
                ATerm s_8 (ATerm t)
                {
                  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,t_7 = NULL;
                  b_66 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_66);
                  z_65 = t;
                  t = a_66;
                  if(((f_65 != NULL) && (f_65 != t)))
                    _fail(t);
                  else
                    f_65 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_66);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, z_65);
                  return(t);
                }
                t = fetch_1_0(s_8, t);
                t = term_f_9;
                if(((x_65 != NULL) && (x_65 != t)))
                  _fail(t);
                else
                  x_65 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_65)), term_y_22);
                if(((y_65 != NULL) && (y_65 != t)))
                  _fail(t);
                else
                  y_65 = t;
                t = SSL_printnl(not_null(x_65), not_null(y_65));
                t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_65)), term_y_22));
                t = default_system_usage_0_0(t);
                t = term_l_9;
                if(((w_65 != NULL) && (w_65 != t)))
                  _fail(t);
                else
                  w_65 = t;
                t = SSL_exit(not_null(w_65));
                ;
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
              }
          }
        }
      if(((g_65 != NULL) && (g_65 != t)))
        _fail(t);
      else
        g_65 = t;
      t = term_k_19;
      if(((i_65 != NULL) && (i_65 != t)))
        _fail(t);
      else
        i_65 = t;
      t = SSL_table_destroy(not_null(i_65));
      t = not_null(g_65);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
  t = parse_options_1_0(j_104, t);
  g_66 = t;
  t = term_a_23;
  j_66 = t;
  t = SSL_table_create(j_66);
  t = term_a_23;
  h_66 = t;
  t = term_b_23;
  i_66 = t;
  t = SSL_table_put(h_66, i_66, g_66);
  t = g_66;
  t = l_104(t);
  {
    ATerm c_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_104, t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = c_23;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = if_verbose2_1_0(b_9, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL;
  t = term_j_23;
  k_66 = t;
  t = term_e_9;
  l_66 = t;
  t = term_k_23;
  t = l_6(k_66, l_66, t);
  t = term_l_23;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  m_66 = t;
  t = term_v_19;
  t = get_config_0_0(t);
  n_66 = t;
  t = term_f_9;
  o_66 = t;
  t = (ATerm) ATinsert(ATempty, n_66);
  p_66 = t;
  t = SSL_printnl(o_66, p_66);
  t = m_66;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                ATerm r_23 = t;
                int s_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_23);
                  }
                else
                  {
                    t = r_23;
                    {
                      ATerm t_23 = t;
                      int u_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_8, x_8, y_8, t);
                          ;
                          LocalPopChoice(u_23);
                        }
                      else
                        {
                          t = t_23;
                          {
                            ATerm v_23 = t;
                            int w_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_23);
                              }
                            else
                              {
                                t = v_23;
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
  ATerm v_8 (ATerm t)
  {
    ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
    if(((r_66 != NULL) && (r_66 != t)))
      _fail(t);
    else
      r_66 = t;
    {
      ATerm x_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_66 != NULL) && (q_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_9, t);
          ;
          LocalPopChoice(y_23);
        }
      else
        {
          t = x_23;
          t = term_z_23;
          if(((q_66 != NULL) && (q_66 != t)))
            _fail(t);
          else
            q_66 = t;
        }
      t = not_null(q_66);
      t = ReadFromFile_0_0(t);
      if(((s_66 != NULL) && (s_66 != t)))
        _fail(t);
      else
        s_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_66), not_null(s_66));
      t = apply_strategy_1_0(s_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_8, u_103, u_8, v_8, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,v_7 = NULL;
  x_66 = t;
  if(match_cons(t, sym__2))
    {
      u_66 = ATgetArgument(t, 0);
      v_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_66);
  t_66 = t;
  t = v_66;
  t = strename_0_0(t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_66, w_66);
  v_7 = t;
  t = SSLsetAnnotations(v_7, t_66);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_9, _fail, default_usage_0_0, t);
  return(t);
}
