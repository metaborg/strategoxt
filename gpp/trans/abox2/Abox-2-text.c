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
Symbol sym_C_2;
Symbol sym_FBOX_2;
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
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Scopes_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Undefined_0;
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
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_q_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_t_38;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_n_37;
ATerm term_f_37;
ATerm term_e_36;
ATerm term_w_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_e_31;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_x_29;
ATerm term_a_27;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_l_22;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_t_18;
ATerm term_l_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_m_16;
void init_constant_terms (void)
{
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_m_16);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_t_18);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_18);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_j_17);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_j_17);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_q_31);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_j_17);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym__2, term_f_38, term_j_17);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_j_17);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm topdown_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm y_8 (ATerm z_93 (ATerm), ATerm r_43, ATerm p_43, ATerm);
ATerm l_2 (ATerm o_1, ATerm);
ATerm m_2 (ATerm r_1, ATerm s_1, ATerm t_1, ATerm);
ATerm i_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm z_9 (ATerm h_84 (ATerm), ATerm m_35, ATerm w_262, ATerm);
ATerm at_suffix_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm a_10 (ATerm z_29, ATerm a_30, ATerm);
ATerm leq_0_0 (ATerm);
ATerm get_width_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm z_8 (ATerm c_26, ATerm a_26, ATerm);
ATerm i_3 (ATerm);
ATerm a_9 (ATerm u_25, ATerm y_25, ATerm v_25, ATerm);
ATerm b_9 (ATerm y_34, ATerm z_34, ATerm);
ATerm c_9 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t_26, ATerm s_26, ATerm);
ATerm d_9 (ATerm v_77 (ATerm), ATerm o_26, ATerm m_26, ATerm p_26, ATerm n_26, ATerm);
ATerm foldl_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm f_9 (ATerm o_64, ATerm p_64, ATerm);
ATerm h_9 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm q_0, ATerm u_0, ATerm n_0, ATerm);
ATerm thread_map_1_0 (ATerm y_90 (ATerm), ATerm);
ATerm H_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm is_real_hbox_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_91 (ATerm), ATerm);
ATerm i_9 (ATerm j_27, ATerm k_27, ATerm l_27, ATerm);
ATerm e_4 (ATerm);
ATerm n_4 (ATerm);
ATerm w_4 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm is_real_vbox_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm matrix_transpose_0_0 (ATerm);
ATerm k_9 (ATerm w_60, ATerm x_60, ATerm y_60, ATerm);
ATerm l_9 (ATerm a_65, ATerm b_65, ATerm);
ATerm m_9 (ATerm g_65, ATerm h_65, ATerm);
ATerm s_5 (ATerm);
ATerm n_9 (ATerm i_61, ATerm j_61, ATerm e_61, ATerm);
ATerm o_9 (ATerm p_61, ATerm n_61, ATerm o_61, ATerm);
ATerm p_9 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm);
ATerm h_15 (ATerm v_13, ATerm w_13, ATerm x_13, ATerm);
ATerm j_15 (ATerm g_14, ATerm h_14, ATerm);
ATerm k_15 (ATerm p_14, ATerm q_14, ATerm);
ATerm align_column_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm flatten_list_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm q_6 (ATerm);
ATerm u_9 (ATerm i_28, ATerm h_28, ATerm d_28, ATerm f_28, ATerm c_28, ATerm);
ATerm genzip_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm map_with_index_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm b_20 (ATerm n_19, ATerm);
ATerm conc_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm g_7 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm m_7 (ATerm);
ATerm FitToMax_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm R_2_0 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm w_38 (ATerm a_33, ATerm b_33, ATerm c_33, ATerm d_33, ATerm e_33, ATerm);
ATerm x_38 (ATerm g_34, ATerm h_34, ATerm i_34, ATerm j_34, ATerm);
ATerm y_38 (ATerm s_34, ATerm t_34, ATerm u_34, ATerm v_34, ATerm);
ATerm z_38 (ATerm a_36, ATerm b_36, ATerm c_36, ATerm d_36, ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm g_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm r_10 (ATerm);
ATerm x_10 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm s_39 (ATerm l_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_10 (ATerm o_47, ATerm);
ATerm c_10 (ATerm o_42, ATerm p_42, ATerm);
ATerm _2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm d_10 (ATerm g_42, ATerm h_42, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_10 (ATerm r_48, ATerm s_48, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm f_10 (ATerm y_31, ATerm z_31, ATerm);
ATerm end_scope_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm l_11 (ATerm);
ATerm o_11 (ATerm);
ATerm w_11 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm xtc_io_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_13 (ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_10 (ATerm i_64, ATerm j_64, ATerm);
ATerm foldr_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_14 (ATerm);
ATerm r_14 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm v_14 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_14 (ATerm);
ATerm need_help_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_72 (ATerm), ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm e_15 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_10 (ATerm e_63, ATerm f_63, ATerm);
ATerm debug_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm g_15 (ATerm);
ATerm l_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm n_10 (ATerm w_42, ATerm x_42, ATerm);
ATerm k_10 (ATerm k_33, ATerm l_33, ATerm);
ATerm l_10 (ATerm t_31, ATerm u_31, ATerm s_31, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm);
ATerm t_15 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_99 (ATerm), ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm a_16 (ATerm);
ATerm c_16 (ATerm);
ATerm parse_options_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm l_16 (ATerm);
ATerm io_Abox_2_text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  t = o_79(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = topdown_1_0(o_79, t);
      return(t);
    }
    t = SRTS_all(b_2, t);
  }
  return(t);
}
ATerm y_8 (ATerm z_93 (ATerm), ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm r_0 = NULL,w_0 = NULL,x_0 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL;
  r_0 = t;
  t = z_93(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_0, r_43, p_43);
  t = l_10(w_0, r_43, p_43, t);
  {
    ATerm x_2 = t;
    int m_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = term_m_16;
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_0, term_m_16);
        t = k_10(w_0, i_1, t);
        ;
        LocalPopChoice(m_4);
      }
    else
      {
        t = x_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_0 = ATgetFirst((ATermList) t);
        e_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_16;
    g_1 = t;
    t = (ATerm) ATinsert(CheckATermList(e_1), (ATerm) ATinsert(CheckATermList(x_0), r_43));
    h_1 = t;
    t = SSL_table_put(w_0, g_1, h_1);
    t = r_0;
  }
  return(t);
}
ATerm l_2 (ATerm o_1, ATerm t)
{
  t = o_1;
  {
    ATerm q_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_16 = ATgetArgument(t, 0);
            ATerm a_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_16;
      }
    t = term_d_17;
    t = debug_1_0(i_2, t);
    t = (ATerm) ATmakeAppl(sym__2, o_1, term_e_17);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm m_2 (ATerm r_1, ATerm s_1, ATerm t_1, ATerm t)
{
  t = SSL_open_file(r_1, s_1);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_2(c_2, t);
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            t = m_2(d_2, f_2, c_2, t);
          }
      }
    }
  else
    {
      t = l_2(c_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  t = term_j_17;
  t = new_0_0(t);
  n_2 = t;
  t = term_k_17;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_2, term_k_17);
  t = j_10(n_2, o_2, t);
  {
    ATerm m_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 = NULL,w_2 = NULL;
        q_2 = t;
        t = (ATerm) ATinsert(ATempty, term_p_17);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_2, (ATerm) ATinsert(ATempty, term_p_17));
        t = d_10(q_2, w_2, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = m_17;
      }
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  t = new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_e_17);
  t = open_file_0_0(t);
  t = term_j_17;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_j_17);
  t = y_8(j_2, y_2, z_2, t);
  t = y_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  g_3 = t;
  t = xtc_new_file_0_0(t);
  h_3 = t;
  t = g_3;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm r_17 = t;
      int s_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 = NULL,f_0 = NULL,m_0 = NULL;
          o_3 = t;
          t = SSL_is_string(o_3);
          f_0 = t;
          t = (ATerm) ATinsert(ATempty, f_0);
          m_0 = t;
          t = SSL_print(h_3, m_0);
          t = f_0;
          ;
          LocalPopChoice(s_17);
        }
      else
        {
          t = r_17;
        }
      return(t);
    }
    t = topdown_1_0(k_2, t);
    t = SSL_close_file(h_3);
    t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
  }
  return(t);
}
ATerm z_9 (ATerm h_84 (ATerm), ATerm m_35, ATerm w_262, ATerm t)
{
  t = w_262;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm l_23 = NULL;
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_35, l_23);
      t = h_84(t);
      t = l_23;
      return(t);
    }
    t = SRTS_one(p_2, t);
  }
  return(t);
}
ATerm at_suffix_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm m_23 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_84(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = Cons_2_0(_id, m_23, t);
      }
    return(t);
  }
  t = m_23(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  ATerm r_2 (ATerm t)
  {
    t = Cons_2_0(l_84, _id, t);
    {
      ATerm s_2 (ATerm t)
      {
        if(((n_23 != NULL) && (n_23 != t)))
          _fail(t);
        else
          n_23 = t;
        return(t);
      }
      t = Cons_2_0(_id, s_2, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(r_2, t);
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, not_null(n_23));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,z_23 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(r_107, t);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm t_23 = NULL;
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_18 = ATgetFirst((ATermList) t);
              ATerm b_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_23;
          t = list_tokenize_1_0(r_107, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_18 = ATgetFirst((ATermList) t);
          ATerm i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, w_23);
        }
      else
        {
          ATerm g_24 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_18 = ATgetFirst((ATermList) t);
              ATerm k_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_23;
          t = list_tokenize_1_0(r_107, t);
          g_24 = t;
          t = (ATerm) ATinsert(CheckATermList(g_24), w_23);
        }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_explode_string(j_24);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      if((l_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  t = SSL_implode_string(m_24);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  t = _2_0(_id, u_2, t);
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_24;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm k_24 = NULL;
      k_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_24, h_24);
      t = z_9(c_3, k_24, h_24, t);
      return(t);
    }
    t = list_tokenize_1_0(b_3, t);
    t = map_1_0(d_3, t);
  }
  return(t);
}
ATerm a_10 (ATerm z_29, ATerm a_30, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_l_18), z_29);
  t = string_tokenize_0_0(t);
  {
    ATerm m_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL,u_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_t_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_24 = ATgetFirst((ATermList) t);
                u_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(t_24);
          }
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = m_18;
        {
          ATerm v_24 = NULL,w_24 = NULL;
          t = last_0_0(t);
          w_24 = t;
          t = SSL_strlen(w_24);
          v_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_24, a_30);
          t = f_9(v_24, a_30, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm w_18 = t;
  if((PushChoice() == 0))
    {
      ATerm y_24 = NULL,z_24 = NULL;
      if(match_cons(t, sym__2))
        {
          y_24 = ATgetArgument(t, 0);
          z_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
      {
        ATerm x_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(y_24, z_24);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = x_18;
            t = SSL_gtr(y_24, z_24);
          }
        t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_18;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm b_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = b_19;
      t = term_g_19;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_23 = ATgetFirst((ATermList) t);
      g_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm h_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_23;
          ;
          LocalPopChoice(j_19);
        }
      else
        {
          t = h_19;
          t = g_23;
          t = last_0_0(t);
        }
    }
  else
    {
      t = g_23;
      t = last_0_0(t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm c_26, ATerm a_26, ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  t = c_26;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(e_3, t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = term_t_18;
      }
    v_3 = t;
    t = term_m_19;
    w_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_3, term_m_19);
    t = g_10(v_3, w_3, t);
    u_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_3, term_l_18);
    t = copy_char_0_0(t);
    r_3 = t;
    t = c_26;
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(f_3, t);
          ;
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
          t = term_t_18;
        }
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, term_q_19);
      t = copy_char_0_0(t);
      s_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, term_q_19);
      t = copy_char_0_0(t);
      t_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_3), s_3), r_3);
      y_3 = t;
      t = SSL_concat_strings(y_3);
    }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  i_4 = t;
  t = SSL_explode_term(i_4);
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_19 = ATgetArgument(t, 1);
        if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
          {
            j_4 = ATgetFirst((ATermList) u_19);
            {
              ATerm v_19 = (ATerm) ATgetNext((ATermList) u_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_4;
  return(t);
}
ATerm a_9 (ATerm u_25, ATerm y_25, ATerm v_25, ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  t = z_8(u_25, v_25, t);
  b_4 = t;
  t = y_25;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_25;
  t = map_1_0(i_3, t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, d_4);
  t = b_9(b_4, d_4, t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_4, c_4);
  return(t);
}
ATerm b_9 (ATerm y_34, ATerm z_34, ATerm t)
{
  t = z_34;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm j_3 (ATerm t)
          {
            ATerm j_20 = t;
            int k_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_20);
              }
            else
              {
                t = j_20;
                {
                  ATerm l_4 = NULL;
                  t = Cons_2_0(_id, j_3, t);
                  l_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_4), y_34);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, j_3, t);
        }
      }
  }
  return(t);
}
ATerm c_9 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t_26, ATerm s_26, ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  t = term_j_17;
  t = x_77(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, o_4);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        {
          ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
          t = term_x_20;
          t_4 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_26, o_4)), term_z_20);
          u_4 = t;
          t = SSL_printnl(t_4, u_4);
          t = term_m_19;
          v_4 = t;
          t = SSL_exit(v_4);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_26, o_4)), term_z_20);
        }
      }
    if(match_cons(t, sym__2))
      {
        p_4 = ATgetArgument(t, 0);
        q_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_j_17;
    t = w_77(t);
    r_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
    t = g_10(q_4, r_4, t);
    s_4 = t;
    t = (ATerm) ATinsert(CheckATermList(s_26), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, p_4), s_4));
  }
  return(t);
}
ATerm d_9 (ATerm v_77 (ATerm), ATerm o_26, ATerm m_26, ATerm p_26, ATerm n_26, ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,d_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        {
          ATerm e_5 = NULL,i_5 = NULL,j_5 = NULL;
          t = term_x_20;
          e_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_26, p_26)), term_z_20);
          i_5 = t;
          t = SSL_printnl(e_5, i_5);
          t = term_m_19;
          j_5 = t;
          t = SSL_exit(j_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_26, p_26)), term_z_20);
        }
      }
    if(match_cons(t, sym__2))
      {
        x_4 = ATgetArgument(t, 0);
        z_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_j_17;
    t = get_width_0_0(t);
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, a_5);
    t = leq_0_0(t);
    t = term_j_17;
    t = v_77(t);
    b_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, b_5);
    t = g_10(z_4, b_5, t);
    d_5 = t;
    t = (ATerm) ATinsert(CheckATermList(n_26), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_26), x_4), d_5));
  }
  return(t);
}
ATerm foldl_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm x_5 = NULL,y_5 = NULL,c_6 = NULL,e_6 = NULL;
    if(match_cons(t, sym__2))
      {
        x_5 = ATgetArgument(t, 0);
        e_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_5;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_6;
      }
    else
      {
        ATerm l_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_5 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_5, e_6);
        t = n_90(t);
        l_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_6, l_6);
        t = n_6(t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm SOpt_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,v_6 = NULL,b_0 = NULL,l_0 = NULL;
  v_6 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      p_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_6);
  o_6 = t;
  t = p_6;
  t = t_71(t);
  s_6 = t;
  t = r_6;
  t = u_71(t);
  t_6 = t;
  l_0 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, s_6, t_6);
  b_0 = t;
  t = SSLsetAnnotations(b_0, o_6);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm a_7 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      if(((a_7 != NULL) && (a_7 != t)))
        _fail(t);
      else
        a_7 = t;
      return(t);
    }
    t = SOpt_2_0(a_78, l_3, t);
    return(t);
  }
  t = fetch_1_0(k_3, t);
  t = SSL_string_to_int(not_null(a_7));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm b_7 = NULL;
  t = copy_0_0(t);
  b_7 = t;
  t = SSL_implode_string(b_7);
  return(t);
}
ATerm f_9 (ATerm o_64, ATerm p_64, ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_64, p_64);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      t = SSL_subtr(o_64, p_64);
    }
  return(t);
}
ATerm h_9 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm q_0, ATerm u_0, ATerm n_0, ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_0, n_0);
  t = p_0(t);
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, d_7);
  t = t_0(t);
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_7), c_7), e_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,v_7 = NULL;
    p_7 = t;
    if(match_cons(t, sym__2))
      {
        q_7 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_7;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_7 = ATgetFirst((ATermList) t);
        o_7 = (ATerm) ATgetNext((ATermList) t);
        t = p_7;
        t = h_9(y_90, b_8, n_7, o_7, v_7, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_7);
      }
    return(t);
  }
  t = b_8(t);
  return(t);
}
ATerm H_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,g_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,o_0 = NULL,s_0 = NULL;
  k_8 = t;
  if(match_cons(t, sym_H_2))
    {
      d_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_8);
  c_8 = t;
  t = d_8;
  t = n_71(t);
  i_8 = t;
  t = g_8;
  t = o_71(t);
  j_8 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, i_8, j_8);
  o_0 = t;
  t = SSLsetAnnotations(o_0, c_8);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm h_21 = t;
  if((PushChoice() == 0))
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          t = H_2_0(m_3, n_3, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_21;
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 (ATerm t)
            {
              t = filter_1_0(l_91, t);
              return(t);
            }
            t = Cons_2_0(l_91, p_3, t);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm q_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_21 = ATgetFirst((ATermList) t);
                  q_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_10;
              t = filter_1_0(l_91, t);
            }
          }
      }
    }
  return(t);
}
ATerm i_9 (ATerm j_27, ATerm k_27, ATerm l_27, ATerm t)
{
  t = l_27;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm s_10 = NULL;
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_10, j_27);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
              t = term_x_20;
              t_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_10, j_27)), term_z_20);
              u_10 = t;
              t = SSL_printnl(t_10, u_10);
              t = term_m_19;
              v_10 = t;
              t = SSL_exit(v_10);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_10, j_27)), term_z_20);
            }
          }
      }
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm a_4 (ATerm t)
      {
        ATerm w_10 = NULL;
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_10, k_27);
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = abox2text_0_0(t);
              ;
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm y_10 = NULL,z_10 = NULL,c_11 = NULL;
                t = term_x_20;
                y_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_10, k_27)), term_z_20);
                z_10 = t;
                t = SSL_printnl(y_10, z_10);
                t = term_m_19;
                c_11 = t;
                t = SSL_exit(c_11);
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_10, k_27)), term_z_20);
              }
            }
        }
        return(t);
      }
      t = map_1_0(a_4, t);
      return(t);
    }
    t = Cons_2_0(q_3, z_3, t);
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = Cons_2_0(n_4, w_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm d_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = d_22;
      t = Cons_2_0(l_5, m_5, t);
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm h_22 = t;
  if((PushChoice() == 0))
    {
      ATerm i_22 = t;
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
          t = i_22;
          {
            ATerm n_11 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
            n_11 = t;
            t = SSL_explode_term(n_11);
            if(match_cons(t, sym__2))
              {
                y_0 = ATgetArgument(t, 0);
                z_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_0;
            t = Cons_2_0(_id, e_4, t);
            a_1 = t;
            t = SSL_mkterm(y_0, a_1);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_22;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_11 = ATgetFirst((ATermList) t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_11 = NULL,x_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_11 = ATgetFirst((ATermList) t);
      x_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_11, x_11);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(match_cons(m_22, sym__2))
        {
          y_11 = ATgetArgument(m_22, 0);
          z_11 = ATgetArgument(m_22, 1);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(match_cons(n_22, sym__2))
          {
            a_12 = ATgetArgument(n_22, 0);
            b_12 = ATgetArgument(n_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_12), y_11), (ATerm) ATinsert(CheckATermList(b_12), z_11));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(n_5, t);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = o_22;
      {
        ATerm q_11 = NULL,r_11 = NULL;
        t = map_1_0(o_5, t);
        t = genzip_4_0(p_5, q_5, r_5, _id, t);
        t = _2_0(_id, matrix_transpose_0_0, t);
        if(match_cons(t, sym__2))
          {
            q_11 = ATgetArgument(t, 0);
            r_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_11), q_11);
      }
    }
  return(t);
}
ATerm k_9 (ATerm w_60, ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm d_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, w_60, x_60, y_60);
  t = o_9(w_60, x_60, y_60, t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_12, x_60);
  t = j_10(d_12, x_60, t);
  return(t);
}
ATerm l_9 (ATerm a_65, ATerm b_65, ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(a_65, b_65);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      t = SSL_divr(a_65, b_65);
    }
  return(t);
}
ATerm m_9 (ATerm g_65, ATerm h_65, ATerm t)
{
  t = SSL_mod(g_65, h_65);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm x_12 = NULL,z_12 = NULL;
  x_12 = t;
  t = term_m_19;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_12, term_m_19);
  t = g_10(x_12, z_12, t);
  return(t);
}
ATerm n_9 (ATerm i_61, ATerm j_61, ATerm e_61, ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  t = SSL_strlen(j_61);
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_61, f_12);
  t = f_9(e_61, f_12, t);
  g_12 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL;
        t = term_w_22;
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_12, term_w_22);
        t = m_9(g_12, o_12, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_12;
        LocalPopChoice(v_22);
        {
          ATerm p_12 = NULL,q_12 = NULL;
          t = term_w_22;
          q_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_12, term_w_22);
          t = l_9(g_12, q_12, t);
          p_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_12, p_12);
        }
      }
    else
      {
        t = u_22;
        {
          ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,w_12 = NULL;
          t = term_m_19;
          r_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_12, term_m_19);
          t = f_9(g_12, r_12, t);
          s_12 = t;
          t = term_w_22;
          t_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_12, term_w_22);
          t = l_9(s_12, t_12, t);
          w_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_12, w_12);
          t = _2_0(s_5, _id, t);
        }
      }
    if(match_cons(t, sym__2))
      {
        h_12 = ATgetArgument(t, 0);
        i_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_12, h_12);
    t = g_10(f_12, h_12, t);
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_61, j_61, j_12);
    t = o_9(i_61, j_61, j_12, t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_12, i_12);
    t = g_10(f_12, i_12, t);
    l_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_61, j_61, l_12);
    t = o_9(i_61, j_61, l_12, t);
    m_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_12), j_61), k_12);
    n_12 = t;
    t = SSL_concat_strings(n_12);
  }
  return(t);
}
ATerm o_9 (ATerm p_61, ATerm n_61, ATerm o_61, ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_strlen(n_61);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_61, c_13);
  t = f_9(o_61, c_13, t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_13 = NULL;
        d_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_13, term_t_18);
        t = geq_0_0(t);
        t = d_13;
        LocalPopChoice(y_22);
        {
          ATerm f_13 = NULL;
          f_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_13, p_61);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_22;
        t = term_z_22;
      }
  }
  return(t);
}
ATerm p_9 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm h_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, a_61, b_61, c_61);
  t = o_9(a_61, b_61, c_61, t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_61, h_13);
  t = j_10(b_61, h_13, t);
  return(t);
}
ATerm h_15 (ATerm v_13, ATerm w_13, ATerm x_13, ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  t = term_m_19;
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_13, term_m_19);
  {
    ATerm a_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(v_13, c_14);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = a_23;
        t = SSL_gtr(v_13, c_14);
      }
    t = w_13;
    if(match_cons(t, sym__3))
      {
        d_14 = ATgetArgument(t, 0);
        e_14 = ATgetArgument(t, 1);
        f_14 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = p_9(d_14, e_14, f_14, t);
  }
  return(t);
}
ATerm j_15 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  t = g_14;
  if(match_cons(t, sym__3))
    {
      l_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      n_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_9(l_14, m_14, n_14, t);
  return(t);
}
ATerm k_15 (ATerm p_14, ATerm q_14, ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  t = p_14;
  if(match_cons(t, sym__3))
    {
      s_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
      u_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_9(s_14, t_14, u_14, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL,d_15 = NULL,f_15 = NULL;
  y_14 = t;
  if(match_cons(t, sym__3))
    {
      z_14 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      f_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_15;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm h_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_23);
        t = f_15;
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm k_23 = ATgetArgument(t, 0);
                  w_14 = ATgetArgument(t, 1);
                  {
                    ATerm p_23 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(j_23);
              t = z_14;
              if(match_int(t, 1))
                {
                  ATerm q_23 = t;
                  int r_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_15(z_14, f_15, y_14, t);
                      ;
                      LocalPopChoice(r_23);
                    }
                  else
                    {
                      t = q_23;
                      t = w_14;
                    }
                }
              else
                {
                  t = h_15(z_14, f_15, y_14, t);
                }
            }
          else
            {
              t = i_23;
              t = z_14;
              t = h_15(z_14, f_15, y_14, t);
            }
        }
      }
    else
      {
        t = d_23;
        {
          ATerm s_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm v_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_23);
              t = z_14;
              t = j_15(f_15, y_14, t);
            }
          else
            {
              t = s_23;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm x_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_14;
              t = k_15(f_15, y_14, t);
            }
        }
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm y_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(w_5, _id, t);
      LocalPopChoice(a_24);
      t = conc_0_0(t);
    }
  else
    {
      t = y_23;
      {
        ATerm y_15 = NULL,z_15 = NULL;
        if(match_cons(t, sym__2))
          {
            y_15 = ATgetArgument(t, 0);
            z_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_15), y_15);
      }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL;
      b_16 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_16;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_24 = ATgetFirst((ATermList) t);
              ATerm e_24 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_16;
        }
      LocalPopChoice(c_24);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = b_24;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm s_15 = NULL;
  s_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_24 = ATgetFirst((ATermList) t);
          ATerm n_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_15;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_16 = ATgetFirst((ATermList) t);
      v_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,b_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      if(match_cons(o_24, sym__2))
        {
          w_16 = ATgetArgument(o_24, 0);
          x_16 = ATgetArgument(o_24, 1);
        }
      else
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(match_cons(p_24, sym__2))
          {
            y_16 = ATgetArgument(p_24, 0);
            b_17 = ATgetArgument(p_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_16), w_16), (ATerm) ATinsert(CheckATermList(b_17), x_16));
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = map_1_0(k_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,f_1 = NULL;
  c_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_24 = ATgetFirst((ATermList) t);
      d_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_1 = ATgetFirst((ATermList) t);
      {
        ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, f_1);
  t = foldl_1_0(m_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm s_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = NULL;
      t = flatten_list_0_0(t);
      c_17 = t;
      t = SSL_concat_strings(c_17);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = s_24;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym__2))
        {
          k_1 = ATgetArgument(t, 0);
          l_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, k_1, l_1);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_1, l_1);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = SSL_gtr(k_1, l_1);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_1, l_1);
      }
      LocalPopChoice(b_25);
      {
        ATerm m_1 = NULL,n_1 = NULL;
        m_1 = t;
        t = SSL_explode_term(m_1);
        if(match_cons(t, sym__2))
          {
            ATerm e_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_25 = ATgetArgument(t, 1);
              if(((ATgetType(f_25) == AT_LIST) && !(ATisEmpty(f_25))))
                {
                  n_1 = ATgetFirst((ATermList) f_25);
                  {
                    ATerm g_25 = (ATerm) ATgetNext((ATermList) f_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_1;
      }
    }
  else
    {
      t = a_25;
      {
        ATerm q_1 = NULL,u_1 = NULL;
        q_1 = t;
        t = SSL_explode_term(q_1);
        if(match_cons(t, sym__2))
          {
            ATerm h_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_25 = ATgetArgument(t, 1);
              if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
                {
                  ATerm j_25 = ATgetFirst((ATermList) i_25);
                  ATerm k_25 = (ATerm) ATgetNext((ATermList) i_25);
                  if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
                    {
                      u_1 = ATgetFirst((ATermList) k_25);
                      {
                        ATerm l_25 = (ATerm) ATgetNext((ATermList) k_25);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_1;
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm i_28, ATerm h_28, ATerm d_28, ATerm f_28, ATerm c_28, ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,o_16 = NULL;
  t = d_28;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm p_16 = NULL;
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_16, f_28);
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
              t = term_x_20;
              r_16 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_16, f_28)), term_z_20);
              s_16 = t;
              t = SSL_printnl(r_16, s_16);
              t = term_m_19;
              t_16 = t;
              t = SSL_exit(t_16);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_16, f_28)), term_z_20);
            }
          }
      }
      return(t);
    }
    t = map_1_0(d_6, t);
    t = genzip_4_0(f_6, g_6, h_6, _id, t);
    t = _2_0(i_6, j_6, t);
    if(match_cons(t, sym__2))
      {
        g_16 = ATgetArgument(t, 0);
        h_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, h_16, f_28);
    t = f_9(h_16, f_28, t);
    i_16 = t;
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_17 = NULL;
          t = term_m_19;
          i_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_28, term_m_19);
          {
            ATerm q_25 = t;
            int r_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(h_28, i_17);
                ;
                LocalPopChoice(r_25);
              }
            else
              {
                t = q_25;
                t = SSL_gtr(h_28, i_17);
              }
            t = (ATerm) ATmakeAppl(sym__2, h_28, term_m_19);
          }
          LocalPopChoice(p_25);
          {
            ATerm l_17 = NULL,n_17 = NULL;
            t = i_28;
            if(match_cons(t, sym_AC_1))
              {
                n_17 = ATgetArgument(t, 0);
                t = n_17;
              }
            else
              {
                if(match_cons(t, sym_AR_1))
                  {
                    n_17 = ATgetArgument(t, 0);
                    t = n_17;
                  }
                else
                  {
                    if(match_cons(t, sym_AL_1))
                      {
                        n_17 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_17;
                  }
              }
            {
              ATerm s_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_value_1_0(q_6, t);
                  ;
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = s_25;
                  t = term_m_19;
                }
              l_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_17, term_q_19);
              t = copy_char_0_0(t);
            }
          }
        }
      else
        {
          t = o_25;
          t = term_z_22;
        }
      j_16 = t;
      t = g_16;
      {
        ATerm u_6 (ATerm t)
        {
          ATerm t_17 = NULL,u_17 = NULL;
          t_17 = t;
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, (ATerm) ATmakeAppl(sym__3, term_q_19, t_17, i_16));
          t = align_column_0_0(t);
          u_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_17, j_16);
          t = j_10(u_17, j_16, t);
          return(t);
        }
        t = map_1_0(u_6, t);
        k_16 = t;
        t = SSL_strlen(j_16);
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_16, h_16);
        t = g_10(n_16, h_16, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATinsert(CheckATermList(c_28), k_16));
      }
    }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm v_17 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_85(t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = u_85(t);
        t = _2_0(w_85, v_17, t);
        t = v_85(t);
      }
    return(t);
  }
  t = v_17(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, c_18);
  {
    ATerm r_18 (ATerm t)
    {
      ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
      if(match_cons(t, sym__2))
        {
          e_18 = ATgetArgument(t, 0);
          f_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_18;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_18 = ATgetFirst((ATermList) t);
              h_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, e_18, g_18);
          t = y_106(t);
          n_18 = t;
          t = term_m_19;
          q_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_18, term_m_19);
          t = g_10(e_18, q_18, t);
          o_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_18, h_18);
          t = r_18(t);
          p_18 = t;
          t = (ATerm) ATinsert(CheckATermList(p_18), n_18);
        }
      return(t);
    }
    t = r_18(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm z_25 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_90(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = z_25;
      {
        ATerm u_18 = NULL,v_18 = NULL,y_18 = NULL,z_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_18 = ATgetFirst((ATermList) t);
            v_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_18;
        t = m_90(t);
        y_18 = t;
        t = v_18;
        t = foldr_3_0(k_90, l_90, m_90, t);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
        t = l_90(t);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm i_19 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_19, t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_84(t);
      }
    return(t);
  }
  t = i_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm c_19 = NULL,d_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_19 = ATgetFirst((ATermList) t);
            d_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_19;
        {
          ATerm w_6 (ATerm t)
          {
            t = d_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_6, t);
        }
      }
    }
  return(t);
}
ATerm b_20 (ATerm n_19, ATerm t)
{
  ATerm r_19 = NULL;
  t = SSL_explode_term(n_19);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_19;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_19 = NULL,w_19 = NULL,x_19 = NULL;
  x_19 = t;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              t = w_19;
              return(t);
            }
            t = s_19;
            t = at_end_1_0(x_6, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            t = b_20(x_19, t);
          }
      }
    }
  else
    {
      t = b_20(x_19, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = m_100(t);
        t = c_20(t);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
ATerm for_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  t = o_100(t);
  t = while_not_2_0(p_100, q_100, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_20, e_20, (ATerm) ATempty);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm f_20 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(((ATgetType(q_26) != AT_INT) || (ATgetInt((ATermInt) q_26) != 0)))
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
      }
      f_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_20;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,l_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__3))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
      i_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_20, term_m_19);
  t = geq_0_0(t);
  t = term_m_19;
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_20, term_m_19);
  t = f_9(g_20, m_20, t);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_20, h_20, (ATerm) ATinsert(CheckATermList(i_20), h_20));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(y_6, z_6, g_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(u_20, v_20, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm FitToMax_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  p_20 = t;
  t = foldr_3_0(h_7, i_7, m_7, t);
  q_20 = t;
  t = term_j_17;
  t = z_77(t);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, q_20);
  t = f_9(r_20, q_20, t);
  s_20 = t;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        t = term_t_18;
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_20, term_t_18);
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_20, w_20);
              ;
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              t = SSL_gtr(s_20, w_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_20, (ATerm) ATempty);
          t = copy_0_0(t);
          t_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_20, t_20);
          t = conc_0_0(t);
        }
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = p_20;
              ;
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              {
                ATerm y_20 = NULL,a_21 = NULL,b_21 = NULL;
                t = term_x_20;
                y_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, p_20), term_a_27);
                a_21 = t;
                t = SSL_printnl(y_20, a_21);
                t = term_m_19;
                b_21 = t;
                t = SSL_exit(b_21);
                t = (ATerm) ATinsert(ATinsert(ATempty, p_20), term_a_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm R_2_0 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,v_0 = NULL,b_1 = NULL;
  q_21 = t;
  if(match_cons(t, sym_R_2))
    {
      m_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  c_21 = t;
  t = m_21;
  t = f_71(t);
  o_21 = t;
  t = n_21;
  t = g_71(t);
  p_21 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_R_2, o_21, p_21);
  v_0 = t;
  t = SSLsetAnnotations(v_0, c_21);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm b_27 = t;
  if((PushChoice() == 0))
    {
      t = R_2_0(_id, u_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_27;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, (ATerm) ATempty);
  {
    ATerm b_23 (ATerm t)
    {
      ATerm x_21 = NULL,y_21 = NULL,b_22 = NULL,c_22 = NULL,e_22 = NULL,f_22 = NULL;
      if(match_cons(t, sym__2))
        {
          b_22 = ATgetArgument(t, 0);
          f_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_22;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm k_22 = NULL;
          t = f_22;
          t = reverse_acc_2_0(_id, r_7, t);
          k_22 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, k_22));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_22 = ATgetFirst((ATermList) t);
              e_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_22;
          if(match_cons(t, sym_R_2))
            {
              x_21 = ATgetArgument(t, 0);
              y_21 = ATgetArgument(t, 1);
              {
                ATerm c_27 = t;
                int d_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_22 = NULL,q_22 = NULL;
                    t = f_22;
                    t = reverse_acc_2_0(_id, s_7, t);
                    p_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_22, (ATerm) ATempty);
                    t = b_23(t);
                    q_22 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(q_22), (ATerm) ATmakeAppl(sym_R_2, x_21, y_21)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, p_22));
                    ;
                    LocalPopChoice(d_27);
                  }
                else
                  {
                    t = c_27;
                    t = (ATerm) ATmakeAppl(sym__2, e_22, (ATerm) ATinsert(CheckATermList(f_22), c_22));
                    t = b_23(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, e_22, (ATerm) ATinsert(CheckATermList(f_22), c_22));
              t = b_23(t);
            }
        }
      return(t);
    }
    t = b_23(t);
    t = filter_1_0(t_7, t);
  }
  return(t);
}
ATerm w_38 (ATerm a_33, ATerm b_33, ATerm c_33, ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm j_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,q_33 = NULL;
  t = c_33;
  t = construct_rows_0_0(t);
  t = map_1_0(w_7, t);
  {
    ATerm x_7 (ATerm t)
    {
      ATerm y_7 (ATerm t)
      {
        t = a_33;
        t = foldr_3_0(z_7, a_8, e_8, t);
        return(t);
      }
      t = FitToMax_1_0(y_7, t);
      return(t);
    }
    t = map_1_0(x_7, t);
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, f_8, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, h_8, t);
    j_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_33, j_33);
    t = genzip_4_0(l_8, o_8, q_8, _id, t);
    m_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_33, (ATerm) ATmakeAppl(sym__2, d_33, (ATerm) ATempty));
    t = foldl_1_0(r_8, t);
    if(match_cons(t, sym__2))
      {
        n_33 = ATgetArgument(t, 0);
        o_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_33;
    t = reverse_acc_2_0(_id, s_8, t);
    t = matrix_transpose_0_0(t);
    {
      ATerm t_8 (ATerm t)
      {
        ATerm f_34 = NULL;
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, n_33);
        return(t);
      }
      t = map_1_0(t_8, t);
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, b_33, q_33, d_33);
      t = a_9(b_33, q_33, d_33, t);
    }
  }
  return(t);
}
ATerm x_38 (ATerm g_34, ATerm h_34, ATerm i_34, ATerm j_34, ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  t = g_34;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(u_8, t);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = term_t_18;
      }
    o_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_34, o_34);
    t = g_10(i_34, o_34, t);
    p_34 = t;
    t = h_34;
    t = filter_1_0(is_real_vbox_0_0, t);
    q_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_34);
      }
    else
      {
        ATerm r_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, i_34, p_34, q_34);
        t = i_9(i_34, p_34, q_34, t);
        r_34 = t;
        t = (ATerm) ATmakeAppl(sym__3, g_34, r_34, i_34);
        t = a_9(g_34, r_34, i_34, t);
      }
  }
  return(t);
}
ATerm y_38 (ATerm s_34, ATerm t_34, ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm b_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  t = s_34;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(v_8, t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = term_m_19;
      }
    j_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_35, term_q_19);
    t = copy_char_0_0(t);
    b_35 = t;
    t = SSL_strlen(b_35);
    h_35 = t;
    t = t_34;
    t = filter_1_0(is_real_hbox_0_0, t);
    i_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_35, u_34);
    {
      ATerm w_8 (ATerm t)
      {
        ATerm x_8 (ATerm t)
        {
          ATerm x_35 = NULL;
          x_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_35, x_35);
          t = g_10(h_35, x_35, t);
          return(t);
        }
        ATerm i_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = i_27;
            {
              ATerm s_35 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL;
              s_35 = t;
              t = term_x_20;
              e_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, s_35), term_z_20);
              g_2 = t;
              t = SSL_printnl(e_2, g_2);
              t = term_m_19;
              h_2 = t;
              t = SSL_exit(h_2);
              t = (ATerm) ATinsert(ATinsert(ATempty, s_35), term_z_20);
            }
          }
        t = _2_0(_id, x_8, t);
        return(t);
      }
      t = thread_map_1_0(w_8, t);
      {
        ATerm e_9 (ATerm t)
        {
          ATerm y_35 = NULL;
          y_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_35, y_35);
          t = b_9(b_35, y_35, t);
          return(t);
        }
        t = _2_0(e_9, _id, t);
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_9 (ATerm t)
              {
                ATerm z_35 = NULL;
                z_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_35, h_35);
                t = f_9(z_35, h_35, t);
                return(t);
              }
              t = _2_0(g_9, j_9, t);
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
            }
        }
      }
    }
  }
  return(t);
}
ATerm z_38 (ATerm a_36, ATerm b_36, ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,q_36 = NULL,r_36 = NULL;
  t = a_36;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(q_9, t);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = term_m_19;
      }
    n_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_36, term_q_19);
    t = copy_char_0_0(t);
    i_36 = t;
    t = a_36;
    {
      ATerm r_27 = t;
      int s_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(s_9, t);
          ;
          LocalPopChoice(s_27);
        }
      else
        {
          t = r_27;
          t = term_t_18;
        }
      q_36 = t;
      t = term_m_19;
      r_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_36, term_m_19);
      t = g_10(q_36, r_36, t);
      o_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_36, term_l_18);
      t = copy_char_0_0(t);
      t = SSL_strlen(i_36);
      j_36 = t;
      t = a_36;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SOpt_value_1_0(t_9, t);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = term_t_18;
          }
        k_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_36, k_36);
        t = g_10(c_36, k_36, t);
        l_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_36)));
        {
          ATerm v_9 (ATerm t)
          {
            ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
            w_36 = t;
            if(match_cons(t, sym__2))
              {
                x_36 = ATgetArgument(t, 0);
                y_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_36;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_36 = ATgetFirst((ATermList) t);
                v_36 = (ATerm) ATgetNext((ATermList) t);
                t = s_36;
                if(match_cons(t, sym__2))
                  {
                    t_36 = ATgetArgument(t, 0);
                    u_36 = ATgetArgument(t, 1);
                    {
                      ATerm v_27 = t;
                      int w_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_9 (ATerm t)
                          {
                            t = j_36;
                            return(t);
                          }
                          t = w_36;
                          t = d_9(w_9, x_36, t_36, u_36, v_36, t);
                          ;
                          LocalPopChoice(w_27);
                        }
                      else
                        {
                          t = v_27;
                          {
                            ATerm x_9 (ATerm t)
                            {
                              t = j_36;
                              return(t);
                            }
                            ATerm y_9 (ATerm t)
                            {
                              t = l_36;
                              return(t);
                            }
                            t = w_36;
                            t = c_9(x_9, y_9, x_36, y_36, t);
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm i_10 (ATerm t)
                    {
                      t = j_36;
                      return(t);
                    }
                    ATerm m_10 (ATerm t)
                    {
                      t = l_36;
                      return(t);
                    }
                    t = w_36;
                    t = c_9(i_10, m_10, x_36, y_36, t);
                  }
              }
            else
              {
                ATerm o_10 (ATerm t)
                {
                  t = j_36;
                  return(t);
                }
                ATerm p_10 (ATerm t)
                {
                  t = l_36;
                  return(t);
                }
                t = w_36;
                t = c_9(o_10, p_10, x_36, y_36, t);
              }
            return(t);
          }
          t = foldl_1_0(v_9, t);
          t = reverse_acc_2_0(_id, r_10, t);
          t = map_1_0(x_10, t);
          {
            ATerm f_11 (ATerm t)
            {
              ATerm g_11 (ATerm t)
              {
                ATerm l_37 = NULL;
                l_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_36, l_37);
                t = b_9(i_36, l_37, t);
                return(t);
              }
              t = _2_0(g_11, _id, t);
              return(t);
            }
            t = map_1_0(f_11, t);
            m_36 = t;
            t = (ATerm) ATmakeAppl(sym__3, a_36, m_36, c_36);
            t = a_9(a_36, m_36, c_36, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm r_33 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_33;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  if(match_cons(t, sym__2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(s_33, t_33, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_27 = ATgetArgument(t, 0);
      if(((ATgetType(y_27) != AT_LIST) || !(ATisEmpty(y_27))))
        _fail(t);
      {
        ATerm z_27 = ATgetArgument(t, 1);
        if(((ATgetType(z_27) != AT_LIST) || !(ATisEmpty(z_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
        {
          u_33 = ATgetFirst((ATermList) a_28);
          v_33 = (ATerm) ATgetNext((ATermList) a_28);
        }
      else
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(((ATgetType(b_28) == AT_LIST) && !(ATisEmpty(b_28))))
          {
            w_33 = ATgetFirst((ATermList) b_28);
            x_33 = (ATerm) ATgetNext((ATermList) b_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_33, w_33), (ATerm) ATmakeAppl(sym__2, v_33, x_33));
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_33), y_33);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(match_cons(e_28, sym__2))
        {
          a_34 = ATgetArgument(e_28, 0);
          {
            ATerm j_28 = ATgetArgument(e_28, 1);
            if(match_cons(j_28, sym__2))
              {
                b_34 = ATgetArgument(j_28, 0);
                c_34 = ATgetArgument(j_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(match_cons(g_28, sym__2))
          {
            d_34 = ATgetArgument(g_28, 0);
            e_34 = ATgetArgument(g_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_9(a_34, b_34, c_34, d_34, e_34, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm k_28 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = _2_0(d_11, _id, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = reverse_acc_2_0(_id, e_11, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,y_37 = NULL,z_37 = NULL,b_38 = NULL;
  v_37 = t;
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_22, b_38);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_37 = ATgetFirst((ATermList) t);
          z_37 = (ATerm) ATgetNext((ATermList) t);
          t = z_37;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, y_37, b_38);
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                ;
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                {
                  ATerm t_2 = NULL,v_2 = NULL,a_3 = NULL;
                  t = term_x_20;
                  t_2 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_37, b_38)), term_z_20);
                  v_2 = t;
                  t = SSL_printnl(t_2, v_2);
                  t = term_m_19;
                  a_3 = t;
                  t = SSL_exit(a_3);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_37, b_38)), term_z_20);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              y_37 = ATgetArgument(t, 0);
              z_37 = ATgetArgument(t, 1);
              {
                ATerm g_4 = NULL,h_4 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, y_37, b_38);
                {
                  ATerm n_28 = t;
                  int o_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      ;
                      LocalPopChoice(o_28);
                    }
                  else
                    {
                      t = n_28;
                      {
                        ATerm k_4 = NULL,y_4 = NULL,c_5 = NULL;
                        t = term_x_20;
                        k_4 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_37, b_38)), term_z_20);
                        y_4 = t;
                        t = SSL_printnl(k_4, y_4);
                        t = term_m_19;
                        c_5 = t;
                        t = SSL_exit(c_5);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_37, b_38)), term_z_20);
                      }
                    }
                  g_4 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_28 = ATgetArgument(t, 0);
                      h_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, y_37, z_37), b_38);
                  {
                    ATerm q_28 = t;
                    int r_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_5 = NULL;
                        t = get_width_0_0(t);
                        f_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, h_4, f_5);
                        t = leq_0_0(t);
                        LocalPopChoice(r_28);
                        t = g_4;
                      }
                    else
                      {
                        t = q_28;
                        t = (ATerm) ATmakeAppl(sym__2, z_37, b_38);
                        {
                          ATerm s_28 = t;
                          int t_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(t_28);
                            }
                          else
                            {
                              t = s_28;
                              {
                                ATerm g_5 = NULL,h_5 = NULL,k_5 = NULL;
                                t = term_x_20;
                                g_5 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_37, b_38)), term_z_20);
                                h_5 = t;
                                t = SSL_printnl(g_5, h_5);
                                t = term_m_19;
                                k_5 = t;
                                t = SSL_exit(k_5);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_37, b_38)), term_z_20);
                              }
                            }
                        }
                      }
                  }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  y_37 = ATgetArgument(t, 0);
                  z_37 = ATgetArgument(t, 1);
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_37, z_37), b_38);
                        {
                          ATerm w_28 = t;
                          int x_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(x_28);
                            }
                          else
                            {
                              t = w_28;
                              {
                                ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
                                t = term_x_20;
                                z_5 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_37, z_37), b_38)), term_z_20);
                                a_6 = t;
                                t = SSL_printnl(z_5, a_6);
                                t = term_m_19;
                                b_6 = t;
                                t = SSL_exit(b_6);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_37, z_37), b_38)), term_z_20);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(v_28);
                      }
                    else
                      {
                        t = u_28;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_37, z_37), b_38);
                        {
                          ATerm y_28 = t;
                          int z_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(z_28);
                            }
                          else
                            {
                              t = y_28;
                              {
                                ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
                                t = term_x_20;
                                j_7 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_37, z_37), b_38)), term_z_20);
                                k_7 = t;
                                t = SSL_printnl(j_7, k_7);
                                t = term_m_19;
                                l_7 = t;
                                t = SSL_exit(l_7);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_37, z_37), b_38)), term_z_20);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm a_29 = t;
                  int b_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm c_29 = ATgetArgument(t, 0);
                          z_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(b_29);
                      t = (ATerm) ATmakeAppl(sym__2, z_37, b_38);
                      {
                        ATerm d_29 = t;
                        int e_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            ;
                            LocalPopChoice(e_29);
                          }
                        else
                          {
                            t = d_29;
                            {
                              ATerm m_8 = NULL,n_8 = NULL,p_8 = NULL;
                              t = term_x_20;
                              m_8 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_37, b_38)), term_z_20);
                              n_8 = t;
                              t = SSL_printnl(m_8, n_8);
                              t = term_m_19;
                              p_8 = t;
                              t = SSL_exit(p_8);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_37, b_38)), term_z_20);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = a_29;
                      {
                        ATerm f_29 = t;
                        int g_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm h_29 = ATgetArgument(t, 0);
                                z_37 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(g_29);
                            t = z_37;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                o_37 = ATgetFirst((ATermList) t);
                                q_37 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = o_37;
                            if(match_cons(t, sym_S_1))
                              {
                                p_37 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = q_37;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, p_37, b_38);
                          }
                        else
                          {
                            t = f_29;
                            if(match_cons(t, sym_S_1))
                              {
                                y_37 = ATgetArgument(t, 0);
                                {
                                  ATerm i_38 = NULL,j_38 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, y_37, b_38);
                                  t = a_10(y_37, b_38, t);
                                  i_38 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, b_38, i_38);
                                  t = g_10(b_38, i_38, t);
                                  j_38 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, y_37, j_38);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    y_37 = ATgetArgument(t, 0);
                                    z_37 = ATgetArgument(t, 1);
                                    u_37 = ATgetArgument(t, 2);
                                    t = y_37;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        t_37 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_37;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        r_37 = ATgetFirst((ATermList) t);
                                        s_37 = (ATerm) ATgetNext((ATermList) t);
                                        t = s_37;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = r_37;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_29 = t;
                                                int j_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_38(t_37, z_37, u_37, b_38, v_37, t);
                                                    ;
                                                    LocalPopChoice(j_29);
                                                  }
                                                else
                                                  {
                                                    t = i_29;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_38);
                                                  }
                                              }
                                            else
                                              {
                                                t = w_38(t_37, z_37, u_37, b_38, v_37, t);
                                              }
                                          }
                                        else
                                          {
                                            t = r_37;
                                            t = w_38(t_37, z_37, u_37, b_38, v_37, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm k_29 = t;
                                            int l_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = w_38(t_37, z_37, u_37, b_38, v_37, t);
                                                ;
                                                LocalPopChoice(l_29);
                                              }
                                            else
                                              {
                                                t = k_29;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_38);
                                              }
                                          }
                                        else
                                          {
                                            t = w_38(t_37, z_37, u_37, b_38, v_37, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        y_37 = ATgetArgument(t, 0);
                                        z_37 = ATgetArgument(t, 1);
                                        t = x_38(y_37, z_37, b_38, v_37, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            y_37 = ATgetArgument(t, 0);
                                            z_37 = ATgetArgument(t, 1);
                                            t = y_38(y_37, z_37, b_38, v_37, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                y_37 = ATgetArgument(t, 0);
                                                z_37 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = z_38(y_37, z_37, b_38, v_37, t);
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
ATerm s_39 (ATerm l_39, ATerm t)
{
  t = SSL_fclose(l_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  q_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_39 = ATgetArgument(t, 0);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_39);
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = s_39(q_39, t);
          }
      }
    }
  else
    {
      t = s_39(q_39, t);
    }
  return(t);
}
ATerm b_10 (ATerm o_47, ATerm t)
{
  t = SSL_read_term_from_stream(o_47);
  return(t);
}
ATerm c_10 (ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_fopen(o_42, p_42);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_39);
  return(t);
}
ATerm _2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,b_40 = NULL,c_40 = NULL,j_1 = NULL,p_1 = NULL;
  c_40 = t;
  if(match_cons(t, sym__2))
    {
      x_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  u_39 = t;
  t = x_39;
  t = q_65(t);
  z_39 = t;
  t = y_39;
  t = r_65(t);
  b_40 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_39, b_40);
  j_1 = t;
  t = SSLsetAnnotations(j_1, u_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_40 = NULL;
  t = SSL_stdin_stream();
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_40 = NULL;
  t = SSL_stdout_stream();
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_stderr_stream();
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_40);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm f_41 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_41;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  t = SSL_is_string(i_41);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      ATerm p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_41 = NULL,r_9 = NULL;
        c_41 = t;
        t = SSL_explode_term(c_41);
        if(match_cons(t, sym__2))
          {
            ATerm s_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_29) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_29 = ATgetArgument(t, 1);
              if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
                {
                  r_9 = ATgetFirst((ATermList) t_29);
                  {
                    ATerm u_29 = (ATerm) ATgetNext((ATermList) t_29);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_9;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_9;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_9;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_9;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_41 = NULL,e_41 = NULL;
              t = _2_0(h_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_41 = ATgetArgument(t, 0);
                  e_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_10(d_41, e_41, t);
              ;
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              {
                ATerm g_41 = NULL,h_41 = NULL;
                t = _2_0(i_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_41 = ATgetArgument(t, 0);
                    h_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_10(g_41, h_41, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,o_41 = NULL;
  ATerm y_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_41 = NULL;
      p_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_41, term_c_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = y_29;
      t = debug_1_0(j_11, t);
      _fail(t);
    }
  k_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(o_41, t);
  l_41 = t;
  t = k_41;
  t = fclose_0_0(t);
  t = l_41;
  return(t);
}
ATerm d_10 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_access(g_42, h_42);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_41 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_d_30;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm z_41 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_17);
      z_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_41, (ATerm) ATinsert(ATempty, term_p_17));
      t = d_10(x_41, z_41, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_10 (ATerm r_48, ATerm s_48, ATerm t)
{
  t = SSL_copy(r_48, s_48);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,y_42 = NULL;
  v_42 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = v_42;
        t = k_0(t);
        h_10 = t;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_42, h_10);
          t = e_10(y_42, h_10, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
        }
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_11 = NULL;
              t = v_42;
              t = k_0(t);
              a_11 = t;
              {
                ATerm k_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_30 = t;
                    int m_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(m_30);
                      }
                    else
                      {
                        t = l_30;
                        {
                          ATerm n_30 = t;
                          int o_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(o_30);
                            }
                          else
                            {
                              t = n_30;
                              {
                                ATerm b_11 = NULL;
                                b_11 = t;
                                if((y_42 != t))
                                  {
                                    _fail(t);
                                  }
                                t = b_11;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_30;
                  }
                t = (ATerm) ATmakeAppl(sym__2, y_42, a_11);
                t = e_10(y_42, a_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
              }
              ;
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = v_42;
              t = k_0(t);
              if((y_42 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
            }
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  c_43 = t;
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
        t = k_10(y_31, z_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_30 = ATgetFirst((ATermList) t);
            d_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_30);
        t = SSL_table_put(y_31, z_31, d_43);
        t = (ATerm) ATmakeAppl(sym__3, y_31, z_31, d_43);
      }
    else
      {
        t = p_30;
        t = SSL_table_remove(y_31, z_31);
        t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
      }
    t = c_43;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,z_43 = NULL,c_44 = NULL;
  v_43 = t;
  t = w_93(t);
  w_43 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL;
        t = term_m_16;
        h_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_43, term_m_16);
        t = k_10(w_43, h_44, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_43 = ATgetFirst((ATermList) t);
        x_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_16;
    c_44 = t;
    t = SSL_table_put(w_43, c_44, x_43);
    t = z_43;
    {
      ATerm k_11 (ATerm t)
      {
        ATerm i_44 = NULL;
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_43, i_44);
        t = f_10(w_43, i_44, t);
        return(t);
      }
      t = map_1_0(k_11, t);
      t = v_43;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_82(t);
      t = w_82(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = w_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  k_44 = t;
  t = v_93(t);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_44, term_m_16);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_30 = ATgetArgument(t, 0);
            ATerm z_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_16;
        u_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_44, term_m_16);
        t = k_10(l_44, u_44, t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
    m_44 = t;
    t = term_m_16;
    n_44 = t;
    t = (ATerm) ATinsert(CheckATermList(m_44), (ATerm) ATempty);
    o_44 = t;
    t = SSL_table_put(l_44, n_44, o_44);
    t = k_44;
  }
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_45 = NULL;
      h_45 = t;
      t = SSL_remove(h_45);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
    }
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm b_45 = NULL;
  t = begin_scope_1_0(l_11, t);
  {
    ATerm m_11 (ATerm t)
    {
      ATerm c_45 = NULL;
      c_45 = t;
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_45 = NULL,e_45 = NULL;
            t = term_q_17;
            d_45 = t;
            t = term_m_16;
            e_45 = t;
            t = term_e_31;
            t = k_10(d_45, e_45, t);
            ;
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_45 != NULL) && (b_45 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_45 = ATgetFirst((ATermList) t);
            {
              ATerm f_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(b_45);
        t = map_1_0(o_11, t);
        t = c_45;
        t = end_scope_1_0(w_11, t);
      }
      return(t);
    }
    t = restore_always_2_0(j_78, m_11, t);
  }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = term_j_31;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_45 = NULL;
        t = term_m_31;
        t = get_config_0_0(t);
        j_45 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_45);
        ;
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = term_d_30;
      }
    t = k_78(t);
    t = copy_to_1_0(e_12, t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_12, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,n_45 = NULL,p_45 = NULL,q_45 = NULL;
  k_45 = t;
  t = term_j_17;
  t = whoami_0_0(t);
  l_45 = t;
  t = term_x_20;
  n_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), l_45), term_n_31);
  p_45 = t;
  t = SSL_printnl(n_45, p_45);
  t = term_m_19;
  q_45 = t;
  t = SSL_exit(q_45);
  t = k_45;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,y_45 = NULL,z_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_46 = NULL,c_46 = NULL,d_46 = NULL;
      t = term_j_17;
      t = j_0(t);
      a_46 = t;
      t = term_p_31;
      c_46 = t;
      t = term_q_31;
      d_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_31, term_q_31, a_46);
      t = l_10(c_46, d_46, a_46, t);
      _fail(t);
    }
  else
    {
      ATerm i_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          v_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_45 = ATgetFirst((ATermList) t);
          z_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      t = h_0(t);
      t = y_45;
      t = i_0(t);
      i_46 = t;
      t = (ATerm) ATinsert(CheckATermList(z_45), i_46);
    }
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  if(match_string(t, "-k"))
    {
      t = k_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_46;
    }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,o_46 = NULL;
  l_46 = t;
  t = SSL_string_to_int(l_46);
  m_46 = t;
  t = term_r_31;
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, m_46);
  t = n_10(o_46, m_46, t);
  t = l_46;
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_12, a_13, b_13, t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  if(match_string(t, "-S"))
    {
      t = s_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_46;
    }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  t = term_w_31;
  u_46 = t;
  t = term_t_18;
  v_46 = t;
  t = term_x_31;
  t = n_10(u_46, v_46, t);
  t = term_a_32;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm j_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm w_46 = NULL,b_47 = NULL,e_47 = NULL;
  w_46 = t;
  t = SSL_string_to_int(w_46);
  b_47 = t;
  t = term_w_31;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_31, b_47);
  t = n_10(e_47, b_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_46);
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm m_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  t = term_d_32;
  f_47 = t;
  t = term_j_17;
  g_47 = t;
  t = term_e_32;
  t = n_10(f_47, g_47, t);
  t = term_f_32;
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_13, g_13, i_13, t);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_13, k_13, l_13, t);
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            t = Option_3_0(m_13, n_13, o_13, t);
          }
      }
    }
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  if(match_string(t, "-o"))
    {
      t = i_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_47;
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  j_47 = t;
  t = term_i_31;
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_31, j_47);
  t = n_10(k_47, j_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_47);
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_13, q_13, r_13, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm m_47 = NULL;
  m_47 = t;
  if(match_string(t, "-i"))
    {
      t = m_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_47;
    }
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm n_47 = NULL,q_47 = NULL;
  n_47 = t;
  t = term_m_31;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_31, n_47);
  t = n_10(q_47, n_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_47);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_13, t_13, u_13, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  t = term_n_32;
  s_47 = t;
  t = term_j_17;
  t_47 = t;
  t = term_o_32;
  t = n_10(s_47, t_47, t);
  t = term_p_32;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  if(match_string(t, "-w"))
    {
      t = u_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = u_47;
    }
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  t = SSL_string_to_int(v_47);
  w_47 = t;
  t = term_f_19;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, w_47);
  t = n_10(x_47, w_47, t);
  t = v_47;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(y_13, z_13, a_14, t);
                  ;
                  LocalPopChoice(x_32);
                }
              else
                {
                  t = w_32;
                  {
                    ATerm y_32 = t;
                    int z_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(z_32);
                      }
                    else
                      {
                        t = y_32;
                        {
                          ATerm f_33 = t;
                          int g_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(g_33);
                            }
                          else
                            {
                              t = f_33;
                              t = ArgOption_3_0(b_14, i_14, j_14, t);
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
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_17;
  t = whoami_0_0(t);
  y_47 = t;
  t = term_x_20;
  z_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_33), y_47);
  a_48 = t;
  t = SSL_printnl(z_47, a_48);
  t = term_m_19;
  b_48 = t;
  t = SSL_exit(b_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_10 (ATerm i_64, ATerm j_64, ATerm t)
{
  ATerm p_33 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_64, j_64);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = p_33;
      t = SSL_addr(i_64, j_64);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_90(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm f_48 = NULL,g_48 = NULL,q_48 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_48 = ATgetFirst((ATermList) t);
            g_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_48;
        t = foldr_2_0(i_90, j_90, t);
        q_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_48, q_48);
        t = j_90(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(v_12, y_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_48 = NULL,p_11 = NULL,s_11 = NULL;
  t = times_0_0(t);
  p_11 = t;
  t = SSL_explode_term(p_11);
  if(match_cons(t, sym__2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11;
  t = foldr_2_0(k_14, r_14, t);
  w_48 = t;
  t = SSL_TicksToSeconds(w_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_49;
        if((i_49 != t))
          {
            _fail(t);
          }
        t = h_49;
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
        {
          ATerm a_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_49, j_49);
              ;
              LocalPopChoice(c_35);
            }
          else
            {
              t = a_35;
              t = SSL_gtr(i_49, j_49);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_49 = NULL,v_49 = NULL;
      s_49 = t;
      t = term_w_31;
      t = get_config_0_0(t);
      v_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_49, term_m_19);
      t = geq_0_0(t);
      t = s_49;
      t = y_92(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
    }
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,a_50 = NULL,b_50 = NULL;
  t = run_time_0_0(t);
  x_49 = t;
  t = term_j_17;
  t = whoami_0_0(t);
  y_49 = t;
  t = term_x_20;
  a_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_35), x_49), term_f_35), y_49);
  b_50 = t;
  t = SSL_printnl(a_50, b_50);
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_35), x_49), term_f_35), y_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_18;
  c_50 = t;
  t = SSL_exit(c_50);
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      {
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = fetch_1_0(x_14, t);
    }
  t = s_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,k_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_50 = ATgetFirst((ATermList) t);
      k_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_50 = NULL,u_50 = NULL;
        t = k_50;
        t = g_0(t);
        s_50 = t;
        t = f_50;
        t = e_0(t);
        u_50 = t;
        t = k_50;
        {
          ATerm a_15 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_50), u_50);
            return(t);
          }
          t = reverse_acc_2_0(e_0, a_15, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,z_50 = NULL,d_51 = NULL,e_51 = NULL,v_1 = NULL,w_1 = NULL;
  e_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_51);
  x_50 = t;
  t = z_50;
  t = v_72(t);
  d_51 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_51);
  v_1 = t;
  t = SSLsetAnnotations(v_1, x_50);
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm k_51 = NULL;
  k_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_51), term_t_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL;
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = fetch_1_0(b_15, t);
    }
  t = term_w_35;
  t = echo_0_0(t);
  t = term_p_31;
  i_51 = t;
  t = term_q_31;
  j_51 = t;
  t = term_e_36;
  t = k_10(i_51, j_51, t);
  t = reverse_acc_2_0(_id, c_15, t);
  t = map_1_0(e_15, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_72 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,o_51 = NULL,q_51 = NULL,r_51 = NULL,x_1 = NULL,y_1 = NULL;
  r_51 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_51);
  l_51 = t;
  t = o_51;
  t = w_72(t);
  q_51 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_51);
  x_1 = t;
  t = SSLsetAnnotations(x_1, l_51);
  return(t);
}
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm w_51 (ATerm t)
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_84, _id, t);
        ;
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        t = Cons_2_0(_id, w_51, t);
      }
    return(t);
  }
  t = w_51(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,d_52 = NULL;
  z_51 = t;
  {
    ATerm h_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_36 = ATgetFirst((ATermList) t);
                ATerm a_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_51;
          }
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = h_36;
        t = (ATerm) ATinsert(ATempty, z_51);
      }
    a_52 = t;
    t = term_j_31;
    d_52 = t;
    t = SSL_printnl(d_52, a_52);
    t = z_51;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_10 (ATerm e_63, ATerm f_63, ATerm t)
{
  t = SSL_strcat(e_63, f_63);
  return(t);
}
ATerm debug_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  l_52 = t;
  t = p_95(t);
  m_52 = t;
  t = term_x_20;
  n_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_52), m_52);
  o_52 = t;
  t = SSL_printnl(n_52, o_52);
  t = l_52;
  return(t);
}
ATerm map_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm r_52 (ATerm t)
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = Cons_2_0(y_83, r_52, t);
      }
    return(t);
  }
  t = r_52(t);
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_52 = NULL;
      y_52 = t;
      t = SSL_is_string(y_52);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm i_37 = t;
        int j_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_15, t);
            ;
            LocalPopChoice(j_37);
          }
        else
          {
            t = i_37;
            {
              ATerm f_53 = NULL,g_53 = NULL,i_53 = NULL;
              f_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_53 = ATgetArgument(t, 0);
                  t = g_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_53 = ATgetArgument(t, 0);
                      t = g_53;
                      {
                        ATerm k_37 = t;
                        int m_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_37);
                          }
                        else
                          {
                            t = k_37;
                            t = debug_1_0(l_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_53 = NULL,n_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_53 = ATgetArgument(t, 0);
                          i_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_53;
                      t = eval_config_0_0(t);
                      m_53 = t;
                      t = i_53;
                      t = eval_config_0_0(t);
                      n_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
                      t = j_10(m_53, n_53, t);
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
  ATerm q_53 = NULL,t_53 = NULL;
  q_53 = t;
  t = term_n_37;
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_37, q_53);
  t = k_10(t_53, q_53, t);
  {
    ATerm x_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_53 = NULL,v_53 = NULL;
        t = eval_config_0_0(t);
        u_53 = t;
        t = term_n_37;
        v_53 = t;
        t = SSL_table_put(v_53, q_53, u_53);
        t = u_53;
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = x_37;
      }
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  t = term_c_38;
  w_53 = t;
  t = term_j_17;
  x_53 = t;
  t = term_d_38;
  t = n_10(w_53, x_53, t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm p_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  t = term_c_38;
  y_53 = t;
  t = term_j_17;
  z_53 = t;
  t = term_d_38;
  t = n_10(y_53, z_53, t);
  t = term_f_38;
  a_54 = t;
  t = term_j_17;
  b_54 = t;
  t = term_g_38;
  t = n_10(a_54, b_54, t);
  t = term_h_38;
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_15, n_15, o_15, t);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      t = Option_3_0(p_15, q_15, r_15, t);
    }
  return(t);
}
ATerm n_10 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm c_54 = NULL;
  t = term_n_37;
  c_54 = t;
  t = SSL_table_put(c_54, w_42, x_42);
  t = (ATerm) ATmakeAppl(sym__3, term_n_37, w_42, x_42);
  return(t);
}
ATerm k_10 (ATerm k_33, ATerm l_33, ATerm t)
{
  t = SSL_table_get(k_33, l_33);
  return(t);
}
ATerm l_10 (ATerm t_31, ATerm u_31, ATerm s_31, ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_38 = ATgetArgument(t, 0);
            ATerm q_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
        t = k_10(t_31, u_31, t);
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = (ATerm) ATempty;
      }
    g_54 = t;
    t = (ATerm) ATinsert(CheckATermList(g_54), s_31);
    h_54 = t;
    t = SSL_table_put(t_31, u_31, h_54);
    t = f_54;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_54 = NULL,t_54 = NULL,u_54 = NULL;
      t = term_j_17;
      t = d_0(t);
      r_54 = t;
      t = term_p_31;
      t_54 = t;
      t = term_q_31;
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_31, term_q_31, r_54);
      t = l_10(t_54, u_54, r_54, t);
      _fail(t);
    }
  else
    {
      ATerm y_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_54 = ATgetFirst((ATermList) t);
          q_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_54;
      t = a_0(t);
      t = term_j_17;
      t = c_0(t);
      y_54 = t;
      t = (ATerm) ATinsert(CheckATermList(q_54), y_54);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,f_55 = NULL,g_55 = NULL,z_1 = NULL,a_2 = NULL;
  g_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_55 = ATgetFirst((ATermList) t);
      c_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  z_54 = t;
  t = b_55;
  t = f_70(t);
  d_55 = t;
  t = c_55;
  t = g_70(t);
  f_55 = t;
  a_2 = t;
  t = (ATerm) ATinsert(CheckATermList(f_55), d_55);
  z_1 = t;
  t = SSLsetAnnotations(z_1, z_54);
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm r_55 = NULL,t_55 = NULL;
  r_55 = t;
  t = term_i_33;
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_33, r_55);
  t = n_10(t_55, r_55, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, r_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm q_55 = NULL;
  q_55 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_38;
        t = q_99(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
      }
    t = q_55;
    {
      ATerm u_15 (ATerm t)
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_39 = t;
            int b_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_39);
              }
            else
              {
                t = a_39;
                t = q_99(t);
                t = Cons_2_0(_id, u_15, t);
              }
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            {
              ATerm v_55 = NULL,w_55 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_55 = ATgetFirst((ATermList) t);
                  w_55 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_55), (ATerm) ATmakeAppl(sym_Undefined_1, v_55));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_15, u_15, t);
    }
  }
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm r_56 = NULL;
  r_56 = t;
  if(match_string(t, "--help"))
    {
      t = r_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_56;
        }
    }
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t = term_r_35;
  s_56 = t;
  t = term_j_17;
  t_56 = t;
  t = term_c_39;
  t = n_10(s_56, t_56, t);
  t = term_d_39;
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_e_39;
  return(t);
}
ATerm c_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,o_56 = NULL;
  g_56 = t;
  t = term_p_31;
  k_56 = t;
  t = term_q_31;
  l_56 = t;
  t = (ATerm) ATempty;
  m_56 = t;
  t = SSL_table_put(k_56, l_56, m_56);
  t = g_56;
  {
    ATerm v_15 (ATerm t)
    {
      ATerm f_39 = t;
      int g_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_99(t);
          ;
          LocalPopChoice(g_39);
        }
      else
        {
          t = f_39;
          {
            ATerm h_39 = t;
            int i_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_15, x_15, a_16, t);
                ;
                LocalPopChoice(i_39);
              }
            else
              {
                t = h_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_15, t);
    {
      ATerm j_39 = t;
      int k_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_57 = NULL;
          j_57 = t;
          {
            ATerm m_39 = t;
            int n_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_14 = NULL;
                t = j_57;
                {
                  ATerm o_39 = t;
                  int r_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_35;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_39);
                    }
                  else
                    {
                      t = o_39;
                      t = fetch_1_0(c_16, t);
                    }
                  t = j_57;
                  t = default_system_usage_0_0(t);
                  t = term_t_18;
                  o_14 = t;
                  t = SSL_exit(o_14);
                }
                ;
                LocalPopChoice(n_39);
              }
            else
              {
                t = m_39;
                {
                  ATerm i_15 = NULL;
                  t = term_c_38;
                  t = get_config_0_0(t);
                  t = j_57;
                  t = default_system_about_0_0(t);
                  t = term_t_18;
                  i_15 = t;
                  t = SSL_exit(i_15);
                }
              }
          }
          ;
          LocalPopChoice(k_39);
        }
      else
        {
          t = j_39;
          {
            ATerm v_39 = t;
            int w_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_57 = NULL,n_57 = NULL,r_57 = NULL;
                ATerm d_16 (ATerm t)
                {
                  ATerm e_16 (ATerm t)
                  {
                    if(((h_56 != NULL) && (h_56 != t)))
                      _fail(t);
                    else
                      h_56 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_16, t);
                  return(t);
                }
                t = fetch_1_0(d_16, t);
                t = term_x_20;
                m_57 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_56)), term_a_40);
                n_57 = t;
                t = SSL_printnl(m_57, n_57);
                t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_56)), term_a_40));
                t = default_system_usage_0_0(t);
                t = term_m_19;
                r_57 = t;
                t = SSL_exit(r_57);
                ;
                LocalPopChoice(w_39);
              }
            else
              {
                t = v_39;
              }
          }
        }
      i_56 = t;
      t = term_p_31;
      o_56 = t;
      t = SSL_table_destroy(o_56);
      t = i_56;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,e_58 = NULL;
  t = parse_options_1_0(u_97, t);
  a_58 = t;
  t = term_d_40;
  b_58 = t;
  t = SSL_table_create(b_58);
  t = term_d_40;
  c_58 = t;
  t = term_e_40;
  e_58 = t;
  t = SSL_table_put(c_58, e_58, a_58);
  t = a_58;
  t = w_97(t);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_97, t);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        {
          ATerm h_40 = t;
          int i_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_40);
            }
          else
            {
              t = h_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = xtc_io_1_0(l_16, t);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = read_from_0_0(t);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_58, term_t_18);
  {
    ATerm j_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = j_40;
        {
          ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
          t = term_x_20;
          i_58 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_58, term_t_18)), term_z_20);
          j_58 = t;
          t = SSL_printnl(i_58, j_58);
          t = term_m_19;
          k_58 = t;
          t = SSL_exit(k_58);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_58, term_t_18)), term_z_20);
        }
      }
    g_58 = t;
    t = SSL_explode_term(g_58);
    if(match_cons(t, sym__2))
      {
        ATerm m_40 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) m_40) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm o_40 = ATgetArgument(t, 1);
          if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
            {
              h_58 = ATgetFirst((ATermList) o_40);
              {
                ATerm p_40 = (ATerm) ATgetNext((ATermList) o_40);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, h_58, term_q_40);
    t = topdown_print_to_0_0(t);
  }
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, f_16, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
