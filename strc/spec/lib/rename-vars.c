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
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_b_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_t_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_n_14;
void init_constant_terms (void)
{
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_o_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_g_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_v_17);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_g_16);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_g_16);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_g_16);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_g_16);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm m_0 (ATerm);
ATerm o_0 (ATerm);
ATerm r_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm spaste_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm a_5 (ATerm b_19, ATerm a_19, ATerm);
ATerm SVar_1_0 (ATerm o_63 (ATerm), ATerm);
ATerm l_5 (ATerm q_87 (ATerm), ATerm r_87 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_35, ATerm h_35, ATerm g_35, ATerm);
ATerm new_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm p_5 (ATerm k_87 (ATerm), ATerm l_87 (ATerm (ATerm), ATerm), ATerm a_35, ATerm d_35, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm rename_4_0 (ATerm f_87 (ATerm (ATerm), ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_87 (ATerm (ATerm), ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm tpaste_1_0 (ATerm b_73 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm f_5 (ATerm p_82 (ATerm), ATerm k_27, ATerm j_27, ATerm);
ATerm foldr_3_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm);
ATerm g_5 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm o_27, ATerm n_27, ATerm);
ATerm h_5 (ATerm k_82 (ATerm), ATerm i_27, ATerm h_27, ATerm);
ATerm at_end_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_36 (ATerm v_35, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm j_5 (ATerm b_511, ATerm g_511, ATerm j_51, ATerm);
ATerm while_not_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm i_39 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm);
ATerm a_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm free_vars_3_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm f_60 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm u_5 (ATerm p_42, ATerm q_42, ATerm);
ATerm v_5 (ATerm a_47, ATerm b_47, ATerm);
ATerm x_5 (ATerm n_95 (ATerm), ATerm i_460, ATerm e_47, ATerm);
ATerm w_5 (ATerm w_46, ATerm x_46, ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm k_48 (ATerm t_47, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_5 (ATerm c_47, ATerm);
ATerm z_5 (ATerm r_42, ATerm s_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_50 (ATerm x_48, ATerm);
ATerm g_50 (ATerm d_49, ATerm e_49, ATerm h_49, ATerm);
ATerm h_50 (ATerm q_49, ATerm r_49, ATerm s_49, ATerm);
ATerm a_6 (ATerm);
ATerm n_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm i_6 (ATerm m_51, ATerm n_51, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm g_6 (ATerm v_32, ATerm w_32, ATerm u_32, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm d_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm b_6 (ATerm z_30, ATerm a_31, ATerm);
ATerm foldr_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm i_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_101 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm need_help_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_6 (ATerm f_41, ATerm g_41, ATerm);
ATerm debug_1_0 (ATerm l_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm f_6 (ATerm m_34, ATerm n_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_97 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm parse_options_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(((ATgetType(j_8) != AT_LIST) || !(ATisEmpty(j_8))))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
        {
          s_0 = ATgetFirst((ATermList) m_8);
          t_0 = (ATerm) ATgetNext((ATermList) m_8);
        }
      else
        _fail(t);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
          {
            u_0 = ATgetFirst((ATermList) n_8);
            v_0 = (ATerm) ATgetNext((ATermList) n_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_0, u_0), (ATerm) ATmakeAppl(sym__2, t_0, v_0));
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_0), w_0);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL,m_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_0;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm q_8 = ATgetArgument(t, 0);
            b_1 = ATgetArgument(t, 1);
            c_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(p_8);
        t = (ATerm) ATmakeAppl(sym_SDef_3, p_1, b_1, c_1);
      }
    else
      {
        t = o_8;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            b_1 = ATgetArgument(t, 1);
            c_1 = ATgetArgument(t, 2);
            m_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_1, b_1, c_1, m_1);
      }
  }
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,l_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
        {
          i_3 = ATgetFirst((ATermList) u_8);
          j_3 = (ATerm) ATgetNext((ATermList) u_8);
        }
      else
        _fail(t);
      {
        ATerm v_8 = ATgetArgument(t, 1);
        if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
          {
            l_3 = ATgetFirst((ATermList) v_8);
            r_3 = (ATerm) ATgetNext((ATermList) v_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_3, l_3), (ATerm) ATmakeAppl(sym__2, j_3, r_3));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_3), s_3);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm z_3 = NULL,i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm w_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_8);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_4);
      }
    else
      {
        t = w_8;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_9 = ATgetArgument(t, 0);
            i_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_4, i_4);
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
        _fail(t);
      {
        ATerm c_9 = ATgetArgument(t, 1);
        if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_6 = NULL,v_6 = NULL,z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
        {
          t_6 = ATgetFirst((ATermList) e_9);
          v_6 = (ATerm) ATgetNext((ATermList) e_9);
        }
      else
        _fail(t);
      {
        ATerm f_9 = ATgetArgument(t, 1);
        if(((ATgetType(f_9) == AT_LIST) && !(ATisEmpty(f_9))))
          {
            z_6 = ATgetFirst((ATermList) f_9);
            a_7 = (ATerm) ATgetNext((ATermList) f_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_6, z_6), (ATerm) ATmakeAppl(sym__2, v_6, a_7));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7;
  {
    ATerm h_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_7);
      }
    else
      {
        t = h_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_9 = ATgetArgument(t, 0);
            g_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_7, g_7);
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if(((ATgetType(q_9) != AT_LIST) || !(ATisEmpty(q_9))))
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
        {
          g_9 = ATgetFirst((ATermList) v_9);
          i_9 = (ATerm) ATgetNext((ATermList) v_9);
        }
      else
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            j_9 = ATgetFirst((ATermList) w_9);
            k_9 = (ATerm) ATgetNext((ATermList) w_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_9, j_9), (ATerm) ATmakeAppl(sym__2, i_9, k_9));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm m_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_9), m_9);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm r_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_9);
      }
    else
      {
        t = x_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_10 = ATgetArgument(t, 0);
            t_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_9, t_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
      {
        ATerm l_0 = NULL,p_0 = NULL,q_0 = NULL,n_0 = NULL;
        t = SSLgetAnnotations(g_10);
        l_0 = t;
        t = h_10;
        t = f_73(t);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, q_0);
        t = genzip_4_0(a_0, b_0, f_0, m_0, t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_0, i_10);
        n_0 = t;
        t = SSLsetAnnotations(n_0, l_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_10 = ATgetArgument(t, 0);
          i_10 = ATgetArgument(t, 1);
          c_10 = ATgetArgument(t, 2);
          {
            ATerm i_2 = NULL,x_2 = NULL,a_3 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(g_10);
            i_2 = t;
            t = i_10;
            t = f_73(t);
            a_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_10, a_3);
            t = genzip_4_0(o_0, r_0, y_0, a_1, t);
            x_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_10, x_2, c_10);
            d_1 = t;
            t = SSLsetAnnotations(d_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              h_10 = ATgetArgument(t, 0);
              i_10 = ATgetArgument(t, 1);
              c_10 = ATgetArgument(t, 2);
              d_10 = ATgetArgument(t, 3);
              {
                ATerm k_5 = NULL,q_6 = NULL,r_6 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(g_10);
                k_5 = t;
                t = i_10;
                t = f_73(t);
                r_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_10, r_6);
                t = genzip_4_0(h_1, i_1, j_1, k_1, t);
                q_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_10, q_6, c_10, d_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, k_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  h_10 = ATgetArgument(t, 0);
                  i_10 = ATgetArgument(t, 1);
                  c_10 = ATgetArgument(t, 2);
                  d_10 = ATgetArgument(t, 3);
                  {
                    ATerm k_8 = NULL,x_8 = NULL,d_9 = NULL,f_1 = NULL;
                    t = SSLgetAnnotations(g_10);
                    k_8 = t;
                    t = i_10;
                    t = f_73(t);
                    d_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_10, d_9);
                    t = genzip_4_0(l_1, q_1, r_1, s_1, t);
                    x_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, h_10, x_8, c_10, d_10);
                    f_1 = t;
                    t = SSLsetAnnotations(f_1, k_8);
                  }
                }
              else
                {
                  ATerm w_10 = NULL,z_10 = NULL,g_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      h_10 = ATgetArgument(t, 0);
                      i_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_10);
                  w_10 = t;
                  t = h_10;
                  t = f_73(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm b_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, z_10, i_10);
                  g_1 = t;
                  t = SSLsetAnnotations(g_1, w_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      {
        ATerm m_11 = NULL,v_11 = NULL,w_11 = NULL,n_1 = NULL;
        t = SSLgetAnnotations(n_15);
        m_11 = t;
        t = o_15;
        t = g_73(t);
        v_11 = t;
        t = p_15;
        t = g_73(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_11, w_11);
        n_1 = t;
        t = SSLsetAnnotations(n_1, m_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_15 = ATgetArgument(t, 0);
          p_15 = ATgetArgument(t, 1);
          l_15 = ATgetArgument(t, 2);
          {
            ATerm q_12 = NULL,x_12 = NULL,z_12 = NULL,b_13 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(n_15);
            q_12 = t;
            t = o_15;
            t = i_73(t);
            x_12 = t;
            t = p_15;
            t = i_73(t);
            z_12 = t;
            t = l_15;
            t = g_73(t);
            b_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, x_12, z_12, b_13);
            o_1 = t;
            t = SSLsetAnnotations(o_1, q_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_15 = ATgetArgument(t, 0);
              p_15 = ATgetArgument(t, 1);
              l_15 = ATgetArgument(t, 2);
              m_15 = ATgetArgument(t, 3);
              {
                ATerm q_13 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(n_15);
                q_13 = t;
                t = o_15;
                t = i_73(t);
                f_14 = t;
                t = p_15;
                t = i_73(t);
                g_14 = t;
                t = l_15;
                t = i_73(t);
                h_14 = t;
                t = m_15;
                t = g_73(t);
                i_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_14, g_14, h_14, i_14);
                v_1 = t;
                t = SSLsetAnnotations(v_1, q_13);
              }
            }
          else
            {
              ATerm t_14 = NULL,x_14 = NULL,y_14 = NULL,x_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  o_15 = ATgetArgument(t, 0);
                  p_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_15);
              t_14 = t;
              t = o_15;
              t = i_73(t);
              x_14 = t;
              t = p_15;
              t = g_73(t);
              y_14 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, x_14, y_14);
              x_1 = t;
              t = SSLsetAnnotations(x_1, t_14);
            }
        }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_16 = ATgetArgument(t, 0);
          {
            ATerm j_10 = ATgetArgument(t, 1);
          }
          {
            ATerm k_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_10);
      t = b_16;
    }
  else
    {
      t = e_10;
      if(match_cons(t, sym_SDefT_4))
        {
          b_16 = ATgetArgument(t, 0);
          {
            ATerm l_10 = ATgetArgument(t, 1);
          }
          {
            ATerm m_10 = ATgetArgument(t, 2);
          }
          {
            ATerm n_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_16;
    }
  return(t);
}
ATerm a_5 (ATerm b_19, ATerm a_19, ATerm t)
{
  t = b_19;
  t = map_1_0(t_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm o_63 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL,y_16 = NULL,m_2 = NULL;
  y_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  p_16 = t;
  t = q_16;
  t = o_63(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, s_16);
  m_2 = t;
  t = SSLsetAnnotations(m_2, p_16);
  return(t);
}
ATerm l_5 (ATerm q_87 (ATerm), ATerm r_87 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_35, ATerm h_35, ATerm g_35, ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm a_17 = NULL;
    a_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_17, g_35);
    t = q_87(t);
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm b_17 = NULL;
    b_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_17, h_35);
    t = q_87(t);
    return(t);
  }
  t = i_35;
  t = r_87(u_1, w_1, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm y_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm m_17 = NULL,o_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
        {
          m_17 = ATgetFirst((ATermList) q_10);
          o_17 = (ATerm) ATgetNext((ATermList) q_10);
        }
      else
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
          {
            s_17 = ATgetFirst((ATermList) r_10);
            t_17 = (ATerm) ATgetNext((ATermList) r_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_17, s_17), (ATerm) ATmakeAppl(sym__2, o_17, t_17));
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm u_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      u_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_17), u_17);
  return(t);
}
ATerm p_5 (ATerm k_87 (ATerm), ATerm l_87 (ATerm (ATerm), ATerm), ATerm a_35, ATerm d_35, ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL;
  t = a_35;
  t = k_87(t);
  e_17 = t;
  t = map_1_0(new_0_0, t);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
  t = genzip_4_0(y_1, z_1, a_2, _id, t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, d_35);
  t = conc_0_0(t);
  i_17 = t;
  t = a_35;
  {
    ATerm b_2 (ATerm t)
    {
      t = f_17;
      return(t);
    }
    t = l_87(b_2, t);
    j_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_17, d_35, i_17);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,u_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_18 = ATgetFirst((ATermList) t);
      u_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_18;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_18;
            if((o_18 != t))
              {
                _fail(t);
              }
            t = m_18;
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = (ATerm) ATmakeAppl(sym__2, o_18, u_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_18, u_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm i_20 (ATerm t)
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_87(t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm d_20 = NULL,e_20 = NULL,h_20 = NULL;
          ATerm c_2 (ATerm t)
          {
            ATerm j_15 = NULL;
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_15, not_null(h_20));
            t = i_20(t);
            return(t);
          }
          d_20 = t;
          if(match_cons(t, sym__2))
            {
              e_20 = ATgetArgument(t, 0);
              if(((h_20 != NULL) && (h_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_20;
          t = SRTS_all(c_2, t);
        }
      }
    return(t);
  }
  t = i_20(t);
  return(t);
}
ATerm rename_4_0 (ATerm f_87 (ATerm (ATerm), ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_87 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  ATerm o_21 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
      f_21 = t;
      if(match_cons(t, sym__2))
        {
          g_21 = ATgetArgument(t, 0);
          h_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm n_21 = NULL;
              n_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_21, h_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = g_21;
            t = f_87(e_2, t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
              t = f_21;
              t = p_5(g_87, i_87, g_21, h_21, t);
              if(match_cons(t, sym__3))
                {
                  c_16 = ATgetArgument(t, 0);
                  d_16 = ATgetArgument(t, 1);
                  e_16 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_5(o_21, h_87, c_16, d_16, e_16, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATempty);
  t = o_21(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
        _fail(t);
      {
        ATerm b_11 = ATgetArgument(t, 1);
        if(((ATgetType(b_11) != AT_LIST) || !(ATisEmpty(b_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
        {
          h_18 = ATgetFirst((ATermList) c_11);
          i_18 = (ATerm) ATgetNext((ATermList) c_11);
        }
      else
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
          {
            j_18 = ATgetFirst((ATermList) d_11);
            k_18 = (ATerm) ATgetNext((ATermList) d_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_18, j_18), (ATerm) ATmakeAppl(sym__2, i_18, k_18));
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_18), r_18);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm w_18 = NULL,d_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_19);
      }
    else
      {
        t = e_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_11 = ATgetArgument(t, 0);
            d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_19, d_19);
      }
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(((ATgetType(i_11) != AT_LIST) || !(ATisEmpty(i_11))))
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
        {
          v_20 = ATgetFirst((ATermList) k_11);
          w_20 = (ATerm) ATgetNext((ATermList) k_11);
        }
      else
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            x_20 = ATgetFirst((ATermList) l_11);
            y_20 = (ATerm) ATgetNext((ATermList) l_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_20, x_20), (ATerm) ATmakeAppl(sym__2, w_20, y_20));
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm a_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_21), a_21);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm m_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      m_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_21;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_21);
      }
    else
      {
        t = n_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            r_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_21, r_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm b_73 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,c_26 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
      {
        ATerm v_16 = NULL,z_16 = NULL,p_2 = NULL;
        t = SSLgetAnnotations(w_25);
        v_16 = t;
        t = x_25;
        t = b_73(t);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_16, y_25);
        p_2 = t;
        t = SSLsetAnnotations(p_2, v_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          x_25 = ATgetArgument(t, 0);
          y_25 = ATgetArgument(t, 1);
          z_25 = ATgetArgument(t, 2);
          c_26 = ATgetArgument(t, 3);
          {
            ATerm z_17 = NULL,e_18 = NULL,f_18 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(w_25);
            z_17 = t;
            t = z_25;
            t = b_73(t);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_25, f_18);
            t = genzip_4_0(f_2, g_2, h_2, j_2, t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_25, y_25, e_18, c_26);
            q_2 = t;
            t = SSLsetAnnotations(q_2, z_17);
          }
        }
      else
        {
          ATerm g_20 = NULL,p_20 = NULL,q_20 = NULL,s_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              x_25 = ATgetArgument(t, 0);
              y_25 = ATgetArgument(t, 1);
              z_25 = ATgetArgument(t, 2);
              c_26 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_25);
          g_20 = t;
          t = z_25;
          t = b_73(t);
          q_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_25, q_20);
          t = genzip_4_0(k_2, l_2, n_2, o_2, t);
          p_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_25, y_25, p_20, c_26);
          s_2 = t;
          t = SSLsetAnnotations(s_2, g_20);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,c_30 = NULL;
  x_29 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_30 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
      {
        ATerm e_22 = NULL,i_22 = NULL,j_22 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(x_29);
        e_22 = t;
        t = c_30;
        t = e_73(t);
        i_22 = t;
        t = u_29;
        t = c_73(t);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_22, j_22);
        w_2 = t;
        t = SSLsetAnnotations(w_2, e_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          c_30 = ATgetArgument(t, 0);
          u_29 = ATgetArgument(t, 1);
          v_29 = ATgetArgument(t, 2);
          w_29 = ATgetArgument(t, 3);
          {
            ATerm c_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(x_29);
            c_23 = t;
            t = c_30;
            t = e_73(t);
            k_23 = t;
            t = u_29;
            t = e_73(t);
            l_23 = t;
            t = v_29;
            t = e_73(t);
            m_23 = t;
            t = w_29;
            t = c_73(t);
            n_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_23, l_23, m_23, n_23);
            y_2 = t;
            t = SSLsetAnnotations(y_2, c_23);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              c_30 = ATgetArgument(t, 0);
              u_29 = ATgetArgument(t, 1);
              v_29 = ATgetArgument(t, 2);
              w_29 = ATgetArgument(t, 3);
              {
                ATerm a_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(x_29);
                a_26 = t;
                t = c_30;
                t = e_73(t);
                j_26 = t;
                t = u_29;
                t = e_73(t);
                k_26 = t;
                t = v_29;
                t = e_73(t);
                l_26 = t;
                t = w_29;
                t = c_73(t);
                m_26 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, j_26, k_26, l_26, m_26);
                z_2 = t;
                t = SSLsetAnnotations(z_2, a_26);
              }
            }
          else
            {
              ATerm s_27 = NULL,b_28 = NULL,b_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_29);
              s_27 = t;
              t = c_30;
              t = c_73(t);
              b_28 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, b_28);
              b_3 = t;
              t = SSLsetAnnotations(b_3, s_27);
            }
        }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm m_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_30);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_30 = ATgetArgument(t, 0);
            t = s_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_30 = ATgetArgument(t, 0);
                t_30 = ATgetArgument(t, 1);
                u_30 = ATgetArgument(t, 2);
                v_30 = ATgetArgument(t, 3);
                t = u_30;
                t = map_1_0(u_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_30 = ATgetArgument(t, 0);
                    t_30 = ATgetArgument(t, 1);
                    u_30 = ATgetArgument(t, 2);
                    v_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_30;
                t = map_1_0(v_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm i_31 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_31 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = i_31;
    }
  else
    {
      t = t_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_31;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm w_31 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_31 = ATgetArgument(t, 0);
          {
            ATerm a_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_11);
      t = w_31;
    }
  else
    {
      t = y_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_31;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(r_2, t_2, tboundin_3_0, t);
  return(t);
}
ATerm f_5 (ATerm p_82 (ATerm), ATerm k_27, ATerm j_27, ATerm t)
{
  ATerm a_33 (ATerm t)
  {
    ATerm q_32 = NULL,r_32 = NULL,x_32 = NULL;
    q_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_32 = ATgetFirst((ATermList) t);
            x_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_12 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_32;
              {
                ATerm c_3 (ATerm t)
                {
                  t = j_27;
                  return(t);
                }
                t = g_5(p_82, c_3, r_32, x_32, t);
                t = a_33(t);
              }
              ;
              LocalPopChoice(c_12);
            }
          else
            {
              t = b_12;
              {
                ATerm t_28 = NULL,w_28 = NULL,h_3 = NULL;
                t = SSLgetAnnotations(q_32);
                t_28 = t;
                t = x_32;
                t = a_33(t);
                w_28 = t;
                t = (ATerm) ATinsert(CheckATermList(w_28), r_32);
                h_3 = t;
                t = SSLsetAnnotations(h_3, t_28);
              }
            }
        }
      }
    return(t);
  }
  t = k_27;
  t = a_33(t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_33;
      t = f_85(t);
    }
  else
    {
      ATerm i_33 = NULL,j_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_33 = ATgetFirst((ATermList) t);
          f_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_33;
      t = h_85(t);
      i_33 = t;
      t = f_33;
      t = foldr_3_0(f_85, g_85, h_85, t);
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_33, j_33);
      t = g_85(t);
    }
  return(t);
}
ATerm g_5 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm o_27, ATerm n_27, ATerm t)
{
  t = t_82(t);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm m_33 = NULL;
      m_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_27, m_33);
      t = s_82(t);
      return(t);
    }
    t = fetch_1_0(d_3, t);
    t = n_27;
  }
  return(t);
}
ATerm h_5 (ATerm k_82 (ATerm), ATerm i_27, ATerm h_27, ATerm t)
{
  ATerm c_34 (ATerm t)
  {
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
    x_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_33 = ATgetFirst((ATermList) t);
            z_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_33;
              {
                ATerm e_3 (ATerm t)
                {
                  t = h_27;
                  return(t);
                }
                t = g_5(k_82, e_3, y_33, z_33, t);
                t = c_34(t);
              }
              ;
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              {
                ATerm m_29 = NULL,p_29 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(x_33);
                m_29 = t;
                t = z_33;
                t = c_34(t);
                p_29 = t;
                t = (ATerm) ATinsert(CheckATermList(p_29), y_33);
                m_3 = t;
                t = SSLsetAnnotations(m_3, m_29);
              }
            }
        }
      }
    return(t);
  }
  t = i_27;
  t = c_34(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm p_35 (ATerm t)
  {
    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
    o_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_35 = ATgetFirst((ATermList) t);
        n_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_30 = NULL,l_30 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(o_35);
          i_30 = t;
          t = n_35;
          t = p_35(t);
          l_30 = t;
          t = (ATerm) ATinsert(CheckATermList(l_30), m_35);
          o_3 = t;
          t = SSLsetAnnotations(o_3, i_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_35;
        t = s_80(t);
      }
    return(t);
  }
  t = p_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_34;
    }
  else
    {
      ATerm f_3 (ATerm t)
      {
        t = not_null(h_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_34 = ATgetFirst((ATermList) t);
          if(((h_34 != NULL) && (h_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_34;
      t = at_end_1_0(f_3, t);
    }
  return(t);
}
ATerm d_36 (ATerm v_35, ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_explode_term(v_35);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              t = z_35;
              return(t);
            }
            t = y_35;
            t = at_end_1_0(g_3, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = d_36(a_36, t);
          }
      }
    }
  else
    {
      t = d_36(a_36, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm t)
{
  ATerm q_36 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_78(t);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL,q_3 = NULL;
          t = o_78(t);
          m_36 = t;
          if(match_cons(t, sym__2))
            {
              f_36 = ATgetArgument(t, 0);
              g_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_36);
          e_36 = t;
          t = f_36;
          t = q_78(t);
          j_36 = t;
          t = g_36;
          t = q_36(t);
          k_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
          q_3 = t;
          t = SSLsetAnnotations(q_3, e_36);
          t = p_78(t);
        }
      }
    return(t);
  }
  t = q_36(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
        _fail(t);
      {
        ATerm l_12 = ATgetArgument(t, 1);
        if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_12 = ATgetArgument(t, 0);
      if(((ATgetType(m_12) == AT_LIST) && !(ATisEmpty(m_12))))
        {
          y_36 = ATgetFirst((ATermList) m_12);
          z_36 = (ATerm) ATgetNext((ATermList) m_12);
        }
      else
        _fail(t);
      {
        ATerm n_12 = ATgetArgument(t, 1);
        if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
          {
            a_37 = ATgetFirst((ATermList) n_12);
            b_37 = (ATerm) ATgetNext((ATermList) n_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_36, a_37), (ATerm) ATmakeAppl(sym__2, z_36, b_37));
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  if(match_cons(t, sym__2))
    {
      c_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_37), c_37);
  return(t);
}
ATerm j_5 (ATerm b_511, ATerm g_511, ATerm j_51, ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t = SSL_explode_term(g_511);
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_511);
  if(match_cons(t, sym__2))
    {
      if((t_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
  t = genzip_4_0(k_3, n_3, p_3, _id, t);
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_36, j_51);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t)
{
  ATerm f_37 (ATerm t)
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_91(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = u_91(t);
        t = f_37(t);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm for_3_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm t)
{
  t = w_91(t);
  t = while_not_2_0(x_91, y_91, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_37);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,v_3 = NULL;
  q_37 = t;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_37);
  n_37 = t;
  t = p_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  v_3 = t;
  t = SSLsetAnnotations(v_3, n_37);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  o_38 = t;
  if(match_cons(t, sym__2))
    {
      p_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_38 = ATgetFirst((ATermList) t);
      s_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_39(p_38, q_38, o_38, t);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_38), r_38), s_38);
          }
      }
    }
  else
    {
      t = i_39(p_38, q_38, o_38, t);
    }
  return(t);
}
ATerm i_39 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm u_37 = NULL,z_37 = NULL,x_3 = NULL,c_38 = NULL,d_38 = NULL,f_38 = NULL,g_38 = NULL;
  t = SSLgetAnnotations(t_37);
  u_37 = t;
  t = s_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_38 = ATgetFirst((ATermList) t);
      g_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_38;
  if(match_cons(t, sym__2))
    {
      d_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_38;
        if((d_38 != t))
          {
            _fail(t);
          }
        t = g_38;
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = s_37;
        t = j_5(d_38, f_38, g_38, t);
      }
    z_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_37, z_37);
    x_3 = t;
    t = SSLsetAnnotations(x_3, u_37);
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm h_39 = NULL;
  if(match_cons(t, sym__2))
    {
      h_39 = ATgetArgument(t, 0);
      if((h_39 != ATgetArgument(t, 1)))
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
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_3, w_3, y_3, t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm w_38 = NULL,y_38 = NULL,z_38 = NULL;
        w_38 = t;
        if(match_cons(t, sym__2))
          {
            y_38 = ATgetArgument(t, 0);
            z_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_38;
        t = h_5(a_4, y_38, z_38, t);
      }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(l_4, q_31, r_31, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm s_31 = NULL;
  if(match_cons(t, sym__2))
    {
      s_31 = ATgetArgument(t, 0);
      if((s_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  if(match_cons(t, sym__2))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(p_4, j_32, k_32, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      if((l_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_39 (ATerm t)
  {
    ATerm y_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_89(t);
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = y_12;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_39 = NULL,l_39 = NULL,b_31 = NULL,c_31 = NULL;
              k_39 = t;
              t = j_89(t);
              l_39 = t;
              t = k_39;
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm n_39 = NULL;
                  t = w_39(t);
                  n_39 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_39, l_39);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_89(c_4, w_39, e_4, t);
                c_31 = t;
                t = SSL_explode_term(c_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_13 = ATgetArgument(t, 0);
                    b_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_31;
                t = foldr_3_0(g_4, h_4, _id, t);
              }
              ;
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm a_32 = NULL,b_32 = NULL;
                b_32 = t;
                t = SSL_explode_term(b_32);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_13 = ATgetArgument(t, 0);
                    a_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_32;
                t = foldr_3_0(m_4, o_4, w_39, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm j_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_40);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_40 = ATgetArgument(t, 0);
            t = l_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_40 = ATgetArgument(t, 0);
                m_40 = ATgetArgument(t, 1);
                n_40 = ATgetArgument(t, 2);
                o_40 = ATgetArgument(t, 3);
                t = n_40;
                t = map_1_0(t_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_40 = ATgetArgument(t, 0);
                    m_40 = ATgetArgument(t, 1);
                    n_40 = ATgetArgument(t, 2);
                    o_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_40;
                t = map_1_0(u_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm a_41 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_41 = ATgetArgument(t, 0);
          {
            ATerm k_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = a_41;
    }
  else
    {
      t = i_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_41;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm r_41 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_41 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_13);
      t = r_41;
    }
  else
    {
      t = l_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_41;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_40 = ATgetArgument(t, 0);
      t = g_40;
      if(match_cons(t, sym_Rule_3))
        {
          c_40 = ATgetArgument(t, 0);
          {
            ATerm o_13 = ATgetArgument(t, 1);
          }
          {
            ATerm p_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_40;
      t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_40 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_40;
    }
  return(t);
}
ATerm Var_1_0 (ATerm f_60 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_4 = NULL;
  a_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  x_41 = t;
  t = y_41;
  t = f_60(t);
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_41);
  b_4 = t;
  t = SSLsetAnnotations(b_4, x_41);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm w_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            w_42 = ATgetArgument(t, 0);
            z_42 = ATgetArgument(t, 1);
            a_43 = ATgetArgument(t, 2);
            b_43 = ATgetArgument(t, 3);
            t = a_43;
            t = map_1_0(w_4, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                w_42 = ATgetArgument(t, 0);
                z_42 = ATgetArgument(t, 1);
                a_43 = ATgetArgument(t, 2);
                b_43 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = a_43;
            t = map_1_0(x_4, t);
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm m_43 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_43 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_13);
      t = m_43;
    }
  else
    {
      t = u_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_43;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm b_44 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_44 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = b_44;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_44;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  g_44 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      t = g_44;
      t = a_5(h_44, i_44, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_44 = ATgetArgument(t, 0);
          i_44 = ATgetArgument(t, 1);
          j_44 = ATgetArgument(t, 2);
          t = i_44;
          t = map_1_0(b_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              h_44 = ATgetArgument(t, 0);
              i_44 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, h_44);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_44 = ATgetArgument(t, 0);
                  i_44 = ATgetArgument(t, 1);
                  j_44 = ATgetArgument(t, 2);
                  k_44 = ATgetArgument(t, 3);
                  t = i_44;
                  t = map_1_0(c_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_44 = ATgetArgument(t, 0);
                      i_44 = ATgetArgument(t, 1);
                      j_44 = ATgetArgument(t, 2);
                      k_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_44;
                  t = map_1_0(d_5, t);
                }
            }
        }
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm s_44 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_44 = ATgetArgument(t, 0);
          {
            ATerm c_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_14);
      t = s_44;
    }
  else
    {
      t = a_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_44;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_45 = ATgetArgument(t, 0);
          {
            ATerm j_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_14);
      t = f_45;
    }
  else
    {
      t = d_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_45;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm y_45 = NULL;
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_45 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_14);
      t = y_45;
    }
  else
    {
      t = k_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_45;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, v_4, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, z_4, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm u_5 (ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm f_46 = NULL;
  t = SSL_fputc(p_42, q_42);
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_46);
  return(t);
}
ATerm v_5 (ATerm a_47, ATerm b_47, ATerm t)
{
  ATerm i_46 = NULL;
  t = SSL_write_term_to_stream_text(a_47, b_47);
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_46);
  return(t);
}
ATerm x_5 (ATerm n_95 (ATerm), ATerm i_460, ATerm e_47, ATerm t)
{
  ATerm k_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_460, term_n_14);
  t = a_6(t);
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, e_47);
  t = n_95(t);
  t = fclose_0_0(t);
  t = e_47;
  return(t);
}
ATerm w_5 (ATerm w_46, ATerm x_46, ATerm t)
{
  ATerm o_46 = NULL;
  t = SSL_write_term_to_stream_baf(w_46, x_46);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_46);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          s_46 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(s_46, t_46, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,f_47 = NULL,h_47 = NULL,i_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym_Stream_1))
        {
          h_47 = ATgetArgument(p_14, 0);
        }
      else
        _fail(t);
      i_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(h_47, i_47, t);
  u_46 = t;
  t = term_q_14;
  v_46 = t;
  t = u_46;
  if(match_cons(t, sym_Stream_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, u_46);
  t = u_5(v_46, f_47, t);
  return(t);
}
ATerm output_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = h_93(t);
  q_46 = t;
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = term_v_14;
      }
    p_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_46, q_46);
    {
      ATerm w_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_15;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, p_46, q_46);
          LocalPopChoice(z_14);
          if(match_cons(t, sym__2))
            {
              ATerm b_15 = ATgetArgument(t, 0);
              ATerm c_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5(i_5, p_46, q_46, t);
        }
      else
        {
          t = w_14;
          if(match_cons(t, sym__2))
            {
              ATerm d_15 = ATgetArgument(t, 0);
              ATerm e_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5(m_5, p_46, q_46, t);
        }
    }
  }
  return(t);
}
ATerm k_48 (ATerm t_47, ATerm t)
{
  t = SSL_fclose(t_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  z_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_47 = ATgetArgument(t, 0);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_47);
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = k_48(z_47, t);
          }
      }
    }
  else
    {
      t = k_48(z_47, t);
    }
  return(t);
}
ATerm y_5 (ATerm c_47, ATerm t)
{
  t = SSL_read_term_from_stream(c_47);
  return(t);
}
ATerm z_5 (ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm l_48 = NULL;
  t = SSL_fopen(r_42, s_42);
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_48 = NULL;
  t = SSL_stdin_stream();
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_48 = NULL;
  t = SSL_stdout_stream();
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  t = SSL_stderr_stream();
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_48);
  return(t);
}
ATerm f_50 (ATerm x_48, ATerm t)
{
  ATerm y_48 = NULL;
  t = SSL_explode_term(x_48);
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
          {
            y_48 = ATgetFirst((ATermList) i_15);
            {
              ATerm k_15 = (ATerm) ATgetNext((ATermList) i_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_50 (ATerm d_49, ATerm e_49, ATerm h_49, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,l_49 = NULL,o_49 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(h_49);
  l_49 = t;
  t = d_49;
  if(match_cons(t, sym_Path_1))
    {
      o_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_49, e_49);
  d_4 = t;
  t = SSLsetAnnotations(d_4, l_49);
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(i_49, j_49, t);
  return(t);
}
ATerm h_50 (ATerm q_49, ATerm r_49, ATerm s_49, ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,a_50 = NULL,f_4 = NULL;
  t = SSLgetAnnotations(s_49);
  v_49 = t;
  t = SSL_is_string(q_49);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, r_49);
  f_4 = t;
  t = SSLsetAnnotations(f_4, v_49);
  if(match_cons(t, sym__2))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(t_49, u_49, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_50(c_50, t);
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_50(d_50, e_50, c_50, t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = h_50(d_50, e_50, c_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_50(c_50, t);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_50 = NULL;
      l_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_50, term_x_15);
      t = a_6(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      t = debug_1_0(n_5, t);
      _fail(t);
    }
  j_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(k_50, t);
  i_50 = t;
  t = j_50;
  t = fclose_0_0(t);
  t = i_50;
  return(t);
}
ATerm input_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      t = term_f_16;
    }
  t = ReadFromFile_0_0(t);
  t = i_93(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  o_50 = t;
  t = term_g_16;
  t = whoami_0_0(t);
  p_50 = t;
  t = term_h_16;
  r_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), p_50), term_i_16);
  s_50 = t;
  t = SSL_printnl(r_50, s_50);
  t = term_k_16;
  q_50 = t;
  t = SSL_exit(q_50);
  t = o_50;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  if(match_string(t, "-k"))
    {
      t = u_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_50;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm v_50 = NULL,y_50 = NULL,z_50 = NULL;
  v_50 = t;
  t = SSL_string_to_int(v_50);
  y_50 = t;
  t = term_l_16;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_16, y_50);
  t = i_6(z_50, y_50, t);
  t = v_50;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, r_5, t_5, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  if(match_string(t, "-S"))
    {
      t = b_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_51;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm c_51 = NULL,e_51 = NULL;
  t = term_n_16;
  c_51 = t;
  t = term_o_16;
  e_51 = t;
  t = term_r_16;
  t = i_6(c_51, e_51, t);
  t = term_t_16;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm f_51 = NULL,k_51 = NULL,l_51 = NULL;
  f_51 = t;
  t = SSL_string_to_int(f_51);
  k_51 = t;
  t = term_n_16;
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, k_51);
  t = i_6(l_51, k_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_51);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm o_51 = NULL,q_51 = NULL;
  t = term_x_16;
  o_51 = t;
  t = term_g_16;
  q_51 = t;
  t = term_c_17;
  t = i_6(o_51, q_51, t);
  t = term_d_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, h_6, j_6, t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = h_17;
      {
        ATerm n_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_6, l_6, m_6, t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = n_17;
            t = Option_3_0(n_6, o_6, p_6, t);
          }
      }
    }
  return(t);
}
ATerm i_6 (ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm r_51 = NULL;
  t = term_q_17;
  r_51 = t;
  t = SSL_table_put(r_51, m_51, n_51);
  t = (ATerm) ATmakeAppl(sym__3, term_q_17, m_51, n_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_52 = NULL,e_52 = NULL,g_52 = NULL;
      t = term_g_16;
      t = e_0(t);
      d_52 = t;
      t = term_r_17;
      e_52 = t;
      t = term_v_17;
      g_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_17, term_v_17, d_52);
      t = g_6(e_52, g_52, d_52, t);
      _fail(t);
    }
  else
    {
      ATerm p_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_52 = ATgetFirst((ATermList) t);
          b_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_52;
      t = c_0(t);
      t = term_g_16;
      t = d_0(t);
      p_52 = t;
      t = (ATerm) ATinsert(CheckATermList(b_52), p_52);
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  if(match_string(t, "-o"))
    {
      t = r_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_52;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm s_52 = NULL,u_52 = NULL;
  s_52 = t;
  t = term_u_14;
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, s_52);
  t = i_6(u_52, s_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_52);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_6, u_6, w_6, t);
  return(t);
}
ATerm g_6 (ATerm v_32, ATerm w_32, ATerm u_32, ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,z_52 = NULL;
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
  {
    ATerm y_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            ATerm c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
        t = f_6(v_32, w_32, t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATempty;
      }
    x_52 = t;
    t = (ATerm) ATinsert(CheckATermList(x_52), u_32);
    z_52 = t;
    t = SSL_table_put(v_32, w_32, z_52);
    t = w_52;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,l_53 = NULL,m_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
      t = term_g_16;
      t = k_0(t);
      n_53 = t;
      t = term_r_17;
      o_53 = t;
      t = term_v_17;
      p_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_17, term_v_17, n_53);
      t = g_6(o_53, p_53, n_53, t);
      _fail(t);
    }
  else
    {
      ATerm t_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_53 = ATgetFirst((ATermList) t);
          j_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_53;
      t = i_0(t);
      t = l_53;
      t = j_0(t);
      t_53 = t;
      t = (ATerm) ATinsert(CheckATermList(m_53), t_53);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "-i"))
    {
      t = v_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_53;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm y_53 = NULL,b_54 = NULL;
  y_53 = t;
  t = term_a_16;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, y_53);
  t = i_6(b_54, y_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_53);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, d_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,i_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_16;
  t = whoami_0_0(t);
  c_54 = t;
  t = term_h_16;
  e_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_18), c_54);
  i_54 = t;
  t = SSL_printnl(e_54, i_54);
  t = term_k_16;
  d_54 = t;
  t = SSL_exit(d_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm b_6 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_30, a_31);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = v_18;
      t = SSL_addr(z_30, a_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  ATerm k_54 = NULL,n_54 = NULL,q_54 = NULL;
  k_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_54;
      t = d_85(t);
    }
  else
    {
      ATerm v_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_54 = ATgetFirst((ATermList) t);
          q_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_54;
      t = foldr_2_0(d_85, e_85, t);
      v_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_54, v_54);
      t = e_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  if(match_cons(t, sym__2))
    {
      t_34 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(t_34, u_34, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_55 = NULL,l_34 = NULL,o_34 = NULL;
  t = times_0_0(t);
  o_34 = t;
  t = SSL_explode_term(o_34);
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_34;
  t = foldr_2_0(f_7, i_7, t);
  a_55 = t;
  t = SSL_TicksToSeconds(a_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
  r_55 = t;
  if(match_cons(t, sym__2))
    {
      s_55 = ATgetArgument(t, 0);
      t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_55;
        if((s_55 != t))
          {
            _fail(t);
          }
        t = r_55;
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        {
          ATerm e_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_55, t_55);
              ;
              LocalPopChoice(g_19);
            }
          else
            {
              t = e_19;
              t = SSL_gtr(s_55, t_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_55 = NULL;
        t = term_n_16;
        t = get_config_0_0(t);
        z_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_55, term_k_16);
        t = geq_0_0(t);
        t = x_55;
        t = u_101(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = x_55;
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,e_56 = NULL,f_56 = NULL;
  t = run_time_0_0(t);
  b_56 = t;
  t = term_g_16;
  t = whoami_0_0(t);
  c_56 = t;
  t = term_h_16;
  e_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_19), b_56), term_j_19), c_56);
  f_56 = t;
  t = SSL_printnl(e_56, f_56);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_19), b_56), term_j_19), c_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_16;
  g_56 = t;
  t = SSL_exit(g_56);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_56 = ATgetArgument(t, 0);
          {
            ATerm i_36 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(r_56);
            i_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_56);
            k_4 = t;
            t = SSLsetAnnotations(k_4, i_36);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = fetch_1_0(k_7, t);
    }
  t = y_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_56 = ATgetFirst((ATermList) t);
      v_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_56 = NULL,a_57 = NULL;
        ATerm l_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_56)), not_null(a_57));
          return(t);
        }
        t = v_56;
        t = h_0(t);
        if(((z_56 != NULL) && (z_56 != t)))
          _fail(t);
        else
          z_56 = t;
        t = u_56;
        t = g_0(t);
        if(((a_57 != NULL) && (a_57 != t)))
          _fail(t);
        else
          a_57 = t;
        t = v_56;
        t = reverse_acc_2_0(g_0, l_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_16;
      t = h_0(t);
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,n_4 = NULL;
  g_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_57);
  n_4 = t;
  t = SSLsetAnnotations(n_4, e_57);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm i_57 = NULL;
  i_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_57), term_o_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      t = fetch_1_0(m_7, t);
    }
  t = term_r_19;
  t = echo_0_0(t);
  t = term_r_17;
  c_57 = t;
  t = term_v_17;
  d_57 = t;
  t = term_s_19;
  t = f_6(c_57, d_57, t);
  t = reverse_acc_2_0(_id, n_7, t);
  t = map_1_0(o_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm f_58 (ATerm t)
  {
    ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
    c_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_58 = ATgetFirst((ATermList) t);
        e_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_37 = NULL,k_37 = NULL,q_4 = NULL;
          t = SSLgetAnnotations(c_58);
          h_37 = t;
          t = d_58;
          t = m_80(t);
          k_37 = t;
          t = (ATerm) ATinsert(CheckATermList(e_58), k_37);
          q_4 = t;
          t = SSLsetAnnotations(q_4, h_37);
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm a_39 = NULL,f_39 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(c_58);
            a_39 = t;
            t = e_58;
            t = f_58(t);
            f_39 = t;
            t = (ATerm) ATinsert(CheckATermList(f_39), d_58);
            y_4 = t;
            t = SSLsetAnnotations(y_4, a_39);
          }
        }
    }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_19 = ATgetFirst((ATermList) t);
                ATerm y_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_58;
          }
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATinsert(ATempty, j_58);
      }
    k_58 = t;
    t = term_v_14;
    l_58 = t;
    t = SSL_printnl(l_58, k_58);
    t = j_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_6 (ATerm f_41, ATerm g_41, ATerm t)
{
  t = SSL_strcat(f_41, g_41);
  return(t);
}
ATerm debug_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL;
  p_58 = t;
  t = l_95(t);
  q_58 = t;
  t = term_h_16;
  r_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_58), q_58);
  s_58 = t;
  t = SSL_printnl(r_58, s_58);
  t = p_58;
  return(t);
}
ATerm map_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm j_59 (ATerm t)
  {
    ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
    g_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_59;
      }
    else
      {
        ATerm r_40 = NULL,u_40 = NULL,b_41 = NULL,e_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_59 = ATgetFirst((ATermList) t);
            i_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_59);
        r_40 = t;
        t = h_59;
        t = c_80(t);
        u_40 = t;
        t = i_59;
        t = j_59(t);
        b_41 = t;
        t = (ATerm) ATinsert(CheckATermList(b_41), u_40);
        e_5 = t;
        t = SSLsetAnnotations(e_5, r_40);
      }
    return(t);
  }
  t = j_59(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_59 = NULL;
      r_59 = t;
      t = SSL_is_string(r_59);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = c_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_7, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
              x_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_59 = ATgetArgument(t, 0);
                  t = y_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_59 = ATgetArgument(t, 0);
                      t = y_59;
                      {
                        ATerm l_20 = t;
                        int m_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_20);
                          }
                        else
                          {
                            t = l_20;
                            t = debug_1_0(q_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_60 = NULL,e_60 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_59 = ATgetArgument(t, 0);
                          z_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_59;
                      t = eval_config_0_0(t);
                      d_60 = t;
                      t = z_59;
                      t = eval_config_0_0(t);
                      e_60 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
                      t = e_6(d_60, e_60, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_6 (ATerm m_34, ATerm n_34, ATerm t)
{
  t = SSL_table_get(m_34, n_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  j_60 = t;
  t = term_q_17;
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, j_60);
  t = f_6(k_60, j_60, t);
  {
    ATerm o_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_60 = NULL,m_60 = NULL;
        t = eval_config_0_0(t);
        l_60 = t;
        t = term_q_17;
        m_60 = t;
        t = SSL_table_put(m_60, j_60, l_60);
        t = l_60;
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = o_20;
      }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  t = term_s_20;
  p_60 = t;
  t = term_g_16;
  q_60 = t;
  t = term_t_20;
  t = i_6(p_60, q_60, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  t = term_s_20;
  t_60 = t;
  t = term_g_16;
  u_60 = t;
  t = term_t_20;
  t = i_6(t_60, u_60, t);
  t = term_z_20;
  r_60 = t;
  t = term_g_16;
  s_60 = t;
  t = term_b_21;
  t = i_6(r_60, s_60, t);
  t = term_c_21;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_7, s_7, t_7, t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = e_21;
      t = Option_3_0(u_7, v_7, w_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,o_5 = NULL;
  a_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_60 = ATgetFirst((ATermList) t);
      x_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_61);
  v_60 = t;
  t = w_60;
  t = y_58(t);
  y_60 = t;
  t = x_60;
  t = z_58(t);
  z_60 = t;
  t = (ATerm) ATinsert(CheckATermList(z_60), y_60);
  o_5 = t;
  t = SSLsetAnnotations(o_5, v_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,k_61 = NULL,l_61 = NULL,s_5 = NULL;
  f_61 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_21;
        t = u_97(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
      }
    t = f_61;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_61 = ATgetFirst((ATermList) t);
        i_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_61);
    g_61 = t;
    t = term_t_18;
    l_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_18, h_61);
    t = i_6(l_61, h_61, t);
    t = i_61;
    {
      ATerm v_61 (ATerm t)
      {
        ATerm q_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_61 = NULL;
                o_61 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_61;
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
                t = u_97(t);
                t = Cons_2_0(_id, v_61, t);
              }
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = q_21;
            {
              ATerm r_61 = NULL,s_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_61 = ATgetFirst((ATermList) t);
                  s_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_61), (ATerm) ATmakeAppl(sym_Undefined_1, r_61));
            }
          }
        return(t);
      }
      t = v_61(t);
      k_61 = t;
      t = (ATerm) ATinsert(CheckATermList(k_61), (ATerm) ATmakeAppl(sym_Program_1, h_61));
      s_5 = t;
      t = SSLsetAnnotations(s_5, g_61);
    }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm h_62 = NULL;
  h_62 = t;
  if(match_string(t, "--help"))
    {
      t = h_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_62;
        }
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  t = term_n_19;
  i_62 = t;
  t = term_g_16;
  j_62 = t;
  t = term_w_21;
  t = i_6(i_62, j_62, t);
  t = term_x_21;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm b_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  c_62 = t;
  t = term_r_17;
  e_62 = t;
  t = term_v_17;
  f_62 = t;
  t = (ATerm) ATempty;
  g_62 = t;
  t = SSL_table_put(e_62, f_62, g_62);
  t = c_62;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_97(t);
          ;
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_7, z_7, a_8, t);
                ;
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_7, t);
    {
      ATerm d_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_62 = NULL;
          q_62 = t;
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_42 = NULL;
                t = q_62;
                {
                  ATerm k_22 = t;
                  int l_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_22);
                    }
                  else
                    {
                      t = k_22;
                      t = fetch_1_0(b_8, t);
                    }
                  t = q_62;
                  t = default_system_usage_0_0(t);
                  t = term_o_16;
                  i_42 = t;
                  t = SSL_exit(i_42);
                }
                ;
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                {
                  ATerm m_42 = NULL;
                  t = term_s_20;
                  t = get_config_0_0(t);
                  t = q_62;
                  t = default_system_about_0_0(t);
                  t = term_o_16;
                  m_42 = t;
                  t = SSL_exit(m_42);
                }
              }
          }
          ;
          LocalPopChoice(f_22);
        }
      else
        {
          t = d_22;
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
                ATerm c_8 (ATerm t)
                {
                  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,c_6 = NULL;
                  w_62 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_62);
                  u_62 = t;
                  t = v_62;
                  if(((a_62 != NULL) && (a_62 != t)))
                    _fail(t);
                  else
                    a_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_62);
                  c_6 = t;
                  t = SSLsetAnnotations(c_6, u_62);
                  return(t);
                }
                t = fetch_1_0(c_8, t);
                t = term_h_16;
                s_62 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_62)), term_o_22);
                t_62 = t;
                t = SSL_printnl(s_62, t_62);
                t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_62)), term_o_22));
                t = default_system_usage_0_0(t);
                t = term_k_16;
                r_62 = t;
                t = SSL_exit(r_62);
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
              }
          }
        }
      b_62 = t;
      t = term_r_17;
      d_62 = t;
      t = SSL_table_destroy(d_62);
      t = b_62;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
  t = parse_options_1_0(a_93, t);
  b_63 = t;
  t = term_p_22;
  e_63 = t;
  t = SSL_table_create(e_63);
  t = term_p_22;
  c_63 = t;
  t = term_q_22;
  d_63 = t;
  t = SSL_table_put(c_63, d_63, b_63);
  t = b_63;
  t = c_93(t);
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_93, t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_93(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(f_8, g_8, h_8, t);
                  ;
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = z_22;
                  {
                    ATerm b_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(d_23);
                      }
                    else
                      {
                        t = b_23;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = input_1_0(i_8, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  t = term_a_15;
  g_63 = t;
  t = term_g_16;
  h_63 = t;
  t = term_e_23;
  t = i_6(g_63, h_63, t);
  t = term_f_23;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_8, default_usage_0_0, _id, e_8, t);
  return(t);
}
