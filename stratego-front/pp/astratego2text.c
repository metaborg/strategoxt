#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_CUT_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_m_23;
ATerm term_y_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_d_13;
ATerm term_b_12;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_n_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_o_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_z_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_s_6;
void init_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_a_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_z_7);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_p_10);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_f_11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_f_11);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_f_11);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_f_11);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, (ATerm) ATempty);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm t_64 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm c_79 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm b_79 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm d_79 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm));
ATerm union_1 (ATerm, ATerm j_68 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm x_78 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm s_64 (ATerm));
ATerm assert_1 (ATerm, ATerm g_64 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_63 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm k_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_64 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm c_64 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm n_64 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm o_64 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm crush_2 (ATerm, ATerm s_68 (ATerm), ATerm t_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_78 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_58 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_58 (ATerm));
ATerm Program_1 (ATerm, ATerm b_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_63 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_45 (ATerm), ATerm q_45 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_63 (ATerm));
ATerm map_1 (ATerm, ATerm q_72 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_58 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_58 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm xtc_iowrap_1 (ATerm, ATerm p_64 (ATerm));
ATerm astratego2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, t_64, a_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_0 = NULL;
  b_0 = t;
  t = SSL_table_keys(not_null(b_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm i_1 = NULL;
  i_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm b_2 = NULL;
        ATerm d_2 = NULL;
        b_2 = t;
        {
          ATerm h_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_1), not_null(b_2));
          {
            t = table_get_0(t);
            {
              h_2 = t;
              if(((d_2 != NULL) && (d_2 != h_2)))
                _fail(h_2);
              else
                d_2 = h_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_2), not_null(d_2));
        }
        return(t);
      }
      t = map_1(t, n_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    ATerm q_6;
    q_6 = t;
    {
      ATerm m_2 = NULL;
      ATerm n_2 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          n_2 = t;
          if(((m_2 != NULL) && (m_2 != n_2)))
            _fail(n_2);
          else
            m_2 = n_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_2), term_v_6);
        t = geq_0(t);
      }
    }
    t = q_6;
    t = c_79(t);
    return(t);
  }
  t = try_1(t, o_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_6;
  w_6 = t;
  {
    ATerm q_2 = NULL;
    ATerm r_2 = NULL;
    r_2 = t;
    if(((q_2 != NULL) && (q_2 != r_2)))
      _fail(r_2);
    else
      q_2 = r_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(q_2));
      t = printnl_0(t);
    }
  }
  t = w_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm x_2 = NULL;
  ATerm z_2 = NULL,a_3 = NULL;
  x_2 = t;
  {
    ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_2)));
    {
      t = table_get_0(t);
      {
        b_3 = t;
        v_2 :
        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
          {
            c_3 = ATgetFirst((ATermList) b_3);
            f_3 = (ATerm) ATgetNext((ATermList) b_3);
            w_2 :
            if(match_cons(c_3, sym__2))
              {
                d_3 = ATgetArgument(c_3, 0);
                e_3 = ATgetArgument(c_3, 1);
                {
                  if(((z_2 != NULL) && (z_2 != d_3)))
                    _fail(d_3);
                  else
                    z_2 = d_3;
                  if(((a_3 != NULL) && (a_3 != e_3)))
                    _fail(e_3);
                  else
                    a_3 = e_3;
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(a_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      {
        ATerm r_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_3)));
        {
          t = table_get_0(t);
          {
            ATerm p_0 (ATerm t)
            {
              ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
              s_3 = t;
              k_3 :
              if(match_cons(s_3, sym__2))
                {
                  t_3 = ATgetArgument(s_3, 0);
                  u_3 = ATgetArgument(s_3, 1);
                  {
                    if(((o_3 != NULL) && (o_3 != t_3)))
                      _fail(t_3);
                    else
                      o_3 = t_3;
                    if(((r_3 != NULL) && (r_3 != u_3)))
                      _fail(u_3);
                    else
                      r_3 = u_3;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, p_0);
          }
        }
        t = not_null(r_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = term_b_7;
    {
      t = table_get_0(t);
      {
        ATerm r_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, r_0);
      }
    }
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm y_3 = NULL;
      ATerm z_3 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          z_3 = t;
          if(((y_3 != NULL) && (y_3 != z_3)))
            _fail(z_3);
          else
            y_3 = z_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), term_f_7);
        t = geq_0(t);
      }
    }
    t = e_7;
    t = b_79(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm h_7;
    h_7 = t;
    {
      ATerm c_4 = NULL;
      ATerm d_4 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          d_4 = t;
          if(((c_4 != NULL) && (c_4 != d_4)))
            _fail(d_4);
          else
            c_4 = d_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), term_i_7);
        t = geq_0(t);
      }
    }
    t = h_7;
    t = d_79(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  g_4 :
  if(match_cons(h_4, sym__2))
    {
      i_4 = ATgetArgument(h_4, 0);
      j_4 = ATgetArgument(h_4, 1);
      if(((i_4 != NULL) && (i_4 != j_4)))
        _fail(j_4);
      else
        i_4 = j_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm))
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  o_4 :
  if(((ATgetType(p_4) == AT_LIST) && !(ATisEmpty(p_4))))
    {
      q_4 = ATgetFirst((ATermList) p_4);
      r_4 = (ATerm) ATgetNext((ATermList) p_4);
      {
        t = i_68(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm u_4 = NULL;
            u_4 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), not_null(u_4));
              t = h_68(t);
            }
            return(t);
          }
          t = fetch_1(t, u_0);
        }
        t = not_null(r_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym__2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      {
        t = not_null(b_5);
        {
          ATerm g_5 (ATerm t)
          {
            ATerm j_7 = t;
            int k_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_5);
                LocalPopChoice(k_7);
              }
            else
              {
                t = j_7;
                {
                  ATerm l_7 = t;
                  int m_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_0 (ATerm t)
                      {
                        t = not_null(c_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_68, v_0);
                      t = g_5(t);
                      LocalPopChoice(m_7);
                    }
                  else
                    {
                      t = l_7;
                      t = Cons_2(t, _id, g_5);
                    }
                }
              }
            return(t);
          }
          t = g_5(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym__3))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      o_5 = ATgetArgument(l_5, 2);
      {
        ATerm s_7;
        s_7 = t;
        {
          ATerm s_5 = NULL;
          ATerm t_5 = NULL,v_5 = NULL;
          ATerm u_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), not_null(n_5));
          {
            ATerm v_7 = t;
            int w_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(w_7);
              }
            else
              {
                t = v_7;
                t = (ATerm) ATempty;
              }
            {
              u_5 = t;
              if(((t_5 != NULL) && (t_5 != u_5)))
                _fail(u_5);
              else
                t_5 = u_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(o_5));
            {
              t = union_0(t);
              {
                v_5 = t;
                if(((s_5 != NULL) && (s_5 != v_5)))
                  _fail(v_5);
                else
                  s_5 = v_5;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_5), not_null(n_5), not_null(s_5));
            t = set_0(t);
          }
        }
        t = s_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      {
        t = not_null(f_6);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
            i_6 = t;
            b_6 :
            if(match_cons(i_6, sym__2))
              {
                j_6 = ATgetArgument(i_6, 0);
                k_6 = ATgetArgument(i_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_6), not_null(j_6), not_null(k_6));
                  t = x_78(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm r_6 = NULL;
  ATerm t_6 = NULL;
  r_6 = t;
  {
    ATerm x_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(r_6)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_7;
      }
    {
      ATerm y_7;
      y_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_6, term_z_7, (ATerm) ATinsert(ATempty, not_null(r_6)));
        t = table_put_0(t);
      }
      t = y_7;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            t = term_e_8;
            return(t);
          }
          t = debug_1(t, y_0);
          return(t);
        }
        t = if_verbose4_1(t, x_0);
        {
          ATerm f_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(g_8);
            }
          else
            {
              t = f_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                t = term_h_8;
                return(t);
              }
              t = say_1(t, a_1);
              return(t);
            }
            t = if_verbose6_1(t, z_0);
            {
              ATerm u_6 = NULL;
              u_6 = t;
              if(((t_6 != NULL) && (t_6 != u_6)))
                _fail(u_6);
              else
                t_6 = u_6;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_z_6, not_null(t_6));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm c_1 (ATerm t)
                      {
                        t = term_i_8;
                        return(t);
                      }
                      t = say_1(t, c_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, b_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_z_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(r_6)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm d_1 (ATerm t)
                          {
                            ATerm e_1 (ATerm t)
                            {
                              t = term_h_8;
                              return(t);
                            }
                            t = say_1(t, e_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, d_1);
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
  }
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = SSL_getenv(not_null(y_6));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_8;
      t = get_config_0(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = k_8;
      {
        ATerm p_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_8;
            t = getenv_0(t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = p_8;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = term_w_8;
      return(t);
    }
    t = debug_1(t, g_1);
    return(t);
  }
  t = if_verbose5_1(t, f_1);
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm y_8 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_e_9;
          t = table_get_0(t);
          LocalPopChoice(d_9);
        }
      else
        {
          t = y_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = x_8;
    {
      ATerm h_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_f_9;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = term_n_9;
          return(t);
        }
        t = debug_1(t, l_1);
        return(t);
      }
      t = if_verbose5_1(t, k_1);
      {
        t = xtc_load_0(t);
        {
          ATerm o_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(w_9);
            }
          else
            {
              t = o_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = term_n_9;
                return(t);
              }
              t = debug_1(t, n_1);
              return(t);
            }
            t = if_verbose5_1(t, m_1);
          }
        }
      }
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm c_7 = NULL;
        ATerm d_7 = NULL;
        d_7 = t;
        if(((c_7 != NULL) && (c_7 != d_7)))
          _fail(d_7);
        else
          c_7 = d_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), not_null(c_7)), term_x_9);
          {
            t = error_0(t);
            {
              ATerm o_1 (ATerm t)
              {
                t = term_z_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      t = term_z_9;
                      return(t);
                    }
                    t = debug_1(t, p_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, o_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  t = SSL_ReadFromFile(not_null(g_7));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_stdin_0))
    {
      ATerm q_7 = NULL;
      ATerm r_7 = NULL;
      t = term_b_10;
      {
        t = ReadFromFile_0(t);
        {
          r_7 = t;
          if(((q_7 != NULL) && (q_7 != r_7)))
            _fail(r_7);
          else
            q_7 = r_7;
        }
      }
      t = not_null(q_7);
    }
  else
    {
      if(match_cons(o_7, sym_FILE_1))
        {
          p_7 = ATgetArgument(o_7, 0);
          {
            ATerm t_7 = NULL;
            ATerm u_7 = NULL;
            t = not_null(p_7);
            {
              t = ReadFromFile_0(t);
              {
                u_7 = t;
                if(((t_7 != NULL) && (t_7 != u_7)))
                  _fail(u_7);
                else
                  t_7 = u_7;
              }
            }
            t = not_null(t_7);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      t = SSL_WriteToBinaryFile(not_null(c_8), not_null(d_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm j_8 = NULL;
  ATerm l_8 = NULL;
  j_8 = t;
  {
    ATerm m_8 = NULL;
    t = xtc_new_file_0(t);
    {
      m_8 = t;
      {
        if(((l_8 != NULL) && (l_8 != m_8)))
          _fail(m_8);
        else
          l_8 = m_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), not_null(j_8));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, b_65, c_65);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym__2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      t = SSL_call(not_null(s_8), not_null(t_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm z_8 = NULL;
  ATerm c_10;
  c_10 = t;
  {
    ATerm a_9 = NULL;
    t = s_64(t);
    {
      t = xtc_find_warning_0(t);
      {
        a_9 = t;
        if(((z_8 != NULL) && (z_8 != a_9)))
          _fail(a_9);
        else
          z_8 = a_9;
      }
    }
  }
  t = c_10;
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm b_9 = NULL;
      ATerm c_9 = NULL;
      c_9 = t;
      if(((b_9 != NULL) && (b_9 != c_9)))
        _fail(c_9);
      else
        b_9 = c_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(b_9));
        t = call_0(t);
      }
    }
    t = l_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym__2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
        ATerm m_10;
        m_10 = t;
        {
          ATerm s_9 = NULL;
          ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
          t = g_64(t);
          {
            s_9 = t;
            {
              if(((p_9 != NULL) && (p_9 != s_9)))
                _fail(s_9);
              else
                p_9 = s_9;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), not_null(l_9), not_null(m_9));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_10 = t;
                    int o_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), term_p_10);
                        t = table_get_0(t);
                        LocalPopChoice(o_10);
                      }
                    else
                      {
                        t = n_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_9 = t;
                      i_9 :
                      if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                        {
                          u_9 = ATgetFirst((ATermList) t_9);
                          v_9 = (ATerm) ATgetNext((ATermList) t_9);
                          {
                            if(((q_9 != NULL) && (q_9 != u_9)))
                              _fail(u_9);
                            else
                              q_9 = u_9;
                            {
                              if(((r_9 != NULL) && (r_9 != v_9)))
                                _fail(v_9);
                              else
                                r_9 = v_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), term_p_10, (ATerm) ATinsert(CheckATermList(not_null(r_9)), (ATerm) ATinsert(CheckATermList(not_null(q_9)), not_null(l_9))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_63 (ATerm))
{
  ATerm r_10;
  r_10 = t;
  {
    t = q_63(t);
    {
      ATerm q_1 (ATerm t)
      {
        t = term_u_10;
        return(t);
      }
      t = debug_1(t, q_1);
    }
  }
  t = r_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
      f_10 = t;
      a_10 :
      if(match_cons(f_10, sym__2))
        {
          g_10 = ATgetArgument(f_10, 0);
          h_10 = ATgetArgument(f_10, 1);
          {
            if(((e_10 != NULL) && (e_10 != g_10)))
              _fail(g_10);
            else
              e_10 = g_10;
            if(((d_10 != NULL) && (d_10 != h_10)))
              _fail(h_10);
            else
              d_10 = h_10;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_10);
      t = SSL_open_file(not_null(e_10), not_null(d_10));
    }
  else
    {
      t = v_10;
      {
        ATerm i_10 = NULL;
        ATerm j_10 = NULL;
        ATerm r_1 (ATerm t)
        {
          t = term_z_10;
          return(t);
        }
        t = obsolete_1(t, r_1);
        {
          i_10 = t;
          {
            if(((e_10 != NULL) && (e_10 != i_10)))
              _fail(i_10);
            else
              e_10 = i_10;
            {
              ATerm a_11;
              a_11 = t;
              {
                ATerm k_10 = NULL;
                t = term_b_11;
                {
                  k_10 = t;
                  if(((j_10 != NULL) && (j_10 != k_10)))
                    _fail(k_10);
                  else
                    j_10 = k_10;
                }
              }
              t = a_11;
              t = SSL_open_file(not_null(e_10), not_null(j_10));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_10 = NULL;
  ATerm s_10 = NULL;
  q_10 = t;
  {
    ATerm d_11;
    d_11 = t;
    {
      ATerm t_10 = NULL;
      t = term_e_11;
      {
        t_10 = t;
        if(((s_10 != NULL) && (s_10 != t_10)))
          _fail(t_10);
        else
          s_10 = t_10;
      }
    }
    t = d_11;
    {
      t = SSL_open_file(not_null(q_10), not_null(s_10));
      t = SSL_close_file(not_null(q_10));
    }
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm x_10 = NULL;
  ATerm y_10 = NULL;
  t = term_f_11;
  {
    t = new_0(t);
    {
      y_10 = t;
      if(((x_10 != NULL) && (x_10 != y_10)))
        _fail(y_10);
      else
        x_10 = y_10;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_g_11);
    {
      t = conc_strings_0(t);
      {
        ATerm s_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, s_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm c_11 = NULL;
  t = new_file_0(t);
  {
    c_11 = t;
    {
      ATerm h_11;
      h_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_b_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_f_11);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_i_11;
                return(t);
              }
              t = assert_1(t, t_1);
            }
          }
        }
      }
      t = h_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_stdin_0))
    {
      ATerm o_11 = NULL;
      ATerm p_11 = NULL;
      ATerm q_11 = NULL;
      t = xtc_new_file_0(t);
      {
        p_11 = t;
        {
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
          {
            ATerm r_11 = NULL;
            t = m_0(t);
            {
              r_11 = t;
              if(((q_11 != NULL) && (q_11 != r_11)))
                _fail(r_11);
              else
                q_11 = r_11;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_11)), term_j_11));
              {
                t = conc_0(t);
                t = xtc_command_1(t, l_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_11));
    }
  else
    {
      if(match_cons(m_11, sym_FILE_1))
        {
          n_11 = ATgetArgument(m_11, 0);
          {
            ATerm t_11 = NULL;
            ATerm u_11 = NULL;
            t = not_null(n_11);
            {
              ATerm v_11 = NULL;
              t = xtc_new_file_0(t);
              {
                u_11 = t;
                {
                  if(((t_11 != NULL) && (t_11 != u_11)))
                    _fail(u_11);
                  else
                    t_11 = u_11;
                  {
                    ATerm w_11 = NULL;
                    t = m_0(t);
                    {
                      w_11 = t;
                      if(((v_11 != NULL) && (v_11 != w_11)))
                        _fail(w_11);
                      else
                        v_11 = w_11;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_11)), term_j_11), not_null(n_11)), term_k_11));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, l_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_11));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm s_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, u_64, v_64);
      LocalPopChoice(x_11);
    }
  else
    {
      t = s_11;
      t = xtc_transform_term_2(t, u_64, v_64);
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      t = SSL_rename(not_null(g_12), not_null(h_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_stdout_0))
    {
      ATerm r_12 = NULL,t_12 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(p_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
      }
      t = y_11;
      {
        ATerm u_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(r_12));
        {
          u_12 = t;
          if(((t_12 != NULL) && (t_12 != u_12)))
            _fail(u_12);
          else
            t_12 = u_12;
        }
        t = not_null(t_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      t = SSL_copy(not_null(b_13), not_null(c_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym_FILE_1))
    {
      n_13 = ATgetArgument(m_13, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_13 = NULL;
            t = k_0(t);
            {
              p_13 = t;
              j_13 :
              if(match_cons(p_13, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_13), term_b_12);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(n_13);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_b_12;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm r_13 = NULL;
              ATerm s_13 = NULL;
              t = k_0(t);
              {
                s_13 = t;
                {
                  if(((r_13 != NULL) && (r_13 != s_13)))
                    _fail(s_13);
                  else
                    r_13 = s_13;
                  {
                    ATerm c_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = c_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_13), not_null(r_13));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_13));
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
    {
      a_14 = ATgetFirst((ATermList) z_13);
      b_14 = (ATerm) ATgetNext((ATermList) z_13);
      t = not_null(b_14);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm d_12;
        d_12 = t;
        {
          ATerm n_14 = NULL;
          ATerm o_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(k_14));
          {
            ATerm i_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(j_12);
              }
            else
              {
                t = i_12;
                t = (ATerm) ATempty;
              }
            {
              o_14 = t;
              if(((n_14 != NULL) && (n_14 != o_14)))
                _fail(o_14);
              else
                n_14 = o_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_14), not_null(k_14), not_null(n_14));
            t = table_put_0(t);
          }
        }
        t = d_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  ATerm k_12;
  k_12 = t;
  {
    ATerm y_14 = NULL;
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
    t = d_64(t);
    {
      y_14 = t;
      {
        if(((x_14 != NULL) && (x_14 != y_14)))
          _fail(y_14);
        else
          x_14 = y_14;
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), term_p_10);
              t = table_get_0(t);
              LocalPopChoice(m_12);
            }
          else
            {
              t = l_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_14 = t;
            u_14 :
            if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
              {
                a_15 = ATgetFirst((ATermList) z_14);
                b_15 = (ATerm) ATgetNext((ATermList) z_14);
                {
                  if(((w_14 != NULL) && (w_14 != a_15)))
                    _fail(a_15);
                  else
                    w_14 = a_15;
                  {
                    if(((v_14 != NULL) && (v_14 != b_15)))
                      _fail(b_15);
                    else
                      v_14 = b_15;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_14), term_p_10, not_null(v_14));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(w_14);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm c_15 = NULL;
                              c_15 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), not_null(c_15));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, u_1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = k_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_remove(not_null(i_15));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm n_15 = NULL;
  ATerm n_12;
  n_12 = t;
  {
    ATerm o_15 = NULL;
    ATerm p_15 = NULL;
    t = c_64(t);
    {
      o_15 = t;
      {
        if(((n_15 != NULL) && (n_15 != o_15)))
          _fail(o_15);
        else
          n_15 = o_15;
        {
          ATerm q_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), term_p_10);
          {
            ATerm q_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_12);
              }
            else
              {
                t = q_12;
                t = (ATerm) ATempty;
              }
            {
              q_15 = t;
              if(((p_15 != NULL) && (p_15 != q_15)))
                _fail(q_15);
              else
                p_15 = q_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_15), term_p_10, (ATerm) ATinsert(CheckATermList(not_null(p_15)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  ATerm v_1 (ATerm t)
  {
    t = term_i_11;
    return(t);
  }
  t = begin_scope_1(t, v_1);
  {
    t = n_64(t);
    {
      ATerm w_12;
      w_12 = t;
      {
        ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_13;
            t = table_get_0(t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          x_15 = t;
          u_15 :
          if(((ATgetType(x_15) == AT_LIST) && !(ATisEmpty(x_15))))
            {
              y_15 = ATgetFirst((ATermList) x_15);
              z_15 = (ATerm) ATgetNext((ATermList) x_15);
              {
                if(((w_15 != NULL) && (w_15 != y_15)))
                  _fail(y_15);
                else
                  w_15 = y_15;
                {
                  if(((v_15 != NULL) && (v_15 != z_15)))
                    _fail(z_15);
                  else
                    v_15 = z_15;
                  {
                    t = not_null(w_15);
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, w_1);
                    }
                  }
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      }
      t = w_12;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_i_11;
          return(t);
        }
        t = end_scope_1(t, x_1);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_16 = NULL;
        ATerm j_16 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            j_16 = t;
            if(((i_16 != NULL) && (i_16 != j_16)))
              _fail(j_16);
            else
              i_16 = j_16;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_16));
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = term_b_10;
      }
    {
      t = o_64(t);
      {
        ATerm z_1 (ATerm t)
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_j_11;
              t = get_config_0(t);
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              t = term_b_12;
            }
          return(t);
        }
        t = rename_to_1(t, z_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, y_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  t = SSL_string_to_int(not_null(m_16));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  u_16 = t;
  s_16 :
  if(match_string(u_16, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
        {
          v_16 = ATgetFirst((ATermList) u_16);
          w_16 = (ATerm) ATgetNext((ATermList) u_16);
          t_16 :
          if(((ATgetType(w_16) == AT_LIST) && !(ATisEmpty(w_16))))
            {
              x_16 = ATgetFirst((ATermList) w_16);
              y_16 = (ATerm) ATgetNext((ATermList) w_16);
              {
                ATerm c_17 = NULL;
                ATerm i_13;
                i_13 = t;
                {
                  t = not_null(v_16);
                  t = h_0(t);
                }
                t = i_13;
                {
                  ATerm d_17 = NULL;
                  t = not_null(x_16);
                  {
                    t = i_0(t);
                    {
                      d_17 = t;
                      if(((c_17 != NULL) && (c_17 != d_17)))
                        _fail(d_17);
                      else
                        c_17 = d_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_16)), not_null(c_17));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm w_17 = NULL;
        w_17 = t;
        h_17 :
        if(!(match_string(w_17, "-i")))
          {
            if(!(match_string(w_17, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        ATerm z_17 = NULL;
        ATerm q_13;
        q_13 = t;
        {
          ATerm x_17 = NULL;
          ATerm y_17 = NULL;
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(x_17));
            t = set_config_0(t);
          }
        }
        t = q_13;
        {
          ATerm a_18 = NULL;
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_17));
        }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = term_t_13;
        return(t);
      }
      t = ArgOption_3(t, a_2, c_2, e_2);
      LocalPopChoice(o_13);
    }
  else
    {
      t = k_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              ATerm b_18 = NULL;
              b_18 = t;
              k_17 :
              if(!(match_string(b_18, "-o")))
                {
                  if(!(match_string(b_18, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm e_18 = NULL;
              ATerm w_13;
              w_13 = t;
              {
                ATerm c_18 = NULL;
                ATerm d_18 = NULL;
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(c_18));
                  t = set_config_0(t);
                }
              }
              t = w_13;
              {
                ATerm f_18 = NULL;
                f_18 = t;
                if(((e_18 != NULL) && (e_18 != f_18)))
                  _fail(f_18);
                else
                  e_18 = f_18;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_18));
              }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_x_13;
              return(t);
            }
            t = ArgOption_3(t, f_2, g_2, i_2);
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm g_18 = NULL;
                    g_18 = t;
                    n_17 :
                    if(!(match_string(g_18, "-S")))
                      {
                        if(!(match_string(g_18, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_2 (ATerm t)
                  {
                    t = term_f_14;
                    t = set_config_0(t);
                    t = term_g_14;
                    return(t);
                  }
                  ATerm l_2 (ATerm t)
                  {
                    t = term_l_14;
                    return(t);
                  }
                  t = Option_3(t, j_2, k_2, l_2);
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  {
                    ATerm m_14 = t;
                    int p_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_2 (ATerm t)
                        {
                          ATerm h_18 = NULL;
                          h_18 = t;
                          o_17 :
                          if(!(match_string(h_18, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_2 (ATerm t)
                        {
                          ATerm k_18 = NULL;
                          ATerm q_14;
                          q_14 = t;
                          {
                            ATerm i_18 = NULL;
                            ATerm j_18 = NULL;
                            t = string_to_int_0(t);
                            {
                              j_18 = t;
                              if(((i_18 != NULL) && (i_18 != j_18)))
                                _fail(j_18);
                              else
                                i_18 = j_18;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_s_6, not_null(i_18));
                              t = set_config_0(t);
                            }
                          }
                          t = q_14;
                          {
                            ATerm l_18 = NULL;
                            l_18 = t;
                            if(((k_18 != NULL) && (k_18 != l_18)))
                              _fail(l_18);
                            else
                              k_18 = l_18;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_18));
                          }
                          return(t);
                        }
                        ATerm s_2 (ATerm t)
                        {
                          t = term_r_14;
                          return(t);
                        }
                        t = ArgOption_3(t, o_2, p_2, s_2);
                        LocalPopChoice(p_14);
                      }
                    else
                      {
                        t = m_14;
                        {
                          ATerm s_14 = t;
                          int t_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_2 (ATerm t)
                              {
                                ATerm m_18 = NULL;
                                m_18 = t;
                                r_17 :
                                if(!(match_string(m_18, "-k")))
                                  {
                                    if(!(match_string(m_18, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_2 (ATerm t)
                              {
                                ATerm d_15;
                                d_15 = t;
                                {
                                  ATerm n_18 = NULL;
                                  ATerm o_18 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    o_18 = t;
                                    if(((n_18 != NULL) && (n_18 != o_18)))
                                      _fail(o_18);
                                    else
                                      n_18 = o_18;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_e_15, not_null(n_18));
                                    t = set_config_0(t);
                                  }
                                }
                                t = d_15;
                                return(t);
                              }
                              ATerm y_2 (ATerm t)
                              {
                                t = term_f_15;
                                return(t);
                              }
                              t = ArgOption_3(t, t_2, u_2, y_2);
                              LocalPopChoice(t_14);
                            }
                          else
                            {
                              t = s_14;
                              {
                                ATerm g_15 = t;
                                int h_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_3 (ATerm t)
                                    {
                                      ATerm p_18 = NULL;
                                      p_18 = t;
                                      t_17 :
                                      if(!(match_string(p_18, "-v")))
                                        {
                                          if(!(match_string(p_18, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_k_15;
                                      t = set_config_0(t);
                                      t = term_l_15;
                                      return(t);
                                    }
                                    ATerm i_3 (ATerm t)
                                    {
                                      t = term_m_15;
                                      return(t);
                                    }
                                    t = Option_3(t, g_3, h_3, i_3);
                                    LocalPopChoice(h_15);
                                  }
                                else
                                  {
                                    t = g_15;
                                    {
                                      ATerm r_15 = t;
                                      int s_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_3 (ATerm t)
                                          {
                                            ATerm q_18 = NULL;
                                            q_18 = t;
                                            u_17 :
                                            if(!(match_string(q_18, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm p_3 (ATerm t)
                                          {
                                            t = term_a_16;
                                            t = set_config_0(t);
                                            t = term_b_16;
                                            return(t);
                                          }
                                          ATerm q_3 (ATerm t)
                                          {
                                            t = term_c_16;
                                            return(t);
                                          }
                                          t = Option_3(t, j_3, p_3, q_3);
                                          LocalPopChoice(s_15);
                                        }
                                      else
                                        {
                                          t = r_15;
                                          {
                                            ATerm v_3 (ATerm t)
                                            {
                                              ATerm r_18 = NULL;
                                              r_18 = t;
                                              v_17 :
                                              if(!(match_string(r_18, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_3 (ATerm t)
                                            {
                                              t = term_e_16;
                                              t = set_config_0(t);
                                              t = term_f_16;
                                              return(t);
                                            }
                                            ATerm x_3 (ATerm t)
                                            {
                                              t = term_g_16;
                                              return(t);
                                            }
                                            t = Option_3(t, v_3, w_3, x_3);
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
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm b_19 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm c_19 = NULL,d_19 = NULL;
      c_19 = t;
      a_19 :
      if(match_cons(c_19, sym_Program_1))
        {
          d_19 = ATgetArgument(c_19, 0);
          if(((b_19 != NULL) && (b_19 != d_19)))
            _fail(d_19);
          else
            b_19 = d_19;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_16), not_null(b_19)), term_k_16));
      {
        t = printnl_0(t);
        {
          t = term_n_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, term_o_16));
  {
    t = printnl_0(t);
    {
      t = term_n_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_TicksToSeconds(not_null(g_19));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_19), not_null(n_19));
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = SSL_addr(not_null(m_19), not_null(n_19));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_67 (ATerm), ATerm b_67 (ATerm))
{
  ATerm r_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_67(t);
      LocalPopChoice(z_16);
    }
  else
    {
      t = r_16;
      {
        ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
        u_19 = t;
        t_19 :
        if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
          {
            v_19 = ATgetFirst((ATermList) u_19);
            w_19 = (ATerm) ATgetNext((ATermList) u_19);
            {
              ATerm z_19 = NULL;
              ATerm a_20 = NULL;
              t = not_null(w_19);
              {
                t = foldr_2(t, a_67, b_67);
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(z_19));
                t = b_67(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm s_68 (ATerm), ATerm t_68 (ATerm))
{
  ATerm h_20 = NULL;
  ATerm j_20 = NULL;
  h_20 = t;
  {
    ATerm k_20 = NULL;
    ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
    t = not_null(h_20);
    {
      k_20 = t;
      {
        t = SSL_explode_term(not_null(k_20));
        {
          m_20 = t;
          g_20 :
          if(match_cons(m_20, sym__2))
            {
              n_20 = ATgetArgument(m_20, 0);
              o_20 = ATgetArgument(m_20, 1);
              if(((j_20 != NULL) && (j_20 != o_20)))
                _fail(o_20);
              else
                j_20 = o_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_20);
      t = foldr_2(t, s_68, t_68);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = term_e_14;
      return(t);
    }
    t = crush_2(t, b_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        ATerm a_17;
        a_17 = t;
        {
          ATerm b_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_20), not_null(w_20));
              LocalPopChoice(e_17);
            }
          else
            {
              t = b_17;
              t = SSL_gtr(not_null(v_20), not_null(w_20));
            }
        }
        t = a_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm j_21 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
      k_21 = t;
      i_21 :
      if(match_cons(k_21, sym__2))
        {
          l_21 = ATgetArgument(k_21, 0);
          m_21 = ATgetArgument(k_21, 1);
          {
            if(((j_21 != NULL) && (j_21 != l_21)))
              _fail(l_21);
            else
              j_21 = l_21;
            if(((j_21 != NULL) && (j_21 != m_21)))
              _fail(m_21);
            else
              j_21 = m_21;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm i_17;
    i_17 = t;
    {
      ATerm s_21 = NULL;
      ATerm u_21 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          u_21 = t;
          if(((s_21 != NULL) && (s_21 != u_21)))
            _fail(u_21);
          else
            s_21 = u_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_21), term_n_16);
        t = geq_0(t);
      }
    }
    t = i_17;
    t = y_78(t);
    return(t);
  }
  t = try_1(t, e_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm y_21 = NULL,b_22 = NULL;
    ATerm j_17;
    j_17 = t;
    {
      ATerm z_21 = NULL;
      t = run_time_0(t);
      {
        z_21 = t;
        if(((y_21 != NULL) && (y_21 != z_21)))
          _fail(z_21);
        else
          y_21 = z_21;
      }
    }
    t = j_17;
    {
      ATerm c_22 = NULL;
      t = term_l_17;
      {
        t = get_config_0(t);
        {
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), not_null(y_21)), term_m_17), not_null(b_22)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_4);
  {
    t = term_e_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Version_0))
    {
      ATerm l_22 = NULL,n_22 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm m_22 = NULL;
        t = SSLgetAnnotations(not_null(j_22));
        {
          m_22 = t;
          if(((l_22 != NULL) && (l_22 != m_22)))
            _fail(m_22);
          else
            l_22 = m_22;
        }
      }
      t = q_17;
      {
        ATerm o_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
        t = not_null(n_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm s_17 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = s_17;
        {
          ATerm t_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_18);
            }
          else
            {
              t = t_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_4);
  t = u_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_table_create(not_null(t_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  {
    ATerm v_18;
    v_18 = t;
    {
      t = term_w_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, not_null(x_22));
          t = table_put_0(t);
        }
      }
    }
    t = v_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  t = SSL_table_destroy(not_null(b_23));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_exit(not_null(f_23));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(((ATgetType(j_23) == AT_LIST) && ATisEmpty(j_23)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
        {
          k_23 = ATgetFirst((ATermList) j_23);
          l_23 = (ATerm) ATgetNext((ATermList) j_23);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm y_18;
  y_18 = t;
  {
    ATerm o_23 = NULL;
    ATerm r_23 = NULL;
    ATerm z_18 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = z_18;
        {
          ATerm p_23 = NULL;
          ATerm q_23 = NULL;
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
          t = (ATerm) ATinsert(ATempty, not_null(p_23));
        }
      }
    {
      r_23 = t;
      if(((o_23 != NULL) && (o_23 != r_23)))
        _fail(r_23);
      else
        o_23 = r_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(o_23));
      t = printnl_0(t);
    }
  }
  t = y_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  e_24 = t;
  b_24 :
  if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
    {
      c_24 = ATgetFirst((ATermList) e_24);
      d_24 = (ATerm) ATgetNext((ATermList) e_24);
      {
        ATerm h_24 = NULL;
        t = not_null(d_24);
        {
          ATerm f_19;
          f_19 = t;
          {
            ATerm i_24 = NULL,k_24 = NULL,m_24 = NULL;
            ATerm h_19;
            h_19 = t;
            {
              ATerm j_24 = NULL;
              t = g_0(t);
              {
                j_24 = t;
                if(((i_24 != NULL) && (i_24 != j_24)))
                  _fail(j_24);
                else
                  i_24 = j_24;
              }
            }
            t = h_19;
            {
              ATerm l_24 = NULL;
              t = not_null(c_24);
              {
                t = f_0(t);
                {
                  l_24 = t;
                  if(((k_24 != NULL) && (k_24 != l_24)))
                    _fail(l_24);
                  else
                    k_24 = l_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_24)), not_null(k_24));
                {
                  m_24 = t;
                  if(((h_24 != NULL) && (h_24 != m_24)))
                    _fail(m_24);
                  else
                    h_24 = m_24;
                }
              }
            }
          }
          t = f_19;
          {
            ATerm l_4 (ATerm t)
            {
              t = not_null(h_24);
              return(t);
            }
            t = reverse_acc_2(t, f_0, l_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_24) == AT_LIST) && ATisEmpty(e_24)))
        {
          {
            t = term_f_11;
            t = g_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_Program_1))
    {
      a_25 = ATgetArgument(z_24, 0);
      {
        ATerm e_25 = NULL,g_25 = NULL;
        ATerm f_25 = NULL;
        t = SSLgetAnnotations(not_null(z_24));
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
        {
          t = not_null(a_25);
          {
            ATerm j_25 = NULL;
            t = b_47(t);
            {
              g_25 = t;
              {
                ATerm k_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_25)), not_null(e_25));
                {
                  k_25 = t;
                  if(((j_25 != NULL) && (j_25 != k_25)))
                    _fail(k_25);
                  else
                    j_25 = k_25;
                }
                t = not_null(j_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm t_25 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL;
      t = term_l_17;
      {
        t = get_config_0(t);
        {
          u_25 = t;
          if(((t_25 != NULL) && (t_25 != u_25)))
            _fail(u_25);
          else
            t_25 = u_25;
        }
      }
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm v_25 = NULL;
            v_25 = t;
            if(((t_25 != NULL) && (t_25 != v_25)))
              _fail(v_25);
            else
              t_25 = v_25;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = option_defined_1(t, n_4);
      }
    }
  {
    ATerm t_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        t = not_null(t_25);
        return(t);
      }
      t = short_description_1(t, v_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_4);
    {
      t = term_o_19;
      {
        t = echo_0(t);
        {
          t = term_r_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_4 (ATerm t)
                {
                  ATerm w_25 = NULL;
                  ATerm x_25 = NULL;
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_25)), term_s_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_4);
                {
                  ATerm x_4 (ATerm t)
                  {
                    ATerm y_25 = NULL;
                    ATerm c_26 = NULL;
                    ATerm y_4 (ATerm t)
                    {
                      t = not_null(t_25);
                      return(t);
                    }
                    t = long_description_1(t, y_4);
                    {
                      c_26 = t;
                      if(((y_25 != NULL) && (y_25 != c_26)))
                        _fail(c_26);
                      else
                        y_25 = c_26;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), term_x_19);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_4);
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
ATerm debug_0 (ATerm t)
{
  ATerm y_19;
  y_19 = t;
  {
    ATerm i_26 = NULL;
    ATerm j_26 = NULL;
    j_26 = t;
    if(((i_26 != NULL) && (i_26 != j_26)))
      _fail(j_26);
    else
      i_26 = j_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, not_null(i_26)));
      t = printnl_0(t);
    }
  }
  t = y_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm b_20;
  b_20 = t;
  {
    t = k_63(t);
    t = debug_0(t);
  }
  t = b_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym_Undefined_1))
    {
      r_26 = ATgetArgument(q_26, 0);
      {
        ATerm u_26 = NULL,w_26 = NULL;
        ATerm v_26 = NULL;
        t = SSLgetAnnotations(not_null(q_26));
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
        {
          t = not_null(r_26);
          {
            ATerm y_26 = NULL;
            t = c_47(t);
            {
              w_26 = t;
              {
                ATerm z_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_26)), not_null(u_26));
                {
                  z_26 = t;
                  if(((y_26 != NULL) && (y_26 != z_26)))
                    _fail(z_26);
                  else
                    y_26 = z_26;
                }
                t = not_null(y_26);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm e_27 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_72, _id);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = Cons_2(t, _id, e_27);
      }
    return(t);
  }
  t = e_27(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_59 (ATerm))
{
  t = fetch_1(t, p_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_Help_0))
    {
      ATerm l_27 = NULL,n_27 = NULL;
      ATerm e_20;
      e_20 = t;
      {
        ATerm m_27 = NULL;
        t = SSLgetAnnotations(not_null(j_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
      }
      t = e_20;
      {
        ATerm o_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_27));
        {
          o_27 = t;
          if(((n_27 != NULL) && (n_27 != o_27)))
            _fail(o_27);
          else
            n_27 = o_27;
        }
        t = not_null(n_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_implode_string(not_null(t_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = f_20;
      {
        ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
        y_27 = t;
        x_27 :
        if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
          {
            z_27 = ATgetFirst((ATermList) y_27);
            a_28 = (ATerm) ATgetNext((ATermList) y_27);
            {
              t = not_null(z_27);
              {
                ATerm d_5 (ATerm t)
                {
                  t = not_null(a_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_5);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm k_28 = NULL;
  ATerm m_28 = NULL;
  k_28 = t;
  {
    ATerm n_28 = NULL;
    ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
    t = not_null(k_28);
    {
      n_28 = t;
      {
        t = SSL_explode_term(not_null(n_28));
        {
          p_28 = t;
          i_28 :
          if(match_cons(p_28, sym__2))
            {
              q_28 = ATgetArgument(p_28, 0);
              r_28 = ATgetArgument(p_28, 1);
              j_28 :
              if(match_string(q_28, ""))
                {
                  if(((m_28 != NULL) && (m_28 != r_28)))
                    _fail(r_28);
                  else
                    m_28 = r_28;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm v_28 (ATerm t)
  {
    ATerm l_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_28);
        LocalPopChoice(p_20);
      }
    else
      {
        t = l_20;
        {
          t = Nil_0(t);
          t = f_73(t);
        }
      }
    return(t);
  }
  t = v_28(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym__2))
    {
      z_28 = ATgetArgument(y_28, 0);
      a_29 = ATgetArgument(y_28, 1);
      {
        t = not_null(z_28);
        {
          ATerm e_5 (ATerm t)
          {
            t = not_null(a_29);
            return(t);
          }
          t = at_end_1(t, e_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_explode_string(not_null(f_29));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_45 (ATerm), ATerm q_45 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  n_29 :
  if(match_cons(o_29, sym__2))
    {
      p_29 = ATgetArgument(o_29, 0);
      q_29 = ATgetArgument(o_29, 1);
      {
        ATerm x_29 = NULL,b_30 = NULL;
        ATerm y_29 = NULL;
        t = SSLgetAnnotations(not_null(o_29));
        {
          y_29 = t;
          if(((x_29 != NULL) && (x_29 != y_29)))
            _fail(y_29);
          else
            x_29 = y_29;
        }
        {
          t = not_null(p_29);
          {
            ATerm d_30 = NULL;
            t = p_45(t);
            {
              b_30 = t;
              {
                t = not_null(q_29);
                {
                  ATerm i_30 = NULL;
                  t = q_45(t);
                  {
                    d_30 = t;
                    {
                      ATerm j_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_30), not_null(d_30)), not_null(x_29));
                      {
                        j_30 = t;
                        if(((i_30 != NULL) && (i_30 != j_30)))
                          _fail(j_30);
                        else
                          i_30 = j_30;
                      }
                      t = not_null(i_30);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,l_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__2))
    {
      f_31 = ATgetArgument(e_31, 0);
      l_31 = ATgetArgument(e_31, 1);
      {
        ATerm s_20;
        s_20 = t;
        t = SSL_printnl(not_null(f_31), not_null(l_31));
        t = s_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_63 (ATerm))
{
  ATerm x_20;
  x_20 = t;
  {
    ATerm y_31 = NULL,e_32 = NULL;
    ATerm y_20;
    y_20 = t;
    {
      ATerm z_31 = NULL;
      t = j_63(t);
      {
        z_31 = t;
        if(((y_31 != NULL) && (y_31 != z_31)))
          _fail(z_31);
        else
          y_31 = z_31;
      }
    }
    t = y_20;
    {
      ATerm f_32 = NULL;
      f_32 = t;
      if(((e_32 != NULL) && (e_32 != f_32)))
        _fail(f_32);
      else
        e_32 = f_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_32)), not_null(y_31)));
        t = printnl_0(t);
      }
    }
  }
  t = x_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm k_32 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = Cons_2(t, q_72, k_32);
      }
    return(t);
  }
  t = k_32(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  t = SSL_is_string(not_null(m_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, f_5);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
              c_33 = t;
              b_33 :
              if(match_cons(c_33, sym_Path_1))
                {
                  d_33 = ATgetArgument(c_33, 0);
                  t = not_null(d_33);
                }
              else
                {
                  if(match_cons(c_33, sym_Var_1))
                    {
                      d_33 = ATgetArgument(c_33, 0);
                      {
                        t = not_null(d_33);
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm h_5 (ATerm t)
                                {
                                  t = term_h_21;
                                  return(t);
                                }
                                t = debug_1(t, h_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_33, sym_Prefix_2))
                        {
                          d_33 = ATgetArgument(c_33, 0);
                          e_33 = ATgetArgument(c_33, 1);
                          {
                            ATerm j_33 = NULL,l_33 = NULL;
                            ATerm n_21;
                            n_21 = t;
                            {
                              ATerm k_33 = NULL;
                              t = not_null(d_33);
                              {
                                t = eval_config_0(t);
                                {
                                  k_33 = t;
                                  if(((j_33 != NULL) && (j_33 != k_33)))
                                    _fail(k_33);
                                  else
                                    j_33 = k_33;
                                }
                              }
                            }
                            t = n_21;
                            {
                              ATerm m_33 = NULL;
                              t = not_null(e_33);
                              {
                                t = eval_config_0(t);
                                {
                                  m_33 = t;
                                  if(((l_33 != NULL) && (l_33 != m_33)))
                                    _fail(m_33);
                                  else
                                    l_33 = m_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), not_null(l_33));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(w_33));
    {
      t = table_get_0(t);
      {
        ATerm i_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_21;
            p_21 = t;
            {
              ATerm y_33 = NULL;
              ATerm z_33 = NULL;
              z_33 = t;
              if(((y_33 != NULL) && (y_33 != z_33)))
                _fail(z_33);
              else
                y_33 = z_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(w_33), not_null(y_33));
                t = table_put_0(t);
              }
            }
            t = p_21;
          }
          return(t);
        }
        t = try_1(t, i_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_75(t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym__2))
    {
      f_34 = ATgetArgument(e_34, 0);
      g_34 = ATgetArgument(e_34, 1);
      t = SSL_table_get(not_null(f_34), not_null(g_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  n_34 = t;
  m_34 :
  if(match_cons(n_34, sym__3))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      q_34 = ATgetArgument(n_34, 2);
      {
        ATerm t_21;
        t_21 = t;
        {
          ATerm u_34 = NULL;
          ATerm v_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), not_null(p_34));
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = (ATerm) ATempty;
              }
            {
              v_34 = t;
              if(((u_34 != NULL) && (u_34 != v_34)))
                _fail(v_34);
              else
                u_34 = v_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_34), not_null(p_34), (ATerm) ATinsert(CheckATermList(not_null(u_34)), not_null(q_34)));
            t = table_put_0(t);
          }
        }
        t = t_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm z_34 = NULL;
  ATerm a_35 = NULL;
  t = term_f_11;
  {
    t = p_58(t);
    {
      a_35 = t;
      if(((z_34 != NULL) && (z_34 != a_35)))
        _fail(a_35);
      else
        z_34 = a_35;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, not_null(z_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  k_35 :
  if(match_string(l_35, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
        {
          m_35 = ATgetFirst((ATermList) l_35);
          n_35 = (ATerm) ATgetNext((ATermList) l_35);
          {
            ATerm r_35 = NULL;
            ATerm x_21;
            x_21 = t;
            {
              t = not_null(m_35);
              t = c_0(t);
            }
            t = x_21;
            {
              ATerm s_35 = NULL;
              t = term_f_11;
              {
                t = d_0(t);
                {
                  s_35 = t;
                  if(((r_35 != NULL) && (r_35 != s_35)))
                    _fail(s_35);
                  else
                    r_35 = s_35;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_35)), not_null(r_35));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm x_35 = NULL;
    x_35 = t;
    w_35 :
    if(!(match_string(x_35, "--help")))
      {
        if(!(match_string(x_35, "-h")))
          {
            if(!(match_string(x_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_d_22;
    {
      t = set_config_0(t);
      t = term_e_22;
    }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_f_22;
    return(t);
  }
  t = Option_3(t, j_5, p_5, q_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
    {
      b_36 = ATgetFirst((ATermList) a_36);
      c_36 = (ATerm) ATgetNext((ATermList) a_36);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_36)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_36)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
    {
      n_36 = ATgetFirst((ATermList) m_36);
      o_36 = (ATerm) ATgetNext((ATermList) m_36);
      {
        ATerm s_36 = NULL,u_36 = NULL;
        ATerm t_36 = NULL;
        t = SSLgetAnnotations(not_null(m_36));
        {
          t_36 = t;
          if(((s_36 != NULL) && (s_36 != t_36)))
            _fail(t_36);
          else
            s_36 = t_36;
        }
        {
          t = not_null(n_36);
          {
            ATerm w_36 = NULL;
            t = b_52(t);
            {
              u_36 = t;
              {
                t = not_null(o_36);
                {
                  ATerm y_36 = NULL;
                  t = c_52(t);
                  {
                    w_36 = t;
                    {
                      ATerm z_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_36)), not_null(u_36)), not_null(s_36));
                      {
                        z_36 = t;
                        if(((y_36 != NULL) && (y_36 != z_36)))
                          _fail(z_36);
                        else
                          y_36 = z_36;
                      }
                      t = not_null(y_36);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  i_37 :
  if(((ATgetType(j_37) == AT_LIST) && ATisEmpty(j_37)))
    {
      {
        ATerm l_37 = NULL,n_37 = NULL;
        ATerm g_22;
        g_22 = t;
        {
          ATerm m_37 = NULL;
          t = SSLgetAnnotations(not_null(j_37));
          {
            m_37 = t;
            if(((l_37 != NULL) && (l_37 != m_37)))
              _fail(m_37);
            else
              l_37 = m_37;
          }
        }
        t = g_22;
        {
          ATerm o_37 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_37));
          {
            o_37 = t;
            if(((n_37 != NULL) && (n_37 != o_37)))
              _fail(o_37);
            else
              n_37 = o_37;
          }
          t = not_null(n_37);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(v_37), not_null(w_37));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm h_22;
  h_22 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = term_k_22;
      t = n_58(t);
      return(t);
    }
    t = try_1(t, r_5);
  }
  t = h_22;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm e_38 = NULL;
      ATerm p_22;
      p_22 = t;
      {
        ATerm c_38 = NULL;
        ATerm d_38 = NULL;
        d_38 = t;
        if(((c_38 != NULL) && (c_38 != d_38)))
          _fail(d_38);
        else
          c_38 = d_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(c_38));
          t = set_config_0(t);
        }
      }
      t = p_22;
      {
        ATerm f_38 = NULL;
        f_38 = t;
        if(((e_38 != NULL) && (e_38 != f_38)))
          _fail(f_38);
        else
          e_38 = f_38;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_38));
      }
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_22);
            }
          else
            {
              t = s_22;
              {
                t = n_58(t);
                t = Cons_2(t, _id, x_5);
              }
            }
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_5, x_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  ATerm v_22;
  v_22 = t;
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
    o_38 = t;
    k_38 :
    if(match_cons(o_38, sym__3))
      {
        p_38 = ATgetArgument(o_38, 0);
        q_38 = ATgetArgument(o_38, 1);
        r_38 = ATgetArgument(o_38, 2);
        {
          if(((l_38 != NULL) && (l_38 != p_38)))
            _fail(p_38);
          else
            l_38 = p_38;
          {
            if(((m_38 != NULL) && (m_38 != q_38)))
              _fail(q_38);
            else
              m_38 = q_38;
            {
              if(((n_38 != NULL) && (n_38 != r_38)))
                _fail(r_38);
              else
                n_38 = r_38;
              t = SSL_table_put(not_null(l_38), not_null(m_38), not_null(n_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm u_38 = NULL;
  ATerm w_22;
  w_22 = t;
  {
    t = term_y_22;
    t = table_put_0(t);
  }
  t = w_22;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_58(t);
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_5);
    {
      ATerm z_5 (ATerm t)
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23;
            e_23 = t;
            {
              ATerm g_23 = t;
              int h_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_22;
                  t = get_config_0(t);
                  LocalPopChoice(h_23);
                }
              else
                {
                  t = g_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_23;
            {
              t = system_usage_0(t);
              {
                t = term_e_14;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm a_6 (ATerm t)
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm v_38 = NULL;
                  v_38 = t;
                  if(((u_38 != NULL) && (u_38 != v_38)))
                    _fail(v_38);
                  else
                    u_38 = v_38;
                  return(t);
                }
                t = Undefined_1(t, g_6);
                return(t);
              }
              t = option_defined_1(t, a_6);
              {
                ATerm h_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_38)), term_m_23);
                  return(t);
                }
                t = say_1(t, h_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_5);
      {
        ATerm n_23;
        n_23 = t;
        {
          t = term_p_19;
          t = table_destroy_0(t);
        }
        t = n_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm))
{
  t = parse_options_1(t, r_59);
  {
    t = store_options_0(t);
    {
      t = t_59(t);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_59);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            {
              ATerm u_23 = t;
              int v_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_59(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_23);
                }
              else
                {
                  t = u_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  t = option_wrap_4(t, v_59, default_usage_0, _id, w_59);
  return(t);
}
ATerm xtc_iowrap_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    t = xtc_io_1(t, p_64);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, l_6);
  return(t);
}
ATerm astratego2text_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      t = term_w_23;
      return(t);
    }
    ATerm o_6 (ATerm t)
    {
      ATerm y_38 = NULL;
      ATerm z_38 = NULL;
      t = term_x_23;
      {
        t = xtc_find_0(t);
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_38)), term_y_23);
      return(t);
    }
    t = xtc_transform_2(t, n_6, o_6);
    {
      ATerm p_6 (ATerm t)
      {
        t = term_z_23;
        return(t);
      }
      t = xtc_transform_1(t, p_6);
    }
    return(t);
  }
  t = xtc_iowrap_1(t, m_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = astratego2text_0(t);
  return(t);
}
