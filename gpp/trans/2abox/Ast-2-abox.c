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
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_q_29;
ATerm term_m_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_w_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_11;
ATerm term_l_10;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_f_18);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_v_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_s_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_y_23);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_f_12);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_12);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_c_11);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_r_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_k_25);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_k_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_j_26);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_c_11);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_c_11);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_c_11);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_e_28);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_c_11);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm g_7 (ATerm g_19, ATerm h_19, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm m_6 (ATerm a_18, ATerm b_18, ATerm z_17, ATerm t);
static ATerm i_9 (ATerm j_6, ATerm l_6, ATerm q_6, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm j_102 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm collect_p__1_0 (ATerm u_110 (ATerm), ATerm t);
static ATerm n_6 (ATerm p_31, ATerm q_31, ATerm t);
static ATerm o_6 (ATerm y_75 (ATerm), ATerm c_16, ATerm d_16, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm p_6 (ATerm r_17, ATerm t_17, ATerm q_17, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm r_6 (ATerm x_16, ATerm y_16, ATerm a_17, ATerm z_16, ATerm t);
static ATerm s_6 (ATerm s_16, ATerm t_16, ATerm w_16, ATerm v_16, ATerm u_16, ATerm t);
static ATerm u_6 (ATerm x_30, ATerm y_30, ATerm t);
static ATerm v_6 (ATerm n_35, ATerm l_35, ATerm m_35, ATerm t);
ATerm repeat_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm y_6 (ATerm j_16, ATerm i_16, ATerm n_16, ATerm t);
ATerm genzip_4_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm nzip_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm trm2abox_list_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
static ATerm c_7 (ATerm h_29, ATerm i_29, ATerm t);
static ATerm d_7 (ATerm n_85 (ATerm), ATerm b_309, ATerm r_29, ATerm t);
static ATerm e_7 (ATerm d_96 (ATerm), ATerm a_43, ATerm y_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm f_7 (ATerm d_42, ATerm e_42, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm y_77 (ATerm), ATerm t);
static ATerm h_7 (ATerm p_21, ATerm q_21, ATerm t);
ATerm end_scope_1_0 (ATerm a_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_95 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm i_7 (ATerm c_52, ATerm d_52, ATerm t);
ATerm unescape_chars_1_0 (ATerm u_83 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm unquote_chars_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_79 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm r_7 (ATerm b_52, ATerm t);
ATerm oncetd_1_0 (ATerm g_80 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm n_36 (ATerm h_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_7 (ATerm n_29, ATerm t);
static ATerm v_7 (ATerm w_28, ATerm x_28, ATerm t);
static ATerm w_7 (ATerm m_42, ATerm n_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_38 (ATerm z_36, ATerm t);
static ATerm c_38 (ATerm d_37, ATerm e_37, ATerm f_37, ATerm t);
static ATerm d_38 (ATerm n_37, ATerm o_37, ATerm p_37, ATerm t);
static ATerm x_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm l_85 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_43 (ATerm j_42, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm y_7 (ATerm z_18, ATerm y_18, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_8 (ATerm t_18, ATerm u_18, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_8 (ATerm k_21, ATerm l_21, ATerm j_21, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_7 (ATerm r_30, ATerm s_30, ATerm t);
ATerm foldr_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_76 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm need_help_1_0 (ATerm j_97 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_8 (ATerm b_23, ATerm c_23, ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_99 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm parse_options_1_0 (ATerm g_99 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_4 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = g_1;
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
        t = (ATerm) ATmakeAppl(sym__2, h_1, h_0);
        t = g_7(h_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
        LocalPopChoice(z_8);
      }
    else
      {
        t = z_4;
        {
          ATerm a_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_1 = NULL;
              t = g_1;
              t = o_0(t);
              a_1 = t;
              {
                ATerm f_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_1 = NULL;
                    c_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = c_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = c_1;
                          }
                        else
                          {
                            t = c_1;
                            if((h_1 != t))
                              {
                                _fail(t);
                              }
                            t = c_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_1, a_1);
              t = g_7(h_1, a_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
              LocalPopChoice(e_9);
            }
          else
            {
              t = a_9;
              t = g_1;
              t = o_0(t);
              if((h_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
            }
        }
      }
  }
  return(t);
}
static ATerm g_7 (ATerm g_19, ATerm h_19, ATerm t)
{
  t = SSL_copy(g_19, h_19);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm g_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL,k_2 = NULL;
      t = term_o_9;
      j_2 = t;
      t = term_p_9;
      k_2 = t;
      t = term_r_9;
      t = c_8(j_2, k_2, t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = g_9;
      t = term_v_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_1 = NULL,p_1 = NULL;
      t = term_p_9;
      {
        ATerm z_9 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            t = term_o_9;
            q_1 = t;
            t = term_p_9;
            r_1 = t;
            t = term_r_9;
            t = c_8(q_1, r_1, t);
            LocalPopChoice(f_10);
          }
        else
          {
            t = z_9;
            t = term_v_9;
          }
      }
      o_1 = t;
      t = term_l_10;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, o_1);
      t = g_7(p_1, o_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm u_4 = NULL,w_4 = NULL,x_4 = NULL;
  u_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_4 = ATgetFirst((ATermList) t);
          x_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 = NULL,f_2 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(u_4);
            b_2 = t;
            t = w_4;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_4;
            t = flat_list_0_0(t);
            f_2 = t;
            t = (ATerm) ATinsert(CheckATermList(f_2), w_4);
            s_0 = t;
            t = SSLsetAnnotations(s_0, b_2);
            LocalPopChoice(s_10);
          }
        else
          {
            t = p_10;
            {
              ATerm t_10 = t;
              int u_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_2 = NULL,t_2 = NULL,v_2 = NULL,b_3 = NULL,v_0 = NULL;
                  t = SSLgetAnnotations(u_4);
                  v_2 = t;
                  t = w_4;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = w_4;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm v_10 = ATgetFirst((ATermList) t);
                          ATerm x_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = w_4;
                    }
                  t = (ATerm) ATinsert(CheckATermList(x_4), w_4);
                  v_0 = t;
                  t = SSLsetAnnotations(v_0, v_2);
                  b_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm y_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = b_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_11 = ATgetFirst((ATermList) t);
                      r_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_2, r_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(u_10);
                }
              else
                {
                  t = t_10;
                  {
                    ATerm p_3 = NULL,t_3 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(u_4);
                    p_3 = t;
                    t = x_4;
                    t = flat_list_0_0(t);
                    t_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(t_3), w_4);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, p_3);
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
  ATerm e_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      g_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
      {
        ATerm k_5 = NULL,l_5 = NULL;
        t = term_c_11;
        t = p_0(t);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, l_5);
        t = index_0_0(t);
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_5, k_5);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm n_5 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          g_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_c_11;
      t = p_0(t);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, n_5);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(d_79, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = d_79(t);
  return(t);
}
static ATerm m_6 (ATerm a_18, ATerm b_18, ATerm z_17, ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  static ATerm j_0 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_0 (ATerm t)
            {
              t = not_null(q_5);
              return(t);
            }
            t = Instantiate_1_0(m_0, t);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
      }
    return(t);
  }
  t = SSL_explode_term(z_17);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5;
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym__2))
        {
          s_5 = ATgetArgument(t, 0);
          t_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_5, a_18, t_5);
      t = y_6(s_5, a_18, t_5, t);
      return(t);
    }
    t = nzip_1_0(f_0, t);
  }
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  t = b_18;
  t = bottomup_1_0(j_0, t);
  return(t);
}
static ATerm i_9 (ATerm j_6, ATerm l_6, ATerm q_6, ATerm t)
{
  ATerm j_7 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(q_6);
  j_7 = t;
  t = l_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_6), j_6);
  b_1 = t;
  t = SSLsetAnnotations(b_1, j_7);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  static ATerm h_9 (ATerm t)
  {
    static ATerm j_9 (ATerm n_7, ATerm o_7, ATerm s_7, ATerm b_8, ATerm t)
    {
      ATerm i_8 = NULL,j_8 = NULL,m_8 = NULL,d_1 = NULL;
      t = b_8;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_11 = ATgetFirst((ATermList) t);
          ATerm m_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_8);
      i_8 = t;
      t = term_c_11;
      t = j_102(t);
      {
        static ATerm q_0 (ATerm t)
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm r_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, o_7), n_7);
                    return(t);
                  }
                  t = Instantiate_1_0(r_0, t);
                  LocalPopChoice(s_11);
                }
              else
                {
                  t = r_11;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
            }
          return(t);
        }
        t = bottomup_1_0(q_0, t);
      }
      m_8 = t;
      t = s_7;
      t = h_9(t);
      j_8 = t;
      t = (ATerm) ATinsert(CheckATermList(j_8), m_8);
      d_1 = t;
      t = SSLsetAnnotations(d_1, i_8);
      return(t);
    }
    ATerm u_8 = NULL,v_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
    u_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_8;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_8 = ATgetFirst((ATermList) t);
            b_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_9;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_9 = ATgetFirst((ATermList) t);
            d_9 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_9(v_8, b_9, u_8, t);
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
                  t = j_9(v_8, c_9, d_9, u_8, t);
                }
            }
          }
        else
          {
            t = i_9(v_8, b_9, u_8, t);
          }
      }
    return(t);
  }
  t = h_9(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_9;
      t = y_93(t);
    }
  else
    {
      ATerm q_9 = NULL,s_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_9 = ATgetFirst((ATermList) t);
          n_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_9;
      t = a_94(t);
      q_9 = t;
      t = n_9;
      t = foldr_3_0(y_93, z_93, a_94, t);
      s_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_9, s_9);
      t = z_93(t);
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm u_110 (ATerm), ATerm t)
{
  static ATerm x_9 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        t = u_110(t);
        w_9 = t;
        t = (ATerm) ATinsert(ATempty, w_9);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          ATerm l_4 = NULL,p_4 = NULL;
          p_4 = t;
          t = SSL_explode_term(p_4);
          if(match_cons(t, sym__2))
            {
              ATerm z_11 = ATgetArgument(t, 0);
              l_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_4;
          t = foldr_3_0(t_0, conc_0_0, x_9, t);
        }
      }
    return(t);
  }
  t = x_9(t);
  return(t);
}
static ATerm n_6 (ATerm p_31, ATerm q_31, ATerm t)
{
  t = SSL_mod(p_31, q_31);
  return(t);
}
static ATerm o_6 (ATerm y_75 (ATerm), ATerm c_16, ATerm d_16, ATerm t)
{
  ATerm y_9 = NULL;
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
      t = term_d_12;
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_16, term_d_12);
      t = n_6(c_16, c_10, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_c_11;
      t = y_75(t);
      a_10 = t;
      t = term_d_12;
      b_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_12, a_10, d_16);
      t = y_6(b_10, a_10, d_16, t);
      y_9 = t;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm d_10 = NULL,e_10 = NULL;
        t = term_c_11;
        t = y_75(t);
        d_10 = t;
        t = term_e_12;
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_e_12, d_10, d_16);
        t = y_6(e_10, d_10, d_16, t);
        y_9 = t;
      }
    }
  t = y_9;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm k_10 = NULL,n_10 = NULL,o_10 = NULL,j_1 = NULL;
  o_10 = t;
  if(match_cons(t, sym_S_1))
    {
      n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_10);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, n_10);
  j_1 = t;
  t = SSLsetAnnotations(j_1, k_10);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(q_10, r_10, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_e_12;
  return(t);
}
static ATerm p_6 (ATerm r_17, ATerm t_17, ATerm q_17, ATerm t)
{
  ATerm h_10 = NULL;
  static ATerm i_1 (ATerm t)
  {
    t = t_17;
    return(t);
  }
  t = q_17;
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm i_10 = NULL,j_10 = NULL;
      static ATerm x_0 (ATerm t)
      {
        t = r_17;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          i_10 = ATgetArgument(t, 0);
          j_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_6(x_0, i_10, j_10, t);
      return(t);
    }
    t = nzip_1_0(u_0, t);
  }
  h_10 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_11 (ATerm t)
        {
          ATerm z_10 = NULL,a_11 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_10 = ATgetFirst((ATermList) t);
                  a_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_11;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm q_12 = t;
                  int r_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, z_10);
                      LocalPopChoice(r_12);
                    }
                  else
                    {
                      t = q_12;
                      {
                        ATerm f_11 = NULL;
                        t = a_11;
                        t = j_11(t);
                        f_11 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(f_11), z_10), z_10);
                      }
                    }
                }
              else
                {
                  ATerm i_11 = NULL;
                  t = a_11;
                  t = j_11(t);
                  i_11 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_11), z_10), z_10);
                }
            }
          return(t);
        }
        t = t_17;
        t = collect_p__1_0(y_0, t);
        t = foldr_3_0(z_0, e_1, f_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = h_10;
        t = j_11(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = h_10;
      }
  }
  t = instantiate_sep_list_1_0(i_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__4))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
      t_11 = ATgetArgument(t, 2);
      u_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = n_11;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, o_11, t_11, u_11);
      t = p_6(o_11, t_11, u_11, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_11, t_11, u_11);
      t = p_6(o_11, t_11, u_11, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  static ATerm l_1 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(i_12));
              return(t);
            }
            t = Instantiate_1_0(m_1, t);
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
      }
    return(t);
  }
  j_12 = t;
  if(match_cons(t, sym__4))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
      m_12 = ATgetArgument(t, 2);
      n_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_12;
  if(match_string(t, "iter"))
    {
      t = j_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = j_12;
    }
  t = n_12;
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm o_12 = NULL,p_12 = NULL;
      o_12 = t;
      t = term_e_12;
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_12, l_12, o_12);
      t = y_6(p_12, l_12, o_12, t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = m_12;
  t = bottomup_1_0(l_1, t);
  return(t);
}
static ATerm r_6 (ATerm x_16, ATerm y_16, ATerm a_17, ATerm z_16, ATerm t)
{
  ATerm x_12 = NULL,d_13 = NULL;
  static ATerm n_1 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(x_12));
              return(t);
            }
            t = Instantiate_1_0(t_1, t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = b_13;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    return(t);
  }
  t = term_e_12;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_12, y_16, z_16);
  t = y_6(d_13, y_16, z_16, t);
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = a_17;
  t = bottomup_1_0(n_1, t);
  return(t);
}
static ATerm s_6 (ATerm s_16, ATerm t_16, ATerm w_16, ATerm v_16, ATerm u_16, ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  static ATerm v_1 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(k_13));
              return(t);
            }
            t = Instantiate_1_0(w_1, t);
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, v_16, t_16, u_16);
  t = y_6(v_16, t_16, u_16, t);
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_16, w_16);
  t = index_0_0(t);
  j_13 = t;
  t = (ATerm) ATinsert(ATempty, j_13);
  t = bottomup_1_0(v_1, t);
  return(t);
}
static ATerm u_6 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_30, y_30);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      t = SSL_subtr(x_30, y_30);
    }
  return(t);
}
static ATerm v_6 (ATerm n_35, ATerm l_35, ATerm m_35, ATerm t)
{
  ATerm n_13 = NULL,s_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_35, term_d_12);
  t = geq_0_0(t);
  t = term_e_12;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_35, term_e_12);
  t = u_6(n_35, s_13, t);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_13, m_35);
  return(t);
}
ATerm repeat_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t)
{
  static ATerm t_13 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_83(t);
        t = t_13(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = z_83(t);
      }
    return(t);
  }
  t = t_13(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      {
        ATerm q_13 = ATgetArgument(t, 1);
        if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
          {
            e_14 = ATgetFirst((ATermList) q_13);
            f_14 = (ATerm) ATgetNext((ATermList) q_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_6(d_14, e_14, f_14, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = repeat_2_0(y_1, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      if(((ATgetType(r_13) != AT_INT) || (ATgetInt((ATermInt) r_13) != 1)))
        _fail(t);
      {
        ATerm v_13 = ATgetArgument(t, 1);
        if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
          {
            z_13 = ATgetFirst((ATermList) v_13);
            {
              ATerm w_13 = (ATerm) ATgetNext((ATermList) v_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_13;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(d_2, t);
          LocalPopChoice(g_14);
        }
      else
        {
          t = c_14;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm j_16, ATerm i_16, ATerm n_16, ATerm t)
{
  ATerm c_15 = NULL,h_15 = NULL,m_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATinsert(ATempty, j_16));
  t = conc_0_0(t);
  h_15 = t;
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL,q_15 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            c_15 = ATgetArgument(t, 0);
            m_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_15;
        if(match_cons(t, sym_Path_2))
          {
            ATerm j_14 = ATgetArgument(t, 0);
            p_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_15;
        {
          static ATerm z_1 (ATerm t)
          {
            ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,u_1 = NULL,s_1 = NULL;
            y_15 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_15 = ATgetFirst((ATermList) t);
                t_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_15);
            r_15 = t;
            t = s_15;
            if(match_cons(t, sym_selector_2))
              {
                v_15 = ATgetArgument(t, 0);
                w_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_15);
            u_15 = t;
            t = w_15;
            if(((q_15 != NULL) && (q_15 != t)))
              _fail(t);
            else
              q_15 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, v_15, w_15);
            s_1 = t;
            t = SSLsetAnnotations(s_1, u_15);
            x_15 = t;
            t = t_15;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_15), x_15);
            u_1 = t;
            t = SSLsetAnnotations(u_1, r_15);
            return(t);
          }
          t = at_last_1_0(z_1, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(q_15), h_15, m_15, n_16);
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_16 = NULL,g_16 = NULL,o_16 = NULL,c_17 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm n_14 = ATgetArgument(t, 0);
                  ATerm o_14 = ATgetArgument(t, 1);
                  ATerm p_14 = ATgetArgument(t, 2);
                  ATerm q_14 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = n_16;
              if(match_cons(t, sym_alt_2))
                {
                  c_17 = ATgetArgument(t, 0);
                  f_16 = ATgetArgument(t, 1);
                  t = f_16;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm g_18 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_17, m_15);
                      t = index_0_0(t);
                      g_18 = t;
                      t = (ATerm) ATinsert(ATempty, g_18);
                      t = bottomup_1_0(a_2, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_16 = ATgetFirst((ATermList) t);
                          o_16 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = o_16;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(q_15), h_15, m_15, n_16);
                      t = s_6(not_null(q_15), h_15, m_15, c_17, g_16, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      c_17 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(q_15), h_15, m_15, n_16);
                      t = r_6(not_null(q_15), h_15, m_15, c_17, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    {
                      ATerm t_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          if(match_cons(t, sym__4))
                            {
                              ATerm w_14 = ATgetArgument(t, 0);
                              ATerm b_15 = ATgetArgument(t, 1);
                              ATerm d_15 = ATgetArgument(t, 2);
                              ATerm j_15 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(q_15);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(q_15), h_15, m_15, n_16);
                          t = m_6(h_15, m_15, n_16, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = n_16;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  static ATerm r_19 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_88(t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        {
          ATerm k_19 = NULL,l_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,x_1 = NULL;
          t = v_88(t);
          q_19 = t;
          if(match_cons(t, sym__2))
            {
              l_19 = ATgetArgument(t, 0);
              n_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_19);
          k_19 = t;
          t = l_19;
          t = x_88(t);
          o_19 = t;
          t = n_19;
          t = r_19(t);
          p_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_19, p_19);
          x_1 = t;
          t = SSLsetAnnotations(x_1, k_19);
          t = w_88(t);
        }
      }
    return(t);
  }
  t = r_19(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      ATerm o_15 = ATgetArgument(t, 1);
      if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm z_15 = ATgetArgument(t, 1);
        if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
          {
            w_19 = ATgetFirst((ATermList) z_15);
            y_19 = (ATerm) ATgetNext((ATermList) z_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_12;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, term_e_12);
  t = z_7(v_19, a_20, t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_19, w_19), (ATerm) ATmakeAppl(sym__2, z_19, y_19));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_20), b_20);
  return(t);
}
ATerm nzip_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_12, t_19);
  t = genzip_4_0(e_2, g_2, h_2, g_89, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  d_20 = t;
  t = term_b_16;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, d_20);
  t = c_8(g_20, d_20, t);
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_20;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(i_2, t);
  t = (ATerm) ATmakeAppl(sym__2, f_20, e_20);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  static ATerm o_2 (ATerm t)
  {
    ATerm h_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_2 (ATerm t)
            {
              t = not_null(r_20);
              return(t);
            }
            t = Instantiate_1_0(p_2, t);
            LocalPopChoice(p_16);
          }
        else
          {
            t = m_16;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(k_16);
      }
    else
      {
        t = h_16;
      }
    return(t);
  }
  s_20 = t;
  t = SSL_explode_term(s_20);
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_20);
  {
    ATerm r_16 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = r_16;
        t = debug_1_0(m_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_20;
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
      if(match_cons(t, sym__2))
        {
          t_20 = ATgetArgument(t, 0);
          u_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, j_20);
      v_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_20, (ATerm)ATinsert(ATempty, j_20), u_20);
      t = y_6(t_20, v_20, u_20, t);
      return(t);
    }
    t = nzip_1_0(n_2, t);
  }
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = q_20;
  t = bottomup_1_0(o_2, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  t = SSL_explode_term(e_21);
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      ATerm f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm g_17 = ATgetFirst((ATermList) t);
          ATerm h_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_21;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL,o_5 = NULL;
      o_5 = t;
      t = SSL_is_string(o_5);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, h_5);
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = NULL,u_5 = NULL,x_5 = NULL;
            x_5 = t;
            t = SSL_is_int(x_5);
            u_5 = t;
            t = SSL_int_to_string(u_5);
            p_5 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, p_5);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  {
                    ATerm o_17 = t;
                    int u_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        LocalPopChoice(u_17);
                      }
                    else
                      {
                        t = o_17;
                        {
                          ATerm a_22 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
                          a_22 = t;
                          t = term_v_17;
                          b_6 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, a_22), term_w_17);
                          c_6 = t;
                          t = SSL_printnl(b_6, c_6);
                          t = term_e_12;
                          a_6 = t;
                          t = SSL_exit(a_6);
                          t = (ATerm) ATinsert(ATinsert(ATempty, a_22), term_w_17);
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
static ATerm c_7 (ATerm h_29, ATerm i_29, ATerm t)
{
  ATerm c_22 = NULL;
  t = SSL_write_term_to_stream_baf(h_29, i_29);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_22);
  return(t);
}
static ATerm d_7 (ATerm n_85 (ATerm), ATerm b_309, ATerm r_29, ATerm t)
{
  ATerm f_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_309, term_x_17);
  t = x_7(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, r_29);
  t = n_85(t);
  t = fclose_0_0(t);
  t = r_29;
  return(t);
}
static ATerm e_7 (ATerm d_96 (ATerm), ATerm a_43, ATerm y_42, ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  t = d_96(t);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_22, a_43, y_42);
  t = d_8(h_22, a_43, y_42, t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_22 = NULL;
        t = term_f_18;
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_22, term_f_18);
        t = c_8(h_22, t_22, t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_22 = ATgetFirst((ATermList) t);
      j_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_18;
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(j_22), (ATerm) ATinsert(CheckATermList(i_22), a_43));
  s_22 = t;
  t = SSL_table_put(h_22, r_22, s_22);
  t = q_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_22 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_23 = NULL,g_6 = NULL;
      g_23 = t;
      t = term_j_18;
      g_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_23, term_j_18);
      t = v_7(g_23, g_6, t);
      x_22 = t;
      t = SSL_mkstemp(x_22);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm k_23 = NULL;
        t = term_k_18;
        k_23 = t;
        t = SSL_perror(k_23);
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
static ATerm q_2 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  t = P__tmpdir_0_0(t);
  q_23 = t;
  t = term_m_18;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_23, term_m_18);
  t = v_7(q_23, r_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_11;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, term_c_11);
  t = e_7(q_2, o_23, p_23, t);
  t = SSL_close(m_23);
  t = o_23;
  return(t);
}
static ATerm f_7 (ATerm d_42, ATerm e_42, ATerm t)
{
  t = SSL_access(d_42, e_42);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm z_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_n_18);
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_23, (ATerm) ATinsert(ATempty, term_n_18));
      t = f_7(x_23, z_23, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if(match_cons(p_18, sym_Stream_1))
        {
          d_24 = ATgetArgument(p_18, 0);
        }
      else
        _fail(t);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(d_24, f_24, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  t = read_from_0_0(t);
  t = y_77(t);
  c_24 = t;
  t = xtc_new_file_0_0(t);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, c_24);
  t = d_7(u_2, b_24, c_24, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_24);
  return(t);
}
static ATerm h_7 (ATerm p_21, ATerm q_21, ATerm t)
{
  ATerm g_24 = NULL,i_24 = NULL;
  i_24 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
        t = c_8(p_21, q_21, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_18 = ATgetFirst((ATermList) t);
            g_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_18);
        t = SSL_table_put(p_21, q_21, g_24);
        t = (ATerm) ATmakeAppl(sym__3, p_21, q_21, g_24);
      }
    else
      {
        t = q_18;
        t = SSL_table_remove(p_21, q_21);
        t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
      }
  }
  t = i_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  m_24 = t;
  t = a_96(t);
  l_24 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL;
        t = term_f_18;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_24, term_f_18);
        t = c_8(l_24, o_24, t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_24 = ATgetFirst((ATermList) t);
      j_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_18;
  n_24 = t;
  t = SSL_table_put(l_24, n_24, j_24);
  t = k_24;
  {
    static ATerm w_2 (ATerm t)
    {
      ATerm p_24 = NULL;
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_24, p_24);
      t = h_7(l_24, p_24, t);
      return(t);
    }
    t = map_1_0(w_2, t);
  }
  t = m_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm x_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      t = k_82(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = x_18;
      t = k_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  u_24 = t;
  t = z_95(t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_24, term_f_18);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_18;
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_24, term_f_18);
        t = c_8(s_24, d_25, t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
  }
  v_24 = t;
  t = term_f_18;
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(v_24), (ATerm) ATempty);
  x_24 = t;
  t = SSL_table_put(s_24, w_24, x_24);
  t = u_24;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_25);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = u_25;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm l_25 = NULL;
  static ATerm a_3 (ATerm t)
  {
    ATerm m_25 = NULL;
    m_25 = t;
    {
      ATerm u_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_25 = NULL,o_25 = NULL;
          t = term_l_18;
          n_25 = t;
          t = term_f_18;
          o_25 = t;
          t = term_h_20;
          t = c_8(n_25, o_25, t);
          LocalPopChoice(x_19);
        }
      else
        {
          t = u_19;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_25 != NULL) && (l_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_25 = ATgetFirst((ATermList) t);
        {
          ATerm m_20 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_25;
    t = map_1_0(c_3, t);
    t = m_25;
    t = end_scope_1_0(d_3, t);
    return(t);
  }
  t = begin_scope_1_0(x_2, t);
  t = restore_always_2_0(j_78, a_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(r_8);
  w_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_8), term_o_20), w_8), term_n_20);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Path1_1))
    {
      a_27 = ATgetArgument(t, 0);
      t = a_27;
    }
  else
    {
      ATerm n_8 = NULL,q_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          a_27 = ATgetArgument(t, 0);
          b_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_27;
      t = map_1_0(e_3, t);
      t = concat_0_0(t);
      n_8 = t;
      t = (ATerm) ATinsert(CheckATermList(n_8), a_27);
      q_8 = t;
      t = SSL_concat_strings(q_8);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm a_28 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      a_28 = ATgetArgument(t, 0);
      {
        ATerm p_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_28;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      o_27 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, o_27);
    }
  else
    {
      ATerm z_27 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          o_27 = ATgetArgument(t, 0);
          p_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_27;
      t = map_1_0(f_3, t);
      z_27 = t;
      t = (ATerm) ATinsert(CheckATermList(z_27), o_27);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm i_7 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL;
  t = c_52;
  t = mk_key_0_0(t);
  c_28 = t;
  t = term_b_16;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_52, d_52);
  f_28 = t;
  t = SSL_table_put(d_28, c_28, f_28);
  t = c_52;
  t = path_to_string_0_0(t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, d_52);
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  static ATerm w_29 (ATerm t)
  {
    ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_83(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
      }
    v_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_29 = ATgetFirst((ATermList) t);
        u_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_9 = NULL,g_10 = NULL,s_2 = NULL;
          t = SSLgetAnnotations(v_29);
          t_9 = t;
          t = u_29;
          t = w_29(t);
          g_10 = t;
          t = (ATerm) ATinsert(CheckATermList(g_10), t_29);
          s_2 = t;
          t = SSLsetAnnotations(s_2, t_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_29;
      }
    return(t);
  }
  t = w_29(t);
  return(t);
}
ATerm at_last_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  static ATerm a_31 (ATerm t)
  {
    ATerm v_30 = NULL,w_30 = NULL,z_30 = NULL;
    v_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_30 = ATgetFirst((ATermList) t);
        z_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_10 = NULL,y_2 = NULL;
          t = SSLgetAnnotations(v_30);
          w_10 = t;
          t = z_30;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_30), w_30);
          y_2 = t;
          t = SSLsetAnnotations(y_2, w_10);
          t = s_87(t);
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
          {
            ATerm c_12 = NULL,s_12 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(v_30);
            c_12 = t;
            t = z_30;
            t = a_31(t);
            s_12 = t;
            t = (ATerm) ATinsert(CheckATermList(s_12), w_30);
            z_2 = t;
            t = SSLsetAnnotations(z_2, c_12);
          }
        }
    }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_31 = ATgetFirst((ATermList) t);
      h_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_31;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_31;
    }
  else
    {
      t = h_31;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm r_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_21 = ATgetFirst((ATermList) t);
      r_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_31;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_31 = ATgetFirst((ATermList) t);
      {
        ATerm c_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_31;
  t = g_83(t);
  t = m_31;
  t = last_0_0(t);
  t = h_83(t);
  t = m_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_21 = ATgetFirst((ATermList) t);
      n_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_31;
  t = at_last_1_0(j_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,i_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_15 = ATgetFirst((ATermList) t);
      f_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_15;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = f_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_15 = ATgetFirst((ATermList) t);
      i_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(i_15), term_f_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(i_15), term_g_21);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(i_15), term_h_21);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(i_15), term_i_21);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(i_15), term_m_21);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm m_34 = NULL,o_34 = NULL,r_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      o_34 = ATgetArgument(t, 0);
      {
        ATerm a_13 = NULL,c_13 = NULL,h_3 = NULL;
        t = SSLgetAnnotations(m_34);
        a_13 = t;
        t = SSL_string_to_int(o_34);
        c_13 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, c_13);
        h_3 = t;
        t = SSLsetAnnotations(h_3, a_13);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          o_34 = ATgetArgument(t, 0);
          r_34 = ATgetArgument(t, 1);
          {
            ATerm u_13 = NULL,x_13 = NULL,y_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(m_34);
            u_13 = t;
            t = SSL_string_to_int(o_34);
            x_13 = t;
            t = SSL_string_to_int(r_34);
            y_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, x_13, y_13);
            k_3 = t;
            t = SSLsetAnnotations(k_3, u_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              o_34 = ATgetArgument(t, 0);
              r_34 = ATgetArgument(t, 1);
              {
                ATerm m_14 = NULL,q_3 = NULL;
                t = SSLgetAnnotations(m_34);
                m_14 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, o_34, r_34);
                q_3 = t;
                t = SSLsetAnnotations(q_3, m_14);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  o_34 = ATgetArgument(t, 0);
                  {
                    ATerm v_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,u_3 = NULL;
                    t = SSLgetAnnotations(m_34);
                    v_14 = t;
                    t = SSL_explode_string(o_34);
                    t = unquote_chars_2_0(l_3, m_3, t);
                    a_15 = t;
                    t = SSL_implode_string(a_15);
                    z_14 = t;
                    t = SSL_explode_string(z_14);
                    t = unescape_chars_1_0(n_3, t);
                    y_14 = t;
                    t = SSL_implode_string(y_14);
                    x_14 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, x_14);
                    u_3 = t;
                    t = SSLsetAnnotations(u_3, v_14);
                  }
                }
              else
                {
                  ATerm l_16 = NULL,q_16 = NULL,v_3 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      o_34 = ATgetArgument(t, 0);
                      r_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_34);
                  l_16 = t;
                  t = SSL_string_to_int(o_34);
                  q_16 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, q_16, r_34);
                  v_3 = t;
                  t = SSLsetAnnotations(v_3, l_16);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  static ATerm o_3 (ATerm t)
  {
    t = topdown_1_0(c_79, t);
    return(t);
  }
  t = c_79(t);
  t = SRTS_all(o_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = topdown_1_0(w_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(f_35, g_35, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm n_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = n_21;
    }
  return(t);
}
static ATerm r_7 (ATerm b_52, ATerm t)
{
  t = b_52;
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(s_3, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  static ATerm j_35 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_80(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = SRTS_one(j_35, t);
      }
    return(t);
  }
  t = j_35(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm k_35 = NULL,o_35 = NULL;
  t = term_u_21;
  k_35 = t;
  t = term_v_21;
  o_35 = t;
  t = term_w_21;
  t = c_8(k_35, o_35, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35 = NULL,s_35 = NULL,t_35 = NULL;
      t = term_z_21;
      t = get_options_0_0(t);
      t = oncetd_1_0(x_3, t);
      t = term_v_17;
      s_35 = t;
      t = (ATerm) ATinsert(ATempty, term_b_22);
      t_35 = t;
      t = SSL_printnl(s_35, t_35);
      t = term_e_12;
      p_35 = t;
      t = SSL_exit(p_35);
      t = (ATerm) ATinsert(ATempty, term_b_22);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm v_35 = NULL,w_35 = NULL;
        t = term_v_17;
        v_35 = t;
        t = (ATerm) ATinsert(ATempty, term_d_22);
        w_35 = t;
        t = SSL_printnl(v_35, w_35);
        t = (ATerm) ATinsert(ATempty, term_d_22);
      }
    }
  return(t);
}
static ATerm n_36 (ATerm h_36, ATerm t)
{
  t = SSL_fclose(h_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_36 = ATgetArgument(t, 0);
      {
        ATerm e_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_36);
            LocalPopChoice(g_22);
          }
        else
          {
            t = e_22;
            t = n_36(l_36, t);
          }
      }
    }
  else
    {
      t = n_36(l_36, t);
    }
  return(t);
}
static ATerm u_7 (ATerm n_29, ATerm t)
{
  t = SSL_read_term_from_stream(n_29);
  return(t);
}
static ATerm v_7 (ATerm w_28, ATerm x_28, ATerm t)
{
  t = SSL_strcat(w_28, x_28);
  return(t);
}
static ATerm w_7 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm o_36 = NULL;
  t = SSL_fopen(m_42, n_42);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_36 = NULL;
  t = SSL_stdin_stream();
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_stdout_stream();
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_stderr_stream();
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
static ATerm b_38 (ATerm z_36, ATerm t)
{
  ATerm a_37 = NULL;
  t = SSL_explode_term(z_36);
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
          {
            a_37 = ATgetFirst((ATermList) l_22);
            {
              ATerm m_22 = (ATerm) ATgetNext((ATermList) l_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_38 (ATerm d_37, ATerm e_37, ATerm f_37, ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,l_37 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(f_37);
  i_37 = t;
  t = d_37;
  if(match_cons(t, sym_Path_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_37, e_37);
  d_4 = t;
  t = SSLsetAnnotations(d_4, i_37);
  if(match_cons(t, sym__2))
    {
      g_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(g_37, h_37, t);
  return(t);
}
static ATerm d_38 (ATerm n_37, ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,t_37 = NULL,w_37 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(p_37);
  t_37 = t;
  t = SSL_is_string(n_37);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_37, o_37);
  e_4 = t;
  t = SSLsetAnnotations(e_4, t_37);
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(q_37, r_37, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_38(y_37, t);
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            {
              ATerm w_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_38(z_37, a_38, y_37, t);
                  LocalPopChoice(y_22);
                }
              else
                {
                  t = w_22;
                  t = d_38(z_37, a_38, y_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_38(y_37, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,j_38 = NULL,p_38 = NULL;
  p_38 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_38, term_d_23);
        t = x_7(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm p_17 = NULL,s_17 = NULL;
          t = term_e_23;
          s_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_23, p_38);
          t = v_7(s_17, p_38, t);
          p_17 = t;
          t = SSL_perror(p_17);
          _fail(t);
        }
      }
  }
  g_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(j_38, t);
  f_38 = t;
  t = g_38;
  t = fclose_0_0(t);
  t = f_38;
  return(t);
}
ATerm debug_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  w_38 = t;
  t = l_85(t);
  x_38 = t;
  t = term_v_17;
  y_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_38), x_38);
  z_38 = t;
  t = SSL_printnl(y_38, z_38);
  t = w_38;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,y_17 = NULL,e_18 = NULL;
  t = if_verbose1_1_0(z_3, t);
  t = ReadFromFile_0_0(t);
  d_39 = t;
  t = SSL_explode_term(d_39);
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
          {
            y_17 = ATgetFirst((ATermList) f_23);
            {
              ATerm h_23 = (ATerm) ATgetNext((ATermList) f_23);
              if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_18;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = y_17;
  if(match_cons(t, sym_PP_Table_1))
    {
      c_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(c_39, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = debug_1_0(a_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  a_39 = t;
  t = term_b_16;
  b_39 = t;
  t = SSL_table_create(b_39);
  t = a_39;
  t = map_1_0(y_3, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm j_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_39 = NULL,h_39 = NULL;
      t = term_o_9;
      g_39 = t;
      t = term_s_23;
      h_39 = t;
      t = term_t_23;
      t = c_8(g_39, h_39, t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = j_23;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_39 = NULL,a_40 = NULL,b_40 = NULL;
      t = term_o_9;
      a_40 = t;
      t = term_y_23;
      b_40 = t;
      t = term_a_24;
      t = c_8(a_40, b_40, t);
      t_39 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_39);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = term_l_10;
    }
  t = xtc_io_transform_1_0(f_4, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm e_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_40 = NULL;
        e_40 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_24 = ATgetFirst((ATermList) t);
                ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_40;
          }
        LocalPopChoice(h_24);
        {
          ATerm i_40 = NULL;
          i_40 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, i_40);
        }
      }
    else
      {
        t = e_24;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, b_4, t);
  t = read_pp_tables_0_0(t);
  t = o_39;
  t = xtc_temp_files_1_0(c_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,p_40 = NULL,q_40 = NULL;
  l_40 = t;
  t = term_c_11;
  t = whoami_0_0(t);
  m_40 = t;
  t = term_v_17;
  p_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_24), m_40), term_t_24);
  q_40 = t;
  t = SSL_printnl(p_40, q_40);
  t = term_e_12;
  n_40 = t;
  t = SSL_exit(n_40);
  t = l_40;
  return(t);
}
ATerm at_end_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  static ATerm z_41 (ATerm t)
  {
    ATerm s_41 = NULL,u_41 = NULL,x_41 = NULL;
    x_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_41 = ATgetFirst((ATermList) t);
        u_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_18 = NULL,a_19 = NULL,j_4 = NULL;
          t = SSLgetAnnotations(x_41);
          o_18 = t;
          t = u_41;
          t = z_41(t);
          a_19 = t;
          t = (ATerm) ATinsert(CheckATermList(a_19), s_41);
          j_4 = t;
          t = SSLsetAnnotations(j_4, o_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_41;
        t = h_87(t);
      }
    return(t);
  }
  t = z_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_40;
    }
  else
    {
      static ATerm g_4 (ATerm t)
      {
        t = not_null(x_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_40 = ATgetFirst((ATermList) t);
          if(((x_40 != NULL) && (x_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_40;
      t = at_end_1_0(g_4, t);
    }
  return(t);
}
static ATerm j_43 (ATerm j_42, ATerm t)
{
  ATerm l_42 = NULL;
  t = SSL_explode_term(j_42);
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_42;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_43 = NULL,f_43 = NULL,g_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym__2))
    {
      d_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_4 (ATerm t)
            {
              t = f_43;
              return(t);
            }
            t = d_43;
            t = at_end_1_0(h_4, t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            t = j_43(g_43, t);
          }
      }
    }
  else
    {
      t = j_43(g_43, t);
    }
  return(t);
}
static ATerm y_7 (ATerm z_18, ATerm y_18, ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  t = z_18;
  {
    ATerm e_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_43 = NULL;
        t = term_o_9;
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, z_18);
        t = c_8(n_43, z_18, t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATempty;
      }
  }
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_18, l_43);
  t = conc_0_0(t);
  k_43 = t;
  t = term_o_9;
  m_43 = t;
  t = SSL_table_put(m_43, z_18, k_43);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, z_18, k_43);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
  q_43 = t;
  t = term_s_23;
  r_43 = t;
  t = (ATerm) ATinsert(ATempty, q_43);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATinsert(ATempty, q_43));
  t = y_7(r_43, s_43, t);
  t = q_43;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, k_4, n_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  if(match_string(t, "-k"))
    {
      t = v_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_43;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  t = SSL_string_to_int(y_43);
  z_43 = t;
  t = term_i_25;
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, z_43);
  t = f_8(a_44, z_43, t);
  t = y_43;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, y_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  if(match_string(t, "-S"))
    {
      t = d_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_44;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  t = term_k_25;
  i_44 = t;
  t = term_f_12;
  j_44 = t;
  t = term_p_25;
  t = f_8(i_44, j_44, t);
  t = term_q_25;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm k_44 = NULL,r_44 = NULL,s_44 = NULL;
  k_44 = t;
  t = SSL_string_to_int(k_44);
  r_44 = t;
  t = term_k_25;
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, r_44);
  t = f_8(s_44, r_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_44);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  t = term_x_25;
  t_44 = t;
  t = term_c_11;
  u_44 = t;
  t = term_y_25;
  t = f_8(t_44, u_44, t);
  t = term_z_25;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, c_5, f_5, t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_5, j_5, m_5, t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            t = Option_3_0(v_5, w_5, y_5, t);
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm t_18, ATerm u_18, ATerm t)
{
  ATerm v_44 = NULL;
  t = term_o_9;
  v_44 = t;
  t = SSL_table_put(v_44, t_18, u_18);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, t_18, u_18);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
      t = term_c_11;
      t = e_0(t);
      d_45 = t;
      t = term_i_26;
      e_45 = t;
      t = term_j_26;
      f_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, d_45);
      t = d_8(e_45, f_45, d_45, t);
      _fail(t);
    }
  else
    {
      ATerm i_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_45 = ATgetFirst((ATermList) t);
          c_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_45;
      t = c_0(t);
      t = term_c_11;
      t = d_0(t);
      i_45 = t;
      t = (ATerm) ATinsert(CheckATermList(c_45), i_45);
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  if(match_string(t, "-o"))
    {
      t = m_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_45;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm n_45 = NULL,q_45 = NULL;
  n_45 = t;
  t = term_p_9;
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, n_45);
  t = f_8(q_45, n_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_45);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, d_6, e_6, t);
  return(t);
}
static ATerm d_8 (ATerm k_21, ATerm l_21, ATerm j_21, ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, l_21);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            ATerm o_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_21, l_21);
        t = c_8(k_21, l_21, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATempty;
      }
  }
  v_45 = t;
  t = (ATerm) ATinsert(CheckATermList(v_45), j_21);
  w_45 = t;
  t = SSL_table_put(k_21, l_21, w_45);
  t = u_45;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
      t = term_c_11;
      t = n_0(t);
      k_46 = t;
      t = term_i_26;
      l_46 = t;
      t = term_j_26;
      m_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, k_46);
      t = d_8(l_46, m_46, k_46, t);
      _fail(t);
    }
  else
    {
      ATerm s_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_46 = ATgetFirst((ATermList) t);
          h_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_46 = ATgetFirst((ATermList) t);
          j_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_46;
      t = k_0(t);
      t = i_46;
      t = l_0(t);
      s_46 = t;
      t = (ATerm) ATinsert(CheckATermList(j_46), s_46);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm w_46 = NULL;
  w_46 = t;
  if(match_string(t, "-i"))
    {
      t = w_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_46;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  x_46 = t;
  t = term_y_23;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_23, x_46);
  t = f_8(y_46, x_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_46);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_6, h_6, i_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_11;
  t = whoami_0_0(t);
  z_46 = t;
  t = term_v_17;
  b_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_26), z_46);
  c_47 = t;
  t = SSL_printnl(b_47, c_47);
  t = term_e_12;
  a_47 = t;
  t = SSL_exit(a_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  t = term_o_9;
  d_47 = t;
  t = term_r_26;
  e_47 = t;
  t = term_s_26;
  t = c_8(d_47, e_47, t);
  return(t);
}
static ATerm z_7 (ATerm r_30, ATerm s_30, ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_30, s_30);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = SSL_addr(r_30, s_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_47;
      t = w_93(t);
    }
  else
    {
      ATerm m_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          i_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_47;
      t = foldr_2_0(w_93, x_93, t);
      m_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_47, m_47);
      t = x_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(k_20, l_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_47 = NULL,m_19 = NULL,s_19 = NULL;
  t = times_0_0(t);
  s_19 = t;
  t = SSL_explode_term(s_19);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_19;
  t = foldr_2_0(k_6, t_6, t);
  p_47 = t;
  t = SSL_TicksToSeconds(p_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_48 = NULL,l_48 = NULL,m_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_48;
        if((l_48 != t))
          {
            _fail(t);
          }
        t = j_48;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        {
          ATerm y_26 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_48, m_48);
              LocalPopChoice(c_27);
            }
          else
            {
              t = y_26;
              t = SSL_gtr(l_48, m_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_48 = NULL,v_48 = NULL,x_48 = NULL;
        t = term_o_9;
        v_48 = t;
        t = term_k_25;
        x_48 = t;
        t = term_f_27;
        t = c_8(v_48, x_48, t);
        u_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_48, term_e_12);
        t = geq_0_0(t);
        t = s_48;
        t = h_76(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = s_48;
      }
  }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL;
  t = run_time_0_0(t);
  z_48 = t;
  t = term_c_11;
  t = whoami_0_0(t);
  a_49 = t;
  t = term_v_17;
  c_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_27), z_48), term_g_27), a_49);
  d_49 = t;
  t = SSL_printnl(c_49, d_49);
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_27), z_48), term_g_27), a_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_12;
  e_49 = t;
  t = SSL_exit(e_49);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  y_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_49 = ATgetArgument(t, 0);
          {
            ATerm o_21 = NULL,m_4 = NULL;
            t = SSLgetAnnotations(y_49);
            o_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_49);
            m_4 = t;
            t = SSLsetAnnotations(m_4, o_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_49 = NULL,k_49 = NULL;
      t = term_o_9;
      h_49 = t;
      t = term_k_27;
      k_49 = t;
      t = term_l_27;
      t = c_8(h_49, k_49, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = fetch_1_0(x_6, t);
    }
  t = j_97(t);
  return(t);
}
ATerm map_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  static ATerm e_51 (ATerm t)
  {
    ATerm y_50 = NULL,c_51 = NULL,d_51 = NULL;
    y_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_50;
      }
    else
      {
        ATerm n_22 = NULL,u_22 = NULL,v_22 = NULL,o_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_51 = ATgetFirst((ATermList) t);
            d_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_50);
        n_22 = t;
        t = c_51;
        t = q_86(t);
        u_22 = t;
        t = d_51;
        t = e_51(t);
        v_22 = t;
        t = (ATerm) ATinsert(CheckATermList(v_22), u_22);
        o_4 = t;
        t = SSLsetAnnotations(o_4, n_22);
      }
    return(t);
  }
  t = e_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_51 = ATgetFirst((ATermList) t);
      i_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_51 = NULL,p_51 = NULL;
        static ATerm z_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_51)), not_null(p_51));
          return(t);
        }
        t = i_51;
        t = i_0(t);
        if(((o_51 != NULL) && (o_51 != t)))
          _fail(t);
        else
          o_51 = t;
        t = h_51;
        t = g_0(t);
        if(((p_51 != NULL) && (p_51 != t)))
          _fail(t);
        else
          p_51 = t;
        t = i_51;
        t = reverse_acc_2_0(g_0, z_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_11;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,r_4 = NULL;
  x_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_51);
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_51);
  r_4 = t;
  t = SSLsetAnnotations(r_4, v_51);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_51), term_m_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  ATerm n_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_51 = NULL,u_51 = NULL;
      t = term_o_9;
      t_51 = t;
      t = term_r_26;
      u_51 = t;
      t = term_s_26;
      t = c_8(t_51, u_51, t);
      LocalPopChoice(q_27);
    }
  else
    {
      t = n_27;
      t = fetch_1_0(a_7, t);
    }
  t = term_r_27;
  t = echo_0_0(t);
  t = term_i_26;
  r_51 = t;
  t = term_j_26;
  s_51 = t;
  t = term_s_27;
  t = c_8(r_51, s_51, t);
  t = reverse_acc_2_0(_id, b_7, t);
  t = map_1_0(k_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  static ATerm t_53 (ATerm t)
  {
    ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
    n_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_53 = ATgetFirst((ATermList) t);
        p_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_23 = NULL,u_23 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(n_53);
          n_23 = t;
          t = o_53;
          t = a_87(t);
          u_23 = t;
          t = (ATerm) ATinsert(CheckATermList(p_53), u_23);
          t_4 = t;
          t = SSLsetAnnotations(t_4, n_23);
          LocalPopChoice(u_27);
        }
      else
        {
          t = t_27;
          {
            ATerm a_25 = NULL,f_25 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(n_53);
            a_25 = t;
            t = p_53;
            t = t_53(t);
            f_25 = t;
            t = (ATerm) ATinsert(CheckATermList(f_25), o_53);
            v_4 = t;
            t = SSLsetAnnotations(v_4, a_25);
          }
        }
    }
    return(t);
  }
  t = t_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_27 = ATgetFirst((ATermList) t);
                ATerm y_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_54;
          }
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATinsert(ATempty, b_54);
      }
  }
  c_54 = t;
  t = term_v_9;
  d_54 = t;
  t = SSL_printnl(d_54, c_54);
  t = b_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  t = term_o_9;
  h_54 = t;
  t = term_r_26;
  i_54 = t;
  t = term_s_26;
  t = c_8(h_54, i_54, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_8 (ATerm b_23, ATerm c_23, ATerm t)
{
  t = SSL_table_get(b_23, c_23);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  t = term_e_28;
  j_54 = t;
  t = term_c_11;
  k_54 = t;
  t = term_g_28;
  t = f_8(j_54, k_54, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_h_28;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  t = term_e_28;
  n_54 = t;
  t = term_c_11;
  o_54 = t;
  t = term_g_28;
  t = f_8(n_54, o_54, t);
  t = term_i_28;
  l_54 = t;
  t = term_c_11;
  m_54 = t;
  t = term_j_28;
  t = f_8(l_54, m_54, t);
  t = term_k_28;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_7, m_7, p_7, t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = Option_3_0(q_7, t_7, a_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,b_5 = NULL;
  u_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_54 = ATgetFirst((ATermList) t);
      r_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_54);
  p_54 = t;
  t = q_54;
  t = g_71(t);
  s_54 = t;
  t = r_54;
  t = h_71(t);
  t_54 = t;
  t = (ATerm) ATinsert(CheckATermList(t_54), s_54);
  b_5 = t;
  t = SSLsetAnnotations(b_5, p_54);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,e_55 = NULL,f_55 = NULL,d_5 = NULL;
  z_54 = t;
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_28;
        t = h_99(t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
      }
  }
  t = z_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_55 = ATgetFirst((ATermList) t);
      c_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_54);
  a_55 = t;
  t = term_r_26;
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, b_55);
  t = f_8(f_55, b_55, t);
  t = c_55;
  {
    static ATerm p_55 (ATerm t)
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28 = t;
          int u_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_55 = NULL;
              i_55 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_55;
              LocalPopChoice(u_28);
            }
          else
            {
              t = t_28;
              t = h_99(t);
              t = Cons_2_0(_id, p_55, t);
            }
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          {
            ATerm l_55 = NULL,m_55 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_55 = ATgetFirst((ATermList) t);
                m_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_55), (ATerm) ATmakeAppl(sym_Undefined_1, l_55));
          }
        }
      return(t);
    }
    t = p_55(t);
  }
  e_55 = t;
  t = (ATerm) ATinsert(CheckATermList(e_55), (ATerm) ATmakeAppl(sym_Program_1, b_55));
  d_5 = t;
  t = SSLsetAnnotations(d_5, a_55);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm b_56 = NULL;
  b_56 = t;
  if(match_string(t, "--help"))
    {
      t = b_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_56;
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  t = term_k_27;
  c_56 = t;
  t = term_c_11;
  d_56 = t;
  t = term_v_28;
  t = f_8(c_56, d_56, t);
  t = term_y_28;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  w_55 = t;
  t = term_i_26;
  y_55 = t;
  t = term_j_26;
  z_55 = t;
  t = (ATerm) ATempty;
  a_56 = t;
  t = SSL_table_put(y_55, z_55, a_56);
  t = w_55;
  {
    static ATerm e_8 (ATerm t)
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_99(t);
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_8, h_8, k_8, t);
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_8, t);
  }
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_56 = NULL;
        o_56 = t;
        {
          ATerm g_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_25 = NULL;
              t = o_56;
              {
                ATerm k_29 = t;
                int l_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_25 = NULL,v_25 = NULL;
                    t = term_o_9;
                    s_25 = t;
                    t = term_k_27;
                    v_25 = t;
                    t = term_l_27;
                    t = c_8(s_25, v_25, t);
                    LocalPopChoice(l_29);
                  }
                else
                  {
                    t = k_29;
                    t = fetch_1_0(l_8, t);
                  }
              }
              t = o_56;
              t = default_system_usage_0_0(t);
              t = term_f_12;
              r_25 = t;
              t = SSL_exit(r_25);
              LocalPopChoice(j_29);
            }
          else
            {
              t = g_29;
              {
                ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
                t = term_o_9;
                c_26 = t;
                t = term_e_28;
                d_26 = t;
                t = term_m_29;
                t = c_8(c_26, d_26, t);
                t = o_56;
                t = default_system_about_0_0(t);
                t = term_f_12;
                b_26 = t;
                t = SSL_exit(b_26);
              }
            }
        }
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
              static ATerm o_8 (ATerm t)
              {
                ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,u_9 = NULL;
                u_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_56);
                s_56 = t;
                t = t_56;
                if(((u_55 != NULL) && (u_55 != t)))
                  _fail(t);
                else
                  u_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_56);
                u_9 = t;
                t = SSLsetAnnotations(u_9, s_56);
                return(t);
              }
              t = fetch_1_0(o_8, t);
              t = term_v_17;
              q_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), term_q_29);
              r_56 = t;
              t = SSL_printnl(q_56, r_56);
              t = (ATerm) ATmakeAppl(sym__2, term_v_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), term_q_29));
              t = default_system_usage_0_0(t);
              t = term_e_12;
              p_56 = t;
              t = SSL_exit(p_56);
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
            }
        }
      }
  }
  v_55 = t;
  t = term_i_26;
  x_55 = t;
  t = SSL_table_destroy(x_55);
  t = v_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  t = parse_options_1_0(l_97, t);
  z_56 = t;
  t = term_u_21;
  c_57 = t;
  t = SSL_table_create(c_57);
  t = term_u_21;
  a_57 = t;
  t = term_v_21;
  b_57 = t;
  t = SSL_table_put(a_57, b_57, z_56);
  t = z_56;
  t = n_97(t);
  {
    ATerm s_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_97, t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = s_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_97(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm e_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_8, x_8, y_8, t);
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = e_30;
                  {
                    ATerm g_30 = t;
                    int h_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_30);
                      }
                    else
                      {
                        t = g_30;
                        {
                          ATerm i_30 = t;
                          int j_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(j_30);
                            }
                          else
                            {
                              t = i_30;
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
static ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  t = term_k_30;
  e_57 = t;
  t = term_c_11;
  f_57 = t;
  t = term_l_30;
  t = f_8(e_57, f_57, t);
  t = term_m_30;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_8, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
