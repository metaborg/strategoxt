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
ATerm term_j_38;
ATerm term_z_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_x_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_u_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_f_33;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_25;
ATerm term_b_20;
ATerm term_q_19;
ATerm term_b_19;
ATerm term_x_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_x_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_u_14);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_l_16);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_16);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_l_15);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_l_15);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_h_33);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_n_31);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_c_34);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_j_31);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_x_34, term_l_15);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_l_15);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_l_15);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_x_34);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_e_32);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm s_10 (ATerm c_41, ATerm d_41, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm i_75 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm h_80 (ATerm), ATerm t);
static ATerm t_3 (ATerm c_3, ATerm t);
static ATerm u_3 (ATerm f_3, ATerm k_3, ATerm l_3, ATerm t);
static ATerm f_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm i_9 (ATerm n_92 (ATerm), ATerm s_35, ATerm q_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm l_10 (ATerm t_81 (ATerm), ATerm a_27, ATerm b_289, ATerm t);
ATerm at_suffix_1_0 (ATerm f_82 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_81 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm y_106 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm m_10 (ATerm q_18, ATerm r_18, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm j_9 (ATerm t_14, ATerm r_14, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm k_9 (ATerm l_14, ATerm p_14, ATerm m_14, ATerm t);
static ATerm l_9 (ATerm m_26, ATerm n_26, ATerm t);
static ATerm m_9 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm k_15, ATerm j_15, ATerm t);
static ATerm n_9 (ATerm o_73 (ATerm), ATerm f_15, ATerm d_15, ATerm g_15, ATerm e_15, ATerm t);
ATerm foldl_1_0 (ATerm v_88 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm t_73 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm p_9 (ATerm g_58, ATerm h_58, ATerm t);
static ATerm r_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm d_1, ATerm t_0, ATerm t);
ATerm thread_map_1_0 (ATerm h_89 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_89 (ATerm), ATerm t);
static ATerm s_9 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t);
static ATerm c_20 (ATerm h_19, ATerm t);
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
static ATerm u_9 (ATerm m_54, ATerm n_54, ATerm o_54, ATerm t);
static ATerm v_9 (ATerm s_58, ATerm t_58, ATerm t);
static ATerm w_9 (ATerm y_58, ATerm z_58, ATerm t);
static ATerm x_9 (ATerm y_54, ATerm z_54, ATerm u_54, ATerm t);
static ATerm y_9 (ATerm f_55, ATerm d_55, ATerm e_55, ATerm t);
static ATerm z_9 (ATerm q_54, ATerm r_54, ATerm s_54, ATerm t);
static ATerm j_26 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm k_26 (ATerm x_24, ATerm y_24, ATerm t);
static ATerm l_26 (ATerm j_25, ATerm m_25, ATerm t);
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
static ATerm f_10 (ATerm z_16, ATerm y_16, ATerm u_16, ATerm w_16, ATerm t_16, ATerm t);
ATerm genzip_4_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_82 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_36 (ATerm b_36, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm FitToMax_1_0 (ATerm s_73 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm v_57 (ATerm m_48, ATerm n_48, ATerm o_48, ATerm p_48, ATerm q_48, ATerm t);
static ATerm x_57 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm t);
static ATerm y_57 (ATerm s_50, ATerm t_50, ATerm u_50, ATerm v_50, ATerm t);
static ATerm c_58 (ATerm t_52, ATerm u_52, ATerm v_52, ATerm w_52, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm j_59 (ATerm x_58, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_10 (ATerm o_25, ATerm t);
static ATerm o_10 (ATerm v_56, ATerm w_56, ATerm t);
static ATerm p_10 (ATerm t_34, ATerm u_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_61 (ATerm z_59, ATerm t);
static ATerm p_61 (ATerm i_60, ATerm j_60, ATerm k_60, ATerm t);
static ATerm q_61 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm t);
static ATerm q_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm r_10 (ATerm k_34, ATerm l_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_10 (ATerm f_22, ATerm g_22, ATerm t);
static ATerm t_10 (ATerm r_20, ATerm s_20, ATerm t);
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm o_74 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_10 (ATerm a_58, ATerm b_58, ATerm t);
ATerm foldr_2_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_91 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm need_help_1_0 (ATerm q_95 (ATerm), ATerm t);
static ATerm d_11 (ATerm e_24, ATerm f_24, ATerm g_24, ATerm t);
static ATerm e_11 (ATerm h_24, ATerm i_24, ATerm t);
ATerm lookup_table_0_1 (ATerm y_21, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_24, ATerm n_24, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_10 (ATerm j_24, ATerm k_24, ATerm t);
static ATerm x_10 (ATerm o_24, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_81 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_81 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm c_11 (ATerm c_35, ATerm d_35, ATerm t);
static ATerm a_11 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_97 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm parse_options_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
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
    ATerm x_12 = t;
    int z_12 = stack_ptr;
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
        t = s_10(t_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
        LocalPopChoice(z_12);
      }
    else
      {
        t = x_12;
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = s_1;
              t = o_0(t);
              u_0 = t;
              {
                ATerm f_13 = t;
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
                    t = f_13;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, t_1, u_0);
              t = s_10(t_1, u_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
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
static ATerm s_10 (ATerm c_41, ATerm d_41, ATerm t)
{
  t = SSL_copy(c_41, d_41);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm k_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL,m_2 = NULL;
      t = term_o_13;
      l_2 = t;
      t = term_p_13;
      m_2 = t;
      t = term_q_13;
      t = z_10(l_2, m_2, t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = k_13;
      t = term_r_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_1 = NULL,i_1 = NULL;
      t = term_p_13;
      {
        ATerm s_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,o_1 = NULL;
            t = term_o_13;
            j_1 = t;
            t = term_p_13;
            o_1 = t;
            t = term_q_13;
            t = z_10(j_1, o_1, t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = s_13;
            t = term_r_13;
          }
      }
      e_1 = t;
      t = term_v_13;
      i_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_13, e_1);
      t = s_10(i_1, e_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_75 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(i_75, t);
    return(t);
  }
  t = i_75(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,r_2 = NULL,w_2 = NULL;
  o_2 = t;
  t = h_80(t);
  p_2 = t;
  t = term_x_13;
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
    ATerm y_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_14 = ATgetArgument(t, 0);
            ATerm d_14 = ATgetArgument(t, 1);
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
  }
  t = term_f_14;
  t = debug_1_0(f_0, t);
  t = (ATerm) ATmakeAppl(sym__2, c_3, term_h_14);
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
  t = term_i_14;
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
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_3(q_3, t);
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
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
static ATerm i_9 (ATerm n_92 (ATerm), ATerm s_35, ATerm q_35, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  y_3 = t;
  t = n_92(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_3, s_35, q_35);
  t = a_11(v_3, s_35, q_35, t);
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 = NULL;
        t = term_u_14;
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, term_u_14);
        t = z_10(v_3, d_4, t);
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
  t = (ATerm) ATmakeAppl(sym__3, v_3, term_u_14, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(w_3), s_35)));
  t = lookup_table_0_1(v_3, t);
  c_4 = t;
  t = term_u_14;
  z_3 = t;
  t = (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(w_3), s_35));
  a_4 = t;
  t = c_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(z_3, a_4, b_4, t);
  t = y_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 = NULL,z_1 = NULL;
      m_4 = t;
      t = term_x_14;
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, term_x_14);
      t = o_10(m_4, z_1, t);
      f_4 = t;
      t = SSL_mkstemp(f_4);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm n_4 = NULL;
        t = term_y_14;
        n_4 = t;
        t = SSL_perror(n_4);
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
  t = term_z_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  t = P__tmpdir_0_0(t);
  t_4 = t;
  t = term_i_15;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_i_15);
  t = o_10(t_4, u_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_15;
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, term_l_15);
  t = i_9(j_0, r_4, s_4, t);
  t = SSL_close(q_4);
  t = r_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  x_4 = t;
  t = xtc_new_file_0_0(t);
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_4, term_h_14);
  t = open_file_0_0(t);
  t = x_4;
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm e_5 = NULL;
      e_5 = t;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,h_2 = NULL;
            t = SSL_is_string(e_5);
            c_2 = t;
            t = (ATerm) ATinsert(ATempty, c_2);
            h_2 = t;
            t = SSL_print(y_4, h_2);
            t = c_2;
            LocalPopChoice(n_15);
          }
        else
          {
            t = m_15;
            t = e_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(m_0, t);
  }
  t = SSL_close_file(y_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_4);
  return(t);
}
static ATerm l_10 (ATerm t_81 (ATerm), ATerm a_27, ATerm b_289, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm o_40 = NULL;
    o_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_27, o_40);
    t = t_81(t);
    t = o_40;
    return(t);
  }
  t = b_289;
  t = SRTS_one(p_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  static ATerm f_41 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_82(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,g_8 = NULL,l_8 = NULL,c_1 = NULL;
          z_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_41 = ATgetFirst((ATermList) t);
              b_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_40);
          g_8 = t;
          t = b_41;
          t = f_41(t);
          l_8 = t;
          t = (ATerm) ATinsert(CheckATermList(l_8), a_41);
          c_1 = t;
          t = SSLsetAnnotations(c_1, g_8);
        }
      }
    return(t);
  }
  t = f_41(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm j_41 = NULL,k_41 = NULL,n_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,h_1 = NULL,g_1 = NULL;
    u_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_41 = ATgetFirst((ATermList) t);
        r_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_41);
    p_41 = t;
    t = q_41;
    t = x_81(t);
    s_41 = t;
    t = (ATerm) ATinsert(CheckATermList(r_41), s_41);
    g_1 = t;
    t = SSLsetAnnotations(g_1, p_41);
    t_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_41 = ATgetFirst((ATermList) t);
        n_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_41);
    j_41 = t;
    t = n_41;
    if(((h_41 != NULL) && (h_41 != t)))
      _fail(t);
    else
      h_41 = t;
    t = (ATerm) ATinsert(CheckATermList(n_41), k_41);
    h_1 = t;
    t = SSLsetAnnotations(h_1, j_41);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(q_0, t);
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, not_null(h_41));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm i_42 = NULL,l_42 = NULL;
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(y_106, t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm f_42 = NULL;
        f_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_42, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      i_42 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_42;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_15 = ATgetFirst((ATermList) t);
              ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_42;
          t = list_tokenize_1_0(y_106, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm y_15 = ATgetFirst((ATermList) t);
          ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_42;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, i_42);
        }
      else
        {
          ATerm w_42 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_16 = ATgetFirst((ATermList) t);
              ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_42;
          t = list_tokenize_1_0(y_106, t);
          w_42 = t;
          t = (ATerm) ATinsert(CheckATermList(w_42), i_42);
        }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
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
static ATerm y_0 (ATerm t)
{
  ATerm i_43 = NULL;
  i_43 = t;
  t = SSL_implode_string(i_43);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,m_1 = NULL;
  e_43 = t;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_43);
  a_43 = t;
  t = SSL_explode_string(c_43);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_43, d_43);
  m_1 = t;
  t = SSLsetAnnotations(m_1, a_43);
  if(match_cons(t, sym__2))
    {
      y_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_42;
  {
    static ATerm r_0 (ATerm t)
    {
      ATerm f_43 = NULL;
      f_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_43, y_42);
      t = l_10(s_0, f_43, y_42, t);
      return(t);
    }
    t = list_tokenize_1_0(r_0, t);
  }
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm m_10 (ATerm q_18, ATerm r_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_i_16), q_18);
  t = string_tokenize_0_0(t);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_43 = NULL,r_43 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_l_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_43 = ATgetFirst((ATermList) t);
                r_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(q_43);
          }
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        {
          ATerm s_43 = NULL,t_43 = NULL;
          t = last_0_0(t);
          t_43 = t;
          t = SSL_strlen(t_43);
          s_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_43, r_18);
          t = p_9(s_43, r_18, t);
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm m_16 = t;
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
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_43, w_43);
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = SSL_gtr(v_43, w_43);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_16;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_43 = NULL,y_43 = NULL;
      t = term_o_13;
      x_43 = t;
      t = term_x_16;
      y_43 = t;
      t = term_a_17;
      t = z_10(x_43, y_43, t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = p_16;
      t = term_b_17;
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
static ATerm j_9 (ATerm t_14, ATerm r_14, ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL,p_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  t = t_14;
  {
    ATerm f_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(z_0, t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = f_17;
        t = term_l_16;
      }
  }
  a_6 = t;
  t = term_j_17;
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_6, term_j_17);
  t = u_10(a_6, b_6, t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_5, term_i_16);
  t = copy_char_0_0(t);
  j_5 = t;
  t = t_14;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(a_1, t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = term_l_16;
      }
  }
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, term_n_17);
  t = copy_char_0_0(t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_14, term_n_17);
  t = copy_char_0_0(t);
  l_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_5), k_5), j_5);
  n_5 = t;
  t = SSL_concat_strings(n_5);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm j_6 = NULL,n_6 = NULL;
  n_6 = t;
  t = SSL_explode_term(n_6);
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_17 = ATgetArgument(t, 1);
        if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
          {
            j_6 = ATgetFirst((ATermList) p_17);
            {
              ATerm q_17 = (ATerm) ATgetNext((ATermList) p_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_6;
  return(t);
}
static ATerm k_9 (ATerm l_14, ATerm p_14, ATerm m_14, ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,h_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_14, m_14);
  t = j_9(l_14, m_14, t);
  d_6 = t;
  t = p_14;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_14;
  t = map_1_0(f_1, t);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_6, h_6);
  t = l_9(d_6, h_6, t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_6, c_6);
  return(t);
}
static ATerm l_9 (ATerm m_26, ATerm n_26, ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  t = n_26;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_26;
    }
  else
    {
      ATerm x_2 = NULL,a_3 = NULL,p_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_7 = ATgetFirst((ATermList) t);
          l_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_26);
      x_2 = t;
      t = l_7;
      {
        static ATerm h_3 (ATerm t)
        {
          ATerm s_17 = t;
          int t_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_3 = NULL;
              b_3 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_3;
              LocalPopChoice(t_17);
            }
          else
            {
              t = s_17;
              {
                ATerm e_3 = NULL;
                t = Cons_2_0(_id, h_3, t);
                e_3 = t;
                t = (ATerm) ATinsert(CheckATermList(e_3), m_26);
              }
            }
          return(t);
        }
        t = h_3(t);
      }
      a_3 = t;
      t = (ATerm) ATinsert(CheckATermList(a_3), k_7);
      p_1 = t;
      t = SSLsetAnnotations(p_1, x_2);
    }
  return(t);
}
static ATerm m_9 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm k_15, ATerm j_15, ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,v_7 = NULL,w_7 = NULL,y_7 = NULL;
  t = term_l_15;
  t = q_73(t);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_15, y_7);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        {
          ATerm z_7 = NULL,a_8 = NULL,e_8 = NULL;
          t = term_x_13;
          a_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_15, y_7)), term_x_17);
          e_8 = t;
          t = SSL_printnl(a_8, e_8);
          t = term_j_17;
          z_7 = t;
          t = SSL_exit(z_7);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_15, y_7)), term_x_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      q_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_15;
  t = p_73(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, w_7);
  t = u_10(r_7, w_7, t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, q_7), v_7));
  return(t);
}
static ATerm n_9 (ATerm o_73 (ATerm), ATerm f_15, ATerm d_15, ATerm g_15, ATerm e_15, ATerm t)
{
  ATerm f_8 = NULL,i_8 = NULL,j_8 = NULL,m_8 = NULL,q_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        {
          ATerm r_8 = NULL,u_8 = NULL,v_8 = NULL;
          t = term_x_13;
          u_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_15, g_15)), term_x_17);
          v_8 = t;
          t = SSL_printnl(u_8, v_8);
          t = term_j_17;
          r_8 = t;
          t = SSL_exit(r_8);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_15, g_15)), term_x_17);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_15;
  t = get_width_0_0(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, q_8);
  t = leq_0_0(t);
  t = term_l_15;
  t = o_73(t);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, m_8);
  t = u_10(i_8, m_8, t);
  j_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_15), f_8), j_8));
  return(t);
}
ATerm foldl_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  static ATerm h_11 (ATerm t)
  {
    ATerm h_9 = NULL,q_9 = NULL,t_9 = NULL,d_10 = NULL;
    if(match_cons(t, sym__2))
      {
        h_9 = ATgetArgument(t, 0);
        d_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = h_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_10;
      }
    else
      {
        ATerm f_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_9 = ATgetFirst((ATermList) t);
            t_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_9, d_10);
        t = v_88(t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, f_11);
        t = h_11(t);
      }
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm i_11 = NULL;
  static ATerm k_1 (ATerm t)
  {
    ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,o_11 = NULL,p_11 = NULL,w_1 = NULL;
    p_11 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        k_11 = ATgetArgument(t, 0);
        l_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_11);
    j_11 = t;
    t = k_11;
    t = t_73(t);
    o_11 = t;
    t = l_11;
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, o_11, l_11);
    w_1 = t;
    t = SSLsetAnnotations(w_1, j_11);
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = SSL_string_to_int(not_null(i_11));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  t = copy_0_0(t);
  q_11 = t;
  t = SSL_implode_string(q_11);
  return(t);
}
static ATerm p_9 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_58, h_58);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = SSL_subtr(g_58, h_58);
    }
  return(t);
}
static ATerm r_9 (ATerm v_0 (ATerm), ATerm b_1 (ATerm), ATerm x_0, ATerm d_1, ATerm t_0, ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_0, t_0);
  t = v_0(t);
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, r_11);
  t = b_1(t);
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_11), u_11), t_11);
  return(t);
}
ATerm thread_map_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  static ATerm t_12 (ATerm t)
  {
    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,g_12 = NULL,h_12 = NULL;
    b_12 = t;
    if(match_cons(t, sym__2))
      {
        g_12 = ATgetArgument(t, 0);
        h_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_12;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_11 = ATgetFirst((ATermList) t);
        a_12 = (ATerm) ATgetNext((ATermList) t);
        t = b_12;
        t = r_9(h_89, t_12, z_11, a_12, h_12, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_12);
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm e_18 = t;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,i_13 = NULL,j_13 = NULL;
      g_13 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_13;
        }
      else
        {
          ATerm k_4 = NULL,d_2 = NULL;
          if(match_cons(t, sym_H_2))
            {
              i_13 = ATgetArgument(t, 0);
              j_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_13);
          k_4 = t;
          t = i_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, i_13, j_13);
          d_2 = t;
          t = SSLsetAnnotations(d_2, k_4);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_18;
    }
  return(t);
}
ATerm filter_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,t_15 = NULL,z_15 = NULL;
  c_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_15 = ATgetFirst((ATermList) t);
          z_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL,u_5 = NULL,v_5 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(c_15);
            r_5 = t;
            t = t_15;
            t = u_89(t);
            u_5 = t;
            t = z_15;
            t = filter_1_0(u_89, t);
            v_5 = t;
            t = (ATerm) ATinsert(CheckATermList(v_5), u_5);
            f_2 = t;
            t = SSLsetAnnotations(f_2, r_5);
            LocalPopChoice(h_18);
          }
        else
          {
            t = f_18;
            t = z_15;
            t = filter_1_0(u_89, t);
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,s_16 = NULL,m_17 = NULL,d_18 = NULL,i_2 = NULL;
  t = c_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_16 = ATgetFirst((ATermList) t);
      s_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_16, a_16);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm k_18 = NULL,l_18 = NULL,s_18 = NULL;
          t = term_x_13;
          l_18 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_16, a_16)), term_x_17);
          s_18 = t;
          t = SSL_printnl(l_18, s_18);
          t = term_j_17;
          k_18 = t;
          t = SSL_exit(k_18);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_16, a_16)), term_x_17);
        }
      }
  }
  m_17 = t;
  t = s_16;
  {
    static ATerm l_1 (ATerm t)
    {
      ATerm x_18 = NULL;
      x_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_18, b_16);
      {
        ATerm m_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(o_18);
          }
        else
          {
            t = m_18;
            {
              ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
              t = term_x_13;
              z_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_18, b_16)), term_x_17);
              a_19 = t;
              t = SSL_printnl(z_18, a_19);
              t = term_j_17;
              y_18 = t;
              t = SSL_exit(y_18);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_18, b_16)), term_x_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(l_1, t);
  }
  d_18 = t;
  t = (ATerm) ATinsert(CheckATermList(d_18), m_17);
  i_2 = t;
  t = SSLsetAnnotations(i_2, g_16);
  return(t);
}
static ATerm c_20 (ATerm h_19, ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,l_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,g_4 = NULL;
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
      s_19 = ATgetFirst((ATermList) t);
      t_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  l_19 = t;
  t = t_19;
  t = Cons_2_0(n_1, q_1, t);
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), s_19);
  g_4 = t;
  t = SSLsetAnnotations(g_4, l_19);
  v_19 = t;
  t = SSL_mkterm(i_19, v_19);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm p_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19 = NULL;
      y_19 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_19;
      LocalPopChoice(v_18);
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
      ATerm z_19 = NULL;
      z_19 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_19;
        }
      else
        {
          t = c_20(z_19, t);
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
  ATerm u_20 = NULL,v_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_20 = ATgetFirst((ATermList) t);
      v_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_19;
  return(t);
}
static ATerm a_2 (ATerm t)
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
static ATerm b_2 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL,d_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if(match_cons(c_19, sym__2))
        {
          a_21 = ATgetArgument(c_19, 0);
          c_21 = ATgetArgument(c_19, 1);
        }
      else
        _fail(t);
      {
        ATerm d_19 = ATgetArgument(t, 1);
        if(match_cons(d_19, sym__2))
          {
            d_21 = ATgetArgument(d_19, 0);
            g_21 = ATgetArgument(d_19, 1);
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
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(v_1, t);
      t = (ATerm) ATempty;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,o_20 = NULL,t_20 = NULL,i_4 = NULL;
        t = map_1_0(x_1, t);
        t = genzip_4_0(y_1, a_2, b_2, _id, t);
        t_20 = t;
        if(match_cons(t, sym__2))
          {
            j_20 = ATgetArgument(t, 0);
            k_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_20);
        i_20 = t;
        t = k_20;
        t = matrix_transpose_0_0(t);
        o_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_20, o_20);
        i_4 = t;
        t = SSLsetAnnotations(i_4, i_20);
        if(match_cons(t, sym__2))
          {
            g_20 = ATgetArgument(t, 0);
            h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_20), g_20);
      }
    }
  return(t);
}
static ATerm u_9 (ATerm m_54, ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm k_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, m_54, n_54, o_54);
  t = y_9(m_54, n_54, o_54, t);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, n_54);
  t = o_10(k_21, n_54, t);
  return(t);
}
static ATerm v_9 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm k_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(s_58, t_58);
      LocalPopChoice(m_19);
    }
  else
    {
      t = k_19;
      t = SSL_divr(s_58, t_58);
    }
  return(t);
}
static ATerm w_9 (ATerm y_58, ATerm z_58, ATerm t)
{
  t = SSL_mod(y_58, z_58);
  return(t);
}
static ATerm x_9 (ATerm y_54, ATerm z_54, ATerm u_54, ATerm t)
{
  ATerm m_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,x_21 = NULL,h_22 = NULL,i_22 = NULL;
  t = SSL_strlen(z_54);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_54, s_21);
  t = p_9(u_54, s_21, t);
  m_21 = t;
  {
    ATerm n_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        t = term_q_19;
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_21, term_q_19);
        t = w_9(m_21, j_22, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_21;
        LocalPopChoice(p_19);
        {
          ATerm k_22 = NULL,m_22 = NULL;
          t = term_q_19;
          m_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, term_q_19);
          t = v_9(m_21, m_22, t);
          k_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_22, k_22);
        }
      }
    else
      {
        t = n_19;
        {
          ATerm n_22 = NULL,o_22 = NULL,s_22 = NULL,t_22 = NULL,z_22 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,z_4 = NULL;
          t = term_j_17;
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, term_j_17);
          t = p_9(m_21, t_22, t);
          o_22 = t;
          t = term_q_19;
          s_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_22, term_q_19);
          t = v_9(o_22, s_22, t);
          n_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_22, n_22);
          d_23 = t;
          if(match_cons(t, sym__2))
            {
              ATerm r_19 = ATgetArgument(t, 0);
              ATerm w_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_23);
          z_22 = t;
          t = term_j_17;
          c_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_22, term_j_17);
          t = u_10(n_22, c_23, t);
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_23, n_22);
          z_4 = t;
          t = SSLsetAnnotations(z_4, z_22);
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
  t = u_10(s_21, q_21, t);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_54, z_54, h_22);
  t = y_9(y_54, z_54, h_22, t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
  t = u_10(s_21, t_21, t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_54, z_54, x_21);
  t = y_9(y_54, z_54, x_21, t);
  v_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_21), z_54), r_21);
  i_22 = t;
  t = SSL_concat_strings(i_22);
  return(t);
}
static ATerm y_9 (ATerm f_55, ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_strlen(d_55);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_55, e_23);
  t = p_9(e_55, e_23, t);
  {
    ATerm x_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL;
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, term_l_16);
        t = geq_0_0(t);
        t = j_23;
        LocalPopChoice(a_20);
        {
          ATerm k_23 = NULL;
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_23, f_55);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_19;
        t = term_b_20;
      }
  }
  return(t);
}
static ATerm z_9 (ATerm q_54, ATerm r_54, ATerm s_54, ATerm t)
{
  ATerm l_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, q_54, r_54, s_54);
  t = y_9(q_54, r_54, s_54, t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_54, l_23);
  t = o_10(r_54, l_23, t);
  return(t);
}
static ATerm j_26 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL;
  t = term_j_17;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, term_j_17);
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(b_24, w_24);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = SSL_gtr(b_24, w_24);
      }
  }
  t = c_24;
  if(match_cons(t, sym__3))
    {
      r_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
      t_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_9(r_24, s_24, t_24, t);
  return(t);
}
static ATerm k_26 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,i_25 = NULL;
  t = x_24;
  if(match_cons(t, sym__3))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
      i_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_9(d_25, e_25, i_25, t);
  return(t);
}
static ATerm l_26 (ATerm j_25, ATerm m_25, ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,s_25 = NULL;
  t = j_25;
  if(match_cons(t, sym__3))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_9(p_25, q_25, s_25, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm w_25 = NULL,y_25 = NULL,a_26 = NULL,b_26 = NULL,d_26 = NULL;
  y_25 = t;
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
    ATerm p_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm x_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_20);
        t = d_26;
        {
          ATerm b_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm f_21 = ATgetArgument(t, 0);
                  w_25 = ATgetArgument(t, 1);
                  {
                    ATerm h_21 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(e_21);
              t = a_26;
              if(match_int(t, 1))
                {
                  ATerm j_21 = t;
                  int l_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_26(a_26, d_26, y_25, t);
                      LocalPopChoice(l_21);
                    }
                  else
                    {
                      t = j_21;
                      t = w_25;
                    }
                }
              else
                {
                  t = j_26(a_26, d_26, y_25, t);
                }
            }
          else
            {
              t = b_21;
              t = a_26;
              t = j_26(a_26, d_26, y_25, t);
            }
        }
      }
    else
      {
        t = p_20;
        {
          ATerm p_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm w_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_21);
              t = a_26;
              t = k_26(d_26, y_25, t);
            }
          else
            {
              t = p_21;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm z_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_26;
              t = l_26(d_26, y_25, t);
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
  ATerm d_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,c_5 = NULL;
      i_27 = t;
      if(match_cons(t, sym__2))
        {
          g_27 = ATgetArgument(t, 0);
          h_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_27);
      f_27 = t;
      t = g_27;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_27;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_22 = ATgetFirst((ATermList) t);
              ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_27;
        }
      t = (ATerm) ATmakeAppl(sym__2, g_27, h_27);
      c_5 = t;
      t = SSLsetAnnotations(c_5, f_27);
      LocalPopChoice(l_22);
      t = conc_0_0(t);
    }
  else
    {
      t = d_22;
      {
        ATerm r_27 = NULL,u_27 = NULL;
        if(match_cons(t, sym__2))
          {
            r_27 = ATgetArgument(t, 0);
            u_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_27), r_27);
      }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27 = NULL;
      v_27 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_27;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_22 = ATgetFirst((ATermList) t);
              ATerm x_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_27;
        }
      LocalPopChoice(v_22);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = u_22;
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
  t = term_b_19;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      if(match_cons(y_22, sym__2))
        {
          t_29 = ATgetArgument(y_22, 0);
          u_29 = ATgetArgument(y_22, 1);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(match_cons(a_23, sym__2))
          {
            v_29 = ATgetArgument(a_23, 0);
            w_29 = ATgetArgument(a_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_29), t_29), (ATerm) ATinsert(CheckATermList(w_29), u_29));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_29 = NULL;
      t = flatten_list_0_0(t);
      y_29 = t;
      t = SSL_concat_strings(y_29);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 = NULL,o_6 = NULL;
      if(match_cons(t, sym__2))
        {
          m_6 = ATgetArgument(t, 0);
          o_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_6, o_6);
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(m_6, o_6);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = SSL_gtr(m_6, o_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, m_6, o_6);
      LocalPopChoice(i_23);
      {
        ATerm p_6 = NULL,q_6 = NULL;
        q_6 = t;
        t = SSL_explode_term(q_6);
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_23 = ATgetArgument(t, 1);
              if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
                {
                  p_6 = ATgetFirst((ATermList) p_23);
                  {
                    ATerm q_23 = (ATerm) ATgetNext((ATermList) p_23);
                  }
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
  else
    {
      t = h_23;
      {
        ATerm r_6 = NULL,s_6 = NULL;
        s_6 = t;
        t = SSL_explode_term(s_6);
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_23 = ATgetArgument(t, 1);
              if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
                {
                  ATerm t_23 = ATgetFirst((ATermList) s_23);
                  ATerm u_23 = (ATerm) ATgetNext((ATermList) s_23);
                  if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
                    {
                      r_6 = ATgetFirst((ATermList) u_23);
                      {
                        ATerm v_23 = (ATerm) ATgetNext((ATermList) u_23);
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
        t = r_6;
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
static ATerm f_10 (ATerm z_16, ATerm y_16, ATerm u_16, ATerm w_16, ATerm t_16, ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,n_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,y_28 = NULL,z_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,g_29 = NULL,h_5 = NULL,i_6 = NULL,k_6 = NULL;
  t = u_16;
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm i_29 = NULL;
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_29, w_16);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_0_0(t);
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
              t = term_x_13;
              o_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_29, w_16)), term_x_17);
              p_29 = t;
              t = SSL_printnl(o_29, p_29);
              t = term_j_17;
              n_29 = t;
              t = SSL_exit(n_29);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_29, w_16)), term_x_17);
            }
          }
      }
      return(t);
    }
    t = map_1_0(n_2, t);
  }
  t = genzip_4_0(q_2, s_2, t_2, _id, t);
  g_29 = t;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  y_28 = t;
  t = z_28;
  t = map_1_0(u_2, t);
  d_29 = t;
  t = c_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_23 = ATgetFirst((ATermList) t);
      k_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_6 = ATgetFirst((ATermList) t);
      {
        ATerm z_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_6, i_6);
  t = foldl_1_0(v_2, t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
  h_5 = t;
  t = SSLsetAnnotations(h_5, y_28);
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_28, w_16);
  t = p_9(i_28, w_16, t);
  n_28 = t;
  {
    ATerm a_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = term_j_17;
        i_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_j_17);
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_16, i_30);
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              t = SSL_gtr(y_16, i_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_j_17);
        LocalPopChoice(l_24);
        {
          ATerm j_30 = NULL,l_30 = NULL;
          t = z_16;
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
            ATerm u_24 = t;
            int v_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(y_2, t);
                LocalPopChoice(v_24);
              }
            else
              {
                t = u_24;
                t = term_j_17;
              }
          }
          j_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_30, term_n_17);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = a_24;
        t = term_b_20;
      }
  }
  s_28 = t;
  t = j_28;
  {
    static ATerm z_2 (ATerm t)
    {
      ATerm p_30 = NULL,q_30 = NULL;
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, y_16, z_16, (ATerm) ATmakeAppl(sym__3, term_n_17, q_30, n_28));
      t = align_column_0_0(t);
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_30, s_28);
      t = o_10(p_30, s_28, t);
      return(t);
    }
    t = map_1_0(z_2, t);
  }
  t_28 = t;
  t = SSL_strlen(s_28);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_28, i_28);
  t = u_10(v_28, i_28, t);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, (ATerm) ATinsert(CheckATermList(t_16), t_28));
  return(t);
}
ATerm genzip_4_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  static ATerm o_31 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_83(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,g_31 = NULL,h_31 = NULL,m_31 = NULL,u_6 = NULL;
          t = h_83(t);
          m_31 = t;
          if(match_cons(t, sym__2))
            {
              t_30 = ATgetArgument(t, 0);
              u_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_31);
          s_30 = t;
          t = t_30;
          t = j_83(t);
          g_31 = t;
          t = u_30;
          t = o_31(t);
          h_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_31, h_31);
          u_6 = t;
          t = SSLsetAnnotations(u_6, s_30);
          t = i_83(t);
        }
      }
    return(t);
  }
  t = o_31(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm x_31 = NULL;
  static ATerm w_32 (ATerm t)
  {
    ATerm z_31 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
    if(match_cons(t, sym__2))
      {
        z_31 = ATgetArgument(t, 0);
        g_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_32;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_32 = ATgetFirst((ATermList) t);
            i_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_31, h_32);
        t = f_106(t);
        s_32 = t;
        t = term_j_17;
        v_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_31, term_j_17);
        t = u_10(z_31, v_32, t);
        u_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_32, i_32);
        t = w_32(t);
        t_32 = t;
        t = (ATerm) ATinsert(CheckATermList(t_32), s_32);
      }
    return(t);
  }
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_17, x_31);
  t = w_32(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,g_33 = NULL;
  b_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_33;
      t = s_88(t);
    }
  else
    {
      ATerm k_33 = NULL,l_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_33;
      t = u_88(t);
      k_33 = t;
      t = g_33;
      t = foldr_3_0(s_88, t_88, u_88, t);
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      t = t_88(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  static ATerm i_35 (ATerm t)
  {
    ATerm a_35 = NULL,b_35 = NULL,g_35 = NULL;
    g_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_35 = ATgetFirst((ATermList) t);
        b_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_7 = NULL,m_7 = NULL,w_6 = NULL;
          t = SSLgetAnnotations(g_35);
          b_7 = t;
          t = b_35;
          t = i_35(t);
          m_7 = t;
          t = (ATerm) ATinsert(CheckATermList(m_7), a_35);
          w_6 = t;
          t = SSLsetAnnotations(w_6, b_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_35;
        t = b_82(t);
      }
    return(t);
  }
  t = i_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_33;
    }
  else
    {
      static ATerm d_3 (ATerm t)
      {
        t = not_null(t_33);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_33 = ATgetFirst((ATermList) t);
          if(((t_33 != NULL) && (t_33 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_33;
      t = at_end_1_0(d_3, t);
    }
  return(t);
}
static ATerm n_36 (ATerm b_36, ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_explode_term(b_36);
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym__2))
    {
      i_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
      {
        ATerm c_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_3 (ATerm t)
            {
              t = j_36;
              return(t);
            }
            t = i_36;
            t = at_end_1_0(g_3, t);
            LocalPopChoice(f_25);
          }
        else
          {
            t = c_25;
            t = n_36(k_36, t);
          }
      }
    }
  else
    {
      t = n_36(k_36, t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t)
{
  static ATerm o_36 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_79(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = m_79(t);
        t = o_36(t);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm for_3_0 (ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm t)
{
  t = o_79(t);
  t = while_not_2_0(p_79, q_79, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATempty);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm t_36 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      if(((ATgetType(k_25) != AT_INT) || (ATgetInt((ATermInt) k_25) != 0)))
        _fail(t);
      {
        ATerm l_25 = ATgetArgument(t, 1);
      }
      t_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_36;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,g_37 = NULL;
  if(match_cons(t, sym__3))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
      a_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_36, term_j_17);
  t = geq_0_0(t);
  t = term_j_17;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, term_j_17);
  t = p_9(y_36, g_37, t);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_37, z_36, (ATerm) ATinsert(CheckATermList(a_37), z_36));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(i_3, j_3, m_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_l_16;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(n_37, o_37, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm FitToMax_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  l_37 = t;
  t = foldr_3_0(n_3, o_3, p_3, t);
  i_37 = t;
  t = term_l_15;
  t = s_73(t);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, i_37);
  t = p_9(m_37, i_37, t);
  j_37 = t;
  {
    ATerm n_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL;
        t = term_l_16;
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_37, term_l_16);
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_37, p_37);
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              t = SSL_gtr(j_37, p_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_37, (ATerm) ATempty);
        t = copy_0_0(t);
        k_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_37, k_37);
        t = conc_0_0(t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = n_25;
        {
          ATerm v_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = l_37;
              LocalPopChoice(x_25);
            }
          else
            {
              t = v_25;
              {
                ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                t = term_x_13;
                v_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_37), term_z_25);
                w_37 = t;
                t = SSL_printnl(v_37, w_37);
                t = term_j_17;
                u_37 = t;
                t = SSL_exit(u_37);
                t = (ATerm) ATinsert(ATinsert(ATempty, l_37), term_z_25);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_26 = t;
  if((PushChoice() == 0))
    {
      ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,a_7 = NULL;
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
      a_7 = t;
      t = SSLsetAnnotations(a_7, a_40);
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
          t = reverse_acc_2_0(_id, e_4, t);
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
                    t = reverse_acc_2_0(_id, h_4, t);
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
  t = filter_1_0(j_4, t);
  return(t);
}
static ATerm v_57 (ATerm m_48, ATerm n_48, ATerm o_48, ATerm p_48, ATerm q_48, ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,e_49 = NULL,h_49 = NULL;
  t = o_48;
  t = construct_rows_0_0(t);
  t = map_1_0(l_4, t);
  {
    static ATerm o_4 (ATerm t)
    {
      static ATerm p_4 (ATerm t)
      {
        t = m_48;
        t = foldr_3_0(v_4, w_4, a_5, t);
        return(t);
      }
      t = FitToMax_1_0(p_4, t);
      return(t);
    }
    t = map_1_0(o_4, t);
  }
  t = matrix_transpose_0_0(t);
  t = reverse_acc_2_0(_id, b_5, t);
  t = map_with_index_1_0(_id, t);
  t = reverse_acc_2_0(_id, d_5, t);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, v_48);
  t = genzip_4_0(f_5, g_5, i_5, _id, t);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_48, (ATerm) ATmakeAppl(sym__2, p_48, (ATerm) ATempty));
  t = foldl_1_0(m_5, t);
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_48;
  t = reverse_acc_2_0(_id, o_5, t);
  t = matrix_transpose_0_0(t);
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm g_50 = NULL;
      g_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_50, e_49);
      return(t);
    }
    t = map_1_0(q_5, t);
  }
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_48, h_49, p_48);
  t = k_9(n_48, h_49, p_48, t);
  return(t);
}
static ATerm x_57 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,q_50 = NULL;
  t = h_50;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(s_5, t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = term_l_16;
      }
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_50, q_50);
  t = u_10(j_50, q_50, t);
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
      t = s_9(j_50, n_50, m_50, t);
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_50, r_50, j_50);
      t = k_9(h_50, r_50, j_50, t);
    }
  return(t);
}
static ATerm y_57 (ATerm s_50, ATerm t_50, ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm y_50 = NULL,a_51 = NULL,c_51 = NULL,h_51 = NULL,i_51 = NULL,k_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,t_51 = NULL,o_52 = NULL,p_52 = NULL,f_7 = NULL;
  t = s_50;
  {
    ATerm i_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(t_5, t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = i_26;
        t = term_j_17;
      }
  }
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_51, term_n_17);
  t = copy_char_0_0(t);
  a_51 = t;
  t = SSL_strlen(a_51);
  c_51 = t;
  t = t_50;
  t = filter_1_0(is_real_hbox_0_0, t);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_50, u_50);
  {
    static ATerm w_5 (ATerm t)
    {
      ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,d_7 = NULL;
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_0_0(t);
          LocalPopChoice(q_26);
        }
      else
        {
          t = p_26;
          {
            ATerm g_52 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
            g_52 = t;
            t = term_x_13;
            c_9 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_52), term_x_17);
            d_9 = t;
            t = SSL_printnl(c_9, d_9);
            t = term_j_17;
            b_9 = t;
            t = SSL_exit(b_9);
            t = (ATerm) ATinsert(ATinsert(ATempty, g_52), term_x_17);
          }
        }
      a_52 = t;
      if(match_cons(t, sym__2))
        {
          x_51 = ATgetArgument(t, 0);
          y_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_52);
      w_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_51, y_51);
      t = u_10(c_51, y_51, t);
      z_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_51, z_51);
      d_7 = t;
      t = SSLsetAnnotations(d_7, w_51);
      return(t);
    }
    t = thread_map_1_0(w_5, t);
  }
  t_51 = t;
  if(match_cons(t, sym__2))
    {
      k_51 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_51);
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_51, k_51);
  t = l_9(a_51, k_51, t);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_51, m_51);
  f_7 = t;
  t = SSLsetAnnotations(f_7, i_51);
  o_51 = t;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_10 = NULL,e_10 = NULL,g_10 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(o_51);
            a_10 = t;
            t = o_52;
            {
              ATerm t_26 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_26;
                }
            }
            e_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_52, c_51);
            t = p_9(p_52, c_51, t);
            g_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_10, g_10);
            h_7 = t;
            t = SSLsetAnnotations(h_7, a_10);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = o_51;
          }
      }
    }
  else
    {
      t = o_51;
    }
  return(t);
}
static ATerm c_58 (ATerm t_52, ATerm u_52, ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,i_53 = NULL,j_53 = NULL,n_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  t = t_52;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(x_5, t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = term_j_17;
      }
  }
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_53, term_n_17);
  t = copy_char_0_0(t);
  c_53 = t;
  t = t_52;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(y_5, t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = term_l_16;
      }
  }
  q_53 = t;
  t = term_j_17;
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_53, term_j_17);
  t = u_10(q_53, r_53, t);
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_53, term_i_16);
  t = copy_char_0_0(t);
  t = SSL_strlen(c_53);
  a_53 = t;
  t = t_52;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(f_6, t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = term_l_16;
      }
  }
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_52, j_53);
  t = u_10(v_52, j_53, t);
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_52)));
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm t_53 = NULL,u_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
      y_53 = t;
      if(match_cons(t, sym__2))
        {
          z_53 = ATgetArgument(t, 0);
          a_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_53 = ATgetFirst((ATermList) t);
          x_53 = (ATerm) ATgetNext((ATermList) t);
          t = t_53;
          if(match_cons(t, sym__2))
            {
              u_53 = ATgetArgument(t, 0);
              w_53 = ATgetArgument(t, 1);
              {
                ATerm b_27 = t;
                int c_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm l_6 (ATerm t)
                    {
                      t = a_53;
                      return(t);
                    }
                    t = y_53;
                    t = n_9(l_6, z_53, u_53, w_53, x_53, t);
                    LocalPopChoice(c_27);
                  }
                else
                  {
                    t = b_27;
                    {
                      static ATerm t_6 (ATerm t)
                      {
                        t = a_53;
                        return(t);
                      }
                      static ATerm v_6 (ATerm t)
                      {
                        t = b_53;
                        return(t);
                      }
                      t = y_53;
                      t = m_9(t_6, v_6, z_53, a_54, t);
                    }
                  }
              }
            }
          else
            {
              static ATerm x_6 (ATerm t)
              {
                t = a_53;
                return(t);
              }
              static ATerm y_6 (ATerm t)
              {
                t = b_53;
                return(t);
              }
              t = y_53;
              t = m_9(x_6, y_6, z_53, a_54, t);
            }
        }
      else
        {
          static ATerm z_6 (ATerm t)
          {
            t = a_53;
            return(t);
          }
          static ATerm c_7 (ATerm t)
          {
            t = b_53;
            return(t);
          }
          t = y_53;
          t = m_9(z_6, c_7, z_53, a_54, t);
        }
      return(t);
    }
    t = foldl_1_0(g_6, t);
  }
  t = reverse_acc_2_0(_id, e_7, t);
  t = map_1_0(g_7, t);
  {
    static ATerm o_7 (ATerm t)
    {
      ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,e_56 = NULL,n_7 = NULL;
      e_56 = t;
      if(match_cons(t, sym__2))
        {
          z_55 = ATgetArgument(t, 0);
          a_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_56);
      y_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_53, z_55);
      t = l_9(c_53, z_55, t);
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_56, a_56);
      n_7 = t;
      t = SSLsetAnnotations(n_7, y_55);
      return(t);
    }
    t = map_1_0(o_7, t);
  }
  i_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_52, i_53, v_52);
  t = k_9(t_52, i_53, v_52, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm i_49 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_49;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(j_49, k_49, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_j_17;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
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
static ATerm g_5 (ATerm t)
{
  ATerm o_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(((ATgetType(k_27) == AT_LIST) && !(ATisEmpty(k_27))))
        {
          o_49 = ATgetFirst((ATermList) k_27);
          q_49 = (ATerm) ATgetNext((ATermList) k_27);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
          {
            r_49 = ATgetFirst((ATermList) l_27);
            s_49 = (ATerm) ATgetNext((ATermList) l_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_49, r_49), (ATerm) ATmakeAppl(sym__2, q_49, s_49));
  return(t);
}
static ATerm i_5 (ATerm t)
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
static ATerm m_5 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,c_50 = NULL,d_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(match_cons(m_27, sym__2))
        {
          x_49 = ATgetArgument(m_27, 0);
          {
            ATerm o_27 = ATgetArgument(m_27, 1);
            if(match_cons(o_27, sym__2))
              {
                y_49 = ATgetArgument(o_27, 0);
                z_49 = ATgetArgument(o_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(match_cons(n_27, sym__2))
          {
            c_50 = ATgetArgument(n_27, 0);
            d_50 = ATgetArgument(n_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_10(x_49, y_49, z_49, c_50, d_50, t);
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
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,i_7 = NULL;
  u_55 = t;
  if(match_cons(t, sym__2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_55);
  q_55 = t;
  t = r_55;
  t = reverse_acc_2_0(_id, j_7, t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_55, s_55);
  i_7 = t;
  t = SSLsetAnnotations(i_7, q_55);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,l_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,t_56 = NULL,u_56 = NULL,x_56 = NULL;
  q_56 = t;
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_56;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_20, x_56);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_56 = ATgetFirst((ATermList) t);
          u_56 = (ATerm) ATgetNext((ATermList) t);
          t = u_56;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_56, x_56);
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = abox2text_0_0(t);
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                {
                  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
                  t = term_x_13;
                  x_11 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_56, x_56)), term_x_17);
                  y_11 = t;
                  t = SSL_printnl(x_11, y_11);
                  t = term_j_17;
                  w_11 = t;
                  t = SSL_exit(w_11);
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_56, x_56)), term_x_17);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              t_56 = ATgetArgument(t, 0);
              u_56 = ATgetArgument(t, 1);
              {
                ATerm r_12 = NULL,u_12 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, t_56, x_56);
                {
                  ATerm s_27 = t;
                  int t_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = abox2text_0_0(t);
                      LocalPopChoice(t_27);
                    }
                  else
                    {
                      t = s_27;
                      {
                        ATerm v_12 = NULL,w_12 = NULL,y_12 = NULL;
                        t = term_x_13;
                        w_12 = t;
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_56, x_56)), term_x_17);
                        y_12 = t;
                        t = SSL_printnl(w_12, y_12);
                        t = term_j_17;
                        v_12 = t;
                        t = SSL_exit(v_12);
                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_56, x_56)), term_x_17);
                      }
                    }
                }
                r_12 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm w_27 = ATgetArgument(t, 0);
                    u_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, t_56, u_56), x_56);
                {
                  ATerm x_27 = t;
                  int y_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_13 = NULL;
                      t = get_width_0_0(t);
                      c_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_12, c_13);
                      t = leq_0_0(t);
                      LocalPopChoice(y_27);
                      t = r_12;
                    }
                  else
                    {
                      t = x_27;
                      t = (ATerm) ATmakeAppl(sym__2, u_56, x_56);
                      {
                        ATerm z_27 = t;
                        int a_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(a_28);
                          }
                        else
                          {
                            t = z_27;
                            {
                              ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL;
                              t = term_x_13;
                              l_13 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_56, x_56)), term_x_17);
                              m_13 = t;
                              t = SSL_printnl(l_13, m_13);
                              t = term_j_17;
                              h_13 = t;
                              t = SSL_exit(h_13);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_56, x_56)), term_x_17);
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
                  t_56 = ATgetArgument(t, 0);
                  u_56 = ATgetArgument(t, 1);
                  {
                    ATerm b_28 = t;
                    int c_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, t_56, u_56), x_56);
                        {
                          ATerm d_28 = t;
                          int e_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(e_28);
                            }
                          else
                            {
                              t = d_28;
                              {
                                ATerm z_13 = NULL,c_14 = NULL,e_14 = NULL;
                                t = term_x_13;
                                c_14 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, t_56, u_56), x_56)), term_x_17);
                                e_14 = t;
                                t = SSL_printnl(c_14, e_14);
                                t = term_j_17;
                                z_13 = t;
                                t = SSL_exit(z_13);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, t_56, u_56), x_56)), term_x_17);
                              }
                            }
                        }
                        LocalPopChoice(c_28);
                      }
                    else
                      {
                        t = b_28;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, t_56, u_56), x_56);
                        {
                          ATerm f_28 = t;
                          int g_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = abox2text_0_0(t);
                              LocalPopChoice(g_28);
                            }
                          else
                            {
                              t = f_28;
                              {
                                ATerm a_15 = NULL,b_15 = NULL,h_15 = NULL;
                                t = term_x_13;
                                b_15 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, t_56, u_56), x_56)), term_x_17);
                                h_15 = t;
                                t = SSL_printnl(b_15, h_15);
                                t = term_j_17;
                                a_15 = t;
                                t = SSL_exit(a_15);
                                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, t_56, u_56), x_56)), term_x_17);
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  ATerm h_28 = t;
                  int k_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm l_28 = ATgetArgument(t, 0);
                          u_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(k_28);
                      t = (ATerm) ATmakeAppl(sym__2, u_56, x_56);
                      {
                        ATerm m_28 = t;
                        int o_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = abox2text_0_0(t);
                            LocalPopChoice(o_28);
                          }
                        else
                          {
                            t = m_28;
                            {
                              ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
                              t = term_x_13;
                              v_15 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_56, x_56)), term_x_17);
                              w_15 = t;
                              t = SSL_printnl(v_15, w_15);
                              t = term_j_17;
                              u_15 = t;
                              t = SSL_exit(u_15);
                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_56, x_56)), term_x_17);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = h_28;
                      {
                        ATerm p_28 = t;
                        int q_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm r_28 = ATgetArgument(t, 0);
                                u_56 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(q_28);
                            t = u_56;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_56 = ATgetFirst((ATermList) t);
                                i_56 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = g_56;
                            if(match_cons(t, sym_S_1))
                              {
                                h_56 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = i_56;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, h_56, x_56);
                          }
                        else
                          {
                            t = p_28;
                            if(match_cons(t, sym_S_1))
                              {
                                t_56 = ATgetArgument(t, 0);
                                {
                                  ATerm d_57 = NULL,i_57 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, t_56, x_56);
                                  t = m_10(t_56, x_56, t);
                                  i_57 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, x_56, i_57);
                                  t = u_10(x_56, i_57, t);
                                  d_57 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, t_56, d_57);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    t_56 = ATgetArgument(t, 0);
                                    u_56 = ATgetArgument(t, 1);
                                    p_56 = ATgetArgument(t, 2);
                                    t = t_56;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        o_56 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = p_56;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        j_56 = ATgetFirst((ATermList) t);
                                        l_56 = (ATerm) ATgetNext((ATermList) t);
                                        t = l_56;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = j_56;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm w_28 = t;
                                                int x_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = v_57(o_56, u_56, p_56, x_56, q_56, t);
                                                    LocalPopChoice(x_28);
                                                  }
                                                else
                                                  {
                                                    t = w_28;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_56);
                                                  }
                                              }
                                            else
                                              {
                                                t = v_57(o_56, u_56, p_56, x_56, q_56, t);
                                              }
                                          }
                                        else
                                          {
                                            t = j_56;
                                            t = v_57(o_56, u_56, p_56, x_56, q_56, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm a_29 = t;
                                            int b_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = v_57(o_56, u_56, p_56, x_56, q_56, t);
                                                LocalPopChoice(b_29);
                                              }
                                            else
                                              {
                                                t = a_29;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_56);
                                              }
                                          }
                                        else
                                          {
                                            t = v_57(o_56, u_56, p_56, x_56, q_56, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        t_56 = ATgetArgument(t, 0);
                                        u_56 = ATgetArgument(t, 1);
                                        t = x_57(t_56, u_56, x_56, q_56, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            t_56 = ATgetArgument(t, 0);
                                            u_56 = ATgetArgument(t, 1);
                                            t = y_57(t_56, u_56, x_56, q_56, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                t_56 = ATgetArgument(t, 0);
                                                u_56 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = c_58(t_56, u_56, x_56, q_56, t);
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
static ATerm j_59 (ATerm x_58, ATerm t)
{
  t = SSL_fclose(x_58);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_59 = NULL,h_59 = NULL;
  h_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_59 = ATgetArgument(t, 0);
      {
        ATerm f_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_59);
            LocalPopChoice(h_29);
          }
        else
          {
            t = f_29;
            t = j_59(h_59, t);
          }
      }
    }
  else
    {
      t = j_59(h_59, t);
    }
  return(t);
}
static ATerm n_10 (ATerm o_25, ATerm t)
{
  t = SSL_read_term_from_stream(o_25);
  return(t);
}
static ATerm o_10 (ATerm v_56, ATerm w_56, ATerm t)
{
  t = SSL_strcat(v_56, w_56);
  return(t);
}
static ATerm p_10 (ATerm t_34, ATerm u_34, ATerm t)
{
  ATerm m_59 = NULL;
  t = SSL_fopen(t_34, u_34);
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_59);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_59 = NULL;
  t = SSL_stdin_stream();
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_59);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_59 = NULL;
  t = SSL_stdout_stream();
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_59 = NULL;
  t = SSL_stderr_stream();
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_59);
  return(t);
}
static ATerm n_61 (ATerm z_59, ATerm t)
{
  ATerm f_60 = NULL;
  t = SSL_explode_term(z_59);
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
          {
            f_60 = ATgetFirst((ATermList) k_29);
            {
              ATerm l_29 = (ATerm) ATgetNext((ATermList) k_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_60;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_60;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_60;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_60;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_61 (ATerm i_60, ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm l_60 = NULL,n_60 = NULL,o_60 = NULL,s_60 = NULL,d_13 = NULL;
  t = SSLgetAnnotations(k_60);
  o_60 = t;
  t = i_60;
  if(match_cons(t, sym_Path_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_60, j_60);
  d_13 = t;
  t = SSLsetAnnotations(d_13, o_60);
  if(match_cons(t, sym__2))
    {
      l_60 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(l_60, n_60, t);
  return(t);
}
static ATerm q_61 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm t)
{
  ATerm x_60 = NULL,a_61 = NULL,b_61 = NULL,f_61 = NULL,e_13 = NULL;
  t = SSLgetAnnotations(w_60);
  b_61 = t;
  t = SSL_is_string(u_60);
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_61, v_60);
  e_13 = t;
  t = SSLsetAnnotations(e_13, b_61);
  if(match_cons(t, sym__2))
    {
      x_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(x_60, a_61, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm i_61 = NULL,l_61 = NULL,m_61 = NULL;
  i_61 = t;
  if(match_cons(t, sym__2))
    {
      l_61 = ATgetArgument(t, 0);
      m_61 = ATgetArgument(t, 1);
      {
        ATerm m_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_61(i_61, t);
            LocalPopChoice(q_29);
          }
        else
          {
            t = m_29;
            {
              ATerm x_29 = t;
              int z_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_61(l_61, m_61, i_61, t);
                  LocalPopChoice(z_29);
                }
              else
                {
                  t = x_29;
                  t = q_61(l_61, m_61, i_61, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_61(i_61, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,b_62 = NULL;
  b_62 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_62, term_c_30);
        t = q_10(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm q_16 = NULL,r_16 = NULL;
          t = term_d_30;
          r_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_30, b_62);
          t = o_10(r_16, b_62, t);
          q_16 = t;
          t = SSL_perror(q_16);
          _fail(t);
        }
      }
  }
  v_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10(w_61, t);
  u_61 = t;
  t = v_61;
  t = fclose_0_0(t);
  t = u_61;
  return(t);
}
static ATerm r_10 (ATerm k_34, ATerm l_34, ATerm t)
{
  t = SSL_access(k_34, l_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_62 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_62 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_30);
      k_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_62, (ATerm) ATinsert(ATempty, term_e_30));
      t = r_10(i_62, k_62, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_10 (ATerm f_22, ATerm g_22, ATerm t)
{
  ATerm l_62 = NULL;
  t = lookup_table_0_1(f_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(g_22, l_62, t);
  return(t);
}
static ATerm t_10 (ATerm r_20, ATerm s_20, ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  q_62 = t;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        t = z_10(r_20, s_20, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_30 = ATgetFirst((ATermList) t);
            p_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_30);
        {
          ATerm r_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_20, s_20, p_62);
          t = lookup_table_0_1(r_20, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_11(s_20, p_62, r_62, t);
          t = (ATerm) ATmakeAppl(sym__3, r_20, s_20, p_62);
        }
      }
    else
      {
        t = f_30;
        {
          ATerm v_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
          t = lookup_table_0_1(r_20, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_10(s_20, v_62, t);
          t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        }
      }
  }
  t = q_62;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
  a_63 = t;
  t = k_92(t);
  z_62 = t;
  {
    ATerm k_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_63 = NULL;
        t = term_u_14;
        e_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_62, term_u_14);
        t = z_10(z_62, e_63, t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_62 = ATgetFirst((ATermList) t);
      x_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_62, term_u_14, x_62);
  t = lookup_table_0_1(z_62, t);
  d_63 = t;
  t = term_u_14;
  b_63 = t;
  t = d_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(b_63, x_62, c_63, t);
  t = y_62;
  {
    static ATerm p_7 (ATerm t)
    {
      ATerm f_63 = NULL;
      f_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_62, f_63);
      t = t_10(z_62, f_63, t);
      return(t);
    }
    t = map_1_0(p_7, t);
  }
  t = a_63;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_78(t);
      t = q_78(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = q_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
  i_63 = t;
  t = j_92(t);
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_63, term_u_14);
  {
    ATerm r_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_64 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_30 = ATgetArgument(t, 0);
            ATerm x_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_14;
        a_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_63, term_u_14);
        t = z_10(h_63, a_64, t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATempty;
      }
  }
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_63, term_u_14, (ATerm) ATinsert(CheckATermList(k_63), (ATerm) ATempty));
  t = lookup_table_0_1(h_63, t);
  o_63 = t;
  t = term_u_14;
  l_63 = t;
  t = (ATerm) ATinsert(CheckATermList(k_63), (ATerm) ATempty);
  m_63 = t;
  t = o_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(l_63, m_63, n_63, t);
  t = i_63;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm o_64 = NULL;
  o_64 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(o_64);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = o_64;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm f_64 = NULL;
  static ATerm t_7 (ATerm t)
  {
    ATerm g_64 = NULL;
    g_64 = t;
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_64 = NULL,i_64 = NULL;
          t = term_z_14;
          h_64 = t;
          t = term_u_14;
          i_64 = t;
          t = term_c_31;
          t = z_10(h_64, i_64, t);
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_64 != NULL) && (f_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_64 = ATgetFirst((ATermList) t);
        {
          ATerm d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_64;
    t = map_1_0(u_7, t);
    t = g_64;
    t = end_scope_1_0(x_7, t);
    return(t);
  }
  t = begin_scope_1_0(s_7, t);
  t = restore_always_2_0(o_74, t_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  s_64 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  t_64 = t;
  t = term_x_13;
  x_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_31), t_64), term_e_31);
  y_64 = t;
  t = SSL_printnl(x_64, y_64);
  t = term_j_17;
  w_64 = t;
  t = SSL_exit(w_64);
  t = s_64;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_65 = NULL,i_65 = NULL,l_65 = NULL;
      t = term_l_15;
      t = n_0(t);
      h_65 = t;
      t = term_i_31;
      i_65 = t;
      t = term_j_31;
      l_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, h_65);
      t = a_11(i_65, l_65, h_65, t);
      _fail(t);
    }
  else
    {
      ATerm p_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_65 = ATgetFirst((ATermList) t);
          e_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_65 = ATgetFirst((ATermList) t);
          g_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_65;
      t = k_0(t);
      t = f_65;
      t = l_0(t);
      p_65 = t;
      t = (ATerm) ATinsert(CheckATermList(g_65), p_65);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
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
static ATerm c_8 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,w_65 = NULL;
  s_65 = t;
  t = SSL_string_to_int(s_65);
  t_65 = t;
  t = term_k_31;
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_31, t_65);
  t = c_11(w_65, t_65, t);
  t = s_65;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_8, c_8, d_8, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm a_66 = NULL;
  a_66 = t;
  if(match_string(t, "-S"))
    {
      t = a_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_66;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  t = term_n_31;
  b_66 = t;
  t = term_l_16;
  c_66 = t;
  t = term_p_31;
  t = c_11(b_66, c_66, t);
  t = term_q_31;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_r_31;
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
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  f_66 = t;
  t = SSL_string_to_int(f_66);
  g_66 = t;
  t = term_n_31;
  h_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_31, g_66);
  t = c_11(h_66, g_66, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_66);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm i_66 = NULL,l_66 = NULL;
  t = term_t_31;
  i_66 = t;
  t = term_l_15;
  l_66 = t;
  t = term_u_31;
  t = c_11(i_66, l_66, t);
  t = term_v_31;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_8, k_8, n_8, t);
      LocalPopChoice(a_32);
    }
  else
    {
      t = y_31;
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_8, p_8, s_8, t);
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            t = Option_3_0(t_8, w_8, x_8, t);
          }
      }
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm p_66 = NULL;
  p_66 = t;
  if(match_string(t, "-o"))
    {
      t = p_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_66;
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL;
  r_66 = t;
  t = term_p_13;
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, r_66);
  t = c_11(s_66, r_66, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_66);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_8, z_8, a_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  if(match_string(t, "-i"))
    {
      t = u_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_66;
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  v_66 = t;
  t = term_e_32;
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_32, v_66);
  t = c_11(w_66, v_66, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_66);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, f_9, g_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL;
  t = term_j_32;
  z_66 = t;
  t = term_l_15;
  a_67 = t;
  t = term_k_32;
  t = c_11(z_66, a_67, t);
  t = term_l_32;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm f_67 = NULL;
  f_67 = t;
  if(match_string(t, "-w"))
    {
      t = f_67;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = f_67;
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm i_67 = NULL,l_67 = NULL,m_67 = NULL;
  i_67 = t;
  t = SSL_string_to_int(i_67);
  l_67 = t;
  t = term_x_16;
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, l_67);
  t = c_11(m_67, l_67, t);
  t = i_67;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm x_32 = t;
              int y_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_9, b_10, c_10, t);
                  LocalPopChoice(y_32);
                }
              else
                {
                  t = x_32;
                  {
                    ATerm z_32 = t;
                    int a_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_33);
                      }
                    else
                      {
                        t = z_32;
                        {
                          ATerm d_33 = t;
                          int e_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(e_33);
                            }
                          else
                            {
                              t = d_33;
                              t = ArgOption_3_0(h_10, i_10, j_10, t);
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
  ATerm p_67 = NULL,r_67 = NULL,u_67 = NULL,y_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_15;
  t = whoami_0_0(t);
  p_67 = t;
  t = term_x_13;
  u_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_33), p_67);
  y_67 = t;
  t = SSL_printnl(u_67, y_67);
  t = term_j_17;
  r_67 = t;
  t = SSL_exit(r_67);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL;
  t = term_o_13;
  z_67 = t;
  t = term_h_33;
  a_68 = t;
  t = term_i_33;
  t = z_10(z_67, a_68, t);
  return(t);
}
static ATerm u_10 (ATerm a_58, ATerm b_58, ATerm t)
{
  ATerm j_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_58, b_58);
      LocalPopChoice(m_33);
    }
  else
    {
      t = j_33;
      t = SSL_addr(a_58, b_58);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
  e_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_68;
      t = q_88(t);
    }
  else
    {
      ATerm m_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_68 = ATgetFirst((ATermList) t);
          g_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_68;
      t = foldr_2_0(q_88, r_88, t);
      m_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_68, m_68);
      t = r_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_l_16;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(g_17, h_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_68 = NULL,c_17 = NULL,d_17 = NULL;
  t = times_0_0(t);
  d_17 = t;
  t = SSL_explode_term(d_17);
  if(match_cons(t, sym__2))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_17;
  t = foldr_2_0(k_10, v_10, t);
  p_68 = t;
  t = SSL_TicksToSeconds(p_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  if(match_cons(t, sym__2))
    {
      f_69 = ATgetArgument(t, 0);
      g_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_69;
        if((f_69 != t))
          {
            _fail(t);
          }
        t = e_69;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
        {
          ATerm q_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_69, g_69);
              LocalPopChoice(u_33);
            }
          else
            {
              t = q_33;
              t = SSL_gtr(f_69, g_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_91 (ATerm), ATerm t)
{
  ATerm n_69 = NULL;
  n_69 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
        t = term_o_13;
        q_69 = t;
        t = term_n_31;
        r_69 = t;
        t = term_x_33;
        t = z_10(q_69, r_69, t);
        p_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_69, term_j_17);
        t = geq_0_0(t);
        t = n_69;
        t = m_91(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = n_69;
      }
  }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm t_69 = NULL,w_69 = NULL,y_69 = NULL,a_70 = NULL;
  t = run_time_0_0(t);
  t_69 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  w_69 = t;
  t = term_x_13;
  y_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_33), t_69), term_y_33), w_69);
  a_70 = t;
  t = SSL_printnl(y_69, a_70);
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_33), t_69), term_y_33), w_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_70 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_16;
  d_70 = t;
  t = SSL_exit(d_70);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL;
  o_70 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_70;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_70 = ATgetArgument(t, 0);
          {
            ATerm u_17 = NULL,t_13 = NULL;
            t = SSLgetAnnotations(o_70);
            u_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_70);
            t_13 = t;
            t = SSLsetAnnotations(t_13, u_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_70;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_70 = NULL,h_70 = NULL;
      t = term_o_13;
      g_70 = t;
      t = term_c_34;
      h_70 = t;
      t = term_d_34;
      t = z_10(g_70, h_70, t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = fetch_1_0(b_11, t);
    }
  t = q_95(t);
  return(t);
}
static ATerm d_11 (ATerm e_24, ATerm f_24, ATerm g_24, ATerm t)
{
  ATerm q_70 = NULL;
  t = SSL_hashtable_put(g_24, e_24, f_24);
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_70);
  return(t);
}
static ATerm e_11 (ATerm h_24, ATerm i_24, ATerm t)
{
  t = SSL_hashtable_get(i_24, h_24);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_21, ATerm t)
{
  ATerm z_70 = NULL;
  t = table_hashtable_0_0(t);
  z_70 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL;
        t = z_70;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_11(y_21, a_18, t);
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        {
          ATerm g_18 = NULL;
          t = y_21;
          t = table_create_0_0(t);
          t = z_70;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_11(y_21, g_18, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm c_71 = NULL;
  t = SSL_hashtable_create(m_24, n_24);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_71);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,h_71 = NULL,i_71 = NULL;
  d_71 = t;
  t = term_g_34;
  h_71 = t;
  t = term_h_34;
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
  t = d_11(d_71, e_71, f_71, t);
  t = d_71;
  return(t);
}
static ATerm w_10 (ATerm j_24, ATerm k_24, ATerm t)
{
  ATerm j_71 = NULL;
  t = SSL_hashtable_remove(k_24, j_24);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_71);
  return(t);
}
static ATerm x_10 (ATerm o_24, ATerm t)
{
  ATerm k_71 = NULL;
  t = SSL_hashtable_destroy(o_24);
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
  t = x_10(p_71, t);
  t = n_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_10(m_71, o_71, t);
  t = m_71;
  return(t);
}
ATerm map_1_0 (ATerm k_81 (ATerm), ATerm t)
{
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
        ATerm n_18 = NULL,t_18 = NULL,u_18 = NULL,b_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_72 = ATgetFirst((ATermList) t);
            d_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_72);
        n_18 = t;
        t = c_72;
        t = k_81(t);
        t_18 = t;
        t = d_72;
        t = e_72(t);
        u_18 = t;
        t = (ATerm) ATinsert(CheckATermList(u_18), t_18);
        b_14 = t;
        t = SSLsetAnnotations(b_14, n_18);
      }
    return(t);
  }
  t = e_72(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_72 = ATgetFirst((ATermList) t);
      i_72 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_72 = NULL,n_72 = NULL;
        static ATerm g_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_72)), not_null(n_72));
          return(t);
        }
        t = i_72;
        t = i_0(t);
        if(((m_72 != NULL) && (m_72 != t)))
          _fail(t);
        else
          m_72 = t;
        t = h_72;
        t = g_0(t);
        if(((n_72 != NULL) && (n_72 != t)))
          _fail(t);
        else
          n_72 = t;
        t = i_72;
        t = reverse_acc_2_0(g_0, g_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,g_14 = NULL;
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
  g_14 = t;
  t = SSLsetAnnotations(g_14, t_72);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_72), term_i_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL;
  ATerm j_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_72 = NULL,s_72 = NULL;
      t = term_o_13;
      r_72 = t;
      t = term_h_33;
      s_72 = t;
      t = term_i_33;
      t = z_10(r_72, s_72, t);
      LocalPopChoice(m_34);
    }
  else
    {
      t = j_34;
      t = fetch_1_0(m_11, t);
    }
  t = term_n_34;
  t = echo_0_0(t);
  t = term_i_31;
  p_72 = t;
  t = term_j_31;
  q_72 = t;
  t = term_o_34;
  t = z_10(p_72, q_72, t);
  t = reverse_acc_2_0(_id, n_11, t);
  t = map_1_0(s_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  static ATerm a_74 (ATerm t)
  {
    ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
    x_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_73 = ATgetFirst((ATermList) t);
        z_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_19 = NULL,o_19 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(x_73);
          g_19 = t;
          t = y_73;
          t = u_81(t);
          o_19 = t;
          t = (ATerm) ATinsert(CheckATermList(z_73), o_19);
          j_14 = t;
          t = SSLsetAnnotations(j_14, g_19);
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm d_20 = NULL,q_20 = NULL,k_14 = NULL;
            t = SSLgetAnnotations(x_73);
            d_20 = t;
            t = z_73;
            t = a_74(t);
            q_20 = t;
            t = (ATerm) ATinsert(CheckATermList(q_20), y_73);
            k_14 = t;
            t = SSLsetAnnotations(k_14, d_20);
          }
        }
    }
    return(t);
  }
  t = a_74(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
  e_74 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_74;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_34 = ATgetFirst((ATermList) t);
                ATerm w_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_74;
          }
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = (ATerm) ATinsert(ATempty, e_74);
      }
  }
  f_74 = t;
  t = term_r_13;
  g_74 = t;
  t = SSL_printnl(g_74, f_74);
  t = e_74;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL;
  t = term_o_13;
  k_74 = t;
  t = term_h_33;
  l_74 = t;
  t = term_i_33;
  t = z_10(k_74, l_74, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL;
  t = term_x_34;
  m_74 = t;
  t = term_l_15;
  n_74 = t;
  t = term_y_34;
  t = c_11(m_74, n_74, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
  t = term_x_34;
  r_74 = t;
  t = term_l_15;
  s_74 = t;
  t = term_y_34;
  t = c_11(r_74, s_74, t);
  t = term_e_35;
  p_74 = t;
  t = term_l_15;
  q_74 = t;
  t = term_f_35;
  t = c_11(p_74, q_74, t);
  t = term_h_35;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_12, d_12, e_12, t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = Option_3_0(f_12, i_12, j_12, t);
    }
  return(t);
}
static ATerm c_11 (ATerm c_35, ATerm d_35, ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  t = term_o_13;
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_13, c_35, d_35);
  t = lookup_table_0_1(t_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(c_35, d_35, u_74, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_13, c_35, d_35);
  return(t);
}
static ATerm a_11 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  x_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
  {
    ATerm m_35 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
        t = z_10(m_20, n_20, t);
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = (ATerm) ATempty;
      }
  }
  y_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_20, n_20, (ATerm) ATinsert(CheckATermList(y_74), l_20));
  t = lookup_table_0_1(m_20, t);
  b_75 = t;
  t = (ATerm) ATinsert(CheckATermList(y_74), l_20);
  z_74 = t;
  t = b_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(n_20, z_74, a_75, t);
  t = x_74;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_75 = NULL,j_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
      t = term_l_15;
      t = e_0(t);
      k_75 = t;
      t = term_i_31;
      l_75 = t;
      t = term_j_31;
      m_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, k_75);
      t = a_11(l_75, m_75, k_75, t);
      _fail(t);
    }
  else
    {
      ATerm p_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_75 = ATgetFirst((ATermList) t);
          j_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_75;
      t = c_0(t);
      t = term_l_15;
      t = d_0(t);
      p_75 = t;
      t = (ATerm) ATinsert(CheckATermList(j_75), p_75);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,e_17 = NULL;
  v_75 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_75 = ATgetFirst((ATermList) t);
      s_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_75);
  q_75 = t;
  t = r_75;
  t = s_67(t);
  t_75 = t;
  t = s_75;
  t = t_67(t);
  u_75 = t;
  t = (ATerm) ATinsert(CheckATermList(u_75), t_75);
  e_17 = t;
  t = SSLsetAnnotations(e_17, q_75);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,f_76 = NULL,g_76 = NULL,e_22 = NULL;
  a_76 = t;
  {
    ATerm r_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_35;
        t = o_97(t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = r_35;
      }
  }
  t = a_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_76 = ATgetFirst((ATermList) t);
      d_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_76);
  b_76 = t;
  t = term_h_33;
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_33, c_76);
  t = c_11(g_76, c_76, t);
  t = d_76;
  {
    static ATerm q_76 (ATerm t)
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_76 = NULL;
              j_76 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_76;
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = o_97(t);
              t = Cons_2_0(_id, q_76, t);
            }
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          {
            ATerm m_76 = NULL,n_76 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_76 = ATgetFirst((ATermList) t);
                n_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_76), (ATerm) ATmakeAppl(sym_Undefined_1, m_76));
          }
        }
      return(t);
    }
    t = q_76(t);
  }
  f_76 = t;
  t = (ATerm) ATinsert(CheckATermList(f_76), (ATerm) ATmakeAppl(sym_Program_1, c_76));
  e_22 = t;
  t = SSLsetAnnotations(e_22, b_76);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm d_77 = NULL;
  d_77 = t;
  if(match_string(t, "--help"))
    {
      t = d_77;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_77;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_77;
        }
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL;
  t = term_c_34;
  e_77 = t;
  t = term_l_15;
  f_77 = t;
  t = term_z_35;
  t = c_11(e_77, f_77, t);
  t = term_a_36;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_c_36;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  x_76 = t;
  t = term_i_31;
  y_76 = t;
  t = term_d_36;
  t = lookup_table_0_1(y_76, t);
  c_77 = t;
  t = term_j_31;
  z_76 = t;
  t = (ATerm) ATempty;
  a_77 = t;
  t = c_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(z_76, a_77, b_77, t);
  t = x_76;
  {
    static ATerm k_12 (ATerm t)
    {
      ATerm e_36 = t;
      int g_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_97(t);
          LocalPopChoice(g_36);
        }
      else
        {
          t = e_36;
          {
            ATerm h_36 = t;
            int l_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_12, m_12, n_12, t);
                LocalPopChoice(l_36);
              }
            else
              {
                t = h_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_12, t);
  }
  {
    ATerm m_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_77 = NULL;
        q_77 = t;
        {
          ATerm q_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_21 = NULL;
              t = q_77;
              {
                ATerm v_36 = t;
                int w_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_21 = NULL,o_21 = NULL;
                    t = term_o_13;
                    n_21 = t;
                    t = term_c_34;
                    o_21 = t;
                    t = term_d_34;
                    t = z_10(n_21, o_21, t);
                    LocalPopChoice(w_36);
                  }
                else
                  {
                    t = v_36;
                    t = fetch_1_0(o_12, t);
                  }
              }
              t = q_77;
              t = default_system_usage_0_0(t);
              t = term_l_16;
              i_21 = t;
              t = SSL_exit(i_21);
              LocalPopChoice(u_36);
            }
          else
            {
              t = q_36;
              {
                ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
                t = term_o_13;
                b_22 = t;
                t = term_x_34;
                c_22 = t;
                t = term_x_36;
                t = z_10(b_22, c_22, t);
                t = q_77;
                t = default_system_about_0_0(t);
                t = term_l_16;
                a_22 = t;
                t = SSL_exit(a_22);
              }
            }
        }
        LocalPopChoice(p_36);
      }
    else
      {
        t = m_36;
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
              static ATerm p_12 (ATerm t)
              {
                ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,p_22 = NULL;
                w_77 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_77);
                u_77 = t;
                t = v_77;
                if(((v_76 != NULL) && (v_76 != t)))
                  _fail(t);
                else
                  v_76 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_77);
                p_22 = t;
                t = SSLsetAnnotations(p_22, u_77);
                return(t);
              }
              t = fetch_1_0(p_12, t);
              t = term_x_13;
              s_77 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_76)), term_e_37);
              t_77 = t;
              t = SSL_printnl(s_77, t_77);
              t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_76)), term_e_37));
              t = default_system_usage_0_0(t);
              t = term_j_17;
              r_77 = t;
              t = SSL_exit(r_77);
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
            }
        }
      }
  }
  w_76 = t;
  t = term_i_31;
  t = table_destroy_0_0(t);
  t = w_76;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  t = parse_options_1_0(s_95, t);
  b_78 = t;
  t = term_f_37;
  t = table_create_0_0(t);
  t = term_f_37;
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_37, term_h_37, b_78);
  t = lookup_table_0_1(c_78, t);
  f_78 = t;
  t = term_h_37;
  d_78 = t;
  t = f_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(d_78, b_78, e_78, t);
  t = b_78;
  t = u_95(t);
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_95, t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_95(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = xtc_temp_files_1_0(s_12, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
      t = term_o_13;
      m_78 = t;
      t = term_e_32;
      n_78 = t;
      t = term_z_37;
      t = z_10(m_78, n_78, t);
      l_78 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_78);
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
      t = term_v_13;
    }
  t = read_from_0_0(t);
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_78, term_l_16);
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_0_0(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm o_78 = NULL,r_78 = NULL,s_78 = NULL;
          t = term_x_13;
          r_78 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_78, term_l_16)), term_x_17);
          s_78 = t;
          t = SSL_printnl(r_78, s_78);
          t = term_j_17;
          o_78 = t;
          t = SSL_exit(o_78);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_78, term_l_16)), term_x_17);
        }
      }
  }
  k_78 = t;
  t = SSL_explode_term(k_78);
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_38 = ATgetArgument(t, 1);
        if(((ATgetType(d_38) == AT_LIST) && !(ATisEmpty(d_38))))
          {
            j_78 = ATgetFirst((ATermList) d_38);
            {
              ATerm h_38 = (ATerm) ATgetNext((ATermList) d_38);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_78, term_j_38);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, q_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
