#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_SOpt_2;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
static void init_module_constructors (void)
{
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
}
ATerm term_f_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_r_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_r_34;
ATerm term_k_34;
ATerm term_y_33;
ATerm term_s_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_s_32;
ATerm term_j_32;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_x_28;
ATerm term_p_28;
ATerm term_m_24;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_m_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_r_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_z_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_r_14);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_y_15);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_15);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_a_15);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_a_15);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_o_30);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_x_34, term_a_15);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_a_15);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_a_15);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm topdown_1_0 (ATerm d_72 (ATerm), ATerm t);
static ATerm r_1 (ATerm u_0, ATerm t);
static ATerm s_1 (ATerm y_0, ATerm i_1, ATerm j_1, ATerm t);
static ATerm e_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm a_9 (ATerm m_88 (ATerm), ATerm f_33, ATerm d_33, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm d_10 (ATerm o_78 (ATerm), ATerm r_24, ATerm x_259, ATerm t);
ATerm at_suffix_1_0 (ATerm z_78 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm s_78 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm e_10 (ATerm p_18, ATerm q_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm b_9 (ATerm s_14, ATerm q_14, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm c_9 (ATerm m_0, ATerm o_14, ATerm l_14, ATerm t);
static ATerm d_9 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm e_9 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm j_15, ATerm i_15, ATerm t);
static ATerm f_9 (ATerm k_70 (ATerm), ATerm e_15, ATerm c_15, ATerm f_15, ATerm d_15, ATerm t);
ATerm foldl_1_0 (ATerm u_84 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm p_70 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm h_9 (ATerm d_55, ATerm e_55, ATerm t);
static ATerm j_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm b_1, ATerm f_1, ATerm x_0, ATerm t);
ATerm thread_map_1_0 (ATerm g_85 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm k_9 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm t);
static ATerm l_13 (ATerm m_12, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm m_9 (ATerm j_51, ATerm k_51, ATerm l_51, ATerm t);
static ATerm n_9 (ATerm p_55, ATerm q_55, ATerm t);
static ATerm o_9 (ATerm v_55, ATerm w_55, ATerm t);
static ATerm p_9 (ATerm v_51, ATerm w_51, ATerm r_51, ATerm t);
static ATerm q_9 (ATerm c_52, ATerm a_52, ATerm b_52, ATerm t);
static ATerm r_9 (ATerm n_51, ATerm o_51, ATerm p_51, ATerm t);
static ATerm y_22 (ATerm n_20, ATerm r_20, ATerm s_20, ATerm t);
static ATerm z_22 (ATerm i_21, ATerm j_21, ATerm t);
static ATerm a_23 (ATerm r_21, ATerm w_21, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm x_9 (ATerm y_16, ATerm x_16, ATerm t_16, ATerm v_16, ATerm s_16, ATerm t);
ATerm genzip_4_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm v_78 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_32 (ATerm l_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm FitToMax_1_0 (ATerm o_70 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm c_54 (ATerm c_45, ATerm d_45, ATerm e_45, ATerm g_45, ATerm h_45, ATerm t);
static ATerm d_54 (ATerm s_46, ATerm t_46, ATerm u_46, ATerm x_46, ATerm t);
static ATerm e_54 (ATerm m_47, ATerm n_47, ATerm o_47, ATerm p_47, ATerm t);
static ATerm f_54 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm s_49, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm i_55 (ATerm r_54, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_10 (ATerm h_23, ATerm t);
static ATerm g_10 (ATerm b_32, ATerm c_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_57 (ATerm g_56, ATerm t);
static ATerm v_57 (ATerm l_56, ATerm m_56, ATerm p_56, ATerm t);
static ATerm y_57 (ATerm b_57, ATerm c_57, ATerm d_57, ATerm t);
static ATerm h_10 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_10 (ATerm s_31, ATerm t_31, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm j_10 (ATerm p_38, ATerm q_38, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm k_10 (ATerm p_20, ATerm q_20, ATerm t);
ATerm end_scope_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_88 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_71 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_71 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_10 (ATerm x_54, ATerm y_54, ATerm t);
ATerm foldr_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_87 (ATerm), ATerm t);
static ATerm a_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm need_help_1_0 (ATerm p_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_78 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_10 (ATerm s_53, ATerm t_53, ATerm t);
ATerm debug_1_0 (ATerm c_77 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_78 (ATerm), ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm s_10 (ATerm k_32, ATerm l_32, ATerm t);
static ATerm p_10 (ATerm b_22, ATerm c_22, ATerm t);
static ATerm q_10 (ATerm k_20, ATerm l_20, ATerm j_20, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_93 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm parse_options_1_0 (ATerm m_93 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(d_72, t);
    return(t);
  }
  t = d_72(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm r_1 (ATerm u_0, ATerm t)
{
  t = u_0;
  {
    ATerm n_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_13 = ATgetArgument(t, 0);
            ATerm x_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_13;
      }
  }
  t = term_z_13;
  t = debug_1_0(e_0, t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, term_c_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm s_1 (ATerm y_0, ATerm i_1, ATerm j_1, ATerm t)
{
  t = SSL_open_file(y_0, i_1);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      {
        ATerm g_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_1(n_1, t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = g_14;
            t = s_1(o_1, q_1, n_1, t);
          }
      }
    }
  else
    {
      t = r_1(n_1, t);
    }
  return(t);
}
static ATerm a_9 (ATerm m_88 (ATerm), ATerm f_33, ATerm d_33, ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  z_1 = t;
  t = m_88(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_1, f_33, d_33);
  t = q_10(u_1, f_33, d_33, t);
  {
    ATerm n_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 = NULL;
        t = term_r_14;
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_1, term_r_14);
        t = p_10(u_1, c_2, t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_1 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_14;
  a_2 = t;
  t = (ATerm) ATinsert(CheckATermList(x_1), (ATerm) ATinsert(CheckATermList(v_1), f_33));
  b_2 = t;
  t = SSL_table_put(u_1, a_2, b_2);
  t = z_1;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  t = P__tmpdir_0_0(t);
  h_2 = t;
  t = term_y_14;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_2, term_y_14);
  t = o_10(h_2, l_2, t);
  j_2 = t;
  t = term_z_14;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_z_14);
  t = o_10(j_2, k_2, t);
  i_2 = t;
  t = SSL_mkstemp(i_2);
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, term_a_15);
  t = a_9(f_0, e_2, g_2, t);
  t = SSL_close(d_2);
  t = e_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm u_2 = NULL,w_2 = NULL;
  u_2 = t;
  t = xtc_new_file_0_0(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, term_c_14);
  t = open_file_0_0(t);
  t = u_2;
  {
    static ATerm h_0 (ATerm t)
    {
      ATerm d_3 = NULL;
      d_3 = t;
      {
        ATerm b_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 = NULL,c_0 = NULL;
            t = SSL_is_string(d_3);
            b_0 = t;
            t = (ATerm) ATinsert(ATempty, b_0);
            c_0 = t;
            t = SSL_print(w_2, c_0);
            t = b_0;
            LocalPopChoice(g_15);
          }
        else
          {
            t = b_15;
            t = d_3;
          }
      }
      return(t);
    }
    t = topdown_1_0(h_0, t);
  }
  t = SSL_close_file(w_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_2);
  return(t);
}
static ATerm d_10 (ATerm o_78 (ATerm), ATerm r_24, ATerm x_259, ATerm t)
{
  static ATerm j_0 (ATerm t)
  {
    ATerm l_37 = NULL;
    l_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_24, l_37);
    t = o_78(t);
    t = l_37;
    return(t);
  }
  t = x_259;
  t = SRTS_one(j_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  static ATerm j_38 (ATerm t)
  {
    ATerm h_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_78(t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = h_15;
        {
          ATerm b_38 = NULL,h_38 = NULL,i_38 = NULL,i_6 = NULL,t_6 = NULL,y_2 = NULL;
          b_38 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_38 = ATgetFirst((ATermList) t);
              i_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_38);
          i_6 = t;
          t = i_38;
          t = j_38(t);
          t_6 = t;
          t = (ATerm) ATinsert(CheckATermList(t_6), h_38);
          y_2 = t;
          t = SSLsetAnnotations(y_2, i_6);
        }
      }
    return(t);
  }
  t = j_38(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm n_38 = NULL,s_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_3 = NULL,a_3 = NULL;
    a_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_38 = ATgetFirst((ATermList) t);
        x_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_39);
    v_38 = t;
    t = w_38;
    t = s_78(t);
    y_38 = t;
    t = (ATerm) ATinsert(CheckATermList(x_38), y_38);
    a_3 = t;
    t = SSLsetAnnotations(a_3, v_38);
    z_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_38 = ATgetFirst((ATermList) t);
        u_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_38);
    n_38 = t;
    t = u_38;
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    t = (ATerm) ATinsert(CheckATermList(u_38), s_38);
    b_3 = t;
    t = SSLsetAnnotations(b_3, n_38);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(q_0, t);
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_38, not_null(l_38));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,q_39 = NULL;
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(q_102, t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm f_39 = NULL;
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_39, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_39;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_15 = ATgetFirst((ATermList) t);
              ATerm o_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_39;
          t = list_tokenize_1_0(q_102, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_15 = ATgetFirst((ATermList) t);
          ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, i_39);
        }
      else
        {
          ATerm x_39 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_15 = ATgetFirst((ATermList) t);
              ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_39;
          t = list_tokenize_1_0(q_102, t);
          x_39 = t;
          t = (ATerm) ATinsert(CheckATermList(x_39), i_39);
        }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      if((h_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  t = SSL_implode_string(i_40);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm y_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_4 = NULL;
  f_40 = t;
  if(match_cons(t, sym__2))
    {
      c_40 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_40);
  b_40 = t;
  t = SSL_explode_string(d_40);
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, e_40);
  g_4 = t;
  t = SSLsetAnnotations(g_4, b_40);
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_40;
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm g_40 = NULL;
      g_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_40, y_39);
      t = d_10(v_0, g_40, y_39, t);
      return(t);
    }
    t = list_tokenize_1_0(t_0, t);
  }
  t = map_1_0(w_0, t);
  return(t);
}
static ATerm e_10 (ATerm p_18, ATerm q_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_v_15), p_18);
  t = string_tokenize_0_0(t);
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_40 = NULL,q_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_y_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_40 = ATgetFirst((ATermList) t);
                q_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_40;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(p_40);
          }
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm r_40 = NULL,t_40 = NULL;
          t = last_0_0(t);
          t_40 = t;
          t = SSL_strlen(t_40);
          r_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_40, q_18);
          t = h_9(r_40, q_18, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm i_16 = t;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL,w_40 = NULL;
      if(match_cons(t, sym__2))
        {
          v_40 = ATgetArgument(t, 0);
          w_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_40, w_40);
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            t = SSL_gtr(v_40, w_40);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_16;
      t = get_config_0_0(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = term_a_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_37 = NULL,g_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_37 = ATgetFirst((ATermList) t);
      g_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_37;
    }
  else
    {
      t = g_37;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm b_9 (ATerm s_14, ATerm q_14, ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  t = s_14;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_1, t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = term_y_15;
      }
  }
  s_3 = t;
  t = term_d_17;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, term_d_17);
  t = l_10(s_3, t_3, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, term_v_15);
  t = copy_char_0_0(t);
  k_3 = t;
  t = s_14;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(k_1, t);
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = term_y_15;
      }
  }
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, term_g_17);
  t = copy_char_0_0(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_14, term_g_17);
  t = copy_char_0_0(t);
  n_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_3), m_3), k_3);
  p_3 = t;
  t = SSL_concat_strings(p_3);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = SSL_explode_term(z_3);
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
          {
            y_3 = ATgetFirst((ATermList) i_17);
            {
              ATerm j_17 = (ATerm) ATgetNext((ATermList) i_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_3;
  return(t);
}
static ATerm c_9 (ATerm m_0, ATerm o_14, ATerm l_14, ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_0, l_14);
  t = b_9(m_0, l_14, t);
  v_3 = t;
  t = o_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14;
  t = map_1_0(l_1, t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, x_3);
  t = d_9(v_3, x_3, t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, u_3);
  return(t);
}
static ATerm d_9 (ATerm d_24, ATerm e_24, ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  t = e_24;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_24;
    }
  else
    {
      ATerm s_0 = NULL,a_1 = NULL,k_4 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_4 = ATgetFirst((ATermList) t);
          v_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_24);
      s_0 = t;
      t = v_4;
      {
        static ATerm h_1 (ATerm t)
        {
          ATerm n_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 = NULL;
              c_1 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_1;
              LocalPopChoice(o_17);
            }
          else
            {
              t = n_17;
              {
                ATerm e_1 = NULL;
                t = Cons_2_0(_id, h_1, t);
                e_1 = t;
                t = (ATerm) ATinsert(CheckATermList(e_1), d_24);
              }
            }
          return(t);
        }
        t = h_1(t);
      }
      a_1 = t;
      t = (ATerm) ATinsert(CheckATermList(a_1), u_4);
      k_4 = t;
      t = SSLsetAnnotations(k_4, s_0);
    }
  return(t);
}
static ATerm e_9 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm j_15, ATerm i_15, ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,f_5 = NULL;
  t = term_a_15;
  t = m_70(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_15, f_5);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
          t = term_r_17;
          h_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_15, f_5)), term_s_17);
          i_5 = t;
          t = SSL_printnl(h_5, i_5);
          t = term_d_17;
          g_5 = t;
          t = SSL_exit(g_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_15, f_5)), term_s_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  t = l_70(t);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, c_5);
  t = l_10(a_5, c_5, t);
  b_5 = t;
  t = (ATerm) ATinsert(CheckATermList(i_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, z_4), b_5));
  return(t);
}
static ATerm f_9 (ATerm k_70 (ATerm), ATerm e_15, ATerm c_15, ATerm f_15, ATerm d_15, ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,n_5 = NULL,w_5 = NULL,y_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        {
          ATerm z_5 = NULL,a_6 = NULL,d_6 = NULL;
          t = term_r_17;
          a_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_15, f_15)), term_s_17);
          d_6 = t;
          t = SSL_printnl(a_6, d_6);
          t = term_d_17;
          z_5 = t;
          t = SSL_exit(z_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_15, f_15)), term_s_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  t = get_width_0_0(t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, y_5);
  t = leq_0_0(t);
  t = term_a_15;
  t = k_70(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, w_5);
  t = l_10(k_5, w_5, t);
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_15), j_5), n_5));
  return(t);
}
ATerm foldl_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t)
  {
    ATerm k_6 = NULL,l_6 = NULL,n_6 = NULL,o_6 = NULL;
    if(match_cons(t, sym__2))
      {
        k_6 = ATgetArgument(t, 0);
        o_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = k_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_6;
      }
    else
      {
        ATerm w_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_6 = ATgetFirst((ATermList) t);
            n_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_6, o_6);
        t = u_84(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_6, w_6);
        t = y_6(t);
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  ATerm z_6 = NULL;
  static ATerm m_1 (ATerm t)
  {
    ATerm b_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,n_4 = NULL;
    g_7 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        d_7 = ATgetArgument(t, 0);
        e_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_7);
    b_7 = t;
    t = d_7;
    t = p_70(t);
    f_7 = t;
    t = e_7;
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, f_7, e_7);
    n_4 = t;
    t = SSLsetAnnotations(n_4, b_7);
    return(t);
  }
  t = fetch_1_0(m_1, t);
  t = SSL_string_to_int(not_null(z_6));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm h_7 = NULL;
  t = copy_0_0(t);
  h_7 = t;
  t = SSL_implode_string(h_7);
  return(t);
}
static ATerm h_9 (ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_55, e_55);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      t = SSL_subtr(d_55, e_55);
    }
  return(t);
}
static ATerm j_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm b_1, ATerm f_1, ATerm x_0, ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_1, x_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_1, j_7);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_7), m_7), k_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  static ATerm e_8 (ATerm t)
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,w_7 = NULL,x_7 = NULL;
    s_7 = t;
    if(match_cons(t, sym__2))
      {
        w_7 = ATgetArgument(t, 0);
        x_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_7;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_7 = ATgetFirst((ATermList) t);
        r_7 = (ATerm) ATgetNext((ATermList) t);
        t = s_7;
        t = j_9(g_85, e_8, q_7, r_7, x_7, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_7);
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm z_17 = t;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL,g_9 = NULL,l_9 = NULL;
      y_8 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_8;
        }
      else
        {
          ATerm m_2 = NULL,p_4 = NULL;
          if(match_cons(t, sym_H_2))
            {
              g_9 = ATgetArgument(t, 0);
              l_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_8);
          m_2 = t;
          t = g_9;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_9;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, g_9, l_9);
          p_4 = t;
          t = SSLsetAnnotations(p_4, m_2);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_17;
    }
  return(t);
}
ATerm filter_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_11 = ATgetFirst((ATermList) t);
          d_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 = NULL,g_3 = NULL,h_3 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(b_11);
            c_3 = t;
            t = c_11;
            t = t_85(t);
            g_3 = t;
            t = d_11;
            t = filter_1_0(t_85, t);
            h_3 = t;
            t = (ATerm) ATinsert(CheckATermList(h_3), g_3);
            r_4 = t;
            t = SSLsetAnnotations(r_4, c_3);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = d_11;
            t = filter_1_0(t_85, t);
          }
      }
    }
  return(t);
}
static ATerm k_9 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,w_4 = NULL;
  t = b_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      p_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, z_15);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm t_11 = NULL,u_11 = NULL,x_11 = NULL;
          t = term_r_17;
          u_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_11, z_15)), term_s_17);
          x_11 = t;
          t = SSL_printnl(u_11, x_11);
          t = term_d_17;
          t_11 = t;
          t = SSL_exit(t_11);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_11, z_15)), term_s_17);
        }
      }
  }
  q_11 = t;
  t = p_11;
  {
    static ATerm p_1 (ATerm t)
    {
      ATerm z_11 = NULL;
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_11, a_16);
      {
        ATerm e_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = e_18;
            {
              ATerm b_12 = NULL,e_12 = NULL,h_12 = NULL;
              t = term_r_17;
              e_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_11, a_16)), term_s_17);
              h_12 = t;
              t = SSL_printnl(e_12, h_12);
              t = term_d_17;
              b_12 = t;
              t = SSL_exit(b_12);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_11, a_16)), term_s_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  r_11 = t;
  t = (ATerm) ATinsert(CheckATermList(r_11), q_11);
  w_4 = t;
  t = SSLsetAnnotations(w_4, m_11);
  return(t);
}
static ATerm l_13 (ATerm m_12, ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,r_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,f_13 = NULL,j_8 = NULL;
  t = SSL_explode_term(m_12);
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_12 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  r_12 = t;
  t = x_12;
  t = Cons_2_0(t_1, w_1, t);
  y_12 = t;
  t = (ATerm) ATinsert(CheckATermList(y_12), w_12);
  j_8 = t;
  t = SSLsetAnnotations(j_8, r_12);
  f_13 = t;
  t = SSL_mkterm(o_12, f_13);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL;
      g_13 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_13;
      LocalPopChoice(j_18);
    }
  else
    {
      t = h_18;
      t = Cons_2_0(y_1, f_2, t);
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm l_18 = t;
  if((PushChoice() == 0))
    {
      ATerm h_13 = NULL;
      h_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_13;
        }
      else
        {
          t = l_13(h_13, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_18;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_14 = ATgetFirst((ATermList) t);
      d_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, d_14);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_18;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm e_14 = NULL,h_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, h_14);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_18 = ATgetArgument(t, 0);
      if(match_cons(n_18, sym__2))
        {
          i_14 = ATgetArgument(n_18, 0);
          j_14 = ATgetArgument(n_18, 1);
        }
      else
        _fail(t);
      {
        ATerm o_18 = ATgetArgument(t, 1);
        if(match_cons(o_18, sym__2))
          {
            k_14 = ATgetArgument(o_18, 0);
            u_14 = ATgetArgument(o_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_14), i_14), (ATerm) ATinsert(CheckATermList(u_14), j_14));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(n_2, t);
      t = (ATerm) ATempty;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm o_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,y_13 = NULL,a_14 = NULL,n_8 = NULL;
        t = map_1_0(o_2, t);
        t = genzip_4_0(p_2, q_2, r_2, _id, t);
        a_14 = t;
        if(match_cons(t, sym__2))
          {
            u_13 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_14);
        t_13 = t;
        t = v_13;
        t = matrix_transpose_0_0(t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_13, y_13);
        n_8 = t;
        t = SSLsetAnnotations(n_8, t_13);
        if(match_cons(t, sym__2))
          {
            o_13 = ATgetArgument(t, 0);
            r_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_13), o_13);
      }
    }
  return(t);
}
static ATerm m_9 (ATerm j_51, ATerm k_51, ATerm l_51, ATerm t)
{
  ATerm s_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, j_51, k_51, l_51);
  t = q_9(j_51, k_51, l_51, t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, k_51);
  t = o_10(s_15, k_51, t);
  return(t);
}
static ATerm n_9 (ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm z_18 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(p_55, q_55);
      LocalPopChoice(d_19);
    }
  else
    {
      t = z_18;
      t = SSL_divr(p_55, q_55);
    }
  return(t);
}
static ATerm o_9 (ATerm v_55, ATerm w_55, ATerm t)
{
  t = SSL_mod(v_55, w_55);
  return(t);
}
static ATerm p_9 (ATerm v_51, ATerm w_51, ATerm r_51, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,f_16 = NULL,g_16 = NULL,r_16 = NULL,l_17 = NULL,k_18 = NULL,r_18 = NULL,u_18 = NULL;
  t = SSL_strlen(w_51);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_51, g_16);
  t = h_9(r_51, g_16, t);
  c_16 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        t = term_p_19;
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_16, term_p_19);
        t = o_9(c_16, v_18, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_16;
        LocalPopChoice(o_19);
        {
          ATerm w_18 = NULL,x_18 = NULL;
          t = term_p_19;
          x_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_16, term_p_19);
          t = n_9(c_16, x_18, t);
          w_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_18, w_18);
        }
      }
    else
      {
        t = n_19;
        {
          ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,q_8 = NULL;
          t = term_d_17;
          e_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_16, term_d_17);
          t = h_9(c_16, e_19, t);
          b_19 = t;
          t = term_p_19;
          c_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_19, term_p_19);
          t = n_9(b_19, c_19, t);
          a_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_19, a_19);
          i_19 = t;
          if(match_cons(t, sym__2))
            {
              ATerm q_19 = ATgetArgument(t, 0);
              ATerm t_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_19);
          f_19 = t;
          t = term_d_17;
          h_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_19, term_d_17);
          t = l_10(a_19, h_19, t);
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_19, a_19);
          q_8 = t;
          t = SSLsetAnnotations(q_8, f_19);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_16, d_16);
  t = l_10(g_16, d_16, t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_51, w_51, r_18);
  t = q_9(v_51, w_51, r_18, t);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_16, r_16);
  t = l_10(g_16, r_16, t);
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_51, w_51, k_18);
  t = q_9(v_51, w_51, k_18, t);
  l_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_17), w_51), f_16);
  u_18 = t;
  t = SSL_concat_strings(u_18);
  return(t);
}
static ATerm q_9 (ATerm c_52, ATerm a_52, ATerm b_52, ATerm t)
{
  ATerm j_19 = NULL;
  t = SSL_strlen(a_52);
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_52, j_19);
  t = h_9(b_52, j_19, t);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL;
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_19, term_y_15);
        t = geq_0_0(t);
        t = k_19;
        LocalPopChoice(v_19);
        {
          ATerm r_19 = NULL;
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_19, c_52);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = u_19;
        t = term_w_19;
      }
  }
  return(t);
}
static ATerm r_9 (ATerm n_51, ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm s_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, n_51, o_51, p_51);
  t = q_9(n_51, o_51, p_51, t);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_51, s_19);
  t = o_10(o_51, s_19, t);
  return(t);
}
static ATerm y_22 (ATerm n_20, ATerm r_20, ATerm s_20, ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,f_21 = NULL,h_21 = NULL;
  t = term_d_17;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, term_d_17);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(n_20, h_21);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = SSL_gtr(n_20, h_21);
      }
  }
  t = r_20;
  if(match_cons(t, sym__3))
    {
      c_21 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
      f_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_9(c_21, d_21, f_21, t);
  return(t);
}
static ATerm z_22 (ATerm i_21, ATerm j_21, ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,q_21 = NULL;
  t = i_21;
  if(match_cons(t, sym__3))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      q_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_9(l_21, m_21, q_21, t);
  return(t);
}
static ATerm a_23 (ATerm r_21, ATerm w_21, ATerm t)
{
  ATerm y_21 = NULL,g_22 = NULL,k_22 = NULL;
  t = r_21;
  if(match_cons(t, sym__3))
    {
      y_21 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
      k_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_9(y_21, g_22, k_22, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL;
  o_22 = t;
  if(match_cons(t, sym__3))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
      w_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_22;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm b_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_20);
        t = w_22;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm f_20 = ATgetArgument(t, 0);
                  m_22 = ATgetArgument(t, 1);
                  {
                    ATerm g_20 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(d_20);
              t = s_22;
              if(match_int(t, 1))
                {
                  ATerm h_20 = t;
                  int m_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_22(s_22, w_22, o_22, t);
                      LocalPopChoice(m_20);
                    }
                  else
                    {
                      t = h_20;
                      t = m_22;
                    }
                }
              else
                {
                  t = y_22(s_22, w_22, o_22, t);
                }
            }
          else
            {
              t = c_20;
              t = s_22;
              t = y_22(s_22, w_22, o_22, t);
            }
        }
      }
    else
      {
        t = z_19;
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm v_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_20);
              t = s_22;
              t = z_22(w_22, o_22, t);
            }
          else
            {
              t = t_20;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm w_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_22;
              t = a_23(w_22, o_22, t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,r_23 = NULL,s_8 = NULL;
      r_23 = t;
      if(match_cons(t, sym__2))
        {
          o_23 = ATgetArgument(t, 0);
          p_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_23);
      n_23 = t;
      t = o_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = o_23;
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
          t = o_23;
        }
      t = (ATerm) ATmakeAppl(sym__2, o_23, p_23);
      s_8 = t;
      t = SSLsetAnnotations(s_8, n_23);
      LocalPopChoice(y_20);
      t = conc_0_0(t);
    }
  else
    {
      t = x_20;
      {
        ATerm w_23 = NULL,x_23 = NULL;
        if(match_cons(t, sym__2))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_23), w_23);
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_23 = NULL;
      y_23 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_23;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_21 = ATgetFirst((ATermList) t);
              ATerm p_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_23;
        }
      LocalPopChoice(k_21);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = g_21;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(s_2, t_2, v_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_18;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm h_26 = NULL,m_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_26 = ATgetFirst((ATermList) t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_26, m_26);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if(match_cons(t_21, sym__2))
        {
          n_26 = ATgetArgument(t_21, 0);
          o_26 = ATgetArgument(t_21, 1);
        }
      else
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(match_cons(x_21, sym__2))
          {
            p_26 = ATgetArgument(x_21, 0);
            q_26 = ATgetArgument(x_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_26), n_26), (ATerm) ATinsert(CheckATermList(q_26), o_26));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26 = NULL;
      t = flatten_list_0_0(t);
      s_26 = t;
      t = SSL_concat_strings(s_26);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm e_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 = NULL,m_4 = NULL;
      if(match_cons(t, sym__2))
        {
          j_4 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_4, m_4);
      {
        ATerm j_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(j_4, m_4);
            LocalPopChoice(l_22);
          }
        else
          {
            t = j_22;
            t = SSL_gtr(j_4, m_4);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, j_4, m_4);
      LocalPopChoice(h_22);
      {
        ATerm y_4 = NULL,d_5 = NULL;
        d_5 = t;
        t = SSL_explode_term(d_5);
        if(match_cons(t, sym__2))
          {
            ATerm n_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_22 = ATgetArgument(t, 1);
              if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
                {
                  y_4 = ATgetFirst((ATermList) q_22);
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
        t = y_4;
      }
    }
  else
    {
      t = e_22;
      {
        ATerm l_5 = NULL,m_5 = NULL;
        m_5 = t;
        t = SSL_explode_term(m_5);
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_22 = ATgetArgument(t, 1);
              if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
                {
                  ATerm x_22 = ATgetFirst((ATermList) v_22);
                  ATerm b_23 = (ATerm) ATgetNext((ATermList) v_22);
                  if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
                    {
                      l_5 = ATgetFirst((ATermList) b_23);
                      {
                        ATerm c_23 = (ATerm) ATgetNext((ATermList) b_23);
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
        t = l_5;
      }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm x_9 (ATerm y_16, ATerm x_16, ATerm t_16, ATerm v_16, ATerm s_16, ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL,x_24 = NULL,c_25 = NULL,e_25 = NULL,f_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,s_25 = NULL,c_10 = NULL,e_4 = NULL,h_4 = NULL;
  t = t_16;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm w_25 = NULL;
      w_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_25, v_16);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
              ATerm x_25 = NULL,y_25 = NULL,c_26 = NULL;
              t = term_r_17;
              y_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_25, v_16)), term_s_17);
              c_26 = t;
              t = SSL_printnl(y_25, c_26);
              t = term_d_17;
              x_25 = t;
              t = SSL_exit(x_25);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_25, v_16)), term_s_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = genzip_4_0(z_2, e_3, f_3, _id, t);
  s_25 = t;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  l_25 = t;
  t = m_25;
  t = map_1_0(i_3, t);
  o_25 = t;
  t = n_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_23 = ATgetFirst((ATermList) t);
      h_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_4 = ATgetFirst((ATermList) t);
      {
        ATerm g_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_4, e_4);
  t = foldl_1_0(j_3, t);
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_25, p_25);
  c_10 = t;
  t = SSLsetAnnotations(c_10, l_25);
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_24, v_16);
  t = h_9(o_24, v_16, t);
  s_24 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        t = term_d_17;
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_d_17);
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_16, d_27);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = SSL_gtr(x_16, d_27);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_d_17);
        LocalPopChoice(j_23);
        {
          ATerm e_27 = NULL,g_27 = NULL;
          t = y_16;
          if(match_cons(t, sym_AC_1))
            {
              g_27 = ATgetArgument(t, 0);
              t = g_27;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  g_27 = ATgetArgument(t, 0);
                  t = g_27;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      g_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_27;
                }
            }
          {
            ATerm m_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(l_3, t);
                LocalPopChoice(q_23);
              }
            else
              {
                t = m_23;
                t = term_d_17;
              }
          }
          e_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_27, term_g_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = i_23;
        t = term_w_19;
      }
  }
  x_24 = t;
  t = p_24;
  {
    static ATerm o_3 (ATerm t)
    {
      ATerm o_27 = NULL,p_27 = NULL;
      p_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_16, y_16, (ATerm) ATmakeAppl(sym__3, term_g_17, p_27, s_24));
      t = align_column_0_0(t);
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_27, x_24);
      t = o_10(o_27, x_24, t);
      return(t);
    }
    t = map_1_0(o_3, t);
  }
  c_25 = t;
  t = SSL_strlen(x_24);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_25, o_24);
  t = l_10(f_25, o_24, t);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, (ATerm) ATinsert(CheckATermList(s_16), c_25));
  return(t);
}
ATerm genzip_4_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm t)
{
  static ATerm x_27 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_80(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        {
          ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,v_27 = NULL,w_27 = NULL,n_10 = NULL;
          t = b_80(t);
          w_27 = t;
          if(match_cons(t, sym__2))
            {
              r_27 = ATgetArgument(t, 0);
              s_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_27);
          q_27 = t;
          t = r_27;
          t = d_80(t);
          t_27 = t;
          t = s_27;
          t = x_27(t);
          v_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_27, v_27);
          n_10 = t;
          t = SSLsetAnnotations(n_10, q_27);
          t = c_80(t);
        }
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm c_28 = NULL;
  static ATerm w_28 (ATerm t)
  {
    ATerm g_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
    if(match_cons(t, sym__2))
      {
        g_28 = ATgetArgument(t, 0);
        l_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = l_28;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_28 = ATgetFirst((ATermList) t);
            n_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_28, m_28);
        t = x_101(t);
        s_28 = t;
        t = term_d_17;
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_28, term_d_17);
        t = l_10(g_28, v_28, t);
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_28, n_28);
        t = w_28(t);
        t_28 = t;
        t = (ATerm) ATinsert(CheckATermList(t_28), s_28);
      }
    return(t);
  }
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, c_28);
  t = w_28(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,c_29 = NULL;
  y_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_28;
      t = r_84(t);
    }
  else
    {
      ATerm g_29 = NULL,h_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_28 = ATgetFirst((ATermList) t);
          c_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_28;
      t = t_84(t);
      g_29 = t;
      t = c_29;
      t = foldr_3_0(r_84, s_84, t_84, t);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
      t = s_84(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  static ATerm d_31 (ATerm t)
  {
    ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
    c_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_31 = ATgetFirst((ATermList) t);
        b_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_5 = NULL,u_5 = NULL,w_10 = NULL;
          t = SSLgetAnnotations(c_31);
          r_5 = t;
          t = b_31;
          t = d_31(t);
          u_5 = t;
          t = (ATerm) ATinsert(CheckATermList(u_5), a_31);
          w_10 = t;
          t = SSLsetAnnotations(w_10, r_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_31;
        t = v_78(t);
      }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_29;
    }
  else
    {
      static ATerm a_4 (ATerm t)
      {
        t = not_null(q_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_29 = ATgetFirst((ATermList) t);
          if(((q_29 != NULL) && (q_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_29;
      t = at_end_1_0(a_4, t);
    }
  return(t);
}
static ATerm i_32 (ATerm l_31, ATerm t)
{
  ATerm m_31 = NULL;
  t = SSL_explode_term(l_31);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
      {
        ATerm v_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_4 (ATerm t)
            {
              t = r_31;
              return(t);
            }
            t = q_31;
            t = at_end_1_0(b_4, t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = v_23;
            t = i_32(w_31, t);
          }
      }
    }
  else
    {
      t = i_32(w_31, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  static ATerm m_32 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_76(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = h_76(t);
        t = m_32(t);
      }
    return(t);
  }
  t = m_32(t);
  return(t);
}
ATerm for_3_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t)
{
  t = j_76(t);
  t = while_not_2_0(k_76, l_76, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_32, o_32, (ATerm) ATempty);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_32 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if(((ATgetType(c_24) != AT_INT) || (ATgetInt((ATermInt) c_24) != 0)))
        _fail(t);
      {
        ATerm f_24 = ATgetArgument(t, 1);
      }
      p_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_32;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  if(match_cons(t, sym__3))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
      j_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_32, term_d_17);
  t = geq_0_0(t);
  t = term_d_17;
  l_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, term_d_17);
  t = h_9(q_32, l_33, t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_33, r_32, (ATerm) ATinsert(CheckATermList(j_33), r_32));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(c_4, d_4, f_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_y_15;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(v_33, w_33, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm o_70 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,r_33 = NULL,t_33 = NULL,u_33 = NULL;
  t_33 = t;
  t = foldr_3_0(i_4, l_4, o_4, t);
  n_33 = t;
  t = term_a_15;
  t = o_70(t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, n_33);
  t = h_9(u_33, n_33, t);
  o_33 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL;
        t = term_y_15;
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_33, term_y_15);
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_33, x_33);
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = SSL_gtr(o_33, x_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_33, (ATerm) ATempty);
        t = copy_0_0(t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_33, r_33);
        t = conc_0_0(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm k_24 = t;
          int l_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = t_33;
              LocalPopChoice(l_24);
            }
          else
            {
              t = k_24;
              {
                ATerm b_34 = NULL,d_34 = NULL,e_34 = NULL;
                t = term_r_17;
                d_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, t_33), term_m_24);
                e_34 = t;
                t = SSL_printnl(d_34, e_34);
                t = term_d_17;
                b_34 = t;
                t = SSL_exit(b_34);
                t = (ATerm) ATinsert(ATinsert(ATempty, t_33), term_m_24);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_24 = t;
  if((PushChoice() == 0))
    {
      ATerm q_36 = NULL,t_36 = NULL,v_36 = NULL,y_36 = NULL,y_10 = NULL;
      y_36 = t;
      if(match_cons(t, sym_R_2))
        {
          t_36 = ATgetArgument(t, 0);
          v_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_36);
      q_36 = t;
      t = v_36;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, t_36, v_36);
      y_10 = t;
      t = SSLsetAnnotations(y_10, q_36);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_24;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATempty);
  {
    static ATerm z_36 (ATerm t)
    {
      ATerm v_34 = NULL,w_34 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,k_35 = NULL;
      if(match_cons(t, sym__2))
        {
          e_35 = ATgetArgument(t, 0);
          k_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_35;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm p_35 = NULL;
          t = k_35;
          t = reverse_acc_2_0(_id, q_4, t);
          p_35 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, p_35));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_35 = ATgetFirst((ATermList) t);
              g_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_35;
          if(match_cons(t, sym_R_2))
            {
              v_34 = ATgetArgument(t, 0);
              w_34 = ATgetArgument(t, 1);
              {
                ATerm q_24 = t;
                int t_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_36 = NULL,c_36 = NULL;
                    t = k_35;
                    t = reverse_acc_2_0(_id, s_4, t);
                    b_36 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_35, (ATerm) ATempty);
                    t = z_36(t);
                    c_36 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(c_36), (ATerm) ATmakeAppl(sym_R_2, v_34, w_34)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, b_36));
                    LocalPopChoice(t_24);
                  }
                else
                  {
                    t = q_24;
                    t = (ATerm) ATmakeAppl(sym__2, g_35, (ATerm) ATinsert(CheckATermList(k_35), f_35));
                    t = z_36(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, g_35, (ATerm) ATinsert(CheckATermList(k_35), f_35));
              t = z_36(t);
            }
        }
      return(t);
    }
    t = z_36(t);
  }
  t = filter_1_0(t_4, t);
  return(t);
}
static ATerm c_54 (ATerm c_45, ATerm d_45, ATerm e_45, ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,o_45 = NULL,t_45 = NULL;
  t = e_45;
  t = construct_rows_0_0(t);
  t = map_1_0(x_4, t);
  {
    static ATerm e_5 (ATerm t)
    {
      static ATerm o_5 (ATerm t)
      {
        t = c_45;
        t = foldr_3_0(p_5, q_5, s_5, t);
        return(t);
      }
      t = FitToMax_1_0(o_5, t);
      return(t);
    }
    t = map_1_0(e_5, t);
  }
  t = matrix_transpose_0_0(t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_with_index_1_0(_id, t);
  t = reverse_acc_2_0(_id, v_5, t);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_45, k_45);
  t = genzip_4_0(x_5, b_6, c_6, _id, t);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, (ATerm) ATmakeAppl(sym__2, g_45, (ATerm) ATempty));
  t = foldl_1_0(e_6, t);
  if(match_cons(t, sym__2))
    {
      o_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_45;
  t = reverse_acc_2_0(_id, f_6, t);
  t = matrix_transpose_0_0(t);
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm r_46 = NULL;
      r_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_46, o_45);
      return(t);
    }
    t = map_1_0(g_6, t);
  }
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_45, t_45, g_45);
  t = c_9(d_45, t_45, g_45, t);
  return(t);
}
static ATerm d_54 (ATerm s_46, ATerm t_46, ATerm u_46, ATerm x_46, ATerm t)
{
  ATerm z_46 = NULL,b_47 = NULL,k_47 = NULL;
  t = s_46;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(h_6, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = term_y_15;
      }
  }
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_46, k_47);
  t = l_10(u_46, k_47, t);
  b_47 = t;
  t = t_46;
  t = filter_1_0(is_real_vbox_0_0, t);
  z_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_46);
    }
  else
    {
      ATerm l_47 = NULL;
      t = (ATerm) ATmakeAppl(sym__3, u_46, b_47, z_46);
      t = k_9(u_46, b_47, z_46, t);
      l_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, s_46, l_47, u_46);
      t = c_9(s_46, l_47, u_46, t);
    }
  return(t);
}
static ATerm e_54 (ATerm m_47, ATerm n_47, ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm u_47 = NULL,w_47 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,k_49 = NULL,l_49 = NULL,i_11 = NULL;
  t = m_47;
  {
    ATerm w_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(j_6, t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = w_24;
        t = term_d_17;
      }
  }
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_48, term_g_17);
  t = copy_char_0_0(t);
  w_47 = t;
  t = SSL_strlen(w_47);
  f_48 = t;
  t = n_47;
  t = filter_1_0(is_real_hbox_0_0, t);
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_47, o_47);
  {
    static ATerm m_6 (ATerm t)
    {
      ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,r_48 = NULL,s_48 = NULL,a_11 = NULL;
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_0_0(t);
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          {
            ATerm z_48 = NULL,u_7 = NULL,v_7 = NULL,y_7 = NULL;
            z_48 = t;
            t = term_r_17;
            v_7 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, z_48), term_s_17);
            y_7 = t;
            t = SSL_printnl(v_7, y_7);
            t = term_d_17;
            u_7 = t;
            t = SSL_exit(u_7);
            t = (ATerm) ATinsert(ATinsert(ATempty, z_48), term_s_17);
          }
        }
      s_48 = t;
      if(match_cons(t, sym__2))
        {
          o_48 = ATgetArgument(t, 0);
          p_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_48);
      n_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_48, p_48);
      t = l_10(f_48, p_48, t);
      r_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_48, r_48);
      a_11 = t;
      t = SSLsetAnnotations(a_11, n_48);
      return(t);
    }
    t = thread_map_1_0(m_6, t);
  }
  m_48 = t;
  if(match_cons(t, sym__2))
    {
      i_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_48);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_47, i_48);
  t = d_9(w_47, i_48, t);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, j_48);
  i_11 = t;
  t = SSLsetAnnotations(i_11, h_48);
  l_48 = t;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
      {
        ATerm b_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 = NULL,l_8 = NULL,o_8 = NULL,p_16 = NULL;
            t = SSLgetAnnotations(l_48);
            h_8 = t;
            t = k_49;
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
            }
            l_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_49, f_48);
            t = h_9(l_49, f_48, t);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_8, o_8);
            p_16 = t;
            t = SSLsetAnnotations(p_16, h_8);
            LocalPopChoice(d_25);
          }
        else
          {
            t = b_25;
            t = l_48;
          }
      }
    }
  else
    {
      t = l_48;
    }
  return(t);
}
static ATerm f_54 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm s_49, ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL;
  t = p_49;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(p_6, t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = term_d_17;
      }
  }
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_50, term_g_17);
  t = copy_char_0_0(t);
  w_49 = t;
  t = p_49;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(q_6, t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = term_y_15;
      }
  }
  d_50 = t;
  t = term_d_17;
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_50, term_d_17);
  t = l_10(d_50, f_50, t);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_50, term_v_15);
  t = copy_char_0_0(t);
  t = SSL_strlen(w_49);
  u_49 = t;
  t = p_49;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(r_6, t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = term_y_15;
      }
  }
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_49, a_50);
  t = l_10(r_49, a_50, t);
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_49)));
  {
    static ATerm s_6 (ATerm t)
    {
      ATerm i_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,r_50 = NULL,u_50 = NULL,v_50 = NULL;
      r_50 = t;
      if(match_cons(t, sym__2))
        {
          u_50 = ATgetArgument(t, 0);
          v_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_50 = ATgetFirst((ATermList) t);
          m_50 = (ATerm) ATgetNext((ATermList) t);
          t = i_50;
          if(match_cons(t, sym__2))
            {
              k_50 = ATgetArgument(t, 0);
              l_50 = ATgetArgument(t, 1);
              {
                ATerm t_25 = t;
                int u_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm u_6 (ATerm t)
                    {
                      t = u_49;
                      return(t);
                    }
                    t = r_50;
                    t = f_9(u_6, u_50, k_50, l_50, m_50, t);
                    LocalPopChoice(u_25);
                  }
                else
                  {
                    t = t_25;
                    {
                      static ATerm v_6 (ATerm t)
                      {
                        t = u_49;
                        return(t);
                      }
                      static ATerm x_6 (ATerm t)
                      {
                        t = v_49;
                        return(t);
                      }
                      t = r_50;
                      t = e_9(v_6, x_6, u_50, v_50, t);
                    }
                  }
              }
            }
          else
            {
              static ATerm a_7 (ATerm t)
              {
                t = u_49;
                return(t);
              }
              static ATerm c_7 (ATerm t)
              {
                t = v_49;
                return(t);
              }
              t = r_50;
              t = e_9(a_7, c_7, u_50, v_50, t);
            }
        }
      else
        {
          static ATerm i_7 (ATerm t)
          {
            t = u_49;
            return(t);
          }
          static ATerm l_7 (ATerm t)
          {
            t = v_49;
            return(t);
          }
          t = r_50;
          t = e_9(i_7, l_7, u_50, v_50, t);
        }
      return(t);
    }
    t = foldl_1_0(s_6, t);
  }
  t = reverse_acc_2_0(_id, o_7, t);
  t = map_1_0(p_7, t);
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,o_20 = NULL;
      q_52 = t;
      if(match_cons(t, sym__2))
        {
          n_52 = ATgetArgument(t, 0);
          o_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_52);
      m_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_49, n_52);
      t = d_9(w_49, n_52, t);
      p_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_52, o_52);
      o_20 = t;
      t = SSLsetAnnotations(o_20, m_52);
      return(t);
    }
    t = map_1_0(z_7, t);
  }
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_49, z_49, r_49);
  t = c_9(p_49, z_49, r_49, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_45 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_45;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_y_15;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(w_45, x_45, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(((ATgetType(z_25) != AT_LIST) || !(ATisEmpty(z_25))))
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(((ATgetType(a_26) != AT_LIST) || !(ATisEmpty(a_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,f_46 = NULL,g_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
        {
          b_46 = ATgetFirst((ATermList) b_26);
          c_46 = (ATerm) ATgetNext((ATermList) b_26);
        }
      else
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
          {
            f_46 = ATgetFirst((ATermList) d_26);
            g_46 = (ATerm) ATgetNext((ATermList) d_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_46, f_46), (ATerm) ATmakeAppl(sym__2, c_46, g_46));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm h_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_46), h_46);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      if(match_cons(e_26, sym__2))
        {
          l_46 = ATgetArgument(e_26, 0);
          {
            ATerm g_26 = ATgetArgument(e_26, 1);
            if(match_cons(g_26, sym__2))
              {
                m_46 = ATgetArgument(g_26, 0);
                n_46 = ATgetArgument(g_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(match_cons(f_26, sym__2))
          {
            o_46 = ATgetArgument(f_26, 0);
            p_46 = ATgetArgument(f_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_9(l_46, m_46, n_46, o_46, p_46, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,d_52 = NULL,j_52 = NULL,k_52 = NULL,q_16 = NULL;
  k_52 = t;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_52);
  h_51 = t;
  t = i_51;
  t = reverse_acc_2_0(_id, t_7, t);
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_52, d_52);
  q_16 = t;
  t = SSLsetAnnotations(q_16, h_51);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,j_53 = NULL,k_53 = NULL;
  d_53 = t;
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      k_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_19, k_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_53 = ATgetFirst((ATermList) t);
          j_53 = (ATerm) ATgetNext((ATermList) t);
          t = j_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_53, k_53);
          {
            ATerm i_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                LocalPopChoice(j_26);
              }
            else
              {
                t = i_26;
                {
                  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
                  t = term_r_17;
                  u_9 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_53, k_53)), term_s_17);
                  v_9 = t;
                  t = SSL_printnl(u_9, v_9);
                  t = term_d_17;
                  t_9 = t;
                  t = SSL_exit(t_9);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_53, k_53)), term_s_17);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              f_53 = ATgetArgument(t, 0);
              j_53 = ATgetArgument(t, 1);
              {
                ATerm h_11 = NULL,j_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, f_53, k_53);
                {
                  ATerm k_26 = t;
                  int l_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      LocalPopChoice(l_26);
                    }
                  else
                    {
                      t = k_26;
                      {
                        ATerm k_11 = NULL,l_11 = NULL,o_11 = NULL;
                        t = term_r_17;
                        l_11 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_53, k_53)), term_s_17);
                        o_11 = t;
                        t = SSL_printnl(l_11, o_11);
                        t = term_d_17;
                        k_11 = t;
                        t = SSL_exit(k_11);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_53, k_53)), term_s_17);
                      }
                    }
                }
                h_11 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm r_26 = ATgetArgument(t, 0);
                    j_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, f_53, j_53), k_53);
                {
                  ATerm t_26 = t;
                  int u_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_11 = NULL;
                      t = get_width_0_0(t);
                      s_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_11, s_11);
                      t = leq_0_0(t);
                      LocalPopChoice(u_26);
                      t = h_11;
                    }
                  else
                    {
                      t = t_26;
                      t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
                      {
                        ATerm v_26 = t;
                        int w_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(w_26);
                          }
                        else
                          {
                            t = v_26;
                            {
                              ATerm v_11 = NULL,w_11 = NULL,y_11 = NULL;
                              t = term_r_17;
                              w_11 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_53, k_53)), term_s_17);
                              y_11 = t;
                              t = SSL_printnl(w_11, y_11);
                              t = term_d_17;
                              v_11 = t;
                              t = SSL_exit(v_11);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_53, k_53)), term_s_17);
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
                  f_53 = ATgetArgument(t, 0);
                  j_53 = ATgetArgument(t, 1);
                  {
                    ATerm x_26 = t;
                    int y_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, j_53), k_53);
                        {
                          ATerm z_26 = t;
                          int a_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(a_27);
                            }
                          else
                            {
                              t = z_26;
                              {
                                ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
                                t = term_r_17;
                                u_12 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, j_53), k_53)), term_s_17);
                                v_12 = t;
                                t = SSL_printnl(u_12, v_12);
                                t = term_d_17;
                                t_12 = t;
                                t = SSL_exit(t_12);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, j_53), k_53)), term_s_17);
                              }
                            }
                        }
                        LocalPopChoice(y_26);
                      }
                    else
                      {
                        t = x_26;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, j_53), k_53);
                        {
                          ATerm b_27 = t;
                          int c_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(c_27);
                            }
                          else
                            {
                              t = b_27;
                              {
                                ATerm p_13 = NULL,q_13 = NULL,s_13 = NULL;
                                t = term_r_17;
                                q_13 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, j_53), k_53)), term_s_17);
                                s_13 = t;
                                t = SSL_printnl(q_13, s_13);
                                t = term_d_17;
                                p_13 = t;
                                t = SSL_exit(p_13);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, j_53), k_53)), term_s_17);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm f_27 = t;
                  int h_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm i_27 = ATgetArgument(t, 0);
                          j_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_27);
                      t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
                      {
                        ATerm j_27 = t;
                        int k_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(k_27);
                          }
                        else
                          {
                            t = j_27;
                            {
                              ATerm t_14 = NULL,v_14 = NULL,w_14 = NULL;
                              t = term_r_17;
                              v_14 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_53, k_53)), term_s_17);
                              w_14 = t;
                              t = SSL_printnl(v_14, w_14);
                              t = term_d_17;
                              t_14 = t;
                              t = SSL_exit(t_14);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_53, k_53)), term_s_17);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = f_27;
                      {
                        ATerm l_27 = t;
                        int m_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm n_27 = ATgetArgument(t, 0);
                                j_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_27);
                            t = j_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                r_52 = ATgetFirst((ATermList) t);
                                t_52 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = r_52;
                            if(match_cons(t, sym_S_1))
                              {
                                s_52 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_52;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, s_52, k_53);
                          }
                        else
                          {
                            t = l_27;
                            if(match_cons(t, sym_S_1))
                              {
                                f_53 = ATgetArgument(t, 0);
                                {
                                  ATerm r_53 = NULL,u_53 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, f_53, k_53);
                                  t = e_10(f_53, k_53, t);
                                  u_53 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, k_53, u_53);
                                  t = l_10(k_53, u_53, t);
                                  r_53 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, f_53, r_53);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    f_53 = ATgetArgument(t, 0);
                                    j_53 = ATgetArgument(t, 1);
                                    z_52 = ATgetArgument(t, 2);
                                    t = f_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        y_52 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_52;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        w_52 = ATgetFirst((ATermList) t);
                                        x_52 = (ATerm) ATgetNext((ATermList) t);
                                        t = x_52;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = w_52;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm u_27 = t;
                                                int y_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = c_54(y_52, j_53, z_52, k_53, d_53, t);
                                                    LocalPopChoice(y_27);
                                                  }
                                                else
                                                  {
                                                    t = u_27;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = c_54(y_52, j_53, z_52, k_53, d_53, t);
                                              }
                                          }
                                        else
                                          {
                                            t = w_52;
                                            t = c_54(y_52, j_53, z_52, k_53, d_53, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm z_27 = t;
                                            int a_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = c_54(y_52, j_53, z_52, k_53, d_53, t);
                                                LocalPopChoice(a_28);
                                              }
                                            else
                                              {
                                                t = z_27;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_53);
                                              }
                                          }
                                        else
                                          {
                                            t = c_54(y_52, j_53, z_52, k_53, d_53, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        f_53 = ATgetArgument(t, 0);
                                        j_53 = ATgetArgument(t, 1);
                                        t = d_54(f_53, j_53, k_53, d_53, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            f_53 = ATgetArgument(t, 0);
                                            j_53 = ATgetArgument(t, 1);
                                            t = e_54(f_53, j_53, k_53, d_53, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                f_53 = ATgetArgument(t, 0);
                                                j_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = f_54(f_53, j_53, k_53, d_53, t);
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
static ATerm i_55 (ATerm r_54, ATerm t)
{
  t = SSL_fclose(r_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_54 = NULL,c_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_54 = ATgetArgument(t, 0);
      {
        ATerm b_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_54);
            LocalPopChoice(d_28);
          }
        else
          {
            t = b_28;
            t = i_55(c_55, t);
          }
      }
    }
  else
    {
      t = i_55(c_55, t);
    }
  return(t);
}
static ATerm f_10 (ATerm h_23, ATerm t)
{
  t = SSL_read_term_from_stream(h_23);
  return(t);
}
static ATerm g_10 (ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm l_55 = NULL;
  t = SSL_fopen(b_32, c_32);
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_55 = NULL;
  t = SSL_stdin_stream();
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_55 = NULL;
  t = SSL_stdout_stream();
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_55 = NULL;
  t = SSL_stderr_stream();
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_55);
  return(t);
}
static ATerm u_57 (ATerm g_56, ATerm t)
{
  ATerm i_56 = NULL;
  t = SSL_explode_term(g_56);
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_28 = ATgetArgument(t, 1);
        if(((ATgetType(f_28) == AT_LIST) && !(ATisEmpty(f_28))))
          {
            i_56 = ATgetFirst((ATermList) f_28);
            {
              ATerm h_28 = (ATerm) ATgetNext((ATermList) f_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_57 (ATerm l_56, ATerm m_56, ATerm p_56, ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,y_56 = NULL,z_20 = NULL;
  t = SSLgetAnnotations(p_56);
  t_56 = t;
  t = l_56;
  if(match_cons(t, sym_Path_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_56, m_56);
  z_20 = t;
  t = SSLsetAnnotations(z_20, t_56);
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(r_56, s_56, t);
  return(t);
}
static ATerm y_57 (ATerm b_57, ATerm c_57, ATerm d_57, ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,p_57 = NULL,e_21 = NULL;
  t = SSLgetAnnotations(d_57);
  i_57 = t;
  t = SSL_is_string(b_57);
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_57, c_57);
  e_21 = t;
  t = SSLsetAnnotations(e_21, i_57);
  if(match_cons(t, sym__2))
    {
      g_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(g_57, h_57, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  if(match_cons(t, sym__2))
    {
      s_57 = ATgetArgument(t, 0);
      t_57 = ATgetArgument(t, 1);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_57(r_57, t);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm k_28 = t;
              int o_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_57(s_57, t_57, r_57, t);
                  LocalPopChoice(o_28);
                }
              else
                {
                  t = k_28;
                  t = y_57(s_57, t_57, r_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_57(r_57, t);
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_58 = NULL;
      c_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_58, term_x_28);
      t = h_10(t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = debug_1_0(a_8, t);
      _fail(t);
    }
  a_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(b_58, t);
  z_57 = t;
  t = a_58;
  t = fclose_0_0(t);
  t = z_57;
  return(t);
}
static ATerm i_10 (ATerm s_31, ATerm t_31, ATerm t)
{
  t = SSL_access(s_31, t_31);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_58 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_29;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_58 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_29);
      k_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_58, (ATerm) ATinsert(ATempty, term_b_29));
      t = i_10(i_58, k_58, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm j_10 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_copy(p_38, q_38);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
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
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL;
        t = f_59;
        t = r_0(t);
        q_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = q_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = q_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_59, q_15);
        t = j_10(g_59, q_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        {
          ATerm f_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_16 = NULL;
              t = f_59;
              t = r_0(t);
              e_16 = t;
              {
                ATerm j_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_16 = NULL;
                    h_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = h_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = h_16;
                          }
                        else
                          {
                            t = h_16;
                            if((g_59 != t))
                              {
                                _fail(t);
                              }
                            t = h_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_29;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_59, e_16);
              t = j_10(g_59, e_16, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
              LocalPopChoice(i_29);
            }
          else
            {
              t = f_29;
              t = f_59;
              t = r_0(t);
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
static ATerm k_10 (ATerm p_20, ATerm q_20, ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  l_59 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
        t = p_10(p_20, q_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_29 = ATgetFirst((ATermList) t);
            k_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_29);
        t = SSL_table_put(p_20, q_20, k_59);
        t = (ATerm) ATmakeAppl(sym__3, p_20, q_20, k_59);
      }
    else
      {
        t = k_29;
        t = SSL_table_remove(p_20, q_20);
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
      }
  }
  t = l_59;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  p_59 = t;
  t = j_88(t);
  o_59 = t;
  {
    ATerm n_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_59 = NULL;
        t = term_r_14;
        r_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_59, term_r_14);
        t = p_10(o_59, r_59, t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_59 = ATgetFirst((ATermList) t);
      m_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_14;
  q_59 = t;
  t = SSL_table_put(o_59, q_59, m_59);
  t = n_59;
  {
    static ATerm b_8 (ATerm t)
    {
      ATerm s_59 = NULL;
      s_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_59, s_59);
      t = k_10(o_59, s_59, t);
      return(t);
    }
    t = map_1_0(b_8, t);
  }
  t = p_59;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_75(t);
      t = l_75(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = l_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
  w_59 = t;
  t = i_88(t);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, term_r_14);
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_60 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_29 = ATgetArgument(t, 0);
            ATerm x_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_14;
        f_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_59, term_r_14);
        t = p_10(v_59, f_60, t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
  }
  x_59 = t;
  t = term_r_14;
  y_59 = t;
  t = (ATerm) ATinsert(CheckATermList(x_59), (ATerm) ATempty);
  z_59 = t;
  t = SSL_table_put(v_59, y_59, z_59);
  t = w_59;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm r_60 = NULL;
  r_60 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_60);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = r_60;
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm i_60 = NULL;
  static ATerm d_8 (ATerm t)
  {
    ATerm k_60 = NULL;
    k_60 = t;
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_60 = NULL,m_60 = NULL;
          t = term_x_14;
          l_60 = t;
          t = term_r_14;
          m_60 = t;
          t = term_c_30;
          t = p_10(l_60, m_60, t);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_60 != NULL) && (i_60 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_60 = ATgetFirst((ATermList) t);
        {
          ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_60;
    t = map_1_0(f_8, t);
    t = k_60;
    t = end_scope_1_0(g_8, t);
    return(t);
  }
  t = begin_scope_1_0(c_8, t);
  t = restore_always_2_0(k_71, d_8, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_30;
      t = get_config_0_0(t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      t = term_h_30;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm l_71 (ATerm), ATerm t)
{
  static ATerm i_8 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_60 = NULL;
        t = term_k_30;
        t = get_config_0_0(t);
        v_60 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_60);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = term_a_29;
      }
    t = l_71(t);
    t = copy_to_1_0(k_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(i_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_60 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  w_60 = t;
  t = term_a_15;
  t = whoami_0_0(t);
  d_61 = t;
  t = term_r_17;
  f_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_30), d_61), term_l_30);
  g_61 = t;
  t = SSL_printnl(f_61, g_61);
  t = term_d_17;
  e_61 = t;
  t = SSL_exit(e_61);
  t = w_60;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_61 = NULL,n_61 = NULL,o_61 = NULL,r_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
      t = term_a_15;
      t = p_0(t);
      s_61 = t;
      t = term_n_30;
      t_61 = t;
      t = term_o_30;
      u_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_o_30, s_61);
      t = q_10(t_61, u_61, s_61, t);
      _fail(t);
    }
  else
    {
      ATerm z_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_61 = ATgetFirst((ATermList) t);
          n_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_61 = ATgetFirst((ATermList) t);
          r_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_61;
      t = n_0(t);
      t = o_61;
      t = o_0(t);
      z_61 = t;
      t = (ATerm) ATinsert(CheckATermList(r_61), z_61);
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_62 = NULL;
  b_62 = t;
  if(match_string(t, "-k"))
    {
      t = b_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_62;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  t = SSL_string_to_int(c_62);
  d_62 = t;
  t = term_p_30;
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, d_62);
  t = s_10(e_62, d_62, t);
  t = c_62;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_8, p_8, r_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm g_62 = NULL;
  g_62 = t;
  if(match_string(t, "-S"))
    {
      t = g_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_62;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  t = term_r_30;
  h_62 = t;
  t = term_y_15;
  i_62 = t;
  t = term_s_30;
  t = s_10(h_62, i_62, t);
  t = term_t_30;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_u_30;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm j_62 = NULL,m_62 = NULL,p_62 = NULL;
  j_62 = t;
  t = SSL_string_to_int(j_62);
  m_62 = t;
  t = term_r_30;
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, m_62);
  t = s_10(p_62, m_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_62);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  t = term_w_30;
  q_62 = t;
  t = term_a_15;
  r_62 = t;
  t = term_x_30;
  t = s_10(q_62, r_62, t);
  t = term_y_30;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_8, u_8, v_8, t);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_8, x_8, z_8, t);
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            t = Option_3_0(i_9, s_9, w_9, t);
          }
      }
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm w_62 = NULL;
  w_62 = t;
  if(match_string(t, "-o"))
    {
      t = w_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_62;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm z_62 = NULL,c_63 = NULL;
  z_62 = t;
  t = term_g_30;
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, z_62);
  t = s_10(c_63, z_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_62);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, z_9, a_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm g_63 = NULL;
  g_63 = t;
  if(match_string(t, "-i"))
    {
      t = g_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_63;
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL;
  h_63 = t;
  t = term_k_30;
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, h_63);
  t = s_10(i_63, h_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_63);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, m_10, r_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  t = term_k_31;
  m_63 = t;
  t = term_a_15;
  n_63 = t;
  t = term_n_31;
  t = s_10(m_63, n_63, t);
  t = term_o_31;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_p_31;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm r_63 = NULL;
  r_63 = t;
  if(match_string(t, "-w"))
    {
      t = r_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = r_63;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
  v_63 = t;
  t = SSL_string_to_int(v_63);
  w_63 = t;
  t = term_z_16;
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, w_63);
  t = s_10(x_63, w_63, t);
  t = v_63;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm v_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_31);
    }
  else
    {
      t = v_31;
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            {
              ATerm a_32 = t;
              int d_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_10, u_10, v_10, t);
                  LocalPopChoice(d_32);
                }
              else
                {
                  t = a_32;
                  {
                    ATerm e_32 = t;
                    int f_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(f_32);
                      }
                    else
                      {
                        t = e_32;
                        {
                          ATerm g_32 = t;
                          int h_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(h_32);
                            }
                          else
                            {
                              t = g_32;
                              t = ArgOption_3_0(x_10, z_10, e_11, t);
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
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_15;
  t = whoami_0_0(t);
  y_63 = t;
  t = term_r_17;
  a_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_32), y_63);
  b_64 = t;
  t = SSL_printnl(a_64, b_64);
  t = term_d_17;
  z_63 = t;
  t = SSL_exit(z_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_10 (ATerm x_54, ATerm y_54, ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_54, y_54);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      t = SSL_addr(x_54, y_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_64;
      t = p_84(t);
    }
  else
    {
      ATerm j_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_64 = ATgetFirst((ATermList) t);
          g_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_64;
      t = foldr_2_0(p_84, q_84, t);
      j_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_64, j_64);
      t = q_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_y_15;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm u_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(u_16, w_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_64 = NULL,n_16 = NULL,o_16 = NULL;
  t = times_0_0(t);
  o_16 = t;
  t = SSL_explode_term(o_16);
  if(match_cons(t, sym__2))
    {
      ATerm v_32 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_16;
  t = foldr_2_0(f_11, g_11, t);
  q_64 = t;
  t = SSL_TicksToSeconds(q_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  e_65 = t;
  if(match_cons(t, sym__2))
    {
      f_65 = ATgetArgument(t, 0);
      g_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_65;
        if((f_65 != t))
          {
            _fail(t);
          }
        t = e_65;
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_65, g_65);
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              t = SSL_gtr(f_65, g_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm k_65 = NULL;
  k_65 = t;
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_65 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        m_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_65, term_d_17);
        t = geq_0_0(t);
        t = k_65;
        t = l_87(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = k_65;
      }
  }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,r_65 = NULL,s_65 = NULL;
  t = run_time_0_0(t);
  o_65 = t;
  t = term_a_15;
  t = whoami_0_0(t);
  p_65 = t;
  t = term_r_17;
  r_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_33), o_65), term_c_33), p_65);
  s_65 = t;
  t = SSL_printnl(r_65, s_65);
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_33), o_65), term_c_33), p_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_15;
  t_65 = t;
  t = SSL_exit(t_65);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  c_66 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_66;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_66 = ATgetArgument(t, 0);
          {
            ATerm k_17 = NULL,o_21 = NULL;
            t = SSLgetAnnotations(c_66);
            k_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_66);
            o_21 = t;
            t = SSLsetAnnotations(o_21, k_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_66;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_33;
      t = get_config_0_0(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      t = fetch_1_0(c_12, t);
    }
  t = p_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_66 = ATgetFirst((ATermList) t);
      g_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_66 = NULL,l_66 = NULL;
        static ATerm d_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_66)), not_null(l_66));
          return(t);
        }
        t = g_66;
        t = l_0(t);
        if(((k_66 != NULL) && (k_66 != t)))
          _fail(t);
        else
          k_66 = t;
        t = f_66;
        t = k_0(t);
        if(((l_66 != NULL) && (l_66 != t)))
          _fail(t);
        else
          l_66 = t;
        t = g_66;
        t = reverse_acc_2_0(k_0, d_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_21 = NULL;
  r_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_66);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_66);
  s_21 = t;
  t = SSLsetAnnotations(s_21, p_66);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm t_66 = NULL;
  t_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_66), term_m_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_32;
      t = get_config_0_0(t);
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = fetch_1_0(f_12, t);
    }
  t = term_s_33;
  t = echo_0_0(t);
  t = term_n_30;
  n_66 = t;
  t = term_o_30;
  o_66 = t;
  t = term_y_33;
  t = p_10(n_66, o_66, t);
  t = reverse_acc_2_0(_id, g_12, t);
  t = map_1_0(i_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  static ATerm q_67 (ATerm t)
  {
    ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
    n_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_67 = ATgetFirst((ATermList) t);
        p_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_33 = t;
      int a_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_17 = NULL,w_17 = NULL,u_21 = NULL;
          t = SSLgetAnnotations(n_67);
          t_17 = t;
          t = o_67;
          t = p_78(t);
          w_17 = t;
          t = (ATerm) ATinsert(CheckATermList(p_67), w_17);
          u_21 = t;
          t = SSLsetAnnotations(u_21, t_17);
          LocalPopChoice(a_34);
        }
      else
        {
          t = z_33;
          {
            ATerm f_18 = NULL,i_18 = NULL,v_21 = NULL;
            t = SSLgetAnnotations(n_67);
            f_18 = t;
            t = p_67;
            t = q_67(t);
            i_18 = t;
            t = (ATerm) ATinsert(CheckATermList(i_18), o_67);
            v_21 = t;
            t = SSLsetAnnotations(v_21, f_18);
          }
        }
    }
    return(t);
  }
  t = q_67(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  u_67 = t;
  {
    ATerm c_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_67;
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
            t = u_67;
          }
        LocalPopChoice(f_34);
      }
    else
      {
        t = c_34;
        t = (ATerm) ATinsert(ATempty, u_67);
      }
  }
  v_67 = t;
  t = term_h_30;
  w_67 = t;
  t = SSL_printnl(w_67, v_67);
  t = u_67;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_10 (ATerm s_53, ATerm t_53, ATerm t)
{
  t = SSL_strcat(s_53, t_53);
  return(t);
}
ATerm debug_1_0 (ATerm c_77 (ATerm), ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  a_68 = t;
  t = c_77(t);
  b_68 = t;
  t = term_r_17;
  c_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_68), b_68);
  d_68 = t;
  t = SSL_printnl(c_68, d_68);
  t = a_68;
  return(t);
}
ATerm map_1_0 (ATerm f_78 (ATerm), ATerm t)
{
  static ATerm s_68 (ATerm t)
  {
    ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
    p_68 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_68;
      }
    else
      {
        ATerm y_18 = NULL,l_19 = NULL,m_19 = NULL,d_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_68 = ATgetFirst((ATermList) t);
            r_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_68);
        y_18 = t;
        t = q_68;
        t = f_78(t);
        l_19 = t;
        t = r_68;
        t = s_68(t);
        m_19 = t;
        t = (ATerm) ATinsert(CheckATermList(m_19), l_19);
        d_22 = t;
        t = SSLsetAnnotations(d_22, y_18);
      }
    return(t);
  }
  t = s_68(t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
    }
  return(t);
}
static ATerm k_12 (ATerm t)
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
      ATerm a_69 = NULL;
      a_69 = t;
      t = SSL_is_string(a_69);
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
            t = map_1_0(j_12, t);
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
              g_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_69 = ATgetArgument(t, 0);
                  t = h_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_69 = ATgetArgument(t, 0);
                      t = h_69;
                      {
                        ATerm p_34 = t;
                        int q_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(q_34);
                          }
                        else
                          {
                            t = p_34;
                            t = debug_1_0(k_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_69 = NULL,n_69 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_69 = ATgetArgument(t, 0);
                          i_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_69;
                      t = eval_config_0_0(t);
                      m_69 = t;
                      t = i_69;
                      t = eval_config_0_0(t);
                      n_69 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_69, n_69);
                      t = o_10(m_69, n_69, t);
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
  ATerm r_69 = NULL,s_69 = NULL;
  r_69 = t;
  t = term_r_34;
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_34, r_69);
  t = p_10(s_69, r_69, t);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_69 = NULL,u_69 = NULL;
        t = eval_config_0_0(t);
        t_69 = t;
        t = term_r_34;
        u_69 = t;
        t = SSL_table_put(u_69, r_69, t_69);
        t = t_69;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
      }
  }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  t = term_x_34;
  x_69 = t;
  t = term_a_15;
  y_69 = t;
  t = term_y_34;
  t = s_10(x_69, y_69, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  t = term_x_34;
  b_70 = t;
  t = term_a_15;
  c_70 = t;
  t = term_y_34;
  t = s_10(b_70, c_70, t);
  t = term_a_35;
  z_69 = t;
  t = term_a_15;
  a_70 = t;
  t = term_b_35;
  t = s_10(z_69, a_70, t);
  t = term_c_35;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_12, n_12, q_12, t);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      t = Option_3_0(s_12, z_12, a_13, t);
    }
  return(t);
}
static ATerm s_10 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm d_70 = NULL;
  t = term_r_34;
  d_70 = t;
  t = SSL_table_put(d_70, k_32, l_32);
  t = (ATerm) ATmakeAppl(sym__3, term_r_34, k_32, l_32);
  return(t);
}
static ATerm p_10 (ATerm b_22, ATerm c_22, ATerm t)
{
  t = SSL_table_get(b_22, c_22);
  return(t);
}
static ATerm q_10 (ATerm k_20, ATerm l_20, ATerm j_20, ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  {
    ATerm j_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_35 = ATgetArgument(t, 0);
            ATerm n_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
        t = p_10(k_20, l_20, t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = j_35;
        t = (ATerm) ATempty;
      }
  }
  g_70 = t;
  t = (ATerm) ATinsert(CheckATermList(g_70), j_20);
  h_70 = t;
  t = SSL_table_put(k_20, l_20, h_70);
  t = f_70;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
      t = term_a_15;
      t = i_0(t);
      v_70 = t;
      t = term_n_30;
      w_70 = t;
      t = term_o_30;
      x_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_o_30, v_70);
      t = q_10(w_70, x_70, v_70, t);
      _fail(t);
    }
  else
    {
      ATerm a_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_70 = ATgetFirst((ATermList) t);
          u_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_70;
      t = d_0(t);
      t = term_a_15;
      t = g_0(t);
      a_71 = t;
      t = (ATerm) ATinsert(CheckATermList(u_70), a_71);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,f_22 = NULL;
  g_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_71 = ATgetFirst((ATermList) t);
      d_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_71);
  b_71 = t;
  t = c_71;
  t = o_64(t);
  e_71 = t;
  t = d_71;
  t = p_64(t);
  f_71 = t;
  t = (ATerm) ATinsert(CheckATermList(f_71), e_71);
  f_22 = t;
  t = SSLsetAnnotations(f_22, b_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,s_71 = NULL,t_71 = NULL,i_22 = NULL;
  n_71 = t;
  {
    ATerm o_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_35;
        t = n_93(t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = o_35;
      }
  }
  t = n_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_71 = ATgetFirst((ATermList) t);
      q_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_71);
  o_71 = t;
  t = term_s_32;
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_32, p_71);
  t = s_10(t_71, p_71, t);
  t = q_71;
  {
    static ATerm e_72 (ATerm t)
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_71 = NULL;
              w_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_71;
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
              t = n_93(t);
              t = Cons_2_0(_id, e_72, t);
            }
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          {
            ATerm z_71 = NULL,a_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_71 = ATgetFirst((ATermList) t);
                a_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_72), (ATerm) ATmakeAppl(sym_Undefined_1, z_71));
          }
        }
      return(t);
    }
    t = e_72(t);
  }
  s_71 = t;
  t = (ATerm) ATinsert(CheckATermList(s_71), (ATerm) ATmakeAppl(sym_Program_1, p_71));
  i_22 = t;
  t = SSLsetAnnotations(i_22, o_71);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  if(match_string(t, "--help"))
    {
      t = q_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_72;
        }
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL;
  t = term_i_33;
  r_72 = t;
  t = term_a_15;
  s_72 = t;
  t = term_w_35;
  t = s_10(r_72, s_72, t);
  t = term_x_35;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_y_35;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  l_72 = t;
  t = term_n_30;
  n_72 = t;
  t = term_o_30;
  o_72 = t;
  t = (ATerm) ATempty;
  p_72 = t;
  t = SSL_table_put(n_72, o_72, p_72);
  t = l_72;
  {
    static ATerm b_13 (ATerm t)
    {
      ATerm z_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_93(t);
          LocalPopChoice(a_36);
        }
      else
        {
          t = z_35;
          {
            ATerm d_36 = t;
            int e_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_13, d_13, e_13, t);
                LocalPopChoice(e_36);
              }
            else
              {
                t = d_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_13, t);
  }
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_72 = NULL;
        z_72 = t;
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_20 = NULL;
              t = z_72;
              {
                ATerm j_36 = t;
                int k_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_36);
                  }
                else
                  {
                    t = j_36;
                    t = fetch_1_0(i_13, t);
                  }
              }
              t = z_72;
              t = default_system_usage_0_0(t);
              t = term_y_15;
              e_20 = t;
              t = SSL_exit(e_20);
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              {
                ATerm i_20 = NULL;
                t = term_x_34;
                t = get_config_0_0(t);
                t = z_72;
                t = default_system_about_0_0(t);
                t = term_y_15;
                i_20 = t;
                t = SSL_exit(i_20);
              }
            }
        }
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        {
          ATerm l_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
              static ATerm j_13 (ATerm t)
              {
                ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,p_22 = NULL;
                f_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_73);
                d_73 = t;
                t = e_73;
                if(((j_72 != NULL) && (j_72 != t)))
                  _fail(t);
                else
                  j_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_73);
                p_22 = t;
                t = SSLsetAnnotations(p_22, d_73);
                return(t);
              }
              t = fetch_1_0(j_13, t);
              t = term_r_17;
              b_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_72)), term_n_36);
              c_73 = t;
              t = SSL_printnl(b_73, c_73);
              t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_72)), term_n_36));
              t = default_system_usage_0_0(t);
              t = term_d_17;
              a_73 = t;
              t = SSL_exit(a_73);
              LocalPopChoice(m_36);
            }
          else
            {
              t = l_36;
            }
        }
      }
  }
  k_72 = t;
  t = term_n_30;
  m_72 = t;
  t = SSL_table_destroy(m_72);
  t = k_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  t = parse_options_1_0(r_91, t);
  k_73 = t;
  t = term_o_36;
  n_73 = t;
  t = SSL_table_create(n_73);
  t = term_o_36;
  l_73 = t;
  t = term_p_36;
  m_73 = t;
  t = SSL_table_put(l_73, m_73, k_73);
  t = k_73;
  t = t_91(t);
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_91, t);
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        {
          ATerm u_36 = t;
          int w_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_91(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_36);
            }
          else
            {
              t = u_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = xtc_io_1_0(m_13, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  t = read_from_0_0(t);
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_73, term_y_15);
  {
    ATerm x_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = x_36;
        {
          ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
          t = term_r_17;
          u_73 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_73, term_y_15)), term_s_17);
          v_73 = t;
          t = SSL_printnl(u_73, v_73);
          t = term_d_17;
          t_73 = t;
          t = SSL_exit(t_73);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_73, term_y_15)), term_s_17);
        }
      }
  }
  s_73 = t;
  t = SSL_explode_term(s_73);
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_37 = ATgetArgument(t, 1);
        if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
          {
            r_73 = ATgetFirst((ATermList) c_37);
            {
              ATerm e_37 = (ATerm) ATgetNext((ATermList) c_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_73, term_f_37);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, k_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
