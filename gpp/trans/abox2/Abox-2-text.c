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
ATerm term_i_37;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_t_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_u_34;
ATerm term_k_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_l_33;
ATerm term_h_33;
ATerm term_z_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_p_28;
ATerm term_l_24;
ATerm term_c_20;
ATerm term_v_19;
ATerm term_g_18;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_o_13;
void init_constant_terms (void)
{
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_o_13);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_r_15);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_15);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_j_14);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_j_14);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_v_30);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_j_14);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_j_14);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_j_14);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm topdown_1_0 (ATerm g_66 (ATerm), ATerm);
ATerm y_8 (ATerm s_80 (ATerm), ATerm h_30, ATerm f_30, ATerm);
ATerm y_1 (ATerm i_1, ATerm);
ATerm a_2 (ATerm l_1, ATerm m_1, ATerm o_1, ATerm);
ATerm o_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm z_9 (ATerm z_70 (ATerm), ATerm c_22, ATerm q_237, ATerm);
ATerm at_suffix_1_0 (ATerm k_71 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm j_1 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm a_10 (ATerm p_16, ATerm q_16, ATerm);
ATerm leq_0_0 (ATerm);
ATerm get_width_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm z_8 (ATerm s_12, ATerm q_12, ATerm);
ATerm q_1 (ATerm);
ATerm a_9 (ATerm k_12, ATerm o_12, ATerm l_12, ATerm);
ATerm b_9 (ATerm o_21, ATerm p_21, ATerm);
ATerm c_9 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm j_13, ATerm i_13, ATerm);
ATerm d_9 (ATerm n_64 (ATerm), ATerm e_13, ATerm c_13, ATerm f_13, ATerm d_13, ATerm);
ATerm foldl_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm f_9 (ATerm g_51, ATerm h_51, ATerm);
ATerm h_9 (ATerm t_0 (ATerm), ATerm y_0 (ATerm), ATerm v_0, ATerm z_0, ATerm s_0, ATerm);
ATerm thread_map_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm is_real_hbox_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm);
ATerm i_9 (ATerm z_13, ATerm a_14, ATerm b_14, ATerm);
ATerm l_15 (ATerm i_12, ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm is_real_vbox_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm matrix_transpose_0_0 (ATerm);
ATerm k_9 (ATerm m_47, ATerm n_47, ATerm o_47, ATerm);
ATerm l_9 (ATerm s_51, ATerm t_51, ATerm);
ATerm m_9 (ATerm y_51, ATerm z_51, ATerm);
ATerm n_9 (ATerm y_47, ATerm z_47, ATerm u_47, ATerm);
ATerm o_9 (ATerm f_48, ATerm d_48, ATerm e_48, ATerm);
ATerm p_9 (ATerm q_47, ATerm r_47, ATerm s_47, ATerm);
ATerm g_23 (ATerm p_20, ATerm u_20, ATerm v_20, ATerm);
ATerm i_23 (ATerm h_21, ATerm i_21, ATerm);
ATerm j_23 (ATerm y_21, ATerm g_22, ATerm);
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
ATerm u_9 (ATerm y_14, ATerm x_14, ATerm t_14, ATerm v_14, ATerm s_14, ATerm);
ATerm genzip_4_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm);
ATerm map_with_index_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm g_71 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_32 (ATerm e_32, ATerm);
ATerm conc_0_0 (ATerm);
ATerm while_not_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm);
ATerm for_3_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm FitToMax_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm k_54 (ATerm g_45, ATerm h_45, ATerm i_45, ATerm j_45, ATerm k_45, ATerm);
ATerm l_54 (ATerm b_47, ATerm e_47, ATerm f_47, ATerm g_47, ATerm);
ATerm m_54 (ATerm s_48, ATerm t_48, ATerm u_48, ATerm v_48, ATerm);
ATerm n_54 (ATerm n_50, ATerm o_50, ATerm p_50, ATerm q_50, ATerm);
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
ATerm u_55 (ATerm k_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_10 (ATerm e_34, ATerm);
ATerm c_10 (ATerm e_29, ATerm f_29, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_58 (ATerm k_56, ATerm);
ATerm b_58 (ATerm q_56, ATerm v_56, ATerm w_56, ATerm);
ATerm c_58 (ATerm i_57, ATerm j_57, ATerm m_57, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm d_10 (ATerm w_28, ATerm x_28, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_10 (ATerm h_35, ATerm i_35, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm f_10 (ATerm o_18, ATerm p_18, ATerm);
ATerm end_scope_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm e_8 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_65 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm xtc_io_1_0 (ATerm c_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
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
ATerm g_10 (ATerm a_51, ATerm b_51, ATerm);
ATerm foldr_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_11 (ATerm);
ATerm need_help_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_71 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_10 (ATerm w_49, ATerm x_49, ATerm);
ATerm debug_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_70 (ATerm), ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm p_12 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm y_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm n_10 (ATerm m_29, ATerm n_29, ATerm);
ATerm k_10 (ATerm a_20, ATerm b_20, ATerm);
ATerm l_10 (ATerm j_18, ATerm k_18, ATerm i_18, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_86 (ATerm), ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm parse_options_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm io_Abox_2_text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm g_66 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(g_66, t);
    return(t);
  }
  t = g_66(t);
  t = SRTS_all(a_0, t);
  return(t);
}
ATerm y_8 (ATerm s_80 (ATerm), ATerm h_30, ATerm f_30, ATerm t)
{
  ATerm e_0 = NULL,f_0 = NULL,q_0 = NULL,u_0 = NULL,b_1 = NULL,c_1 = NULL;
  u_0 = t;
  t = s_80(t);
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_0, h_30, f_30);
  t = l_10(e_0, h_30, f_30, t);
  {
    ATerm j_2 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL;
        t = term_o_13;
        d_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_0, term_o_13);
        t = k_10(e_0, d_1, t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = j_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_0 = ATgetFirst((ATermList) t);
        q_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_13;
    b_1 = t;
    t = (ATerm) ATinsert(CheckATermList(q_0), (ATerm) ATinsert(CheckATermList(f_0), h_30));
    c_1 = t;
    t = SSL_table_put(e_0, b_1, c_1);
    t = u_0;
  }
  return(t);
}
ATerm y_1 (ATerm i_1, ATerm t)
{
  t = i_1;
  {
    ATerm p_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_13 = ATgetArgument(t, 0);
            ATerm v_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_13;
      }
    t = term_w_13;
    t = debug_1_0(o_0, t);
    t = (ATerm) ATmakeAppl(sym__2, i_1, term_x_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm a_2 (ATerm l_1, ATerm m_1, ATerm o_1, ATerm t)
{
  t = SSL_open_file(l_1, m_1);
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_e_14;
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
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_1(s_1, t);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
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
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL;
  t = term_j_14;
  t = new_0_0(t);
  c_2 = t;
  t = term_k_14;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, term_k_14);
  t = j_10(c_2, e_2, t);
  f_2 = t;
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_14);
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_2, (ATerm) ATinsert(ATempty, term_q_14));
        t = d_10(f_2, h_2, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = f_2;
      }
  }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  t = new_file_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, term_x_13);
  t = open_file_0_0(t);
  t = term_j_14;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, term_j_14);
  t = y_8(p_0, k_2, l_2, t);
  t = k_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL;
  s_2 = t;
  t = xtc_new_file_0_0(t);
  u_2 = t;
  t = s_2;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm b_3 = NULL;
      b_3 = t;
      {
        ATerm w_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 = NULL,c_0 = NULL;
            t = SSL_is_string(b_3);
            b_0 = t;
            t = (ATerm) ATinsert(ATempty, b_0);
            c_0 = t;
            t = SSL_print(u_2, c_0);
            t = b_0;
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = w_14;
            t = b_3;
          }
      }
      return(t);
    }
    t = topdown_1_0(r_0, t);
    t = SSL_close_file(u_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, u_2);
  }
  return(t);
}
ATerm z_9 (ATerm z_70 (ATerm), ATerm c_22, ATerm q_237, ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm p_37 = NULL;
    p_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_22, p_37);
    t = z_70(t);
    t = p_37;
    return(t);
  }
  t = q_237;
  t = SRTS_one(w_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm o_38 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_71(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,n_6 = NULL,v_6 = NULL,w_2 = NULL;
          l_38 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_38 = ATgetFirst((ATermList) t);
              n_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_38);
          n_6 = t;
          t = n_38;
          t = o_38(t);
          v_6 = t;
          t = (ATerm) ATinsert(CheckATermList(v_6), m_38);
          w_2 = t;
          t = SSLsetAnnotations(w_2, n_6);
        }
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm u_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,z_2 = NULL,y_2 = NULL;
    d_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_38 = ATgetFirst((ATermList) t);
        a_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_39);
    y_38 = t;
    t = z_38;
    t = d_71(t);
    b_39 = t;
    t = (ATerm) ATinsert(CheckATermList(a_39), b_39);
    y_2 = t;
    t = SSLsetAnnotations(y_2, y_38);
    c_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_38 = ATgetFirst((ATermList) t);
        x_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_39);
    u_38 = t;
    t = x_38;
    if(((q_38 != NULL) && (q_38 != t)))
      _fail(t);
    else
      q_38 = t;
    t = (ATerm) ATinsert(CheckATermList(x_38), w_38);
    z_2 = t;
    t = SSLsetAnnotations(z_2, u_38);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(x_0, t);
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_38, not_null(q_38));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,o_39 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(k_94, t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm i_39 = NULL;
        i_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_39, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_39;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_15 = ATgetFirst((ATermList) t);
              ATerm f_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_39;
          t = list_tokenize_1_0(k_94, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm h_15 = ATgetFirst((ATermList) t);
          ATerm i_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, l_39);
        }
      else
        {
          ATerm v_39 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_15 = ATgetFirst((ATermList) t);
              ATerm k_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_39;
          t = list_tokenize_1_0(k_94, t);
          v_39 = t;
          t = (ATerm) ATinsert(CheckATermList(v_39), l_39);
        }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm i_40 = NULL;
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      if((i_40 != ATgetArgument(t, 1)))
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
  ATerm j_40 = NULL;
  j_40 = t;
  t = SSL_implode_string(j_40);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,h_4 = NULL;
  d_40 = t;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_40);
  y_39 = t;
  t = SSL_explode_string(b_40);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_40, c_40);
  h_4 = t;
  t = SSLsetAnnotations(h_4, y_39);
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_39;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm e_40 = NULL;
      e_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_40, w_39);
      t = z_9(f_1, e_40, w_39, t);
      return(t);
    }
    t = list_tokenize_1_0(e_1, t);
    t = map_1_0(j_1, t);
  }
  return(t);
}
ATerm a_10 (ATerm p_16, ATerm q_16, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_m_15), p_16);
  t = string_tokenize_0_0(t);
  {
    ATerm n_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_r_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_40 = ATgetFirst((ATermList) t);
                s_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_40;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(r_40);
          }
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = n_15;
        {
          ATerm t_40 = NULL,u_40 = NULL;
          t = last_0_0(t);
          u_40 = t;
          t = SSL_strlen(u_40);
          t_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_40, q_16);
          t = f_9(t_40, q_16, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm s_15 = t;
  if((PushChoice() == 0))
    {
      ATerm w_40 = NULL,z_40 = NULL;
      if(match_cons(t, sym__2))
        {
          w_40 = ATgetArgument(t, 0);
          z_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, w_40, z_40);
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(w_40, z_40);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = SSL_gtr(w_40, z_40);
          }
        t = (ATerm) ATmakeAppl(sym__2, w_40, z_40);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_15;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      t = term_e_16;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_37;
    }
  else
    {
      t = f_37;
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
ATerm z_8 (ATerm s_12, ATerm q_12, ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  t = s_12;
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(n_1, t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = term_r_15;
      }
    r_3 = t;
    t = term_h_16;
    s_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_3, term_h_16);
    t = g_10(r_3, s_3, t);
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_3, term_m_15);
    t = copy_char_0_0(t);
    k_3 = t;
    t = s_12;
    {
      ATerm j_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(p_1, t);
          ;
          LocalPopChoice(k_16);
        }
      else
        {
          t = j_16;
          t = term_r_15;
        }
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, term_l_16);
      t = copy_char_0_0(t);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_12, term_l_16);
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
      ATerm m_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_16 = ATgetArgument(t, 1);
        if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
          {
            x_3 = ATgetFirst((ATermList) o_16);
            {
              ATerm s_16 = (ATerm) ATgetNext((ATermList) o_16);
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
ATerm a_9 (ATerm k_12, ATerm o_12, ATerm l_12, ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_12, l_12);
  t = z_8(k_12, l_12, t);
  u_3 = t;
  t = o_12;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  t = map_1_0(q_1, t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, w_3);
  t = b_9(u_3, w_3, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, t_3);
  return(t);
}
ATerm b_9 (ATerm o_21, ATerm p_21, ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t = p_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_21;
    }
  else
    {
      ATerm a_1 = NULL,g_1 = NULL,j_4 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_4 = ATgetFirst((ATermList) t);
          u_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_21);
      a_1 = t;
      t = u_4;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_1 = NULL;
              h_1 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_1;
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              {
                ATerm k_1 = NULL;
                t = Cons_2_0(_id, r_1, t);
                k_1 = t;
                t = (ATerm) ATinsert(CheckATermList(k_1), o_21);
              }
            }
          return(t);
        }
        t = r_1(t);
        if(((g_1 != NULL) && (g_1 != t)))
          _fail(t);
        else
          g_1 = t;
        t = (ATerm) ATinsert(CheckATermList(g_1), t_4);
        if(((j_4 != NULL) && (j_4 != t)))
          _fail(t);
        else
          j_4 = t;
        t = SSLsetAnnotations(j_4, a_1);
      }
    }
  return(t);
}
ATerm c_9 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm j_13, ATerm i_13, ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL;
  t = term_j_14;
  t = p_64(t);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, e_5);
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        {
          ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
          t = term_c_17;
          h_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_13, e_5)), term_d_17);
          i_5 = t;
          t = SSL_printnl(h_5, i_5);
          t = term_h_16;
          g_5 = t;
          t = SSL_exit(g_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_13, e_5)), term_d_17);
        }
      }
    if(match_cons(t, sym__2))
      {
        y_4 = ATgetArgument(t, 0);
        z_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_j_14;
    t = o_64(t);
    c_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, c_5);
    t = g_10(z_4, c_5, t);
    a_5 = t;
    t = (ATerm) ATinsert(CheckATermList(i_13), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_4), a_5));
  }
  return(t);
}
ATerm d_9 (ATerm n_64 (ATerm), ATerm e_13, ATerm c_13, ATerm f_13, ATerm d_13, ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL,u_5 = NULL,w_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        {
          ATerm x_5 = NULL,y_5 = NULL,b_6 = NULL;
          t = term_c_17;
          y_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_13, f_13)), term_d_17);
          b_6 = t;
          t = SSL_printnl(y_5, b_6);
          t = term_h_16;
          x_5 = t;
          t = SSL_exit(x_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_13, f_13)), term_d_17);
        }
      }
    if(match_cons(t, sym__2))
      {
        j_5 = ATgetArgument(t, 0);
        l_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_j_14;
    t = get_width_0_0(t);
    w_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, w_5);
    t = leq_0_0(t);
    t = term_j_14;
    t = n_64(t);
    u_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, u_5);
    t = g_10(l_5, u_5, t);
    m_5 = t;
    t = (ATerm) ATinsert(CheckATermList(d_13), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_13), j_5), m_5));
  }
  return(t);
}
ATerm foldl_1_0 (ATerm f_77 (ATerm), ATerm t)
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
        t = f_77(t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_6, u_6);
        t = w_6(t);
      }
    return(t);
  }
  t = w_6(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm s_64 (ATerm), ATerm t)
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
    t = s_64(t);
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
ATerm f_9 (ATerm g_51, ATerm h_51, ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_51, h_51);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      t = SSL_subtr(g_51, h_51);
    }
  return(t);
}
ATerm h_9 (ATerm t_0 (ATerm), ATerm y_0 (ATerm), ATerm v_0, ATerm z_0, ATerm s_0, ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_0, s_0);
  t = t_0(t);
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_0, k_7);
  t = y_0(t);
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
ATerm thread_map_1_0 (ATerm r_77 (ATerm), ATerm t)
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
        t = h_9(r_77, c_8, q_7, s_7, v_7, t);
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
  ATerm j_17 = t;
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
      t = j_17;
    }
  return(t);
}
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm t)
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
        ATerm l_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 = NULL,i_3 = NULL,j_3 = NULL,q_4 = NULL;
            t = SSLgetAnnotations(c_11);
            d_3 = t;
            t = d_11;
            t = e_78(t);
            i_3 = t;
            t = e_11;
            t = filter_1_0(e_78, t);
            j_3 = t;
            t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
            q_4 = t;
            t = SSLsetAnnotations(q_4, d_3);
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = l_17;
            t = e_11;
            t = filter_1_0(e_78, t);
          }
      }
    }
  return(t);
}
ATerm i_9 (ATerm z_13, ATerm a_14, ATerm b_14, ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,v_4 = NULL;
  t = b_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      o_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_14);
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, z_13);
  {
    ATerm q_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = q_17;
        {
          ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
          t = term_c_17;
          u_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_11, z_13)), term_d_17);
          v_11 = t;
          t = SSL_printnl(u_11, v_11);
          t = term_h_16;
          t_11 = t;
          t = SSL_exit(t_11);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_11, z_13)), term_d_17);
        }
      }
    q_11 = t;
    t = o_11;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_11 = NULL;
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, a_14);
        {
          ATerm v_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = abox2text_0_0(t);
              ;
              LocalPopChoice(a_18);
            }
          else
            {
              t = v_17;
              {
                ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
                t = term_c_17;
                z_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_11, a_14)), term_d_17);
                a_12 = t;
                t = SSL_printnl(z_11, a_12);
                t = term_h_16;
                y_11 = t;
                t = SSL_exit(y_11);
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_11, a_14)), term_d_17);
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
      t = (ATerm) ATinsert(CheckATermList(r_11), q_11);
      if(((v_4 != NULL) && (v_4 != t)))
        _fail(t);
      else
        v_4 = t;
      t = SSLsetAnnotations(v_4, l_11);
    }
  }
  return(t);
}
ATerm l_15 (ATerm i_12, ATerm t)
{
  ATerm j_12 = NULL,u_12 = NULL,s_13 = NULL,y_13 = NULL,c_14 = NULL,d_14 = NULL,f_14 = NULL,h_8 = NULL;
  t = SSL_explode_term(i_12);
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_13 = ATgetFirst((ATermList) t);
      c_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  s_13 = t;
  t = c_14;
  t = Cons_2_0(w_1, z_1, t);
  d_14 = t;
  t = (ATerm) ATinsert(CheckATermList(d_14), y_13);
  h_8 = t;
  t = SSLsetAnnotations(h_8, s_13);
  f_14 = t;
  t = SSL_mkterm(j_12, f_14);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL;
      g_14 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_14;
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = b_18;
      t = Cons_2_0(b_2, d_2, t);
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
ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm f_18 = t;
  if((PushChoice() == 0))
    {
      ATerm r_14 = NULL;
      r_14 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_14;
        }
      else
        {
          t = l_15(r_14, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_18;
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
  ATerm n_17 = NULL,p_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_17 = ATgetFirst((ATermList) t);
      p_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_17, p_17);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_18;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_17 = ATgetFirst((ATermList) t);
      u_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_17, u_17);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if(match_cons(h_18, sym__2))
        {
          x_17 = ATgetArgument(h_18, 0);
          y_17 = ATgetArgument(h_18, 1);
        }
      else
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(match_cons(m_18, sym__2))
          {
            z_17 = ATgetArgument(m_18, 0);
            c_18 = ATgetArgument(m_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_17), x_17), (ATerm) ATinsert(CheckATermList(c_18), y_17));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(g_2, t);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = n_18;
      {
        ATerm i_16 = NULL,r_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,k_17 = NULL,m_17 = NULL,l_8 = NULL;
        t = map_1_0(i_2, t);
        t = genzip_4_0(n_2, o_2, p_2, _id, t);
        m_17 = t;
        if(match_cons(t, sym__2))
          {
            z_16 = ATgetArgument(t, 0);
            a_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_17);
        y_16 = t;
        t = a_17;
        t = matrix_transpose_0_0(t);
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_16, k_17);
        l_8 = t;
        t = SSLsetAnnotations(l_8, y_16);
        if(match_cons(t, sym__2))
          {
            i_16 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_16), i_16);
      }
    }
  return(t);
}
ATerm k_9 (ATerm m_47, ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm e_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, m_47, n_47, o_47);
  t = o_9(m_47, n_47, o_47, t);
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_18, n_47);
  t = j_10(e_18, n_47, t);
  return(t);
}
ATerm l_9 (ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm w_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(s_51, t_51);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = w_18;
      t = SSL_divr(s_51, t_51);
    }
  return(t);
}
ATerm m_9 (ATerm y_51, ATerm z_51, ATerm t)
{
  t = SSL_mod(y_51, z_51);
  return(t);
}
ATerm n_9 (ATerm y_47, ATerm z_47, ATerm u_47, ATerm t)
{
  ATerm l_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,x_18 = NULL,y_18 = NULL,b_19 = NULL;
  t = SSL_strlen(z_47);
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_47, t_18);
  t = f_9(u_47, t_18, t);
  l_18 = t;
  {
    ATerm e_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL;
        t = term_v_19;
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, term_v_19);
        t = m_9(l_18, c_19, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_18;
        LocalPopChoice(u_19);
        {
          ATerm d_19 = NULL,f_19 = NULL;
          t = term_v_19;
          f_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_18, term_v_19);
          t = l_9(l_18, f_19, t);
          d_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_19, d_19);
        }
      }
    else
      {
        t = e_19;
        {
          ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,q_8 = NULL;
          t = term_h_16;
          j_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_18, term_h_16);
          t = f_9(l_18, j_19, t);
          h_19 = t;
          t = term_v_19;
          i_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_19, term_v_19);
          t = l_9(h_19, i_19, t);
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_19, g_19);
          n_19 = t;
          if(match_cons(t, sym__2))
            {
              ATerm w_19 = ATgetArgument(t, 0);
              ATerm x_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_19);
          k_19 = t;
          t = term_h_16;
          m_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_19, term_h_16);
          t = g_10(g_19, m_19, t);
          l_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_19, g_19);
          q_8 = t;
          t = SSLsetAnnotations(q_8, k_19);
        }
      }
    if(match_cons(t, sym__2))
      {
        r_18 = ATgetArgument(t, 0);
        u_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, t_18, r_18);
    t = g_10(t_18, r_18, t);
    y_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_47, z_47, y_18);
    t = o_9(y_47, z_47, y_18, t);
    s_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_18, u_18);
    t = g_10(t_18, u_18, t);
    x_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_47, z_47, x_18);
    t = o_9(y_47, z_47, x_18, t);
    v_18 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_18), z_47), s_18);
    b_19 = t;
    t = SSL_concat_strings(b_19);
  }
  return(t);
}
ATerm o_9 (ATerm f_48, ATerm d_48, ATerm e_48, ATerm t)
{
  ATerm o_19 = NULL;
  t = SSL_strlen(d_48);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_48, o_19);
  t = f_9(e_48, o_19, t);
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL;
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_19, term_r_15);
        t = geq_0_0(t);
        t = r_19;
        LocalPopChoice(z_19);
        {
          ATerm s_19 = NULL;
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_19, f_48);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = y_19;
        t = term_c_20;
      }
  }
  return(t);
}
ATerm p_9 (ATerm q_47, ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm t_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, q_47, r_47, s_47);
  t = o_9(q_47, r_47, s_47, t);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_47, t_19);
  t = j_10(r_47, t_19, t);
  return(t);
}
ATerm g_23 (ATerm p_20, ATerm u_20, ATerm v_20, ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  t = term_h_16;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_20, term_h_16);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(p_20, g_21);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = SSL_gtr(p_20, g_21);
      }
    t = u_20;
    if(match_cons(t, sym__3))
      {
        d_21 = ATgetArgument(t, 0);
        e_21 = ATgetArgument(t, 1);
        f_21 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = p_9(d_21, e_21, f_21, t);
  }
  return(t);
}
ATerm i_23 (ATerm h_21, ATerm i_21, ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,x_21 = NULL;
  t = h_21;
  if(match_cons(t, sym__3))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      x_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_9(l_21, m_21, x_21, t);
  return(t);
}
ATerm j_23 (ATerm y_21, ATerm g_22, ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,n_22 = NULL;
  t = y_21;
  if(match_cons(t, sym__3))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
      n_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_9(j_22, k_22, n_22, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm t_22 = NULL,x_22 = NULL,y_22 = NULL,c_23 = NULL,e_23 = NULL;
  x_22 = t;
  if(match_cons(t, sym__3))
    {
      y_22 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
      e_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_23;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm h_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_20);
        t = e_23;
        {
          ATerm i_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm k_20 = ATgetArgument(t, 0);
                  t_22 = ATgetArgument(t, 1);
                  {
                    ATerm m_20 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(j_20);
              t = y_22;
              if(match_int(t, 1))
                {
                  ATerm n_20 = t;
                  int o_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_23(y_22, e_23, x_22, t);
                      ;
                      LocalPopChoice(o_20);
                    }
                  else
                    {
                      t = n_20;
                      t = t_22;
                    }
                }
              else
                {
                  t = g_23(y_22, e_23, x_22, t);
                }
            }
          else
            {
              t = i_20;
              t = y_22;
              t = g_23(y_22, e_23, x_22, t);
            }
        }
      }
    else
      {
        t = f_20;
        {
          ATerm r_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm w_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_20);
              t = y_22;
              t = i_23(e_23, x_22, t);
            }
          else
            {
              t = r_20;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm x_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_22;
              t = j_23(e_23, x_22, t);
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
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,t_8 = NULL;
      x_23 = t;
      if(match_cons(t, sym__2))
        {
          v_23 = ATgetArgument(t, 0);
          w_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_23);
      u_23 = t;
      t = v_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_23;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_21 = ATgetFirst((ATermList) t);
              ATerm b_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_23;
        }
      t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
      t_8 = t;
      t = SSLsetAnnotations(t_8, u_23);
      LocalPopChoice(z_20);
      t = conc_0_0(t);
    }
  else
    {
      t = y_20;
      {
        ATerm e_24 = NULL,f_24 = NULL;
        if(match_cons(t, sym__2))
          {
            e_24 = ATgetArgument(t, 0);
            f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_24), e_24);
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm c_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL;
      g_24 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_24;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_21 = ATgetFirst((ATermList) t);
              ATerm r_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_24;
        }
      LocalPopChoice(k_21);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = c_21;
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
  t = term_g_18;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_25 = ATgetFirst((ATermList) t);
      v_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,c_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if(match_cons(t_21, sym__2))
        {
          w_25 = ATgetArgument(t_21, 0);
          x_25 = ATgetArgument(t_21, 1);
        }
      else
        _fail(t);
      {
        ATerm v_21 = ATgetArgument(t, 1);
        if(match_cons(v_21, sym__2))
          {
            c_26 = ATgetArgument(v_21, 0);
            d_26 = ATgetArgument(v_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_26), w_25), (ATerm) ATinsert(CheckATermList(d_26), x_25));
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_26 = NULL;
      t = flatten_list_0_0(t);
      f_26 = t;
      t = SSL_concat_strings(f_26);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm e_22 = t;
  int h_22 = stack_ptr;
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
        ATerm i_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_4, w_4);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = i_22;
            t = SSL_gtr(k_4, w_4);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_4, w_4);
      }
      LocalPopChoice(h_22);
      {
        ATerm b_5 = NULL,f_5 = NULL;
        f_5 = t;
        t = SSL_explode_term(f_5);
        if(match_cons(t, sym__2))
          {
            ATerm o_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_22 = ATgetArgument(t, 1);
              if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
                {
                  b_5 = ATgetFirst((ATermList) q_22);
                  {
                    ATerm r_22 = (ATerm) ATgetNext((ATermList) q_22);
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
      t = e_22;
      {
        ATerm k_5 = NULL,n_5 = NULL;
        n_5 = t;
        t = SSL_explode_term(n_5);
        if(match_cons(t, sym__2))
          {
            ATerm s_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_22 = ATgetArgument(t, 1);
              if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
                {
                  ATerm v_22 = ATgetFirst((ATermList) u_22);
                  ATerm w_22 = (ATerm) ATgetNext((ATermList) u_22);
                  if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
                    {
                      k_5 = ATgetFirst((ATermList) w_22);
                      {
                        ATerm z_22 = (ATerm) ATgetNext((ATermList) w_22);
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
ATerm u_9 (ATerm y_14, ATerm x_14, ATerm t_14, ATerm v_14, ATerm s_14, ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL,a_25 = NULL,b_25 = NULL,d_25 = NULL,e_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,o_10 = NULL,f_4 = NULL,g_4 = NULL;
  t = t_14;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm p_25 = NULL;
      p_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, v_14);
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            {
              ATerm q_25 = NULL,r_25 = NULL,t_25 = NULL;
              t = term_c_17;
              r_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_25, v_14)), term_d_17);
              t_25 = t;
              t = SSL_printnl(r_25, t_25);
              t = term_h_16;
              q_25 = t;
              t = SSL_exit(q_25);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_25, v_14)), term_d_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(v_2, t);
    t = genzip_4_0(x_2, a_3, c_3, _id, t);
    if(((k_25 != NULL) && (k_25 != t)))
      _fail(t);
    else
      k_25 = t;
    if(match_cons(t, sym__2))
      {
        if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_25 = ATgetArgument(t, 0);
        if(((h_25 != NULL) && (h_25 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          h_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_25);
    if(((d_25 != NULL) && (d_25 != t)))
      _fail(t);
    else
      d_25 = t;
    t = e_25;
    t = map_1_0(e_3, t);
    if(((i_25 != NULL) && (i_25 != t)))
      _fail(t);
    else
      i_25 = t;
    t = h_25;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm d_23 = ATgetFirst((ATermList) t);
        if(((g_4 != NULL) && (g_4 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = h_25;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_4 != NULL) && (f_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_4 = ATgetFirst((ATermList) t);
        {
          ATerm f_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_4, f_4);
    t = foldl_1_0(f_3, t);
    if(((j_25 != NULL) && (j_25 != t)))
      _fail(t);
    else
      j_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_25, j_25);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = SSLsetAnnotations(o_10, d_25);
    if(match_cons(t, sym__2))
      {
        if(((q_24 != NULL) && (q_24 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_24 = ATgetArgument(t, 0);
        if(((p_24 != NULL) && (p_24 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          p_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_24, v_14);
    t = f_9(p_24, v_14, t);
    if(((t_24 != NULL) && (t_24 != t)))
      _fail(t);
    else
      t_24 = t;
    {
      ATerm h_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_26 = NULL;
          t = term_h_16;
          p_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_14, term_h_16);
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(x_14, p_26);
                ;
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                t = SSL_gtr(x_14, p_26);
              }
            t = (ATerm) ATmakeAppl(sym__2, x_14, term_h_16);
          }
          LocalPopChoice(k_23);
          {
            ATerm r_26 = NULL,t_26 = NULL;
            t = y_14;
            if(match_cons(t, sym_AC_1))
              {
                t_26 = ATgetArgument(t, 0);
                t = t_26;
              }
            else
              {
                if(match_cons(t, sym_AR_1))
                  {
                    t_26 = ATgetArgument(t, 0);
                    t = t_26;
                  }
                else
                  {
                    if(match_cons(t, sym_AL_1))
                      {
                        t_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_26;
                  }
              }
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_value_1_0(g_3, t);
                  ;
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  t = term_h_16;
                }
              r_26 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_26, term_l_16);
              t = copy_char_0_0(t);
            }
          }
        }
      else
        {
          t = h_23;
          t = term_c_20;
        }
      if(((w_24 != NULL) && (w_24 != t)))
        _fail(t);
      else
        w_24 = t;
      t = q_24;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_27 = NULL,j_27 = NULL;
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym__3, x_14, y_14, (ATerm) ATmakeAppl(sym__3, term_l_16, j_27, t_24));
          t = align_column_0_0(t);
          i_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_27, w_24);
          t = j_10(i_27, w_24, t);
          return(t);
        }
        t = map_1_0(h_3, t);
        if(((x_24 != NULL) && (x_24 != t)))
          _fail(t);
        else
          x_24 = t;
        t = SSL_strlen(w_24);
        if(((b_25 != NULL) && (b_25 != t)))
          _fail(t);
        else
          b_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_25, p_24);
        t = g_10(b_25, p_24, t);
        if(((a_25 != NULL) && (a_25 != t)))
          _fail(t);
        else
          a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(CheckATermList(s_14), x_24));
      }
    }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm t)
{
  ATerm u_27 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_72(t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,q_10 = NULL;
          t = m_72(t);
          s_27 = t;
          if(match_cons(t, sym__2))
            {
              m_27 = ATgetArgument(t, 0);
              n_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_27);
          l_27 = t;
          t = m_27;
          t = o_72(t);
          q_27 = t;
          t = n_27;
          t = u_27(t);
          r_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
          q_10 = t;
          t = SSLsetAnnotations(q_10, l_27);
          t = n_72(t);
        }
      }
    return(t);
  }
  t = u_27(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm e_28 = NULL;
  ATerm a_29 (ATerm t)
  {
    ATerm g_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
    if(match_cons(t, sym__2))
      {
        g_28 = ATgetArgument(t, 0);
        m_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = m_28;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_28 = ATgetFirst((ATermList) t);
            o_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_28, n_28);
        t = r_93(t);
        s_28 = t;
        t = term_h_16;
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_28, term_h_16);
        t = g_10(g_28, v_28, t);
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_28, o_28);
        t = a_29(t);
        t_28 = t;
        t = (ATerm) ATinsert(CheckATermList(t_28), s_28);
      }
    return(t);
  }
  if(((e_28 != NULL) && (e_28 != t)))
    _fail(t);
  else
    e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, e_28);
  t = a_29(t);
  return(t);
}
ATerm foldr_3_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,i_29 = NULL,j_29 = NULL;
  c_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_29;
      t = c_77(t);
    }
  else
    {
      ATerm o_29 = NULL,p_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          j_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      t = e_77(t);
      o_29 = t;
      t = j_29;
      t = foldr_3_0(c_77, d_77, e_77, t);
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
      t = d_77(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm a_32 (ATerm t)
  {
    ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
    z_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_31 = ATgetFirst((ATermList) t);
        y_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_5 = NULL,z_5 = NULL,u_10 = NULL;
          t = SSLgetAnnotations(z_31);
          r_5 = t;
          t = y_31;
          t = a_32(t);
          z_5 = t;
          t = (ATerm) ATinsert(CheckATermList(z_5), x_31);
          u_10 = t;
          t = SSLsetAnnotations(u_10, r_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_31;
        t = g_71(t);
      }
    return(t);
  }
  t = a_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_29;
    }
  else
    {
      ATerm n_3 (ATerm t)
      {
        t = not_null(t_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_29 != NULL) && (s_29 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_29 = ATgetFirst((ATermList) t);
          if(((t_29 != NULL) && (t_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_29;
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
ATerm r_32 (ATerm e_32, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_explode_term(e_32);
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  m_32 = t;
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              t = l_32;
              return(t);
            }
            t = k_32;
            t = at_end_1_0(z_3, t);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = r_32(m_32, t);
          }
      }
    }
  else
    {
      t = r_32(m_32, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t)
{
  ATerm t_32 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_87(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = f_87(t);
        t = t_32(t);
      }
    return(t);
  }
  t = t_32(t);
  return(t);
}
ATerm for_3_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm t)
{
  t = h_87(t);
  t = while_not_2_0(i_87, j_87, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm y_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_32, a_33, (ATerm) ATempty);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm b_33 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      if(((ATgetType(a_24) != AT_INT) || (ATgetInt((ATermInt) a_24) != 0)))
        _fail(t);
      {
        ATerm b_24 = ATgetArgument(t, 1);
      }
      b_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_33;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__3))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
      e_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_33, term_h_16);
  t = geq_0_0(t);
  t = term_h_16;
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_33, term_h_16);
  t = f_9(c_33, g_33, t);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_33, d_33, (ATerm) ATinsert(CheckATermList(e_33), d_33));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(q_33, r_33, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm FitToMax_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  o_33 = t;
  t = foldr_3_0(d_4, e_4, i_4, t);
  k_33 = t;
  t = term_j_14;
  t = r_64(t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, k_33);
  t = f_9(p_33, k_33, t);
  m_33 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL;
        t = term_r_15;
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_33, term_r_15);
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_33, u_33);
              ;
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              t = SSL_gtr(m_33, u_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_33, (ATerm) ATempty);
          t = copy_0_0(t);
          n_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_33, n_33);
          t = conc_0_0(t);
        }
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = o_33;
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm x_33 = NULL,y_33 = NULL,d_34 = NULL;
                t = term_c_17;
                y_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, o_33), term_l_24);
                d_34 = t;
                t = SSL_printnl(y_33, d_34);
                t = term_h_16;
                x_33 = t;
                t = SSL_exit(x_33);
                t = (ATerm) ATinsert(ATinsert(ATempty, o_33), term_l_24);
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
  ATerm m_24 = t;
  if((PushChoice() == 0))
    {
      ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,w_10 = NULL;
      x_36 = t;
      if(match_cons(t, sym_R_2))
        {
          v_36 = ATgetArgument(t, 0);
          w_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_36);
      u_36 = t;
      t = w_36;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, v_36, w_36);
      w_10 = t;
      t = SSLsetAnnotations(w_10, u_36);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_24;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_34, (ATerm) ATempty);
  {
    ATerm a_37 (ATerm t)
    {
      ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
      if(match_cons(t, sym__2))
        {
          v_34 = ATgetArgument(t, 0);
          y_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_34;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm g_35 = NULL;
          t = y_34;
          t = reverse_acc_2_0(_id, l_4, t);
          g_35 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, g_35));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_34 = ATgetFirst((ATermList) t);
              x_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_34;
          if(match_cons(t, sym_R_2))
            {
              s_34 = ATgetArgument(t, 0);
              t_34 = ATgetArgument(t, 1);
              {
                ATerm n_24 = t;
                int o_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_35 = NULL,w_35 = NULL;
                    t = y_34;
                    t = reverse_acc_2_0(_id, n_4, t);
                    v_35 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_34, (ATerm) ATempty);
                    t = a_37(t);
                    w_35 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(w_35), (ATerm) ATmakeAppl(sym_R_2, s_34, t_34)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, v_35));
                    ;
                    LocalPopChoice(o_24);
                  }
                else
                  {
                    t = n_24;
                    t = (ATerm) ATmakeAppl(sym__2, x_34, (ATerm) ATinsert(CheckATermList(y_34), w_34));
                    t = a_37(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, x_34, (ATerm) ATinsert(CheckATermList(y_34), w_34));
              t = a_37(t);
            }
        }
      return(t);
    }
    t = a_37(t);
    t = filter_1_0(p_4, t);
  }
  return(t);
}
ATerm k_54 (ATerm g_45, ATerm h_45, ATerm i_45, ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm n_45 = NULL,q_45 = NULL,r_45 = NULL,u_45 = NULL,x_45 = NULL;
  t = i_45;
  t = construct_rows_0_0(t);
  t = map_1_0(r_4, t);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = g_45;
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
    if(((n_45 != NULL) && (n_45 != t)))
      _fail(t);
    else
      n_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_45, n_45);
    t = genzip_4_0(t_5, v_5, a_6, _id, t);
    if(((q_45 != NULL) && (q_45 != t)))
      _fail(t);
    else
      q_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_45, (ATerm) ATmakeAppl(sym__2, j_45, (ATerm) ATempty));
    t = foldl_1_0(c_6, t);
    if(match_cons(t, sym__2))
      {
        if(((u_45 != NULL) && (u_45 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_45 = ATgetArgument(t, 0);
        if(((r_45 != NULL) && (r_45 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          r_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_45;
    t = reverse_acc_2_0(_id, d_6, t);
    t = matrix_transpose_0_0(t);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm a_47 = NULL;
        a_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_47, u_45);
        return(t);
      }
      t = map_1_0(e_6, t);
      if(((x_45 != NULL) && (x_45 != t)))
        _fail(t);
      else
        x_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_45, x_45, j_45);
      t = a_9(h_45, x_45, j_45, t);
    }
  }
  return(t);
}
ATerm l_54 (ATerm b_47, ATerm e_47, ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm g_48 = NULL,n_48 = NULL,q_48 = NULL;
  t = b_47;
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(f_6, t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = term_r_15;
      }
    q_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_47, q_48);
    t = g_10(f_47, q_48, t);
    n_48 = t;
    t = e_47;
    t = filter_1_0(is_real_vbox_0_0, t);
    g_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_47);
      }
    else
      {
        ATerm r_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, f_47, n_48, g_48);
        t = i_9(f_47, n_48, g_48, t);
        r_48 = t;
        t = (ATerm) ATmakeAppl(sym__3, b_47, r_48, f_47);
        t = a_9(b_47, r_48, f_47, t);
      }
  }
  return(t);
}
ATerm m_54 (ATerm s_48, ATerm t_48, ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm z_48 = NULL,b_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,l_49 = NULL,m_49 = NULL,i_50 = NULL,j_50 = NULL,j_11 = NULL;
  t = s_48;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_6, t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = term_h_16;
      }
    e_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_49, term_l_16);
    t = copy_char_0_0(t);
    b_49 = t;
    t = SSL_strlen(b_49);
    d_49 = t;
    t = t_48;
    t = filter_1_0(is_real_hbox_0_0, t);
    z_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_48, u_48);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm n_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,b_11 = NULL;
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm a_50 = NULL,w_7 = NULL,z_7 = NULL,d_8 = NULL;
              a_50 = t;
              t = term_c_17;
              z_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_50), term_d_17);
              d_8 = t;
              t = SSL_printnl(z_7, d_8);
              t = term_h_16;
              w_7 = t;
              t = SSL_exit(w_7);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_50), term_d_17);
            }
          }
        s_49 = t;
        if(match_cons(t, sym__2))
          {
            p_49 = ATgetArgument(t, 0);
            q_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_49);
        n_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_49, q_49);
        t = g_10(d_49, q_49, t);
        r_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_49, r_49);
        b_11 = t;
        t = SSLsetAnnotations(b_11, n_49);
        return(t);
      }
      t = thread_map_1_0(h_6, t);
      if(((m_49 != NULL) && (m_49 != t)))
        _fail(t);
      else
        m_49 = t;
      if(match_cons(t, sym__2))
        {
          if(((g_49 != NULL) && (g_49 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_49 = ATgetArgument(t, 0);
          if(((h_49 != NULL) && (h_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_49);
      if(((f_49 != NULL) && (f_49 != t)))
        _fail(t);
      else
        f_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_49, g_49);
      t = b_9(b_49, g_49, t);
      if(((i_49 != NULL) && (i_49 != t)))
        _fail(t);
      else
        i_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_49, h_49);
      if(((j_11 != NULL) && (j_11 != t)))
        _fail(t);
      else
        j_11 = t;
      t = SSLsetAnnotations(j_11, f_49);
      if(((l_49 != NULL) && (l_49 != t)))
        _fail(t);
      else
        l_49 = t;
      if(match_cons(t, sym__2))
        {
          i_50 = ATgetArgument(t, 0);
          j_50 = ATgetArgument(t, 1);
          {
            ATerm c_25 = t;
            int f_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_8 = NULL,n_8 = NULL,o_8 = NULL,x_15 = NULL;
                t = SSLgetAnnotations(l_49);
                i_8 = t;
                t = i_50;
                {
                  ATerm g_25 = t;
                  if((PushChoice() == 0))
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = g_25;
                    }
                  n_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_50, d_49);
                  t = f_9(j_50, d_49, t);
                  o_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
                  x_15 = t;
                  t = SSLsetAnnotations(x_15, i_8);
                }
                ;
                LocalPopChoice(f_25);
              }
            else
              {
                t = c_25;
                t = l_49;
              }
          }
        }
      else
        {
          t = l_49;
        }
    }
  }
  return(t);
}
ATerm n_54 (ATerm n_50, ATerm o_50, ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,d_51 = NULL,e_51 = NULL,l_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = n_50;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(k_6, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = term_h_16;
      }
    q_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_51, term_l_16);
    t = copy_char_0_0(t);
    w_50 = t;
    t = n_50;
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(o_6, t);
          ;
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          t = term_r_15;
        }
      o_51 = t;
      t = term_h_16;
      p_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_51, term_h_16);
      t = g_10(o_51, p_51, t);
      l_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_51, term_m_15);
      t = copy_char_0_0(t);
      t = SSL_strlen(w_50);
      u_50 = t;
      t = n_50;
      {
        ATerm s_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SOpt_value_1_0(p_6, t);
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = s_25;
            t = term_r_15;
          }
        e_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_50, e_51);
        t = g_10(p_50, e_51, t);
        v_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_50)));
        {
          ATerm q_6 (ATerm t)
          {
            ATerm r_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,a_52 = NULL,b_52 = NULL;
            x_51 = t;
            if(match_cons(t, sym__2))
              {
                a_52 = ATgetArgument(t, 0);
                b_52 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_52;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_51 = ATgetFirst((ATermList) t);
                w_51 = (ATerm) ATgetNext((ATermList) t);
                t = r_51;
                if(match_cons(t, sym__2))
                  {
                    u_51 = ATgetArgument(t, 0);
                    v_51 = ATgetArgument(t, 1);
                    {
                      ATerm z_25 = t;
                      int a_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_6 (ATerm t)
                          {
                            t = u_50;
                            return(t);
                          }
                          t = x_51;
                          t = d_9(r_6, a_52, u_51, v_51, w_51, t);
                          ;
                          LocalPopChoice(a_26);
                        }
                      else
                        {
                          t = z_25;
                          {
                            ATerm s_6 (ATerm t)
                            {
                              t = u_50;
                              return(t);
                            }
                            ATerm t_6 (ATerm t)
                            {
                              t = v_50;
                              return(t);
                            }
                            t = x_51;
                            t = c_9(s_6, t_6, a_52, b_52, t);
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm y_6 (ATerm t)
                    {
                      t = u_50;
                      return(t);
                    }
                    ATerm a_7 (ATerm t)
                    {
                      t = v_50;
                      return(t);
                    }
                    t = x_51;
                    t = c_9(y_6, a_7, a_52, b_52, t);
                  }
              }
            else
              {
                ATerm g_7 (ATerm t)
                {
                  t = u_50;
                  return(t);
                }
                ATerm h_7 (ATerm t)
                {
                  t = v_50;
                  return(t);
                }
                t = x_51;
                t = c_9(g_7, h_7, a_52, b_52, t);
              }
            return(t);
          }
          t = foldl_1_0(q_6, t);
          t = reverse_acc_2_0(_id, i_7, t);
          t = map_1_0(j_7, t);
          {
            ATerm p_7 (ATerm t)
            {
              ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,z_52 = NULL,a_53 = NULL,s_20 = NULL;
              a_53 = t;
              if(match_cons(t, sym__2))
                {
                  v_52 = ATgetArgument(t, 0);
                  w_52 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_53);
              u_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_50, v_52);
              t = b_9(w_50, v_52, t);
              z_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_52, w_52);
              s_20 = t;
              t = SSLsetAnnotations(s_20, u_52);
              return(t);
            }
            t = map_1_0(p_7, t);
            if(((d_51 != NULL) && (d_51 != t)))
              _fail(t);
            else
              d_51 = t;
            t = (ATerm) ATmakeAppl(sym__3, n_50, d_51, p_50);
            t = a_9(n_50, d_51, p_50, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm y_45 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_45;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(z_45, a_46, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_h_16;
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
      ATerm e_26 = ATgetArgument(t, 0);
      if(((ATgetType(e_26) != AT_LIST) || !(ATisEmpty(e_26))))
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(((ATgetType(g_26) != AT_LIST) || !(ATisEmpty(g_26))))
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
  ATerm e_46 = NULL,f_46 = NULL,i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
        {
          e_46 = ATgetFirst((ATermList) h_26);
          f_46 = (ATerm) ATgetNext((ATermList) h_26);
        }
      else
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            i_46 = ATgetFirst((ATermList) i_26);
            j_46 = (ATerm) ATgetNext((ATermList) i_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_46, i_46), (ATerm) ATmakeAppl(sym__2, f_46, j_46));
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm k_46 = NULL,m_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      m_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_46), k_46);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym__2))
        {
          u_46 = ATgetArgument(j_26, 0);
          {
            ATerm l_26 = ATgetArgument(j_26, 1);
            if(match_cons(l_26, sym__2))
              {
                v_46 = ATgetArgument(l_26, 0);
                w_46 = ATgetArgument(l_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(match_cons(k_26, sym__2))
          {
            x_46 = ATgetArgument(k_26, 0);
            y_46 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_9(u_46, v_46, w_46, x_46, y_46, t);
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
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,y_15 = NULL;
  s_52 = t;
  if(match_cons(t, sym__2))
    {
      p_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_52);
  o_52 = t;
  t = p_52;
  t = reverse_acc_2_0(_id, o_7, t);
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_52, q_52);
  y_15 = t;
  t = SSLsetAnnotations(y_15, o_52);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,s_53 = NULL,t_53 = NULL;
  o_53 = t;
  if(match_cons(t, sym__2))
    {
      p_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_20, t_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_53 = ATgetFirst((ATermList) t);
          s_53 = (ATerm) ATgetNext((ATermList) t);
          t = s_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, q_53, t_53);
          {
            ATerm m_26 = t;
            int n_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                ;
                LocalPopChoice(n_26);
              }
            else
              {
                t = m_26;
                {
                  ATerm t_9 = NULL,v_9 = NULL,w_9 = NULL;
                  t = term_c_17;
                  v_9 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_53, t_53)), term_d_17);
                  w_9 = t;
                  t = SSL_printnl(v_9, w_9);
                  t = term_h_16;
                  t_9 = t;
                  t = SSL_exit(t_9);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_53, t_53)), term_d_17);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              q_53 = ATgetArgument(t, 0);
              s_53 = ATgetArgument(t, 1);
              {
                ATerm f_11 = NULL,g_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, q_53, t_53);
                {
                  ATerm o_26 = t;
                  int q_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      ;
                      LocalPopChoice(q_26);
                    }
                  else
                    {
                      t = o_26;
                      {
                        ATerm i_11 = NULL,k_11 = NULL,m_11 = NULL;
                        t = term_c_17;
                        k_11 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_53, t_53)), term_d_17);
                        m_11 = t;
                        t = SSL_printnl(k_11, m_11);
                        t = term_h_16;
                        i_11 = t;
                        t = SSL_exit(i_11);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_53, t_53)), term_d_17);
                      }
                    }
                  f_11 = t;
                  if(match_cons(t, sym__2))
                    {
                      ATerm s_26 = ATgetArgument(t, 0);
                      g_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, q_53, s_53), t_53);
                  {
                    ATerm u_26 = t;
                    int v_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_11 = NULL;
                        t = get_width_0_0(t);
                        p_11 = t;
                        t = (ATerm) ATmakeAppl(sym__2, g_11, p_11);
                        t = leq_0_0(t);
                        LocalPopChoice(v_26);
                        t = f_11;
                      }
                    else
                      {
                        t = u_26;
                        t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
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
                                ATerm s_11 = NULL,w_11 = NULL,b_12 = NULL;
                                t = term_c_17;
                                w_11 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_d_17);
                                b_12 = t;
                                t = SSL_printnl(w_11, b_12);
                                t = term_h_16;
                                s_11 = t;
                                t = SSL_exit(s_11);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_d_17);
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
                  q_53 = ATgetArgument(t, 0);
                  s_53 = ATgetArgument(t, 1);
                  {
                    ATerm y_26 = t;
                    int z_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_53, s_53), t_53);
                        {
                          ATerm a_27 = t;
                          int b_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(b_27);
                            }
                          else
                            {
                              t = a_27;
                              {
                                ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
                                t = term_c_17;
                                w_12 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_53, s_53), t_53)), term_d_17);
                                x_12 = t;
                                t = SSL_printnl(w_12, x_12);
                                t = term_h_16;
                                v_12 = t;
                                t = SSL_exit(v_12);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_53, s_53), t_53)), term_d_17);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(z_26);
                      }
                    else
                      {
                        t = y_26;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_53, s_53), t_53);
                        {
                          ATerm c_27 = t;
                          int d_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              ;
                              LocalPopChoice(d_27);
                            }
                          else
                            {
                              t = c_27;
                              {
                                ATerm q_13 = NULL,r_13 = NULL,t_13 = NULL;
                                t = term_c_17;
                                r_13 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_53, s_53), t_53)), term_d_17);
                                t_13 = t;
                                t = SSL_printnl(r_13, t_13);
                                t = term_h_16;
                                q_13 = t;
                                t = SSL_exit(q_13);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_53, s_53), t_53)), term_d_17);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm e_27 = t;
                  int f_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm g_27 = ATgetArgument(t, 0);
                          s_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(f_27);
                      t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
                      {
                        ATerm h_27 = t;
                        int k_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            ;
                            LocalPopChoice(k_27);
                          }
                        else
                          {
                            t = h_27;
                            {
                              ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
                              t = term_c_17;
                              m_14 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_d_17);
                              n_14 = t;
                              t = SSL_printnl(m_14, n_14);
                              t = term_h_16;
                              l_14 = t;
                              t = SSL_exit(l_14);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_d_17);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = e_27;
                      {
                        ATerm o_27 = t;
                        int p_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm t_27 = ATgetArgument(t, 0);
                                s_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(p_27);
                            t = s_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                b_53 = ATgetFirst((ATermList) t);
                                g_53 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = b_53;
                            if(match_cons(t, sym_S_1))
                              {
                                c_53 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = g_53;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, c_53, t_53);
                          }
                        else
                          {
                            t = o_27;
                            if(match_cons(t, sym_S_1))
                              {
                                q_53 = ATgetArgument(t, 0);
                                {
                                  ATerm z_53 = NULL,a_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, q_53, t_53);
                                  t = a_10(q_53, t_53, t);
                                  a_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, t_53, a_54);
                                  t = g_10(t_53, a_54, t);
                                  z_53 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, q_53, z_53);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    q_53 = ATgetArgument(t, 0);
                                    s_53 = ATgetArgument(t, 1);
                                    n_53 = ATgetArgument(t, 2);
                                    t = q_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        m_53 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = n_53;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        h_53 = ATgetFirst((ATermList) t);
                                        i_53 = (ATerm) ATgetNext((ATermList) t);
                                        t = i_53;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = h_53;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm v_27 = t;
                                                int w_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_54(m_53, s_53, n_53, t_53, o_53, t);
                                                    ;
                                                    LocalPopChoice(w_27);
                                                  }
                                                else
                                                  {
                                                    t = v_27;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = k_54(m_53, s_53, n_53, t_53, o_53, t);
                                              }
                                          }
                                        else
                                          {
                                            t = h_53;
                                            t = k_54(m_53, s_53, n_53, t_53, o_53, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm x_27 = t;
                                            int y_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = k_54(m_53, s_53, n_53, t_53, o_53, t);
                                                ;
                                                LocalPopChoice(y_27);
                                              }
                                            else
                                              {
                                                t = x_27;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_53);
                                              }
                                          }
                                        else
                                          {
                                            t = k_54(m_53, s_53, n_53, t_53, o_53, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        q_53 = ATgetArgument(t, 0);
                                        s_53 = ATgetArgument(t, 1);
                                        t = l_54(q_53, s_53, t_53, o_53, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            q_53 = ATgetArgument(t, 0);
                                            s_53 = ATgetArgument(t, 1);
                                            t = m_54(q_53, s_53, t_53, o_53, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                q_53 = ATgetArgument(t, 0);
                                                s_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = n_54(q_53, s_53, t_53, o_53, t);
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
ATerm u_55 (ATerm k_55, ATerm t)
{
  t = SSL_fclose(k_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_55 = NULL,s_55 = NULL;
  s_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_55 = ATgetArgument(t, 0);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_55);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = u_55(s_55, t);
          }
      }
    }
  else
    {
      t = u_55(s_55, t);
    }
  return(t);
}
ATerm b_10 (ATerm e_34, ATerm t)
{
  t = SSL_read_term_from_stream(e_34);
  return(t);
}
ATerm c_10 (ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm v_55 = NULL;
  t = SSL_fopen(e_29, f_29);
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_55 = NULL;
  t = SSL_stdin_stream();
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = SSL_stdout_stream();
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_stderr_stream();
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_56);
  return(t);
}
ATerm a_58 (ATerm k_56, ATerm t)
{
  ATerm l_56 = NULL;
  t = SSL_explode_term(k_56);
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
          {
            l_56 = ATgetFirst((ATermList) c_28);
            {
              ATerm d_28 = (ATerm) ATgetNext((ATermList) c_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_58 (ATerm q_56, ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,g_57 = NULL,j_21 = NULL;
  t = SSLgetAnnotations(w_56);
  b_57 = t;
  t = q_56;
  if(match_cons(t, sym_Path_1))
    {
      g_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_57, v_56);
  j_21 = t;
  t = SSLsetAnnotations(j_21, b_57);
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(z_56, a_57, t);
  return(t);
}
ATerm c_58 (ATerm i_57, ATerm j_57, ATerm m_57, ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,r_57 = NULL,v_57 = NULL,n_21 = NULL;
  t = SSLgetAnnotations(m_57);
  r_57 = t;
  t = SSL_is_string(i_57);
  v_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_57, j_57);
  n_21 = t;
  t = SSLsetAnnotations(n_21, r_57);
  if(match_cons(t, sym__2))
    {
      n_57 = ATgetArgument(t, 0);
      o_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(n_57, o_57, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      ATerm h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_57 = t;
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_58(x_57, t);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm k_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_58(y_57, z_57, x_57, t);
                  ;
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = k_28;
                  t = c_58(y_57, z_57, x_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_58(x_57, t);
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_58 = NULL;
      g_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_58, term_y_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = debug_1_0(r_7, t);
      _fail(t);
    }
  e_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(f_58, t);
  d_58 = t;
  t = e_58;
  t = fclose_0_0(t);
  t = d_58;
  return(t);
}
ATerm d_10 (ATerm w_28, ATerm x_28, ATerm t)
{
  t = SSL_access(w_28, x_28);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_58 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_28;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_58 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_14);
      o_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_58, (ATerm) ATinsert(ATempty, term_q_14));
      t = d_10(l_58, o_58, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_10 (ATerm h_35, ATerm i_35, ATerm t)
{
  t = SSL_copy(h_35, i_35);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  f_59 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL;
        t = f_59;
        t = n_0(t);
        g_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = g_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = g_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_59, g_15);
        t = e_10(g_59, g_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_15 = NULL;
              t = f_59;
              t = n_0(t);
              o_15 = t;
              {
                ATerm k_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_15 = NULL;
                    p_15 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_15;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_15;
                          }
                        else
                          {
                            t = p_15;
                            if((g_59 != t))
                              {
                                _fail(t);
                              }
                            t = p_15;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_29;
                  }
                t = (ATerm) ATmakeAppl(sym__2, g_59, o_15);
                t = e_10(g_59, o_15, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
              }
              ;
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              t = f_59;
              t = n_0(t);
              if((g_59 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
            }
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm o_18, ATerm p_18, ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  l_59 = t;
  {
    ATerm l_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_18, p_18);
        t = k_10(o_18, p_18, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_29 = ATgetFirst((ATermList) t);
            k_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_29);
        t = SSL_table_put(o_18, p_18, k_59);
        t = (ATerm) ATmakeAppl(sym__3, o_18, p_18, k_59);
      }
    else
      {
        t = l_29;
        t = SSL_table_remove(o_18, p_18);
        t = (ATerm) ATmakeAppl(sym__2, o_18, p_18);
      }
    t = l_59;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  r_59 = t;
  t = p_80(t);
  q_59 = t;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_59 = NULL;
        t = term_o_13;
        t_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_59, term_o_13);
        t = k_10(q_59, t_59, t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_59 = ATgetFirst((ATermList) t);
        n_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_13;
    s_59 = t;
    t = SSL_table_put(q_59, s_59, n_59);
    t = o_59;
    {
      ATerm x_7 (ATerm t)
      {
        ATerm u_59 = NULL;
        u_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_59, u_59);
        t = f_10(q_59, u_59, t);
        return(t);
      }
      t = map_1_0(x_7, t);
      t = r_59;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_69(t);
      t = o_69(t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      t = o_69(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL,d_60 = NULL;
  y_59 = t;
  t = o_80(t);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_59, term_o_13);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_60 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_30 = ATgetArgument(t, 0);
            ATerm c_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_13;
        i_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_59, term_o_13);
        t = k_10(x_59, i_60, t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATempty;
      }
    a_60 = t;
    t = term_o_13;
    b_60 = t;
    t = (ATerm) ATinsert(CheckATermList(a_60), (ATerm) ATempty);
    d_60 = t;
    t = SSL_table_put(x_59, b_60, d_60);
    t = y_59;
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_60);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = z_60;
      }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_65 (ATerm), ATerm t)
{
  ATerm r_60 = NULL;
  ATerm a_8 (ATerm t)
  {
    ATerm s_60 = NULL;
    s_60 = t;
    {
      ATerm g_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_60 = NULL,v_60 = NULL;
          t = term_u_14;
          u_60 = t;
          t = term_o_13;
          v_60 = t;
          t = term_j_30;
          t = k_10(u_60, v_60, t);
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = g_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_60 != NULL) && (r_60 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_60 = ATgetFirst((ATermList) t);
          {
            ATerm k_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = r_60;
      t = map_1_0(b_8, t);
      t = s_60;
      t = end_scope_1_0(e_8, t);
    }
    return(t);
  }
  t = begin_scope_1_0(y_7, t);
  t = restore_always_2_0(b_65, a_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = term_o_30;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_65 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_61 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        e_61 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_61);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = term_z_28;
      }
    t = c_65(t);
    t = copy_to_1_0(g_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  f_61 = t;
  t = term_j_14;
  t = whoami_0_0(t);
  g_61 = t;
  t = term_c_17;
  i_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_30), g_61), term_s_30);
  j_61 = t;
  t = SSL_printnl(i_61, j_61);
  t = term_h_16;
  h_61 = t;
  t = SSL_exit(h_61);
  t = f_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
      t = term_j_14;
      t = m_0(t);
      s_61 = t;
      t = term_u_30;
      t_61 = t;
      t = term_v_30;
      u_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, s_61);
      t = l_10(t_61, u_61, s_61, t);
      _fail(t);
    }
  else
    {
      ATerm c_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_61 = ATgetFirst((ATermList) t);
          p_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_61 = ATgetFirst((ATermList) t);
          r_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_61;
      t = k_0(t);
      t = q_61;
      t = l_0(t);
      c_62 = t;
      t = (ATerm) ATinsert(CheckATermList(r_61), c_62);
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm e_62 = NULL;
  e_62 = t;
  if(match_string(t, "-k"))
    {
      t = e_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_62;
    }
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm i_62 = NULL,l_62 = NULL,o_62 = NULL;
  i_62 = t;
  t = SSL_string_to_int(i_62);
  l_62 = t;
  t = term_w_30;
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, l_62);
  t = n_10(o_62, l_62, t);
  t = i_62;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_8, k_8, m_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm s_62 = NULL;
  s_62 = t;
  if(match_string(t, "-S"))
    {
      t = s_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_62;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  t = term_y_30;
  t_62 = t;
  t = term_r_15;
  u_62 = t;
  t = term_z_30;
  t = n_10(t_62, u_62, t);
  t = term_a_31;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_b_31;
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
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  t = SSL_string_to_int(x_62);
  y_62 = t;
  t = term_y_30;
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, y_62);
  t = n_10(z_62, y_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_62);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_c_31;
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
  ATerm d_63 = NULL,h_63 = NULL;
  t = term_d_31;
  d_63 = t;
  t = term_j_14;
  h_63 = t;
  t = term_e_31;
  t = n_10(d_63, h_63, t);
  t = term_f_31;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_8, r_8, s_8, t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_8, v_8, w_8, t);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = Option_3_0(x_8, g_9, q_9, t);
          }
      }
    }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm j_63 = NULL;
  j_63 = t;
  if(match_string(t, "-o"))
    {
      t = j_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_63;
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL;
  k_63 = t;
  t = term_n_30;
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_30, k_63);
  t = n_10(l_63, k_63, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_63);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_9, x_9, y_9, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  if(match_string(t, "-i"))
    {
      t = n_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_63;
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  p_63 = t;
  t = term_r_30;
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, p_63);
  t = n_10(q_63, p_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_63);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_m_31;
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
  ATerm s_63 = NULL,t_63 = NULL;
  t = term_n_31;
  s_63 = t;
  t = term_j_14;
  t_63 = t;
  t = term_o_31;
  t = n_10(s_63, t_63, t);
  t = term_p_31;
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm u_63 = NULL;
  u_63 = t;
  if(match_string(t, "-w"))
    {
      t = u_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = u_63;
    }
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,z_63 = NULL;
  v_63 = t;
  t = SSL_string_to_int(v_63);
  w_63 = t;
  t = term_d_16;
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, w_63);
  t = n_10(z_63, w_63, t);
  t = v_63;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            {
              ATerm w_31 = t;
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_10, r_10, s_10, t);
                  ;
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = w_31;
                  {
                    ATerm c_32 = t;
                    int d_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(d_32);
                      }
                    else
                      {
                        t = c_32;
                        {
                          ATerm g_32 = t;
                          int h_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(h_32);
                            }
                          else
                            {
                              t = g_32;
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
  ATerm a_64 = NULL,b_64 = NULL,d_64 = NULL,g_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_14;
  t = whoami_0_0(t);
  a_64 = t;
  t = term_c_17;
  d_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_32), a_64);
  g_64 = t;
  t = SSL_printnl(d_64, g_64);
  t = term_h_16;
  b_64 = t;
  t = SSL_exit(b_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_10 (ATerm a_51, ATerm b_51, ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_51, b_51);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = SSL_addr(a_51, b_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_64;
      t = a_77(t);
    }
  else
    {
      ATerm q_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_64 = ATgetFirst((ATermList) t);
          k_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_64;
      t = foldr_2_0(a_77, b_77, t);
      q_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_64, q_64);
      t = b_77(t);
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
  t = term_r_15;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(z_15, a_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_64 = NULL,v_15 = NULL,w_15 = NULL;
  t = times_0_0(t);
  w_15 = t;
  t = SSL_explode_term(w_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15;
  t = foldr_2_0(y_10, z_10, t);
  w_64 = t;
  t = SSL_TicksToSeconds(w_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  j_65 = t;
  if(match_cons(t, sym__2))
    {
      k_65 = ATgetArgument(t, 0);
      l_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_65;
        if((k_65 != t))
          {
            _fail(t);
          }
        t = j_65;
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATmakeAppl(sym__2, k_65, l_65);
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_65, l_65);
              ;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = SSL_gtr(k_65, l_65);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_65, l_65);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_65 = NULL;
        t = term_y_30;
        t = get_config_0_0(t);
        r_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_65, term_h_16);
        t = geq_0_0(t);
        t = p_65;
        t = r_79(t);
        ;
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = p_65;
      }
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,w_65 = NULL,x_65 = NULL;
  t = run_time_0_0(t);
  t_65 = t;
  t = term_j_14;
  t = whoami_0_0(t);
  u_65 = t;
  t = term_c_17;
  w_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_33), t_65), term_z_32), u_65);
  x_65 = t;
  t = SSL_printnl(w_65, x_65);
  t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_33), t_65), term_z_32), u_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_15;
  y_65 = t;
  t = SSL_exit(y_65);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  i_66 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_66;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_66 = ATgetArgument(t, 0);
          {
            ATerm n_16 = NULL,s_21 = NULL;
            t = SSLgetAnnotations(i_66);
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_66);
            s_21 = t;
            t = SSLsetAnnotations(s_21, n_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_66;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = fetch_1_0(h_11, t);
    }
  t = l_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_66 = ATgetFirst((ATermList) t);
      m_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_66 = NULL,r_66 = NULL;
        ATerm c_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_66)), not_null(r_66));
          return(t);
        }
        t = m_66;
        t = j_0(t);
        if(((q_66 != NULL) && (q_66 != t)))
          _fail(t);
        else
          q_66 = t;
        t = l_66;
        t = i_0(t);
        if(((r_66 != NULL) && (r_66 != t)))
          _fail(t);
        else
          r_66 = t;
        t = m_66;
        t = reverse_acc_2_0(i_0, c_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_14;
      t = j_0(t);
    }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,u_21 = NULL;
  x_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_66);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_66);
  u_21 = t;
  t = SSLsetAnnotations(u_21, v_66);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm z_66 = NULL;
  z_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_66), term_s_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL;
  ATerm t_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = t_33;
      t = fetch_1_0(d_12, t);
    }
  t = term_w_33;
  t = echo_0_0(t);
  t = term_u_30;
  t_66 = t;
  t = term_v_30;
  u_66 = t;
  t = term_z_33;
  t = k_10(t_66, u_66, t);
  t = reverse_acc_2_0(_id, e_12, t);
  t = map_1_0(f_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  ATerm w_67 (ATerm t)
  {
    ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
    t_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_67 = ATgetFirst((ATermList) t);
        v_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_17 = NULL,e_17 = NULL,w_21 = NULL;
          t = SSLgetAnnotations(t_67);
          b_17 = t;
          t = u_67;
          t = a_71(t);
          e_17 = t;
          t = (ATerm) ATinsert(CheckATermList(v_67), e_17);
          w_21 = t;
          t = SSLsetAnnotations(w_21, b_17);
          ;
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm r_17 = NULL,w_17 = NULL,z_21 = NULL;
            t = SSLgetAnnotations(t_67);
            r_17 = t;
            t = v_67;
            t = w_67(t);
            w_17 = t;
            t = (ATerm) ATinsert(CheckATermList(w_17), u_67);
            z_21 = t;
            t = SSLsetAnnotations(z_21, r_17);
          }
        }
    }
    return(t);
  }
  t = w_67(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  {
    ATerm c_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_68;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_34 = ATgetFirst((ATermList) t);
                ATerm h_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_68;
          }
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = c_34;
        t = (ATerm) ATinsert(ATempty, a_68);
      }
    b_68 = t;
    t = term_o_30;
    c_68 = t;
    t = SSL_printnl(c_68, b_68);
    t = a_68;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_10 (ATerm w_49, ATerm x_49, ATerm t)
{
  t = SSL_strcat(w_49, x_49);
  return(t);
}
ATerm debug_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  g_68 = t;
  t = i_82(t);
  h_68 = t;
  t = term_c_17;
  i_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_68), h_68);
  j_68 = t;
  t = SSL_printnl(i_68, j_68);
  t = g_68;
  return(t);
}
ATerm map_1_0 (ATerm q_70 (ATerm), ATerm t)
{
  ATerm y_68 (ATerm t)
  {
    ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
    v_68 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_68;
      }
    else
      {
        ATerm z_18 = NULL,p_19 = NULL,q_19 = NULL,d_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_68 = ATgetFirst((ATermList) t);
            x_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_68);
        z_18 = t;
        t = w_68;
        t = q_70(t);
        p_19 = t;
        t = x_68;
        t = y_68(t);
        q_19 = t;
        t = (ATerm) ATinsert(CheckATermList(q_19), p_19);
        d_22 = t;
        t = SSLsetAnnotations(d_22, z_18);
      }
    return(t);
  }
  t = y_68(t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
    }
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_69 = NULL;
      g_69 = t;
      t = SSL_is_string(g_69);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_12, t);
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm m_69 = NULL,p_69 = NULL,q_69 = NULL;
              m_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_69 = ATgetArgument(t, 0);
                  t = p_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_69 = ATgetArgument(t, 0);
                      t = p_69;
                      {
                        ATerm p_34 = t;
                        int q_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_34);
                          }
                        else
                          {
                            t = p_34;
                            t = debug_1_0(h_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_69 = NULL,v_69 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_69 = ATgetArgument(t, 0);
                          q_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_69;
                      t = eval_config_0_0(t);
                      u_69 = t;
                      t = q_69;
                      t = eval_config_0_0(t);
                      v_69 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_69, v_69);
                      t = j_10(u_69, v_69, t);
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
  ATerm z_69 = NULL,a_70 = NULL;
  z_69 = t;
  t = term_u_34;
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, z_69);
  t = k_10(a_70, z_69, t);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_70 = NULL,c_70 = NULL;
        t = eval_config_0_0(t);
        b_70 = t;
        t = term_u_34;
        c_70 = t;
        t = SSL_table_put(c_70, z_69, b_70);
        t = b_70;
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
      }
  }
  return(t);
}
ATerm m_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  t = term_b_35;
  f_70 = t;
  t = term_j_14;
  g_70 = t;
  t = term_c_35;
  t = n_10(f_70, g_70, t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  t = term_b_35;
  j_70 = t;
  t = term_j_14;
  k_70 = t;
  t = term_c_35;
  t = n_10(j_70, k_70, t);
  t = term_e_35;
  h_70 = t;
  t = term_j_14;
  i_70 = t;
  t = term_f_35;
  t = n_10(h_70, i_70, t);
  t = term_j_35;
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_12, n_12, p_12, t);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = Option_3_0(r_12, t_12, y_12, t);
    }
  return(t);
}
ATerm n_10 (ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm l_70 = NULL;
  t = term_u_34;
  l_70 = t;
  t = SSL_table_put(l_70, m_29, n_29);
  t = (ATerm) ATmakeAppl(sym__3, term_u_34, m_29, n_29);
  return(t);
}
ATerm k_10 (ATerm a_20, ATerm b_20, ATerm t)
{
  t = SSL_table_get(a_20, b_20);
  return(t);
}
ATerm l_10 (ATerm j_18, ATerm k_18, ATerm i_18, ATerm t)
{
  ATerm n_70 = NULL,p_70 = NULL,s_70 = NULL;
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_35 = ATgetArgument(t, 0);
            ATerm q_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
        t = k_10(j_18, k_18, t);
        ;
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATempty;
      }
    p_70 = t;
    t = (ATerm) ATinsert(CheckATermList(p_70), i_18);
    s_70 = t;
    t = SSL_table_put(j_18, k_18, s_70);
    t = n_70;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_70 = NULL,c_71 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_71 = NULL,f_71 = NULL,i_71 = NULL;
      t = term_j_14;
      t = h_0(t);
      e_71 = t;
      t = term_u_30;
      f_71 = t;
      t = term_v_30;
      i_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, e_71);
      t = l_10(f_71, i_71, e_71, t);
      _fail(t);
    }
  else
    {
      ATerm n_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_70 = ATgetFirst((ATermList) t);
          c_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_70;
      t = d_0(t);
      t = term_j_14;
      t = g_0(t);
      n_71 = t;
      t = (ATerm) ATinsert(CheckATermList(c_71), n_71);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,f_22 = NULL;
  t_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_71 = ATgetFirst((ATermList) t);
      q_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_71);
  o_71 = t;
  t = p_71;
  t = x_56(t);
  r_71 = t;
  t = q_71;
  t = y_56(t);
  s_71 = t;
  t = (ATerm) ATinsert(CheckATermList(s_71), r_71);
  f_22 = t;
  t = SSLsetAnnotations(f_22, o_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,d_72 = NULL,e_72 = NULL,l_22 = NULL;
  y_71 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_35;
        t = j_86(t);
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
      }
    t = y_71;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_72 = ATgetFirst((ATermList) t);
        b_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_71);
    z_71 = t;
    t = term_j_32;
    e_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_32, a_72);
    t = n_10(e_72, a_72, t);
    t = b_72;
    {
      ATerm t_72 (ATerm t)
      {
        ATerm u_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_35 = t;
            int z_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_72 = NULL;
                h_72 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_72;
                ;
                LocalPopChoice(z_35);
              }
            else
              {
                t = y_35;
                t = j_86(t);
                t = Cons_2_0(_id, t_72, t);
              }
            ;
            LocalPopChoice(x_35);
          }
        else
          {
            t = u_35;
            {
              ATerm k_72 = NULL,q_72 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_72 = ATgetFirst((ATermList) t);
                  q_72 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_72), (ATerm) ATmakeAppl(sym_Undefined_1, k_72));
            }
          }
        return(t);
      }
      t = t_72(t);
      if(((d_72 != NULL) && (d_72 != t)))
        _fail(t);
      else
        d_72 = t;
      t = (ATerm) ATinsert(CheckATermList(d_72), (ATerm) ATmakeAppl(sym_Program_1, a_72));
      if(((l_22 != NULL) && (l_22 != t)))
        _fail(t);
      else
        l_22 = t;
      t = SSLsetAnnotations(l_22, z_71);
    }
  }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm f_73 = NULL;
  f_73 = t;
  if(match_string(t, "--help"))
    {
      t = f_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_73;
        }
    }
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL;
  t = term_l_33;
  g_73 = t;
  t = term_j_14;
  h_73 = t;
  t = term_a_36;
  t = n_10(g_73, h_73, t);
  t = term_b_36;
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm h_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  a_73 = t;
  t = term_u_30;
  c_73 = t;
  t = term_v_30;
  d_73 = t;
  t = (ATerm) ATempty;
  e_73 = t;
  t = SSL_table_put(c_73, d_73, e_73);
  t = a_73;
  {
    ATerm z_12 (ATerm t)
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_86(t);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          {
            ATerm f_36 = t;
            int g_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_13, b_13, g_13, t);
                ;
                LocalPopChoice(g_36);
              }
            else
              {
                t = f_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_12, t);
    {
      ATerm h_36 = t;
      int i_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_73 = NULL;
          o_73 = t;
          {
            ATerm j_36 = t;
            int k_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_20 = NULL;
                t = o_73;
                {
                  ATerm l_36 = t;
                  int m_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_36);
                    }
                  else
                    {
                      t = l_36;
                      t = fetch_1_0(h_13, t);
                    }
                  t = o_73;
                  t = default_system_usage_0_0(t);
                  t = term_r_15;
                  l_20 = t;
                  t = SSL_exit(l_20);
                }
                ;
                LocalPopChoice(k_36);
              }
            else
              {
                t = j_36;
                {
                  ATerm q_20 = NULL;
                  t = term_b_35;
                  t = get_config_0_0(t);
                  t = o_73;
                  t = default_system_about_0_0(t);
                  t = term_r_15;
                  q_20 = t;
                  t = SSL_exit(q_20);
                }
              }
          }
          ;
          LocalPopChoice(i_36);
        }
      else
        {
          t = h_36;
          {
            ATerm n_36 = t;
            int o_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
                ATerm k_13 (ATerm t)
                {
                  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,p_22 = NULL;
                  u_73 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_73 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_73);
                  s_73 = t;
                  t = t_73;
                  if(((y_72 != NULL) && (y_72 != t)))
                    _fail(t);
                  else
                    y_72 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_73);
                  p_22 = t;
                  t = SSLsetAnnotations(p_22, s_73);
                  return(t);
                }
                t = fetch_1_0(k_13, t);
                t = term_c_17;
                if(((q_73 != NULL) && (q_73 != t)))
                  _fail(t);
                else
                  q_73 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_72)), term_p_36);
                if(((r_73 != NULL) && (r_73 != t)))
                  _fail(t);
                else
                  r_73 = t;
                t = SSL_printnl(q_73, r_73);
                t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_72)), term_p_36));
                t = default_system_usage_0_0(t);
                t = term_h_16;
                if(((p_73 != NULL) && (p_73 != t)))
                  _fail(t);
                else
                  p_73 = t;
                t = SSL_exit(p_73);
                ;
                LocalPopChoice(o_36);
              }
            else
              {
                t = n_36;
              }
          }
        }
      if(((z_72 != NULL) && (z_72 != t)))
        _fail(t);
      else
        z_72 = t;
      t = term_u_30;
      if(((b_73 != NULL) && (b_73 != t)))
        _fail(t);
      else
        b_73 = t;
      t = SSL_table_destroy(b_73);
      t = z_72;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL;
  t = parse_options_1_0(n_84, t);
  z_73 = t;
  t = term_q_36;
  c_74 = t;
  t = SSL_table_create(c_74);
  t = term_q_36;
  a_74 = t;
  t = term_r_36;
  b_74 = t;
  t = SSL_table_put(a_74, b_74, z_73);
  t = z_73;
  t = p_84(t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_84, t);
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        {
          ATerm y_36 = t;
          int z_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_36);
            }
          else
            {
              t = y_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = xtc_io_1_0(m_13, t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  t = read_from_0_0(t);
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_74, term_r_15);
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        {
          ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
          t = term_c_17;
          j_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_74, term_r_15)), term_d_17);
          k_74 = t;
          t = SSL_printnl(j_74, k_74);
          t = term_h_16;
          i_74 = t;
          t = SSL_exit(i_74);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_74, term_r_15)), term_d_17);
        }
      }
    h_74 = t;
    t = SSL_explode_term(h_74);
    if(match_cons(t, sym__2))
      {
        ATerm d_37 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) d_37) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm g_37 = ATgetArgument(t, 1);
          if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
            {
              g_74 = ATgetFirst((ATermList) g_37);
              {
                ATerm h_37 = (ATerm) ATgetNext((ATermList) g_37);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_74, term_i_37);
    t = topdown_print_to_0_0(t);
  }
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, l_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
