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
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
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
ATerm term_g_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_r_35;
ATerm term_h_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_r_34;
ATerm term_k_34;
ATerm term_z_33;
ATerm term_x_33;
ATerm term_p_33;
ATerm term_l_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_d_31;
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
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_p_28;
ATerm term_m_24;
ATerm term_w_19;
ATerm term_q_19;
ATerm term_n_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_e_16;
ATerm term_v_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_t_14);
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
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_e_16);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_16);
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
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_m_31, term_a_15);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_o_30);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_a_15);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_a_15);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_a_15);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm topdown_1_0 (ATerm e_71 (ATerm), ATerm t);
static ATerm p_1 (ATerm u_0, ATerm t);
static ATerm q_1 (ATerm y_0, ATerm a_1, ATerm h_1, ATerm t);
static ATerm h_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm z_8 (ATerm n_87 (ATerm), ATerm c_33, ATerm a_33, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm c_10 (ATerm p_77 (ATerm), ATerm r_24, ATerm t_258, ATerm t);
ATerm at_suffix_1_0 (ATerm a_78 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm t_77 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm m_101 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm d_10 (ATerm p_18, ATerm q_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm a_9 (ATerm s_14, ATerm q_14, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm b_9 (ATerm k_14, ATerm o_14, ATerm l_14, ATerm t);
static ATerm c_9 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm d_9 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm j_15, ATerm i_15, ATerm t);
static ATerm e_9 (ATerm l_69 (ATerm), ATerm e_15, ATerm c_15, ATerm f_15, ATerm d_15, ATerm t);
ATerm foldl_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm q_69 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm g_9 (ATerm e_54, ATerm f_54, ATerm t);
static ATerm i_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm c_1, ATerm t_0, ATerm t);
ATerm thread_map_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_84 (ATerm), ATerm t);
static ATerm j_9 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm t);
static ATerm g_13 (ATerm k_12, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm l_9 (ATerm k_50, ATerm l_50, ATerm m_50, ATerm t);
static ATerm m_9 (ATerm q_54, ATerm r_54, ATerm t);
static ATerm n_9 (ATerm w_54, ATerm x_54, ATerm t);
static ATerm o_9 (ATerm w_50, ATerm x_50, ATerm s_50, ATerm t);
static ATerm p_9 (ATerm d_51, ATerm b_51, ATerm c_51, ATerm t);
static ATerm q_9 (ATerm o_50, ATerm p_50, ATerm q_50, ATerm t);
static ATerm x_22 (ATerm m_20, ATerm n_20, ATerm r_20, ATerm t);
static ATerm y_22 (ATerm h_21, ATerm i_21, ATerm t);
static ATerm z_22 (ATerm q_21, ATerm r_21, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm w_9 (ATerm y_16, ATerm x_16, ATerm t_16, ATerm v_16, ATerm s_16, ATerm t);
ATerm genzip_4_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm w_77 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_32 (ATerm j_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm FitToMax_1_0 (ATerm p_69 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm d_54 (ATerm z_44, ATerm a_45, ATerm d_45, ATerm e_45, ATerm f_45, ATerm t);
static ATerm g_54 (ATerm r_46, ATerm s_46, ATerm t_46, ATerm u_46, ATerm t);
static ATerm h_54 (ATerm o_47, ATerm p_47, ATerm q_47, ATerm r_47, ATerm t);
static ATerm i_54 (ATerm o_49, ATerm p_49, ATerm q_49, ATerm r_49, ATerm t);
static ATerm v_4 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm i_55 (ATerm y_54, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_10 (ATerm h_23, ATerm t);
static ATerm f_10 (ATerm z_31, ATerm a_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_57 (ATerm e_56, ATerm t);
static ATerm u_57 (ATerm k_56, ATerm l_56, ATerm m_56, ATerm t);
static ATerm v_57 (ATerm x_56, ATerm y_56, ATerm z_56, ATerm t);
static ATerm g_10 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_10 (ATerm q_31, ATerm r_31, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_10 (ATerm q_37, ATerm r_37, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm j_10 (ATerm p_20, ATerm q_20, ATerm t);
ATerm end_scope_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_87 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_70 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_70 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_10 (ATerm y_53, ATerm z_53, ATerm t);
ATerm foldr_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_86 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_77 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_10 (ATerm t_52, ATerm u_52, ATerm t);
ATerm debug_1_0 (ATerm d_76 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_77 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm r_10 (ATerm h_32, ATerm i_32, ATerm t);
static ATerm o_10 (ATerm b_22, ATerm c_22, ATerm t);
static ATerm p_10 (ATerm k_20, ATerm l_20, ATerm j_20, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t);
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
ATerm topdown_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(e_71, t);
    return(t);
  }
  t = e_71(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm p_1 (ATerm u_0, ATerm t)
{
  t = u_0;
  {
    ATerm o_13 = t;
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
        t = o_13;
      }
  }
  t = term_b_14;
  t = debug_1_0(h_0, t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, term_e_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm q_1 (ATerm y_0, ATerm a_1, ATerm h_1, ATerm t)
{
  t = SSL_open_file(y_0, a_1);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL,n_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_1(k_1, t);
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = q_1(m_1, n_1, k_1, t);
          }
      }
    }
  else
    {
      t = p_1(k_1, t);
    }
  return(t);
}
static ATerm z_8 (ATerm n_87 (ATerm), ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL,y_1 = NULL,z_1 = NULL;
  w_1 = t;
  t = n_87(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_1, c_33, a_33);
  t = p_10(r_1, c_33, a_33, t);
  {
    ATerm p_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL;
        t = term_t_14;
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_1, term_t_14);
        t = o_10(r_1, a_2, t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_1 = ATgetFirst((ATermList) t);
      u_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_t_14;
  y_1 = t;
  t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATinsert(CheckATermList(t_1), c_33));
  z_1 = t;
  t = SSL_table_put(r_1, y_1, z_1);
  t = w_1;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
  t = P__tmpdir_0_0(t);
  f_2 = t;
  t = term_y_14;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, term_y_14);
  t = n_10(f_2, j_2, t);
  h_2 = t;
  t = term_z_14;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_2, term_z_14);
  t = n_10(h_2, i_2, t);
  g_2 = t;
  t = SSL_mkstemp(g_2);
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, term_a_15);
  t = z_8(j_0, c_2, d_2, t);
  t = SSL_close(b_2);
  t = c_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm o_2 = NULL,t_2 = NULL;
  o_2 = t;
  t = xtc_new_file_0_0(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_e_14);
  t = open_file_0_0(t);
  t = o_2;
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm a_3 = NULL;
      a_3 = t;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 = NULL,f_0 = NULL;
            t = SSL_is_string(a_3);
            b_0 = t;
            t = (ATerm) ATinsert(ATempty, b_0);
            f_0 = t;
            t = SSL_print(t_2, f_0);
            t = b_0;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = a_3;
          }
      }
      return(t);
    }
    t = topdown_1_0(m_0, t);
  }
  t = SSL_close_file(t_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
  return(t);
}
static ATerm c_10 (ATerm p_77 (ATerm), ATerm r_24, ATerm t_258, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm k_37 = NULL;
    k_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_24, k_37);
    t = p_77(t);
    t = k_37;
    return(t);
  }
  t = t_258;
  t = SRTS_one(p_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  static ATerm k_38 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_78(t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        {
          ATerm c_38 = NULL,d_38 = NULL,j_38 = NULL,l_6 = NULL,u_6 = NULL,v_2 = NULL;
          c_38 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_38 = ATgetFirst((ATermList) t);
              j_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_38);
          l_6 = t;
          t = j_38;
          t = k_38(t);
          u_6 = t;
          t = (ATerm) ATinsert(CheckATermList(u_6), d_38);
          v_2 = t;
          t = SSLsetAnnotations(v_2, l_6);
        }
      }
    return(t);
  }
  t = k_38(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm t_38 = NULL,u_38 = NULL,x_38 = NULL,z_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,z_2 = NULL,y_2 = NULL;
    f_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_39 = ATgetFirst((ATermList) t);
        c_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_39);
    z_38 = t;
    t = b_39;
    t = t_77(t);
    d_39 = t;
    t = (ATerm) ATinsert(CheckATermList(c_39), d_39);
    y_2 = t;
    t = SSLsetAnnotations(y_2, z_38);
    e_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_38 = ATgetFirst((ATermList) t);
        x_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_39);
    t_38 = t;
    t = x_38;
    if(((r_38 != NULL) && (r_38 != t)))
      _fail(t);
    else
      r_38 = t;
    t = (ATerm) ATinsert(CheckATermList(x_38), u_38);
    z_2 = t;
    t = SSLsetAnnotations(z_2, t_38);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(q_0, t);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_38, not_null(r_38));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,q_39 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(m_101, t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm k_39 = NULL;
        k_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_39, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      n_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_39;
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
              ATerm o_15 = ATgetFirst((ATermList) t);
              ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_39;
          t = list_tokenize_1_0(m_101, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_15 = ATgetFirst((ATermList) t);
          ATerm s_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, n_39);
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
          t = list_tokenize_1_0(m_101, t);
          x_39 = t;
          t = (ATerm) ATinsert(CheckATermList(x_39), n_39);
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm g_40 = NULL;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      if((g_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  t = SSL_implode_string(h_40);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,e_4 = NULL;
  e_40 = t;
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_40);
  a_40 = t;
  t = SSL_explode_string(c_40);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, d_40);
  e_4 = t;
  t = SSLsetAnnotations(e_4, a_40);
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_39;
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm f_40 = NULL;
      f_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_40, y_39);
      t = c_10(w_0, f_40, y_39, t);
      return(t);
    }
    t = list_tokenize_1_0(s_0, t);
  }
  t = map_1_0(z_0, t);
  return(t);
}
static ATerm d_10 (ATerm p_18, ATerm q_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_v_15), p_18);
  t = string_tokenize_0_0(t);
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_e_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_40 = ATgetFirst((ATermList) t);
                p_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_40;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(o_40);
          }
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm q_40 = NULL,r_40 = NULL;
          t = last_0_0(t);
          r_40 = t;
          t = SSL_strlen(r_40);
          q_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_40, q_18);
          t = g_9(q_40, q_18, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm j_16 = t;
  if((PushChoice() == 0))
    {
      ATerm u_40 = NULL,v_40 = NULL;
      if(match_cons(t, sym__2))
        {
          u_40 = ATgetArgument(t, 0);
          v_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(u_40, v_40);
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            t = SSL_gtr(u_40, v_40);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_17;
      t = get_config_0_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = term_b_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_37;
    }
  else
    {
      t = d_37;
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
static ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm s_14, ATerm q_14, ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
  t = s_14;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_1, t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = term_e_16;
      }
  }
  q_3 = t;
  t = term_e_17;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, term_e_17);
  t = k_10(q_3, r_3, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, term_v_15);
  t = copy_char_0_0(t);
  i_3 = t;
  t = s_14;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(i_1, t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = term_e_16;
      }
  }
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_h_17);
  t = copy_char_0_0(t);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_14, term_h_17);
  t = copy_char_0_0(t);
  l_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_3), j_3), i_3);
  n_3 = t;
  t = SSL_concat_strings(n_3);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  x_3 = t;
  t = SSL_explode_term(x_3);
  if(match_cons(t, sym__2))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_17 = ATgetArgument(t, 1);
        if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
          {
            w_3 = ATgetFirst((ATermList) j_17);
            {
              ATerm k_17 = (ATerm) ATgetNext((ATermList) j_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_3;
  return(t);
}
static ATerm b_9 (ATerm k_14, ATerm o_14, ATerm l_14, ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_14, l_14);
  t = a_9(k_14, l_14, t);
  t_3 = t;
  t = o_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14;
  t = map_1_0(j_1, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_3, v_3);
  t = c_9(t_3, v_3, t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, s_3);
  return(t);
}
static ATerm c_9 (ATerm d_24, ATerm e_24, ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL;
  t = e_24;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_24;
    }
  else
    {
      ATerm r_0 = NULL,d_1 = NULL,i_4 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_4 = ATgetFirst((ATermList) t);
          t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_24);
      r_0 = t;
      t = t_4;
      {
        static ATerm l_1 (ATerm t)
        {
          ATerm n_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 = NULL;
              e_1 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_1;
              LocalPopChoice(o_17);
            }
          else
            {
              t = n_17;
              {
                ATerm f_1 = NULL;
                t = Cons_2_0(_id, l_1, t);
                f_1 = t;
                t = (ATerm) ATinsert(CheckATermList(f_1), d_24);
              }
            }
          return(t);
        }
        t = l_1(t);
      }
      d_1 = t;
      t = (ATerm) ATinsert(CheckATermList(d_1), s_4);
      i_4 = t;
      t = SSLsetAnnotations(i_4, r_0);
    }
  return(t);
}
static ATerm d_9 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm j_15, ATerm i_15, ATerm t)
{
  ATerm w_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,d_5 = NULL;
  t = term_a_15;
  t = n_69(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_15, d_5);
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
          ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
          t = term_r_17;
          f_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_15, d_5)), term_s_17);
          g_5 = t;
          t = SSL_printnl(f_5, g_5);
          t = term_e_17;
          e_5 = t;
          t = SSL_exit(e_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_15, d_5)), term_s_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      w_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  t = m_69(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_4, a_5);
  t = k_10(y_4, a_5, t);
  z_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_4), z_4));
  return(t);
}
static ATerm e_9 (ATerm l_69 (ATerm), ATerm e_15, ATerm c_15, ATerm f_15, ATerm d_15, ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,m_5 = NULL,w_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
  {
    ATerm t_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = t_17;
        {
          ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
          t = term_r_17;
          y_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_15, f_15)), term_s_17);
          z_5 = t;
          t = SSL_printnl(y_5, z_5);
          t = term_e_17;
          x_5 = t;
          t = SSL_exit(x_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_15, f_15)), term_s_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  t = get_width_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_5, w_5);
  t = leq_0_0(t);
  t = term_a_15;
  t = l_69(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_5, m_5);
  t = k_10(i_5, m_5, t);
  j_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_15), h_5), j_5));
  return(t);
}
ATerm foldl_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  static ATerm v_6 (ATerm t)
  {
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL;
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
        ATerm t_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_6 = ATgetFirst((ATermList) t);
            k_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_6, m_6);
        t = v_83(t);
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_6, t_6);
        t = v_6(t);
      }
    return(t);
  }
  t = v_6(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm x_6 = NULL;
  static ATerm o_1 (ATerm t)
  {
    ATerm y_6 = NULL,a_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,k_4 = NULL;
    e_7 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        a_7 = ATgetArgument(t, 0);
        c_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_7);
    y_6 = t;
    t = a_7;
    t = q_69(t);
    d_7 = t;
    t = c_7;
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, d_7, c_7);
    k_4 = t;
    t = SSLsetAnnotations(k_4, y_6);
    return(t);
  }
  t = fetch_1_0(o_1, t);
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
static ATerm g_9 (ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm w_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_54, f_54);
      LocalPopChoice(y_17);
    }
  else
    {
      t = w_17;
      t = SSL_subtr(e_54, f_54);
    }
  return(t);
}
static ATerm i_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm c_1, ATerm t_0, ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL,j_7 = NULL,l_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_0, t_0);
  t = v_0(t);
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_1, g_7);
  t = b_1(t);
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_7), j_7), i_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  static ATerm c_8 (ATerm t)
  {
    ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,v_7 = NULL;
    q_7 = t;
    if(match_cons(t, sym__2))
      {
        r_7 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_7;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_7 = ATgetFirst((ATermList) t);
        p_7 = (ATerm) ATgetNext((ATermList) t);
        t = q_7;
        t = i_9(h_84, c_8, o_7, p_7, v_7, t);
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
  ATerm z_17 = t;
  if((PushChoice() == 0))
    {
      ATerm r_8 = NULL,x_8 = NULL,f_9 = NULL;
      r_8 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_8;
        }
      else
        {
          ATerm l_2 = NULL,n_4 = NULL;
          if(match_cons(t, sym_H_2))
            {
              x_8 = ATgetArgument(t, 0);
              f_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_8);
          l_2 = t;
          t = x_8;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_9;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, x_8, f_9);
          n_4 = t;
          t = SSLsetAnnotations(n_4, l_2);
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
ATerm filter_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_11 = ATgetFirst((ATermList) t);
          b_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 = NULL,g_3 = NULL,k_3 = NULL,p_4 = NULL;
            t = SSLgetAnnotations(z_10);
            d_3 = t;
            t = a_11;
            t = u_84(t);
            g_3 = t;
            t = b_11;
            t = filter_1_0(u_84, t);
            k_3 = t;
            t = (ATerm) ATinsert(CheckATermList(k_3), g_3);
            p_4 = t;
            t = SSLsetAnnotations(p_4, d_3);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = b_11;
            t = filter_1_0(u_84, t);
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm t)
{
  ATerm h_11 = NULL,l_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,u_4 = NULL;
  t = b_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_11 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_11, z_15);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm q_11 = NULL,s_11 = NULL,t_11 = NULL;
          t = term_r_17;
          s_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_11, z_15)), term_s_17);
          t_11 = t;
          t = SSL_printnl(s_11, t_11);
          t = term_e_17;
          q_11 = t;
          t = SSL_exit(q_11);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_11, z_15)), term_s_17);
        }
      }
  }
  o_11 = t;
  t = m_11;
  {
    static ATerm s_1 (ATerm t)
    {
      ATerm w_11 = NULL;
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, a_16);
      {
        ATerm f_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = f_18;
            {
              ATerm y_11 = NULL,a_12 = NULL,d_12 = NULL;
              t = term_r_17;
              a_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_11, a_16)), term_s_17);
              d_12 = t;
              t = SSL_printnl(a_12, d_12);
              t = term_e_17;
              y_11 = t;
              t = SSL_exit(y_11);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_11, a_16)), term_s_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(s_1, t);
  }
  p_11 = t;
  t = (ATerm) ATinsert(CheckATermList(p_11), o_11);
  u_4 = t;
  t = SSLsetAnnotations(u_4, h_11);
  return(t);
}
static ATerm g_13 (ATerm k_12, ATerm t)
{
  ATerm l_12 = NULL,n_12 = NULL,p_12 = NULL,q_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,h_8 = NULL;
  t = SSL_explode_term(k_12);
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_12 = ATgetFirst((ATermList) t);
      v_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  p_12 = t;
  t = v_12;
  t = Cons_2_0(v_1, x_1, t);
  w_12 = t;
  t = (ATerm) ATinsert(CheckATermList(w_12), q_12);
  h_8 = t;
  t = SSLsetAnnotations(h_8, p_12);
  x_12 = t;
  t = SSL_mkterm(l_12, x_12);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL;
      e_13 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_13;
      LocalPopChoice(l_18);
    }
  else
    {
      t = i_18;
      t = Cons_2_0(e_2, k_2, t);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm m_18 = t;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL;
      f_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_13;
        }
      else
        {
          t = g_13(f_13, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_18;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_13 = ATgetFirst((ATermList) t);
      a_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_13, a_14);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_18;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_14 = ATgetFirst((ATermList) t);
      d_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(match_cons(o_18, sym__2))
        {
          g_14 = ATgetArgument(o_18, 0);
          h_14 = ATgetArgument(o_18, 1);
        }
      else
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(match_cons(s_18, sym__2))
          {
            i_14 = ATgetArgument(s_18, 0);
            j_14 = ATgetArgument(s_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_14), g_14), (ATerm) ATinsert(CheckATermList(j_14), h_14));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm t_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(m_2, t);
      t = (ATerm) ATempty;
      LocalPopChoice(y_18);
    }
  else
    {
      t = t_18;
      {
        ATerm l_13 = NULL,n_13 = NULL,q_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,y_13 = NULL,l_8 = NULL;
        t = map_1_0(n_2, t);
        t = genzip_4_0(p_2, q_2, r_2, _id, t);
        y_13 = t;
        if(match_cons(t, sym__2))
          {
            s_13 = ATgetArgument(t, 0);
            t_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_13);
        q_13 = t;
        t = t_13;
        t = matrix_transpose_0_0(t);
        u_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_13, u_13);
        l_8 = t;
        t = SSLsetAnnotations(l_8, q_13);
        if(match_cons(t, sym__2))
          {
            l_13 = ATgetArgument(t, 0);
            n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_13), l_13);
      }
    }
  return(t);
}
static ATerm l_9 (ATerm k_50, ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm b_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, k_50, l_50, m_50);
  t = p_9(k_50, l_50, m_50, t);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_15, l_50);
  t = n_10(b_15, l_50, t);
  return(t);
}
static ATerm m_9 (ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm d_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(q_54, r_54);
      LocalPopChoice(l_19);
    }
  else
    {
      t = d_19;
      t = SSL_divr(q_54, r_54);
    }
  return(t);
}
static ATerm n_9 (ATerm w_54, ATerm x_54, ATerm t)
{
  t = SSL_mod(w_54, x_54);
  return(t);
}
static ATerm o_9 (ATerm w_50, ATerm x_50, ATerm s_50, ATerm t)
{
  ATerm y_15 = NULL,c_16 = NULL,d_16 = NULL,f_16 = NULL,g_16 = NULL,r_16 = NULL,c_18 = NULL,k_18 = NULL,r_18 = NULL;
  t = SSL_strlen(x_50);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, f_16);
  t = g_9(s_50, f_16, t);
  y_15 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        t = term_q_19;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, term_q_19);
        t = n_9(y_15, u_18, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_15;
        LocalPopChoice(p_19);
        {
          ATerm v_18 = NULL,w_18 = NULL;
          t = term_q_19;
          w_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_15, term_q_19);
          t = m_9(y_15, w_18, t);
          v_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_18, v_18);
        }
      }
    else
      {
        t = o_19;
        {
          ATerm x_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,o_8 = NULL;
          t = term_e_17;
          c_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_15, term_e_17);
          t = g_9(y_15, c_19, t);
          a_19 = t;
          t = term_q_19;
          b_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_19, term_q_19);
          t = m_9(a_19, b_19, t);
          x_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_18, x_18);
          h_19 = t;
          if(match_cons(t, sym__2))
            {
              ATerm s_19 = ATgetArgument(t, 0);
              ATerm t_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_19);
          e_19 = t;
          t = term_e_17;
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_18, term_e_17);
          t = k_10(x_18, g_19, t);
          f_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_19, x_18);
          o_8 = t;
          t = SSLsetAnnotations(o_8, e_19);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_16, c_16);
  t = k_10(f_16, c_16, t);
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_50, x_50, k_18);
  t = p_9(w_50, x_50, k_18, t);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, g_16);
  t = k_10(f_16, g_16, t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_50, x_50, c_18);
  t = p_9(w_50, x_50, c_18, t);
  r_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_16), x_50), d_16);
  r_18 = t;
  t = SSL_concat_strings(r_18);
  return(t);
}
static ATerm p_9 (ATerm d_51, ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm i_19 = NULL;
  t = SSL_strlen(b_51);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, i_19);
  t = g_9(c_51, i_19, t);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL;
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, term_e_16);
        t = geq_0_0(t);
        t = j_19;
        LocalPopChoice(v_19);
        {
          ATerm k_19 = NULL;
          k_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_19, d_51);
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
static ATerm q_9 (ATerm o_50, ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm r_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, o_50, p_50, q_50);
  t = p_9(o_50, p_50, q_50, t);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_50, r_19);
  t = n_10(p_50, r_19, t);
  return(t);
}
static ATerm x_22 (ATerm m_20, ATerm n_20, ATerm r_20, ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,f_21 = NULL;
  t = term_e_17;
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, term_e_17);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(m_20, f_21);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = SSL_gtr(m_20, f_21);
      }
  }
  t = n_20;
  if(match_cons(t, sym__3))
    {
      b_21 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
      d_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_9(b_21, c_21, d_21, t);
  return(t);
}
static ATerm y_22 (ATerm h_21, ATerm i_21, ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  t = h_21;
  if(match_cons(t, sym__3))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      m_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_9(k_21, l_21, m_21, t);
  return(t);
}
static ATerm z_22 (ATerm q_21, ATerm r_21, ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,g_22 = NULL;
  t = q_21;
  if(match_cons(t, sym__3))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
      g_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_9(x_21, y_21, g_22, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm l_22 = NULL,n_22 = NULL,o_22 = NULL,s_22 = NULL,u_22 = NULL;
  n_22 = t;
  if(match_cons(t, sym__3))
    {
      o_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
      u_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_22;
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
        t = u_22;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm f_20 = ATgetArgument(t, 0);
                  l_22 = ATgetArgument(t, 1);
                  {
                    ATerm g_20 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(d_20);
              t = o_22;
              if(match_int(t, 1))
                {
                  ATerm h_20 = t;
                  int o_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_22(o_22, u_22, n_22, t);
                      LocalPopChoice(o_20);
                    }
                  else
                    {
                      t = h_20;
                      t = l_22;
                    }
                }
              else
                {
                  t = x_22(o_22, u_22, n_22, t);
                }
            }
          else
            {
              t = c_20;
              t = o_22;
              t = x_22(o_22, u_22, n_22, t);
            }
        }
      }
    else
      {
        t = z_19;
        {
          ATerm s_20 = t;
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
              t = o_22;
              t = y_22(u_22, n_22, t);
            }
          else
            {
              t = s_20;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm w_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_22;
              t = z_22(u_22, n_22, t);
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
static ATerm u_2 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_8 = NULL;
      p_23 = t;
      if(match_cons(t, sym__2))
        {
          n_23 = ATgetArgument(t, 0);
          o_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_23);
      m_23 = t;
      t = n_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_23;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_20 = ATgetFirst((ATermList) t);
              ATerm a_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_23;
        }
      t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
      q_8 = t;
      t = SSLsetAnnotations(q_8, m_23);
      LocalPopChoice(y_20);
      t = conc_0_0(t);
    }
  else
    {
      t = x_20;
      {
        ATerm v_23 = NULL,w_23 = NULL;
        if(match_cons(t, sym__2))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_23), v_23);
      }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL;
      x_23 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_23;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_21 = ATgetFirst((ATermList) t);
              ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_23;
        }
      LocalPopChoice(n_21);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = j_21;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(s_2, u_2, w_2, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_18;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm c_26 = NULL,h_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_26 = ATgetFirst((ATermList) t);
      h_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_26, h_26);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      if(match_cons(u_21, sym__2))
        {
          m_26 = ATgetArgument(u_21, 0);
          n_26 = ATgetArgument(u_21, 1);
        }
      else
        _fail(t);
      {
        ATerm w_21 = ATgetArgument(t, 1);
        if(match_cons(w_21, sym__2))
          {
            o_26 = ATgetArgument(w_21, 0);
            p_26 = ATgetArgument(w_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_26), m_26), (ATerm) ATinsert(CheckATermList(p_26), n_26));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm a_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26 = NULL;
      t = flatten_list_0_0(t);
      r_26 = t;
      t = SSL_concat_strings(r_26);
      LocalPopChoice(d_22);
    }
  else
    {
      t = a_22;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm f_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 = NULL,x_4 = NULL;
      if(match_cons(t, sym__2))
        {
          l_4 = ATgetArgument(t, 0);
          x_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_4, x_4);
      {
        ATerm k_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(l_4, x_4);
            LocalPopChoice(m_22);
          }
        else
          {
            t = k_22;
            t = SSL_gtr(l_4, x_4);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, l_4, x_4);
      LocalPopChoice(i_22);
      {
        ATerm c_5 = NULL,k_5 = NULL;
        k_5 = t;
        t = SSL_explode_term(k_5);
        if(match_cons(t, sym__2))
          {
            ATerm p_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_22 = ATgetArgument(t, 1);
              if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
                {
                  c_5 = ATgetFirst((ATermList) r_22);
                  {
                    ATerm t_22 = (ATerm) ATgetNext((ATermList) r_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_5;
      }
    }
  else
    {
      t = f_22;
      {
        ATerm l_5 = NULL,n_5 = NULL;
        n_5 = t;
        t = SSL_explode_term(n_5);
        if(match_cons(t, sym__2))
          {
            ATerm v_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_22 = ATgetArgument(t, 1);
              if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
                {
                  ATerm a_23 = ATgetFirst((ATermList) w_22);
                  ATerm b_23 = (ATerm) ATgetNext((ATermList) w_22);
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
static ATerm m_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm y_16, ATerm x_16, ATerm t_16, ATerm v_16, ATerm s_16, ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,x_24 = NULL,c_25 = NULL,e_25 = NULL,g_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,a_10 = NULL,g_4 = NULL,h_4 = NULL;
  t = t_16;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm s_25 = NULL;
      s_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_25, v_16);
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
              ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
              t = term_r_17;
              x_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_25, v_16)), term_s_17);
              y_25 = t;
              t = SSL_printnl(x_25, y_25);
              t = term_e_17;
              w_25 = t;
              t = SSL_exit(w_25);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_25, v_16)), term_s_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = genzip_4_0(b_3, c_3, e_3, _id, t);
  p_25 = t;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  g_25 = t;
  t = l_25;
  t = map_1_0(f_3, t);
  n_25 = t;
  t = m_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_23 = ATgetFirst((ATermList) t);
      h_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_4 = ATgetFirst((ATermList) t);
      {
        ATerm g_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_4, g_4);
  t = foldl_1_0(h_3, t);
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_25, o_25);
  a_10 = t;
  t = SSLsetAnnotations(a_10, g_25);
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_24, v_16);
  t = g_9(n_24, v_16, t);
  p_24 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_27 = NULL;
        t = term_e_17;
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_e_17);
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_16, c_27);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = SSL_gtr(x_16, c_27);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_e_17);
        LocalPopChoice(j_23);
        {
          ATerm d_27 = NULL,f_27 = NULL;
          t = y_16;
          if(match_cons(t, sym_AC_1))
            {
              f_27 = ATgetArgument(t, 0);
              t = f_27;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  f_27 = ATgetArgument(t, 0);
                  t = f_27;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      f_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_27;
                }
            }
          {
            ATerm q_23 = t;
            int r_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(m_3, t);
                LocalPopChoice(r_23);
              }
            else
              {
                t = q_23;
                t = term_e_17;
              }
          }
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_27, term_h_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = i_23;
        t = term_w_19;
      }
  }
  s_24 = t;
  t = o_24;
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm n_27 = NULL,o_27 = NULL;
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_16, y_16, (ATerm) ATmakeAppl(sym__3, term_h_17, o_27, p_24));
      t = align_column_0_0(t);
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_27, s_24);
      t = n_10(n_27, s_24, t);
      return(t);
    }
    t = map_1_0(y_3, t);
  }
  x_24 = t;
  t = SSL_strlen(s_24);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, n_24);
  t = k_10(e_25, n_24, t);
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(CheckATermList(s_16), x_24));
  return(t);
}
ATerm genzip_4_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t)
{
  static ATerm w_27 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_79(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        {
          ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,v_27 = NULL,l_10 = NULL;
          t = c_79(t);
          v_27 = t;
          if(match_cons(t, sym__2))
            {
              q_27 = ATgetArgument(t, 0);
              r_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_27);
          p_27 = t;
          t = q_27;
          t = e_79(t);
          s_27 = t;
          t = r_27;
          t = w_27(t);
          t_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
          l_10 = t;
          t = SSLsetAnnotations(l_10, p_27);
          t = d_79(t);
        }
      }
    return(t);
  }
  t = w_27(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm b_28 = NULL;
  static ATerm v_28 (ATerm t)
  {
    ATerm e_28 = NULL,g_28 = NULL,l_28 = NULL,m_28 = NULL;
    if(match_cons(t, sym__2))
      {
        e_28 = ATgetArgument(t, 0);
        g_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_28;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_28 = ATgetFirst((ATermList) t);
            m_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_28, l_28);
        t = t_100(t);
        r_28 = t;
        t = term_e_17;
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_28, term_e_17);
        t = k_10(e_28, u_28, t);
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_28, m_28);
        t = v_28(t);
        s_28 = t;
        t = (ATerm) ATinsert(CheckATermList(s_28), r_28);
      }
    return(t);
  }
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, b_28);
  t = v_28(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_28;
      t = s_83(t);
    }
  else
    {
      ATerm e_29 = NULL,g_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_28;
      t = u_83(t);
      e_29 = t;
      t = z_28;
      t = foldr_3_0(s_83, t_83, u_83, t);
      g_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_29, g_29);
      t = t_83(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  static ATerm c_31 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
    b_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_30 = ATgetFirst((ATermList) t);
        a_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_5 = NULL,u_5 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(b_31);
          r_5 = t;
          t = a_31;
          t = c_31(t);
          u_5 = t;
          t = (ATerm) ATinsert(CheckATermList(u_5), z_30);
          t_10 = t;
          t = SSLsetAnnotations(t_10, r_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_31;
        t = w_77(t);
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_29 = NULL,o_29 = NULL,p_29 = NULL;
  i_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_29;
    }
  else
    {
      static ATerm z_3 (ATerm t)
      {
        t = not_null(p_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_29 = ATgetFirst((ATermList) t);
          if(((p_29 != NULL) && (p_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_29;
      t = at_end_1_0(z_3, t);
    }
  return(t);
}
static ATerm d_32 (ATerm j_31, ATerm t)
{
  ATerm l_31 = NULL;
  t = SSL_explode_term(j_31);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_31 = NULL,s_31 = NULL,t_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_4 (ATerm t)
            {
              t = s_31;
              return(t);
            }
            t = o_31;
            t = at_end_1_0(a_4, t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = d_32(t_31, t);
          }
      }
    }
  else
    {
      t = d_32(t_31, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  static ATerm k_32 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_75(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = i_75(t);
        t = k_32(t);
      }
    return(t);
  }
  t = k_32(t);
  return(t);
}
ATerm for_3_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  t = k_75(t);
  t = while_not_2_0(l_75, m_75, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_32, n_32, (ATerm) ATempty);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm o_32 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if(((ATgetType(c_24) != AT_INT) || (ATgetInt((ATermInt) c_24) != 0)))
        _fail(t);
      {
        ATerm f_24 = ATgetArgument(t, 1);
      }
      o_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_32;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_32 = NULL,f_33 = NULL,g_33 = NULL,j_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym__3))
    {
      p_32 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      g_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_32, term_e_17);
  t = geq_0_0(t);
  t = term_e_17;
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_32, term_e_17);
  t = g_9(p_32, k_33, t);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_33, f_33, (ATerm) ATinsert(CheckATermList(g_33), f_33));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(b_4, c_4, d_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(u_33, v_33, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,r_33 = NULL,t_33 = NULL;
  r_33 = t;
  t = foldr_3_0(f_4, j_4, m_4, t);
  m_33 = t;
  t = term_a_15;
  t = p_69(t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, m_33);
  t = g_9(t_33, m_33, t);
  n_33 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_33 = NULL;
        t = term_e_16;
        w_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_33, term_e_16);
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_33, w_33);
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = SSL_gtr(n_33, w_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_33, (ATerm) ATempty);
        t = copy_0_0(t);
        o_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, o_33);
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
              t = r_33;
              LocalPopChoice(l_24);
            }
          else
            {
              t = k_24;
              {
                ATerm y_33 = NULL,b_34 = NULL,d_34 = NULL;
                t = term_r_17;
                b_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, r_33), term_m_24);
                d_34 = t;
                t = SSL_printnl(b_34, d_34);
                t = term_e_17;
                y_33 = t;
                t = SSL_exit(y_33);
                t = (ATerm) ATinsert(ATinsert(ATempty, r_33), term_m_24);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm q_24 = t;
  if((PushChoice() == 0))
    {
      ATerm q_36 = NULL,r_36 = NULL,t_36 = NULL,u_36 = NULL,w_10 = NULL;
      u_36 = t;
      if(match_cons(t, sym_R_2))
        {
          r_36 = ATgetArgument(t, 0);
          t_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_36);
      q_36 = t;
      t = t_36;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, r_36, t_36);
      w_10 = t;
      t = SSLsetAnnotations(w_10, q_36);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_34, (ATerm) ATempty);
  {
    static ATerm y_36 (ATerm t)
    {
      ATerm u_34 = NULL,v_34 = NULL,x_34 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
      if(match_cons(t, sym__2))
        {
          x_34 = ATgetArgument(t, 0);
          g_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_34;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_35 = NULL;
          t = g_35;
          t = reverse_acc_2_0(_id, o_4, t);
          o_35 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, o_35));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_35 = ATgetFirst((ATermList) t);
              f_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_35;
          if(match_cons(t, sym_R_2))
            {
              u_34 = ATgetArgument(t, 0);
              v_34 = ATgetArgument(t, 1);
              {
                ATerm t_24 = t;
                int u_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_35 = NULL,c_36 = NULL;
                    t = g_35;
                    t = reverse_acc_2_0(_id, q_4, t);
                    x_35 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_35, (ATerm) ATempty);
                    t = y_36(t);
                    c_36 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(c_36), (ATerm) ATmakeAppl(sym_R_2, u_34, v_34)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, x_35));
                    LocalPopChoice(u_24);
                  }
                else
                  {
                    t = t_24;
                    t = (ATerm) ATmakeAppl(sym__2, f_35, (ATerm) ATinsert(CheckATermList(g_35), e_35));
                    t = y_36(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, f_35, (ATerm) ATinsert(CheckATermList(g_35), e_35));
              t = y_36(t);
            }
        }
      return(t);
    }
    t = y_36(t);
  }
  t = filter_1_0(r_4, t);
  return(t);
}
static ATerm d_54 (ATerm z_44, ATerm a_45, ATerm d_45, ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,n_45 = NULL,s_45 = NULL;
  t = d_45;
  t = construct_rows_0_0(t);
  t = map_1_0(v_4, t);
  {
    static ATerm b_5 (ATerm t)
    {
      static ATerm o_5 (ATerm t)
      {
        t = z_44;
        t = foldr_3_0(p_5, q_5, s_5, t);
        return(t);
      }
      t = FitToMax_1_0(o_5, t);
      return(t);
    }
    t = map_1_0(b_5, t);
  }
  t = matrix_transpose_0_0(t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_with_index_1_0(_id, t);
  t = reverse_acc_2_0(_id, v_5, t);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_44, j_45);
  t = genzip_4_0(a_6, b_6, c_6, _id, t);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, (ATerm) ATmakeAppl(sym__2, e_45, (ATerm) ATempty));
  t = foldl_1_0(d_6, t);
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_45;
  t = reverse_acc_2_0(_id, e_6, t);
  t = matrix_transpose_0_0(t);
  {
    static ATerm f_6 (ATerm t)
    {
      ATerm q_46 = NULL;
      q_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_46, n_45);
      return(t);
    }
    t = map_1_0(f_6, t);
  }
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_45, s_45, e_45);
  t = b_9(a_45, s_45, e_45, t);
  return(t);
}
static ATerm g_54 (ATerm r_46, ATerm s_46, ATerm t_46, ATerm u_46, ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,m_47 = NULL;
  t = r_46;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_6, t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = term_e_16;
      }
  }
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, m_47);
  t = k_10(t_46, m_47, t);
  z_46 = t;
  t = s_46;
  t = filter_1_0(is_real_vbox_0_0, t);
  y_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_46);
    }
  else
    {
      ATerm n_47 = NULL;
      t = (ATerm) ATmakeAppl(sym__3, t_46, z_46, y_46);
      t = j_9(t_46, z_46, y_46, t);
      n_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, r_46, n_47, t_46);
      t = b_9(r_46, n_47, t_46, t);
    }
  return(t);
}
static ATerm h_54 (ATerm o_47, ATerm p_47, ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm w_47 = NULL,y_47 = NULL,z_47 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,j_49 = NULL,k_49 = NULL,e_11 = NULL;
  t = o_47;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(h_6, t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = term_e_17;
      }
  }
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_48, term_h_17);
  t = copy_char_0_0(t);
  y_47 = t;
  t = SSL_strlen(y_47);
  z_47 = t;
  t = p_47;
  t = filter_1_0(is_real_hbox_0_0, t);
  w_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_47, q_47);
  {
    static ATerm n_6 (ATerm t)
    {
      ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,r_48 = NULL,y_10 = NULL;
      ATerm a_25 = t;
      int b_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_0_0(t);
          LocalPopChoice(b_25);
        }
      else
        {
          t = a_25;
          {
            ATerm y_48 = NULL,u_7 = NULL,x_7 = NULL,a_8 = NULL;
            y_48 = t;
            t = term_r_17;
            x_7 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, y_48), term_s_17);
            a_8 = t;
            t = SSL_printnl(x_7, a_8);
            t = term_e_17;
            u_7 = t;
            t = SSL_exit(u_7);
            t = (ATerm) ATinsert(ATinsert(ATempty, y_48), term_s_17);
          }
        }
      r_48 = t;
      if(match_cons(t, sym__2))
        {
          n_48 = ATgetArgument(t, 0);
          o_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_48);
      m_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_47, o_48);
      t = k_10(z_47, o_48, t);
      p_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_48, p_48);
      y_10 = t;
      t = SSLsetAnnotations(y_10, m_48);
      return(t);
    }
    t = thread_map_1_0(n_6, t);
  }
  l_48 = t;
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_47, h_48);
  t = c_9(y_47, h_48, t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, i_48);
  e_11 = t;
  t = SSLsetAnnotations(e_11, g_48);
  k_48 = t;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
      {
        ATerm d_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_8 = NULL,n_8 = NULL,s_8 = NULL,q_16 = NULL;
            t = SSLgetAnnotations(k_48);
            g_8 = t;
            t = j_49;
            {
              ATerm h_25 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = h_25;
                }
            }
            n_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_49, z_47);
            t = g_9(k_49, z_47, t);
            s_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_8, s_8);
            q_16 = t;
            t = SSLsetAnnotations(q_16, g_8);
            LocalPopChoice(f_25);
          }
        else
          {
            t = d_25;
            t = k_48;
          }
      }
    }
  else
    {
      t = k_48;
    }
  return(t);
}
static ATerm i_54 (ATerm o_49, ATerm p_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,d_50 = NULL,f_50 = NULL;
  t = o_49;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(o_6, t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = term_e_17;
      }
  }
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, term_h_17);
  t = copy_char_0_0(t);
  v_49 = t;
  t = o_49;
  {
    ATerm k_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(p_6, t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = k_25;
        t = term_e_16;
      }
  }
  b_50 = t;
  t = term_e_17;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_50, term_e_17);
  t = k_10(b_50, d_50, t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, term_v_15);
  t = copy_char_0_0(t);
  t = SSL_strlen(v_49);
  t_49 = t;
  t = o_49;
  {
    ATerm r_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(q_6, t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = r_25;
        t = term_e_16;
      }
  }
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_49, z_49);
  t = k_10(q_49, z_49, t);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_49)));
  {
    static ATerm r_6 (ATerm t)
    {
      ATerm g_50 = NULL,i_50 = NULL,e_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,r_51 = NULL;
      l_51 = t;
      if(match_cons(t, sym__2))
        {
          m_51 = ATgetArgument(t, 0);
          r_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_50 = ATgetFirst((ATermList) t);
          k_51 = (ATerm) ATgetNext((ATermList) t);
          t = g_50;
          if(match_cons(t, sym__2))
            {
              i_50 = ATgetArgument(t, 0);
              e_51 = ATgetArgument(t, 1);
              {
                ATerm u_25 = t;
                int v_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm s_6 (ATerm t)
                    {
                      t = t_49;
                      return(t);
                    }
                    t = l_51;
                    t = e_9(s_6, m_51, i_50, e_51, k_51, t);
                    LocalPopChoice(v_25);
                  }
                else
                  {
                    t = u_25;
                    {
                      static ATerm w_6 (ATerm t)
                      {
                        t = t_49;
                        return(t);
                      }
                      static ATerm z_6 (ATerm t)
                      {
                        t = u_49;
                        return(t);
                      }
                      t = l_51;
                      t = d_9(w_6, z_6, m_51, r_51, t);
                    }
                  }
              }
            }
          else
            {
              static ATerm b_7 (ATerm t)
              {
                t = t_49;
                return(t);
              }
              static ATerm h_7 (ATerm t)
              {
                t = u_49;
                return(t);
              }
              t = l_51;
              t = d_9(b_7, h_7, m_51, r_51, t);
            }
        }
      else
        {
          static ATerm k_7 (ATerm t)
          {
            t = t_49;
            return(t);
          }
          static ATerm m_7 (ATerm t)
          {
            t = u_49;
            return(t);
          }
          t = l_51;
          t = d_9(k_7, m_7, m_51, r_51, t);
        }
      return(t);
    }
    t = foldl_1_0(r_6, t);
  }
  t = reverse_acc_2_0(_id, n_7, t);
  t = map_1_0(s_7, t);
  {
    static ATerm w_7 (ATerm t)
    {
      ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,t_20 = NULL;
      p_52 = t;
      if(match_cons(t, sym__2))
        {
          m_52 = ATgetArgument(t, 0);
          n_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_52);
      l_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_49, m_52);
      t = c_9(v_49, m_52, t);
      o_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_52, n_52);
      t_20 = t;
      t = SSLsetAnnotations(t_20, l_52);
      return(t);
    }
    t = map_1_0(w_7, t);
  }
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_49, y_49, q_49);
  t = b_9(o_49, y_49, q_49, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm t_45 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_45;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_e_16;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  if(match_cons(t, sym__2))
    {
      v_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(v_45, w_45, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_e_17;
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
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(((ATgetType(a_26) != AT_LIST) || !(ATisEmpty(a_26))))
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(((ATgetType(b_26) != AT_LIST) || !(ATisEmpty(b_26))))
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
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,f_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
        {
          a_46 = ATgetFirst((ATermList) d_26);
          b_46 = (ATerm) ATgetNext((ATermList) d_26);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
          {
            c_46 = ATgetFirst((ATermList) e_26);
            f_46 = (ATerm) ATgetNext((ATermList) e_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_46, c_46), (ATerm) ATmakeAppl(sym__2, b_46, f_46));
  return(t);
}
static ATerm c_6 (ATerm t)
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
static ATerm d_6 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(match_cons(f_26, sym__2))
        {
          k_46 = ATgetArgument(f_26, 0);
          {
            ATerm i_26 = ATgetArgument(f_26, 1);
            if(match_cons(i_26, sym__2))
              {
                l_46 = ATgetArgument(i_26, 0);
                m_46 = ATgetArgument(i_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(match_cons(g_26, sym__2))
          {
            n_46 = ATgetArgument(g_26, 0);
            o_46 = ATgetArgument(g_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_9(k_46, l_46, m_46, n_46, o_46, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,u_16 = NULL;
  j_52 = t;
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_52);
  f_52 = t;
  t = g_52;
  t = reverse_acc_2_0(_id, t_7, t);
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_52, h_52);
  u_16 = t;
  t = SSLsetAnnotations(u_16, f_52);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  z_52 = t;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_19, f_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_53 = ATgetFirst((ATermList) t);
          e_53 = (ATerm) ATgetNext((ATermList) t);
          t = e_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_53, f_53);
          {
            ATerm j_26 = t;
            int k_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                LocalPopChoice(k_26);
              }
            else
              {
                t = j_26;
                {
                  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
                  t = term_r_17;
                  t_9 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_53, f_53)), term_s_17);
                  u_9 = t;
                  t = SSL_printnl(t_9, u_9);
                  t = term_e_17;
                  s_9 = t;
                  t = SSL_exit(s_9);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_53, f_53)), term_s_17);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              d_53 = ATgetArgument(t, 0);
              e_53 = ATgetArgument(t, 1);
              {
                ATerm i_11 = NULL,j_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, d_53, f_53);
                {
                  ATerm l_26 = t;
                  int q_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      LocalPopChoice(q_26);
                    }
                  else
                    {
                      t = l_26;
                      {
                        ATerm k_11 = NULL,n_11 = NULL,r_11 = NULL;
                        t = term_r_17;
                        n_11 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_53, f_53)), term_s_17);
                        r_11 = t;
                        t = SSL_printnl(n_11, r_11);
                        t = term_e_17;
                        k_11 = t;
                        t = SSL_exit(k_11);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_53, f_53)), term_s_17);
                      }
                    }
                }
                i_11 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm s_26 = ATgetArgument(t, 0);
                    j_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, d_53, e_53), f_53);
                {
                  ATerm t_26 = t;
                  int u_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_11 = NULL;
                      t = get_width_0_0(t);
                      u_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_11, u_11);
                      t = leq_0_0(t);
                      LocalPopChoice(u_26);
                      t = i_11;
                    }
                  else
                    {
                      t = t_26;
                      t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
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
                              ATerm v_11 = NULL,x_11 = NULL,z_11 = NULL;
                              t = term_r_17;
                              x_11 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_53, f_53)), term_s_17);
                              z_11 = t;
                              t = SSL_printnl(x_11, z_11);
                              t = term_e_17;
                              v_11 = t;
                              t = SSL_exit(v_11);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_53, f_53)), term_s_17);
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
                  d_53 = ATgetArgument(t, 0);
                  e_53 = ATgetArgument(t, 1);
                  {
                    ATerm x_26 = t;
                    int y_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, d_53, e_53), f_53);
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
                                ATerm t_12 = NULL,u_12 = NULL,y_12 = NULL;
                                t = term_r_17;
                                u_12 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, d_53, e_53), f_53)), term_s_17);
                                y_12 = t;
                                t = SSL_printnl(u_12, y_12);
                                t = term_e_17;
                                t_12 = t;
                                t = SSL_exit(t_12);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, d_53, e_53), f_53)), term_s_17);
                              }
                            }
                        }
                        LocalPopChoice(y_26);
                      }
                    else
                      {
                        t = x_26;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, d_53, e_53), f_53);
                        {
                          ATerm b_27 = t;
                          int e_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(e_27);
                            }
                          else
                            {
                              t = b_27;
                              {
                                ATerm p_13 = NULL,r_13 = NULL,v_13 = NULL;
                                t = term_r_17;
                                r_13 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, d_53, e_53), f_53)), term_s_17);
                                v_13 = t;
                                t = SSL_printnl(r_13, v_13);
                                t = term_e_17;
                                p_13 = t;
                                t = SSL_exit(p_13);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, d_53, e_53), f_53)), term_s_17);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm g_27 = t;
                  int h_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm i_27 = ATgetArgument(t, 0);
                          e_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_27);
                      t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
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
                              ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
                              t = term_r_17;
                              w_14 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_53, f_53)), term_s_17);
                              x_14 = t;
                              t = SSL_printnl(w_14, x_14);
                              t = term_e_17;
                              v_14 = t;
                              t = SSL_exit(v_14);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_53, f_53)), term_s_17);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = g_27;
                      {
                        ATerm l_27 = t;
                        int m_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm u_27 = ATgetArgument(t, 0);
                                e_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_27);
                            t = e_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                q_52 = ATgetFirst((ATermList) t);
                                s_52 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = q_52;
                            if(match_cons(t, sym_S_1))
                              {
                                r_52 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_52;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, r_52, f_53);
                          }
                        else
                          {
                            t = l_27;
                            if(match_cons(t, sym_S_1))
                              {
                                d_53 = ATgetArgument(t, 0);
                                {
                                  ATerm r_53 = NULL,s_53 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, d_53, f_53);
                                  t = d_10(d_53, f_53, t);
                                  s_53 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, f_53, s_53);
                                  t = k_10(f_53, s_53, t);
                                  r_53 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, d_53, r_53);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    d_53 = ATgetArgument(t, 0);
                                    e_53 = ATgetArgument(t, 1);
                                    y_52 = ATgetArgument(t, 2);
                                    t = d_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        x_52 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_52;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        v_52 = ATgetFirst((ATermList) t);
                                        w_52 = (ATerm) ATgetNext((ATermList) t);
                                        t = w_52;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = v_52;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm x_27 = t;
                                                int y_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = d_54(x_52, e_53, y_52, f_53, z_52, t);
                                                    LocalPopChoice(y_27);
                                                  }
                                                else
                                                  {
                                                    t = x_27;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = d_54(x_52, e_53, y_52, f_53, z_52, t);
                                              }
                                          }
                                        else
                                          {
                                            t = v_52;
                                            t = d_54(x_52, e_53, y_52, f_53, z_52, t);
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
                                                t = d_54(x_52, e_53, y_52, f_53, z_52, t);
                                                LocalPopChoice(a_28);
                                              }
                                            else
                                              {
                                                t = z_27;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_53);
                                              }
                                          }
                                        else
                                          {
                                            t = d_54(x_52, e_53, y_52, f_53, z_52, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        d_53 = ATgetArgument(t, 0);
                                        e_53 = ATgetArgument(t, 1);
                                        t = g_54(d_53, e_53, f_53, z_52, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            d_53 = ATgetArgument(t, 0);
                                            e_53 = ATgetArgument(t, 1);
                                            t = h_54(d_53, e_53, f_53, z_52, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                d_53 = ATgetArgument(t, 0);
                                                e_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = i_54(d_53, e_53, f_53, z_52, t);
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
static ATerm i_55 (ATerm y_54, ATerm t)
{
  t = SSL_fclose(y_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_55 = ATgetArgument(t, 0);
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_55);
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
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
static ATerm e_10 (ATerm h_23, ATerm t)
{
  t = SSL_read_term_from_stream(h_23);
  return(t);
}
static ATerm f_10 (ATerm z_31, ATerm a_32, ATerm t)
{
  ATerm l_55 = NULL;
  t = SSL_fopen(z_31, a_32);
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_55 = NULL;
  t = SSL_stdin_stream();
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_55 = NULL;
  t = SSL_stdout_stream();
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_55 = NULL;
  t = SSL_stderr_stream();
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_55);
  return(t);
}
static ATerm t_57 (ATerm e_56, ATerm t)
{
  ATerm g_56 = NULL;
  t = SSL_explode_term(e_56);
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_28 = ATgetArgument(t, 1);
        if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
          {
            g_56 = ATgetFirst((ATermList) h_28);
            {
              ATerm i_28 = (ATerm) ATgetNext((ATermList) h_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_57 (ATerm k_56, ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,s_56 = NULL,e_21 = NULL;
  t = SSLgetAnnotations(m_56);
  p_56 = t;
  t = k_56;
  if(match_cons(t, sym_Path_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_56, l_56);
  e_21 = t;
  t = SSLsetAnnotations(e_21, p_56);
  if(match_cons(t, sym__2))
    {
      n_56 = ATgetArgument(t, 0);
      o_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(n_56, o_56, t);
  return(t);
}
static ATerm v_57 (ATerm x_56, ATerm y_56, ATerm z_56, ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,e_57 = NULL,i_57 = NULL,g_21 = NULL;
  t = SSLgetAnnotations(z_56);
  e_57 = t;
  t = SSL_is_string(x_56);
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_57, y_56);
  g_21 = t;
  t = SSLsetAnnotations(g_21, e_57);
  if(match_cons(t, sym__2))
    {
      b_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(b_57, c_57, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  if(match_cons(t, sym__2))
    {
      n_57 = ATgetArgument(t, 0);
      o_57 = ATgetArgument(t, 1);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_57(m_57, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm n_28 = t;
              int o_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_57(n_57, o_57, m_57, t);
                  LocalPopChoice(o_28);
                }
              else
                {
                  t = n_28;
                  t = v_57(n_57, o_57, m_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_57(m_57, t);
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,a_58 = NULL;
  ATerm q_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_58 = NULL;
      b_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_58, term_a_29);
      t = g_10(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = q_28;
      t = debug_1_0(y_7, t);
      _fail(t);
    }
  x_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(a_58, t);
  w_57 = t;
  t = x_57;
  t = fclose_0_0(t);
  t = w_57;
  return(t);
}
static ATerm h_10 (ATerm q_31, ATerm r_31, ATerm t)
{
  t = SSL_access(q_31, r_31);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_58 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_b_29;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_58 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_c_29);
      j_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_58, (ATerm) ATinsert(ATempty, term_c_29));
      t = h_10(f_58, j_58, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_10 (ATerm q_37, ATerm r_37, ATerm t)
{
  t = SSL_copy(q_37, r_37);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL;
  e_59 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_15 = NULL;
        t = e_59;
        t = o_0(t);
        r_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = r_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = r_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, f_59, r_15);
        t = i_10(f_59, r_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_59);
        LocalPopChoice(f_29);
      }
    else
      {
        t = d_29;
        {
          ATerm h_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_16 = NULL;
              t = e_59;
              t = o_0(t);
              h_16 = t;
              {
                ATerm k_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_16 = NULL;
                    i_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = i_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = i_16;
                          }
                        else
                          {
                            t = i_16;
                            if((f_59 != t))
                              {
                                _fail(t);
                              }
                            t = i_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_29;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, f_59, h_16);
              t = i_10(f_59, h_16, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_59);
              LocalPopChoice(j_29);
            }
          else
            {
              t = h_29;
              t = e_59;
              t = o_0(t);
              if((f_59 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_59);
            }
        }
      }
  }
  return(t);
}
static ATerm j_10 (ATerm p_20, ATerm q_20, ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  k_59 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
        t = o_10(p_20, q_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_29 = ATgetFirst((ATermList) t);
            j_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_29);
        t = SSL_table_put(p_20, q_20, j_59);
        t = (ATerm) ATmakeAppl(sym__3, p_20, q_20, j_59);
      }
    else
      {
        t = l_29;
        t = SSL_table_remove(p_20, q_20);
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
      }
  }
  t = k_59;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  o_59 = t;
  t = k_87(t);
  n_59 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        t = term_t_14;
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_59, term_t_14);
        t = o_10(n_59, q_59, t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_59 = ATgetFirst((ATermList) t);
      l_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_t_14;
  p_59 = t;
  t = SSL_table_put(n_59, p_59, l_59);
  t = m_59;
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm r_59 = NULL;
      r_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_59, r_59);
      t = j_10(n_59, r_59, t);
      return(t);
    }
    t = map_1_0(z_7, t);
  }
  t = o_59;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_74(t);
      t = m_74(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = m_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  v_59 = t;
  t = j_87(t);
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_59, term_t_14);
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_60 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_29 = ATgetArgument(t, 0);
            ATerm x_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_14;
        e_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_59, term_t_14);
        t = o_10(u_59, e_60, t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
  }
  w_59 = t;
  t = term_t_14;
  x_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), (ATerm) ATempty);
  y_59 = t;
  t = SSL_table_put(u_59, x_59, y_59);
  t = v_59;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_60);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = p_60;
      }
  }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  ATerm h_60 = NULL;
  static ATerm d_8 (ATerm t)
  {
    ATerm i_60 = NULL;
    i_60 = t;
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_60 = NULL,l_60 = NULL;
          t = term_u_14;
          k_60 = t;
          t = term_t_14;
          l_60 = t;
          t = term_c_30;
          t = o_10(k_60, l_60, t);
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
        if(((h_60 != NULL) && (h_60 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_60 = ATgetFirst((ATermList) t);
        {
          ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_60;
    t = map_1_0(e_8, t);
    t = i_60;
    t = end_scope_1_0(f_8, t);
    return(t);
  }
  t = begin_scope_1_0(b_8, t);
  t = restore_always_2_0(l_70, d_8, t);
  return(t);
}
static ATerm j_8 (ATerm t)
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
ATerm xtc_io_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  static ATerm i_8 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_60 = NULL;
        t = term_k_30;
        t = get_config_0_0(t);
        u_60 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_60);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = term_b_29;
      }
    t = m_70(t);
    t = copy_to_1_0(j_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(i_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  v_60 = t;
  t = term_a_15;
  t = whoami_0_0(t);
  w_60 = t;
  t = term_r_17;
  e_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_30), w_60), term_l_30);
  f_61 = t;
  t = SSL_printnl(e_61, f_61);
  t = term_e_17;
  d_61 = t;
  t = SSL_exit(d_61);
  t = v_60;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,n_61 = NULL,o_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
      t = term_a_15;
      t = n_0(t);
      r_61 = t;
      t = term_n_30;
      s_61 = t;
      t = term_o_30;
      t_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_o_30, r_61);
      t = p_10(s_61, t_61, r_61, t);
      _fail(t);
    }
  else
    {
      ATerm x_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_61 = ATgetFirst((ATermList) t);
          l_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_61 = ATgetFirst((ATermList) t);
          o_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_61;
      t = k_0(t);
      t = n_61;
      t = l_0(t);
      x_61 = t;
      t = (ATerm) ATinsert(CheckATermList(o_61), x_61);
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  if(match_string(t, "-k"))
    {
      t = a_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_62;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  b_62 = t;
  t = SSL_string_to_int(b_62);
  c_62 = t;
  t = term_p_30;
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, c_62);
  t = r_10(d_62, c_62, t);
  t = b_62;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_8, m_8, p_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm f_62 = NULL;
  f_62 = t;
  if(match_string(t, "-S"))
    {
      t = f_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_62;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  t = term_r_30;
  g_62 = t;
  t = term_e_16;
  h_62 = t;
  t = term_s_30;
  t = r_10(g_62, h_62, t);
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
static ATerm y_8 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,m_62 = NULL;
  i_62 = t;
  t = SSL_string_to_int(i_62);
  j_62 = t;
  t = term_r_30;
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, j_62);
  t = r_10(m_62, j_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_62);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  t = term_w_30;
  p_62 = t;
  t = term_a_15;
  q_62 = t;
  t = term_x_30;
  t = r_10(p_62, q_62, t);
  t = term_y_30;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_d_31;
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
            t = ArgOption_3_0(w_8, y_8, h_9, t);
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            t = Option_3_0(k_9, r_9, v_9, t);
          }
      }
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm s_62 = NULL;
  s_62 = t;
  if(match_string(t, "-o"))
    {
      t = s_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_62;
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm w_62 = NULL,z_62 = NULL;
  w_62 = t;
  t = term_g_30;
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, w_62);
  t = r_10(z_62, w_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_62);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_9, y_9, z_9, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm f_63 = NULL;
  f_63 = t;
  if(match_string(t, "-i"))
    {
      t = f_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_63;
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  g_63 = t;
  t = term_k_30;
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, g_63);
  t = r_10(h_63, g_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_63);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, m_10, q_10, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL;
  t = term_m_31;
  l_63 = t;
  t = term_a_15;
  m_63 = t;
  t = term_n_31;
  t = r_10(l_63, m_63, t);
  t = term_p_31;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  if(match_string(t, "-w"))
    {
      t = n_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = n_63;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm t_63 = NULL,x_63 = NULL,y_63 = NULL;
  t_63 = t;
  t = SSL_string_to_int(t_63);
  x_63 = t;
  t = term_a_17;
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, x_63);
  t = r_10(y_63, x_63, t);
  t = t_63;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm y_31 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = y_31;
            {
              ATerm c_32 = t;
              int e_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(s_10, u_10, v_10, t);
                  LocalPopChoice(e_32);
                }
              else
                {
                  t = c_32;
                  {
                    ATerm f_32 = t;
                    int g_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_32);
                      }
                    else
                      {
                        t = f_32;
                        {
                          ATerm j_32 = t;
                          int l_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(l_32);
                            }
                          else
                            {
                              t = j_32;
                              t = ArgOption_3_0(x_10, c_11, d_11, t);
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
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_15;
  t = whoami_0_0(t);
  z_63 = t;
  t = term_r_17;
  b_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_32), z_63);
  c_64 = t;
  t = SSL_printnl(b_64, c_64);
  t = term_e_17;
  a_64 = t;
  t = SSL_exit(a_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm y_53, ATerm z_53, ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_53, z_53);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = SSL_addr(y_53, z_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  f_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_64;
      t = q_83(t);
    }
  else
    {
      ATerm k_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_64 = ATgetFirst((ATermList) t);
          h_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_64;
      t = foldr_2_0(q_83, r_83, t);
      k_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_64, k_64);
      t = r_83(t);
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
  t = term_e_16;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm w_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(w_16, z_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_64 = NULL,o_16 = NULL,p_16 = NULL;
  t = times_0_0(t);
  p_16 = t;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16;
  t = foldr_2_0(f_11, g_11, t);
  n_64 = t;
  t = SSL_TicksToSeconds(n_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  if(match_cons(t, sym__2))
    {
      e_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_65;
        if((e_65 != t))
          {
            _fail(t);
          }
        t = d_65;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_65, f_65);
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              t = SSL_gtr(e_65, f_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm j_65 = NULL;
  j_65 = t;
  {
    ATerm z_32 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_65 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        l_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_65, term_e_17);
        t = geq_0_0(t);
        t = j_65;
        t = m_86(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = z_32;
        t = j_65;
      }
  }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,q_65 = NULL,r_65 = NULL;
  t = run_time_0_0(t);
  n_65 = t;
  t = term_a_15;
  t = whoami_0_0(t);
  o_65 = t;
  t = term_r_17;
  q_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_33), n_65), term_d_33), o_65);
  r_65 = t;
  t = SSL_printnl(q_65, r_65);
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_33), n_65), term_d_33), o_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_16;
  s_65 = t;
  t = SSL_exit(s_65);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL;
  b_66 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_66;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_66 = ATgetArgument(t, 0);
          {
            ATerm m_17 = NULL,p_21 = NULL;
            t = SSLgetAnnotations(b_66);
            m_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_66);
            p_21 = t;
            t = SSLsetAnnotations(p_21, m_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_66;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_33;
      t = get_config_0_0(t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      t = fetch_1_0(c_12, t);
    }
  t = l_90(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_66 = ATgetFirst((ATermList) t);
      f_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_66 = NULL,k_66 = NULL;
        static ATerm e_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_66)), not_null(k_66));
          return(t);
        }
        t = f_66;
        t = i_0(t);
        if(((j_66 != NULL) && (j_66 != t)))
          _fail(t);
        else
          j_66 = t;
        t = e_66;
        t = g_0(t);
        if(((k_66 != NULL) && (k_66 != t)))
          _fail(t);
        else
          k_66 = t;
        t = f_66;
        t = reverse_acc_2_0(g_0, e_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,t_21 = NULL;
  q_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_66);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_66);
  t_21 = t;
  t = SSLsetAnnotations(t_21, o_66);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm s_66 = NULL;
  s_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_66), term_p_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL;
  ATerm q_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_32;
      t = get_config_0_0(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = q_33;
      t = fetch_1_0(f_12, t);
    }
  t = term_x_33;
  t = echo_0_0(t);
  t = term_n_30;
  m_66 = t;
  t = term_o_30;
  n_66 = t;
  t = term_z_33;
  t = o_10(m_66, n_66, t);
  t = reverse_acc_2_0(_id, g_12, t);
  t = map_1_0(h_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  static ATerm p_67 (ATerm t)
  {
    ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
    m_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_67 = ATgetFirst((ATermList) t);
        o_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_34 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_17 = NULL,x_17 = NULL,v_21 = NULL;
          t = SSLgetAnnotations(m_67);
          u_17 = t;
          t = n_67;
          t = q_77(t);
          x_17 = t;
          t = (ATerm) ATinsert(CheckATermList(o_67), x_17);
          v_21 = t;
          t = SSLsetAnnotations(v_21, u_17);
          LocalPopChoice(c_34);
        }
      else
        {
          t = a_34;
          {
            ATerm g_18 = NULL,j_18 = NULL,z_21 = NULL;
            t = SSLgetAnnotations(m_67);
            g_18 = t;
            t = o_67;
            t = p_67(t);
            j_18 = t;
            t = (ATerm) ATinsert(CheckATermList(j_18), n_67);
            z_21 = t;
            t = SSLsetAnnotations(z_21, g_18);
          }
        }
    }
    return(t);
  }
  t = p_67(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  t_67 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_67;
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
            t = t_67;
          }
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = (ATerm) ATinsert(ATempty, t_67);
      }
  }
  u_67 = t;
  t = term_h_30;
  v_67 = t;
  t = SSL_printnl(v_67, u_67);
  t = t_67;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_10 (ATerm t_52, ATerm u_52, ATerm t)
{
  t = SSL_strcat(t_52, u_52);
  return(t);
}
ATerm debug_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
  z_67 = t;
  t = d_76(t);
  a_68 = t;
  t = term_r_17;
  b_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_67), a_68);
  c_68 = t;
  t = SSL_printnl(b_68, c_68);
  t = z_67;
  return(t);
}
ATerm map_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  static ATerm r_68 (ATerm t)
  {
    ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
    o_68 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_68;
      }
    else
      {
        ATerm z_18 = NULL,m_19 = NULL,n_19 = NULL,e_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_68 = ATgetFirst((ATermList) t);
            q_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_68);
        z_18 = t;
        t = p_68;
        t = g_77(t);
        m_19 = t;
        t = q_68;
        t = r_68(t);
        n_19 = t;
        t = (ATerm) ATinsert(CheckATermList(n_19), m_19);
        e_22 = t;
        t = SSLsetAnnotations(e_22, z_18);
      }
    return(t);
  }
  t = r_68(t);
  return(t);
}
static ATerm i_12 (ATerm t)
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
static ATerm j_12 (ATerm t)
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
      ATerm z_68 = NULL;
      z_68 = t;
      t = SSL_is_string(z_68);
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
            t = map_1_0(i_12, t);
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
              f_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_69 = ATgetArgument(t, 0);
                  t = g_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_69 = ATgetArgument(t, 0);
                      t = g_69;
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
                            t = debug_1_0(j_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_69 = NULL,s_69 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_69 = ATgetArgument(t, 0);
                          h_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_69;
                      t = eval_config_0_0(t);
                      o_69 = t;
                      t = h_69;
                      t = eval_config_0_0(t);
                      s_69 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_69, s_69);
                      t = n_10(o_69, s_69, t);
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
  ATerm w_69 = NULL,x_69 = NULL;
  w_69 = t;
  t = term_r_34;
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_34, w_69);
  t = o_10(x_69, w_69, t);
  {
    ATerm s_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_69 = NULL,z_69 = NULL;
        t = eval_config_0_0(t);
        y_69 = t;
        t = term_r_34;
        z_69 = t;
        t = SSL_table_put(z_69, w_69, y_69);
        t = y_69;
        LocalPopChoice(w_34);
      }
    else
      {
        t = s_34;
      }
  }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL;
  t = term_y_34;
  c_70 = t;
  t = term_a_15;
  d_70 = t;
  t = term_z_34;
  t = r_10(c_70, d_70, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_a_35;
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
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL;
  t = term_y_34;
  g_70 = t;
  t = term_a_15;
  h_70 = t;
  t = term_z_34;
  t = r_10(g_70, h_70, t);
  t = term_b_35;
  e_70 = t;
  t = term_a_15;
  f_70 = t;
  t = term_c_35;
  t = r_10(e_70, f_70, t);
  t = term_d_35;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_12, o_12, r_12, t);
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      t = Option_3_0(s_12, z_12, a_13, t);
    }
  return(t);
}
static ATerm r_10 (ATerm h_32, ATerm i_32, ATerm t)
{
  ATerm i_70 = NULL;
  t = term_r_34;
  i_70 = t;
  t = SSL_table_put(i_70, h_32, i_32);
  t = (ATerm) ATmakeAppl(sym__3, term_r_34, h_32, i_32);
  return(t);
}
static ATerm o_10 (ATerm b_22, ATerm c_22, ATerm t)
{
  t = SSL_table_get(b_22, c_22);
  return(t);
}
static ATerm p_10 (ATerm k_20, ATerm l_20, ATerm j_20, ATerm t)
{
  ATerm k_70 = NULL,n_70 = NULL,o_70 = NULL;
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  {
    ATerm k_35 = t;
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
        t = o_10(k_20, l_20, t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATempty;
      }
  }
  n_70 = t;
  t = (ATerm) ATinsert(CheckATermList(n_70), j_20);
  o_70 = t;
  t = SSL_table_put(k_20, l_20, o_70);
  t = k_70;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
      t = term_a_15;
      t = e_0(t);
      w_70 = t;
      t = term_n_30;
      x_70 = t;
      t = term_o_30;
      y_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_o_30, w_70);
      t = p_10(x_70, y_70, w_70, t);
      _fail(t);
    }
  else
    {
      ATerm b_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_70 = ATgetFirst((ATermList) t);
          v_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_70;
      t = c_0(t);
      t = term_a_15;
      t = d_0(t);
      b_71 = t;
      t = (ATerm) ATinsert(CheckATermList(v_70), b_71);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,h_22 = NULL;
  i_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_71 = ATgetFirst((ATermList) t);
      f_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_71);
  c_71 = t;
  t = d_71;
  t = p_63(t);
  g_71 = t;
  t = f_71;
  t = q_63(t);
  h_71 = t;
  t = (ATerm) ATinsert(CheckATermList(h_71), g_71);
  h_22 = t;
  t = SSLsetAnnotations(h_22, c_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,s_71 = NULL,t_71 = NULL,j_22 = NULL;
  n_71 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_35;
        t = j_92(t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
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
  t = term_r_32;
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_32, p_71);
  t = r_10(t_71, p_71, t);
  t = q_71;
  {
    static ATerm d_72 (ATerm t)
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
              t = j_92(t);
              t = Cons_2_0(_id, d_72, t);
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
    t = d_72(t);
  }
  s_71 = t;
  t = (ATerm) ATinsert(CheckATermList(s_71), (ATerm) ATmakeAppl(sym_Program_1, p_71));
  j_22 = t;
  t = SSLsetAnnotations(j_22, o_71);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm p_72 = NULL;
  p_72 = t;
  if(match_string(t, "--help"))
    {
      t = p_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_72;
        }
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL;
  t = term_l_33;
  q_72 = t;
  t = term_a_15;
  r_72 = t;
  t = term_w_35;
  t = r_10(q_72, r_72, t);
  t = term_y_35;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_z_35;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
  k_72 = t;
  t = term_n_30;
  m_72 = t;
  t = term_o_30;
  n_72 = t;
  t = (ATerm) ATempty;
  o_72 = t;
  t = SSL_table_put(m_72, n_72, o_72);
  t = k_72;
  {
    static ATerm b_13 (ATerm t)
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_92(t);
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          {
            ATerm d_36 = t;
            int e_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_13, d_13, h_13, t);
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
        ATerm y_72 = NULL;
        y_72 = t;
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_20 = NULL;
              t = y_72;
              {
                ATerm j_36 = t;
                int k_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_36);
                  }
                else
                  {
                    t = j_36;
                    t = fetch_1_0(i_13, t);
                  }
              }
              t = y_72;
              t = default_system_usage_0_0(t);
              t = term_e_16;
              e_20 = t;
              t = SSL_exit(e_20);
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              {
                ATerm i_20 = NULL;
                t = term_y_34;
                t = get_config_0_0(t);
                t = y_72;
                t = default_system_about_0_0(t);
                t = term_e_16;
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
              ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL;
              static ATerm j_13 (ATerm t)
              {
                ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,q_22 = NULL;
                e_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_73);
                c_73 = t;
                t = d_73;
                if(((i_72 != NULL) && (i_72 != t)))
                  _fail(t);
                else
                  i_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_73);
                q_22 = t;
                t = SSLsetAnnotations(q_22, c_73);
                return(t);
              }
              t = fetch_1_0(j_13, t);
              t = term_r_17;
              a_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_72)), term_n_36);
              b_73 = t;
              t = SSL_printnl(a_73, b_73);
              t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_72)), term_n_36));
              t = default_system_usage_0_0(t);
              t = term_e_17;
              z_72 = t;
              t = SSL_exit(z_72);
              LocalPopChoice(m_36);
            }
          else
            {
              t = l_36;
            }
        }
      }
  }
  j_72 = t;
  t = term_n_30;
  l_72 = t;
  t = SSL_table_destroy(l_72);
  t = j_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
  t = parse_options_1_0(n_90, t);
  j_73 = t;
  t = term_o_36;
  m_73 = t;
  t = SSL_table_create(m_73);
  t = term_o_36;
  k_73 = t;
  t = term_p_36;
  l_73 = t;
  t = SSL_table_put(k_73, l_73, j_73);
  t = j_73;
  t = p_90(t);
  {
    ATerm s_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_90, t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = s_36;
        {
          ATerm w_36 = t;
          int x_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_36);
            }
          else
            {
              t = w_36;
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
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  t = read_from_0_0(t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_73, term_e_16);
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        {
          ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
          t = term_r_17;
          t_73 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_73, term_e_16)), term_s_17);
          u_73 = t;
          t = SSL_printnl(t_73, u_73);
          t = term_e_17;
          s_73 = t;
          t = SSL_exit(s_73);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_73, term_e_16)), term_s_17);
        }
      }
  }
  r_73 = t;
  t = SSL_explode_term(r_73);
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_37 = ATgetArgument(t, 1);
        if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
          {
            q_73 = ATgetFirst((ATermList) e_37);
            {
              ATerm f_37 = (ATerm) ATgetNext((ATermList) e_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_73, term_g_37);
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
