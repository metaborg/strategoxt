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
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_i_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_e_24;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_f_14;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_c_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_q_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_h_21);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_w_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_z_26);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_x_27);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_n_15);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_15);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_f_14);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_e_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_w_28);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_z_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_i_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_f_14);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_f_14);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_f_14);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__3, term_f_30, term_i_30, (ATerm) ATempty);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_t_32);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_f_14);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm j_8 (ATerm e_48, ATerm j_476, ATerm t);
ATerm at_suffix_1_0 (ATerm m_106 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm e_106 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm l_99 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm l_8 (ATerm d_20, ATerm c_20, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm q_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm j_95 (ATerm), ATerm t);
static ATerm q_7 (ATerm w_18, ATerm x_18, ATerm v_18, ATerm t);
static ATerm p_13 (ATerm a_12, ATerm h_12, ATerm i_12, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm v_121 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
ATerm collect_p__1_0 (ATerm w_128 (ATerm), ATerm t);
static ATerm r_7 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm s_7 (ATerm y_91 (ATerm), ATerm y_16, ATerm z_16, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm t_7 (ATerm n_18, ATerm p_18, ATerm m_18, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm v_7 (ATerm t_17, ATerm u_17, ATerm w_17, ATerm v_17, ATerm t);
static ATerm w_7 (ATerm o_17, ATerm p_17, ATerm s_17, ATerm r_17, ATerm q_17, ATerm t);
static ATerm y_7 (ATerm u_34, ATerm v_34, ATerm t);
static ATerm z_7 (ATerm n_50, ATerm l_50, ATerm m_50, ATerm t);
ATerm repeat_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm c_8 (ATerm f_17, ATerm e_17, ATerm j_17, ATerm t);
ATerm genzip_4_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm nzip_1_0 (ATerm h_108 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm trm2abox_list_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
static ATerm g_8 (ATerm e_33, ATerm f_33, ATerm t);
static ATerm h_8 (ATerm y_101 (ATerm), ATerm l_358, ATerm o_33, ATerm t);
static ATerm i_8 (ATerm o_115 (ATerm), ATerm m_58, ATerm k_58, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm k_8 (ATerm m_57, ATerm n_57, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm a_94 (ATerm), ATerm t);
static ATerm m_8 (ATerm o_22, ATerm p_22, ATerm t);
ATerm end_scope_1_0 (ATerm l_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_115 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_94 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t);
static ATerm n_8 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm p_53, ATerm o_53, ATerm t);
static ATerm o_8 (ATerm c_110 (ATerm), ATerm l_53, ATerm k_53, ATerm t);
static ATerm d_4 (ATerm t);
ATerm collect_om_2_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm arity_of_template_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm mk_key_arity_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm p_8 (ATerm h_67, ATerm i_67, ATerm t);
ATerm unescape_chars_1_0 (ATerm f_100 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm t_106 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm unquote_chars_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm i_95 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm y_8 (ATerm g_67, ATerm t);
ATerm oncetd_1_0 (ATerm m_96 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm k_45 (ATerm b_45, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_9 (ATerm k_33, ATerm t);
static ATerm c_9 (ATerm q_32, ATerm r_32, ATerm t);
static ATerm d_9 (ATerm y_57, ATerm z_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_47 (ATerm b_46, ATerm t);
static ATerm s_47 (ATerm l_46, ATerm m_46, ATerm o_46, ATerm t);
static ATerm z_47 (ATerm z_46, ATerm a_47, ATerm b_47, ATerm t);
static ATerm e_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm w_101 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm i_106 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_51 (ATerm n_51, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_9 (ATerm v_19, ATerm u_19, ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_9 (ATerm p_19, ATerm q_19, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_9 (ATerm j_22, ATerm k_22, ATerm i_22, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_9 (ATerm o_34, ATerm p_34, ATerm t);
ATerm foldr_2_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_92 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm need_help_1_0 (ATerm u_116 (ATerm), ATerm t);
static ATerm p_9 (ATerm b_27, ATerm c_27, ATerm d_27, ATerm t);
ATerm lookup_table_0_1 (ATerm v_23, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_27, ATerm k_27, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_9 (ATerm g_27, ATerm h_27, ATerm t);
static ATerm j_9 (ATerm l_27, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_106 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_9 (ATerm e_27, ATerm f_27, ATerm t);
static ATerm l_9 (ATerm c_24, ATerm d_24, ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_118 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm parse_options_1_0 (ATerm r_118 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = i_1;
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
        t = (ATerm) ATmakeAppl(sym__2, k_1, e_0);
        t = l_8(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(z_10);
      }
    else
      {
        t = t_10;
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              t = i_1;
              t = p_0(t);
              x_0 = t;
              {
                ATerm e_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_1 = NULL;
                    f_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_1;
                          }
                        else
                          {
                            t = f_1;
                            if((k_1 != t))
                              {
                                _fail(t);
                              }
                            t = f_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, x_0);
              t = l_8(k_1, x_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              t = i_1;
              t = p_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            }
        }
      }
  }
  return(t);
}
static ATerm j_8 (ATerm e_48, ATerm j_476, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((e_48 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = j_476;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t);
  static ATerm n_2 (ATerm t)
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_106(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
        {
          ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,q_1 = NULL,w_1 = NULL,k_0 = NULL;
          i_2 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_2 = ATgetFirst((ATermList) t);
              k_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_2);
          q_1 = t;
          t = k_2;
          t = n_2(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), j_2);
          k_0 = t;
          t = SSLsetAnnotations(k_0, q_1);
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm w_2 = NULL,z_2 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,y_0 = NULL,w_0 = NULL;
    j_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_3 = ATgetFirst((ATermList) t);
        g_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_3);
    e_3 = t;
    t = f_3;
    t = e_106(t);
    h_3 = t;
    t = (ATerm) ATinsert(CheckATermList(g_3), h_3);
    w_0 = t;
    t = SSLsetAnnotations(w_0, e_3);
    i_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_2 = ATgetFirst((ATermList) t);
        b_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_3);
    w_2 = t;
    t = b_3;
    if(((t_2 != NULL) && (t_2 != t)))
      _fail(t);
    else
      t_2 = t;
    t = (ATerm) ATinsert(CheckATermList(b_3), z_2);
    y_0 = t;
    t = SSLsetAnnotations(y_0, w_2);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_2, not_null(t_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,x_3 = NULL;
  ATerm k_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(l_99, t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = k_11;
      {
        ATerm o_3 = NULL;
        o_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_11 = ATgetFirst((ATermList) t);
              ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_3;
          t = list_tokenize_1_0(l_99, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm s_11 = ATgetFirst((ATermList) t);
          ATerm t_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, r_3);
        }
      else
        {
          ATerm r_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_11 = ATgetFirst((ATermList) t);
              ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_3;
          t = list_tokenize_1_0(l_99, t);
          r_4 = t;
          t = (ATerm) ATinsert(CheckATermList(r_4), r_3);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  t = SSL_implode_string(c_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,b_1 = NULL;
  z_4 = t;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_4);
  u_4 = t;
  t = SSL_explode_string(w_4);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, x_4);
  b_1 = t;
  t = SSLsetAnnotations(b_1, u_4);
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm b_5 = NULL;
      b_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_5, s_4);
      t = j_8(b_5, s_4, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 = NULL;
        t = SSL_filemode(r_5);
        if(match_cons(t, sym__2))
          {
            l_2 = ATgetArgument(t, 0);
            {
              ATerm b_12 = ATgetArgument(t, 1);
              if(((ATgetType(b_12) != AT_INT) || (ATgetInt((ATermInt) b_12) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_2;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm s_2 = NULL,v_2 = NULL;
          t = term_c_12;
          v_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_12, r_5);
          t = c_9(v_2, r_5, t);
          s_2 = t;
          t = SSL_perror(s_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm l_8 (ATerm d_20, ATerm c_20, ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  v_5 = t;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 = NULL,x_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_20, (ATerm) ATinsert(ATempty, term_j_12));
        t = k_8(c_20, x_5, t);
        t = filemode_0_0(t);
        w_5 = t;
        t = SSL_S_ISDIR(w_5);
        t = v_5;
        LocalPopChoice(g_12);
        {
          ATerm y_5 = NULL,a_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_k_12), d_20);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          y_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_5), term_l_12), c_20);
          a_6 = t;
          t = SSL_concat_strings(a_6);
        }
      }
    else
      {
        t = f_12;
        t = c_20;
      }
  }
  u_5 = t;
  t = SSL_copy(d_20, u_5);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 = NULL,p_6 = NULL;
      t = term_p_12;
      o_6 = t;
      t = term_q_12;
      p_6 = t;
      t = term_v_12;
      t = l_9(o_6, p_6, t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = term_w_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_3 = NULL,c_3 = NULL;
      t = term_q_12;
      {
        ATerm x_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 = NULL,k_3 = NULL;
            t = term_p_12;
            d_3 = t;
            t = term_q_12;
            k_3 = t;
            t = term_v_12;
            t = l_9(d_3, k_3, t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = x_12;
            t = term_w_12;
          }
      }
      a_3 = t;
      t = term_c_13;
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_13, a_3);
      t = l_8(c_3, a_3, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_6;
      t = copy_to_1_0(n_0, t);
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_10 = ATgetFirst((ATermList) t);
          s_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 = NULL,b_4 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(q_10);
            v_3 = t;
            t = r_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_10;
            t = flat_list_0_0(t);
            b_4 = t;
            t = (ATerm) ATinsert(CheckATermList(b_4), r_10);
            d_1 = t;
            t = SSLsetAnnotations(d_1, v_3);
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm l_13 = t;
              int m_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 = NULL,l_4 = NULL,o_4 = NULL,a_5 = NULL,e_1 = NULL;
                  t = SSLgetAnnotations(q_10);
                  o_4 = t;
                  t = r_10;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = r_10;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm n_13 = ATgetFirst((ATermList) t);
                          ATerm z_13 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = r_10;
                    }
                  t = (ATerm) ATinsert(CheckATermList(s_10), r_10);
                  e_1 = t;
                  t = SSLsetAnnotations(e_1, o_4);
                  a_5 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_4 = ATgetFirst((ATermList) t);
                      {
                        ATerm a_14 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_5;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_14 = ATgetFirst((ATermList) t);
                      k_4 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, l_4, k_4);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(m_13);
                }
              else
                {
                  t = l_13;
                  {
                    ATerm e_6 = NULL,q_6 = NULL,n_1 = NULL;
                    t = SSLgetAnnotations(q_10);
                    e_6 = t;
                    t = s_10;
                    t = flat_list_0_0(t);
                    q_6 = t;
                    t = (ATerm) ATinsert(CheckATermList(q_6), r_10);
                    n_1 = t;
                    t = SSLsetAnnotations(n_1, e_6);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,b_11 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      b_11 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      {
        ATerm f_11 = NULL,g_11 = NULL;
        t = term_f_14;
        t = q_0(t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_11, g_11);
        t = index_0_0(t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, f_11);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm i_11 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          b_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_f_14;
      t = q_0(t);
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_11, i_11);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    t = bottomup_1_0(j_95, t);
    return(t);
  }
  t = SRTS_all(r_0, t);
  t = j_95(t);
  return(t);
}
static ATerm q_7 (ATerm w_18, ATerm x_18, ATerm v_18, ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  static ATerm t_0 (ATerm t);
  static ATerm t_0 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_0 (ATerm t);
            static ATerm u_0 (ATerm t)
            {
              t = not_null(l_11);
              return(t);
            }
            t = Instantiate_1_0(u_0, t);
            LocalPopChoice(l_14);
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
        t = i_14;
      }
    return(t);
  }
  t = SSL_explode_term(v_18);
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11;
  {
    static ATerm s_0 (ATerm t);
    static ATerm s_0 (ATerm t)
    {
      ATerm n_11 = NULL,p_11 = NULL;
      if(match_cons(t, sym__2))
        {
          n_11 = ATgetArgument(t, 0);
          p_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, n_11, w_18, p_11);
      t = c_8(n_11, w_18, p_11, t);
      return(t);
    }
    t = nzip_1_0(s_0, t);
  }
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  t = x_18;
  t = bottomup_1_0(t_0, t);
  return(t);
}
static ATerm p_13 (ATerm a_12, ATerm h_12, ATerm i_12, ATerm t)
{
  ATerm m_12 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(i_12);
  m_12 = t;
  t = h_12;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_12), a_12);
  t_1 = t;
  t = SSLsetAnnotations(t_1, m_12);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm v_121 (ATerm), ATerm t)
{
  static ATerm o_13 (ATerm t);
  static ATerm o_13 (ATerm t)
  {
    static ATerm q_13 (ATerm r_12, ATerm s_12, ATerm t_12, ATerm u_12, ATerm t);
    static ATerm q_13 (ATerm r_12, ATerm s_12, ATerm t_12, ATerm u_12, ATerm t)
    {
      ATerm y_12 = NULL,z_12 = NULL,b_13 = NULL,z_1 = NULL;
      t = u_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm s_14 = ATgetFirst((ATermList) t);
          ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_12);
      y_12 = t;
      t = term_f_14;
      t = v_121(t);
      {
        static ATerm v_0 (ATerm t);
        static ATerm v_0 (ATerm t)
        {
          ATerm w_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm z_0 (ATerm t);
                  static ATerm z_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, s_12), r_12);
                    return(t);
                  }
                  t = Instantiate_1_0(z_0, t);
                  LocalPopChoice(a_15);
                }
              else
                {
                  t = y_14;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
            }
          return(t);
        }
        t = bottomup_1_0(v_0, t);
      }
      b_13 = t;
      t = t_12;
      t = o_13(t);
      z_12 = t;
      t = (ATerm) ATinsert(CheckATermList(z_12), b_13);
      z_1 = t;
      t = SSLsetAnnotations(z_1, y_12);
      return(t);
    }
    ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
    g_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_13 = ATgetFirst((ATermList) t);
            i_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_13;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_13 = ATgetFirst((ATermList) t);
            k_13 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm c_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_13(h_13, i_13, g_13, t);
                  LocalPopChoice(d_15);
                }
              else
                {
                  t = c_15;
                  t = q_13(h_13, j_13, k_13, g_13, t);
                }
            }
          }
        else
          {
            t = p_13(h_13, i_13, g_13, t);
          }
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm w_128 (ATerm), ATerm t)
{
  static ATerm s_13 (ATerm t);
  static ATerm s_13 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 = NULL;
        t = w_128(t);
        r_13 = t;
        t = (ATerm) ATinsert(ATempty, r_13);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm w_6 = NULL,x_6 = NULL;
          x_6 = t;
          t = SSL_explode_term(x_6);
          if(match_cons(t, sym__2))
            {
              ATerm g_15 = ATgetArgument(t, 0);
              w_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_6;
          t = foldr_3_0(a_1, conc_0_0, s_13, t);
        }
      }
    return(t);
  }
  t = s_13(t);
  return(t);
}
static ATerm r_7 (ATerm m_35, ATerm n_35, ATerm t)
{
  t = SSL_mod(m_35, n_35);
  return(t);
}
static ATerm s_7 (ATerm y_91 (ATerm), ATerm y_16, ATerm z_16, ATerm t)
{
  ATerm t_13 = NULL;
  ATerm h_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
      t = term_l_15;
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_16, term_l_15);
      t = r_7(y_16, w_13, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_f_14;
      t = y_91(t);
      u_13 = t;
      t = term_l_15;
      v_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_15, u_13, z_16);
      t = c_8(v_13, u_13, z_16, t);
      t_13 = t;
      LocalPopChoice(j_15);
    }
  else
    {
      t = h_15;
      {
        ATerm x_13 = NULL,y_13 = NULL;
        t = term_f_14;
        t = y_91(t);
        x_13 = t;
        t = term_m_15;
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_m_15, x_13, z_16);
        t = c_8(y_13, x_13, z_16, t);
        t_13 = t;
      }
    }
  t = t_13;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,g_2 = NULL;
  o_14 = t;
  if(match_cons(t, sym_S_1))
    {
      n_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_14);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, n_14);
  g_2 = t;
  t = SSLsetAnnotations(g_2, m_14);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(p_14, r_14, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm t_7 (ATerm n_18, ATerm p_18, ATerm m_18, ATerm t)
{
  ATerm b_14 = NULL;
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    t = p_18;
    return(t);
  }
  t = m_18;
  {
    static ATerm c_1 (ATerm t);
    static ATerm c_1 (ATerm t)
    {
      ATerm e_14 = NULL,g_14 = NULL;
      static ATerm g_1 (ATerm t);
      static ATerm g_1 (ATerm t)
      {
        t = n_18;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          e_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_7(g_1, e_14, g_14, t);
      return(t);
    }
    t = nzip_1_0(c_1, t);
  }
  b_14 = t;
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_15 (ATerm t);
        static ATerm k_15 (ATerm t)
        {
          ATerm t_14 = NULL,u_14 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_14 = ATgetFirst((ATermList) t);
                  u_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_14;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm s_15 = t;
                  int t_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, t_14);
                      LocalPopChoice(t_15);
                    }
                  else
                    {
                      t = s_15;
                      {
                        ATerm b_15 = NULL;
                        t = u_14;
                        t = k_15(t);
                        b_15 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(b_15), t_14), t_14);
                      }
                    }
                }
              else
                {
                  ATerm i_15 = NULL;
                  t = u_14;
                  t = k_15(t);
                  i_15 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_15), t_14), t_14);
                }
            }
          return(t);
        }
        t = p_18;
        t = collect_p__1_0(h_1, t);
        t = foldr_3_0(j_1, l_1, m_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = b_14;
        t = k_15(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = b_14;
      }
  }
  t = instantiate_sep_list_1_0(o_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm o_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__4))
    {
      o_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      w_15 = ATgetArgument(t, 2);
      x_15 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = o_15;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, v_15, w_15, x_15);
      t = t_7(v_15, w_15, x_15, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, v_15, w_15, x_15);
      t = t_7(v_15, w_15, x_15, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm x_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,k_17 = NULL,l_17 = NULL;
  static ATerm r_1 (ATerm t);
  static ATerm r_1 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_1 (ATerm t);
            static ATerm s_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(x_16));
              return(t);
            }
            t = Instantiate_1_0(s_1, t);
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
      }
    return(t);
  }
  b_17 = t;
  if(match_cons(t, sym__4))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
      k_17 = ATgetArgument(t, 2);
      l_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = c_17;
  if(match_string(t, "iter"))
    {
      t = b_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = b_17;
    }
  t = l_17;
  {
    static ATerm p_1 (ATerm t);
    static ATerm p_1 (ATerm t)
    {
      ATerm y_17 = NULL,z_17 = NULL;
      y_17 = t;
      t = term_m_15;
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_15, d_17, y_17);
      t = c_8(z_17, d_17, y_17, t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  if(((x_16 != NULL) && (x_16 != t)))
    _fail(t);
  else
    x_16 = t;
  t = k_17;
  t = bottomup_1_0(r_1, t);
  return(t);
}
static ATerm v_7 (ATerm t_17, ATerm u_17, ATerm w_17, ATerm v_17, ATerm t)
{
  ATerm r_18 = NULL,y_18 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_1 (ATerm t);
            static ATerm v_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(r_18));
              return(t);
            }
            t = Instantiate_1_0(v_1, t);
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
      }
    return(t);
  }
  t = term_m_15;
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, u_17, v_17);
  t = c_8(y_18, u_17, v_17, t);
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  t = w_17;
  t = bottomup_1_0(u_1, t);
  return(t);
}
static ATerm w_7 (ATerm o_17, ATerm p_17, ATerm s_17, ATerm r_17, ATerm q_17, ATerm t)
{
  ATerm f_19 = NULL,n_19 = NULL;
  static ATerm x_1 (ATerm t);
  static ATerm x_1 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_1 (ATerm t);
            static ATerm y_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(n_19));
              return(t);
            }
            t = Instantiate_1_0(y_1, t);
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, r_17, p_17, q_17);
  t = c_8(r_17, p_17, q_17, t);
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
  t = index_0_0(t);
  f_19 = t;
  t = (ATerm) ATinsert(ATempty, f_19);
  t = bottomup_1_0(x_1, t);
  return(t);
}
static ATerm y_7 (ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm l_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(u_34, v_34);
      LocalPopChoice(n_16);
    }
  else
    {
      t = l_16;
      t = SSL_subtr(u_34, v_34);
    }
  return(t);
}
static ATerm z_7 (ATerm n_50, ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_50, term_l_15);
  t = geq_0_0(t);
  t = term_m_15;
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, term_m_15);
  t = y_7(n_50, b_20, t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_19, m_50);
  return(t);
}
ATerm repeat_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t)
{
  static ATerm f_20 (ATerm t);
  static ATerm f_20 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_100(t);
        t = f_20(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = k_100(t);
      }
    return(t);
  }
  t = f_20(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      v_20 = ATgetArgument(t, 0);
      {
        ATerm q_16 = ATgetArgument(t, 1);
        if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
          {
            x_20 = ATgetFirst((ATermList) q_16);
            y_20 = (ATerm) ATgetNext((ATermList) q_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_7(v_20, x_20, y_20, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  t = repeat_2_0(a_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(((ATgetType(r_16) != AT_INT) || (ATgetInt((ATermInt) r_16) != 1)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            r_20 = ATgetFirst((ATermList) s_16);
            {
              ATerm t_16 = (ATerm) ATgetNext((ATermList) s_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_20;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(d_2, t);
          LocalPopChoice(g_17);
        }
      else
        {
          t = a_17;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm f_17, ATerm e_17, ATerm j_17, ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_17, (ATerm) ATinsert(ATempty, f_17));
  t = conc_0_0(t);
  q_21 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL,u_21 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            p_21 = ATgetArgument(t, 0);
            r_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_21;
        if(match_cons(t, sym_Path_2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            t_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_21;
        {
          static ATerm b_2 (ATerm t);
          static ATerm b_2 (ATerm t)
          {
            ATerm v_21 = NULL,w_21 = NULL,z_21 = NULL,a_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_5 = NULL,o_2 = NULL;
            f_22 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_21 = ATgetFirst((ATermList) t);
                z_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_22);
            v_21 = t;
            t = w_21;
            if(match_cons(t, sym_selector_2))
              {
                c_22 = ATgetArgument(t, 0);
                d_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_21);
            a_22 = t;
            t = d_22;
            if(((u_21 != NULL) && (u_21 != t)))
              _fail(t);
            else
              u_21 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, c_22, d_22);
            o_2 = t;
            t = SSLsetAnnotations(o_2, a_22);
            e_22 = t;
            t = z_21;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_21), e_22);
            g_5 = t;
            t = SSLsetAnnotations(g_5, v_21);
            return(t);
          }
          t = at_last_1_0(b_2, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(u_21), q_21, r_21, j_17);
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_22 = NULL,h_22 = NULL,l_22 = NULL,m_22 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm c_18 = ATgetArgument(t, 0);
                  ATerm d_18 = ATgetArgument(t, 1);
                  ATerm e_18 = ATgetArgument(t, 2);
                  ATerm f_18 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = j_17;
              if(match_cons(t, sym_alt_2))
                {
                  m_22 = ATgetArgument(t, 0);
                  g_22 = ATgetArgument(t, 1);
                  t = g_22;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm z_22 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, m_22, r_21);
                      t = index_0_0(t);
                      z_22 = t;
                      t = (ATerm) ATinsert(ATempty, z_22);
                      t = bottomup_1_0(c_2, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          h_22 = ATgetFirst((ATermList) t);
                          l_22 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = l_22;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(u_21), q_21, r_21, j_17);
                      t = w_7(not_null(u_21), q_21, r_21, m_22, h_22, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      m_22 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(u_21), q_21, r_21, j_17);
                      t = v_7(not_null(u_21), q_21, r_21, m_22, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              {
                ATerm h_18 = t;
                int i_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(i_18);
                  }
                else
                  {
                    t = h_18;
                    {
                      ATerm j_18 = t;
                      int k_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(k_18);
                        }
                      else
                        {
                          t = j_18;
                          if(match_cons(t, sym__4))
                            {
                              ATerm l_18 = ATgetArgument(t, 0);
                              ATerm o_18 = ATgetArgument(t, 1);
                              ATerm q_18 = ATgetArgument(t, 2);
                              ATerm s_18 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(u_21);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(u_21), q_21, r_21, j_17);
                          t = q_7(q_21, r_21, j_17, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = j_17;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  static ATerm i_24 (ATerm t);
  static ATerm i_24 (ATerm t)
  {
    ATerm u_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_107(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = u_18;
        {
          ATerm k_23 = NULL,l_23 = NULL,p_23 = NULL,q_23 = NULL,s_23 = NULL,b_24 = NULL,k_5 = NULL;
          t = w_107(t);
          b_24 = t;
          if(match_cons(t, sym__2))
            {
              l_23 = ATgetArgument(t, 0);
              p_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_24);
          k_23 = t;
          t = l_23;
          t = y_107(t);
          q_23 = t;
          t = p_23;
          t = i_24(t);
          s_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_23, s_23);
          k_5 = t;
          t = SSLsetAnnotations(k_5, k_23);
          t = x_107(t);
        }
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      ATerm g_19 = ATgetArgument(t, 1);
      if(((ATgetType(g_19) != AT_LIST) || !(ATisEmpty(g_19))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            n_24 = ATgetFirst((ATermList) h_19);
            o_24 = (ATerm) ATgetNext((ATermList) h_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_m_15;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, term_m_15);
  t = g_9(m_24, s_24, t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_24, n_24), (ATerm) ATmakeAppl(sym__2, p_24, o_24));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm t_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_24), t_24);
  return(t);
}
ATerm nzip_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, k_24);
  t = genzip_4_0(e_2, f_2, h_2, h_108, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL;
  y_24 = t;
  t = term_o_19;
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, y_24);
  t = l_9(c_25, y_24, t);
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(m_2, t);
  t = (ATerm) ATmakeAppl(sym__2, b_25, z_24);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(o_25, p_25, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  static ATerm m_3 (ATerm t);
  static ATerm m_3 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_3 (ATerm t);
            static ATerm n_3 (ATerm t)
            {
              t = not_null(l_25);
              return(t);
            }
            t = Instantiate_1_0(n_3, t);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
      }
    return(t);
  }
  m_25 = t;
  t = SSL_explode_term(m_25);
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_25;
  t = foldr_3_0(q_2, r_2, x_2, t);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, (ATerm) ATinsert(ATempty, j_25));
  {
    ATerm y_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = y_19;
        t = debug_1_0(y_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_25;
  {
    static ATerm l_3 (ATerm t);
    static ATerm l_3 (ATerm t)
    {
      ATerm s_25 = NULL,t_25 = NULL,v_25 = NULL;
      if(match_cons(t, sym__2))
        {
          s_25 = ATgetArgument(t, 0);
          t_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, j_25);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, s_25, (ATerm)ATinsert(ATempty, j_25), t_25);
      t = c_8(s_25, v_25, t_25, t);
      return(t);
    }
    t = nzip_1_0(l_3, t);
  }
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = k_25;
  t = bottomup_1_0(m_3, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_explode_term(z_25);
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      ATerm h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_25;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_25;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_20 = ATgetFirst((ATermList) t);
          ATerm k_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_25;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 = NULL,c_7 = NULL;
      c_7 = t;
      t = SSL_is_string(c_7);
      b_7 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, b_7);
      LocalPopChoice(n_20);
    }
  else
    {
      t = l_20;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
            f_7 = t;
            t = SSL_is_int(f_7);
            e_7 = t;
            t = SSL_int_to_string(e_7);
            d_7 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, d_7);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm q_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_7 = NULL,j_7 = NULL,l_7 = NULL;
                  l_7 = t;
                  t = SSL_is_real(l_7);
                  j_7 = t;
                  t = SSL_real_to_string(j_7);
                  i_7 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, i_7);
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = q_20;
                  {
                    ATerm t_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_list_0_0(t);
                        LocalPopChoice(u_20);
                      }
                    else
                      {
                        t = t_20;
                        {
                          ATerm w_20 = t;
                          int z_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = trm2abox_appl_0_0(t);
                              LocalPopChoice(z_20);
                            }
                          else
                            {
                              t = w_20;
                              {
                                ATerm x_26 = NULL,p_7 = NULL,u_7 = NULL,a_8 = NULL;
                                x_26 = t;
                                t = term_a_21;
                                u_7 = t;
                                t = (ATerm) ATinsert(ATinsert(ATempty, x_26), term_b_21);
                                a_8 = t;
                                t = SSL_printnl(u_7, a_8);
                                t = term_m_15;
                                p_7 = t;
                                t = SSL_exit(p_7);
                                t = (ATerm) ATinsert(ATinsert(ATempty, x_26), term_b_21);
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
static ATerm g_8 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_write_term_to_stream_baf(e_33, f_33);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
static ATerm h_8 (ATerm y_101 (ATerm), ATerm l_358, ATerm o_33, ATerm t)
{
  ATerm i_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_358, term_c_21);
  t = e_9(t);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_27, o_33);
  t = y_101(t);
  t = fclose_0_0(t);
  t = o_33;
  return(t);
}
static ATerm i_8 (ATerm o_115 (ATerm), ATerm m_58, ATerm k_58, ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,y_27 = NULL,a_28 = NULL;
  r_27 = t;
  t = o_115(t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_27, m_58, k_58);
  t = m_9(m_27, m_58, k_58, t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_28 = NULL;
        t = term_h_21;
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_27, term_h_21);
        t = l_9(m_27, b_28, t);
        {
          ATerm i_21 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_21;
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
      n_27 = ATgetFirst((ATermList) t);
      q_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_27, term_h_21, (ATerm) ATinsert(CheckATermList(q_27), (ATerm) ATinsert(CheckATermList(n_27), m_58)));
  t = lookup_table_0_1(m_27, t);
  a_28 = t;
  t = term_h_21;
  s_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), (ATerm) ATinsert(CheckATermList(n_27), m_58));
  t_27 = t;
  t = a_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(s_27, t_27, y_27, t);
  t = r_27;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_28 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL,q_8 = NULL;
      n_28 = t;
      t = term_n_21;
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_28, term_n_21);
      t = c_9(n_28, q_8, t);
      h_28 = t;
      t = SSL_mkstemp(h_28);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm s_28 = NULL;
        t = term_o_21;
        s_28 = t;
        t = SSL_perror(s_28);
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
static ATerm p_3 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm u_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,d_29 = NULL;
  t = P__tmpdir_0_0(t);
  a_29 = t;
  t = term_x_21;
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_29, term_x_21);
  t = c_9(a_29, d_29, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_14;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_28, term_f_14);
  t = i_8(p_3, y_28, z_28, t);
  t = SSL_close(u_28);
  t = y_28;
  return(t);
}
static ATerm k_8 (ATerm m_57, ATerm n_57, ATerm t)
{
  t = SSL_access(m_57, n_57);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_29 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_29 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_12);
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_29, (ATerm) ATinsert(ATempty, term_j_12));
      t = k_8(g_29, j_29, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Stream_1))
        {
          m_29 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(m_29, n_29, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  t = read_from_0_0(t);
  t = a_94(t);
  l_29 = t;
  t = xtc_new_file_0_0(t);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_29, l_29);
  t = h_8(q_3, k_29, l_29, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_29);
  return(t);
}
static ATerm m_8 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  q_29 = t;
  {
    ATerm n_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_22, p_22);
        t = l_9(o_22, p_22, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_22 = ATgetFirst((ATermList) t);
            p_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_22);
        {
          ATerm r_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_22, p_22, p_29);
          t = lookup_table_0_1(o_22, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_9(p_22, p_29, r_29, t);
          t = (ATerm) ATmakeAppl(sym__3, o_22, p_22, p_29);
        }
      }
    else
      {
        t = n_22;
        {
          ATerm y_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_22, p_22);
          t = lookup_table_0_1(o_22, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_9(p_22, y_29, t);
          t = (ATerm) ATmakeAppl(sym__2, o_22, p_22);
        }
      }
  }
  t = q_29;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_115 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,d_30 = NULL,e_30 = NULL,g_30 = NULL,h_30 = NULL,l_30 = NULL,m_30 = NULL;
  g_30 = t;
  t = l_115(t);
  e_30 = t;
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL;
        t = term_h_21;
        n_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_30, term_h_21);
        t = l_9(e_30, n_30, t);
        {
          ATerm v_22 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_22;
            }
        }
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_30 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_30, term_h_21, a_30);
  t = lookup_table_0_1(e_30, t);
  m_30 = t;
  t = term_h_21;
  h_30 = t;
  t = m_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(h_30, a_30, l_30, t);
  t = d_30;
  {
    static ATerm s_3 (ATerm t);
    static ATerm s_3 (ATerm t)
    {
      ATerm q_30 = NULL;
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_30, q_30);
      t = m_8(e_30, q_30, t);
      return(t);
    }
    t = map_1_0(s_3, t);
  }
  t = g_30;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_98(t);
      t = u_98(t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = u_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_115 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  v_30 = t;
  t = k_115(t);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_30, term_h_21);
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            ATerm c_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_21;
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_30, term_h_21);
        t = l_9(u_30, l_31, t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = y_22;
        t = (ATerm) ATempty;
      }
  }
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_30, term_h_21, (ATerm) ATinsert(CheckATermList(w_30), (ATerm) ATempty));
  t = lookup_table_0_1(u_30, t);
  a_31 = t;
  t = term_h_21;
  x_30 = t;
  t = (ATerm) ATinsert(CheckATermList(w_30), (ATerm) ATempty);
  y_30 = t;
  t = a_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(x_30, y_30, z_30, t);
  t = v_30;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_32);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = a_32;
      }
  }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm r_31 = NULL;
  static ATerm u_3 (ATerm t);
  static ATerm u_3 (ATerm t)
  {
    ATerm s_31 = NULL;
    s_31 = t;
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_31 = NULL,u_31 = NULL;
          t = term_s_21;
          t_31 = t;
          t = term_h_21;
          u_31 = t;
          t = term_h_23;
          t = l_9(t_31, u_31, t);
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_31 != NULL) && (r_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_31 = ATgetFirst((ATermList) t);
        {
          ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_31;
    t = map_1_0(w_3, t);
    t = s_31;
    t = end_scope_1_0(y_3, t);
    return(t);
  }
  t = begin_scope_1_0(t_3, t);
  t = restore_always_2_0(l_94, u_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm l_10 = NULL,x_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      l_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(l_10);
  a_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_10), term_m_23), a_11), term_j_23);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm d_33 = NULL,g_33 = NULL,l_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Path1_1))
    {
      g_33 = ATgetArgument(t, 0);
      t = g_33;
    }
  else
    {
      ATerm h_10 = NULL,i_10 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          g_33 = ATgetArgument(t, 0);
          l_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_33;
      t = map_1_0(z_3, t);
      t = concat_0_0(t);
      h_10 = t;
      t = (ATerm) ATinsert(CheckATermList(h_10), g_33);
      i_10 = t;
      t = SSL_concat_strings(i_10);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  ATerm c_34 = NULL,e_34 = NULL,f_34 = NULL;
  c_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_34;
      t = h_113(t);
    }
  else
    {
      ATerm x_34 = NULL,y_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_34 = ATgetFirst((ATermList) t);
          f_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_34;
      t = j_113(t);
      x_34 = t;
      t = f_34;
      t = foldr_3_0(h_113, i_113, j_113, t);
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, y_34);
      t = i_113(t);
    }
  return(t);
}
static ATerm n_8 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm p_53, ATerm o_53, ATerm t)
{
  t = g_110(t);
  {
    static ATerm a_4 (ATerm t);
    static ATerm a_4 (ATerm t)
    {
      ATerm z_34 = NULL;
      z_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_53, z_34);
      t = f_110(t);
      return(t);
    }
    t = fetch_1_0(a_4, t);
  }
  t = o_53;
  return(t);
}
static ATerm o_8 (ATerm c_110 (ATerm), ATerm l_53, ATerm k_53, ATerm t)
{
  static ATerm l_36 (ATerm t);
  static ATerm l_36 (ATerm t)
  {
    ATerm b_36 = NULL,c_36 = NULL,i_36 = NULL;
    b_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_36 = ATgetFirst((ATermList) t);
            i_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_36;
              {
                static ATerm c_4 (ATerm t);
                static ATerm c_4 (ATerm t)
                {
                  t = k_53;
                  return(t);
                }
                t = n_8(c_110, c_4, c_36, i_36, t);
              }
              t = l_36(t);
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              {
                ATerm u_11 = NULL,x_11 = NULL,m_5 = NULL;
                t = SSLgetAnnotations(b_36);
                u_11 = t;
                t = i_36;
                t = l_36(t);
                x_11 = t;
                t = (ATerm) ATinsert(CheckATermList(x_11), c_36);
                m_5 = t;
                t = SSLsetAnnotations(m_5, u_11);
              }
            }
        }
      }
    return(t);
  }
  t = l_53;
  t = l_36(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_36 = NULL;
      t = z_111(t);
      r_36 = t;
      t = (ATerm) ATinsert(ATempty, r_36);
      LocalPopChoice(w_23);
    }
  else
    {
      t = u_23;
      {
        ATerm d_12 = NULL,e_12 = NULL;
        static ATerm e_4 (ATerm t);
        static ATerm e_4 (ATerm t)
        {
          t = collect_om_2_0(z_111, a_112, t);
          return(t);
        }
        e_12 = t;
        t = SSL_explode_term(e_12);
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12;
        t = foldr_3_0(d_4, a_112, e_4, t);
      }
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,p_5 = NULL;
  v_36 = t;
  if(match_cons(t, sym_Arg_1))
    {
      u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, u_36);
  p_5 = t;
  t = SSLsetAnnotations(p_5, t_36);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(h_4, w_36, x_36, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_36 = NULL;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      if((y_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  if(match_cons(t, sym__2))
    {
      z_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(z_36, a_37, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm arity_of_template_0_0 (ATerm t)
{
  t = collect_om_2_0(f_4, g_4, t);
  t = foldr_3_0(i_4, j_4, m_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm l_37 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      l_37 = ATgetArgument(t, 0);
      {
        ATerm a_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_37;
  return(t);
}
ATerm mk_key_arity_0_0 (ATerm t)
{
  ATerm d_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_37;
  if(match_cons(t, sym_Path_2))
    {
      g_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
      {
        ATerm k_37 = NULL;
        t = d_37;
        t = map_1_0(n_4, t);
        k_37 = t;
        t = (ATerm) ATinsert(CheckATermList(k_37), g_37);
      }
    }
  else
    {
      ATerm o_37 = NULL;
      if(match_cons(t, sym_Path1_1))
        {
          g_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_37;
      t = arity_of_template_0_0(t);
      o_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_37, (ATerm) ATinsert(ATempty, g_37));
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = debug_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm p_8 (ATerm h_67, ATerm i_67, ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  t = mk_key_arity_0_0(t);
  q_37 = t;
  t = term_o_19;
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, q_37, (ATerm) ATmakeAppl(sym__2, h_67, i_67));
  t = lookup_table_0_1(r_37, t);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_67, i_67);
  s_37 = t;
  t = u_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(q_37, s_37, t_37, t);
  t = h_67;
  t = path_to_string_0_0(t);
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_37, i_67);
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  static ATerm p_38 (ATerm t);
  static ATerm p_38 (ATerm t)
  {
    ATerm l_38 = NULL,m_38 = NULL,o_38 = NULL;
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_100(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
      }
    o_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_38 = ATgetFirst((ATermList) t);
        m_38 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_14 = NULL,h_14 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(o_38);
          c_14 = t;
          t = m_38;
          t = p_38(t);
          h_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_14), l_38);
          t_5 = t;
          t = SSLsetAnnotations(t_5, c_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_38;
      }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm at_last_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  static ATerm s_39 (ATerm t);
  static ATerm s_39 (ATerm t)
  {
    ATerm o_39 = NULL,p_39 = NULL,r_39 = NULL;
    o_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_39 = ATgetFirst((ATermList) t);
        r_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_14 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(o_39);
          z_14 = t;
          t = r_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(r_39), p_39);
          h_6 = t;
          t = SSLsetAnnotations(h_6, z_14);
          t = t_106(t);
          LocalPopChoice(j_24);
        }
      else
        {
          t = h_24;
          {
            ATerm r_15 = NULL,u_15 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(o_39);
            r_15 = t;
            t = r_39;
            t = s_39(t);
            u_15 = t;
            t = (ATerm) ATinsert(CheckATermList(u_15), p_39);
            i_6 = t;
            t = SSLsetAnnotations(i_6, r_15);
          }
        }
    }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_40 = ATgetFirst((ATermList) t);
      c_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_40;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_40;
    }
  else
    {
      t = c_40;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm m_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_24 = ATgetFirst((ATermList) t);
      m_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_40;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_40 = ATgetFirst((ATermList) t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_40;
  t = q_99(t);
  t = j_40;
  t = last_0_0(t);
  t = r_99(t);
  t = j_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_24 = ATgetFirst((ATermList) t);
      k_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_40;
  t = at_last_1_0(y_4, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_19 = ATgetFirst((ATermList) t);
      j_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_19;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = j_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_19 = ATgetFirst((ATermList) t);
      l_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_19;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(l_19), term_u_24);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(l_19), term_v_24);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(l_19), term_a_25);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(l_19), term_d_25);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(l_19), term_g_25);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm a_43 = NULL,d_43 = NULL,e_43 = NULL;
  a_43 = t;
  if(match_cons(t, sym_Arg_1))
    {
      d_43 = ATgetArgument(t, 0);
      {
        ATerm k_16 = NULL,m_16 = NULL,s_6 = NULL;
        t = SSLgetAnnotations(a_43);
        k_16 = t;
        t = SSL_string_to_int(d_43);
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, m_16);
        s_6 = t;
        t = SSLsetAnnotations(s_6, k_16);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          d_43 = ATgetArgument(t, 0);
          e_43 = ATgetArgument(t, 1);
          {
            ATerm w_16 = NULL,h_17 = NULL,i_17 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(a_43);
            w_16 = t;
            t = SSL_string_to_int(d_43);
            h_17 = t;
            t = SSL_string_to_int(e_43);
            i_17 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, h_17, i_17);
            y_6 = t;
            t = SSLsetAnnotations(y_6, w_16);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              d_43 = ATgetArgument(t, 0);
              e_43 = ATgetArgument(t, 1);
              {
                ATerm g_18 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(a_43);
                g_18 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, d_43, e_43);
                z_6 = t;
                t = SSLsetAnnotations(z_6, g_18);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  d_43 = ATgetArgument(t, 0);
                  {
                    ATerm t_18 = NULL,a_19 = NULL,b_19 = NULL,d_19 = NULL,e_19 = NULL,a_7 = NULL;
                    t = SSLgetAnnotations(a_43);
                    t_18 = t;
                    t = SSL_explode_string(d_43);
                    t = unquote_chars_2_0(d_5, e_5, t);
                    e_19 = t;
                    t = SSL_implode_string(e_19);
                    d_19 = t;
                    t = SSL_explode_string(d_19);
                    t = unescape_chars_1_0(f_5, t);
                    b_19 = t;
                    t = SSL_implode_string(b_19);
                    a_19 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, a_19);
                    a_7 = t;
                    t = SSLsetAnnotations(a_7, t_18);
                  }
                }
              else
                {
                  ATerm j_20 = NULL,m_20 = NULL,g_7 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      d_43 = ATgetArgument(t, 0);
                      e_43 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_43);
                  j_20 = t;
                  t = SSL_string_to_int(d_43);
                  m_20 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, m_20, e_43);
                  g_7 = t;
                  t = SSLsetAnnotations(g_7, j_20);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_95 (ATerm), ATerm t)
{
  static ATerm h_5 (ATerm t);
  static ATerm h_5 (ATerm t)
  {
    t = topdown_1_0(i_95, t);
    return(t);
  }
  t = i_95(t);
  t = SRTS_all(h_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  t = topdown_1_0(l_5, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(p_43, q_43, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
    }
  return(t);
}
static ATerm y_8 (ATerm g_67, ATerm t)
{
  t = g_67;
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  static ATerm w_43 (ATerm t);
  static ATerm w_43 (ATerm t)
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_96(t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = SRTS_one(w_43, t);
      }
    return(t);
  }
  t = w_43(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm a_44 = NULL,d_44 = NULL;
  t = term_u_25;
  a_44 = t;
  t = term_w_25;
  d_44 = t;
  t = term_x_25;
  t = l_9(a_44, d_44, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_44 = NULL,h_44 = NULL,i_44 = NULL;
      t = term_b_26;
      t = get_options_0_0(t);
      t = oncetd_1_0(n_5, t);
      t = term_a_21;
      h_44 = t;
      t = (ATerm) ATinsert(ATempty, term_c_26);
      i_44 = t;
      t = SSL_printnl(h_44, i_44);
      t = term_m_15;
      e_44 = t;
      t = SSL_exit(e_44);
      t = (ATerm) ATinsert(ATempty, term_c_26);
      LocalPopChoice(a_26);
    }
  else
    {
      t = y_25;
      {
        ATerm k_44 = NULL,m_44 = NULL;
        t = term_a_21;
        k_44 = t;
        t = (ATerm) ATinsert(ATempty, term_d_26);
        m_44 = t;
        t = SSL_printnl(k_44, m_44);
        t = (ATerm) ATinsert(ATempty, term_d_26);
      }
    }
  return(t);
}
static ATerm k_45 (ATerm b_45, ATerm t)
{
  t = SSL_fclose(b_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_45 = NULL,i_45 = NULL;
  i_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_45 = ATgetArgument(t, 0);
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_45);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            t = k_45(i_45, t);
          }
      }
    }
  else
    {
      t = k_45(i_45, t);
    }
  return(t);
}
static ATerm b_9 (ATerm k_33, ATerm t)
{
  t = SSL_read_term_from_stream(k_33);
  return(t);
}
static ATerm c_9 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
static ATerm d_9 (ATerm y_57, ATerm z_57, ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_fopen(y_57, z_57);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_45);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_45 = NULL;
  t = SSL_stdin_stream();
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_45 = NULL;
  t = SSL_stdout_stream();
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_45 = NULL;
  t = SSL_stderr_stream();
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_45);
  return(t);
}
static ATerm r_47 (ATerm b_46, ATerm t)
{
  ATerm e_46 = NULL;
  t = SSL_explode_term(b_46);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            e_46 = ATgetFirst((ATermList) i_26);
            {
              ATerm j_26 = (ATerm) ATgetNext((ATermList) i_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_46;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_46;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_46;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_46;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_47 (ATerm l_46, ATerm m_46, ATerm o_46, ATerm t)
{
  ATerm p_46 = NULL,s_46 = NULL,u_46 = NULL,x_46 = NULL,r_8 = NULL;
  t = SSLgetAnnotations(o_46);
  u_46 = t;
  t = l_46;
  if(match_cons(t, sym_Path_1))
    {
      x_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_46, m_46);
  r_8 = t;
  t = SSLsetAnnotations(r_8, u_46);
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(p_46, s_46, t);
  return(t);
}
static ATerm z_47 (ATerm z_46, ATerm a_47, ATerm b_47, ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,j_47 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(b_47);
  e_47 = t;
  t = SSL_is_string(z_46);
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_47, a_47);
  s_8 = t;
  t = SSLsetAnnotations(s_8, e_47);
  if(match_cons(t, sym__2))
    {
      c_47 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(c_47, d_47, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,q_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      q_47 = ATgetArgument(t, 1);
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_47(m_47, t);
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm m_26 = t;
              int n_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_47(n_47, q_47, m_47, t);
                  LocalPopChoice(n_26);
                }
              else
                {
                  t = m_26;
                  t = z_47(n_47, q_47, m_47, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_47(m_47, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,t_48 = NULL;
  t_48 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_48, term_r_26);
        t = e_9(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm f_21 = NULL,g_21 = NULL;
          t = term_s_26;
          g_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_26, t_48);
          t = c_9(g_21, t_48, t);
          f_21 = t;
          t = SSL_perror(f_21);
          _fail(t);
        }
      }
  }
  j_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(k_48, t);
  i_48 = t;
  t = j_48;
  t = fclose_0_0(t);
  t = i_48;
  return(t);
}
ATerm debug_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  w_48 = t;
  t = w_101(t);
  x_48 = t;
  t = term_a_21;
  y_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_48), x_48);
  z_48 = t;
  t = SSL_printnl(y_48, z_48);
  t = w_48;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,j_21 = NULL,k_21 = NULL;
  t = if_verbose1_1_0(q_5, t);
  t = ReadFromFile_0_0(t);
  e_49 = t;
  t = SSL_explode_term(e_49);
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            j_21 = ATgetFirst((ATermList) t_26);
            {
              ATerm u_26 = (ATerm) ATgetNext((ATermList) t_26);
              if(((ATgetType(u_26) != AT_LIST) || !(ATisEmpty(u_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_21;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = j_21;
  if(match_cons(t, sym_PP_Table_1))
    {
      d_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(d_49, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = debug_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  t = term_o_19;
  t = table_create_0_0(t);
  t = a_49;
  t = map_1_0(o_5, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_49 = NULL,i_49 = NULL;
      t = term_p_12;
      f_49 = t;
      t = term_z_26;
      i_49 = t;
      t = term_u_27;
      t = l_9(f_49, i_49, t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = w_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_49 = NULL,u_49 = NULL,v_49 = NULL;
      t = term_p_12;
      u_49 = t;
      t = term_x_27;
      v_49 = t;
      t = term_z_27;
      t = l_9(u_49, v_49, t);
      r_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_49);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = term_c_13;
    }
  t = xtc_io_transform_1_0(c_6, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_49 = NULL;
        w_49 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_28 = ATgetFirst((ATermList) t);
                ATerm g_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_49;
          }
        LocalPopChoice(d_28);
        {
          ATerm z_49 = NULL;
          z_49 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, z_49);
        }
      }
    else
      {
        t = c_28;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm o_49 = NULL;
  o_49 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, z_5, t);
  t = read_pp_tables_0_0(t);
  t = o_49;
  t = xtc_temp_files_1_0(b_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,g_50 = NULL;
  b_50 = t;
  t = term_f_14;
  t = whoami_0_0(t);
  c_50 = t;
  t = term_a_21;
  e_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_28), c_50), term_i_28);
  g_50 = t;
  t = SSL_printnl(e_50, g_50);
  t = term_m_15;
  d_50 = t;
  t = SSL_exit(d_50);
  t = b_50;
  return(t);
}
ATerm at_end_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  static ATerm j_51 (ATerm t);
  static ATerm j_51 (ATerm t)
  {
    ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
    i_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_51 = ATgetFirst((ATermList) t);
        h_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_22 = NULL,u_22 = NULL,n_9 = NULL;
          t = SSLgetAnnotations(i_51);
          b_22 = t;
          t = h_51;
          t = j_51(t);
          u_22 = t;
          t = (ATerm) ATinsert(CheckATermList(u_22), g_51);
          n_9 = t;
          t = SSLsetAnnotations(n_9, b_22);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_51;
        t = i_106(t);
      }
    return(t);
  }
  t = j_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,o_50 = NULL;
  j_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_50;
    }
  else
    {
      static ATerm d_6 (ATerm t);
      static ATerm d_6 (ATerm t)
      {
        t = not_null(o_50);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_50 = ATgetFirst((ATermList) t);
          if(((o_50 != NULL) && (o_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_50;
      t = at_end_1_0(d_6, t);
    }
  return(t);
}
static ATerm v_51 (ATerm n_51, ATerm t)
{
  ATerm o_51 = NULL;
  t = SSL_explode_term(n_51);
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_51;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  s_51 = t;
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      r_51 = ATgetArgument(t, 1);
      {
        ATerm m_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_6 (ATerm t);
            static ATerm f_6 (ATerm t)
            {
              t = r_51;
              return(t);
            }
            t = q_51;
            t = at_end_1_0(f_6, t);
            LocalPopChoice(o_28);
          }
        else
          {
            t = m_28;
            t = v_51(s_51, t);
          }
      }
    }
  else
    {
      t = v_51(s_51, t);
    }
  return(t);
}
static ATerm f_9 (ATerm v_19, ATerm u_19, ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
  t = v_19;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_52 = NULL;
        t = term_p_12;
        c_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_12, v_19);
        t = l_9(c_52, v_19, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATempty;
      }
  }
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_19, y_51);
  t = conc_0_0(t);
  x_51 = t;
  t = term_p_12;
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_12, v_19, x_51);
  t = lookup_table_0_1(z_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(v_19, x_51, a_52, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_12, v_19, x_51);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,n_52 = NULL;
  f_52 = t;
  t = term_z_26;
  g_52 = t;
  t = (ATerm) ATinsert(ATempty, f_52);
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_26, (ATerm) ATinsert(ATempty, f_52));
  t = f_9(g_52, n_52, t);
  t = f_52;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, j_6, k_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  if(match_string(t, "-k"))
    {
      t = r_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_52;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  t = SSL_string_to_int(s_52);
  t_52 = t;
  t = term_t_28;
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, t_52);
  t = o_9(u_52, t_52, t);
  t = s_52;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_6, n_6, r_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  if(match_string(t, "-S"))
    {
      t = w_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_52;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_w_28;
  a_53 = t;
  t = term_n_15;
  b_53 = t;
  t = term_b_29;
  t = o_9(a_53, b_53, t);
  t = term_c_29;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_f_29;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,f_53 = NULL;
  c_53 = t;
  t = SSL_string_to_int(c_53);
  d_53 = t;
  t = term_w_28;
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, d_53);
  t = o_9(f_53, d_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_53);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm g_53 = NULL,j_53 = NULL;
  t = term_i_29;
  g_53 = t;
  t = term_f_14;
  j_53 = t;
  t = term_o_29;
  t = o_9(g_53, j_53, t);
  t = term_s_29;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_6, u_6, v_6, t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_7, k_7, m_7, t);
            LocalPopChoice(z_29);
          }
        else
          {
            t = w_29;
            t = Option_3_0(n_7, o_7, x_7, t);
          }
      }
    }
  return(t);
}
static ATerm o_9 (ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  t = term_p_12;
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_12, p_19, q_19);
  t = lookup_table_0_1(m_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(p_19, q_19, n_53, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_12, p_19, q_19);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,y_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
      t = term_f_14;
      t = g_0(t);
      z_53 = t;
      t = term_f_30;
      a_54 = t;
      t = term_i_30;
      b_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_30, term_i_30, z_53);
      t = m_9(a_54, b_54, z_53, t);
      _fail(t);
    }
  else
    {
      ATerm g_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_53 = ATgetFirst((ATermList) t);
          y_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_53;
      t = d_0(t);
      t = term_f_14;
      t = f_0(t);
      g_54 = t;
      t = (ATerm) ATinsert(CheckATermList(y_53), g_54);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm i_54 = NULL;
  i_54 = t;
  if(match_string(t, "-o"))
    {
      t = i_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_54;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  j_54 = t;
  t = term_q_12;
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, j_54);
  t = o_9(k_54, j_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_54);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_8, d_8, e_8, t);
  return(t);
}
static ATerm m_9 (ATerm j_22, ATerm k_22, ATerm i_22, ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,q_54 = NULL,t_54 = NULL,y_54 = NULL;
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_30 = ATgetArgument(t, 0);
            ATerm b_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
        t = l_9(j_22, k_22, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATempty;
      }
  }
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_22, k_22, (ATerm) ATinsert(CheckATermList(n_54), i_22));
  t = lookup_table_0_1(j_22, t);
  y_54 = t;
  t = (ATerm) ATinsert(CheckATermList(n_54), i_22);
  q_54 = t;
  t = y_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(k_22, q_54, t_54, t);
  t = m_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,n_55 = NULL,p_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
      t = term_f_14;
      t = o_0(t);
      q_55 = t;
      t = term_f_30;
      r_55 = t;
      t = term_i_30;
      s_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_30, term_i_30, q_55);
      t = m_9(r_55, s_55, q_55, t);
      _fail(t);
    }
  else
    {
      ATerm x_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_55 = ATgetFirst((ATermList) t);
          k_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_55 = ATgetFirst((ATermList) t);
          p_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_55;
      t = l_0(t);
      t = n_55;
      t = m_0(t);
      x_55 = t;
      t = (ATerm) ATinsert(CheckATermList(p_55), x_55);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm d_56 = NULL;
  d_56 = t;
  if(match_string(t, "-i"))
    {
      t = d_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_56;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm g_56 = NULL,j_56 = NULL;
  g_56 = t;
  t = term_x_27;
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, g_56);
  t = o_9(j_56, g_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_56);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_8, t_8, u_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_56 = NULL,n_56 = NULL,p_56 = NULL,q_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_14;
  t = whoami_0_0(t);
  k_56 = t;
  t = term_a_21;
  p_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_31), k_56);
  q_56 = t;
  t = SSL_printnl(p_56, q_56);
  t = term_m_15;
  n_56 = t;
  t = SSL_exit(n_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  t = term_p_12;
  u_56 = t;
  t = term_e_31;
  v_56 = t;
  t = term_f_31;
  t = l_9(u_56, v_56, t);
  return(t);
}
static ATerm g_9 (ATerm o_34, ATerm p_34, ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_34, p_34);
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = SSL_addr(o_34, p_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,c_57 = NULL;
  y_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_56;
      t = f_113(t);
    }
  else
    {
      ATerm i_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_56 = ATgetFirst((ATermList) t);
          c_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_57;
      t = foldr_2_0(f_113, g_113, t);
      i_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_56, i_57);
      t = g_113(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(x_23, y_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_57 = NULL,r_23 = NULL,t_23 = NULL;
  t = times_0_0(t);
  t_23 = t;
  t = SSL_explode_term(t_23);
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  t = foldr_2_0(v_8, w_8, t);
  o_57 = t;
  t = SSL_TicksToSeconds(o_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_58 = NULL,t_58 = NULL,u_58 = NULL;
  q_58 = t;
  if(match_cons(t, sym__2))
    {
      t_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_58;
        if((t_58 != t))
          {
            _fail(t);
          }
        t = q_58;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_58, u_58);
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              t = SSL_gtr(t_58, u_58);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
        t = term_p_12;
        b_59 = t;
        t = term_w_28;
        c_59 = t;
        t = term_q_31;
        t = l_9(b_59, c_59, t);
        a_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_59, term_m_15);
        t = geq_0_0(t);
        t = y_58;
        t = h_92(t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = y_58;
      }
  }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,h_59 = NULL,i_59 = NULL;
  t = run_time_0_0(t);
  e_59 = t;
  t = term_f_14;
  t = whoami_0_0(t);
  f_59 = t;
  t = term_a_21;
  h_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_31), e_59), term_v_31), f_59);
  i_59 = t;
  t = SSL_printnl(h_59, i_59);
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_31), e_59), term_v_31), f_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_15;
  j_59 = t;
  t = SSL_exit(j_59);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  u_59 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_59;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_59 = ATgetArgument(t, 0);
          {
            ATerm w_24 = NULL,s_9 = NULL;
            t = SSLgetAnnotations(u_59);
            w_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_59);
            s_9 = t;
            t = SSLsetAnnotations(s_9, w_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_59;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_59 = NULL,n_59 = NULL;
      t = term_p_12;
      m_59 = t;
      t = term_z_31;
      n_59 = t;
      t = term_b_32;
      t = l_9(m_59, n_59, t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      t = fetch_1_0(z_8, t);
    }
  t = u_116(t);
  return(t);
}
static ATerm p_9 (ATerm b_27, ATerm c_27, ATerm d_27, ATerm t)
{
  ATerm w_59 = NULL;
  t = SSL_hashtable_put(d_27, b_27, c_27);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_23, ATerm t)
{
  ATerm k_60 = NULL;
  t = table_hashtable_0_0(t);
  k_60 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL;
        t = k_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_9(v_23, n_25, t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        {
          ATerm e_26 = NULL;
          t = v_23;
          t = table_create_0_0(t);
          t = k_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_9(v_23, e_26, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm o_60 = NULL;
  t = SSL_hashtable_create(j_27, k_27);
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,t_60 = NULL,u_60 = NULL;
  p_60 = t;
  t = term_e_32;
  t_60 = t;
  t = term_f_32;
  u_60 = t;
  t = p_60;
  t = new_hashtable_0_2(t_60, u_60, t);
  q_60 = t;
  t = p_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(p_60, q_60, r_60, t);
  t = p_60;
  return(t);
}
static ATerm i_9 (ATerm g_27, ATerm h_27, ATerm t)
{
  ATerm v_60 = NULL;
  t = SSL_hashtable_remove(h_27, g_27);
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_60);
  return(t);
}
static ATerm j_9 (ATerm l_27, ATerm t)
{
  ATerm w_60 = NULL;
  t = SSL_hashtable_destroy(l_27);
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_60 = NULL;
  t = SSL_table_hashtable();
  x_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  y_60 = t;
  t = table_hashtable_0_0(t);
  z_60 = t;
  t = lookup_table_0_1(y_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_9(b_61, t);
  t = z_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(y_60, a_61, t);
  t = y_60;
  return(t);
}
ATerm map_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm q_61 (ATerm t);
  static ATerm q_61 (ATerm t)
  {
    ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
    n_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_61;
      }
    else
      {
        ATerm q_26 = NULL,o_27 = NULL,p_27 = NULL,u_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_61 = ATgetFirst((ATermList) t);
            p_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_61);
        q_26 = t;
        t = o_61;
        t = r_105(t);
        o_27 = t;
        t = p_61;
        t = q_61(t);
        p_27 = t;
        t = (ATerm) ATinsert(CheckATermList(p_27), o_27);
        u_9 = t;
        t = SSLsetAnnotations(u_9, q_26);
      }
    return(t);
  }
  t = q_61(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_61 = ATgetFirst((ATermList) t);
      u_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_61 = NULL,z_61 = NULL;
        static ATerm a_9 (ATerm t);
        static ATerm a_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), not_null(z_61));
          return(t);
        }
        t = u_61;
        t = j_0(t);
        if(((y_61 != NULL) && (y_61 != t)))
          _fail(t);
        else
          y_61 = t;
        t = t_61;
        t = h_0(t);
        if(((z_61 != NULL) && (z_61 != t)))
          _fail(t);
        else
          z_61 = t;
        t = u_61;
        t = reverse_acc_2_0(h_0, a_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_14;
      t = j_0(t);
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,x_9 = NULL;
  h_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_62);
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_62);
  x_9 = t;
  t = SSLsetAnnotations(x_9, f_62);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm j_62 = NULL;
  j_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_62), term_g_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_62 = NULL,e_62 = NULL;
      t = term_p_12;
      d_62 = t;
      t = term_e_31;
      e_62 = t;
      t = term_f_31;
      t = l_9(d_62, e_62, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = fetch_1_0(h_9, t);
    }
  t = term_j_32;
  t = echo_0_0(t);
  t = term_f_30;
  b_62 = t;
  t = term_i_30;
  c_62 = t;
  t = term_k_32;
  t = l_9(b_62, c_62, t);
  t = reverse_acc_2_0(_id, k_9, t);
  t = map_1_0(r_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  static ATerm g_63 (ATerm t);
  static ATerm g_63 (ATerm t)
  {
    ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
    d_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_63 = ATgetFirst((ATermList) t);
        f_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_32 = t;
      int m_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_28 = NULL,j_28 = NULL,a_10 = NULL;
          t = SSLgetAnnotations(d_63);
          e_28 = t;
          t = e_63;
          t = b_106(t);
          j_28 = t;
          t = (ATerm) ATinsert(CheckATermList(f_63), j_28);
          a_10 = t;
          t = SSLsetAnnotations(a_10, e_28);
          LocalPopChoice(m_32);
        }
      else
        {
          t = l_32;
          {
            ATerm x_28 = NULL,e_29 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(d_63);
            x_28 = t;
            t = f_63;
            t = g_63(t);
            e_29 = t;
            t = (ATerm) ATinsert(CheckATermList(e_29), e_63);
            b_10 = t;
            t = SSLsetAnnotations(b_10, x_28);
          }
        }
    }
    return(t);
  }
  t = g_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  k_63 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_32 = ATgetFirst((ATermList) t);
                ATerm s_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_63;
          }
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATinsert(ATempty, k_63);
      }
  }
  l_63 = t;
  t = term_w_12;
  m_63 = t;
  t = SSL_printnl(m_63, l_63);
  t = k_63;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  t = term_p_12;
  q_63 = t;
  t = term_e_31;
  r_63 = t;
  t = term_f_31;
  t = l_9(q_63, r_63, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_9 (ATerm e_27, ATerm f_27, ATerm t)
{
  t = SSL_hashtable_get(f_27, e_27);
  return(t);
}
static ATerm l_9 (ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm s_63 = NULL;
  t = lookup_table_0_1(c_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(d_24, s_63, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  t = term_t_32;
  u_63 = t;
  t = term_f_14;
  v_63 = t;
  t = term_u_32;
  t = o_9(u_63, v_63, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
  t = term_t_32;
  y_63 = t;
  t = term_f_14;
  z_63 = t;
  t = term_u_32;
  t = o_9(y_63, z_63, t);
  t = term_w_32;
  w_63 = t;
  t = term_f_14;
  x_63 = t;
  t = term_x_32;
  t = o_9(w_63, x_63, t);
  t = term_y_32;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_9, v_9, w_9, t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = Option_3_0(y_9, z_9, c_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,e_10 = NULL;
  f_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_64 = ATgetFirst((ATermList) t);
      c_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_64);
  a_64 = t;
  t = b_64;
  t = p_86(t);
  d_64 = t;
  t = c_64;
  t = q_86(t);
  e_64 = t;
  t = (ATerm) ATinsert(CheckATermList(e_64), d_64);
  e_10 = t;
  t = SSLsetAnnotations(e_10, a_64);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,p_64 = NULL,q_64 = NULL,j_10 = NULL;
  k_64 = t;
  {
    ATerm c_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = s_118(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = c_33;
      }
  }
  t = k_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_64 = ATgetFirst((ATermList) t);
      n_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_64);
  l_64 = t;
  t = term_e_31;
  q_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, m_64);
  t = o_9(q_64, m_64, t);
  t = n_64;
  {
    static ATerm a_65 (ATerm t);
    static ATerm a_65 (ATerm t)
    {
      ATerm j_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_64 = NULL;
              t_64 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_64;
              LocalPopChoice(p_33);
            }
          else
            {
              t = n_33;
              t = s_118(t);
              t = Cons_2_0(_id, a_65, t);
            }
          LocalPopChoice(m_33);
        }
      else
        {
          t = j_33;
          {
            ATerm w_64 = NULL,x_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_64 = ATgetFirst((ATermList) t);
                x_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_64), (ATerm) ATmakeAppl(sym_Undefined_1, w_64));
          }
        }
      return(t);
    }
    t = a_65(t);
  }
  p_64 = t;
  t = (ATerm) ATinsert(CheckATermList(p_64), (ATerm) ATmakeAppl(sym_Program_1, m_64));
  j_10 = t;
  t = SSLsetAnnotations(j_10, l_64);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  if(match_string(t, "--help"))
    {
      t = n_65;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_65;
        }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  t = term_z_31;
  o_65 = t;
  t = term_f_14;
  p_65 = t;
  t = term_q_33;
  t = o_9(o_65, p_65, t);
  t = term_r_33;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_s_33;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_118 (ATerm), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  h_65 = t;
  t = term_f_30;
  i_65 = t;
  t = term_t_33;
  t = lookup_table_0_1(i_65, t);
  m_65 = t;
  t = term_i_30;
  j_65 = t;
  t = (ATerm) ATempty;
  k_65 = t;
  t = m_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(j_65, k_65, l_65, t);
  t = h_65;
  {
    static ATerm d_10 (ATerm t);
    static ATerm d_10 (ATerm t)
    {
      ATerm u_33 = t;
      int v_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_118(t);
          LocalPopChoice(v_33);
        }
      else
        {
          t = u_33;
          {
            ATerm w_33 = t;
            int x_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_10, g_10, k_10, t);
                LocalPopChoice(x_33);
              }
            else
              {
                t = w_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_10, t);
  }
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_66 = NULL;
        a_66 = t;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_29 = NULL;
              t = a_66;
              {
                ATerm d_34 = t;
                int g_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_30 = NULL,c_30 = NULL;
                    t = term_p_12;
                    b_30 = t;
                    t = term_z_31;
                    c_30 = t;
                    t = term_b_32;
                    t = l_9(b_30, c_30, t);
                    LocalPopChoice(g_34);
                  }
                else
                  {
                    t = d_34;
                    t = fetch_1_0(n_10, t);
                  }
              }
              t = a_66;
              t = default_system_usage_0_0(t);
              t = term_n_15;
              x_29 = t;
              t = SSL_exit(x_29);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              {
                ATerm k_30 = NULL,o_30 = NULL,p_30 = NULL;
                t = term_p_12;
                o_30 = t;
                t = term_t_32;
                p_30 = t;
                t = term_h_34;
                t = l_9(o_30, p_30, t);
                t = a_66;
                t = default_system_about_0_0(t);
                t = term_n_15;
                k_30 = t;
                t = SSL_exit(k_30);
              }
            }
        }
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
              static ATerm o_10 (ATerm t);
              static ATerm o_10 (ATerm t)
              {
                ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,m_10 = NULL;
                g_66 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_66 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_66);
                e_66 = t;
                t = f_66;
                if(((f_65 != NULL) && (f_65 != t)))
                  _fail(t);
                else
                  f_65 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_66);
                m_10 = t;
                t = SSLsetAnnotations(m_10, e_66);
                return(t);
              }
              t = fetch_1_0(o_10, t);
              t = term_a_21;
              c_66 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_65)), term_k_34);
              d_66 = t;
              t = SSL_printnl(c_66, d_66);
              t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_65)), term_k_34));
              t = default_system_usage_0_0(t);
              t = term_m_15;
              b_66 = t;
              t = SSL_exit(b_66);
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
            }
        }
      }
  }
  g_65 = t;
  t = term_f_30;
  t = table_destroy_0_0(t);
  t = g_65;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  t = parse_options_1_0(w_116, t);
  l_66 = t;
  t = term_u_25;
  t = table_create_0_0(t);
  t = term_u_25;
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_25, term_w_25, l_66);
  t = lookup_table_0_1(m_66, t);
  p_66 = t;
  t = term_w_25;
  n_66 = t;
  t = p_66;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(n_66, l_66, o_66, t);
  t = l_66;
  t = y_116(t);
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_116, t);
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        {
          ATerm n_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_116(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_34);
            }
          else
            {
              t = n_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm t_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_34);
          }
        else
          {
            t = t_34;
            {
              ATerm a_35 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_10, v_10, w_10, t);
                  LocalPopChoice(b_35);
                }
              else
                {
                  t = a_35;
                  {
                    ATerm c_35 = t;
                    int d_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_35);
                      }
                    else
                      {
                        t = c_35;
                        {
                          ATerm e_35 = t;
                          int f_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(f_35);
                            }
                          else
                            {
                              t = e_35;
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
static ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL;
  t = term_g_35;
  r_66 = t;
  t = term_f_14;
  s_66 = t;
  t = term_h_35;
  t = o_9(r_66, s_66, t);
  t = term_i_35;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_10, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
