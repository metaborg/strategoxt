#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Path_1;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_m_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_y_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_g_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_x_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_i_17;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_b_12;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_f_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_g_19);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_t_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_n_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_t_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_q_13);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_13);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_b_12);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_s_28);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_l_27);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_q_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_d_28);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_b_12);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_b_12);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_b_12);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, (ATerm) ATempty);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_v_30);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_b_12);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm h_19, ATerm i_19, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_80 (ATerm), ATerm t);
static ATerm f_7 (ATerm a_18, ATerm b_18, ATerm z_17, ATerm t);
static ATerm q_9 (ATerm e_6, ATerm g_6, ATerm h_6, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm s_103 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm collect_p__1_0 (ATerm d_112 (ATerm), ATerm t);
static ATerm g_7 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm h_7 (ATerm h_77 (ATerm), ATerm c_16, ATerm d_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_7 (ATerm r_17, ATerm t_17, ATerm q_17, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm k_7 (ATerm x_16, ATerm y_16, ATerm a_17, ATerm z_16, ATerm t);
static ATerm l_7 (ATerm s_16, ATerm t_16, ATerm w_16, ATerm v_16, ATerm u_16, ATerm t);
static ATerm n_7 (ATerm h_32, ATerm i_32, ATerm t);
static ATerm o_7 (ATerm x_36, ATerm v_36, ATerm w_36, ATerm t);
ATerm repeat_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm r_7 (ATerm j_16, ATerm i_16, ATerm n_16, ATerm t);
ATerm genzip_4_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm nzip_1_0 (ATerm p_90 (ATerm), ATerm t);
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
static ATerm v_7 (ATerm r_30, ATerm s_30, ATerm t);
static ATerm w_7 (ATerm w_86 (ATerm), ATerm z_325, ATerm b_31, ATerm t);
static ATerm x_7 (ATerm m_97 (ATerm), ATerm k_44, ATerm i_44, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm y_7 (ATerm n_43, ATerm o_43, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm h_79 (ATerm), ATerm t);
static ATerm a_8 (ATerm q_21, ATerm r_21, ATerm t);
ATerm end_scope_1_0 (ATerm j_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_97 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm s_79 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t);
static ATerm b_8 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm z_39, ATerm y_39, ATerm t);
static ATerm c_8 (ATerm k_92 (ATerm), ATerm v_39, ATerm u_39, ATerm t);
static ATerm q_3 (ATerm t);
ATerm collect_om_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
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
static ATerm d_8 (ATerm m_53, ATerm n_53, ATerm t);
ATerm unescape_chars_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm unquote_chars_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_80 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm m_8 (ATerm l_53, ATerm t);
ATerm oncetd_1_0 (ATerm p_81 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm q_40 (ATerm k_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_8 (ATerm x_30, ATerm t);
static ATerm q_8 (ATerm g_30, ATerm h_30, ATerm t);
static ATerm r_8 (ATerm w_43, ATerm x_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_42 (ATerm c_41, ATerm t);
static ATerm j_42 (ATerm k_41, ATerm l_41, ATerm m_41, ATerm t);
static ATerm m_42 (ATerm u_41, ATerm w_41, ATerm x_41, ATerm t);
static ATerm s_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm u_86 (ATerm), ATerm t);
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
ATerm at_end_1_0 (ATerm q_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_47 (ATerm v_46, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_8 (ATerm a_19, ATerm z_18, ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_9 (ATerm u_18, ATerm v_18, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_9 (ATerm l_21, ATerm m_21, ATerm k_21, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_8 (ATerm b_32, ATerm c_32, ATerm t);
ATerm foldr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_77 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm need_help_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm d_9 (ATerm s_24, ATerm t_24, ATerm u_24, ATerm t);
ATerm lookup_table_0_1 (ATerm x_22, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_25, ATerm b_25, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_8 (ATerm x_24, ATerm y_24, ATerm t);
static ATerm x_8 (ATerm c_25, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_9 (ATerm v_24, ATerm w_24, ATerm t);
static ATerm z_8 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_100 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm parse_options_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm o_10 (ATerm t);
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
    int q_10 = stack_ptr;
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
        t = z_7(m_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(q_10);
      }
    else
      {
        t = x_4;
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm w_10 = t;
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
                    t = w_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, v_0);
              t = z_7(m_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
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
static ATerm z_7 (ATerm h_19, ATerm i_19, ATerm t)
{
  t = SSL_copy(h_19, i_19);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL,k_2 = NULL;
      t = term_e_11;
      j_2 = t;
      t = term_f_11;
      k_2 = t;
      t = term_j_11;
      t = z_8(j_2, k_2, t);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      t = term_m_11;
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
      t = term_f_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,r_1 = NULL;
            t = term_e_11;
            o_1 = t;
            t = term_f_11;
            r_1 = t;
            t = term_j_11;
            t = z_8(o_1, r_1, t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = term_m_11;
          }
      }
      j_1 = t;
      t = term_p_11;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_11, j_1);
      t = z_7(l_1, j_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm r_11 = ATgetArgument(t, 0);
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
        ATerm s_11 = t;
        int u_11 = stack_ptr;
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
            LocalPopChoice(u_11);
          }
        else
          {
            t = s_11;
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
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
                          ATerm x_11 = ATgetFirst((ATermList) t);
                          ATerm y_11 = (ATerm) ATgetNext((ATermList) t);
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
                        ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = i_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm a_12 = ATgetFirst((ATermList) t);
                      r_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
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
        t = term_b_12;
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
      t = term_b_12;
      t = p_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, m_5);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(m_80, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = m_80(t);
  return(t);
}
static ATerm f_7 (ATerm a_18, ATerm b_18, ATerm z_17, ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  static ATerm j_0 (ATerm t)
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_0 (ATerm t)
            {
              t = not_null(p_5);
              return(t);
            }
            t = Instantiate_1_0(m_0, t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
      }
    return(t);
  }
  t = SSL_explode_term(z_17);
  if(match_cons(t, sym__2))
    {
      ATerm m_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5;
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm u_5 = NULL,v_5 = NULL;
      if(match_cons(t, sym__2))
        {
          u_5 = ATgetArgument(t, 0);
          v_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_5, a_18, v_5);
      t = r_7(u_5, a_18, v_5, t);
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
static ATerm q_9 (ATerm e_6, ATerm g_6, ATerm h_6, ATerm t)
{
  ATerm q_6 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(h_6);
  q_6 = t;
  t = g_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_6), e_6);
  c_1 = t;
  t = SSLsetAnnotations(c_1, q_6);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  static ATerm o_9 (ATerm t)
  {
    static ATerm r_9 (ATerm z_6, ATerm b_7, ATerm c_7, ATerm j_7, ATerm t)
    {
      ATerm u_7 = NULL,e_8 = NULL,g_8 = NULL,d_1 = NULL;
      t = j_7;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_12 = ATgetFirst((ATermList) t);
          ATerm p_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_7);
      u_7 = t;
      t = term_b_12;
      t = s_103(t);
      {
        static ATerm q_0 (ATerm t)
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_12 = t;
              int v_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm r_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, b_7), z_6);
                    return(t);
                  }
                  t = Instantiate_1_0(r_0, t);
                  LocalPopChoice(v_12);
                }
              else
                {
                  t = u_12;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
            }
          return(t);
        }
        t = bottomup_1_0(q_0, t);
      }
      g_8 = t;
      t = c_7;
      t = o_9(t);
      e_8 = t;
      t = (ATerm) ATinsert(CheckATermList(e_8), g_8);
      d_1 = t;
      t = SSLsetAnnotations(d_1, u_7);
      return(t);
    }
    ATerm v_8 = NULL,y_8 = NULL,b_9 = NULL,f_9 = NULL,g_9 = NULL;
    v_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_8;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_8 = ATgetFirst((ATermList) t);
            b_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_9;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_9 = ATgetFirst((ATermList) t);
            g_9 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm y_12 = t;
              int z_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_9(y_8, b_9, v_8, t);
                  LocalPopChoice(z_12);
                }
              else
                {
                  t = y_12;
                  t = r_9(y_8, f_9, g_9, v_8, t);
                }
            }
          }
        else
          {
            t = q_9(y_8, b_9, v_8, t);
          }
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm d_112 (ATerm), ATerm t)
{
  static ATerm x_9 (ATerm t)
  {
    ATerm a_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL;
        t = d_112(t);
        s_9 = t;
        t = (ATerm) ATinsert(ATempty, s_9);
        LocalPopChoice(d_13);
      }
    else
      {
        t = a_13;
        {
          ATerm s_4 = NULL,w_4 = NULL;
          w_4 = t;
          t = SSL_explode_term(w_4);
          if(match_cons(t, sym__2))
            {
              ATerm e_13 = ATgetArgument(t, 0);
              s_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_4;
          t = foldr_3_0(t_0, conc_0_0, x_9, t);
        }
      }
    return(t);
  }
  t = x_9(t);
  return(t);
}
static ATerm g_7 (ATerm z_32, ATerm a_33, ATerm t)
{
  t = SSL_mod(z_32, a_33);
  return(t);
}
static ATerm h_7 (ATerm h_77 (ATerm), ATerm c_16, ATerm d_16, ATerm t)
{
  ATerm y_9 = NULL;
  ATerm g_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
      t = term_l_13;
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_16, term_l_13);
      t = g_7(c_16, c_10, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_b_12;
      t = h_77(t);
      a_10 = t;
      t = term_l_13;
      b_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_13, a_10, d_16);
      t = r_7(b_10, a_10, d_16, t);
      y_9 = t;
      LocalPopChoice(j_13);
    }
  else
    {
      t = g_13;
      {
        ATerm d_10 = NULL,e_10 = NULL;
        t = term_b_12;
        t = h_77(t);
        d_10 = t;
        t = term_p_13;
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_p_13, d_10, d_16);
        t = r_7(e_10, d_10, d_16, t);
        y_9 = t;
      }
    }
  t = y_9;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,p_1 = NULL;
  m_10 = t;
  if(match_cons(t, sym_S_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_10);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, l_10);
  p_1 = t;
  t = SSLsetAnnotations(p_1, k_10);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm n_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(n_10, p_10, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm i_7 (ATerm r_17, ATerm t_17, ATerm q_17, ATerm t)
{
  ATerm h_10 = NULL;
  static ATerm g_1 (ATerm t)
  {
    t = t_17;
    return(t);
  }
  t = q_17;
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm i_10 = NULL,j_10 = NULL;
      static ATerm z_0 (ATerm t)
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
      t = h_7(z_0, i_10, j_10, t);
      return(t);
    }
    t = nzip_1_0(u_0, t);
  }
  h_10 = t;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_11 (ATerm t)
        {
          ATerm r_10 = NULL,t_10 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_10 = ATgetFirst((ATermList) t);
                  t_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm t_13 = t;
                  int v_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, r_10);
                      LocalPopChoice(v_13);
                    }
                  else
                    {
                      t = t_13;
                      {
                        ATerm x_10 = NULL;
                        t = t_10;
                        t = c_11(t);
                        x_10 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(x_10), r_10), r_10);
                      }
                    }
                }
              else
                {
                  ATerm b_11 = NULL;
                  t = t_10;
                  t = c_11(t);
                  b_11 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(b_11), r_10), r_10);
                }
            }
          return(t);
        }
        t = t_17;
        t = collect_p__1_0(a_1, t);
        t = foldr_3_0(b_1, e_1, f_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = h_10;
        t = c_11(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = h_10;
      }
  }
  t = instantiate_sep_list_1_0(g_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,k_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__4))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      k_11 = ATgetArgument(t, 2);
      l_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_11;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, h_11, k_11, l_11);
      t = i_7(h_11, k_11, l_11, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, h_11, k_11, l_11);
      t = i_7(h_11, k_11, l_11, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  static ATerm i_1 (ATerm t)
  {
    ATerm w_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(g_12));
              return(t);
            }
            t = Instantiate_1_0(n_1, t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(y_13);
      }
    else
      {
        t = w_13;
      }
    return(t);
  }
  h_12 = t;
  if(match_cons(t, sym__4))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      k_12 = ATgetArgument(t, 2);
      l_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = i_12;
  if(match_string(t, "iter"))
    {
      t = h_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = h_12;
    }
  t = l_12;
  {
    static ATerm h_1 (ATerm t)
    {
      ATerm q_12 = NULL,r_12 = NULL;
      q_12 = t;
      t = term_p_13;
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_13, j_12, q_12);
      t = r_7(r_12, j_12, q_12, t);
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = k_12;
  t = bottomup_1_0(i_1, t);
  return(t);
}
static ATerm k_7 (ATerm x_16, ATerm y_16, ATerm a_17, ATerm z_16, ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL;
  static ATerm q_1 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(w_12));
              return(t);
            }
            t = Instantiate_1_0(s_1, t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = d_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
      }
    return(t);
  }
  t = term_p_13;
  x_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, y_16, z_16);
  t = r_7(x_12, y_16, z_16, t);
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = a_17;
  t = bottomup_1_0(q_1, t);
  return(t);
}
static ATerm l_7 (ATerm s_16, ATerm t_16, ATerm w_16, ATerm v_16, ATerm u_16, ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL;
  static ATerm u_1 (ATerm t)
  {
    ATerm h_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(c_13));
              return(t);
            }
            t = Instantiate_1_0(v_1, t);
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(l_14);
      }
    else
      {
        t = h_14;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, v_16, t_16, u_16);
  t = r_7(v_16, t_16, u_16, t);
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_16, w_16);
  t = index_0_0(t);
  b_13 = t;
  t = (ATerm) ATinsert(ATempty, b_13);
  t = bottomup_1_0(u_1, t);
  return(t);
}
static ATerm n_7 (ATerm h_32, ATerm i_32, ATerm t)
{
  ATerm p_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(h_32, i_32);
      LocalPopChoice(t_14);
    }
  else
    {
      t = p_14;
      t = SSL_subtr(h_32, i_32);
    }
  return(t);
}
static ATerm o_7 (ATerm x_36, ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm f_13 = NULL,h_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_36, term_l_13);
  t = geq_0_0(t);
  t = term_p_13;
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_36, term_p_13);
  t = n_7(x_36, h_13, t);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_13, w_36);
  return(t);
}
ATerm repeat_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  static ATerm i_13 (ATerm t)
  {
    ATerm u_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_85(t);
        t = i_13(t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = u_14;
        t = i_85(t);
      }
    return(t);
  }
  t = i_13(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      {
        ATerm y_14 = ATgetArgument(t, 1);
        if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
          {
            n_13 = ATgetFirst((ATermList) y_14);
            o_13 = (ATerm) ATgetNext((ATermList) y_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_7(m_13, n_13, o_13, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm k_13 = NULL;
  t = repeat_2_0(w_1, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(((ATgetType(h_15) != AT_INT) || (ATgetInt((ATermInt) h_15) != 1)))
        _fail(t);
      {
        ATerm k_15 = ATgetArgument(t, 1);
        if(((ATgetType(k_15) == AT_LIST) && !(ATisEmpty(k_15))))
          {
            k_13 = ATgetFirst((ATermList) k_15);
            {
              ATerm m_15 = (ATerm) ATgetNext((ATermList) k_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_13;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(c_2, t);
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm j_16, ATerm i_16, ATerm n_16, ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATinsert(ATempty, j_16));
  t = conc_0_0(t);
  j_14 = t;
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL,q_14 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            i_14 = ATgetArgument(t, 0);
            k_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_14;
        if(match_cons(t, sym_Path_2))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            o_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_14;
        {
          static ATerm z_1 (ATerm t)
          {
            ATerm r_14 = NULL,s_14 = NULL,w_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,y_1 = NULL,t_1 = NULL;
            d_15 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_14 = ATgetFirst((ATermList) t);
                w_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_15);
            r_14 = t;
            t = s_14;
            if(match_cons(t, sym_selector_2))
              {
                a_15 = ATgetArgument(t, 0);
                b_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_14);
            z_14 = t;
            t = b_15;
            if(((q_14 != NULL) && (q_14 != t)))
              _fail(t);
            else
              q_14 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, a_15, b_15);
            t_1 = t;
            t = SSLsetAnnotations(t_1, z_14);
            c_15 = t;
            t = w_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_14), c_15);
            y_1 = t;
            t = SSLsetAnnotations(y_1, r_14);
            return(t);
          }
          t = at_last_1_0(z_1, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), j_14, k_14, n_16);
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_15 = NULL,i_15 = NULL,j_15 = NULL,l_15 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm w_15 = ATgetArgument(t, 0);
                  ATerm y_15 = ATgetArgument(t, 1);
                  ATerm z_15 = ATgetArgument(t, 2);
                  ATerm a_16 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = n_16;
              if(match_cons(t, sym_alt_2))
                {
                  l_15 = ATgetArgument(t, 0);
                  e_15 = ATgetArgument(t, 1);
                  t = e_15;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm b_16 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, l_15, k_14);
                      t = index_0_0(t);
                      b_16 = t;
                      t = (ATerm) ATinsert(ATempty, b_16);
                      t = bottomup_1_0(a_2, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          i_15 = ATgetFirst((ATermList) t);
                          j_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = j_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), j_14, k_14, n_16);
                      t = l_7(not_null(q_14), j_14, k_14, l_15, i_15, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      l_15 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), j_14, k_14, n_16);
                      t = k_7(not_null(q_14), j_14, k_14, l_15, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              {
                ATerm e_16 = t;
                int f_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(f_16);
                  }
                else
                  {
                    t = e_16;
                    {
                      ATerm g_16 = t;
                      int h_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(h_16);
                        }
                      else
                        {
                          t = g_16;
                          if(match_cons(t, sym__4))
                            {
                              ATerm k_16 = ATgetArgument(t, 0);
                              ATerm m_16 = ATgetArgument(t, 1);
                              ATerm r_16 = ATgetArgument(t, 2);
                              ATerm b_17 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(q_14);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), j_14, k_14, n_16);
                          t = f_7(j_14, k_14, n_16, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = n_16;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  static ATerm f_19 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_90(t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm g_18 = NULL,h_18 = NULL,j_18 = NULL,t_18 = NULL,w_18 = NULL,y_18 = NULL,g_2 = NULL;
          t = e_90(t);
          y_18 = t;
          if(match_cons(t, sym__2))
            {
              h_18 = ATgetArgument(t, 0);
              j_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_18);
          g_18 = t;
          t = h_18;
          t = g_90(t);
          t_18 = t;
          t = j_18;
          t = f_19(t);
          w_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_18, w_18);
          g_2 = t;
          t = SSLsetAnnotations(g_2, g_18);
          t = f_90(t);
        }
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      ATerm g_17 = ATgetArgument(t, 1);
      if(((ATgetType(g_17) != AT_LIST) || !(ATisEmpty(g_17))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      {
        ATerm h_17 = ATgetArgument(t, 1);
        if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
          {
            q_19 = ATgetFirst((ATermList) h_17);
            r_19 = (ATerm) ATgetNext((ATermList) h_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_p_13;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_19, term_p_13);
  t = u_8(p_19, t_19, t);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_19, q_19), (ATerm) ATmakeAppl(sym__2, s_19, r_19));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  if(match_cons(t, sym__2))
    {
      u_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_19), u_19);
  return(t);
}
ATerm nzip_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, m_19);
  t = genzip_4_0(d_2, e_2, f_2, p_90, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,c_20 = NULL;
  w_19 = t;
  t = term_n_17;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, w_19);
  t = z_8(c_20, w_19, t);
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_19;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(i_2, t);
  t = (ATerm) ATmakeAppl(sym__2, y_19, x_19);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      v_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(v_20, w_20, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,k_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  static ATerm u_2 (ATerm t)
  {
    ATerm p_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_2 (ATerm t)
            {
              t = not_null(s_20);
              return(t);
            }
            t = Instantiate_1_0(v_2, t);
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(s_17);
      }
    else
      {
        t = p_17;
      }
    return(t);
  }
  t_20 = t;
  t = SSL_explode_term(t_20);
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_20;
  t = foldr_3_0(m_2, n_2, o_2, t);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_20, (ATerm) ATinsert(ATempty, k_20));
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = debug_1_0(p_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_20;
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL;
      if(match_cons(t, sym__2))
        {
          x_20 = ATgetArgument(t, 0);
          y_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, k_20);
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_20, (ATerm)ATinsert(ATempty, k_20), y_20);
      t = r_7(x_20, b_21, y_20, t);
      return(t);
    }
    t = nzip_1_0(q_2, t);
  }
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = r_20;
  t = bottomup_1_0(u_2, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  t = SSL_explode_term(h_21);
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      ATerm d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_18 = ATgetFirst((ATermList) t);
          ATerm f_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_21;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5 = NULL,o_5 = NULL;
      o_5 = t;
      t = SSL_is_string(o_5);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, n_5);
      LocalPopChoice(l_18);
    }
  else
    {
      t = i_18;
      {
        ATerm m_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
            t_5 = t;
            t = SSL_is_int(t_5);
            s_5 = t;
            t = SSL_int_to_string(s_5);
            r_5 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, r_5);
            LocalPopChoice(o_18);
          }
        else
          {
            t = m_18;
            {
              ATerm p_18 = t;
              int q_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  LocalPopChoice(q_18);
                }
              else
                {
                  t = p_18;
                  {
                    ATerm r_18 = t;
                    int s_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        LocalPopChoice(s_18);
                      }
                    else
                      {
                        t = r_18;
                        {
                          ATerm d_22 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
                          d_22 = t;
                          t = term_x_18;
                          b_6 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, d_22), term_b_19);
                          c_6 = t;
                          t = SSL_printnl(b_6, c_6);
                          t = term_p_13;
                          a_6 = t;
                          t = SSL_exit(a_6);
                          t = (ATerm) ATinsert(ATinsert(ATempty, d_22), term_b_19);
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
static ATerm v_7 (ATerm r_30, ATerm s_30, ATerm t)
{
  ATerm f_22 = NULL;
  t = SSL_write_term_to_stream_baf(r_30, s_30);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_22);
  return(t);
}
static ATerm w_7 (ATerm w_86 (ATerm), ATerm z_325, ATerm b_31, ATerm t)
{
  ATerm i_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_325, term_c_19);
  t = s_8(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_22, b_31);
  t = w_86(t);
  t = fclose_0_0(t);
  t = b_31;
  return(t);
}
static ATerm x_7 (ATerm m_97 (ATerm), ATerm k_44, ATerm i_44, ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  t = m_97(t);
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_22, k_44, i_44);
  t = a_9(j_22, k_44, i_44, t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        t = term_g_19;
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, term_g_19);
        t = z_8(j_22, s_22, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_22 = ATgetFirst((ATermList) t);
      m_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_22, term_g_19, (ATerm) ATinsert(CheckATermList(m_22), (ATerm) ATinsert(CheckATermList(k_22), k_44)));
  t = lookup_table_0_1(j_22, t);
  r_22 = t;
  t = term_g_19;
  o_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), (ATerm) ATinsert(CheckATermList(k_22), k_44));
  p_22 = t;
  t = r_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(o_22, p_22, q_22, t);
  t = n_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm j_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = NULL,k_6 = NULL;
      i_23 = t;
      t = term_o_19;
      k_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_23, term_o_19);
      t = q_8(i_23, k_6, t);
      u_22 = t;
      t = SSL_mkstemp(u_22);
      LocalPopChoice(n_19);
    }
  else
    {
      t = j_19;
      {
        ATerm j_23 = NULL;
        t = term_z_19;
        j_23 = t;
        t = SSL_perror(j_23);
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
  t = term_d_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,r_23 = NULL,u_23 = NULL;
  t = P__tmpdir_0_0(t);
  r_23 = t;
  t = term_e_20;
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_23, term_e_20);
  t = q_8(r_23, u_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_12;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, term_b_12);
  t = x_7(x_2, m_23, n_23, t);
  t = SSL_close(l_23);
  t = m_23;
  return(t);
}
static ATerm y_7 (ATerm n_43, ATerm o_43, ATerm t)
{
  t = SSL_access(n_43, o_43);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_p_11;
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
      t = (ATerm) ATinsert(ATempty, term_f_20);
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_23, (ATerm) ATinsert(ATempty, term_f_20));
      t = y_7(x_23, z_23, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(match_cons(g_20, sym_Stream_1))
        {
          g_24 = ATgetArgument(g_20, 0);
        }
      else
        _fail(t);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(g_24, k_24, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,f_24 = NULL;
  t = read_from_0_0(t);
  t = h_79(t);
  f_24 = t;
  t = xtc_new_file_0_0(t);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_24, f_24);
  t = w_7(z_2, c_24, f_24, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_24);
  return(t);
}
static ATerm a_8 (ATerm q_21, ATerm r_21, ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  m_24 = t;
  {
    ATerm j_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
        t = z_8(q_21, r_21, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_20 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_20);
        {
          ATerm o_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_21, r_21, l_24);
          t = lookup_table_0_1(q_21, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_9(r_21, l_24, o_24, t);
          t = (ATerm) ATmakeAppl(sym__3, q_21, r_21, l_24);
        }
      }
    else
      {
        t = j_20;
        {
          ATerm q_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
          t = lookup_table_0_1(q_21, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_8(r_21, q_24, t);
          t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
        }
      }
  }
  t = m_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,m_25 = NULL,n_25 = NULL;
  j_25 = t;
  t = j_97(t);
  i_25 = t;
  {
    ATerm o_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL;
        t = term_g_19;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, term_g_19);
        t = z_8(i_25, o_25, t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_25 = ATgetFirst((ATermList) t);
      z_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_25, term_g_19, z_24);
  t = lookup_table_0_1(i_25, t);
  n_25 = t;
  t = term_g_19;
  k_25 = t;
  t = n_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(k_25, z_24, m_25, t);
  t = h_25;
  {
    static ATerm b_3 (ATerm t)
    {
      ATerm p_25 = NULL;
      p_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_25, p_25);
      t = a_8(i_25, p_25, t);
      return(t);
    }
    t = map_1_0(b_3, t);
  }
  t = j_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_83(t);
      t = t_83(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = u_20;
      t = t_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  v_25 = t;
  t = i_97(t);
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_25, term_g_19);
  {
    ATerm a_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            ATerm i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_19;
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_25, term_g_19);
        t = z_8(t_25, f_26, t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = a_21;
        t = (ATerm) ATempty;
      }
  }
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_25, term_g_19, (ATerm) ATinsert(CheckATermList(w_25), (ATerm) ATempty));
  t = lookup_table_0_1(t_25, t);
  a_26 = t;
  t = term_g_19;
  x_25 = t;
  t = (ATerm) ATinsert(CheckATermList(w_25), (ATerm) ATempty);
  y_25 = t;
  t = a_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(x_25, y_25, z_25, t);
  t = v_25;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  {
    ATerm j_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_26);
        LocalPopChoice(n_21);
      }
    else
      {
        t = j_21;
        t = r_26;
      }
  }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm j_26 = NULL;
  static ATerm f_3 (ATerm t)
  {
    ATerm k_26 = NULL;
    k_26 = t;
    {
      ATerm o_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_26 = NULL,m_26 = NULL;
          t = term_d_20;
          l_26 = t;
          t = term_g_19;
          m_26 = t;
          t = term_t_21;
          t = z_8(l_26, m_26, t);
          LocalPopChoice(s_21);
        }
      else
        {
          t = o_21;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_26 != NULL) && (j_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_26 = ATgetFirst((ATermList) t);
        {
          ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_26;
    t = map_1_0(k_3, t);
    t = k_26;
    t = end_scope_1_0(l_3, t);
    return(t);
  }
  t = begin_scope_1_0(e_3, t);
  t = restore_always_2_0(s_79, f_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm p_7 = NULL,i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      p_7 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(p_7);
  j_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_8), term_w_21), j_8), term_v_21);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  if(match_cons(t, sym_Path1_1))
    {
      z_27 = ATgetArgument(t, 0);
      t = z_27;
    }
  else
    {
      ATerm e_7 = NULL,m_7 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          z_27 = ATgetArgument(t, 0);
          a_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_28;
      t = map_1_0(m_3, t);
      t = concat_0_0(t);
      e_7 = t;
      t = (ATerm) ATinsert(CheckATermList(e_7), z_27);
      m_7 = t;
      t = SSL_concat_strings(m_7);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,q_28 = NULL;
  m_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_28;
      t = h_95(t);
    }
  else
    {
      ATerm t_28 = NULL,u_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_28;
      t = j_95(t);
      t_28 = t;
      t = q_28;
      t = foldr_3_0(h_95, i_95, j_95, t);
      u_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
      t = i_95(t);
    }
  return(t);
}
static ATerm b_8 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm z_39, ATerm y_39, ATerm t)
{
  t = o_92(t);
  {
    static ATerm n_3 (ATerm t)
    {
      ATerm v_28 = NULL;
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_39, v_28);
      t = n_92(t);
      return(t);
    }
    t = fetch_1_0(n_3, t);
  }
  t = y_39;
  return(t);
}
static ATerm c_8 (ATerm k_92 (ATerm), ATerm v_39, ATerm u_39, ATerm t)
{
  static ATerm t_29 (ATerm t)
  {
    ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
    m_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_29 = ATgetFirst((ATermList) t);
            o_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_29;
              {
                static ATerm p_3 (ATerm t)
                {
                  t = u_39;
                  return(t);
                }
                t = b_8(k_92, p_3, n_29, o_29, t);
              }
              t = t_29(t);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                ATerm t_9 = NULL,w_9 = NULL,w_2 = NULL;
                t = SSLgetAnnotations(m_29);
                t_9 = t;
                t = o_29;
                t = t_29(t);
                w_9 = t;
                t = (ATerm) ATinsert(CheckATermList(w_9), n_29);
                w_2 = t;
                t = SSLsetAnnotations(w_2, t_9);
              }
            }
        }
      }
    return(t);
  }
  t = v_39;
  t = t_29(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL;
      t = e_94(t);
      z_29 = t;
      t = (ATerm) ATinsert(ATempty, z_29);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm s_10 = NULL,y_10 = NULL;
        static ATerm s_3 (ATerm t)
        {
          t = collect_om_2_0(e_94, f_94, t);
          return(t);
        }
        y_10 = t;
        t = SSL_explode_term(y_10);
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            s_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_10;
        t = foldr_3_0(q_3, f_94, s_3, t);
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm d_30 = NULL,f_30 = NULL,j_30 = NULL,y_2 = NULL;
  j_30 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, f_30);
  y_2 = t;
  t = SSLsetAnnotations(y_2, d_30);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(v_3, l_30, m_30, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_30 = NULL;
  if(match_cons(t, sym__2))
    {
      n_30 = ATgetArgument(t, 0);
      if((n_30 != ATgetArgument(t, 1)))
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
  t = term_q_13;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm o_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(o_30, u_30, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_p_13;
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
  ATerm v_31 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      v_31 = ATgetArgument(t, 0);
      {
        ATerm e_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_31;
  return(t);
}
ATerm mk_key_arity_0_0 (ATerm t)
{
  ATerm c_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_31;
  if(match_cons(t, sym_Path_2))
    {
      g_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
      {
        ATerm s_31 = NULL;
        t = c_31;
        t = map_1_0(b_4, t);
        s_31 = t;
        t = (ATerm) ATinsert(CheckATermList(s_31), g_31);
      }
    }
  else
    {
      ATerm y_31 = NULL;
      if(match_cons(t, sym_Path1_1))
        {
          g_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
      t = arity_of_template_0_0(t);
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_31, (ATerm) ATinsert(ATempty, g_31));
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
  t = term_g_22;
  return(t);
}
static ATerm d_8 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm a_32 = NULL,d_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,w_32 = NULL;
  t = mk_key_arity_0_0(t);
  d_32 = t;
  t = term_n_17;
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_17, d_32, (ATerm) ATmakeAppl(sym__2, m_53, n_53));
  t = lookup_table_0_1(o_32, t);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  p_32 = t;
  t = w_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(d_32, p_32, q_32, t);
  t = m_53;
  t = path_to_string_0_0(t);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_32, n_53);
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  static ATerm c_34 (ATerm t)
  {
    ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
    ATerm h_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_85(t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = h_22;
      }
    b_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_33 = ATgetFirst((ATermList) t);
        a_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_11 = NULL,t_11 = NULL,a_3 = NULL;
          t = SSLgetAnnotations(b_34);
          q_11 = t;
          t = a_34;
          t = c_34(t);
          t_11 = t;
          t = (ATerm) ATinsert(CheckATermList(t_11), z_33);
          a_3 = t;
          t = SSLsetAnnotations(a_3, q_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_34;
      }
    return(t);
  }
  t = c_34(t);
  return(t);
}
ATerm at_last_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  static ATerm g_35 (ATerm t)
  {
    ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
    d_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_35 = ATgetFirst((ATermList) t);
        f_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_12 = NULL,c_3 = NULL;
          t = SSLgetAnnotations(d_35);
          o_12 = t;
          t = f_35;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(f_35), e_35);
          c_3 = t;
          t = SSLsetAnnotations(c_3, o_12);
          t = b_89(t);
          LocalPopChoice(v_22);
        }
      else
        {
          t = t_22;
          {
            ATerm u_13 = NULL,x_13 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(d_35);
            u_13 = t;
            t = f_35;
            t = g_35(t);
            x_13 = t;
            t = (ATerm) ATinsert(CheckATermList(x_13), e_35);
            d_3 = t;
            t = SSLsetAnnotations(d_3, u_13);
          }
        }
    }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_35 = ATgetFirst((ATermList) t);
      n_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_35;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_35;
    }
  else
    {
      t = n_35;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm v_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_22 = ATgetFirst((ATermList) t);
      v_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_35;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_35 = ATgetFirst((ATermList) t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_35;
  t = p_84(t);
  t = s_35;
  t = last_0_0(t);
  t = q_84(t);
  t = s_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_22 = ATgetFirst((ATermList) t);
      t_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_35;
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_17 = ATgetFirst((ATermList) t);
      k_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_17;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = k_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_17 = ATgetFirst((ATermList) t);
      m_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(m_17), term_a_23);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(m_17), term_b_23);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(m_17), term_c_23);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(m_17), term_d_23);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(m_17), term_g_23);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym_Arg_1))
    {
      m_38 = ATgetArgument(t, 0);
      {
        ATerm e_14 = NULL,g_14 = NULL,g_3 = NULL;
        t = SSLgetAnnotations(l_38);
        e_14 = t;
        t = SSL_string_to_int(m_38);
        g_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, g_14);
        g_3 = t;
        t = SSLsetAnnotations(g_3, e_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          m_38 = ATgetArgument(t, 0);
          n_38 = ATgetArgument(t, 1);
          {
            ATerm v_14 = NULL,f_15 = NULL,g_15 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(l_38);
            v_14 = t;
            t = SSL_string_to_int(m_38);
            f_15 = t;
            t = SSL_string_to_int(n_38);
            g_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, f_15, g_15);
            h_3 = t;
            t = SSLsetAnnotations(h_3, v_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              m_38 = ATgetArgument(t, 0);
              n_38 = ATgetArgument(t, 1);
              {
                ATerm x_15 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(l_38);
                x_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, m_38, n_38);
                j_3 = t;
                t = SSLsetAnnotations(j_3, x_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  m_38 = ATgetArgument(t, 0);
                  {
                    ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,e_17 = NULL,o_3 = NULL;
                    t = SSLgetAnnotations(l_38);
                    l_16 = t;
                    t = SSL_explode_string(m_38);
                    t = unquote_chars_2_0(f_4, g_4, t);
                    e_17 = t;
                    t = SSL_implode_string(e_17);
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
                  ATerm k_18 = NULL,n_18 = NULL,r_3 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      m_38 = ATgetArgument(t, 0);
                      n_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_38);
                  k_18 = t;
                  t = SSL_string_to_int(m_38);
                  n_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, n_18, n_38);
                  r_3 = t;
                  t = SSLsetAnnotations(r_3, k_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t)
  {
    t = topdown_1_0(l_80, t);
    return(t);
  }
  t = l_80(t);
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
  ATerm b_39 = NULL,d_39 = NULL;
  t = topdown_1_0(p_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      b_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(b_39, d_39, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm h_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
static ATerm m_8 (ATerm l_53, ATerm t)
{
  t = l_53;
  t = reverse_acc_2_0(_id, m_4, t);
  t = map_1_0(n_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  static ATerm h_39 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_81(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = SRTS_one(h_39, t);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  t = term_s_23;
  j_39 = t;
  t = term_t_23;
  k_39 = t;
  t = term_v_23;
  t = z_8(j_39, k_39, t);
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
  ATerm w_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
      t = term_b_24;
      t = get_options_0_0(t);
      t = oncetd_1_0(q_4, t);
      t = term_x_18;
      m_39 = t;
      t = (ATerm) ATinsert(ATempty, term_d_24);
      n_39 = t;
      t = SSL_printnl(m_39, n_39);
      t = term_p_13;
      l_39 = t;
      t = SSL_exit(l_39);
      t = (ATerm) ATinsert(ATempty, term_d_24);
      LocalPopChoice(y_23);
    }
  else
    {
      t = w_23;
      {
        ATerm r_39 = NULL,s_39 = NULL;
        t = term_x_18;
        r_39 = t;
        t = (ATerm) ATinsert(ATempty, term_e_24);
        s_39 = t;
        t = SSL_printnl(r_39, s_39);
        t = (ATerm) ATinsert(ATempty, term_e_24);
      }
    }
  return(t);
}
static ATerm q_40 (ATerm k_40, ATerm t)
{
  t = SSL_fclose(k_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  o_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_40 = ATgetArgument(t, 0);
      {
        ATerm h_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_40);
            LocalPopChoice(j_24);
          }
        else
          {
            t = h_24;
            t = q_40(o_40, t);
          }
      }
    }
  else
    {
      t = q_40(o_40, t);
    }
  return(t);
}
static ATerm p_8 (ATerm x_30, ATerm t)
{
  t = SSL_read_term_from_stream(x_30);
  return(t);
}
static ATerm q_8 (ATerm g_30, ATerm h_30, ATerm t)
{
  t = SSL_strcat(g_30, h_30);
  return(t);
}
static ATerm r_8 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_fopen(w_43, x_43);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_stdin_stream();
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t = SSL_stdout_stream();
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_stderr_stream();
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_40);
  return(t);
}
static ATerm i_42 (ATerm c_41, ATerm t)
{
  ATerm d_41 = NULL;
  t = SSL_explode_term(c_41);
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
          {
            d_41 = ATgetFirst((ATermList) p_24);
            {
              ATerm r_24 = (ATerm) ATgetNext((ATermList) p_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_42 (ATerm k_41, ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,s_41 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(m_41);
  p_41 = t;
  t = k_41;
  if(match_cons(t, sym_Path_1))
    {
      s_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_41, l_41);
  h_4 = t;
  t = SSLsetAnnotations(h_4, p_41);
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(n_41, o_41, t);
  return(t);
}
static ATerm m_42 (ATerm u_41, ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,d_42 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(x_41);
  a_42 = t;
  t = SSL_is_string(u_41);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, w_41);
  i_4 = t;
  t = SSLsetAnnotations(i_4, a_42);
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(y_41, z_41, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym__2))
    {
      g_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_42(f_42, t);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm g_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_42(g_42, h_42, f_42, t);
                  LocalPopChoice(l_25);
                }
              else
                {
                  t = g_25;
                  t = m_42(g_42, h_42, f_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_42(f_42, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_42 = NULL,q_42 = NULL,r_42 = NULL,y_42 = NULL;
  y_42 = t;
  {
    ATerm s_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_42, term_b_26);
        t = s_8(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = s_25;
        {
          ATerm k_19 = NULL,l_19 = NULL;
          t = term_c_26;
          l_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_26, y_42);
          t = q_8(l_19, y_42, t);
          k_19 = t;
          t = SSL_perror(k_19);
          _fail(t);
        }
      }
  }
  q_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(r_42, t);
  o_42 = t;
  t = q_42;
  t = fclose_0_0(t);
  t = o_42;
  return(t);
}
ATerm debug_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  b_43 = t;
  t = u_86(t);
  c_43 = t;
  t = term_x_18;
  d_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_43), c_43);
  e_43 = t;
  t = SSL_printnl(d_43, e_43);
  t = b_43;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,a_20 = NULL,b_20 = NULL;
  t = if_verbose1_1_0(a_5, t);
  t = ReadFromFile_0_0(t);
  k_43 = t;
  t = SSL_explode_term(k_43);
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
          {
            a_20 = ATgetFirst((ATermList) d_26);
            {
              ATerm e_26 = (ATerm) ATgetNext((ATermList) d_26);
              if(((ATgetType(e_26) != AT_LIST) || !(ATisEmpty(e_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_20;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = a_20;
  if(match_cons(t, sym_PP_Table_1))
    {
      j_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_8(j_43, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = debug_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  t = term_n_17;
  t = table_create_0_0(t);
  t = h_43;
  t = map_1_0(y_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_43 = NULL,m_43 = NULL;
      t = term_e_11;
      l_43 = t;
      t = term_n_26;
      m_43 = t;
      t = term_p_26;
      t = z_8(l_43, m_43, t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
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
  ATerm q_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_44 = NULL,t_44 = NULL,u_44 = NULL;
      t = term_e_11;
      t_44 = t;
      t = term_t_26;
      u_44 = t;
      t = term_v_26;
      t = z_8(t_44, u_44, t);
      q_44 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_44);
      LocalPopChoice(s_26);
    }
  else
    {
      t = q_26;
      t = term_p_11;
    }
  t = xtc_io_transform_1_0(i_5, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_44 = NULL;
        v_44 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_26 = ATgetFirst((ATermList) t);
                ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_44;
          }
        LocalPopChoice(x_26);
        {
          ATerm z_44 = NULL;
          z_44 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, z_44);
        }
      }
    else
      {
        t = w_26;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, f_5, t);
  t = read_pp_tables_0_0(t);
  t = c_44;
  t = xtc_temp_files_1_0(h_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_45 = NULL,d_45 = NULL,e_45 = NULL,i_45 = NULL,j_45 = NULL;
  b_45 = t;
  t = term_b_12;
  t = whoami_0_0(t);
  d_45 = t;
  t = term_x_18;
  i_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_27), d_45), term_a_27);
  j_45 = t;
  t = SSL_printnl(i_45, j_45);
  t = term_p_13;
  e_45 = t;
  t = SSL_exit(e_45);
  t = b_45;
  return(t);
}
ATerm at_end_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  static ATerm p_46 (ATerm t)
  {
    ATerm l_46 = NULL,n_46 = NULL,o_46 = NULL;
    o_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_46 = ATgetFirst((ATermList) t);
        n_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_20 = NULL,p_20 = NULL,l_4 = NULL;
          t = SSLgetAnnotations(o_46);
          m_20 = t;
          t = n_46;
          t = p_46(t);
          p_20 = t;
          t = (ATerm) ATinsert(CheckATermList(p_20), l_46);
          l_4 = t;
          t = SSLsetAnnotations(l_4, m_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_46;
        t = q_88(t);
      }
    return(t);
  }
  t = p_46(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_45;
    }
  else
    {
      static ATerm l_5 (ATerm t)
      {
        t = not_null(n_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_45 = ATgetFirst((ATermList) t);
          if(((n_45 != NULL) && (n_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_45;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
static ATerm n_47 (ATerm v_46, ATerm t)
{
  ATerm y_46 = NULL;
  t = SSL_explode_term(v_46);
  if(match_cons(t, sym__2))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_46;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_47 = NULL,f_47 = NULL,j_47 = NULL;
  j_47 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_5 (ATerm t)
            {
              t = f_47;
              return(t);
            }
            t = d_47;
            t = at_end_1_0(w_5, t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = n_47(j_47, t);
          }
      }
    }
  else
    {
      t = n_47(j_47, t);
    }
  return(t);
}
static ATerm t_8 (ATerm a_19, ATerm z_18, ATerm t)
{
  ATerm o_47 = NULL,r_47 = NULL,t_47 = NULL,u_47 = NULL;
  t = a_19;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL;
        t = term_e_11;
        w_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_11, a_19);
        t = z_8(w_47, a_19, t);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATempty;
      }
  }
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, r_47);
  t = conc_0_0(t);
  o_47 = t;
  t = term_e_11;
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_11, a_19, o_47);
  t = lookup_table_0_1(t_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(a_19, o_47, u_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_11, a_19, o_47);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  t = term_n_26;
  y_47 = t;
  t = (ATerm) ATinsert(ATempty, x_47);
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, (ATerm) ATinsert(ATempty, x_47));
  t = t_8(y_47, z_47, t);
  t = x_47;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, y_5, z_5, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  if(match_string(t, "-k"))
    {
      t = b_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_48;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
  e_48 = t;
  t = SSL_string_to_int(e_48);
  f_48 = t;
  t = term_j_27;
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, f_48);
  t = c_9(g_48, f_48, t);
  t = e_48;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, f_6, i_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  if(match_string(t, "-S"))
    {
      t = j_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_48;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  t = term_l_27;
  m_48 = t;
  t = term_q_13;
  n_48 = t;
  t = term_m_27;
  t = c_9(m_48, n_48, t);
  t = term_o_27;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_p_27;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm o_48 = NULL,q_48 = NULL,r_48 = NULL;
  o_48 = t;
  t = SSL_string_to_int(o_48);
  q_48 = t;
  t = term_l_27;
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_27, q_48);
  t = c_9(r_48, q_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_48);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_q_27;
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
  ATerm x_48 = NULL,y_48 = NULL;
  t = term_r_27;
  x_48 = t;
  t = term_b_12;
  y_48 = t;
  t = term_s_27;
  t = c_9(x_48, y_48, t);
  t = term_t_27;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, l_6, m_6, t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm x_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_6, o_6, p_6, t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = x_27;
            t = Option_3_0(r_6, s_6, t_6, t);
          }
      }
    }
  return(t);
}
static ATerm c_9 (ATerm u_18, ATerm v_18, ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  t = term_e_11;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_11, u_18, v_18);
  t = lookup_table_0_1(z_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(u_18, v_18, a_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_11, u_18, v_18);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_49 = NULL,j_49 = NULL,m_49 = NULL;
      t = term_b_12;
      t = e_0(t);
      i_49 = t;
      t = term_c_28;
      j_49 = t;
      t = term_d_28;
      m_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, i_49);
      t = a_9(j_49, m_49, i_49, t);
      _fail(t);
    }
  else
    {
      ATerm r_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_49 = ATgetFirst((ATermList) t);
          h_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_49;
      t = c_0(t);
      t = term_b_12;
      t = d_0(t);
      r_49 = t;
      t = (ATerm) ATinsert(CheckATermList(h_49), r_49);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  if(match_string(t, "-o"))
    {
      t = v_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_49;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  w_49 = t;
  t = term_f_11;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, w_49);
  t = c_9(x_49, w_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_49);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_6, v_6, w_6, t);
  return(t);
}
static ATerm a_9 (ATerm l_21, ATerm m_21, ATerm k_21, ATerm t)
{
  ATerm a_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_28 = ATgetArgument(t, 0);
            ATerm l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
        t = z_8(l_21, m_21, t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATempty;
      }
  }
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_21, m_21, (ATerm) ATinsert(CheckATermList(d_50), k_21));
  t = lookup_table_0_1(l_21, t);
  g_50 = t;
  t = (ATerm) ATinsert(CheckATermList(d_50), k_21);
  e_50 = t;
  t = g_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(m_21, e_50, f_50, t);
  t = a_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,p_50 = NULL,r_50 = NULL,s_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
      t = term_b_12;
      t = n_0(t);
      t_50 = t;
      t = term_c_28;
      u_50 = t;
      t = term_d_28;
      v_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, t_50);
      t = a_9(u_50, v_50, t_50, t);
      _fail(t);
    }
  else
    {
      ATerm b_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_50 = ATgetFirst((ATermList) t);
          p_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_50 = ATgetFirst((ATermList) t);
          s_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_50;
      t = k_0(t);
      t = r_50;
      t = l_0(t);
      b_51 = t;
      t = (ATerm) ATinsert(CheckATermList(s_50), b_51);
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  if(match_string(t, "-i"))
    {
      t = f_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_51;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  t = term_t_26;
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_26, g_51);
  t = c_9(h_51, g_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_51);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, a_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_12;
  t = whoami_0_0(t);
  i_51 = t;
  t = term_x_18;
  k_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_28), i_51);
  l_51 = t;
  t = SSL_printnl(k_51, l_51);
  t = term_p_13;
  j_51 = t;
  t = SSL_exit(j_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  t = term_e_11;
  m_51 = t;
  t = term_s_28;
  n_51 = t;
  t = term_y_28;
  t = z_8(m_51, n_51, t);
  return(t);
}
static ATerm u_8 (ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_32, c_32);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      t = SSL_addr(b_32, c_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_51;
      t = f_95(t);
    }
  else
    {
      ATerm v_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_51 = ATgetFirst((ATermList) t);
          r_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_51;
      t = foldr_2_0(f_95, g_95, t);
      v_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_51, v_51);
      t = g_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm p_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(p_21, x_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_51 = NULL,d_21 = NULL,e_21 = NULL;
  t = times_0_0(t);
  e_21 = t;
  t = SSL_explode_term(e_21);
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_21;
  t = foldr_2_0(d_7, q_7, t);
  y_51 = t;
  t = SSL_TicksToSeconds(y_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,y_52 = NULL;
  t_52 = t;
  if(match_cons(t, sym__2))
    {
      u_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_52;
        if((u_52 != t))
          {
            _fail(t);
          }
        t = t_52;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATmakeAppl(sym__2, u_52, y_52);
        {
          ATerm e_29 = t;
          int f_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_52, y_52);
              LocalPopChoice(f_29);
            }
          else
            {
              t = e_29;
              t = SSL_gtr(u_52, y_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_52, y_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
        t = term_e_11;
        i_53 = t;
        t = term_l_27;
        j_53 = t;
        t = term_i_29;
        t = z_8(i_53, j_53, t);
        h_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_53, term_p_13);
        t = geq_0_0(t);
        t = d_53;
        t = q_77(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = d_53;
      }
  }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm p_53 = NULL,t_53 = NULL,h_54 = NULL,i_54 = NULL;
  t = run_time_0_0(t);
  p_53 = t;
  t = term_b_12;
  t = whoami_0_0(t);
  t_53 = t;
  t = term_x_18;
  h_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_29), p_53), term_j_29), t_53);
  i_54 = t;
  t = SSL_printnl(h_54, i_54);
  t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_29), p_53), term_j_29), t_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_13;
  m_54 = t;
  t = SSL_exit(m_54);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm y_54 = NULL,c_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_54 = ATgetArgument(t, 0);
          {
            ATerm o_23 = NULL,o_4 = NULL;
            t = SSLgetAnnotations(c_55);
            o_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_54);
            o_4 = t;
            t = SSLsetAnnotations(o_4, o_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm l_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_54 = NULL,q_54 = NULL;
      t = term_e_11;
      p_54 = t;
      t = term_q_29;
      q_54 = t;
      t = term_r_29;
      t = z_8(p_54, q_54, t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = l_29;
      t = fetch_1_0(t_7, t);
    }
  t = s_98(t);
  return(t);
}
static ATerm d_9 (ATerm s_24, ATerm t_24, ATerm u_24, ATerm t)
{
  ATerm e_55 = NULL;
  t = SSL_hashtable_put(u_24, s_24, t_24);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_22, ATerm t)
{
  ATerm v_55 = NULL;
  t = table_hashtable_0_0(t);
  v_55 = t;
  {
    ATerm s_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        t = v_55;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_9(x_22, a_24, t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = s_29;
        {
          ATerm i_24 = NULL;
          t = x_22;
          t = table_create_0_0(t);
          t = v_55;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_9(x_22, i_24, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_25, ATerm b_25, ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_hashtable_create(a_25, b_25);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,h_56 = NULL,i_56 = NULL;
  b_56 = t;
  t = term_v_29;
  h_56 = t;
  t = term_w_29;
  i_56 = t;
  t = b_56;
  t = new_hashtable_0_2(h_56, i_56, t);
  c_56 = t;
  t = b_56;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(b_56, c_56, d_56, t);
  t = b_56;
  return(t);
}
static ATerm w_8 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm l_56 = NULL;
  t = SSL_hashtable_remove(y_24, x_24);
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_56);
  return(t);
}
static ATerm x_8 (ATerm c_25, ATerm t)
{
  ATerm n_56 = NULL;
  t = SSL_hashtable_destroy(c_25);
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_56);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_56 = NULL;
  t = SSL_table_hashtable();
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_56);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  p_56 = t;
  t = table_hashtable_0_0(t);
  q_56 = t;
  t = lookup_table_0_1(p_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_8(s_56, t);
  t = q_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(p_56, r_56, t);
  t = p_56;
  return(t);
}
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  static ATerm y_57 (ATerm t)
  {
    ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
    t_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_57;
      }
    else
      {
        ATerm f_25 = NULL,q_25 = NULL,r_25 = NULL,r_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_57 = ATgetFirst((ATermList) t);
            v_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_57);
        f_25 = t;
        t = u_57;
        t = z_87(t);
        q_25 = t;
        t = v_57;
        t = y_57(t);
        r_25 = t;
        t = (ATerm) ATinsert(CheckATermList(r_25), q_25);
        r_4 = t;
        t = SSLsetAnnotations(r_4, f_25);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_58 = NULL,f_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_58 = ATgetFirst((ATermList) t);
      f_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_58 = NULL,n_58 = NULL;
        static ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_58)), not_null(n_58));
          return(t);
        }
        t = f_58;
        t = i_0(t);
        if(((m_58 != NULL) && (m_58 != t)))
          _fail(t);
        else
          m_58 = t;
        t = d_58;
        t = g_0(t);
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = f_58;
        t = reverse_acc_2_0(g_0, f_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,x_58 = NULL,z_4 = NULL;
  x_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_58);
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_58);
  z_4 = t;
  t = SSLsetAnnotations(z_4, t_58);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm z_58 = NULL;
  z_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_58), term_x_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  ATerm y_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_58 = NULL,s_58 = NULL;
      t = term_e_11;
      r_58 = t;
      t = term_s_28;
      s_58 = t;
      t = term_y_28;
      t = z_8(r_58, s_58, t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = y_29;
      t = fetch_1_0(h_8, t);
    }
  t = term_b_30;
  t = echo_0_0(t);
  t = term_c_28;
  p_58 = t;
  t = term_d_28;
  q_58 = t;
  t = term_c_30;
  t = z_8(p_58, q_58, t);
  t = reverse_acc_2_0(_id, k_8, t);
  t = map_1_0(l_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  static ATerm w_59 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
    t_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_59 = ATgetFirst((ATermList) t);
        v_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_26 = NULL,u_26 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(t_59);
          o_26 = t;
          t = u_59;
          t = j_88(t);
          u_26 = t;
          t = (ATerm) ATinsert(CheckATermList(v_59), u_26);
          b_5 = t;
          t = SSLsetAnnotations(b_5, o_26);
          LocalPopChoice(i_30);
        }
      else
        {
          t = e_30;
          {
            ATerm i_27 = NULL,n_27 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(t_59);
            i_27 = t;
            t = v_59;
            t = w_59(t);
            n_27 = t;
            t = (ATerm) ATinsert(CheckATermList(n_27), u_59);
            c_5 = t;
            t = SSLsetAnnotations(c_5, i_27);
          }
        }
    }
    return(t);
  }
  t = w_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  {
    ATerm k_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_60;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_30 = ATgetFirst((ATermList) t);
                ATerm t_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_60;
          }
        LocalPopChoice(p_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATinsert(ATempty, a_60);
      }
  }
  b_60 = t;
  t = term_m_11;
  c_60 = t;
  t = SSL_printnl(c_60, b_60);
  t = a_60;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  t = term_e_11;
  g_60 = t;
  t = term_s_28;
  h_60 = t;
  t = term_y_28;
  t = z_8(g_60, h_60, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_9 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_hashtable_get(w_24, v_24);
  return(t);
}
static ATerm z_8 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm i_60 = NULL;
  t = lookup_table_0_1(e_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(f_23, i_60, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL;
  t = term_v_30;
  k_60 = t;
  t = term_b_12;
  l_60 = t;
  t = term_w_30;
  t = c_9(k_60, l_60, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  t = term_v_30;
  o_60 = t;
  t = term_b_12;
  p_60 = t;
  t = term_w_30;
  t = c_9(o_60, p_60, t);
  t = term_z_30;
  m_60 = t;
  t = term_b_12;
  n_60 = t;
  t = term_a_31;
  t = c_9(m_60, n_60, t);
  t = term_d_31;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_8, o_8, h_9, t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = Option_3_0(i_9, j_9, k_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,d_11 = NULL;
  v_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_60 = ATgetFirst((ATermList) t);
      s_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_60);
  q_60 = t;
  t = r_60;
  t = p_72(t);
  t_60 = t;
  t = s_60;
  t = q_72(t);
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), t_60);
  d_11 = t;
  t = SSLsetAnnotations(d_11, q_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,f_61 = NULL,g_61 = NULL,i_11 = NULL;
  a_61 = t;
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_31;
        t = q_100(t);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
      }
  }
  t = a_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_61 = ATgetFirst((ATermList) t);
      d_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_61);
  b_61 = t;
  t = term_s_28;
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, c_61);
  t = c_9(g_61, c_61, t);
  t = d_61;
  {
    static ATerm q_61 (ATerm t)
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_61 = NULL;
              j_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_61;
              LocalPopChoice(q_31);
            }
          else
            {
              t = p_31;
              t = q_100(t);
              t = Cons_2_0(_id, q_61, t);
            }
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm m_61 = NULL,n_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_61 = ATgetFirst((ATermList) t);
                n_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_61), (ATerm) ATmakeAppl(sym_Undefined_1, m_61));
          }
        }
      return(t);
    }
    t = q_61(t);
  }
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), (ATerm) ATmakeAppl(sym_Program_1, c_61));
  i_11 = t;
  t = SSLsetAnnotations(i_11, b_61);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm d_62 = NULL;
  d_62 = t;
  if(match_string(t, "--help"))
    {
      t = d_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_62;
        }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL;
  t = term_q_29;
  e_62 = t;
  t = term_b_12;
  f_62 = t;
  t = term_r_31;
  t = c_9(e_62, f_62, t);
  t = term_t_31;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL;
  x_61 = t;
  t = term_c_28;
  y_61 = t;
  t = term_w_31;
  t = lookup_table_0_1(y_61, t);
  c_62 = t;
  t = term_d_28;
  z_61 = t;
  t = (ATerm) ATempty;
  a_62 = t;
  t = c_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(z_61, a_62, b_62, t);
  t = x_61;
  {
    static ATerm l_9 (ATerm t)
    {
      ATerm x_31 = t;
      int z_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_100(t);
          LocalPopChoice(z_31);
        }
      else
        {
          t = x_31;
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_9, n_9, p_9, t);
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_9, t);
  }
  {
    ATerm g_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_62 = NULL;
        q_62 = t;
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_28 = NULL;
              t = q_62;
              {
                ATerm m_32 = t;
                int n_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_28 = NULL,j_28 = NULL;
                    t = term_e_11;
                    i_28 = t;
                    t = term_q_29;
                    j_28 = t;
                    t = term_r_29;
                    t = z_8(i_28, j_28, t);
                    LocalPopChoice(n_32);
                  }
                else
                  {
                    t = m_32;
                    t = fetch_1_0(u_9, t);
                  }
              }
              t = q_62;
              t = default_system_usage_0_0(t);
              t = term_q_13;
              e_28 = t;
              t = SSL_exit(e_28);
              LocalPopChoice(l_32);
            }
          else
            {
              t = k_32;
              {
                ATerm p_28 = NULL,w_28 = NULL,x_28 = NULL;
                t = term_e_11;
                w_28 = t;
                t = term_v_30;
                x_28 = t;
                t = term_r_32;
                t = z_8(w_28, x_28, t);
                t = q_62;
                t = default_system_about_0_0(t);
                t = term_q_13;
                p_28 = t;
                t = SSL_exit(p_28);
              }
            }
        }
        LocalPopChoice(j_32);
      }
    else
      {
        t = g_32;
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
              static ATerm v_9 (ATerm t)
              {
                ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,g_21 = NULL;
                w_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_62);
                u_62 = t;
                t = v_62;
                if(((v_61 != NULL) && (v_61 != t)))
                  _fail(t);
                else
                  v_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_62);
                g_21 = t;
                t = SSLsetAnnotations(g_21, u_62);
                return(t);
              }
              t = fetch_1_0(v_9, t);
              t = term_x_18;
              s_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_61)), term_u_32);
              t_62 = t;
              t = SSL_printnl(s_62, t_62);
              t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_61)), term_u_32));
              t = default_system_usage_0_0(t);
              t = term_p_13;
              r_62 = t;
              t = SSL_exit(r_62);
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
            }
        }
      }
  }
  w_61 = t;
  t = term_c_28;
  t = table_destroy_0_0(t);
  t = w_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  t = parse_options_1_0(u_98, t);
  b_63 = t;
  t = term_s_23;
  t = table_create_0_0(t);
  t = term_s_23;
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, b_63);
  t = lookup_table_0_1(c_63, t);
  f_63 = t;
  t = term_t_23;
  d_63 = t;
  t = f_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(d_63, b_63, e_63, t);
  t = b_63;
  t = w_98(t);
  {
    ATerm v_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_98, t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = v_32;
        {
          ATerm y_32 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_98(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_33);
            }
          else
            {
              t = y_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(f_10, g_10, o_10, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_33);
                      }
                    else
                      {
                        t = i_33;
                        {
                          ATerm k_33 = t;
                          int l_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(l_33);
                            }
                          else
                            {
                              t = k_33;
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
static ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL;
  t = term_m_33;
  h_63 = t;
  t = term_b_12;
  i_63 = t;
  t = term_n_33;
  t = c_9(h_63, i_63, t);
  t = term_o_33;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_9, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
