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
ATerm term_o_37;
ATerm term_c_37;
ATerm term_t_36;
ATerm term_q_36;
ATerm term_m_36;
ATerm term_e_36;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_e_35;
ATerm term_x_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_k_25;
ATerm term_g_20;
ATerm term_v_19;
ATerm term_y_18;
ATerm term_z_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_h_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_u_14);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_o_16);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_16);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_x_30, term_h_15);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_h_15);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_o_32);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_s_30);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_o_30);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_h_15);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_h_34, term_h_15);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_h_15);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_e_34);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_o_31);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm g_10 (ATerm i_39, ATerm j_39, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_73 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_78 (ATerm), ATerm t);
static ATerm t_3 (ATerm c_3, ATerm t);
static ATerm u_3 (ATerm f_3, ATerm k_3, ATerm l_3, ATerm t);
static ATerm f_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm w_8 (ATerm k_90 (ATerm), ATerm y_33, ATerm w_33, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm z_9 (ATerm y_79 (ATerm), ATerm g_25, ATerm l_267, ATerm t);
ATerm at_suffix_1_0 (ATerm k_80 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm c_80 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm v_104 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm a_10 (ATerm q_18, ATerm r_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm x_8 (ATerm t_14, ATerm r_14, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm y_8 (ATerm l_14, ATerm p_14, ATerm m_14, ATerm t);
static ATerm z_8 (ATerm s_24, ATerm t_24, ATerm t);
static ATerm a_9 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm k_15, ATerm j_15, ATerm t);
static ATerm b_9 (ATerm u_71 (ATerm), ATerm f_15, ATerm d_15, ATerm g_15, ATerm e_15, ATerm t);
ATerm foldl_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm d_9 (ATerm m_56, ATerm n_56, ATerm t);
static ATerm f_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm c_1, ATerm t_0, ATerm t);
ATerm thread_map_1_0 (ATerm e_87 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_87 (ATerm), ATerm t);
static ATerm g_9 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t);
static ATerm f_19 (ATerm l_18, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm i_9 (ATerm s_52, ATerm t_52, ATerm u_52, ATerm t);
static ATerm j_9 (ATerm y_56, ATerm z_56, ATerm t);
static ATerm k_9 (ATerm e_57, ATerm f_57, ATerm t);
static ATerm l_9 (ATerm e_53, ATerm f_53, ATerm a_53, ATerm t);
static ATerm m_9 (ATerm l_53, ATerm j_53, ATerm k_53, ATerm t);
static ATerm n_9 (ATerm w_52, ATerm x_52, ATerm y_52, ATerm t);
static ATerm p_25 (ATerm i_23, ATerm j_23, ATerm m_23, ATerm t);
static ATerm q_25 (ATerm z_23, ATerm d_24, ATerm t);
static ATerm t_25 (ATerm j_24, ATerm k_24, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm t_9 (ATerm z_16, ATerm y_16, ATerm u_16, ATerm w_16, ATerm t_16, ATerm t);
ATerm genzip_4_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_80 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_35 (ATerm c_35, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm FitToMax_1_0 (ATerm y_71 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm c_57 (ATerm j_47, ATerm k_47, ATerm l_47, ATerm o_47, ATerm p_47, ATerm t);
static ATerm g_57 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm h_49, ATerm t);
static ATerm h_57 (ATerm s_49, ATerm t_49, ATerm u_49, ATerm v_49, ATerm t);
static ATerm j_57 (ATerm q_51, ATerm t_51, ATerm u_51, ATerm v_51, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm l_58 (ATerm d_58, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_10 (ATerm u_23, ATerm t);
static ATerm c_10 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm d_10 (ATerm z_32, ATerm a_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_60 (ATerm x_58, ATerm t);
static ATerm k_60 (ATerm d_59, ATerm e_59, ATerm h_59, ATerm t);
static ATerm l_60 (ATerm s_59, ATerm t_59, ATerm u_59, ATerm t);
static ATerm e_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_10 (ATerm q_32, ATerm r_32, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm l_10 (ATerm d_22, ATerm e_22, ATerm t);
static ATerm h_10 (ATerm r_20, ATerm s_20, ATerm t);
ATerm end_scope_1_0 (ATerm h_90 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_90 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm u_72 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_10 (ATerm g_56, ATerm h_56, ATerm t);
ATerm foldr_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_89 (ATerm), ATerm t);
static ATerm k_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm need_help_1_0 (ATerm n_93 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm o_10 (ATerm i_33, ATerm j_33, ATerm t);
static ATerm m_10 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_95 (ATerm), ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm parse_options_1_0 (ATerm k_95 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = s_1;
        t = o_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_1, h_0);
        t = g_10(t_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = s_1;
              t = o_0(t);
              u_0 = t;
              {
                ATerm t_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((t_1 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
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
              t = (ATerm) ATmakeAppl(sym__2, t_1, u_0);
              t = g_10(t_1, u_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = s_1;
              t = o_0(t);
              if((t_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
            }
        }
      }
  }
  return(t);
}
static ATerm g_10 (ATerm i_39, ATerm j_39, ATerm t)
{
  t = SSL_copy(i_39, j_39);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm f_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL,m_2 = NULL;
      t = term_i_13;
      l_2 = t;
      t = term_j_13;
      m_2 = t;
      t = term_k_13;
      t = l_10(l_2, m_2, t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = f_13;
      t = term_m_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_1 = NULL,i_1 = NULL;
      t = term_j_13;
      {
        ATerm n_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,o_1 = NULL;
            t = term_i_13;
            j_1 = t;
            t = term_j_13;
            o_1 = t;
            t = term_k_13;
            t = l_10(j_1, o_1, t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = n_13;
            t = term_m_13;
          }
      }
      d_1 = t;
      t = term_q_13;
      i_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_13, d_1);
      t = g_10(i_1, d_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm r_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(n_73, t);
    return(t);
  }
  t = n_73(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm m_78 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,r_2 = NULL,w_2 = NULL;
  o_2 = t;
  t = m_78(t);
  p_2 = t;
  t = term_t_13;
  r_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_2), p_2);
  w_2 = t;
  t = SSL_printnl(r_2, w_2);
  t = o_2;
  return(t);
}
static ATerm t_3 (ATerm c_3, ATerm t)
{
  t = c_3;
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
  t = debug_1_0(f_0, t);
  t = (ATerm) ATmakeAppl(sym__2, c_3, term_a_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm u_3 (ATerm f_3, ATerm k_3, ATerm l_3, ATerm t)
{
  t = SSL_open_file(f_3, k_3);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      {
        ATerm f_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_3(q_3, t);
            LocalPopChoice(o_14);
          }
        else
          {
            t = f_14;
            t = u_3(r_3, s_3, q_3, t);
          }
      }
    }
  else
    {
      t = t_3(q_3, t);
    }
  return(t);
}
static ATerm w_8 (ATerm k_90 (ATerm), ATerm y_33, ATerm w_33, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  t = k_90(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_3, y_33, w_33);
  t = m_10(v_3, y_33, w_33, t);
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL;
        t = term_u_14;
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, term_u_14);
        t = l_10(v_3, b_4, t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      x_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_u_14;
  z_3 = t;
  t = (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(w_3), y_33));
  a_4 = t;
  t = SSL_table_put(v_3, z_3, a_4);
  t = y_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_4 = NULL,z_1 = NULL;
      h_4 = t;
      t = term_y_14;
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_4, term_y_14);
      t = c_10(h_4, z_1, t);
      d_4 = t;
      t = SSL_mkstemp(d_4);
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm i_4 = NULL;
        t = term_z_14;
        i_4 = t;
        t = SSL_perror(i_4);
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
static ATerm j_0 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  t = P__tmpdir_0_0(t);
  r_4 = t;
  t = term_b_15;
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, term_b_15);
  t = c_10(r_4, s_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_15;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, term_h_15);
  t = w_8(j_0, p_4, q_4, t);
  t = SSL_close(n_4);
  t = p_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  v_4 = t;
  t = xtc_new_file_0_0(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, term_a_14);
  t = open_file_0_0(t);
  t = v_4;
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm c_5 = NULL;
      c_5 = t;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,h_2 = NULL;
            t = SSL_is_string(c_5);
            c_2 = t;
            t = (ATerm) ATinsert(ATempty, c_2);
            h_2 = t;
            t = SSL_print(w_4, h_2);
            t = c_2;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            t = c_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(m_0, t);
  }
  t = SSL_close_file(w_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_4);
  return(t);
}
static ATerm z_9 (ATerm y_79 (ATerm), ATerm g_25, ATerm l_267, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm n_39 = NULL;
    n_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_25, n_39);
    t = y_79(t);
    t = n_39;
    return(t);
  }
  t = l_267;
  t = SRTS_one(p_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  static ATerm c_40 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_80(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm y_39 = NULL,a_40 = NULL,b_40 = NULL,h_8 = NULL,p_8 = NULL,e_1 = NULL;
          y_39 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_40 = ATgetFirst((ATermList) t);
              b_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_39);
          h_8 = t;
          t = b_40;
          t = c_40(t);
          p_8 = t;
          t = (ATerm) ATinsert(CheckATermList(p_8), a_40);
          e_1 = t;
          t = SSLsetAnnotations(e_1, h_8);
        }
      }
    return(t);
  }
  t = c_40(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,y_40 = NULL,h_1 = NULL,g_1 = NULL;
    y_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_40 = ATgetFirst((ATermList) t);
        u_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_40);
    r_40 = t;
    t = t_40;
    t = c_80(t);
    v_40 = t;
    t = (ATerm) ATinsert(CheckATermList(u_40), v_40);
    g_1 = t;
    t = SSLsetAnnotations(g_1, r_40);
    w_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_40 = ATgetFirst((ATermList) t);
        q_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_40);
    o_40 = t;
    t = q_40;
    if(((j_40 != NULL) && (j_40 != t)))
      _fail(t);
    else
      j_40 = t;
    t = (ATerm) ATinsert(CheckATermList(q_40), p_40);
    h_1 = t;
    t = SSLsetAnnotations(h_1, o_40);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(q_0, t);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_40, not_null(j_40));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm g_41 = NULL,l_41 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(v_104, t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm d_41 = NULL;
        d_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_41, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_41;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_41;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_15 = ATgetFirst((ATermList) t);
              ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_41;
          t = list_tokenize_1_0(v_104, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_15 = ATgetFirst((ATermList) t);
          ATerm i_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_41;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, g_41);
        }
      else
        {
          ATerm u_41 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_16 = ATgetFirst((ATermList) t);
              ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_41;
          t = list_tokenize_1_0(v_104, t);
          u_41 = t;
          t = (ATerm) ATinsert(CheckATermList(u_41), g_41);
        }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm f_42 = NULL;
  if(match_cons(t, sym__2))
    {
      f_42 = ATgetArgument(t, 0);
      if((f_42 != ATgetArgument(t, 1)))
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
  ATerm g_42 = NULL;
  g_42 = t;
  t = SSL_implode_string(g_42);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,a_42 = NULL,b_42 = NULL,d_42 = NULL,m_1 = NULL;
  d_42 = t;
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  x_41 = t;
  t = SSL_explode_string(a_42);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_41, b_42);
  m_1 = t;
  t = SSLsetAnnotations(m_1, x_41);
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_41;
  {
    static ATerm r_0 (ATerm t)
    {
      ATerm e_42 = NULL;
      e_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_42, v_41);
      t = z_9(s_0, e_42, v_41, t);
      return(t);
    }
    t = list_tokenize_1_0(r_0, t);
  }
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm a_10 (ATerm q_18, ATerm r_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_l_16), q_18);
  t = string_tokenize_0_0(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_42 = NULL,o_42 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_o_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_42 = ATgetFirst((ATermList) t);
                o_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(n_42);
          }
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm p_42 = NULL,q_42 = NULL;
          t = last_0_0(t);
          q_42 = t;
          t = SSL_strlen(q_42);
          p_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_42, r_18);
          t = d_9(p_42, r_18, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm p_16 = t;
  if((PushChoice() == 0))
    {
      ATerm s_42 = NULL,t_42 = NULL;
      if(match_cons(t, sym__2))
        {
          s_42 = ATgetArgument(t, 0);
          t_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_42, t_42);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(s_42, t_42);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = SSL_gtr(s_42, t_42);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, s_42, t_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm v_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_42 = NULL,y_42 = NULL;
      t = term_i_13;
      w_42 = t;
      t = term_c_17;
      y_42 = t;
      t = term_d_17;
      t = l_10(w_42, y_42, t);
      LocalPopChoice(b_17);
    }
  else
    {
      t = v_16;
      t = term_e_17;
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_39 = ATgetFirst((ATermList) t);
      g_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_39;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_39;
    }
  else
    {
      t = g_39;
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
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t_14, ATerm r_14, ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,z_5 = NULL;
  t = t_14;
  {
    ATerm i_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(z_0, t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = i_17;
        t = term_o_16;
      }
  }
  p_5 = t;
  t = term_m_17;
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, term_m_17);
  t = i_10(p_5, z_5, t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_5, term_l_16);
  t = copy_char_0_0(t);
  g_5 = t;
  t = t_14;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(a_1, t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = term_o_16;
      }
  }
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, term_p_17);
  t = copy_char_0_0(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_14, term_p_17);
  t = copy_char_0_0(t);
  j_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_5), h_5), g_5);
  l_5 = t;
  t = SSL_concat_strings(l_5);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm e_6 = NULL,h_6 = NULL;
  h_6 = t;
  t = SSL_explode_term(h_6);
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_17 = ATgetArgument(t, 1);
        if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
          {
            e_6 = ATgetFirst((ATermList) r_17);
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
  t = e_6;
  return(t);
}
static ATerm y_8 (ATerm l_14, ATerm p_14, ATerm m_14, ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_14, m_14);
  t = x_8(l_14, m_14, t);
  b_6 = t;
  t = p_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_14;
  t = map_1_0(f_1, t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
  t = z_8(b_6, d_6, t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_6, a_6);
  return(t);
}
static ATerm z_8 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  t = t_24;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_24;
    }
  else
    {
      ATerm x_2 = NULL,a_3 = NULL,p_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_7 = ATgetFirst((ATermList) t);
          j_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_24);
      x_2 = t;
      t = j_7;
      {
        static ATerm h_3 (ATerm t)
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_3 = NULL;
              b_3 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_3;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm e_3 = NULL;
                t = Cons_2_0(_id, h_3, t);
                e_3 = t;
                t = (ATerm) ATinsert(CheckATermList(e_3), s_24);
              }
            }
          return(t);
        }
        t = h_3(t);
      }
      a_3 = t;
      t = (ATerm) ATinsert(CheckATermList(a_3), i_7);
      p_1 = t;
      t = SSLsetAnnotations(p_1, x_2);
    }
  return(t);
}
static ATerm a_9 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm k_15, ATerm j_15, ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,q_7 = NULL,r_7 = NULL,t_7 = NULL;
  t = term_h_15;
  t = w_71(t);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_15, t_7);
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        {
          ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
          t = term_t_13;
          v_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_15, t_7)), term_z_17);
          w_7 = t;
          t = SSL_printnl(v_7, w_7);
          t = term_m_17;
          u_7 = t;
          t = SSL_exit(u_7);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_15, t_7)), term_z_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_15;
  t = v_71(t);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_7, r_7);
  t = i_10(o_7, r_7, t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_7), q_7));
  return(t);
}
static ATerm b_9 (ATerm u_71 (ATerm), ATerm f_15, ATerm d_15, ATerm g_15, ATerm e_15, ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,e_8 = NULL,f_8 = NULL,j_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
          t = term_t_13;
          n_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_15, g_15)), term_z_17);
          o_8 = t;
          t = SSL_printnl(n_8, o_8);
          t = term_m_17;
          m_8 = t;
          t = SSL_exit(m_8);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_15, g_15)), term_z_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_15;
  t = get_width_0_0(t);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, j_8);
  t = leq_0_0(t);
  t = term_h_15;
  t = u_71(t);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, f_8);
  t = i_10(b_8, f_8, t);
  e_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_15), a_8), e_8));
  return(t);
}
ATerm foldl_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  static ATerm u_10 (ATerm t)
  {
    ATerm o_9 = NULL,p_9 = NULL,u_9 = NULL,y_9 = NULL;
    if(match_cons(t, sym__2))
      {
        o_9 = ATgetArgument(t, 0);
        y_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_9;
      }
    else
      {
        ATerm t_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_9 = ATgetFirst((ATermList) t);
            u_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_9, y_9);
        t = s_86(t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, t_10);
        t = u_10(t);
      }
    return(t);
  }
  t = u_10(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm v_10 = NULL;
  static ATerm k_1 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,w_1 = NULL;
    c_11 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        z_10 = ATgetArgument(t, 0);
        a_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_11);
    y_10 = t;
    t = z_10;
    t = z_71(t);
    b_11 = t;
    t = a_11;
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, b_11, a_11);
    w_1 = t;
    t = SSLsetAnnotations(w_1, y_10);
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = SSL_string_to_int(not_null(v_10));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  t = copy_0_0(t);
  d_11 = t;
  t = SSL_implode_string(d_11);
  return(t);
}
static ATerm d_9 (ATerm m_56, ATerm n_56, ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_56, n_56);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      t = SSL_subtr(m_56, n_56);
    }
  return(t);
}
static ATerm f_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm c_1, ATerm t_0, ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,i_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_0, t_0);
  t = v_0(t);
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_1, e_11);
  t = b_1(t);
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_11), g_11), f_11);
  return(t);
}
ATerm thread_map_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  static ATerm g_12 (ATerm t)
  {
    ATerm p_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL,y_11 = NULL;
    t_11 = t;
    if(match_cons(t, sym__2))
      {
        v_11 = ATgetArgument(t, 0);
        y_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = v_11;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_11 = ATgetFirst((ATermList) t);
        s_11 = (ATerm) ATgetNext((ATermList) t);
        t = t_11;
        t = f_9(e_87, g_12, p_11, s_11, y_11, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_11);
      }
    return(t);
  }
  t = g_12(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm f_18 = t;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
      y_12 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_12;
        }
      else
        {
          ATerm k_4 = NULL,d_2 = NULL;
          if(match_cons(t, sym_H_2))
            {
              z_12 = ATgetArgument(t, 0);
              a_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_12);
          k_4 = t;
          t = z_12;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, z_12, a_13);
          d_2 = t;
          t = SSLsetAnnotations(d_2, k_4);
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
ATerm filter_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          d_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL,u_5 = NULL,v_5 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(b_14);
            r_5 = t;
            t = c_14;
            t = r_87(t);
            u_5 = t;
            t = d_14;
            t = filter_1_0(r_87, t);
            v_5 = t;
            t = (ATerm) ATinsert(CheckATermList(v_5), u_5);
            f_2 = t;
            t = SSLsetAnnotations(f_2, r_5);
            LocalPopChoice(j_18);
          }
        else
          {
            t = g_18;
            t = d_14;
            t = filter_1_0(r_87, t);
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,v_14 = NULL,c_15 = NULL,i_2 = NULL;
  t = c_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_14 = ATgetFirst((ATermList) t);
      i_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, a_16);
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        {
          ATerm t_15 = NULL,z_15 = NULL,d_16 = NULL;
          t = term_t_13;
          z_15 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_14, a_16)), term_z_17);
          d_16 = t;
          t = SSL_printnl(z_15, d_16);
          t = term_m_17;
          t_15 = t;
          t = SSL_exit(t_15);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_14, a_16)), term_z_17);
        }
      }
  }
  v_14 = t;
  t = i_14;
  {
    static ATerm l_1 (ATerm t)
    {
      ATerm e_16 = NULL;
      e_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, b_16);
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            {
              ATerm g_16 = NULL,h_16 = NULL,s_16 = NULL;
              t = term_t_13;
              h_16 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_16, b_16)), term_z_17);
              s_16 = t;
              t = SSL_printnl(h_16, s_16);
              t = term_m_17;
              g_16 = t;
              t = SSL_exit(g_16);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_16, b_16)), term_z_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(l_1, t);
  }
  c_15 = t;
  t = (ATerm) ATinsert(CheckATermList(c_15), v_14);
  i_2 = t;
  t = SSLsetAnnotations(i_2, g_14);
  return(t);
}
static ATerm f_19 (ATerm l_18, ATerm t)
{
  ATerm s_18 = NULL,v_18 = NULL,x_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,e_4 = NULL;
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_18 = ATgetFirst((ATermList) t);
      a_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_18);
  x_18 = t;
  t = a_19;
  t = Cons_2_0(n_1, q_1, t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), z_18);
  e_4 = t;
  t = SSLsetAnnotations(e_4, x_18);
  c_19 = t;
  t = SSL_mkterm(s_18, c_19);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm p_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_19 = NULL;
      d_19 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_19;
      LocalPopChoice(t_18);
    }
  else
    {
      t = p_18;
      t = Cons_2_0(r_1, u_1, t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm w_18 = t;
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
          t = f_19(e_19, t);
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
static ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_19 = ATgetFirst((ATermList) t);
      z_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_19, z_19);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_18;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm d_20 = NULL,h_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_20 = ATgetFirst((ATermList) t);
      h_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_20, h_20);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm k_20 = NULL,o_20 = NULL,v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if(match_cons(g_19, sym__2))
        {
          k_20 = ATgetArgument(g_19, 0);
          o_20 = ATgetArgument(g_19, 1);
        }
      else
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(match_cons(k_19, sym__2))
          {
            v_20 = ATgetArgument(k_19, 0);
            w_20 = ATgetArgument(k_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_20), k_20), (ATerm) ATinsert(CheckATermList(w_20), o_20));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(v_1, t);
      t = (ATerm) ATempty;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm h_19 = NULL,i_19 = NULL,l_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,x_19 = NULL,g_4 = NULL;
        t = map_1_0(x_1, t);
        t = genzip_4_0(y_1, a_2, b_2, _id, t);
        x_19 = t;
        if(match_cons(t, sym__2))
          {
            s_19 = ATgetArgument(t, 0);
            t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_19);
        l_19 = t;
        t = t_19;
        t = matrix_transpose_0_0(t);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_19, u_19);
        g_4 = t;
        t = SSLsetAnnotations(g_4, l_19);
        if(match_cons(t, sym__2))
          {
            h_19 = ATgetArgument(t, 0);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_19), h_19);
      }
    }
  return(t);
}
static ATerm i_9 (ATerm s_52, ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm y_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, s_52, t_52, u_52);
  t = m_9(s_52, t_52, u_52, t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, t_52);
  t = c_10(y_20, t_52, t);
  return(t);
}
static ATerm j_9 (ATerm y_56, ATerm z_56, ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(y_56, z_56);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = SSL_divr(y_56, z_56);
    }
  return(t);
}
static ATerm k_9 (ATerm e_57, ATerm f_57, ATerm t)
{
  t = SSL_mod(e_57, f_57);
  return(t);
}
static ATerm l_9 (ATerm e_53, ATerm f_53, ATerm a_53, ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,l_21 = NULL,m_21 = NULL,o_21 = NULL;
  t = SSL_strlen(f_53);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_53, e_21);
  t = d_9(a_53, e_21, t);
  b_21 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL;
        t = term_v_19;
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_21, term_v_19);
        t = k_9(b_21, s_21, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_21;
        LocalPopChoice(r_19);
        {
          ATerm t_21 = NULL,v_21 = NULL;
          t = term_v_19;
          v_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_21, term_v_19);
          t = j_9(b_21, v_21, t);
          t_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_21, t_21);
        }
      }
    else
      {
        t = q_19;
        {
          ATerm w_21 = NULL,a_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,x_4 = NULL;
          t = term_m_17;
          g_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_21, term_m_17);
          t = d_9(b_21, g_22, t);
          a_22 = t;
          t = term_v_19;
          f_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_22, term_v_19);
          t = j_9(a_22, f_22, t);
          w_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_21, w_21);
          o_22 = t;
          if(match_cons(t, sym__2))
            {
              ATerm a_20 = ATgetArgument(t, 0);
              ATerm b_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_22);
          h_22 = t;
          t = term_m_17;
          n_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_21, term_m_17);
          t = i_10(w_21, n_22, t);
          m_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_22, w_21);
          x_4 = t;
          t = SSLsetAnnotations(x_4, h_22);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      c_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_21, c_21);
  t = i_10(e_21, c_21, t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_53, f_53, m_21);
  t = m_9(e_53, f_53, m_21, t);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_21, f_21);
  t = i_10(e_21, f_21, t);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_53, f_53, l_21);
  t = m_9(e_53, f_53, l_21, t);
  g_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_21), f_53), d_21);
  o_21 = t;
  t = SSL_concat_strings(o_21);
  return(t);
}
static ATerm m_9 (ATerm l_53, ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm q_22 = NULL;
  t = SSL_strlen(j_53);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_53, q_22);
  t = d_9(k_53, q_22, t);
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_22, term_o_16);
        t = geq_0_0(t);
        t = r_22;
        LocalPopChoice(f_20);
        {
          ATerm s_22 = NULL;
          s_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_22, l_53);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = e_20;
        t = term_g_20;
      }
  }
  return(t);
}
static ATerm n_9 (ATerm w_52, ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm t_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, w_52, x_52, y_52);
  t = m_9(w_52, x_52, y_52, t);
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_52, t_22);
  t = c_10(x_52, t_22, t);
  return(t);
}
static ATerm p_25 (ATerm i_23, ATerm j_23, ATerm m_23, ATerm t)
{
  ATerm q_23 = NULL,t_23 = NULL,v_23 = NULL,w_23 = NULL;
  t = term_m_17;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, term_m_17);
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(i_23, w_23);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = SSL_gtr(i_23, w_23);
      }
  }
  t = j_23;
  if(match_cons(t, sym__3))
    {
      q_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
      v_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_9(q_23, t_23, v_23, t);
  return(t);
}
static ATerm q_25 (ATerm z_23, ATerm d_24, ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  t = z_23;
  if(match_cons(t, sym__3))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
      i_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_9(g_24, h_24, i_24, t);
  return(t);
}
static ATerm t_25 (ATerm j_24, ATerm k_24, ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = j_24;
  if(match_cons(t, sym__3))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
      q_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_9(o_24, p_24, q_24, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm b_25 = NULL,d_25 = NULL,e_25 = NULL,l_25 = NULL,n_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym__3))
    {
      e_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
      n_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_25;
  {
    ATerm p_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm z_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_20);
        t = n_25;
        {
          ATerm a_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm i_21 = ATgetArgument(t, 0);
                  b_25 = ATgetArgument(t, 1);
                  {
                    ATerm k_21 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(h_21);
              t = e_25;
              if(match_int(t, 1))
                {
                  ATerm q_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_25(e_25, n_25, d_25, t);
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = q_21;
                      t = b_25;
                    }
                }
              else
                {
                  t = p_25(e_25, n_25, d_25, t);
                }
            }
          else
            {
              t = a_21;
              t = e_25;
              t = p_25(e_25, n_25, d_25, t);
            }
        }
      }
    else
      {
        t = p_20;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm b_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(z_21);
              t = e_25;
              t = q_25(n_25, d_25, t);
            }
          else
            {
              t = y_21;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm c_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_25;
              t = t_25(n_25, d_25, t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,z_4 = NULL;
      o_26 = t;
      if(match_cons(t, sym__2))
        {
          m_26 = ATgetArgument(t, 0);
          n_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_26);
      l_26 = t;
      t = m_26;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_26;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_22 = ATgetFirst((ATermList) t);
              ATerm l_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_26;
        }
      t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
      z_4 = t;
      t = SSLsetAnnotations(z_4, l_26);
      LocalPopChoice(j_22);
      t = conc_0_0(t);
    }
  else
    {
      t = i_22;
      {
        ATerm y_26 = NULL,z_26 = NULL;
        if(match_cons(t, sym__2))
          {
            y_26 = ATgetArgument(t, 0);
            z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_26), y_26);
      }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm p_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_27 = NULL;
      a_27 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_27;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_22 = ATgetFirst((ATermList) t);
              ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_27;
        }
      LocalPopChoice(u_22);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = p_22;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(e_2, g_2, k_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_18;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_28 = ATgetFirst((ATermList) t);
      p_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_22 = ATgetArgument(t, 0);
      if(match_cons(x_22, sym__2))
        {
          q_28 = ATgetArgument(x_22, 0);
          r_28 = ATgetArgument(x_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = ATgetArgument(t, 1);
        if(match_cons(y_22, sym__2))
          {
            s_28 = ATgetArgument(y_22, 0);
            t_28 = ATgetArgument(y_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), q_28), (ATerm) ATinsert(CheckATermList(t_28), r_28));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_28 = NULL;
      t = flatten_list_0_0(t);
      x_28 = t;
      t = SSL_concat_strings(x_28);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_6 = NULL,m_6 = NULL;
      if(match_cons(t, sym__2))
        {
          l_6 = ATgetArgument(t, 0);
          m_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_6, m_6);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(l_6, m_6);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = SSL_gtr(l_6, m_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, l_6, m_6);
      LocalPopChoice(c_23);
      {
        ATerm n_6 = NULL,o_6 = NULL;
        o_6 = t;
        t = SSL_explode_term(o_6);
        if(match_cons(t, sym__2))
          {
            ATerm f_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_23 = ATgetArgument(t, 1);
              if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
                {
                  n_6 = ATgetFirst((ATermList) g_23);
                  {
                    ATerm h_23 = (ATerm) ATgetNext((ATermList) g_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_6;
      }
    }
  else
    {
      t = b_23;
      {
        ATerm p_6 = NULL,q_6 = NULL;
        q_6 = t;
        t = SSL_explode_term(q_6);
        if(match_cons(t, sym__2))
          {
            ATerm k_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_23 = ATgetArgument(t, 1);
              if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
                {
                  ATerm n_23 = ATgetFirst((ATermList) l_23);
                  ATerm o_23 = (ATerm) ATgetNext((ATermList) l_23);
                  if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
                    {
                      p_6 = ATgetFirst((ATermList) o_23);
                      {
                        ATerm p_23 = (ATerm) ATgetNext((ATermList) o_23);
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
        t = p_6;
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm z_16, ATerm y_16, ATerm u_16, ATerm w_16, ATerm t_16, ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,v_27 = NULL,x_27 = NULL,z_27 = NULL,b_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,e_5 = NULL,i_6 = NULL,j_6 = NULL;
  t = u_16;
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm k_28 = NULL;
      k_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_28, w_16);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
              t = term_t_13;
              m_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_28, w_16)), term_z_17);
              n_28 = t;
              t = SSL_printnl(m_28, n_28);
              t = term_m_17;
              l_28 = t;
              t = SSL_exit(l_28);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_28, w_16)), term_z_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(n_2, t);
  }
  t = genzip_4_0(q_2, s_2, t_2, _id, t);
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_28);
  x_27 = t;
  t = z_27;
  t = map_1_0(u_2, t);
  g_28 = t;
  t = b_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_23 = ATgetFirst((ATermList) t);
      j_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_6 = ATgetFirst((ATermList) t);
      {
        ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_6, i_6);
  t = foldl_1_0(v_2, t);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  e_5 = t;
  t = SSLsetAnnotations(e_5, x_27);
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_27, w_16);
  t = d_9(m_27, w_16, t);
  o_27 = t;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        t = term_m_17;
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_m_17);
        {
          ATerm c_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_16, g_29);
              LocalPopChoice(e_24);
            }
          else
            {
              t = c_24;
              t = SSL_gtr(y_16, g_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_m_17);
        LocalPopChoice(b_24);
        {
          ATerm h_29 = NULL,j_29 = NULL;
          t = z_16;
          if(match_cons(t, sym_AC_1))
            {
              j_29 = ATgetArgument(t, 0);
              t = j_29;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  j_29 = ATgetArgument(t, 0);
                  t = j_29;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      j_29 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_29;
                }
            }
          {
            ATerm f_24 = t;
            int l_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(y_2, t);
                LocalPopChoice(l_24);
              }
            else
              {
                t = f_24;
                t = term_m_17;
              }
          }
          h_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_29, term_p_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = a_24;
        t = term_g_20;
      }
  }
  q_27 = t;
  t = n_27;
  {
    static ATerm z_2 (ATerm t)
    {
      ATerm o_29 = NULL,z_29 = NULL;
      z_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, y_16, z_16, (ATerm) ATmakeAppl(sym__3, term_p_17, z_29, o_27));
      t = align_column_0_0(t);
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_29, q_27);
      t = c_10(o_29, q_27, t);
      return(t);
    }
    t = map_1_0(z_2, t);
  }
  r_27 = t;
  t = SSL_strlen(q_27);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_27, m_27);
  t = i_10(v_27, m_27, t);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, (ATerm) ATinsert(CheckATermList(t_16), r_27));
  return(t);
}
ATerm genzip_4_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t)
{
  static ATerm c_31 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_81(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm a_30 = NULL,f_30 = NULL,m_30 = NULL,r_30 = NULL,z_30 = NULL,a_31 = NULL,r_6 = NULL;
          t = m_81(t);
          a_31 = t;
          if(match_cons(t, sym__2))
            {
              f_30 = ATgetArgument(t, 0);
              m_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_31);
          a_30 = t;
          t = f_30;
          t = o_81(t);
          r_30 = t;
          t = m_30;
          t = c_31(t);
          z_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_30, z_30);
          r_6 = t;
          t = SSLsetAnnotations(r_6, a_30);
          t = n_81(t);
        }
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm g_31 = NULL;
  static ATerm x_31 (ATerm t)
  {
    ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
    if(match_cons(t, sym__2))
      {
        i_31 = ATgetArgument(t, 0);
        j_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_31;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm p_31 = NULL,q_31 = NULL,u_31 = NULL,v_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_31 = ATgetFirst((ATermList) t);
            l_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_31, k_31);
        t = c_104(t);
        p_31 = t;
        t = term_m_17;
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_m_17);
        t = i_10(i_31, v_31, t);
        u_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_31, l_31);
        t = x_31(t);
        q_31 = t;
        t = (ATerm) ATinsert(CheckATermList(q_31), p_31);
      }
    return(t);
  }
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_17, g_31);
  t = x_31(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_32;
      t = p_86(t);
    }
  else
    {
      ATerm p_32 = NULL,s_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_32 = ATgetFirst((ATermList) t);
          i_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_32;
      t = r_86(t);
      p_32 = t;
      t = i_32;
      t = foldr_3_0(p_86, q_86, r_86, t);
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_32, s_32);
      t = q_86(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  static ATerm u_34 (ATerm t)
  {
    ATerm m_34 = NULL,n_34 = NULL,s_34 = NULL;
    s_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_34 = ATgetFirst((ATermList) t);
        n_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_7 = NULL,m_7 = NULL,u_6 = NULL;
          t = SSLgetAnnotations(s_34);
          b_7 = t;
          t = n_34;
          t = u_34(t);
          m_7 = t;
          t = (ATerm) ATinsert(CheckATermList(m_7), m_34);
          u_6 = t;
          t = SSLsetAnnotations(u_6, b_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_34;
        t = g_80(t);
      }
    return(t);
  }
  t = u_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_32;
    }
  else
    {
      static ATerm d_3 (ATerm t)
      {
        t = not_null(w_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_32 = ATgetFirst((ATermList) t);
          if(((w_32 != NULL) && (w_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_32;
      t = at_end_1_0(d_3, t);
    }
  return(t);
}
static ATerm m_35 (ATerm c_35, ATerm t)
{
  ATerm d_35 = NULL;
  t = SSL_explode_term(c_35);
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  h_35 = t;
  if(match_cons(t, sym__2))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_3 (ATerm t)
            {
              t = g_35;
              return(t);
            }
            t = f_35;
            t = at_end_1_0(g_3, t);
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            t = m_35(h_35, t);
          }
      }
    }
  else
    {
      t = m_35(h_35, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  static ATerm r_35 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_77(t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = r_77(t);
        t = r_35(t);
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm for_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  t = t_77(t);
  t = while_not_2_0(u_77, v_77, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_35, t_35, (ATerm) ATempty);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_35 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if(((ATgetType(y_24) != AT_INT) || (ATgetInt((ATermInt) y_24) != 0)))
        _fail(t);
      {
        ATerm z_24 = ATgetArgument(t, 1);
      }
      u_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_35;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_cons(t, sym__3))
    {
      z_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
      b_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_35, term_m_17);
  t = geq_0_0(t);
  t = term_m_17;
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_35, term_m_17);
  t = d_9(z_35, d_36, t);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_36, a_36, (ATerm) ATinsert(CheckATermList(b_36), a_36));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(i_3, j_3, m_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(n_36, o_36, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  i_36 = t;
  t = foldr_3_0(n_3, o_3, p_3, t);
  f_36 = t;
  t = term_h_15;
  t = y_71(t);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, f_36);
  t = d_9(j_36, f_36, t);
  g_36 = t;
  {
    ATerm a_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_36 = NULL;
        t = term_o_16;
        p_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_36, term_o_16);
        {
          ATerm f_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_36, p_36);
              LocalPopChoice(h_25);
            }
          else
            {
              t = f_25;
              t = SSL_gtr(g_36, p_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_36, (ATerm) ATempty);
        t = copy_0_0(t);
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_36, h_36);
        t = conc_0_0(t);
        LocalPopChoice(c_25);
      }
    else
      {
        t = a_25;
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = i_36;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              {
                ATerm r_36 = NULL,s_36 = NULL,v_36 = NULL;
                t = term_t_13;
                s_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, i_36), term_k_25);
                v_36 = t;
                t = SSL_printnl(s_36, v_36);
                t = term_m_17;
                r_36 = t;
                t = SSL_exit(r_36);
                t = (ATerm) ATinsert(ATinsert(ATempty, i_36), term_k_25);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_25 = t;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,w_6 = NULL;
      a_39 = t;
      if(match_cons(t, sym_R_2))
        {
          y_38 = ATgetArgument(t, 0);
          z_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_39);
      x_38 = t;
      t = z_38;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, y_38, z_38);
      w_6 = t;
      t = SSLsetAnnotations(w_6, x_38);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_25;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, (ATerm) ATempty);
  {
    static ATerm b_39 (ATerm t)
    {
      ATerm d_37 = NULL,e_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
      if(match_cons(t, sym__2))
        {
          k_37 = ATgetArgument(t, 0);
          n_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_37;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm y_37 = NULL;
          t = n_37;
          t = reverse_acc_2_0(_id, c_4, t);
          y_37 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_37));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_37 = ATgetFirst((ATermList) t);
              m_37 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_37;
          if(match_cons(t, sym_R_2))
            {
              d_37 = ATgetArgument(t, 0);
              e_37 = ATgetArgument(t, 1);
              {
                ATerm o_25 = t;
                int r_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_38 = NULL,k_38 = NULL;
                    t = n_37;
                    t = reverse_acc_2_0(_id, f_4, t);
                    j_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_37, (ATerm) ATempty);
                    t = b_39(t);
                    k_38 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_38), (ATerm) ATmakeAppl(sym_R_2, d_37, e_37)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, j_38));
                    LocalPopChoice(r_25);
                  }
                else
                  {
                    t = o_25;
                    t = (ATerm) ATmakeAppl(sym__2, m_37, (ATerm) ATinsert(CheckATermList(n_37), l_37));
                    t = b_39(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, m_37, (ATerm) ATinsert(CheckATermList(n_37), l_37));
              t = b_39(t);
            }
        }
      return(t);
    }
    t = b_39(t);
  }
  t = filter_1_0(j_4, t);
  return(t);
}
static ATerm c_57 (ATerm j_47, ATerm k_47, ATerm l_47, ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,b_48 = NULL,e_48 = NULL;
  t = l_47;
  t = construct_rows_0_0(t);
  t = map_1_0(l_4, t);
  {
    static ATerm m_4 (ATerm t)
    {
      static ATerm o_4 (ATerm t)
      {
        t = j_47;
        t = foldr_3_0(t_4, u_4, y_4, t);
        return(t);
      }
      t = FitToMax_1_0(o_4, t);
      return(t);
    }
    t = map_1_0(m_4, t);
  }
  t = matrix_transpose_0_0(t);
  t = reverse_acc_2_0(_id, a_5, t);
  t = map_with_index_1_0(_id, t);
  t = reverse_acc_2_0(_id, b_5, t);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_47, x_47);
  t = genzip_4_0(d_5, f_5, i_5, _id, t);
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_47, (ATerm) ATmakeAppl(sym__2, o_47, (ATerm) ATempty));
  t = foldl_1_0(k_5, t);
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_47;
  t = reverse_acc_2_0(_id, o_5, t);
  t = matrix_transpose_0_0(t);
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm d_49 = NULL;
      d_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_49, b_48);
      return(t);
    }
    t = map_1_0(q_5, t);
  }
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_47, e_48, o_47);
  t = y_8(k_47, e_48, o_47, t);
  return(t);
}
static ATerm g_57 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,q_49 = NULL;
  t = e_49;
  {
    ATerm s_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(s_5, t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = s_25;
        t = term_o_16;
      }
  }
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, q_49);
  t = i_10(g_49, q_49, t);
  n_49 = t;
  t = f_49;
  t = filter_1_0(is_real_vbox_0_0, t);
  m_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_49);
    }
  else
    {
      ATerm r_49 = NULL;
      t = (ATerm) ATmakeAppl(sym__3, g_49, n_49, m_49);
      t = g_9(g_49, n_49, m_49, t);
      r_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, e_49, r_49, g_49);
      t = y_8(e_49, r_49, g_49, t);
    }
  return(t);
}
static ATerm h_57 (ATerm s_49, ATerm t_49, ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm a_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,m_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,l_51 = NULL,m_51 = NULL,c_7 = NULL;
  t = s_49;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(t_5, t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = term_m_17;
      }
  }
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_50, term_p_17);
  t = copy_char_0_0(t);
  d_50 = t;
  t = SSL_strlen(d_50);
  f_50 = t;
  t = t_49;
  t = filter_1_0(is_real_hbox_0_0, t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, u_49);
  {
    static ATerm w_5 (ATerm t)
    {
      ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,a_7 = NULL;
      ATerm x_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_0_0(t);
          LocalPopChoice(y_25);
        }
      else
        {
          t = x_25;
          {
            ATerm d_51 = NULL,r_9 = NULL,s_9 = NULL,v_9 = NULL;
            d_51 = t;
            t = term_t_13;
            s_9 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, d_51), term_z_17);
            v_9 = t;
            t = SSL_printnl(s_9, v_9);
            t = term_m_17;
            r_9 = t;
            t = SSL_exit(r_9);
            t = (ATerm) ATinsert(ATinsert(ATempty, d_51), term_z_17);
          }
        }
      x_50 = t;
      if(match_cons(t, sym__2))
        {
          u_50 = ATgetArgument(t, 0);
          v_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_50);
      t_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_50, v_50);
      t = i_10(f_50, v_50, t);
      w_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_50, w_50);
      a_7 = t;
      t = SSLsetAnnotations(a_7, t_50);
      return(t);
    }
    t = thread_map_1_0(w_5, t);
  }
  s_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_50);
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_50, m_50);
  t = z_8(d_50, m_50, t);
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_50, p_50);
  c_7 = t;
  t = SSLsetAnnotations(c_7, h_50);
  r_50 = t;
  if(match_cons(t, sym__2))
    {
      l_51 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_10 = NULL,x_10 = NULL,h_11 = NULL,d_7 = NULL;
            t = SSLgetAnnotations(r_50);
            q_10 = t;
            t = l_51;
            {
              ATerm b_26 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = b_26;
                }
            }
            x_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_51, f_50);
            t = d_9(m_51, f_50, t);
            h_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_10, h_11);
            d_7 = t;
            t = SSLsetAnnotations(d_7, q_10);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = r_50;
          }
      }
    }
  else
    {
      t = r_50;
    }
  return(t);
}
static ATerm j_57 (ATerm q_51, ATerm t_51, ATerm u_51, ATerm v_51, ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,p_52 = NULL,q_52 = NULL;
  t = q_51;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(x_5, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = term_m_17;
      }
  }
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_52, term_p_17);
  t = copy_char_0_0(t);
  c_52 = t;
  t = q_51;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(y_5, t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = term_o_16;
      }
  }
  n_52 = t;
  t = term_m_17;
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_52, term_m_17);
  t = i_10(n_52, p_52, t);
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_52, term_l_16);
  t = copy_char_0_0(t);
  t = SSL_strlen(c_52);
  a_52 = t;
  t = q_51;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(f_6, t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = term_o_16;
      }
  }
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_51, l_52);
  t = i_10(u_51, l_52, t);
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_51)));
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm r_52 = NULL,m_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,y_53 = NULL,z_53 = NULL;
      u_53 = t;
      if(match_cons(t, sym__2))
        {
          y_53 = ATgetArgument(t, 0);
          z_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_52 = ATgetFirst((ATermList) t);
          t_53 = (ATerm) ATgetNext((ATermList) t);
          t = r_52;
          if(match_cons(t, sym__2))
            {
              m_53 = ATgetArgument(t, 0);
              s_53 = ATgetArgument(t, 1);
              {
                ATerm i_26 = t;
                int j_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm k_6 (ATerm t)
                    {
                      t = a_52;
                      return(t);
                    }
                    t = u_53;
                    t = b_9(k_6, y_53, m_53, s_53, t_53, t);
                    LocalPopChoice(j_26);
                  }
                else
                  {
                    t = i_26;
                    {
                      static ATerm s_6 (ATerm t)
                      {
                        t = a_52;
                        return(t);
                      }
                      static ATerm t_6 (ATerm t)
                      {
                        t = b_52;
                        return(t);
                      }
                      t = u_53;
                      t = a_9(s_6, t_6, y_53, z_53, t);
                    }
                  }
              }
            }
          else
            {
              static ATerm v_6 (ATerm t)
              {
                t = a_52;
                return(t);
              }
              static ATerm x_6 (ATerm t)
              {
                t = b_52;
                return(t);
              }
              t = u_53;
              t = a_9(v_6, x_6, y_53, z_53, t);
            }
        }
      else
        {
          static ATerm y_6 (ATerm t)
          {
            t = a_52;
            return(t);
          }
          static ATerm z_6 (ATerm t)
          {
            t = b_52;
            return(t);
          }
          t = u_53;
          t = a_9(y_6, z_6, y_53, z_53, t);
        }
      return(t);
    }
    t = foldl_1_0(g_6, t);
  }
  t = reverse_acc_2_0(_id, e_7, t);
  t = map_1_0(g_7, t);
  {
    static ATerm l_7 (ATerm t)
    {
      ATerm w_54 = NULL,z_54 = NULL,a_55 = NULL,d_55 = NULL,e_55 = NULL,k_7 = NULL;
      e_55 = t;
      if(match_cons(t, sym__2))
        {
          z_54 = ATgetArgument(t, 0);
          a_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_55);
      w_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_52, z_54);
      t = z_8(c_52, z_54, t);
      d_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_55, a_55);
      k_7 = t;
      t = SSLsetAnnotations(k_7, w_54);
      return(t);
    }
    t = map_1_0(l_7, t);
  }
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_51, k_52, u_51);
  t = y_8(q_51, k_52, u_51, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm f_48 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_48;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      h_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(g_48, h_48, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(((ATgetType(p_26) != AT_LIST) || !(ATisEmpty(p_26))))
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) != AT_LIST) || !(ATisEmpty(q_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
        {
          n_48 = ATgetFirst((ATermList) r_26);
          o_48 = (ATerm) ATgetNext((ATermList) r_26);
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
          {
            p_48 = ATgetFirst((ATermList) s_26);
            q_48 = (ATerm) ATgetNext((ATermList) s_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_48, p_48), (ATerm) ATmakeAppl(sym__2, o_48, q_48));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_48), r_48);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      if(match_cons(t_26, sym__2))
        {
          w_48 = ATgetArgument(t_26, 0);
          {
            ATerm v_26 = ATgetArgument(t_26, 1);
            if(match_cons(v_26, sym__2))
              {
                x_48 = ATgetArgument(v_26, 0);
                z_48 = ATgetArgument(v_26, 1);
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
            a_49 = ATgetArgument(u_26, 0);
            b_49 = ATgetArgument(u_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_9(w_48, x_48, z_48, a_49, b_49, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm o_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,f_7 = NULL;
  t_54 = t;
  if(match_cons(t, sym__2))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_54);
  o_54 = t;
  t = q_54;
  t = reverse_acc_2_0(_id, h_7, t);
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_54, r_54);
  f_7 = t;
  t = SSLsetAnnotations(f_7, o_54);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,j_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,q_55 = NULL,r_55 = NULL,u_55 = NULL,v_55 = NULL,x_55 = NULL;
  q_55 = t;
  if(match_cons(t, sym__2))
    {
      r_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_55;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_20, x_55);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_55 = ATgetFirst((ATermList) t);
          v_55 = (ATerm) ATgetNext((ATermList) t);
          t = v_55;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_55, x_55);
          {
            ATerm w_26 = t;
            int x_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                LocalPopChoice(x_26);
              }
            else
              {
                t = w_26;
                {
                  ATerm r_11 = NULL,u_11 = NULL,w_11 = NULL;
                  t = term_t_13;
                  u_11 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_55, x_55)), term_z_17);
                  w_11 = t;
                  t = SSL_printnl(u_11, w_11);
                  t = term_m_17;
                  r_11 = t;
                  t = SSL_exit(r_11);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_55, x_55)), term_z_17);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              u_55 = ATgetArgument(t, 0);
              v_55 = ATgetArgument(t, 1);
              {
                ATerm u_12 = NULL,v_12 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, u_55, x_55);
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
                        ATerm w_12 = NULL,x_12 = NULL,b_13 = NULL;
                        t = term_t_13;
                        x_12 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_55, x_55)), term_z_17);
                        b_13 = t;
                        t = SSL_printnl(x_12, b_13);
                        t = term_m_17;
                        w_12 = t;
                        t = SSL_exit(w_12);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_55, x_55)), term_z_17);
                      }
                    }
                }
                u_12 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm d_27 = ATgetArgument(t, 0);
                    v_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, u_55, v_55), x_55);
                {
                  ATerm e_27 = t;
                  int f_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_13 = NULL;
                      t = get_width_0_0(t);
                      c_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_12, c_13);
                      t = leq_0_0(t);
                      LocalPopChoice(f_27);
                      t = u_12;
                    }
                  else
                    {
                      t = e_27;
                      t = (ATerm) ATmakeAppl(sym__2, v_55, x_55);
                      {
                        ATerm g_27 = t;
                        int h_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(h_27);
                          }
                        else
                          {
                            t = g_27;
                            {
                              ATerm d_13 = NULL,e_13 = NULL,g_13 = NULL;
                              t = term_t_13;
                              e_13 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_55, x_55)), term_z_17);
                              g_13 = t;
                              t = SSL_printnl(e_13, g_13);
                              t = term_m_17;
                              d_13 = t;
                              t = SSL_exit(d_13);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_55, x_55)), term_z_17);
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
                  u_55 = ATgetArgument(t, 0);
                  v_55 = ATgetArgument(t, 1);
                  {
                    ATerm i_27 = t;
                    int j_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_55, v_55), x_55);
                        {
                          ATerm k_27 = t;
                          int l_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(l_27);
                            }
                          else
                            {
                              t = k_27;
                              {
                                ATerm j_14 = NULL,k_14 = NULL,n_14 = NULL;
                                t = term_t_13;
                                k_14 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_55, v_55), x_55)), term_z_17);
                                n_14 = t;
                                t = SSL_printnl(k_14, n_14);
                                t = term_m_17;
                                j_14 = t;
                                t = SSL_exit(j_14);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_55, v_55), x_55)), term_z_17);
                              }
                            }
                        }
                        LocalPopChoice(j_27);
                      }
                    else
                      {
                        t = i_27;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_55, v_55), x_55);
                        {
                          ATerm p_27 = t;
                          int t_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(t_27);
                            }
                          else
                            {
                              t = p_27;
                              {
                                ATerm i_15 = NULL,l_15 = NULL,m_15 = NULL;
                                t = term_t_13;
                                l_15 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_55, v_55), x_55)), term_z_17);
                                m_15 = t;
                                t = SSL_printnl(l_15, m_15);
                                t = term_m_17;
                                i_15 = t;
                                t = SSL_exit(i_15);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_55, v_55), x_55)), term_z_17);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm u_27 = t;
                  int w_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm y_27 = ATgetArgument(t, 0);
                          v_55 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(w_27);
                      t = (ATerm) ATmakeAppl(sym__2, v_55, x_55);
                      {
                        ATerm a_28 = t;
                        int c_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(c_28);
                          }
                        else
                          {
                            t = a_28;
                            {
                              ATerm x_15 = NULL,y_15 = NULL,f_16 = NULL;
                              t = term_t_13;
                              y_15 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_55, x_55)), term_z_17);
                              f_16 = t;
                              t = SSL_printnl(y_15, f_16);
                              t = term_m_17;
                              x_15 = t;
                              t = SSL_exit(x_15);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_55, x_55)), term_z_17);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = u_27;
                      {
                        ATerm d_28 = t;
                        int e_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm f_28 = ATgetArgument(t, 0);
                                v_55 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(e_28);
                            t = v_55;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                f_55 = ATgetFirst((ATermList) t);
                                j_55 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = f_55;
                            if(match_cons(t, sym_S_1))
                              {
                                g_55 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = j_55;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, g_55, x_55);
                          }
                        else
                          {
                            t = d_28;
                            if(match_cons(t, sym_S_1))
                              {
                                u_55 = ATgetArgument(t, 0);
                                {
                                  ATerm l_56 = NULL,p_56 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, u_55, x_55);
                                  t = a_10(u_55, x_55, t);
                                  p_56 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, x_55, p_56);
                                  t = i_10(x_55, p_56, t);
                                  l_56 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, u_55, l_56);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    u_55 = ATgetArgument(t, 0);
                                    v_55 = ATgetArgument(t, 1);
                                    o_55 = ATgetArgument(t, 2);
                                    t = u_55;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        n_55 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_55;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        l_55 = ATgetFirst((ATermList) t);
                                        m_55 = (ATerm) ATgetNext((ATermList) t);
                                        t = m_55;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = l_55;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm j_28 = t;
                                                int u_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = c_57(n_55, v_55, o_55, x_55, q_55, t);
                                                    LocalPopChoice(u_28);
                                                  }
                                                else
                                                  {
                                                    t = j_28;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_55);
                                                  }
                                              }
                                            else
                                              {
                                                t = c_57(n_55, v_55, o_55, x_55, q_55, t);
                                              }
                                          }
                                        else
                                          {
                                            t = l_55;
                                            t = c_57(n_55, v_55, o_55, x_55, q_55, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm v_28 = t;
                                            int w_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = c_57(n_55, v_55, o_55, x_55, q_55, t);
                                                LocalPopChoice(w_28);
                                              }
                                            else
                                              {
                                                t = v_28;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_55);
                                              }
                                          }
                                        else
                                          {
                                            t = c_57(n_55, v_55, o_55, x_55, q_55, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        u_55 = ATgetArgument(t, 0);
                                        v_55 = ATgetArgument(t, 1);
                                        t = g_57(u_55, v_55, x_55, q_55, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            u_55 = ATgetArgument(t, 0);
                                            v_55 = ATgetArgument(t, 1);
                                            t = h_57(u_55, v_55, x_55, q_55, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                u_55 = ATgetArgument(t, 0);
                                                v_55 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = j_57(u_55, v_55, x_55, q_55, t);
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
static ATerm l_58 (ATerm d_58, ATerm t)
{
  t = SSL_fclose(d_58);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  h_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_58 = ATgetArgument(t, 0);
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_58);
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = l_58(h_58, t);
          }
      }
    }
  else
    {
      t = l_58(h_58, t);
    }
  return(t);
}
static ATerm b_10 (ATerm u_23, ATerm t)
{
  t = SSL_read_term_from_stream(u_23);
  return(t);
}
static ATerm c_10 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_strcat(b_55, c_55);
  return(t);
}
static ATerm d_10 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm m_58 = NULL;
  t = SSL_fopen(z_32, a_33);
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_58);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_58 = NULL;
  t = SSL_stdin_stream();
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_58);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_58 = NULL;
  t = SSL_stdout_stream();
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_58);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_58 = NULL;
  t = SSL_stderr_stream();
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_58);
  return(t);
}
static ATerm h_60 (ATerm x_58, ATerm t)
{
  ATerm y_58 = NULL;
  t = SSL_explode_term(x_58);
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_29 = ATgetArgument(t, 1);
        if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
          {
            y_58 = ATgetFirst((ATermList) b_29);
            {
              ATerm c_29 = (ATerm) ATgetNext((ATermList) b_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_58;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_58;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_58;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_58;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_60 (ATerm d_59, ATerm e_59, ATerm h_59, ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,o_59 = NULL,p_12 = NULL;
  t = SSLgetAnnotations(h_59);
  k_59 = t;
  t = d_59;
  if(match_cons(t, sym_Path_1))
    {
      o_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_59, e_59);
  p_12 = t;
  t = SSLsetAnnotations(p_12, k_59);
  if(match_cons(t, sym__2))
    {
      i_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(i_59, j_59, t);
  return(t);
}
static ATerm l_60 (ATerm s_59, ATerm t_59, ATerm u_59, ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,a_60 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(u_59);
  x_59 = t;
  t = SSL_is_string(s_59);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_60, t_59);
  q_12 = t;
  t = SSLsetAnnotations(q_12, x_59);
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(v_59, w_59, t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
  e_60 = t;
  if(match_cons(t, sym__2))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_60(e_60, t);
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
                  t = k_60(f_60, g_60, e_60, t);
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = f_29;
                  t = l_60(f_60, g_60, e_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_60(e_60, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,u_60 = NULL;
  u_60 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_60, term_m_29);
        t = e_10(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm x_16 = NULL,a_17 = NULL;
          t = term_n_29;
          a_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_29, u_60);
          t = c_10(a_17, u_60, t);
          x_16 = t;
          t = SSL_perror(x_16);
          _fail(t);
        }
      }
  }
  o_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(p_60, t);
  n_60 = t;
  t = o_60;
  t = fclose_0_0(t);
  t = n_60;
  return(t);
}
static ATerm f_10 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_access(q_32, r_32);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_61 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_61 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_29);
      c_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_61, (ATerm) ATinsert(ATempty, term_p_29));
      t = f_10(a_61, c_61, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm l_10 (ATerm d_22, ATerm e_22, ATerm t)
{
  t = SSL_table_get(d_22, e_22);
  return(t);
}
static ATerm h_10 (ATerm r_20, ATerm s_20, ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  e_61 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        t = l_10(r_20, s_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_29 = ATgetFirst((ATermList) t);
            d_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_29);
        t = SSL_table_put(r_20, s_20, d_61);
        t = (ATerm) ATmakeAppl(sym__3, r_20, s_20, d_61);
      }
    else
      {
        t = q_29;
        t = SSL_table_remove(r_20, s_20);
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
      }
  }
  t = e_61;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm f_61 = NULL,i_61 = NULL,j_61 = NULL,q_61 = NULL,r_61 = NULL;
  q_61 = t;
  t = h_90(t);
  j_61 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_61 = NULL;
        t = term_u_14;
        s_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_61, term_u_14);
        t = l_10(j_61, s_61, t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_61 = ATgetFirst((ATermList) t);
      f_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_u_14;
  r_61 = t;
  t = SSL_table_put(j_61, r_61, f_61);
  t = i_61;
  {
    static ATerm p_7 (ATerm t)
    {
      ATerm t_61 = NULL;
      t_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_61, t_61);
      t = h_10(j_61, t_61, t);
      return(t);
    }
    t = map_1_0(p_7, t);
  }
  t = q_61;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_76(t);
      t = v_76(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      t = v_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,a_62 = NULL,b_62 = NULL;
  x_61 = t;
  t = g_90(t);
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_61, term_u_14);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_62 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_30 = ATgetArgument(t, 0);
            ATerm c_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_14;
        h_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_61, term_u_14);
        t = l_10(w_61, h_62, t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
  }
  y_61 = t;
  t = term_u_14;
  a_62 = t;
  t = (ATerm) ATinsert(CheckATermList(y_61), (ATerm) ATempty);
  b_62 = t;
  t = SSL_table_put(w_61, a_62, b_62);
  t = x_61;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_a_15;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm r_62 = NULL;
  r_62 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_62);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = r_62;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  ATerm k_62 = NULL;
  static ATerm x_7 (ATerm t)
  {
    ATerm m_62 = NULL;
    m_62 = t;
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_62 = NULL,o_62 = NULL;
          t = term_a_15;
          n_62 = t;
          t = term_u_14;
          o_62 = t;
          t = term_i_30;
          t = l_10(n_62, o_62, t);
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_62 != NULL) && (k_62 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_62 = ATgetFirst((ATermList) t);
        {
          ATerm j_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_62;
    t = map_1_0(y_7, t);
    t = m_62;
    t = end_scope_1_0(z_7, t);
    return(t);
  }
  t = begin_scope_1_0(s_7, t);
  t = restore_always_2_0(u_72, x_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,z_62 = NULL,c_63 = NULL;
  u_62 = t;
  t = term_h_15;
  t = whoami_0_0(t);
  v_62 = t;
  t = term_t_13;
  z_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_30), v_62), term_k_30);
  c_63 = t;
  t = SSL_printnl(z_62, c_63);
  t = term_m_17;
  w_62 = t;
  t = SSL_exit(w_62);
  t = u_62;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_63 = NULL,m_63 = NULL,p_63 = NULL,q_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_63 = NULL,v_63 = NULL,w_63 = NULL;
      t = term_h_15;
      t = n_0(t);
      t_63 = t;
      t = term_n_30;
      v_63 = t;
      t = term_o_30;
      w_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_o_30, t_63);
      t = m_10(v_63, w_63, t_63, t);
      _fail(t);
    }
  else
    {
      ATerm d_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_63 = ATgetFirst((ATermList) t);
          m_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_63 = ATgetFirst((ATermList) t);
          q_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_63;
      t = k_0(t);
      t = p_63;
      t = l_0(t);
      d_64 = t;
      t = (ATerm) ATinsert(CheckATermList(q_63), d_64);
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm h_64 = NULL;
  h_64 = t;
  if(match_string(t, "-k"))
    {
      t = h_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_64;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm i_64 = NULL,m_64 = NULL,q_64 = NULL;
  i_64 = t;
  t = SSL_string_to_int(i_64);
  m_64 = t;
  t = term_p_30;
  q_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, m_64);
  t = o_10(q_64, m_64, t);
  t = i_64;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_8, d_8, g_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm s_64 = NULL;
  s_64 = t;
  if(match_string(t, "-S"))
    {
      t = s_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_64;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL;
  t = term_s_30;
  t_64 = t;
  t = term_o_16;
  u_64 = t;
  t = term_t_30;
  t = o_10(t_64, u_64, t);
  t = term_u_30;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  t = SSL_string_to_int(v_64);
  w_64 = t;
  t = term_s_30;
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_30, w_64);
  t = o_10(x_64, w_64, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_64);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_w_30;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL;
  t = term_x_30;
  z_64 = t;
  t = term_h_15;
  a_65 = t;
  t = term_y_30;
  t = o_10(z_64, a_65, t);
  t = term_b_31;
  return(t);
}
static ATerm v_8 (ATerm t)
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
      t = Option_3_0(i_8, k_8, l_8, t);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm h_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_8, r_8, s_8, t);
            LocalPopChoice(m_31);
          }
        else
          {
            t = h_31;
            t = Option_3_0(t_8, u_8, v_8, t);
          }
      }
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm c_65 = NULL;
  c_65 = t;
  if(match_string(t, "-o"))
    {
      t = c_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_65;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm d_65 = NULL,f_65 = NULL;
  d_65 = t;
  t = term_j_13;
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, d_65);
  t = o_10(f_65, d_65, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_65);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_9, e_9, h_9, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm j_65 = NULL;
  j_65 = t;
  if(match_string(t, "-i"))
    {
      t = j_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_65;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL;
  k_65 = t;
  t = term_o_31;
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, k_65);
  t = o_10(l_65, k_65, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_65);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, w_9, x_9, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  t = term_s_31;
  n_65 = t;
  t = term_h_15;
  o_65 = t;
  t = term_t_31;
  t = o_10(n_65, o_65, t);
  t = term_w_31;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  if(match_string(t, "-w"))
    {
      t = p_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = p_65;
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm q_65 = NULL,t_65 = NULL,u_65 = NULL;
  q_65 = t;
  t = SSL_string_to_int(q_65);
  t_65 = t;
  t = term_c_17;
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_17, t_65);
  t = o_10(u_65, t_65, t);
  t = q_65;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            {
              ATerm e_32 = t;
              int f_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_10, k_10, n_10, t);
                  LocalPopChoice(f_32);
                }
              else
                {
                  t = e_32;
                  {
                    ATerm j_32 = t;
                    int k_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_32);
                      }
                    else
                      {
                        t = j_32;
                        {
                          ATerm l_32 = t;
                          int m_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(m_32);
                            }
                          else
                            {
                              t = l_32;
                              t = ArgOption_3_0(p_10, r_10, s_10, t);
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
  ATerm v_65 = NULL,x_65 = NULL,c_66 = NULL,d_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_15;
  t = whoami_0_0(t);
  v_65 = t;
  t = term_t_13;
  c_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_32), v_65);
  d_66 = t;
  t = SSL_printnl(c_66, d_66);
  t = term_m_17;
  x_65 = t;
  t = SSL_exit(x_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  t = term_i_13;
  e_66 = t;
  t = term_o_32;
  f_66 = t;
  t = term_t_32;
  t = l_10(e_66, f_66, t);
  return(t);
}
static ATerm i_10 (ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_56, h_56);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      t = SSL_addr(g_56, h_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
  h_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_66;
      t = n_86(t);
    }
  else
    {
      ATerm m_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_66 = ATgetFirst((ATermList) t);
          j_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_66;
      t = foldr_2_0(n_86, o_86, t);
      m_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_66, m_66);
      t = o_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(j_17, k_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_66 = NULL,f_17 = NULL,g_17 = NULL;
  t = times_0_0(t);
  g_17 = t;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm b_33 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_17;
  t = foldr_2_0(w_10, j_11, t);
  p_66 = t;
  t = SSL_TicksToSeconds(p_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  if(match_cons(t, sym__2))
    {
      b_67 = ATgetArgument(t, 0);
      c_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_67;
        if((b_67 != t))
          {
            _fail(t);
          }
        t = a_67;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_67, c_67);
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              t = SSL_gtr(b_67, c_67);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm g_67 = NULL;
  g_67 = t;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
        t = term_i_13;
        j_67 = t;
        t = term_s_30;
        k_67 = t;
        t = term_k_33;
        t = l_10(j_67, k_67, t);
        i_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_67, term_m_17);
        t = geq_0_0(t);
        t = g_67;
        t = j_89(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = g_67;
      }
  }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,p_67 = NULL,q_67 = NULL;
  t = run_time_0_0(t);
  m_67 = t;
  t = term_h_15;
  t = whoami_0_0(t);
  n_67 = t;
  t = term_t_13;
  p_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_33), m_67), term_l_33), n_67);
  q_67 = t;
  t = SSL_printnl(p_67, q_67);
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_33), m_67), term_l_33), n_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_16;
  r_67 = t;
  t = SSL_exit(r_67);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  c_68 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_68;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_68 = ATgetArgument(t, 0);
          {
            ATerm w_17 = NULL,l_13 = NULL;
            t = SSLgetAnnotations(c_68);
            w_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_68);
            l_13 = t;
            t = SSLsetAnnotations(l_13, w_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_68;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_67 = NULL,v_67 = NULL;
      t = term_i_13;
      u_67 = t;
      t = term_p_33;
      v_67 = t;
      t = term_q_33;
      t = l_10(u_67, v_67, t);
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = fetch_1_0(l_11, t);
    }
  t = n_93(t);
  return(t);
}
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm t)
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
        ATerm e_18 = NULL,h_18 = NULL,i_18 = NULL,o_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_68 = ATgetFirst((ATermList) t);
            r_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_68);
        e_18 = t;
        t = q_68;
        t = p_79(t);
        h_18 = t;
        t = r_68;
        t = s_68(t);
        i_18 = t;
        t = (ATerm) ATinsert(CheckATermList(i_18), h_18);
        o_13 = t;
        t = SSLsetAnnotations(o_13, e_18);
      }
    return(t);
  }
  t = s_68(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_68 = ATgetFirst((ATermList) t);
      w_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_69 = NULL,b_69 = NULL;
        static ATerm m_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_69)), not_null(b_69));
          return(t);
        }
        t = w_68;
        t = i_0(t);
        if(((a_69 != NULL) && (a_69 != t)))
          _fail(t);
        else
          a_69 = t;
        t = v_68;
        t = g_0(t);
        if(((b_69 != NULL) && (b_69 != t)))
          _fail(t);
        else
          b_69 = t;
        t = w_68;
        t = reverse_acc_2_0(g_0, m_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,s_13 = NULL;
  j_69 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_69);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_69);
  s_13 = t;
  t = SSLsetAnnotations(s_13, h_69);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_69), term_r_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL;
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_69 = NULL,g_69 = NULL;
      t = term_i_13;
      f_69 = t;
      t = term_o_32;
      g_69 = t;
      t = term_t_32;
      t = l_10(f_69, g_69, t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = fetch_1_0(n_11, t);
    }
  t = term_u_33;
  t = echo_0_0(t);
  t = term_n_30;
  d_69 = t;
  t = term_o_30;
  e_69 = t;
  t = term_v_33;
  t = l_10(d_69, e_69, t);
  t = reverse_acc_2_0(_id, o_11, t);
  t = map_1_0(q_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  static ATerm i_70 (ATerm t)
  {
    ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
    f_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_70 = ATgetFirst((ATermList) t);
        h_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_18 = NULL,j_19 = NULL,u_13 = NULL;
          t = SSLgetAnnotations(f_70);
          u_18 = t;
          t = g_70;
          t = z_79(t);
          j_19 = t;
          t = (ATerm) ATinsert(CheckATermList(h_70), j_19);
          u_13 = t;
          t = SSLsetAnnotations(u_13, u_18);
          LocalPopChoice(z_33);
        }
      else
        {
          t = x_33;
          {
            ATerm w_19 = NULL,c_20 = NULL,v_13 = NULL;
            t = SSLgetAnnotations(f_70);
            w_19 = t;
            t = h_70;
            t = i_70(t);
            c_20 = t;
            t = (ATerm) ATinsert(CheckATermList(c_20), g_70);
            v_13 = t;
            t = SSLsetAnnotations(v_13, w_19);
          }
        }
    }
    return(t);
  }
  t = i_70(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_34 = ATgetFirst((ATermList) t);
                ATerm d_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_70;
          }
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATinsert(ATempty, m_70);
      }
  }
  n_70 = t;
  t = term_m_13;
  o_70 = t;
  t = SSL_printnl(o_70, n_70);
  t = m_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  t = term_i_13;
  s_70 = t;
  t = term_o_32;
  t_70 = t;
  t = term_t_32;
  t = l_10(s_70, t_70, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL;
  t = term_e_34;
  u_70 = t;
  t = term_h_15;
  v_70 = t;
  t = term_f_34;
  t = o_10(u_70, v_70, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  t = term_e_34;
  y_70 = t;
  t = term_h_15;
  z_70 = t;
  t = term_f_34;
  t = o_10(y_70, z_70, t);
  t = term_h_34;
  w_70 = t;
  t = term_h_15;
  x_70 = t;
  t = term_i_34;
  t = o_10(w_70, x_70, t);
  t = term_j_34;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_11, z_11, a_12, t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = l_34;
      t = Option_3_0(b_12, c_12, d_12, t);
    }
  return(t);
}
static ATerm o_10 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm a_71 = NULL;
  t = term_i_13;
  a_71 = t;
  t = SSL_table_put(a_71, i_33, j_33);
  t = (ATerm) ATmakeAppl(sym__3, term_i_13, i_33, j_33);
  return(t);
}
static ATerm m_10 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            ATerm t_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
        t = l_10(m_20, n_20, t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATempty;
      }
  }
  d_71 = t;
  t = (ATerm) ATinsert(CheckATermList(d_71), l_20);
  e_71 = t;
  t = SSL_table_put(m_20, n_20, e_71);
  t = c_71;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
      t = term_h_15;
      t = e_0(t);
      m_71 = t;
      t = term_n_30;
      n_71 = t;
      t = term_o_30;
      o_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_o_30, m_71);
      t = m_10(n_71, o_71, m_71, t);
      _fail(t);
    }
  else
    {
      ATerm r_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_71 = ATgetFirst((ATermList) t);
          l_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_71;
      t = c_0(t);
      t = term_h_15;
      t = d_0(t);
      r_71 = t;
      t = (ATerm) ATinsert(CheckATermList(l_71), r_71);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,x_71 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,h_17 = NULL;
  d_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_71 = ATgetFirst((ATermList) t);
      x_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_72);
  s_71 = t;
  t = t_71;
  t = y_65(t);
  b_72 = t;
  t = x_71;
  t = z_65(t);
  c_72 = t;
  t = (ATerm) ATinsert(CheckATermList(c_72), b_72);
  h_17 = t;
  t = SSLsetAnnotations(h_17, s_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,n_72 = NULL,o_72 = NULL,r_21 = NULL;
  i_72 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_34;
        t = l_95(t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
      }
  }
  t = i_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_72 = ATgetFirst((ATermList) t);
      l_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_72);
  j_72 = t;
  t = term_o_32;
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_32, k_72);
  t = o_10(o_72, k_72, t);
  t = l_72;
  {
    static ATerm z_72 (ATerm t)
    {
      ATerm y_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_35 = t;
          int b_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_72 = NULL;
              r_72 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_72;
              LocalPopChoice(b_35);
            }
          else
            {
              t = a_35;
              t = l_95(t);
              t = Cons_2_0(_id, z_72, t);
            }
          LocalPopChoice(z_34);
        }
      else
        {
          t = y_34;
          {
            ATerm v_72 = NULL,w_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_72 = ATgetFirst((ATermList) t);
                w_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_72), (ATerm) ATmakeAppl(sym_Undefined_1, v_72));
          }
        }
      return(t);
    }
    t = z_72(t);
  }
  n_72 = t;
  t = (ATerm) ATinsert(CheckATermList(n_72), (ATerm) ATmakeAppl(sym_Program_1, k_72));
  r_21 = t;
  t = SSLsetAnnotations(r_21, j_72);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm l_73 = NULL;
  l_73 = t;
  if(match_string(t, "--help"))
    {
      t = l_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_73;
        }
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm m_73 = NULL,o_73 = NULL;
  t = term_p_33;
  m_73 = t;
  t = term_h_15;
  o_73 = t;
  t = term_e_35;
  t = o_10(m_73, o_73, t);
  t = term_i_35;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_j_35;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  g_73 = t;
  t = term_n_30;
  i_73 = t;
  t = term_o_30;
  j_73 = t;
  t = (ATerm) ATempty;
  k_73 = t;
  t = SSL_table_put(i_73, j_73, k_73);
  t = g_73;
  {
    static ATerm e_12 (ATerm t)
    {
      ATerm k_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_95(t);
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
                t = Option_3_0(f_12, h_12, i_12, t);
                LocalPopChoice(o_35);
              }
            else
              {
                t = n_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_12, t);
  }
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_73 = NULL;
        z_73 = t;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_20 = NULL;
              t = z_73;
              {
                ATerm x_35 = t;
                int y_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_20 = NULL,u_20 = NULL;
                    t = term_i_13;
                    t_20 = t;
                    t = term_p_33;
                    u_20 = t;
                    t = term_q_33;
                    t = l_10(t_20, u_20, t);
                    LocalPopChoice(y_35);
                  }
                else
                  {
                    t = x_35;
                    t = fetch_1_0(j_12, t);
                  }
              }
              t = z_73;
              t = default_system_usage_0_0(t);
              t = term_o_16;
              q_20 = t;
              t = SSL_exit(q_20);
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              {
                ATerm j_21 = NULL,n_21 = NULL,p_21 = NULL;
                t = term_i_13;
                n_21 = t;
                t = term_e_34;
                p_21 = t;
                t = term_e_36;
                t = l_10(n_21, p_21, t);
                t = z_73;
                t = default_system_about_0_0(t);
                t = term_o_16;
                j_21 = t;
                t = SSL_exit(j_21);
              }
            }
        }
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        {
          ATerm k_36 = t;
          int l_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
              static ATerm k_12 (ATerm t)
              {
                ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,x_21 = NULL;
                f_74 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_74 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_74);
                d_74 = t;
                t = e_74;
                if(((e_73 != NULL) && (e_73 != t)))
                  _fail(t);
                else
                  e_73 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_74);
                x_21 = t;
                t = SSLsetAnnotations(x_21, d_74);
                return(t);
              }
              t = fetch_1_0(k_12, t);
              t = term_t_13;
              b_74 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_73)), term_m_36);
              c_74 = t;
              t = SSL_printnl(b_74, c_74);
              t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_73)), term_m_36));
              t = default_system_usage_0_0(t);
              t = term_m_17;
              a_74 = t;
              t = SSL_exit(a_74);
              LocalPopChoice(l_36);
            }
          else
            {
              t = k_36;
            }
        }
      }
  }
  f_73 = t;
  t = term_n_30;
  h_73 = t;
  t = SSL_table_destroy(h_73);
  t = f_73;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL;
  t = parse_options_1_0(p_93, t);
  k_74 = t;
  t = term_q_36;
  n_74 = t;
  t = SSL_table_create(n_74);
  t = term_q_36;
  l_74 = t;
  t = term_t_36;
  m_74 = t;
  t = SSL_table_put(l_74, m_74, k_74);
  t = k_74;
  t = r_93(t);
  {
    ATerm u_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_93, t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = u_36;
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_93(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = xtc_temp_files_1_0(m_12, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
      t = term_i_13;
      u_74 = t;
      t = term_o_31;
      v_74 = t;
      t = term_c_37;
      t = l_10(u_74, v_74, t);
      t_74 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_74);
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      t = term_q_13;
    }
  t = read_from_0_0(t);
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_74, term_o_16);
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        {
          ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL;
          t = term_t_13;
          x_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_74, term_o_16)), term_z_17);
          y_74 = t;
          t = SSL_printnl(x_74, y_74);
          t = term_m_17;
          w_74 = t;
          t = SSL_exit(w_74);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_74, term_o_16)), term_z_17);
        }
      }
  }
  s_74 = t;
  t = SSL_explode_term(s_74);
  if(match_cons(t, sym__2))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
          {
            r_74 = ATgetFirst((ATermList) i_37);
            {
              ATerm j_37 = (ATerm) ATgetNext((ATermList) i_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_74, term_o_37);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, l_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
