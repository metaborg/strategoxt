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
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_g_22;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_m_17;
ATerm term_g_17;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_y_12;
ATerm term_e_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_f_7;
void init_constant_terms (void)
{
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_z_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_h_8);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_l_10);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_d_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_o_8);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_o_8);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_o_8);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_g_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__3, term_f_20, term_g_20, (ATerm) ATempty);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm n_65 (ATerm));
ATerm separate_by_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm u_73 (ATerm));
ATerm init_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm elem_1 (ATerm, ATerm e_73 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm p_73 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm i_73 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm g_53 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm remove_extension_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_79 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm g_79 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm v_65 (ATerm), ATerm w_65 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm m_65 (ATerm));
ATerm assert_1 (ATerm, ATerm c_65 (ATerm));
ATerm obsolete_1 (ATerm, ATerm m_64 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_64 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm y_64 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm j_65 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm k_65 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm w_45 (ATerm), ATerm x_45 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm crush_2 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_73 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_61 (ATerm));
ATerm map_1 (ATerm, ATerm w_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_61 (ATerm));
ATerm Program_1 (ATerm, ATerm i_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_61 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_61 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm s_62 (ATerm), ATerm t_62 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm l_65 (ATerm));
ATerm io_pp_c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, n_65, c_0);
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
  y_0 = t;
  e_0 :
  if(match_cons(y_0, sym__2))
    {
      z_0 = ATgetArgument(y_0, 0);
      a_1 = ATgetArgument(y_0, 1);
      {
        t = not_null(a_1);
        {
          ATerm d_2 = t;
          int e_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_6);
            }
          else
            {
              t = d_2;
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm h_6 = t;
                  int i_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(i_6);
                    }
                  else
                    {
                      t = h_6;
                      {
                        ATerm q_1 = NULL;
                        t = Cons_2(t, _id, d_0);
                        {
                          ATerm b_2 = NULL;
                          b_2 = t;
                          if(((q_1 != NULL) && (q_1 != b_2)))
                            _fail(b_2);
                          else
                            q_1 = b_2;
                          t = (ATerm) ATinsert(CheckATermList(not_null(q_1)), not_null(z_0));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, d_0);
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
ATerm at_last_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm j_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = u_73(t);
        LocalPopChoice(n_6);
      }
    else
      {
        t = j_6;
        t = Cons_2(t, _id, i_2);
      }
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  k_2 :
  if(match_cons(l_2, sym__2))
    {
      m_2 = ATgetArgument(l_2, 0);
      n_2 = ATgetArgument(l_2, 1);
      if(((m_2 != NULL) && (m_2 != n_2)))
        _fail(n_2);
      else
        m_2 = n_2;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  s_2 :
  if(match_cons(t_2, sym__2))
    {
      u_2 = ATgetArgument(t_2, 0);
      v_2 = ATgetArgument(t_2, 1);
      {
        t = not_null(v_2);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm v_6;
            v_6 = t;
            {
              ATerm y_2 = NULL;
              ATerm z_2 = NULL;
              z_2 = t;
              if(((y_2 != NULL) && (y_2 != z_2)))
                _fail(z_2);
              else
                y_2 = z_2;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), not_null(y_2));
                t = e_73(t);
              }
            }
            t = v_6;
            return(t);
          }
          t = _one(t, f_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_0 (ATerm t)
{
  t = elem_1(t, eq_0);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_73(t);
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        t = Cons_2(t, _id, c_3);
      }
    return(t);
  }
  t = c_3(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm f_3 = NULL,h_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = Cons_2(t, i_73, _id);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm g_3 = NULL;
        g_3 = t;
        if(((f_3 != NULL) && (f_3 != g_3)))
          _fail(g_3);
        else
          f_3 = g_3;
        return(t);
      }
      t = Cons_2(t, _id, q_0);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, p_0);
  {
    ATerm i_3 = NULL;
    i_3 = t;
    if(((h_3 != NULL) && (h_3 != i_3)))
      _fail(i_3);
    else
      h_3 = i_3;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_3), not_null(f_3));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm g_53 (ATerm))
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  ATerm y_6 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, g_53);
      LocalPopChoice(e_7);
    }
  else
    {
      t = y_6;
      {
        ATerm v_3 = NULL;
        ATerm w_3 = NULL;
        w_3 = t;
        if(((v_3 != NULL) && (v_3 != w_3)))
          _fail(w_3);
        else
          v_3 = w_3;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), (ATerm) ATempty);
      }
    }
  {
    x_3 = t;
    r_3 :
    if(match_cons(x_3, sym__2))
      {
        y_3 = ATgetArgument(x_3, 0);
        b_4 = ATgetArgument(x_3, 1);
        s_3 :
        if(((ATermList) y_3 == ATempty))
          {
            t_3 :
            if(((ATermList) b_4 == ATempty))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(b_4) == AT_LIST) && ((ATermList) b_4 != ATempty)))
                  {
                    c_4 = ATgetFirst((ATermList) b_4);
                    d_4 = (ATerm) ATgetNext((ATermList) b_4);
                    {
                      t = not_null(b_4);
                      t = list_tokenize_1(t, g_53);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
          }
        else
          {
            if(((ATgetType(y_3) == AT_LIST) && ((ATermList) y_3 != ATempty)))
              {
                z_3 = ATgetFirst((ATermList) y_3);
                a_4 = (ATerm) ATgetNext((ATermList) y_3);
                u_3 :
                if(((ATermList) b_4 == ATempty))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(y_3));
                  }
                else
                  {
                    if(((ATgetType(b_4) == AT_LIST) && ((ATermList) b_4 != ATempty)))
                      {
                        c_4 = ATgetFirst((ATermList) b_4);
                        d_4 = (ATerm) ATgetNext((ATermList) b_4);
                        {
                          ATerm i_4 = NULL;
                          ATerm j_4 = NULL;
                          t = not_null(b_4);
                          {
                            t = list_tokenize_1(t, g_53);
                            {
                              j_4 = t;
                              if(((i_4 != NULL) && (i_4 != j_4)))
                                _fail(j_4);
                              else
                                i_4 = j_4;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(i_4)), not_null(y_3));
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
              }
            else
              {
                _fail(t);
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
ATerm string_tokenize_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    t_4 = t;
    s_4 :
    if(match_cons(t_4, sym__2))
      {
        u_4 = ATgetArgument(t_4, 0);
        v_4 = ATgetArgument(t_4, 1);
        {
          t = not_null(v_4);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm y_4 = NULL;
              ATerm z_4 = NULL;
              z_4 = t;
              if(((y_4 != NULL) && (y_4 != z_4)))
                _fail(z_4);
              else
                y_4 = z_4;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_4), not_null(u_4));
                t = elem_0(t);
              }
              return(t);
            }
            t = list_tokenize_1(t, r_0);
            t = map_1(t, implode_string_0);
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
ATerm remove_extension_0 (ATerm t)
{
  ATerm e_5 = NULL,g_5 = NULL;
  ATerm f_5 = NULL;
  f_5 = t;
  if(((e_5 != NULL) && (e_5 != f_5)))
    _fail(f_5);
  else
    e_5 = f_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_f_7), not_null(e_5));
    {
      t = string_tokenize_0(t);
      {
        t = init_0(t);
        {
          ATerm h_5 = NULL;
          h_5 = t;
          if(((g_5 != NULL) && (g_5 != h_5)))
            _fail(h_5);
          else
            g_5 = h_5;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_7, not_null(g_5));
            {
              t = separate_by_0(t);
              t = concat_strings_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = SSL_table_keys(not_null(l_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_5 = NULL;
        ATerm v_5 = NULL;
        t_5 = t;
        {
          ATerm w_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_5), not_null(t_5));
          {
            t = table_get_0(t);
            {
              w_5 = t;
              if(((v_5 != NULL) && (v_5 != w_5)))
                _fail(w_5);
              else
                v_5 = w_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(v_5));
        }
        return(t);
      }
      t = map_1(t, s_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm l_7;
    l_7 = t;
    {
      ATerm b_6 = NULL;
      ATerm c_6 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          c_6 = t;
          if(((b_6 != NULL) && (b_6 != c_6)))
            _fail(c_6);
          else
            b_6 = c_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), term_n_7);
        t = geq_0(t);
      }
    }
    t = l_7;
    t = h_79(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm t_7;
  t_7 = t;
  {
    ATerm f_6 = NULL;
    ATerm g_6 = NULL;
    g_6 = t;
    if(((f_6 != NULL) && (f_6 != g_6)))
      _fail(g_6);
    else
      f_6 = g_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, not_null(f_6));
      t = printnl_0(t);
    }
  }
  t = t_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm m_6 = NULL;
  ATerm o_6 = NULL,p_6 = NULL;
  m_6 = t;
  {
    ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_6)));
    {
      t = table_get_0(t);
      {
        q_6 = t;
        k_6 :
        if(((ATgetType(q_6) == AT_LIST) && ((ATermList) q_6 != ATempty)))
          {
            r_6 = ATgetFirst((ATermList) q_6);
            u_6 = (ATerm) ATgetNext((ATermList) q_6);
            l_6 :
            if(match_cons(r_6, sym__2))
              {
                s_6 = ATgetArgument(r_6, 0);
                t_6 = ATgetArgument(r_6, 1);
                {
                  if(((o_6 != NULL) && (o_6 != s_6)))
                    _fail(s_6);
                  else
                    o_6 = s_6;
                  if(((p_6 != NULL) && (p_6 != t_6)))
                    _fail(t_6);
                  else
                    p_6 = t_6;
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
    t = not_null(p_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym__2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm g_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_7)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
              h_7 = t;
              z_6 :
              if(match_cons(h_7, sym__2))
                {
                  i_7 = ATgetArgument(h_7, 0);
                  j_7 = ATgetArgument(h_7, 1);
                  {
                    if(((d_7 != NULL) && (d_7 != i_7)))
                      _fail(i_7);
                    else
                      d_7 = i_7;
                    if(((g_7 != NULL) && (g_7 != j_7)))
                      _fail(j_7);
                    else
                      g_7 = j_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
          }
        }
        t = not_null(g_7);
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
  ATerm v_0 (ATerm t)
  {
    t = term_a_8;
    {
      t = table_get_0(t);
      {
        ATerm w_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, w_0);
      }
    }
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym__2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      {
        t = not_null(s_7);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
            v_7 = t;
            o_7 :
            if(match_cons(v_7, sym__2))
              {
                w_7 = ATgetArgument(v_7, 0);
                x_7 = ATgetArgument(v_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), not_null(w_7), not_null(x_7));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm b_8;
    b_8 = t;
    {
      ATerm d_8 = NULL;
      ATerm e_8 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), term_c_8);
        t = geq_0(t);
      }
    }
    t = b_8;
    t = g_79(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm f_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_8;
      }
    {
      ATerm g_8;
      g_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_7, term_h_8, not_null(i_8));
        t = table_put_0(t);
      }
      t = g_8;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_j_8;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose4_1(t, c_1);
        {
          ATerm m_8 = t;
          int n_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(n_8);
            }
          else
            {
              t = m_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm l_8 = NULL;
            l_8 = t;
            if(((k_8 != NULL) && (k_8 != l_8)))
              _fail(l_8);
            else
              k_8 = l_8;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(k_8));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_y_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_8)), term_o_8);
                  t = table_put_0(t);
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
  ATerm p_8 = NULL;
  p_8 = t;
  t = SSL_getenv(not_null(p_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_8;
      t = get_config_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_8;
            t = getenv_0(t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = debug_1(t, f_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_9;
          t = table_get_0(t);
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = a_9;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_j_9;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, g_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_o_9;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
      {
        t = xtc_load_0(t);
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = term_o_9;
                return(t);
              }
              t = debug_1(t, l_1);
              return(t);
            }
            t = if_verbose5_1(t, k_1);
          }
        }
      }
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm t_8 = NULL;
        ATerm u_8 = NULL;
        u_8 = t;
        if(((t_8 != NULL) && (t_8 != u_8)))
          _fail(u_8);
        else
          t_8 = u_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), not_null(t_8)), term_v_9);
          {
            t = error_0(t);
            {
              ATerm m_1 (ATerm t)
              {
                t = term_y_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_x_9;
                      return(t);
                    }
                    t = debug_1(t, n_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, m_1);
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
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_ReadFromFile(not_null(x_8));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_stdin_0))
    {
      ATerm h_9 = NULL;
      ATerm i_9 = NULL;
      t = term_y_9;
      {
        t = ReadFromFile_0(t);
        {
          i_9 = t;
          if(((h_9 != NULL) && (h_9 != i_9)))
            _fail(i_9);
          else
            h_9 = i_9;
        }
      }
      t = not_null(h_9);
    }
  else
    {
      if(match_cons(f_9, sym_FILE_1))
        {
          g_9 = ATgetArgument(f_9, 0);
          {
            ATerm k_9 = NULL;
            ATerm l_9 = NULL;
            t = not_null(g_9);
            {
              t = ReadFromFile_0(t);
              {
                l_9 = t;
                if(((k_9 != NULL) && (k_9 != l_9)))
                  _fail(l_9);
                else
                  k_9 = l_9;
              }
            }
            t = not_null(k_9);
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
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      t = SSL_WriteToBinaryFile(not_null(t_9), not_null(u_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm c_10 = NULL;
  a_10 = t;
  {
    ATerm d_10 = NULL;
    t = xtc_new_file_0(t);
    {
      d_10 = t;
      {
        if(((c_10 != NULL) && (c_10 != d_10)))
          _fail(d_10);
        else
          c_10 = d_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(a_10));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_10));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm v_65 (ATerm), ATerm w_65 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, v_65, w_65);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym__2))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      t = SSL_call(not_null(j_10), not_null(k_10));
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
ATerm xtc_command_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm q_10 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm r_10 = NULL;
    t = m_65(t);
    {
      t = xtc_find_warning_0(t);
      {
        r_10 = t;
        if(((q_10 != NULL) && (q_10 != r_10)))
          _fail(r_10);
        else
          q_10 = r_10;
      }
    }
  }
  t = z_9;
  {
    ATerm b_10;
    b_10 = t;
    {
      ATerm s_10 = NULL;
      ATerm t_10 = NULL;
      t_10 = t;
      if(((s_10 != NULL) && (s_10 != t_10)))
        _fail(t_10);
      else
        s_10 = t_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(s_10));
        t = call_0(t);
      }
    }
    t = b_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym__2))
    {
      c_11 = ATgetArgument(b_11, 0);
      d_11 = ATgetArgument(b_11, 1);
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
        ATerm e_10;
        e_10 = t;
        {
          ATerm j_11 = NULL;
          ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
          t = c_65(t);
          {
            j_11 = t;
            {
              if(((g_11 != NULL) && (g_11 != j_11)))
                _fail(j_11);
              else
                g_11 = j_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_11), not_null(c_11), not_null(d_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_10 = t;
                    int g_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), term_l_10);
                        t = table_get_0(t);
                        LocalPopChoice(g_10);
                      }
                    else
                      {
                        t = f_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      k_11 = t;
                      z_10 :
                      if(((ATgetType(k_11) == AT_LIST) && ((ATermList) k_11 != ATempty)))
                        {
                          l_11 = ATgetFirst((ATermList) k_11);
                          m_11 = (ATerm) ATgetNext((ATermList) k_11);
                          {
                            if(((h_11 != NULL) && (h_11 != l_11)))
                              _fail(l_11);
                            else
                              h_11 = l_11;
                            {
                              if(((i_11 != NULL) && (i_11 != m_11)))
                                _fail(m_11);
                              else
                                i_11 = m_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(g_11), term_l_10, (ATerm) ATinsert(CheckATermList(not_null(i_11)), (ATerm) ATinsert(CheckATermList(not_null(h_11)), not_null(c_11))));
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
        t = e_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm m_10;
  m_10 = t;
  {
    t = m_64(t);
    {
      ATerm o_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = debug_1(t, o_1);
    }
  }
  t = m_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
      w_11 = t;
      r_11 :
      if(match_cons(w_11, sym__2))
        {
          x_11 = ATgetArgument(w_11, 0);
          y_11 = ATgetArgument(w_11, 1);
          {
            if(((v_11 != NULL) && (v_11 != x_11)))
              _fail(x_11);
            else
              v_11 = x_11;
            if(((u_11 != NULL) && (u_11 != y_11)))
              _fail(y_11);
            else
              u_11 = y_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_10);
      t = SSL_open_file(not_null(v_11), not_null(u_11));
    }
  else
    {
      t = o_10;
      {
        ATerm z_11 = NULL;
        ATerm a_12 = NULL;
        ATerm p_1 (ATerm t)
        {
          t = term_u_10;
          return(t);
        }
        t = obsolete_1(t, p_1);
        {
          z_11 = t;
          {
            if(((v_11 != NULL) && (v_11 != z_11)))
              _fail(z_11);
            else
              v_11 = z_11;
            {
              ATerm v_10;
              v_10 = t;
              {
                ATerm b_12 = NULL;
                t = term_w_10;
                {
                  b_12 = t;
                  if(((a_12 != NULL) && (a_12 != b_12)))
                    _fail(b_12);
                  else
                    a_12 = b_12;
                }
              }
              t = v_10;
              t = SSL_open_file(not_null(v_11), not_null(a_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_12 = NULL;
  ATerm j_12 = NULL;
  h_12 = t;
  {
    ATerm x_10;
    x_10 = t;
    {
      ATerm k_12 = NULL;
      t = term_y_10;
      {
        k_12 = t;
        if(((j_12 != NULL) && (j_12 != k_12)))
          _fail(k_12);
        else
          j_12 = k_12;
      }
    }
    t = x_10;
    {
      t = SSL_open_file(not_null(h_12), not_null(j_12));
      t = SSL_close_file(not_null(h_12));
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
  ATerm o_12 = NULL;
  ATerm p_12 = NULL;
  t = term_o_8;
  {
    t = new_0(t);
    {
      p_12 = t;
      if(((o_12 != NULL) && (o_12 != p_12)))
        _fail(p_12);
      else
        o_12 = p_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), term_e_11);
    {
      t = conc_strings_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t = new_file_0(t);
  {
    t_12 = t;
    {
      ATerm f_11;
      f_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), term_w_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), term_o_8);
            {
              ATerm s_1 (ATerm t)
              {
                t = term_n_11;
                return(t);
              }
              t = assert_1(t, s_1);
            }
          }
        }
      }
      t = f_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_stdin_0))
    {
      ATerm f_13 = NULL;
      ATerm g_13 = NULL;
      ATerm h_13 = NULL;
      t = xtc_new_file_0(t);
      {
        g_13 = t;
        {
          if(((f_13 != NULL) && (f_13 != g_13)))
            _fail(g_13);
          else
            f_13 = g_13;
          {
            ATerm i_13 = NULL;
            t = o_0(t);
            {
              i_13 = t;
              if(((h_13 != NULL) && (h_13 != i_13)))
                _fail(i_13);
              else
                h_13 = i_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_13)), term_o_11));
              {
                t = conc_0(t);
                t = xtc_command_1(t, n_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_13));
    }
  else
    {
      if(match_cons(d_13, sym_FILE_1))
        {
          e_13 = ATgetArgument(d_13, 0);
          {
            ATerm k_13 = NULL;
            ATerm l_13 = NULL;
            t = not_null(e_13);
            {
              ATerm m_13 = NULL;
              t = xtc_new_file_0(t);
              {
                l_13 = t;
                {
                  if(((k_13 != NULL) && (k_13 != l_13)))
                    _fail(l_13);
                  else
                    k_13 = l_13;
                  {
                    ATerm n_13 = NULL;
                    t = o_0(t);
                    {
                      n_13 = t;
                      if(((m_13 != NULL) && (m_13 != n_13)))
                        _fail(n_13);
                      else
                        m_13 = n_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_13)), term_o_11), not_null(e_13)), term_p_11));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, n_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_13));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm q_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, o_65, p_65);
      LocalPopChoice(s_11);
    }
  else
    {
      t = q_11;
      t = xtc_transform_term_2(t, o_65, p_65);
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym__2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      t = SSL_rename(not_null(x_13), not_null(y_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_stdout_0))
    {
      ATerm i_14 = NULL,k_14 = NULL;
      ATerm t_11;
      t_11 = t;
      {
        ATerm j_14 = NULL;
        t = SSLgetAnnotations(not_null(g_14));
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
      }
      t = t_11;
      {
        ATerm l_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(i_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        t = not_null(k_14);
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
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      t = SSL_copy(not_null(s_14), not_null(t_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_FILE_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL;
            t = m_0(t);
            {
              g_15 = t;
              a_15 :
              if(match_cons(g_15, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_e_12);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(e_15);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_e_12;
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm i_15 = NULL;
              ATerm j_15 = NULL;
              t = m_0(t);
              {
                j_15 = t;
                {
                  if(((i_15 != NULL) && (i_15 != j_15)))
                    _fail(j_15);
                  else
                    i_15 = j_15;
                  {
                    ATerm f_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = f_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(i_15));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_15));
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
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(((ATgetType(q_15) == AT_LIST) && ((ATermList) q_15 != ATempty)))
    {
      r_15 = ATgetFirst((ATermList) q_15);
      s_15 = (ATerm) ATgetNext((ATermList) q_15);
      t = not_null(s_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym__2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm h_16 = NULL;
          ATerm i_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), not_null(b_16));
          {
            ATerm i_12 = t;
            int l_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_12);
              }
            else
              {
                t = i_12;
                t = (ATerm) ATempty;
              }
            {
              i_16 = t;
              if(((h_16 != NULL) && (h_16 != i_16)))
                _fail(i_16);
              else
                h_16 = i_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_16), not_null(b_16), not_null(h_16));
            t = table_put_0(t);
          }
        }
        t = g_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  ATerm m_12;
  m_12 = t;
  {
    ATerm s_16 = NULL;
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
    t = z_64(t);
    {
      s_16 = t;
      {
        if(((q_16 != NULL) && (q_16 != s_16)))
          _fail(s_16);
        else
          q_16 = s_16;
        {
          ATerm n_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), term_l_10);
              t = table_get_0(t);
              LocalPopChoice(q_12);
            }
          else
            {
              t = n_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_16 = t;
            o_16 :
            if(((ATgetType(t_16) == AT_LIST) && ((ATermList) t_16 != ATempty)))
              {
                u_16 = ATgetFirst((ATermList) t_16);
                v_16 = (ATerm) ATgetNext((ATermList) t_16);
                {
                  if(((r_16 != NULL) && (r_16 != u_16)))
                    _fail(u_16);
                  else
                    r_16 = u_16;
                  {
                    if(((p_16 != NULL) && (p_16 != v_16)))
                      _fail(v_16);
                    else
                      p_16 = v_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(q_16), term_l_10, not_null(p_16));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_16);
                          {
                            ATerm t_1 (ATerm t)
                            {
                              ATerm w_16 = NULL;
                              w_16 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(w_16));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_1);
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
  t = m_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  t = SSL_remove(not_null(c_17));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm h_17 = NULL;
  ATerm r_12;
  r_12 = t;
  {
    ATerm i_17 = NULL;
    ATerm j_17 = NULL;
    t = y_64(t);
    {
      i_17 = t;
      {
        if(((h_17 != NULL) && (h_17 != i_17)))
          _fail(i_17);
        else
          h_17 = i_17;
        {
          ATerm k_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_l_10);
          {
            ATerm s_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_12);
              }
            else
              {
                t = s_12;
                t = (ATerm) ATempty;
              }
            {
              k_17 = t;
              if(((j_17 != NULL) && (j_17 != k_17)))
                _fail(k_17);
              else
                j_17 = k_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_17), term_l_10, (ATerm) ATinsert(CheckATermList(not_null(j_17)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL;
  ATerm u_1 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = begin_scope_1(t, u_1);
  {
    t = j_65(t);
    {
      ATerm v_12;
      v_12 = t;
      {
        ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_12;
            t = table_get_0(t);
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          w_17 = t;
          t_17 :
          if(((ATgetType(w_17) == AT_LIST) && ((ATermList) w_17 != ATempty)))
            {
              x_17 = ATgetFirst((ATermList) w_17);
              y_17 = (ATerm) ATgetNext((ATermList) w_17);
              {
                if(((v_17 != NULL) && (v_17 != x_17)))
                  _fail(x_17);
                else
                  v_17 = x_17;
                {
                  if(((u_17 != NULL) && (u_17 != y_17)))
                    _fail(y_17);
                  else
                    u_17 = y_17;
                  {
                    t = not_null(v_17);
                    {
                      ATerm v_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, v_1);
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
      t = v_12;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_n_11;
          return(t);
        }
        t = end_scope_1(t, w_1);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL;
        ATerm c_18 = NULL;
        t = term_p_11;
        {
          t = get_config_0(t);
          {
            c_18 = t;
            if(((b_18 != NULL) && (b_18 != c_18)))
              _fail(c_18);
            else
              b_18 = c_18;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_18));
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = term_y_9;
      }
    {
      t = k_65(t);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm b_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_o_11;
              t = get_config_0(t);
              LocalPopChoice(j_13);
            }
          else
            {
              t = b_13;
              t = term_e_12;
            }
          return(t);
        }
        t = rename_to_1(t, y_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, x_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = SSL_string_to_int(not_null(f_18));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  l_18 :
  if(match_string(n_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_18) == AT_LIST) && ((ATermList) n_18 != ATempty)))
        {
          o_18 = ATgetFirst((ATermList) n_18);
          p_18 = (ATerm) ATgetNext((ATermList) n_18);
          m_18 :
          if(((ATgetType(p_18) == AT_LIST) && ((ATermList) p_18 != ATempty)))
            {
              q_18 = ATgetFirst((ATermList) p_18);
              r_18 = (ATerm) ATgetNext((ATermList) p_18);
              {
                ATerm v_18 = NULL;
                ATerm o_13;
                o_13 = t;
                {
                  t = not_null(o_18);
                  t = j_0(t);
                }
                t = o_13;
                {
                  ATerm w_18 = NULL;
                  t = not_null(q_18);
                  {
                    t = k_0(t);
                    {
                      w_18 = t;
                      if(((v_18 != NULL) && (v_18 != w_18)))
                        _fail(w_18);
                      else
                        v_18 = w_18;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_18)), not_null(v_18));
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
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm p_19 = NULL;
        p_19 = t;
        a_19 :
        if(!(match_string(p_19, "-i")))
          {
            if(!(match_string(p_19, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        ATerm s_19 = NULL;
        ATerm r_13;
        r_13 = t;
        {
          ATerm q_19 = NULL;
          ATerm r_19 = NULL;
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(q_19));
            t = set_config_0(t);
          }
        }
        t = r_13;
        {
          ATerm t_19 = NULL;
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_19));
        }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_s_13;
        return(t);
      }
      t = ArgOption_3(t, z_1, a_2, c_2);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm u_19 = NULL;
              u_19 = t;
              d_19 :
              if(!(match_string(u_19, "-o")))
                {
                  if(!(match_string(u_19, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm x_19 = NULL;
              ATerm z_13;
              z_13 = t;
              {
                ATerm v_19 = NULL;
                ATerm w_19 = NULL;
                w_19 = t;
                if(((v_19 != NULL) && (v_19 != w_19)))
                  _fail(w_19);
                else
                  v_19 = w_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(v_19));
                  t = set_config_0(t);
                }
              }
              t = z_13;
              {
                ATerm y_19 = NULL;
                y_19 = t;
                if(((x_19 != NULL) && (x_19 != y_19)))
                  _fail(y_19);
                else
                  x_19 = y_19;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_19));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_a_14;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm z_19 = NULL;
                    z_19 = t;
                    g_19 :
                    if(!(match_string(z_19, "-S")))
                      {
                        if(!(match_string(z_19, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_2 (ATerm t)
                  {
                    t = term_e_14;
                    t = set_config_0(t);
                    t = term_h_14;
                    return(t);
                  }
                  ATerm o_2 (ATerm t)
                  {
                    t = term_m_14;
                    return(t);
                  }
                  t = Option_3(t, h_2, j_2, o_2);
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_2 (ATerm t)
                        {
                          ATerm a_20 = NULL;
                          a_20 = t;
                          h_19 :
                          if(!(match_string(a_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm q_2 (ATerm t)
                        {
                          ATerm j_20 = NULL;
                          ATerm p_14;
                          p_14 = t;
                          {
                            ATerm h_20 = NULL;
                            ATerm i_20 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_20 = t;
                              if(((h_20 != NULL) && (h_20 != i_20)))
                                _fail(i_20);
                              else
                                h_20 = i_20;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_7, not_null(h_20));
                              t = set_config_0(t);
                            }
                          }
                          t = p_14;
                          {
                            ATerm k_20 = NULL;
                            k_20 = t;
                            if(((j_20 != NULL) && (j_20 != k_20)))
                              _fail(k_20);
                            else
                              j_20 = k_20;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_20));
                          }
                          return(t);
                        }
                        ATerm r_2 (ATerm t)
                        {
                          t = term_u_14;
                          return(t);
                        }
                        t = ArgOption_3(t, p_2, q_2, r_2);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = n_14;
                        {
                          ATerm v_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_2 (ATerm t)
                              {
                                ATerm l_20 = NULL;
                                l_20 = t;
                                k_19 :
                                if(!(match_string(l_20, "-k")))
                                  {
                                    if(!(match_string(l_20, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm x_2 (ATerm t)
                              {
                                ATerm x_14;
                                x_14 = t;
                                {
                                  ATerm m_20 = NULL;
                                  ATerm n_20 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    n_20 = t;
                                    if(((m_20 != NULL) && (m_20 != n_20)))
                                      _fail(n_20);
                                    else
                                      m_20 = n_20;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(m_20));
                                    t = set_config_0(t);
                                  }
                                }
                                t = x_14;
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                t = term_z_14;
                                return(t);
                              }
                              t = ArgOption_3(t, w_2, x_2, a_3);
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm b_15 = t;
                                int f_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_3 (ATerm t)
                                    {
                                      ATerm o_20 = NULL;
                                      o_20 = t;
                                      m_19 :
                                      if(!(match_string(o_20, "-v")))
                                        {
                                          if(!(match_string(o_20, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      t = term_k_15;
                                      t = set_config_0(t);
                                      t = term_l_15;
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = term_m_15;
                                      return(t);
                                    }
                                    t = Option_3(t, b_3, d_3, e_3);
                                    LocalPopChoice(f_15);
                                  }
                                else
                                  {
                                    t = b_15;
                                    {
                                      ATerm n_15 = t;
                                      int o_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_3 (ATerm t)
                                          {
                                            ATerm p_20 = NULL;
                                            p_20 = t;
                                            n_19 :
                                            if(!(match_string(p_20, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_3 (ATerm t)
                                          {
                                            t = term_u_15;
                                            t = set_config_0(t);
                                            t = term_v_15;
                                            return(t);
                                          }
                                          ATerm l_3 (ATerm t)
                                          {
                                            t = term_w_15;
                                            return(t);
                                          }
                                          t = Option_3(t, j_3, k_3, l_3);
                                          LocalPopChoice(o_15);
                                        }
                                      else
                                        {
                                          t = n_15;
                                          {
                                            ATerm m_3 (ATerm t)
                                            {
                                              ATerm q_20 = NULL;
                                              q_20 = t;
                                              o_19 :
                                              if(!(match_string(q_20, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_3 (ATerm t)
                                            {
                                              t = term_c_16;
                                              t = set_config_0(t);
                                              t = term_d_16;
                                              return(t);
                                            }
                                            ATerm o_3 (ATerm t)
                                            {
                                              t = term_e_16;
                                              return(t);
                                            }
                                            t = Option_3(t, m_3, n_3, o_3);
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
  ATerm a_21 = NULL;
  ATerm f_16;
  f_16 = t;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm b_21 = NULL,c_21 = NULL;
      b_21 = t;
      z_20 :
      if(match_cons(b_21, sym_Program_1))
        {
          c_21 = ATgetArgument(b_21, 0);
          if(((a_21 != NULL) && (a_21 != c_21)))
            _fail(c_21);
          else
            a_21 = c_21;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), not_null(a_21)), term_g_16));
      {
        t = printnl_0(t);
        {
          t = term_k_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATempty, term_l_16));
  {
    t = printnl_0(t);
    {
      t = term_k_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm j_21 = NULL;
  ATerm l_21 = NULL;
  j_21 = t;
  {
    ATerm m_21 = NULL;
    ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
    t = not_null(j_21);
    {
      m_21 = t;
      {
        t = SSL_explode_term(not_null(m_21));
        {
          o_21 = t;
          h_21 :
          if(match_cons(o_21, sym__2))
            {
              p_21 = ATgetArgument(o_21, 0);
              q_21 = ATgetArgument(o_21, 1);
              i_21 :
              if(match_string(p_21, ""))
                {
                  if(((l_21 != NULL) && (l_21 != q_21)))
                    _fail(q_21);
                  else
                    l_21 = q_21;
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
      t = not_null(l_21);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        t = not_null(x_21);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(y_21);
            return(t);
          }
          t = at_end_1(t, q_3);
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
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_45 (ATerm), ATerm x_45 (ATerm))
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym__2))
    {
      j_22 = ATgetArgument(i_22, 0);
      k_22 = ATgetArgument(i_22, 1);
      {
        ATerm o_22 = NULL,q_22 = NULL;
        ATerm p_22 = NULL;
        t = SSLgetAnnotations(not_null(i_22));
        {
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
        {
          t = not_null(j_22);
          {
            ATerm s_22 = NULL;
            t = w_45(t);
            {
              q_22 = t;
              {
                t = not_null(k_22);
                {
                  ATerm u_22 = NULL;
                  t = x_45(t);
                  {
                    s_22 = t;
                    {
                      ATerm v_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_22), not_null(s_22)), not_null(o_22));
                      {
                        v_22 = t;
                        if(((u_22 != NULL) && (u_22 != v_22)))
                          _fail(v_22);
                        else
                          u_22 = v_22;
                      }
                      t = not_null(u_22);
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
ATerm debug_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm x_16;
  x_16 = t;
  {
    ATerm d_23 = NULL,f_23 = NULL;
    ATerm y_16;
    y_16 = t;
    {
      ATerm e_23 = NULL;
      t = f_64(t);
      {
        e_23 = t;
        if(((d_23 != NULL) && (d_23 != e_23)))
          _fail(e_23);
        else
          d_23 = e_23;
      }
    }
    t = y_16;
    {
      ATerm g_23 = NULL;
      g_23 = t;
      if(((f_23 != NULL) && (f_23 != g_23)))
        _fail(g_23);
      else
        f_23 = g_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_23)), not_null(d_23)));
        t = printnl_0(t);
      }
    }
  }
  t = x_16;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_23 = NULL;
  k_23 = t;
  t = SSL_is_string(not_null(k_23));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_4);
            LocalPopChoice(d_17);
          }
        else
          {
            t = b_17;
            {
              ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
              t_23 = t;
              s_23 :
              if(match_cons(t_23, sym_Path_1))
                {
                  u_23 = ATgetArgument(t_23, 0);
                  t = not_null(u_23);
                }
              else
                {
                  if(match_cons(t_23, sym_Var_1))
                    {
                      u_23 = ATgetArgument(t_23, 0);
                      {
                        t = not_null(u_23);
                        {
                          ATerm e_17 = t;
                          int f_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_17);
                            }
                          else
                            {
                              t = e_17;
                              {
                                ATerm f_4 (ATerm t)
                                {
                                  t = term_g_17;
                                  return(t);
                                }
                                t = debug_1(t, f_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_23, sym_Prefix_2))
                        {
                          u_23 = ATgetArgument(t_23, 0);
                          v_23 = ATgetArgument(t_23, 1);
                          {
                            ATerm a_24 = NULL,c_24 = NULL;
                            ATerm l_17;
                            l_17 = t;
                            {
                              ATerm b_24 = NULL;
                              t = not_null(u_23);
                              {
                                t = eval_config_0(t);
                                {
                                  b_24 = t;
                                  if(((a_24 != NULL) && (a_24 != b_24)))
                                    _fail(b_24);
                                  else
                                    a_24 = b_24;
                                }
                              }
                            }
                            t = l_17;
                            {
                              ATerm d_24 = NULL;
                              t = not_null(v_23);
                              {
                                t = eval_config_0(t);
                                {
                                  d_24 = t;
                                  if(((c_24 != NULL) && (c_24 != d_24)))
                                    _fail(d_24);
                                  else
                                    c_24 = d_24;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), not_null(c_24));
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
  ATerm l_24 = NULL;
  l_24 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(l_24));
    {
      t = table_get_0(t);
      {
        ATerm g_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_17;
            n_17 = t;
            {
              ATerm n_24 = NULL;
              ATerm o_24 = NULL;
              o_24 = t;
              if(((n_24 != NULL) && (n_24 != o_24)))
                _fail(o_24);
              else
                n_24 = o_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_17, not_null(l_24), not_null(n_24));
                t = table_put_0(t);
              }
            }
            t = n_17;
          }
          return(t);
        }
        t = try_1(t, g_4);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_TicksToSeconds(not_null(s_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_24), not_null(z_24));
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = SSL_addr(not_null(y_24), not_null(z_24));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_67(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
        o_25 = t;
        n_25 :
        if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
          {
            p_25 = ATgetFirst((ATermList) o_25);
            q_25 = (ATerm) ATgetNext((ATermList) o_25);
            {
              ATerm w_25 = NULL;
              ATerm x_25 = NULL;
              t = not_null(q_25);
              {
                t = foldr_2(t, g_67, h_67);
                {
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(w_25));
                t = h_67(t);
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
ATerm crush_2 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm))
{
  ATerm g_26 = NULL;
  ATerm i_26 = NULL;
  g_26 = t;
  {
    ATerm j_26 = NULL;
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
    t = not_null(g_26);
    {
      j_26 = t;
      {
        t = SSL_explode_term(not_null(j_26));
        {
          l_26 = t;
          e_26 :
          if(match_cons(l_26, sym__2))
            {
              m_26 = ATgetArgument(l_26, 0);
              n_26 = ATgetArgument(l_26, 1);
              if(((i_26 != NULL) && (i_26 != n_26)))
                _fail(n_26);
              else
                i_26 = n_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_26);
      t = foldr_2(t, y_68, z_68);
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
    ATerm h_4 (ATerm t)
    {
      t = term_d_14;
      return(t);
    }
    t = crush_2(t, h_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym__2))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      {
        ATerm s_17;
        s_17 = t;
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_26), not_null(v_26));
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              t = SSL_gtr(not_null(u_26), not_null(v_26));
            }
        }
        t = s_17;
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
  ATerm b_27 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
      c_27 = t;
      a_27 :
      if(match_cons(c_27, sym__2))
        {
          d_27 = ATgetArgument(c_27, 0);
          e_27 = ATgetArgument(c_27, 1);
          {
            if(((b_27 != NULL) && (b_27 != d_27)))
              _fail(d_27);
            else
              b_27 = d_27;
            if(((b_27 != NULL) && (b_27 != e_27)))
              _fail(e_27);
            else
              b_27 = e_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm g_18;
    g_18 = t;
    {
      ATerm h_27 = NULL;
      ATerm i_27 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          i_27 = t;
          if(((h_27 != NULL) && (h_27 != i_27)))
            _fail(i_27);
          else
            h_27 = i_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), term_k_16);
        t = geq_0(t);
      }
    }
    t = g_18;
    t = d_79(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm m_27 = NULL,o_27 = NULL;
    ATerm h_18;
    h_18 = t;
    {
      ATerm n_27 = NULL;
      t = run_time_0(t);
      {
        n_27 = t;
        if(((m_27 != NULL) && (m_27 != n_27)))
          _fail(n_27);
        else
          m_27 = n_27;
      }
    }
    t = h_18;
    {
      ATerm p_27 = NULL;
      t = term_i_18;
      {
        t = get_config_0(t);
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_18), not_null(m_27)), term_j_18), not_null(o_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_4);
  {
    t = term_d_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Version_0))
    {
      ATerm y_27 = NULL,a_28 = NULL;
      ATerm s_18;
      s_18 = t;
      {
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      t = s_18;
      {
        ATerm d_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_27));
        {
          d_28 = t;
          if(((a_28 != NULL) && (a_28 != d_28)))
            _fail(d_28);
          else
            a_28 = d_28;
        }
        t = not_null(a_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_63 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_4);
  t = t_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_table_create(not_null(i_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  {
    ATerm z_18;
    z_18 = t;
    {
      t = term_b_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_c_19, not_null(m_28));
          t = table_put_0(t);
        }
      }
    }
    t = z_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = SSL_table_destroy(not_null(q_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_exit(not_null(u_28));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = SSL_implode_string(not_null(y_28));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm d_29 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_29);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        {
          t = Nil_0(t);
          t = l_73(t);
        }
      }
    return(t);
  }
  t = d_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm g_29 = NULL,i_29 = NULL,j_29 = NULL;
        g_29 = t;
        f_29 :
        if(((ATgetType(g_29) == AT_LIST) && ((ATermList) g_29 != ATempty)))
          {
            i_29 = ATgetFirst((ATermList) g_29);
            j_29 = (ATerm) ATgetNext((ATermList) g_29);
            {
              t = not_null(i_29);
              {
                ATerm n_4 (ATerm t)
                {
                  t = not_null(j_29);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_4);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_explode_string(not_null(q_29));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm t_29 (ATerm t)
  {
    ATerm l_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = l_19;
        t = Cons_2(t, w_72, t_29);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  c_30 = t;
  z_29 :
  if(((ATgetType(c_30) == AT_LIST) && ((ATermList) c_30 != ATempty)))
    {
      a_30 = ATgetFirst((ATermList) c_30);
      b_30 = (ATerm) ATgetNext((ATermList) c_30);
      {
        ATerm i_30 = NULL;
        t = not_null(b_30);
        {
          ATerm c_20;
          c_20 = t;
          {
            ATerm j_30 = NULL,n_30 = NULL,p_30 = NULL;
            ATerm d_20;
            d_20 = t;
            {
              ATerm k_30 = NULL;
              t = i_0(t);
              {
                k_30 = t;
                if(((j_30 != NULL) && (j_30 != k_30)))
                  _fail(k_30);
                else
                  j_30 = k_30;
              }
            }
            t = d_20;
            {
              ATerm o_30 = NULL;
              t = not_null(a_30);
              {
                t = h_0(t);
                {
                  o_30 = t;
                  if(((n_30 != NULL) && (n_30 != o_30)))
                    _fail(o_30);
                  else
                    n_30 = o_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_30)), not_null(n_30));
                {
                  p_30 = t;
                  if(((i_30 != NULL) && (i_30 != p_30)))
                    _fail(p_30);
                  else
                    i_30 = p_30;
                }
              }
            }
          }
          t = c_20;
          {
            ATerm o_4 (ATerm t)
            {
              t = not_null(i_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_30 == ATempty))
        {
          {
            t = term_o_8;
            t = i_0(t);
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
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Program_1))
    {
      r_31 = ATgetArgument(q_31, 0);
      {
        ATerm a_32 = NULL,f_32 = NULL;
        ATerm e_32 = NULL;
        t = SSLgetAnnotations(not_null(q_31));
        {
          e_32 = t;
          if(((a_32 != NULL) && (a_32 != e_32)))
            _fail(e_32);
          else
            a_32 = e_32;
        }
        {
          t = not_null(r_31);
          {
            ATerm k_32 = NULL;
            t = i_47(t);
            {
              f_32 = t;
              {
                ATerm l_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_32)), not_null(a_32));
                {
                  l_32 = t;
                  if(((k_32 != NULL) && (k_32 != l_32)))
                    _fail(l_32);
                  else
                    k_32 = l_32;
                }
                t = not_null(k_32);
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
  ATerm c_33 = NULL;
  ATerm q_4 (ATerm t)
  {
    ATerm r_4 (ATerm t)
    {
      ATerm d_33 = NULL;
      d_33 = t;
      if(((c_33 != NULL) && (c_33 != d_33)))
        _fail(d_33);
      else
        c_33 = d_33;
      return(t);
    }
    t = Program_1(t, r_4);
    return(t);
  }
  t = option_defined_1(t, q_4);
  {
    ATerm w_4 (ATerm t)
    {
      ATerm e_33 = NULL;
      ATerm f_33 = NULL;
      t = term_o_8;
      {
        ATerm x_4 (ATerm t)
        {
          t = not_null(c_33);
          return(t);
        }
        t = short_description_1(t, x_4);
        {
          t = concat_strings_0(t);
          {
            f_33 = t;
            if(((e_33 != NULL) && (e_33 != f_33)))
              _fail(f_33);
            else
              e_33 = f_33;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATempty, not_null(e_33)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, w_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATempty, term_e_20));
      {
        t = printnl_0(t);
        {
          t = term_r_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm g_33 = NULL;
                  g_33 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_33)), term_s_20));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm n_33 = NULL;
                    ATerm o_33 = NULL;
                    t = term_o_8;
                    {
                      ATerm c_5 (ATerm t)
                      {
                        t = not_null(c_33);
                        return(t);
                      }
                      t = long_description_1(t, c_5);
                      {
                        t = concat_strings_0(t);
                        {
                          o_33 = t;
                          if(((n_33 != NULL) && (n_33 != o_33)))
                            _fail(o_33);
                          else
                            n_33 = o_33;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_33)), term_t_20));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym__2))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      {
        ATerm u_20;
        u_20 = t;
        t = SSL_printnl(not_null(w_33), not_null(x_33));
        t = u_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_47 (ATerm))
{
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  h_34 :
  if(match_cons(i_34, sym_Undefined_1))
    {
      j_34 = ATgetArgument(i_34, 0);
      {
        ATerm m_34 = NULL,o_34 = NULL;
        ATerm n_34 = NULL;
        t = SSLgetAnnotations(not_null(i_34));
        {
          n_34 = t;
          if(((m_34 != NULL) && (m_34 != n_34)))
            _fail(n_34);
          else
            m_34 = n_34;
        }
        {
          t = not_null(j_34);
          {
            ATerm q_34 = NULL;
            t = j_47(t);
            {
              o_34 = t;
              {
                ATerm r_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_34)), not_null(m_34));
                {
                  r_34 = t;
                  if(((q_34 != NULL) && (q_34 != r_34)))
                    _fail(r_34);
                  else
                    q_34 = r_34;
                }
                t = not_null(q_34);
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
ATerm fetch_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm w_34 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_73, _id);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = Cons_2(t, _id, w_34);
      }
    return(t);
  }
  t = w_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_62 (ATerm))
{
  t = fetch_1(t, o_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym_Help_0))
    {
      ATerm d_35 = NULL,f_35 = NULL;
      ATerm x_20;
      x_20 = t;
      {
        ATerm e_35 = NULL;
        t = SSLgetAnnotations(not_null(b_35));
        {
          e_35 = t;
          if(((d_35 != NULL) && (d_35 != e_35)))
            _fail(e_35);
          else
            d_35 = e_35;
        }
      }
      t = x_20;
      {
        ATerm g_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_35));
        {
          g_35 = t;
          if(((f_35 != NULL) && (f_35 != g_35)))
            _fail(g_35);
          else
            f_35 = g_35;
        }
        t = not_null(f_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm y_20 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_75(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = y_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      t = SSL_table_get(not_null(n_35), not_null(o_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__3))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      y_35 = ATgetArgument(v_35, 2);
      {
        ATerm e_21;
        e_21 = t;
        {
          ATerm d_36 = NULL;
          ATerm e_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_35), not_null(x_35));
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = (ATerm) ATempty;
              }
            {
              e_36 = t;
              if(((d_36 != NULL) && (d_36 != e_36)))
                _fail(e_36);
              else
                d_36 = e_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_35), not_null(x_35), (ATerm) ATinsert(CheckATermList(not_null(d_36)), not_null(y_35)));
            t = table_put_0(t);
          }
        }
        t = e_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm i_36 = NULL;
  ATerm j_36 = NULL;
  t = term_o_8;
  {
    t = o_61(t);
    {
      j_36 = t;
      if(((i_36 != NULL) && (i_36 != j_36)))
        _fail(j_36);
      else
        i_36 = j_36;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_20, term_g_20, not_null(i_36));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_string(p_36, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_36) == AT_LIST) && ((ATermList) p_36 != ATempty)))
        {
          q_36 = ATgetFirst((ATermList) p_36);
          r_36 = (ATerm) ATgetNext((ATermList) p_36);
          {
            ATerm u_36 = NULL;
            ATerm k_21;
            k_21 = t;
            {
              t = not_null(q_36);
              t = a_0(t);
            }
            t = k_21;
            {
              ATerm v_36 = NULL;
              t = term_o_8;
              {
                t = b_0(t);
                {
                  v_36 = t;
                  if(((u_36 != NULL) && (u_36 != v_36)))
                    _fail(v_36);
                  else
                    u_36 = v_36;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_36)), not_null(u_36));
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
  ATerm d_5 (ATerm t)
  {
    ATerm a_37 = NULL;
    a_37 = t;
    z_36 :
    if(!(match_string(a_37, "--help")))
      {
        if(!(match_string(a_37, "-h")))
          {
            if(!(match_string(a_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_n_21;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_r_21;
    return(t);
  }
  t = Option_3(t, d_5, i_5, j_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(((ATgetType(d_37) == AT_LIST) && ((ATermList) d_37 != ATempty)))
    {
      e_37 = ATgetFirst((ATermList) d_37);
      f_37 = (ATerm) ATgetNext((ATermList) d_37);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_37)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  o_37 :
  if(((ATgetType(p_37) == AT_LIST) && ((ATermList) p_37 != ATempty)))
    {
      q_37 = ATgetFirst((ATermList) p_37);
      r_37 = (ATerm) ATgetNext((ATermList) p_37);
      {
        ATerm v_37 = NULL,x_37 = NULL;
        ATerm w_37 = NULL;
        t = SSLgetAnnotations(not_null(p_37));
        {
          w_37 = t;
          if(((v_37 != NULL) && (v_37 != w_37)))
            _fail(w_37);
          else
            v_37 = w_37;
        }
        {
          t = not_null(q_37);
          {
            ATerm z_37 = NULL;
            t = i_52(t);
            {
              x_37 = t;
              {
                t = not_null(r_37);
                {
                  ATerm b_38 = NULL;
                  t = j_52(t);
                  {
                    z_37 = t;
                    {
                      ATerm c_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_37)), not_null(x_37)), not_null(v_37));
                      {
                        c_38 = t;
                        if(((b_38 != NULL) && (b_38 != c_38)))
                          _fail(c_38);
                        else
                          b_38 = c_38;
                      }
                      t = not_null(b_38);
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
  ATerm m_38 = NULL;
  m_38 = t;
  l_38 :
  if(((ATermList) m_38 == ATempty))
    {
      {
        ATerm o_38 = NULL,q_38 = NULL;
        ATerm s_21;
        s_21 = t;
        {
          ATerm p_38 = NULL;
          t = SSLgetAnnotations(not_null(m_38));
          {
            p_38 = t;
            if(((o_38 != NULL) && (o_38 != p_38)))
              _fail(p_38);
            else
              o_38 = p_38;
          }
        }
        t = s_21;
        {
          ATerm r_38 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_38));
          {
            r_38 = t;
            if(((q_38 != NULL) && (q_38 != r_38)))
              _fail(r_38);
            else
              q_38 = r_38;
          }
          t = not_null(q_38);
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
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym__2))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_17, not_null(y_38), not_null(z_38));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm t_21;
  t_21 = t;
  {
    ATerm k_5 (ATerm t)
    {
      t = term_u_21;
      t = m_61(t);
      return(t);
    }
    t = try_1(t, k_5);
  }
  t = t_21;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm h_39 = NULL;
      ATerm z_21;
      z_21 = t;
      {
        ATerm f_39 = NULL;
        ATerm g_39 = NULL;
        g_39 = t;
        if(((f_39 != NULL) && (f_39 != g_39)))
          _fail(g_39);
        else
          f_39 = g_39;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_18, not_null(f_39));
          t = set_config_0(t);
        }
      }
      t = z_21;
      {
        ATerm i_39 = NULL;
        i_39 = t;
        if(((h_39 != NULL) && (h_39 != i_39)))
          _fail(i_39);
        else
          h_39 = i_39;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_39));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              {
                t = m_61(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_5, n_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  ATerm e_22;
  e_22 = t;
  {
    ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
    r_39 = t;
    n_39 :
    if(match_cons(r_39, sym__3))
      {
        s_39 = ATgetArgument(r_39, 0);
        t_39 = ATgetArgument(r_39, 1);
        u_39 = ATgetArgument(r_39, 2);
        {
          if(((o_39 != NULL) && (o_39 != s_39)))
            _fail(s_39);
          else
            o_39 = s_39;
          {
            if(((p_39 != NULL) && (p_39 != t_39)))
              _fail(t_39);
            else
              p_39 = t_39;
            {
              if(((q_39 != NULL) && (q_39 != u_39)))
                _fail(u_39);
              else
                q_39 = u_39;
              t = SSL_table_put(not_null(o_39), not_null(p_39), not_null(q_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm x_39 = NULL;
  ATerm f_22;
  f_22 = t;
  {
    t = term_g_22;
    t = table_put_0(t);
  }
  t = f_22;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm l_22 = t;
      int m_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_61(t);
          LocalPopChoice(m_22);
        }
      else
        {
          t = l_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm n_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_14;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_22);
          }
        else
          {
            t = n_22;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm y_39 = NULL;
                  y_39 = t;
                  if(((x_39 != NULL) && (x_39 != y_39)))
                    _fail(y_39);
                  else
                    x_39 = y_39;
                  return(t);
                }
                t = Undefined_1(t, s_5);
                return(t);
              }
              t = option_defined_1(t, q_5);
              {
                ATerm t_22;
                t_22 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_39)), term_w_22));
                  t = printnl_0(t);
                }
                t = t_22;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_5);
      {
        ATerm x_22;
        x_22 = t;
        {
          t = term_f_20;
          t = table_destroy_0(t);
        }
        t = x_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm s_62 (ATerm), ATerm t_62 (ATerm))
{
  t = parse_options_1(t, q_62);
  {
    t = store_options_0(t);
    {
      t = s_62(t);
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_62);
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm a_23 = t;
              int b_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_62(t);
                  t = report_success_0(t);
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  t = option_wrap_4(t, u_62, default_usage_0, _id, v_62);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    t = xtc_io_1(t, l_65);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, u_5);
  return(t);
}
ATerm io_pp_c_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      t = term_c_23;
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm b_40 = NULL;
      ATerm c_40 = NULL;
      t = term_h_23;
      {
        t = xtc_find_0(t);
        {
          t = remove_extension_0(t);
          {
            c_40 = t;
            if(((b_40 != NULL) && (b_40 != c_40)))
              _fail(c_40);
            else
              b_40 = c_40;
          }
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_40)), term_i_23);
      return(t);
    }
    t = xtc_transform_2(t, y_5, z_5);
    {
      ATerm a_6 (ATerm t)
      {
        t = term_j_23;
        return(t);
      }
      t = xtc_transform_1(t, a_6);
      {
        ATerm d_6 (ATerm t)
        {
          t = term_l_23;
          return(t);
        }
        t = xtc_transform_1(t, d_6);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, x_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_c_0(t);
  return(t);
}
