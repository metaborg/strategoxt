#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Path_1;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_Strict_0;
Symbol sym_alt_2;
static void init_module_constructors (void)
{
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
}
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_k_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_m_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_l_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_j_22;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_a_20;
ATerm term_v_19;
ATerm term_m_19;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_a_12;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_x_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_m_19);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_r_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_q_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_v_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_m_13);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_13);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_a_12);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_y_27);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_q_26);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_d_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_n_27);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_w_29, term_a_12);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_a_12);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_a_12);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_w_29);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_a_12);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm n_7 (ATerm h_19, ATerm i_19, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm f_79 (ATerm), ATerm t);
static ATerm t_6 (ATerm a_18, ATerm b_18, ATerm z_17, ATerm t);
static ATerm k_9 (ATerm c_6, ATerm d_6, ATerm e_6, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm l_102 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm collect_p__1_0 (ATerm w_110 (ATerm), ATerm t);
static ATerm u_6 (ATerm s_31, ATerm t_31, ATerm t);
static ATerm v_6 (ATerm a_76 (ATerm), ATerm c_16, ATerm d_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm w_6 (ATerm r_17, ATerm t_17, ATerm q_17, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm y_6 (ATerm x_16, ATerm y_16, ATerm a_17, ATerm z_16, ATerm t);
static ATerm z_6 (ATerm s_16, ATerm t_16, ATerm w_16, ATerm v_16, ATerm u_16, ATerm t);
static ATerm b_7 (ATerm a_31, ATerm b_31, ATerm t);
static ATerm c_7 (ATerm q_35, ATerm o_35, ATerm p_35, ATerm t);
ATerm repeat_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_7 (ATerm j_16, ATerm i_16, ATerm n_16, ATerm t);
ATerm genzip_4_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm nzip_1_0 (ATerm i_89 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm trm2abox_list_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
static ATerm j_7 (ATerm k_29, ATerm l_29, ATerm t);
static ATerm k_7 (ATerm p_85 (ATerm), ATerm m_310, ATerm u_29, ATerm t);
static ATerm l_7 (ATerm f_96 (ATerm), ATerm d_43, ATerm b_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm m_7 (ATerm g_42, ATerm h_42, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm a_78 (ATerm), ATerm t);
static ATerm o_7 (ATerm q_21, ATerm r_21, ATerm t);
ATerm end_scope_1_0 (ATerm c_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_96 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_78 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t);
static ATerm p_7 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm s_38, ATerm r_38, ATerm t);
static ATerm q_7 (ATerm d_91 (ATerm), ATerm o_38, ATerm n_38, ATerm t);
static ATerm q_3 (ATerm t);
ATerm collect_om_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm arity_of_template_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm mk_key_arity_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm r_7 (ATerm f_52, ATerm g_52, ATerm t);
ATerm unescape_chars_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm unquote_chars_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_79 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm a_8 (ATerm e_52, ATerm t);
ATerm oncetd_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm q_38 (ATerm g_38, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_8 (ATerm q_29, ATerm t);
static ATerm e_8 (ATerm z_28, ATerm a_29, ATerm t);
static ATerm f_8 (ATerm p_42, ATerm q_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_40 (ATerm f_39, ATerm t);
static ATerm r_40 (ATerm j_39, ATerm l_39, ATerm m_39, ATerm t);
static ATerm s_40 (ATerm u_39, ATerm v_39, ATerm w_39, ATerm t);
static ATerm g_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_85 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_45 (ATerm l_45, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_8 (ATerm a_19, ATerm z_18, ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_8 (ATerm u_18, ATerm v_18, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_8 (ATerm l_21, ATerm m_21, ATerm k_21, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_8 (ATerm u_30, ATerm v_30, ATerm t);
ATerm foldr_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_76 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm need_help_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm map_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_8 (ATerm c_23, ATerm d_23, ATerm t);
static ATerm t_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_99 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm parse_options_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_4 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = k_1;
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
        t = (ATerm) ATmakeAppl(sym__2, m_1, h_0);
        t = n_7(m_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(o_10);
      }
    else
      {
        t = x_4;
        {
          ATerm p_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm u_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_0 = NULL;
                    x_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_0;
                          }
                        else
                          {
                            t = x_0;
                            if((m_1 != t))
                              {
                                _fail(t);
                              }
                            t = x_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, v_0);
              t = n_7(m_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(t_10);
            }
          else
            {
              t = p_10;
              t = k_1;
              t = o_0(t);
              if((m_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
            }
        }
      }
  }
  return(t);
}
static ATerm n_7 (ATerm h_19, ATerm i_19, ATerm t)
{
  t = SSL_copy(h_19, i_19);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL,k_2 = NULL;
      t = term_x_10;
      j_2 = t;
      t = term_e_11;
      k_2 = t;
      t = term_g_11;
      t = l_8(j_2, k_2, t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      t = term_h_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_1 = NULL,l_1 = NULL;
      t = term_e_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,r_1 = NULL;
            t = term_x_10;
            o_1 = t;
            t = term_e_11;
            r_1 = t;
            t = term_g_11;
            t = l_8(o_1, r_1, t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = term_h_11;
          }
      }
      j_1 = t;
      t = term_k_11;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_11, j_1);
      t = n_7(l_1, j_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_4 = ATgetFirst((ATermList) t);
          v_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 = NULL,b_2 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(t_4);
            x_1 = t;
            t = u_4;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_4;
            t = flat_list_0_0(t);
            b_2 = t;
            t = (ATerm) ATinsert(CheckATermList(b_2), u_4);
            s_0 = t;
            t = SSLsetAnnotations(s_0, x_1);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm p_11 = t;
              int q_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,i_3 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(t_4);
                  t_2 = t;
                  t = u_4;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = u_4;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm r_11 = ATgetFirst((ATermList) t);
                          ATerm s_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = u_4;
                    }
                  t = (ATerm) ATinsert(CheckATermList(v_4), u_4);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, t_2);
                  i_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm x_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = i_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_11 = ATgetFirst((ATermList) t);
                      r_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(q_11);
                }
              else
                {
                  t = p_11;
                  {
                    ATerm w_3 = NULL,a_4 = NULL,y_0 = NULL;
                    t = SSLgetAnnotations(t_4);
                    w_3 = t;
                    t = v_4;
                    t = flat_list_0_0(t);
                    a_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(a_4), u_4);
                    y_0 = t;
                    t = SSLsetAnnotations(y_0, w_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      g_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
      {
        ATerm j_5 = NULL,k_5 = NULL;
        t = term_a_12;
        t = p_0(t);
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, k_5);
        t = index_0_0(t);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_5, j_5);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm m_5 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          g_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_a_12;
      t = p_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, m_5);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(f_79, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = f_79(t);
  return(t);
}
static ATerm t_6 (ATerm a_18, ATerm b_18, ATerm z_17, ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  static ATerm j_0 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_0 (ATerm t)
            {
              t = not_null(p_5);
              return(t);
            }
            t = Instantiate_1_0(m_0, t);
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
      }
    return(t);
  }
  t = SSL_explode_term(z_17);
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5;
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm r_5 = NULL,s_5 = NULL;
      if(match_cons(t, sym__2))
        {
          r_5 = ATgetArgument(t, 0);
          s_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, r_5, a_18, s_5);
      t = f_7(r_5, a_18, s_5, t);
      return(t);
    }
    t = nzip_1_0(f_0, t);
  }
  if(((p_5 != NULL) && (p_5 != t)))
    _fail(t);
  else
    p_5 = t;
  t = b_18;
  t = bottomup_1_0(j_0, t);
  return(t);
}
static ATerm k_9 (ATerm c_6, ATerm d_6, ATerm e_6, ATerm t)
{
  ATerm n_6 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(e_6);
  n_6 = t;
  t = d_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_6), c_6);
  c_1 = t;
  t = SSLsetAnnotations(c_1, n_6);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  static ATerm e_9 (ATerm t)
  {
    static ATerm l_9 (ATerm d_7, ATerm h_7, ATerm i_7, ATerm s_7, ATerm t)
    {
      ATerm w_7 = NULL,x_7 = NULL,k_8 = NULL,d_1 = NULL;
      t = s_7;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_12 = ATgetFirst((ATermList) t);
          ATerm o_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_7);
      w_7 = t;
      t = term_a_12;
      t = l_102(t);
      {
        static ATerm q_0 (ATerm t)
        {
          ATerm p_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_12 = t;
              int v_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm r_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, h_7), d_7);
                    return(t);
                  }
                  t = Instantiate_1_0(r_0, t);
                  LocalPopChoice(v_12);
                }
              else
                {
                  t = t_12;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(s_12);
            }
          else
            {
              t = p_12;
            }
          return(t);
        }
        t = bottomup_1_0(q_0, t);
      }
      k_8 = t;
      t = i_7;
      t = e_9(t);
      x_7 = t;
      t = (ATerm) ATinsert(CheckATermList(x_7), k_8);
      d_1 = t;
      t = SSLsetAnnotations(d_1, w_7);
      return(t);
    }
    ATerm r_8 = NULL,s_8 = NULL,u_8 = NULL,v_8 = NULL,x_8 = NULL;
    r_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_8;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_8 = ATgetFirst((ATermList) t);
            u_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_8;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_8 = ATgetFirst((ATermList) t);
            x_8 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm y_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_9(s_8, u_8, r_8, t);
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = y_12;
                  t = l_9(s_8, v_8, x_8, r_8, t);
                }
            }
          }
        else
          {
            t = k_9(s_8, u_8, r_8, t);
          }
      }
    return(t);
  }
  t = e_9(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm w_110 (ATerm), ATerm t)
{
  static ATerm n_9 (ATerm t)
  {
    ATerm b_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_9 = NULL;
        t = w_110(t);
        m_9 = t;
        t = (ATerm) ATinsert(ATempty, m_9);
        LocalPopChoice(e_13);
      }
    else
      {
        t = b_13;
        {
          ATerm s_4 = NULL,w_4 = NULL;
          w_4 = t;
          t = SSL_explode_term(w_4);
          if(match_cons(t, sym__2))
            {
              ATerm f_13 = ATgetArgument(t, 0);
              s_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_4;
          t = foldr_3_0(t_0, conc_0_0, n_9, t);
        }
      }
    return(t);
  }
  t = n_9(t);
  return(t);
}
static ATerm u_6 (ATerm s_31, ATerm t_31, ATerm t)
{
  t = SSL_mod(s_31, t_31);
  return(t);
}
static ATerm v_6 (ATerm a_76 (ATerm), ATerm c_16, ATerm d_16, ATerm t)
{
  ATerm o_9 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
      t = term_i_13;
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_16, term_i_13);
      t = u_6(c_16, r_9, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_a_12;
      t = a_76(t);
      p_9 = t;
      t = term_i_13;
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_13, p_9, d_16);
      t = f_7(q_9, p_9, d_16, t);
      o_9 = t;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        ATerm s_9 = NULL,t_9 = NULL;
        t = term_a_12;
        t = a_76(t);
        s_9 = t;
        t = term_j_13;
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_j_13, s_9, d_16);
        t = f_7(t_9, s_9, d_16, t);
        o_9 = t;
      }
    }
  t = o_9;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,d_10 = NULL,p_1 = NULL;
  d_10 = t;
  if(match_cons(t, sym_S_1))
    {
      b_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, b_10);
  p_1 = t;
  t = SSLsetAnnotations(p_1, z_9);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(e_10, f_10, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm w_6 (ATerm r_17, ATerm t_17, ATerm q_17, ATerm t)
{
  ATerm w_9 = NULL;
  static ATerm g_1 (ATerm t)
  {
    t = t_17;
    return(t);
  }
  t = q_17;
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm x_9 = NULL,y_9 = NULL;
      static ATerm z_0 (ATerm t)
      {
        t = r_17;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          x_9 = ATgetArgument(t, 0);
          y_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_6(z_0, x_9, y_9, t);
      return(t);
    }
    t = nzip_1_0(u_0, t);
  }
  w_9 = t;
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_10 (ATerm t)
        {
          ATerm h_10 = NULL,j_10 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_10 = ATgetFirst((ATermList) t);
                  j_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm p_13 = t;
                  int r_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, h_10);
                      LocalPopChoice(r_13);
                    }
                  else
                    {
                      t = p_13;
                      {
                        ATerm n_10 = NULL;
                        t = j_10;
                        t = r_10(t);
                        n_10 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(n_10), h_10), h_10);
                      }
                    }
                }
              else
                {
                  ATerm q_10 = NULL;
                  t = j_10;
                  t = r_10(t);
                  q_10 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(q_10), h_10), h_10);
                }
            }
          return(t);
        }
        t = t_17;
        t = collect_p__1_0(a_1, t);
        t = foldr_3_0(b_1, e_1, f_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = w_9;
        t = r_10(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = w_9;
      }
  }
  t = instantiate_sep_list_1_0(g_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm y_10 = NULL,b_11 = NULL,c_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__4))
    {
      y_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      c_11 = ATgetArgument(t, 2);
      f_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = y_10;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, b_11, c_11, f_11);
      t = w_6(b_11, c_11, f_11, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, b_11, c_11, f_11);
      t = w_6(b_11, c_11, f_11, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  static ATerm i_1 (ATerm t)
  {
    ATerm s_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(t_11));
              return(t);
            }
            t = Instantiate_1_0(n_1, t);
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(u_13);
      }
    else
      {
        t = s_13;
      }
    return(t);
  }
  u_11 = t;
  if(match_cons(t, sym__4))
    {
      v_11 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      e_12 = ATgetArgument(t, 2);
      f_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = v_11;
  if(match_string(t, "iter"))
    {
      t = u_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = u_11;
    }
  t = f_12;
  {
    static ATerm h_1 (ATerm t)
    {
      ATerm g_12 = NULL,h_12 = NULL;
      g_12 = t;
      t = term_j_13;
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_13, d_12, g_12);
      t = f_7(h_12, d_12, g_12, t);
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = e_12;
  t = bottomup_1_0(i_1, t);
  return(t);
}
static ATerm y_6 (ATerm x_16, ATerm y_16, ATerm a_17, ATerm z_16, ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  static ATerm q_1 (ATerm t)
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(l_12));
              return(t);
            }
            t = Instantiate_1_0(s_1, t);
            LocalPopChoice(d_14);
          }
        else
          {
            t = b_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
      }
    return(t);
  }
  t = term_j_13;
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_13, y_16, z_16);
  t = f_7(m_12, y_16, z_16, t);
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = a_17;
  t = bottomup_1_0(q_1, t);
  return(t);
}
static ATerm z_6 (ATerm s_16, ATerm t_16, ATerm w_16, ATerm v_16, ATerm u_16, ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  static ATerm u_1 (ATerm t)
  {
    ATerm g_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(r_12));
              return(t);
            }
            t = Instantiate_1_0(v_1, t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = k_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(j_14);
      }
    else
      {
        t = g_14;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, v_16, t_16, u_16);
  t = f_7(v_16, t_16, u_16, t);
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_16, w_16);
  t = index_0_0(t);
  q_12 = t;
  t = (ATerm) ATinsert(ATempty, q_12);
  t = bottomup_1_0(u_1, t);
  return(t);
}
static ATerm b_7 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_31, b_31);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = SSL_subtr(a_31, b_31);
    }
  return(t);
}
static ATerm c_7 (ATerm q_35, ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm u_12 = NULL,w_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_35, term_i_13);
  t = geq_0_0(t);
  t = term_j_13;
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, term_j_13);
  t = b_7(q_35, w_12, t);
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_12, p_35);
  return(t);
}
ATerm repeat_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  static ATerm x_12 (ATerm t)
  {
    ATerm w_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_84(t);
        t = x_12(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = w_14;
        t = b_84(t);
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm c_13 = NULL,k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm a_15 = ATgetArgument(t, 1);
        if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
          {
            k_13 = ATgetFirst((ATermList) a_15);
            l_13 = (ATerm) ATgetNext((ATermList) a_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_7(c_13, k_13, l_13, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = repeat_2_0(w_1, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if(((ATgetType(g_15) != AT_INT) || (ATgetInt((ATermInt) g_15) != 1)))
        _fail(t);
      {
        ATerm h_15 = ATgetArgument(t, 1);
        if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
          {
            z_12 = ATgetFirst((ATermList) h_15);
            {
              ATerm i_15 = (ATerm) ATgetNext((ATermList) h_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_12;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(c_2, t);
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_7 (ATerm j_16, ATerm i_16, ATerm n_16, ATerm t)
{
  ATerm x_13 = NULL,a_14 = NULL,c_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATinsert(ATempty, j_16));
  t = conc_0_0(t);
  a_14 = t;
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,i_14 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            x_13 = ATgetArgument(t, 0);
            c_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_13;
        if(match_cons(t, sym_Path_2))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_14;
        {
          static ATerm z_1 (ATerm t)
          {
            ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,u_14 = NULL,v_14 = NULL,y_1 = NULL,t_1 = NULL;
            v_14 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_14 = ATgetFirst((ATermList) t);
                n_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_14);
            l_14 = t;
            t = m_14;
            if(match_cons(t, sym_selector_2))
              {
                p_14 = ATgetArgument(t, 0);
                q_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_14);
            o_14 = t;
            t = q_14;
            if(((i_14 != NULL) && (i_14 != t)))
              _fail(t);
            else
              i_14 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, p_14, q_14);
            t_1 = t;
            t = SSLsetAnnotations(t_1, o_14);
            u_14 = t;
            t = n_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_14), u_14);
            y_1 = t;
            t = SSLsetAnnotations(y_1, l_14);
            return(t);
          }
          t = at_last_1_0(z_1, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(i_14), a_14, c_14, n_16);
        {
          ATerm q_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_14 = NULL,b_15 = NULL,e_15 = NULL,f_15 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm t_15 = ATgetArgument(t, 0);
                  ATerm u_15 = ATgetArgument(t, 1);
                  ATerm v_15 = ATgetArgument(t, 2);
                  ATerm x_15 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = n_16;
              if(match_cons(t, sym_alt_2))
                {
                  f_15 = ATgetArgument(t, 0);
                  x_14 = ATgetArgument(t, 1);
                  t = x_14;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm w_15 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, f_15, c_14);
                      t = index_0_0(t);
                      w_15 = t;
                      t = (ATerm) ATinsert(ATempty, w_15);
                      t = bottomup_1_0(a_2, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_15 = ATgetFirst((ATermList) t);
                          e_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = e_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(i_14), a_14, c_14, n_16);
                      t = z_6(not_null(i_14), a_14, c_14, f_15, b_15, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      f_15 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(i_14), a_14, c_14, n_16);
                      t = y_6(not_null(i_14), a_14, c_14, f_15, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(s_15);
            }
          else
            {
              t = q_15;
              {
                ATerm y_15 = t;
                int z_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(z_15);
                  }
                else
                  {
                    t = y_15;
                    {
                      ATerm a_16 = t;
                      int b_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(b_16);
                        }
                      else
                        {
                          t = a_16;
                          if(match_cons(t, sym__4))
                            {
                              ATerm e_16 = ATgetArgument(t, 0);
                              ATerm f_16 = ATgetArgument(t, 1);
                              ATerm g_16 = ATgetArgument(t, 2);
                              ATerm h_16 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(i_14);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(i_14), a_14, c_14, n_16);
                          t = t_6(a_14, c_14, n_16, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = n_16;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  static ATerm x_18 (ATerm t)
  {
    ATerm k_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = k_16;
        {
          ATerm d_18 = NULL,g_18 = NULL,h_18 = NULL,j_18 = NULL,s_18 = NULL,w_18 = NULL,g_2 = NULL;
          t = x_88(t);
          w_18 = t;
          if(match_cons(t, sym__2))
            {
              g_18 = ATgetArgument(t, 0);
              h_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_18);
          d_18 = t;
          t = g_18;
          t = z_88(t);
          j_18 = t;
          t = h_18;
          t = x_18(t);
          s_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_18, s_18);
          g_2 = t;
          t = SSLsetAnnotations(g_2, d_18);
          t = y_88(t);
        }
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      ATerm c_17 = ATgetArgument(t, 1);
      if(((ATgetType(c_17) != AT_LIST) || !(ATisEmpty(c_17))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      {
        ATerm d_17 = ATgetArgument(t, 1);
        if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
          {
            d_19 = ATgetFirst((ATermList) d_17);
            e_19 = (ATerm) ATgetNext((ATermList) d_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_13;
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_19, term_j_13);
  t = i_8(c_19, g_19, t);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_19, d_19), (ATerm) ATmakeAppl(sym__2, f_19, e_19));
  return(t);
}
static ATerm f_2 (ATerm t)
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
  return(t);
}
ATerm nzip_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, y_18);
  t = genzip_4_0(d_2, e_2, f_2, i_89, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,u_19 = NULL;
  q_19 = t;
  t = term_i_17;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, q_19);
  t = l_8(u_19, q_19, t);
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_19;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(i_2, t);
  t = (ATerm) ATmakeAppl(sym__2, s_19, r_19);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(d_20, e_20, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL;
  static ATerm u_2 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_2 (ATerm t)
            {
              t = not_null(b_20);
              return(t);
            }
            t = Instantiate_1_0(v_2, t);
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
      }
    return(t);
  }
  c_20 = t;
  t = SSL_explode_term(c_20);
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_19;
  t = foldr_3_0(m_2, n_2, o_2, t);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_19, (ATerm) ATinsert(ATempty, y_19));
  {
    ATerm p_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = p_17;
        t = debug_1_0(p_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_19;
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
      if(match_cons(t, sym__2))
        {
          g_20 = ATgetArgument(t, 0);
          h_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, y_19);
      i_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, g_20, (ATerm)ATinsert(ATempty, y_19), h_20);
      t = f_7(g_20, i_20, h_20, t);
      return(t);
    }
    t = nzip_1_0(q_2, t);
  }
  if(((b_20 != NULL) && (b_20 != t)))
    _fail(t);
  else
    b_20 = t;
  t = z_19;
  t = bottomup_1_0(u_2, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  t = SSL_explode_term(s_20);
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      ATerm w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_17 = ATgetFirst((ATermList) t);
          ATerm y_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_20;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5 = NULL,o_5 = NULL;
      o_5 = t;
      t = SSL_is_string(o_5);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, n_5);
      LocalPopChoice(f_18);
    }
  else
    {
      t = c_18;
      {
        ATerm i_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
            x_5 = t;
            t = SSL_is_int(x_5);
            w_5 = t;
            t = SSL_int_to_string(w_5);
            v_5 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, v_5);
            LocalPopChoice(l_18);
          }
        else
          {
            t = i_18;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  {
                    ATerm o_18 = t;
                    int p_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        LocalPopChoice(p_18);
                      }
                    else
                      {
                        t = o_18;
                        {
                          ATerm t_21 = NULL,a_6 = NULL,b_6 = NULL,f_6 = NULL;
                          t_21 = t;
                          t = term_q_18;
                          b_6 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, t_21), term_r_18);
                          f_6 = t;
                          t = SSL_printnl(b_6, f_6);
                          t = term_j_13;
                          a_6 = t;
                          t = SSL_exit(a_6);
                          t = (ATerm) ATinsert(ATinsert(ATempty, t_21), term_r_18);
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
static ATerm j_7 (ATerm k_29, ATerm l_29, ATerm t)
{
  ATerm w_21 = NULL;
  t = SSL_write_term_to_stream_baf(k_29, l_29);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_21);
  return(t);
}
static ATerm k_7 (ATerm p_85 (ATerm), ATerm m_310, ATerm u_29, ATerm t)
{
  ATerm x_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_310, term_t_18);
  t = g_8(t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_21, u_29);
  t = p_85(t);
  t = fclose_0_0(t);
  t = u_29;
  return(t);
}
static ATerm l_7 (ATerm f_96 (ATerm), ATerm d_43, ATerm b_43, ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  t = f_96(t);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_21, d_43, b_43);
  t = m_8(y_21, d_43, b_43, t);
  {
    ATerm b_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        t = term_m_19;
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_21, term_m_19);
        t = l_8(y_21, e_22, t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_21 = ATgetFirst((ATermList) t);
      a_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_m_19;
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(a_22), (ATerm) ATinsert(CheckATermList(z_21), d_43));
  d_22 = t;
  t = SSL_table_put(y_21, c_22, d_22);
  t = b_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_22 = NULL,l_6 = NULL;
      p_22 = t;
      t = term_v_19;
      l_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_22, term_v_19);
      t = e_8(p_22, l_6, t);
      g_22 = t;
      t = SSL_mkstemp(g_22);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm q_22 = NULL;
        t = term_a_20;
        q_22 = t;
        t = SSL_perror(q_22);
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
static ATerm x_2 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,x_22 = NULL,a_23 = NULL,b_23 = NULL;
  t = P__tmpdir_0_0(t);
  a_23 = t;
  t = term_k_20;
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_23, term_k_20);
  t = e_8(a_23, b_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_12;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_22, term_a_12);
  t = l_7(x_2, t_22, x_22, t);
  t = SSL_close(s_22);
  t = t_22;
  return(t);
}
static ATerm m_7 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_access(g_42, h_42);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_23 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_m_20);
      k_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_23, (ATerm) ATinsert(ATempty, term_m_20));
      t = m_7(g_23, k_23, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym_Stream_1))
        {
          s_23 = ATgetArgument(n_20, 0);
        }
      else
        _fail(t);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(s_23, t_23, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  t = read_from_0_0(t);
  t = a_78(t);
  o_23 = t;
  t = xtc_new_file_0_0(t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
  t = k_7(z_2, n_23, o_23, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
  return(t);
}
static ATerm o_7 (ATerm q_21, ATerm r_21, ATerm t)
{
  ATerm u_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
        t = l_8(q_21, r_21, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_20 = ATgetFirst((ATermList) t);
            u_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_20);
        t = SSL_table_put(q_21, r_21, u_23);
        t = (ATerm) ATmakeAppl(sym__3, q_21, r_21, u_23);
      }
    else
      {
        t = o_20;
        t = SSL_table_remove(q_21, r_21);
        t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
      }
  }
  t = w_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,f_24 = NULL;
  b_24 = t;
  t = c_96(t);
  a_24 = t;
  {
    ATerm r_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL;
        t = term_m_19;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_24, term_m_19);
        t = l_8(a_24, g_24, t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = r_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_23 = ATgetFirst((ATermList) t);
      y_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_m_19;
  f_24 = t;
  t = SSL_table_put(a_24, f_24, y_23);
  t = z_23;
  {
    static ATerm b_3 (ATerm t)
    {
      ATerm h_24 = NULL;
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, h_24);
      t = o_7(a_24, h_24, t);
      return(t);
    }
    t = map_1_0(b_3, t);
  }
  t = b_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_82(t);
      t = m_82(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = m_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,m_24 = NULL,n_24 = NULL,q_24 = NULL;
  k_24 = t;
  t = b_96(t);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, term_m_19);
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            ATerm b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_19;
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_24, term_m_19);
        t = l_8(j_24, v_24, t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = (ATerm) ATempty;
      }
  }
  m_24 = t;
  t = term_m_19;
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(m_24), (ATerm) ATempty);
  q_24 = t;
  t = SSL_table_put(j_24, n_24, q_24);
  t = k_24;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  {
    ATerm c_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_25);
        LocalPopChoice(e_21);
      }
    else
      {
        t = c_21;
        t = g_25;
      }
  }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_78 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  static ATerm f_3 (ATerm t)
  {
    ATerm z_24 = NULL;
    z_24 = t;
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_25 = NULL,b_25 = NULL;
          t = term_j_20;
          a_25 = t;
          t = term_m_19;
          b_25 = t;
          t = term_h_21;
          t = l_8(a_25, b_25, t);
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_24 != NULL) && (y_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_24 = ATgetFirst((ATermList) t);
        {
          ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_24;
    t = map_1_0(k_3, t);
    t = z_24;
    t = end_scope_1_0(l_3, t);
    return(t);
  }
  t = begin_scope_1_0(e_3, t);
  t = restore_always_2_0(l_78, f_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(a_9);
  f_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_9), term_n_21), f_9), term_j_21);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,o_26 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Path1_1))
    {
      m_26 = ATgetArgument(t, 0);
      t = m_26;
    }
  else
    {
      ATerm w_8 = NULL,z_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          m_26 = ATgetArgument(t, 0);
          o_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_26;
      t = map_1_0(m_3, t);
      t = concat_0_0(t);
      w_8 = t;
      t = (ATerm) ATinsert(CheckATermList(w_8), m_26);
      z_8 = t;
      t = SSL_concat_strings(z_8);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_26;
      t = a_94(t);
    }
  else
    {
      ATerm g_27 = NULL,j_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_26 = ATgetFirst((ATermList) t);
          a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_26;
      t = c_94(t);
      g_27 = t;
      t = a_27;
      t = foldr_3_0(a_94, b_94, c_94, t);
      j_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_27, j_27);
      t = b_94(t);
    }
  return(t);
}
static ATerm p_7 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm s_38, ATerm r_38, ATerm t)
{
  t = h_91(t);
  {
    static ATerm n_3 (ATerm t)
    {
      ATerm k_27 = NULL;
      k_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_38, k_27);
      t = g_91(t);
      return(t);
    }
    t = fetch_1_0(n_3, t);
  }
  t = r_38;
  return(t);
}
static ATerm q_7 (ATerm d_91 (ATerm), ATerm o_38, ATerm n_38, ATerm t)
{
  static ATerm f_28 (ATerm t)
  {
    ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
    a_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_28 = ATgetFirst((ATermList) t);
            c_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_28;
              {
                static ATerm p_3 (ATerm t)
                {
                  t = n_38;
                  return(t);
                }
                t = p_7(d_91, p_3, b_28, c_28, t);
              }
              t = f_28(t);
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm a_10 = NULL,s_10 = NULL,w_2 = NULL;
                t = SSLgetAnnotations(a_28);
                a_10 = t;
                t = c_28;
                t = f_28(t);
                s_10 = t;
                t = (ATerm) ATinsert(CheckATermList(s_10), b_28);
                w_2 = t;
                t = SSLsetAnnotations(w_2, a_10);
              }
            }
        }
      }
    return(t);
  }
  t = o_38;
  t = f_28(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm s_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_28 = NULL;
      t = x_92(t);
      l_28 = t;
      t = (ATerm) ATinsert(ATempty, l_28);
      LocalPopChoice(u_21);
    }
  else
    {
      t = s_21;
      {
        ATerm z_10 = NULL,a_11 = NULL;
        static ATerm s_3 (ATerm t)
        {
          t = collect_om_2_0(x_92, y_92, t);
          return(t);
        }
        a_11 = t;
        t = SSL_explode_term(a_11);
        if(match_cons(t, sym__2))
          {
            ATerm h_22 = ATgetArgument(t, 0);
            z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_10;
        t = foldr_3_0(q_3, y_92, s_3, t);
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,y_2 = NULL;
  o_28 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_28);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, n_28);
  y_2 = t;
  t = SSLsetAnnotations(y_2, m_28);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(v_3, q_28, r_28, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      if((t_28 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(u_28, v_28, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm arity_of_template_0_0 (ATerm t)
{
  t = collect_om_2_0(t_3, u_3, t);
  t = foldr_3_0(x_3, y_3, z_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm l_30 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      l_30 = ATgetArgument(t, 0);
      {
        ATerm i_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_30;
  return(t);
}
ATerm mk_key_arity_0_0 (ATerm t)
{
  ATerm j_29 = NULL,s_29 = NULL,a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      s_29 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_29;
  if(match_cons(t, sym_Path_2))
    {
      a_30 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      {
        ATerm e_30 = NULL;
        t = j_29;
        t = map_1_0(b_4, t);
        e_30 = t;
        t = (ATerm) ATinsert(CheckATermList(e_30), a_30);
      }
    }
  else
    {
      ATerm y_30 = NULL;
      if(match_cons(t, sym_Path1_1))
        {
          a_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_30;
      t = arity_of_template_0_0(t);
      y_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, (ATerm) ATinsert(ATempty, a_30));
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = debug_1_0(d_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm r_7 (ATerm f_52, ATerm g_52, ATerm t)
{
  ATerm e_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  t = mk_key_arity_0_0(t);
  g_31 = t;
  t = term_i_17;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_52, g_52);
  i_31 = t;
  t = SSL_table_put(h_31, g_31, i_31);
  t = f_52;
  t = path_to_string_0_0(t);
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_31, g_52);
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  static ATerm f_32 (ATerm t)
  {
    ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
    ATerm k_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_83(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = k_22;
      }
    e_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_32 = ATgetFirst((ATermList) t);
        d_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_11 = NULL,z_11 = NULL,a_3 = NULL;
          t = SSLgetAnnotations(e_32);
          w_11 = t;
          t = d_32;
          t = f_32(t);
          z_11 = t;
          t = (ATerm) ATinsert(CheckATermList(z_11), c_32);
          a_3 = t;
          t = SSLsetAnnotations(a_3, w_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_32;
      }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm at_last_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm h_33 (ATerm t)
  {
    ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
    e_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_33 = ATgetFirst((ATermList) t);
        g_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_13 = NULL,c_3 = NULL;
          t = SSLgetAnnotations(e_33);
          d_13 = t;
          t = g_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_33), f_33);
          c_3 = t;
          t = SSLsetAnnotations(c_3, d_13);
          t = u_87(t);
          LocalPopChoice(r_22);
        }
      else
        {
          t = o_22;
          {
            ATerm q_13 = NULL,t_13 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(e_33);
            q_13 = t;
            t = g_33;
            t = h_33(t);
            t_13 = t;
            t = (ATerm) ATinsert(CheckATermList(t_13), f_33);
            d_3 = t;
            t = SSLsetAnnotations(d_3, q_13);
          }
        }
    }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_33 = ATgetFirst((ATermList) t);
      o_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_33;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_33;
    }
  else
    {
      t = o_33;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm y_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_22 = ATgetFirst((ATermList) t);
      y_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_33;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_33 = ATgetFirst((ATermList) t);
      {
        ATerm v_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_33;
  t = i_83(t);
  t = v_33;
  t = last_0_0(t);
  t = j_83(t);
  t = v_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_22 = ATgetFirst((ATermList) t);
      w_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_33;
  t = at_last_1_0(e_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,j_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      f_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_17;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = f_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(j_17), term_y_22);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(j_17), term_z_22);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(j_17), term_e_23);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(j_17), term_f_23);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(j_17), term_h_23);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  if(match_cons(t, sym_Arg_1))
    {
      v_36 = ATgetArgument(t, 0);
      {
        ATerm f_14 = NULL,h_14 = NULL,g_3 = NULL;
        t = SSLgetAnnotations(u_36);
        f_14 = t;
        t = SSL_string_to_int(v_36);
        h_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, h_14);
        g_3 = t;
        t = SSLsetAnnotations(g_3, f_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          v_36 = ATgetArgument(t, 0);
          w_36 = ATgetArgument(t, 1);
          {
            ATerm y_14 = NULL,c_15 = NULL,d_15 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(u_36);
            y_14 = t;
            t = SSL_string_to_int(v_36);
            c_15 = t;
            t = SSL_string_to_int(w_36);
            d_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, c_15, d_15);
            h_3 = t;
            t = SSLsetAnnotations(h_3, y_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              v_36 = ATgetArgument(t, 0);
              w_36 = ATgetArgument(t, 1);
              {
                ATerm r_15 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(u_36);
                r_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, v_36, w_36);
                j_3 = t;
                t = SSLsetAnnotations(j_3, r_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  v_36 = ATgetArgument(t, 0);
                  {
                    ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,o_3 = NULL;
                    t = SSLgetAnnotations(u_36);
                    l_16 = t;
                    t = SSL_explode_string(v_36);
                    t = unquote_chars_2_0(f_4, g_4, t);
                    r_16 = t;
                    t = SSL_implode_string(r_16);
                    q_16 = t;
                    t = SSL_explode_string(q_16);
                    t = unescape_chars_1_0(j_4, t);
                    p_16 = t;
                    t = SSL_implode_string(p_16);
                    o_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, o_16);
                    o_3 = t;
                    t = SSLsetAnnotations(o_3, l_16);
                  }
                }
              else
                {
                  ATerm e_18 = NULL,k_18 = NULL,r_3 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      v_36 = ATgetArgument(t, 0);
                      w_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_36);
                  e_18 = t;
                  t = SSL_string_to_int(v_36);
                  k_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, k_18, w_36);
                  r_3 = t;
                  t = SSLsetAnnotations(r_3, e_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t)
  {
    t = topdown_1_0(e_79, t);
    return(t);
  }
  t = e_79(t);
  t = SRTS_all(k_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm h_37 = NULL,k_37 = NULL;
  t = topdown_1_0(p_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      h_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(h_37, k_37, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
static ATerm a_8 (ATerm e_52, ATerm t)
{
  t = e_52;
  t = reverse_acc_2_0(_id, m_4, t);
  t = map_1_0(n_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  static ATerm n_37 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_80(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = SRTS_one(n_37, t);
      }
    return(t);
  }
  t = n_37(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  t = term_q_23;
  o_37 = t;
  t = term_r_23;
  p_37 = t;
  t = term_v_23;
  t = l_8(o_37, p_37, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
      t = term_d_24;
      t = get_options_0_0(t);
      t = oncetd_1_0(q_4, t);
      t = term_q_18;
      r_37 = t;
      t = (ATerm) ATinsert(ATempty, term_e_24);
      s_37 = t;
      t = SSL_printnl(r_37, s_37);
      t = term_j_13;
      q_37 = t;
      t = SSL_exit(q_37);
      t = (ATerm) ATinsert(ATempty, term_e_24);
      LocalPopChoice(c_24);
    }
  else
    {
      t = x_23;
      {
        ATerm u_37 = NULL,v_37 = NULL;
        t = term_q_18;
        u_37 = t;
        t = (ATerm) ATinsert(ATempty, term_l_24);
        v_37 = t;
        t = SSL_printnl(u_37, v_37);
        t = (ATerm) ATinsert(ATempty, term_l_24);
      }
    }
  return(t);
}
static ATerm q_38 (ATerm g_38, ATerm t)
{
  t = SSL_fclose(g_38);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  m_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_38 = ATgetArgument(t, 0);
      {
        ATerm o_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_38);
            LocalPopChoice(r_24);
          }
        else
          {
            t = o_24;
            t = q_38(m_38, t);
          }
      }
    }
  else
    {
      t = q_38(m_38, t);
    }
  return(t);
}
static ATerm d_8 (ATerm q_29, ATerm t)
{
  t = SSL_read_term_from_stream(q_29);
  return(t);
}
static ATerm e_8 (ATerm z_28, ATerm a_29, ATerm t)
{
  t = SSL_strcat(z_28, a_29);
  return(t);
}
static ATerm f_8 (ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm u_38 = NULL;
  t = SSL_fopen(p_42, q_42);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_38);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_38 = NULL;
  t = SSL_stdin_stream();
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_38);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_38 = NULL;
  t = SSL_stdout_stream();
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_38);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_38 = NULL;
  t = SSL_stderr_stream();
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_38);
  return(t);
}
static ATerm q_40 (ATerm f_39, ATerm t)
{
  ATerm g_39 = NULL;
  t = SSL_explode_term(f_39);
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
          {
            g_39 = ATgetFirst((ATermList) u_24);
            {
              ATerm w_24 = (ATerm) ATgetNext((ATermList) u_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_40 (ATerm j_39, ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(m_39);
  p_39 = t;
  t = j_39;
  if(match_cons(t, sym_Path_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_39, l_39);
  h_4 = t;
  t = SSLsetAnnotations(h_4, p_39);
  if(match_cons(t, sym__2))
    {
      n_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(n_39, o_39, t);
  return(t);
}
static ATerm s_40 (ATerm u_39, ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,f_40 = NULL,j_40 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(w_39);
  f_40 = t;
  t = SSL_is_string(u_39);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_40, v_39);
  i_4 = t;
  t = SSLsetAnnotations(i_4, f_40);
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(b_40, c_40, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      {
        ATerm x_24 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_40(l_40, t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = x_24;
            {
              ATerm d_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_40(m_40, n_40, l_40, t);
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = d_25;
                  t = s_40(m_40, n_40, l_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_40(l_40, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,d_41 = NULL;
  d_41 = t;
  {
    ATerm f_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_41, term_i_25);
        t = g_8(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = f_25;
        {
          ATerm p_19 = NULL,t_19 = NULL;
          t = term_j_25;
          t_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_25, d_41);
          t = e_8(t_19, d_41, t);
          p_19 = t;
          t = SSL_perror(p_19);
          _fail(t);
        }
      }
  }
  v_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(w_40, t);
  u_40 = t;
  t = v_40;
  t = fclose_0_0(t);
  t = u_40;
  return(t);
}
ATerm debug_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,n_41 = NULL,q_41 = NULL,r_41 = NULL;
  j_41 = t;
  t = n_85(t);
  n_41 = t;
  t = term_q_18;
  q_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_41), n_41);
  r_41 = t;
  t = SSL_printnl(q_41, r_41);
  t = j_41;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm w_41 = NULL,y_41 = NULL,f_20 = NULL,l_20 = NULL;
  t = if_verbose1_1_0(a_5, t);
  t = ReadFromFile_0_0(t);
  y_41 = t;
  t = SSL_explode_term(y_41);
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm k_25 = ATgetArgument(t, 1);
        if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
          {
            f_20 = ATgetFirst((ATermList) k_25);
            {
              ATerm l_25 = (ATerm) ATgetNext((ATermList) k_25);
              if(((ATgetType(l_25) != AT_LIST) || !(ATisEmpty(l_25))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_20;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = f_20;
  if(match_cons(t, sym_PP_Table_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(w_41, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = debug_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL;
  u_41 = t;
  t = term_i_17;
  v_41 = t;
  t = SSL_table_create(v_41);
  t = u_41;
  t = map_1_0(y_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_42 = NULL,c_42 = NULL;
      t = term_x_10;
      a_42 = t;
      t = term_q_25;
      c_42 = t;
      t = term_r_25;
      t = l_8(a_42, c_42, t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL,t_42 = NULL,u_42 = NULL;
      t = term_x_10;
      t_42 = t;
      t = term_v_25;
      u_42 = t;
      t = term_w_25;
      t = l_8(t_42, u_42, t);
      o_42 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_42);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = term_k_11;
    }
  t = xtc_io_transform_1_0(i_5, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL;
        v_42 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_25 = ATgetFirst((ATermList) t);
                ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_42;
          }
        LocalPopChoice(y_25);
        {
          ATerm k_43 = NULL;
          k_43 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, k_43);
        }
      }
    else
      {
        t = x_25;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, f_5, t);
  t = read_pp_tables_0_0(t);
  t = j_42;
  t = xtc_temp_files_1_0(h_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  m_43 = t;
  t = term_a_12;
  t = whoami_0_0(t);
  o_43 = t;
  t = term_q_18;
  q_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_26), o_43), term_b_26);
  r_43 = t;
  t = SSL_printnl(q_43, r_43);
  t = term_j_13;
  p_43 = t;
  t = SSL_exit(p_43);
  t = m_43;
  return(t);
}
ATerm at_end_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  static ATerm g_45 (ATerm t)
  {
    ATerm c_45 = NULL,e_45 = NULL,f_45 = NULL;
    f_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_45 = ATgetFirst((ATermList) t);
        e_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_20 = NULL,d_21 = NULL,l_4 = NULL;
          t = SSLgetAnnotations(f_45);
          u_20 = t;
          t = e_45;
          t = g_45(t);
          d_21 = t;
          t = (ATerm) ATinsert(CheckATermList(d_21), c_45);
          l_4 = t;
          t = SSLsetAnnotations(l_4, u_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_45;
        t = j_87(t);
      }
    return(t);
  }
  t = g_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_43;
    }
  else
    {
      static ATerm l_5 (ATerm t)
      {
        t = not_null(x_43);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_43 = ATgetFirst((ATermList) t);
          if(((x_43 != NULL) && (x_43 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_43;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
static ATerm v_45 (ATerm l_45, ATerm t)
{
  ATerm m_45 = NULL;
  t = SSL_explode_term(l_45);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_45;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  q_45 = t;
  if(match_cons(t, sym__2))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_5 (ATerm t)
            {
              t = p_45;
              return(t);
            }
            t = o_45;
            t = at_end_1_0(t_5, t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = v_45(q_45, t);
          }
      }
    }
  else
    {
      t = v_45(q_45, t);
    }
  return(t);
}
static ATerm h_8 (ATerm a_19, ATerm z_18, ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,b_46 = NULL;
  t = a_19;
  {
    ATerm g_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_46 = NULL;
        t = term_x_10;
        c_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, a_19);
        t = l_8(c_46, a_19, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATempty;
      }
  }
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, y_45);
  t = conc_0_0(t);
  x_45 = t;
  t = term_x_10;
  b_46 = t;
  t = SSL_table_put(b_46, a_19, x_45);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, a_19, x_45);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm d_46 = NULL,f_46 = NULL,g_46 = NULL;
  d_46 = t;
  t = term_q_25;
  f_46 = t;
  t = (ATerm) ATinsert(ATempty, d_46);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATempty, d_46));
  t = h_8(f_46, g_46, t);
  t = d_46;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, y_5, z_5, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm n_46 = NULL;
  n_46 = t;
  if(match_string(t, "-k"))
    {
      t = n_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_46;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  t = SSL_string_to_int(o_46);
  p_46 = t;
  t = term_k_26;
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, p_46);
  t = o_8(q_46, p_46, t);
  t = o_46;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  if(match_string(t, "-S"))
    {
      t = u_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_46;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  t = term_q_26;
  v_46 = t;
  t = term_m_13;
  w_46 = t;
  t = term_r_26;
  t = o_8(v_46, w_46, t);
  t = term_s_26;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_t_26;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,b_47 = NULL;
  x_46 = t;
  t = SSL_string_to_int(x_46);
  y_46 = t;
  t = term_q_26;
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, y_46);
  t = o_8(b_47, y_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_46);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_v_26;
  c_47 = t;
  t = term_a_12;
  d_47 = t;
  t = term_w_26;
  t = o_8(c_47, d_47, t);
  t = term_x_26;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, k_6, m_6, t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = c_27;
      {
        ATerm f_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_6, p_6, q_6, t);
            LocalPopChoice(l_27);
          }
        else
          {
            t = f_27;
            t = Option_3_0(r_6, s_6, x_6, t);
          }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm u_18, ATerm v_18, ATerm t)
{
  ATerm g_47 = NULL;
  t = term_x_10;
  g_47 = t;
  t = SSL_table_put(g_47, u_18, v_18);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, u_18, v_18);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_47 = NULL,p_47 = NULL,s_47 = NULL;
      t = term_a_12;
      t = e_0(t);
      o_47 = t;
      t = term_m_27;
      p_47 = t;
      t = term_n_27;
      s_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, o_47);
      t = m_8(p_47, s_47, o_47, t);
      _fail(t);
    }
  else
    {
      ATerm v_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_47 = ATgetFirst((ATermList) t);
          m_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_47;
      t = c_0(t);
      t = term_a_12;
      t = d_0(t);
      v_47 = t;
      t = (ATerm) ATinsert(CheckATermList(m_47), v_47);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  if(match_string(t, "-o"))
    {
      t = x_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  y_47 = t;
  t = term_e_11;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, y_47);
  t = o_8(z_47, y_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_47);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, e_7, g_7, t);
  return(t);
}
static ATerm m_8 (ATerm l_21, ATerm m_21, ATerm k_21, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,f_48 = NULL;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  {
    ATerm p_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_27 = ATgetArgument(t, 0);
            ATerm u_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
        t = l_8(l_21, m_21, t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATempty;
      }
  }
  c_48 = t;
  t = (ATerm) ATinsert(CheckATermList(c_48), k_21);
  f_48 = t;
  t = SSL_table_put(l_21, m_21, f_48);
  t = b_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
      t = term_a_12;
      t = n_0(t);
      s_48 = t;
      t = term_m_27;
      t_48 = t;
      t = term_n_27;
      u_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, s_48);
      t = m_8(t_48, u_48, s_48, t);
      _fail(t);
    }
  else
    {
      ATerm y_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_48 = ATgetFirst((ATermList) t);
          p_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_48 = ATgetFirst((ATermList) t);
          r_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_48;
      t = k_0(t);
      t = q_48;
      t = l_0(t);
      y_48 = t;
      t = (ATerm) ATinsert(CheckATermList(r_48), y_48);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  if(match_string(t, "-i"))
    {
      t = b_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_49;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  c_49 = t;
  t = term_v_25;
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_25, c_49);
  t = o_8(d_49, c_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_49);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_7, u_7, v_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,j_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_12;
  t = whoami_0_0(t);
  e_49 = t;
  t = term_q_18;
  g_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_27), e_49);
  j_49 = t;
  t = SSL_printnl(g_49, j_49);
  t = term_j_13;
  f_49 = t;
  t = SSL_exit(f_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_49 = NULL,r_49 = NULL;
  t = term_x_10;
  k_49 = t;
  t = term_y_27;
  r_49 = t;
  t = term_z_27;
  t = l_8(k_49, r_49, t);
  return(t);
}
static ATerm i_8 (ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_30, v_30);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = SSL_addr(u_30, v_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,w_49 = NULL;
  t_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_49;
      t = y_93(t);
    }
  else
    {
      ATerm z_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_49 = ATgetFirst((ATermList) t);
          w_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_49;
      t = foldr_2_0(y_93, z_93, t);
      z_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_49, z_49);
      t = z_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(l_22, m_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_50 = NULL,v_21 = NULL,f_22 = NULL;
  t = times_0_0(t);
  f_22 = t;
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_21;
  t = foldr_2_0(y_7, z_7, t);
  d_50 = t;
  t = SSL_TicksToSeconds(d_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
  r_50 = t;
  if(match_cons(t, sym__2))
    {
      s_50 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_50;
        if((s_50 != t))
          {
            _fail(t);
          }
        t = r_50;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATmakeAppl(sym__2, s_50, t_50);
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_50, t_50);
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              t = SSL_gtr(s_50, t_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_50, t_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  {
    ATerm p_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL,e_51 = NULL,f_51 = NULL;
        t = term_x_10;
        e_51 = t;
        t = term_q_26;
        f_51 = t;
        t = term_w_28;
        t = l_8(e_51, f_51, t);
        b_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_51, term_j_13);
        t = geq_0_0(t);
        t = x_50;
        t = j_76(t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = p_28;
        t = x_50;
      }
  }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm h_51 = NULL,l_51 = NULL,r_51 = NULL,s_51 = NULL;
  t = run_time_0_0(t);
  h_51 = t;
  t = term_a_12;
  t = whoami_0_0(t);
  l_51 = t;
  t = term_q_18;
  r_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_28), h_51), term_x_28), l_51);
  s_51 = t;
  t = SSL_printnl(r_51, s_51);
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_28), h_51), term_x_28), l_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_13;
  v_51 = t;
  t = SSL_exit(v_51);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  h_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_53 = ATgetArgument(t, 0);
          {
            ATerm p_23 = NULL,o_4 = NULL;
            t = SSLgetAnnotations(h_53);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_53);
            o_4 = t;
            t = SSLsetAnnotations(o_4, p_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_52 = NULL,h_52 = NULL;
      t = term_x_10;
      c_52 = t;
      t = term_d_29;
      h_52 = t;
      t = term_e_29;
      t = l_8(c_52, h_52, t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      t = fetch_1_0(c_8, t);
    }
  t = l_97(t);
  return(t);
}
ATerm map_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  static ATerm k_54 (ATerm t)
  {
    ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
    h_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_54;
      }
    else
      {
        ATerm i_24 = NULL,p_24 = NULL,s_24 = NULL,r_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_54 = ATgetFirst((ATermList) t);
            j_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_54);
        i_24 = t;
        t = i_54;
        t = s_86(t);
        p_24 = t;
        t = j_54;
        t = k_54(t);
        s_24 = t;
        t = (ATerm) ATinsert(CheckATermList(s_24), p_24);
        r_4 = t;
        t = SSLsetAnnotations(r_4, i_24);
      }
    return(t);
  }
  t = k_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_54 = ATgetFirst((ATermList) t);
      q_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_54 = NULL,v_54 = NULL;
        static ATerm j_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_54)), not_null(v_54));
          return(t);
        }
        t = q_54;
        t = i_0(t);
        if(((u_54 != NULL) && (u_54 != t)))
          _fail(t);
        else
          u_54 = t;
        t = p_54;
        t = g_0(t);
        if(((v_54 != NULL) && (v_54 != t)))
          _fail(t);
        else
          v_54 = t;
        t = q_54;
        t = reverse_acc_2_0(g_0, j_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,z_4 = NULL;
  d_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_55);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_55);
  z_4 = t;
  t = SSLsetAnnotations(z_4, b_55);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_55), term_f_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_54 = NULL,a_55 = NULL;
      t = term_x_10;
      z_54 = t;
      t = term_y_27;
      a_55 = t;
      t = term_z_27;
      t = l_8(z_54, a_55, t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      t = fetch_1_0(n_8, t);
    }
  t = term_i_29;
  t = echo_0_0(t);
  t = term_m_27;
  x_54 = t;
  t = term_n_27;
  y_54 = t;
  t = term_m_29;
  t = l_8(x_54, y_54, t);
  t = reverse_acc_2_0(_id, p_8, t);
  t = map_1_0(q_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  static ATerm c_56 (ATerm t)
  {
    ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
    z_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_56 = ATgetFirst((ATermList) t);
        b_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_25 = NULL,s_25 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(z_55);
          m_25 = t;
          t = a_56;
          t = c_87(t);
          s_25 = t;
          t = (ATerm) ATinsert(CheckATermList(b_56), s_25);
          b_5 = t;
          t = SSLsetAnnotations(b_5, m_25);
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          {
            ATerm h_26 = NULL,n_26 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(z_55);
            h_26 = t;
            t = b_56;
            t = c_56(t);
            n_26 = t;
            t = (ATerm) ATinsert(CheckATermList(n_26), a_56);
            c_5 = t;
            t = SSLsetAnnotations(c_5, h_26);
          }
        }
    }
    return(t);
  }
  t = c_56(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  {
    ATerm p_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_29 = ATgetFirst((ATermList) t);
                ATerm v_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_56;
          }
        LocalPopChoice(r_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATinsert(ATempty, g_56);
      }
  }
  h_56 = t;
  t = term_h_11;
  i_56 = t;
  t = SSL_printnl(i_56, h_56);
  t = g_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  t = term_x_10;
  m_56 = t;
  t = term_y_27;
  n_56 = t;
  t = term_z_27;
  t = l_8(m_56, n_56, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm c_23, ATerm d_23, ATerm t)
{
  t = SSL_table_get(c_23, d_23);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  t = term_w_29;
  o_56 = t;
  t = term_a_12;
  p_56 = t;
  t = term_x_29;
  t = o_8(o_56, p_56, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
  t = term_w_29;
  s_56 = t;
  t = term_a_12;
  t_56 = t;
  t = term_x_29;
  t = o_8(s_56, t_56, t);
  t = term_z_29;
  q_56 = t;
  t = term_a_12;
  r_56 = t;
  t = term_c_30;
  t = o_8(q_56, r_56, t);
  t = term_d_30;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_8, y_8, c_9, t);
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      t = Option_3_0(d_9, g_9, h_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,d_11 = NULL;
  z_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_56 = ATgetFirst((ATermList) t);
      w_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_56);
  u_56 = t;
  t = v_56;
  t = i_71(t);
  x_56 = t;
  t = w_56;
  t = j_71(t);
  y_56 = t;
  t = (ATerm) ATinsert(CheckATermList(y_56), x_56);
  d_11 = t;
  t = SSLsetAnnotations(d_11, u_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,j_57 = NULL,k_57 = NULL,l_11 = NULL;
  e_57 = t;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_30;
        t = j_99(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
      }
  }
  t = e_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_57 = ATgetFirst((ATermList) t);
      h_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_57);
  f_57 = t;
  t = term_y_27;
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_27, g_57);
  t = o_8(k_57, g_57, t);
  t = h_57;
  {
    static ATerm u_57 (ATerm t)
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_57 = NULL;
              n_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_57;
              LocalPopChoice(p_30);
            }
          else
            {
              t = o_30;
              t = j_99(t);
              t = Cons_2_0(_id, u_57, t);
            }
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm q_57 = NULL,r_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_57 = ATgetFirst((ATermList) t);
                r_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_57), (ATerm) ATmakeAppl(sym_Undefined_1, q_57));
          }
        }
      return(t);
    }
    t = u_57(t);
  }
  j_57 = t;
  t = (ATerm) ATinsert(CheckATermList(j_57), (ATerm) ATmakeAppl(sym_Program_1, g_57));
  l_11 = t;
  t = SSLsetAnnotations(l_11, f_57);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  if(match_string(t, "--help"))
    {
      t = g_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_58;
        }
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  t = term_d_29;
  h_58 = t;
  t = term_a_12;
  i_58 = t;
  t = term_q_30;
  t = o_8(h_58, i_58, t);
  t = term_r_30;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_s_30;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  b_58 = t;
  t = term_m_27;
  d_58 = t;
  t = term_n_27;
  e_58 = t;
  t = (ATerm) ATempty;
  f_58 = t;
  t = SSL_table_put(d_58, e_58, f_58);
  t = b_58;
  {
    static ATerm i_9 (ATerm t)
    {
      ATerm t_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_99(t);
          LocalPopChoice(w_30);
        }
      else
        {
          t = t_30;
          {
            ATerm x_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_9, u_9, v_9, t);
                LocalPopChoice(z_30);
              }
            else
              {
                t = x_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_9, t);
  }
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_58 = NULL;
        t_58 = t;
        {
          ATerm f_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_27 = NULL;
              t = t_58;
              {
                ATerm k_31 = t;
                int l_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_27 = NULL,i_27 = NULL;
                    t = term_x_10;
                    h_27 = t;
                    t = term_d_29;
                    i_27 = t;
                    t = term_e_29;
                    t = l_8(h_27, i_27, t);
                    LocalPopChoice(l_31);
                  }
                else
                  {
                    t = k_31;
                    t = fetch_1_0(c_10, t);
                  }
              }
              t = t_58;
              t = default_system_usage_0_0(t);
              t = term_m_13;
              d_27 = t;
              t = SSL_exit(d_27);
              LocalPopChoice(j_31);
            }
          else
            {
              t = f_31;
              {
                ATerm q_27 = NULL,r_27 = NULL,v_27 = NULL;
                t = term_x_10;
                r_27 = t;
                t = term_w_29;
                v_27 = t;
                t = term_m_31;
                t = l_8(r_27, v_27, t);
                t = t_58;
                t = default_system_about_0_0(t);
                t = term_m_13;
                q_27 = t;
                t = SSL_exit(q_27);
              }
            }
        }
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
              static ATerm g_10 (ATerm t)
              {
                ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,x_20 = NULL;
                z_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_58);
                x_58 = t;
                t = y_58;
                if(((z_57 != NULL) && (z_57 != t)))
                  _fail(t);
                else
                  z_57 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_58);
                x_20 = t;
                t = SSLsetAnnotations(x_20, x_58);
                return(t);
              }
              t = fetch_1_0(g_10, t);
              t = term_q_18;
              v_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), term_p_31);
              w_58 = t;
              t = SSL_printnl(v_58, w_58);
              t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), term_p_31));
              t = default_system_usage_0_0(t);
              t = term_j_13;
              u_58 = t;
              t = SSL_exit(u_58);
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
            }
        }
      }
  }
  a_58 = t;
  t = term_m_27;
  c_58 = t;
  t = SSL_table_destroy(c_58);
  t = a_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  t = parse_options_1_0(n_97, t);
  e_59 = t;
  t = term_q_23;
  h_59 = t;
  t = SSL_table_create(h_59);
  t = term_q_23;
  f_59 = t;
  t = term_r_23;
  g_59 = t;
  t = SSL_table_put(f_59, g_59, e_59);
  t = e_59;
  t = p_97(t);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_97, t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_97(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
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
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_10, l_10, m_10, t);
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = a_32;
                  {
                    ATerm g_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = g_32;
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
                              t = pp_options_0_0(t);
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
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  t = term_k_32;
  j_59 = t;
  t = term_a_12;
  k_59 = t;
  t = term_l_32;
  t = o_8(j_59, k_59, t);
  t = term_m_32;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_10, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
