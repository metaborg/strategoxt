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
ATerm term_l_37;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_w_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_g_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_m_34;
ATerm term_v_33;
ATerm term_t_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_31;
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
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_r_24;
ATerm term_a_20;
ATerm term_q_19;
ATerm term_r_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_r_14);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_k_16);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_16);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_k_15);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_k_15);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_t_30);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_k_15);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_k_15);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_k_15);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm topdown_1_0 (ATerm x_72 (ATerm), ATerm t);
static ATerm p_1 (ATerm w_0, ATerm t);
static ATerm q_1 (ATerm a_1, ATerm e_1, ATerm h_1, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm a_9 (ATerm k_89 (ATerm), ATerm j_33, ATerm h_33, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm d_10 (ATerm i_79 (ATerm), ATerm t_24, ATerm p_261, ATerm t);
ATerm at_suffix_1_0 (ATerm u_79 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm m_79 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm v_103 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm e_10 (ATerm p_18, ATerm q_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm b_9 (ATerm s_14, ATerm q_14, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm c_9 (ATerm k_14, ATerm o_14, ATerm l_14, ATerm t);
static ATerm d_9 (ATerm f_24, ATerm g_24, ATerm t);
static ATerm e_9 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm j_15, ATerm i_15, ATerm t);
static ATerm f_9 (ATerm e_71 (ATerm), ATerm e_15, ATerm c_15, ATerm f_15, ATerm d_15, ATerm t);
ATerm foldl_1_0 (ATerm s_85 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm j_71 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm h_9 (ATerm x_55, ATerm y_55, ATerm t);
static ATerm j_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm c_1, ATerm t_0, ATerm t);
ATerm thread_map_1_0 (ATerm e_86 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_86 (ATerm), ATerm t);
static ATerm k_9 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm t);
static ATerm q_13 (ATerm v_12, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm m_9 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm t);
static ATerm n_9 (ATerm j_56, ATerm k_56, ATerm t);
static ATerm o_9 (ATerm p_56, ATerm q_56, ATerm t);
static ATerm p_9 (ATerm p_52, ATerm q_52, ATerm l_52, ATerm t);
static ATerm q_9 (ATerm w_52, ATerm u_52, ATerm v_52, ATerm t);
static ATerm r_9 (ATerm h_52, ATerm i_52, ATerm j_52, ATerm t);
static ATerm c_23 (ATerm z_20, ATerm a_21, ATerm b_21, ATerm t);
static ATerm d_23 (ATerm q_21, ATerm s_21, ATerm t);
static ATerm e_23 (ATerm e_22, ATerm j_22, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm x_9 (ATerm y_16, ATerm x_16, ATerm t_16, ATerm v_16, ATerm s_16, ATerm t);
ATerm genzip_4_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm c_103 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_79 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_32 (ATerm v_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm FitToMax_1_0 (ATerm i_71 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm p_54 (ATerm l_45, ATerm n_45, ATerm o_45, ATerm p_45, ATerm q_45, ATerm t);
static ATerm q_54 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm m_47, ATerm t);
static ATerm r_54 (ATerm z_47, ATerm a_48, ATerm b_48, ATerm c_48, ATerm t);
static ATerm s_54 (ATerm w_49, ATerm y_49, ATerm z_49, ATerm b_50, ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm a_56 (ATerm p_55, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_10 (ATerm h_23, ATerm t);
static ATerm g_10 (ATerm f_32, ATerm g_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_58 (ATerm t_56, ATerm t);
static ATerm k_58 (ATerm b_57, ATerm c_57, ATerm h_57, ATerm t);
static ATerm l_58 (ATerm r_57, ATerm s_57, ATerm t_57, ATerm t);
static ATerm h_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_10 (ATerm w_31, ATerm x_31, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm j_10 (ATerm t_38, ATerm u_38, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm k_10 (ATerm p_20, ATerm q_20, ATerm t);
ATerm end_scope_1_0 (ATerm h_89 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm e_72 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm f_72 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_10 (ATerm r_55, ATerm s_55, ATerm t);
ATerm foldr_2_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_88 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm need_help_1_0 (ATerm n_92 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_79 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_10 (ATerm m_54, ATerm n_54, ATerm t);
ATerm debug_1_0 (ATerm w_77 (ATerm), ATerm t);
ATerm map_1_0 (ATerm z_78 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm s_10 (ATerm o_32, ATerm p_32, ATerm t);
static ATerm p_10 (ATerm b_22, ATerm c_22, ATerm t);
static ATerm q_10 (ATerm k_20, ATerm l_20, ATerm j_20, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_94 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm parse_options_1_0 (ATerm k_94 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(x_72, t);
    return(t);
  }
  t = x_72(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm p_1 (ATerm w_0, ATerm t)
{
  t = w_0;
  {
    ATerm n_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_13 = ATgetArgument(t, 0);
            ATerm r_13 = ATgetArgument(t, 1);
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
  t = term_t_13;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, w_0, term_u_13);
  t = open_file_0_0(t);
  return(t);
}
static ATerm q_1 (ATerm a_1, ATerm e_1, ATerm h_1, ATerm t)
{
  t = SSL_open_file(a_1, e_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_w_13;
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
        ATerm c_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_1(k_1, t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = c_14;
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
static ATerm a_9 (ATerm k_89 (ATerm), ATerm j_33, ATerm h_33, ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
  x_1 = t;
  t = k_89(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_1, j_33, h_33);
  t = q_10(r_1, j_33, h_33, t);
  {
    ATerm n_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL;
        t = term_r_14;
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_1, term_r_14);
        t = p_10(r_1, b_2, t);
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
      t_1 = ATgetFirst((ATermList) t);
      u_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_14;
  y_1 = t;
  t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATinsert(CheckATermList(t_1), j_33));
  a_2 = t;
  t = SSL_table_put(r_1, y_1, a_2);
  t = x_1;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_2 = NULL;
  ATerm t_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL,f_0 = NULL;
      i_2 = t;
      t = term_w_14;
      f_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_2, term_w_14);
      t = o_10(i_2, f_0, t);
      d_2 = t;
      t = SSL_mkstemp(d_2);
      LocalPopChoice(v_14);
    }
  else
    {
      t = t_14;
      {
        ATerm j_2 = NULL;
        t = term_x_14;
        j_2 = t;
        t = SSL_perror(j_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,o_2 = NULL,t_2 = NULL,v_2 = NULL;
  t = P__tmpdir_0_0(t);
  t_2 = t;
  t = term_h_15;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_h_15);
  t = o_10(t_2, v_2, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_k_15;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_k_15);
  t = a_9(h_0, m_2, o_2, t);
  t = SSL_close(l_2);
  t = m_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  z_2 = t;
  t = xtc_new_file_0_0(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_3, term_u_13);
  t = open_file_0_0(t);
  t = z_2;
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm m_3 = NULL;
      m_3 = t;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 = NULL,p_0 = NULL;
            t = SSL_is_string(m_3);
            m_0 = t;
            t = (ATerm) ATinsert(ATempty, m_0);
            p_0 = t;
            t = SSL_print(a_3, p_0);
            t = m_0;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            t = m_3;
          }
      }
      return(t);
    }
    t = topdown_1_0(j_0, t);
  }
  t = SSL_close_file(a_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_3);
  return(t);
}
static ATerm d_10 (ATerm i_79 (ATerm), ATerm t_24, ATerm p_261, ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    ATerm q_37 = NULL;
    q_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_24, q_37);
    t = i_79(t);
    t = q_37;
    return(t);
  }
  t = p_261;
  t = SRTS_one(q_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  static ATerm r_38 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_79(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,t_6 = NULL,a_7 = NULL,f_2 = NULL;
          m_38 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_38 = ATgetFirst((ATermList) t);
              o_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_38);
          t_6 = t;
          t = o_38;
          t = r_38(t);
          a_7 = t;
          t = (ATerm) ATinsert(CheckATermList(a_7), n_38);
          f_2 = t;
          t = SSLsetAnnotations(f_2, t_6);
        }
      }
    return(t);
  }
  t = r_38(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  static ATerm r_0 (ATerm t)
  {
    ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,k_2 = NULL,h_2 = NULL;
    g_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_39 = ATgetFirst((ATermList) t);
        d_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_39);
    b_39 = t;
    t = c_39;
    t = m_79(t);
    e_39 = t;
    t = (ATerm) ATinsert(CheckATermList(d_39), e_39);
    h_2 = t;
    t = SSLsetAnnotations(h_2, b_39);
    f_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_38 = ATgetFirst((ATermList) t);
        a_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_39);
    y_38 = t;
    t = a_39;
    if(((w_38 != NULL) && (w_38 != t)))
      _fail(t);
    else
      w_38 = t;
    t = (ATerm) ATinsert(CheckATermList(a_39), z_38);
    k_2 = t;
    t = SSLsetAnnotations(k_2, y_38);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_0, t);
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, not_null(w_38));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,w_39 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(v_103, t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm l_39 = NULL;
        l_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_39, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_39;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_15 = ATgetFirst((ATermList) t);
              ATerm t_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_39;
          t = list_tokenize_1_0(v_103, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_15 = ATgetFirst((ATermList) t);
          ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, t_39);
        }
      else
        {
          ATerm e_40 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_16 = ATgetFirst((ATermList) t);
              ATerm e_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_39;
          t = list_tokenize_1_0(v_103, t);
          e_40 = t;
          t = (ATerm) ATinsert(CheckATermList(e_40), t_39);
        }
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm o_40 = NULL;
  if(match_cons(t, sym__2))
    {
      o_40 = ATgetArgument(t, 0);
      if((o_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  t = SSL_implode_string(p_40);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,m_40 = NULL,i_3 = NULL;
  m_40 = t;
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      j_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_40);
  h_40 = t;
  t = SSL_explode_string(j_40);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_40, k_40);
  i_3 = t;
  t = SSLsetAnnotations(i_3, h_40);
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_40;
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm n_40 = NULL;
      n_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_40, f_40);
      t = d_10(u_0, n_40, f_40, t);
      return(t);
    }
    t = list_tokenize_1_0(s_0, t);
  }
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm e_10 (ATerm p_18, ATerm q_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_f_16), p_18);
  t = string_tokenize_0_0(t);
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_41 = NULL,b_41 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_k_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_41 = ATgetFirst((ATermList) t);
                b_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_41;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(a_41);
          }
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        {
          ATerm c_41 = NULL,d_41 = NULL;
          t = last_0_0(t);
          d_41 = t;
          t = SSL_strlen(d_41);
          c_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_41, q_18);
          t = h_9(c_41, q_18, t);
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
      ATerm f_41 = NULL,g_41 = NULL;
      if(match_cons(t, sym__2))
        {
          f_41 = ATgetArgument(t, 0);
          g_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_41, g_41);
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(f_41, g_41);
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            t = SSL_gtr(f_41, g_41);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, f_41, g_41);
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
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_16;
      t = get_config_0_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      t = term_z_16;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_37 = ATgetFirst((ATermList) t);
      h_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_37;
    }
  else
    {
      t = h_37;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm b_9 (ATerm s_14, ATerm q_14, ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  t = s_14;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(z_0, t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = term_k_16;
      }
  }
  w_3 = t;
  t = term_c_17;
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, term_c_17);
  t = l_10(w_3, x_3, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_f_16);
  t = copy_char_0_0(t);
  p_3 = t;
  t = s_14;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(f_1, t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = term_k_16;
      }
  }
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, term_j_17);
  t = copy_char_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_14, term_j_17);
  t = copy_char_0_0(t);
  r_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_3), q_3), p_3);
  t_3 = t;
  t = SSL_concat_strings(t_3);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = SSL_explode_term(d_4);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_17 = ATgetArgument(t, 1);
        if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
          {
            c_4 = ATgetFirst((ATermList) m_17);
            {
              ATerm n_17 = (ATerm) ATgetNext((ATermList) m_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_4;
  return(t);
}
static ATerm c_9 (ATerm k_14, ATerm o_14, ATerm l_14, ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_14, l_14);
  t = b_9(k_14, l_14, t);
  z_3 = t;
  t = o_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14;
  t = map_1_0(g_1, t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_3, b_4);
  t = d_9(z_3, b_4, t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, y_3);
  return(t);
}
static ATerm d_9 (ATerm f_24, ATerm g_24, ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  t = g_24;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_24;
    }
  else
    {
      ATerm d_1 = NULL,l_1 = NULL,o_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_4 = ATgetFirst((ATermList) t);
          z_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_24);
      d_1 = t;
      t = z_4;
      {
        static ATerm w_1 (ATerm t)
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_1 = NULL;
              o_1 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_1;
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              {
                ATerm s_1 = NULL;
                t = Cons_2_0(_id, w_1, t);
                s_1 = t;
                t = (ATerm) ATinsert(CheckATermList(s_1), f_24);
              }
            }
          return(t);
        }
        t = w_1(t);
      }
      l_1 = t;
      t = (ATerm) ATinsert(CheckATermList(l_1), y_4);
      o_3 = t;
      t = SSLsetAnnotations(o_3, d_1);
    }
  return(t);
}
static ATerm e_9 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm j_15, ATerm i_15, ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL;
  t = term_k_15;
  t = g_71(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_15, j_5);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          ATerm k_5 = NULL,m_5 = NULL,w_5 = NULL;
          t = term_t_17;
          m_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_15, j_5)), term_u_17);
          w_5 = t;
          t = SSL_printnl(m_5, w_5);
          t = term_c_17;
          k_5 = t;
          t = SSL_exit(k_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_15, j_5)), term_u_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_k_15;
  t = f_71(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, h_5);
  t = l_10(e_5, h_5, t);
  g_5 = t;
  t = (ATerm) ATinsert(CheckATermList(i_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_5), g_5));
  return(t);
}
static ATerm f_9 (ATerm e_71 (ATerm), ATerm e_15, ATerm c_15, ATerm f_15, ATerm d_15, ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,f_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        {
          ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
          t = term_t_17;
          j_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_15, f_15)), term_u_17);
          k_6 = t;
          t = SSL_printnl(j_6, k_6);
          t = term_c_17;
          i_6 = t;
          t = SSL_exit(i_6);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_15, f_15)), term_u_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_k_15;
  t = get_width_0_0(t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, f_6);
  t = leq_0_0(t);
  t = term_k_15;
  t = e_71(t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, a_6);
  t = l_10(y_5, a_6, t);
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_15), x_5), z_5));
  return(t);
}
ATerm foldl_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  static ATerm e_7 (ATerm t)
  {
    ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL;
    if(match_cons(t, sym__2))
      {
        q_6 = ATgetArgument(t, 0);
        u_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_6;
      }
    else
      {
        ATerm d_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_6 = ATgetFirst((ATermList) t);
            s_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_6, u_6);
        t = s_85(t);
        d_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_6, d_7);
        t = e_7(t);
      }
    return(t);
  }
  t = e_7(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  ATerm f_7 = NULL;
  static ATerm i_1 (ATerm t)
  {
    ATerm g_7 = NULL,h_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL,n_4 = NULL;
    n_7 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        h_7 = ATgetArgument(t, 0);
        k_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_7);
    g_7 = t;
    t = h_7;
    t = j_71(t);
    m_7 = t;
    t = k_7;
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, m_7, k_7);
    n_4 = t;
    t = SSLsetAnnotations(n_4, g_7);
    return(t);
  }
  t = fetch_1_0(i_1, t);
  t = SSL_string_to_int(not_null(f_7));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm o_7 = NULL;
  t = copy_0_0(t);
  o_7 = t;
  t = SSL_implode_string(o_7);
  return(t);
}
static ATerm h_9 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_55, y_55);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      t = SSL_subtr(x_55, y_55);
    }
  return(t);
}
static ATerm j_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm c_1, ATerm t_0, ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_0, t_0);
  t = v_0(t);
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_1, p_7);
  t = b_1(t);
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_7), r_7), q_7);
  return(t);
}
ATerm thread_map_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  static ATerm m_8 (ATerm t)
  {
    ATerm x_7 = NULL,z_7 = NULL,a_8 = NULL,c_8 = NULL,d_8 = NULL;
    a_8 = t;
    if(match_cons(t, sym__2))
      {
        c_8 = ATgetArgument(t, 0);
        d_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = c_8;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_7 = ATgetFirst((ATermList) t);
        z_7 = (ATerm) ATgetNext((ATermList) t);
        t = a_8;
        t = j_9(e_86, m_8, x_7, z_7, d_8, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_8);
      }
    return(t);
  }
  t = m_8(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm a_18 = t;
  if((PushChoice() == 0))
    {
      ATerm y_9 = NULL,c_10 = NULL,m_10 = NULL;
      y_9 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_9;
        }
      else
        {
          ATerm r_2 = NULL,p_4 = NULL;
          if(match_cons(t, sym_H_2))
            {
              c_10 = ATgetArgument(t, 0);
              m_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_9);
          r_2 = t;
          t = c_10;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_10;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, c_10, m_10);
          p_4 = t;
          t = SSLsetAnnotations(p_4, r_2);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_18;
    }
  return(t);
}
ATerm filter_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,m_11 = NULL,p_11 = NULL;
  j_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_11 = ATgetFirst((ATermList) t);
          p_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 = NULL,e_4 = NULL,f_4 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(j_11);
            g_3 = t;
            t = m_11;
            t = r_86(t);
            e_4 = t;
            t = p_11;
            t = filter_1_0(r_86, t);
            f_4 = t;
            t = (ATerm) ATinsert(CheckATermList(f_4), e_4);
            r_4 = t;
            t = SSLsetAnnotations(r_4, g_3);
            LocalPopChoice(d_18);
          }
        else
          {
            t = b_18;
            t = p_11;
            t = filter_1_0(r_86, t);
          }
      }
    }
  return(t);
}
static ATerm k_9 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm t)
{
  ATerm v_11 = NULL,y_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,t_4 = NULL;
  t = b_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_11 = ATgetFirst((ATermList) t);
      z_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_11, z_15);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm d_12 = NULL,f_12 = NULL,g_12 = NULL;
          t = term_t_17;
          f_12 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_11, z_15)), term_u_17);
          g_12 = t;
          t = SSL_printnl(f_12, g_12);
          t = term_c_17;
          d_12 = t;
          t = SSL_exit(d_12);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_11, z_15)), term_u_17);
        }
      }
  }
  b_12 = t;
  t = z_11;
  {
    static ATerm j_1 (ATerm t)
    {
      ATerm h_12 = NULL;
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_12, a_16);
      {
        ATerm i_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = i_18;
            {
              ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
              t = term_t_17;
              j_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_12, a_16)), term_u_17);
              k_12 = t;
              t = SSL_printnl(j_12, k_12);
              t = term_c_17;
              i_12 = t;
              t = SSL_exit(i_12);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_12, a_16)), term_u_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(j_1, t);
  }
  c_12 = t;
  t = (ATerm) ATinsert(CheckATermList(c_12), b_12);
  t_4 = t;
  t = SSLsetAnnotations(t_4, v_11);
  return(t);
}
static ATerm q_13 (ATerm v_12, ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,d_13 = NULL,f_13 = NULL,i_13 = NULL,k_13 = NULL,l_13 = NULL,v_4 = NULL;
  t = SSL_explode_term(v_12);
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_13 = ATgetFirst((ATermList) t);
      i_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_12);
  d_13 = t;
  t = i_13;
  t = Cons_2_0(v_1, z_1, t);
  k_13 = t;
  t = (ATerm) ATinsert(CheckATermList(k_13), f_13);
  v_4 = t;
  t = SSLsetAnnotations(v_4, d_13);
  l_13 = t;
  t = SSL_mkterm(w_12, l_13);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL;
      m_13 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_13;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      t = Cons_2_0(c_2, e_2, t);
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
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
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm o_18 = t;
  if((PushChoice() == 0))
    {
      ATerm p_13 = NULL;
      p_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_13;
        }
      else
        {
          t = q_13(p_13, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      f_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, f_14);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_18;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_14 = ATgetFirst((ATermList) t);
      j_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_14, j_14);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm u_14 = NULL,b_15 = NULL,s_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym__2))
        {
          u_14 = ATgetArgument(s_18, 0);
          b_15 = ATgetArgument(s_18, 1);
        }
      else
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(match_cons(t_18, sym__2))
          {
            s_15 = ATgetArgument(t_18, 0);
            y_15 = ATgetArgument(t_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_15), u_14), (ATerm) ATinsert(CheckATermList(y_15), b_15));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(g_2, t);
      t = (ATerm) ATempty;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm s_13 = NULL,v_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL,b_5 = NULL;
        t = map_1_0(n_2, t);
        t = genzip_4_0(p_2, q_2, s_2, _id, t);
        d_14 = t;
        if(match_cons(t, sym__2))
          {
            z_13 = ATgetArgument(t, 0);
            a_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_14);
        y_13 = t;
        t = a_14;
        t = matrix_transpose_0_0(t);
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, b_14);
        b_5 = t;
        t = SSLsetAnnotations(b_5, y_13);
        if(match_cons(t, sym__2))
          {
            s_13 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_13), s_13);
      }
    }
  return(t);
}
static ATerm m_9 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm d_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, d_52, e_52, f_52);
  t = q_9(d_52, e_52, f_52, t);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, e_52);
  t = o_10(d_16, e_52, t);
  return(t);
}
static ATerm n_9 (ATerm j_56, ATerm k_56, ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(j_56, k_56);
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = SSL_divr(j_56, k_56);
    }
  return(t);
}
static ATerm o_9 (ATerm p_56, ATerm q_56, ATerm t)
{
  t = SSL_mod(p_56, q_56);
  return(t);
}
static ATerm p_9 (ATerm p_52, ATerm q_52, ATerm l_52, ATerm t)
{
  ATerm g_16 = NULL,r_16 = NULL,l_17 = NULL,c_18 = NULL,j_18 = NULL,k_18 = NULL,u_18 = NULL,w_18 = NULL,x_18 = NULL;
  t = SSL_strlen(q_52);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_52, c_18);
  t = h_9(l_52, c_18, t);
  g_16 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        t = term_q_19;
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_16, term_q_19);
        t = o_9(g_16, y_18, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_16;
        LocalPopChoice(p_19);
        {
          ATerm z_18 = NULL,a_19 = NULL;
          t = term_q_19;
          a_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_16, term_q_19);
          t = n_9(g_16, a_19, t);
          z_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_18, z_18);
        }
      }
    else
      {
        t = o_19;
        {
          ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,r_8 = NULL;
          t = term_c_17;
          e_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_16, term_c_17);
          t = h_9(g_16, e_19, t);
          c_19 = t;
          t = term_q_19;
          d_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_19, term_q_19);
          t = n_9(c_19, d_19, t);
          b_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_19, b_19);
          k_19 = t;
          if(match_cons(t, sym__2))
            {
              ATerm t_19 = ATgetArgument(t, 0);
              ATerm w_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_19);
          f_19 = t;
          t = term_c_17;
          j_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_19, term_c_17);
          t = l_10(b_19, j_19, t);
          i_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_19, b_19);
          r_8 = t;
          t = SSLsetAnnotations(r_8, f_19);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_18, r_16);
  t = l_10(c_18, r_16, t);
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_52, q_52, w_18);
  t = q_9(p_52, q_52, w_18, t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_18, j_18);
  t = l_10(c_18, j_18, t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_52, q_52, u_18);
  t = q_9(p_52, q_52, u_18, t);
  k_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_18), q_52), l_17);
  x_18 = t;
  t = SSL_concat_strings(x_18);
  return(t);
}
static ATerm q_9 (ATerm w_52, ATerm u_52, ATerm v_52, ATerm t)
{
  ATerm r_19 = NULL;
  t = SSL_strlen(u_52);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_52, r_19);
  t = h_9(v_52, r_19, t);
  {
    ATerm x_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL;
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_19, term_k_16);
        t = geq_0_0(t);
        t = s_19;
        LocalPopChoice(z_19);
        {
          ATerm u_19 = NULL;
          u_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_19, w_52);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_19;
        t = term_a_20;
      }
  }
  return(t);
}
static ATerm r_9 (ATerm h_52, ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm v_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, h_52, i_52, j_52);
  t = q_9(h_52, i_52, j_52, t);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_52, v_19);
  t = o_10(i_52, v_19, t);
  return(t);
}
static ATerm c_23 (ATerm z_20, ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,l_21 = NULL,p_21 = NULL;
  t = term_c_17;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_20, term_c_17);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(z_20, p_21);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = SSL_gtr(z_20, p_21);
      }
  }
  t = a_21;
  if(match_cons(t, sym__3))
    {
      i_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
      l_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_9(i_21, j_21, l_21, t);
  return(t);
}
static ATerm d_23 (ATerm q_21, ATerm s_21, ATerm t)
{
  ATerm x_21 = NULL,a_22 = NULL,d_22 = NULL;
  t = q_21;
  if(match_cons(t, sym__3))
    {
      x_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
      d_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_9(x_21, a_22, d_22, t);
  return(t);
}
static ATerm e_23 (ATerm e_22, ATerm j_22, ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,o_22 = NULL;
  t = e_22;
  if(match_cons(t, sym__3))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
      o_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_9(l_22, m_22, o_22, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm q_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,z_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym__3))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      z_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_22;
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
        t = z_22;
        {
          ATerm i_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm n_20 = ATgetArgument(t, 0);
                  q_22 = ATgetArgument(t, 1);
                  {
                    ATerm o_20 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(m_20);
              t = t_22;
              if(match_int(t, 1))
                {
                  ATerm r_20 = t;
                  int s_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = c_23(t_22, z_22, s_22, t);
                      LocalPopChoice(s_20);
                    }
                  else
                    {
                      t = r_20;
                      t = q_22;
                    }
                }
              else
                {
                  t = c_23(t_22, z_22, s_22, t);
                }
            }
          else
            {
              t = i_20;
              t = t_22;
              t = c_23(t_22, z_22, s_22, t);
            }
        }
      }
    else
      {
        t = f_20;
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
              t = t_22;
              t = d_23(z_22, s_22, t);
            }
          else
            {
              t = t_20;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm x_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_22;
              t = e_23(z_22, s_22, t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm y_20 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL,t_23 = NULL,u_23 = NULL,y_23 = NULL,u_8 = NULL;
      y_23 = t;
      if(match_cons(t, sym__2))
        {
          t_23 = ATgetArgument(t, 0);
          u_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_23);
      r_23 = t;
      t = t_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_23;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_21 = ATgetFirst((ATermList) t);
              ATerm e_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_23;
        }
      t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
      u_8 = t;
      t = SSLsetAnnotations(u_8, r_23);
      LocalPopChoice(c_21);
      t = conc_0_0(t);
    }
  else
    {
      t = y_20;
      {
        ATerm e_24 = NULL,h_24 = NULL;
        if(match_cons(t, sym__2))
          {
            e_24 = ATgetArgument(t, 0);
            h_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_24), e_24);
      }
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_24 = NULL;
      i_24 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_24;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_21 = ATgetFirst((ATermList) t);
              ATerm m_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_24;
        }
      LocalPopChoice(h_21);
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
  t = foldr_3_0(u_2, w_2, x_2, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_18;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm g_26 = NULL,j_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_26 = ATgetFirst((ATermList) t);
      j_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_26, j_26);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm l_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_21 = ATgetArgument(t, 0);
      if(match_cons(r_21, sym__2))
        {
          l_26 = ATgetArgument(r_21, 0);
          q_26 = ATgetArgument(r_21, 1);
        }
      else
        _fail(t);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(match_cons(t_21, sym__2))
          {
            r_26 = ATgetArgument(t_21, 0);
            s_26 = ATgetArgument(t_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_26), l_26), (ATerm) ATinsert(CheckATermList(s_26), q_26));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm u_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_26 = NULL;
      t = flatten_list_0_0(t);
      u_26 = t;
      t = SSL_concat_strings(u_26);
      LocalPopChoice(w_21);
    }
  else
    {
      t = u_21;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm z_21 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 = NULL,l_5 = NULL;
      if(match_cons(t, sym__2))
        {
          f_5 = ATgetArgument(t, 0);
          l_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_5, l_5);
      {
        ATerm i_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(f_5, l_5);
            LocalPopChoice(k_22);
          }
        else
          {
            t = i_22;
            t = SSL_gtr(f_5, l_5);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, f_5, l_5);
      LocalPopChoice(h_22);
      {
        ATerm n_5 = NULL,o_5 = NULL;
        o_5 = t;
        t = SSL_explode_term(o_5);
        if(match_cons(t, sym__2))
          {
            ATerm p_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_22 = ATgetArgument(t, 1);
              if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
                {
                  n_5 = ATgetFirst((ATermList) r_22);
                  {
                    ATerm v_22 = (ATerm) ATgetNext((ATermList) r_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_5;
      }
    }
  else
    {
      t = z_21;
      {
        ATerm p_5 = NULL,q_5 = NULL;
        q_5 = t;
        t = SSL_explode_term(q_5);
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_22 = ATgetArgument(t, 1);
              if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
                {
                  ATerm a_23 = ATgetFirst((ATermList) y_22);
                  ATerm f_23 = (ATerm) ATgetNext((ATermList) y_22);
                  if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                    {
                      p_5 = ATgetFirst((ATermList) f_23);
                      {
                        ATerm i_23 = (ATerm) ATgetNext((ATermList) f_23);
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
        t = p_5;
      }
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm x_9 (ATerm y_16, ATerm x_16, ATerm t_16, ATerm v_16, ATerm s_16, ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,s_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,i_9 = NULL,l_4 = NULL,x_4 = NULL;
  t = t_16;
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm z_25 = NULL;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, v_16);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
              t = term_t_17;
              b_26 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_25, v_16)), term_u_17);
              c_26 = t;
              t = SSL_printnl(b_26, c_26);
              t = term_c_17;
              a_26 = t;
              t = SSL_exit(a_26);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_25, v_16)), term_u_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(y_2, t);
  }
  t = genzip_4_0(b_3, c_3, d_3, _id, t);
  y_25 = t;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  s_25 = t;
  t = u_25;
  t = map_1_0(e_3, t);
  w_25 = t;
  t = v_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_23 = ATgetFirst((ATermList) t);
      x_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_4 = ATgetFirst((ATermList) t);
      {
        ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_4, l_4);
  t = foldl_1_0(f_3, t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_25, x_25);
  i_9 = t;
  t = SSLsetAnnotations(i_9, s_25);
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_25, v_16);
  t = h_9(a_25, v_16, t);
  c_25 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_27 = NULL;
        t = term_c_17;
        g_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_c_17);
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_16, g_27);
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              t = SSL_gtr(x_16, g_27);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_c_17);
        LocalPopChoice(o_23);
        {
          ATerm h_27 = NULL,j_27 = NULL;
          t = y_16;
          if(match_cons(t, sym_AC_1))
            {
              j_27 = ATgetArgument(t, 0);
              t = j_27;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  j_27 = ATgetArgument(t, 0);
                  t = j_27;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      j_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_27;
                }
            }
          {
            ATerm s_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(h_3, t);
                LocalPopChoice(v_23);
              }
            else
              {
                t = s_23;
                t = term_c_17;
              }
          }
          h_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_27, term_j_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = n_23;
        t = term_a_20;
      }
  }
  d_25 = t;
  t = b_25;
  {
    static ATerm j_3 (ATerm t)
    {
      ATerm o_27 = NULL,p_27 = NULL;
      p_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_16, y_16, (ATerm) ATmakeAppl(sym__3, term_j_17, p_27, c_25));
      t = align_column_0_0(t);
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_27, d_25);
      t = o_10(o_27, d_25, t);
      return(t);
    }
    t = map_1_0(j_3, t);
  }
  g_25 = t;
  t = SSL_strlen(d_25);
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, a_25);
  t = l_10(i_25, a_25, t);
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_25, (ATerm) ATinsert(CheckATermList(s_16), g_25));
  return(t);
}
ATerm genzip_4_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t)
{
  static ATerm e_28 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_80(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,w_27 = NULL,y_27 = NULL,d_28 = NULL,t_9 = NULL;
          t = w_80(t);
          d_28 = t;
          if(match_cons(t, sym__2))
            {
              t_27 = ATgetArgument(t, 0);
              u_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_28);
          s_27 = t;
          t = t_27;
          t = y_80(t);
          w_27 = t;
          t = u_27;
          t = e_28(t);
          y_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_27, y_27);
          t_9 = t;
          t = SSLsetAnnotations(t_9, s_27);
          t = x_80(t);
        }
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm i_28 = NULL;
  static ATerm z_28 (ATerm t)
  {
    ATerm k_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
    if(match_cons(t, sym__2))
      {
        k_28 = ATgetArgument(t, 0);
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
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,y_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_28 = ATgetFirst((ATermList) t);
            o_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_28, n_28);
        t = c_103(t);
        u_28 = t;
        t = term_c_17;
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_28, term_c_17);
        t = l_10(k_28, y_28, t);
        w_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_28, o_28);
        t = z_28(t);
        v_28 = t;
        t = (ATerm) ATinsert(CheckATermList(v_28), u_28);
      }
    return(t);
  }
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_17, i_28);
  t = z_28(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_29;
      t = p_85(t);
    }
  else
    {
      ATerm g_29 = NULL,h_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_29 = ATgetFirst((ATermList) t);
          d_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_29;
      t = r_85(t);
      g_29 = t;
      t = d_29;
      t = foldr_3_0(p_85, q_85, r_85, t);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
      t = q_85(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  static ATerm n_31 (ATerm t)
  {
    ATerm h_31 = NULL,i_31 = NULL,m_31 = NULL;
    m_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_31 = ATgetFirst((ATermList) t);
        i_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_5 = NULL,c_6 = NULL,x_10 = NULL;
          t = SSLgetAnnotations(m_31);
          u_5 = t;
          t = i_31;
          t = n_31(t);
          c_6 = t;
          t = (ATerm) ATinsert(CheckATermList(c_6), h_31);
          x_10 = t;
          t = SSLsetAnnotations(x_10, u_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_31;
        t = q_79(t);
      }
    return(t);
  }
  t = n_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,x_29 = NULL;
  k_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_29;
    }
  else
    {
      static ATerm k_3 (ATerm t)
      {
        t = not_null(x_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_29 = ATgetFirst((ATermList) t);
          if(((x_29 != NULL) && (x_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_29;
      t = at_end_1_0(k_3, t);
    }
  return(t);
}
static ATerm t_32 (ATerm v_31, ATerm t)
{
  ATerm y_31 = NULL;
  t = SSL_explode_term(v_31);
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_31;
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
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_3 (ATerm t)
            {
              t = l_32;
              return(t);
            }
            t = k_32;
            t = at_end_1_0(l_3, t);
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = t_32(m_32, t);
          }
      }
    }
  else
    {
      t = t_32(m_32, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  static ATerm u_32 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_77(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = b_77(t);
        t = u_32(t);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm for_3_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t)
{
  t = d_77(t);
  t = while_not_2_0(e_77, f_77, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      v_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_32, w_32, (ATerm) ATempty);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm m_33 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if(((ATgetType(j_24) != AT_INT) || (ATgetInt((ATermInt) j_24) != 0)))
        _fail(t);
      {
        ATerm k_24 = ATgetArgument(t, 1);
      }
      m_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_33;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,u_33 = NULL;
  if(match_cons(t, sym__3))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
      p_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_33, term_c_17);
  t = geq_0_0(t);
  t = term_c_17;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_33, term_c_17);
  t = h_9(n_33, u_33, t);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_33, o_33, (ATerm) ATinsert(CheckATermList(p_33), o_33));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(n_3, s_3, g_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(e_34, f_34, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm i_71 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,c_34 = NULL;
  z_33 = t;
  t = foldr_3_0(h_4, i_4, j_4, t);
  w_33 = t;
  t = term_k_15;
  t = i_71(t);
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, w_33);
  t = h_9(c_34, w_33, t);
  x_33 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL;
        t = term_k_16;
        g_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, term_k_16);
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_33, g_34);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = SSL_gtr(x_33, g_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_33, (ATerm) ATempty);
        t = copy_0_0(t);
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, y_33);
        t = conc_0_0(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = z_33;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              {
                ATerm n_34 = NULL,r_34 = NULL,u_34 = NULL;
                t = term_t_17;
                r_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, z_33), term_r_24);
                u_34 = t;
                t = SSL_printnl(r_34, u_34);
                t = term_c_17;
                n_34 = t;
                t = SSL_exit(n_34);
                t = (ATerm) ATinsert(ATinsert(ATempty, z_33), term_r_24);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_24 = t;
  if((PushChoice() == 0))
    {
      ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,z_10 = NULL;
      a_37 = t;
      if(match_cons(t, sym_R_2))
        {
          y_36 = ATgetArgument(t, 0);
          z_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_37);
      x_36 = t;
      t = z_36;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, y_36, z_36);
      z_10 = t;
      t = SSLsetAnnotations(z_10, x_36);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_24;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_35, (ATerm) ATempty);
  {
    static ATerm b_37 (ATerm t)
    {
      ATerm e_35 = NULL,f_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,m_35 = NULL;
      if(match_cons(t, sym__2))
        {
          h_35 = ATgetArgument(t, 0);
          m_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_35;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm v_35 = NULL;
          t = m_35;
          t = reverse_acc_2_0(_id, k_4, t);
          v_35 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, v_35));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_35 = ATgetFirst((ATermList) t);
              j_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_35;
          if(match_cons(t, sym_R_2))
            {
              e_35 = ATgetArgument(t, 0);
              f_35 = ATgetArgument(t, 1);
              {
                ATerm u_24 = t;
                int v_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_36 = NULL,g_36 = NULL;
                    t = m_35;
                    t = reverse_acc_2_0(_id, m_4, t);
                    f_36 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_35, (ATerm) ATempty);
                    t = b_37(t);
                    g_36 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(g_36), (ATerm) ATmakeAppl(sym_R_2, e_35, f_35)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, f_36));
                    LocalPopChoice(v_24);
                  }
                else
                  {
                    t = u_24;
                    t = (ATerm) ATmakeAppl(sym__2, j_35, (ATerm) ATinsert(CheckATermList(m_35), i_35));
                    t = b_37(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, j_35, (ATerm) ATinsert(CheckATermList(m_35), i_35));
              t = b_37(t);
            }
        }
      return(t);
    }
    t = b_37(t);
  }
  t = filter_1_0(o_4, t);
  return(t);
}
static ATerm p_54 (ATerm l_45, ATerm n_45, ATerm o_45, ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,x_45 = NULL,z_45 = NULL,d_46 = NULL;
  t = o_45;
  t = construct_rows_0_0(t);
  t = map_1_0(q_4, t);
  {
    static ATerm s_4 (ATerm t)
    {
      static ATerm u_4 (ATerm t)
      {
        t = l_45;
        t = foldr_3_0(w_4, a_5, c_5, t);
        return(t);
      }
      t = FitToMax_1_0(u_4, t);
      return(t);
    }
    t = map_1_0(s_4, t);
  }
  t = matrix_transpose_0_0(t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_with_index_1_0(_id, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, t_45);
  t = genzip_4_0(s_5, t_5, v_5, _id, t);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_45, (ATerm) ATmakeAppl(sym__2, p_45, (ATerm) ATempty));
  t = foldl_1_0(b_6, t);
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_45;
  t = reverse_acc_2_0(_id, d_6, t);
  t = matrix_transpose_0_0(t);
  {
    static ATerm e_6 (ATerm t)
    {
      ATerm g_47 = NULL;
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_47, z_45);
      return(t);
    }
    t = map_1_0(e_6, t);
  }
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, d_46, p_45);
  t = c_9(n_45, d_46, p_45, t);
  return(t);
}
static ATerm q_54 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm m_47, ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,x_47 = NULL;
  t = h_47;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_6, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = term_k_16;
      }
  }
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_47, x_47);
  t = l_10(j_47, x_47, t);
  p_47 = t;
  t = i_47;
  t = filter_1_0(is_real_vbox_0_0, t);
  o_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_47);
    }
  else
    {
      ATerm y_47 = NULL;
      t = (ATerm) ATmakeAppl(sym__3, j_47, p_47, o_47);
      t = k_9(j_47, p_47, o_47, t);
      y_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_47, y_47, j_47);
      t = c_9(h_47, y_47, j_47, t);
    }
  return(t);
}
static ATerm r_54 (ATerm z_47, ATerm a_48, ATerm b_48, ATerm c_48, ATerm t)
{
  ATerm f_48 = NULL,i_48 = NULL,j_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,t_48 = NULL,q_49 = NULL,r_49 = NULL,c_11 = NULL;
  t = z_47;
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
        t = term_c_17;
      }
  }
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_48, term_j_17);
  t = copy_char_0_0(t);
  i_48 = t;
  t = SSL_strlen(i_48);
  j_48 = t;
  t = a_48;
  t = filter_1_0(is_real_hbox_0_0, t);
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_48, b_48);
  {
    static ATerm l_6 (ATerm t)
    {
      ATerm x_48 = NULL,y_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,b_11 = NULL;
      ATerm e_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_0_0(t);
          LocalPopChoice(f_25);
        }
      else
        {
          t = e_25;
          {
            ATerm i_49 = NULL,b_8 = NULL,g_8 = NULL,h_8 = NULL;
            i_49 = t;
            t = term_t_17;
            g_8 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, i_49), term_u_17);
            h_8 = t;
            t = SSL_printnl(g_8, h_8);
            t = term_c_17;
            b_8 = t;
            t = SSL_exit(b_8);
            t = (ATerm) ATinsert(ATinsert(ATempty, i_49), term_u_17);
          }
        }
      c_49 = t;
      if(match_cons(t, sym__2))
        {
          y_48 = ATgetArgument(t, 0);
          a_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_49);
      x_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_48, a_49);
      t = l_10(j_48, a_49, t);
      b_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_48, b_49);
      b_11 = t;
      t = SSLsetAnnotations(b_11, x_48);
      return(t);
    }
    t = thread_map_1_0(l_6, t);
  }
  t_48 = t;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_48);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, n_48);
  t = d_9(i_48, n_48, t);
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_48, o_48);
  c_11 = t;
  t = SSLsetAnnotations(c_11, m_48);
  q_48 = t;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = NULL,t_8 = NULL,v_8 = NULL,d_11 = NULL;
            t = SSLgetAnnotations(q_48);
            o_8 = t;
            t = q_49;
            {
              ATerm l_25 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_25;
                }
            }
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_49, j_48);
            t = h_9(r_49, j_48, t);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_8, v_8);
            d_11 = t;
            t = SSLsetAnnotations(d_11, o_8);
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            t = q_48;
          }
      }
    }
  else
    {
      t = q_48;
    }
  return(t);
}
static ATerm s_54 (ATerm w_49, ATerm y_49, ATerm z_49, ATerm b_50, ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,k_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  t = w_49;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(m_6, t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = term_c_17;
      }
  }
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_50, term_j_17);
  t = copy_char_0_0(t);
  k_50 = t;
  t = w_49;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(n_6, t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = term_k_16;
      }
  }
  s_50 = t;
  t = term_c_17;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, term_c_17);
  t = l_10(s_50, t_50, t);
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_50, term_f_16);
  t = copy_char_0_0(t);
  t = SSL_strlen(k_50);
  e_50 = t;
  t = w_49;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(o_6, t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = term_k_16;
      }
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, q_50);
  t = l_10(z_49, q_50, t);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_49)));
  {
    static ATerm p_6 (ATerm t)
    {
      ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
      z_50 = t;
      if(match_cons(t, sym__2))
        {
          a_51 = ATgetArgument(t, 0);
          b_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_50 = ATgetFirst((ATermList) t);
          y_50 = (ATerm) ATgetNext((ATermList) t);
          t = v_50;
          if(match_cons(t, sym__2))
            {
              w_50 = ATgetArgument(t, 0);
              x_50 = ATgetArgument(t, 1);
              {
                ATerm t_25 = t;
                int d_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm v_6 (ATerm t)
                    {
                      t = e_50;
                      return(t);
                    }
                    t = z_50;
                    t = f_9(v_6, a_51, w_50, x_50, y_50, t);
                    LocalPopChoice(d_26);
                  }
                else
                  {
                    t = t_25;
                    {
                      static ATerm w_6 (ATerm t)
                      {
                        t = e_50;
                        return(t);
                      }
                      static ATerm x_6 (ATerm t)
                      {
                        t = f_50;
                        return(t);
                      }
                      t = z_50;
                      t = e_9(w_6, x_6, a_51, b_51, t);
                    }
                  }
              }
            }
          else
            {
              static ATerm y_6 (ATerm t)
              {
                t = e_50;
                return(t);
              }
              static ATerm z_6 (ATerm t)
              {
                t = f_50;
                return(t);
              }
              t = z_50;
              t = e_9(y_6, z_6, a_51, b_51, t);
            }
        }
      else
        {
          static ATerm b_7 (ATerm t)
          {
            t = e_50;
            return(t);
          }
          static ATerm c_7 (ATerm t)
          {
            t = f_50;
            return(t);
          }
          t = z_50;
          t = e_9(b_7, c_7, a_51, b_51, t);
        }
      return(t);
    }
    t = foldl_1_0(p_6, t);
  }
  t = reverse_acc_2_0(_id, i_7, t);
  t = map_1_0(j_7, t);
  {
    static ATerm t_7 (ATerm t)
    {
      ATerm y_51 = NULL,c_52 = NULL,x_52 = NULL,f_53 = NULL,g_53 = NULL,i_11 = NULL;
      g_53 = t;
      if(match_cons(t, sym__2))
        {
          c_52 = ATgetArgument(t, 0);
          x_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_53);
      y_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_50, c_52);
      t = d_9(k_50, c_52, t);
      f_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_53, x_52);
      i_11 = t;
      t = SSLsetAnnotations(i_11, y_51);
      return(t);
    }
    t = map_1_0(t_7, t);
  }
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_49, p_50, z_49);
  t = c_9(w_49, p_50, z_49, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_46 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_46;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  if(match_cons(t, sym__2))
    {
      f_46 = ATgetArgument(t, 0);
      g_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(f_46, g_46, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(((ATgetType(f_26) != AT_LIST) || !(ATisEmpty(f_26))))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) != AT_LIST) || !(ATisEmpty(h_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
        {
          k_46 = ATgetFirst((ATermList) i_26);
          l_46 = (ATerm) ATgetNext((ATermList) i_26);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
          {
            m_46 = ATgetFirst((ATermList) k_26);
            n_46 = (ATerm) ATgetNext((ATermList) k_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_46, m_46), (ATerm) ATmakeAppl(sym__2, l_46, n_46));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_46), q_46);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm u_46 = NULL,x_46 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(match_cons(m_26, sym__2))
        {
          u_46 = ATgetArgument(m_26, 0);
          {
            ATerm o_26 = ATgetArgument(m_26, 1);
            if(match_cons(o_26, sym__2))
              {
                x_46 = ATgetArgument(o_26, 0);
                c_47 = ATgetArgument(o_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            d_47 = ATgetArgument(n_26, 0);
            e_47 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_9(u_46, x_46, c_47, d_47, e_47, t);
  return(t);
}
static ATerm d_6 (ATerm t)
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
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,w_51 = NULL,f_11 = NULL;
  w_51 = t;
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      r_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_51);
  p_51 = t;
  t = q_51;
  t = reverse_acc_2_0(_id, l_7, t);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_51, r_51);
  f_11 = t;
  t = SSLsetAnnotations(f_11, p_51);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  p_53 = t;
  if(match_cons(t, sym__2))
    {
      q_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_20, t_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_53 = ATgetFirst((ATermList) t);
          s_53 = (ATerm) ATgetNext((ATermList) t);
          t = s_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_53, t_53);
          {
            ATerm p_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                LocalPopChoice(t_26);
              }
            else
              {
                t = p_26;
                {
                  ATerm w_9 = NULL,z_9 = NULL,a_10 = NULL;
                  t = term_t_17;
                  z_9 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_53, t_53)), term_u_17);
                  a_10 = t;
                  t = SSL_printnl(z_9, a_10);
                  t = term_c_17;
                  w_9 = t;
                  t = SSL_exit(w_9);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_53, t_53)), term_u_17);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              r_53 = ATgetArgument(t, 0);
              s_53 = ATgetArgument(t, 1);
              {
                ATerm l_11 = NULL,n_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, r_53, t_53);
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
                        ATerm o_11 = NULL,r_11 = NULL,t_11 = NULL;
                        t = term_t_17;
                        r_11 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_53, t_53)), term_u_17);
                        t_11 = t;
                        t = SSL_printnl(r_11, t_11);
                        t = term_c_17;
                        o_11 = t;
                        t = SSL_exit(o_11);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_53, t_53)), term_u_17);
                      }
                    }
                }
                l_11 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm x_26 = ATgetArgument(t, 0);
                    n_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, r_53, s_53), t_53);
                {
                  ATerm y_26 = t;
                  int z_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_11 = NULL;
                      t = get_width_0_0(t);
                      u_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_11, u_11);
                      t = leq_0_0(t);
                      LocalPopChoice(z_26);
                      t = l_11;
                    }
                  else
                    {
                      t = y_26;
                      t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
                      {
                        ATerm a_27 = t;
                        int b_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(b_27);
                          }
                        else
                          {
                            t = a_27;
                            {
                              ATerm w_11 = NULL,x_11 = NULL,a_12 = NULL;
                              t = term_t_17;
                              x_11 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_u_17);
                              a_12 = t;
                              t = SSL_printnl(x_11, a_12);
                              t = term_c_17;
                              w_11 = t;
                              t = SSL_exit(w_11);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_u_17);
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
                  r_53 = ATgetArgument(t, 0);
                  s_53 = ATgetArgument(t, 1);
                  {
                    ATerm c_27 = t;
                    int d_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_53, s_53), t_53);
                        {
                          ATerm e_27 = t;
                          int f_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(f_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
                                t = term_t_17;
                                z_12 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_53, s_53), t_53)), term_u_17);
                                a_13 = t;
                                t = SSL_printnl(z_12, a_13);
                                t = term_c_17;
                                y_12 = t;
                                t = SSL_exit(y_12);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_53, s_53), t_53)), term_u_17);
                              }
                            }
                        }
                        LocalPopChoice(d_27);
                      }
                    else
                      {
                        t = c_27;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_53, s_53), t_53);
                        {
                          ATerm i_27 = t;
                          int k_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(k_27);
                            }
                          else
                            {
                              t = i_27;
                              {
                                ATerm x_13 = NULL,g_14 = NULL,h_14 = NULL;
                                t = term_t_17;
                                g_14 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_53, s_53), t_53)), term_u_17);
                                h_14 = t;
                                t = SSL_printnl(g_14, h_14);
                                t = term_c_17;
                                x_13 = t;
                                t = SSL_exit(x_13);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_53, s_53), t_53)), term_u_17);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm l_27 = t;
                  int m_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm n_27 = ATgetArgument(t, 0);
                          s_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(m_27);
                      t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
                      {
                        ATerm q_27 = t;
                        int r_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(r_27);
                          }
                        else
                          {
                            t = q_27;
                            {
                              ATerm z_14 = NULL,a_15 = NULL,g_15 = NULL;
                              t = term_t_17;
                              a_15 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_u_17);
                              g_15 = t;
                              t = SSL_printnl(a_15, g_15);
                              t = term_c_17;
                              z_14 = t;
                              t = SSL_exit(z_14);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_53, t_53)), term_u_17);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = l_27;
                      {
                        ATerm v_27 = t;
                        int x_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm z_27 = ATgetArgument(t, 0);
                                s_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_27);
                            t = s_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                h_53 = ATgetFirst((ATermList) t);
                                j_53 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = h_53;
                            if(match_cons(t, sym_S_1))
                              {
                                i_53 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = j_53;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, i_53, t_53);
                          }
                        else
                          {
                            t = v_27;
                            if(match_cons(t, sym_S_1))
                              {
                                r_53 = ATgetArgument(t, 0);
                                {
                                  ATerm a_54 = NULL,c_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, r_53, t_53);
                                  t = e_10(r_53, t_53, t);
                                  c_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, t_53, c_54);
                                  t = l_10(t_53, c_54, t);
                                  a_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, r_53, a_54);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    r_53 = ATgetArgument(t, 0);
                                    s_53 = ATgetArgument(t, 1);
                                    o_53 = ATgetArgument(t, 2);
                                    t = r_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        n_53 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_53;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        l_53 = ATgetFirst((ATermList) t);
                                        m_53 = (ATerm) ATgetNext((ATermList) t);
                                        t = m_53;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = l_53;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm a_28 = t;
                                                int b_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_54(n_53, s_53, o_53, t_53, p_53, t);
                                                    LocalPopChoice(b_28);
                                                  }
                                                else
                                                  {
                                                    t = a_28;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = p_54(n_53, s_53, o_53, t_53, p_53, t);
                                              }
                                          }
                                        else
                                          {
                                            t = l_53;
                                            t = p_54(n_53, s_53, o_53, t_53, p_53, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm c_28 = t;
                                            int f_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = p_54(n_53, s_53, o_53, t_53, p_53, t);
                                                LocalPopChoice(f_28);
                                              }
                                            else
                                              {
                                                t = c_28;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_53);
                                              }
                                          }
                                        else
                                          {
                                            t = p_54(n_53, s_53, o_53, t_53, p_53, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        r_53 = ATgetArgument(t, 0);
                                        s_53 = ATgetArgument(t, 1);
                                        t = q_54(r_53, s_53, t_53, p_53, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            r_53 = ATgetArgument(t, 0);
                                            s_53 = ATgetArgument(t, 1);
                                            t = r_54(r_53, s_53, t_53, p_53, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                r_53 = ATgetArgument(t, 0);
                                                s_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = s_54(r_53, s_53, t_53, p_53, t);
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
static ATerm a_56 (ATerm p_55, ATerm t)
{
  t = SSL_fclose(p_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_55 = ATgetArgument(t, 0);
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_55);
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = a_56(w_55, t);
          }
      }
    }
  else
    {
      t = a_56(w_55, t);
    }
  return(t);
}
static ATerm f_10 (ATerm h_23, ATerm t)
{
  t = SSL_read_term_from_stream(h_23);
  return(t);
}
static ATerm g_10 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_fopen(f_32, g_32);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_56);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_56 = NULL;
  t = SSL_stdin_stream();
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_56 = NULL;
  t = SSL_stdout_stream();
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_56 = NULL;
  t = SSL_stderr_stream();
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_56);
  return(t);
}
static ATerm j_58 (ATerm t_56, ATerm t)
{
  ATerm v_56 = NULL;
  t = SSL_explode_term(t_56);
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_28 = ATgetArgument(t, 1);
        if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
          {
            v_56 = ATgetFirst((ATermList) l_28);
            {
              ATerm p_28 = (ATerm) ATgetNext((ATermList) l_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_58 (ATerm b_57, ATerm c_57, ATerm h_57, ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,p_57 = NULL,n_21 = NULL;
  t = SSLgetAnnotations(h_57);
  k_57 = t;
  t = b_57;
  if(match_cons(t, sym_Path_1))
    {
      p_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_57, c_57);
  n_21 = t;
  t = SSLsetAnnotations(n_21, k_57);
  if(match_cons(t, sym__2))
    {
      i_57 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(i_57, j_57, t);
  return(t);
}
static ATerm l_58 (ATerm r_57, ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,d_58 = NULL,o_21 = NULL;
  t = SSLgetAnnotations(t_57);
  y_57 = t;
  t = SSL_is_string(r_57);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_58, s_57);
  o_21 = t;
  t = SSLsetAnnotations(o_21, y_57);
  if(match_cons(t, sym__2))
    {
      w_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(w_57, x_57, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym__2))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_58(f_58, t);
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
                  t = k_58(g_58, h_58, f_58, t);
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = s_28;
                  t = l_58(g_58, h_58, f_58, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_58(f_58, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,u_58 = NULL;
  u_58 = t;
  {
    ATerm x_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_58, term_e_29);
        t = h_10(t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = x_28;
        {
          ATerm v_15 = NULL,w_15 = NULL;
          t = term_f_29;
          w_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_29, u_58);
          t = o_10(w_15, u_58, t);
          v_15 = t;
          t = SSL_perror(v_15);
          _fail(t);
        }
      }
  }
  o_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(p_58, t);
  n_58 = t;
  t = o_58;
  t = fclose_0_0(t);
  t = n_58;
  return(t);
}
static ATerm i_10 (ATerm w_31, ATerm x_31, ATerm t)
{
  t = SSL_access(w_31, x_31);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_59 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_29;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_59 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_29);
      d_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_59, (ATerm) ATinsert(ATempty, term_j_29));
      t = i_10(b_59, d_59, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm j_10 (ATerm t_38, ATerm u_38, ATerm t)
{
  t = SSL_copy(t_38, u_38);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL;
  u_59 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_16 = NULL;
        t = u_59;
        t = o_0(t);
        j_16 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = j_16;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = j_16;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_59, j_16);
        t = j_10(v_59, j_16, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_59);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_16 = NULL;
              t = u_59;
              t = o_0(t);
              q_16 = t;
              {
                ATerm q_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_16 = NULL;
                    u_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = u_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = u_16;
                          }
                        else
                          {
                            t = u_16;
                            if((v_59 != t))
                              {
                                _fail(t);
                              }
                            t = u_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_29;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_59, q_16);
              t = j_10(v_59, q_16, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_59);
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              t = u_59;
              t = o_0(t);
              if((v_59 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_59);
            }
        }
      }
  }
  return(t);
}
static ATerm k_10 (ATerm p_20, ATerm q_20, ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL;
  c_60 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
        t = p_10(p_20, q_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_29 = ATgetFirst((ATermList) t);
            b_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_29);
        t = SSL_table_put(p_20, q_20, b_60);
        t = (ATerm) ATmakeAppl(sym__3, p_20, q_20, b_60);
      }
    else
      {
        t = r_29;
        t = SSL_table_remove(p_20, q_20);
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
      }
  }
  t = c_60;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
  h_60 = t;
  t = h_89(t);
  g_60 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_60 = NULL;
        t = term_r_14;
        k_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_60, term_r_14);
        t = p_10(g_60, k_60, t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_60 = ATgetFirst((ATermList) t);
      d_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_14;
  i_60 = t;
  t = SSL_table_put(g_60, i_60, d_60);
  t = e_60;
  {
    static ATerm u_7 (ATerm t)
    {
      ATerm l_60 = NULL;
      l_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_60, l_60);
      t = k_10(g_60, l_60, t);
      return(t);
    }
    t = map_1_0(u_7, t);
  }
  t = h_60;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm t)
{
  ATerm w_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_76(t);
      t = f_76(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = w_29;
      t = f_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,z_60 = NULL;
  q_60 = t;
  t = g_89(t);
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_60, term_r_14);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_61 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_30 = ATgetArgument(t, 0);
            ATerm c_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_14;
        e_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_60, term_r_14);
        t = p_10(o_60, e_61, t);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATempty;
      }
  }
  r_60 = t;
  t = term_r_14;
  s_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), (ATerm) ATempty);
  z_60 = t;
  t = SSL_table_put(o_60, s_60, z_60);
  t = q_60;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_y_14;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm q_61 = NULL;
  q_61 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_61);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = q_61;
      }
  }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm h_61 = NULL;
  static ATerm w_7 (ATerm t)
  {
    ATerm j_61 = NULL;
    j_61 = t;
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_61 = NULL,n_61 = NULL;
          t = term_y_14;
          k_61 = t;
          t = term_r_14;
          n_61 = t;
          t = term_h_30;
          t = p_10(k_61, n_61, t);
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_61 != NULL) && (h_61 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_61 = ATgetFirst((ATermList) t);
        {
          ATerm i_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_61;
    t = map_1_0(y_7, t);
    t = j_61;
    t = end_scope_1_0(e_8, t);
    return(t);
  }
  t = begin_scope_1_0(v_7, t);
  t = restore_always_2_0(e_72, w_7, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_30;
      t = get_config_0_0(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      t = term_m_30;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  static ATerm f_8 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_61 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        t_61 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_61);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = term_i_29;
      }
    t = f_72(t);
    t = copy_to_1_0(i_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  v_61 = t;
  t = term_k_15;
  t = whoami_0_0(t);
  w_61 = t;
  t = term_t_17;
  y_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), w_61), term_q_30);
  z_61 = t;
  t = SSL_printnl(y_61, z_61);
  t = term_c_17;
  x_61 = t;
  t = SSL_exit(x_61);
  t = v_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,i_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
      t = term_k_15;
      t = n_0(t);
      l_62 = t;
      t = term_s_30;
      m_62 = t;
      t = term_t_30;
      n_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_30, term_t_30, l_62);
      t = q_10(m_62, n_62, l_62, t);
      _fail(t);
    }
  else
    {
      ATerm y_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_62 = ATgetFirst((ATermList) t);
          e_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_62 = ATgetFirst((ATermList) t);
          i_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_62;
      t = k_0(t);
      t = f_62;
      t = l_0(t);
      y_62 = t;
      t = (ATerm) ATinsert(CheckATermList(i_62), y_62);
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm c_63 = NULL;
  c_63 = t;
  if(match_string(t, "-k"))
    {
      t = c_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_63;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,h_63 = NULL;
  d_63 = t;
  t = SSL_string_to_int(d_63);
  e_63 = t;
  t = term_u_30;
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, e_63);
  t = s_10(h_63, e_63, t);
  t = d_63;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_8, k_8, l_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm j_63 = NULL;
  j_63 = t;
  if(match_string(t, "-S"))
    {
      t = j_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_63;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_63 = NULL,r_63 = NULL;
  t = term_w_30;
  n_63 = t;
  t = term_k_16;
  r_63 = t;
  t = term_x_30;
  t = s_10(n_63, r_63, t);
  t = term_y_30;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_z_30;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  t = SSL_string_to_int(s_63);
  t_63 = t;
  t = term_w_30;
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, t_63);
  t = s_10(u_63, t_63, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_63);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  t = term_b_31;
  v_63 = t;
  t = term_k_15;
  w_63 = t;
  t = term_c_31;
  t = s_10(v_63, w_63, t);
  t = term_d_31;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_8, p_8, q_8, t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_8, w_8, x_8, t);
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = Option_3_0(y_8, z_8, g_9, t);
          }
      }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm z_63 = NULL;
  z_63 = t;
  if(match_string(t, "-o"))
    {
      t = z_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_63;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL;
  a_64 = t;
  t = term_l_30;
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_30, a_64);
  t = s_10(b_64, a_64, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_64);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_9, s_9, u_9, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm d_64 = NULL;
  d_64 = t;
  if(match_string(t, "-i"))
    {
      t = d_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_64;
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL;
  e_64 = t;
  t = term_p_30;
  f_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, e_64);
  t = s_10(f_64, e_64, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_64);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_9, b_10, n_10, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL;
  t = term_p_31;
  j_64 = t;
  t = term_k_15;
  k_64 = t;
  t = term_q_31;
  t = s_10(j_64, k_64, t);
  t = term_r_31;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm l_64 = NULL;
  l_64 = t;
  if(match_string(t, "-w"))
    {
      t = l_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = l_64;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm n_64 = NULL,q_64 = NULL,r_64 = NULL;
  n_64 = t;
  t = SSL_string_to_int(n_64);
  q_64 = t;
  t = term_w_16;
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_16, q_64);
  t = s_10(r_64, q_64, t);
  t = n_64;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm u_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = u_31;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            {
              ATerm c_32 = t;
              int d_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_10, t_10, u_10, t);
                  LocalPopChoice(d_32);
                }
              else
                {
                  t = c_32;
                  {
                    ATerm e_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = e_32;
                        {
                          ATerm i_32 = t;
                          int j_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(j_32);
                            }
                          else
                            {
                              t = i_32;
                              t = ArgOption_3_0(v_10, w_10, y_10, t);
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
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_15;
  t = whoami_0_0(t);
  s_64 = t;
  t = term_t_17;
  u_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_32), s_64);
  v_64 = t;
  t = SSL_printnl(u_64, v_64);
  t = term_c_17;
  t_64 = t;
  t = SSL_exit(t_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_10 (ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_55, s_55);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = SSL_addr(r_55, s_55);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_64;
      t = n_85(t);
    }
  else
    {
      ATerm c_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_64 = ATgetFirst((ATermList) t);
          z_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_64;
      t = foldr_2_0(n_85, o_85, t);
      c_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_64, c_65);
      t = o_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(h_17, i_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_65 = NULL,d_17 = NULL,e_17 = NULL;
  t = times_0_0(t);
  e_17 = t;
  t = SSL_explode_term(e_17);
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_17;
  t = foldr_2_0(a_11, e_11, t);
  f_65 = t;
  t = SSL_TicksToSeconds(f_65);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  if(match_cons(t, sym__2))
    {
      t_65 = ATgetArgument(t, 0);
      u_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_65;
        if((t_65 != t))
          {
            _fail(t);
          }
        t = s_65;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_65, u_65);
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = SSL_gtr(t_65, u_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_66 = NULL;
        t = term_w_30;
        t = get_config_0_0(t);
        a_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_66, term_c_17);
        t = geq_0_0(t);
        t = y_65;
        t = j_88(t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = y_65;
      }
  }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,f_66 = NULL,g_66 = NULL;
  t = run_time_0_0(t);
  c_66 = t;
  t = term_k_15;
  t = whoami_0_0(t);
  d_66 = t;
  t = term_t_17;
  f_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_33), c_66), term_e_33), d_66);
  g_66 = t;
  t = SSL_printnl(f_66, g_66);
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_33), c_66), term_e_33), d_66));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_16;
  h_66 = t;
  t = SSL_exit(h_66);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  q_66 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_66;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_66 = ATgetArgument(t, 0);
          {
            ATerm v_17 = NULL,v_21 = NULL;
            t = SSLgetAnnotations(q_66);
            v_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_66);
            v_21 = t;
            t = SSLsetAnnotations(v_21, v_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_66;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm g_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_33;
      t = get_config_0_0(t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = g_33;
      t = fetch_1_0(h_11, t);
    }
  t = n_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_66 = ATgetFirst((ATermList) t);
      u_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_66 = NULL,z_66 = NULL;
        static ATerm k_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(z_66));
          return(t);
        }
        t = u_66;
        t = i_0(t);
        if(((y_66 != NULL) && (y_66 != t)))
          _fail(t);
        else
          y_66 = t;
        t = t_66;
        t = g_0(t);
        if(((z_66 != NULL) && (z_66 != t)))
          _fail(t);
        else
          z_66 = t;
        t = u_66;
        t = reverse_acc_2_0(g_0, k_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,y_21 = NULL;
  f_67 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_67);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_67);
  y_21 = t;
  t = SSLsetAnnotations(y_21, d_67);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_67), term_l_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL;
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_32;
      t = get_config_0_0(t);
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      t = fetch_1_0(q_11, t);
    }
  t = term_t_33;
  t = echo_0_0(t);
  t = term_s_30;
  b_67 = t;
  t = term_t_30;
  c_67 = t;
  t = term_v_33;
  t = p_10(b_67, c_67, t);
  t = reverse_acc_2_0(_id, s_11, t);
  t = map_1_0(e_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  static ATerm e_68 (ATerm t)
  {
    ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL;
    b_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_68 = ATgetFirst((ATermList) t);
        d_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_18 = NULL,h_18 = NULL,f_22 = NULL;
          t = SSLgetAnnotations(b_68);
          e_18 = t;
          t = c_68;
          t = j_79(t);
          h_18 = t;
          t = (ATerm) ATinsert(CheckATermList(d_68), h_18);
          f_22 = t;
          t = SSLsetAnnotations(f_22, e_18);
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm v_18 = NULL,l_19 = NULL,g_22 = NULL;
            t = SSLgetAnnotations(b_68);
            v_18 = t;
            t = d_68;
            t = e_68(t);
            l_19 = t;
            t = (ATerm) ATinsert(CheckATermList(l_19), c_68);
            g_22 = t;
            t = SSLsetAnnotations(g_22, v_18);
          }
        }
    }
    return(t);
  }
  t = e_68(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
  i_68 = t;
  {
    ATerm d_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_68;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_34 = ATgetFirst((ATermList) t);
                ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_68;
          }
        LocalPopChoice(h_34);
      }
    else
      {
        t = d_34;
        t = (ATerm) ATinsert(ATempty, i_68);
      }
  }
  j_68 = t;
  t = term_m_30;
  k_68 = t;
  t = SSL_printnl(k_68, j_68);
  t = i_68;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_10 (ATerm m_54, ATerm n_54, ATerm t)
{
  t = SSL_strcat(m_54, n_54);
  return(t);
}
ATerm debug_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  o_68 = t;
  t = w_77(t);
  p_68 = t;
  t = term_t_17;
  q_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_68), p_68);
  r_68 = t;
  t = SSL_printnl(q_68, r_68);
  t = o_68;
  return(t);
}
ATerm map_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  static ATerm g_69 (ATerm t)
  {
    ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
    d_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_69;
      }
    else
      {
        ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL,n_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_69 = ATgetFirst((ATermList) t);
            f_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_69);
        y_19 = t;
        t = e_69;
        t = z_78(t);
        b_20 = t;
        t = f_69;
        t = g_69(t);
        c_20 = t;
        t = (ATerm) ATinsert(CheckATermList(c_20), b_20);
        n_22 = t;
        t = SSLsetAnnotations(n_22, y_19);
      }
    return(t);
  }
  t = g_69(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_69 = NULL;
      o_69 = t;
      t = SSL_is_string(o_69);
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
        ATerm q_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_12, t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = q_34;
            {
              ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
              u_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_69 = ATgetArgument(t, 0);
                  t = v_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_69 = ATgetArgument(t, 0);
                      t = v_69;
                      {
                        ATerm t_34 = t;
                        int v_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(v_34);
                          }
                        else
                          {
                            t = t_34;
                            t = debug_1_0(m_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_70 = NULL,b_70 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_69 = ATgetArgument(t, 0);
                          w_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_69;
                      t = eval_config_0_0(t);
                      a_70 = t;
                      t = w_69;
                      t = eval_config_0_0(t);
                      b_70 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
                      t = o_10(a_70, b_70, t);
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
  ATerm f_70 = NULL,g_70 = NULL;
  f_70 = t;
  t = term_w_34;
  g_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, f_70);
  t = p_10(g_70, f_70, t);
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_70 = NULL,i_70 = NULL;
        t = eval_config_0_0(t);
        h_70 = t;
        t = term_w_34;
        i_70 = t;
        t = SSL_table_put(i_70, f_70, h_70);
        t = h_70;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
      }
  }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  t = term_z_34;
  l_70 = t;
  t = term_k_15;
  m_70 = t;
  t = term_a_35;
  t = s_10(l_70, m_70, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL;
  t = term_z_34;
  p_70 = t;
  t = term_k_15;
  q_70 = t;
  t = term_a_35;
  t = s_10(p_70, q_70, t);
  t = term_c_35;
  n_70 = t;
  t = term_k_15;
  o_70 = t;
  t = term_g_35;
  t = s_10(n_70, o_70, t);
  t = term_k_35;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_12, o_12, p_12, t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = Option_3_0(q_12, r_12, s_12, t);
    }
  return(t);
}
static ATerm s_10 (ATerm o_32, ATerm p_32, ATerm t)
{
  ATerm r_70 = NULL;
  t = term_w_34;
  r_70 = t;
  t = SSL_table_put(r_70, o_32, p_32);
  t = (ATerm) ATmakeAppl(sym__3, term_w_34, o_32, p_32);
  return(t);
}
static ATerm p_10 (ATerm b_22, ATerm c_22, ATerm t)
{
  t = SSL_table_get(b_22, c_22);
  return(t);
}
static ATerm q_10 (ATerm k_20, ATerm l_20, ATerm j_20, ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            ATerm s_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
        t = p_10(k_20, l_20, t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATempty;
      }
  }
  u_70 = t;
  t = (ATerm) ATinsert(CheckATermList(u_70), j_20);
  v_70 = t;
  t = SSL_table_put(k_20, l_20, v_70);
  t = t_70;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_71 = NULL,h_71 = NULL,l_71 = NULL;
      t = term_k_15;
      t = e_0(t);
      d_71 = t;
      t = term_s_30;
      h_71 = t;
      t = term_t_30;
      l_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_30, term_t_30, d_71);
      t = q_10(h_71, l_71, d_71, t);
      _fail(t);
    }
  else
    {
      ATerm o_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_71 = ATgetFirst((ATermList) t);
          c_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_71;
      t = c_0(t);
      t = term_k_15;
      t = d_0(t);
      o_71 = t;
      t = (ATerm) ATinsert(CheckATermList(c_71), o_71);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,x_22 = NULL;
  u_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_71 = ATgetFirst((ATermList) t);
      r_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_71);
  p_71 = t;
  t = q_71;
  t = i_65(t);
  s_71 = t;
  t = r_71;
  t = j_65(t);
  t_71 = t;
  t = (ATerm) ATinsert(CheckATermList(t_71), s_71);
  x_22 = t;
  t = SSLsetAnnotations(x_22, p_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,g_72 = NULL,h_72 = NULL,b_23 = NULL;
  z_71 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_35;
        t = l_94(t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
      }
  }
  t = z_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_72 = ATgetFirst((ATermList) t);
      c_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_71);
  a_72 = t;
  t = term_q_32;
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, b_72);
  t = s_10(h_72, b_72, t);
  t = c_72;
  {
    static ATerm r_72 (ATerm t)
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_35 = t;
          int a_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_72 = NULL;
              k_72 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_72;
              LocalPopChoice(a_36);
            }
          else
            {
              t = z_35;
              t = l_94(t);
              t = Cons_2_0(_id, r_72, t);
            }
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          {
            ATerm n_72 = NULL,o_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_72 = ATgetFirst((ATermList) t);
                o_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_72), (ATerm) ATmakeAppl(sym_Undefined_1, n_72));
          }
        }
      return(t);
    }
    t = r_72(t);
  }
  g_72 = t;
  t = (ATerm) ATinsert(CheckATermList(g_72), (ATerm) ATmakeAppl(sym_Program_1, b_72));
  b_23 = t;
  t = SSLsetAnnotations(b_23, a_72);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm e_73 = NULL;
  e_73 = t;
  if(match_string(t, "--help"))
    {
      t = e_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_73;
        }
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  t = term_k_33;
  f_73 = t;
  t = term_k_15;
  g_73 = t;
  t = term_b_36;
  t = s_10(f_73, g_73, t);
  t = term_c_36;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm w_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  z_72 = t;
  t = term_s_30;
  b_73 = t;
  t = term_t_30;
  c_73 = t;
  t = (ATerm) ATempty;
  d_73 = t;
  t = SSL_table_put(b_73, c_73, d_73);
  t = z_72;
  {
    static ATerm t_12 (ATerm t)
    {
      ATerm e_36 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_94(t);
          LocalPopChoice(h_36);
        }
      else
        {
          t = e_36;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_12, b_13, c_13, t);
                LocalPopChoice(j_36);
              }
            else
              {
                t = i_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_12, t);
  }
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_73 = NULL;
        n_73 = t;
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL;
              t = n_73;
              {
                ATerm o_36 = t;
                int p_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_36);
                  }
                else
                  {
                    t = o_36;
                    t = fetch_1_0(e_13, t);
                  }
              }
              t = n_73;
              t = default_system_usage_0_0(t);
              t = term_k_16;
              w_20 = t;
              t = SSL_exit(w_20);
              LocalPopChoice(n_36);
            }
          else
            {
              t = m_36;
              {
                ATerm f_21 = NULL;
                t = term_z_34;
                t = get_config_0_0(t);
                t = n_73;
                t = default_system_about_0_0(t);
                t = term_k_16;
                f_21 = t;
                t = SSL_exit(f_21);
              }
            }
        }
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
              static ATerm g_13 (ATerm t)
              {
                ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL,g_23 = NULL;
                t_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_73);
                r_73 = t;
                t = s_73;
                if(((w_72 != NULL) && (w_72 != t)))
                  _fail(t);
                else
                  w_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_73);
                g_23 = t;
                t = SSLsetAnnotations(g_23, r_73);
                return(t);
              }
              t = fetch_1_0(g_13, t);
              t = term_t_17;
              p_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_72)), term_s_36);
              q_73 = t;
              t = SSL_printnl(p_73, q_73);
              t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_72)), term_s_36));
              t = default_system_usage_0_0(t);
              t = term_c_17;
              o_73 = t;
              t = SSL_exit(o_73);
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
            }
        }
      }
  }
  y_72 = t;
  t = term_s_30;
  a_73 = t;
  t = SSL_table_destroy(a_73);
  t = y_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
  t = parse_options_1_0(p_92, t);
  y_73 = t;
  t = term_t_36;
  b_74 = t;
  t = SSL_table_create(b_74);
  t = term_t_36;
  z_73 = t;
  t = term_u_36;
  a_74 = t;
  t = SSL_table_put(z_73, a_74, y_73);
  t = y_73;
  t = r_92(t);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_92, t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_92(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = xtc_io_1_0(j_13, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
  t = read_from_0_0(t);
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_74, term_k_16);
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        {
          ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
          t = term_t_17;
          i_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_74, term_k_16)), term_u_17);
          j_74 = t;
          t = SSL_printnl(i_74, j_74);
          t = term_c_17;
          h_74 = t;
          t = SSL_exit(h_74);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_74, term_k_16)), term_u_17);
        }
      }
  }
  g_74 = t;
  t = SSL_explode_term(g_74);
  if(match_cons(t, sym__2))
    {
      ATerm i_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_37 = ATgetArgument(t, 1);
        if(((ATgetType(j_37) == AT_LIST) && !(ATisEmpty(j_37))))
          {
            f_74 = ATgetFirst((ATermList) j_37);
            {
              ATerm k_37 = (ATerm) ATgetNext((ATermList) j_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_74, term_l_37);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, h_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
