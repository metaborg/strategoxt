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
ATerm term_o_38;
ATerm term_b_38;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_h_37;
ATerm term_d_37;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_e_36;
ATerm term_v_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_k_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_e_31;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_y_25;
ATerm term_g_20;
ATerm term_u_19;
ATerm term_c_19;
ATerm term_b_18;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_t_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_a_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_t_14);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_p_16);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_m_15);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_m_15);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_o_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_q_31);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_e_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_m_31);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_m_15);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_m_15);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_m_15);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__3, term_k_31, term_m_31, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_z_34);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_o_32);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm t_10 (ATerm h_42, ATerm i_42, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_85 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_90 (ATerm), ATerm t);
static ATerm u_3 (ATerm d_3, ATerm t);
static ATerm v_3 (ATerm g_3, ATerm l_3, ATerm m_3, ATerm t);
static ATerm c_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm j_9 (ATerm u_102 (ATerm), ATerm x_36, ATerm v_36, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm m_10 (ATerm z_91 (ATerm), ATerm f_28, ATerm u_308, ATerm t);
ATerm at_suffix_1_0 (ATerm l_92 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_92 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm j_118 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm n_10 (ATerm v_18, ATerm w_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm k_9 (ATerm y_14, ATerm w_14, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm l_9 (ATerm n_0, ATerm u_14, ATerm r_14, ATerm t);
static ATerm m_9 (ATerm r_27, ATerm s_27, ATerm t);
static ATerm n_9 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm p_15, ATerm o_15, ATerm t);
static ATerm o_9 (ATerm p_83 (ATerm), ATerm k_15, ATerm i_15, ATerm l_15, ATerm j_15, ATerm t);
ATerm foldl_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm q_9 (ATerm c_68, ATerm d_68, ATerm t);
static ATerm s_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm x_0, ATerm c_1, ATerm u_0, ATerm t);
ATerm thread_map_1_0 (ATerm n_99 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_100 (ATerm), ATerm t);
static ATerm t_9 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm t);
static ATerm a_20 (ATerm h_19, ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm v_9 (ATerm i_64, ATerm j_64, ATerm k_64, ATerm t);
static ATerm w_9 (ATerm o_68, ATerm p_68, ATerm t);
static ATerm x_9 (ATerm u_68, ATerm v_68, ATerm t);
static ATerm y_9 (ATerm u_64, ATerm v_64, ATerm q_64, ATerm t);
static ATerm z_9 (ATerm b_65, ATerm z_64, ATerm a_65, ATerm t);
static ATerm a_10 (ATerm m_64, ATerm n_64, ATerm o_64, ATerm t);
static ATerm g_26 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm j_26 (ATerm n_24, ATerm p_24, ATerm t);
static ATerm k_26 (ATerm y_24, ATerm z_24, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm g_10 (ATerm e_17, ATerm d_17, ATerm z_16, ATerm b_17, ATerm y_16, ATerm t);
ATerm genzip_4_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm q_117 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_35 (ATerm i_35, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm FitToMax_1_0 (ATerm t_83 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm z_56 (ATerm m_48, ATerm n_48, ATerm o_48, ATerm p_48, ATerm q_48, ATerm t);
static ATerm b_57 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm t);
static ATerm c_57 (ATerm s_50, ATerm t_50, ATerm u_50, ATerm v_50, ATerm t);
static ATerm d_57 (ATerm q_52, ATerm r_52, ATerm s_52, ATerm t_52, ATerm t);
static ATerm m_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm c_58 (ATerm t_57, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_10 (ATerm t_26, ATerm t);
static ATerm p_10 (ATerm r_66, ATerm s_66, ATerm t);
static ATerm q_10 (ATerm y_35, ATerm z_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_60 (ATerm t_58, ATerm t);
static ATerm g_60 (ATerm z_58, ATerm a_59, ATerm d_59, ATerm t);
static ATerm h_60 (ATerm q_59, ATerm r_59, ATerm s_59, ATerm t);
static ATerm r_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm s_10 (ATerm p_35, ATerm q_35, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm a_11 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm u_10 (ATerm w_20, ATerm x_20, ATerm t);
ATerm end_scope_1_0 (ATerm r_102 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_10 (ATerm w_67, ATerm x_67, ATerm t);
ATerm foldr_2_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_101 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm need_help_1_0 (ATerm x_105 (ATerm), ATerm t);
static ATerm e_11 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t);
static ATerm f_11 (ATerm m_25, ATerm n_25, ATerm t);
ATerm lookup_table_0_1 (ATerm d_22, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_25, ATerm s_25, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_10 (ATerm o_25, ATerm p_25, ATerm t);
static ATerm y_10 (ATerm t_25, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_92 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm d_11 (ATerm h_36, ATerm i_36, ATerm t);
static ATerm b_11 (ATerm r_20, ATerm s_20, ATerm q_20, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm parse_options_1_0 (ATerm u_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
static ATerm t_12 (ATerm t);
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
  ATerm t_1 = NULL,u_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = t_1;
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
        t = (ATerm) ATmakeAppl(sym__2, u_1, e_0);
        t = t_10(u_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
        LocalPopChoice(a_13);
      }
    else
      {
        t = y_12;
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = t_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm g_13 = t;
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
                            if((u_1 != t))
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
                    t = g_13;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_1, v_0);
              t = t_10(u_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = t_1;
              t = q_0(t);
              if((u_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
            }
        }
      }
  }
  return(t);
}
static ATerm t_10 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_copy(h_42, i_42);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm l_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL;
      t = term_p_13;
      m_2 = t;
      t = term_q_13;
      n_2 = t;
      t = term_r_13;
      t = a_11(m_2, n_2, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = l_13;
      t = term_s_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_1 = NULL,j_1 = NULL;
      t = term_q_13;
      {
        ATerm t_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 = NULL,p_1 = NULL;
            t = term_p_13;
            k_1 = t;
            t = term_q_13;
            p_1 = t;
            t = term_r_13;
            t = a_11(k_1, p_1, t);
            LocalPopChoice(v_13);
          }
        else
          {
            t = t_13;
            t = term_s_13;
          }
      }
      e_1 = t;
      t = term_w_13;
      j_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_13, e_1);
      t = t_10(j_1, e_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm x_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(k_85, t);
    return(t);
  }
  t = k_85(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,s_2 = NULL,x_2 = NULL;
  p_2 = t;
  t = m_90(t);
  q_2 = t;
  t = term_y_13;
  s_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_2), q_2);
  x_2 = t;
  t = SSL_printnl(s_2, x_2);
  t = p_2;
  return(t);
}
static ATerm u_3 (ATerm d_3, ATerm t)
{
  t = d_3;
  {
    ATerm z_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_14 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_13;
      }
  }
  t = term_g_14;
  t = debug_1_0(c_0, t);
  t = (ATerm) ATmakeAppl(sym__2, d_3, term_i_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm v_3 (ATerm g_3, ATerm l_3, ATerm m_3, ATerm t)
{
  t = SSL_open_file(g_3, l_3);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_3(r_3, t);
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = v_3(s_3, t_3, r_3, t);
          }
      }
    }
  else
    {
      t = u_3(r_3, t);
    }
  return(t);
}
static ATerm j_9 (ATerm u_102 (ATerm), ATerm x_36, ATerm v_36, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  z_3 = t;
  t = u_102(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_3, x_36, v_36);
  t = b_11(w_3, x_36, v_36, t);
  {
    ATerm o_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 = NULL;
        t = term_t_14;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_3, term_t_14);
        t = a_11(w_3, e_4, t);
        {
          ATerm v_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_14;
            }
        }
        LocalPopChoice(s_14);
      }
    else
      {
        t = o_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      y_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_3, term_t_14, (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATinsert(CheckATermList(x_3), x_36)));
  t = lookup_table_0_1(w_3, t);
  d_4 = t;
  t = term_t_14;
  a_4 = t;
  t = (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATinsert(CheckATermList(x_3), x_36));
  b_4 = t;
  t = d_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(a_4, b_4, c_4, t);
  t = z_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 = NULL,a_2 = NULL;
      n_4 = t;
      t = term_b_15;
      a_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_4, term_b_15);
      t = p_10(n_4, a_2, t);
      g_4 = t;
      t = SSL_mkstemp(g_4);
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      {
        ATerm o_4 = NULL;
        t = term_c_15;
        o_4 = t;
        t = SSL_perror(o_4);
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
  t = term_g_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t = P__tmpdir_0_0(t);
  u_4 = t;
  t = term_h_15;
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, term_h_15);
  t = p_10(u_4, v_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_15;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, term_m_15);
  t = j_9(f_0, s_4, t_4, t);
  t = SSL_close(r_4);
  t = s_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  y_4 = t;
  t = xtc_new_file_0_0(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_i_14);
  t = open_file_0_0(t);
  t = y_4;
  {
    static ATerm i_0 (ATerm t);
    static ATerm i_0 (ATerm t)
    {
      ATerm f_5 = NULL;
      f_5 = t;
      {
        ATerm n_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 = NULL,i_2 = NULL;
            t = SSL_is_string(f_5);
            d_2 = t;
            t = (ATerm) ATinsert(ATempty, d_2);
            i_2 = t;
            t = SSL_print(z_4, i_2);
            t = d_2;
            LocalPopChoice(q_15);
          }
        else
          {
            t = n_15;
            t = f_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(i_0, t);
  }
  t = SSL_close_file(z_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_4);
  return(t);
}
static ATerm m_10 (ATerm z_91 (ATerm), ATerm f_28, ATerm u_308, ATerm t)
{
  static ATerm k_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm o_40 = NULL;
    o_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_28, o_40);
    t = z_91(t);
    t = o_40;
    return(t);
  }
  t = u_308;
  t = SRTS_one(k_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  static ATerm d_41 (ATerm t);
  static ATerm d_41 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_92(t);
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        {
          ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,h_8 = NULL,m_8 = NULL,f_1 = NULL;
          z_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_41 = ATgetFirst((ATermList) t);
              b_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_40);
          h_8 = t;
          t = b_41;
          t = d_41(t);
          m_8 = t;
          t = (ATerm) ATinsert(CheckATermList(m_8), a_41);
          f_1 = t;
          t = SSLsetAnnotations(f_1, h_8);
        }
      }
    return(t);
  }
  t = d_41(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    ATerm h_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,i_1 = NULL,h_1 = NULL;
    t_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_41 = ATgetFirst((ATermList) t);
        p_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_41);
    n_41 = t;
    t = o_41;
    t = d_92(t);
    r_41 = t;
    t = (ATerm) ATinsert(CheckATermList(p_41), r_41);
    h_1 = t;
    t = SSLsetAnnotations(h_1, n_41);
    s_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_41 = ATgetFirst((ATermList) t);
        m_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_41);
    h_41 = t;
    t = m_41;
    if(((f_41 != NULL) && (f_41 != t)))
      _fail(t);
    else
      f_41 = t;
    t = (ATerm) ATinsert(CheckATermList(m_41), l_41);
    i_1 = t;
    t = SSLsetAnnotations(i_1, h_41);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_0, t);
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_41, not_null(f_41));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,j_42 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(j_118, t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      {
        ATerm y_41 = NULL;
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_41, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      d_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_42;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_15 = ATgetFirst((ATermList) t);
              ATerm y_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_42;
          t = list_tokenize_1_0(j_118, t);
        }
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
      t = j_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, d_42);
        }
      else
        {
          ATerm r_42 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_16 = ATgetFirst((ATermList) t);
              ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_42;
          t = list_tokenize_1_0(j_118, t);
          r_42 = t;
          t = (ATerm) ATinsert(CheckATermList(r_42), d_42);
        }
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm h_43 = NULL;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      if((h_43 != ATgetArgument(t, 1)))
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
  ATerm i_43 = NULL;
  i_43 = t;
  t = SSL_implode_string(i_43);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,n_1 = NULL;
  z_42 = t;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      x_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_42);
  u_42 = t;
  t = SSL_explode_string(x_42);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_42, y_42);
  n_1 = t;
  t = SSLsetAnnotations(n_1, u_42);
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_42;
  {
    static ATerm s_0 (ATerm t);
    static ATerm s_0 (ATerm t)
    {
      ATerm b_43 = NULL;
      b_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_43, s_42);
      t = m_10(t_0, b_43, s_42, t);
      return(t);
    }
    t = list_tokenize_1_0(s_0, t);
  }
  t = map_1_0(z_0, t);
  return(t);
}
static ATerm n_10 (ATerm v_18, ATerm w_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_k_16), v_18);
  t = string_tokenize_0_0(t);
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_43 = NULL,q_43 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_p_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_43 = ATgetFirst((ATermList) t);
                q_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(p_43);
          }
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm s_43 = NULL,t_43 = NULL;
          t = last_0_0(t);
          t_43 = t;
          t = SSL_strlen(t_43);
          s_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_43, w_18);
          t = q_9(s_43, w_18, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm q_16 = t;
  if((PushChoice() == 0))
    {
      ATerm v_43 = NULL,w_43 = NULL;
      if(match_cons(t, sym__2))
        {
          v_43 = ATgetArgument(t, 0);
          w_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_43, w_43);
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            t = SSL_gtr(v_43, w_43);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_43 = NULL,y_43 = NULL;
      t = term_p_13;
      x_43 = t;
      t = term_a_17;
      y_43 = t;
      t = term_c_17;
      t = a_11(x_43, y_43, t);
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      t = term_i_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_40 = ATgetFirst((ATermList) t);
      j_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_40;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_40;
    }
  else
    {
      t = j_40;
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
static ATerm d_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm y_14, ATerm w_14, ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,q_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  t = y_14;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(b_1, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = term_p_16;
      }
  }
  b_6 = t;
  t = term_n_17;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_6, term_n_17);
  t = v_10(b_6, c_6, t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_6, term_k_16);
  t = copy_char_0_0(t);
  k_5 = t;
  t = y_14;
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(d_1, t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = term_p_16;
      }
  }
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_5, term_q_17);
  t = copy_char_0_0(t);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_14, term_q_17);
  t = copy_char_0_0(t);
  m_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_5), l_5), k_5);
  o_5 = t;
  t = SSL_concat_strings(o_5);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm k_6 = NULL,o_6 = NULL;
  o_6 = t;
  t = SSL_explode_term(o_6);
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
          {
            k_6 = ATgetFirst((ATermList) t_17);
            {
              ATerm u_17 = (ATerm) ATgetNext((ATermList) t_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_6;
  return(t);
}
static ATerm l_9 (ATerm n_0, ATerm u_14, ATerm r_14, ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,i_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_0, r_14);
  t = k_9(n_0, r_14, t);
  e_6 = t;
  t = u_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_14;
  t = map_1_0(g_1, t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_6, i_6);
  t = m_9(e_6, i_6, t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_6, d_6);
  return(t);
}
static ATerm m_9 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  t = s_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_27;
    }
  else
    {
      ATerm y_2 = NULL,b_3 = NULL,q_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_7 = ATgetFirst((ATermList) t);
          m_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_27);
      y_2 = t;
      t = m_7;
      {
        static ATerm i_3 (ATerm t);
        static ATerm i_3 (ATerm t)
        {
          ATerm w_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 = NULL;
              c_3 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_3;
              LocalPopChoice(y_17);
            }
          else
            {
              t = w_17;
              {
                ATerm f_3 = NULL;
                t = Cons_2_0(_id, i_3, t);
                f_3 = t;
                t = (ATerm) ATinsert(CheckATermList(f_3), r_27);
              }
            }
          return(t);
        }
        t = i_3(t);
      }
      b_3 = t;
      t = (ATerm) ATinsert(CheckATermList(b_3), l_7);
      q_1 = t;
      t = SSLsetAnnotations(q_1, y_2);
    }
  return(t);
}
static ATerm n_9 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm p_15, ATerm o_15, ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL;
  t = term_m_15;
  t = r_83(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_15, z_7);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm a_8 = NULL,b_8 = NULL,f_8 = NULL;
          t = term_y_13;
          b_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_15, z_7)), term_b_18);
          f_8 = t;
          t = SSL_printnl(b_8, f_8);
          t = term_n_17;
          a_8 = t;
          t = SSL_exit(a_8);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_15, z_7)), term_b_18);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_15;
  t = q_83(t);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_7, x_7);
  t = v_10(s_7, x_7, t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_7), w_7));
  return(t);
}
static ATerm o_9 (ATerm p_83 (ATerm), ATerm k_15, ATerm i_15, ATerm l_15, ATerm j_15, ATerm t)
{
  ATerm g_8 = NULL,j_8 = NULL,k_8 = NULL,n_8 = NULL,r_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_15, l_15);
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        {
          ATerm s_8 = NULL,v_8 = NULL,w_8 = NULL;
          t = term_y_13;
          v_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_15, l_15)), term_b_18);
          w_8 = t;
          t = SSL_printnl(v_8, w_8);
          t = term_n_17;
          s_8 = t;
          t = SSL_exit(s_8);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_15, l_15)), term_b_18);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_15;
  t = get_width_0_0(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, r_8);
  t = leq_0_0(t);
  t = term_m_15;
  t = p_83(t);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, n_8);
  t = v_10(j_8, n_8, t);
  k_8 = t;
  t = (ATerm) ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_15), g_8), k_8));
  return(t);
}
ATerm foldl_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  static ATerm i_11 (ATerm t);
  static ATerm i_11 (ATerm t)
  {
    ATerm i_9 = NULL,r_9 = NULL,u_9 = NULL,e_10 = NULL;
    if(match_cons(t, sym__2))
      {
        i_9 = ATgetArgument(t, 0);
        e_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_10;
      }
    else
      {
        ATerm g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_9 = ATgetFirst((ATermList) t);
            u_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_9, e_10);
        t = b_99(t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, g_11);
        t = i_11(t);
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm j_11 = NULL;
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,p_11 = NULL,q_11 = NULL,x_1 = NULL;
    q_11 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        l_11 = ATgetArgument(t, 0);
        m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_11);
    k_11 = t;
    t = l_11;
    t = v_83(t);
    p_11 = t;
    t = m_11;
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, p_11, m_11);
    x_1 = t;
    t = SSLsetAnnotations(x_1, k_11);
    return(t);
  }
  t = fetch_1_0(l_1, t);
  t = SSL_string_to_int(not_null(j_11));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  t = copy_0_0(t);
  r_11 = t;
  t = SSL_implode_string(r_11);
  return(t);
}
static ATerm q_9 (ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_68, d_68);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      t = SSL_subtr(c_68, d_68);
    }
  return(t);
}
static ATerm s_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm x_0, ATerm c_1, ATerm u_0, ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_0, u_0);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_1, s_11);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_11), v_11), u_11);
  return(t);
}
ATerm thread_map_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  static ATerm u_12 (ATerm t);
  static ATerm u_12 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,h_12 = NULL,i_12 = NULL;
    c_12 = t;
    if(match_cons(t, sym__2))
      {
        h_12 = ATgetArgument(t, 0);
        i_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = h_12;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_12 = ATgetFirst((ATermList) t);
        b_12 = (ATerm) ATgetNext((ATermList) t);
        t = c_12;
        t = s_9(n_99, u_12, a_12, b_12, i_12, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_12);
      }
    return(t);
  }
  t = u_12(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm h_18 = t;
  if((PushChoice() == 0))
    {
      ATerm h_13 = NULL,j_13 = NULL,k_13 = NULL;
      h_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_13;
        }
      else
        {
          ATerm l_4 = NULL,e_2 = NULL;
          if(match_cons(t, sym_H_2))
            {
              j_13 = ATgetArgument(t, 0);
              k_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_13);
          l_4 = t;
          t = j_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, j_13, k_13);
          e_2 = t;
          t = SSLsetAnnotations(e_2, l_4);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_18;
    }
  return(t);
}
ATerm filter_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,a_15 = NULL;
  p_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_14 = ATgetFirst((ATermList) t);
          a_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,v_5 = NULL,w_5 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(p_14);
            s_5 = t;
            t = q_14;
            t = a_100(t);
            v_5 = t;
            t = a_15;
            t = filter_1_0(a_100, t);
            w_5 = t;
            t = (ATerm) ATinsert(CheckATermList(w_5), v_5);
            g_2 = t;
            t = SSLsetAnnotations(g_2, s_5);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = a_15;
            t = filter_1_0(a_100, t);
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm t)
{
  ATerm e_16 = NULL,i_16 = NULL,j_16 = NULL,l_16 = NULL,m_16 = NULL,j_2 = NULL;
  t = h_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_16 = ATgetFirst((ATermList) t);
      j_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_16, f_16);
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        {
          ATerm x_16 = NULL,r_17 = NULL,i_18 = NULL;
          t = term_y_13;
          r_17 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_16, f_16)), term_b_18);
          i_18 = t;
          t = SSL_printnl(r_17, i_18);
          t = term_n_17;
          x_16 = t;
          t = SSL_exit(x_16);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_16, f_16)), term_b_18);
        }
      }
  }
  l_16 = t;
  t = j_16;
  {
    static ATerm m_1 (ATerm t);
    static ATerm m_1 (ATerm t)
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_18, g_16);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            {
              ATerm q_18 = NULL,x_18 = NULL,a_19 = NULL;
              t = term_y_13;
              x_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_18, g_16)), term_b_18);
              a_19 = t;
              t = SSL_printnl(x_18, a_19);
              t = term_n_17;
              q_18 = t;
              t = SSL_exit(q_18);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_18, g_16)), term_b_18);
            }
          }
      }
      return(t);
    }
    t = map_1_0(m_1, t);
  }
  m_16 = t;
  t = (ATerm) ATinsert(CheckATermList(m_16), l_16);
  j_2 = t;
  t = SSLsetAnnotations(j_2, e_16);
  return(t);
}
static ATerm a_20 (ATerm h_19, ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,q_19 = NULL,x_19 = NULL,h_4 = NULL;
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_19 = ATgetFirst((ATermList) t);
      n_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  l_19 = t;
  t = n_19;
  t = Cons_2_0(o_1, r_1, t);
  q_19 = t;
  t = (ATerm) ATinsert(CheckATermList(q_19), m_19);
  h_4 = t;
  t = SSLsetAnnotations(h_4, l_19);
  x_19 = t;
  t = SSL_mkterm(i_19, x_19);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19 = NULL;
      y_19 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_19;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      t = Cons_2_0(s_1, v_1, t);
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm b_19 = t;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL;
      z_19 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_19;
        }
      else
        {
          t = a_20(z_19, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_19;
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
  ATerm o_20 = NULL,p_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_20 = ATgetFirst((ATermList) t);
      p_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_19;
  return(t);
}
static ATerm b_2 (ATerm t)
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
static ATerm c_2 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL,d_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      if(match_cons(d_19, sym__2))
        {
          a_21 = ATgetArgument(d_19, 0);
          c_21 = ATgetArgument(d_19, 1);
        }
      else
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(match_cons(e_19, sym__2))
          {
            d_21 = ATgetArgument(e_19, 0);
            g_21 = ATgetArgument(e_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_21), a_21), (ATerm) ATinsert(CheckATermList(g_21), c_21));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(w_1, t);
      t = (ATerm) ATempty;
      LocalPopChoice(k_19);
    }
  else
    {
      t = f_19;
      {
        ATerm d_20 = NULL,e_20 = NULL,h_20 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL,j_4 = NULL;
        t = map_1_0(y_1, t);
        t = genzip_4_0(z_1, b_2, c_2, _id, t);
        n_20 = t;
        if(match_cons(t, sym__2))
          {
            i_20 = ATgetArgument(t, 0);
            k_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_20);
        h_20 = t;
        t = k_20;
        t = matrix_transpose_0_0(t);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_20, l_20);
        j_4 = t;
        t = SSLsetAnnotations(j_4, h_20);
        if(match_cons(t, sym__2))
          {
            d_20 = ATgetArgument(t, 0);
            e_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_20), d_20);
      }
    }
  return(t);
}
static ATerm v_9 (ATerm i_64, ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm k_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, i_64, j_64, k_64);
  t = z_9(i_64, j_64, k_64, t);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, j_64);
  t = p_10(k_21, j_64, t);
  return(t);
}
static ATerm w_9 (ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(o_68, p_68);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = SSL_divr(o_68, p_68);
    }
  return(t);
}
static ATerm x_9 (ATerm u_68, ATerm v_68, ATerm t)
{
  t = SSL_mod(u_68, v_68);
  return(t);
}
static ATerm y_9 (ATerm u_64, ATerm v_64, ATerm q_64, ATerm t)
{
  ATerm m_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  t = SSL_strlen(v_64);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_64, s_21);
  t = q_9(q_64, s_21, t);
  m_21 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        t = term_u_19;
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_21, term_u_19);
        t = x_9(m_21, h_22, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_21;
        LocalPopChoice(t_19);
        {
          ATerm i_22 = NULL,m_22 = NULL;
          t = term_u_19;
          m_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, term_u_19);
          t = w_9(m_21, m_22, t);
          i_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_22, i_22);
        }
      }
    else
      {
        t = s_19;
        {
          ATerm n_22 = NULL,o_22 = NULL,s_22 = NULL,t_22 = NULL,z_22 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,a_5 = NULL;
          t = term_n_17;
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, term_n_17);
          t = q_9(m_21, t_22, t);
          o_22 = t;
          t = term_u_19;
          s_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_22, term_u_19);
          t = w_9(o_22, s_22, t);
          n_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_22, n_22);
          d_23 = t;
          if(match_cons(t, sym__2))
            {
              ATerm v_19 = ATgetArgument(t, 0);
              ATerm w_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_23);
          z_22 = t;
          t = term_n_17;
          c_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_22, term_n_17);
          t = v_10(n_22, c_23, t);
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_23, n_22);
          a_5 = t;
          t = SSLsetAnnotations(a_5, z_22);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_21, q_21);
  t = v_10(s_21, q_21, t);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_64, v_64, y_21);
  t = z_9(u_64, v_64, y_21, t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
  t = v_10(s_21, t_21, t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_64, v_64, x_21);
  t = z_9(u_64, v_64, x_21, t);
  v_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_21), v_64), r_21);
  z_21 = t;
  t = SSL_concat_strings(z_21);
  return(t);
}
static ATerm z_9 (ATerm b_65, ATerm z_64, ATerm a_65, ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_strlen(z_64);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_65, e_23);
  t = q_9(a_65, e_23, t);
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL;
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, term_p_16);
        t = geq_0_0(t);
        t = j_23;
        LocalPopChoice(c_20);
        {
          ATerm k_23 = NULL;
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_23, b_65);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = b_20;
        t = term_g_20;
      }
  }
  return(t);
}
static ATerm a_10 (ATerm m_64, ATerm n_64, ATerm o_64, ATerm t)
{
  ATerm l_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, m_64, n_64, o_64);
  t = z_9(m_64, n_64, o_64, t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_64, l_23);
  t = p_10(n_64, l_23, t);
  return(t);
}
static ATerm g_26 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,l_24 = NULL,m_24 = NULL;
  t = term_n_17;
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, term_n_17);
  {
    ATerm j_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(b_24, m_24);
        LocalPopChoice(m_20);
      }
    else
      {
        t = j_20;
        t = SSL_gtr(b_24, m_24);
      }
  }
  t = c_24;
  if(match_cons(t, sym__3))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
      l_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_10(h_24, i_24, l_24, t);
  return(t);
}
static ATerm j_26 (ATerm n_24, ATerm p_24, ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,x_24 = NULL;
  t = n_24;
  if(match_cons(t, sym__3))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      x_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_9(t_24, u_24, x_24, t);
  return(t);
}
static ATerm k_26 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  t = y_24;
  if(match_cons(t, sym__3))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      g_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_9(e_25, f_25, g_25, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm x_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,d_26 = NULL;
  z_25 = t;
  if(match_cons(t, sym__3))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
      d_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_26;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm b_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_20);
        t = d_26;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm h_21 = ATgetArgument(t, 0);
                  x_25 = ATgetArgument(t, 1);
                  {
                    ATerm j_21 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(f_21);
              t = a_26;
              if(match_int(t, 1))
                {
                  ATerm l_21 = t;
                  int p_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_26(a_26, d_26, z_25, t);
                      LocalPopChoice(p_21);
                    }
                  else
                    {
                      t = l_21;
                      t = x_25;
                    }
                }
              else
                {
                  t = g_26(a_26, d_26, z_25, t);
                }
            }
          else
            {
              t = e_21;
              t = a_26;
              t = g_26(a_26, d_26, z_25, t);
            }
        }
      }
    else
      {
        t = u_20;
        {
          ATerm u_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm a_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(w_21);
              t = a_26;
              t = j_26(d_26, z_25, t);
            }
          else
            {
              t = u_21;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm f_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_26;
              t = k_26(d_26, z_25, t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm j_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_26 = NULL,v_26 = NULL,x_26 = NULL,y_26 = NULL,d_5 = NULL;
      y_26 = t;
      if(match_cons(t, sym__2))
        {
          v_26 = ATgetArgument(t, 0);
          x_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_26);
      u_26 = t;
      t = v_26;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_26;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_22 = ATgetFirst((ATermList) t);
              ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_26;
        }
      t = (ATerm) ATmakeAppl(sym__2, v_26, x_26);
      d_5 = t;
      t = SSLsetAnnotations(d_5, u_26);
      LocalPopChoice(q_22);
      t = conc_0_0(t);
    }
  else
    {
      t = j_22;
      {
        ATerm d_27 = NULL,h_27 = NULL;
        if(match_cons(t, sym__2))
          {
            d_27 = ATgetArgument(t, 0);
            h_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_27), d_27);
      }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_27 = NULL;
      k_27 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_27;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_22 = ATgetFirst((ATermList) t);
              ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_27;
        }
      LocalPopChoice(w_22);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(f_2, h_2, l_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_19;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_29 = ATgetFirst((ATermList) t);
      l_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_29, l_29);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if(match_cons(a_23, sym__2))
        {
          m_29 = ATgetArgument(a_23, 0);
          n_29 = ATgetArgument(a_23, 1);
        }
      else
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(match_cons(f_23, sym__2))
          {
            o_29 = ATgetArgument(f_23, 0);
            q_29 = ATgetArgument(f_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_29), m_29), (ATerm) ATinsert(CheckATermList(q_29), n_29));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_29 = NULL;
      t = flatten_list_0_0(t);
      y_29 = t;
      t = SSL_concat_strings(y_29);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm i_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_6 = NULL,p_6 = NULL;
      if(match_cons(t, sym__2))
        {
          n_6 = ATgetArgument(t, 0);
          p_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_6, p_6);
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_6, p_6);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            t = SSL_gtr(n_6, p_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, n_6, p_6);
      LocalPopChoice(m_23);
      {
        ATerm q_6 = NULL,r_6 = NULL;
        r_6 = t;
        t = SSL_explode_term(r_6);
        if(match_cons(t, sym__2))
          {
            ATerm p_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_23 = ATgetArgument(t, 1);
              if(((ATgetType(q_23) == AT_LIST) && !(ATisEmpty(q_23))))
                {
                  q_6 = ATgetFirst((ATermList) q_23);
                  {
                    ATerm r_23 = (ATerm) ATgetNext((ATermList) q_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_6;
      }
    }
  else
    {
      t = i_23;
      {
        ATerm s_6 = NULL,t_6 = NULL;
        t_6 = t;
        t = SSL_explode_term(t_6);
        if(match_cons(t, sym__2))
          {
            ATerm s_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_23 = ATgetArgument(t, 1);
              if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
                {
                  ATerm u_23 = ATgetFirst((ATermList) t_23);
                  ATerm v_23 = (ATerm) ATgetNext((ATermList) t_23);
                  if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
                    {
                      s_6 = ATgetFirst((ATermList) v_23);
                      {
                        ATerm w_23 = (ATerm) ATgetNext((ATermList) v_23);
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
        t = s_6;
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm g_10 (ATerm e_17, ATerm d_17, ATerm z_16, ATerm b_17, ATerm y_16, ATerm t)
{
  ATerm u_27 = NULL,a_28 = NULL,b_28 = NULL,e_28 = NULL,g_28 = NULL,i_28 = NULL,k_28 = NULL,p_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,y_28 = NULL,b_29 = NULL,i_5 = NULL,j_6 = NULL,l_6 = NULL;
  t = z_16;
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm c_29 = NULL;
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_29, b_17);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
              ATerm d_29 = NULL,f_29 = NULL,j_29 = NULL;
              t = term_y_13;
              f_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_29, b_17)), term_b_18);
              j_29 = t;
              t = SSL_printnl(f_29, j_29);
              t = term_n_17;
              d_29 = t;
              t = SSL_exit(d_29);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_29, b_17)), term_b_18);
            }
          }
      }
      return(t);
    }
    t = map_1_0(o_2, t);
  }
  t = genzip_4_0(r_2, t_2, u_2, _id, t);
  b_29 = t;
  if(match_cons(t, sym__2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  p_28 = t;
  t = s_28;
  t = map_1_0(v_2, t);
  u_28 = t;
  t = t_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_23 = ATgetFirst((ATermList) t);
      l_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_6 = ATgetFirst((ATermList) t);
      {
        ATerm a_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_6, j_6);
  t = foldl_1_0(w_2, t);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, y_28);
  i_5 = t;
  t = SSLsetAnnotations(i_5, p_28);
  if(match_cons(t, sym__2))
    {
      a_28 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_27, b_17);
  t = q_9(u_27, b_17, t);
  b_28 = t;
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = term_n_17;
        i_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_n_17);
        {
          ATerm g_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_17, i_30);
              LocalPopChoice(j_24);
            }
          else
            {
              t = g_24;
              t = SSL_gtr(d_17, i_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_n_17);
        LocalPopChoice(f_24);
        {
          ATerm j_30 = NULL,l_30 = NULL;
          t = e_17;
          if(match_cons(t, sym_AC_1))
            {
              l_30 = ATgetArgument(t, 0);
              t = l_30;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  l_30 = ATgetArgument(t, 0);
                  t = l_30;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      l_30 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_30;
                }
            }
          {
            ATerm k_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(z_2, t);
                LocalPopChoice(o_24);
              }
            else
              {
                t = k_24;
                t = term_n_17;
              }
          }
          j_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_30, term_q_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = e_24;
        t = term_g_20;
      }
  }
  e_28 = t;
  t = a_28;
  {
    static ATerm a_3 (ATerm t);
    static ATerm a_3 (ATerm t)
    {
      ATerm p_30 = NULL,q_30 = NULL;
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, d_17, e_17, (ATerm) ATmakeAppl(sym__3, term_q_17, q_30, b_28));
      t = align_column_0_0(t);
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_30, e_28);
      t = p_10(p_30, e_28, t);
      return(t);
    }
    t = map_1_0(a_3, t);
  }
  g_28 = t;
  t = SSL_strlen(e_28);
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, u_27);
  t = v_10(k_28, u_27, t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATinsert(CheckATermList(y_16), g_28));
  return(t);
}
ATerm genzip_4_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  static ATerm n_31 (ATerm t);
  static ATerm n_31 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_93(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        {
          ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,f_31 = NULL,g_31 = NULL,l_31 = NULL,v_6 = NULL;
          t = n_93(t);
          l_31 = t;
          if(match_cons(t, sym__2))
            {
              t_30 = ATgetArgument(t, 0);
              u_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_31);
          s_30 = t;
          t = t_30;
          t = p_93(t);
          f_31 = t;
          t = u_30;
          t = n_31(t);
          g_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
          v_6 = t;
          t = SSLsetAnnotations(v_6, s_30);
          t = o_93(t);
        }
      }
    return(t);
  }
  t = n_31(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  ATerm w_31 = NULL;
  static ATerm l_32 (ATerm t);
  static ATerm l_32 (ATerm t)
  {
    ATerm y_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
    if(match_cons(t, sym__2))
      {
        y_31 = ATgetArgument(t, 0);
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
        ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_32 = ATgetFirst((ATermList) t);
            c_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_31, b_32);
        t = q_117(t);
        h_32 = t;
        t = term_n_17;
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_31, term_n_17);
        t = v_10(y_31, k_32, t);
        j_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_32, c_32);
        t = l_32(t);
        i_32 = t;
        t = (ATerm) ATinsert(CheckATermList(i_32), h_32);
      }
    return(t);
  }
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, w_31);
  t = l_32(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,t_32 = NULL,u_32 = NULL;
  q_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_32;
      t = y_98(t);
    }
  else
    {
      ATerm y_32 = NULL,d_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_32;
      t = a_99(t);
      y_32 = t;
      t = u_32;
      t = foldr_3_0(y_98, z_98, a_99, t);
      d_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_32, d_33);
      t = z_98(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  static ATerm w_34 (ATerm t);
  static ATerm w_34 (ATerm t)
  {
    ATerm q_34 = NULL,r_34 = NULL,u_34 = NULL;
    u_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_34 = ATgetFirst((ATermList) t);
        r_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_7 = NULL,n_7 = NULL,x_6 = NULL;
          t = SSLgetAnnotations(u_34);
          c_7 = t;
          t = r_34;
          t = w_34(t);
          n_7 = t;
          t = (ATerm) ATinsert(CheckATermList(n_7), q_34);
          x_6 = t;
          t = SSLsetAnnotations(x_6, c_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_34;
        t = h_92(t);
      }
    return(t);
  }
  t = w_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_33;
    }
  else
    {
      static ATerm e_3 (ATerm t);
      static ATerm e_3 (ATerm t)
      {
        t = not_null(n_33);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_33 = ATgetFirst((ATermList) t);
          if(((n_33 != NULL) && (n_33 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_33;
      t = at_end_1_0(e_3, t);
    }
  return(t);
}
static ATerm x_35 (ATerm i_35, ATerm t)
{
  ATerm n_35 = NULL;
  t = SSL_explode_term(i_35);
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  u_35 = t;
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_3 (ATerm t);
            static ATerm h_3 (ATerm t)
            {
              t = t_35;
              return(t);
            }
            t = s_35;
            t = at_end_1_0(h_3, t);
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = x_35(u_35, t);
          }
      }
    }
  else
    {
      t = x_35(u_35, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  static ATerm c_36 (ATerm t);
  static ATerm c_36 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_89(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = r_89(t);
        t = c_36(t);
      }
    return(t);
  }
  t = c_36(t);
  return(t);
}
ATerm for_3_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  t = t_89(t);
  t = while_not_2_0(u_89, v_89, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  if(match_cons(t, sym__2))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_36, g_36, (ATerm) ATempty);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm j_36 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if(((ATgetType(c_25) != AT_INT) || (ATgetInt((ATermInt) c_25) != 0)))
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
      }
      j_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_36;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,a_37 = NULL,b_37 = NULL,g_37 = NULL;
  if(match_cons(t, sym__3))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
      a_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_36, term_n_17);
  t = geq_0_0(t);
  t = term_n_17;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_36, term_n_17);
  t = q_9(o_36, g_37, t);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_37, p_36, (ATerm) ATinsert(CheckATermList(a_37), p_36));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(j_3, k_3, n_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(n_37, o_37, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  l_37 = t;
  t = foldr_3_0(o_3, p_3, q_3, t);
  i_37 = t;
  t = term_m_15;
  t = t_83(t);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, i_37);
  t = q_9(m_37, i_37, t);
  j_37 = t;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL;
        t = term_p_16;
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_37, term_p_16);
        {
          ATerm q_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_37, p_37);
              LocalPopChoice(u_25);
            }
          else
            {
              t = q_25;
              t = SSL_gtr(j_37, p_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_37, (ATerm) ATempty);
        t = copy_0_0(t);
        k_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_37, k_37);
        t = conc_0_0(t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = l_37;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                t = term_y_13;
                v_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_37), term_y_25);
                w_37 = t;
                t = SSL_printnl(v_37, w_37);
                t = term_n_17;
                u_37 = t;
                t = SSL_exit(u_37);
                t = (ATerm) ATinsert(ATinsert(ATempty, l_37), term_y_25);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_26 = t;
  if((PushChoice() == 0))
    {
      ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,b_7 = NULL;
      d_40 = t;
      if(match_cons(t, sym_R_2))
        {
          b_40 = ATgetArgument(t, 0);
          c_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_40);
      a_40 = t;
      t = c_40;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, b_40, c_40);
      b_7 = t;
      t = SSLsetAnnotations(b_7, a_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_26;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_38, (ATerm) ATempty);
  {
    static ATerm e_40 (ATerm t);
    static ATerm e_40 (ATerm t)
    {
      ATerm f_38 = NULL,g_38 = NULL,i_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
      if(match_cons(t, sym__2))
        {
          i_38 = ATgetArgument(t, 0);
          m_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_38;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm v_38 = NULL;
          t = m_38;
          t = reverse_acc_2_0(_id, f_4, t);
          v_38 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, v_38));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_38 = ATgetFirst((ATermList) t);
              l_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_38;
          if(match_cons(t, sym_R_2))
            {
              f_38 = ATgetArgument(t, 0);
              g_38 = ATgetArgument(t, 1);
              {
                ATerm e_26 = t;
                int f_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_39 = NULL,n_39 = NULL;
                    t = m_38;
                    t = reverse_acc_2_0(_id, i_4, t);
                    h_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_38, (ATerm) ATempty);
                    t = e_40(t);
                    n_39 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_39), (ATerm) ATmakeAppl(sym_R_2, f_38, g_38)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, h_39));
                    LocalPopChoice(f_26);
                  }
                else
                  {
                    t = e_26;
                    t = (ATerm) ATmakeAppl(sym__2, l_38, (ATerm) ATinsert(CheckATermList(m_38), k_38));
                    t = e_40(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_38, (ATerm) ATinsert(CheckATermList(m_38), k_38));
              t = e_40(t);
            }
        }
      return(t);
    }
    t = e_40(t);
  }
  t = filter_1_0(k_4, t);
  return(t);
}
static ATerm z_56 (ATerm m_48, ATerm n_48, ATerm o_48, ATerm p_48, ATerm q_48, ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,e_49 = NULL,h_49 = NULL;
  t = o_48;
  t = construct_rows_0_0(t);
  t = map_1_0(m_4, t);
  {
    static ATerm p_4 (ATerm t);
    static ATerm p_4 (ATerm t)
    {
      static ATerm q_4 (ATerm t);
      static ATerm q_4 (ATerm t)
      {
        t = m_48;
        t = foldr_3_0(w_4, x_4, b_5, t);
        return(t);
      }
      t = FitToMax_1_0(q_4, t);
      return(t);
    }
    t = map_1_0(p_4, t);
  }
  t = matrix_transpose_0_0(t);
  t = reverse_acc_2_0(_id, c_5, t);
  t = map_with_index_1_0(_id, t);
  t = reverse_acc_2_0(_id, e_5, t);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, v_48);
  t = genzip_4_0(g_5, h_5, j_5, _id, t);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_48, (ATerm) ATmakeAppl(sym__2, p_48, (ATerm) ATempty));
  t = foldl_1_0(n_5, t);
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_48;
  t = reverse_acc_2_0(_id, p_5, t);
  t = matrix_transpose_0_0(t);
  {
    static ATerm r_5 (ATerm t);
    static ATerm r_5 (ATerm t)
    {
      ATerm g_50 = NULL;
      g_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_50, e_49);
      return(t);
    }
    t = map_1_0(r_5, t);
  }
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_48, h_49, p_48);
  t = l_9(n_48, h_49, p_48, t);
  return(t);
}
static ATerm b_57 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,q_50 = NULL;
  t = h_50;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(t_5, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = term_p_16;
      }
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_50, q_50);
  t = v_10(j_50, q_50, t);
  n_50 = t;
  t = i_50;
  t = filter_1_0(is_real_vbox_0_0, t);
  m_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_50);
    }
  else
    {
      ATerm r_50 = NULL;
      t = (ATerm) ATmakeAppl(sym__3, j_50, n_50, m_50);
      t = t_9(j_50, n_50, m_50, t);
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_50, r_50, j_50);
      t = l_9(h_50, r_50, j_50, t);
    }
  return(t);
}
static ATerm c_57 (ATerm s_50, ATerm t_50, ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm y_50 = NULL,b_51 = NULL,d_51 = NULL,e_51 = NULL,g_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,p_51 = NULL,s_51 = NULL,l_52 = NULL,m_52 = NULL,g_7 = NULL;
  t = s_50;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(u_5, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = term_n_17;
      }
  }
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_51, term_q_17);
  t = copy_char_0_0(t);
  b_51 = t;
  t = SSL_strlen(b_51);
  d_51 = t;
  t = t_50;
  t = filter_1_0(is_real_hbox_0_0, t);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_50, u_50);
  {
    static ATerm x_5 (ATerm t);
    static ATerm x_5 (ATerm t)
    {
      ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,e_7 = NULL;
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_0_0(t);
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          {
            ATerm d_52 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
            d_52 = t;
            t = term_y_13;
            d_9 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, d_52), term_b_18);
            e_9 = t;
            t = SSL_printnl(d_9, e_9);
            t = term_n_17;
            c_9 = t;
            t = SSL_exit(c_9);
            t = (ATerm) ATinsert(ATinsert(ATempty, d_52), term_b_18);
          }
        }
      x_51 = t;
      if(match_cons(t, sym__2))
        {
          u_51 = ATgetArgument(t, 0);
          v_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_51);
      t_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_51, v_51);
      t = v_10(d_51, v_51, t);
      w_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_51, w_51);
      e_7 = t;
      t = SSLsetAnnotations(e_7, t_51);
      return(t);
    }
    t = thread_map_1_0(x_5, t);
  }
  s_51 = t;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_51);
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_51, i_51);
  t = m_9(b_51, i_51, t);
  k_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_51, j_51);
  g_7 = t;
  t = SSLsetAnnotations(g_7, g_51);
  p_51 = t;
  if(match_cons(t, sym__2))
    {
      l_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_10 = NULL,f_10 = NULL,h_10 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(p_51);
            b_10 = t;
            t = l_52;
            {
              ATerm r_26 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_26;
                }
            }
            f_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_52, d_51);
            t = q_9(m_52, d_51, t);
            h_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_10, h_10);
            i_7 = t;
            t = SSLsetAnnotations(i_7, b_10);
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = p_51;
          }
      }
    }
  else
    {
      t = p_51;
    }
  return(t);
}
static ATerm d_57 (ATerm q_52, ATerm r_52, ATerm s_52, ATerm t_52, ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,f_53 = NULL,j_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  t = q_52;
  {
    ATerm s_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(y_5, t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = s_26;
        t = term_n_17;
      }
  }
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_53, term_q_17);
  t = copy_char_0_0(t);
  z_52 = t;
  t = q_52;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(z_5, t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = term_p_16;
      }
  }
  n_53 = t;
  t = term_n_17;
  o_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_53, term_n_17);
  t = v_10(n_53, o_53, t);
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, term_k_16);
  t = copy_char_0_0(t);
  t = SSL_strlen(z_52);
  x_52 = t;
  t = q_52;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(g_6, t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = term_p_16;
      }
  }
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_52, j_53);
  t = v_10(s_52, j_53, t);
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_52)));
  {
    static ATerm h_6 (ATerm t);
    static ATerm h_6 (ATerm t)
    {
      ATerm q_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
      v_53 = t;
      if(match_cons(t, sym__2))
        {
          w_53 = ATgetArgument(t, 0);
          x_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_53 = ATgetFirst((ATermList) t);
          u_53 = (ATerm) ATgetNext((ATermList) t);
          t = q_53;
          if(match_cons(t, sym__2))
            {
              s_53 = ATgetArgument(t, 0);
              t_53 = ATgetArgument(t, 1);
              {
                ATerm e_27 = t;
                int f_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm m_6 (ATerm t);
                    static ATerm m_6 (ATerm t)
                    {
                      t = x_52;
                      return(t);
                    }
                    t = v_53;
                    t = o_9(m_6, w_53, s_53, t_53, u_53, t);
                    LocalPopChoice(f_27);
                  }
                else
                  {
                    t = e_27;
                    {
                      static ATerm u_6 (ATerm t);
                      static ATerm w_6 (ATerm t);
                      static ATerm u_6 (ATerm t)
                      {
                        t = x_52;
                        return(t);
                      }
                      static ATerm w_6 (ATerm t)
                      {
                        t = y_52;
                        return(t);
                      }
                      t = v_53;
                      t = n_9(u_6, w_6, w_53, x_53, t);
                    }
                  }
              }
            }
          else
            {
              static ATerm y_6 (ATerm t);
              static ATerm z_6 (ATerm t);
              static ATerm y_6 (ATerm t)
              {
                t = x_52;
                return(t);
              }
              static ATerm z_6 (ATerm t)
              {
                t = y_52;
                return(t);
              }
              t = v_53;
              t = n_9(y_6, z_6, w_53, x_53, t);
            }
        }
      else
        {
          static ATerm a_7 (ATerm t);
          static ATerm d_7 (ATerm t);
          static ATerm a_7 (ATerm t)
          {
            t = x_52;
            return(t);
          }
          static ATerm d_7 (ATerm t)
          {
            t = y_52;
            return(t);
          }
          t = v_53;
          t = n_9(a_7, d_7, w_53, x_53, t);
        }
      return(t);
    }
    t = foldl_1_0(h_6, t);
  }
  t = reverse_acc_2_0(_id, f_7, t);
  t = map_1_0(h_7, t);
  {
    static ATerm p_7 (ATerm t);
    static ATerm p_7 (ATerm t)
    {
      ATerm w_54 = NULL,x_54 = NULL,a_55 = NULL,c_55 = NULL,d_55 = NULL,o_7 = NULL;
      d_55 = t;
      if(match_cons(t, sym__2))
        {
          x_54 = ATgetArgument(t, 0);
          a_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_55);
      w_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_52, x_54);
      t = m_9(z_52, x_54, t);
      c_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_55, a_55);
      o_7 = t;
      t = SSLsetAnnotations(o_7, w_54);
      return(t);
    }
    t = map_1_0(p_7, t);
  }
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_52, f_53, s_52);
  t = l_9(q_52, f_53, s_52, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_49 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_49;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(j_49, k_49, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_n_17;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(((ATgetType(j_27) != AT_LIST) || !(ATisEmpty(j_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,t_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
        {
          p_49 = ATgetFirst((ATermList) l_27);
          q_49 = (ATerm) ATgetNext((ATermList) l_27);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
          {
            r_49 = ATgetFirst((ATermList) m_27);
            t_49 = (ATerm) ATgetNext((ATermList) m_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_49, r_49), (ATerm) ATmakeAppl(sym__2, q_49, t_49));
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_49), u_49);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(match_cons(n_27, sym__2))
        {
          x_49 = ATgetArgument(n_27, 0);
          {
            ATerm p_27 = ATgetArgument(n_27, 1);
            if(match_cons(p_27, sym__2))
              {
                y_49 = ATgetArgument(p_27, 0);
                b_50 = ATgetArgument(p_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(match_cons(o_27, sym__2))
          {
            c_50 = ATgetArgument(o_27, 0);
            d_50 = ATgetArgument(o_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_10(x_49, y_49, b_50, c_50, d_50, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,t_54 = NULL,u_54 = NULL,j_7 = NULL;
  u_54 = t;
  if(match_cons(t, sym__2))
    {
      p_54 = ATgetArgument(t, 0);
      q_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_54);
  o_54 = t;
  t = p_54;
  t = reverse_acc_2_0(_id, k_7, t);
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_54, q_54);
  j_7 = t;
  t = SSLsetAnnotations(j_7, o_54);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,h_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,x_55 = NULL;
  p_55 = t;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_55;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_20, x_55);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_55 = ATgetFirst((ATermList) t);
          s_55 = (ATerm) ATgetNext((ATermList) t);
          t = s_55;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_55, x_55);
          {
            ATerm q_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                LocalPopChoice(t_27);
              }
            else
              {
                t = q_27;
                {
                  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
                  t = term_y_13;
                  y_11 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_55, x_55)), term_b_18);
                  z_11 = t;
                  t = SSL_printnl(y_11, z_11);
                  t = term_n_17;
                  x_11 = t;
                  t = SSL_exit(x_11);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_55, x_55)), term_b_18);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              r_55 = ATgetArgument(t, 0);
              s_55 = ATgetArgument(t, 1);
              {
                ATerm s_12 = NULL,v_12 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, r_55, x_55);
                {
                  ATerm v_27 = t;
                  int w_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      LocalPopChoice(w_27);
                    }
                  else
                    {
                      t = v_27;
                      {
                        ATerm w_12 = NULL,x_12 = NULL,z_12 = NULL;
                        t = term_y_13;
                        x_12 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_55, x_55)), term_b_18);
                        z_12 = t;
                        t = SSL_printnl(x_12, z_12);
                        t = term_n_17;
                        w_12 = t;
                        t = SSL_exit(w_12);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_55, x_55)), term_b_18);
                      }
                    }
                }
                s_12 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm x_27 = ATgetArgument(t, 0);
                    v_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, r_55, s_55), x_55);
                {
                  ATerm y_27 = t;
                  int z_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_13 = NULL;
                      t = get_width_0_0(t);
                      d_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_12, d_13);
                      t = leq_0_0(t);
                      LocalPopChoice(z_27);
                      t = s_12;
                    }
                  else
                    {
                      t = y_27;
                      t = (ATerm) ATmakeAppl(sym__2, s_55, x_55);
                      {
                        ATerm c_28 = t;
                        int d_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(d_28);
                          }
                        else
                          {
                            t = c_28;
                            {
                              ATerm i_13 = NULL,m_13 = NULL,n_13 = NULL;
                              t = term_y_13;
                              m_13 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_55, x_55)), term_b_18);
                              n_13 = t;
                              t = SSL_printnl(m_13, n_13);
                              t = term_n_17;
                              i_13 = t;
                              t = SSL_exit(i_13);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_55, x_55)), term_b_18);
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
                  r_55 = ATgetArgument(t, 0);
                  s_55 = ATgetArgument(t, 1);
                  {
                    ATerm h_28 = t;
                    int j_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_55, s_55), x_55);
                        {
                          ATerm l_28 = t;
                          int m_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(m_28);
                            }
                          else
                            {
                              t = l_28;
                              {
                                ATerm a_14 = NULL,d_14 = NULL,f_14 = NULL;
                                t = term_y_13;
                                d_14 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_55, s_55), x_55)), term_b_18);
                                f_14 = t;
                                t = SSL_printnl(d_14, f_14);
                                t = term_n_17;
                                a_14 = t;
                                t = SSL_exit(a_14);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_55, s_55), x_55)), term_b_18);
                              }
                            }
                        }
                        LocalPopChoice(j_28);
                      }
                    else
                      {
                        t = h_28;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_55, s_55), x_55);
                        {
                          ATerm n_28 = t;
                          int o_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(o_28);
                            }
                          else
                            {
                              t = n_28;
                              {
                                ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
                                t = term_y_13;
                                e_15 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_55, s_55), x_55)), term_b_18);
                                f_15 = t;
                                t = SSL_printnl(e_15, f_15);
                                t = term_n_17;
                                d_15 = t;
                                t = SSL_exit(d_15);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_55, s_55), x_55)), term_b_18);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm q_28 = t;
                  int r_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm v_28 = ATgetArgument(t, 0);
                          s_55 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(r_28);
                      t = (ATerm) ATmakeAppl(sym__2, s_55, x_55);
                      {
                        ATerm w_28 = t;
                        int x_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(x_28);
                          }
                        else
                          {
                            t = w_28;
                            {
                              ATerm w_15 = NULL,x_15 = NULL,z_15 = NULL;
                              t = term_y_13;
                              x_15 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_55, x_55)), term_b_18);
                              z_15 = t;
                              t = SSL_printnl(x_15, z_15);
                              t = term_n_17;
                              w_15 = t;
                              t = SSL_exit(w_15);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_55, x_55)), term_b_18);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = q_28;
                      {
                        ATerm z_28 = t;
                        int a_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm e_29 = ATgetArgument(t, 0);
                                s_55 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(a_29);
                            t = s_55;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                e_55 = ATgetFirst((ATermList) t);
                                h_55 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = e_55;
                            if(match_cons(t, sym_S_1))
                              {
                                f_55 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = h_55;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, f_55, x_55);
                          }
                        else
                          {
                            t = z_28;
                            if(match_cons(t, sym_S_1))
                              {
                                r_55 = ATgetArgument(t, 0);
                                {
                                  ATerm h_56 = NULL,i_56 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, r_55, x_55);
                                  t = n_10(r_55, x_55, t);
                                  i_56 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, x_55, i_56);
                                  t = v_10(x_55, i_56, t);
                                  h_56 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, r_55, h_56);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    r_55 = ATgetArgument(t, 0);
                                    s_55 = ATgetArgument(t, 1);
                                    n_55 = ATgetArgument(t, 2);
                                    t = r_55;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        m_55 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = n_55;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        k_55 = ATgetFirst((ATermList) t);
                                        l_55 = (ATerm) ATgetNext((ATermList) t);
                                        t = l_55;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = k_55;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm g_29 = t;
                                                int h_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_56(m_55, s_55, n_55, x_55, p_55, t);
                                                    LocalPopChoice(h_29);
                                                  }
                                                else
                                                  {
                                                    t = g_29;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_55);
                                                  }
                                              }
                                            else
                                              {
                                                t = z_56(m_55, s_55, n_55, x_55, p_55, t);
                                              }
                                          }
                                        else
                                          {
                                            t = k_55;
                                            t = z_56(m_55, s_55, n_55, x_55, p_55, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm i_29 = t;
                                            int p_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_56(m_55, s_55, n_55, x_55, p_55, t);
                                                LocalPopChoice(p_29);
                                              }
                                            else
                                              {
                                                t = i_29;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_55);
                                              }
                                          }
                                        else
                                          {
                                            t = z_56(m_55, s_55, n_55, x_55, p_55, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        r_55 = ATgetArgument(t, 0);
                                        s_55 = ATgetArgument(t, 1);
                                        t = b_57(r_55, s_55, x_55, p_55, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            r_55 = ATgetArgument(t, 0);
                                            s_55 = ATgetArgument(t, 1);
                                            t = c_57(r_55, s_55, x_55, p_55, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                r_55 = ATgetArgument(t, 0);
                                                s_55 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = d_57(r_55, s_55, x_55, p_55, t);
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
static ATerm c_58 (ATerm t_57, ATerm t)
{
  t = SSL_fclose(t_57);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  z_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_57 = ATgetArgument(t, 0);
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_57);
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            t = c_58(z_57, t);
          }
      }
    }
  else
    {
      t = c_58(z_57, t);
    }
  return(t);
}
static ATerm o_10 (ATerm t_26, ATerm t)
{
  t = SSL_read_term_from_stream(t_26);
  return(t);
}
static ATerm p_10 (ATerm r_66, ATerm s_66, ATerm t)
{
  t = SSL_strcat(r_66, s_66);
  return(t);
}
static ATerm q_10 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm h_58 = NULL;
  t = SSL_fopen(y_35, z_35);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_58);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_58 = NULL;
  t = SSL_stdin_stream();
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_58);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_58 = NULL;
  t = SSL_stdout_stream();
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_58);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_58 = NULL;
  t = SSL_stderr_stream();
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_58);
  return(t);
}
static ATerm f_60 (ATerm t_58, ATerm t)
{
  ATerm u_58 = NULL;
  t = SSL_explode_term(t_58);
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_29 = ATgetArgument(t, 1);
        if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
          {
            u_58 = ATgetFirst((ATermList) u_29);
            {
              ATerm v_29 = (ATerm) ATgetNext((ATermList) u_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_58;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_58;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_58;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_58;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_60 (ATerm z_58, ATerm a_59, ATerm d_59, ATerm t)
{
  ATerm e_59 = NULL,h_59 = NULL,i_59 = NULL,m_59 = NULL,e_13 = NULL;
  t = SSLgetAnnotations(d_59);
  i_59 = t;
  t = z_58;
  if(match_cons(t, sym_Path_1))
    {
      m_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_59, a_59);
  e_13 = t;
  t = SSLsetAnnotations(e_13, i_59);
  if(match_cons(t, sym__2))
    {
      e_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(e_59, h_59, t);
  return(t);
}
static ATerm h_60 (ATerm q_59, ATerm r_59, ATerm s_59, ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,y_59 = NULL,f_13 = NULL;
  t = SSLgetAnnotations(s_59);
  v_59 = t;
  t = SSL_is_string(q_59);
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_59, r_59);
  f_13 = t;
  t = SSLsetAnnotations(f_13, v_59);
  if(match_cons(t, sym__2))
    {
      t_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(t_59, u_59, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm b_60 = NULL,d_60 = NULL,e_60 = NULL;
  b_60 = t;
  if(match_cons(t, sym__2))
    {
      d_60 = ATgetArgument(t, 0);
      e_60 = ATgetArgument(t, 1);
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_60(b_60, t);
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_60(d_60, e_60, b_60, t);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  t = h_60(d_60, e_60, b_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_60(b_60, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,u_60 = NULL;
  u_60 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_60, term_d_30);
        t = r_10(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm t_16 = NULL,u_16 = NULL;
          t = term_e_30;
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_30, u_60);
          t = p_10(u_16, u_60, t);
          t_16 = t;
          t = SSL_perror(t_16);
          _fail(t);
        }
      }
  }
  m_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(n_60, t);
  l_60 = t;
  t = m_60;
  t = fclose_0_0(t);
  t = l_60;
  return(t);
}
static ATerm s_10 (ATerm p_35, ATerm q_35, ATerm t)
{
  t = SSL_access(p_35, q_35);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_61 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_61 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_30);
      e_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_61, (ATerm) ATinsert(ATempty, term_f_30));
      t = s_10(c_61, e_61, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_11 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm f_61 = NULL;
  t = lookup_table_0_1(k_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(l_22, f_61, t);
  return(t);
}
static ATerm u_10 (ATerm w_20, ATerm x_20, ATerm t)
{
  ATerm h_61 = NULL,j_61 = NULL;
  j_61 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
        t = a_11(w_20, x_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_30 = ATgetFirst((ATermList) t);
            h_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_30);
        {
          ATerm k_61 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_20, x_20, h_61);
          t = lookup_table_0_1(w_20, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_11(x_20, h_61, k_61, t);
          t = (ATerm) ATmakeAppl(sym__3, w_20, x_20, h_61);
        }
      }
    else
      {
        t = g_30;
        {
          ATerm m_61 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
          t = lookup_table_0_1(w_20, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_10(x_20, m_61, t);
          t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
        }
      }
  }
  t = j_61;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,r_61 = NULL,s_61 = NULL,z_61 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  z_61 = t;
  t = r_102(t);
  s_61 = t;
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_62 = NULL;
        t = term_t_14;
        f_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_61, term_t_14);
        t = a_11(s_61, f_62, t);
        {
          ATerm o_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_30;
            }
        }
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_61 = ATgetFirst((ATermList) t);
      o_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_61, term_t_14, o_61);
  t = lookup_table_0_1(s_61, t);
  e_62 = t;
  t = term_t_14;
  c_62 = t;
  t = e_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(c_62, o_61, d_62, t);
  t = r_61;
  {
    static ATerm q_7 (ATerm t);
    static ATerm q_7 (ATerm t)
    {
      ATerm g_62 = NULL;
      g_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_61, g_62);
      t = u_10(s_61, g_62, t);
      return(t);
    }
    t = map_1_0(q_7, t);
  }
  t = z_61;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t)
{
  ATerm r_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_88(t);
      t = w_88(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = r_30;
      t = w_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,r_62 = NULL,s_62 = NULL;
  m_62 = t;
  t = q_102(t);
  i_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_62, term_t_14);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_62 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_30 = ATgetArgument(t, 0);
            ATerm z_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_14;
        y_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_62, term_t_14);
        t = a_11(i_62, y_62, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
  }
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_62, term_t_14, (ATerm) ATinsert(CheckATermList(n_62), (ATerm) ATempty));
  t = lookup_table_0_1(i_62, t);
  s_62 = t;
  t = term_t_14;
  o_62 = t;
  t = (ATerm) ATinsert(CheckATermList(n_62), (ATerm) ATempty);
  p_62 = t;
  t = s_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(o_62, p_62, r_62, t);
  t = m_62;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_g_15;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm k_63 = NULL;
  k_63 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_63);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = k_63;
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm b_63 = NULL;
  static ATerm u_7 (ATerm t);
  static ATerm u_7 (ATerm t)
  {
    ATerm d_63 = NULL;
    d_63 = t;
    {
      ATerm c_31 = t;
      int d_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_63 = NULL,f_63 = NULL;
          t = term_g_15;
          e_63 = t;
          t = term_t_14;
          f_63 = t;
          t = term_e_31;
          t = a_11(e_63, f_63, t);
          LocalPopChoice(d_31);
        }
      else
        {
          t = c_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_63 != NULL) && (b_63 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_63 = ATgetFirst((ATermList) t);
        {
          ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_63;
    t = map_1_0(v_7, t);
    t = d_63;
    t = end_scope_1_0(y_7, t);
    return(t);
  }
  t = begin_scope_1_0(t_7, t);
  t = restore_always_2_0(q_84, u_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL;
  n_63 = t;
  t = term_m_15;
  t = whoami_0_0(t);
  o_63 = t;
  t = term_y_13;
  q_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_31), o_63), term_i_31);
  r_63 = t;
  t = SSL_printnl(q_63, r_63);
  t = term_n_17;
  p_63 = t;
  t = SSL_exit(p_63);
  t = n_63;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,e_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
      t = term_m_15;
      t = p_0(t);
      f_64 = t;
      t = term_k_31;
      g_64 = t;
      t = term_m_31;
      h_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_31, term_m_31, f_64);
      t = b_11(g_64, h_64, f_64, t);
      _fail(t);
    }
  else
    {
      ATerm o_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_63 = ATgetFirst((ATermList) t);
          a_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_64;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_64 = ATgetFirst((ATermList) t);
          e_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_63;
      t = m_0(t);
      t = b_64;
      t = o_0(t);
      o_65 = t;
      t = (ATerm) ATinsert(CheckATermList(e_64), o_65);
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm r_65 = NULL;
  r_65 = t;
  if(match_string(t, "-k"))
    {
      t = r_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_65;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  t = SSL_string_to_int(s_65);
  t_65 = t;
  t = term_o_31;
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, t_65);
  t = d_11(u_65, t_65, t);
  t = s_65;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_8, d_8, e_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm x_65 = NULL;
  x_65 = t;
  if(match_string(t, "-S"))
    {
      t = x_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_65;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL;
  t = term_q_31;
  y_65 = t;
  t = term_p_16;
  z_65 = t;
  t = term_r_31;
  t = d_11(y_65, z_65, t);
  t = term_s_31;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm e_66 = NULL,h_66 = NULL,k_66 = NULL;
  e_66 = t;
  t = SSL_string_to_int(e_66);
  h_66 = t;
  t = term_q_31;
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, h_66);
  t = d_11(k_66, h_66, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_66);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm l_66 = NULL,o_66 = NULL;
  t = term_v_31;
  l_66 = t;
  t = term_m_15;
  o_66 = t;
  t = term_x_31;
  t = d_11(l_66, o_66, t);
  t = term_z_31;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_8, l_8, o_8, t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm g_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_8, q_8, t_8, t);
            LocalPopChoice(m_32);
          }
        else
          {
            t = g_32;
            t = Option_3_0(u_8, x_8, y_8, t);
          }
      }
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm t_66 = NULL;
  t_66 = t;
  if(match_string(t, "-o"))
    {
      t = t_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_66;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL;
  u_66 = t;
  t = term_q_13;
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_13, u_66);
  t = d_11(v_66, u_66, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_66);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_8, a_9, b_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm x_66 = NULL;
  x_66 = t;
  if(match_string(t, "-i"))
    {
      t = x_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_66;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm y_66 = NULL,c_67 = NULL;
  y_66 = t;
  t = term_o_32;
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_32, y_66);
  t = d_11(c_67, y_66, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_66);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_9, g_9, h_9, t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  t = term_r_32;
  e_67 = t;
  t = term_m_15;
  f_67 = t;
  t = term_s_32;
  t = d_11(e_67, f_67, t);
  t = term_v_32;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  if(match_string(t, "-w"))
    {
      t = i_67;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = i_67;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,n_67 = NULL;
  j_67 = t;
  t = SSL_string_to_int(j_67);
  k_67 = t;
  t = term_a_17;
  n_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, k_67);
  t = d_11(n_67, k_67, t);
  t = j_67;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            {
              ATerm e_33 = t;
              int f_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_9, c_10, d_10, t);
                  LocalPopChoice(f_33);
                }
              else
                {
                  t = e_33;
                  {
                    ATerm g_33 = t;
                    int h_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_33);
                      }
                    else
                      {
                        t = g_33;
                        {
                          ATerm i_33 = t;
                          int j_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(j_33);
                            }
                          else
                            {
                              t = i_33;
                              t = ArgOption_3_0(i_10, j_10, k_10, t);
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
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_15;
  t = whoami_0_0(t);
  p_67 = t;
  t = term_y_13;
  r_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_33), p_67);
  s_67 = t;
  t = SSL_printnl(r_67, s_67);
  t = term_n_17;
  q_67 = t;
  t = SSL_exit(q_67);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_67 = NULL,z_67 = NULL;
  t = term_p_13;
  u_67 = t;
  t = term_o_33;
  z_67 = t;
  t = term_p_33;
  t = a_11(u_67, z_67, t);
  return(t);
}
static ATerm v_10 (ATerm w_67, ATerm x_67, ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_67, x_67);
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      t = SSL_addr(w_67, x_67);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  ATerm b_68 = NULL,e_68 = NULL,f_68 = NULL;
  b_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_68;
      t = w_98(t);
    }
  else
    {
      ATerm j_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_68 = ATgetFirst((ATermList) t);
          f_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_68;
      t = foldr_2_0(w_98, x_98, t);
      j_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_68, j_68);
      t = x_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(j_17, k_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_68 = NULL,f_17 = NULL,g_17 = NULL;
  t = times_0_0(t);
  g_17 = t;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_17;
  t = foldr_2_0(l_10, w_10, t);
  m_68 = t;
  t = SSL_TicksToSeconds(m_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  if(match_cons(t, sym__2))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_69;
        if((g_69 != t))
          {
            _fail(t);
          }
        t = f_69;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_69, h_69);
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = SSL_gtr(g_69, h_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_69 = NULL,t_69 = NULL,u_69 = NULL;
        t = term_p_13;
        t_69 = t;
        t = term_q_31;
        u_69 = t;
        t = term_z_33;
        t = a_11(t_69, u_69, t);
        q_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_69, term_n_17);
        t = geq_0_0(t);
        t = o_69;
        t = t_101(t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = o_69;
      }
  }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,z_69 = NULL,a_70 = NULL;
  t = run_time_0_0(t);
  w_69 = t;
  t = term_m_15;
  t = whoami_0_0(t);
  x_69 = t;
  t = term_y_13;
  z_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_34), w_69), term_a_34), x_69);
  a_70 = t;
  t = SSL_printnl(z_69, a_70);
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_34), w_69), term_a_34), x_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_70 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  b_70 = t;
  t = SSL_exit(b_70);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  m_70 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_70;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_70 = ATgetArgument(t, 0);
          {
            ATerm x_17 = NULL,u_13 = NULL;
            t = SSLgetAnnotations(m_70);
            x_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_70);
            u_13 = t;
            t = SSLsetAnnotations(u_13, x_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_70;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_70 = NULL,f_70 = NULL;
      t = term_p_13;
      e_70 = t;
      t = term_e_34;
      f_70 = t;
      t = term_f_34;
      t = a_11(e_70, f_70, t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      t = fetch_1_0(c_11, t);
    }
  t = x_105(t);
  return(t);
}
static ATerm e_11 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm o_70 = NULL;
  t = SSL_hashtable_put(l_25, j_25, k_25);
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_70);
  return(t);
}
static ATerm f_11 (ATerm m_25, ATerm n_25, ATerm t)
{
  t = SSL_hashtable_get(n_25, m_25);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_22, ATerm t)
{
  ATerm z_70 = NULL;
  t = table_hashtable_0_0(t);
  z_70 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = z_70;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_11(d_22, d_18, t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm j_18 = NULL;
          t = d_22;
          t = table_create_0_0(t);
          t = z_70;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_11(d_22, j_18, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_25, ATerm s_25, ATerm t)
{
  ATerm c_71 = NULL;
  t = SSL_hashtable_create(r_25, s_25);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_71);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,h_71 = NULL,i_71 = NULL;
  d_71 = t;
  t = term_i_34;
  h_71 = t;
  t = term_j_34;
  i_71 = t;
  t = d_71;
  t = new_hashtable_0_2(h_71, i_71, t);
  e_71 = t;
  t = d_71;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(d_71, e_71, f_71, t);
  t = d_71;
  return(t);
}
static ATerm x_10 (ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm j_71 = NULL;
  t = SSL_hashtable_remove(p_25, o_25);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_71);
  return(t);
}
static ATerm y_10 (ATerm t_25, ATerm t)
{
  ATerm k_71 = NULL;
  t = SSL_hashtable_destroy(t_25);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_71);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_71 = NULL;
  t = SSL_table_hashtable();
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_71);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
  m_71 = t;
  t = table_hashtable_0_0(t);
  n_71 = t;
  t = lookup_table_0_1(m_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(p_71, t);
  t = n_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(m_71, o_71, t);
  t = m_71;
  return(t);
}
ATerm map_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  static ATerm e_72 (ATerm t);
  static ATerm e_72 (ATerm t)
  {
    ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
    b_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_72;
      }
    else
      {
        ATerm o_18 = NULL,t_18 = NULL,u_18 = NULL,c_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_72 = ATgetFirst((ATermList) t);
            d_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_72);
        o_18 = t;
        t = c_72;
        t = q_91(t);
        t_18 = t;
        t = d_72;
        t = e_72(t);
        u_18 = t;
        t = (ATerm) ATinsert(CheckATermList(u_18), t_18);
        c_14 = t;
        t = SSLsetAnnotations(c_14, o_18);
      }
    return(t);
  }
  t = e_72(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_72 = ATgetFirst((ATermList) t);
      i_72 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_72 = NULL,n_72 = NULL;
        static ATerm h_11 (ATerm t);
        static ATerm h_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_72)), not_null(n_72));
          return(t);
        }
        t = i_72;
        t = l_0(t);
        if(((m_72 != NULL) && (m_72 != t)))
          _fail(t);
        else
          m_72 = t;
        t = h_72;
        t = j_0(t);
        if(((n_72 != NULL) && (n_72 != t)))
          _fail(t);
        else
          n_72 = t;
        t = i_72;
        t = reverse_acc_2_0(j_0, h_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,h_14 = NULL;
  v_72 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_72);
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_72);
  h_14 = t;
  t = SSLsetAnnotations(h_14, t_72);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_72), term_k_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL;
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_72 = NULL,s_72 = NULL;
      t = term_p_13;
      r_72 = t;
      t = term_o_33;
      s_72 = t;
      t = term_p_33;
      t = a_11(r_72, s_72, t);
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      t = fetch_1_0(n_11, t);
    }
  t = term_n_34;
  t = echo_0_0(t);
  t = term_k_31;
  p_72 = t;
  t = term_m_31;
  q_72 = t;
  t = term_o_34;
  t = a_11(p_72, q_72, t);
  t = reverse_acc_2_0(_id, o_11, t);
  t = map_1_0(t_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  static ATerm u_73 (ATerm t);
  static ATerm u_73 (ATerm t)
  {
    ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
    r_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_73 = ATgetFirst((ATermList) t);
        t_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_34 = t;
      int s_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_19 = NULL,r_19 = NULL,k_14 = NULL;
          t = SSLgetAnnotations(r_73);
          g_19 = t;
          t = s_73;
          t = a_92(t);
          r_19 = t;
          t = (ATerm) ATinsert(CheckATermList(t_73), r_19);
          k_14 = t;
          t = SSLsetAnnotations(k_14, g_19);
          LocalPopChoice(s_34);
        }
      else
        {
          t = p_34;
          {
            ATerm f_20 = NULL,t_20 = NULL,l_14 = NULL;
            t = SSLgetAnnotations(r_73);
            f_20 = t;
            t = t_73;
            t = u_73(t);
            t_20 = t;
            t = (ATerm) ATinsert(CheckATermList(t_20), s_73);
            l_14 = t;
            t = SSLsetAnnotations(l_14, f_20);
          }
        }
    }
    return(t);
  }
  t = u_73(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  {
    ATerm t_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_73;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_34 = ATgetFirst((ATermList) t);
                ATerm y_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_73;
          }
        LocalPopChoice(v_34);
      }
    else
      {
        t = t_34;
        t = (ATerm) ATinsert(ATempty, y_73);
      }
  }
  z_73 = t;
  t = term_s_13;
  a_74 = t;
  t = SSL_printnl(a_74, z_73);
  t = y_73;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL;
  t = term_p_13;
  e_74 = t;
  t = term_o_33;
  f_74 = t;
  t = term_p_33;
  t = a_11(e_74, f_74, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  t = term_z_34;
  g_74 = t;
  t = term_m_15;
  h_74 = t;
  t = term_a_35;
  t = d_11(g_74, h_74, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL;
  t = term_z_34;
  k_74 = t;
  t = term_m_15;
  l_74 = t;
  t = term_a_35;
  t = d_11(k_74, l_74, t);
  t = term_c_35;
  i_74 = t;
  t = term_m_15;
  j_74 = t;
  t = term_d_35;
  t = d_11(i_74, j_74, t);
  t = term_e_35;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_12, e_12, f_12, t);
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      t = Option_3_0(g_12, j_12, k_12, t);
    }
  return(t);
}
static ATerm d_11 (ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL;
  t = term_p_13;
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, h_36, i_36);
  t = lookup_table_0_1(m_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(h_36, i_36, n_74, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, h_36, i_36);
  return(t);
}
static ATerm b_11 (ATerm r_20, ATerm s_20, ATerm q_20, ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            ATerm m_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        t = a_11(r_20, s_20, t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = (ATerm) ATempty;
      }
  }
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_20, s_20, (ATerm) ATinsert(CheckATermList(r_74), q_20));
  t = lookup_table_0_1(r_20, t);
  u_74 = t;
  t = (ATerm) ATinsert(CheckATermList(r_74), q_20);
  s_74 = t;
  t = u_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(s_20, s_74, t_74, t);
  t = q_74;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
      t = term_m_15;
      t = h_0(t);
      c_75 = t;
      t = term_k_31;
      d_75 = t;
      t = term_m_31;
      e_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_31, term_m_31, c_75);
      t = b_11(d_75, e_75, c_75, t);
      _fail(t);
    }
  else
    {
      ATerm h_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_75 = ATgetFirst((ATermList) t);
          b_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_75;
      t = d_0(t);
      t = term_m_15;
      t = g_0(t);
      h_75 = t;
      t = (ATerm) ATinsert(CheckATermList(b_75), h_75);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,h_17 = NULL;
  n_75 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_75 = ATgetFirst((ATermList) t);
      k_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_75);
  i_75 = t;
  t = j_75;
  t = t_70(t);
  l_75 = t;
  t = k_75;
  t = u_70(t);
  m_75 = t;
  t = (ATerm) ATinsert(CheckATermList(m_75), l_75);
  h_17 = t;
  t = SSLsetAnnotations(h_17, i_75);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,x_75 = NULL,y_75 = NULL,g_22 = NULL;
  s_75 = t;
  {
    ATerm o_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_35;
        t = v_107(t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = o_35;
      }
  }
  t = s_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_75 = ATgetFirst((ATermList) t);
      v_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_75);
  t_75 = t;
  t = term_o_33;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, u_75);
  t = d_11(y_75, u_75, t);
  t = v_75;
  {
    static ATerm i_76 (ATerm t);
    static ATerm i_76 (ATerm t)
    {
      ATerm w_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_76 = NULL;
              b_76 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_76;
              LocalPopChoice(d_36);
            }
          else
            {
              t = b_36;
              t = v_107(t);
              t = Cons_2_0(_id, i_76, t);
            }
          LocalPopChoice(a_36);
        }
      else
        {
          t = w_35;
          {
            ATerm e_76 = NULL,f_76 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_76 = ATgetFirst((ATermList) t);
                f_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_76), (ATerm) ATmakeAppl(sym_Undefined_1, e_76));
          }
        }
      return(t);
    }
    t = i_76(t);
  }
  x_75 = t;
  t = (ATerm) ATinsert(CheckATermList(x_75), (ATerm) ATmakeAppl(sym_Program_1, u_75));
  g_22 = t;
  t = SSLsetAnnotations(g_22, t_75);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  if(match_string(t, "--help"))
    {
      t = v_76;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_76;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_76;
        }
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL;
  t = term_e_34;
  w_76 = t;
  t = term_m_15;
  x_76 = t;
  t = term_e_36;
  t = d_11(w_76, x_76, t);
  t = term_k_36;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  p_76 = t;
  t = term_k_31;
  q_76 = t;
  t = term_m_36;
  t = lookup_table_0_1(q_76, t);
  u_76 = t;
  t = term_m_31;
  r_76 = t;
  t = (ATerm) ATempty;
  s_76 = t;
  t = u_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(r_76, s_76, t_76, t);
  t = p_76;
  {
    static ATerm l_12 (ATerm t);
    static ATerm l_12 (ATerm t)
    {
      ATerm n_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_107(t);
          LocalPopChoice(q_36);
        }
      else
        {
          t = n_36;
          {
            ATerm r_36 = t;
            int s_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_12, n_12, o_12, t);
                LocalPopChoice(s_36);
              }
            else
              {
                t = r_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_12, t);
  }
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_77 = NULL;
        i_77 = t;
        {
          ATerm w_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_21 = NULL;
              t = i_77;
              {
                ATerm z_36 = t;
                int c_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_21 = NULL,o_21 = NULL;
                    t = term_p_13;
                    n_21 = t;
                    t = term_e_34;
                    o_21 = t;
                    t = term_f_34;
                    t = a_11(n_21, o_21, t);
                    LocalPopChoice(c_37);
                  }
                else
                  {
                    t = z_36;
                    t = fetch_1_0(p_12, t);
                  }
              }
              t = i_77;
              t = default_system_usage_0_0(t);
              t = term_p_16;
              i_21 = t;
              t = SSL_exit(i_21);
              LocalPopChoice(y_36);
            }
          else
            {
              t = w_36;
              {
                ATerm b_22 = NULL,c_22 = NULL,e_22 = NULL;
                t = term_p_13;
                c_22 = t;
                t = term_z_34;
                e_22 = t;
                t = term_d_37;
                t = a_11(c_22, e_22, t);
                t = i_77;
                t = default_system_about_0_0(t);
                t = term_p_16;
                b_22 = t;
                t = SSL_exit(b_22);
              }
            }
        }
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        {
          ATerm e_37 = t;
          int f_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
              static ATerm q_12 (ATerm t);
              static ATerm q_12 (ATerm t)
              {
                ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_22 = NULL;
                o_77 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_77);
                m_77 = t;
                t = n_77;
                if(((n_76 != NULL) && (n_76 != t)))
                  _fail(t);
                else
                  n_76 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_77);
                p_22 = t;
                t = SSLsetAnnotations(p_22, m_77);
                return(t);
              }
              t = fetch_1_0(q_12, t);
              t = term_y_13;
              k_77 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), term_h_37);
              l_77 = t;
              t = SSL_printnl(k_77, l_77);
              t = (ATerm) ATmakeAppl(sym__2, term_y_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), term_h_37));
              t = default_system_usage_0_0(t);
              t = term_n_17;
              j_77 = t;
              t = SSL_exit(j_77);
              LocalPopChoice(f_37);
            }
          else
            {
              t = e_37;
            }
        }
      }
  }
  o_76 = t;
  t = term_k_31;
  t = table_destroy_0_0(t);
  t = o_76;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
  t = parse_options_1_0(z_105, t);
  t_77 = t;
  t = term_q_37;
  t = table_create_0_0(t);
  t = term_q_37;
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_37, term_r_37, t_77);
  t = lookup_table_0_1(u_77, t);
  x_77 = t;
  t = term_r_37;
  v_77 = t;
  t = x_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(v_77, t_77, w_77, t);
  t = t_77;
  t = b_106(t);
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_106, t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        {
          ATerm x_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_37);
            }
          else
            {
              t = x_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = xtc_temp_files_1_0(t_12, t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
      t = term_p_13;
      e_78 = t;
      t = term_o_32;
      f_78 = t;
      t = term_b_38;
      t = a_11(e_78, f_78, t);
      d_78 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_78);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      t = term_w_13;
    }
  t = read_from_0_0(t);
  a_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_78, term_p_16);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        {
          ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
          t = term_y_13;
          h_78 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_78, term_p_16)), term_b_18);
          i_78 = t;
          t = SSL_printnl(h_78, i_78);
          t = term_n_17;
          g_78 = t;
          t = SSL_exit(g_78);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_78, term_p_16)), term_b_18);
        }
      }
  }
  c_78 = t;
  t = SSL_explode_term(c_78);
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) == AT_LIST) && !(ATisEmpty(j_38))))
          {
            b_78 = ATgetFirst((ATermList) j_38);
            {
              ATerm n_38 = (ATerm) ATgetNext((ATermList) j_38);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_78, term_o_38);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, r_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
