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
ATerm term_o_37;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_s_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_w_34;
ATerm term_n_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_x_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_i_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_v_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_i_25;
ATerm term_o_20;
ATerm term_b_20;
ATerm term_m_19;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_q_17;
ATerm term_f_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_n_14;
ATerm term_g_14;
ATerm term_r_13;
void init_constant_terms (void)
{
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_r_13);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_k_16);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_16);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_y_14);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_y_14);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_r_30);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_y_14);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_y_14);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_u_33, term_y_14);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm topdown_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm y_8 (ATerm z_93 (ATerm), ATerm r_43, ATerm p_43, ATerm);
ATerm y_1 (ATerm i_1, ATerm);
ATerm a_2 (ATerm l_1, ATerm m_1, ATerm o_1, ATerm);
ATerm m_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm z_9 (ATerm h_84 (ATerm), ATerm m_35, ATerm w_262, ATerm);
ATerm at_suffix_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm j_1 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm a_10 (ATerm z_29, ATerm a_30, ATerm);
ATerm leq_0_0 (ATerm);
ATerm get_width_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm z_8 (ATerm c_26, ATerm a_26, ATerm);
ATerm q_1 (ATerm);
ATerm a_9 (ATerm u_25, ATerm y_25, ATerm v_25, ATerm);
ATerm b_9 (ATerm y_34, ATerm z_34, ATerm);
ATerm c_9 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t_26, ATerm s_26, ATerm);
ATerm d_9 (ATerm v_77 (ATerm), ATerm o_26, ATerm m_26, ATerm p_26, ATerm n_26, ATerm);
ATerm foldl_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm f_9 (ATerm o_64, ATerm p_64, ATerm);
ATerm h_9 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm q_0, ATerm u_0, ATerm n_0, ATerm);
ATerm thread_map_1_0 (ATerm y_90 (ATerm), ATerm);
ATerm is_real_hbox_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_91 (ATerm), ATerm);
ATerm i_9 (ATerm j_27, ATerm k_27, ATerm l_27, ATerm);
ATerm e_13 (ATerm i_12, ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm is_real_vbox_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm matrix_transpose_0_0 (ATerm);
ATerm k_9 (ATerm w_60, ATerm x_60, ATerm y_60, ATerm);
ATerm l_9 (ATerm a_65, ATerm b_65, ATerm);
ATerm m_9 (ATerm g_65, ATerm h_65, ATerm);
ATerm n_9 (ATerm i_61, ATerm j_61, ATerm e_61, ATerm);
ATerm o_9 (ATerm p_61, ATerm n_61, ATerm o_61, ATerm);
ATerm p_9 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm);
ATerm l_18 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm);
ATerm m_18 (ATerm b_17, ATerm e_17, ATerm);
ATerm n_18 (ATerm k_17, ATerm l_17, ATerm);
ATerm align_column_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm flatten_list_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm u_9 (ATerm i_28, ATerm h_28, ATerm d_28, ATerm f_28, ATerm c_28, ATerm);
ATerm genzip_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm map_with_index_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_30 (ATerm v_28, ATerm);
ATerm conc_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm FitToMax_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm j_53 (ATerm w_44, ATerm x_44, ATerm y_44, ATerm z_44, ATerm a_45, ATerm);
ATerm l_53 (ATerm v_46, ATerm w_46, ATerm x_46, ATerm y_46, ATerm);
ATerm p_53 (ATerm h_47, ATerm i_47, ATerm k_47, ATerm l_47, ATerm);
ATerm q_53 (ATerm h_49, ATerm r_49, ATerm u_49, ATerm v_49, ATerm);
ATerm r_4 (ATerm);
ATerm d_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm k_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm o_7 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm p_54 (ATerm e_54, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_10 (ATerm o_47, ATerm);
ATerm c_10 (ATerm o_42, ATerm p_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_56 (ATerm f_55, ATerm);
ATerm o_56 (ATerm j_55, ATerm m_55, ATerm n_55, ATerm);
ATerm p_56 (ATerm y_55, ATerm z_55, ATerm a_56, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm d_10 (ATerm g_42, ATerm h_42, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_10 (ATerm r_48, ATerm s_48, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm f_10 (ATerm y_31, ATerm z_31, ATerm);
ATerm end_scope_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm e_8 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm xtc_io_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm g_9 (ATerm);
ATerm q_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm m_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_10 (ATerm i_64, ATerm j_64, ATerm);
ATerm foldr_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_11 (ATerm);
ATerm need_help_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_10 (ATerm e_63, ATerm f_63, ATerm);
ATerm debug_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm r_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm n_10 (ATerm w_42, ATerm x_42, ATerm);
ATerm k_10 (ATerm k_33, ATerm l_33, ATerm);
ATerm l_10 (ATerm t_31, ATerm u_31, ATerm s_31, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_99 (ATerm), ATerm);
ATerm z_12 (ATerm);
ATerm b_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm parse_options_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm o_13 (ATerm);
ATerm io_Abox_2_text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(o_79, t);
    return(t);
  }
  t = o_79(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm y_8 (ATerm z_93 (ATerm), ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm r_0 = NULL,w_0 = NULL,y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL;
  z_0 = t;
  t = z_93(t);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_0, r_43, p_43);
  t = l_10(r_0, r_43, p_43, t);
  {
    ATerm j_2 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL;
        t = term_r_13;
        d_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_0, term_r_13);
        t = k_10(r_0, d_1, t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = j_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_0 = ATgetFirst((ATermList) t);
        y_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_13;
    b_1 = t;
    t = (ATerm) ATinsert(CheckATermList(y_0), (ATerm) ATinsert(CheckATermList(w_0), r_43));
    c_1 = t;
    t = SSL_table_put(r_0, b_1, c_1);
    t = z_0;
  }
  return(t);
}
ATerm y_1 (ATerm i_1, ATerm t)
{
  t = i_1;
  {
    ATerm y_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_13;
      }
    t = term_g_14;
    t = debug_1_0(m_0, t);
    t = (ATerm) ATmakeAppl(sym__2, i_1, term_n_14);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm a_2 (ATerm l_1, ATerm m_1, ATerm o_1, ATerm t)
{
  t = SSL_open_file(l_1, m_1);
  return(t);
}
ATerm m_0 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,x_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_1(s_1, t);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = a_2(t_1, x_1, s_1, t);
          }
      }
    }
  else
    {
      t = y_1(s_1, t);
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
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL;
  t = term_y_14;
  t = new_0_0(t);
  c_2 = t;
  t = term_z_14;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, term_z_14);
  t = j_10(c_2, d_2, t);
  f_2 = t;
  {
    ATerm a_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_15);
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_2, (ATerm) ATinsert(ATempty, term_f_15));
        t = d_10(f_2, h_2, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = a_15;
        t = f_2;
      }
  }
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  t = new_file_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, term_n_14);
  t = open_file_0_0(t);
  t = term_y_14;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, term_y_14);
  t = y_8(o_0, k_2, l_2, t);
  t = k_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL;
  if(((s_2 != NULL) && (s_2 != t)))
    _fail(t);
  else
    s_2 = t;
  t = xtc_new_file_0_0(t);
  if(((u_2 != NULL) && (u_2 != t)))
    _fail(t);
  else
    u_2 = t;
  t = not_null(s_2);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm b_3 = NULL;
      b_3 = t;
      {
        ATerm o_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 = NULL,l_0 = NULL;
            t = SSL_is_string(b_3);
            f_0 = t;
            t = (ATerm) ATinsert(ATempty, f_0);
            l_0 = t;
            t = SSL_print(not_null(u_2), l_0);
            t = f_0;
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = o_15;
            t = b_3;
          }
      }
      return(t);
    }
    t = topdown_1_0(s_0, t);
    t = SSL_close_file(not_null(u_2));
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_2));
  }
  return(t);
}
ATerm z_9 (ATerm h_84 (ATerm), ATerm m_35, ATerm w_262, ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm j_35 = NULL;
    j_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), j_35);
    t = h_84(t);
    t = j_35;
    return(t);
  }
  t = not_null(w_262);
  t = SRTS_one(v_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm s_36 (ATerm t)
  {
    ATerm u_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_84(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = u_15;
        {
          ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,n_6 = NULL,v_6 = NULL,w_2 = NULL;
          p_36 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_36 = ATgetFirst((ATermList) t);
              r_36 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_36);
          n_6 = t;
          t = r_36;
          t = s_36(t);
          v_6 = t;
          t = (ATerm) ATinsert(CheckATermList(v_6), q_36);
          w_2 = t;
          t = SSLsetAnnotations(w_2, n_6);
        }
      }
    return(t);
  }
  t = s_36(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,y_36 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,z_2 = NULL,y_2 = NULL;
    h_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_37 = ATgetFirst((ATermList) t);
        e_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_37);
    c_37 = t;
    t = d_37;
    t = l_84(t);
    f_37 = t;
    t = (ATerm) ATinsert(CheckATermList(e_37), f_37);
    y_2 = t;
    t = SSLsetAnnotations(y_2, c_37);
    g_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_37 = ATgetFirst((ATermList) t);
        b_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_37);
    z_36 = t;
    t = b_37;
    if(((w_36 != NULL) && (w_36 != t)))
      _fail(t);
    else
      w_36 = t;
    t = (ATerm) ATinsert(CheckATermList(b_37), a_37);
    z_2 = t;
    t = SSLsetAnnotations(z_2, z_36);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(x_0, t);
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), not_null(w_36));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,t_37 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(r_107, t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm m_37 = NULL;
        m_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_37, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_37;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_16 = ATgetFirst((ATermList) t);
              ATerm b_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_37;
          t = list_tokenize_1_0(r_107, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm c_16 = ATgetFirst((ATermList) t);
          ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_37;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_37);
        }
      else
        {
          ATerm e_38 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_16 = ATgetFirst((ATermList) t);
              ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_37;
          t = list_tokenize_1_0(r_107, t);
          e_38 = t;
          t = (ATerm) ATinsert(CheckATermList(e_38), q_37);
        }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm p_38 = NULL;
  if(match_cons(t, sym__2))
    {
      p_38 = ATgetArgument(t, 0);
      if((p_38 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = SSL_implode_string(q_38);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,h_4 = NULL;
  if(((l_38 != NULL) && (l_38 != t)))
    _fail(t);
  else
    l_38 = t;
  if(match_cons(t, sym__2))
    {
      if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_38 = ATgetArgument(t, 0);
      if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(l_38));
  if(((h_38 != NULL) && (h_38 != t)))
    _fail(t);
  else
    h_38 = t;
  t = SSL_explode_string(not_null(j_38));
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(k_38));
  if(((h_4 != NULL) && (h_4 != t)))
    _fail(t);
  else
    h_4 = t;
  t = SSLsetAnnotations(not_null(h_4), not_null(h_38));
  if(match_cons(t, sym__2))
    {
      if(((f_38 != NULL) && (f_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_38 = ATgetArgument(t, 0);
      if(((g_38 != NULL) && (g_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_38);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm o_38 = NULL;
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_38, not_null(f_38));
      t = z_9(f_1, o_38, not_null(f_38), t);
      return(t);
    }
    t = list_tokenize_1_0(e_1, t);
    t = map_1_0(j_1, t);
  }
  return(t);
}
ATerm a_10 (ATerm z_29, ATerm a_30, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_g_16), z_29);
  t = string_tokenize_0_0(t);
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL,a_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_k_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_38 = ATgetFirst((ATermList) t);
                a_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_39;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(z_38);
          }
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          ATerm b_39 = NULL,d_39 = NULL;
          t = last_0_0(t);
          d_39 = t;
          t = SSL_strlen(d_39);
          b_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_39, a_30);
          t = f_9(b_39, a_30, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm l_16 = t;
  if((PushChoice() == 0))
    {
      ATerm g_39 = NULL,h_39 = NULL;
      if(match_cons(t, sym__2))
        {
          g_39 = ATgetArgument(t, 0);
          h_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_39, h_39);
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(g_39, h_39);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            t = SSL_gtr(g_39, h_39);
          }
        t = (ATerm) ATmakeAppl(sym__2, g_39, h_39);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      t = term_w_16;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm q_34 = NULL,s_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_34 = ATgetFirst((ATermList) t);
      s_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_34;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_34;
    }
  else
    {
      t = s_34;
      t = last_0_0(t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm c_26, ATerm a_26, ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  t = c_26;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(n_1, t);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = term_k_16;
      }
    r_3 = t;
    t = term_f_17;
    s_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_3, term_f_17);
    t = g_10(r_3, s_3, t);
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_3, term_g_16);
    t = copy_char_0_0(t);
    k_3 = t;
    t = c_26;
    {
      ATerm h_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(p_1, t);
          ;
          LocalPopChoice(m_17);
        }
      else
        {
          t = h_17;
          t = term_k_16;
        }
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, term_q_17);
      t = copy_char_0_0(t);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, term_q_17);
      t = copy_char_0_0(t);
      m_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_3), l_3), k_3);
      o_3 = t;
      t = SSL_concat_strings(o_3);
    }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  y_3 = t;
  t = SSL_explode_term(y_3);
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_17 = ATgetArgument(t, 1);
        if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
          {
            x_3 = ATgetFirst((ATermList) u_17);
            {
              ATerm c_18 = (ATerm) ATgetNext((ATermList) u_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_3;
  return(t);
}
ATerm a_9 (ATerm u_25, ATerm y_25, ATerm v_25, ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  t = z_8(u_25, v_25, t);
  u_3 = t;
  t = y_25;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_25;
  t = map_1_0(q_1, t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, w_3);
  t = b_9(u_3, w_3, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, t_3);
  return(t);
}
ATerm b_9 (ATerm y_34, ATerm z_34, ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t = z_34;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_34;
    }
  else
    {
      ATerm a_1 = NULL,g_1 = NULL,j_4 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_4 != NULL) && (t_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_4 = ATgetFirst((ATermList) t);
          if(((u_4 != NULL) && (u_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(z_34));
      if(((a_1 != NULL) && (a_1 != t)))
        _fail(t);
      else
        a_1 = t;
      t = not_null(u_4);
      {
        ATerm r_1 (ATerm t)
        {
          ATerm f_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_1 = NULL;
              h_1 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_1;
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = f_18;
              {
                ATerm k_1 = NULL;
                t = Cons_2_0(_id, r_1, t);
                k_1 = t;
                t = (ATerm) ATinsert(CheckATermList(k_1), not_null(y_34));
              }
            }
          return(t);
        }
        t = r_1(t);
        if(((g_1 != NULL) && (g_1 != t)))
          _fail(t);
        else
          g_1 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(g_1)), not_null(t_4));
        if(((j_4 != NULL) && (j_4 != t)))
          _fail(t);
        else
          j_4 = t;
        t = SSLsetAnnotations(not_null(j_4), not_null(a_1));
      }
    }
  return(t);
}
ATerm c_9 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t_26, ATerm s_26, ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL;
  t = term_y_14;
  t = x_77(t);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, e_5);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
          t = term_k_18;
          h_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_26, e_5)), term_p_18);
          i_5 = t;
          t = SSL_printnl(h_5, i_5);
          t = term_f_17;
          g_5 = t;
          t = SSL_exit(g_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_26, e_5)), term_p_18);
        }
      }
    if(match_cons(t, sym__2))
      {
        y_4 = ATgetArgument(t, 0);
        z_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_y_14;
    t = w_77(t);
    c_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, c_5);
    t = g_10(z_4, c_5, t);
    a_5 = t;
    t = (ATerm) ATinsert(CheckATermList(s_26), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_4), a_5));
  }
  return(t);
}
ATerm d_9 (ATerm v_77 (ATerm), ATerm o_26, ATerm m_26, ATerm p_26, ATerm n_26, ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL,u_5 = NULL,w_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm x_5 = NULL,y_5 = NULL,b_6 = NULL;
          t = term_k_18;
          y_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_26, p_26)), term_p_18);
          b_6 = t;
          t = SSL_printnl(y_5, b_6);
          t = term_f_17;
          x_5 = t;
          t = SSL_exit(x_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_26, p_26)), term_p_18);
        }
      }
    if(match_cons(t, sym__2))
      {
        j_5 = ATgetArgument(t, 0);
        l_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_y_14;
    t = get_width_0_0(t);
    w_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, w_5);
    t = leq_0_0(t);
    t = term_y_14;
    t = v_77(t);
    u_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, u_5);
    t = g_10(l_5, u_5, t);
    m_5 = t;
    t = (ATerm) ATinsert(CheckATermList(n_26), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_26), j_5), m_5));
  }
  return(t);
}
ATerm foldl_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL;
    if(match_cons(t, sym__2))
      {
        i_6 = ATgetArgument(t, 0);
        m_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_6;
      }
    else
      {
        ATerm u_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_6 = ATgetFirst((ATermList) t);
            l_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_6, m_6);
        t = n_90(t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_6, u_6);
        t = w_6(t);
      }
    return(t);
  }
  t = w_6(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm x_6 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm z_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,m_4 = NULL;
    e_7 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        b_7 = ATgetArgument(t, 0);
        c_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_7);
    z_6 = t;
    t = b_7;
    t = a_78(t);
    d_7 = t;
    t = c_7;
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, d_7, c_7);
    m_4 = t;
    t = SSLsetAnnotations(m_4, z_6);
    return(t);
  }
  t = fetch_1_0(u_1, t);
  t = SSL_string_to_int(not_null(x_6));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  t = copy_0_0(t);
  f_7 = t;
  t = SSL_implode_string(f_7);
  return(t);
}
ATerm f_9 (ATerm o_64, ATerm p_64, ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_64, p_64);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      t = SSL_subtr(o_64, p_64);
    }
  return(t);
}
ATerm h_9 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm q_0, ATerm u_0, ATerm n_0, ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_0, n_0);
  t = p_0(t);
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, k_7);
  t = t_0(t);
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_7), m_7), l_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm q_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
    t_7 = t;
    if(match_cons(t, sym__2))
      {
        u_7 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = u_7;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_7 = ATgetFirst((ATermList) t);
        s_7 = (ATerm) ATgetNext((ATermList) t);
        t = t_7;
        t = h_9(y_90, c_8, q_7, s_7, v_7, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_7);
      }
    return(t);
  }
  t = c_8(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm u_18 = t;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,j_9 = NULL,r_9 = NULL;
      e_9 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_9;
        }
      else
        {
          ATerm m_2 = NULL,o_4 = NULL;
          if(match_cons(t, sym_H_2))
            {
              j_9 = ATgetArgument(t, 0);
              r_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_9);
          m_2 = t;
          t = j_9;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_9;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, j_9, r_9);
          o_4 = t;
          t = SSLsetAnnotations(o_4, m_2);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_18;
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_11 = ATgetFirst((ATermList) t);
          e_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 = NULL,i_3 = NULL,j_3 = NULL,q_4 = NULL;
            t = SSLgetAnnotations(c_11);
            d_3 = t;
            t = d_11;
            t = l_91(t);
            i_3 = t;
            t = e_11;
            t = filter_1_0(l_91, t);
            j_3 = t;
            t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
            q_4 = t;
            t = SSLsetAnnotations(q_4, d_3);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = e_11;
            t = filter_1_0(l_91, t);
          }
      }
    }
  return(t);
}
ATerm i_9 (ATerm j_27, ATerm k_27, ATerm l_27, ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,v_4 = NULL;
  t = not_null(l_27);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((n_11 != NULL) && (n_11 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        n_11 = ATgetFirst((ATermList) t);
      if(((o_11 != NULL) && (o_11 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(l_27));
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(j_27));
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
          t = term_k_18;
          u_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(j_27))), term_p_18);
          v_11 = t;
          t = SSL_printnl(u_11, v_11);
          t = term_f_17;
          t_11 = t;
          t = SSL_exit(t_11);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(j_27))), term_p_18);
        }
      }
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    t = not_null(o_11);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_11 = NULL;
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, not_null(k_27));
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = abox2text_0_0(t);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
                ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
                t = term_k_18;
                z_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_11, not_null(k_27))), term_p_18);
                a_12 = t;
                t = SSL_printnl(z_11, a_12);
                t = term_f_17;
                y_11 = t;
                t = SSL_exit(y_11);
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_11, not_null(k_27))), term_p_18);
              }
            }
        }
        return(t);
      }
      t = map_1_0(v_1, t);
      if(((r_11 != NULL) && (r_11 != t)))
        _fail(t);
      else
        r_11 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_11)), not_null(q_11));
      if(((v_4 != NULL) && (v_4 != t)))
        _fail(t);
      else
        v_4 = t;
      t = SSLsetAnnotations(not_null(v_4), not_null(l_11));
    }
  }
  return(t);
}
ATerm e_13 (ATerm i_12, ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL,x_12 = NULL,a_13 = NULL,h_8 = NULL;
  t = SSL_explode_term(i_12);
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_12 = ATgetFirst((ATermList) t);
      v_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  s_12 = t;
  t = v_12;
  t = Cons_2_0(w_1, z_1, t);
  x_12 = t;
  t = (ATerm) ATinsert(CheckATermList(x_12), u_12);
  h_8 = t;
  t = SSLsetAnnotations(h_8, s_12);
  a_13 = t;
  t = SSL_mkterm(j_12, a_13);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL;
      c_13 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_13;
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      t = Cons_2_0(b_2, e_2, t);
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm i_19 = t;
  if((PushChoice() == 0))
    {
      ATerm d_13 = NULL;
      d_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = d_13;
        }
      else
        {
          t = e_13(d_13, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_13 = ATgetFirst((ATermList) t);
      u_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_13, u_13);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_19;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_13 = ATgetFirst((ATermList) t);
      w_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if(match_cons(n_19, sym__2))
        {
          x_13 = ATgetArgument(n_19, 0);
          a_14 = ATgetArgument(n_19, 1);
        }
      else
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(match_cons(o_19, sym__2))
          {
            b_14 = ATgetArgument(o_19, 0);
            c_14 = ATgetArgument(o_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_14), x_13), (ATerm) ATinsert(CheckATermList(c_14), a_14));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(g_2, t);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,n_13 = NULL,q_13 = NULL,s_13 = NULL,l_8 = NULL;
        t = map_1_0(i_2, t);
        t = genzip_4_0(n_2, o_2, p_2, _id, t);
        s_13 = t;
        if(match_cons(t, sym__2))
          {
            l_13 = ATgetArgument(t, 0);
            n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_13);
        k_13 = t;
        t = n_13;
        t = matrix_transpose_0_0(t);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_13, q_13);
        l_8 = t;
        t = SSLsetAnnotations(l_8, k_13);
        if(match_cons(t, sym__2))
          {
            i_13 = ATgetArgument(t, 0);
            j_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_13), i_13);
      }
    }
  return(t);
}
ATerm k_9 (ATerm w_60, ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm f_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, w_60, x_60, y_60);
  t = o_9(w_60, x_60, y_60, t);
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_14, x_60);
  t = j_10(f_14, x_60, t);
  return(t);
}
ATerm l_9 (ATerm a_65, ATerm b_65, ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(a_65, b_65);
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = SSL_divr(a_65, b_65);
    }
  return(t);
}
ATerm m_9 (ATerm g_65, ATerm h_65, ATerm t)
{
  t = SSL_mod(g_65, h_65);
  return(t);
}
ATerm n_9 (ATerm i_61, ATerm j_61, ATerm e_61, ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  t = SSL_strlen(j_61);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_61, k_14);
  t = f_9(e_61, k_14, t);
  h_14 = t;
  {
    ATerm t_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_14 = NULL;
        t = term_b_20;
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_14, term_b_20);
        t = m_9(h_14, u_14, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_14;
        LocalPopChoice(v_19);
        {
          ATerm v_14 = NULL,b_15 = NULL;
          t = term_b_20;
          b_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_14, term_b_20);
          t = l_9(h_14, b_15, t);
          v_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_14, v_14);
        }
      }
    else
      {
        t = t_19;
        {
          ATerm c_15 = NULL,d_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL,q_8 = NULL;
          t = term_f_17;
          k_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_14, term_f_17);
          t = f_9(h_14, k_15, t);
          d_15 = t;
          t = term_b_20;
          j_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_15, term_b_20);
          t = l_9(d_15, j_15, t);
          c_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_15, c_15);
          q_15 = t;
          if(match_cons(t, sym__2))
            {
              ATerm e_20 = ATgetArgument(t, 0);
              ATerm g_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_15);
          l_15 = t;
          t = term_f_17;
          p_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_15, term_f_17);
          t = g_10(c_15, p_15, t);
          n_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_15, c_15);
          q_8 = t;
          t = SSLsetAnnotations(q_8, l_15);
        }
      }
    if(match_cons(t, sym__2))
      {
        i_14 = ATgetArgument(t, 0);
        l_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_14, i_14);
    t = g_10(k_14, i_14, t);
    r_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_61, j_61, r_14);
    t = o_9(i_61, j_61, r_14, t);
    j_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_14, l_14);
    t = g_10(k_14, l_14, t);
    q_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_61, j_61, q_14);
    t = o_9(i_61, j_61, q_14, t);
    m_14 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_14), j_61), j_14);
    s_14 = t;
    t = SSL_concat_strings(s_14);
  }
  return(t);
}
ATerm o_9 (ATerm p_61, ATerm n_61, ATerm o_61, ATerm t)
{
  ATerm r_15 = NULL;
  t = SSL_strlen(n_61);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_61, r_15);
  t = f_9(o_61, r_15, t);
  {
    ATerm k_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL;
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_15, term_k_16);
        t = geq_0_0(t);
        t = s_15;
        LocalPopChoice(m_20);
        {
          ATerm v_15 = NULL;
          v_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_15, p_61);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = k_20;
        t = term_o_20;
      }
  }
  return(t);
}
ATerm p_9 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm w_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, a_61, b_61, c_61);
  t = o_9(a_61, b_61, c_61, t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_61, w_15);
  t = j_10(b_61, w_15, t);
  return(t);
}
ATerm l_18 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  t = term_f_17;
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, term_f_17);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(q_16, a_17);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = SSL_gtr(q_16, a_17);
      }
    t = r_16;
    if(match_cons(t, sym__3))
      {
        x_16 = ATgetArgument(t, 0);
        y_16 = ATgetArgument(t, 1);
        z_16 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = p_9(x_16, y_16, z_16, t);
  }
  return(t);
}
ATerm m_18 (ATerm b_17, ATerm e_17, ATerm t)
{
  ATerm g_17 = NULL,i_17 = NULL,j_17 = NULL;
  t = b_17;
  if(match_cons(t, sym__3))
    {
      g_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      j_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_9(g_17, i_17, j_17, t);
  return(t);
}
ATerm n_18 (ATerm k_17, ATerm l_17, ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  t = k_17;
  if(match_cons(t, sym__3))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
      p_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_9(n_17, o_17, p_17, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm t_17 = NULL,w_17 = NULL,a_18 = NULL,e_18 = NULL,g_18 = NULL;
  w_17 = t;
  if(match_cons(t, sym__3))
    {
      a_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
      g_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_18;
  {
    ATerm r_20 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm g_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_21);
        t = g_18;
        {
          ATerm h_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm j_21 = ATgetArgument(t, 0);
                  t_17 = ATgetArgument(t, 1);
                  {
                    ATerm k_21 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(i_21);
              t = a_18;
              if(match_int(t, 1))
                {
                  ATerm o_21 = t;
                  int r_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_18(a_18, g_18, w_17, t);
                      ;
                      LocalPopChoice(r_21);
                    }
                  else
                    {
                      t = o_21;
                      t = t_17;
                    }
                }
              else
                {
                  t = l_18(a_18, g_18, w_17, t);
                }
            }
          else
            {
              t = h_21;
              t = a_18;
              t = l_18(a_18, g_18, w_17, t);
            }
        }
      }
    else
      {
        t = r_20;
        {
          ATerm t_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm v_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_21);
              t = a_18;
              t = m_18(g_18, w_17, t);
            }
          else
            {
              t = t_21;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm w_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_18;
              t = n_18(g_18, w_17, t);
            }
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,f_19 = NULL,t_8 = NULL;
      f_19 = t;
      if(match_cons(t, sym__2))
        {
          b_19 = ATgetArgument(t, 0);
          c_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_19);
      a_19 = t;
      t = b_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_19;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_22 = ATgetFirst((ATermList) t);
              ATerm d_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_19;
        }
      t = (ATerm) ATmakeAppl(sym__2, b_19, c_19);
      t_8 = t;
      t = SSLsetAnnotations(t_8, a_19);
      LocalPopChoice(b_22);
      t = conc_0_0(t);
    }
  else
    {
      t = a_22;
      {
        ATerm j_19 = NULL,k_19 = NULL;
        if(match_cons(t, sym__2))
          {
            j_19 = ATgetArgument(t, 0);
            k_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_19), j_19);
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_19 = NULL;
      l_19 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_19;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_22 = ATgetFirst((ATermList) t);
              ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_19;
        }
      LocalPopChoice(f_22);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(q_2, r_2, t_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_19;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_20 = ATgetFirst((ATermList) t);
      z_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_20, z_20);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if(match_cons(o_22, sym__2))
        {
          a_21 = ATgetArgument(o_22, 0);
          b_21 = ATgetArgument(o_22, 1);
        }
      else
        _fail(t);
      {
        ATerm s_22 = ATgetArgument(t, 1);
        if(match_cons(s_22, sym__2))
          {
            c_21 = ATgetArgument(s_22, 0);
            d_21 = ATgetArgument(s_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_21), a_21), (ATerm) ATinsert(CheckATermList(d_21), b_21));
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm t_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL;
      t = flatten_list_0_0(t);
      f_21 = t;
      t = SSL_concat_strings(f_21);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = t_22;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm x_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 = NULL,w_4 = NULL;
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, k_4, w_4);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_4, w_4);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = SSL_gtr(k_4, w_4);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_4, w_4);
      }
      LocalPopChoice(a_23);
      {
        ATerm b_5 = NULL,f_5 = NULL;
        f_5 = t;
        t = SSL_explode_term(f_5);
        if(match_cons(t, sym__2))
          {
            ATerm e_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_23 = ATgetArgument(t, 1);
              if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                {
                  b_5 = ATgetFirst((ATermList) f_23);
                  {
                    ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_5;
      }
    }
  else
    {
      t = x_22;
      {
        ATerm k_5 = NULL,n_5 = NULL;
        n_5 = t;
        t = SSL_explode_term(n_5);
        if(match_cons(t, sym__2))
          {
            ATerm h_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_23 = ATgetArgument(t, 1);
              if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
                {
                  ATerm j_23 = ATgetFirst((ATermList) i_23);
                  ATerm m_23 = (ATerm) ATgetNext((ATermList) i_23);
                  if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
                    {
                      k_5 = ATgetFirst((ATermList) m_23);
                      {
                        ATerm n_23 = (ATerm) ATgetNext((ATermList) m_23);
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
        t = k_5;
      }
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm i_28, ATerm h_28, ATerm d_28, ATerm f_28, ATerm c_28, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,c_20 = NULL,d_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,l_20 = NULL,n_20 = NULL,s_20 = NULL,o_10 = NULL,f_4 = NULL,g_4 = NULL;
  t = not_null(d_28);
  {
    ATerm v_2 (ATerm t)
    {
      ATerm t_20 = NULL;
      t_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_20, not_null(f_28));
      {
        ATerm o_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = o_23;
            {
              ATerm u_20 = NULL,w_20 = NULL,x_20 = NULL;
              t = term_k_18;
              w_20 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_20, not_null(f_28))), term_p_18);
              x_20 = t;
              t = SSL_printnl(w_20, x_20);
              t = term_f_17;
              u_20 = t;
              t = SSL_exit(u_20);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_20, not_null(f_28))), term_p_18);
            }
          }
      }
      return(t);
    }
    t = map_1_0(v_2, t);
    t = genzip_4_0(x_2, a_3, c_3, _id, t);
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    if(match_cons(t, sym__2))
      {
        if(((i_20 != NULL) && (i_20 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          i_20 = ATgetArgument(t, 0);
        if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          j_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(s_20));
    if(((h_20 != NULL) && (h_20 != t)))
      _fail(t);
    else
      h_20 = t;
    t = not_null(i_20);
    t = map_1_0(e_3, t);
    if(((l_20 != NULL) && (l_20 != t)))
      _fail(t);
    else
      l_20 = t;
    t = not_null(j_20);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm t_23 = ATgetFirst((ATermList) t);
        if(((g_4 != NULL) && (g_4 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(j_20);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_4 != NULL) && (f_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_4 = ATgetFirst((ATermList) t);
        {
          ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(f_4));
    t = foldl_1_0(f_3, t);
    if(((n_20 != NULL) && (n_20 != t)))
      _fail(t);
    else
      n_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(n_20));
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = SSLsetAnnotations(not_null(o_10), not_null(h_20));
    if(match_cons(t, sym__2))
      {
        if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_19 = ATgetArgument(t, 0);
        if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          w_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(f_28));
    t = f_9(not_null(w_19), not_null(f_28), t);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    {
      ATerm v_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_21 = NULL;
          t = term_f_17;
          p_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), term_f_17);
          {
            ATerm b_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(not_null(h_28), p_21);
                ;
                LocalPopChoice(e_24);
              }
            else
              {
                t = b_24;
                t = SSL_gtr(not_null(h_28), p_21);
              }
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), term_f_17);
          }
          LocalPopChoice(y_23);
          {
            ATerm q_21 = NULL,s_21 = NULL;
            t = not_null(i_28);
            if(match_cons(t, sym_AC_1))
              {
                s_21 = ATgetArgument(t, 0);
                t = s_21;
              }
            else
              {
                if(match_cons(t, sym_AR_1))
                  {
                    s_21 = ATgetArgument(t, 0);
                    t = s_21;
                  }
                else
                  {
                    if(match_cons(t, sym_AL_1))
                      {
                        s_21 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_21;
                  }
              }
            {
              ATerm g_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_value_1_0(g_3, t);
                  ;
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = g_24;
                  t = term_f_17;
                }
              q_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_21, term_q_17);
              t = copy_char_0_0(t);
            }
          }
        }
      else
        {
          t = v_23;
          t = term_o_20;
        }
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = not_null(x_19);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm x_21 = NULL,y_21 = NULL;
          y_21 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(h_28), not_null(i_28), (ATerm) ATmakeAppl(sym__3, term_q_17, y_21, not_null(y_19)));
          t = align_column_0_0(t);
          x_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_21, not_null(z_19));
          t = j_10(x_21, not_null(z_19), t);
          return(t);
        }
        t = map_1_0(h_3, t);
        if(((a_20 != NULL) && (a_20 != t)))
          _fail(t);
        else
          a_20 = t;
        t = SSL_strlen(not_null(z_19));
        if(((d_20 != NULL) && (d_20 != t)))
          _fail(t);
        else
          d_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(w_19));
        t = g_10(not_null(d_20), not_null(w_19), t);
        if(((c_20 != NULL) && (c_20 != t)))
          _fail(t);
        else
          c_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), (ATerm) ATinsert(CheckATermList(not_null(c_28)), not_null(a_20)));
      }
    }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm r_22 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_85(t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm z_21 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,p_22 = NULL,q_22 = NULL,q_10 = NULL;
          t = u_85(t);
          q_22 = t;
          if(match_cons(t, sym__2))
            {
              j_22 = ATgetArgument(t, 0);
              k_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_22);
          z_21 = t;
          t = j_22;
          t = w_85(t);
          l_22 = t;
          t = k_22;
          t = r_22(t);
          p_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_22, p_22);
          q_10 = t;
          t = SSLsetAnnotations(q_10, z_21);
          t = v_85(t);
        }
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm u_22 = NULL;
  ATerm x_23 (ATerm t)
  {
    ATerm w_22 = NULL,y_22 = NULL,z_22 = NULL,b_23 = NULL;
    if(match_cons(t, sym__2))
      {
        w_22 = ATgetArgument(t, 0);
        y_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = y_22;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm k_23 = NULL,l_23 = NULL,p_23 = NULL,s_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_22 = ATgetFirst((ATermList) t);
            b_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_22, z_22);
        t = y_106(t);
        k_23 = t;
        t = term_f_17;
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_22, term_f_17);
        t = g_10(w_22, s_23, t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_23, b_23);
        t = x_23(t);
        l_23 = t;
        t = (ATerm) ATinsert(CheckATermList(l_23), k_23);
      }
    return(t);
  }
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(u_22));
  t = x_23(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,d_24 = NULL;
  z_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_23;
      t = k_90(t);
    }
  else
    {
      ATerm r_24 = NULL,t_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_24;
      t = m_90(t);
      r_24 = t;
      t = d_24;
      t = foldr_3_0(k_90, l_90, m_90, t);
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_24, t_24);
      t = l_90(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm n_27 (ATerm t)
  {
    ATerm c_27 = NULL,i_27 = NULL,m_27 = NULL;
    m_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_27 = ATgetFirst((ATermList) t);
        i_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_5 = NULL,z_5 = NULL,u_10 = NULL;
          t = SSLgetAnnotations(m_27);
          r_5 = t;
          t = i_27;
          t = n_27(t);
          z_5 = t;
          t = (ATerm) ATinsert(CheckATermList(z_5), c_27);
          u_10 = t;
          t = SSLsetAnnotations(u_10, r_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_27;
        t = o_84(t);
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_25;
    }
  else
    {
      ATerm n_3 (ATerm t)
      {
        t = not_null(c_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_25 != NULL) && (b_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_25 = ATgetFirst((ATermList) t);
          if(((c_25 != NULL) && (c_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_25);
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
ATerm j_30 (ATerm v_28, ATerm t)
{
  ATerm m_29 = NULL;
  t = SSL_explode_term(v_28);
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  if(match_cons(t, sym__2))
    {
      b_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
      {
        ATerm o_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              t = not_null(f_30);
              return(t);
            }
            t = not_null(b_30);
            t = at_end_1_0(z_3, t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = o_24;
            t = j_30(not_null(g_30), t);
          }
      }
    }
  else
    {
      t = j_30(not_null(g_30), t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm k_30 (ATerm t)
  {
    ATerm u_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = u_24;
        t = m_100(t);
        t = k_30(t);
      }
    return(t);
  }
  t = k_30(t);
  return(t);
}
ATerm for_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  t = o_100(t);
  t = while_not_2_0(p_100, q_100, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_30, m_30, (ATerm) ATempty);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm n_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if(((ATgetType(x_24) != AT_INT) || (ATgetInt((ATermInt) x_24) != 0)))
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
      }
      n_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_30;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__3))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
      w_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_30, term_f_17);
  t = geq_0_0(t);
  t = term_f_17;
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_30, term_f_17);
  t = f_9(u_30, a_31, t);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_30, v_30, (ATerm) ATinsert(CheckATermList(w_30), v_30));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(m_31, n_31, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,h_31 = NULL,k_31 = NULL,l_31 = NULL;
  k_31 = t;
  t = foldr_3_0(d_4, e_4, i_4, t);
  d_31 = t;
  t = term_y_14;
  t = z_77(t);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_31, d_31);
  t = f_9(l_31, d_31, t);
  e_31 = t;
  {
    ATerm z_24 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_31 = NULL;
        t = term_k_16;
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_31, term_k_16);
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_31, v_31);
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              t = SSL_gtr(e_31, v_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_31, (ATerm) ATempty);
          t = copy_0_0(t);
          h_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_31, h_31);
          t = conc_0_0(t);
        }
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = z_24;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = k_31;
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
                t = term_k_18;
                b_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, k_31), term_i_25);
                c_32 = t;
                t = SSL_printnl(b_32, c_32);
                t = term_f_17;
                a_32 = t;
                t = SSL_exit(a_32);
                t = (ATerm) ATinsert(ATinsert(ATempty, k_31), term_i_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm j_25 = t;
  if((PushChoice() == 0))
    {
      ATerm a_34 = NULL,b_34 = NULL,e_34 = NULL,g_34 = NULL,w_10 = NULL;
      g_34 = t;
      if(match_cons(t, sym_R_2))
        {
          b_34 = ATgetArgument(t, 0);
          e_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_34);
      a_34 = t;
      t = e_34;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, b_34, e_34);
      w_10 = t;
      t = SSLsetAnnotations(w_10, a_34);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_25;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm i_32 = NULL;
  if(((i_32 != NULL) && (i_32 != t)))
    _fail(t);
  else
    i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_32), (ATerm) ATempty);
  {
    ATerm h_34 (ATerm t)
    {
      ATerm m_32 = NULL,n_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,u_32 = NULL;
      if(match_cons(t, sym__2))
        {
          p_32 = ATgetArgument(t, 0);
          u_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_32;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm z_32 = NULL;
          t = u_32;
          t = reverse_acc_2_0(_id, l_4, t);
          z_32 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, z_32));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_32 = ATgetFirst((ATermList) t);
              r_32 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_32;
          if(match_cons(t, sym_R_2))
            {
              m_32 = ATgetArgument(t, 0);
              n_32 = ATgetArgument(t, 1);
              {
                ATerm k_25 = t;
                int l_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_33 = NULL,m_33 = NULL;
                    t = u_32;
                    t = reverse_acc_2_0(_id, n_4, t);
                    i_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_32, (ATerm) ATempty);
                    t = h_34(t);
                    m_33 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(m_33), (ATerm) ATmakeAppl(sym_R_2, m_32, n_32)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, i_33));
                    ;
                    LocalPopChoice(l_25);
                  }
                else
                  {
                    t = k_25;
                    t = (ATerm) ATmakeAppl(sym__2, r_32, (ATerm) ATinsert(CheckATermList(u_32), q_32));
                    t = h_34(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, r_32, (ATerm) ATinsert(CheckATermList(u_32), q_32));
              t = h_34(t);
            }
        }
      return(t);
    }
    t = h_34(t);
    t = filter_1_0(p_4, t);
  }
  return(t);
}
ATerm j_53 (ATerm w_44, ATerm x_44, ATerm y_44, ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,h_45 = NULL,m_45 = NULL;
  t = not_null(y_44);
  t = construct_rows_0_0(t);
  t = map_1_0(r_4, t);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(w_44);
        t = foldr_3_0(d_5, o_5, p_5, t);
        return(t);
      }
      t = FitToMax_1_0(x_4, t);
      return(t);
    }
    t = map_1_0(s_4, t);
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, q_5, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, s_5, t);
    if(((d_45 != NULL) && (d_45 != t)))
      _fail(t);
    else
      d_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(d_45));
    t = genzip_4_0(t_5, v_5, a_6, _id, t);
    if(((e_45 != NULL) && (e_45 != t)))
      _fail(t);
    else
      e_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_45), (ATerm) ATmakeAppl(sym__2, not_null(z_44), (ATerm) ATempty));
    t = foldl_1_0(c_6, t);
    if(match_cons(t, sym__2))
      {
        if(((h_45 != NULL) && (h_45 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_45 = ATgetArgument(t, 0);
        if(((f_45 != NULL) && (f_45 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          f_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(f_45);
    t = reverse_acc_2_0(_id, d_6, t);
    t = matrix_transpose_0_0(t);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm u_46 = NULL;
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_46, not_null(h_45));
        return(t);
      }
      t = map_1_0(e_6, t);
      if(((m_45 != NULL) && (m_45 != t)))
        _fail(t);
      else
        m_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, not_null(x_44), not_null(m_45), not_null(z_44));
      t = a_9(not_null(x_44), not_null(m_45), not_null(z_44), t);
    }
  }
  return(t);
}
ATerm l_53 (ATerm v_46, ATerm w_46, ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm a_47 = NULL,c_47 = NULL,f_47 = NULL;
  t = v_46;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(f_6, t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = term_k_16;
      }
    f_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_46, f_47);
    t = g_10(x_46, f_47, t);
    c_47 = t;
    t = w_46;
    t = filter_1_0(is_real_vbox_0_0, t);
    a_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_46);
      }
    else
      {
        ATerm g_47 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, x_46, c_47, a_47);
        t = i_9(x_46, c_47, a_47, t);
        g_47 = t;
        t = (ATerm) ATmakeAppl(sym__3, v_46, g_47, x_46);
        t = a_9(v_46, g_47, x_46, t);
      }
  }
  return(t);
}
ATerm p_53 (ATerm h_47, ATerm i_47, ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm q_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,a_49 = NULL,c_49 = NULL,j_11 = NULL;
  t = not_null(h_47);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_6, t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = term_f_17;
      }
    if(((w_47 != NULL) && (w_47 != t)))
      _fail(t);
    else
      w_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), term_q_17);
    t = copy_char_0_0(t);
    if(((u_47 != NULL) && (u_47 != t)))
      _fail(t);
    else
      u_47 = t;
    t = SSL_strlen(not_null(u_47));
    if(((v_47 != NULL) && (v_47 != t)))
      _fail(t);
    else
      v_47 = t;
    t = not_null(i_47);
    t = filter_1_0(is_real_hbox_0_0, t);
    if(((q_47 != NULL) && (q_47 != t)))
      _fail(t);
    else
      q_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), not_null(k_47));
    {
      ATerm h_6 (ATerm t)
      {
        ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,b_11 = NULL;
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            {
              ATerm o_48 = NULL,w_7 = NULL,z_7 = NULL,d_8 = NULL;
              o_48 = t;
              t = term_k_18;
              z_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, o_48), term_p_18);
              d_8 = t;
              t = SSL_printnl(z_7, d_8);
              t = term_f_17;
              w_7 = t;
              t = SSL_exit(w_7);
              t = (ATerm) ATinsert(ATinsert(ATempty, o_48), term_p_18);
            }
          }
        i_48 = t;
        if(match_cons(t, sym__2))
          {
            f_48 = ATgetArgument(t, 0);
            g_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_48);
        e_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_47), g_48);
        t = g_10(not_null(v_47), g_48, t);
        h_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_48, h_48);
        b_11 = t;
        t = SSLsetAnnotations(b_11, e_48);
        return(t);
      }
      t = thread_map_1_0(h_6, t);
      if(((d_48 != NULL) && (d_48 != t)))
        _fail(t);
      else
        d_48 = t;
      if(match_cons(t, sym__2))
        {
          if(((z_47 != NULL) && (z_47 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_47 = ATgetArgument(t, 0);
          if(((a_48 != NULL) && (a_48 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(d_48));
      if(((y_47 != NULL) && (y_47 != t)))
        _fail(t);
      else
        y_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), not_null(z_47));
      t = b_9(not_null(u_47), not_null(z_47), t);
      if(((b_48 != NULL) && (b_48 != t)))
        _fail(t);
      else
        b_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_48), not_null(a_48));
      if(((j_11 != NULL) && (j_11 != t)))
        _fail(t);
      else
        j_11 = t;
      t = SSLsetAnnotations(not_null(j_11), not_null(y_47));
      if(((c_48 != NULL) && (c_48 != t)))
        _fail(t);
      else
        c_48 = t;
      if(match_cons(t, sym__2))
        {
          a_49 = ATgetArgument(t, 0);
          c_49 = ATgetArgument(t, 1);
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_8 = NULL,n_8 = NULL,o_8 = NULL,x_17 = NULL;
                t = SSLgetAnnotations(not_null(c_48));
                i_8 = t;
                t = not_null(a_49);
                {
                  ATerm w_25 = t;
                  if((PushChoice() == 0))
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = w_25;
                    }
                  n_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), not_null(v_47));
                  t = f_9(not_null(c_49), not_null(v_47), t);
                  o_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
                  x_17 = t;
                  t = SSLsetAnnotations(x_17, i_8);
                }
                ;
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                t = not_null(c_48);
              }
          }
        }
      else
        {
          t = not_null(c_48);
        }
    }
  }
  return(t);
}
ATerm q_53 (ATerm h_49, ATerm r_49, ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,a_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  t = not_null(h_49);
  {
    ATerm x_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(k_6, t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = x_25;
        t = term_f_17;
      }
    if(((i_50 != NULL) && (i_50 != t)))
      _fail(t);
    else
      i_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), term_q_17);
    t = copy_char_0_0(t);
    if(((a_50 != NULL) && (a_50 != t)))
      _fail(t);
    else
      a_50 = t;
    t = not_null(h_49);
    {
      ATerm b_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(o_6, t);
          ;
          LocalPopChoice(d_26);
        }
      else
        {
          t = b_26;
          t = term_k_16;
        }
      if(((g_50 != NULL) && (g_50 != t)))
        _fail(t);
      else
        g_50 = t;
      t = term_f_17;
      if(((h_50 != NULL) && (h_50 != t)))
        _fail(t);
      else
        h_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_50), term_f_17);
      t = g_10(not_null(g_50), not_null(h_50), t);
      if(((f_50 != NULL) && (f_50 != t)))
        _fail(t);
      else
        f_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_50), term_g_16);
      t = copy_char_0_0(t);
      t = SSL_strlen(not_null(a_50));
      if(((x_49 != NULL) && (x_49 != t)))
        _fail(t);
      else
        x_49 = t;
      t = not_null(h_49);
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SOpt_value_1_0(p_6, t);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = term_k_16;
          }
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_49), not_null(e_50));
        t = g_10(not_null(u_49), not_null(e_50), t);
        if(((y_49 != NULL) && (y_49 != t)))
          _fail(t);
        else
          y_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_49), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_49))));
        {
          ATerm q_6 (ATerm t)
          {
            ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
            if(((n_50 != NULL) && (n_50 != t)))
              _fail(t);
            else
              n_50 = t;
            if(match_cons(t, sym__2))
              {
                if(((o_50 != NULL) && (o_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_50 = ATgetArgument(t, 0);
                if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(p_50);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_50 = ATgetFirst((ATermList) t);
                m_50 = (ATerm) ATgetNext((ATermList) t);
                t = not_null(j_50);
                if(match_cons(t, sym__2))
                  {
                    k_50 = ATgetArgument(t, 0);
                    l_50 = ATgetArgument(t, 1);
                    {
                      ATerm g_26 = t;
                      int h_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_6 (ATerm t)
                          {
                            t = not_null(x_49);
                            return(t);
                          }
                          t = not_null(n_50);
                          t = d_9(r_6, not_null(o_50), not_null(k_50), not_null(l_50), not_null(m_50), t);
                          ;
                          LocalPopChoice(h_26);
                        }
                      else
                        {
                          t = g_26;
                          {
                            ATerm s_6 (ATerm t)
                            {
                              t = not_null(x_49);
                              return(t);
                            }
                            ATerm t_6 (ATerm t)
                            {
                              t = not_null(y_49);
                              return(t);
                            }
                            t = not_null(n_50);
                            t = c_9(s_6, t_6, not_null(o_50), not_null(p_50), t);
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm y_6 (ATerm t)
                    {
                      t = not_null(x_49);
                      return(t);
                    }
                    ATerm a_7 (ATerm t)
                    {
                      t = not_null(y_49);
                      return(t);
                    }
                    t = not_null(n_50);
                    t = c_9(y_6, a_7, not_null(o_50), not_null(p_50), t);
                  }
              }
            else
              {
                ATerm g_7 (ATerm t)
                {
                  t = not_null(x_49);
                  return(t);
                }
                ATerm h_7 (ATerm t)
                {
                  t = not_null(y_49);
                  return(t);
                }
                t = not_null(n_50);
                t = c_9(g_7, h_7, not_null(o_50), not_null(p_50), t);
              }
            return(t);
          }
          t = foldl_1_0(q_6, t);
          t = reverse_acc_2_0(_id, i_7, t);
          t = map_1_0(j_7, t);
          {
            ATerm p_7 (ATerm t)
            {
              ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,t_51 = NULL,u_51 = NULL,o_18 = NULL;
              u_51 = t;
              if(match_cons(t, sym__2))
                {
                  q_51 = ATgetArgument(t, 0);
                  r_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_51);
              p_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_50), q_51);
              t = b_9(not_null(a_50), q_51, t);
              t_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_51, r_51);
              o_18 = t;
              t = SSLsetAnnotations(o_18, p_51);
              return(t);
            }
            t = map_1_0(p_7, t);
            if(((d_50 != NULL) && (d_50 != t)))
              _fail(t);
            else
              d_50 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_49), not_null(d_50), not_null(u_49));
            t = a_9(not_null(h_49), not_null(d_50), not_null(u_49), t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm o_45 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_45;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm r_45 = NULL,w_45 = NULL;
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(r_45, w_45, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(((ATgetType(j_26) != AT_LIST) || !(ATisEmpty(j_26))))
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) != AT_LIST) || !(ATisEmpty(k_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
        {
          a_46 = ATgetFirst((ATermList) l_26);
          b_46 = (ATerm) ATgetNext((ATermList) l_26);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
          {
            c_46 = ATgetFirst((ATermList) q_26);
            d_46 = (ATerm) ATgetNext((ATermList) q_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_46, c_46), (ATerm) ATmakeAppl(sym__2, b_46, d_46));
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_46), g_46);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm j_46 = NULL,l_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          j_46 = ATgetArgument(r_26, 0);
          {
            ATerm v_26 = ATgetArgument(r_26, 1);
            if(match_cons(v_26, sym__2))
              {
                l_46 = ATgetArgument(v_26, 0);
                q_46 = ATgetArgument(v_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm u_26 = ATgetArgument(t, 1);
        if(match_cons(u_26, sym__2))
          {
            r_46 = ATgetArgument(u_26, 0);
            s_46 = ATgetArgument(u_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_9(j_46, l_46, q_46, r_46, s_46, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm d_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,n_51 = NULL,y_17 = NULL;
  n_51 = t;
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_51);
  d_51 = t;
  t = h_51;
  t = reverse_acc_2_0(_id, o_7, t);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_51, i_51);
  y_17 = t;
  t = SSLsetAnnotations(y_17, d_51);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
  c_52 = t;
  if(match_cons(t, sym__2))
    {
      d_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_52;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_20, g_52);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_52 = ATgetFirst((ATermList) t);
          f_52 = (ATerm) ATgetNext((ATermList) t);
          t = f_52;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, e_52, g_52);
          {
            ATerm w_26 = t;
            int x_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                ;
                LocalPopChoice(x_26);
              }
            else
              {
                t = w_26;
                {
                  ATerm t_9 = NULL,v_9 = NULL,w_9 = NULL;
                  t = term_k_18;
                  v_9 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_52, g_52)), term_p_18);
                  w_9 = t;
                  t = SSL_printnl(v_9, w_9);
                  t = term_f_17;
                  t_9 = t;
                  t = SSL_exit(t_9);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_52, g_52)), term_p_18);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              e_52 = ATgetArgument(t, 0);
              f_52 = ATgetArgument(t, 1);
              {
                ATerm f_11 = NULL,g_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, e_52, g_52);
                {
                  ATerm y_26 = t;
                  int z_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      ;
                      LocalPopChoice(z_26);
                    }
                  else
                    {
                      t = y_26;
                      {
                        ATerm i_11 = NULL,k_11 = NULL,m_11 = NULL;
                        t = term_k_18;
                        k_11 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_52, g_52)), term_p_18);
                        m_11 = t;
                        t = SSL_printnl(k_11, m_11);
                        t = term_f_17;
                        i_11 = t;
                        t = SSL_exit(i_11);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_52, g_52)), term_p_18);
                      }
                    }
                  f_11 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_27 = ATgetArgument(t, 0);
                      g_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, e_52, f_52), g_52);
                  {
                    ATerm b_27 = t;
                    int d_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_11 = NULL;
                        t = get_width_0_0(t);
                        p_11 = t;
                        t = (ATerm) ATmakeAppl(sym__2, g_11, p_11);
                        t = leq_0_0(t);
                        LocalPopChoice(d_27);
                        t = f_11;
                      }
                    else
                      {
                        t = b_27;
                        t = (ATerm) ATmakeAppl(sym__2, f_52, g_52);
                        {
                          ATerm e_27 = t;
                          int f_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(f_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm s_11 = NULL,w_11 = NULL,b_12 = NULL;
                                t = term_k_18;
                                w_11 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_52, g_52)), term_p_18);
                                b_12 = t;
                                t = SSL_printnl(w_11, b_12);
                                t = term_f_17;
                                s_11 = t;
                                t = SSL_exit(s_11);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_52, g_52)), term_p_18);
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
                  e_52 = ATgetArgument(t, 0);
                  f_52 = ATgetArgument(t, 1);
                  {
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, e_52, f_52), g_52);
                        {
                          ATerm o_27 = t;
                          int p_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(p_27);
                            }
                          else
                            {
                              t = o_27;
                              {
                                ATerm q_12 = NULL,t_12 = NULL,w_12 = NULL;
                                t = term_k_18;
                                t_12 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, e_52, f_52), g_52)), term_p_18);
                                w_12 = t;
                                t = SSL_printnl(t_12, w_12);
                                t = term_f_17;
                                q_12 = t;
                                t = SSL_exit(q_12);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, e_52, f_52), g_52)), term_p_18);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, e_52, f_52), g_52);
                        {
                          ATerm q_27 = t;
                          int r_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(r_27);
                            }
                          else
                            {
                              t = q_27;
                              {
                                ATerm d_14 = NULL,o_14 = NULL,p_14 = NULL;
                                t = term_k_18;
                                o_14 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, e_52, f_52), g_52)), term_p_18);
                                p_14 = t;
                                t = SSL_printnl(o_14, p_14);
                                t = term_f_17;
                                d_14 = t;
                                t = SSL_exit(d_14);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, e_52, f_52), g_52)), term_p_18);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm s_27 = t;
                  int t_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm u_27 = ATgetArgument(t, 0);
                          f_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(t_27);
                      t = (ATerm) ATmakeAppl(sym__2, f_52, g_52);
                      {
                        ATerm v_27 = t;
                        int w_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            ;
                            LocalPopChoice(w_27);
                          }
                        else
                          {
                            t = v_27;
                            {
                              ATerm h_15 = NULL,i_15 = NULL,m_15 = NULL;
                              t = term_k_18;
                              i_15 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_52, g_52)), term_p_18);
                              m_15 = t;
                              t = SSL_printnl(i_15, m_15);
                              t = term_f_17;
                              h_15 = t;
                              t = SSL_exit(h_15);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_52, g_52)), term_p_18);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = s_27;
                      {
                        ATerm x_27 = t;
                        int y_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm z_27 = ATgetArgument(t, 0);
                                f_52 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(y_27);
                            t = f_52;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_51 = ATgetFirst((ATermList) t);
                                x_51 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = v_51;
                            if(match_cons(t, sym_S_1))
                              {
                                w_51 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_51;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, w_51, g_52);
                          }
                        else
                          {
                            t = x_27;
                            if(match_cons(t, sym_S_1))
                              {
                                e_52 = ATgetArgument(t, 0);
                                {
                                  ATerm o_52 = NULL,q_52 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, e_52, g_52);
                                  t = a_10(e_52, g_52, t);
                                  q_52 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, g_52, q_52);
                                  t = g_10(g_52, q_52, t);
                                  o_52 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, e_52, o_52);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    e_52 = ATgetArgument(t, 0);
                                    f_52 = ATgetArgument(t, 1);
                                    b_52 = ATgetArgument(t, 2);
                                    t = e_52;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        a_52 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = b_52;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        y_51 = ATgetFirst((ATermList) t);
                                        z_51 = (ATerm) ATgetNext((ATermList) t);
                                        t = z_51;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = y_51;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm a_28 = t;
                                                int b_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_53(a_52, f_52, b_52, g_52, c_52, t);
                                                    ;
                                                    LocalPopChoice(b_28);
                                                  }
                                                else
                                                  {
                                                    t = a_28;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_52);
                                                  }
                                              }
                                            else
                                              {
                                                t = j_53(a_52, f_52, b_52, g_52, c_52, t);
                                              }
                                          }
                                        else
                                          {
                                            t = y_51;
                                            t = j_53(a_52, f_52, b_52, g_52, c_52, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm e_28 = t;
                                            int g_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_53(a_52, f_52, b_52, g_52, c_52, t);
                                                ;
                                                LocalPopChoice(g_28);
                                              }
                                            else
                                              {
                                                t = e_28;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_52);
                                              }
                                          }
                                        else
                                          {
                                            t = j_53(a_52, f_52, b_52, g_52, c_52, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        e_52 = ATgetArgument(t, 0);
                                        f_52 = ATgetArgument(t, 1);
                                        t = l_53(e_52, f_52, g_52, c_52, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            e_52 = ATgetArgument(t, 0);
                                            f_52 = ATgetArgument(t, 1);
                                            t = p_53(e_52, f_52, g_52, c_52, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                e_52 = ATgetArgument(t, 0);
                                                f_52 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = q_53(e_52, f_52, g_52, c_52, t);
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
ATerm p_54 (ATerm e_54, ATerm t)
{
  t = SSL_fclose(e_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_54 = NULL,l_54 = NULL;
  l_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_54 = ATgetArgument(t, 0);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_54);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = p_54(l_54, t);
          }
      }
    }
  else
    {
      t = p_54(l_54, t);
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
  ATerm q_54 = NULL;
  t = SSL_fopen(o_42, p_42);
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_54);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_54 = NULL;
  t = SSL_stdin_stream();
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_54);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_54 = NULL;
  t = SSL_stdout_stream();
  w_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_54);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_54 = NULL;
  t = SSL_stderr_stream();
  x_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_54);
  return(t);
}
ATerm n_56 (ATerm f_55, ATerm t)
{
  ATerm g_55 = NULL;
  t = SSL_explode_term(f_55);
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_28 = ATgetArgument(t, 1);
        if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
          {
            g_55 = ATgetFirst((ATermList) m_28);
            {
              ATerm n_28 = (ATerm) ATgetNext((ATermList) m_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_55;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_55;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_55;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_55;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_56 (ATerm j_55, ATerm m_55, ATerm n_55, ATerm t)
{
  ATerm o_55 = NULL,r_55 = NULL,s_55 = NULL,w_55 = NULL,m_21 = NULL;
  t = SSLgetAnnotations(n_55);
  s_55 = t;
  t = j_55;
  if(match_cons(t, sym_Path_1))
    {
      w_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_55, m_55);
  m_21 = t;
  t = SSLsetAnnotations(m_21, s_55);
  if(match_cons(t, sym__2))
    {
      o_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(o_55, r_55, t);
  return(t);
}
ATerm p_56 (ATerm y_55, ATerm z_55, ATerm a_56, ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,i_56 = NULL,n_21 = NULL;
  t = SSLgetAnnotations(a_56);
  d_56 = t;
  t = SSL_is_string(y_55);
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_56, z_55);
  n_21 = t;
  t = SSLsetAnnotations(n_21, d_56);
  if(match_cons(t, sym__2))
    {
      b_56 = ATgetArgument(t, 0);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(b_56, c_56, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      ATerm p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_56 = t;
  if(match_cons(t, sym__2))
    {
      l_56 = ATgetArgument(t, 0);
      m_56 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_56(k_56, t);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            {
              ATerm s_28 = t;
              int t_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_56(l_56, m_56, k_56, t);
                  ;
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = s_28;
                  t = p_56(l_56, m_56, k_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_56(k_56, t);
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_56 = NULL;
      t_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_56, term_y_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      t = debug_1_0(r_7, t);
      _fail(t);
    }
  r_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(s_56, t);
  q_56 = t;
  t = r_56;
  t = fclose_0_0(t);
  t = q_56;
  return(t);
}
ATerm d_10 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_access(g_42, h_42);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_56 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_28;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm a_57 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_15);
      a_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_56, (ATerm) ATinsert(ATempty, term_f_15));
      t = d_10(y_56, a_57, t);
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
  ATerm y_57 = NULL,z_57 = NULL;
  y_57 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_16 = NULL;
        t = y_57;
        t = k_0(t);
        h_16 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_16;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_16;
          }
        t = (ATerm) ATmakeAppl(sym__2, z_57, h_16);
        t = e_10(z_57, h_16, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_57);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_16 = NULL;
              t = y_57;
              t = k_0(t);
              o_16 = t;
              {
                ATerm e_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_16 = NULL;
                    p_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_16;
                          }
                        else
                          {
                            t = p_16;
                            if((z_57 != t))
                              {
                                _fail(t);
                              }
                            t = p_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_29;
                  }
                t = (ATerm) ATmakeAppl(sym__2, z_57, o_16);
                t = e_10(z_57, o_16, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_57);
              }
              ;
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = y_57;
              t = k_0(t);
              if((z_57 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_57);
            }
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  l_58 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
        t = k_10(y_31, z_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_29 = ATgetFirst((ATermList) t);
            k_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_29);
        t = SSL_table_put(y_31, z_31, k_58);
        t = (ATerm) ATmakeAppl(sym__3, y_31, z_31, k_58);
      }
    else
      {
        t = f_29;
        t = SSL_table_remove(y_31, z_31);
        t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
      }
    t = l_58;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  if(((q_58 != NULL) && (q_58 != t)))
    _fail(t);
  else
    q_58 = t;
  t = w_93(t);
  if(((p_58 != NULL) && (p_58 != t)))
    _fail(t);
  else
    p_58 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL;
        t = term_r_13;
        s_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_58), term_r_13);
        t = k_10(not_null(p_58), s_58, t);
        ;
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_58 != NULL) && (n_58 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_58 = ATgetFirst((ATermList) t);
        if(((m_58 != NULL) && (m_58 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_13;
    if(((r_58 != NULL) && (r_58 != t)))
      _fail(t);
    else
      r_58 = t;
    t = SSL_table_put(not_null(p_58), not_null(r_58), not_null(m_58));
    t = not_null(n_58);
    {
      ATerm x_7 (ATerm t)
      {
        ATerm u_58 = NULL;
        u_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_58), u_58);
        t = f_10(not_null(p_58), u_58, t);
        return(t);
      }
      t = map_1_0(x_7, t);
      t = not_null(q_58);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_82(t);
      t = w_82(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = w_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  z_58 = t;
  t = v_93(t);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, term_r_13);
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_29 = ATgetArgument(t, 0);
            ATerm q_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_13;
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_58, term_r_13);
        t = k_10(y_58, h_59, t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATempty;
      }
    a_59 = t;
    t = term_r_13;
    b_59 = t;
    t = (ATerm) ATinsert(CheckATermList(a_59), (ATerm) ATempty);
    c_59 = t;
    t = SSL_table_put(y_58, b_59, c_59);
    t = z_58;
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm q_59 = NULL;
  q_59 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_59);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = q_59;
      }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm k_59 = NULL;
  ATerm a_8 (ATerm t)
  {
    ATerm l_59 = NULL;
    l_59 = t;
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_59 = NULL,n_59 = NULL;
          t = term_g_15;
          m_59 = t;
          t = term_r_13;
          n_59 = t;
          t = term_v_29;
          t = k_10(m_59, n_59, t);
          ;
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_59 != NULL) && (k_59 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_59 = ATgetFirst((ATermList) t);
          {
            ATerm w_29 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(k_59);
      t = map_1_0(b_8, t);
      t = l_59;
      t = end_scope_1_0(e_8, t);
    }
    return(t);
  }
  t = begin_scope_1_0(y_7, t);
  t = restore_always_2_0(j_78, a_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      t = term_d_30;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm e_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_59 = NULL;
        t = term_i_30;
        t = get_config_0_0(t);
        x_59 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_59);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = e_30;
        t = term_z_28;
      }
    t = k_78(t);
    t = copy_to_1_0(g_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,d_60 = NULL,g_60 = NULL,j_60 = NULL;
  y_59 = t;
  t = term_y_14;
  t = whoami_0_0(t);
  z_59 = t;
  t = term_k_18;
  g_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_30), z_59), term_o_30);
  j_60 = t;
  t = SSL_printnl(g_60, j_60);
  t = term_f_17;
  d_60 = t;
  t = SSL_exit(d_60);
  t = y_59;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_61 = NULL,y_61 = NULL,c_62 = NULL;
      t = term_y_14;
      t = j_0(t);
      q_61 = t;
      t = term_q_30;
      y_61 = t;
      t = term_r_30;
      c_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_30, term_r_30, q_61);
      t = l_10(y_61, c_62, q_61, t);
      _fail(t);
    }
  else
    {
      ATerm g_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_60 = ATgetFirst((ATermList) t);
          s_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_60 = ATgetFirst((ATermList) t);
          u_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_60;
      t = h_0(t);
      t = t_60;
      t = i_0(t);
      g_62 = t;
      t = (ATerm) ATinsert(CheckATermList(u_60), g_62);
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  if(match_string(t, "-k"))
    {
      t = i_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_62;
    }
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
  k_62 = t;
  t = SSL_string_to_int(k_62);
  l_62 = t;
  t = term_s_30;
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_30, l_62);
  t = n_10(m_62, l_62, t);
  t = k_62;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_8, k_8, m_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm o_62 = NULL;
  o_62 = t;
  if(match_string(t, "-S"))
    {
      t = o_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_62;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  t = term_y_30;
  p_62 = t;
  t = term_k_16;
  q_62 = t;
  t = term_z_30;
  t = n_10(p_62, q_62, t);
  t = term_b_31;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm r_62 = NULL,u_62 = NULL,v_62 = NULL;
  r_62 = t;
  t = SSL_string_to_int(r_62);
  u_62 = t;
  t = term_y_30;
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, u_62);
  t = n_10(v_62, u_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_62);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm w_62 = NULL,y_62 = NULL;
  t = term_g_31;
  w_62 = t;
  t = term_y_14;
  y_62 = t;
  t = term_i_31;
  t = n_10(w_62, y_62, t);
  t = term_j_31;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_8, r_8, s_8, t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm r_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_8, v_8, w_8, t);
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = r_31;
            t = Option_3_0(x_8, g_9, q_9, t);
          }
      }
    }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm c_63 = NULL;
  c_63 = t;
  if(match_string(t, "-o"))
    {
      t = c_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_63;
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm d_63 = NULL,g_63 = NULL;
  d_63 = t;
  t = term_c_30;
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, d_63);
  t = n_10(g_63, d_63, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_63);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_9, x_9, y_9, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm i_63 = NULL;
  i_63 = t;
  if(match_string(t, "-i"))
    {
      t = i_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_63;
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL;
  j_63 = t;
  t = term_i_30;
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, j_63);
  t = n_10(k_63, j_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_63);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_10, i_10, m_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  t = term_e_32;
  m_63 = t;
  t = term_y_14;
  n_63 = t;
  t = term_f_32;
  t = n_10(m_63, n_63, t);
  t = term_g_32;
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm o_63 = NULL;
  o_63 = t;
  if(match_string(t, "-w"))
    {
      t = o_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = o_63;
    }
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
  p_63 = t;
  t = SSL_string_to_int(p_63);
  q_63 = t;
  t = term_v_16;
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, q_63);
  t = n_10(r_63, q_63, t);
  t = p_63;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm o_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = o_32;
            {
              ATerm t_32 = t;
              int v_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_10, r_10, s_10, t);
                  ;
                  LocalPopChoice(v_32);
                }
              else
                {
                  t = t_32;
                  {
                    ATerm w_32 = t;
                    int x_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(x_32);
                      }
                    else
                      {
                        t = w_32;
                        {
                          ATerm y_32 = t;
                          int a_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(a_33);
                            }
                          else
                            {
                              t = y_32;
                              t = ArgOption_3_0(t_10, v_10, x_10, t);
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
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_14;
  t = whoami_0_0(t);
  s_63 = t;
  t = term_k_18;
  u_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_33), s_63);
  v_63 = t;
  t = SSL_printnl(u_63, v_63);
  t = term_f_17;
  t_63 = t;
  t = SSL_exit(t_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_10 (ATerm i_64, ATerm j_64, ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_64, j_64);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      t = SSL_addr(i_64, j_64);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
  x_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_63;
      t = i_90(t);
    }
  else
    {
      ATerm c_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_63 = ATgetFirst((ATermList) t);
          z_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_63;
      t = foldr_2_0(i_90, j_90, t);
      c_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_63, c_64);
      t = j_90(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm z_17 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(z_17, b_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_64 = NULL,r_17 = NULL,v_17 = NULL;
  t = times_0_0(t);
  v_17 = t;
  t = SSL_explode_term(v_17);
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  t = foldr_2_0(y_10, z_10, t);
  f_64 = t;
  t = SSL_TicksToSeconds(f_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  if(match_cons(t, sym__2))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_64;
        if((v_64 != t))
          {
            _fail(t);
          }
        t = u_64;
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
        {
          ATerm j_33 = t;
          int n_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_64, w_64);
              ;
              LocalPopChoice(n_33);
            }
          else
            {
              t = j_33;
              t = SSL_gtr(v_64, w_64);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm c_65 = NULL;
  c_65 = t;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_65 = NULL;
        t = term_y_30;
        t = get_config_0_0(t);
        e_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_65, term_f_17);
        t = geq_0_0(t);
        t = c_65;
        t = y_92(t);
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = c_65;
      }
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,l_65 = NULL,m_65 = NULL;
  t = run_time_0_0(t);
  i_65 = t;
  t = term_y_14;
  t = whoami_0_0(t);
  j_65 = t;
  t = term_k_18;
  l_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), i_65), term_q_33), j_65);
  m_65 = t;
  t = SSL_printnl(l_65, m_65);
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), i_65), term_q_33), j_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_16;
  n_65 = t;
  t = SSL_exit(n_65);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL;
  x_65 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_65;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_65 = ATgetArgument(t, 0);
          {
            ATerm z_18 = NULL,c_24 = NULL;
            t = SSLgetAnnotations(x_65);
            z_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_65);
            c_24 = t;
            t = SSLsetAnnotations(c_24, z_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_65;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = fetch_1_0(h_11, t);
    }
  t = s_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_66 = ATgetFirst((ATermList) t);
      b_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_66 = NULL,g_66 = NULL;
        ATerm c_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_66)), not_null(g_66));
          return(t);
        }
        t = not_null(b_66);
        t = g_0(t);
        if(((f_66 != NULL) && (f_66 != t)))
          _fail(t);
        else
          f_66 = t;
        t = not_null(a_66);
        t = e_0(t);
        if(((g_66 != NULL) && (g_66 != t)))
          _fail(t);
        else
          g_66 = t;
        t = not_null(b_66);
        t = reverse_acc_2_0(e_0, c_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_14;
      t = g_0(t);
    }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,f_24 = NULL;
  m_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_66);
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_66);
  f_24 = t;
  t = SSLsetAnnotations(f_24, k_66);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm o_66 = NULL;
  o_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_66), term_v_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      t = fetch_1_0(d_12, t);
    }
  t = term_y_33;
  t = echo_0_0(t);
  t = term_q_30;
  i_66 = t;
  t = term_r_30;
  j_66 = t;
  t = term_z_33;
  t = k_10(i_66, j_66, t);
  t = reverse_acc_2_0(_id, e_12, t);
  t = map_1_0(f_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm l_67 (ATerm t)
  {
    ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
    i_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_67 = ATgetFirst((ATermList) t);
        k_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_19 = NULL,f_20 = NULL,h_24 = NULL;
          t = SSLgetAnnotations(i_67);
          u_19 = t;
          t = j_67;
          t = i_84(t);
          f_20 = t;
          t = (ATerm) ATinsert(CheckATermList(k_67), f_20);
          h_24 = t;
          t = SSLsetAnnotations(h_24, u_19);
          ;
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          {
            ATerm v_20 = NULL,l_21 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(i_67);
            v_20 = t;
            t = k_67;
            t = l_67(t);
            l_21 = t;
            t = (ATerm) ATinsert(CheckATermList(l_21), j_67);
            i_24 = t;
            t = SSLsetAnnotations(i_24, v_20);
          }
        }
    }
    return(t);
  }
  t = l_67(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  p_67 = t;
  {
    ATerm f_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_67;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_34 = ATgetFirst((ATermList) t);
                ATerm k_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_67;
          }
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = f_34;
        t = (ATerm) ATinsert(ATempty, p_67);
      }
    q_67 = t;
    t = term_d_30;
    r_67 = t;
    t = SSL_printnl(r_67, q_67);
    t = p_67;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_33;
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
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  v_67 = t;
  t = p_95(t);
  w_67 = t;
  t = term_k_18;
  x_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_67), w_67);
  y_67 = t;
  t = SSL_printnl(x_67, y_67);
  t = v_67;
  return(t);
}
ATerm map_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm n_68 (ATerm t)
  {
    ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
    k_68 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_68;
      }
    else
      {
        ATerm g_22 = NULL,m_22 = NULL,n_22 = NULL,n_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_68 = ATgetFirst((ATermList) t);
            m_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_68);
        g_22 = t;
        t = l_68;
        t = y_83(t);
        m_22 = t;
        t = m_68;
        t = n_68(t);
        n_22 = t;
        t = (ATerm) ATinsert(CheckATermList(n_22), m_22);
        n_24 = t;
        t = SSLsetAnnotations(n_24, g_22);
      }
    return(t);
  }
  t = n_68(t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
    }
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_68 = NULL;
      v_68 = t;
      t = SSL_is_string(v_68);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
        ATerm r_34 = t;
        int t_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_12, t);
            ;
            LocalPopChoice(t_34);
          }
        else
          {
            t = r_34;
            {
              ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
              b_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_69 = ATgetArgument(t, 0);
                  t = c_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_69 = ATgetArgument(t, 0);
                      t = c_69;
                      {
                        ATerm u_34 = t;
                        int v_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_34);
                          }
                        else
                          {
                            t = u_34;
                            t = debug_1_0(h_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_69 = NULL,i_69 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_69 = ATgetArgument(t, 0);
                          d_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_69;
                      t = eval_config_0_0(t);
                      h_69 = t;
                      t = d_69;
                      t = eval_config_0_0(t);
                      i_69 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_69, i_69);
                      t = j_10(h_69, i_69, t);
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
  ATerm m_69 = NULL,n_69 = NULL;
  m_69 = t;
  t = term_w_34;
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, m_69);
  t = k_10(n_69, m_69, t);
  {
    ATerm x_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_69 = NULL,p_69 = NULL;
        t = eval_config_0_0(t);
        o_69 = t;
        t = term_w_34;
        p_69 = t;
        t = SSL_table_put(p_69, m_69, o_69);
        t = o_69;
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = x_34;
      }
  }
  return(t);
}
ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL;
  t = term_b_35;
  s_69 = t;
  t = term_y_14;
  t_69 = t;
  t = term_c_35;
  t = n_10(s_69, t_69, t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
  t = term_b_35;
  w_69 = t;
  t = term_y_14;
  x_69 = t;
  t = term_c_35;
  t = n_10(w_69, x_69, t);
  t = term_e_35;
  u_69 = t;
  t = term_y_14;
  v_69 = t;
  t = term_f_35;
  t = n_10(u_69, v_69, t);
  t = term_g_35;
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_12, m_12, n_12, t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = i_35;
      t = Option_3_0(o_12, p_12, r_12, t);
    }
  return(t);
}
ATerm n_10 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm y_69 = NULL;
  t = term_w_34;
  y_69 = t;
  t = SSL_table_put(y_69, w_42, x_42);
  t = (ATerm) ATmakeAppl(sym__3, term_w_34, w_42, x_42);
  return(t);
}
ATerm k_10 (ATerm k_33, ATerm l_33, ATerm t)
{
  t = SSL_table_get(k_33, l_33);
  return(t);
}
ATerm l_10 (ATerm t_31, ATerm u_31, ATerm s_31, ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
  {
    ATerm l_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_35 = ATgetArgument(t, 0);
            ATerm p_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
        t = k_10(t_31, u_31, t);
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = l_35;
        t = (ATerm) ATempty;
      }
    b_70 = t;
    t = (ATerm) ATinsert(CheckATermList(b_70), s_31);
    c_70 = t;
    t = SSL_table_put(t_31, u_31, c_70);
    t = a_70;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
      t = term_y_14;
      t = d_0(t);
      m_70 = t;
      t = term_q_30;
      n_70 = t;
      t = term_r_30;
      o_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_30, term_r_30, m_70);
      t = l_10(n_70, o_70, m_70, t);
      _fail(t);
    }
  else
    {
      ATerm r_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_70 = ATgetFirst((ATermList) t);
          l_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_70;
      t = a_0(t);
      t = term_y_14;
      t = c_0(t);
      r_70 = t;
      t = (ATerm) ATinsert(CheckATermList(l_70), r_70);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,p_24 = NULL;
  x_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_70 = ATgetFirst((ATermList) t);
      u_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_70);
  s_70 = t;
  t = t_70;
  t = f_70(t);
  v_70 = t;
  t = u_70;
  t = g_70(t);
  w_70 = t;
  t = (ATerm) ATinsert(CheckATermList(w_70), v_70);
  p_24 = t;
  t = SSLsetAnnotations(p_24, s_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,h_71 = NULL,i_71 = NULL,s_24 = NULL;
  if(((c_71 != NULL) && (c_71 != t)))
    _fail(t);
  else
    c_71 = t;
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_35;
        t = q_99(t);
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
      }
    t = not_null(c_71);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_71 != NULL) && (e_71 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_71 = ATgetFirst((ATermList) t);
        if(((f_71 != NULL) && (f_71 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_71));
    if(((d_71 != NULL) && (d_71 != t)))
      _fail(t);
    else
      d_71 = t;
    t = term_c_33;
    if(((i_71 != NULL) && (i_71 != t)))
      _fail(t);
    else
      i_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_33, not_null(e_71));
    t = n_10(not_null(i_71), not_null(e_71), t);
    t = not_null(f_71);
    {
      ATerm s_71 (ATerm t)
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_35 = t;
            int w_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_71 = NULL;
                l_71 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_71;
                ;
                LocalPopChoice(w_35);
              }
            else
              {
                t = v_35;
                t = q_99(t);
                t = Cons_2_0(_id, s_71, t);
              }
            ;
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            {
              ATerm o_71 = NULL,p_71 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_71 = ATgetFirst((ATermList) t);
                  p_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_71), (ATerm) ATmakeAppl(sym_Undefined_1, o_71));
            }
          }
        return(t);
      }
      t = s_71(t);
      if(((h_71 != NULL) && (h_71 != t)))
        _fail(t);
      else
        h_71 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_71)), (ATerm) ATmakeAppl(sym_Program_1, not_null(e_71)));
      if(((s_24 != NULL) && (s_24 != t)))
        _fail(t);
      else
        s_24 = t;
      t = SSLsetAnnotations(not_null(s_24), not_null(d_71));
    }
  }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  if(match_string(t, "--help"))
    {
      t = e_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_72;
        }
    }
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  t = term_u_33;
  f_72 = t;
  t = term_y_14;
  g_72 = t;
  t = term_x_35;
  t = n_10(f_72, g_72, t);
  t = term_y_35;
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm g_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
  if(((z_71 != NULL) && (z_71 != t)))
    _fail(t);
  else
    z_71 = t;
  t = term_q_30;
  if(((b_72 != NULL) && (b_72 != t)))
    _fail(t);
  else
    b_72 = t;
  t = term_r_30;
  if(((c_72 != NULL) && (c_72 != t)))
    _fail(t);
  else
    c_72 = t;
  t = (ATerm) ATempty;
  if(((d_72 != NULL) && (d_72 != t)))
    _fail(t);
  else
    d_72 = t;
  t = SSL_table_put(not_null(b_72), not_null(c_72), not_null(d_72));
  t = not_null(z_71);
  {
    ATerm y_12 (ATerm t)
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_99(t);
          ;
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          {
            ATerm c_36 = t;
            int d_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_12, b_13, f_13, t);
                ;
                LocalPopChoice(d_36);
              }
            else
              {
                t = c_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_12, t);
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_72 = NULL;
          n_72 = t;
          {
            ATerm g_36 = t;
            int h_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_23 = NULL;
                t = n_72;
                {
                  ATerm i_36 = t;
                  int j_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_36);
                    }
                  else
                    {
                      t = i_36;
                      t = fetch_1_0(g_13, t);
                    }
                  t = n_72;
                  t = default_system_usage_0_0(t);
                  t = term_k_16;
                  r_23 = t;
                  t = SSL_exit(r_23);
                }
                ;
                LocalPopChoice(h_36);
              }
            else
              {
                t = g_36;
                {
                  ATerm w_23 = NULL;
                  t = term_b_35;
                  t = get_config_0_0(t);
                  t = n_72;
                  t = default_system_about_0_0(t);
                  t = term_k_16;
                  w_23 = t;
                  t = SSL_exit(w_23);
                }
              }
          }
          ;
          LocalPopChoice(f_36);
        }
      else
        {
          t = e_36;
          {
            ATerm k_36 = t;
            int l_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
                ATerm h_13 (ATerm t)
                {
                  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,v_24 = NULL;
                  t_72 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_72);
                  r_72 = t;
                  t = s_72;
                  if(((x_71 != NULL) && (x_71 != t)))
                    _fail(t);
                  else
                    x_71 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_72);
                  v_24 = t;
                  t = SSLsetAnnotations(v_24, r_72);
                  return(t);
                }
                t = fetch_1_0(h_13, t);
                t = term_k_18;
                if(((p_72 != NULL) && (p_72 != t)))
                  _fail(t);
                else
                  p_72 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_71)), term_m_36);
                if(((q_72 != NULL) && (q_72 != t)))
                  _fail(t);
                else
                  q_72 = t;
                t = SSL_printnl(not_null(p_72), not_null(q_72));
                t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_71)), term_m_36));
                t = default_system_usage_0_0(t);
                t = term_f_17;
                if(((o_72 != NULL) && (o_72 != t)))
                  _fail(t);
                else
                  o_72 = t;
                t = SSL_exit(not_null(o_72));
                ;
                LocalPopChoice(l_36);
              }
            else
              {
                t = k_36;
              }
          }
        }
      if(((y_71 != NULL) && (y_71 != t)))
        _fail(t);
      else
        y_71 = t;
      t = term_q_30;
      if(((a_72 != NULL) && (a_72 != t)))
        _fail(t);
      else
        a_72 = t;
      t = SSL_table_destroy(not_null(a_72));
      t = not_null(y_71);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  t = parse_options_1_0(u_97, t);
  y_72 = t;
  t = term_n_36;
  b_73 = t;
  t = SSL_table_create(b_73);
  t = term_n_36;
  z_72 = t;
  t = term_o_36;
  a_73 = t;
  t = SSL_table_put(z_72, a_73, y_72);
  t = y_72;
  t = w_97(t);
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_97, t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        {
          ATerm v_36 = t;
          int x_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_36);
            }
          else
            {
              t = v_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = xtc_io_1_0(o_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  t = read_from_0_0(t);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_73, term_k_16);
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        {
          ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
          t = term_k_18;
          i_73 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_73, term_k_16)), term_p_18);
          j_73 = t;
          t = SSL_printnl(i_73, j_73);
          t = term_f_17;
          h_73 = t;
          t = SSL_exit(h_73);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_73, term_k_16)), term_p_18);
        }
      }
    g_73 = t;
    t = SSL_explode_term(g_73);
    if(match_cons(t, sym__2))
      {
        ATerm k_37 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) k_37) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm l_37 = ATgetArgument(t, 1);
          if(((ATgetType(l_37) == AT_LIST) && !(ATisEmpty(l_37))))
            {
              f_73 = ATgetFirst((ATermList) l_37);
              {
                ATerm n_37 = (ATerm) ATgetNext((ATermList) l_37);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_73, term_o_37);
    t = topdown_print_to_0_0(t);
  }
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, m_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
