#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_C_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Hashtable_1;
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
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Path_1;
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
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_y_34;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_o_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_m_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_y_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_k_26;
ATerm term_m_23;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_e_18;
ATerm term_g_17;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_b_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_e_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_j_14);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_d_16);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_16);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_z_14);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_v_29);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_m_28);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_q_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_d_29);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_z_14);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_z_14);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_z_14);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, (ATerm) ATempty);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_v_31);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_z_14);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_i_29);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm u_10 (ATerm h_42, ATerm i_42, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm a_86 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_91 (ATerm), ATerm t);
static ATerm v_3 (ATerm e_3, ATerm t);
static ATerm w_3 (ATerm h_3, ATerm m_3, ATerm n_3, ATerm t);
static ATerm c_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm k_9 (ATerm k_103 (ATerm), ATerm x_36, ATerm v_36, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm n_10 (ATerm p_92 (ATerm), ATerm f_28, ATerm k_309, ATerm t);
ATerm at_suffix_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm t_92 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm z_118 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm o_10 (ATerm v_18, ATerm w_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm l_9 (ATerm y_14, ATerm w_14, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_9 (ATerm n_0, ATerm u_14, ATerm r_14, ATerm t);
static ATerm n_9 (ATerm r_27, ATerm s_27, ATerm t);
static ATerm o_9 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm p_15, ATerm o_15, ATerm t);
static ATerm p_9 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm k_15, ATerm i_15, ATerm l_15, ATerm j_15, ATerm t);
ATerm foldl_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm r_9 (ATerm a_68, ATerm b_68, ATerm t);
static ATerm t_9 (ATerm x_0 (ATerm), ATerm c_1 (ATerm), ATerm z_0, ATerm d_1, ATerm w_0, ATerm t);
ATerm thread_map_1_0 (ATerm d_100 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm q_100 (ATerm), ATerm t);
static ATerm u_9 (ATerm v_83 (ATerm), ATerm f_16, ATerm g_16, ATerm h_16, ATerm t);
static ATerm h_19 (ATerm m_16, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm w_9 (ATerm g_64, ATerm h_64, ATerm i_64, ATerm t);
static ATerm x_9 (ATerm m_68, ATerm n_68, ATerm t);
static ATerm y_9 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm z_9 (ATerm s_64, ATerm t_64, ATerm o_64, ATerm t);
static ATerm a_10 (ATerm z_64, ATerm x_64, ATerm y_64, ATerm t);
static ATerm b_10 (ATerm k_64, ATerm l_64, ATerm m_64, ATerm t);
static ATerm q_25 (ATerm w_23, ATerm x_23, ATerm y_23, ATerm t);
static ATerm u_25 (ATerm h_24, ATerm i_24, ATerm t);
static ATerm v_25 (ATerm n_24, ATerm o_24, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm h_10 (ATerm z_83 (ATerm), ATerm e_17, ATerm d_17, ATerm z_16, ATerm b_17, ATerm y_16, ATerm t);
ATerm do_A_column_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm g_118 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_36 (ATerm j_35, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm FitToMax_1_0 (ATerm b_84 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm abox2text_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm try_abox2text_0_0 (ATerm t);
static ATerm x_55 (ATerm n_55, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_10 (ATerm t_26, ATerm t);
static ATerm q_10 (ATerm p_66, ATerm q_66, ATerm t);
static ATerm r_10 (ATerm y_35, ATerm z_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_57 (ATerm k_56, ATerm t);
static ATerm z_57 (ATerm q_56, ATerm r_56, ATerm s_56, ATerm t);
static ATerm a_58 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm t);
static ATerm s_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_10 (ATerm p_35, ATerm q_35, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_11 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm v_10 (ATerm w_20, ATerm x_20, ATerm t);
ATerm end_scope_1_0 (ATerm h_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_103 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_11 (ATerm h_36, ATerm i_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm c_11 (ATerm r_20, ATerm s_20, ATerm q_20, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm Abox_2_text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_10 (ATerm u_67, ATerm v_67, ATerm t);
ATerm foldr_2_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_102 (ATerm), ATerm t);
static ATerm v_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t);
static ATerm f_11 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t);
static ATerm g_11 (ATerm m_25, ATerm n_25, ATerm t);
ATerm lookup_table_0_1 (ATerm d_22, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_25, ATerm s_25, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_10 (ATerm o_25, ATerm p_25, ATerm t);
static ATerm z_10 (ATerm t_25, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_92 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_92 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_108 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm parse_options_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = u_1;
        t = q_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_1, e_0);
        t = u_10(v_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = u_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm u_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    y_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_0;
                          }
                        else
                          {
                            t = y_0;
                            if((v_1 != t))
                              {
                                _fail(t);
                              }
                            t = y_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_12;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_1, v_0);
              t = u_10(v_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              t = u_1;
              t = q_0(t);
              if((v_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
            }
        }
      }
  }
  return(t);
}
static ATerm u_10 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_copy(h_42, i_42);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,o_2 = NULL;
      t = term_b_13;
      n_2 = t;
      t = term_e_13;
      o_2 = t;
      t = term_g_13;
      t = b_11(n_2, o_2, t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = term_h_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm l_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,k_1 = NULL;
      t = term_e_13;
      {
        ATerm i_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,q_1 = NULL;
            t = term_b_13;
            l_1 = t;
            t = term_e_13;
            q_1 = t;
            t = term_g_13;
            t = b_11(l_1, q_1, t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = i_13;
            t = term_h_13;
          }
      }
      f_1 = t;
      t = term_l_13;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_l_13, f_1);
      t = u_10(k_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm n_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(a_86, t);
    return(t);
  }
  t = a_86(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,t_2 = NULL,y_2 = NULL;
  q_2 = t;
  t = c_91(t);
  r_2 = t;
  t = term_r_13;
  t_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_2), r_2);
  y_2 = t;
  t = SSL_printnl(t_2, y_2);
  t = q_2;
  return(t);
}
static ATerm v_3 (ATerm e_3, ATerm t)
{
  t = e_3;
  {
    ATerm w_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_13 = ATgetArgument(t, 0);
            ATerm y_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_13;
      }
  }
  t = term_z_13;
  t = debug_1_0(c_0, t);
  t = (ATerm) ATmakeAppl(sym__2, e_3, term_a_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm w_3 (ATerm h_3, ATerm m_3, ATerm n_3, ATerm t)
{
  t = SSL_open_file(h_3, m_3);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
      {
        ATerm c_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_3(s_3, t);
            LocalPopChoice(e_14);
          }
        else
          {
            t = c_14;
            t = w_3(t_3, u_3, s_3, t);
          }
      }
    }
  else
    {
      t = v_3(s_3, t);
    }
  return(t);
}
static ATerm k_9 (ATerm k_103 (ATerm), ATerm x_36, ATerm v_36, ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  a_4 = t;
  t = k_103(t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_3, x_36, v_36);
  t = c_11(x_3, x_36, v_36, t);
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL;
        t = term_j_14;
        f_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_3, term_j_14);
        t = b_11(x_3, f_4, t);
        {
          ATerm l_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_14;
            }
        }
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_3 = ATgetFirst((ATermList) t);
      z_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_3, term_j_14, (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATinsert(CheckATermList(y_3), x_36)));
  t = lookup_table_0_1(x_3, t);
  e_4 = t;
  t = term_j_14;
  b_4 = t;
  t = (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATinsert(CheckATermList(y_3), x_36));
  c_4 = t;
  t = e_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(b_4, c_4, d_4, t);
  t = a_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_4 = NULL;
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 = NULL,b_2 = NULL;
      o_4 = t;
      t = term_o_14;
      b_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_4, term_o_14);
      t = q_10(o_4, b_2, t);
      h_4 = t;
      t = SSL_mkstemp(h_4);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm p_4 = NULL;
        t = term_t_14;
        p_4 = t;
        t = SSL_perror(p_4);
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
static ATerm f_0 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  t = P__tmpdir_0_0(t);
  v_4 = t;
  t = term_x_14;
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, term_x_14);
  t = q_10(v_4, w_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_14;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_z_14);
  t = k_9(f_0, t_4, u_4, t);
  t = SSL_close(s_4);
  t = t_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  t = xtc_new_file_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_a_14);
  t = open_file_0_0(t);
  t = z_4;
  {
    static ATerm i_0 (ATerm t)
    {
      ATerm g_5 = NULL;
      g_5 = t;
      {
        ATerm b_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 = NULL,j_2 = NULL;
            t = SSL_is_string(g_5);
            e_2 = t;
            t = (ATerm) ATinsert(ATempty, e_2);
            j_2 = t;
            t = SSL_print(a_5, j_2);
            t = e_2;
            LocalPopChoice(d_15);
          }
        else
          {
            t = b_15;
            t = g_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(i_0, t);
  }
  t = SSL_close_file(a_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_5);
  return(t);
}
static ATerm n_10 (ATerm p_92 (ATerm), ATerm f_28, ATerm k_309, ATerm t)
{
  static ATerm k_0 (ATerm t)
  {
    ATerm b_40 = NULL;
    b_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_28, b_40);
    t = p_92(t);
    t = b_40;
    return(t);
  }
  t = k_309;
  t = SRTS_one(k_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  static ATerm q_40 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_93(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,i_8 = NULL,n_8 = NULL,g_1 = NULL;
          n_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_40 = ATgetFirst((ATermList) t);
              p_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_40);
          i_8 = t;
          t = p_40;
          t = q_40(t);
          n_8 = t;
          t = (ATerm) ATinsert(CheckATermList(n_8), o_40);
          g_1 = t;
          t = SSLsetAnnotations(g_1, i_8);
        }
      }
    return(t);
  }
  t = q_40(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm u_40 = NULL,v_40 = NULL,y_40 = NULL,a_41 = NULL,b_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,j_1 = NULL,i_1 = NULL;
    h_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_41 = ATgetFirst((ATermList) t);
        e_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_41);
    a_41 = t;
    t = b_41;
    t = t_92(t);
    f_41 = t;
    t = (ATerm) ATinsert(CheckATermList(e_41), f_41);
    i_1 = t;
    t = SSLsetAnnotations(i_1, a_41);
    g_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_40 = ATgetFirst((ATermList) t);
        y_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_41);
    u_40 = t;
    t = y_40;
    if(((s_40 != NULL) && (s_40 != t)))
      _fail(t);
    else
      s_40 = t;
    t = (ATerm) ATinsert(CheckATermList(y_40), v_40);
    j_1 = t;
    t = SSLsetAnnotations(j_1, u_40);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_0, t);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_40, not_null(s_40));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,a_42 = NULL;
  ATerm g_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(z_118, t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = g_15;
      {
        ATerm o_41 = NULL;
        o_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_41, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_41;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_15 = ATgetFirst((ATermList) t);
              ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_42;
          t = list_tokenize_1_0(z_118, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm s_15 = ATgetFirst((ATermList) t);
          ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, r_41);
        }
      else
        {
          ATerm l_42 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_15 = ATgetFirst((ATermList) t);
              ATerm z_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_42;
          t = list_tokenize_1_0(z_118, t);
          l_42 = t;
          t = (ATerm) ATinsert(CheckATermList(l_42), r_41);
        }
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm u_42 = NULL;
  if(match_cons(t, sym__2))
    {
      u_42 = ATgetArgument(t, 0);
      if((u_42 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  t = SSL_implode_string(v_42);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,o_1 = NULL;
  s_42 = t;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  o_42 = t;
  t = SSL_explode_string(q_42);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_42, r_42);
  o_1 = t;
  t = SSLsetAnnotations(o_1, o_42);
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_42;
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm t_42 = NULL;
      t_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_42, m_42);
      t = n_10(u_0, t_42, m_42, t);
      return(t);
    }
    t = list_tokenize_1_0(t_0, t);
  }
  t = map_1_0(a_1, t);
  return(t);
}
static ATerm o_10 (ATerm v_18, ATerm w_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_a_16), v_18);
  t = string_tokenize_0_0(t);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_43 = NULL,i_43 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_d_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_43 = ATgetFirst((ATermList) t);
                i_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(h_43);
          }
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        {
          ATerm k_43 = NULL,l_43 = NULL;
          t = last_0_0(t);
          l_43 = t;
          t = SSL_strlen(l_43);
          k_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_43, w_18);
          t = r_9(k_43, w_18, t);
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
      ATerm n_43 = NULL,o_43 = NULL;
      if(match_cons(t, sym__2))
        {
          n_43 = ATgetArgument(t, 0);
          o_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
      {
        ATerm j_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_43, o_43);
            LocalPopChoice(l_16);
          }
        else
          {
            t = j_16;
            t = SSL_gtr(n_43, o_43);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
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
  ATerm n_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = NULL,q_43 = NULL;
      t = term_b_13;
      p_43 = t;
      t = term_q_16;
      q_43 = t;
      t = term_r_16;
      t = b_11(p_43, q_43, t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = n_16;
      t = term_s_16;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_39;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_39;
    }
  else
    {
      t = v_39;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm y_14, ATerm w_14, ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,r_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  t = y_14;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(b_1, t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = term_d_16;
      }
  }
  c_6 = t;
  t = term_v_16;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_6, term_v_16);
  t = w_10(c_6, d_6, t);
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_6, term_a_16);
  t = copy_char_0_0(t);
  l_5 = t;
  t = y_14;
  {
    ATerm a_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(e_1, t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = a_17;
        t = term_d_16;
      }
  }
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_5, term_g_17);
  t = copy_char_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_14, term_g_17);
  t = copy_char_0_0(t);
  n_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_5), m_5), l_5);
  p_5 = t;
  t = SSL_concat_strings(p_5);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm l_6 = NULL,p_6 = NULL;
  p_6 = t;
  t = SSL_explode_term(p_6);
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
          {
            l_6 = ATgetFirst((ATermList) i_17);
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
  t = l_6;
  return(t);
}
static ATerm m_9 (ATerm n_0, ATerm u_14, ATerm r_14, ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,j_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_0, r_14);
  t = l_9(n_0, r_14, t);
  f_6 = t;
  t = u_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_14;
  t = map_1_0(h_1, t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_6, j_6);
  t = n_9(f_6, j_6, t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, e_6);
  return(t);
}
static ATerm n_9 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  t = s_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_27;
    }
  else
    {
      ATerm z_2 = NULL,c_3 = NULL,r_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_7 = ATgetFirst((ATermList) t);
          n_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_27);
      z_2 = t;
      t = n_7;
      {
        static ATerm j_3 (ATerm t)
        {
          ATerm l_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 = NULL;
              d_3 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_3;
              LocalPopChoice(p_17);
            }
          else
            {
              t = l_17;
              {
                ATerm g_3 = NULL;
                t = Cons_2_0(_id, j_3, t);
                g_3 = t;
                t = (ATerm) ATinsert(CheckATermList(g_3), r_27);
              }
            }
          return(t);
        }
        t = j_3(t);
      }
      c_3 = t;
      t = (ATerm) ATinsert(CheckATermList(c_3), m_7);
      r_1 = t;
      t = SSLsetAnnotations(r_1, z_2);
    }
  return(t);
}
static ATerm o_9 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm p_15, ATerm o_15, ATerm t)
{
  ATerm t_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL;
  t = term_z_14;
  t = s_83(t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_15, b_8);
  t = q_83(t);
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_14;
  t = r_83(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, z_7);
  t = w_10(x_7, z_7, t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, t_7), y_7));
  return(t);
}
static ATerm p_9 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm k_15, ATerm i_15, ATerm l_15, ATerm j_15, ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,l_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_15, l_15);
  t = o_83(t);
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_14;
  t = get_width_0_0(t);
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, l_8);
  t = leq_0_0(t);
  t = term_z_14;
  t = p_83(t);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, h_8);
  t = w_10(e_8, h_8, t);
  g_8 = t;
  t = (ATerm) ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_15), c_8), g_8));
  return(t);
}
ATerm foldl_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  static ATerm g_10 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
    if(match_cons(t, sym__2))
      {
        w_8 = ATgetArgument(t, 0);
        z_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_8;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_8;
      }
    else
      {
        ATerm c_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_8 = ATgetFirst((ATermList) t);
            y_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_8, z_8);
        t = r_99(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_8, c_10);
        t = g_10(t);
      }
    return(t);
  }
  t = g_10(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm l_10 = NULL;
  static ATerm m_1 (ATerm t)
  {
    ATerm m_10 = NULL,x_10 = NULL,a_11 = NULL,i_11 = NULL,k_11 = NULL,y_1 = NULL;
    k_11 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        x_10 = ATgetArgument(t, 0);
        a_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_11);
    m_10 = t;
    t = x_10;
    t = l_84(t);
    i_11 = t;
    t = a_11;
    if(((l_10 != NULL) && (l_10 != t)))
      _fail(t);
    else
      l_10 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, i_11, a_11);
    y_1 = t;
    t = SSLsetAnnotations(y_1, m_10);
    return(t);
  }
  t = fetch_1_0(m_1, t);
  t = SSL_string_to_int(not_null(l_10));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  t = copy_0_0(t);
  l_11 = t;
  t = SSL_implode_string(l_11);
  return(t);
}
static ATerm r_9 (ATerm a_68, ATerm b_68, ATerm t)
{
  ATerm q_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_68, b_68);
      LocalPopChoice(s_17);
    }
  else
    {
      t = q_17;
      t = SSL_subtr(a_68, b_68);
    }
  return(t);
}
static ATerm t_9 (ATerm x_0 (ATerm), ATerm c_1 (ATerm), ATerm z_0, ATerm d_1, ATerm w_0, ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,q_11 = NULL,r_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_0, w_0);
  t = x_0(t);
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, m_11);
  t = c_1(t);
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_11), q_11), n_11);
  return(t);
}
ATerm thread_map_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  static ATerm i_12 (ATerm t)
  {
    ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
    w_11 = t;
    if(match_cons(t, sym__2))
      {
        x_11 = ATgetArgument(t, 0);
        y_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_11;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_11 = ATgetFirst((ATermList) t);
        v_11 = (ATerm) ATgetNext((ATermList) t);
        t = w_11;
        t = t_9(d_100, i_12, u_11, v_11, y_11, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_11);
      }
    return(t);
  }
  t = i_12(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm w_17 = t;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,d_13 = NULL,f_13 = NULL;
      c_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = c_13;
        }
      else
        {
          ATerm m_4 = NULL,f_2 = NULL;
          if(match_cons(t, sym_H_2))
            {
              d_13 = ATgetArgument(t, 0);
              f_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_13);
          m_4 = t;
          t = d_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, d_13, f_13);
          f_2 = t;
          t = SSLsetAnnotations(f_2, m_4);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_17;
    }
  return(t);
}
ATerm filter_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,i_14 = NULL,k_14 = NULL;
  f_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL,w_5 = NULL,x_5 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(f_14);
            t_5 = t;
            t = i_14;
            t = q_100(t);
            w_5 = t;
            t = k_14;
            t = filter_1_0(q_100, t);
            x_5 = t;
            t = (ATerm) ATinsert(CheckATermList(x_5), w_5);
            h_2 = t;
            t = SSLsetAnnotations(h_2, t_5);
            LocalPopChoice(a_18);
          }
        else
          {
            t = y_17;
            t = k_14;
            t = filter_1_0(q_100, t);
          }
      }
    }
  return(t);
}
static ATerm u_9 (ATerm v_83 (ATerm), ATerm f_16, ATerm g_16, ATerm h_16, ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,a_15 = NULL,h_15 = NULL,y_15 = NULL,k_2 = NULL;
  t = h_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_14 = ATgetFirst((ATermList) t);
      a_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_14, f_16);
  t = v_83(t);
  h_15 = t;
  t = a_15;
  {
    static ATerm n_1 (ATerm t)
    {
      ATerm e_16 = NULL;
      e_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, g_16);
      t = v_83(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  y_15 = t;
  t = (ATerm) ATinsert(CheckATermList(y_15), h_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, p_14);
  return(t);
}
static ATerm h_19 (ATerm m_16, ATerm t)
{
  ATerm x_16 = NULL,r_17 = NULL,q_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,i_4 = NULL;
  t = SSL_explode_term(m_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_18 = ATgetFirst((ATermList) t);
      a_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_17);
  q_18 = t;
  t = a_19;
  t = Cons_2_0(p_1, s_1, t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), x_18);
  i_4 = t;
  t = SSLsetAnnotations(i_4, q_18);
  c_19 = t;
  t = SSL_mkterm(x_16, c_19);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_19 = NULL;
      d_19 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_19;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = Cons_2_0(t_1, w_1, t);
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm d_18 = t;
  if((PushChoice() == 0))
    {
      ATerm e_19 = NULL;
      e_19 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_19;
        }
      else
        {
          t = h_19(e_19, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_18;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_20 = ATgetFirst((ATermList) t);
      i_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_18;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_20 = ATgetFirst((ATermList) t);
      l_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL,t_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(match_cons(f_18, sym__2))
        {
          m_20 = ATgetArgument(f_18, 0);
          o_20 = ATgetArgument(f_18, 1);
        }
      else
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(match_cons(g_18, sym__2))
          {
            p_20 = ATgetArgument(g_18, 0);
            t_20 = ATgetArgument(g_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_20), m_20), (ATerm) ATinsert(CheckATermList(t_20), o_20));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(x_1, t);
      t = (ATerm) ATempty;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm j_19 = NULL,k_19 = NULL,o_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,b_20 = NULL,k_4 = NULL;
        t = map_1_0(z_1, t);
        t = genzip_4_0(a_2, c_2, d_2, _id, t);
        b_20 = t;
        if(match_cons(t, sym__2))
          {
            x_19 = ATgetArgument(t, 0);
            y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_20);
        o_19 = t;
        t = y_19;
        t = matrix_transpose_0_0(t);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_19, z_19);
        k_4 = t;
        t = SSLsetAnnotations(k_4, o_19);
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
static ATerm w_9 (ATerm g_64, ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm y_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, g_64, h_64, i_64);
  t = a_10(g_64, h_64, i_64, t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, h_64);
  t = q_10(y_20, h_64, t);
  return(t);
}
static ATerm x_9 (ATerm m_68, ATerm n_68, ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(m_68, n_68);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      t = SSL_divr(m_68, n_68);
    }
  return(t);
}
static ATerm y_9 (ATerm s_68, ATerm t_68, ATerm t)
{
  t = SSL_mod(s_68, t_68);
  return(t);
}
static ATerm z_9 (ATerm s_64, ATerm t_64, ATerm o_64, ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,m_21 = NULL,q_21 = NULL,t_21 = NULL,w_21 = NULL;
  t = SSL_strlen(t_64);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_64, h_21);
  t = r_9(o_64, h_21, t);
  d_21 = t;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        t = term_n_18;
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_21, term_n_18);
        t = y_9(d_21, x_21, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_21;
        LocalPopChoice(m_18);
        {
          ATerm y_21 = NULL,z_21 = NULL;
          t = term_n_18;
          z_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_21, term_n_18);
          t = x_9(d_21, z_21, t);
          y_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_21, y_21);
        }
      }
    else
      {
        t = l_18;
        {
          ATerm b_22 = NULL,c_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,b_5 = NULL;
          t = term_v_16;
          q_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_21, term_v_16);
          t = r_9(d_21, q_22, t);
          c_22 = t;
          t = term_n_18;
          n_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_22, term_n_18);
          t = x_9(c_22, n_22, t);
          b_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_22, b_22);
          w_22 = t;
          if(match_cons(t, sym__2))
            {
              ATerm o_18 = ATgetArgument(t, 0);
              ATerm p_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_22);
          r_22 = t;
          t = term_v_16;
          v_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_22, term_v_16);
          t = w_10(b_22, v_22, t);
          u_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_22, b_22);
          b_5 = t;
          t = SSLsetAnnotations(b_5, r_22);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_21, e_21);
  t = w_10(h_21, e_21, t);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_64, t_64, t_21);
  t = a_10(s_64, t_64, t_21, t);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
  t = w_10(h_21, i_21, t);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_64, t_64, q_21);
  t = a_10(s_64, t_64, q_21, t);
  m_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_21), t_64), g_21);
  w_21 = t;
  t = SSL_concat_strings(w_21);
  return(t);
}
static ATerm a_10 (ATerm z_64, ATerm x_64, ATerm y_64, ATerm t)
{
  ATerm x_22 = NULL;
  t = SSL_strlen(x_64);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_64, x_22);
  t = r_9(y_64, x_22, t);
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_22, term_d_16);
        t = geq_0_0(t);
        t = y_22;
        LocalPopChoice(s_18);
        {
          ATerm b_23 = NULL;
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_23, z_64);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = r_18;
        t = term_t_18;
      }
  }
  return(t);
}
static ATerm b_10 (ATerm k_64, ATerm l_64, ATerm m_64, ATerm t)
{
  ATerm c_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, k_64, l_64, m_64);
  t = a_10(k_64, l_64, m_64, t);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_64, c_23);
  t = q_10(l_64, c_23, t);
  return(t);
}
static ATerm q_25 (ATerm w_23, ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL;
  t = term_v_16;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_23, term_v_16);
  {
    ATerm u_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(w_23, g_24);
        LocalPopChoice(y_18);
      }
    else
      {
        t = u_18;
        t = SSL_gtr(w_23, g_24);
      }
  }
  t = x_23;
  if(match_cons(t, sym__3))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
      f_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_10(c_24, d_24, f_24, t);
  return(t);
}
static ATerm u_25 (ATerm h_24, ATerm i_24, ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  t = h_24;
  if(match_cons(t, sym__3))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      m_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_9(k_24, l_24, m_24, t);
  return(t);
}
static ATerm v_25 (ATerm n_24, ATerm o_24, ATerm t)
{
  ATerm q_24 = NULL,s_24 = NULL,t_24 = NULL;
  t = n_24;
  if(match_cons(t, sym__3))
    {
      q_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
      t_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_9(q_24, s_24, t_24, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm x_24 = NULL,z_24 = NULL,b_25 = NULL,d_25 = NULL,h_25 = NULL;
  z_24 = t;
  if(match_cons(t, sym__3))
    {
      b_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
      h_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_25;
  {
    ATerm z_18 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm g_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_19);
        t = h_25;
        {
          ATerm i_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm m_19 = ATgetArgument(t, 0);
                  x_24 = ATgetArgument(t, 1);
                  {
                    ATerm n_19 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(l_19);
              t = b_25;
              if(match_int(t, 1))
                {
                  ATerm p_19 = t;
                  int q_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_25(b_25, h_25, z_24, t);
                      LocalPopChoice(q_19);
                    }
                  else
                    {
                      t = p_19;
                      t = x_24;
                    }
                }
              else
                {
                  t = q_25(b_25, h_25, z_24, t);
                }
            }
          else
            {
              t = i_19;
              t = b_25;
              t = q_25(b_25, h_25, z_24, t);
            }
        }
      }
    else
      {
        t = z_18;
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm t_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(s_19);
              t = b_25;
              t = u_25(h_25, z_24, t);
            }
          else
            {
              t = r_19;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm u_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_25;
              t = v_25(h_25, z_24, t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_26 = NULL,g_26 = NULL,m_26 = NULL,n_26 = NULL,e_5 = NULL;
      n_26 = t;
      if(match_cons(t, sym__2))
        {
          g_26 = ATgetArgument(t, 0);
          m_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_26);
      f_26 = t;
      t = g_26;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_26;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_20 = ATgetFirst((ATermList) t);
              ATerm c_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_26;
        }
      t = (ATerm) ATmakeAppl(sym__2, g_26, m_26);
      e_5 = t;
      t = SSLsetAnnotations(e_5, f_26);
      LocalPopChoice(w_19);
      t = conc_0_0(t);
    }
  else
    {
      t = v_19;
      {
        ATerm s_26 = NULL,u_26 = NULL;
        if(match_cons(t, sym__2))
          {
            s_26 = ATgetArgument(t, 0);
            u_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_26), s_26);
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_26 = NULL;
      v_26 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_26;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_20 = ATgetFirst((ATermList) t);
              ATerm g_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_26;
        }
      LocalPopChoice(e_20);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = d_20;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(g_2, i_2, m_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_18;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm j_29 = NULL,l_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_29 = ATgetFirst((ATermList) t);
      l_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_29, l_29);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm m_29 = NULL,p_29 = NULL,r_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      if(match_cons(j_20, sym__2))
        {
          m_29 = ATgetArgument(j_20, 0);
          p_29 = ATgetArgument(j_20, 1);
        }
      else
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(match_cons(n_20, sym__2))
          {
            r_29 = ATgetArgument(n_20, 0);
            w_29 = ATgetArgument(n_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_29), m_29), (ATerm) ATinsert(CheckATermList(w_29), p_29));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL;
      t = flatten_list_0_0(t);
      z_29 = t;
      t = SSL_concat_strings(z_29);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 = NULL,q_6 = NULL;
      if(match_cons(t, sym__2))
        {
          o_6 = ATgetArgument(t, 0);
          q_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_6, q_6);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(o_6, q_6);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = SSL_gtr(o_6, q_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, o_6, q_6);
      LocalPopChoice(a_21);
      {
        ATerm r_6 = NULL,s_6 = NULL;
        s_6 = t;
        t = SSL_explode_term(s_6);
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_21 = ATgetArgument(t, 1);
              if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                {
                  r_6 = ATgetFirst((ATermList) j_21);
                  {
                    ATerm k_21 = (ATerm) ATgetNext((ATermList) j_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_6;
      }
    }
  else
    {
      t = z_20;
      {
        ATerm t_6 = NULL,u_6 = NULL;
        u_6 = t;
        t = SSL_explode_term(u_6);
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_21 = ATgetArgument(t, 1);
              if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
                {
                  ATerm o_21 = ATgetFirst((ATermList) n_21);
                  ATerm p_21 = (ATerm) ATgetNext((ATermList) n_21);
                  if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
                    {
                      t_6 = ATgetFirst((ATermList) p_21);
                      {
                        ATerm r_21 = (ATerm) ATgetNext((ATermList) p_21);
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
        t = t_6;
      }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm h_10 (ATerm z_83 (ATerm), ATerm e_17, ATerm d_17, ATerm z_16, ATerm b_17, ATerm y_16, ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,d_28 = NULL,k_28 = NULL,n_28 = NULL,s_28 = NULL,v_28 = NULL,e_29 = NULL,f_29 = NULL,j_5 = NULL,k_6 = NULL,m_6 = NULL;
  t = z_16;
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm g_29 = NULL;
      g_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_29, b_17);
      t = z_83(t);
      return(t);
    }
    t = map_1_0(p_2, t);
  }
  t = genzip_4_0(s_2, u_2, v_2, _id, t);
  f_29 = t;
  if(match_cons(t, sym__2))
    {
      n_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  k_28 = t;
  t = n_28;
  t = map_1_0(w_2, t);
  v_28 = t;
  t = s_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_21 = ATgetFirst((ATermList) t);
      m_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_6 = ATgetFirst((ATermList) t);
      {
        ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_6, k_6);
  t = foldl_1_0(x_2, t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_28, e_29);
  j_5 = t;
  t = SSLsetAnnotations(j_5, k_28);
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_27, b_17);
  t = r_9(g_27, b_17, t);
  j_27 = t;
  {
    ATerm v_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_30 = NULL;
        t = term_v_16;
        g_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_v_16);
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_17, g_30);
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              t = SSL_gtr(d_17, g_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_v_16);
        LocalPopChoice(a_22);
        {
          ATerm h_30 = NULL,m_30 = NULL;
          t = e_17;
          if(match_cons(t, sym_AC_1))
            {
              m_30 = ATgetArgument(t, 0);
              t = m_30;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  m_30 = ATgetArgument(t, 0);
                  t = m_30;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      m_30 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_30;
                }
            }
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(a_3, t);
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                t = term_v_16;
              }
          }
          h_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_30, term_g_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = v_21;
        t = term_t_18;
      }
  }
  k_27 = t;
  t = h_27;
  {
    static ATerm b_3 (ATerm t)
    {
      ATerm s_30 = NULL,t_30 = NULL;
      t_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, d_17, e_17, (ATerm) ATmakeAppl(sym__3, term_g_17, t_30, j_27));
      t = align_column_0_0(t);
      s_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_30, k_27);
      t = q_10(s_30, k_27, t);
      return(t);
    }
    t = map_1_0(b_3, t);
  }
  l_27 = t;
  t = SSL_strlen(k_27);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, g_27);
  t = w_10(d_28, g_27, t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_27, (ATerm) ATinsert(CheckATermList(y_16), l_27));
  return(t);
}
ATerm do_A_column_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,a_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      if(match_cons(i_22, sym__2))
        {
          v_30 = ATgetArgument(i_22, 0);
          {
            ATerm m_22 = ATgetArgument(i_22, 1);
            if(match_cons(m_22, sym__2))
              {
                a_31 = ATgetArgument(m_22, 0);
                c_31 = ATgetArgument(m_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm j_22 = ATgetArgument(t, 1);
        if(match_cons(j_22, sym__2))
          {
            d_31 = ATgetArgument(j_22, 0);
            e_31 = ATgetArgument(j_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_10(z_83, v_30, a_31, c_31, d_31, e_31, t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  static ATerm o_31 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_94(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,m_31 = NULL,w_6 = NULL;
          t = d_94(t);
          m_31 = t;
          if(match_cons(t, sym__2))
            {
              g_31 = ATgetArgument(t, 0);
              h_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_31);
          f_31 = t;
          t = g_31;
          t = f_94(t);
          i_31 = t;
          t = h_31;
          t = o_31(t);
          j_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_31, j_31);
          w_6 = t;
          t = SSLsetAnnotations(w_6, f_31);
          t = e_94(t);
        }
      }
    return(t);
  }
  t = o_31(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  ATerm x_31 = NULL;
  static ATerm v_32 (ATerm t)
  {
    ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
    if(match_cons(t, sym__2))
      {
        z_31 = ATgetArgument(t, 0);
        a_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_32;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm k_32 = NULL,p_32 = NULL,r_32 = NULL,u_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_32 = ATgetFirst((ATermList) t);
            c_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_31, b_32);
        t = g_118(t);
        k_32 = t;
        t = term_v_16;
        u_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_31, term_v_16);
        t = w_10(z_31, u_32, t);
        r_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_32, c_32);
        t = v_32(t);
        p_32 = t;
        t = (ATerm) ATinsert(CheckATermList(p_32), k_32);
      }
    return(t);
  }
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, x_31);
  t = v_32(t);
  return(t);
}
ATerm foldr_3_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  ATerm x_32 = NULL,c_33 = NULL,d_33 = NULL;
  x_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_32;
      t = o_99(t);
    }
  else
    {
      ATerm l_33 = NULL,m_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_33 = ATgetFirst((ATermList) t);
          d_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_33;
      t = q_99(t);
      l_33 = t;
      t = d_33;
      t = foldr_3_0(o_99, p_99, q_99, t);
      m_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_33, m_33);
      t = p_99(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  static ATerm b_35 (ATerm t)
  {
    ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
    x_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_34 = ATgetFirst((ATermList) t);
        w_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_7 = NULL,o_7 = NULL,a_7 = NULL;
          t = SSLgetAnnotations(x_34);
          b_7 = t;
          t = w_34;
          t = b_35(t);
          o_7 = t;
          t = (ATerm) ATinsert(CheckATermList(o_7), v_34);
          a_7 = t;
          t = SSLsetAnnotations(a_7, b_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_34;
        t = x_92(t);
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_33 = NULL,v_33 = NULL,c_34 = NULL;
  q_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_33;
    }
  else
    {
      static ATerm f_3 (ATerm t)
      {
        t = not_null(c_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_33 = ATgetFirst((ATermList) t);
          if(((c_34 != NULL) && (c_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_33;
      t = at_end_1_0(f_3, t);
    }
  return(t);
}
static ATerm e_36 (ATerm j_35, ATerm t)
{
  ATerm l_35 = NULL;
  t = SSL_explode_term(j_35);
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,r_35 = NULL;
  r_35 = t;
  if(match_cons(t, sym__2))
    {
      n_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      {
        ATerm t_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_3 (ATerm t)
            {
              t = o_35;
              return(t);
            }
            t = n_35;
            t = at_end_1_0(i_3, t);
            LocalPopChoice(z_22);
          }
        else
          {
            t = t_22;
            t = e_36(r_35, t);
          }
      }
    }
  else
    {
      t = e_36(r_35, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  static ATerm f_36 (ATerm t)
  {
    ATerm a_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_90(t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = a_23;
        t = h_90(t);
        t = f_36(t);
      }
    return(t);
  }
  t = f_36(t);
  return(t);
}
ATerm for_3_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t)
{
  t = j_90(t);
  t = while_not_2_0(k_90, l_90, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_36, o_36, (ATerm) ATempty);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm p_36 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(((ATgetType(e_23) != AT_INT) || (ATgetInt((ATermInt) e_23) != 0)))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
      }
      p_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_36;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,g_37 = NULL;
  if(match_cons(t, sym__3))
    {
      a_37 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
      c_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_37, term_v_16);
  t = geq_0_0(t);
  t = term_v_16;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_37, term_v_16);
  t = r_9(a_37, g_37, t);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_37, b_37, (ATerm) ATinsert(CheckATermList(c_37), b_37));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(k_3, l_3, o_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(o_37, p_37, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm FitToMax_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  m_37 = t;
  t = foldr_3_0(p_3, q_3, r_3, t);
  j_37 = t;
  t = term_z_14;
  t = b_84(t);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_37, j_37);
  t = r_9(n_37, j_37, t);
  k_37 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_37 = NULL;
        t = term_d_16;
        q_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_37, term_d_16);
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_37, q_37);
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = SSL_gtr(k_37, q_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_37, (ATerm) ATempty);
        t = copy_0_0(t);
        l_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_37, l_37);
        t = conc_0_0(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = m_37;
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              {
                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
                t = term_r_13;
                t_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_37), term_m_23);
                u_37 = t;
                t = SSL_printnl(t_37, u_37);
                t = term_v_16;
                s_37 = t;
                t = SSL_exit(s_37);
                t = (ATerm) ATinsert(ATinsert(ATempty, m_37), term_m_23);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_23 = t;
  if((PushChoice() == 0))
    {
      ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,o_39 = NULL,d_7 = NULL;
      o_39 = t;
      if(match_cons(t, sym_R_2))
        {
          l_39 = ATgetArgument(t, 0);
          m_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_39);
      k_39 = t;
      t = m_39;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, l_39, m_39);
      d_7 = t;
      t = SSLsetAnnotations(d_7, k_39);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_23;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_38, (ATerm) ATempty);
  {
    static ATerm p_39 (ATerm t)
    {
      ATerm b_38 = NULL,c_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
      if(match_cons(t, sym__2))
        {
          e_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_38;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm n_38 = NULL;
          t = h_38;
          t = reverse_acc_2_0(_id, g_4, t);
          n_38 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, n_38));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_38 = ATgetFirst((ATermList) t);
              g_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_38;
          if(match_cons(t, sym_R_2))
            {
              b_38 = ATgetArgument(t, 0);
              c_38 = ATgetArgument(t, 1);
              {
                ATerm o_23 = t;
                int p_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_38 = NULL,x_38 = NULL;
                    t = h_38;
                    t = reverse_acc_2_0(_id, j_4, t);
                    w_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_38, (ATerm) ATempty);
                    t = p_39(t);
                    x_38 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(x_38), (ATerm) ATmakeAppl(sym_R_2, b_38, c_38)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, w_38));
                    LocalPopChoice(p_23);
                  }
                else
                  {
                    t = o_23;
                    t = (ATerm) ATmakeAppl(sym__2, g_38, (ATerm) ATinsert(CheckATermList(h_38), f_38));
                    t = p_39(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, g_38, (ATerm) ATinsert(CheckATermList(h_38), f_38));
              t = p_39(t);
            }
        }
      return(t);
    }
    t = p_39(t);
  }
  t = filter_1_0(l_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm j_46 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_46;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(k_46, l_46, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      if(((ATgetType(r_23) != AT_LIST) || !(ATisEmpty(r_23))))
        _fail(t);
      {
        ATerm s_23 = ATgetArgument(t, 1);
        if(((ATgetType(s_23) != AT_LIST) || !(ATisEmpty(s_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm s_46 = NULL,w_46 = NULL,z_46 = NULL,a_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
        {
          s_46 = ATgetFirst((ATermList) t_23);
          w_46 = (ATerm) ATgetNext((ATermList) t_23);
        }
      else
        _fail(t);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
          {
            z_46 = ATgetFirst((ATermList) u_23);
            a_47 = (ATerm) ATgetNext((ATermList) u_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_46, z_46), (ATerm) ATmakeAppl(sym__2, w_46, a_47));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  if(match_cons(t, sym__2))
    {
      b_47 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_47), b_47);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,h_52 = NULL,i_52 = NULL,k_7 = NULL;
  i_52 = t;
  if(match_cons(t, sym__2))
    {
      d_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_52);
  c_52 = t;
  t = d_52;
  t = reverse_acc_2_0(_id, l_7, t);
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, e_52);
  k_7 = t;
  t = SSLsetAnnotations(k_7, c_52);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm i_54 (ATerm p_45, ATerm q_45, ATerm r_45, ATerm s_45, ATerm t_45, ATerm t)
  {
    ATerm w_45 = NULL,x_45 = NULL,a_46 = NULL,c_46 = NULL,g_46 = NULL;
    t = r_45;
    t = construct_rows_0_0(t);
    t = map_1_0(n_4, t);
    {
      static ATerm q_4 (ATerm t)
      {
        static ATerm r_4 (ATerm t)
        {
          t = p_45;
          t = foldr_3_0(x_4, y_4, c_5, t);
          return(t);
        }
        t = FitToMax_1_0(r_4, t);
        return(t);
      }
      t = map_1_0(q_4, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, d_5, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, f_5, t);
    w_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_45, w_45);
    t = genzip_4_0(h_5, i_5, k_5, _id, t);
    x_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_45, (ATerm) ATmakeAppl(sym__2, s_45, (ATerm) ATempty));
    {
      static ATerm o_5 (ATerm t)
      {
        t = do_A_column_1_0(r_0, t);
        return(t);
      }
      t = foldl_1_0(o_5, t);
    }
    if(match_cons(t, sym__2))
      {
        c_46 = ATgetArgument(t, 0);
        a_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_46;
    t = reverse_acc_2_0(_id, q_5, t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm s_5 (ATerm t)
      {
        ATerm g_47 = NULL;
        g_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_47, c_46);
        return(t);
      }
      t = map_1_0(s_5, t);
    }
    g_46 = t;
    t = (ATerm) ATmakeAppl(sym__3, q_45, g_46, s_45);
    t = m_9(q_45, g_46, s_45, t);
    return(t);
  }
  static ATerm j_54 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm k_47, ATerm t)
  {
    ATerm p_47 = NULL,q_47 = NULL,v_47 = NULL;
    t = h_47;
    {
      ATerm v_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(u_5, t);
          LocalPopChoice(z_23);
        }
      else
        {
          t = v_23;
          t = term_d_16;
        }
    }
    v_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_47, v_47);
    t = w_10(j_47, v_47, t);
    q_47 = t;
    t = i_47;
    t = filter_1_0(is_real_vbox_0_0, t);
    p_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_47);
      }
    else
      {
        ATerm w_47 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, j_47, q_47, p_47);
        t = u_9(r_0, j_47, q_47, p_47, t);
        w_47 = t;
        t = (ATerm) ATmakeAppl(sym__3, h_47, w_47, j_47);
        t = m_9(h_47, w_47, j_47, t);
      }
    return(t);
  }
  static ATerm k_54 (ATerm x_47, ATerm y_47, ATerm z_47, ATerm a_48, ATerm t)
  {
    ATerm d_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,n_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,q_49 = NULL,r_49 = NULL,h_7 = NULL;
    t = x_47;
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(v_5, t);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = term_v_16;
        }
    }
    j_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_48, term_g_17);
    t = copy_char_0_0(t);
    h_48 = t;
    t = SSL_strlen(h_48);
    i_48 = t;
    t = y_47;
    t = filter_1_0(is_real_hbox_0_0, t);
    d_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_48, z_47);
    {
      static ATerm y_5 (ATerm t)
      {
        ATerm u_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,f_7 = NULL;
        t = r_0(t);
        a_49 = t;
        if(match_cons(t, sym__2))
          {
            x_48 = ATgetArgument(t, 0);
            y_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_49);
        u_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_48, y_48);
        t = w_10(i_48, y_48, t);
        z_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_48, z_48);
        f_7 = t;
        t = SSLsetAnnotations(f_7, u_48);
        return(t);
      }
      t = thread_map_1_0(y_5, t);
    }
    s_48 = t;
    if(match_cons(t, sym__2))
      {
        n_48 = ATgetArgument(t, 0);
        p_48 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_48);
    k_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_48, n_48);
    t = n_9(h_48, n_48, t);
    q_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_48, p_48);
    h_7 = t;
    t = SSLsetAnnotations(h_7, k_48);
    r_48 = t;
    if(match_cons(t, sym__2))
      {
        q_49 = ATgetArgument(t, 0);
        r_49 = ATgetArgument(t, 1);
        {
          ATerm e_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_9 = NULL,g_9 = NULL,h_9 = NULL,j_7 = NULL;
              t = SSLgetAnnotations(r_48);
              d_9 = t;
              t = q_49;
              {
                ATerm p_24 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_24;
                  }
              }
              g_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_49, i_48);
              t = r_9(r_49, i_48, t);
              h_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_9, h_9);
              j_7 = t;
              t = SSLsetAnnotations(j_7, d_9);
              LocalPopChoice(j_24);
            }
          else
            {
              t = e_24;
              t = r_48;
            }
        }
      }
    else
      {
        t = r_48;
      }
    return(t);
  }
  static ATerm l_54 (ATerm y_49, ATerm a_50, ATerm e_50, ATerm f_50, ATerm t)
  {
    ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,o_50 = NULL,r_50 = NULL,s_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
    t = y_49;
    {
      ATerm r_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(z_5, t);
          LocalPopChoice(u_24);
        }
      else
        {
          t = r_24;
          t = term_v_16;
        }
    }
    w_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_50, term_g_17);
    t = copy_char_0_0(t);
    k_50 = t;
    t = y_49;
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(a_6, t);
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = term_d_16;
        }
    }
    u_50 = t;
    t = term_v_16;
    v_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_50, term_v_16);
    t = w_10(u_50, v_50, t);
    s_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_50, term_a_16);
    t = copy_char_0_0(t);
    t = SSL_strlen(k_50);
    i_50 = t;
    t = y_49;
    {
      ATerm y_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(h_6, t);
          LocalPopChoice(a_25);
        }
      else
        {
          t = y_24;
          t = term_d_16;
        }
    }
    r_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_50, r_50);
    t = w_10(e_50, r_50, t);
    j_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_50)));
    {
      static ATerm i_6 (ATerm t)
      {
        ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,d_51 = NULL,e_51 = NULL,h_51 = NULL,i_51 = NULL;
        e_51 = t;
        if(match_cons(t, sym__2))
          {
            h_51 = ATgetArgument(t, 0);
            i_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_51;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_50 = ATgetFirst((ATermList) t);
            d_51 = (ATerm) ATgetNext((ATermList) t);
            t = z_50;
            if(match_cons(t, sym__2))
              {
                a_51 = ATgetArgument(t, 0);
                b_51 = ATgetArgument(t, 1);
                {
                  ATerm c_25 = t;
                  int e_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm n_6 (ATerm t)
                      {
                        t = i_50;
                        return(t);
                      }
                      t = e_51;
                      t = p_9(r_0, n_6, h_51, a_51, b_51, d_51, t);
                      LocalPopChoice(e_25);
                    }
                  else
                    {
                      t = c_25;
                      {
                        static ATerm v_6 (ATerm t)
                        {
                          t = i_50;
                          return(t);
                        }
                        static ATerm x_6 (ATerm t)
                        {
                          t = j_50;
                          return(t);
                        }
                        t = e_51;
                        t = o_9(r_0, v_6, x_6, h_51, i_51, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm y_6 (ATerm t)
                {
                  t = i_50;
                  return(t);
                }
                static ATerm z_6 (ATerm t)
                {
                  t = j_50;
                  return(t);
                }
                t = e_51;
                t = o_9(r_0, y_6, z_6, h_51, i_51, t);
              }
          }
        else
          {
            static ATerm c_7 (ATerm t)
            {
              t = i_50;
              return(t);
            }
            static ATerm e_7 (ATerm t)
            {
              t = j_50;
              return(t);
            }
            t = e_51;
            t = o_9(r_0, c_7, e_7, h_51, i_51, t);
          }
        return(t);
      }
      t = foldl_1_0(i_6, t);
    }
    t = reverse_acc_2_0(_id, g_7, t);
    t = map_1_0(i_7, t);
    {
      static ATerm p_7 (ATerm t)
      {
        ATerm m_52 = NULL,n_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,q_7 = NULL;
        s_52 = t;
        if(match_cons(t, sym__2))
          {
            n_52 = ATgetArgument(t, 0);
            q_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_52);
        m_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_50, n_52);
        t = n_9(k_50, n_52, t);
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_52, q_52);
        q_7 = t;
        t = SSLsetAnnotations(q_7, m_52);
        return(t);
      }
      t = map_1_0(p_7, t);
    }
    o_50 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_49, o_50, e_50);
    t = m_9(y_49, o_50, e_50, t);
    return(t);
  }
  ATerm u_52 = NULL,v_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  d_53 = t;
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_18, h_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_53 = ATgetFirst((ATermList) t);
          g_53 = (ATerm) ATgetNext((ATermList) t);
          t = g_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_53, h_53);
          t = r_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              f_53 = ATgetArgument(t, 0);
              g_53 = ATgetArgument(t, 1);
              {
                ATerm h_11 = NULL,j_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, f_53, h_53);
                t = r_0(t);
                h_11 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm f_25 = ATgetArgument(t, 0);
                    j_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, f_53, g_53), h_53);
                {
                  ATerm g_25 = t;
                  int i_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_11 = NULL;
                      t = get_width_0_0(t);
                      o_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_11, o_11);
                      t = leq_0_0(t);
                      LocalPopChoice(i_25);
                      t = h_11;
                    }
                  else
                    {
                      t = g_25;
                      t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
                      t = r_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  f_53 = ATgetArgument(t, 0);
                  g_53 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_53, g_53), h_53);
                  t = r_0(t);
                }
              else
                {
                  ATerm w_25 = t;
                  int x_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm y_25 = ATgetArgument(t, 0);
                          g_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(x_25);
                      t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
                      t = r_0(t);
                    }
                  else
                    {
                      t = w_25;
                      {
                        ATerm z_25 = t;
                        int a_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm b_26 = ATgetArgument(t, 0);
                                g_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(a_26);
                            t = g_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                u_52 = ATgetFirst((ATermList) t);
                                y_52 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = u_52;
                            if(match_cons(t, sym_S_1))
                              {
                                v_52 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = y_52;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, v_52, h_53);
                          }
                        else
                          {
                            t = z_25;
                            if(match_cons(t, sym_S_1))
                              {
                                f_53 = ATgetArgument(t, 0);
                                {
                                  ATerm d_54 = NULL,e_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, f_53, h_53);
                                  t = o_10(f_53, h_53, t);
                                  e_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, h_53, e_54);
                                  t = w_10(h_53, e_54, t);
                                  d_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, f_53, d_54);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    f_53 = ATgetArgument(t, 0);
                                    g_53 = ATgetArgument(t, 1);
                                    c_53 = ATgetArgument(t, 2);
                                    t = f_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        b_53 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = c_53;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        z_52 = ATgetFirst((ATermList) t);
                                        a_53 = (ATerm) ATgetNext((ATermList) t);
                                        t = a_53;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = z_52;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm c_26 = t;
                                                int d_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_54(b_53, g_53, c_53, h_53, d_53, t);
                                                    LocalPopChoice(d_26);
                                                  }
                                                else
                                                  {
                                                    t = c_26;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = i_54(b_53, g_53, c_53, h_53, d_53, t);
                                              }
                                          }
                                        else
                                          {
                                            t = z_52;
                                            t = i_54(b_53, g_53, c_53, h_53, d_53, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm e_26 = t;
                                            int h_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_54(b_53, g_53, c_53, h_53, d_53, t);
                                                LocalPopChoice(h_26);
                                              }
                                            else
                                              {
                                                t = e_26;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_53);
                                              }
                                          }
                                        else
                                          {
                                            t = i_54(b_53, g_53, c_53, h_53, d_53, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        f_53 = ATgetArgument(t, 0);
                                        g_53 = ATgetArgument(t, 1);
                                        t = j_54(f_53, g_53, h_53, d_53, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            f_53 = ATgetArgument(t, 0);
                                            g_53 = ATgetArgument(t, 1);
                                            t = k_54(f_53, g_53, h_53, d_53, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                f_53 = ATgetArgument(t, 0);
                                                g_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = l_54(f_53, g_53, h_53, d_53, t);
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
ATerm try_abox2text_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_1_0(try_abox2text_0_0, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm u_54 = NULL,g_12 = NULL,h_12 = NULL,j_12 = NULL;
        u_54 = t;
        t = term_r_13;
        h_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, u_54), term_k_26);
        j_12 = t;
        t = SSL_printnl(h_12, j_12);
        t = term_v_16;
        g_12 = t;
        t = SSL_exit(g_12);
        t = (ATerm) ATinsert(ATinsert(ATempty, u_54), term_k_26);
      }
    }
  return(t);
}
static ATerm x_55 (ATerm n_55, ATerm t)
{
  t = SSL_fclose(n_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  u_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_55 = ATgetArgument(t, 0);
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_55);
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
            t = x_55(u_55, t);
          }
      }
    }
  else
    {
      t = x_55(u_55, t);
    }
  return(t);
}
static ATerm p_10 (ATerm t_26, ATerm t)
{
  t = SSL_read_term_from_stream(t_26);
  return(t);
}
static ATerm q_10 (ATerm p_66, ATerm q_66, ATerm t)
{
  t = SSL_strcat(p_66, q_66);
  return(t);
}
static ATerm r_10 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_fopen(y_35, z_35);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_stdin_stream();
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_56 = NULL;
  t = SSL_stdout_stream();
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_56 = NULL;
  t = SSL_stderr_stream();
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_56);
  return(t);
}
static ATerm y_57 (ATerm k_56, ATerm t)
{
  ATerm l_56 = NULL;
  t = SSL_explode_term(k_56);
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
          {
            l_56 = ATgetFirst((ATermList) q_26);
            {
              ATerm r_26 = (ATerm) ATgetNext((ATermList) q_26);
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
static ATerm z_57 (ATerm q_56, ATerm r_56, ATerm s_56, ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,y_56 = NULL,y_12 = NULL;
  t = SSLgetAnnotations(s_56);
  v_56 = t;
  t = q_56;
  if(match_cons(t, sym_Path_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_56, r_56);
  y_12 = t;
  t = SSLsetAnnotations(y_12, v_56);
  if(match_cons(t, sym__2))
    {
      t_56 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(t_56, u_56, t);
  return(t);
}
static ATerm a_58 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm t)
{
  ATerm h_57 = NULL,k_57 = NULL,l_57 = NULL,q_57 = NULL,z_12 = NULL;
  t = SSLgetAnnotations(g_57);
  l_57 = t;
  t = SSL_is_string(e_57);
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_57, f_57);
  z_12 = t;
  t = SSLsetAnnotations(z_12, l_57);
  if(match_cons(t, sym__2))
    {
      h_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(h_57, k_57, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm u_57 = NULL,w_57 = NULL,x_57 = NULL;
  u_57 = t;
  if(match_cons(t, sym__2))
    {
      w_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_57(u_57, t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            {
              ATerm y_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_57(w_57, x_57, u_57, t);
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = y_26;
                  t = a_58(w_57, x_57, u_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_57(u_57, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,s_58 = NULL;
  s_58 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_58, term_c_27);
        t = s_10(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        {
          ATerm x_12 = NULL,a_13 = NULL;
          t = term_d_27;
          a_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_27, s_58);
          t = q_10(a_13, s_58, t);
          x_12 = t;
          t = SSL_perror(x_12);
          _fail(t);
        }
      }
  }
  e_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_10(f_58, t);
  d_58 = t;
  t = e_58;
  t = fclose_0_0(t);
  t = d_58;
  return(t);
}
static ATerm t_10 (ATerm p_35, ATerm q_35, ATerm t)
{
  t = SSL_access(p_35, q_35);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm f_59 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_27);
      f_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_59, (ATerm) ATinsert(ATempty, term_e_27));
      t = t_10(d_59, f_59, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_11 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm i_59 = NULL;
  t = lookup_table_0_1(k_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(l_22, i_59, t);
  return(t);
}
static ATerm v_10 (ATerm w_20, ATerm x_20, ATerm t)
{
  ATerm k_59 = NULL,n_59 = NULL;
  n_59 = t;
  {
    ATerm f_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
        t = b_11(w_20, x_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_27 = ATgetFirst((ATermList) t);
            k_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_27);
        {
          ATerm p_59 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_20, x_20, k_59);
          t = lookup_table_0_1(w_20, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_11(x_20, k_59, p_59, t);
          t = (ATerm) ATmakeAppl(sym__3, w_20, x_20, k_59);
        }
      }
    else
      {
        t = f_27;
        {
          ATerm r_59 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
          t = lookup_table_0_1(w_20, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_10(x_20, r_59, t);
          t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
        }
      }
  }
  t = n_59;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  z_59 = t;
  t = h_103(t);
  y_59 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_60 = NULL;
        t = term_j_14;
        d_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_59, term_j_14);
        t = b_11(y_59, d_60, t);
        {
          ATerm q_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_27;
            }
        }
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_59 = ATgetFirst((ATermList) t);
      w_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_59, term_j_14, w_59);
  t = lookup_table_0_1(y_59, t);
  c_60 = t;
  t = term_j_14;
  a_60 = t;
  t = c_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(a_60, w_59, b_60, t);
  t = x_59;
  {
    static ATerm r_7 (ATerm t)
    {
      ATerm h_60 = NULL;
      h_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_59, h_60);
      t = v_10(y_59, h_60, t);
      return(t);
    }
    t = map_1_0(r_7, t);
  }
  t = z_59;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_89(t);
      t = m_89(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      t = m_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,n_60 = NULL,o_60 = NULL,r_60 = NULL,u_60 = NULL;
  k_60 = t;
  t = g_103(t);
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_60, term_j_14);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_27 = ATgetArgument(t, 0);
            ATerm y_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_14;
        b_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_60, term_j_14);
        t = b_11(j_60, b_61, t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATempty;
      }
  }
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_60, term_j_14, (ATerm) ATinsert(CheckATermList(l_60), (ATerm) ATempty));
  t = lookup_table_0_1(j_60, t);
  u_60 = t;
  t = term_j_14;
  n_60 = t;
  t = (ATerm) ATinsert(CheckATermList(l_60), (ATerm) ATempty);
  o_60 = t;
  t = u_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(n_60, o_60, r_60, t);
  t = k_60;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_v_14;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm k_61 = NULL;
  k_61 = t;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_61);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = k_61;
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm e_61 = NULL;
  static ATerm u_7 (ATerm t)
  {
    ATerm f_61 = NULL;
    f_61 = t;
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_61 = NULL,h_61 = NULL;
          t = term_v_14;
          g_61 = t;
          t = term_j_14;
          h_61 = t;
          t = term_e_28;
          t = b_11(g_61, h_61, t);
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_61 != NULL) && (e_61 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_61 = ATgetFirst((ATermList) t);
        {
          ATerm g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_61;
    t = map_1_0(v_7, t);
    t = f_61;
    t = end_scope_1_0(w_7, t);
    return(t);
  }
  t = begin_scope_1_0(s_7, t);
  t = restore_always_2_0(g_85, u_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  n_61 = t;
  t = term_z_14;
  t = whoami_0_0(t);
  o_61 = t;
  t = term_r_13;
  q_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_28), o_61), term_h_28);
  r_61 = t;
  t = SSL_printnl(q_61, r_61);
  t = term_v_16;
  p_61 = t;
  t = SSL_exit(p_61);
  t = n_61;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm t_61 = NULL;
  t_61 = t;
  if(match_string(t, "-k"))
    {
      t = t_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_61;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t = SSL_string_to_int(u_61);
  v_61 = t;
  t = term_j_28;
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, v_61);
  t = e_11(w_61, v_61, t);
  t = u_61;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, d_8, f_8, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  if(match_string(t, "-S"))
    {
      t = y_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_61;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  t = term_m_28;
  z_61 = t;
  t = term_d_16;
  a_62 = t;
  t = term_o_28;
  t = e_11(z_61, a_62, t);
  t = term_p_28;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  b_62 = t;
  t = SSL_string_to_int(b_62);
  c_62 = t;
  t = term_m_28;
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, c_62);
  t = e_11(d_62, c_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_62);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL;
  t = term_t_28;
  e_62 = t;
  t = term_z_14;
  f_62 = t;
  t = term_u_28;
  t = e_11(e_62, f_62, t);
  t = term_w_28;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_8, k_8, m_8, t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_8, p_8, q_8, t);
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            t = Option_3_0(r_8, s_8, t_8, t);
          }
      }
    }
  return(t);
}
static ATerm e_11 (ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  t = term_b_13;
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_13, h_36, i_36);
  t = lookup_table_0_1(g_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(h_36, i_36, h_62, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_13, h_36, i_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
      t = term_z_14;
      t = h_0(t);
      n_62 = t;
      t = term_c_29;
      o_62 = t;
      t = term_d_29;
      p_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, n_62);
      t = c_11(o_62, p_62, n_62, t);
      _fail(t);
    }
  else
    {
      ATerm s_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_62 = ATgetFirst((ATermList) t);
          m_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_62;
      t = d_0(t);
      t = term_z_14;
      t = g_0(t);
      s_62 = t;
      t = (ATerm) ATinsert(CheckATermList(m_62), s_62);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm u_62 = NULL;
  u_62 = t;
  if(match_string(t, "-o"))
    {
      t = u_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_62;
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL;
  v_62 = t;
  t = term_e_13;
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, v_62);
  t = e_11(w_62, v_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_62);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_8, v_8, a_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_62 = NULL;
  y_62 = t;
  if(match_string(t, "-i"))
    {
      t = y_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_62;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  z_62 = t;
  t = term_i_29;
  a_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, z_62);
  t = e_11(a_63, z_62, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_62);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_9, c_9, e_9, t);
  return(t);
}
static ATerm c_11 (ATerm r_20, ATerm s_20, ATerm q_20, ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_29 = ATgetArgument(t, 0);
            ATerm s_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        t = b_11(r_20, s_20, t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATempty;
      }
  }
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_20, s_20, (ATerm) ATinsert(CheckATermList(d_63), q_20));
  t = lookup_table_0_1(r_20, t);
  g_63 = t;
  t = (ATerm) ATinsert(CheckATermList(d_63), q_20);
  e_63 = t;
  t = g_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(s_20, e_63, f_63, t);
  t = c_63;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
      t = term_z_14;
      t = p_0(t);
      r_63 = t;
      t = term_c_29;
      s_63 = t;
      t = term_d_29;
      t_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, r_63);
      t = c_11(s_63, t_63, r_63, t);
      _fail(t);
    }
  else
    {
      ATerm x_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_63 = ATgetFirst((ATermList) t);
          o_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_63 = ATgetFirst((ATermList) t);
          q_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_63;
      t = m_0(t);
      t = p_63;
      t = o_0(t);
      x_63 = t;
      t = (ATerm) ATinsert(CheckATermList(q_63), x_63);
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm z_63 = NULL;
  z_63 = t;
  if(match_string(t, "-w"))
    {
      t = z_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = z_63;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  t = SSL_string_to_int(a_64);
  b_64 = t;
  t = term_q_16;
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, b_64);
  t = e_11(c_64, b_64, t);
  t = a_64;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm Abox_2_text_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_9, i_9, j_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,a_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_14;
  t = whoami_0_0(t);
  d_64 = t;
  t = term_r_13;
  f_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_29), d_64);
  a_65 = t;
  t = SSL_printnl(f_64, a_65);
  t = term_v_16;
  e_64 = t;
  t = SSL_exit(e_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL;
  t = term_b_13;
  g_65 = t;
  t = term_v_29;
  h_65 = t;
  t = term_x_29;
  t = b_11(g_65, h_65, t);
  return(t);
}
static ATerm w_10 (ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm y_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_67, v_67);
      LocalPopChoice(a_30);
    }
  else
    {
      t = y_29;
      t = SSL_addr(u_67, v_67);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  j_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_65;
      t = m_99(t);
    }
  else
    {
      ATerm o_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_65 = ATgetFirst((ATermList) t);
          l_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_65;
      t = foldr_2_0(m_99, n_99, t);
      o_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_65, o_65);
      t = n_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(s_13, t_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_65 = NULL,o_13 = NULL,p_13 = NULL;
  t = times_0_0(t);
  p_13 = t;
  t = SSL_explode_term(p_13);
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  t = foldr_2_0(q_9, s_9, t);
  r_65 = t;
  t = SSL_TicksToSeconds(r_65);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  if(match_cons(t, sym__2))
    {
      d_66 = ATgetArgument(t, 0);
      e_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_66;
        if((d_66 != t))
          {
            _fail(t);
          }
        t = c_66;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATmakeAppl(sym__2, d_66, e_66);
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_66, e_66);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = SSL_gtr(d_66, e_66);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_66, e_66);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
        t = term_b_13;
        l_66 = t;
        t = term_m_28;
        m_66 = t;
        t = term_k_30;
        t = b_11(l_66, m_66, t);
        k_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_66, term_v_16);
        t = geq_0_0(t);
        t = i_66;
        t = j_102(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = i_66;
      }
  }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm o_66 = NULL,r_66 = NULL,t_66 = NULL,u_66 = NULL;
  t = run_time_0_0(t);
  o_66 = t;
  t = term_z_14;
  t = whoami_0_0(t);
  r_66 = t;
  t = term_r_13;
  t_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), o_66), term_l_30), r_66);
  u_66 = t;
  t = SSL_printnl(t_66, u_66);
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), o_66), term_l_30), r_66));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_16;
  v_66 = t;
  t = SSL_exit(v_66);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL;
  g_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_67 = ATgetArgument(t, 0);
          {
            ATerm s_14 = NULL,j_13 = NULL;
            t = SSLgetAnnotations(g_67);
            s_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_67);
            j_13 = t;
            t = SSLsetAnnotations(j_13, s_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_66 = NULL,z_66 = NULL;
      t = term_b_13;
      y_66 = t;
      t = term_q_30;
      z_66 = t;
      t = term_r_30;
      t = b_11(y_66, z_66, t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = fetch_1_0(d_10, t);
    }
  t = n_106(t);
  return(t);
}
static ATerm f_11 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm i_67 = NULL;
  t = SSL_hashtable_put(l_25, j_25, k_25);
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_67);
  return(t);
}
static ATerm g_11 (ATerm m_25, ATerm n_25, ATerm t)
{
  t = SSL_hashtable_get(n_25, m_25);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_22, ATerm t)
{
  ATerm r_67 = NULL;
  t = table_hashtable_0_0(t);
  r_67 = t;
  {
    ATerm u_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL;
        t = r_67;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_11(d_22, c_15, t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = u_30;
        {
          ATerm m_15 = NULL;
          t = d_22;
          t = table_create_0_0(t);
          t = r_67;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_11(d_22, m_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_25, ATerm s_25, ATerm t)
{
  ATerm w_67 = NULL;
  t = SSL_hashtable_create(r_25, s_25);
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_67);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,d_68 = NULL,e_68 = NULL;
  x_67 = t;
  t = term_x_30;
  d_68 = t;
  t = term_y_30;
  e_68 = t;
  t = x_67;
  t = new_hashtable_0_2(d_68, e_68, t);
  y_67 = t;
  t = x_67;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(x_67, y_67, z_67, t);
  t = x_67;
  return(t);
}
static ATerm y_10 (ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm f_68 = NULL;
  t = SSL_hashtable_remove(p_25, o_25);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_68);
  return(t);
}
static ATerm z_10 (ATerm t_25, ATerm t)
{
  ATerm g_68 = NULL;
  t = SSL_hashtable_destroy(t_25);
  g_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_68 = NULL;
  t = SSL_table_hashtable();
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  i_68 = t;
  t = table_hashtable_0_0(t);
  j_68 = t;
  t = lookup_table_0_1(i_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_10(l_68, t);
  t = j_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(i_68, k_68, t);
  t = i_68;
  return(t);
}
ATerm map_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  static ATerm f_69 (ATerm t)
  {
    ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
    c_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_69;
      }
    else
      {
        ATerm t_15 = NULL,w_15 = NULL,x_15 = NULL,m_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_69 = ATgetFirst((ATermList) t);
            e_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_69);
        t_15 = t;
        t = d_69;
        t = g_92(t);
        w_15 = t;
        t = e_69;
        t = f_69(t);
        x_15 = t;
        t = (ATerm) ATinsert(CheckATermList(x_15), w_15);
        m_13 = t;
        t = SSLsetAnnotations(m_13, t_15);
      }
    return(t);
  }
  t = f_69(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_69 = ATgetFirst((ATermList) t);
      j_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_69 = NULL,o_69 = NULL;
        static ATerm e_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_69)), not_null(o_69));
          return(t);
        }
        t = j_69;
        t = l_0(t);
        if(((n_69 != NULL) && (n_69 != t)))
          _fail(t);
        else
          n_69 = t;
        t = i_69;
        t = j_0(t);
        if(((o_69 != NULL) && (o_69 != t)))
          _fail(t);
        else
          o_69 = t;
        t = j_69;
        t = reverse_acc_2_0(j_0, e_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_14;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL,q_13 = NULL;
  w_69 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_69);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_69);
  q_13 = t;
  t = SSLsetAnnotations(q_13, u_69);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm y_69 = NULL;
  y_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_69), term_z_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  ATerm b_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_69 = NULL,t_69 = NULL;
      t = term_b_13;
      s_69 = t;
      t = term_v_29;
      t_69 = t;
      t = term_x_29;
      t = b_11(s_69, t_69, t);
      LocalPopChoice(k_31);
    }
  else
    {
      t = b_31;
      t = fetch_1_0(f_10, t);
    }
  t = term_l_31;
  t = echo_0_0(t);
  t = term_c_29;
  q_69 = t;
  t = term_d_29;
  r_69 = t;
  t = term_n_31;
  t = b_11(q_69, r_69, t);
  t = reverse_acc_2_0(_id, i_10, t);
  t = map_1_0(j_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  static ATerm x_70 (ATerm t)
  {
    ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
    u_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_70 = ATgetFirst((ATermList) t);
        w_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_16 = NULL,o_16 = NULL,u_13 = NULL;
          t = SSLgetAnnotations(u_70);
          k_16 = t;
          t = v_70;
          t = q_92(t);
          o_16 = t;
          t = (ATerm) ATinsert(CheckATermList(w_70), o_16);
          u_13 = t;
          t = SSLsetAnnotations(u_13, k_16);
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          {
            ATerm w_16 = NULL,f_17 = NULL,v_13 = NULL;
            t = SSLgetAnnotations(u_70);
            w_16 = t;
            t = w_70;
            t = x_70(t);
            f_17 = t;
            t = (ATerm) ATinsert(CheckATermList(f_17), v_70);
            v_13 = t;
            t = SSLsetAnnotations(v_13, w_16);
          }
        }
    }
    return(t);
  }
  t = x_70(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_31 = ATgetFirst((ATermList) t);
                ATerm u_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_71;
          }
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATinsert(ATempty, b_71);
      }
  }
  c_71 = t;
  t = term_h_13;
  d_71 = t;
  t = SSL_printnl(d_71, c_71);
  t = b_71;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL;
  t = term_b_13;
  h_71 = t;
  t = term_v_29;
  i_71 = t;
  t = term_x_29;
  t = b_11(h_71, i_71, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL;
  t = term_v_31;
  j_71 = t;
  t = term_z_14;
  k_71 = t;
  t = term_w_31;
  t = e_11(j_71, k_71, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  t = term_v_31;
  n_71 = t;
  t = term_z_14;
  o_71 = t;
  t = term_w_31;
  t = e_11(n_71, o_71, t);
  t = term_d_32;
  l_71 = t;
  t = term_z_14;
  m_71 = t;
  t = term_e_32;
  t = e_11(l_71, m_71, t);
  t = term_f_32;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_10, d_11, p_11, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = Option_3_0(s_11, t_11, z_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,d_14 = NULL;
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
  t = r_70(t);
  s_71 = t;
  t = r_71;
  t = s_70(t);
  t_71 = t;
  t = (ATerm) ATinsert(CheckATermList(t_71), s_71);
  d_14 = t;
  t = SSLsetAnnotations(d_14, p_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,e_72 = NULL,f_72 = NULL,x_17 = NULL;
  z_71 = t;
  {
    ATerm j_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_32;
        t = l_108(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = j_32;
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
  t = term_v_29;
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, b_72);
  t = e_11(f_72, b_72, t);
  t = c_72;
  {
    static ATerm p_72 (ATerm t)
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_72 = NULL;
              i_72 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_72;
              LocalPopChoice(s_32);
            }
          else
            {
              t = q_32;
              t = l_108(t);
              t = Cons_2_0(_id, p_72, t);
            }
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          {
            ATerm l_72 = NULL,m_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_72 = ATgetFirst((ATermList) t);
                m_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_72), (ATerm) ATmakeAppl(sym_Undefined_1, l_72));
          }
        }
      return(t);
    }
    t = p_72(t);
  }
  e_72 = t;
  t = (ATerm) ATinsert(CheckATermList(e_72), (ATerm) ATmakeAppl(sym_Program_1, b_72));
  x_17 = t;
  t = SSLsetAnnotations(x_17, a_72);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  if(match_string(t, "--help"))
    {
      t = c_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_73;
        }
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL;
  t = term_q_30;
  d_73 = t;
  t = term_z_14;
  e_73 = t;
  t = term_t_32;
  t = e_11(d_73, e_73, t);
  t = term_w_32;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  w_72 = t;
  t = term_c_29;
  x_72 = t;
  t = term_z_32;
  t = lookup_table_0_1(x_72, t);
  b_73 = t;
  t = term_d_29;
  y_72 = t;
  t = (ATerm) ATempty;
  z_72 = t;
  t = b_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(y_72, z_72, a_73, t);
  t = w_72;
  {
    static ATerm a_12 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_108(t);
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          {
            ATerm e_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_12, c_12, d_12, t);
                LocalPopChoice(f_33);
              }
            else
              {
                t = e_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_12, t);
  }
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_73 = NULL;
        p_73 = t;
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL;
              t = p_73;
              {
                ATerm k_33 = t;
                int n_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_17 = NULL,o_17 = NULL;
                    t = term_b_13;
                    n_17 = t;
                    t = term_q_30;
                    o_17 = t;
                    t = term_r_30;
                    t = b_11(n_17, o_17, t);
                    LocalPopChoice(n_33);
                  }
                else
                  {
                    t = k_33;
                    t = fetch_1_0(e_12, t);
                  }
              }
              t = p_73;
              t = default_system_usage_0_0(t);
              t = term_d_16;
              m_17 = t;
              t = SSL_exit(m_17);
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              {
                ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
                t = term_b_13;
                u_17 = t;
                t = term_v_31;
                v_17 = t;
                t = term_o_33;
                t = b_11(u_17, v_17, t);
                t = p_73;
                t = default_system_about_0_0(t);
                t = term_d_16;
                t_17 = t;
                t = SSL_exit(t_17);
              }
            }
        }
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm p_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
              static ATerm f_12 (ATerm t)
              {
                ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,z_17 = NULL;
                v_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_73);
                t_73 = t;
                t = u_73;
                if(((u_72 != NULL) && (u_72 != t)))
                  _fail(t);
                else
                  u_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_73);
                z_17 = t;
                t = SSLsetAnnotations(z_17, t_73);
                return(t);
              }
              t = fetch_1_0(f_12, t);
              t = term_r_13;
              r_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_72)), term_s_33);
              s_73 = t;
              t = SSL_printnl(r_73, s_73);
              t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_72)), term_s_33));
              t = default_system_usage_0_0(t);
              t = term_v_16;
              q_73 = t;
              t = SSL_exit(q_73);
              LocalPopChoice(r_33);
            }
          else
            {
              t = p_33;
            }
        }
      }
  }
  v_72 = t;
  t = term_c_29;
  t = table_destroy_0_0(t);
  t = v_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
  t = parse_options_1_0(p_106, t);
  a_74 = t;
  t = term_t_33;
  t = table_create_0_0(t);
  t = term_t_33;
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_33, term_u_33, a_74);
  t = lookup_table_0_1(b_74, t);
  e_74 = t;
  t = term_u_33;
  c_74 = t;
  t = e_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(c_74, a_74, d_74, t);
  t = a_74;
  t = r_106(t);
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_106, t);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_text_options_0_0(t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            {
              ATerm f_34 = t;
              int g_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(g_34);
                }
              else
                {
                  t = f_34;
                  {
                    ATerm h_34 = t;
                    int i_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(m_12, n_12, o_12, t);
                        LocalPopChoice(i_34);
                      }
                    else
                      {
                        t = h_34;
                        {
                          ATerm j_34 = t;
                          int k_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(k_34);
                            }
                          else
                            {
                              t = j_34;
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
static ATerm l_12 (ATerm t)
{
  t = xtc_temp_files_1_0(p_12, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  t = term_l_34;
  g_74 = t;
  t = term_z_14;
  h_74 = t;
  t = term_m_34;
  t = e_11(g_74, h_74, t);
  t = term_n_34;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
      t = term_b_13;
      n_74 = t;
      t = term_i_29;
      o_74 = t;
      t = term_r_34;
      t = b_11(n_74, o_74, t);
      m_74 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_74);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = term_l_13;
    }
  t = read_from_0_0(t);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_74, term_d_16);
  t = try_abox2text_0_0(t);
  l_74 = t;
  t = SSL_explode_term(l_74);
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_34 = ATgetArgument(t, 1);
        if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
          {
            k_74 = ATgetFirst((ATermList) t_34);
            {
              ATerm u_34 = (ATerm) ATgetNext((ATermList) t_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_74, term_y_34);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_12, default_usage_0_0, _id, l_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
