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
ATerm term_m_35;
ATerm term_i_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_s_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_b_27;
ATerm term_w_23;
ATerm term_d_19;
ATerm term_u_18;
ATerm term_k_18;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_s_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_z_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_o_15, term_d_15);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_s_16);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_16);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_t_15);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_v_29);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_t_28);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_d_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_j_29);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_t_15);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_t_15);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_t_15);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__3, term_i_29, term_j_29, (ATerm) ATempty);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_y_31);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_t_15);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_l_29);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm w_10 (ATerm e_43, ATerm d_43, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_94 (ATerm), ATerm t);
static ATerm n_4 (ATerm d_4, ATerm t);
static ATerm o_4 (ATerm f_4, ATerm g_4, ATerm h_4, ATerm t);
static ATerm c_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm m_9 (ATerm f_107 (ATerm), ATerm p_37, ATerm n_37, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm t_10 (ATerm k_28, ATerm s_314, ATerm t);
ATerm at_suffix_1_0 (ATerm v_96 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm n_96 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm x_122 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm n_10 (ATerm x_18, ATerm y_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm n_9 (ATerm a_15, ATerm y_14, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm o_9 (ATerm s_14, ATerm w_14, ATerm t_14, ATerm t);
static ATerm p_9 (ATerm w_27, ATerm x_27, ATerm t);
static ATerm q_9 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm r_15, ATerm q_15, ATerm t);
static ATerm r_9 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm m_15, ATerm k_15, ATerm n_15, ATerm l_15, ATerm t);
ATerm foldl_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm a_88 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm t_9 (ATerm n_71, ATerm o_71, ATerm t);
static ATerm v_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm x_0, ATerm b_1, ATerm u_0, ATerm t);
ATerm thread_map_1_0 (ATerm x_103 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm w_9 (ATerm k_87 (ATerm), ATerm h_16, ATerm i_16, ATerm j_16, ATerm t);
static ATerm t_20 (ATerm b_20, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm y_9 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t);
static ATerm z_9 (ATerm z_71, ATerm a_72, ATerm t);
static ATerm a_10 (ATerm f_72, ATerm g_72, ATerm t);
static ATerm b_10 (ATerm c_68, ATerm d_68, ATerm y_67, ATerm t);
static ATerm c_10 (ATerm j_68, ATerm h_68, ATerm i_68, ATerm t);
static ATerm d_10 (ATerm u_67, ATerm v_67, ATerm w_67, ATerm t);
static ATerm u_26 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t);
static ATerm v_26 (ATerm g_25, ATerm j_25, ATerm t);
static ATerm w_26 (ATerm z_25, ATerm a_26, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm j_10 (ATerm o_87 (ATerm), ATerm g_17, ATerm f_17, ATerm b_17, ATerm d_17, ATerm a_17, ATerm t);
ATerm do_A_column_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm e_122 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_37 (ATerm b_37, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm FitToMax_1_0 (ATerm q_87 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm abox2text_1_0 (ATerm q_0 (ATerm), ATerm t);
ATerm try_abox2text_0_0 (ATerm t);
static ATerm y_56 (ATerm r_56, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_10 (ATerm y_26, ATerm t);
static ATerm u_10 (ATerm z_69, ATerm a_70, ATerm t);
static ATerm p_10 (ATerm q_36, ATerm r_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_59 (ATerm m_57, ATerm t);
static ATerm m_59 (ATerm s_57, ATerm v_57, ATerm w_57, ATerm t);
static ATerm n_59 (ATerm j_58, ATerm k_58, ATerm l_58, ATerm t);
static ATerm q_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm v_10 (ATerm e_36, ATerm f_36, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_11 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm x_10 (ATerm a_21, ATerm b_21, ATerm t);
ATerm end_scope_1_0 (ATerm c_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_88 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_11 (ATerm z_36, ATerm a_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_11 (ATerm v_20, ATerm w_20, ATerm u_20, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm Abox_2_text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_10 (ATerm h_71, ATerm i_71, ATerm t);
ATerm foldr_2_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_106 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm need_help_1_0 (ATerm k_110 (ATerm), ATerm t);
static ATerm h_11 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t);
static ATerm i_11 (ATerm q_25, ATerm r_25, ATerm t);
ATerm lookup_table_0_1 (ATerm h_22, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_25, ATerm w_25, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_11 (ATerm s_25, ATerm t_25, ATerm t);
static ATerm b_11 (ATerm x_25, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_96 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_112 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm parse_options_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
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
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = t_1;
        t = p_0(t);
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
        t = w_10(u_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = t_1;
              t = p_0(t);
              v_0 = t;
              {
                ATerm t_12 = t;
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
                    t = t_12;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_1, v_0);
              t = w_10(u_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              t = t_1;
              t = p_0(t);
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
ATerm filemode_0_0 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    ATerm a_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = SSL_filemode(n_2);
        if(match_cons(t, sym__2))
          {
            j_1 = ATgetArgument(t, 0);
            {
              ATerm g_13 = ATgetArgument(t, 1);
              if(((ATgetType(g_13) != AT_INT) || (ATgetInt((ATermInt) g_13) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_1;
        LocalPopChoice(c_13);
      }
    else
      {
        t = a_13;
        {
          ATerm z_1 = NULL,a_2 = NULL;
          t = term_i_13;
          a_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_13, n_2);
          t = u_10(a_2, n_2, t);
          z_1 = t;
          t = SSL_perror(z_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm w_10 (ATerm e_43, ATerm d_43, ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL;
  s_2 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 = NULL,z_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_l_13);
        z_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_43, (ATerm) ATinsert(ATempty, term_l_13));
        t = v_10(d_43, z_2, t);
        t = filemode_0_0(t);
        x_2 = t;
        t = SSL_S_ISDIR(x_2);
        t = s_2;
        LocalPopChoice(k_13);
        {
          ATerm b_3 = NULL,c_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_m_13), e_43);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          b_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_3), term_o_13), d_43);
          c_3 = t;
          t = SSL_concat_strings(c_3);
        }
      }
    else
      {
        t = j_13;
        t = d_43;
      }
  }
  q_2 = t;
  t = SSL_copy(e_43, q_2);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 = NULL,u_3 = NULL;
      t = term_r_13;
      t_3 = t;
      t = term_s_13;
      u_3 = t;
      t = term_v_13;
      t = d_11(t_3, u_3, t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = term_x_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_2 = NULL,i_2 = NULL;
      t = term_s_13;
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 = NULL,t_2 = NULL;
            t = term_r_13;
            r_2 = t;
            t = term_s_13;
            t_2 = t;
            t = term_v_13;
            t = d_11(r_2, t_2, t);
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = term_x_13;
          }
      }
      d_2 = t;
      t = term_a_14;
      i_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_14, d_2);
      t = w_10(i_2, d_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_3;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(u_89, t);
    return(t);
  }
  t = u_89(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  w_3 = t;
  t = w_94(t);
  x_3 = t;
  t = term_h_14;
  y_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_3), x_3);
  z_3 = t;
  t = SSL_printnl(y_3, z_3);
  t = w_3;
  return(t);
}
static ATerm n_4 (ATerm d_4, ATerm t)
{
  t = d_4;
  {
    ATerm k_14 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            ATerm p_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_14;
      }
  }
  t = term_q_14;
  t = debug_1_0(c_0, t);
  t = (ATerm) ATmakeAppl(sym__2, d_4, term_u_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm o_4 (ATerm f_4, ATerm g_4, ATerm h_4, ATerm t)
{
  t = SSL_open_file(f_4, g_4);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      {
        ATerm x_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_4(k_4, t);
            LocalPopChoice(z_14);
          }
        else
          {
            t = x_14;
            t = o_4(l_4, m_4, k_4, t);
          }
      }
    }
  else
    {
      t = n_4(k_4, t);
    }
  return(t);
}
static ATerm m_9 (ATerm f_107 (ATerm), ATerm p_37, ATerm n_37, ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  s_4 = t;
  t = f_107(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_4, p_37, n_37);
  t = e_11(p_4, p_37, n_37, t);
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL;
        t = term_d_15;
        y_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_4, term_d_15);
        t = d_11(p_4, y_4, t);
        {
          ATerm e_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_15;
            }
        }
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_4 = ATgetFirst((ATermList) t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_4, term_d_15, (ATerm) ATinsert(CheckATermList(r_4), (ATerm) ATinsert(CheckATermList(q_4), p_37)));
  t = lookup_table_0_1(p_4, t);
  x_4 = t;
  t = term_d_15;
  t_4 = t;
  t = (ATerm) ATinsert(CheckATermList(r_4), (ATerm) ATinsert(CheckATermList(q_4), p_37));
  v_4 = t;
  t = x_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(t_4, v_4, w_4, t);
  t = s_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_5 = NULL;
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL,y_2 = NULL;
      g_5 = t;
      t = term_i_15;
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, term_i_15);
      t = u_10(g_5, y_2, t);
      b_5 = t;
      t = SSL_mkstemp(b_5);
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
      {
        ATerm h_5 = NULL;
        t = term_j_15;
        h_5 = t;
        t = SSL_perror(h_5);
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
static ATerm i_0 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  t = P__tmpdir_0_0(t);
  v_5 = t;
  t = term_p_15;
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, term_p_15);
  t = u_10(v_5, w_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_15;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_t_15);
  t = m_9(i_0, t_5, u_5, t);
  t = SSL_close(s_5);
  t = t_5;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL;
  f_6 = t;
  t = xtc_new_file_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_u_14);
  t = open_file_0_0(t);
  t = f_6;
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm t_6 = NULL;
      t_6 = t;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 = NULL,f_3 = NULL;
            t = SSL_is_string(t_6);
            e_3 = t;
            t = (ATerm) ATinsert(ATempty, e_3);
            f_3 = t;
            t = SSL_print(g_6, f_3);
            t = e_3;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            t = t_6;
          }
      }
      return(t);
    }
    t = topdown_1_0(k_0, t);
  }
  t = SSL_close_file(g_6);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_6);
  return(t);
}
static ATerm t_10 (ATerm k_28, ATerm s_314, ATerm t)
{
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    if((k_28 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = s_314;
  t = fetch_1_0(n_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  static ATerm v_41 (ATerm t);
  static ATerm v_41 (ATerm t)
  {
    ATerm w_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_96(t);
        LocalPopChoice(y_15);
      }
    else
      {
        t = w_15;
        {
          ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,w_8 = NULL,d_9 = NULL,f_1 = NULL;
          s_41 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_41 = ATgetFirst((ATermList) t);
              u_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_41);
          w_8 = t;
          t = u_41;
          t = v_41(t);
          d_9 = t;
          t = (ATerm) ATinsert(CheckATermList(d_9), t_41);
          f_1 = t;
          t = SSLsetAnnotations(f_1, w_8);
        }
      }
    return(t);
  }
  t = v_41(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,i_1 = NULL,h_1 = NULL;
    i_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_42 = ATgetFirst((ATermList) t);
        f_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_42);
    d_42 = t;
    t = e_42;
    t = n_96(t);
    g_42 = t;
    t = (ATerm) ATinsert(CheckATermList(f_42), g_42);
    h_1 = t;
    t = SSLsetAnnotations(h_1, d_42);
    h_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_42 = ATgetFirst((ATermList) t);
        b_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_42);
    z_41 = t;
    t = b_42;
    if(((x_41 != NULL) && (x_41 != t)))
      _fail(t);
    else
      x_41 = t;
    t = (ATerm) ATinsert(CheckATermList(b_42), a_42);
    i_1 = t;
    t = SSLsetAnnotations(i_1, z_41);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_0, t);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_41, not_null(x_41));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm q_42 = NULL,t_42 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(x_122, t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm n_42 = NULL;
        n_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_42, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_42;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_16 = ATgetFirst((ATermList) t);
              ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_42;
          t = list_tokenize_1_0(x_122, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_16 = ATgetFirst((ATermList) t);
          ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_42);
        }
      else
        {
          ATerm b_43 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_16 = ATgetFirst((ATermList) t);
              ATerm o_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_42;
          t = list_tokenize_1_0(x_122, t);
          b_43 = t;
          t = (ATerm) ATinsert(CheckATermList(b_43), q_42);
        }
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm u_43 = NULL;
  u_43 = t;
  t = SSL_implode_string(u_43);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,j_43 = NULL,k_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,n_1 = NULL;
  o_43 = t;
  if(match_cons(t, sym__2))
    {
      k_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  j_43 = t;
  t = SSL_explode_string(m_43);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, n_43);
  n_1 = t;
  t = SSLsetAnnotations(n_1, j_43);
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_43;
  {
    static ATerm s_0 (ATerm t);
    static ATerm s_0 (ATerm t)
    {
      ATerm p_43 = NULL;
      p_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_43, g_43);
      t = t_10(p_43, g_43, t);
      return(t);
    }
    t = list_tokenize_1_0(s_0, t);
  }
  t = map_1_0(t_0, t);
  return(t);
}
static ATerm n_10 (ATerm x_18, ATerm y_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_p_16), x_18);
  t = string_tokenize_0_0(t);
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_44 = NULL,j_44 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_s_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_44 = ATgetFirst((ATermList) t);
                j_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_44;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(i_44);
          }
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm k_44 = NULL,l_44 = NULL;
          t = last_0_0(t);
          l_44 = t;
          t = SSL_strlen(l_44);
          k_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_44, y_18);
          t = t_9(k_44, y_18, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm t_16 = t;
  if((PushChoice() == 0))
    {
      ATerm n_44 = NULL,p_44 = NULL;
      if(match_cons(t, sym__2))
        {
          n_44 = ATgetArgument(t, 0);
          p_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_44, p_44);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_44, p_44);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = SSL_gtr(n_44, p_44);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, n_44, p_44);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_44 = NULL,r_44 = NULL;
      t = term_r_13;
      q_44 = t;
      t = term_z_16;
      r_44 = t;
      t = term_e_17;
      t = d_11(q_44, r_44, t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      t = term_h_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm w_40 = NULL,b_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_40 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_41;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_40;
    }
  else
    {
      t = b_41;
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
static ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm a_15, ATerm y_14, ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,a_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL;
  t = a_15;
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(z_0, t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = term_s_16;
      }
  }
  h_7 = t;
  t = term_k_17;
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_7, term_k_17);
  t = y_10(h_7, j_7, t);
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_7, term_p_16);
  t = copy_char_0_0(t);
  x_6 = t;
  t = a_15;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(c_1, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = term_s_16;
      }
  }
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_7, term_o_17);
  t = copy_char_0_0(t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_14, term_o_17);
  t = copy_char_0_0(t);
  a_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_7), y_6), x_6);
  e_7 = t;
  t = SSL_concat_strings(e_7);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm p_7 = NULL,r_7 = NULL;
  r_7 = t;
  t = SSL_explode_term(r_7);
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_17 = ATgetArgument(t, 1);
        if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
          {
            p_7 = ATgetFirst((ATermList) r_17);
            {
              ATerm s_17 = (ATerm) ATgetNext((ATermList) r_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_7;
  return(t);
}
static ATerm o_9 (ATerm s_14, ATerm w_14, ATerm t_14, ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
  t = n_9(s_14, t_14, t);
  m_7 = t;
  t = w_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  t = map_1_0(d_1, t);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_7, o_7);
  t = p_9(m_7, o_7, t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_7, l_7);
  return(t);
}
static ATerm p_9 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  t = x_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_27;
    }
  else
    {
      ATerm o_3 = NULL,c_4 = NULL,q_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_8 = ATgetFirst((ATermList) t);
          v_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_27);
      o_3 = t;
      t = v_8;
      {
        static ATerm c_5 (ATerm t);
        static ATerm c_5 (ATerm t)
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              u_4 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_4;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm z_4 = NULL;
                t = Cons_2_0(_id, c_5, t);
                z_4 = t;
                t = (ATerm) ATinsert(CheckATermList(z_4), w_27);
              }
            }
          return(t);
        }
        t = c_5(t);
      }
      c_4 = t;
      t = (ATerm) ATinsert(CheckATermList(c_4), u_8);
      q_1 = t;
      t = SSLsetAnnotations(q_1, o_3);
    }
  return(t);
}
static ATerm q_9 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm r_15, ATerm q_15, ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,j_9 = NULL,l_9 = NULL,x_9 = NULL;
  t = term_t_15;
  t = h_87(t);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_15, x_9);
  t = f_87(t);
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_15;
  t = g_87(t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, l_9);
  t = y_10(b_9, l_9, t);
  j_9 = t;
  t = (ATerm) ATinsert(CheckATermList(q_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_9), j_9));
  return(t);
}
static ATerm r_9 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm m_15, ATerm k_15, ATerm n_15, ATerm l_15, ATerm t)
{
  ATerm h_10 = NULL,m_10 = NULL,r_10 = NULL,s_10 = NULL,j_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_15, n_15);
  t = d_87(t);
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_15;
  t = get_width_0_0(t);
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, j_11);
  t = leq_0_0(t);
  t = term_t_15;
  t = e_87(t);
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, s_10);
  t = y_10(m_10, s_10, t);
  r_10 = t;
  t = (ATerm) ATinsert(CheckATermList(l_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_15), h_10), r_10));
  return(t);
}
ATerm foldl_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  static ATerm a_12 (ATerm t);
  static ATerm a_12 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL,s_11 = NULL,t_11 = NULL;
    if(match_cons(t, sym__2))
      {
        o_11 = ATgetArgument(t, 0);
        t_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_11;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_11;
      }
    else
      {
        ATerm z_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_11 = ATgetFirst((ATermList) t);
            s_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_11, t_11);
        t = l_103(t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, z_11);
        t = a_12(t);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm c_12 = NULL;
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,k_12 = NULL,l_12 = NULL,x_1 = NULL;
    l_12 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        e_12 = ATgetArgument(t, 0);
        f_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_12);
    d_12 = t;
    t = e_12;
    t = a_88(t);
    k_12 = t;
    t = f_12;
    if(((c_12 != NULL) && (c_12 != t)))
      _fail(t);
    else
      c_12 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, k_12, f_12);
    x_1 = t;
    t = SSLsetAnnotations(x_1, d_12);
    return(t);
  }
  t = fetch_1_0(e_1, t);
  t = SSL_string_to_int(not_null(c_12));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = copy_0_0(t);
  r_12 = t;
  t = SSL_implode_string(r_12);
  return(t);
}
static ATerm t_9 (ATerm n_71, ATerm o_71, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_71, o_71);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_subtr(n_71, o_71);
    }
  return(t);
}
static ATerm v_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm x_0, ATerm b_1, ATerm u_0, ATerm t)
{
  ATerm s_12 = NULL,u_12 = NULL,w_12 = NULL,x_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_0, u_0);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_1, s_12);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_12), w_12), u_12);
  return(t);
}
ATerm thread_map_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  static ATerm n_13 (ATerm t);
  static ATerm n_13 (ATerm t)
  {
    ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL;
    e_13 = t;
    if(match_cons(t, sym__2))
      {
        f_13 = ATgetArgument(t, 0);
        h_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_13;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_13 = ATgetFirst((ATermList) t);
        d_13 = (ATerm) ATgetNext((ATermList) t);
        t = e_13;
        t = v_9(x_103, n_13, b_13, d_13, h_13, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_13);
      }
    return(t);
  }
  t = n_13(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm b_18 = t;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL,o_14 = NULL,r_14 = NULL;
      n_14 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_14;
        }
      else
        {
          ATerm p_5 = NULL,e_2 = NULL;
          if(match_cons(t, sym_H_2))
            {
              o_14 = ATgetArgument(t, 0);
              r_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_14);
          p_5 = t;
          t = o_14;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_14;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, o_14, r_14);
          e_2 = t;
          t = SSLsetAnnotations(e_2, p_5);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_18;
    }
  return(t);
}
ATerm filter_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,z_18 = NULL,c_19 = NULL;
  s_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_18 = ATgetFirst((ATermList) t);
          c_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = NULL,k_6 = NULL,m_6 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(s_18);
            e_6 = t;
            t = z_18;
            t = k_104(t);
            k_6 = t;
            t = c_19;
            t = filter_1_0(k_104, t);
            m_6 = t;
            t = (ATerm) ATinsert(CheckATermList(m_6), k_6);
            g_2 = t;
            t = SSLsetAnnotations(g_2, e_6);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = c_19;
            t = filter_1_0(k_104, t);
          }
      }
    }
  return(t);
}
static ATerm w_9 (ATerm k_87 (ATerm), ATerm h_16, ATerm i_16, ATerm j_16, ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,j_2 = NULL;
  t = j_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_19 = ATgetFirst((ATermList) t);
      k_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_16);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, h_16);
  t = k_87(t);
  l_19 = t;
  t = k_19;
  {
    static ATerm g_1 (ATerm t);
    static ATerm g_1 (ATerm t)
    {
      ATerm n_19 = NULL;
      n_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, i_16);
      t = k_87(t);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  m_19 = t;
  t = (ATerm) ATinsert(CheckATermList(m_19), l_19);
  j_2 = t;
  t = SSLsetAnnotations(j_2, f_19);
  return(t);
}
static ATerm t_20 (ATerm b_20, ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,i_20 = NULL,l_20 = NULL,m_20 = NULL,o_20 = NULL,p_20 = NULL,l_2 = NULL;
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_20 = ATgetFirst((ATermList) t);
      m_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  i_20 = t;
  t = m_20;
  t = Cons_2_0(k_1, l_1, t);
  o_20 = t;
  t = (ATerm) ATinsert(CheckATermList(o_20), l_20);
  l_2 = t;
  t = SSLsetAnnotations(l_2, i_20);
  p_20 = t;
  t = SSL_mkterm(c_20, p_20);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL;
      r_20 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_20;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = Cons_2_0(m_1, o_1, t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm j_18 = t;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL;
      s_20 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = s_20;
        }
      else
        {
          t = t_20(s_20, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_21 = NULL,v_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_21 = ATgetFirst((ATermList) t);
      v_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_21, v_21);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_21 = ATgetFirst((ATermList) t);
      z_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if(match_cons(l_18, sym__2))
        {
          a_22 = ATgetArgument(l_18, 0);
          b_22 = ATgetArgument(l_18, 1);
        }
      else
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(match_cons(m_18, sym__2))
          {
            c_22 = ATgetArgument(m_18, 0);
            e_22 = ATgetArgument(m_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_22), a_22), (ATerm) ATinsert(CheckATermList(e_22), b_22));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(p_1, t);
      t = (ATerm) ATempty;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm y_20 = NULL,f_21 = NULL,g_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,s_21 = NULL,o_2 = NULL;
        t = map_1_0(r_1, t);
        t = genzip_4_0(s_1, v_1, w_1, _id, t);
        s_21 = t;
        if(match_cons(t, sym__2))
          {
            i_21 = ATgetArgument(t, 0);
            j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_21);
        g_21 = t;
        t = j_21;
        t = matrix_transpose_0_0(t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, k_21);
        o_2 = t;
        t = SSLsetAnnotations(o_2, g_21);
        if(match_cons(t, sym__2))
          {
            y_20 = ATgetArgument(t, 0);
            f_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_21), y_20);
      }
    }
  return(t);
}
static ATerm y_9 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm s_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, q_67, r_67, s_67);
  t = c_10(q_67, r_67, s_67, t);
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_22, r_67);
  t = u_10(s_22, r_67, t);
  return(t);
}
static ATerm z_9 (ATerm z_71, ATerm a_72, ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(z_71, a_72);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = SSL_divr(z_71, a_72);
    }
  return(t);
}
static ATerm a_10 (ATerm f_72, ATerm g_72, ATerm t)
{
  t = SSL_mod(f_72, g_72);
  return(t);
}
static ATerm b_10 (ATerm c_68, ATerm d_68, ATerm y_67, ATerm t)
{
  ATerm u_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,e_23 = NULL,g_23 = NULL,h_23 = NULL,m_23 = NULL;
  t = SSL_strlen(d_68);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_67, z_22);
  t = t_9(y_67, z_22, t);
  u_22 = t;
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_u_18;
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_22, term_u_18);
        t = a_10(u_22, n_23, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_22;
        LocalPopChoice(t_18);
        {
          ATerm o_23 = NULL,p_23 = NULL;
          t = term_u_18;
          p_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_22, term_u_18);
          t = z_9(u_22, p_23, t);
          o_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_23, o_23);
        }
      }
    else
      {
        t = r_18;
        {
          ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,g_3 = NULL;
          t = term_k_17;
          t_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_22, term_k_17);
          t = t_9(u_22, t_23, t);
          r_23 = t;
          t = term_u_18;
          s_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_23, term_u_18);
          t = z_9(r_23, s_23, t);
          q_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_23, q_23);
          b_24 = t;
          if(match_cons(t, sym__2))
            {
              ATerm v_18 = ATgetArgument(t, 0);
              ATerm w_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_24);
          y_23 = t;
          t = term_k_17;
          a_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_23, term_k_17);
          t = y_10(q_23, a_24, t);
          z_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_23, q_23);
          g_3 = t;
          t = SSLsetAnnotations(g_3, y_23);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_22, x_22);
  t = y_10(z_22, x_22, t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_68, d_68, h_23);
  t = c_10(c_68, d_68, h_23, t);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_22, a_23);
  t = y_10(z_22, a_23, t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_68, d_68, g_23);
  t = c_10(c_68, d_68, g_23, t);
  e_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_23), d_68), y_22);
  m_23 = t;
  t = SSL_concat_strings(m_23);
  return(t);
}
static ATerm c_10 (ATerm j_68, ATerm h_68, ATerm i_68, ATerm t)
{
  ATerm c_24 = NULL;
  t = SSL_strlen(h_68);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_68, c_24);
  t = t_9(i_68, c_24, t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_24, term_s_16);
        t = geq_0_0(t);
        t = d_24;
        LocalPopChoice(b_19);
        {
          ATerm e_24 = NULL;
          e_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_24, j_68);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = a_19;
        t = term_d_19;
      }
  }
  return(t);
}
static ATerm d_10 (ATerm u_67, ATerm v_67, ATerm w_67, ATerm t)
{
  ATerm f_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, u_67, v_67, w_67);
  t = c_10(u_67, v_67, w_67, t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_67, f_24);
  t = u_10(v_67, f_24, t);
  return(t);
}
static ATerm u_26 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,e_25 = NULL;
  t = term_k_17;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_24, term_k_17);
  {
    ATerm e_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(r_24, e_25);
        LocalPopChoice(g_19);
      }
    else
      {
        t = e_19;
        t = SSL_gtr(r_24, e_25);
      }
  }
  t = s_24;
  if(match_cons(t, sym__3))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
      c_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_10(a_25, b_25, c_25, t);
  return(t);
}
static ATerm v_26 (ATerm g_25, ATerm j_25, ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,u_25 = NULL;
  t = g_25;
  if(match_cons(t, sym__3))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      u_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_10(l_25, m_25, u_25, t);
  return(t);
}
static ATerm w_26 (ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  t = z_25;
  if(match_cons(t, sym__3))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
      e_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_9(c_26, d_26, e_26, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm g_26 = NULL,i_26 = NULL,l_26 = NULL,m_26 = NULL,r_26 = NULL;
  i_26 = t;
  if(match_cons(t, sym__3))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      r_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_26;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm o_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_19);
        t = r_26;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm r_19 = ATgetArgument(t, 0);
                  g_26 = ATgetArgument(t, 1);
                  {
                    ATerm s_19 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(q_19);
              t = l_26;
              if(match_int(t, 1))
                {
                  ATerm t_19 = t;
                  int u_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_26(l_26, r_26, i_26, t);
                      LocalPopChoice(u_19);
                    }
                  else
                    {
                      t = t_19;
                      t = g_26;
                    }
                }
              else
                {
                  t = u_26(l_26, r_26, i_26, t);
                }
            }
          else
            {
              t = p_19;
              t = l_26;
              t = u_26(l_26, r_26, i_26, t);
            }
        }
      }
    else
      {
        t = i_19;
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm x_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(w_19);
              t = l_26;
              t = v_26(r_26, i_26, t);
            }
          else
            {
              t = v_19;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm y_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_26;
              t = w_26(r_26, i_26, t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,m_3 = NULL;
      o_27 = t;
      if(match_cons(t, sym__2))
        {
          m_27 = ATgetArgument(t, 0);
          n_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_27);
      l_27 = t;
      t = m_27;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_27;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_20 = ATgetFirst((ATermList) t);
              ATerm f_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_27;
        }
      t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
      m_3 = t;
      t = SSLsetAnnotations(m_3, l_27);
      LocalPopChoice(a_20);
      t = conc_0_0(t);
    }
  else
    {
      t = z_19;
      {
        ATerm p_28 = NULL,u_28 = NULL;
        if(match_cons(t, sym__2))
          {
            p_28 = ATgetArgument(t, 0);
            u_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_28), p_28);
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_28 = NULL;
      y_28 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_28;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_20 = ATgetFirst((ATermList) t);
              ATerm k_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_28;
        }
      LocalPopChoice(h_20);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = g_20;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(y_1, b_2, c_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_18;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_30 = ATgetFirst((ATermList) t);
      s_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,x_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym__2))
        {
          t_30 = ATgetArgument(n_20, 0);
          u_30 = ATgetArgument(n_20, 1);
        }
      else
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(match_cons(q_20, sym__2))
          {
            v_30 = ATgetArgument(q_20, 0);
            x_30 = ATgetArgument(q_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_30), t_30), (ATerm) ATinsert(CheckATermList(x_30), u_30));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm x_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_31 = NULL;
      t = flatten_list_0_0(t);
      e_31 = t;
      t = SSL_concat_strings(e_31);
      LocalPopChoice(z_20);
    }
  else
    {
      t = x_20;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 = NULL,k_7 = NULL;
      if(match_cons(t, sym__2))
        {
          i_7 = ATgetArgument(t, 0);
          k_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
      {
        ATerm e_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(i_7, k_7);
            LocalPopChoice(h_21);
          }
        else
          {
            t = e_21;
            t = SSL_gtr(i_7, k_7);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
      LocalPopChoice(d_21);
      {
        ATerm q_7 = NULL,s_7 = NULL;
        s_7 = t;
        t = SSL_explode_term(s_7);
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_21 = ATgetArgument(t, 1);
              if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                {
                  q_7 = ATgetFirst((ATermList) m_21);
                  {
                    ATerm n_21 = (ATerm) ATgetNext((ATermList) m_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_7;
      }
    }
  else
    {
      t = c_21;
      {
        ATerm t_7 = NULL,u_7 = NULL;
        u_7 = t;
        t = SSL_explode_term(u_7);
        if(match_cons(t, sym__2))
          {
            ATerm o_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_21 = ATgetArgument(t, 1);
              if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
                {
                  ATerm q_21 = ATgetFirst((ATermList) p_21);
                  ATerm r_21 = (ATerm) ATgetNext((ATermList) p_21);
                  if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
                    {
                      t_7 = ATgetFirst((ATermList) r_21);
                      {
                        ATerm u_21 = (ATerm) ATgetNext((ATermList) r_21);
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
        t = t_7;
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm o_87 (ATerm), ATerm g_17, ATerm f_17, ATerm b_17, ATerm d_17, ATerm a_17, ATerm t)
{
  ATerm r_29 = NULL,t_29 = NULL,y_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,q_3 = NULL,z_6 = NULL,b_7 = NULL;
  t = b_17;
  {
    static ATerm f_2 (ATerm t);
    static ATerm f_2 (ATerm t)
    {
      ATerm o_30 = NULL;
      o_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_30, d_17);
      t = o_87(t);
      return(t);
    }
    t = map_1_0(f_2, t);
  }
  t = genzip_4_0(h_2, k_2, m_2, _id, t);
  k_30 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_30);
  f_30 = t;
  t = g_30;
  t = map_1_0(p_2, t);
  i_30 = t;
  t = h_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_21 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_6 = ATgetFirst((ATermList) t);
      {
        ATerm x_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_7, z_6);
  t = foldl_1_0(u_2, t);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
  q_3 = t;
  t = SSLsetAnnotations(q_3, f_30);
  if(match_cons(t, sym__2))
    {
      t_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_29, d_17);
  t = t_9(r_29, d_17, t);
  y_29 = t;
  {
    ATerm d_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        t = term_k_17;
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_k_17);
        {
          ATerm g_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_17, l_31);
              LocalPopChoice(i_22);
            }
          else
            {
              t = g_22;
              t = SSL_gtr(f_17, l_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_k_17);
        LocalPopChoice(f_22);
        {
          ATerm o_31 = NULL,r_31 = NULL;
          t = g_17;
          if(match_cons(t, sym_AC_1))
            {
              r_31 = ATgetArgument(t, 0);
              t = r_31;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  r_31 = ATgetArgument(t, 0);
                  t = r_31;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      r_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_31;
                }
            }
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(v_2, t);
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                t = term_k_17;
              }
          }
          o_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_31, term_o_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = d_22;
        t = term_d_19;
      }
  }
  a_30 = t;
  t = t_29;
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      ATerm b_32 = NULL,c_32 = NULL;
      c_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, f_17, g_17, (ATerm) ATmakeAppl(sym__3, term_o_17, c_32, y_29));
      t = align_column_0_0(t);
      b_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_32, a_30);
      t = u_10(b_32, a_30, t);
      return(t);
    }
    t = map_1_0(w_2, t);
  }
  b_30 = t;
  t = SSL_strlen(a_30);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, r_29);
  t = y_10(d_30, r_29, t);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, (ATerm) ATinsert(CheckATermList(a_17), b_30));
  return(t);
}
ATerm do_A_column_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,h_32 = NULL,j_32 = NULL,l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(match_cons(l_22, sym__2))
        {
          d_32 = ATgetArgument(l_22, 0);
          {
            ATerm n_22 = ATgetArgument(l_22, 1);
            if(match_cons(n_22, sym__2))
              {
                e_32 = ATgetArgument(n_22, 0);
                h_32 = ATgetArgument(n_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm m_22 = ATgetArgument(t, 1);
        if(match_cons(m_22, sym__2))
          {
            j_32 = ATgetArgument(m_22, 0);
            l_32 = ATgetArgument(m_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_10(o_87, d_32, e_32, h_32, j_32, l_32, t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  static ATerm z_32 (ATerm t);
  static ATerm z_32 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_97(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm m_32 = NULL,r_32 = NULL,t_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,d_5 = NULL;
          t = x_97(t);
          y_32 = t;
          if(match_cons(t, sym__2))
            {
              r_32 = ATgetArgument(t, 0);
              t_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_32);
          m_32 = t;
          t = r_32;
          t = z_97(t);
          w_32 = t;
          t = t_32;
          t = z_32(t);
          x_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
          d_5 = t;
          t = SSLsetAnnotations(d_5, m_32);
          t = y_97(t);
        }
      }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm g_33 = NULL;
  static ATerm m_34 (ATerm t);
  static ATerm m_34 (ATerm t)
  {
    ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
    if(match_cons(t, sym__2))
      {
        i_33 = ATgetArgument(t, 0);
        j_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_33;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_33 = ATgetFirst((ATermList) t);
            l_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_33, k_33);
        t = e_122(t);
        g_34 = t;
        t = term_k_17;
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_33, term_k_17);
        t = y_10(i_33, j_34, t);
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_34, l_33);
        t = m_34(t);
        h_34 = t;
        t = (ATerm) ATinsert(CheckATermList(h_34), g_34);
      }
    return(t);
  }
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, g_33);
  t = m_34(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_34;
      t = i_103(t);
    }
  else
    {
      ATerm v_34 = NULL,x_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_34 = ATgetFirst((ATermList) t);
          q_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_34;
      t = k_103(t);
      v_34 = t;
      t = q_34;
      t = foldr_3_0(i_103, j_103, k_103, t);
      x_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_34, x_34);
      t = j_103(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  static ATerm o_36 (ATerm t);
  static ATerm o_36 (ATerm t)
  {
    ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
    n_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_36 = ATgetFirst((ATermList) t);
        m_36 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_7 = NULL,g_8 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(n_36);
          y_7 = t;
          t = m_36;
          t = o_36(t);
          g_8 = t;
          t = (ATerm) ATinsert(CheckATermList(g_8), l_36);
          f_5 = t;
          t = SSLsetAnnotations(f_5, y_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_36;
        t = r_96(t);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_34 = NULL,e_35 = NULL,f_35 = NULL;
  z_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_34;
    }
  else
    {
      static ATerm a_3 (ATerm t);
      static ATerm a_3 (ATerm t)
      {
        t = not_null(f_35);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_35 = ATgetFirst((ATermList) t);
          if(((f_35 != NULL) && (f_35 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_35;
      t = at_end_1_0(a_3, t);
    }
  return(t);
}
static ATerm t_37 (ATerm b_37, ATerm t)
{
  ATerm c_37 = NULL;
  t = SSL_explode_term(b_37);
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_37;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  g_37 = t;
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_3 (ATerm t);
            static ATerm d_3 (ATerm t)
            {
              t = f_37;
              return(t);
            }
            t = e_37;
            t = at_end_1_0(d_3, t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = t_37(g_37, t);
          }
      }
    }
  else
    {
      t = t_37(g_37, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  static ATerm u_37 (ATerm t);
  static ATerm u_37 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_94(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = b_94(t);
        t = u_37(t);
      }
    return(t);
  }
  t = u_37(t);
  return(t);
}
ATerm for_3_0 (ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  t = d_94(t);
  t = while_not_2_0(e_94, f_94, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_37, w_37, (ATerm) ATempty);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_37 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_23 = ATgetArgument(t, 0);
      if(((ATgetType(d_23) != AT_INT) || (ATgetInt((ATermInt) d_23) != 0)))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
      }
      x_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_37;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  if(match_cons(t, sym__3))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
      a_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_37, term_k_17);
  t = geq_0_0(t);
  t = term_k_17;
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_37, term_k_17);
  t = t_9(y_37, c_38, t);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_38, z_37, (ATerm) ATinsert(CheckATermList(a_38), z_37));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(h_3, i_3, j_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(j_38, k_38, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  h_38 = t;
  t = foldr_3_0(k_3, l_3, n_3, t);
  e_38 = t;
  t = term_t_15;
  t = q_87(t);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, e_38);
  t = t_9(i_38, e_38, t);
  f_38 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_38 = NULL;
        t = term_s_16;
        l_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_38, term_s_16);
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_38, l_38);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = SSL_gtr(f_38, l_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_38, (ATerm) ATempty);
        t = copy_0_0(t);
        g_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_38, g_38);
        t = conc_0_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = h_38;
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              {
                ATerm n_38 = NULL,p_38 = NULL,q_38 = NULL;
                t = term_h_14;
                p_38 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, h_38), term_w_23);
                q_38 = t;
                t = SSL_printnl(p_38, q_38);
                t = term_k_17;
                n_38 = t;
                t = SSL_exit(n_38);
                t = (ATerm) ATinsert(ATinsert(ATempty, h_38), term_w_23);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm x_23 = t;
  if((PushChoice() == 0))
    {
      ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,p_40 = NULL,i_6 = NULL;
      p_40 = t;
      if(match_cons(t, sym_R_2))
        {
          l_40 = ATgetArgument(t, 0);
          m_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_40);
      k_40 = t;
      t = m_40;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, l_40, m_40);
      i_6 = t;
      t = SSLsetAnnotations(i_6, k_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_23;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm z_38 = NULL;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, (ATerm) ATempty);
  {
    static ATerm q_40 (ATerm t);
    static ATerm q_40 (ATerm t)
    {
      ATerm a_39 = NULL,b_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
      if(match_cons(t, sym__2))
        {
          e_39 = ATgetArgument(t, 0);
          h_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_39 = NULL;
          t = h_39;
          t = reverse_acc_2_0(_id, p_3, t);
          o_39 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, o_39));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_39 = ATgetFirst((ATermList) t);
              g_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_39;
          if(match_cons(t, sym_R_2))
            {
              a_39 = ATgetArgument(t, 0);
              b_39 = ATgetArgument(t, 1);
              {
                ATerm g_24 = t;
                int h_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_39 = NULL,x_39 = NULL;
                    t = h_39;
                    t = reverse_acc_2_0(_id, s_3, t);
                    w_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_39, (ATerm) ATempty);
                    t = q_40(t);
                    x_39 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(x_39), (ATerm) ATmakeAppl(sym_R_2, a_39, b_39)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, w_39));
                    LocalPopChoice(h_24);
                  }
                else
                  {
                    t = g_24;
                    t = (ATerm) ATmakeAppl(sym__2, g_39, (ATerm) ATinsert(CheckATermList(h_39), f_39));
                    t = q_40(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, g_39, (ATerm) ATinsert(CheckATermList(h_39), f_39));
              t = q_40(t);
            }
        }
      return(t);
    }
    t = q_40(t);
  }
  t = filter_1_0(v_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm n_47 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm i_24 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_47;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm o_47 = NULL,r_47 = NULL;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      r_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(o_47, r_47, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_k_17;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if(((ATgetType(j_24) != AT_LIST) || !(ATisEmpty(j_24))))
        _fail(t);
      {
        ATerm k_24 = ATgetArgument(t, 1);
        if(((ATgetType(k_24) != AT_LIST) || !(ATisEmpty(k_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,e_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
        {
          z_47 = ATgetFirst((ATermList) l_24);
          a_48 = (ATerm) ATgetNext((ATermList) l_24);
        }
      else
        _fail(t);
      {
        ATerm m_24 = ATgetArgument(t, 1);
        if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
          {
            b_48 = ATgetFirst((ATermList) m_24);
            e_48 = (ATerm) ATgetNext((ATermList) m_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_47, b_48), (ATerm) ATmakeAppl(sym__2, a_48, e_48));
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  if(match_cons(t, sym__2))
    {
      f_48 = ATgetArgument(t, 0);
      g_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_48), f_48);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
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
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,d_7 = NULL;
  n_53 = t;
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_53);
  j_53 = t;
  t = k_53;
  t = reverse_acc_2_0(_id, u_6, t);
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, l_53);
  d_7 = t;
  t = SSLsetAnnotations(d_7, j_53);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  static ATerm j_55 (ATerm v_46, ATerm w_46, ATerm x_46, ATerm y_46, ATerm z_46, ATerm t);
  static ATerm q_55 (ATerm k_48, ATerm l_48, ATerm m_48, ATerm n_48, ATerm t);
  static ATerm t_55 (ATerm a_49, ATerm b_49, ATerm c_49, ATerm d_49, ATerm t);
  static ATerm u_55 (ATerm f_51, ATerm g_51, ATerm h_51, ATerm k_51, ATerm t);
  static ATerm j_55 (ATerm v_46, ATerm w_46, ATerm x_46, ATerm y_46, ATerm z_46, ATerm t)
  {
    ATerm c_47 = NULL,d_47 = NULL,f_47 = NULL,i_47 = NULL,m_47 = NULL;
    t = x_46;
    t = construct_rows_0_0(t);
    t = map_1_0(a_4, t);
    {
      static ATerm b_4 (ATerm t);
      static ATerm b_4 (ATerm t)
      {
        static ATerm e_4 (ATerm t);
        static ATerm e_4 (ATerm t)
        {
          t = v_46;
          t = foldr_3_0(i_4, j_4, a_5, t);
          return(t);
        }
        t = FitToMax_1_0(e_4, t);
        return(t);
      }
      t = map_1_0(b_4, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, e_5, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, i_5, t);
    c_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_46, c_47);
    t = genzip_4_0(j_5, k_5, l_5, _id, t);
    d_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_47, (ATerm) ATmakeAppl(sym__2, y_46, (ATerm) ATempty));
    {
      static ATerm m_5 (ATerm t);
      static ATerm m_5 (ATerm t)
      {
        t = do_A_column_1_0(q_0, t);
        return(t);
      }
      t = foldl_1_0(m_5, t);
    }
    if(match_cons(t, sym__2))
      {
        i_47 = ATgetArgument(t, 0);
        f_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_47;
    t = reverse_acc_2_0(_id, n_5, t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm o_5 (ATerm t);
      static ATerm o_5 (ATerm t)
      {
        ATerm j_48 = NULL;
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_48, i_47);
        return(t);
      }
      t = map_1_0(o_5, t);
    }
    m_47 = t;
    t = (ATerm) ATmakeAppl(sym__3, w_46, m_47, y_46);
    t = o_9(w_46, m_47, y_46, t);
    return(t);
  }
  static ATerm q_55 (ATerm k_48, ATerm l_48, ATerm m_48, ATerm n_48, ATerm t)
  {
    ATerm r_48 = NULL,s_48 = NULL,v_48 = NULL;
    t = k_48;
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(q_5, t);
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          t = term_s_16;
        }
    }
    v_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_48, v_48);
    t = y_10(m_48, v_48, t);
    s_48 = t;
    t = l_48;
    t = filter_1_0(is_real_vbox_0_0, t);
    r_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_48);
      }
    else
      {
        ATerm y_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, m_48, s_48, r_48);
        t = w_9(q_0, m_48, s_48, r_48, t);
        y_48 = t;
        t = (ATerm) ATmakeAppl(sym__3, k_48, y_48, m_48);
        t = o_9(k_48, y_48, m_48, t);
      }
    return(t);
  }
  static ATerm t_55 (ATerm a_49, ATerm b_49, ATerm c_49, ATerm d_49, ATerm t)
  {
    ATerm j_49 = NULL,l_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,v_49 = NULL,y_49 = NULL,a_50 = NULL,b_50 = NULL,w_50 = NULL,y_50 = NULL,r_6 = NULL;
    t = a_49;
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(r_5, t);
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          t = term_k_17;
        }
    }
    o_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_49, term_o_17);
    t = copy_char_0_0(t);
    l_49 = t;
    t = SSL_strlen(l_49);
    n_49 = t;
    t = b_49;
    t = filter_1_0(is_real_hbox_0_0, t);
    j_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_49, c_49);
    {
      static ATerm x_5 (ATerm t);
      static ATerm x_5 (ATerm t)
      {
        ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,g_50 = NULL,j_50 = NULL,n_6 = NULL;
        t = q_0(t);
        j_50 = t;
        if(match_cons(t, sym__2))
          {
            d_50 = ATgetArgument(t, 0);
            e_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_50);
        c_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_49, e_50);
        t = y_10(n_49, e_50, t);
        g_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_50, g_50);
        n_6 = t;
        t = SSLsetAnnotations(n_6, c_50);
        return(t);
      }
      t = thread_map_1_0(x_5, t);
    }
    b_50 = t;
    if(match_cons(t, sym__2))
      {
        q_49 = ATgetArgument(t, 0);
        v_49 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_50);
    p_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_49, q_49);
    t = p_9(l_49, q_49, t);
    y_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_49, v_49);
    r_6 = t;
    t = SSLsetAnnotations(r_6, p_49);
    a_50 = t;
    if(match_cons(t, sym__2))
      {
        w_50 = ATgetArgument(t, 0);
        y_50 = ATgetArgument(t, 1);
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_10 = NULL,l_10 = NULL,c_11 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(a_50);
              g_10 = t;
              t = w_50;
              {
                ATerm w_24 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_24;
                  }
              }
              l_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_50, n_49);
              t = t_9(y_50, n_49, t);
              c_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_10, c_11);
              w_6 = t;
              t = SSLsetAnnotations(w_6, g_10);
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              t = a_50;
            }
        }
      }
    else
      {
        t = a_50;
      }
    return(t);
  }
  static ATerm u_55 (ATerm f_51, ATerm g_51, ATerm h_51, ATerm k_51, ATerm t)
  {
    ATerm m_51 = NULL,o_51 = NULL,p_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
    t = f_51;
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(y_5, t);
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          t = term_k_17;
        }
    }
    f_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_52, term_o_17);
    t = copy_char_0_0(t);
    p_51 = t;
    t = f_51;
    {
      ATerm z_24 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(z_5, t);
          LocalPopChoice(d_25);
        }
      else
        {
          t = z_24;
          t = term_s_16;
        }
    }
    d_52 = t;
    t = term_k_17;
    e_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_52, term_k_17);
    t = y_10(d_52, e_52, t);
    x_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_51, term_p_16);
    t = copy_char_0_0(t);
    t = SSL_strlen(p_51);
    m_51 = t;
    t = f_51;
    {
      ATerm f_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(a_6, t);
          LocalPopChoice(h_25);
        }
      else
        {
          t = f_25;
          t = term_s_16;
        }
    }
    w_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_51, w_51);
    t = y_10(h_51, w_51, t);
    o_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_51)));
    {
      static ATerm b_6 (ATerm t);
      static ATerm b_6 (ATerm t)
      {
        ATerm g_52 = NULL,h_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
        m_52 = t;
        if(match_cons(t, sym__2))
          {
            n_52 = ATgetArgument(t, 0);
            o_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_52;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_52 = ATgetFirst((ATermList) t);
            l_52 = (ATerm) ATgetNext((ATermList) t);
            t = g_52;
            if(match_cons(t, sym__2))
              {
                h_52 = ATgetArgument(t, 0);
                k_52 = ATgetArgument(t, 1);
                {
                  ATerm i_25 = t;
                  int k_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm c_6 (ATerm t);
                      static ATerm c_6 (ATerm t)
                      {
                        t = m_51;
                        return(t);
                      }
                      t = m_52;
                      t = r_9(q_0, c_6, n_52, h_52, k_52, l_52, t);
                      LocalPopChoice(k_25);
                    }
                  else
                    {
                      t = i_25;
                      {
                        static ATerm d_6 (ATerm t);
                        static ATerm h_6 (ATerm t);
                        static ATerm d_6 (ATerm t)
                        {
                          t = m_51;
                          return(t);
                        }
                        static ATerm h_6 (ATerm t)
                        {
                          t = o_51;
                          return(t);
                        }
                        t = m_52;
                        t = q_9(q_0, d_6, h_6, n_52, o_52, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm j_6 (ATerm t);
                static ATerm l_6 (ATerm t);
                static ATerm j_6 (ATerm t)
                {
                  t = m_51;
                  return(t);
                }
                static ATerm l_6 (ATerm t)
                {
                  t = o_51;
                  return(t);
                }
                t = m_52;
                t = q_9(q_0, j_6, l_6, n_52, o_52, t);
              }
          }
        else
          {
            static ATerm o_6 (ATerm t);
            static ATerm p_6 (ATerm t);
            static ATerm o_6 (ATerm t)
            {
              t = m_51;
              return(t);
            }
            static ATerm p_6 (ATerm t)
            {
              t = o_51;
              return(t);
            }
            t = m_52;
            t = q_9(q_0, o_6, p_6, n_52, o_52, t);
          }
        return(t);
      }
      t = foldl_1_0(b_6, t);
    }
    t = reverse_acc_2_0(_id, q_6, t);
    t = map_1_0(s_6, t);
    {
      static ATerm v_6 (ATerm t);
      static ATerm v_6 (ATerm t)
      {
        ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,a_8 = NULL;
        t_53 = t;
        if(match_cons(t, sym__2))
          {
            q_53 = ATgetArgument(t, 0);
            r_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_53);
        p_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_51, q_53);
        t = p_9(p_51, q_53, t);
        s_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_53, r_53);
        a_8 = t;
        t = SSLsetAnnotations(a_8, p_53);
        return(t);
      }
      t = map_1_0(v_6, t);
    }
    u_51 = t;
    t = (ATerm) ATmakeAppl(sym__3, f_51, u_51, h_51);
    t = o_9(f_51, u_51, h_51, t);
    return(t);
  }
  ATerm v_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,k_54 = NULL,l_54 = NULL;
  f_54 = t;
  if(match_cons(t, sym__2))
    {
      g_54 = ATgetArgument(t, 0);
      l_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_54;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_19, l_54);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_54 = ATgetFirst((ATermList) t);
          k_54 = (ATerm) ATgetNext((ATermList) t);
          t = k_54;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_54, l_54);
          t = q_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              h_54 = ATgetArgument(t, 0);
              k_54 = ATgetArgument(t, 1);
              {
                ATerm h_12 = NULL,i_12 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, h_54, l_54);
                t = q_0(t);
                h_12 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm y_25 = ATgetArgument(t, 0);
                    i_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, h_54, k_54), l_54);
                {
                  ATerm b_26 = t;
                  int f_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_12 = NULL;
                      t = get_width_0_0(t);
                      j_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
                      t = leq_0_0(t);
                      LocalPopChoice(f_26);
                      t = h_12;
                    }
                  else
                    {
                      t = b_26;
                      t = (ATerm) ATmakeAppl(sym__2, k_54, l_54);
                      t = q_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  h_54 = ATgetArgument(t, 0);
                  k_54 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, h_54, k_54), l_54);
                  t = q_0(t);
                }
              else
                {
                  ATerm h_26 = t;
                  int j_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm k_26 = ATgetArgument(t, 0);
                          k_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(j_26);
                      t = (ATerm) ATmakeAppl(sym__2, k_54, l_54);
                      t = q_0(t);
                    }
                  else
                    {
                      t = h_26;
                      {
                        ATerm n_26 = t;
                        int o_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm p_26 = ATgetArgument(t, 0);
                                k_54 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_26);
                            t = k_54;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_53 = ATgetFirst((ATermList) t);
                                y_53 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = v_53;
                            if(match_cons(t, sym_S_1))
                              {
                                x_53 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = y_53;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, x_53, l_54);
                          }
                        else
                          {
                            t = n_26;
                            if(match_cons(t, sym_S_1))
                              {
                                h_54 = ATgetArgument(t, 0);
                                {
                                  ATerm c_55 = NULL,d_55 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, h_54, l_54);
                                  t = n_10(h_54, l_54, t);
                                  d_55 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, l_54, d_55);
                                  t = y_10(l_54, d_55, t);
                                  c_55 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, h_54, c_55);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    h_54 = ATgetArgument(t, 0);
                                    k_54 = ATgetArgument(t, 1);
                                    e_54 = ATgetArgument(t, 2);
                                    t = h_54;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        b_54 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = e_54;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        z_53 = ATgetFirst((ATermList) t);
                                        a_54 = (ATerm) ATgetNext((ATermList) t);
                                        t = a_54;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = z_53;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm q_26 = t;
                                                int s_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_55(b_54, k_54, e_54, l_54, f_54, t);
                                                    LocalPopChoice(s_26);
                                                  }
                                                else
                                                  {
                                                    t = q_26;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_54);
                                                  }
                                              }
                                            else
                                              {
                                                t = j_55(b_54, k_54, e_54, l_54, f_54, t);
                                              }
                                          }
                                        else
                                          {
                                            t = z_53;
                                            t = j_55(b_54, k_54, e_54, l_54, f_54, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm t_26 = t;
                                            int x_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_55(b_54, k_54, e_54, l_54, f_54, t);
                                                LocalPopChoice(x_26);
                                              }
                                            else
                                              {
                                                t = t_26;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_54);
                                              }
                                          }
                                        else
                                          {
                                            t = j_55(b_54, k_54, e_54, l_54, f_54, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        h_54 = ATgetArgument(t, 0);
                                        k_54 = ATgetArgument(t, 1);
                                        t = q_55(h_54, k_54, l_54, f_54, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            h_54 = ATgetArgument(t, 0);
                                            k_54 = ATgetArgument(t, 1);
                                            t = t_55(h_54, k_54, l_54, f_54, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                h_54 = ATgetArgument(t, 0);
                                                k_54 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = u_55(h_54, k_54, l_54, f_54, t);
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
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_1_0(try_abox2text_0_0, t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm f_56 = NULL,v_12 = NULL,y_12 = NULL,z_12 = NULL;
        f_56 = t;
        t = term_h_14;
        y_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_56), term_b_27);
        z_12 = t;
        t = SSL_printnl(y_12, z_12);
        t = term_k_17;
        v_12 = t;
        t = SSL_exit(v_12);
        t = (ATerm) ATinsert(ATinsert(ATempty, f_56), term_b_27);
      }
    }
  return(t);
}
static ATerm y_56 (ATerm r_56, ATerm t)
{
  t = SSL_fclose(r_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  w_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_56 = ATgetArgument(t, 0);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_56);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = y_56(w_56, t);
          }
      }
    }
  else
    {
      t = y_56(w_56, t);
    }
  return(t);
}
static ATerm o_10 (ATerm y_26, ATerm t)
{
  t = SSL_read_term_from_stream(y_26);
  return(t);
}
static ATerm u_10 (ATerm z_69, ATerm a_70, ATerm t)
{
  t = SSL_strcat(z_69, a_70);
  return(t);
}
static ATerm p_10 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm b_57 = NULL;
  t = SSL_fopen(q_36, r_36);
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_57 = NULL;
  t = SSL_stdin_stream();
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_57 = NULL;
  t = SSL_stdout_stream();
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_stderr_stream();
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_57);
  return(t);
}
static ATerm i_59 (ATerm m_57, ATerm t)
{
  ATerm p_57 = NULL;
  t = SSL_explode_term(m_57);
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
          {
            p_57 = ATgetFirst((ATermList) f_27);
            {
              ATerm g_27 = (ATerm) ATgetNext((ATermList) f_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_59 (ATerm s_57, ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,b_58 = NULL,h_58 = NULL,j_8 = NULL;
  t = SSLgetAnnotations(w_57);
  b_58 = t;
  t = s_57;
  if(match_cons(t, sym_Path_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_58, v_57);
  j_8 = t;
  t = SSLsetAnnotations(j_8, b_58);
  if(match_cons(t, sym__2))
    {
      x_57 = ATgetArgument(t, 0);
      y_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(x_57, y_57, t);
  return(t);
}
static ATerm n_59 (ATerm j_58, ATerm k_58, ATerm l_58, ATerm t)
{
  ATerm m_58 = NULL,o_58 = NULL,p_58 = NULL,y_58 = NULL,m_8 = NULL;
  t = SSLgetAnnotations(l_58);
  p_58 = t;
  t = SSL_is_string(j_58);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, k_58);
  m_8 = t;
  t = SSLsetAnnotations(m_8, p_58);
  if(match_cons(t, sym__2))
    {
      m_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(m_58, o_58, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm c_59 = NULL,f_59 = NULL,h_59 = NULL;
  c_59 = t;
  if(match_cons(t, sym__2))
    {
      f_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_59(c_59, t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            {
              ATerm j_27 = t;
              int k_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_59(f_59, h_59, c_59, t);
                  LocalPopChoice(k_27);
                }
              else
                {
                  t = j_27;
                  t = n_59(f_59, h_59, c_59, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_59(c_59, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_59 = NULL,s_59 = NULL,t_59 = NULL,b_60 = NULL;
  b_60 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_60, term_r_27);
        t = q_10(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        {
          ATerm t_13 = NULL,u_13 = NULL;
          t = term_s_27;
          u_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_27, b_60);
          t = u_10(u_13, b_60, t);
          t_13 = t;
          t = SSL_perror(t_13);
          _fail(t);
        }
      }
  }
  s_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(t_59, t);
  p_59 = t;
  t = s_59;
  t = fclose_0_0(t);
  t = p_59;
  return(t);
}
static ATerm v_10 (ATerm e_36, ATerm f_36, ATerm t)
{
  t = SSL_access(e_36, f_36);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_60 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_60 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_13);
      l_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_60, (ATerm) ATinsert(ATempty, term_l_13));
      t = v_10(j_60, l_60, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_11 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm m_60 = NULL;
  t = lookup_table_0_1(o_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_11(p_22, m_60, t);
  return(t);
}
static ATerm x_10 (ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL;
  s_60 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
        t = d_11(a_21, b_21, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_27 = ATgetFirst((ATermList) t);
            r_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_27);
        {
          ATerm t_60 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, a_21, b_21, r_60);
          t = lookup_table_0_1(a_21, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_11(b_21, r_60, t_60, t);
          t = (ATerm) ATmakeAppl(sym__3, a_21, b_21, r_60);
        }
      }
    else
      {
        t = t_27;
        {
          ATerm v_60 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
          t = lookup_table_0_1(a_21, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_11(b_21, v_60, t);
          t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
        }
      }
  }
  t = s_60;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm y_60 = NULL,b_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
  f_61 = t;
  t = c_107(t);
  e_61 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_61 = NULL;
        t = term_d_15;
        j_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_61, term_d_15);
        t = d_11(e_61, j_61, t);
        {
          ATerm a_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_28;
            }
        }
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_61 = ATgetFirst((ATermList) t);
      y_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_61, term_d_15, y_60);
  t = lookup_table_0_1(e_61, t);
  i_61 = t;
  t = term_d_15;
  g_61 = t;
  t = i_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(g_61, y_60, h_61, t);
  t = b_61;
  {
    static ATerm c_7 (ATerm t);
    static ATerm c_7 (ATerm t)
    {
      ATerm k_61 = NULL;
      k_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_61, k_61);
      t = x_10(e_61, k_61, t);
      return(t);
    }
    t = map_1_0(c_7, t);
  }
  t = f_61;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_93(t);
      t = g_93(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      t = g_93(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL;
  n_61 = t;
  t = b_107(t);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_61, term_d_15);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_61 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_28 = ATgetArgument(t, 0);
            ATerm g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_15;
        w_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_61, term_d_15);
        t = d_11(m_61, w_61, t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATempty;
      }
  }
  o_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_61, term_d_15, (ATerm) ATinsert(CheckATermList(o_61), (ATerm) ATempty));
  t = lookup_table_0_1(m_61, t);
  s_61 = t;
  t = term_d_15;
  p_61 = t;
  t = (ATerm) ATinsert(CheckATermList(o_61), (ATerm) ATempty);
  q_61 = t;
  t = s_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(p_61, q_61, r_61, t);
  t = n_61;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_o_15;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm f_62 = NULL;
  f_62 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_62);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = f_62;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm z_61 = NULL;
  static ATerm w_7 (ATerm t);
  static ATerm w_7 (ATerm t)
  {
    ATerm a_62 = NULL;
    a_62 = t;
    {
      ATerm j_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_62 = NULL,c_62 = NULL;
          t = term_o_15;
          b_62 = t;
          t = term_d_15;
          c_62 = t;
          t = term_m_28;
          t = d_11(b_62, c_62, t);
          LocalPopChoice(l_28);
        }
      else
        {
          t = j_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_61 != NULL) && (z_61 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_61 = ATgetFirst((ATermList) t);
        {
          ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_61;
    t = map_1_0(x_7, t);
    t = a_62;
    t = end_scope_1_0(z_7, t);
    return(t);
  }
  t = begin_scope_1_0(v_7, t);
  t = restore_always_2_0(x_88, w_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
  i_62 = t;
  t = term_t_15;
  t = whoami_0_0(t);
  j_62 = t;
  t = term_h_14;
  l_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_28), j_62), term_o_28);
  m_62 = t;
  t = SSL_printnl(l_62, m_62);
  t = term_k_17;
  k_62 = t;
  t = SSL_exit(k_62);
  t = i_62;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm o_62 = NULL;
  o_62 = t;
  if(match_string(t, "-k"))
    {
      t = o_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_62;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
  p_62 = t;
  t = SSL_string_to_int(p_62);
  q_62 = t;
  t = term_r_28;
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, q_62);
  t = g_11(r_62, q_62, t);
  t = p_62;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_8, c_8, d_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm t_62 = NULL;
  t_62 = t;
  if(match_string(t, "-S"))
    {
      t = t_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_62;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  t = term_t_28;
  u_62 = t;
  t = term_s_16;
  v_62 = t;
  t = term_v_28;
  t = g_11(u_62, v_62, t);
  t = term_w_28;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  t = SSL_string_to_int(w_62);
  x_62 = t;
  t = term_t_28;
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, x_62);
  t = g_11(y_62, x_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_62);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  t = term_a_29;
  z_62 = t;
  t = term_t_15;
  a_63 = t;
  t = term_b_29;
  t = g_11(z_62, a_63, t);
  t = term_c_29;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, h_8, t);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_8, k_8, l_8, t);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = Option_3_0(n_8, o_8, p_8, t);
          }
      }
    }
  return(t);
}
static ATerm g_11 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  t = term_r_13;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_13, z_36, a_37);
  t = lookup_table_0_1(b_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(z_36, a_37, c_63, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_13, z_36, a_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
      t = term_t_15;
      t = g_0(t);
      i_63 = t;
      t = term_i_29;
      j_63 = t;
      t = term_j_29;
      k_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_29, term_j_29, i_63);
      t = e_11(j_63, k_63, i_63, t);
      _fail(t);
    }
  else
    {
      ATerm n_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_63 = ATgetFirst((ATermList) t);
          h_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_63;
      t = d_0(t);
      t = term_t_15;
      t = f_0(t);
      n_63 = t;
      t = (ATerm) ATinsert(CheckATermList(h_63), n_63);
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm p_63 = NULL;
  p_63 = t;
  if(match_string(t, "-o"))
    {
      t = p_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_63;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  q_63 = t;
  t = term_s_13;
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, q_63);
  t = g_11(r_63, q_63, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_63);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_8, r_8, s_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm t_63 = NULL;
  t_63 = t;
  if(match_string(t, "-i"))
    {
      t = t_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_63;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  u_63 = t;
  t = term_l_29;
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, u_63);
  t = g_11(v_63, u_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_63);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_8, x_8, z_8, t);
  return(t);
}
static ATerm e_11 (ATerm v_20, ATerm w_20, ATerm u_20, ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_20, w_20);
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_29 = ATgetArgument(t, 0);
            ATerm q_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_20, w_20);
        t = d_11(v_20, w_20, t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATempty;
      }
  }
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_20, w_20, (ATerm) ATinsert(CheckATermList(y_63), u_20));
  t = lookup_table_0_1(v_20, t);
  b_64 = t;
  t = (ATerm) ATinsert(CheckATermList(y_63), u_20);
  z_63 = t;
  t = b_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(w_20, z_63, a_64, t);
  t = x_63;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL;
      t = term_t_15;
      t = o_0(t);
      p_64 = t;
      t = term_i_29;
      q_64 = t;
      t = term_j_29;
      r_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_29, term_j_29, p_64);
      t = e_11(q_64, r_64, p_64, t);
      _fail(t);
    }
  else
    {
      ATerm v_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_64 = ATgetFirst((ATermList) t);
          m_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_64;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_64 = ATgetFirst((ATermList) t);
          o_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_64;
      t = l_0(t);
      t = n_64;
      t = m_0(t);
      v_64 = t;
      t = (ATerm) ATinsert(CheckATermList(o_64), v_64);
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  if(match_string(t, "-w"))
    {
      t = x_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = x_64;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  y_64 = t;
  t = SSL_string_to_int(y_64);
  z_64 = t;
  t = term_z_16;
  a_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, z_64);
  t = g_11(a_65, z_64, t);
  t = y_64;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm Abox_2_text_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_9, e_9, f_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_15;
  t = whoami_0_0(t);
  b_65 = t;
  t = term_h_14;
  d_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_29), b_65);
  e_65 = t;
  t = SSL_printnl(d_65, e_65);
  t = term_k_17;
  c_65 = t;
  t = SSL_exit(c_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL;
  t = term_r_13;
  f_65 = t;
  t = term_v_29;
  g_65 = t;
  t = term_w_29;
  t = d_11(f_65, g_65, t);
  return(t);
}
static ATerm y_10 (ATerm h_71, ATerm i_71, ATerm t)
{
  ATerm x_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_71, i_71);
      LocalPopChoice(z_29);
    }
  else
    {
      t = x_29;
      t = SSL_addr(h_71, i_71);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
  i_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_65;
      t = g_103(t);
    }
  else
    {
      ATerm n_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_65 = ATgetFirst((ATermList) t);
          k_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_65;
      t = foldr_2_0(g_103, h_103, t);
      n_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_65, n_65);
      t = h_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(i_14, j_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_65 = NULL,b_14 = NULL,c_14 = NULL;
  t = times_0_0(t);
  c_14 = t;
  t = SSL_explode_term(c_14);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14;
  t = foldr_2_0(g_9, h_9, t);
  q_65 = t;
  t = SSL_TicksToSeconds(q_65);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  if(match_cons(t, sym__2))
    {
      c_66 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_66;
        if((c_66 != t))
          {
            _fail(t);
          }
        t = b_66;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATmakeAppl(sym__2, c_66, d_66);
        {
          ATerm n_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_66, d_66);
              LocalPopChoice(p_30);
            }
          else
            {
              t = n_30;
              t = SSL_gtr(c_66, d_66);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_66, d_66);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm h_66 = NULL;
  h_66 = t;
  {
    ATerm q_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
        t = term_r_13;
        k_66 = t;
        t = term_t_28;
        l_66 = t;
        t = term_y_30;
        t = d_11(k_66, l_66, t);
        j_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_66, term_k_17);
        t = geq_0_0(t);
        t = h_66;
        t = e_106(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = q_30;
        t = h_66;
      }
  }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,q_66 = NULL,r_66 = NULL;
  t = run_time_0_0(t);
  n_66 = t;
  t = term_t_15;
  t = whoami_0_0(t);
  o_66 = t;
  t = term_h_14;
  q_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), n_66), term_z_30), o_66);
  r_66 = t;
  t = SSL_printnl(q_66, r_66);
  t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), n_66), term_z_30), o_66));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_16;
  s_66 = t;
  t = SSL_exit(s_66);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL;
  d_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_67 = ATgetArgument(t, 0);
          {
            ATerm g_15 = NULL,y_8 = NULL;
            t = SSLgetAnnotations(d_67);
            g_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_67);
            y_8 = t;
            t = SSLsetAnnotations(y_8, g_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_66 = NULL,w_66 = NULL;
      t = term_r_13;
      v_66 = t;
      t = term_d_31;
      w_66 = t;
      t = term_f_31;
      t = d_11(v_66, w_66, t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = fetch_1_0(k_9, t);
    }
  t = k_110(t);
  return(t);
}
static ATerm h_11 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm f_67 = NULL;
  t = SSL_hashtable_put(p_25, n_25, o_25);
  f_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_67);
  return(t);
}
static ATerm i_11 (ATerm q_25, ATerm r_25, ATerm t)
{
  t = SSL_hashtable_get(r_25, q_25);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_22, ATerm t)
{
  ATerm o_67 = NULL;
  t = table_hashtable_0_0(t);
  o_67 = t;
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL;
        t = o_67;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_11(h_22, s_15, t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        {
          ATerm x_15 = NULL;
          t = h_22;
          t = table_create_0_0(t);
          t = o_67;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_11(h_22, x_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_25, ATerm w_25, ATerm t)
{
  ATerm q_68 = NULL;
  t = SSL_hashtable_create(v_25, w_25);
  q_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,v_68 = NULL,w_68 = NULL;
  r_68 = t;
  t = term_i_31;
  v_68 = t;
  t = term_j_31;
  w_68 = t;
  t = r_68;
  t = new_hashtable_0_2(v_68, w_68, t);
  s_68 = t;
  t = r_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(r_68, s_68, t_68, t);
  t = r_68;
  return(t);
}
static ATerm a_11 (ATerm s_25, ATerm t_25, ATerm t)
{
  ATerm x_68 = NULL;
  t = SSL_hashtable_remove(t_25, s_25);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_68);
  return(t);
}
static ATerm b_11 (ATerm x_25, ATerm t)
{
  ATerm y_68 = NULL;
  t = SSL_hashtable_destroy(x_25);
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_68 = NULL;
  t = SSL_table_hashtable();
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
  a_69 = t;
  t = table_hashtable_0_0(t);
  b_69 = t;
  t = lookup_table_0_1(a_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(d_69, t);
  t = b_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(a_69, c_69, t);
  t = a_69;
  return(t);
}
ATerm map_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  static ATerm s_69 (ATerm t);
  static ATerm s_69 (ATerm t)
  {
    ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
    p_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_69;
      }
    else
      {
        ATerm c_16 = NULL,f_16 = NULL,m_16 = NULL,w_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_69 = ATgetFirst((ATermList) t);
            r_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_69);
        c_16 = t;
        t = q_69;
        t = a_96(t);
        f_16 = t;
        t = r_69;
        t = s_69(t);
        m_16 = t;
        t = (ATerm) ATinsert(CheckATermList(m_16), f_16);
        w_13 = t;
        t = SSLsetAnnotations(w_13, c_16);
      }
    return(t);
  }
  t = s_69(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_69 = ATgetFirst((ATermList) t);
      w_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_70 = NULL,d_70 = NULL;
        static ATerm s_9 (ATerm t);
        static ATerm s_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_70)), not_null(d_70));
          return(t);
        }
        t = w_69;
        t = j_0(t);
        if(((c_70 != NULL) && (c_70 != t)))
          _fail(t);
        else
          c_70 = t;
        t = v_69;
        t = h_0(t);
        if(((d_70 != NULL) && (d_70 != t)))
          _fail(t);
        else
          d_70 = t;
        t = w_69;
        t = reverse_acc_2_0(h_0, s_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,d_14 = NULL;
  l_70 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_70);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_70);
  d_14 = t;
  t = SSLsetAnnotations(d_14, j_70);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_70), term_k_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_70 = NULL,i_70 = NULL;
      t = term_r_13;
      h_70 = t;
      t = term_v_29;
      i_70 = t;
      t = term_w_29;
      t = d_11(h_70, i_70, t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = fetch_1_0(u_9, t);
    }
  t = term_p_31;
  t = echo_0_0(t);
  t = term_i_29;
  f_70 = t;
  t = term_j_29;
  g_70 = t;
  t = term_q_31;
  t = d_11(f_70, g_70, t);
  t = reverse_acc_2_0(_id, e_10, t);
  t = map_1_0(f_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  static ATerm m_71 (ATerm t);
  static ATerm m_71 (ATerm t)
  {
    ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
    j_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_71 = ATgetFirst((ATermList) t);
        l_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_16 = NULL,c_17 = NULL,f_14 = NULL;
          t = SSLgetAnnotations(j_71);
          w_16 = t;
          t = k_71;
          t = k_96(t);
          c_17 = t;
          t = (ATerm) ATinsert(CheckATermList(l_71), c_17);
          f_14 = t;
          t = SSLsetAnnotations(f_14, w_16);
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          {
            ATerm n_17 = NULL,q_17 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(j_71);
            n_17 = t;
            t = l_71;
            t = m_71(t);
            q_17 = t;
            t = (ATerm) ATinsert(CheckATermList(q_17), k_71);
            g_14 = t;
            t = SSLsetAnnotations(g_14, n_17);
          }
        }
    }
    return(t);
  }
  t = m_71(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  s_71 = t;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_31 = ATgetFirst((ATermList) t);
                ATerm x_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_71;
          }
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATinsert(ATempty, s_71);
      }
  }
  t_71 = t;
  t = term_x_13;
  u_71 = t;
  t = SSL_printnl(u_71, t_71);
  t = s_71;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_71 = NULL,b_72 = NULL;
  t = term_r_13;
  y_71 = t;
  t = term_v_29;
  b_72 = t;
  t = term_w_29;
  t = d_11(y_71, b_72, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL;
  t = term_y_31;
  c_72 = t;
  t = term_t_15;
  d_72 = t;
  t = term_z_31;
  t = g_11(c_72, d_72, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm e_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  t = term_y_31;
  i_72 = t;
  t = term_t_15;
  j_72 = t;
  t = term_z_31;
  t = g_11(i_72, j_72, t);
  t = term_f_32;
  e_72 = t;
  t = term_t_15;
  h_72 = t;
  t = term_g_32;
  t = g_11(e_72, h_72, t);
  t = term_i_32;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_10, k_10, z_10, t);
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = Option_3_0(f_11, k_11, l_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,m_14 = NULL;
  q_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_72 = ATgetFirst((ATermList) t);
      m_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_72);
  k_72 = t;
  t = l_72;
  t = e_74(t);
  o_72 = t;
  t = m_72;
  t = f_74(t);
  p_72 = t;
  t = (ATerm) ATinsert(CheckATermList(p_72), o_72);
  m_14 = t;
  t = SSLsetAnnotations(m_14, k_72);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_112 (ATerm), ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,a_73 = NULL,b_73 = NULL,g_16 = NULL;
  v_72 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_32;
        t = i_112(t);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
      }
  }
  t = v_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_72 = ATgetFirst((ATermList) t);
      y_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_72);
  w_72 = t;
  t = term_v_29;
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, x_72);
  t = g_11(b_73, x_72, t);
  t = y_72;
  {
    static ATerm l_73 (ATerm t);
    static ATerm l_73 (ATerm t)
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_73 = NULL;
              e_73 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_73;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = i_112(t);
              t = Cons_2_0(_id, l_73, t);
            }
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          {
            ATerm h_73 = NULL,i_73 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_73 = ATgetFirst((ATermList) t);
                i_73 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_73), (ATerm) ATmakeAppl(sym_Undefined_1, h_73));
          }
        }
      return(t);
    }
    t = l_73(t);
  }
  a_73 = t;
  t = (ATerm) ATinsert(CheckATermList(a_73), (ATerm) ATmakeAppl(sym_Program_1, x_72));
  g_16 = t;
  t = SSLsetAnnotations(g_16, w_72);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm y_73 = NULL;
  y_73 = t;
  if(match_string(t, "--help"))
    {
      t = y_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_73;
        }
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL;
  t = term_d_31;
  z_73 = t;
  t = term_t_15;
  a_74 = t;
  t = term_c_33;
  t = g_11(z_73, a_74, t);
  t = term_d_33;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
  s_73 = t;
  t = term_i_29;
  t_73 = t;
  t = term_f_33;
  t = lookup_table_0_1(t_73, t);
  x_73 = t;
  t = term_j_29;
  u_73 = t;
  t = (ATerm) ATempty;
  v_73 = t;
  t = x_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(u_73, v_73, w_73, t);
  t = s_73;
  {
    static ATerm m_11 (ATerm t);
    static ATerm m_11 (ATerm t)
    {
      ATerm h_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_112(t);
          LocalPopChoice(m_33);
        }
      else
        {
          t = h_33;
          {
            ATerm n_33 = t;
            int o_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_11, q_11, r_11, t);
                LocalPopChoice(o_33);
              }
            else
              {
                t = n_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_11, t);
  }
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_74 = NULL;
        n_74 = t;
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_17 = NULL;
              t = n_74;
              {
                ATerm t_33 = t;
                int u_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_17 = NULL,a_18 = NULL;
                    t = term_r_13;
                    z_17 = t;
                    t = term_d_31;
                    a_18 = t;
                    t = term_f_31;
                    t = d_11(z_17, a_18, t);
                    LocalPopChoice(u_33);
                  }
                else
                  {
                    t = t_33;
                    t = fetch_1_0(u_11, t);
                  }
              }
              t = n_74;
              t = default_system_usage_0_0(t);
              t = term_s_16;
              y_17 = t;
              t = SSL_exit(y_17);
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
              {
                ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                t = term_r_13;
                f_18 = t;
                t = term_y_31;
                g_18 = t;
                t = term_v_33;
                t = d_11(f_18, g_18, t);
                t = n_74;
                t = default_system_about_0_0(t);
                t = term_s_16;
                e_18 = t;
                t = SSL_exit(e_18);
              }
            }
        }
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
              static ATerm v_11 (ATerm t);
              static ATerm v_11 (ATerm t)
              {
                ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL,l_16 = NULL;
                t_74 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_74 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_74);
                r_74 = t;
                t = s_74;
                if(((q_73 != NULL) && (q_73 != t)))
                  _fail(t);
                else
                  q_73 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_74);
                l_16 = t;
                t = SSLsetAnnotations(l_16, r_74);
                return(t);
              }
              t = fetch_1_0(v_11, t);
              t = term_h_14;
              p_74 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_73)), term_y_33);
              q_74 = t;
              t = SSL_printnl(p_74, q_74);
              t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_73)), term_y_33));
              t = default_system_usage_0_0(t);
              t = term_k_17;
              o_74 = t;
              t = SSL_exit(o_74);
              LocalPopChoice(x_33);
            }
          else
            {
              t = w_33;
            }
        }
      }
  }
  r_73 = t;
  t = term_i_29;
  t = table_destroy_0_0(t);
  t = r_73;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  t = parse_options_1_0(m_110, t);
  y_74 = t;
  t = term_z_33;
  t = table_create_0_0(t);
  t = term_z_33;
  z_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_33, term_a_34, y_74);
  t = lookup_table_0_1(z_74, t);
  c_75 = t;
  t = term_a_34;
  a_75 = t;
  t = c_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(a_75, y_74, b_75, t);
  t = y_74;
  t = o_110(t);
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_110, t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        {
          ATerm d_34 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_110(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_34);
            }
          else
            {
              t = d_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm f_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_text_options_0_0(t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = f_34;
      {
        ATerm l_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(n_34);
          }
        else
          {
            t = l_34;
            {
              ATerm r_34 = t;
              int s_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(s_34);
                }
              else
                {
                  t = r_34;
                  {
                    ATerm t_34 = t;
                    int u_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_11, b_12, g_12, t);
                        LocalPopChoice(u_34);
                      }
                    else
                      {
                        t = t_34;
                        {
                          ATerm w_34 = t;
                          int y_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(y_34);
                            }
                          else
                            {
                              t = w_34;
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
static ATerm x_11 (ATerm t)
{
  t = xtc_temp_files_1_0(m_12, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  t = term_a_35;
  e_75 = t;
  t = term_t_15;
  f_75 = t;
  t = term_b_35;
  t = g_11(e_75, f_75, t);
  t = term_c_35;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
      t = term_r_13;
      l_75 = t;
      t = term_l_29;
      m_75 = t;
      t = term_i_35;
      t = d_11(l_75, m_75, t);
      k_75 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_75);
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      t = term_a_14;
    }
  t = read_from_0_0(t);
  h_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_75, term_s_16);
  t = try_abox2text_0_0(t);
  j_75 = t;
  t = SSL_explode_term(j_75);
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
          {
            i_75 = ATgetFirst((ATermList) k_35);
            {
              ATerm l_35 = (ATerm) ATgetNext((ATermList) k_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_75, term_m_35);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_11, default_usage_0_0, _id, x_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
