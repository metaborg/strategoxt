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
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_r_30;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_a_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_a_28;
ATerm term_n_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_o_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_x_22;
ATerm term_s_22;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_x_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_n_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_x_13;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_j_4;
void init_constant_terms (void)
{
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_o_15, term_o_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_u_17);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_h_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_g_24, term_t_10);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_10);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_v_17);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_b_25);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_v_17);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_v_17);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_v_17);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_v_17);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm echo_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm laydiff_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm);
ATerm LConstoCons_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm d_2 (ATerm);
ATerm h_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm laydiff_squash_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm u_4 (ATerm x_125, ATerm c_126, ATerm);
ATerm genzip_4_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm);
ATerm L_1_0 (ATerm o_69 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm layeq_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm x_4 (ATerm f_25, ATerm g_25, ATerm);
ATerm y_4 (ATerm m_42, ATerm n_42, ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm w_4 (ATerm);
ATerm r_5 (ATerm);
ATerm ldiff_0_0 (ATerm);
ATerm _2_0 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm b_16 (ATerm u_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_4 (ATerm i_46, ATerm);
ATerm a_5 (ATerm u_42, ATerm v_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm m_88 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm option_value_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm my_usage_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm i_5 (ATerm j_47, ATerm k_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm g_5 (ATerm v_52, ATerm w_52, ATerm u_52, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm ops_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm b_5 (ATerm e_62, ATerm f_62, ATerm);
ATerm foldr_2_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_95 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm need_help_1_0 (ATerm z_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_5 (ATerm p_36, ATerm q_36, ATerm);
ATerm debug_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm f_5 (ATerm m_54, ATerm n_54, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_100 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm parse_options_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm echo_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL,m_0 = NULL,q_0 = NULL;
  e_0 = t;
  t = a_93(t);
  l_0 = t;
  t = term_j_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_0), l_0);
  q_0 = t;
  t = SSL_printnl(m_0, q_0);
  t = e_0;
  return(t);
}
ATerm oncetd_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80(t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        t = SRTS_one(r_0, t);
      }
    return(t);
  }
  t = r_0(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm i_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = i_9;
      {
        ATerm y_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = y_9;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(e_2, f_2, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm g_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(g_2, i_2, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      if(((ATgetType(v_10) != AT_LIST) || !(ATisEmpty(v_10))))
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
ATerm o_1 (ATerm t)
{
  ATerm j_2 = NULL,m_2 = NULL,q_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
        {
          j_2 = ATgetFirst((ATermList) a_11);
          m_2 = (ATerm) ATgetNext((ATermList) a_11);
        }
      else
        _fail(t);
      {
        ATerm b_11 = ATgetArgument(t, 1);
        if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
          {
            q_2 = ATgetFirst((ATermList) b_11);
            t_2 = (ATerm) ATgetNext((ATermList) b_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_2, q_2), (ATerm) ATmakeAppl(sym__2, m_2, t_2));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm w_2 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_2 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_3), w_2);
  return(t);
}
ATerm laydiff_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm x_0 = NULL;
    ATerm c_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,s_0 = NULL,t_0 = NULL;
        e_1 = t;
        if(match_cons(t, sym__2))
          {
            g_1 = ATgetArgument(t, 0);
            h_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_1;
        if((g_1 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, g_1, g_1);
        s_0 = t;
        t = SSL_explode_term(s_0);
        if(match_cons(t, sym__2))
          {
            ATerm f_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_11 = ATgetArgument(t, 1);
              if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
                {
                  t_0 = ATgetFirst((ATermList) g_11);
                  {
                    ATerm h_11 = (ATerm) ATgetNext((ATermList) g_11);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_0;
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = c_11;
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_1 = NULL,k_1 = NULL;
              t = _2_0(a_1, b_1, t);
              j_1 = t;
              t = SSL_explode_term(j_1);
              if(match_cons(t, sym__2))
                {
                  ATerm k_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_11 = ATgetArgument(t, 1);
                    if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
                      {
                        k_1 = ATgetFirst((ATermList) l_11);
                        {
                          ATerm m_11 = (ATerm) ATgetNext((ATermList) l_11);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = k_1;
              ;
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              {
                ATerm n_11 = t;
                int o_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
                    x_2 = t;
                    if(match_cons(t, sym__2))
                      {
                        y_2 = ATgetArgument(t, 0);
                        z_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(z_2);
                    if(match_cons(t, sym__2))
                      {
                        z_1 = ATgetArgument(t, 0);
                        a_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(y_2);
                    if(match_cons(t, sym__2))
                      {
                        if((z_1 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        b_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = b_2;
                    t = foldr_3_0(c_1, d_1, f_1, t);
                    c_2 = t;
                    t = a_2;
                    t = foldr_3_0(i_1, l_1, m_1, t);
                    if((c_2 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, b_2, a_2);
                    t = genzip_4_0(n_1, o_1, p_1, u_3, t);
                    x_0 = t;
                    t = SSL_mkterm(z_1, x_0);
                    ;
                    LocalPopChoice(o_11);
                  }
                else
                  {
                    t = n_11;
                    {
                      ATerm p_11 = t;
                      int q_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_3 = NULL,b_3 = NULL;
                          t = i_76(t);
                          if(match_cons(t, sym__2))
                            {
                              ATerm r_11 = ATgetArgument(t, 0);
                              if(match_cons(r_11, sym_Label_2))
                                {
                                  ATerm s_11 = ATgetArgument(r_11, 0);
                                  a_3 = ATgetArgument(r_11, 1);
                                }
                              else
                                _fail(t);
                              b_3 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
                          t = u_3(t);
                          ;
                          LocalPopChoice(q_11);
                        }
                      else
                        {
                          t = p_11;
                          {
                            ATerm t_11 = t;
                            int u_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_3 = NULL,d_3 = NULL;
                                t = i_76(t);
                                if(match_cons(t, sym__2))
                                  {
                                    c_3 = ATgetArgument(t, 0);
                                    {
                                      ATerm v_11 = ATgetArgument(t, 1);
                                      if(match_cons(v_11, sym_Label_2))
                                        {
                                          ATerm w_11 = ATgetArgument(v_11, 0);
                                          d_3 = ATgetArgument(v_11, 1);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
                                t = u_3(t);
                                ;
                                LocalPopChoice(u_11);
                              }
                            else
                              {
                                t = t_11;
                                {
                                  ATerm i_3 = NULL,k_3 = NULL,l_3 = NULL;
                                  i_3 = t;
                                  if(match_cons(t, sym__2))
                                    {
                                      k_3 = ATgetArgument(t, 0);
                                      l_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm x_11 = t;
                                    int y_11 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_3;
                                        t = h_76(t);
                                        t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, k_3), (ATerm) ATmakeAppl(sym_amb2_1, l_3));
                                        ;
                                        LocalPopChoice(y_11);
                                      }
                                    else
                                      {
                                        t = x_11;
                                        t = (ATerm) ATmakeAppl(sym_amb_2, k_3, l_3);
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
  t = u_3(t);
  return(t);
}
ATerm LConstoCons_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = h_12;
      {
        ATerm a_4 = NULL,c_4 = NULL,i_4 = NULL;
        if(match_cons(t, sym_LCons_3))
          {
            a_4 = ATgetArgument(t, 0);
            {
              ATerm n_12 = ATgetArgument(t, 1);
            }
            c_4 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_4;
        t = LConstoCons_0_0(t);
        i_4 = t;
        t = (ATerm) ATinsert(CheckATermList(i_4), a_4);
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm v_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = v_12;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(c_5, d_5, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm h_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(h_5, j_5, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm y_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(((ATgetType(e_13) != AT_LIST) || !(ATisEmpty(e_13))))
        _fail(t);
      {
        ATerm f_13 = ATgetArgument(t, 1);
        if(((ATgetType(f_13) != AT_LIST) || !(ATisEmpty(f_13))))
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
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
        {
          k_5 = ATgetFirst((ATermList) k_13);
          l_5 = (ATerm) ATgetNext((ATermList) k_13);
        }
      else
        _fail(t);
      {
        ATerm q_13 = ATgetArgument(t, 1);
        if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
          {
            m_5 = ATgetFirst((ATermList) q_13);
            n_5 = (ATerm) ATgetNext((ATermList) q_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_5, m_5), (ATerm) ATmakeAppl(sym__2, l_5, n_5));
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_5), o_5);
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm t_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 = NULL;
      ATerm o_2 (ATerm t)
      {
        ATerm r_2 (ATerm t)
        {
          if(((q_5 != NULL) && (q_5 != t)))
            _fail(t);
          else
            q_5 = t;
          return(t);
        }
        t = Cons_2_0(p_2, r_2, t);
        return(t);
      }
      t = _2_0(n_2, o_2, t);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_5)), term_x_13);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = t_13;
      {
        ATerm x_5 = NULL,y_5 = NULL;
        if(match_cons(t, sym__2))
          {
            x_5 = ATgetArgument(t, 0);
            y_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_5;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_5;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = x_5;
                  }
                else
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm c_14 = ATgetFirst((ATermList) t);
                        ATerm e_14 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = x_5;
                  }
                t = x_5;
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                t = (ATerm) ATinsert(CheckATermList(y_5), x_5);
              }
          }
        else
          {
            t = (ATerm) ATinsert(CheckATermList(y_5), x_5);
          }
      }
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm f_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL;
      ATerm k_14 = t;
      if((PushChoice() == 0))
        {
          ATerm g_6 = NULL;
          g_6 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_6;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_14 = ATgetFirst((ATermList) t);
                  ATerm o_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_6;
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_14;
        }
      d_6 = t;
      t = (ATerm) ATinsert(ATempty, d_6);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = f_14;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm laydiff_squash_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm e_6 = NULL;
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(LConstoCons_0_0, LConstoCons_0_0, t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
      }
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,r_3 = NULL,s_3 = NULL;
          m_6 = t;
          if(match_cons(t, sym__2))
            {
              n_6 = ATgetArgument(t, 0);
              o_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_6;
          if((n_6 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_6, n_6);
          r_3 = t;
          t = SSL_explode_term(r_3);
          if(match_cons(t, sym__2))
            {
              ATerm y_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm z_14 = ATgetArgument(t, 1);
                if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
                  {
                    s_3 = ATgetFirst((ATermList) z_14);
                    {
                      ATerm a_15 = (ATerm) ATgetNext((ATermList) z_14);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = s_3;
          {
            ATerm b_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_15;
                  }
                t = term_x_13;
                ;
                LocalPopChoice(g_15);
              }
            else
              {
                t = b_15;
              }
          }
          ;
          LocalPopChoice(x_14);
        }
      else
        {
          t = w_14;
          {
            ATerm i_15 = t;
            int j_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(q_1, r_1, t);
                t = term_x_13;
                ;
                LocalPopChoice(j_15);
              }
            else
              {
                t = i_15;
                {
                  ATerm k_15 = t;
                  int l_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_8 = NULL,j_8 = NULL,k_8 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL;
                      d_8 = t;
                      if(match_cons(t, sym__2))
                        {
                          j_8 = ATgetArgument(t, 0);
                          k_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(k_8);
                      if(match_cons(t, sym__2))
                        {
                          r_4 = ATgetArgument(t, 0);
                          s_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(j_8);
                      if(match_cons(t, sym__2))
                        {
                          if((r_4 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          t_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_4;
                      t = foldr_3_0(s_1, t_1, u_1, t);
                      v_4 = t;
                      t = s_4;
                      t = foldr_3_0(v_1, w_1, x_1, t);
                      if((v_4 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym__2, t_4, s_4);
                      t = genzip_4_0(y_1, d_2, h_2, c_9, t);
                      {
                        ATerm m_15 = t;
                        int n_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_o_15;
                            if((r_4 != t))
                              {
                                _fail(t);
                              }
                            t = term_p_15;
                            t = Cons_2_0(_id, k_2, t);
                            ;
                            LocalPopChoice(n_15);
                          }
                        else
                          {
                            t = m_15;
                            t = foldr_2_0(_id, l_2, t);
                          }
                        e_6 = t;
                        {
                          ATerm q_15 = t;
                          int r_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_o_15;
                              if((r_4 != t))
                                {
                                  _fail(t);
                                }
                              t = e_6;
                              t = Cons_2_0(_id, s_2, t);
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
                                    t = Cons_2_0(u_2, v_2, t);
                                    t = term_x_13;
                                    ;
                                    LocalPopChoice(t_15);
                                  }
                                else
                                  {
                                    t = s_15;
                                    t = SSL_mkterm(r_4, e_6);
                                  }
                              }
                            }
                        }
                      }
                      ;
                      LocalPopChoice(l_15);
                    }
                  else
                    {
                      t = k_15;
                      {
                        ATerm v_15 = t;
                        int w_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_8 = NULL,q_8 = NULL;
                            t = m_76(t);
                            if(match_cons(t, sym__2))
                              {
                                ATerm y_15 = ATgetArgument(t, 0);
                                if(match_cons(y_15, sym_Label_2))
                                  {
                                    ATerm a_16 = ATgetArgument(y_15, 0);
                                    p_8 = ATgetArgument(y_15, 1);
                                  }
                                else
                                  _fail(t);
                                q_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, p_8, q_8);
                            t = c_9(t);
                            ;
                            LocalPopChoice(w_15);
                          }
                        else
                          {
                            t = v_15;
                            {
                              ATerm g_16 = t;
                              int i_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_8 = NULL,s_8 = NULL;
                                  t = m_76(t);
                                  if(match_cons(t, sym__2))
                                    {
                                      r_8 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_16 = ATgetArgument(t, 1);
                                        if(match_cons(j_16, sym_Label_2))
                                          {
                                            ATerm k_16 = ATgetArgument(j_16, 0);
                                            s_8 = ATgetArgument(j_16, 1);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
                                  t = c_9(t);
                                  ;
                                  LocalPopChoice(i_16);
                                }
                              else
                                {
                                  t = g_16;
                                  {
                                    ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
                                    t_8 = t;
                                    if(match_cons(t, sym__2))
                                      {
                                        u_8 = ATgetArgument(t, 0);
                                        v_8 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    {
                                      ATerm l_16 = t;
                                      int m_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = t_8;
                                          t = l_76(t);
                                          t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, u_8), (ATerm) ATmakeAppl(sym_amb2_1, v_8));
                                          ;
                                          LocalPopChoice(m_16);
                                        }
                                      else
                                        {
                                          t = l_16;
                                          t = (ATerm) ATmakeAppl(sym_amb_2, u_8, v_8);
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
  t = c_9(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm u_4 (ATerm x_125, ATerm c_126, ATerm t)
{
  ATerm k_9 = NULL,p_9 = NULL,q_9 = NULL,v_9 = NULL,w_9 = NULL;
  t = SSL_explode_term(c_126);
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      {
        ATerm v_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_125);
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      {
        ATerm w_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, k_9), p_9);
  {
    ATerm c_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_17 = t;
        if((PushChoice() == 0))
          {
            ATerm x_9 = NULL;
            x_9 = t;
            t = term_p_17;
            t = get_options_0_0(t);
            t = oncetd_1_0(f_3, t);
            t = x_9;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_17;
          }
        t = echo_1_0(g_3, t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = c_17;
      }
    t = term_u_17;
    q_9 = t;
    t = term_u_17;
    v_9 = t;
    t = term_u_10;
    w_9 = t;
    t = SSL_table_put(q_9, v_9, w_9);
    t = term_v_17;
  }
  return(t);
}
ATerm genzip_4_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    ATerm z_17 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = z_17;
        t = x_103(t);
        t = _2_0(z_103, z_9, t);
        t = y_103(t);
      }
    return(t);
  }
  t = z_9(t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_86(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = h_18;
      {
        ATerm c_10 = NULL,f_10 = NULL,i_10 = NULL,j_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_10 = ATgetFirst((ATermList) t);
            f_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_10;
        t = v_86(t);
        i_10 = t;
        t = f_10;
        t = foldr_3_0(t_86, u_86, v_86, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, j_10);
        t = u_86(t);
      }
    }
  return(t);
}
ATerm L_1_0 (ATerm o_69 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,n_10 = NULL,o_10 = NULL,c_0 = NULL,k_0 = NULL;
  o_10 = t;
  if(match_cons(t, sym_L_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_10);
  k_10 = t;
  t = l_10;
  t = o_69(t);
  n_10 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_L_1, n_10);
  c_0 = t;
  t = SSLsetAnnotations(c_0, k_10);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm n_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = n_18;
      {
        ATerm q_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = q_18;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_NL_0)))
        _fail(t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm y_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_UL_0)))
              _fail(t);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = y_18;
            t = L_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(r_9, s_9, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(t_9, u_9, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_19 = ATgetArgument(t, 0);
      if(((ATgetType(b_19) != AT_LIST) || !(ATisEmpty(b_19))))
        _fail(t);
      {
        ATerm c_19 = ATgetArgument(t, 1);
        if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_10 = NULL,d_10 = NULL,e_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
        {
          a_10 = ATgetFirst((ATermList) d_19);
          d_10 = (ATerm) ATgetNext((ATermList) d_19);
        }
      else
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            e_10 = ATgetFirst((ATermList) e_19);
            m_10 = (ATerm) ATgetNext((ATermList) e_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_10, e_10), (ATerm) ATmakeAppl(sym__2, d_10, m_10));
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm p_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_10), p_10);
  return(t);
}
ATerm layeq_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm t)
{
  ATerm g_12 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
        w_10 = t;
        if(match_cons(t, sym__2))
          {
            x_10 = ATgetArgument(t, 0);
            y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_10;
        if((x_10 != t))
          {
            _fail(t);
          }
        t = w_10;
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        {
          ATerm j_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(h_3, j_3, t);
              ;
              LocalPopChoice(n_19);
            }
          else
            {
              t = j_19;
              {
                ATerm o_19 = t;
                int p_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,j_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
                    z_11 = t;
                    if(match_cons(t, sym__2))
                      {
                        a_12 = ATgetArgument(t, 0);
                        b_12 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(b_12);
                    if(match_cons(t, sym__2))
                      {
                        j_9 = ATgetArgument(t, 0);
                        l_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(a_12);
                    if(match_cons(t, sym__2))
                      {
                        if((j_9 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        m_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = m_9;
                    t = foldr_3_0(m_3, n_3, o_3, t);
                    n_9 = t;
                    t = l_9;
                    t = foldr_3_0(p_3, q_3, t_3, t);
                    if((n_9 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, m_9, l_9);
                    t = genzip_4_0(v_3, w_3, x_3, g_12, t);
                    t = z_11;
                    ;
                    LocalPopChoice(p_19);
                  }
                else
                  {
                    t = o_19;
                    {
                      ATerm q_19 = t;
                      int r_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_12 = NULL,d_12 = NULL;
                          t = e_76(t);
                          if(match_cons(t, sym__2))
                            {
                              ATerm s_19 = ATgetArgument(t, 0);
                              if(match_cons(s_19, sym_Label_2))
                                {
                                  ATerm t_19 = ATgetArgument(s_19, 0);
                                  c_12 = ATgetArgument(s_19, 1);
                                }
                              else
                                _fail(t);
                              d_12 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
                          t = g_12(t);
                          ;
                          LocalPopChoice(r_19);
                        }
                      else
                        {
                          t = q_19;
                          {
                            ATerm u_19 = t;
                            int v_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_12 = NULL,f_12 = NULL;
                                t = e_76(t);
                                if(match_cons(t, sym__2))
                                  {
                                    e_12 = ATgetArgument(t, 0);
                                    {
                                      ATerm w_19 = ATgetArgument(t, 1);
                                      if(match_cons(w_19, sym_Label_2))
                                        {
                                          ATerm x_19 = ATgetArgument(w_19, 0);
                                          f_12 = ATgetArgument(w_19, 1);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, e_12, f_12);
                                t = g_12(t);
                                ;
                                LocalPopChoice(v_19);
                              }
                            else
                              {
                                t = u_19;
                                t = d_76(t);
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
  t = g_12(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm x_4 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_25), f_25);
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_20 = t;
        if((PushChoice() == 0))
          {
            ATerm q_12 = NULL;
            q_12 = t;
            t = term_p_17;
            t = get_options_0_0(t);
            t = oncetd_1_0(y_3, t);
            t = q_12;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_20;
          }
        t = echo_1_0(z_3, t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
      }
    t = term_u_17;
    i_12 = t;
    t = term_u_17;
    j_12 = t;
    t = term_u_10;
    k_12 = t;
    t = SSL_table_put(i_12, j_12, k_12);
    t = term_v_17;
  }
  return(t);
}
ATerm y_4 (ATerm m_42, ATerm n_42, ATerm t)
{
  t = SSL_access(m_42, n_42);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm a_13 = NULL;
  if(match_cons(t, sym_Input2_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_NoPath_0)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm d_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(d_13, g_13, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(!(match_cons(t, sym_TopMost_0)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(n_13, o_13, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(!(match_cons(t, sym_SquashedPath_0)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  t = term_f_20;
  t = get_options_0_0(t);
  t = oncetd_1_0(l_4, t);
  t = u_13;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_UseAmbMark_0)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Path_0)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = term_f_20;
  t = get_options_0_0(t);
  t = oncetd_1_0(q_4, t);
  t = d_14;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_UseAmbMark_0)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm ldiff_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  w_12 = t;
  t = option_value_2_0(b_4, _fail, t);
  y_12 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_12, (ATerm) ATinsert(ATempty, term_g_20));
  t = y_4(y_12, z_12, t);
  t = ReadFromFile_0_0(t);
  x_12 = t;
  {
    ATerm i_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL;
        t = term_m_20;
        t = get_options_0_0(t);
        t = oncetd_1_0(d_4, t);
        t = term_u_17;
        c_13 = t;
        t = SSL_table_create(c_13);
        t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
        t = layeq_2_0(e_4, _id, t);
        {
          ATerm n_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_q_20;
              {
                ATerm u_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_13 = NULL,i_13 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        h_13 = ATgetArgument(t, 0);
                        i_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_5(h_13, i_13, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_20;
                  }
              }
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = n_20;
              {
                ATerm j_13 = NULL;
                t = term_u_10;
                j_13 = t;
                t = SSL_exit(j_13);
              }
            }
        }
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = i_20;
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_13 = NULL;
              t = term_x_20;
              t = get_options_0_0(t);
              t = oncetd_1_0(f_4, t);
              t = term_u_17;
              l_13 = t;
              t = SSL_table_create(l_13);
              t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
              t = layeq_2_0(g_4, _id, t);
              {
                ATerm a_21 = t;
                int b_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_20;
                    {
                      ATerm d_21 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm p_13 = NULL,r_13 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              p_13 = ATgetArgument(t, 0);
                              r_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = f_5(p_13, r_13, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = d_21;
                        }
                    }
                    ;
                    LocalPopChoice(b_21);
                  }
                else
                  {
                    t = a_21;
                    {
                      ATerm s_13 = NULL;
                      t = term_u_10;
                      s_13 = t;
                      t = SSL_exit(s_13);
                    }
                  }
              }
              ;
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              {
                ATerm e_21 = t;
                int g_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_h_21;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(h_4, t);
                    t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
                    t = laydiff_squash_2_0(k_4, _fail, t);
                    {
                      ATerm j_21 = t;
                      int k_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_13 = NULL;
                          ATerm l_21 = t;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                _fail(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = l_21;
                            }
                          {
                            ATerm n_21 = t;
                            int o_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_21 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_11 = NULL;
                                    d_11 = t;
                                    t = term_p_17;
                                    t = get_options_0_0(t);
                                    t = oncetd_1_0(m_4, t);
                                    t = d_11;
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = p_21;
                                  }
                                t = echo_1_0(n_4, t);
                                ;
                                LocalPopChoice(o_21);
                              }
                            else
                              {
                                t = n_21;
                              }
                            t = term_u_10;
                            w_13 = t;
                            t = SSL_exit(w_13);
                          }
                          ;
                          LocalPopChoice(k_21);
                        }
                      else
                        {
                          t = j_21;
                        }
                    }
                    ;
                    LocalPopChoice(g_21);
                  }
                else
                  {
                    t = e_21;
                    t = term_q_21;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(o_4, t);
                    t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
                    t = laydiff_2_0(p_4, _fail, t);
                    {
                      ATerm r_21 = t;
                      int s_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_14 = NULL;
                          ATerm t_21 = t;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("..", 0, ATtrue)))
                                _fail(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = t_21;
                            }
                          {
                            ATerm u_21 = t;
                            int v_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_21 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_12 = NULL;
                                    m_12 = t;
                                    t = term_p_17;
                                    t = get_options_0_0(t);
                                    t = oncetd_1_0(w_4, t);
                                    t = m_12;
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = w_21;
                                  }
                                t = echo_1_0(r_5, t);
                                ;
                                LocalPopChoice(v_21);
                              }
                            else
                              {
                                t = u_21;
                              }
                            t = term_u_10;
                            i_14 = t;
                            t = SSL_exit(i_14);
                          }
                          ;
                          LocalPopChoice(s_21);
                        }
                      else
                        {
                          t = r_21;
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
ATerm _2_0 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,n_0 = NULL,o_0 = NULL;
  s_14 = t;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_14);
  m_14 = t;
  t = n_14;
  t = w_64(t);
  q_14 = t;
  t = p_14;
  t = x_64(t);
  r_14 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_14, r_14);
  n_0 = t;
  t = SSLsetAnnotations(n_0, m_14);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  v_14 = t;
  t = dtime_0_0(t);
  t = v_14;
  t = b_97(t);
  c_15 = t;
  t = dtime_0_0(t);
  d_15 = t;
  t = c_15;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_15), (ATerm) ATmakeAppl(sym_Runtime_1, d_15)), f_15);
  return(t);
}
ATerm b_16 (ATerm u_15, ATerm t)
{
  t = SSL_fclose(u_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL;
  z_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_15 = ATgetArgument(t, 0);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_15);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = b_16(z_15, t);
          }
      }
    }
  else
    {
      t = b_16(z_15, t);
    }
  return(t);
}
ATerm z_4 (ATerm i_46, ATerm t)
{
  t = SSL_read_term_from_stream(i_46);
  return(t);
}
ATerm a_5 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm c_16 = NULL;
  t = SSL_fopen(u_42, v_42);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_16 = NULL;
  t = SSL_stdin_stream();
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_stdout_stream();
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  t = SSL_stderr_stream();
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_16);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm r_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_16;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm u_16 = NULL;
  u_16 = t;
  t = SSL_is_string(u_16);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      ATerm a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL,m_13 = NULL;
        o_16 = t;
        t = SSL_explode_term(o_16);
        if(match_cons(t, sym__2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_22 = ATgetArgument(t, 1);
              if(((ATgetType(h_22) == AT_LIST) && !(ATisEmpty(h_22))))
                {
                  m_13 = ATgetFirst((ATermList) h_22);
                  {
                    ATerm j_22 = (ATerm) ATgetNext((ATermList) h_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_13;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_13;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_13;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_13;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm l_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_16 = NULL,q_16 = NULL;
              t = _2_0(s_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_16 = ATgetArgument(t, 0);
                  q_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_5(p_16, q_16, t);
              ;
              LocalPopChoice(r_22);
            }
          else
            {
              t = l_22;
              {
                ATerm s_16 = NULL,t_16 = NULL;
                t = _2_0(t_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_16 = ATgetArgument(t, 0);
                    t_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_5(s_16, t_16, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,a_17 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL;
      b_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_17, term_x_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      t = debug_1_0(u_5, t);
      _fail(t);
    }
  x_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(a_17, t);
  y_16 = t;
  t = x_16;
  t = fclose_0_0(t);
  t = y_16;
  return(t);
}
ATerm fetch_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm d_17 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_88, _id, t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = Cons_2_0(_id, d_17, t);
      }
    return(t);
  }
  t = d_17(t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm e_17 = NULL;
  ATerm v_5 (ATerm t)
  {
    t = m_88(t);
    if(((e_17 != NULL) && (e_17 != t)))
      _fail(t);
    else
      e_17 = t;
    return(t);
  }
  t = fetch_1_0(v_5, t);
  t = not_null(e_17);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  t = term_g_23;
  f_17 = t;
  t = term_h_23;
  g_17 = t;
  t = term_i_23;
  t = f_5(f_17, g_17, t);
  return(t);
}
ATerm option_value_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm k_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(d_97, t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = k_23;
      t = e_97(t);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm o_17 = NULL;
  if(match_cons(t, sym_Program_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_17;
  return(t);
}
ATerm my_usage_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL;
  i_17 = t;
  t = option_value_2_0(w_5, _fail, t);
  j_17 = t;
  t = term_r_23;
  k_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_24), term_z_23), term_y_23), term_x_23), j_17), term_w_23), term_v_23), term_u_23), term_t_23), j_17);
  l_17 = t;
  t = SSL_printnl(k_17, l_17);
  t = term_u_10;
  n_17 = t;
  t = SSL_exit(n_17);
  t = i_17;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  if(match_string(t, "-k"))
    {
      t = q_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_17;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  t = SSL_string_to_int(r_17);
  s_17 = t;
  t = term_b_24;
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_24, s_17);
  t = i_5(t_17, s_17, t);
  t = r_17;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  if(match_string(t, "-S"))
    {
      t = w_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_17;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  t = term_g_24;
  x_17 = t;
  t = term_t_10;
  y_17 = t;
  t = term_h_24;
  t = i_5(x_17, y_17, t);
  t = term_i_24;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  t = SSL_string_to_int(a_18);
  b_18 = t;
  t = term_g_24;
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, b_18);
  t = i_5(c_18, b_18, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_18);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  t = term_n_24;
  d_18 = t;
  t = term_v_17;
  e_18 = t;
  t = term_r_24;
  t = i_5(d_18, e_18, t);
  t = term_s_24;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, f_6, h_6, t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm w_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_6, j_6, k_6, t);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = w_24;
            t = Option_3_0(l_6, p_6, q_6, t);
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm f_18 = NULL;
  t = term_z_24;
  f_18 = t;
  t = SSL_table_put(f_18, j_47, k_47);
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, j_47, k_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_18 = NULL,m_18 = NULL,o_18 = NULL;
      t = term_v_17;
      t = d_0(t);
      l_18 = t;
      t = term_a_25;
      m_18 = t;
      t = term_b_25;
      o_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_25, term_b_25, l_18);
      t = g_5(m_18, o_18, l_18, t);
      _fail(t);
    }
  else
    {
      ATerm r_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_18 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_18;
      t = a_0(t);
      t = term_v_17;
      t = b_0(t);
      r_18 = t;
      t = (ATerm) ATinsert(CheckATermList(k_18), r_18);
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  if(match_string(t, "-o"))
    {
      t = t_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_18;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm u_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = term_c_25;
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, u_18);
  t = i_5(x_18, u_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_18);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, t_6, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  if(match_string(t, "-i"))
    {
      t = z_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_18;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  t = term_h_25;
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, h_19);
  t = i_5(i_19, h_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_19);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_6, v_6, w_6, t);
  return(t);
}
ATerm g_5 (ATerm v_52, ATerm w_52, ATerm u_52, ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_25 = ATgetArgument(t, 0);
            ATerm n_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
        t = f_5(v_52, w_52, t);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATempty;
      }
    l_19 = t;
    t = (ATerm) ATinsert(CheckATermList(l_19), u_52);
    m_19 = t;
    t = SSL_table_put(v_52, w_52, m_19);
    t = k_19;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,e_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_20 = NULL,j_20 = NULL,k_20 = NULL;
      t = term_v_17;
      t = j_0(t);
      h_20 = t;
      t = term_a_25;
      j_20 = t;
      t = term_b_25;
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_25, term_b_25, h_20);
      t = g_5(j_20, k_20, h_20, t);
      _fail(t);
    }
  else
    {
      ATerm o_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_20 = ATgetFirst((ATermList) t);
          b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_20 = ATgetFirst((ATermList) t);
          e_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_20;
      t = h_0(t);
      t = c_20;
      t = i_0(t);
      o_20 = t;
      t = (ATerm) ATinsert(CheckATermList(e_20), o_20);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i2", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Input2_1, r_20);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--path", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm d_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--squashedpath", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nopath", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--topmost", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--useambmark", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm ops_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_6, y_6, z_6, t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_7, b_7, c_7, t);
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            {
              ATerm u_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_7, e_7, f_7, t);
                  ;
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = u_25;
                  {
                    ATerm w_25 = t;
                    int x_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_7, h_7, i_7, t);
                        ;
                        LocalPopChoice(x_25);
                      }
                    else
                      {
                        t = w_25;
                        {
                          ATerm y_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(j_7, k_7, l_7, t);
                              ;
                              LocalPopChoice(z_25);
                            }
                          else
                            {
                              t = y_25;
                              t = Option_3_0(m_7, n_7, o_7, t);
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
  ATerm s_20 = NULL,t_20 = NULL,y_20 = NULL,z_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_17;
  t = whoami_0_0(t);
  s_20 = t;
  t = term_r_23;
  t_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_26), s_20);
  y_20 = t;
  t = SSL_printnl(t_20, y_20);
  t = term_u_10;
  z_20 = t;
  t = SSL_exit(z_20);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm b_5 (ATerm e_62, ATerm f_62, ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_62, f_62);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = SSL_addr(e_62, f_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_86(t);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm c_21 = NULL,f_21 = NULL,i_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_21 = ATgetFirst((ATermList) t);
            f_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_21;
        t = foldr_2_0(r_86, s_86, t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, i_21);
        t = s_86(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(g_14, j_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_21 = NULL,a_14 = NULL,b_14 = NULL;
  t = times_0_0(t);
  a_14 = t;
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14;
  t = foldr_2_0(p_7, q_7, t);
  m_21 = t;
  t = SSL_TicksToSeconds(m_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_22;
        if((c_22 != t))
          {
            _fail(t);
          }
        t = b_22;
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_22, d_22);
              ;
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
              t = SSL_gtr(c_22, d_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,k_22 = NULL;
      i_22 = t;
      t = term_g_24;
      t = get_config_0_0(t);
      k_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_22, term_u_10);
      t = geq_0_0(t);
      t = i_22;
      t = a_95(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  t = run_time_0_0(t);
  m_22 = t;
  t = term_v_17;
  t = whoami_0_0(t);
  n_22 = t;
  t = term_r_23;
  o_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), m_22), term_o_26), n_22);
  p_22 = t;
  t = SSL_printnl(o_22, p_22);
  t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), m_22), term_o_26), n_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_10;
  q_22 = t;
  t = SSL_exit(q_22);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm u_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = u_26;
      t = fetch_1_0(s_7, t);
    }
  t = z_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_22 = ATgetFirst((ATermList) t);
      u_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_22 = NULL,z_22 = NULL;
        t = u_22;
        t = g_0(t);
        y_22 = t;
        t = t_22;
        t = f_0(t);
        z_22 = t;
        t = u_22;
        {
          ATerm t_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_22), z_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,p_0 = NULL,u_0 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  a_23 = t;
  t = d_23;
  t = r_75(t);
  e_23 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_23);
  p_0 = t;
  t = SSLsetAnnotations(p_0, a_23);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_23), term_y_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_23 = NULL,l_23 = NULL;
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = fetch_1_0(u_7, t);
    }
  t = term_c_27;
  t = echo_0_0(t);
  t = term_a_25;
  j_23 = t;
  t = term_b_25;
  l_23 = t;
  t = term_d_27;
  t = f_5(j_23, l_23, t);
  t = reverse_acc_2_0(_id, v_7, t);
  t = map_1_0(w_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,s_23 = NULL,v_0 = NULL,w_0 = NULL;
  s_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_23);
  o_23 = t;
  t = p_23;
  t = s_75(t);
  q_23 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_23);
  v_0 = t;
  t = SSLsetAnnotations(v_0, o_23);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_27 = ATgetFirst((ATermList) t);
                ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_24;
          }
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATinsert(ATempty, c_24);
      }
    d_24 = t;
    t = term_j_4;
    e_24 = t;
    t = SSL_printnl(e_24, d_24);
    t = c_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_5 (ATerm p_36, ATerm q_36, ATerm t)
{
  t = SSL_strcat(p_36, q_36);
  return(t);
}
ATerm debug_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,l_24 = NULL,o_24 = NULL,p_24 = NULL;
  j_24 = t;
  t = o_93(t);
  l_24 = t;
  t = term_r_23;
  o_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_24), l_24);
  p_24 = t;
  t = SSL_printnl(o_24, p_24);
  t = j_24;
  return(t);
}
ATerm map_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm q_24 (ATerm t)
  {
    ATerm i_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = i_27;
        t = Cons_2_0(a_88, q_24, t);
      }
    return(t);
  }
  t = q_24(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL;
      x_24 = t;
      t = SSL_is_string(x_24);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_7, t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm e_25 = NULL,j_25 = NULL,p_25 = NULL;
              e_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_25 = ATgetArgument(t, 0);
                  t = j_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_25 = ATgetArgument(t, 0);
                      t = j_25;
                      {
                        ATerm t_27 = t;
                        int u_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_27);
                          }
                        else
                          {
                            t = t_27;
                            t = debug_1_0(y_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_26 = NULL,v_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_25 = ATgetArgument(t, 0);
                          p_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_25;
                      t = eval_config_0_0(t);
                      g_26 = t;
                      t = p_25;
                      t = eval_config_0_0(t);
                      v_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_26, v_26);
                      t = e_5(g_26, v_26, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm m_54, ATerm n_54, ATerm t)
{
  t = SSL_table_get(m_54, n_54);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm b_27 = NULL,j_27 = NULL;
  b_27 = t;
  t = term_z_24;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, b_27);
  t = f_5(j_27, b_27, t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,v_27 = NULL;
        t = eval_config_0_0(t);
        s_27 = t;
        t = term_z_24;
        v_27 = t;
        t = SSL_table_put(v_27, b_27, s_27);
        t = s_27;
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  t = term_a_28;
  w_27 = t;
  t = term_v_17;
  x_27 = t;
  t = term_c_28;
  t = i_5(w_27, x_27, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm b_28 = NULL,d_28 = NULL,g_28 = NULL,h_28 = NULL;
  t = term_a_28;
  b_28 = t;
  t = term_v_17;
  d_28 = t;
  t = term_c_28;
  t = i_5(b_28, d_28, t);
  t = term_f_28;
  g_28 = t;
  t = term_v_17;
  h_28 = t;
  t = term_o_28;
  t = i_5(g_28, h_28, t);
  t = term_p_28;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_7, a_8, b_8, t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = u_28;
      t = Option_3_0(c_8, e_8, f_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,y_0 = NULL,z_0 = NULL;
  n_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_28 = ATgetFirst((ATermList) t);
      k_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  i_28 = t;
  t = j_28;
  t = l_69(t);
  l_28 = t;
  t = k_28;
  t = m_69(t);
  m_28 = t;
  z_0 = t;
  t = (ATerm) ATinsert(CheckATermList(m_28), l_28);
  y_0 = t;
  t = SSLsetAnnotations(y_0, i_28);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  t = term_b_26;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, s_28);
  t = i_5(t_28, s_28, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_29;
        t = c_100(t);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
      }
    t = r_28;
    {
      ATerm h_8 (ATerm t)
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_29 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_29);
              }
            else
              {
                t = d_29;
                t = c_100(t);
                t = Cons_2_0(_id, h_8, t);
              }
            ;
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm v_28 = NULL,w_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_28 = ATgetFirst((ATermList) t);
                  w_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_28), (ATerm) ATmakeAppl(sym_Undefined_1, v_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_8, h_8, t);
    }
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "--help"))
    {
      t = p_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_29;
        }
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = term_x_26;
  q_29 = t;
  t = term_v_17;
  r_29 = t;
  t = term_f_29;
  t = i_5(q_29, r_29, t);
  t = term_g_29;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  i_29 = t;
  t = term_a_25;
  l_29 = t;
  t = term_b_25;
  m_29 = t;
  t = (ATerm) ATempty;
  n_29 = t;
  t = SSL_table_put(l_29, m_29, n_29);
  t = i_29;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_100(t);
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_8, m_8, n_8, t);
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_8, t);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_29 = NULL;
          y_29 = t;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_16 = NULL;
                t = y_29;
                {
                  ATerm n_30 = t;
                  int o_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_30);
                    }
                  else
                    {
                      t = n_30;
                      t = fetch_1_0(o_8, t);
                    }
                  t = y_29;
                  t = default_system_usage_0_0(t);
                  t = term_t_10;
                  h_16 = t;
                  t = SSL_exit(h_16);
                }
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                {
                  ATerm z_16 = NULL;
                  t = term_a_28;
                  t = get_config_0_0(t);
                  t = y_29;
                  t = default_system_about_0_0(t);
                  t = term_t_10;
                  z_16 = t;
                  t = SSL_exit(z_16);
                }
              }
          }
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm p_30 = t;
            int q_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
                ATerm w_8 (ATerm t)
                {
                  ATerm x_8 (ATerm t)
                  {
                    if(((j_29 != NULL) && (j_29 != t)))
                      _fail(t);
                    else
                      j_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(x_8, t);
                  return(t);
                }
                t = fetch_1_0(w_8, t);
                t = term_r_23;
                z_29 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_29)), term_r_30);
                a_30 = t;
                t = SSL_printnl(z_29, a_30);
                t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_29)), term_r_30));
                t = default_system_usage_0_0(t);
                t = term_u_10;
                b_30 = t;
                t = SSL_exit(b_30);
                ;
                LocalPopChoice(q_30);
              }
            else
              {
                t = p_30;
              }
          }
        }
      k_29 = t;
      t = term_a_25;
      o_29 = t;
      t = SSL_table_destroy(o_29);
      t = k_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  t = parse_options_1_0(b_98, t);
  e_30 = t;
  t = term_g_23;
  f_30 = t;
  t = SSL_table_create(f_30);
  t = term_g_23;
  g_30 = t;
  t = term_h_23;
  h_30 = t;
  t = SSL_table_put(g_30, h_30, e_30);
  t = e_30;
  t = d_98(t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_98, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          ATerm u_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_30);
            }
          else
            {
              t = u_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ops_0_0(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            {
              ATerm a_31 = t;
              int b_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(b_31);
                }
              else
                {
                  t = a_31;
                  {
                    ATerm c_31 = t;
                    int d_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_9, b_9, d_9, t);
                        ;
                        LocalPopChoice(d_31);
                      }
                    else
                      {
                        t = c_31;
                        {
                          ATerm e_31 = t;
                          int f_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(f_31);
                            }
                          else
                            {
                              t = e_31;
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
ATerm z_8 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((l_30 != NULL) && (l_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_9, t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = term_i_31;
        l_30 = t;
      }
    t = not_null(l_30);
    t = ReadFromFile_0_0(t);
    m_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_30, m_30);
    t = apply_strategy_1_0(f_9, t);
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  t = term_j_31;
  i_30 = t;
  t = term_v_17;
  j_30 = t;
  t = term_k_31;
  t = i_5(i_30, j_30, t);
  t = term_l_31;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = _2_0(_id, ldiff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_8, my_usage_0_0, _id, z_8, t);
  return(t);
}
