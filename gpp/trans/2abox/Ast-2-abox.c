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
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_SOpt_2;
Symbol sym_Arg2_2;
Symbol sym_Arg_1;
Symbol sym_HV_2;
Symbol sym_S_1;
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
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
}
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_n_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_h_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_y_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_f_12;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_j_19);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_c_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_k_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_q_26);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_13);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_13);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_f_12);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_e_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_t_27);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_y_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_j_28, term_k_28);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_f_12);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_f_12);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_f_12);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, (ATerm) ATempty);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_z_30);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_f_12);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm a_20, ATerm b_20, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm a_92 (ATerm), ATerm t);
static ATerm h_7 (ATerm u_18, ATerm v_18, ATerm t_18, ATerm t);
static ATerm q_9 (ATerm f_6, ATerm g_6, ATerm i_6, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm i_118 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm collect_p__1_0 (ATerm j_125 (ATerm), ATerm t);
static ATerm i_7 (ATerm d_35, ATerm e_35, ATerm t);
static ATerm j_7 (ATerm u_88 (ATerm), ATerm n_0, ATerm x_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm k_7 (ATerm l_18, ATerm n_18, ATerm k_18, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm m_7 (ATerm r_17, ATerm s_17, ATerm u_17, ATerm t_17, ATerm t);
static ATerm n_7 (ATerm m_17, ATerm n_17, ATerm q_17, ATerm p_17, ATerm o_17, ATerm t);
static ATerm p_7 (ATerm l_34, ATerm m_34, ATerm t);
static ATerm q_7 (ATerm q_47, ATerm o_47, ATerm p_47, ATerm t);
ATerm repeat_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm t_7 (ATerm d_17, ATerm c_17, ATerm h_17, ATerm t);
ATerm genzip_4_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm nzip_1_0 (ATerm x_104 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm trm2abox_list_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
static ATerm x_7 (ATerm v_32, ATerm w_32, ATerm t);
static ATerm y_7 (ATerm p_98 (ATerm), ATerm r_351, ATerm f_33, ATerm t);
static ATerm z_7 (ATerm d_112 (ATerm), ATerm d_55, ATerm b_55, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm a_8 (ATerm g_54, ATerm h_54, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm u_90 (ATerm), ATerm t);
static ATerm c_8 (ATerm j_22, ATerm k_22, ATerm t);
ATerm end_scope_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_111 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_91 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t);
static ATerm d_8 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm s_50, ATerm r_50, ATerm t);
static ATerm e_8 (ATerm s_106 (ATerm), ATerm o_50, ATerm n_50, ATerm t);
static ATerm s_3 (ATerm t);
ATerm collect_om_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm arity_of_template_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm mk_key_arity_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_8 (ATerm f_64, ATerm g_64, ATerm t);
ATerm unescape_chars_1_0 (ATerm w_96 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm unquote_chars_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_91 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm o_8 (ATerm e_64, ATerm t);
ATerm oncetd_1_0 (ATerm d_93 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm f_40 (ATerm z_39, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_8 (ATerm b_33, ATerm t);
static ATerm s_8 (ATerm k_32, ATerm l_32, ATerm t);
static ATerm t_8 (ATerm p_54, ATerm q_54, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_41 (ATerm q_40, ATerm t);
static ATerm z_41 (ATerm u_40, ATerm v_40, ATerm w_40, ATerm t);
static ATerm a_42 (ATerm g_41, ATerm i_41, ATerm j_41, ATerm t);
static ATerm u_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_98 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_102 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_46 (ATerm b_46, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_8 (ATerm t_19, ATerm s_19, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_9 (ATerm n_19, ATerm o_19, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_9 (ATerm e_22, ATerm f_22, ATerm d_22, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_8 (ATerm f_34, ATerm g_34, ATerm t);
ATerm foldr_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_89 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm need_help_1_0 (ATerm j_113 (ATerm), ATerm t);
static ATerm f_9 (ATerm w_26, ATerm x_26, ATerm y_26, ATerm t);
ATerm lookup_table_0_1 (ATerm q_23, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_27, ATerm f_27, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_8 (ATerm b_27, ATerm c_27, ATerm t);
static ATerm z_8 (ATerm g_27, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_102 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_9 (ATerm z_26, ATerm a_27, ATerm t);
static ATerm b_9 (ATerm x_23, ATerm y_23, ATerm t);
static ATerm q_8 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_115 (ATerm), ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm parse_options_1_0 (ATerm g_115 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_4 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = j_1;
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, e_0);
        t = b_8(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(w_10);
      }
    else
      {
        t = x_4;
        {
          ATerm x_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = j_1;
              t = q_0(t);
              y_0 = t;
              {
                ATerm a_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_1 = NULL;
                    g_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_1;
                          }
                        else
                          {
                            t = g_1;
                            if((l_1 != t))
                              {
                                _fail(t);
                              }
                            t = g_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, y_0);
              t = b_8(l_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(z_10);
            }
          else
            {
              t = x_10;
              t = j_1;
              t = q_0(t);
              if((l_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
            }
        }
      }
  }
  return(t);
}
static ATerm b_8 (ATerm a_20, ATerm b_20, ATerm t)
{
  t = SSL_copy(a_20, b_20);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm b_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 = NULL,l_2 = NULL;
      t = term_g_11;
      k_2 = t;
      t = term_n_11;
      l_2 = t;
      t = term_o_11;
      t = b_9(k_2, l_2, t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = b_11;
      t = term_p_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_1 = NULL,p_1 = NULL;
      t = term_n_11;
      {
        ATerm q_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_g_11;
            r_1 = t;
            t = term_n_11;
            s_1 = t;
            t = term_o_11;
            t = b_9(r_1, s_1, t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = q_11;
            t = term_p_11;
          }
      }
      m_1 = t;
      t = term_t_11;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_11, m_1);
      t = b_8(p_1, m_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm u_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL,w_4 = NULL;
  t_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_4 = ATgetFirst((ATermList) t);
          w_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 = NULL,d_2 = NULL,i_0 = NULL;
            t = SSLgetAnnotations(t_4);
            z_1 = t;
            t = v_4;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_4;
            t = flat_list_0_0(t);
            d_2 = t;
            t = (ATerm) ATinsert(CheckATermList(d_2), v_4);
            i_0 = t;
            t = SSLsetAnnotations(i_0, z_1);
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm y_11 = t;
              int z_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,k_3 = NULL,t_0 = NULL;
                  t = SSLgetAnnotations(t_4);
                  u_2 = t;
                  t = v_4;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = v_4;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm a_12 = ATgetFirst((ATermList) t);
                          ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = v_4;
                    }
                  t = (ATerm) ATinsert(CheckATermList(w_4), v_4);
                  t_0 = t;
                  t = SSLsetAnnotations(t_0, u_2);
                  k_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm d_12 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = k_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm e_12 = ATgetFirst((ATermList) t);
                      s_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_2, s_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(z_11);
                }
              else
                {
                  t = y_11;
                  {
                    ATerm y_3 = NULL,c_4 = NULL,x_0 = NULL;
                    t = SSLgetAnnotations(t_4);
                    y_3 = t;
                    t = w_4;
                    t = flat_list_0_0(t);
                    c_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(c_4), v_4);
                    x_0 = t;
                    t = SSLsetAnnotations(x_0, y_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      g_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
      {
        ATerm k_5 = NULL,l_5 = NULL;
        t = term_f_12;
        t = r_0(t);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, l_5);
        t = index_0_0(t);
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_5, k_5);
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
      t = term_f_12;
      t = r_0(t);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, n_5);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(a_92, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = a_92(t);
  return(t);
}
static ATerm h_7 (ATerm u_18, ATerm v_18, ATerm t_18, ATerm t)
{
  ATerm p_5 = NULL,r_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    ATerm g_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_0 (ATerm t)
            {
              t = not_null(p_5);
              return(t);
            }
            t = Instantiate_1_0(k_0, t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(o_12);
      }
    else
      {
        t = g_12;
      }
    return(t);
  }
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5;
  {
    static ATerm c_0 (ATerm t)
    {
      ATerm s_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym__2))
        {
          s_5 = ATgetArgument(t, 0);
          w_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_5, u_18, w_5);
      t = t_7(s_5, u_18, w_5, t);
      return(t);
    }
    t = nzip_1_0(c_0, t);
  }
  if(((p_5 != NULL) && (p_5 != t)))
    _fail(t);
  else
    p_5 = t;
  t = v_18;
  t = bottomup_1_0(f_0, t);
  return(t);
}
static ATerm q_9 (ATerm f_6, ATerm g_6, ATerm i_6, ATerm t)
{
  ATerm o_6 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(i_6);
  o_6 = t;
  t = g_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_6), f_6);
  c_1 = t;
  t = SSLsetAnnotations(c_1, o_6);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  static ATerm p_9 (ATerm t)
  {
    static ATerm s_9 (ATerm y_6, ATerm b_7, ATerm d_7, ATerm e_7, ATerm t)
    {
      ATerm v_7 = NULL,w_7 = NULL,h_8 = NULL,d_1 = NULL;
      t = e_7;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_12 = ATgetFirst((ATermList) t);
          ATerm u_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_7);
      v_7 = t;
      t = term_f_12;
      t = i_118(t);
      {
        static ATerm s_0 (ATerm t)
        {
          ATerm v_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_13 = t;
              int b_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm u_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, b_7), y_6);
                    return(t);
                  }
                  t = Instantiate_1_0(u_0, t);
                  LocalPopChoice(b_13);
                }
              else
                {
                  t = a_13;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(z_12);
            }
          else
            {
              t = v_12;
            }
          return(t);
        }
        t = bottomup_1_0(s_0, t);
      }
      h_8 = t;
      t = d_7;
      t = p_9(t);
      w_7 = t;
      t = (ATerm) ATinsert(CheckATermList(w_7), h_8);
      d_1 = t;
      t = SSLsetAnnotations(d_1, v_7);
      return(t);
    }
    ATerm p_8 = NULL,x_8 = NULL,a_9 = NULL,d_9 = NULL,h_9 = NULL;
    p_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_8;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_8 = ATgetFirst((ATermList) t);
            a_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_9;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_9 = ATgetFirst((ATermList) t);
            h_9 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_13 = t;
              int f_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_9(x_8, a_9, p_8, t);
                  LocalPopChoice(f_13);
                }
              else
                {
                  t = e_13;
                  t = s_9(x_8, d_9, h_9, p_8, t);
                }
            }
          }
        else
          {
            t = q_9(x_8, a_9, p_8, t);
          }
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm j_125 (ATerm), ATerm t)
{
  static ATerm u_9 (ATerm t)
  {
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = j_125(t);
        t_9 = t;
        t = (ATerm) ATinsert(ATempty, t_9);
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
        {
          ATerm u_4 = NULL,y_4 = NULL;
          y_4 = t;
          t = SSL_explode_term(y_4);
          if(match_cons(t, sym__2))
            {
              ATerm m_13 = ATgetArgument(t, 0);
              u_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_4;
          t = foldr_3_0(v_0, conc_0_0, u_9, t);
        }
      }
    return(t);
  }
  t = u_9(t);
  return(t);
}
static ATerm i_7 (ATerm d_35, ATerm e_35, ATerm t)
{
  t = SSL_mod(d_35, e_35);
  return(t);
}
static ATerm j_7 (ATerm u_88 (ATerm), ATerm n_0, ATerm x_16, ATerm t)
{
  ATerm z_9 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_10 = NULL,c_10 = NULL,d_10 = NULL;
      t = term_s_13;
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_0, term_s_13);
      t = i_7(n_0, d_10, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_f_12;
      t = u_88(t);
      a_10 = t;
      t = term_s_13;
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_13, a_10, x_16);
      t = t_7(c_10, a_10, x_16, t);
      z_9 = t;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm e_10 = NULL,f_10 = NULL;
        t = term_f_12;
        t = u_88(t);
        e_10 = t;
        t = term_t_13;
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_t_13, e_10, x_16);
        t = t_7(f_10, e_10, x_16, t);
        z_9 = t;
      }
    }
  t = z_9;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_1 = NULL;
  n_10 = t;
  if(match_cons(t, sym_S_1))
    {
      m_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, m_10);
  o_1 = t;
  t = SSLsetAnnotations(o_1, l_10);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(o_10, p_10, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm k_7 (ATerm l_18, ATerm n_18, ATerm k_18, ATerm t)
{
  ATerm i_10 = NULL;
  static ATerm h_1 (ATerm t)
  {
    t = n_18;
    return(t);
  }
  t = k_18;
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm j_10 = NULL,k_10 = NULL;
      static ATerm z_0 (ATerm t)
      {
        t = l_18;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          j_10 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_7(z_0, j_10, k_10, t);
      return(t);
    }
    t = nzip_1_0(w_0, t);
  }
  i_10 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_11 (ATerm t)
        {
          ATerm s_10 = NULL,t_10 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_10 = ATgetFirst((ATermList) t);
                  t_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm x_13 = t;
                  int z_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, s_10);
                      LocalPopChoice(z_13);
                    }
                  else
                    {
                      t = x_13;
                      {
                        ATerm y_10 = NULL;
                        t = t_10;
                        t = d_11(t);
                        y_10 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(y_10), s_10), s_10);
                      }
                    }
                }
              else
                {
                  ATerm c_11 = NULL;
                  t = t_10;
                  t = d_11(t);
                  c_11 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_11), s_10), s_10);
                }
            }
          return(t);
        }
        t = n_18;
        t = collect_p__1_0(a_1, t);
        t = foldr_3_0(b_1, e_1, f_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = i_10;
        t = d_11(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = i_10;
      }
  }
  t = instantiate_sep_list_1_0(h_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__4))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      j_11 = ATgetArgument(t, 2);
      m_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = h_11;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, i_11, j_11, m_11);
      t = k_7(i_11, j_11, m_11, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, i_11, j_11, m_11);
      t = k_7(i_11, j_11, m_11, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  static ATerm k_1 (ATerm t)
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(h_12));
              return(t);
            }
            t = Instantiate_1_0(n_1, t);
            LocalPopChoice(e_14);
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
        t = a_14;
      }
    return(t);
  }
  i_12 = t;
  if(match_cons(t, sym__4))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
      l_12 = ATgetArgument(t, 2);
      m_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = j_12;
  if(match_string(t, "iter"))
    {
      t = i_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = i_12;
    }
  t = m_12;
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm n_12 = NULL,s_12 = NULL;
      n_12 = t;
      t = term_t_13;
      s_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_13, k_12, n_12);
      t = t_7(s_12, k_12, n_12, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = l_12;
  t = bottomup_1_0(k_1, t);
  return(t);
}
static ATerm m_7 (ATerm r_17, ATerm s_17, ATerm u_17, ATerm t_17, ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  static ATerm q_1 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(x_12));
              return(t);
            }
            t = Instantiate_1_0(v_1, t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = h_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
      }
    return(t);
  }
  t = term_t_13;
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_13, s_17, t_17);
  t = t_7(y_12, s_17, t_17, t);
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = u_17;
  t = bottomup_1_0(q_1, t);
  return(t);
}
static ATerm n_7 (ATerm m_17, ATerm n_17, ATerm q_17, ATerm p_17, ATerm o_17, ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  static ATerm w_1 (ATerm t)
  {
    ATerm o_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(d_13));
              return(t);
            }
            t = Instantiate_1_0(x_1, t);
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(r_14);
      }
    else
      {
        t = o_14;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, p_17, n_17, o_17);
  t = t_7(p_17, n_17, o_17, t);
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
  t = index_0_0(t);
  c_13 = t;
  t = (ATerm) ATinsert(ATempty, c_13);
  t = bottomup_1_0(w_1, t);
  return(t);
}
static ATerm p_7 (ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_34, m_34);
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      t = SSL_subtr(l_34, m_34);
    }
  return(t);
}
static ATerm q_7 (ATerm q_47, ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_47, term_s_13);
  t = geq_0_0(t);
  t = term_t_13;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, term_t_13);
  t = p_7(q_47, i_13, t);
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_13, p_47);
  return(t);
}
ATerm repeat_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  static ATerm j_13 (ATerm t)
  {
    ATerm a_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_97(t);
        t = j_13(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = a_15;
        t = b_97(t);
      }
    return(t);
  }
  t = j_13(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      {
        ATerm j_15 = ATgetArgument(t, 1);
        if(((ATgetType(j_15) == AT_LIST) && !(ATisEmpty(j_15))))
          {
            o_13 = ATgetFirst((ATermList) j_15);
            p_13 = (ATerm) ATgetNext((ATermList) j_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_7(n_13, o_13, p_13, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm l_13 = NULL;
  t = repeat_2_0(y_1, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if(((ATgetType(n_15) != AT_INT) || (ATgetInt((ATermInt) n_15) != 1)))
        _fail(t);
      {
        ATerm p_15 = ATgetArgument(t, 1);
        if(((ATgetType(p_15) == AT_LIST) && !(ATisEmpty(p_15))))
          {
            l_13 = ATgetFirst((ATermList) p_15);
            {
              ATerm q_15 = (ATerm) ATgetNext((ATermList) p_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_13;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(c_2, t);
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_7 (ATerm d_17, ATerm c_17, ATerm h_17, ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_17, (ATerm) ATinsert(ATempty, d_17));
  t = conc_0_0(t);
  k_14 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,q_14 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            j_14 = ATgetArgument(t, 0);
            l_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_14;
        if(match_cons(t, sym_Path_2))
          {
            ATerm x_15 = ATgetArgument(t, 0);
            n_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_14;
        {
          static ATerm a_2 (ATerm t)
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,y_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,u_1 = NULL,t_1 = NULL;
            e_15 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_14 = ATgetFirst((ATermList) t);
                u_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_15);
            s_14 = t;
            t = t_14;
            if(match_cons(t, sym_selector_2))
              {
                b_15 = ATgetArgument(t, 0);
                c_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_14);
            y_14 = t;
            t = c_15;
            if(((q_14 != NULL) && (q_14 != t)))
              _fail(t);
            else
              q_14 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, b_15, c_15);
            t_1 = t;
            t = SSLsetAnnotations(t_1, y_14);
            d_15 = t;
            t = u_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_14), d_15);
            u_1 = t;
            t = SSLsetAnnotations(u_1, s_14);
            return(t);
          }
          t = at_last_1_0(a_2, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), k_14, l_14, h_17);
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_15 = NULL,g_15 = NULL,k_15 = NULL,l_15 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm b_16 = ATgetArgument(t, 0);
                  ATerm d_16 = ATgetArgument(t, 1);
                  ATerm e_16 = ATgetArgument(t, 2);
                  ATerm f_16 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = h_17;
              if(match_cons(t, sym_alt_2))
                {
                  l_15 = ATgetArgument(t, 0);
                  f_15 = ATgetArgument(t, 1);
                  t = f_15;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm y_15 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, l_15, l_14);
                      t = index_0_0(t);
                      y_15 = t;
                      t = (ATerm) ATinsert(ATempty, y_15);
                      t = bottomup_1_0(b_2, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_15 = ATgetFirst((ATermList) t);
                          k_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), k_14, l_14, h_17);
                      t = n_7(not_null(q_14), k_14, l_14, l_15, g_15, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      l_15 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), k_14, l_14, h_17);
                      t = m_7(not_null(q_14), k_14, l_14, l_15, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              {
                ATerm g_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(h_16);
                  }
                else
                  {
                    t = g_16;
                    {
                      ATerm i_16 = t;
                      int j_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(j_16);
                        }
                      else
                        {
                          t = i_16;
                          if(match_cons(t, sym__4))
                            {
                              ATerm k_16 = ATgetArgument(t, 0);
                              ATerm l_16 = ATgetArgument(t, 1);
                              ATerm m_16 = ATgetArgument(t, 2);
                              ATerm n_16 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(q_14);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(q_14), k_14, l_14, h_17);
                          t = h_7(k_14, l_14, h_17, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = h_17;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t)
{
  static ATerm x_18 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_104(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm x_17 = NULL,b_18 = NULL,c_18 = NULL,o_18 = NULL,p_18 = NULL,w_18 = NULL,h_2 = NULL;
          t = m_104(t);
          w_18 = t;
          if(match_cons(t, sym__2))
            {
              b_18 = ATgetArgument(t, 0);
              c_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_18);
          x_17 = t;
          t = b_18;
          t = o_104(t);
          o_18 = t;
          t = c_18;
          t = x_18(t);
          p_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_18, p_18);
          h_2 = t;
          t = SSLsetAnnotations(h_2, x_17);
          t = n_104(t);
        }
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      ATerm s_16 = ATgetArgument(t, 1);
      if(((ATgetType(s_16) != AT_LIST) || !(ATisEmpty(s_16))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm d_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
          {
            k_19 = ATgetFirst((ATermList) t_16);
            l_19 = (ATerm) ATgetNext((ATermList) t_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_t_13;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_19, term_t_13);
  t = w_8(d_19, p_19, t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_19, k_19), (ATerm) ATmakeAppl(sym__2, m_19, l_19));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_19), q_19);
  return(t);
}
ATerm nzip_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, a_19);
  t = genzip_4_0(e_2, f_2, g_2, x_104, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  t = term_a_17;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, u_19);
  t = b_9(x_19, u_19, t);
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym__2, w_19, v_19);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(o_20, p_20, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL;
  static ATerm v_2 (ATerm t)
  {
    ATerm e_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_2 (ATerm t)
            {
              t = not_null(m_20);
              return(t);
            }
            t = Instantiate_1_0(w_2, t);
            LocalPopChoice(v_17);
          }
        else
          {
            t = l_17;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(k_17);
      }
    else
      {
        t = e_17;
      }
    return(t);
  }
  n_20 = t;
  t = SSL_explode_term(n_20);
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_20;
  t = foldr_3_0(n_2, o_2, p_2, t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_20, (ATerm) ATinsert(ATempty, i_20));
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
        t = debug_1_0(q_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_20;
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm q_20 = NULL,s_20 = NULL,t_20 = NULL;
      if(match_cons(t, sym__2))
        {
          q_20 = ATgetArgument(t, 0);
          s_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, i_20);
      t_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_20, (ATerm)ATinsert(ATempty, i_20), s_20);
      t = t_7(q_20, t_20, s_20, t);
      return(t);
    }
    t = nzip_1_0(r_2, t);
  }
  if(((m_20 != NULL) && (m_20 != t)))
    _fail(t);
  else
    m_20 = t;
  t = k_20;
  t = bottomup_1_0(v_2, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_explode_term(y_20);
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      ATerm d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_20;
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
      t = y_20;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm g_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_5 = NULL,q_5 = NULL;
      q_5 = t;
      t = SSL_is_string(q_5);
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, o_5);
      LocalPopChoice(i_18);
    }
  else
    {
      t = g_18;
      {
        ATerm j_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
            v_5 = t;
            t = SSL_is_int(v_5);
            u_5 = t;
            t = SSL_int_to_string(u_5);
            t_5 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, t_5);
            LocalPopChoice(q_18);
          }
        else
          {
            t = j_18;
            {
              ATerm r_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
                  b_6 = t;
                  t = SSL_is_real(b_6);
                  a_6 = t;
                  t = SSL_real_to_string(a_6);
                  z_5 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, z_5);
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = r_18;
                  {
                    ATerm y_18 = t;
                    int z_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_list_0_0(t);
                        LocalPopChoice(z_18);
                      }
                    else
                      {
                        t = y_18;
                        {
                          ATerm b_19 = t;
                          int c_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = trm2abox_appl_0_0(t);
                              LocalPopChoice(c_19);
                            }
                          else
                            {
                              t = b_19;
                              {
                                ATerm a_22 = NULL,e_6 = NULL,h_6 = NULL,l_6 = NULL;
                                a_22 = t;
                                t = term_e_19;
                                h_6 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, a_22), term_f_19);
                                l_6 = t;
                                t = SSL_printnl(h_6, l_6);
                                t = term_t_13;
                                e_6 = t;
                                t = SSL_exit(e_6);
                                t = (ATerm) ATinsert(ATinsert(ATempty, a_22), term_f_19);
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
static ATerm x_7 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm h_22 = NULL;
  t = SSL_write_term_to_stream_baf(v_32, w_32);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
  return(t);
}
static ATerm y_7 (ATerm p_98 (ATerm), ATerm r_351, ATerm f_33, ATerm t)
{
  ATerm l_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_351, term_g_19);
  t = u_8(t);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_22, f_33);
  t = p_98(t);
  t = fclose_0_0(t);
  t = f_33;
  return(t);
}
static ATerm z_7 (ATerm d_112 (ATerm), ATerm d_55, ATerm b_55, ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  q_22 = t;
  t = d_112(t);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_22, d_55, b_55);
  t = c_9(n_22, d_55, b_55, t);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        t = term_j_19;
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_22, term_j_19);
        t = b_9(n_22, v_22, t);
        {
          ATerm c_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_20;
            }
        }
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_22 = ATgetFirst((ATermList) t);
      p_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_22, term_j_19, (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATinsert(CheckATermList(o_22), d_55)));
  t = lookup_table_0_1(n_22, t);
  u_22 = t;
  t = term_j_19;
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATinsert(CheckATermList(o_22), d_55));
  s_22 = t;
  t = u_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(r_22, s_22, t_22, t);
  t = q_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_22 = NULL;
  ATerm d_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL,r_6 = NULL;
      f_23 = t;
      t = term_l_20;
      r_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_23, term_l_20);
      t = s_8(f_23, r_6, t);
      x_22 = t;
      t = SSL_mkstemp(x_22);
      LocalPopChoice(j_20);
    }
  else
    {
      t = d_20;
      {
        ATerm g_23 = NULL;
        t = term_r_20;
        g_23 = t;
        t = SSL_perror(g_23);
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
static ATerm y_2 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_23 = NULL,m_23 = NULL,p_23 = NULL,u_23 = NULL,v_23 = NULL;
  t = P__tmpdir_0_0(t);
  u_23 = t;
  t = term_v_20;
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_23, term_v_20);
  t = s_8(u_23, v_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_12;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, term_f_12);
  t = z_7(y_2, m_23, p_23, t);
  t = SSL_close(i_23);
  t = m_23;
  return(t);
}
static ATerm a_8 (ATerm g_54, ATerm h_54, ATerm t)
{
  t = SSL_access(g_54, h_54);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_24 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_24 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_20);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, (ATerm) ATinsert(ATempty, term_w_20));
      t = a_8(a_24, g_24, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if(match_cons(x_20, sym_Stream_1))
        {
          m_24 = ATgetArgument(x_20, 0);
        }
      else
        _fail(t);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(m_24, n_24, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,l_24 = NULL;
  t = read_from_0_0(t);
  t = u_90(t);
  l_24 = t;
  t = xtc_new_file_0_0(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, l_24);
  t = y_7(a_3, h_24, l_24, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_24);
  return(t);
}
static ATerm c_8 (ATerm j_22, ATerm k_22, ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  q_24 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
        t = b_9(j_22, k_22, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_21 = ATgetFirst((ATermList) t);
            p_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_21);
        {
          ATerm r_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_22, k_22, p_24);
          t = lookup_table_0_1(j_22, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_9(k_22, p_24, r_24, t);
          t = (ATerm) ATmakeAppl(sym__3, j_22, k_22, p_24);
        }
      }
    else
      {
        t = z_20;
        {
          ATerm t_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
          t = lookup_table_0_1(j_22, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_8(k_22, t_24, t);
          t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
        }
      }
  }
  t = q_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL,g_25 = NULL,h_25 = NULL,j_25 = NULL;
  c_25 = t;
  t = a_112(t);
  a_25 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL;
        t = term_j_19;
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_25, term_j_19);
        t = b_9(a_25, k_25, t);
        {
          ATerm g_21 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_21;
            }
        }
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_25, term_j_19, y_24);
  t = lookup_table_0_1(a_25, t);
  j_25 = t;
  t = term_j_19;
  g_25 = t;
  t = j_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(g_25, y_24, h_25, t);
  t = z_24;
  {
    static ATerm c_3 (ATerm t)
    {
      ATerm l_25 = NULL;
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_25, l_25);
      t = c_8(a_25, l_25, t);
      return(t);
    }
    t = map_1_0(c_3, t);
  }
  t = c_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t)
{
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_95(t);
      t = l_95(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
      t = l_95(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,t_25 = NULL,v_25 = NULL;
  o_25 = t;
  t = z_111(t);
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_25, term_j_19);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_19;
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_25, term_j_19);
        t = b_9(n_25, a_26, t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATempty;
      }
  }
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_25, term_j_19, (ATerm) ATinsert(CheckATermList(p_25), (ATerm) ATempty));
  t = lookup_table_0_1(n_25, t);
  v_25 = t;
  t = term_j_19;
  q_25 = t;
  t = (ATerm) ATinsert(CheckATermList(p_25), (ATerm) ATempty);
  r_25 = t;
  t = v_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(q_25, r_25, t_25, t);
  t = o_25;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(o_26);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = o_26;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm f_26 = NULL;
  static ATerm g_3 (ATerm t)
  {
    ATerm g_26 = NULL;
    g_26 = t;
    {
      ATerm q_21 = t;
      int r_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_26 = NULL,j_26 = NULL;
          t = term_u_20;
          h_26 = t;
          t = term_j_19;
          j_26 = t;
          t = term_s_21;
          t = b_9(h_26, j_26, t);
          LocalPopChoice(r_21);
        }
      else
        {
          t = q_21;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_26 != NULL) && (f_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_26 = ATgetFirst((ATermList) t);
        {
          ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_26;
    t = map_1_0(m_3, t);
    t = g_26;
    t = end_scope_1_0(n_3, t);
    return(t);
  }
  t = begin_scope_1_0(f_3, t);
  t = restore_always_2_0(f_91, g_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm n_8 = NULL,j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      n_8 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(n_8);
  k_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_9), term_x_21), k_9), term_v_21);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  if(match_cons(t, sym_Path1_1))
    {
      d_28 = ATgetArgument(t, 0);
      t = d_28;
    }
  else
    {
      ATerm k_8 = NULL,l_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          d_28 = ATgetArgument(t, 0);
          e_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_28;
      t = map_1_0(o_3, t);
      t = concat_0_0(t);
      k_8 = t;
      t = (ATerm) ATinsert(CheckATermList(k_8), d_28);
      l_8 = t;
      t = SSL_concat_strings(l_8);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,t_28 = NULL,u_28 = NULL;
  q_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_28;
      t = x_109(t);
    }
  else
    {
      ATerm x_28 = NULL,y_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_28;
      t = z_109(t);
      x_28 = t;
      t = u_28;
      t = foldr_3_0(x_109, y_109, z_109, t);
      y_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, y_28);
      t = y_109(t);
    }
  return(t);
}
static ATerm d_8 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm s_50, ATerm r_50, ATerm t)
{
  t = w_106(t);
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm c_29 = NULL;
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_50, c_29);
      t = v_106(t);
      return(t);
    }
    t = fetch_1_0(p_3, t);
  }
  t = r_50;
  return(t);
}
static ATerm e_8 (ATerm s_106 (ATerm), ATerm o_50, ATerm n_50, ATerm t)
{
  static ATerm x_29 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL,u_29 = NULL;
    q_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_50;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_29 = ATgetFirst((ATermList) t);
            u_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_29;
              {
                static ATerm r_3 (ATerm t)
                {
                  t = n_50;
                  return(t);
                }
                t = d_8(s_106, r_3, r_29, u_29, t);
              }
              t = x_29(t);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                ATerm y_9 = NULL,h_10 = NULL,x_2 = NULL;
                t = SSLgetAnnotations(q_29);
                y_9 = t;
                t = u_29;
                t = x_29(t);
                h_10 = t;
                t = (ATerm) ATinsert(CheckATermList(h_10), r_29);
                x_2 = t;
                t = SSLsetAnnotations(x_2, y_9);
              }
            }
        }
      }
    return(t);
  }
  t = o_50;
  t = x_29(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_30 = NULL;
      t = p_108(t);
      e_30 = t;
      t = (ATerm) ATinsert(ATempty, e_30);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm f_11 = NULL,k_11 = NULL;
        static ATerm t_3 (ATerm t)
        {
          t = collect_om_2_0(p_108, q_108, t);
          return(t);
        }
        k_11 = t;
        t = SSL_explode_term(k_11);
        if(match_cons(t, sym__2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            f_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11;
        t = foldr_3_0(s_3, q_108, t_3, t);
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL,z_2 = NULL;
  i_30 = t;
  if(match_cons(t, sym_Arg_1))
    {
      g_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_30);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, g_30);
  z_2 = t;
  t = SSLsetAnnotations(z_2, f_30);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(w_3, l_30, m_30, t);
  return(t);
}
static ATerm w_3 (ATerm t)
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
  t = term_u_13;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm o_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(o_30, q_30, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm arity_of_template_0_0 (ATerm t)
{
  t = collect_om_2_0(u_3, v_3, t);
  t = foldr_3_0(x_3, z_3, a_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm v_31 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      v_31 = ATgetArgument(t, 0);
      {
        ATerm w_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_31;
  return(t);
}
ATerm mk_key_arity_0_0 (ATerm t)
{
  ATerm t_30 = NULL,b_31 = NULL,d_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      b_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_31;
  if(match_cons(t, sym_Path_2))
    {
      d_31 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
      {
        ATerm s_31 = NULL;
        t = t_30;
        t = map_1_0(b_4, t);
        s_31 = t;
        t = (ATerm) ATinsert(CheckATermList(s_31), d_31);
      }
    }
  else
    {
      ATerm y_31 = NULL;
      if(match_cons(t, sym_Path1_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
      t = arity_of_template_0_0(t);
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_31, (ATerm) ATinsert(ATempty, d_31));
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = debug_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_y_22;
  return(t);
}
static ATerm f_8 (ATerm f_64, ATerm g_64, ATerm t)
{
  ATerm z_31 = NULL,g_32 = NULL,m_32 = NULL,n_32 = NULL,u_32 = NULL,z_32 = NULL;
  t = mk_key_arity_0_0(t);
  g_32 = t;
  t = term_a_17;
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_17, g_32, (ATerm) ATmakeAppl(sym__2, f_64, g_64));
  t = lookup_table_0_1(m_32, t);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_64, g_64);
  n_32 = t;
  t = z_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(g_32, n_32, u_32, t);
  t = f_64;
  t = path_to_string_0_0(t);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_31, g_64);
  t = if_verbose1_1_0(d_4, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  static ATerm z_33 (ATerm t)
  {
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_96(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
      }
    y_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_33 = ATgetFirst((ATermList) t);
        x_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_11 = NULL,b_12 = NULL,b_3 = NULL;
          t = SSLgetAnnotations(y_33);
          v_11 = t;
          t = x_33;
          t = z_33(t);
          b_12 = t;
          t = (ATerm) ATinsert(CheckATermList(b_12), w_33);
          b_3 = t;
          t = SSLsetAnnotations(b_3, v_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_33;
      }
    return(t);
  }
  t = z_33(t);
  return(t);
}
ATerm at_last_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  static ATerm a_35 (ATerm t)
  {
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
    x_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_34 = ATgetFirst((ATermList) t);
        z_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(x_34);
          w_12 = t;
          t = z_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_34), y_34);
          d_3 = t;
          t = SSLsetAnnotations(d_3, w_12);
          t = j_103(t);
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
          {
            ATerm y_13 = NULL,b_14 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(x_34);
            y_13 = t;
            t = z_34;
            t = a_35(t);
            b_14 = t;
            t = (ATerm) ATinsert(CheckATermList(b_14), y_34);
            e_3 = t;
            t = SSLsetAnnotations(e_3, y_13);
          }
        }
    }
    return(t);
  }
  t = a_35(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_35 = ATgetFirst((ATermList) t);
      j_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_35;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_35;
    }
  else
    {
      t = j_35;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm s_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_23 = ATgetFirst((ATermList) t);
      s_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_35;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_35 = ATgetFirst((ATermList) t);
      {
        ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_35;
  t = h_96(t);
  t = p_35;
  t = last_0_0(t);
  t = i_96(t);
  t = p_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_23 = ATgetFirst((ATermList) t);
      q_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_35;
  t = at_last_1_0(f_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_17 = ATgetFirst((ATermList) t);
      g_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_17;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = g_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(j_17), term_j_23);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(j_17), term_k_23);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(j_17), term_l_23);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(j_17), term_n_23);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(j_17), term_o_23);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  if(match_cons(t, sym_Arg_1))
    {
      o_38 = ATgetArgument(t, 0);
      {
        ATerm i_14 = NULL,p_14 = NULL,h_3 = NULL;
        t = SSLgetAnnotations(n_38);
        i_14 = t;
        t = SSL_string_to_int(o_38);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, p_14);
        h_3 = t;
        t = SSLsetAnnotations(h_3, i_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          o_38 = ATgetArgument(t, 0);
          p_38 = ATgetArgument(t, 1);
          {
            ATerm h_15 = NULL,m_15 = NULL,o_15 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(n_38);
            h_15 = t;
            t = SSL_string_to_int(o_38);
            m_15 = t;
            t = SSL_string_to_int(p_38);
            o_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, m_15, o_15);
            i_3 = t;
            t = SSLsetAnnotations(i_3, h_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              o_38 = ATgetArgument(t, 0);
              p_38 = ATgetArgument(t, 1);
              {
                ATerm c_16 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(n_38);
                c_16 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, o_38, p_38);
                j_3 = t;
                t = SSLsetAnnotations(j_3, c_16);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  o_38 = ATgetArgument(t, 0);
                  {
                    ATerm q_16 = NULL,v_16 = NULL,w_16 = NULL,y_16 = NULL,z_16 = NULL,l_3 = NULL;
                    t = SSLgetAnnotations(n_38);
                    q_16 = t;
                    t = SSL_explode_string(o_38);
                    t = unquote_chars_2_0(g_4, h_4, t);
                    z_16 = t;
                    t = SSL_implode_string(z_16);
                    y_16 = t;
                    t = SSL_explode_string(y_16);
                    t = unescape_chars_1_0(k_4, t);
                    w_16 = t;
                    t = SSL_implode_string(w_16);
                    v_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, v_16);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, q_16);
                  }
                }
              else
                {
                  ATerm h_18 = NULL,m_18 = NULL,q_3 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      o_38 = ATgetArgument(t, 0);
                      p_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_38);
                  h_18 = t;
                  t = SSL_string_to_int(o_38);
                  m_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, m_18, p_38);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, h_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  static ATerm l_4 (ATerm t)
  {
    t = topdown_1_0(z_91, t);
    return(t);
  }
  t = z_91(t);
  t = SRTS_all(l_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  t = topdown_1_0(q_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(a_39, b_39, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm r_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = r_23;
    }
  return(t);
}
static ATerm o_8 (ATerm e_64, ATerm t)
{
  t = e_64;
  t = reverse_acc_2_0(_id, n_4, t);
  t = map_1_0(p_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  static ATerm e_39 (ATerm t)
  {
    ATerm w_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_93(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = w_23;
        t = SRTS_one(e_39, t);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  t = term_b_24;
  f_39 = t;
  t = term_c_24;
  g_39 = t;
  t = term_d_24;
  t = b_9(f_39, g_39, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
      t = term_j_24;
      t = get_options_0_0(t);
      t = oncetd_1_0(r_4, t);
      t = term_e_19;
      i_39 = t;
      t = (ATerm) ATinsert(ATempty, term_k_24);
      j_39 = t;
      t = SSL_printnl(i_39, j_39);
      t = term_t_13;
      h_39 = t;
      t = SSL_exit(h_39);
      t = (ATerm) ATinsert(ATempty, term_k_24);
      LocalPopChoice(i_24);
    }
  else
    {
      t = e_24;
      {
        ATerm l_39 = NULL,m_39 = NULL;
        t = term_e_19;
        l_39 = t;
        t = (ATerm) ATinsert(ATempty, term_o_24);
        m_39 = t;
        t = SSL_printnl(l_39, m_39);
        t = (ATerm) ATinsert(ATempty, term_o_24);
      }
    }
  return(t);
}
static ATerm f_40 (ATerm z_39, ATerm t)
{
  t = SSL_fclose(z_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_40 = ATgetArgument(t, 0);
      {
        ATerm s_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_40);
            LocalPopChoice(v_24);
          }
        else
          {
            t = s_24;
            t = f_40(d_40, t);
          }
      }
    }
  else
    {
      t = f_40(d_40, t);
    }
  return(t);
}
static ATerm r_8 (ATerm b_33, ATerm t)
{
  t = SSL_read_term_from_stream(b_33);
  return(t);
}
static ATerm s_8 (ATerm k_32, ATerm l_32, ATerm t)
{
  t = SSL_strcat(k_32, l_32);
  return(t);
}
static ATerm t_8 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_fopen(p_54, q_54);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_stdin_stream();
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_40 = NULL;
  t = SSL_stdout_stream();
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_stderr_stream();
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_40);
  return(t);
}
static ATerm w_41 (ATerm q_40, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_explode_term(q_40);
  if(match_cons(t, sym__2))
    {
      ATerm w_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_24 = ATgetArgument(t, 1);
        if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
          {
            r_40 = ATgetFirst((ATermList) x_24);
            {
              ATerm b_25 = (ATerm) ATgetNext((ATermList) x_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_41 (ATerm u_40, ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,e_41 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(w_40);
  z_40 = t;
  t = u_40;
  if(match_cons(t, sym_Path_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_41, v_40);
  i_4 = t;
  t = SSLsetAnnotations(i_4, z_40);
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(x_40, y_40, t);
  return(t);
}
static ATerm a_42 (ATerm g_41, ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,r_41 = NULL,j_4 = NULL;
  t = SSLgetAnnotations(j_41);
  m_41 = t;
  t = SSL_is_string(g_41);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_41, i_41);
  j_4 = t;
  t = SSLsetAnnotations(j_4, m_41);
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(k_41, l_41, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  if(match_cons(t, sym__2))
    {
      u_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
      {
        ATerm d_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_41(t_41, t);
            LocalPopChoice(f_25);
          }
        else
          {
            t = d_25;
            {
              ATerm i_25 = t;
              int u_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_41(u_41, v_41, t_41, t);
                  LocalPopChoice(u_25);
                }
              else
                {
                  t = i_25;
                  t = a_42(u_41, v_41, t_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_41(t_41, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_42 = NULL,g_42 = NULL,h_42 = NULL,t_42 = NULL;
  t_42 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_42, term_y_25);
        t = u_8(t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        {
          ATerm y_19 = NULL,z_19 = NULL;
          t = term_z_25;
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_25, t_42);
          t = s_8(z_19, t_42, t);
          y_19 = t;
          t = SSL_perror(y_19);
          _fail(t);
        }
      }
  }
  g_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_8(h_42, t);
  c_42 = t;
  t = g_42;
  t = fclose_0_0(t);
  t = c_42;
  return(t);
}
ATerm debug_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  w_42 = t;
  t = n_98(t);
  y_42 = t;
  t = term_e_19;
  z_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_42), y_42);
  a_43 = t;
  t = SSL_printnl(z_42, a_43);
  t = w_42;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,e_20 = NULL,f_20 = NULL;
  t = if_verbose1_1_0(b_5, t);
  t = ReadFromFile_0_0(t);
  e_43 = t;
  t = SSL_explode_term(e_43);
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
          {
            e_20 = ATgetFirst((ATermList) b_26);
            {
              ATerm c_26 = (ATerm) ATgetNext((ATermList) b_26);
              if(((ATgetType(c_26) != AT_LIST) || !(ATisEmpty(c_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_20;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = e_20;
  if(match_cons(t, sym_PP_Table_1))
    {
      d_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(d_43, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = debug_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm b_43 = NULL;
  b_43 = t;
  t = term_a_17;
  t = table_create_0_0(t);
  t = b_43;
  t = map_1_0(z_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_43 = NULL,j_43 = NULL;
      t = term_g_11;
      i_43 = t;
      t = term_k_26;
      j_43 = t;
      t = term_l_26;
      t = b_9(i_43, j_43, t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = e_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm n_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_43 = NULL,s_43 = NULL,u_43 = NULL;
      t = term_g_11;
      s_43 = t;
      t = term_q_26;
      u_43 = t;
      t = term_r_26;
      t = b_9(s_43, u_43, t);
      r_43 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_43);
      LocalPopChoice(p_26);
    }
  else
    {
      t = n_26;
      t = term_t_11;
    }
  t = xtc_io_transform_1_0(j_5, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_43 = NULL;
        v_43 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_26 = ATgetFirst((ATermList) t);
                ATerm d_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_43;
          }
        LocalPopChoice(u_26);
        {
          ATerm z_43 = NULL;
          z_43 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, z_43);
        }
      }
    else
      {
        t = t_26;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = read_pp_tables_0_0(t);
  t = n_43;
  t = xtc_temp_files_1_0(i_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  c_44 = t;
  t = term_f_12;
  t = whoami_0_0(t);
  d_44 = t;
  t = term_e_19;
  f_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_27), d_44), term_h_27);
  g_44 = t;
  t = SSL_printnl(f_44, g_44);
  t = term_t_13;
  e_44 = t;
  t = SSL_exit(e_44);
  t = c_44;
  return(t);
}
ATerm at_end_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  static ATerm x_45 (ATerm t)
  {
    ATerm s_45 = NULL,v_45 = NULL,w_45 = NULL;
    w_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_45 = ATgetFirst((ATermList) t);
        v_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_21 = NULL,i_21 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(w_45);
          f_21 = t;
          t = v_45;
          t = x_45(t);
          i_21 = t;
          t = (ATerm) ATinsert(CheckATermList(i_21), s_45);
          m_4 = t;
          t = SSLsetAnnotations(m_4, f_21);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_45;
        t = y_102(t);
      }
    return(t);
  }
  t = x_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_44 = NULL,l_44 = NULL,o_44 = NULL;
  i_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_44;
    }
  else
    {
      static ATerm m_5 (ATerm t)
      {
        t = not_null(o_44);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_44 = ATgetFirst((ATermList) t);
          if(((o_44 != NULL) && (o_44 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_44;
      t = at_end_1_0(m_5, t);
    }
  return(t);
}
static ATerm o_46 (ATerm b_46, ATerm t)
{
  ATerm c_46 = NULL;
  t = SSL_explode_term(b_46);
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_46;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,j_46 = NULL;
  j_46 = t;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t)
            {
              t = h_46;
              return(t);
            }
            t = g_46;
            t = at_end_1_0(x_5, t);
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            t = o_46(j_46, t);
          }
      }
    }
  else
    {
      t = o_46(j_46, t);
    }
  return(t);
}
static ATerm v_8 (ATerm t_19, ATerm s_19, ATerm t)
{
  ATerm p_46 = NULL,r_46 = NULL,s_46 = NULL,y_46 = NULL;
  t = t_19;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_47 = NULL;
        t = term_g_11;
        a_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, t_19);
        t = b_9(a_47, t_19, t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATempty;
      }
  }
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_19, r_46);
  t = conc_0_0(t);
  p_46 = t;
  t = term_g_11;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, t_19, p_46);
  t = lookup_table_0_1(s_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(t_19, p_46, y_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, t_19, p_46);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,f_47 = NULL;
  b_47 = t;
  t = term_k_26;
  c_47 = t;
  t = (ATerm) ATinsert(ATempty, b_47);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, (ATerm) ATinsert(ATempty, b_47));
  t = v_8(c_47, f_47, t);
  t = b_47;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, c_6, d_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  if(match_string(t, "-k"))
    {
      t = h_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_47;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  t = SSL_string_to_int(i_47);
  j_47 = t;
  t = term_q_27;
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_27, j_47);
  t = e_9(k_47, j_47, t);
  t = i_47;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, m_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm n_47 = NULL;
  n_47 = t;
  if(match_string(t, "-S"))
    {
      t = n_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_47;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  t = term_t_27;
  s_47 = t;
  t = term_u_13;
  t_47 = t;
  t = term_u_27;
  t = e_9(s_47, t_47, t);
  t = term_v_27;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm u_47 = NULL,x_47 = NULL,y_47 = NULL;
  u_47 = t;
  t = SSL_string_to_int(u_47);
  x_47 = t;
  t = term_t_27;
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, x_47);
  t = e_9(y_47, x_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_47);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  t = term_y_27;
  b_48 = t;
  t = term_f_12;
  c_48 = t;
  t = term_z_27;
  t = e_9(b_48, c_48, t);
  t = term_a_28;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, p_6, q_6, t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_6, t_6, u_6, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = Option_3_0(v_6, w_6, x_6, t);
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm n_19, ATerm o_19, ATerm t)
{
  ATerm d_48 = NULL,f_48 = NULL;
  t = term_g_11;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, n_19, o_19);
  t = lookup_table_0_1(d_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(n_19, o_19, f_48, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, n_19, o_19);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
      t = term_f_12;
      t = h_0(t);
      n_48 = t;
      t = term_j_28;
      o_48 = t;
      t = term_k_28;
      p_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, n_48);
      t = c_9(o_48, p_48, n_48, t);
      _fail(t);
    }
  else
    {
      ATerm s_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_48 = ATgetFirst((ATermList) t);
          m_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_48;
      t = d_0(t);
      t = term_f_12;
      t = g_0(t);
      s_48 = t;
      t = (ATerm) ATinsert(CheckATermList(m_48), s_48);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  if(match_string(t, "-o"))
    {
      t = u_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_48;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  v_48 = t;
  t = term_n_11;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, v_48);
  t = e_9(w_48, v_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_48);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, a_7, c_7, t);
  return(t);
}
static ATerm c_9 (ATerm e_22, ATerm f_22, ATerm d_22, ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,c_49 = NULL,e_49 = NULL;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
  {
    ATerm o_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_28 = ATgetArgument(t, 0);
            ATerm v_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
        t = b_9(e_22, f_22, t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_22, f_22, (ATerm) ATinsert(CheckATermList(z_48), d_22));
  t = lookup_table_0_1(e_22, t);
  e_49 = t;
  t = (ATerm) ATinsert(CheckATermList(z_48), d_22);
  a_49 = t;
  t = e_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(f_22, a_49, c_49, t);
  t = y_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,r_49 = NULL,s_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
      t = term_f_12;
      t = p_0(t);
      t_49 = t;
      t = term_j_28;
      u_49 = t;
      t = term_k_28;
      v_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, t_49);
      t = c_9(u_49, v_49, t_49, t);
      _fail(t);
    }
  else
    {
      ATerm z_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_49 = ATgetFirst((ATermList) t);
          o_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_49 = ATgetFirst((ATermList) t);
          s_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_49;
      t = m_0(t);
      t = r_49;
      t = o_0(t);
      z_49 = t;
      t = (ATerm) ATinsert(CheckATermList(s_49), z_49);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  if(match_string(t, "-i"))
    {
      t = b_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_50;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  c_50 = t;
  t = term_q_26;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, c_50);
  t = e_9(d_50, c_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_50);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, l_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,h_50 = NULL,i_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_12;
  t = whoami_0_0(t);
  e_50 = t;
  t = term_e_19;
  h_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_28), e_50);
  i_50 = t;
  t = SSL_printnl(h_50, i_50);
  t = term_t_13;
  f_50 = t;
  t = SSL_exit(f_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL;
  t = term_g_11;
  j_50 = t;
  t = term_e_29;
  k_50 = t;
  t = term_f_29;
  t = b_9(j_50, k_50, t);
  return(t);
}
static ATerm w_8 (ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_34, g_34);
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      t = SSL_addr(f_34, g_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,u_50 = NULL,x_50 = NULL;
  m_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_50;
      t = v_109(t);
    }
  else
    {
      ATerm i_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_50 = ATgetFirst((ATermList) t);
          x_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_50;
      t = foldr_2_0(v_109, w_109, t);
      i_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_50, i_51);
      t = w_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(i_22, m_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_51 = NULL,t_21 = NULL,w_21 = NULL;
  t = times_0_0(t);
  w_21 = t;
  t = SSL_explode_term(w_21);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_21;
  t = foldr_2_0(o_7, r_7, t);
  l_51 = t;
  t = SSL_TicksToSeconds(l_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  if(match_cons(t, sym__2))
    {
      h_52 = ATgetArgument(t, 0);
      i_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_52;
        if((h_52 != t))
          {
            _fail(t);
          }
        t = g_52;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_52, i_52);
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              t = SSL_gtr(h_52, i_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_52 = NULL,q_52 = NULL,t_52 = NULL;
        t = term_g_11;
        q_52 = t;
        t = term_t_27;
        t_52 = t;
        t = term_p_29;
        t = b_9(q_52, t_52, t);
        p_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_52, term_t_13);
        t = geq_0_0(t);
        t = n_52;
        t = d_89(t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = n_52;
      }
  }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL;
  t = run_time_0_0(t);
  v_52 = t;
  t = term_f_12;
  t = whoami_0_0(t);
  w_52 = t;
  t = term_e_19;
  y_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_29), v_52), term_s_29), w_52);
  z_52 = t;
  t = SSL_printnl(y_52, z_52);
  t = (ATerm) ATmakeAppl(sym__2, term_e_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_29), v_52), term_s_29), w_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_13;
  a_53 = t;
  t = SSL_exit(a_53);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm q_53 = NULL,t_53 = NULL;
  t_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm s_23 = NULL,o_4 = NULL;
            t = SSLgetAnnotations(t_53);
            s_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_53);
            o_4 = t;
            t = SSLsetAnnotations(o_4, s_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_53 = NULL,i_53 = NULL;
      t = term_g_11;
      h_53 = t;
      t = term_y_29;
      i_53 = t;
      t = term_z_29;
      t = b_9(h_53, i_53, t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      t = fetch_1_0(u_7, t);
    }
  t = j_113(t);
  return(t);
}
static ATerm f_9 (ATerm w_26, ATerm x_26, ATerm y_26, ATerm t)
{
  ATerm x_53 = NULL;
  t = SSL_hashtable_put(y_26, w_26, x_26);
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_23, ATerm t)
{
  ATerm l_54 = NULL;
  t = table_hashtable_0_0(t);
  l_54 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = l_54;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_9(q_23, f_24, t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm u_24 = NULL;
          t = q_23;
          t = table_create_0_0(t);
          t = l_54;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_9(q_23, u_24, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_27, ATerm f_27, ATerm t)
{
  ATerm i_55 = NULL;
  t = SSL_hashtable_create(e_27, f_27);
  i_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,p_55 = NULL,s_55 = NULL,w_55 = NULL;
  l_55 = t;
  t = term_c_30;
  s_55 = t;
  t = term_d_30;
  w_55 = t;
  t = l_55;
  t = new_hashtable_0_2(s_55, w_55, t);
  m_55 = t;
  t = l_55;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(l_55, m_55, p_55, t);
  t = l_55;
  return(t);
}
static ATerm y_8 (ATerm b_27, ATerm c_27, ATerm t)
{
  ATerm x_55 = NULL;
  t = SSL_hashtable_remove(c_27, b_27);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_55);
  return(t);
}
static ATerm z_8 (ATerm g_27, ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_hashtable_destroy(g_27);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_55);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = SSL_table_hashtable();
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_55);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,h_56 = NULL;
  c_56 = t;
  t = table_hashtable_0_0(t);
  d_56 = t;
  t = lookup_table_0_1(c_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(h_56, t);
  t = d_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(c_56, e_56, t);
  t = c_56;
  return(t);
}
ATerm map_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  static ATerm g_57 (ATerm t)
  {
    ATerm c_57 = NULL,e_57 = NULL,f_57 = NULL;
    c_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_57;
      }
    else
      {
        ATerm e_25 = NULL,m_25 = NULL,s_25 = NULL,s_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_57 = ATgetFirst((ATermList) t);
            f_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_57);
        e_25 = t;
        t = e_57;
        t = h_102(t);
        m_25 = t;
        t = f_57;
        t = g_57(t);
        s_25 = t;
        t = (ATerm) ATinsert(CheckATermList(s_25), m_25);
        s_4 = t;
        t = SSLsetAnnotations(s_4, e_25);
      }
    return(t);
  }
  t = g_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_57 = ATgetFirst((ATermList) t);
      k_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_57 = NULL,r_57 = NULL;
        static ATerm g_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_57)), not_null(r_57));
          return(t);
        }
        t = k_57;
        t = l_0(t);
        if(((q_57 != NULL) && (q_57 != t)))
          _fail(t);
        else
          q_57 = t;
        t = j_57;
        t = j_0(t);
        if(((r_57 != NULL) && (r_57 != t)))
          _fail(t);
        else
          r_57 = t;
        t = k_57;
        t = reverse_acc_2_0(j_0, g_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_12;
      t = l_0(t);
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_5 = NULL;
  z_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_57);
  a_5 = t;
  t = SSLsetAnnotations(a_5, x_57);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_58), term_h_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_57 = NULL,w_57 = NULL;
      t = term_g_11;
      v_57 = t;
      t = term_e_29;
      w_57 = t;
      t = term_f_29;
      t = b_9(v_57, w_57, t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      t = fetch_1_0(i_8, t);
    }
  t = term_p_30;
  t = echo_0_0(t);
  t = term_j_28;
  t_57 = t;
  t = term_k_28;
  u_57 = t;
  t = term_r_30;
  t = b_9(t_57, u_57, t);
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(m_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  static ATerm y_58 (ATerm t)
  {
    ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
    v_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_58 = ATgetFirst((ATermList) t);
        x_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_26 = NULL,s_26 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(v_58);
          m_26 = t;
          t = w_58;
          t = r_102(t);
          s_26 = t;
          t = (ATerm) ATinsert(CheckATermList(x_58), s_26);
          c_5 = t;
          t = SSLsetAnnotations(c_5, m_26);
          LocalPopChoice(u_30);
        }
      else
        {
          t = s_30;
          {
            ATerm p_27 = NULL,s_27 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(v_58);
            p_27 = t;
            t = x_58;
            t = y_58(t);
            s_27 = t;
            t = (ATerm) ATinsert(CheckATermList(s_27), w_58);
            e_5 = t;
            t = SSLsetAnnotations(e_5, p_27);
          }
        }
    }
    return(t);
  }
  t = y_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  c_59 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_30 = ATgetFirst((ATermList) t);
                ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_59;
          }
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATinsert(ATempty, c_59);
      }
  }
  d_59 = t;
  t = term_p_11;
  e_59 = t;
  t = SSL_printnl(e_59, d_59);
  t = c_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  t = term_g_11;
  i_59 = t;
  t = term_e_29;
  j_59 = t;
  t = term_f_29;
  t = b_9(i_59, j_59, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_9 (ATerm z_26, ATerm a_27, ATerm t)
{
  t = SSL_hashtable_get(a_27, z_26);
  return(t);
}
static ATerm b_9 (ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm k_59 = NULL;
  t = lookup_table_0_1(x_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(y_23, k_59, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  t = term_z_30;
  m_59 = t;
  t = term_f_12;
  n_59 = t;
  t = term_a_31;
  t = e_9(m_59, n_59, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_c_31;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  t = term_z_30;
  q_59 = t;
  t = term_f_12;
  r_59 = t;
  t = term_a_31;
  t = e_9(q_59, r_59, t);
  t = term_e_31;
  o_59 = t;
  t = term_f_12;
  p_59 = t;
  t = term_f_31;
  t = e_9(o_59, p_59, t);
  t = term_g_31;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_8, i_9, l_9, t);
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = Option_3_0(m_9, n_9, o_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,l_11 = NULL;
  x_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_59 = ATgetFirst((ATermList) t);
      u_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_59);
  s_59 = t;
  t = t_59;
  t = l_83(t);
  v_59 = t;
  t = u_59;
  t = m_83(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), v_59);
  l_11 = t;
  t = SSLsetAnnotations(l_11, s_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_115 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,h_60 = NULL,i_60 = NULL,r_11 = NULL;
  c_60 = t;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_31;
        t = h_115(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
      }
  }
  t = c_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_60 = ATgetFirst((ATermList) t);
      f_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  d_60 = t;
  t = term_e_29;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_29, e_60);
  t = e_9(i_60, e_60, t);
  t = f_60;
  {
    static ATerm s_60 (ATerm t)
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_60 = NULL;
              l_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_60;
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              t = h_115(t);
              t = Cons_2_0(_id, s_60, t);
            }
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          {
            ATerm o_60 = NULL,p_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_60 = ATgetFirst((ATermList) t);
                p_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_60), (ATerm) ATmakeAppl(sym_Undefined_1, o_60));
          }
        }
      return(t);
    }
    t = s_60(t);
  }
  h_60 = t;
  t = (ATerm) ATinsert(CheckATermList(h_60), (ATerm) ATmakeAppl(sym_Program_1, e_60));
  r_11 = t;
  t = SSLsetAnnotations(r_11, d_60);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm f_61 = NULL;
  f_61 = t;
  if(match_string(t, "--help"))
    {
      t = f_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_61;
        }
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  t = term_y_29;
  g_61 = t;
  t = term_f_12;
  h_61 = t;
  t = term_t_31;
  t = e_9(g_61, h_61, t);
  t = term_u_31;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_w_31;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  z_60 = t;
  t = term_j_28;
  a_61 = t;
  t = term_x_31;
  t = lookup_table_0_1(a_61, t);
  e_61 = t;
  t = term_k_28;
  b_61 = t;
  t = (ATerm) ATempty;
  c_61 = t;
  t = e_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(b_61, c_61, d_61, t);
  t = z_60;
  {
    static ATerm r_9 (ATerm t)
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_115(t);
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
                t = Option_3_0(v_9, w_9, x_9, t);
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_9, t);
  }
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_61 = NULL;
        s_61 = t;
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_28 = NULL;
              t = s_61;
              {
                ATerm j_32 = t;
                int o_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_28 = NULL,p_28 = NULL;
                    t = term_g_11;
                    n_28 = t;
                    t = term_y_29;
                    p_28 = t;
                    t = term_z_29;
                    t = b_9(n_28, p_28, t);
                    LocalPopChoice(o_32);
                  }
                else
                  {
                    t = j_32;
                    t = fetch_1_0(b_10, t);
                  }
              }
              t = s_61;
              t = default_system_usage_0_0(t);
              t = term_u_13;
              m_28 = t;
              t = SSL_exit(m_28);
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              {
                ATerm a_29 = NULL,b_29 = NULL,d_29 = NULL;
                t = term_g_11;
                b_29 = t;
                t = term_z_30;
                d_29 = t;
                t = term_p_32;
                t = b_9(b_29, d_29, t);
                t = s_61;
                t = default_system_about_0_0(t);
                t = term_u_13;
                a_29 = t;
                t = SSL_exit(a_29);
              }
            }
        }
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        {
          ATerm q_32 = t;
          int r_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
              static ATerm g_10 (ATerm t)
              {
                ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,c_21 = NULL;
                y_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_61);
                w_61 = t;
                t = x_61;
                if(((x_60 != NULL) && (x_60 != t)))
                  _fail(t);
                else
                  x_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_61);
                c_21 = t;
                t = SSLsetAnnotations(c_21, w_61);
                return(t);
              }
              t = fetch_1_0(g_10, t);
              t = term_e_19;
              u_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_60)), term_s_32);
              v_61 = t;
              t = SSL_printnl(u_61, v_61);
              t = (ATerm) ATmakeAppl(sym__2, term_e_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_60)), term_s_32));
              t = default_system_usage_0_0(t);
              t = term_t_13;
              t_61 = t;
              t = SSL_exit(t_61);
              LocalPopChoice(r_32);
            }
          else
            {
              t = q_32;
            }
        }
      }
  }
  y_60 = t;
  t = term_j_28;
  t = table_destroy_0_0(t);
  t = y_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL;
  t = parse_options_1_0(l_113, t);
  d_62 = t;
  t = term_b_24;
  t = table_create_0_0(t);
  t = term_b_24;
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_24, term_c_24, d_62);
  t = lookup_table_0_1(e_62, t);
  h_62 = t;
  t = term_c_24;
  f_62 = t;
  t = h_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(f_62, d_62, g_62, t);
  t = d_62;
  t = n_113(t);
  {
    ATerm t_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_113, t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = t_32;
        {
          ATerm y_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_113(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_33);
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
static ATerm q_10 (ATerm t)
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
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_33);
          }
        else
          {
            t = e_33;
            {
              ATerm h_33 = t;
              int i_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_10, u_10, v_10, t);
                  LocalPopChoice(i_33);
                }
              else
                {
                  t = h_33;
                  {
                    ATerm j_33 = t;
                    int k_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_33);
                      }
                    else
                      {
                        t = j_33;
                        {
                          ATerm l_33 = t;
                          int m_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(m_33);
                            }
                          else
                            {
                              t = l_33;
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
static ATerm r_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  t = term_n_33;
  j_62 = t;
  t = term_f_12;
  k_62 = t;
  t = term_o_33;
  t = e_9(j_62, k_62, t);
  t = term_p_33;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_10, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
