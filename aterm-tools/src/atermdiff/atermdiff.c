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
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_z_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_b_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_c_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_q_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_t_18;
ATerm term_m_18;
ATerm term_b_18;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_x_14;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_h_12;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_h_10;
void init_constant_terms (void)
{
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_s_12);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_l_15);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_p_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_v_10);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_10);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_m_15);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_d_22);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_m_15);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_m_15);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_m_15);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_m_15);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm echo_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm try_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm x_4 (ATerm d_1, ATerm e_1, ATerm g_1, ATerm);
ATerm d_5 (ATerm l_1, ATerm m_1, ATerm n_1, ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm f_1 (ATerm);
ATerm k_1 (ATerm);
ATerm laydiff_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm d_10 (ATerm q_7, ATerm r_7, ATerm s_7, ATerm);
ATerm e_10 (ATerm e_8, ATerm);
ATerm u_4 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm g_149, ATerm l_149, ATerm);
ATerm LConstoCons_0_0 (ATerm);
ATerm s_15 (ATerm w_11, ATerm x_11, ATerm y_11, ATerm);
ATerm t_15 (ATerm q_12, ATerm r_12, ATerm y_12, ATerm);
ATerm u_15 (ATerm g_13, ATerm h_13, ATerm i_13, ATerm);
ATerm laydiff_squash_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm v_4 (ATerm u_125, ATerm z_125, ATerm);
ATerm genzip_4_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm);
ATerm q_20 (ATerm v_17, ATerm w_17, ATerm x_17, ATerm);
ATerm e_3 (ATerm);
ATerm j_3 (ATerm);
ATerm p_3 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm layeq_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm y_4 (ATerm f_25, ATerm g_25, ATerm);
ATerm z_4 (ATerm g_42, ATerm h_42, ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm ldiff_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm t_25 (ATerm t_24, ATerm w_24, ATerm);
ATerm u_25 (ATerm d_25, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_5 (ATerm c_46, ATerm);
ATerm b_5 (ATerm o_42, ATerm p_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_29 (ATerm q_27, ATerm);
ATerm p_29 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm);
ATerm q_29 (ATerm v_28, ATerm x_28, ATerm y_28, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm option_value_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm my_usage_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_5 (ATerm d_47, ATerm e_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm i_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm h_5 (ATerm p_52, ATerm q_52, ATerm o_52, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm ops_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_5 (ATerm y_61, ATerm z_61, ATerm);
ATerm foldr_2_0 (ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm q_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm t_35 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_8 (ATerm);
ATerm r_36 (ATerm h_36, ATerm i_36, ATerm);
ATerm need_help_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_5 (ATerm j_36, ATerm k_36, ATerm);
ATerm debug_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm k_39 (ATerm r_38, ATerm);
ATerm y_8 (ATerm);
ATerm l_39 (ATerm x_38, ATerm y_38, ATerm);
ATerm c_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_5 (ATerm g_54, ATerm h_54, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_99 (ATerm), ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm d_42 (ATerm o_41, ATerm);
ATerm e_42 (ATerm r_41, ATerm);
ATerm q_9 (ATerm);
ATerm parse_options_1_0 (ATerm y_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm);
ATerm s_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm g_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm echo_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,k_0 = NULL,l_0 = NULL,n_0 = NULL;
  c_0 = t;
  t = x_92(t);
  k_0 = t;
  t = term_h_10;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_0), k_0);
  n_0 = t;
  t = SSL_printnl(l_0, n_0);
  t = c_0;
  return(t);
}
ATerm oncetd_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_80(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = SRTS_one(o_0, t);
      }
    return(t);
  }
  t = o_0(t);
  return(t);
}
ATerm try_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_78(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
    }
  return(t);
}
ATerm x_4 (ATerm d_1, ATerm e_1, ATerm g_1, ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL;
  t = e_1;
  if((d_1 != t))
    {
      _fail(t);
    }
  t = (ATerm) ATmakeAppl(sym__2, d_1, d_1);
  j_1 = t;
  t = SSL_explode_term(j_1);
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
          {
            h_1 = ATgetFirst((ATermList) p_10);
            {
              ATerm r_10 = (ATerm) ATgetNext((ATermList) p_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_1;
  return(t);
}
ATerm d_5 (ATerm l_1, ATerm m_1, ATerm n_1, ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,g_2 = NULL,p_0 = NULL,u_0 = NULL;
  t = not_null(n_1);
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(l_1);
  if(((r_1 != NULL) && (r_1 != t)))
    _fail(t);
  else
    r_1 = t;
  t = not_null(m_1);
  if(((s_1 != NULL) && (s_1 != t)))
    _fail(t);
  else
    s_1 = t;
  t = SSLgetAnnotations(not_null(n_1));
  if(((q_1 != NULL) && (q_1 != t)))
    _fail(t);
  else
    q_1 = t;
  t = not_null(l_1);
  {
    ATerm i_5 (ATerm h_2, ATerm t)
    {
      ATerm i_2 = NULL,e_0 = NULL;
      t = SSLgetAnnotations(not_null(l_1));
      i_2 = t;
      t = (ATerm) ATmakeAppl(sym_L_1, h_2);
      e_0 = t;
      t = SSLsetAnnotations(e_0, i_2);
      return(t);
    }
    ATerm m_2 = NULL;
    if(match_cons(t, sym_NL_0))
      {
        t = not_null(l_1);
      }
    else
      {
        if(match_cons(t, sym_UL_0))
          {
            t = not_null(l_1);
          }
        else
          {
            if(match_cons(t, sym_L_1))
              {
                m_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_5(m_2, t);
          }
      }
    if(((t_1 != NULL) && (t_1 != t)))
      _fail(t);
    else
      t_1 = t;
    t = not_null(m_1);
    {
      ATerm k_5 (ATerm o_2, ATerm t)
      {
        ATerm p_2 = NULL,m_0 = NULL;
        t = SSLgetAnnotations(not_null(m_1));
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym_L_1, o_2);
        m_0 = t;
        t = SSLsetAnnotations(m_0, p_2);
        return(t);
      }
      ATerm t_2 = NULL;
      if(match_cons(t, sym_NL_0))
        {
          t = not_null(m_1);
        }
      else
        {
          if(match_cons(t, sym_UL_0))
            {
              t = not_null(m_1);
            }
          else
            {
              if(match_cons(t, sym_L_1))
                {
                  t_2 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_5(t_2, t);
            }
        }
      if(((u_1 != NULL) && (u_1 != t)))
        _fail(t);
      else
        u_1 = t;
      if(((u_0 != NULL) && (u_0 != t)))
        _fail(t);
      else
        u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_1), not_null(u_1));
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      t = SSLsetAnnotations(not_null(p_0), not_null(q_1));
      if(((v_1 != NULL) && (v_1 != t)))
        _fail(t);
      else
        v_1 = t;
      t = SSL_explode_term(not_null(v_1));
      if(match_cons(t, sym__2))
        {
          ATerm s_10 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_10) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm t_10 = ATgetArgument(t, 1);
            if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
              {
                if(((p_1 != NULL) && (p_1 != ATgetFirst((ATermList) t_10))))
                  _fail(ATgetFirst((ATermList) t_10));
                else
                  p_1 = ATgetFirst((ATermList) t_10);
                {
                  ATerm u_10 = (ATerm) ATgetNext((ATermList) t_10);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(p_1);
    }
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm f_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(f_3, i_3, t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(k_3, l_3, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if(((ATgetType(y_10) != AT_LIST) || !(ATisEmpty(y_10))))
        _fail(t);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(((ATgetType(z_10) != AT_LIST) || !(ATisEmpty(z_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
        {
          m_3 = ATgetFirst((ATermList) a_11);
          n_3 = (ATerm) ATgetNext((ATermList) a_11);
        }
      else
        _fail(t);
      {
        ATerm b_11 = ATgetArgument(t, 1);
        if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
          {
            o_3 = ATgetFirst((ATermList) b_11);
            q_3 = (ATerm) ATgetNext((ATermList) b_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_3, o_3), (ATerm) ATmakeAppl(sym__2, n_3, q_3));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_3), r_3);
  return(t);
}
ATerm laydiff_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm c_1 = NULL;
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 (ATerm u_2, ATerm v_2, ATerm w_2, ATerm t)
        {
          ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
          t = SSL_explode_term(v_2);
          if(match_cons(t, sym__2))
            {
              z_2 = ATgetArgument(t, 0);
              a_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(u_2);
          if(match_cons(t, sym__2))
            {
              if((z_2 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              y_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_2;
          t = foldr_3_0(q_0, r_0, s_0, t);
          b_3 = t;
          t = a_3;
          t = foldr_3_0(t_0, z_0, a_1, t);
          if((b_3 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_2, a_3);
          t = genzip_4_0(b_1, f_1, k_1, w_4, t);
          if(((c_1 != NULL) && (c_1 != t)))
            _fail(t);
          else
            c_1 = t;
          t = SSL_mkterm(z_2, not_null(c_1));
          return(t);
        }
        ATerm t_3 = NULL,v_3 = NULL,w_3 = NULL;
        t_3 = t;
        if(match_cons(t, sym__2))
          {
            v_3 = ATgetArgument(t, 0);
            w_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_4(v_3, w_3, t_3, t);
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              {
                ATerm g_11 = t;
                int h_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_5(v_3, w_3, t_3, t);
                    ;
                    LocalPopChoice(h_11);
                  }
                else
                  {
                    t = g_11;
                    t = e_5(v_3, w_3, t_3, t);
                  }
              }
            }
        }
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_3 = NULL,z_3 = NULL;
              t = c_76(t);
              if(match_cons(t, sym__2))
                {
                  ATerm k_11 = ATgetArgument(t, 0);
                  if(match_cons(k_11, sym_Label_2))
                    {
                      ATerm l_11 = ATgetArgument(k_11, 0);
                      y_3 = ATgetArgument(k_11, 1);
                    }
                  else
                    _fail(t);
                  z_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, y_3, z_3);
              t = w_4(t);
              ;
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              {
                ATerm m_11 = t;
                int n_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_4 = NULL,b_4 = NULL;
                    t = c_76(t);
                    if(match_cons(t, sym__2))
                      {
                        a_4 = ATgetArgument(t, 0);
                        {
                          ATerm o_11 = ATgetArgument(t, 1);
                          if(match_cons(o_11, sym_Label_2))
                            {
                              ATerm p_11 = ATgetArgument(o_11, 0);
                              b_4 = ATgetArgument(o_11, 1);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, a_4, b_4);
                    t = w_4(t);
                    ;
                    LocalPopChoice(n_11);
                  }
                else
                  {
                    t = m_11;
                    {
                      ATerm c_4 = NULL,e_4 = NULL,f_4 = NULL;
                      c_4 = t;
                      if(match_cons(t, sym__2))
                        {
                          e_4 = ATgetArgument(t, 0);
                          f_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_11 = t;
                        int r_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_4;
                            t = b_76(t);
                            t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, e_4), (ATerm) ATmakeAppl(sym_amb2_1, f_4));
                            ;
                            LocalPopChoice(r_11);
                          }
                        else
                          {
                            t = q_11;
                            t = (ATerm) ATmakeAppl(sym_amb_2, e_4, f_4);
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
  t = w_4(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(p_6, q_6, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm r_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(r_6, w_6, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if(((ATgetType(s_11) != AT_LIST) || !(ATisEmpty(s_11))))
        _fail(t);
      {
        ATerm t_11 = ATgetArgument(t, 1);
        if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
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
  ATerm x_6 = NULL,z_6 = NULL,d_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
        {
          x_6 = ATgetFirst((ATermList) u_11);
          z_6 = (ATerm) ATgetNext((ATermList) u_11);
        }
      else
        _fail(t);
      {
        ATerm v_11 = ATgetArgument(t, 1);
        if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
          {
            d_7 = ATgetFirst((ATermList) v_11);
            f_7 = (ATerm) ATgetNext((ATermList) v_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_6, d_7), (ATerm) ATmakeAppl(sym__2, z_6, f_7));
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_7), g_7);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,u_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_10(o_8, p_8, u_8, t);
          ;
          LocalPopChoice(b_12);
        }
      else
        {
          t = a_12;
          {
            ATerm c_12 = t;
            int d_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_10(p_8, t);
                ;
                LocalPopChoice(d_12);
              }
            else
              {
                t = c_12;
                t = (ATerm) ATinsert(CheckATermList(u_8), p_8);
              }
          }
        }
    }
  else
    {
      ATerm e_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_10(o_8, p_8, u_8, t);
          ;
          LocalPopChoice(g_12);
        }
      else
        {
          t = e_12;
          t = (ATerm) ATinsert(CheckATermList(u_8), p_8);
        }
    }
  return(t);
}
ATerm d_10 (ATerm q_7, ATerm r_7, ATerm s_7, ATerm t)
{
  ATerm t_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,w_0 = NULL,v_0 = NULL;
  t = SSLgetAnnotations(q_7);
  t_7 = t;
  t = r_7;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  t = s_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_7 = ATgetFirst((ATermList) t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_7);
  y_7 = t;
  t = z_7;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_8), z_7);
  v_0 = t;
  t = SSLsetAnnotations(v_0, y_7);
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, c_8);
  w_0 = t;
  t = SSLsetAnnotations(w_0, t_7);
  t = (ATerm) ATinsert(CheckATermList(b_8), term_h_12);
  return(t);
}
ATerm e_10 (ATerm e_8, ATerm t)
{
  t = e_8;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_12 = ATgetFirst((ATermList) t);
          ATerm k_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_8;
    }
  t = e_8;
  return(t);
}
ATerm u_4 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm g_149, ATerm l_149, ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,j_6 = NULL;
  t = SSL_explode_term(l_149);
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_149);
  if(match_cons(t, sym__2))
    {
      if((f_6 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  t = foldr_3_0(y_1, z_1, a_2, t);
  j_6 = t;
  t = e_6;
  t = foldr_3_0(d_2, j_2, l_2, t);
  if((j_6 != t))
    {
      _fail(t);
    }
  t = (ATerm) ATmakeAppl(sym__2, d_6, e_6);
  t = genzip_4_0(n_2, q_2, r_2, k_76, t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_12;
        if((f_6 != t))
          {
            _fail(t);
          }
        t = term_t_12;
        _fail(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = foldr_2_0(_id, s_2, t);
      }
    g_6 = t;
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL,x_0 = NULL;
          t = term_s_12;
          if((f_6 != t))
            {
              _fail(t);
            }
          t = g_6;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_9 = ATgetFirst((ATermList) t);
              b_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_6);
          z_8 = t;
          t = b_9;
          {
            ATerm w_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 = NULL;
                ATerm b_13 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_9 = NULL;
                    g_9 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = g_9;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_13 = ATgetFirst((ATermList) t);
                            ATerm d_13 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = g_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_13;
                  }
                f_9 = t;
                t = (ATerm) ATinsert(ATempty, f_9);
                ;
                LocalPopChoice(x_12);
              }
            else
              {
                t = w_12;
              }
            e_9 = t;
            t = (ATerm) ATinsert(CheckATermList(e_9), a_9);
            x_0 = t;
            t = SSLsetAnnotations(x_0, z_8);
          }
          ;
          LocalPopChoice(v_12);
        }
      else
        {
          t = u_12;
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_10 (ATerm t_9, ATerm u_9, ATerm t)
                {
                  ATerm v_9 = NULL,y_0 = NULL;
                  t = SSLgetAnnotations(not_null(g_6));
                  v_9 = t;
                  t = t_9;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                    _fail(t);
                  t = u_9;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(u_9), t_9);
                  y_0 = t;
                  t = SSLsetAnnotations(y_0, v_9);
                  t = term_h_12;
                  return(t);
                }
                ATerm z_9 = NULL,c_10 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_9 = ATgetFirst((ATermList) t);
                    c_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_10(z_9, c_10, t);
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                t = SSL_mkterm(f_6, g_6);
              }
          }
        }
    }
  }
  return(t);
}
ATerm LConstoCons_0_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,q_10 = NULL;
  n_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_10;
    }
  else
    {
      ATerm w_10 = NULL;
      if(match_cons(t, sym_LCons_3))
        {
          o_10 = ATgetArgument(t, 0);
          {
            ATerm m_13 = ATgetArgument(t, 1);
          }
          q_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_10;
      t = LConstoCons_0_0(t);
      w_10 = t;
      t = (ATerm) ATinsert(CheckATermList(w_10), o_10);
    }
  return(t);
}
ATerm s_15 (ATerm w_11, ATerm x_11, ATerm y_11, ATerm t)
{
  ATerm z_11 = NULL,f_12 = NULL,j_12 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(y_11);
  z_11 = t;
  t = w_11;
  t = LConstoCons_0_0(t);
  f_12 = t;
  t = x_11;
  t = LConstoCons_0_0(t);
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, j_12);
  i_1 = t;
  t = SSLsetAnnotations(i_1, z_11);
  return(t);
}
ATerm t_15 (ATerm q_12, ATerm r_12, ATerm y_12, ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  t = r_12;
  if((q_12 != t))
    {
      _fail(t);
    }
  t = (ATerm) ATmakeAppl(sym__2, q_12, q_12);
  a_13 = t;
  t = SSL_explode_term(a_13);
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_13 = ATgetArgument(t, 1);
        if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
          {
            z_12 = ATgetFirst((ATermList) p_13);
            {
              ATerm s_13 = (ATerm) ATgetNext((ATermList) p_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_12;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_13;
          }
        t = term_h_12;
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
      }
  }
  return(t);
}
ATerm u_15 (ATerm g_13, ATerm h_13, ATerm i_13, ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL,x_1 = NULL,b_2 = NULL;
  t = not_null(i_13);
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = not_null(g_13);
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = not_null(h_13);
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = SSLgetAnnotations(not_null(i_13));
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  t = not_null(g_13);
  {
    ATerm w_15 (ATerm y_13, ATerm t)
    {
      ATerm e_14 = NULL,o_1 = NULL;
      t = SSLgetAnnotations(not_null(g_13));
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym_L_1, y_13);
      o_1 = t;
      t = SSLsetAnnotations(o_1, e_14);
      return(t);
    }
    ATerm h_14 = NULL;
    if(match_cons(t, sym_NL_0))
      {
        t = not_null(g_13);
      }
    else
      {
        if(match_cons(t, sym_UL_0))
          {
            t = not_null(g_13);
          }
        else
          {
            if(match_cons(t, sym_L_1))
              {
                h_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_15(h_14, t);
          }
      }
    if(((o_13 != NULL) && (o_13 != t)))
      _fail(t);
    else
      o_13 = t;
    t = not_null(h_13);
    {
      ATerm x_15 (ATerm i_14, ATerm t)
      {
        ATerm j_14 = NULL,w_1 = NULL;
        t = SSLgetAnnotations(not_null(h_13));
        j_14 = t;
        t = (ATerm) ATmakeAppl(sym_L_1, i_14);
        w_1 = t;
        t = SSLsetAnnotations(w_1, j_14);
        return(t);
      }
      ATerm o_14 = NULL;
      if(match_cons(t, sym_NL_0))
        {
          t = not_null(h_13);
        }
      else
        {
          if(match_cons(t, sym_UL_0))
            {
              t = not_null(h_13);
            }
          else
            {
              if(match_cons(t, sym_L_1))
                {
                  o_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_15(o_14, t);
            }
        }
      if(((q_13 != NULL) && (q_13 != t)))
        _fail(t);
      else
        q_13 = t;
      if(((b_2 != NULL) && (b_2 != t)))
        _fail(t);
      else
        b_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(q_13));
      if(((x_1 != NULL) && (x_1 != t)))
        _fail(t);
      else
        x_1 = t;
      t = SSLsetAnnotations(not_null(x_1), not_null(j_13));
      t = term_h_12;
    }
  }
  return(t);
}
ATerm laydiff_squash_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm q_15 (ATerm t)
  {
    ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
    n_12 = t;
    if(match_cons(t, sym__2))
      {
        l_12 = ATgetArgument(t, 0);
        m_12 = ATgetArgument(t, 1);
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_15(l_12, m_12, n_12, t);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = n_12;
            }
        }
      }
    else
      {
        t = n_12;
      }
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
          p_14 = t;
          if(match_cons(t, sym__2))
            {
              q_14 = ATgetArgument(t, 0);
              r_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_15(q_14, r_14, p_14, t);
                ;
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                {
                  ATerm d_14 = t;
                  int f_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_15(q_14, r_14, p_14, t);
                      ;
                      LocalPopChoice(f_14);
                    }
                  else
                    {
                      t = d_14;
                      t = p_14;
                      t = u_4(f_76, g_76, q_15, q_14, r_14, t);
                    }
                }
              }
          }
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          {
            ATerm g_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_14 = NULL,a_15 = NULL;
                t = g_76(t);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_14 = ATgetArgument(t, 0);
                    if(match_cons(l_14, sym_Label_2))
                      {
                        ATerm m_14 = ATgetArgument(l_14, 0);
                        z_14 = ATgetArgument(l_14, 1);
                      }
                    else
                      _fail(t);
                    a_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_14, a_15);
                t = q_15(t);
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = g_14;
                {
                  ATerm n_14 = t;
                  int s_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_15 = NULL,c_15 = NULL;
                      t = g_76(t);
                      if(match_cons(t, sym__2))
                        {
                          b_15 = ATgetArgument(t, 0);
                          {
                            ATerm t_14 = ATgetArgument(t, 1);
                            if(match_cons(t_14, sym_Label_2))
                              {
                                ATerm u_14 = ATgetArgument(t_14, 0);
                                c_15 = ATgetArgument(t_14, 1);
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, b_15, c_15);
                      t = q_15(t);
                      ;
                      LocalPopChoice(s_14);
                    }
                  else
                    {
                      t = n_14;
                      {
                        ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
                        d_15 = t;
                        if(match_cons(t, sym__2))
                          {
                            e_15 = ATgetArgument(t, 0);
                            f_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm v_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_15;
                              t = f_76(t);
                              t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, e_15), (ATerm) ATmakeAppl(sym_amb2_1, f_15));
                              ;
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = v_14;
                              t = (ATerm) ATmakeAppl(sym_amb_2, e_15, f_15);
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
  t = q_15(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm v_4 (ATerm u_125, ATerm z_125, ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,c_16 = NULL,d_16 = NULL,k_16 = NULL;
  t = SSL_explode_term(z_125);
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      {
        ATerm y_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_125);
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      {
        ATerm g_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, a_16), z_15);
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = t;
        if((PushChoice() == 0))
          {
            ATerm l_16 = NULL;
            l_16 = t;
            t = term_k_15;
            t = get_options_0_0(t);
            t = oncetd_1_0(c_3, t);
            t = l_16;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_15;
          }
        t = echo_1_0(d_3, t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
      }
    t = term_l_15;
    c_16 = t;
    t = term_l_15;
    d_16 = t;
    t = term_x_10;
    k_16 = t;
    t = SSL_table_put(c_16, d_16, k_16);
    t = term_m_15;
  }
  return(t);
}
ATerm genzip_4_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t)
{
  ATerm c_17 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,c_2 = NULL;
          t = u_103(t);
          v_16 = t;
          if(match_cons(t, sym__2))
            {
              r_16 = ATgetArgument(t, 0);
              s_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_16);
          q_16 = t;
          t = r_16;
          t = w_103(t);
          t_16 = t;
          t = s_16;
          t = c_17(t);
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_16, u_16);
          c_2 = t;
          t = SSLsetAnnotations(c_2, q_16);
          t = v_103(t);
        }
      }
    return(t);
  }
  t = c_17(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_17;
      t = q_86(t);
    }
  else
    {
      ATerm k_17 = NULL,l_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_17 = ATgetFirst((ATermList) t);
          h_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_17;
      t = s_86(t);
      k_17 = t;
      t = h_17;
      t = foldr_3_0(q_86, r_86, s_86, t);
      l_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
      t = r_86(t);
    }
  return(t);
}
ATerm q_20 (ATerm v_17, ATerm w_17, ATerm x_17, ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,k_2 = NULL,x_2 = NULL;
  t = not_null(x_17);
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = not_null(v_17);
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  t = not_null(w_17);
  if(((a_18 != NULL) && (a_18 != t)))
    _fail(t);
  else
    a_18 = t;
  t = SSLgetAnnotations(not_null(x_17));
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  t = not_null(v_17);
  {
    ATerm v_20 (ATerm j_18, ATerm t)
    {
      ATerm k_18 = NULL,e_2 = NULL;
      t = SSLgetAnnotations(not_null(v_17));
      k_18 = t;
      t = (ATerm) ATmakeAppl(sym_L_1, j_18);
      e_2 = t;
      t = SSLsetAnnotations(e_2, k_18);
      return(t);
    }
    ATerm n_18 = NULL;
    if(match_cons(t, sym_NL_0))
      {
        t = not_null(v_17);
      }
    else
      {
        if(match_cons(t, sym_UL_0))
          {
            t = not_null(v_17);
          }
        else
          {
            if(match_cons(t, sym_L_1))
              {
                n_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_20(n_18, t);
          }
      }
    if(((f_18 != NULL) && (f_18 != t)))
      _fail(t);
    else
      f_18 = t;
    t = not_null(w_17);
    {
      ATerm w_20 (ATerm o_18, ATerm t)
      {
        ATerm q_18 = NULL,f_2 = NULL;
        t = SSLgetAnnotations(not_null(w_17));
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym_L_1, o_18);
        f_2 = t;
        t = SSLsetAnnotations(f_2, q_18);
        return(t);
      }
      ATerm u_18 = NULL;
      if(match_cons(t, sym_NL_0))
        {
          t = not_null(w_17);
        }
      else
        {
          if(match_cons(t, sym_UL_0))
            {
              t = not_null(w_17);
            }
          else
            {
              if(match_cons(t, sym_L_1))
                {
                  u_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_20(u_18, t);
            }
        }
      if(((h_18 != NULL) && (h_18 != t)))
        _fail(t);
      else
        h_18 = t;
      if(((x_2 != NULL) && (x_2 != t)))
        _fail(t);
      else
        x_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
      if(((k_2 != NULL) && (k_2 != t)))
        _fail(t);
      else
        k_2 = t;
      t = SSLsetAnnotations(not_null(k_2), not_null(y_17));
    }
  }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(k_19, l_19, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(m_19, n_19, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_15 = ATgetArgument(t, 0);
      if(((ATgetType(p_15) != AT_LIST) || !(ATisEmpty(p_15))))
        _fail(t);
      {
        ATerm r_15 = ATgetArgument(t, 1);
        if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,t_19 = NULL,v_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
        {
          o_19 = ATgetFirst((ATermList) v_15);
          p_19 = (ATerm) ATgetNext((ATermList) v_15);
        }
      else
        _fail(t);
      {
        ATerm y_15 = ATgetArgument(t, 1);
        if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
          {
            t_19 = ATgetFirst((ATermList) y_15);
            v_19 = (ATerm) ATgetNext((ATermList) y_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_19, t_19), (ATerm) ATmakeAppl(sym__2, p_19, v_19));
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_19), w_19);
  return(t);
}
ATerm layeq_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm o_20 (ATerm t)
  {
    ATerm b_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 (ATerm v_18, ATerm w_18, ATerm x_18, ATerm t)
        {
          ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
          t = SSL_explode_term(w_18);
          if(match_cons(t, sym__2))
            {
              a_19 = ATgetArgument(t, 0);
              b_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(v_18);
          if(match_cons(t, sym__2))
            {
              if((a_19 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              z_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_18;
          t = foldr_3_0(e_3, j_3, p_3, t);
          c_19 = t;
          t = b_19;
          t = foldr_3_0(d_4, g_4, i_4, t);
          if((c_19 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_18, b_19);
          t = genzip_4_0(j_4, k_4, m_4, o_20, t);
          t = x_18;
          return(t);
        }
        ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
        y_19 = t;
        if(match_cons(t, sym__2))
          {
            z_19 = ATgetArgument(t, 0);
            a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_20;
              if((z_19 != t))
                {
                  _fail(t);
                }
              t = y_19;
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              {
                ATerm h_16 = t;
                int i_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_20(z_19, a_20, y_19, t);
                    ;
                    LocalPopChoice(i_16);
                  }
                else
                  {
                    t = h_16;
                    t = u_20(z_19, a_20, y_19, t);
                  }
              }
            }
        }
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = b_16;
        {
          ATerm j_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_20 = NULL,e_20 = NULL;
              t = y_75(t);
              if(match_cons(t, sym__2))
                {
                  ATerm n_16 = ATgetArgument(t, 0);
                  if(match_cons(n_16, sym_Label_2))
                    {
                      ATerm o_16 = ATgetArgument(n_16, 0);
                      c_20 = ATgetArgument(n_16, 1);
                    }
                  else
                    _fail(t);
                  e_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, c_20, e_20);
              t = o_20(t);
              ;
              LocalPopChoice(m_16);
            }
          else
            {
              t = j_16;
              {
                ATerm p_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_20 = NULL,i_20 = NULL;
                    t = y_75(t);
                    if(match_cons(t, sym__2))
                      {
                        h_20 = ATgetArgument(t, 0);
                        {
                          ATerm x_16 = ATgetArgument(t, 1);
                          if(match_cons(x_16, sym_Label_2))
                            {
                              ATerm y_16 = ATgetArgument(x_16, 0);
                              i_20 = ATgetArgument(x_16, 1);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
                    t = o_20(t);
                    ;
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = p_16;
                    t = x_75(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm y_4 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm y_20 = NULL,b_21 = NULL,d_21 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_25), f_25);
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_17 = t;
        if((PushChoice() == 0))
          {
            ATerm g_21 = NULL;
            g_21 = t;
            t = term_k_15;
            t = get_options_0_0(t);
            t = oncetd_1_0(o_4, t);
            t = g_21;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_17;
          }
        t = echo_1_0(q_4, t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
    t = term_l_15;
    y_20 = t;
    t = term_l_15;
    b_21 = t;
    t = term_x_10;
    d_21 = t;
    t = SSL_table_put(y_20, b_21, d_21);
    t = term_m_15;
  }
  return(t);
}
ATerm z_4 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_access(g_42, h_42);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm g_22 = NULL;
  if(match_cons(t, sym_Input2_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_22;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_NoPath_0)))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(t_22, u_22, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_TopMost_0)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      f_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(f_23, g_23, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_SquashedPath_0)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = term_d_17;
  t = get_options_0_0(t);
  t = oncetd_1_0(s_5, t);
  t = n_23;
  return(t);
}
ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_UseAmbMark_0)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm f_17 = t;
  if((PushChoice() == 0))
    {
      ATerm s_23 = NULL;
      s_23 = t;
      t = term_k_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(u_5, t);
      t = s_23;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_17;
    }
  t = echo_1_0(v_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_Path_0)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = term_d_17;
  t = get_options_0_0(t);
  t = oncetd_1_0(y_5, t);
  t = a_24;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_UseAmbMark_0)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm i_17 = t;
  if((PushChoice() == 0))
    {
      ATerm d_24 = NULL;
      d_24 = t;
      t = term_k_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(a_6, t);
      t = d_24;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_17;
    }
  t = echo_1_0(b_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm ldiff_0_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,e_22 = NULL,f_22 = NULL;
  a_22 = t;
  t = option_value_2_0(r_4, _fail, t);
  e_22 = t;
  t = (ATerm) ATinsert(ATempty, term_j_17);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_22, (ATerm) ATinsert(ATempty, term_j_17));
  t = z_4(e_22, f_22, t);
  t = ReadFromFile_0_0(t);
  b_22 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL;
        t = term_o_17;
        t = get_options_0_0(t);
        t = oncetd_1_0(t_4, t);
        t = term_l_15;
        n_22 = t;
        t = SSL_table_create(n_22);
        t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
        t = layeq_2_0(l_5, _id, t);
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_r_17;
              {
                ATerm s_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_22 = NULL,x_22 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        w_22 = ATgetArgument(t, 0);
                        x_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_5(w_22, x_22, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_17;
                  }
              }
              ;
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              {
                ATerm a_23 = NULL;
                t = term_x_10;
                a_23 = t;
                t = SSL_exit(a_23);
              }
            }
        }
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_23 = NULL;
              t = term_b_18;
              t = get_options_0_0(t);
              t = oncetd_1_0(n_5, t);
              t = term_l_15;
              b_23 = t;
              t = SSL_table_create(b_23);
              t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
              t = layeq_2_0(p_5, _id, t);
              {
                ATerm c_18 = t;
                int d_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_17;
                    {
                      ATerm e_18 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm j_23 = NULL,k_23 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              j_23 = ATgetArgument(t, 0);
                              k_23 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = g_5(j_23, k_23, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = e_18;
                        }
                    }
                    ;
                    LocalPopChoice(d_18);
                  }
                else
                  {
                    t = c_18;
                    {
                      ATerm l_23 = NULL;
                      t = term_x_10;
                      l_23 = t;
                      t = SSL_exit(l_23);
                    }
                  }
              }
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              {
                ATerm g_18 = t;
                int l_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_18;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(q_5, t);
                    t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
                    t = laydiff_squash_2_0(r_5, _fail, t);
                    {
                      ATerm p_18 = t;
                      int r_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_23 = NULL;
                          ATerm s_18 = t;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                _fail(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = s_18;
                            }
                          t = try_1_0(t_5, t);
                          t = term_x_10;
                          p_23 = t;
                          t = SSL_exit(p_23);
                          ;
                          LocalPopChoice(r_18);
                        }
                      else
                        {
                          t = p_18;
                        }
                    }
                    ;
                    LocalPopChoice(l_18);
                  }
                else
                  {
                    t = g_18;
                    t = term_t_18;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(w_5, t);
                    t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
                    t = laydiff_2_0(x_5, _fail, t);
                    {
                      ATerm y_18 = t;
                      int d_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_24 = NULL;
                          ATerm e_19 = t;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                _fail(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = e_19;
                            }
                          t = try_1_0(z_5, t);
                          t = term_x_10;
                          c_24 = t;
                          t = SSL_exit(c_24);
                          ;
                          LocalPopChoice(d_19);
                        }
                      else
                        {
                          t = y_18;
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
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  p_24 = t;
  t = dtime_0_0(t);
  t = p_24;
  t = y_96(t);
  o_24 = t;
  t = dtime_0_0(t);
  k_24 = t;
  t = o_24;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_24), (ATerm) ATmakeAppl(sym_Runtime_1, k_24)), n_24);
  return(t);
}
ATerm t_25 (ATerm t_24, ATerm w_24, ATerm t)
{
  t = SSL_fclose(t_24);
  return(t);
}
ATerm u_25 (ATerm d_25, ATerm t)
{
  t = SSL_fclose(d_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_25 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_25(r_25, s_25, t);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = u_25(s_25, t);
          }
      }
    }
  else
    {
      t = u_25(s_25, t);
    }
  return(t);
}
ATerm a_5 (ATerm c_46, ATerm t)
{
  t = SSL_read_term_from_stream(c_46);
  return(t);
}
ATerm b_5 (ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm d_26 = NULL;
  t = SSL_fopen(o_42, p_42);
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_26 = NULL;
  t = SSL_stdin_stream();
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_26 = NULL;
  t = SSL_stdout_stream();
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_26 = NULL;
  t = SSL_stderr_stream();
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_26);
  return(t);
}
ATerm o_29 (ATerm q_27, ATerm t)
{
  ATerm s_27 = NULL;
  t = SSL_explode_term(q_27);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_19 = ATgetArgument(t, 1);
        if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
          {
            s_27 = ATgetFirst((ATermList) i_19);
            {
              ATerm j_19 = (ATerm) ATgetNext((ATermList) i_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_29 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm e_28 = NULL,g_28 = NULL,h_28 = NULL,l_28 = NULL,g_3 = NULL;
  t = SSLgetAnnotations(d_28);
  h_28 = t;
  t = b_28;
  if(match_cons(t, sym_Path_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_28, c_28);
  g_3 = t;
  t = SSLsetAnnotations(g_3, h_28);
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(e_28, g_28, t);
  return(t);
}
ATerm q_29 (ATerm v_28, ATerm x_28, ATerm y_28, ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,f_29 = NULL,h_3 = NULL;
  t = SSLgetAnnotations(y_28);
  b_29 = t;
  t = SSL_is_string(v_28);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_29, x_28);
  h_3 = t;
  t = SSLsetAnnotations(h_3, b_29);
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(z_28, a_29, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_29 = NULL,k_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_19 = ATgetArgument(t, 0);
      ATerm r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_29 = t;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      {
        ATerm s_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_29(h_29, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = s_19;
            {
              ATerm b_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_29(k_29, n_29, h_29, t);
                  ;
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = b_20;
                  t = q_29(k_29, n_29, h_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_29(h_29, t);
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_29 = NULL,f_30 = NULL,g_30 = NULL;
  ATerm g_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_30 = NULL;
      l_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_30, term_k_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = g_20;
      t = debug_1_0(c_6, t);
      _fail(t);
    }
  f_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(g_30, t);
  u_29 = t;
  t = f_30;
  t = fclose_0_0(t);
  t = u_29;
  return(t);
}
ATerm fetch_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm c_32 (ATerm t)
  {
    ATerm d_32 (ATerm v_30, ATerm w_30, ATerm y_30, ATerm t)
    {
      ATerm z_30 = NULL,c_31 = NULL,u_3 = NULL;
      t = SSLgetAnnotations(y_30);
      z_30 = t;
      t = v_30;
      t = h_88(t);
      c_31 = t;
      t = (ATerm) ATinsert(CheckATermList(w_30), c_31);
      u_3 = t;
      t = SSLsetAnnotations(u_3, z_30);
      return(t);
    }
    ATerm e_32 (ATerm g_31, ATerm i_31, ATerm j_31, ATerm t)
    {
      ATerm k_31 = NULL,v_31 = NULL,x_3 = NULL;
      t = SSLgetAnnotations(j_31);
      k_31 = t;
      t = i_31;
      t = c_32(t);
      v_31 = t;
      t = (ATerm) ATinsert(CheckATermList(v_31), g_31);
      x_3 = t;
      t = SSLsetAnnotations(x_3, k_31);
      return(t);
    }
    ATerm y_31 = NULL,a_32 = NULL,b_32 = NULL;
    y_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_32 = ATgetFirst((ATermList) t);
        b_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_32(a_32, b_32, y_31, t);
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          t = e_32(a_32, b_32, y_31, t);
        }
    }
    return(t);
  }
  t = c_32(t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm f_32 = NULL;
  ATerm h_6 (ATerm t)
  {
    t = j_88(t);
    if(((f_32 != NULL) && (f_32 != t)))
      _fail(t);
    else
      f_32 = t;
    return(t);
  }
  t = fetch_1_0(h_6, t);
  t = not_null(f_32);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL;
  t = term_n_20;
  g_32 = t;
  t = term_p_20;
  h_32 = t;
  t = term_r_20;
  t = g_5(g_32, h_32, t);
  return(t);
}
ATerm option_value_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(a_97, t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      t = b_97(t);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm n_32 = NULL;
  if(match_cons(t, sym_Program_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_32;
  return(t);
}
ATerm my_usage_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  j_32 = t;
  t = option_value_2_0(i_6, _fail, t);
  i_32 = t;
  t = term_x_20;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_21), term_i_21), term_h_21), term_f_21), i_32), term_e_21), term_c_21), term_a_21), term_z_20), i_32);
  m_32 = t;
  t = SSL_printnl(l_32, m_32);
  t = term_x_10;
  k_32 = t;
  t = SSL_exit(k_32);
  t = j_32;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  if(match_string(t, "-k"))
    {
      t = p_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_32;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  t = SSL_string_to_int(q_32);
  r_32 = t;
  t = term_k_21;
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, r_32);
  t = j_5(s_32, r_32, t);
  t = q_32;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  if(match_string(t, "-S"))
    {
      t = u_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_32;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL;
  t = term_m_21;
  v_32 = t;
  t = term_v_10;
  w_32 = t;
  t = term_n_21;
  t = j_5(v_32, w_32, t);
  t = term_o_21;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  t = SSL_string_to_int(x_32);
  y_32 = t;
  t = term_m_21;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, y_32);
  t = j_5(z_32, y_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_32);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  t = term_r_21;
  a_33 = t;
  t = term_m_15;
  b_33 = t;
  t = term_s_21;
  t = j_5(a_33, b_33, t);
  t = term_t_21;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, s_6, t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_6, u_6, v_6, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = Option_3_0(y_6, a_7, b_7, t);
          }
      }
    }
  return(t);
}
ATerm j_5 (ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm c_33 = NULL;
  t = term_z_21;
  c_33 = t;
  t = SSL_table_put(c_33, d_47, e_47);
  t = (ATerm) ATmakeAppl(sym__3, term_z_21, d_47, e_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
      t = term_m_15;
      t = d_0(t);
      h_33 = t;
      t = term_c_22;
      i_33 = t;
      t = term_d_22;
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_22, term_d_22, h_33);
      t = h_5(i_33, j_33, h_33, t);
      _fail(t);
    }
  else
    {
      ATerm m_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_33;
      t = a_0(t);
      t = term_m_15;
      t = b_0(t);
      m_33 = t;
      t = (ATerm) ATinsert(CheckATermList(g_33), m_33);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  if(match_string(t, "-o"))
    {
      t = o_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_33;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  p_33 = t;
  t = term_h_22;
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, p_33);
  t = j_5(q_33, p_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_33);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, e_7, i_7, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  if(match_string(t, "-i"))
    {
      t = s_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_33;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  t = term_j_22;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, t_33);
  t = j_5(u_33, t_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_33);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_7, k_7, l_7, t);
  return(t);
}
ATerm h_5 (ATerm p_52, ATerm q_52, ATerm o_52, ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_22 = ATgetArgument(t, 0);
            ATerm p_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
        t = g_5(p_52, q_52, t);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = (ATerm) ATempty;
      }
    x_33 = t;
    t = (ATerm) ATinsert(CheckATermList(x_33), o_52);
    y_33 = t;
    t = SSL_table_put(p_52, q_52, y_33);
    t = w_33;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
      t = term_m_15;
      t = j_0(t);
      j_34 = t;
      t = term_c_22;
      k_34 = t;
      t = term_d_22;
      l_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_22, term_d_22, j_34);
      t = h_5(k_34, l_34, j_34, t);
      _fail(t);
    }
  else
    {
      ATerm p_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_34 = ATgetFirst((ATermList) t);
          g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_34 = ATgetFirst((ATermList) t);
          i_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_34;
      t = h_0(t);
      t = h_34;
      t = i_0(t);
      p_34 = t;
      t = (ATerm) ATinsert(CheckATermList(i_34), p_34);
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i2", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym_Input2_1, q_34);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--path", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--squashedpath", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nopath", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--topmost", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--useambmark", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm ops_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(m_7, n_7, o_7, t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm v_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(p_7, u_7, v_7, t);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = v_22;
            {
              ATerm z_22 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_7, x_7, a_8, t);
                  ;
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = z_22;
                  {
                    ATerm d_23 = t;
                    int e_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_8, f_8, g_8, t);
                        ;
                        LocalPopChoice(e_23);
                      }
                    else
                      {
                        t = d_23;
                        {
                          ATerm h_23 = t;
                          int i_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(h_8, i_8, j_8, t);
                              ;
                              LocalPopChoice(i_23);
                            }
                          else
                            {
                              t = h_23;
                              t = Option_3_0(k_8, l_8, m_8, t);
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
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_15;
  t = whoami_0_0(t);
  r_34 = t;
  t = term_x_20;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_23), r_34);
  u_34 = t;
  t = SSL_printnl(t_34, u_34);
  t = term_x_10;
  s_34 = t;
  t = SSL_exit(s_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_5 (ATerm y_61, ATerm z_61, ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_61, z_61);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      t = SSL_addr(y_61, z_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_34;
      t = o_86(t);
    }
  else
    {
      ATerm b_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          y_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_34;
      t = foldr_2_0(o_86, p_86, t);
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, b_35);
      t = p_86(t);
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  d_35 = t;
  t = SSL_explode_term(d_35);
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_35;
  t = foldr_2_0(z_85, a_86, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  if(match_cons(t, sym__2))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(f_35, g_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_35 = NULL;
  t = times_0_0(t);
  t = crush_2_0(n_8, q_8, t);
  e_35 = t;
  t = SSL_TicksToSeconds(e_35);
  return(t);
}
ATerm t_35 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(j_35, k_35);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = SSL_gtr(j_35, k_35);
      }
    t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_35;
        if((q_35 != t))
          {
            _fail(t);
          }
        t = p_35;
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = t_35(q_35, r_35, p_35, t);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL;
        t = term_m_21;
        t = get_config_0_0(t);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_35, term_x_10);
        t = geq_0_0(t);
        t = v_35;
        t = x_94(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = v_35;
      }
  }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,c_36 = NULL,d_36 = NULL;
  t = run_time_0_0(t);
  z_35 = t;
  t = term_m_15;
  t = whoami_0_0(t);
  a_36 = t;
  t = term_x_20;
  c_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_24), z_35), term_b_24), a_36);
  d_36 = t;
  t = SSL_printnl(c_36, d_36);
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_24), z_35), term_b_24), a_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_10;
  e_36 = t;
  t = SSL_exit(e_36);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_36 = ATgetArgument(t, 0);
          t = r_36(p_36, o_36, t);
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_36;
        }
    }
  return(t);
}
ATerm r_36 (ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm l_36 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(h_36);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_36);
  h_4 = t;
  t = SSLsetAnnotations(h_4, l_36);
  return(t);
}
ATerm need_help_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = fetch_1_0(s_8, t);
    }
  t = w_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_36 = ATgetFirst((ATermList) t);
      u_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_37 = NULL,d_37 = NULL;
        ATerm t_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_37)), not_null(d_37));
          return(t);
        }
        t = not_null(u_36);
        t = g_0(t);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = not_null(t_36);
        t = f_0(t);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = not_null(u_36);
        t = reverse_acc_2_0(f_0, t_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_15;
      t = g_0(t);
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,l_4 = NULL;
  j_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_37);
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_37);
  l_4 = t;
  t = SSLsetAnnotations(l_4, h_37);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_37), term_i_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  ATerm j_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = j_24;
      t = fetch_1_0(v_8, t);
    }
  t = term_q_24;
  t = echo_0_0(t);
  t = term_c_22;
  f_37 = t;
  t = term_d_22;
  g_37 = t;
  t = term_r_24;
  t = g_5(f_37, g_37, t);
  t = reverse_acc_2_0(_id, w_8, t);
  t = map_1_0(x_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  {
    ATerm s_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_24 = ATgetFirst((ATermList) t);
                ATerm x_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_37;
          }
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATinsert(ATempty, n_37);
      }
    o_37 = t;
    t = term_h_10;
    p_37 = t;
    t = SSL_printnl(p_37, o_37);
    t = n_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_23;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_5 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_strcat(j_36, k_36);
  return(t);
}
ATerm debug_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t_37 = t;
  t = l_93(t);
  u_37 = t;
  t = term_x_20;
  v_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_37), u_37);
  w_37 = t;
  t = SSL_printnl(v_37, w_37);
  t = t_37;
  return(t);
}
ATerm map_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm l_38 (ATerm t)
  {
    ATerm m_38 (ATerm z_37, ATerm a_38, ATerm b_38, ATerm t)
    {
      ATerm c_38 = NULL,f_38 = NULL,g_38 = NULL,n_4 = NULL;
      t = SSLgetAnnotations(b_38);
      c_38 = t;
      t = z_37;
      t = x_87(t);
      f_38 = t;
      t = a_38;
      t = l_38(t);
      g_38 = t;
      t = (ATerm) ATinsert(CheckATermList(g_38), f_38);
      n_4 = t;
      t = SSLsetAnnotations(n_4, c_38);
      return(t);
    }
    ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
    i_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_38 = ATgetFirst((ATermList) t);
            k_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_38(j_38, k_38, i_38, t);
      }
    return(t);
  }
  t = l_38(t);
  return(t);
}
ATerm k_39 (ATerm r_38, ATerm t)
{
  t = SSL_is_string(r_38);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
    }
  return(t);
}
ATerm l_39 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = x_38;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = debug_1_0(c_9, t);
        _fail(t);
      }
  }
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_38 = NULL;
      t_38 = t;
      t = k_39(t_38, t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = e_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_8, t);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            {
              ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
              a_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_39 = ATgetArgument(t, 0);
                  t = b_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_39 = ATgetArgument(t, 0);
                      t = l_39(b_39, a_39, t);
                    }
                  else
                    {
                      ATerm i_39 = NULL,j_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_39 = ATgetArgument(t, 0);
                          c_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_39;
                      t = eval_config_0_0(t);
                      i_39 = t;
                      t = c_39;
                      t = eval_config_0_0(t);
                      j_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
                      t = f_5(i_39, j_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_5 (ATerm g_54, ATerm h_54, ATerm t)
{
  t = SSL_table_get(g_54, h_54);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  t = term_z_21;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, n_39);
  t = g_5(o_39, n_39, t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_39 = NULL,q_39 = NULL;
        t = eval_config_0_0(t);
        p_39 = t;
        t = term_z_21;
        q_39 = t;
        t = SSL_table_put(q_39, n_39, p_39);
        t = p_39;
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
      }
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t = term_m_25;
  t_39 = t;
  t = term_m_15;
  u_39 = t;
  t = term_n_25;
  t = j_5(t_39, u_39, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  t = term_m_25;
  x_39 = t;
  t = term_m_15;
  y_39 = t;
  t = term_n_25;
  t = j_5(x_39, y_39, t);
  t = term_p_25;
  v_39 = t;
  t = term_m_15;
  w_39 = t;
  t = term_q_25;
  t = j_5(v_39, w_39, t);
  t = term_v_25;
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_9, h_9, i_9, t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      t = Option_3_0(j_9, k_9, l_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,p_4 = NULL;
  e_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_40 = ATgetFirst((ATermList) t);
      b_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_40);
  z_39 = t;
  t = a_40;
  t = f_69(t);
  c_40 = t;
  t = b_40;
  t = g_69(t);
  d_40 = t;
  t = (ATerm) ATinsert(CheckATermList(d_40), c_40);
  p_4 = t;
  t = SSLsetAnnotations(p_4, z_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL,s_4 = NULL;
  if(((j_40 != NULL) && (j_40 != t)))
    _fail(t);
  else
    j_40 = t;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_26;
        t = z_99(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
      }
    t = not_null(j_40);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_40 != NULL) && (l_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_40 = ATgetFirst((ATermList) t);
        if(((m_40 != NULL) && (m_40 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(j_40));
    if(((k_40 != NULL) && (k_40 != t)))
      _fail(t);
    else
      k_40 = t;
    t = term_o_23;
    if(((p_40 != NULL) && (p_40 != t)))
      _fail(t);
    else
      p_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_23, not_null(l_40));
    t = j_5(not_null(p_40), not_null(l_40), t);
    t = not_null(m_40);
    {
      ATerm z_40 (ATerm t)
      {
        ATerm c_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_40 = NULL;
                s_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_40;
                ;
                LocalPopChoice(j_26);
              }
            else
              {
                t = i_26;
                t = z_99(t);
                t = Cons_2_0(_id, z_40, t);
              }
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = c_26;
            {
              ATerm v_40 = NULL,w_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_40 = ATgetFirst((ATermList) t);
                  w_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_40), (ATerm) ATmakeAppl(sym_Undefined_1, v_40));
            }
          }
        return(t);
      }
      t = z_40(t);
      if(((o_40 != NULL) && (o_40 != t)))
        _fail(t);
      else
        o_40 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(o_40)), (ATerm) ATmakeAppl(sym_Program_1, not_null(l_40)));
      if(((s_4 != NULL) && (s_4 != t)))
        _fail(t);
      else
        s_4 = t;
      t = SSLsetAnnotations(not_null(s_4), not_null(k_40));
    }
  }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  if(match_string(t, "--help"))
    {
      t = l_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_41;
        }
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  t = term_h_24;
  m_41 = t;
  t = term_m_15;
  n_41 = t;
  t = term_k_26;
  t = j_5(m_41, n_41, t);
  t = term_l_26;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm d_42 (ATerm o_41, ATerm t)
{
  ATerm q_41 = NULL;
  t = o_41;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = fetch_1_0(q_9, t);
      }
    t = o_41;
    t = default_system_usage_0_0(t);
    t = term_v_10;
    q_41 = t;
    t = SSL_exit(q_41);
  }
  return(t);
}
ATerm e_42 (ATerm r_41, ATerm t)
{
  ATerm t_41 = NULL;
  t = term_m_25;
  t = get_config_0_0(t);
  t = r_41;
  t = default_system_about_0_0(t);
  t = term_v_10;
  t_41 = t;
  t = SSL_exit(t_41);
  return(t);
}
ATerm q_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  if(((g_41 != NULL) && (g_41 != t)))
    _fail(t);
  else
    g_41 = t;
  t = term_c_22;
  if(((i_41 != NULL) && (i_41 != t)))
    _fail(t);
  else
    i_41 = t;
  t = term_d_22;
  if(((j_41 != NULL) && (j_41 != t)))
    _fail(t);
  else
    j_41 = t;
  t = (ATerm) ATempty;
  if(((k_41 != NULL) && (k_41 != t)))
    _fail(t);
  else
    k_41 = t;
  t = SSL_table_put(not_null(i_41), not_null(j_41), not_null(k_41));
  t = not_null(g_41);
  {
    ATerm m_9 (ATerm t)
    {
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_99(t);
          ;
          LocalPopChoice(q_26);
        }
      else
        {
          t = p_26;
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_9, o_9, p_9, t);
                ;
                LocalPopChoice(s_26);
              }
            else
              {
                t = r_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_9, t);
    {
      ATerm t_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_41 = NULL;
          u_41 = t;
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_42(u_41, t);
                ;
                LocalPopChoice(w_26);
              }
            else
              {
                t = v_26;
                t = e_42(u_41, t);
              }
          }
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = t_26;
          {
            ATerm x_26 = t;
            int y_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
                ATerm r_9 (ATerm t)
                {
                  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,m_5 = NULL;
                  a_42 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_42);
                  y_41 = t;
                  t = z_41;
                  if(((e_41 != NULL) && (e_41 != t)))
                    _fail(t);
                  else
                    e_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_41);
                  m_5 = t;
                  t = SSLsetAnnotations(m_5, y_41);
                  return(t);
                }
                t = fetch_1_0(r_9, t);
                t = term_x_20;
                if(((w_41 != NULL) && (w_41 != t)))
                  _fail(t);
                else
                  w_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_41)), term_z_26);
                if(((x_41 != NULL) && (x_41 != t)))
                  _fail(t);
                else
                  x_41 = t;
                t = SSL_printnl(not_null(w_41), not_null(x_41));
                t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_41)), term_z_26));
                t = default_system_usage_0_0(t);
                t = term_x_10;
                if(((v_41 != NULL) && (v_41 != t)))
                  _fail(t);
                else
                  v_41 = t;
                t = SSL_exit(not_null(v_41));
                ;
                LocalPopChoice(y_26);
              }
            else
              {
                t = x_26;
              }
          }
        }
      if(((f_41 != NULL) && (f_41 != t)))
        _fail(t);
      else
        f_41 = t;
      t = term_c_22;
      if(((h_41 != NULL) && (h_41 != t)))
        _fail(t);
      else
        h_41 = t;
      t = SSL_table_destroy(not_null(h_41));
      t = not_null(f_41);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  t = parse_options_1_0(y_97, t);
  f_42 = t;
  t = term_n_20;
  k_42 = t;
  t = SSL_table_create(k_42);
  t = term_n_20;
  i_42 = t;
  t = term_p_20;
  j_42 = t;
  t = SSL_table_put(i_42, j_42, f_42);
  t = f_42;
  t = a_98(t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_97, t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ops_0_0(t);
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
            t = input_option_0_0(t);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  {
                    ATerm k_27 = t;
                    int l_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_9, y_9, a_10, t);
                        ;
                        LocalPopChoice(l_27);
                      }
                    else
                      {
                        t = k_27;
                        {
                          ATerm m_27 = t;
                          int n_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(n_27);
                            }
                          else
                            {
                              t = m_27;
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
ATerm w_9 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  if(((u_42 != NULL) && (u_42 != t)))
    _fail(t);
  else
    u_42 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((t_42 != NULL) && (t_42 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_10, t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = term_r_27;
        if(((t_42 != NULL) && (t_42 != t)))
          _fail(t);
        else
          t_42 = t;
      }
    t = not_null(t_42);
    t = ReadFromFile_0_0(t);
    if(((v_42 != NULL) && (v_42 != t)))
      _fail(t);
    else
      v_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_42), not_null(v_42));
    t = apply_strategy_1_0(g_10, t);
  }
  return(t);
}
ATerm x_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_t_27;
  m_42 = t;
  t = term_m_15;
  n_42 = t;
  t = term_u_27;
  t = j_5(m_42, n_42, t);
  t = term_v_27;
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,o_5 = NULL;
  a_43 = t;
  if(match_cons(t, sym__2))
    {
      x_42 = ATgetArgument(t, 0);
      y_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_43);
  w_42 = t;
  t = y_42;
  t = ldiff_0_0(t);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, z_42);
  o_5 = t;
  t = SSLsetAnnotations(o_5, w_42);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_9, my_usage_0_0, _id, w_9, t);
  return(t);
}
