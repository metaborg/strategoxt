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
ATerm term_a_30;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_i_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_x_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_q_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
void init_constant_terms (void)
{
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_q_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_l_11);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_i_25);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_l_11);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_l_11);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_l_11);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_l_11);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm spaste_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
ATerm Let_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm f_5 (ATerm d_31, ATerm c_31, ATerm);
ATerm SVar_1_0 (ATerm l_75 (ATerm), ATerm);
ATerm q_5 (ATerm e_99 (ATerm), ATerm f_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_47, ATerm h_47, ATerm g_47, ATerm);
ATerm new_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm t_5 (ATerm y_98 (ATerm), ATerm z_98 (ATerm (ATerm), ATerm), ATerm a_47, ATerm d_47, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm rename_4_0 (ATerm t_98 (ATerm (ATerm), ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_98 (ATerm (ATerm), ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm tpaste_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_5 (ATerm e_94 (ATerm), ATerm m_39, ATerm l_39, ATerm);
ATerm foldr_3_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm l_5 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm q_39, ATerm p_39, ATerm);
ATerm m_5 (ATerm z_93 (ATerm), ATerm k_39, ATerm j_39, ATerm);
ATerm at_end_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_21 (ATerm p_21, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm o_5 (ATerm y_535, ATerm d_536, ATerm g_63, ATerm);
ATerm while_not_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm for_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm free_vars_3_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm);
ATerm a_6 (ATerm m_54, ATerm n_54, ATerm);
ATerm b_6 (ATerm x_58, ATerm y_58, ATerm);
ATerm d_6 (ATerm w_106 (ATerm), ATerm f_485, ATerm b_59, ATerm);
ATerm c_6 (ATerm t_58, ATerm u_58, ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm r_32 (ATerm l_32, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_6 (ATerm z_58, ATerm);
ATerm f_6 (ATerm o_54, ATerm p_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm z_5 (ATerm c_53, ATerm d_53, ATerm);
ATerm debug_1_0 (ATerm u_106 (ATerm), ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm u_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_6 (ATerm j_63, ATerm k_63, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm l_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_6 (ATerm v_44, ATerm w_44, ATerm u_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_6 (ATerm z_42, ATerm a_43, ATerm);
ATerm foldr_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm x_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm need_help_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm i_6 (ATerm m_46, ATerm n_46, ATerm);
ATerm Program_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm);
ATerm k_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_109 (ATerm), ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm parse_options_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm iowrap_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm);
ATerm k_11 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  l_0 = t;
  t = term_l_11;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_n_11;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), p_0), term_o_11);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_q_11;
  s_0 = t;
  t = SSL_exit(s_0);
  t = l_0;
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      if(((ATgetType(r_11) != AT_LIST) || !(ATisEmpty(r_11))))
        _fail(t);
      {
        ATerm s_11 = ATgetArgument(t, 1);
        if(((ATgetType(s_11) != AT_LIST) || !(ATisEmpty(s_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
        {
          g_1 = ATgetFirst((ATermList) t_11);
          h_1 = (ATerm) ATgetNext((ATermList) t_11);
        }
      else
        _fail(t);
      {
        ATerm u_11 = ATgetArgument(t, 1);
        if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
          {
            i_1 = ATgetFirst((ATermList) u_11);
            j_1 = (ATerm) ATgetNext((ATermList) u_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_1, i_1), (ATerm) ATmakeAppl(sym__2, h_1, j_1));
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_1), k_1);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm q_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_1;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm y_11 = ATgetArgument(t, 0);
            u_1 = ATgetArgument(t, 1);
            v_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(x_11);
        t = (ATerm) ATmakeAppl(sym_SDef_3, x_1, u_1, v_1);
      }
    else
      {
        t = w_11;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            u_1 = ATgetArgument(t, 1);
            v_1 = ATgetArgument(t, 2);
            w_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_1, u_1, v_1, w_1);
      }
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
        if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
        {
          h_3 = ATgetFirst((ATermList) d_12);
          i_3 = (ATerm) ATgetNext((ATermList) d_12);
        }
      else
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            j_3 = ATgetFirst((ATermList) e_12);
            k_3 = (ATerm) ATgetNext((ATermList) e_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_3, j_3), (ATerm) ATmakeAppl(sym__2, i_3, k_3));
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_3), m_3);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_3);
      }
    else
      {
        t = f_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_12 = ATgetArgument(t, 0);
            r_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_3, r_3);
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if(((ATgetType(j_12) != AT_LIST) || !(ATisEmpty(j_12))))
        _fail(t);
      {
        ATerm k_12 = ATgetArgument(t, 1);
        if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm d_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_12 = ATgetArgument(t, 0);
      if(((ATgetType(m_12) == AT_LIST) && !(ATisEmpty(m_12))))
        {
          d_4 = ATgetFirst((ATermList) m_12);
          h_4 = (ATerm) ATgetNext((ATermList) m_12);
        }
      else
        _fail(t);
      {
        ATerm n_12 = ATgetArgument(t, 1);
        if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
          {
            i_4 = ATgetFirst((ATermList) n_12);
            j_4 = (ATerm) ATgetNext((ATermList) n_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_4, i_4), (ATerm) ATmakeAppl(sym__2, h_4, j_4));
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm l_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_4), l_4);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm r_4 = NULL,w_4 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_5);
      }
    else
      {
        t = o_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            w_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_5, w_4);
      }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if(((ATgetType(t_12) != AT_LIST) || !(ATisEmpty(t_12))))
        _fail(t);
      {
        ATerm u_12 = ATgetArgument(t, 1);
        if(((ATgetType(u_12) != AT_LIST) || !(ATisEmpty(u_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if(((ATgetType(v_12) == AT_LIST) && !(ATisEmpty(v_12))))
        {
          h_7 = ATgetFirst((ATermList) v_12);
          i_7 = (ATerm) ATgetNext((ATermList) v_12);
        }
      else
        _fail(t);
      {
        ATerm w_12 = ATgetArgument(t, 1);
        if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
          {
            j_7 = ATgetFirst((ATermList) w_12);
            k_7 = (ATerm) ATgetNext((ATermList) w_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_7, j_7), (ATerm) ATmakeAppl(sym__2, i_7, k_7));
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_7), l_7);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm q_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      q_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_7);
      }
    else
      {
        t = x_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_13 = ATgetArgument(t, 0);
            s_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_7, s_7);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm d_1 = NULL,e_1 = NULL;
        d_1 = t;
        t = u_84(t);
        e_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_1, e_1);
        t = genzip_4_0(m_2, n_2, r_2, s_2, t);
        return(t);
      }
      t = Let_2_0(l_2, _id, t);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm e_3 = NULL,g_3 = NULL;
              e_3 = t;
              t = u_84(t);
              g_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_3, g_3);
              t = genzip_4_0(u_2, v_2, w_2, x_2, t);
              return(t);
            }
            t = SDef_3_0(_id, t_2, _id, t);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm g_13 = t;
              int h_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_2 (ATerm t)
                  {
                    ATerm b_4 = NULL,c_4 = NULL;
                    b_4 = t;
                    t = u_84(t);
                    c_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
                    t = genzip_4_0(z_2, a_3, c_3, d_3, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, y_2, _id, _id, t);
                  ;
                  LocalPopChoice(h_13);
                }
              else
                {
                  t = g_13;
                  {
                    ATerm k_13 = t;
                    int l_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_3 (ATerm t)
                        {
                          ATerm u_6 = NULL,g_7 = NULL;
                          u_6 = t;
                          t = u_84(t);
                          g_7 = t;
                          t = (ATerm) ATmakeAppl(sym__2, u_6, g_7);
                          t = genzip_4_0(l_3, o_3, q_3, t_3, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, f_3, _id, _id, t);
                        ;
                        LocalPopChoice(l_13);
                      }
                    else
                      {
                        t = k_13;
                        {
                          ATerm u_3 (ATerm t)
                          {
                            ATerm g_8 = NULL;
                            t = u_84(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_8 = ATgetFirst((ATermList) t);
                                {
                                  ATerm m_13 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = g_8;
                            return(t);
                          }
                          t = Rec_2_0(u_3, _id, t);
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
ATerm Rec_2_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,c_0 = NULL,e_0 = NULL;
  m_8 = t;
  if(match_cons(t, sym_Rec_2))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_8);
  h_8 = t;
  t = i_8;
  t = j_76(t);
  k_8 = t;
  t = j_8;
  t = k_76(t);
  l_8 = t;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_8, l_8);
  c_0 = t;
  t = SSLsetAnnotations(c_0, h_8);
  return(t);
}
ATerm SDef_3_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,v_8 = NULL,z_8 = NULL,a_9 = NULL,j_9 = NULL,k_9 = NULL,k_0 = NULL,m_0 = NULL;
  k_9 = t;
  if(match_cons(t, sym_SDef_3))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      v_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_9);
  r_8 = t;
  t = s_8;
  t = b_78(t);
  z_8 = t;
  t = t_8;
  t = c_78(t);
  a_9 = t;
  t = v_8;
  t = d_78(t);
  j_9 = t;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, z_8, a_9, j_9);
  k_0 = t;
  t = SSLsetAnnotations(k_0, r_8);
  return(t);
}
ATerm Let_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,t_9 = NULL,u_9 = NULL,n_0 = NULL,o_0 = NULL;
  u_9 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_9);
  n_9 = t;
  t = o_9;
  t = m_75(t);
  q_9 = t;
  t = p_9;
  t = n_75(t);
  t_9 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, q_9, t_9);
  n_0 = t;
  t = SSLsetAnnotations(n_0, n_9);
  return(t);
}
ATerm sboundin_3_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(v_84, v_84, t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(x_84, x_84, v_84, t);
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm y_13 = t;
              int z_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(x_84, x_84, x_84, v_84, t);
                  ;
                  LocalPopChoice(z_13);
                }
              else
                {
                  t = y_13;
                  t = Rec_2_0(x_84, v_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_10 = ATgetArgument(t, 0);
          {
            ATerm c_14 = ATgetArgument(t, 1);
          }
          {
            ATerm d_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_14);
      t = d_10;
    }
  else
    {
      t = a_14;
      if(match_cons(t, sym_SDefT_4))
        {
          d_10 = ATgetArgument(t, 0);
          {
            ATerm e_14 = ATgetArgument(t, 1);
          }
          {
            ATerm f_14 = ATgetArgument(t, 2);
          }
          {
            ATerm g_14 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_10;
    }
  return(t);
}
ATerm f_5 (ATerm d_31, ATerm c_31, ATerm t)
{
  t = d_31;
  t = map_1_0(v_3, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,t_0 = NULL,v_0 = NULL;
  u_10 = t;
  if(match_cons(t, sym_SVar_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_10);
  r_10 = t;
  t = s_10;
  t = l_75(t);
  t_10 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, t_10);
  t_0 = t;
  t = SSLsetAnnotations(t_0, r_10);
  return(t);
}
ATerm q_5 (ATerm e_99 (ATerm), ATerm f_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_47, ATerm h_47, ATerm g_47, ATerm t)
{
  t = i_47;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm z_10 = NULL;
      z_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_10, g_47);
      t = e_99(t);
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm a_11 = NULL;
      a_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_11, h_47);
      t = e_99(t);
      return(t);
    }
    t = f_99(w_3, x_3, _id, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm y_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_14 = ATgetArgument(t, 0);
      if(((ATgetType(h_14) != AT_LIST) || !(ATisEmpty(h_14))))
        _fail(t);
      {
        ATerm i_14 = ATgetArgument(t, 1);
        if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm c_12 = NULL,l_12 = NULL,s_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
        {
          c_12 = ATgetFirst((ATermList) j_14);
          l_12 = (ATerm) ATgetNext((ATermList) j_14);
        }
      else
        _fail(t);
      {
        ATerm k_14 = ATgetArgument(t, 1);
        if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
          {
            s_12 = ATgetFirst((ATermList) k_14);
            z_12 = (ATerm) ATgetNext((ATermList) k_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_12, s_12), (ATerm) ATmakeAppl(sym__2, l_12, z_12));
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_13), i_13);
  return(t);
}
ATerm t_5 (ATerm y_98 (ATerm), ATerm z_98 (ATerm (ATerm), ATerm), ATerm a_47, ATerm d_47, ATerm t)
{
  ATerm d_11 = NULL,h_11 = NULL,i_11 = NULL,m_11 = NULL,v_11 = NULL;
  t = a_47;
  t = y_98(t);
  d_11 = t;
  t = map_1_0(new_0_0, t);
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, h_11);
  t = genzip_4_0(y_3, z_3, a_4, _id, t);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_11, d_47);
  t = conc_0_0(t);
  m_11 = t;
  t = a_47;
  {
    ATerm e_4 (ATerm t)
    {
      t = h_11;
      return(t);
    }
    t = z_98(e_4, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__3, v_11, d_47, m_11);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_13 = ATgetFirst((ATermList) t);
      t_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_13;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
      {
        ATerm l_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_13;
            if((q_13 != t))
              {
                _fail(t);
              }
            t = o_13;
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = l_14;
            t = (ATerm) ATmakeAppl(sym__2, q_13, t_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_13, t_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm p_14 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_99(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
          ATerm f_4 (ATerm t)
          {
            ATerm u_0 = NULL;
            u_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_0, not_null(o_14));
            t = p_14(t);
            return(t);
          }
          if(((m_14 != NULL) && (m_14 != t)))
            _fail(t);
          else
            m_14 = t;
          if(match_cons(t, sym__2))
            {
              if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_14 = ATgetArgument(t, 0);
              if(((o_14 != NULL) && (o_14 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                o_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(n_14);
          t = SRTS_all(f_4, t);
        }
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm rename_4_0 (ATerm t_98 (ATerm (ATerm), ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_14, (ATerm) ATempty);
  {
    ATerm o_15 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        ATerm d_15 = NULL,e_15 = NULL,g_15 = NULL;
        d_15 = t;
        if(match_cons(t, sym__2))
          {
            e_15 = ATgetArgument(t, 0);
            g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_4 (ATerm t)
              {
                ATerm n_15 = NULL;
                n_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_15, g_15);
                t = lookup_0_0(t);
                return(t);
              }
              t = e_15;
              t = t_98(o_4, t);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              {
                ATerm b_1 = NULL,c_1 = NULL,f_1 = NULL;
                t = d_15;
                t = t_5(u_98, w_98, e_15, g_15, t);
                if(match_cons(t, sym__3))
                  {
                    b_1 = ATgetArgument(t, 0);
                    c_1 = ATgetArgument(t, 1);
                    f_1 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = q_5(o_15, v_98, b_1, c_1, f_1, t);
              }
            }
        }
        return(t);
      }
      t = env_alltd_1_0(g_4, t);
      return(t);
    }
    t = o_15(t);
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
        _fail(t);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
        {
          y_15 = ATgetFirst((ATermList) y_14);
          z_15 = (ATerm) ATgetNext((ATermList) y_14);
        }
      else
        _fail(t);
      {
        ATerm z_14 = ATgetArgument(t, 1);
        if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
          {
            a_16 = ATgetFirst((ATermList) z_14);
            b_16 = (ATerm) ATgetNext((ATermList) z_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_15, a_16), (ATerm) ATmakeAppl(sym__2, z_15, b_16));
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm d_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_16), d_16);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_16;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_15);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_16);
      }
    else
      {
        t = a_15;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            m_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_16, m_16);
      }
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(((ATgetType(h_15) != AT_LIST) || !(ATisEmpty(h_15))))
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) != AT_LIST) || !(ATisEmpty(i_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,b_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      if(((ATgetType(j_15) == AT_LIST) && !(ATisEmpty(j_15))))
        {
          x_16 = ATgetFirst((ATermList) j_15);
          y_16 = (ATerm) ATgetNext((ATermList) j_15);
        }
      else
        _fail(t);
      {
        ATerm k_15 = ATgetArgument(t, 1);
        if(((ATgetType(k_15) == AT_LIST) && !(ATisEmpty(k_15))))
          {
            b_17 = ATgetFirst((ATermList) k_15);
            c_17 = (ATerm) ATgetNext((ATermList) k_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_16, b_17), (ATerm) ATmakeAppl(sym__2, y_16, c_17));
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_17), d_17);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm h_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_17;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_15);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_17);
      }
    else
      {
        t = l_15;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            l_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_17, l_17);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_84, _id, t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm t_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm u_15 = NULL,x_15 = NULL;
              u_15 = t;
              t = q_84(t);
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_15, x_15);
              t = genzip_4_0(q_4, s_4, v_4, x_4, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, p_4, _id, t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = t_15;
            {
              ATerm y_4 (ATerm t)
              {
                ATerm v_16 = NULL,w_16 = NULL;
                v_16 = t;
                t = q_84(t);
                w_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_16, w_16);
                t = genzip_4_0(z_4, a_5, b_5, c_5, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, y_4, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm t_74 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,w_0 = NULL,x_0 = NULL;
  t_17 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      r_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  q_17 = t;
  t = r_17;
  t = t_74(t);
  s_17 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_17);
  w_0 = t;
  t = SSLsetAnnotations(w_0, q_17);
  return(t);
}
ATerm RDefT_4_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,y_0 = NULL,z_0 = NULL;
  f_18 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      x_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
      z_17 = ATgetArgument(t, 2);
      a_18 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  w_17 = t;
  t = x_17;
  t = k_74(t);
  b_18 = t;
  t = y_17;
  t = l_74(t);
  c_18 = t;
  t = z_17;
  t = m_74(t);
  d_18 = t;
  t = a_18;
  t = n_74(t);
  e_18 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, b_18, c_18, d_18, e_18);
  y_0 = t;
  t = SSLsetAnnotations(y_0, w_17);
  return(t);
}
ATerm SDefT_4_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,a_1 = NULL,l_1 = NULL;
  r_18 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      l_18 = ATgetArgument(t, 2);
      m_18 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  i_18 = t;
  t = j_18;
  t = e_78(t);
  n_18 = t;
  t = k_18;
  t = f_78(t);
  o_18 = t;
  t = l_18;
  t = g_78(t);
  p_18 = t;
  t = m_18;
  t = h_78(t);
  q_18 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_18, o_18, p_18, q_18);
  a_1 = t;
  t = SSLsetAnnotations(a_1, i_18);
  return(t);
}
ATerm Scope_2_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,n_1 = NULL,o_1 = NULL;
  z_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  u_18 = t;
  t = v_18;
  t = w_75(t);
  x_18 = t;
  t = w_18;
  t = x_75(t);
  y_18 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, x_18, y_18);
  n_1 = t;
  t = SSLsetAnnotations(n_1, u_18);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm w_15 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(t_84, r_84, t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = w_15;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(t_84, t_84, t_84, r_84, t);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            {
              ATerm g_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(t_84, t_84, t_84, r_84, t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = g_16;
                  t = DynamicRules_1_0(r_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm f_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_19);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm j_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = j_16;
      {
        ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_19 = ATgetArgument(t, 0);
            t = h_19;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_19 = ATgetArgument(t, 0);
                i_19 = ATgetArgument(t, 1);
                j_19 = ATgetArgument(t, 2);
                k_19 = ATgetArgument(t, 3);
                t = j_19;
                t = map_1_0(h_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_19 = ATgetArgument(t, 0);
                    i_19 = ATgetArgument(t, 1);
                    j_19 = ATgetArgument(t, 2);
                    k_19 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_19;
                t = map_1_0(i_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_19 = NULL;
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm p_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_16);
      t = s_19;
    }
  else
    {
      t = n_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_19;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm b_20 = NULL;
  ATerm q_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_20 = ATgetArgument(t, 0);
          {
            ATerm t_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_16);
      t = b_20;
    }
  else
    {
      t = q_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_20;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(d_5, g_5, tboundin_3_0, t);
  return(t);
}
ATerm k_5 (ATerm e_94 (ATerm), ATerm m_39, ATerm l_39, ATerm t)
{
  t = m_39;
  {
    ATerm k_20 (ATerm t)
    {
      ATerm u_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_39;
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = u_16;
          {
            ATerm a_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
                f_20 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_20 = ATgetFirst((ATermList) t);
                    h_20 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_20;
                {
                  ATerm n_5 (ATerm t)
                  {
                    t = l_39;
                    return(t);
                  }
                  t = l_5(e_94, n_5, g_20, h_20, t);
                  t = k_20(t);
                }
                ;
                LocalPopChoice(f_17);
              }
            else
              {
                t = a_17;
                t = Cons_2_0(_id, k_20, t);
              }
          }
        }
      return(t);
    }
    t = k_20(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm g_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_96(t);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = g_17;
      {
        ATerm n_20 = NULL,o_20 = NULL,r_20 = NULL,s_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_20 = ATgetFirst((ATermList) t);
            o_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_20;
        t = w_96(t);
        r_20 = t;
        t = o_20;
        t = foldr_3_0(u_96, v_96, w_96, t);
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        t = v_96(t);
      }
    }
  return(t);
}
ATerm l_5 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm q_39, ATerm p_39, ATerm t)
{
  t = i_94(t);
  {
    ATerm p_5 (ATerm t)
    {
      ATerm v_20 = NULL;
      v_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_39, v_20);
      t = h_94(t);
      return(t);
    }
    t = fetch_1_0(p_5, t);
    t = p_39;
  }
  return(t);
}
ATerm m_5 (ATerm z_93 (ATerm), ATerm k_39, ATerm j_39, ATerm t)
{
  t = k_39;
  {
    ATerm c_21 (ATerm t)
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
                x_20 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_20 = ATgetFirst((ATermList) t);
                    z_20 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_20;
                {
                  ATerm r_5 (ATerm t)
                  {
                    t = j_39;
                    return(t);
                  }
                  t = l_5(z_93, r_5, y_20, z_20, t);
                  t = c_21(t);
                }
                ;
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = Cons_2_0(_id, c_21, t);
              }
          }
        }
      return(t);
    }
    t = c_21(t);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm k_21 (ATerm t)
  {
    ATerm p_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_21, t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = p_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_92(t);
      }
    return(t);
  }
  t = k_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = v_17;
      {
        ATerm f_21 = NULL,g_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_21 = ATgetFirst((ATermList) t);
            g_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_21;
        {
          ATerm s_5 (ATerm t)
          {
            t = g_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_5, t);
        }
      }
    }
  return(t);
}
ATerm z_21 (ATerm p_21, ATerm t)
{
  ATerm r_21 = NULL;
  t = SSL_explode_term(p_21);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_21;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_21 = NULL,v_21 = NULL,w_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              t = v_21;
              return(t);
            }
            t = s_21;
            t = at_end_1_0(v_5, t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = z_21(w_21, t);
          }
      }
    }
  else
    {
      t = z_21(w_21, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm a_22 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_90(t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = d_90(t);
        t = _2_0(f_90, a_22, t);
        t = e_90(t);
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
        _fail(t);
      {
        ATerm d_19 = ATgetArgument(t, 1);
        if(((ATgetType(d_19) != AT_LIST) || !(ATisEmpty(d_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
        {
          k_22 = ATgetFirst((ATermList) e_19);
          l_22 = (ATerm) ATgetNext((ATermList) e_19);
        }
      else
        _fail(t);
      {
        ATerm g_19 = ATgetArgument(t, 1);
        if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
          {
            m_22 = ATgetFirst((ATermList) g_19);
            n_22 = (ATerm) ATgetNext((ATermList) g_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_22, m_22), (ATerm) ATmakeAppl(sym__2, l_22, n_22));
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_22), o_22);
  return(t);
}
ATerm o_5 (ATerm y_535, ATerm d_536, ATerm g_63, ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,i_22 = NULL,j_22 = NULL;
  t = SSL_explode_term(d_536);
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_535);
  if(match_cons(t, sym__2))
    {
      if((c_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_22, d_22);
  t = genzip_4_0(w_5, x_5, y_5, _id, t);
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_22, g_63);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm s_22 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_103(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = d_103(t);
        t = s_22(t);
      }
    return(t);
  }
  t = s_22(t);
  return(t);
}
ATerm for_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  t = f_103(t);
  t = while_not_2_0(g_103, h_103, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_22);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = _2_0(_id, n_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, o_6, t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm u_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
        if(match_cons(t, sym__2))
          {
            u_23 = ATgetArgument(t, 0);
            y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_23;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_23 = ATgetFirst((ATermList) t);
            a_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_23), z_23), a_24);
      }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm z_22 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  z_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_23 = ATgetFirst((ATermList) t);
      f_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_23;
  if(match_cons(t, sym__2))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_23;
        if((d_23 != t))
          {
            _fail(t);
          }
        t = f_23;
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = z_22;
        t = o_5(d_23, e_23, f_23, t);
      }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      r_24 = ATgetArgument(t, 0);
      if((r_24 != ATgetArgument(t, 1)))
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
  ATerm r_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_6, k_6, m_6, t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = r_19;
      {
        ATerm l_24 = NULL,m_24 = NULL,o_24 = NULL;
        l_24 = t;
        if(match_cons(t, sym__2))
          {
            m_24 = ATgetArgument(t, 0);
            o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_24;
        t = m_5(p_6, m_24, o_24, t);
      }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(v_6, d_2, e_2, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      if((f_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(y_6, o_2, p_2, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      if((q_2 != ATgetArgument(t, 1)))
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
  ATerm n_25 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_100(t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_24 = NULL,y_24 = NULL,y_1 = NULL,z_1 = NULL;
              w_24 = t;
              t = x_100(t);
              y_24 = t;
              t = w_24;
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm a_25 = NULL;
                  t = n_25(t);
                  a_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_25, y_24);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_100(q_6, n_25, r_6, t);
                y_1 = t;
                t = SSL_explode_term(y_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_19 = ATgetArgument(t, 0);
                    z_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_1;
                t = foldr_3_0(s_6, t_6, _id, t);
              }
              ;
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              {
                ATerm h_2 = NULL,i_2 = NULL;
                h_2 = t;
                t = SSL_explode_term(h_2);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_19 = ATgetArgument(t, 0);
                    i_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_2;
                t = foldr_3_0(w_6, x_6, n_25, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm e_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_26);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm a_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = a_20;
      {
        ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_26 = ATgetArgument(t, 0);
            t = k_26;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_26 = ATgetArgument(t, 0);
                l_26 = ATgetArgument(t, 1);
                m_26 = ATgetArgument(t, 2);
                n_26 = ATgetArgument(t, 3);
                t = m_26;
                t = map_1_0(b_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_26 = ATgetArgument(t, 0);
                    l_26 = ATgetArgument(t, 1);
                    m_26 = ATgetArgument(t, 2);
                    n_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_26;
                t = map_1_0(c_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm b_27 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_27 = ATgetArgument(t, 0);
          {
            ATerm i_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_20);
      t = b_27;
    }
  else
    {
      t = d_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_27;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm m_27 = NULL;
  ATerm j_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_27 = ATgetArgument(t, 0);
          {
            ATerm m_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_20);
      t = m_27;
    }
  else
    {
      t = j_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_27;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_26 = ATgetArgument(t, 0);
      t = a_26;
      if(match_cons(t, sym_Rule_3))
        {
          t_25 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
          {
            ATerm q_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_25;
      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_26 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_26;
    }
  return(t);
}
ATerm Var_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,p_1 = NULL,r_1 = NULL;
  t_27 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  q_27 = t;
  t = r_27;
  t = c_72(t);
  s_27 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_27);
  p_1 = t;
  t = SSLsetAnnotations(p_1, q_27);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm u_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = u_20;
      {
        ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            e_28 = ATgetArgument(t, 0);
            f_28 = ATgetArgument(t, 1);
            g_28 = ATgetArgument(t, 2);
            h_28 = ATgetArgument(t, 3);
            t = g_28;
            t = map_1_0(e_7, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                e_28 = ATgetArgument(t, 0);
                f_28 = ATgetArgument(t, 1);
                g_28 = ATgetArgument(t, 2);
                h_28 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = g_28;
            t = map_1_0(f_7, t);
          }
      }
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm o_28 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_28 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_21);
      t = o_28;
    }
  else
    {
      t = a_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_28;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm b_29 = NULL;
  ATerm e_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_29 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = b_29;
    }
  else
    {
      t = e_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_29;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  g_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
      t = g_29;
      t = f_5(h_29, i_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_29 = ATgetArgument(t, 0);
          i_29 = ATgetArgument(t, 1);
          j_29 = ATgetArgument(t, 2);
          t = i_29;
          t = map_1_0(o_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              h_29 = ATgetArgument(t, 0);
              i_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, h_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_29 = ATgetArgument(t, 0);
                  i_29 = ATgetArgument(t, 1);
                  j_29 = ATgetArgument(t, 2);
                  k_29 = ATgetArgument(t, 3);
                  t = i_29;
                  t = map_1_0(p_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_29 = ATgetArgument(t, 0);
                      i_29 = ATgetArgument(t, 1);
                      j_29 = ATgetArgument(t, 2);
                      k_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_29;
                  t = map_1_0(r_7, t);
                }
            }
        }
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm u_29 = NULL;
  ATerm j_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_29 = ATgetArgument(t, 0);
          {
            ATerm m_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_21);
      t = u_29;
    }
  else
    {
      t = j_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_29;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_30 = ATgetArgument(t, 0);
          {
            ATerm q_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_21);
      t = j_30;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_30;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm s_30 = NULL;
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm x_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_21);
      t = s_30;
    }
  else
    {
      t = t_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_30;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, d_7, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, n_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm _2_0 (ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL,e_31 = NULL,s_1 = NULL,t_1 = NULL;
  e_31 = t;
  if(match_cons(t, sym__2))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_31);
  v_30 = t;
  t = w_30;
  t = g_66(t);
  z_30 = t;
  t = x_30;
  t = h_66(t);
  a_31 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_30, a_31);
  s_1 = t;
  t = SSLsetAnnotations(s_1, v_30);
  return(t);
}
ATerm a_6 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm h_31 = NULL;
  t = SSL_fputc(m_54, n_54);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_31);
  return(t);
}
ATerm b_6 (ATerm x_58, ATerm y_58, ATerm t)
{
  ATerm i_31 = NULL;
  t = SSL_write_term_to_stream_text(x_58, y_58);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_31);
  return(t);
}
ATerm d_6 (ATerm w_106 (ATerm), ATerm f_485, ATerm b_59, ATerm t)
{
  ATerm j_31 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_485, term_y_21);
  t = open_stream_0_0(t);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_31, b_59);
  t = w_106(t);
  t = fclose_0_0(t);
  t = b_59;
  return(t);
}
ATerm c_6 (ATerm t_58, ATerm u_58, ATerm t)
{
  ATerm k_31 = NULL;
  t = SSL_write_term_to_stream_baf(t_58, u_58);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_31);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = fetch_1_0(z_7, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(a_8, o_31, p_31, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if(match_cons(b_22, sym_Stream_1))
        {
          q_31 = ATgetArgument(b_22, 0);
        }
      else
        _fail(t);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(q_31, r_31, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      s_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(c_8, s_31, t_31, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(match_cons(e_22, sym_Stream_1))
        {
          v_31 = ATgetArgument(e_22, 0);
        }
      else
        _fail(t);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(v_31, w_31, t);
  u_31 = t;
  t = term_f_22;
  x_31 = t;
  t = u_31;
  if(match_cons(t, sym_Stream_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, u_31);
  t = a_6(x_31, y_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL;
  l_31 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((m_31 != NULL) && (m_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_7, t);
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          t = term_q_22;
          if(((m_31 != NULL) && (m_31 != t)))
            _fail(t);
          else
            m_31 = t;
        }
      return(t);
    }
    t = _2_0(u_7, _id, t);
    t = l_31;
    {
      ATerm w_7 (ATerm t)
      {
        ATerm n_31 = NULL;
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), n_31);
        return(t);
      }
      t = _2_0(_id, w_7, t);
      {
        ATerm r_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_7, y_7, t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = r_22;
            t = _2_0(_id, b_8, t);
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
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  z_31 = t;
  t = dtime_0_0(t);
  t = z_31;
  t = j_103(t);
  a_32 = t;
  t = dtime_0_0(t);
  b_32 = t;
  t = a_32;
  if(match_cons(t, sym__2))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_32), (ATerm) ATmakeAppl(sym_Runtime_1, b_32)), d_32);
  return(t);
}
ATerm r_32 (ATerm l_32, ATerm t)
{
  t = SSL_fclose(l_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_32 = ATgetArgument(t, 0);
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_32);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            t = r_32(p_32, t);
          }
      }
    }
  else
    {
      t = r_32(p_32, t);
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
  ATerm s_32 = NULL;
  t = SSL_fopen(o_54, p_54);
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_stdin_stream();
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_32 = NULL;
  t = SSL_stdout_stream();
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  t = SSL_stderr_stream();
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_32);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm i_33 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_33;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_is_string(l_33);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      ATerm x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL,b_3 = NULL;
        f_33 = t;
        t = SSL_explode_term(f_33);
        if(match_cons(t, sym__2))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_23 = ATgetArgument(t, 1);
              if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
                {
                  b_3 = ATgetFirst((ATermList) h_23);
                  {
                    ATerm i_23 = (ATerm) ATgetNext((ATermList) h_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm j_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_33 = NULL,h_33 = NULL;
              t = _2_0(d_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_33 = ATgetArgument(t, 0);
                  h_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_6(g_33, h_33, t);
              ;
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              {
                ATerm j_33 = NULL,k_33 = NULL;
                t = _2_0(e_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_33 = ATgetArgument(t, 0);
                    k_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_6(j_33, k_33, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL;
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_33, term_o_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = debug_1_0(f_8, t);
      _fail(t);
    }
  p_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(r_33, t);
  q_33 = t;
  t = p_33;
  t = fclose_0_0(t);
  t = q_33;
  return(t);
}
ATerm fetch_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm u_33 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_92, _id, t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = Cons_2_0(_id, u_33, t);
      }
    return(t);
  }
  t = u_33(t);
  return(t);
}
ATerm z_5 (ATerm c_53, ATerm d_53, ATerm t)
{
  t = SSL_strcat(c_53, d_53);
  return(t);
}
ATerm debug_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  v_33 = t;
  t = u_106(t);
  x_33 = t;
  t = term_n_11;
  y_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_33), x_33);
  z_33 = t;
  t = SSL_printnl(y_33, z_33);
  t = v_33;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL;
      k_34 = t;
      t = SSL_is_string(k_34);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm x_23 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_8, t);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = x_23;
            {
              ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
              o_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_34 = ATgetArgument(t, 0);
                  t = p_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_34 = ATgetArgument(t, 0);
                      t = p_34;
                      {
                        ATerm c_24 = t;
                        int d_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_24);
                          }
                        else
                          {
                            t = c_24;
                            t = debug_1_0(o_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_34 = NULL,v_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_34 = ATgetArgument(t, 0);
                          q_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_34;
                      t = eval_config_0_0(t);
                      u_34 = t;
                      t = q_34;
                      t = eval_config_0_0(t);
                      v_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
                      t = z_5(u_34, v_34, t);
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
  ATerm y_34 = NULL,z_34 = NULL;
  y_34 = t;
  t = term_e_24;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_24, y_34);
  t = i_6(z_34, y_34, t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL,b_35 = NULL;
        t = eval_config_0_0(t);
        a_35 = t;
        t = term_e_24;
        b_35 = t;
        t = SSL_table_put(b_35, y_34, a_35);
        t = a_35;
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
ATerm if_verbose2_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_35 = NULL,e_35 = NULL;
      c_35 = t;
      t = term_j_24;
      t = get_config_0_0(t);
      e_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_35, term_k_24);
      t = geq_0_0(t);
      t = c_35;
      t = e_113(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  if(match_string(t, "-k"))
    {
      t = g_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_35;
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  t = SSL_string_to_int(h_35);
  i_35 = t;
  t = term_n_24;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, i_35);
  t = l_6(j_35, i_35, t);
  t = h_35;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_8, q_8, u_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  if(match_string(t, "-S"))
    {
      t = l_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_35;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  t = term_j_24;
  m_35 = t;
  t = term_q_24;
  n_35 = t;
  t = term_s_24;
  t = l_6(m_35, n_35, t);
  t = term_t_24;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  t = SSL_string_to_int(o_35);
  p_35 = t;
  t = term_j_24;
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, p_35);
  t = l_6(q_35, p_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_35);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  t = term_x_24;
  r_35 = t;
  t = term_l_11;
  s_35 = t;
  t = term_z_24;
  t = l_6(r_35, s_35, t);
  t = term_b_25;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_8, x_8, y_8, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_9, c_9, d_9, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = Option_3_0(e_9, f_9, g_9, t);
          }
      }
    }
  return(t);
}
ATerm l_6 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm t_35 = NULL;
  t = term_e_24;
  t_35 = t;
  t = SSL_table_put(t_35, j_63, k_63);
  t = (ATerm) ATmakeAppl(sym__3, term_e_24, j_63, k_63);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
      t = term_l_11;
      t = d_0(t);
      c_36 = t;
      t = term_h_25;
      d_36 = t;
      t = term_i_25;
      e_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, c_36);
      t = j_6(d_36, e_36, c_36, t);
      _fail(t);
    }
  else
    {
      ATerm h_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_36 = ATgetFirst((ATermList) t);
          b_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      t = a_0(t);
      t = term_l_11;
      t = b_0(t);
      h_36 = t;
      t = (ATerm) ATinsert(CheckATermList(b_36), h_36);
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  if(match_string(t, "-o"))
    {
      t = j_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_36;
    }
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm k_36 = NULL,r_36 = NULL;
  k_36 = t;
  t = term_j_25;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, k_36);
  t = l_6(r_36, k_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_36);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_9, i_9, l_9, t);
  return(t);
}
ATerm j_6 (ATerm v_44, ATerm w_44, ATerm u_44, ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            ATerm p_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
        t = i_6(v_44, w_44, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = (ATerm) ATempty;
      }
    u_36 = t;
    t = (ATerm) ATinsert(CheckATermList(u_36), u_44);
    v_36 = t;
    t = SSL_table_put(v_44, w_44, v_36);
    t = t_36;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
      t = term_l_11;
      t = j_0(t);
      s_37 = t;
      t = term_h_25;
      t_37 = t;
      t = term_i_25;
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, s_37);
      t = j_6(t_37, u_37, s_37, t);
      _fail(t);
    }
  else
    {
      ATerm e_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_37 = ATgetFirst((ATermList) t);
          p_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_37 = ATgetFirst((ATermList) t);
          r_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_37;
      t = h_0(t);
      t = q_37;
      t = i_0(t);
      e_38 = t;
      t = (ATerm) ATinsert(CheckATermList(r_37), e_38);
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  if(match_string(t, "-i"))
    {
      t = g_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_38;
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  t = term_q_25;
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, l_38);
  t = l_6(m_38, l_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_38);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_9, r_9, s_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_11;
  t = whoami_0_0(t);
  n_38 = t;
  t = term_n_11;
  o_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_25), n_38);
  p_38 = t;
  t = SSL_printnl(o_38, p_38);
  t = term_q_11;
  q_38 = t;
  t = SSL_exit(q_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_6 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_42, a_43);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      t = SSL_addr(z_42, a_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_96(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm t_38 = NULL,u_38 = NULL,d_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_38 = ATgetFirst((ATermList) t);
            u_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_38;
        t = foldr_2_0(s_96, t_96, t);
        d_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_38, d_39);
        t = t_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(t_4, u_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_39 = NULL,k_4 = NULL,m_4 = NULL;
  t = times_0_0(t);
  k_4 = t;
  t = SSL_explode_term(k_4);
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4;
  t = foldr_2_0(v_9, w_9, t);
  g_39 = t;
  t = SSL_TicksToSeconds(g_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_40;
        if((g_40 != t))
          {
            _fail(t);
          }
        t = f_40;
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATmakeAppl(sym__2, g_40, h_40);
        {
          ATerm d_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_40, h_40);
              ;
              LocalPopChoice(f_26);
            }
          else
            {
              t = d_26;
              t = SSL_gtr(g_40, h_40);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_40, h_40);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_40 = NULL,n_40 = NULL;
      k_40 = t;
      t = term_j_24;
      t = get_config_0_0(t);
      n_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_40, term_q_11);
      t = geq_0_0(t);
      t = k_40;
      t = d_113(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  t = run_time_0_0(t);
  p_40 = t;
  t = term_l_11;
  t = whoami_0_0(t);
  q_40 = t;
  t = term_n_11;
  r_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), p_40), term_i_26), q_40);
  s_40 = t;
  t = SSL_printnl(r_40, s_40);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), p_40), term_i_26), q_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_24;
  u_40 = t;
  t = SSL_exit(u_40);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = fetch_1_0(y_9, t);
    }
  t = h_104(t);
  return(t);
}
ATerm map_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm z_40 (ATerm t)
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = Cons_2_0(r_91, z_40, t);
      }
    return(t);
  }
  t = z_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_41 = ATgetFirst((ATermList) t);
      d_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_41 = NULL,l_41 = NULL;
        t = d_41;
        t = g_0(t);
        j_41 = t;
        t = c_41;
        t = f_0(t);
        l_41 = t;
        t = d_41;
        {
          ATerm z_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_41), l_41);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_11;
      t = g_0(t);
    }
  return(t);
}
ATerm i_6 (ATerm m_46, ATerm n_46, ATerm t)
{
  t = SSL_table_get(m_46, n_46);
  return(t);
}
ATerm Program_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,a_2 = NULL,b_2 = NULL;
  p_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_41);
  m_41 = t;
  t = n_41;
  t = e_83(t);
  o_41 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_41);
  a_2 = t;
  t = SSLsetAnnotations(a_2, m_41);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_41), term_x_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = fetch_1_0(a_10, t);
    }
  t = term_a_27;
  t = echo_0_0(t);
  t = term_h_25;
  s_41 = t;
  t = term_i_25;
  t_41 = t;
  t = term_c_27;
  t = i_6(s_41, t_41, t);
  t = reverse_acc_2_0(_id, b_10, t);
  t = map_1_0(c_10, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,c_2 = NULL,g_2 = NULL;
  y_41 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_41);
  v_41 = t;
  t = w_41;
  t = f_83(t);
  x_41 = t;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_41);
  c_2 = t;
  t = SSLsetAnnotations(c_2, v_41);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_27 = ATgetFirst((ATermList) t);
                ATerm g_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_42;
          }
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = (ATerm) ATinsert(ATempty, d_42);
      }
    e_42 = t;
    t = term_q_22;
    f_42 = t;
    t = SSL_printnl(f_42, e_42);
    t = d_42;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm n_42 = NULL,q_42 = NULL;
  t = term_h_27;
  n_42 = t;
  t = term_l_11;
  q_42 = t;
  t = term_i_27;
  t = l_6(n_42, q_42, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm s_42 = NULL,u_42 = NULL,y_42 = NULL,b_43 = NULL;
  t = term_h_27;
  s_42 = t;
  t = term_l_11;
  u_42 = t;
  t = term_i_27;
  t = l_6(s_42, u_42, t);
  t = term_k_27;
  y_42 = t;
  t = term_l_11;
  b_43 = t;
  t = term_l_27;
  t = l_6(y_42, b_43, t);
  t = term_n_27;
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_10, f_10, g_10, t);
      ;
      LocalPopChoice(u_27);
    }
  else
    {
      t = p_27;
      t = Option_3_0(h_10, i_10, j_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,j_2 = NULL,k_2 = NULL;
  k_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_43 = ATgetFirst((ATermList) t);
      g_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  e_43 = t;
  t = f_43;
  t = v_70(t);
  i_43 = t;
  t = g_43;
  t = w_70(t);
  j_43 = t;
  k_2 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), i_43);
  j_2 = t;
  t = SSLsetAnnotations(j_2, e_43);
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  w_43 = t;
  t = term_u_25;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, w_43);
  t = l_6(x_43, w_43, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_27;
        t = d_109(t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
      }
    t = v_43;
    {
      ATerm l_10 (ATerm t)
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_28 = t;
            int b_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
                t = d_109(t);
                t = Cons_2_0(_id, l_10, t);
              }
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm z_43 = NULL,a_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_43 = ATgetFirst((ATermList) t);
                  a_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_44), (ATerm) ATmakeAppl(sym_Undefined_1, z_43));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_10, l_10, t);
    }
  }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  if(match_string(t, "--help"))
    {
      t = d_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_45;
        }
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  t = term_u_26;
  e_45 = t;
  t = term_l_11;
  f_45 = t;
  t = term_c_28;
  t = l_6(e_45, f_45, t);
  t = term_d_28;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm q_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,s_44 = NULL,y_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  p_44 = t;
  t = term_h_25;
  y_44 = t;
  t = term_i_25;
  a_45 = t;
  t = (ATerm) ATempty;
  b_45 = t;
  t = SSL_table_put(y_44, a_45, b_45);
  t = p_44;
  {
    ATerm m_10 (ATerm t)
    {
      ATerm j_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_109(t);
          ;
          LocalPopChoice(k_28);
        }
      else
        {
          t = j_28;
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_10, o_10, p_10, t);
                ;
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_10, t);
    {
      ATerm n_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_45 = NULL;
          s_45 = t;
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_5 = NULL;
                t = s_45;
                {
                  ATerm s_28 = t;
                  int t_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_28);
                    }
                  else
                    {
                      t = s_28;
                      t = fetch_1_0(q_10, t);
                    }
                  t = s_45;
                  t = default_system_usage_0_0(t);
                  t = term_q_24;
                  j_5 = t;
                  t = SSL_exit(j_5);
                }
                ;
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                {
                  ATerm u_5 = NULL;
                  t = term_h_27;
                  t = get_config_0_0(t);
                  t = s_45;
                  t = default_system_about_0_0(t);
                  t = term_q_24;
                  u_5 = t;
                  t = SSL_exit(u_5);
                }
              }
          }
          ;
          LocalPopChoice(p_28);
        }
      else
        {
          t = n_28;
          {
            ATerm u_28 = t;
            int v_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_45 = NULL,w_45 = NULL,x_45 = NULL;
                ATerm v_10 (ATerm t)
                {
                  ATerm w_10 (ATerm t)
                  {
                    if(((q_44 != NULL) && (q_44 != t)))
                      _fail(t);
                    else
                      q_44 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_10, t);
                  return(t);
                }
                t = fetch_1_0(v_10, t);
                t = term_n_11;
                t_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_44)), term_w_28);
                w_45 = t;
                t = SSL_printnl(t_45, w_45);
                t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_44)), term_w_28));
                t = default_system_usage_0_0(t);
                t = term_q_11;
                x_45 = t;
                t = SSL_exit(x_45);
                ;
                LocalPopChoice(v_28);
              }
            else
              {
                t = u_28;
              }
          }
        }
      s_44 = t;
      t = term_h_25;
      c_45 = t;
      t = SSL_table_destroy(c_45);
      t = s_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,d_46 = NULL,f_46 = NULL;
  t = parse_options_1_0(j_104, t);
  a_46 = t;
  t = term_x_28;
  b_46 = t;
  t = SSL_table_create(b_46);
  t = term_x_28;
  d_46 = t;
  t = term_y_28;
  f_46 = t;
  t = SSL_table_put(d_46, f_46, a_46);
  t = a_46;
  t = l_104(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_104, t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = if_verbose2_1_0(g_11, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  t = term_e_29;
  g_46 = t;
  t = term_l_11;
  h_46 = t;
  t = term_f_29;
  t = l_6(g_46, h_46, t);
  t = term_l_29;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  i_46 = t;
  t = term_u_25;
  t = get_config_0_0(t);
  j_46 = t;
  t = term_n_11;
  k_46 = t;
  t = (ATerm) ATinsert(ATempty, j_46);
  l_46 = t;
  t = SSL_printnl(k_46, l_46);
  t = i_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm t)
{
  ATerm x_10 (ATerm t)
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              {
                ATerm r_29 = t;
                int s_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_29);
                  }
                else
                  {
                    t = r_29;
                    {
                      ATerm t_29 = t;
                      int v_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_11, e_11, f_11, t);
                          ;
                          LocalPopChoice(v_29);
                        }
                      else
                        {
                          t = t_29;
                          {
                            ATerm w_29 = t;
                            int x_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_29);
                              }
                            else
                              {
                                t = w_29;
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
  ATerm b_11 (ATerm t)
  {
    ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
    q_46 = t;
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_46 != NULL) && (r_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_11, t);
          ;
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          t = term_a_30;
          r_46 = t;
        }
      t = not_null(r_46);
      t = ReadFromFile_0_0(t);
      s_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_46, s_46);
      t = apply_strategy_1_0(s_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_10, u_103, y_10, b_11, t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = _2_0(_id, strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_11, _fail, default_usage_0_0, t);
  return(t);
}
