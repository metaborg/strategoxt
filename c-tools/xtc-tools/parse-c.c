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
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_d_21;
ATerm term_s_20;
ATerm term_h_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_u_16;
ATerm term_h_16;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_z_11;
ATerm term_j_11;
ATerm term_l_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_q_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_i_6;
ATerm term_g_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym__2, term_a_6, term_b_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__2, term_a_6, term_m_6);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_b_9);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_u_5, term_o_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_w_6);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_w_6);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_w_6);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__3, term_b_19, term_c_19, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm n_65 (ATerm));
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
ATerm need_help_1 (ATerm, ATerm p_61 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_73 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_59 (ATerm));
ATerm map_1 (ATerm, ATerm w_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_59 (ATerm));
ATerm Program_1 (ATerm, ATerm i_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_60 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_59 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_59 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_59 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm p_60 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_60 (ATerm), ATerm r_60 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm l_65 (ATerm));
ATerm io_parse_c_0 (ATerm);
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
ATerm table_keys_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  t = SSL_table_keys(not_null(d_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm b_2 = NULL;
        ATerm d_2 = NULL;
        b_2 = t;
        {
          ATerm h_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_1), not_null(b_2));
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
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm o_5;
    o_5 = t;
    {
      ATerm m_2 = NULL;
      ATerm n_2 = NULL;
      t = term_u_5;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_2), term_x_5);
        t = geq_0(t);
      }
    }
    t = o_5;
    t = h_79(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_5;
  y_5 = t;
  {
    ATerm q_2 = NULL;
    ATerm r_2 = NULL;
    r_2 = t;
    if(((q_2 != NULL) && (q_2 != r_2)))
      _fail(r_2);
    else
      q_2 = r_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_5, not_null(q_2));
      t = printnl_0(t);
    }
  }
  t = y_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm x_2 = NULL;
  ATerm z_2 = NULL,a_3 = NULL;
  x_2 = t;
  {
    ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_2)));
    {
      t = table_get_0(t);
      {
        b_3 = t;
        v_2 :
        if(((ATgetType(b_3) == AT_LIST) && ((ATermList) b_3 != ATempty)))
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
        t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_3)));
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
    t = term_g_6;
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
ATerm table_putlist_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym__2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      {
        t = not_null(d_4);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
            g_4 = t;
            z_3 :
            if(match_cons(g_4, sym__2))
              {
                h_4 = ATgetArgument(g_4, 0);
                i_4 = ATgetArgument(g_4, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_4), not_null(h_4), not_null(i_4));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_0);
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
  ATerm t_0 (ATerm t)
  {
    ATerm h_6;
    h_6 = t;
    {
      ATerm o_4 = NULL;
      ATerm p_4 = NULL;
      t = term_u_5;
      {
        t = get_config_0(t);
        {
          p_4 = t;
          if(((o_4 != NULL) && (o_4 != p_4)))
            _fail(p_4);
          else
            o_4 = p_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), term_i_6);
        t = geq_0(t);
      }
    }
    t = h_6;
    t = g_79(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm t_4 = NULL;
  ATerm v_4 = NULL;
  t_4 = t;
  {
    ATerm j_6 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_4)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_6;
      }
    {
      ATerm k_6;
      k_6 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_6, term_m_6, not_null(t_4));
        t = table_put_0(t);
      }
      t = k_6;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_p_6;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm q_6 = t;
          int r_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(r_6);
            }
          else
            {
              t = q_6;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_4 = NULL;
            w_4 = t;
            if(((v_4 != NULL) && (v_4 != w_4)))
              _fail(w_4);
            else
              v_4 = w_4;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_a_6, not_null(v_4));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_4)), term_w_6);
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
  ATerm a_5 = NULL;
  a_5 = t;
  t = SSL_getenv(not_null(a_5));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_6;
      t = get_config_0(t);
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm a_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_7;
            t = getenv_0(t);
            LocalPopChoice(f_7);
          }
        else
          {
            t = a_7;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = term_h_7;
      return(t);
    }
    t = debug_1(t, x_0);
    return(t);
  }
  t = if_verbose5_1(t, w_0);
  {
    ATerm i_7;
    i_7 = t;
    {
      ATerm j_7 = t;
      int p_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_7;
          t = table_get_0(t);
          LocalPopChoice(p_7);
        }
      else
        {
          t = j_7;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = i_7;
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = term_y_7;
          return(t);
        }
        t = debug_1(t, z_0);
        return(t);
      }
      t = if_verbose5_1(t, y_0);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          t = term_b_8;
          return(t);
        }
        t = debug_1(t, b_1);
        return(t);
      }
      t = if_verbose5_1(t, a_1);
      {
        t = xtc_load_0(t);
        {
          ATerm d_8 = t;
          int e_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(e_8);
            }
          else
            {
              t = d_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = term_b_8;
                return(t);
              }
              t = debug_1(t, d_1);
              return(t);
            }
            t = if_verbose5_1(t, c_1);
          }
        }
      }
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm e_5 = NULL;
        ATerm f_5 = NULL;
        f_5 = t;
        if(((e_5 != NULL) && (e_5 != f_5)))
          _fail(f_5);
        else
          e_5 = f_5;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_8), not_null(e_5)), term_n_8);
          {
            t = error_0(t);
            {
              ATerm e_1 (ATerm t)
              {
                t = term_a_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = term_p_8;
                      return(t);
                    }
                    t = debug_1(t, f_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, e_1);
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
  ATerm i_5 = NULL;
  i_5 = t;
  t = SSL_ReadFromFile(not_null(i_5));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_stdin_0))
    {
      ATerm s_5 = NULL;
      ATerm t_5 = NULL;
      t = term_q_8;
      {
        t = ReadFromFile_0(t);
        {
          t_5 = t;
          if(((s_5 != NULL) && (s_5 != t_5)))
            _fail(t_5);
          else
            s_5 = t_5;
        }
      }
      t = not_null(s_5);
    }
  else
    {
      if(match_cons(q_5, sym_FILE_1))
        {
          r_5 = ATgetArgument(q_5, 0);
          {
            ATerm v_5 = NULL;
            ATerm w_5 = NULL;
            t = not_null(r_5);
            {
              t = ReadFromFile_0(t);
              {
                w_5 = t;
                if(((v_5 != NULL) && (v_5 != w_5)))
                  _fail(w_5);
                else
                  v_5 = w_5;
              }
            }
            t = not_null(v_5);
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
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      t = SSL_WriteToBinaryFile(not_null(e_6), not_null(f_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm l_6 = NULL;
  ATerm n_6 = NULL;
  l_6 = t;
  {
    ATerm o_6 = NULL;
    t = xtc_new_file_0(t);
    {
      o_6 = t;
      {
        if(((n_6 != NULL) && (n_6 != o_6)))
          _fail(o_6);
        else
          n_6 = o_6;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), not_null(l_6));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_6));
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
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      t = SSL_call(not_null(u_6), not_null(v_6));
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
  ATerm b_7 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm c_7 = NULL;
    t = m_65(t);
    {
      t = xtc_find_warning_0(t);
      {
        c_7 = t;
        if(((b_7 != NULL) && (b_7 != c_7)))
          _fail(c_7);
        else
          b_7 = c_7;
      }
    }
  }
  t = r_8;
  {
    ATerm t_8;
    t_8 = t;
    {
      ATerm d_7 = NULL;
      ATerm e_7 = NULL;
      e_7 = t;
      if(((d_7 != NULL) && (d_7 != e_7)))
        _fail(e_7);
      else
        d_7 = e_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), not_null(d_7));
        t = call_0(t);
      }
    }
    t = t_8;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym__2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
        ATerm w_8;
        w_8 = t;
        {
          ATerm u_7 = NULL;
          ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
          t = c_65(t);
          {
            u_7 = t;
            {
              if(((r_7 != NULL) && (r_7 != u_7)))
                _fail(u_7);
              else
                r_7 = u_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), not_null(n_7), not_null(o_7));
                {
                  t = table_push_0(t);
                  {
                    ATerm x_8 = t;
                    int y_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_b_9);
                        t = table_get_0(t);
                        LocalPopChoice(y_8);
                      }
                    else
                      {
                        t = x_8;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_7 = t;
                      k_7 :
                      if(((ATgetType(v_7) == AT_LIST) && ((ATermList) v_7 != ATempty)))
                        {
                          w_7 = ATgetFirst((ATermList) v_7);
                          x_7 = (ATerm) ATgetNext((ATermList) v_7);
                          {
                            if(((s_7 != NULL) && (s_7 != w_7)))
                              _fail(w_7);
                            else
                              s_7 = w_7;
                            {
                              if(((t_7 != NULL) && (t_7 != x_7)))
                                _fail(x_7);
                              else
                                t_7 = x_7;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), term_b_9, (ATerm) ATinsert(CheckATermList(not_null(t_7)), (ATerm) ATinsert(CheckATermList(not_null(s_7)), not_null(n_7))));
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
        t = w_8;
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
  ATerm c_9;
  c_9 = t;
  {
    t = m_64(t);
    {
      ATerm g_1 (ATerm t)
      {
        t = term_d_9;
        return(t);
      }
      t = debug_1(t, g_1);
    }
  }
  t = c_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
      h_8 = t;
      c_8 :
      if(match_cons(h_8, sym__2))
        {
          i_8 = ATgetArgument(h_8, 0);
          j_8 = ATgetArgument(h_8, 1);
          {
            if(((g_8 != NULL) && (g_8 != i_8)))
              _fail(i_8);
            else
              g_8 = i_8;
            if(((f_8 != NULL) && (f_8 != j_8)))
              _fail(j_8);
            else
              f_8 = j_8;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_9);
      t = SSL_open_file(not_null(g_8), not_null(f_8));
    }
  else
    {
      t = f_9;
      {
        ATerm k_8 = NULL;
        ATerm l_8 = NULL;
        ATerm h_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = obsolete_1(t, h_1);
        {
          k_8 = t;
          {
            if(((g_8 != NULL) && (g_8 != k_8)))
              _fail(k_8);
            else
              g_8 = k_8;
            {
              ATerm i_9;
              i_9 = t;
              {
                ATerm m_8 = NULL;
                t = term_j_9;
                {
                  m_8 = t;
                  if(((l_8 != NULL) && (l_8 != m_8)))
                    _fail(m_8);
                  else
                    l_8 = m_8;
                }
              }
              t = i_9;
              t = SSL_open_file(not_null(g_8), not_null(l_8));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_8 = NULL;
  ATerm u_8 = NULL;
  s_8 = t;
  {
    ATerm k_9;
    k_9 = t;
    {
      ATerm v_8 = NULL;
      t = term_l_9;
      {
        v_8 = t;
        if(((u_8 != NULL) && (u_8 != v_8)))
          _fail(v_8);
        else
          u_8 = v_8;
      }
    }
    t = k_9;
    {
      t = SSL_open_file(not_null(s_8), not_null(u_8));
      t = SSL_close_file(not_null(s_8));
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
  ATerm z_8 = NULL;
  ATerm a_9 = NULL;
  t = term_w_6;
  {
    t = new_0(t);
    {
      a_9 = t;
      if(((z_8 != NULL) && (z_8 != a_9)))
        _fail(a_9);
      else
        z_8 = a_9;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), term_m_9);
    {
      t = conc_strings_0(t);
      {
        ATerm i_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, i_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm e_9 = NULL;
  t = new_file_0(t);
  {
    e_9 = t;
    {
      ATerm u_9;
      u_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), term_j_9);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), term_w_6);
            {
              ATerm j_1 (ATerm t)
              {
                t = term_z_9;
                return(t);
              }
              t = assert_1(t, j_1);
            }
          }
        }
      }
      t = u_9;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_stdin_0))
    {
      ATerm q_9 = NULL;
      ATerm r_9 = NULL;
      ATerm s_9 = NULL;
      t = xtc_new_file_0(t);
      {
        r_9 = t;
        {
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
          {
            ATerm t_9 = NULL;
            t = o_0(t);
            {
              t_9 = t;
              if(((s_9 != NULL) && (s_9 != t_9)))
                _fail(t_9);
              else
                s_9 = t_9;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_9)), term_a_10));
              {
                t = conc_0(t);
                t = xtc_command_1(t, n_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_9));
    }
  else
    {
      if(match_cons(o_9, sym_FILE_1))
        {
          p_9 = ATgetArgument(o_9, 0);
          {
            ATerm v_9 = NULL;
            ATerm w_9 = NULL;
            t = not_null(p_9);
            {
              ATerm x_9 = NULL;
              t = xtc_new_file_0(t);
              {
                w_9 = t;
                {
                  if(((v_9 != NULL) && (v_9 != w_9)))
                    _fail(w_9);
                  else
                    v_9 = w_9;
                  {
                    ATerm y_9 = NULL;
                    t = o_0(t);
                    {
                      y_9 = t;
                      if(((x_9 != NULL) && (x_9 != y_9)))
                        _fail(y_9);
                      else
                        x_9 = y_9;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_9)), term_a_10), not_null(p_9)), term_b_10));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, n_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_9));
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
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, o_65, p_65);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      t = xtc_transform_term_2(t, o_65, p_65);
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      t = SSL_rename(not_null(i_10), not_null(j_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_stdout_0))
    {
      ATerm t_10 = NULL,v_10 = NULL;
      ATerm e_10;
      e_10 = t;
      {
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(r_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
      }
      t = e_10;
      {
        ATerm w_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(t_10));
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
        t = not_null(v_10);
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
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym__2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      t = SSL_copy(not_null(d_11), not_null(e_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_FILE_1))
    {
      p_11 = ATgetArgument(o_11, 0);
      {
        ATerm f_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_11 = NULL;
            t = m_0(t);
            {
              r_11 = t;
              l_11 :
              if(match_cons(r_11, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), term_l_10);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(p_11);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_l_10;
            LocalPopChoice(k_10);
          }
        else
          {
            t = f_10;
            {
              ATerm t_11 = NULL;
              ATerm u_11 = NULL;
              t = m_0(t);
              {
                u_11 = t;
                {
                  if(((t_11 != NULL) && (t_11 != u_11)))
                    _fail(u_11);
                  else
                    t_11 = u_11;
                  {
                    ATerm m_10 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = m_10;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), not_null(t_11));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_11));
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
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(((ATgetType(b_12) == AT_LIST) && ((ATermList) b_12 != ATempty)))
    {
      c_12 = ATgetFirst((ATermList) b_12);
      d_12 = (ATerm) ATgetNext((ATermList) b_12);
      t = not_null(d_12);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym__2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      {
        ATerm n_10;
        n_10 = t;
        {
          ATerm p_12 = NULL;
          ATerm q_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(m_12));
          {
            ATerm o_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(p_10);
              }
            else
              {
                t = o_10;
                t = (ATerm) ATempty;
              }
            {
              q_12 = t;
              if(((p_12 != NULL) && (p_12 != q_12)))
                _fail(q_12);
              else
                p_12 = q_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_12), not_null(m_12), not_null(p_12));
            t = table_put_0(t);
          }
        }
        t = n_10;
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
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm a_13 = NULL;
    ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
    t = z_64(t);
    {
      a_13 = t;
      {
        if(((y_12 != NULL) && (y_12 != a_13)))
          _fail(a_13);
        else
          y_12 = a_13;
        {
          ATerm x_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_b_9);
              t = table_get_0(t);
              LocalPopChoice(y_10);
            }
          else
            {
              t = x_10;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_13 = t;
            w_12 :
            if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
              {
                c_13 = ATgetFirst((ATermList) b_13);
                d_13 = (ATerm) ATgetNext((ATermList) b_13);
                {
                  if(((z_12 != NULL) && (z_12 != c_13)))
                    _fail(c_13);
                  else
                    z_12 = c_13;
                  {
                    if(((x_12 != NULL) && (x_12 != d_13)))
                      _fail(d_13);
                    else
                      x_12 = d_13;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_12), term_b_9, not_null(x_12));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_12);
                          {
                            ATerm k_1 (ATerm t)
                            {
                              ATerm e_13 = NULL;
                              e_13 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), not_null(e_13));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_1);
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
  t = s_10;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  t = SSL_remove(not_null(k_13));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm p_13 = NULL;
  ATerm z_10;
  z_10 = t;
  {
    ATerm q_13 = NULL;
    ATerm r_13 = NULL;
    t = y_64(t);
    {
      q_13 = t;
      {
        if(((p_13 != NULL) && (p_13 != q_13)))
          _fail(q_13);
        else
          p_13 = q_13;
        {
          ATerm s_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_b_9);
          {
            ATerm a_11 = t;
            int f_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_11);
              }
            else
              {
                t = a_11;
                t = (ATerm) ATempty;
              }
            {
              s_13 = t;
              if(((r_13 != NULL) && (r_13 != s_13)))
                _fail(s_13);
              else
                r_13 = s_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_13), term_b_9, (ATerm) ATinsert(CheckATermList(not_null(r_13)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_10;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL;
  ATerm l_1 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  t = begin_scope_1(t, l_1);
  {
    t = j_65(t);
    {
      ATerm g_11;
      g_11 = t;
      {
        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_11;
            t = table_get_0(t);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          z_13 = t;
          w_13 :
          if(((ATgetType(z_13) == AT_LIST) && ((ATermList) z_13 != ATempty)))
            {
              a_14 = ATgetFirst((ATermList) z_13);
              b_14 = (ATerm) ATgetNext((ATermList) z_13);
              {
                if(((y_13 != NULL) && (y_13 != a_14)))
                  _fail(a_14);
                else
                  y_13 = a_14;
                {
                  if(((x_13 != NULL) && (x_13 != b_14)))
                    _fail(b_14);
                  else
                    x_13 = b_14;
                  {
                    t = not_null(y_13);
                    {
                      ATerm m_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, m_1);
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
      t = g_11;
      {
        ATerm n_1 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = end_scope_1(t, n_1);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm k_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL;
        ATerm f_14 = NULL;
        t = term_b_10;
        {
          t = get_config_0(t);
          {
            f_14 = t;
            if(((e_14 != NULL) && (e_14 != f_14)))
              _fail(f_14);
            else
              e_14 = f_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_14));
        LocalPopChoice(m_11);
      }
    else
      {
        t = k_11;
        t = term_q_8;
      }
    {
      t = k_65(t);
      {
        ATerm q_1 (ATerm t)
        {
          ATerm q_11 = t;
          int s_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_a_10;
              t = get_config_0(t);
              LocalPopChoice(s_11);
            }
          else
            {
              t = q_11;
              t = term_l_10;
            }
          return(t);
        }
        t = rename_to_1(t, q_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, o_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = SSL_string_to_int(not_null(i_14));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  q_14 = t;
  o_14 :
  if(match_string(q_14, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_14) == AT_LIST) && ((ATermList) q_14 != ATempty)))
        {
          r_14 = ATgetFirst((ATermList) q_14);
          s_14 = (ATerm) ATgetNext((ATermList) q_14);
          p_14 :
          if(((ATgetType(s_14) == AT_LIST) && ((ATermList) s_14 != ATempty)))
            {
              t_14 = ATgetFirst((ATermList) s_14);
              u_14 = (ATerm) ATgetNext((ATermList) s_14);
              {
                ATerm y_14 = NULL;
                ATerm v_11;
                v_11 = t;
                {
                  t = not_null(r_14);
                  t = j_0(t);
                }
                t = v_11;
                {
                  ATerm z_14 = NULL;
                  t = not_null(t_14);
                  {
                    t = k_0(t);
                    {
                      z_14 = t;
                      if(((y_14 != NULL) && (y_14 != z_14)))
                        _fail(z_14);
                      else
                        y_14 = z_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_14)), not_null(y_14));
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
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_15 = NULL;
        s_15 = t;
        d_15 :
        if(!(match_string(s_15, "-i")))
          {
            if(!(match_string(s_15, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        ATerm v_15 = NULL;
        ATerm y_11;
        y_11 = t;
        {
          ATerm t_15 = NULL;
          ATerm u_15 = NULL;
          u_15 = t;
          if(((t_15 != NULL) && (t_15 != u_15)))
            _fail(u_15);
          else
            t_15 = u_15;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_10, not_null(t_15));
            t = set_config_0(t);
          }
        }
        t = y_11;
        {
          ATerm w_15 = NULL;
          w_15 = t;
          if(((v_15 != NULL) && (v_15 != w_15)))
            _fail(w_15);
          else
            v_15 = w_15;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_15));
        }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_z_11;
        return(t);
      }
      t = ArgOption_3(t, r_1, s_1, t_1);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm x_15 = NULL;
              x_15 = t;
              g_15 :
              if(!(match_string(x_15, "-o")))
                {
                  if(!(match_string(x_15, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              ATerm a_16 = NULL;
              ATerm g_12;
              g_12 = t;
              {
                ATerm y_15 = NULL;
                ATerm z_15 = NULL;
                z_15 = t;
                if(((y_15 != NULL) && (y_15 != z_15)))
                  _fail(z_15);
                else
                  y_15 = z_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(y_15));
                  t = set_config_0(t);
                }
              }
              t = g_12;
              {
                ATerm b_16 = NULL;
                b_16 = t;
                if(((a_16 != NULL) && (a_16 != b_16)))
                  _fail(b_16);
                else
                  a_16 = b_16;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_16));
              }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_h_12;
              return(t);
            }
            t = ArgOption_3(t, u_1, v_1, w_1);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm i_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_1 (ATerm t)
                  {
                    ATerm c_16 = NULL;
                    c_16 = t;
                    j_15 :
                    if(!(match_string(c_16, "-S")))
                      {
                        if(!(match_string(c_16, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_r_12;
                    t = set_config_0(t);
                    t = term_s_12;
                    return(t);
                  }
                  ATerm z_1 (ATerm t)
                  {
                    t = term_t_12;
                    return(t);
                  }
                  t = Option_3(t, x_1, y_1, z_1);
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = i_12;
                  {
                    ATerm u_12 = t;
                    int v_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_2 (ATerm t)
                        {
                          ATerm j_16 = NULL;
                          j_16 = t;
                          k_15 :
                          if(!(match_string(j_16, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_2 (ATerm t)
                        {
                          ATerm m_16 = NULL;
                          ATerm f_13;
                          f_13 = t;
                          {
                            ATerm k_16 = NULL;
                            ATerm l_16 = NULL;
                            t = string_to_int_0(t);
                            {
                              l_16 = t;
                              if(((k_16 != NULL) && (k_16 != l_16)))
                                _fail(l_16);
                              else
                                k_16 = l_16;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_u_5, not_null(k_16));
                              t = set_config_0(t);
                            }
                          }
                          t = f_13;
                          {
                            ATerm n_16 = NULL;
                            n_16 = t;
                            if(((m_16 != NULL) && (m_16 != n_16)))
                              _fail(n_16);
                            else
                              m_16 = n_16;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_16));
                          }
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          t = term_g_13;
                          return(t);
                        }
                        t = ArgOption_3(t, a_2, c_2, e_2);
                        LocalPopChoice(v_12);
                      }
                    else
                      {
                        t = u_12;
                        {
                          ATerm h_13 = t;
                          int i_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_2 (ATerm t)
                              {
                                ATerm o_16 = NULL;
                                o_16 = t;
                                n_15 :
                                if(!(match_string(o_16, "-k")))
                                  {
                                    if(!(match_string(o_16, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm g_2 (ATerm t)
                              {
                                ATerm j_13;
                                j_13 = t;
                                {
                                  ATerm p_16 = NULL;
                                  ATerm q_16 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    q_16 = t;
                                    if(((p_16 != NULL) && (p_16 != q_16)))
                                      _fail(q_16);
                                    else
                                      p_16 = q_16;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(p_16));
                                    t = set_config_0(t);
                                  }
                                }
                                t = j_13;
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                t = term_m_13;
                                return(t);
                              }
                              t = ArgOption_3(t, f_2, g_2, i_2);
                              LocalPopChoice(i_13);
                            }
                          else
                            {
                              t = h_13;
                              {
                                ATerm n_13 = t;
                                int o_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm r_16 = NULL;
                                      r_16 = t;
                                      p_15 :
                                      if(!(match_string(r_16, "-v")))
                                        {
                                          if(!(match_string(r_16, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = term_u_13;
                                      t = set_config_0(t);
                                      t = term_v_13;
                                      return(t);
                                    }
                                    ATerm l_2 (ATerm t)
                                    {
                                      t = term_c_14;
                                      return(t);
                                    }
                                    t = Option_3(t, j_2, k_2, l_2);
                                    LocalPopChoice(o_13);
                                  }
                                else
                                  {
                                    t = n_13;
                                    {
                                      ATerm d_14 = t;
                                      int g_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_2 (ATerm t)
                                          {
                                            ATerm s_16 = NULL;
                                            s_16 = t;
                                            q_15 :
                                            if(!(match_string(s_16, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm p_2 (ATerm t)
                                          {
                                            t = term_j_14;
                                            t = set_config_0(t);
                                            t = term_k_14;
                                            return(t);
                                          }
                                          ATerm s_2 (ATerm t)
                                          {
                                            t = term_l_14;
                                            return(t);
                                          }
                                          t = Option_3(t, o_2, p_2, s_2);
                                          LocalPopChoice(g_14);
                                        }
                                      else
                                        {
                                          t = d_14;
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              ATerm t_16 = NULL;
                                              t_16 = t;
                                              r_15 :
                                              if(!(match_string(t_16, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_n_14;
                                              t = set_config_0(t);
                                              t = term_v_14;
                                              return(t);
                                            }
                                            ATerm y_2 (ATerm t)
                                            {
                                              t = term_w_14;
                                              return(t);
                                            }
                                            t = Option_3(t, t_2, u_2, y_2);
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
  ATerm d_17 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm e_17 = NULL,f_17 = NULL;
      e_17 = t;
      c_17 :
      if(match_cons(e_17, sym_Program_1))
        {
          f_17 = ATgetArgument(e_17, 0);
          if(((d_17 != NULL) && (d_17 != f_17)))
            _fail(f_17);
          else
            d_17 = f_17;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_15), not_null(d_17)), term_a_15));
      {
        t = printnl_0(t);
        {
          t = term_c_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_14;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATempty, term_e_15));
  {
    t = printnl_0(t);
    {
      t = term_c_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm m_17 = NULL;
  ATerm o_17 = NULL;
  m_17 = t;
  {
    ATerm p_17 = NULL;
    ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
    t = not_null(m_17);
    {
      p_17 = t;
      {
        t = SSL_explode_term(not_null(p_17));
        {
          r_17 = t;
          k_17 :
          if(match_cons(r_17, sym__2))
            {
              s_17 = ATgetArgument(r_17, 0);
              t_17 = ATgetArgument(r_17, 1);
              l_17 :
              if(match_string(s_17, ""))
                {
                  if(((o_17 != NULL) && (o_17 != t_17)))
                    _fail(t_17);
                  else
                    o_17 = t_17;
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
      t = not_null(o_17);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym__2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        t = not_null(a_18);
        {
          ATerm h_3 (ATerm t)
          {
            t = not_null(b_18);
            return(t);
          }
          t = at_end_1(t, h_3);
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
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_45 (ATerm), ATerm x_45 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm r_18 = NULL,t_18 = NULL;
        ATerm s_18 = NULL;
        t = SSLgetAnnotations(not_null(l_18));
        {
          s_18 = t;
          if(((r_18 != NULL) && (r_18 != s_18)))
            _fail(s_18);
          else
            r_18 = s_18;
        }
        {
          t = not_null(m_18);
          {
            ATerm v_18 = NULL;
            t = w_45(t);
            {
              t_18 = t;
              {
                t = not_null(n_18);
                {
                  ATerm x_18 = NULL;
                  t = x_45(t);
                  {
                    v_18 = t;
                    {
                      ATerm y_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_18), not_null(v_18)), not_null(r_18));
                      {
                        y_18 = t;
                        if(((x_18 != NULL) && (x_18 != y_18)))
                          _fail(y_18);
                        else
                          x_18 = y_18;
                      }
                      t = not_null(x_18);
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
  ATerm i_15;
  i_15 = t;
  {
    ATerm g_19 = NULL,i_19 = NULL;
    ATerm l_15;
    l_15 = t;
    {
      ATerm h_19 = NULL;
      t = f_64(t);
      {
        h_19 = t;
        if(((g_19 != NULL) && (g_19 != h_19)))
          _fail(h_19);
        else
          g_19 = h_19;
      }
    }
    t = l_15;
    {
      ATerm j_19 = NULL;
      j_19 = t;
      if(((i_19 != NULL) && (i_19 != j_19)))
        _fail(j_19);
      else
        i_19 = j_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_19)), not_null(g_19)));
        t = printnl_0(t);
      }
    }
  }
  t = i_15;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  t = SSL_is_string(not_null(n_19));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = m_15;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_3);
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
              w_19 = t;
              v_19 :
              if(match_cons(w_19, sym_Path_1))
                {
                  x_19 = ATgetArgument(w_19, 0);
                  t = not_null(x_19);
                }
              else
                {
                  if(match_cons(w_19, sym_Var_1))
                    {
                      x_19 = ATgetArgument(w_19, 0);
                      {
                        t = not_null(x_19);
                        {
                          ATerm f_16 = t;
                          int g_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_16);
                            }
                          else
                            {
                              t = f_16;
                              {
                                ATerm j_3 (ATerm t)
                                {
                                  t = term_h_16;
                                  return(t);
                                }
                                t = debug_1(t, j_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_19, sym_Prefix_2))
                        {
                          x_19 = ATgetArgument(w_19, 0);
                          y_19 = ATgetArgument(w_19, 1);
                          {
                            ATerm d_20 = NULL,f_20 = NULL;
                            ATerm i_16;
                            i_16 = t;
                            {
                              ATerm e_20 = NULL;
                              t = not_null(x_19);
                              {
                                t = eval_config_0(t);
                                {
                                  e_20 = t;
                                  if(((d_20 != NULL) && (d_20 != e_20)))
                                    _fail(e_20);
                                  else
                                    d_20 = e_20;
                                }
                              }
                            }
                            t = i_16;
                            {
                              ATerm g_20 = NULL;
                              t = not_null(y_19);
                              {
                                t = eval_config_0(t);
                                {
                                  g_20 = t;
                                  if(((f_20 != NULL) && (f_20 != g_20)))
                                    _fail(g_20);
                                  else
                                    f_20 = g_20;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(f_20));
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
  ATerm o_20 = NULL;
  o_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_16, not_null(o_20));
    {
      t = table_get_0(t);
      {
        ATerm p_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_16;
            v_16 = t;
            {
              ATerm q_20 = NULL;
              ATerm r_20 = NULL;
              r_20 = t;
              if(((q_20 != NULL) && (q_20 != r_20)))
                _fail(r_20);
              else
                q_20 = r_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_16, not_null(o_20), not_null(q_20));
                t = table_put_0(t);
              }
            }
            t = v_16;
          }
          return(t);
        }
        t = try_1(t, p_3);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  t = SSL_TicksToSeconds(not_null(v_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym__2))
    {
      b_21 = ATgetArgument(a_21, 0);
      c_21 = ATgetArgument(a_21, 1);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_21), not_null(c_21));
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            t = SSL_addr(not_null(b_21), not_null(c_21));
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
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_67(t);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
        r_21 = t;
        q_21 :
        if(((ATgetType(r_21) == AT_LIST) && ((ATermList) r_21 != ATempty)))
          {
            s_21 = ATgetFirst((ATermList) r_21);
            t_21 = (ATerm) ATgetNext((ATermList) r_21);
            {
              ATerm z_21 = NULL;
              ATerm b_22 = NULL;
              t = not_null(t_21);
              {
                t = foldr_2(t, g_67, h_67);
                {
                  b_22 = t;
                  if(((z_21 != NULL) && (z_21 != b_22)))
                    _fail(b_22);
                  else
                    z_21 = b_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_21), not_null(z_21));
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
  ATerm j_22 = NULL;
  ATerm l_22 = NULL;
  j_22 = t;
  {
    ATerm m_22 = NULL;
    ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
    t = not_null(j_22);
    {
      m_22 = t;
      {
        t = SSL_explode_term(not_null(m_22));
        {
          o_22 = t;
          i_22 :
          if(match_cons(o_22, sym__2))
            {
              p_22 = ATgetArgument(o_22, 0);
              q_22 = ATgetArgument(o_22, 1);
              if(((l_22 != NULL) && (l_22 != q_22)))
                _fail(q_22);
              else
                l_22 = q_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_22);
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
    ATerm q_3 (ATerm t)
    {
      t = term_o_12;
      return(t);
    }
    t = crush_2(t, q_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym__2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      {
        ATerm a_17;
        a_17 = t;
        {
          ATerm b_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_22), not_null(y_22));
              LocalPopChoice(g_17);
            }
          else
            {
              t = b_17;
              t = SSL_gtr(not_null(x_22), not_null(y_22));
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
  ATerm e_23 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
      f_23 = t;
      d_23 :
      if(match_cons(f_23, sym__2))
        {
          g_23 = ATgetArgument(f_23, 0);
          h_23 = ATgetArgument(f_23, 1);
          {
            if(((e_23 != NULL) && (e_23 != g_23)))
              _fail(g_23);
            else
              e_23 = g_23;
            if(((e_23 != NULL) && (e_23 != h_23)))
              _fail(h_23);
            else
              e_23 = h_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm k_23 = NULL;
      ATerm l_23 = NULL;
      t = term_u_5;
      {
        t = get_config_0(t);
        {
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), term_c_15);
        t = geq_0(t);
      }
    }
    t = j_17;
    t = d_79(t);
    return(t);
  }
  t = try_1(t, v_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm p_23 = NULL,r_23 = NULL;
    ATerm n_17;
    n_17 = t;
    {
      ATerm q_23 = NULL;
      t = run_time_0(t);
      {
        q_23 = t;
        if(((p_23 != NULL) && (p_23 != q_23)))
          _fail(q_23);
        else
          p_23 = q_23;
      }
    }
    t = n_17;
    {
      ATerm s_23 = NULL;
      t = term_q_17;
      {
        t = get_config_0(t);
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_17), not_null(p_23)), term_u_17), not_null(r_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_3);
  {
    t = term_o_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym_Version_0))
    {
      ATerm b_24 = NULL,f_24 = NULL;
      ATerm w_17;
      w_17 = t;
      {
        ATerm c_24 = NULL;
        t = SSLgetAnnotations(not_null(z_23));
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
      }
      t = w_17;
      {
        ATerm g_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_24));
        {
          g_24 = t;
          if(((f_24 != NULL) && (f_24 != g_24)))
            _fail(g_24);
          else
            f_24 = g_24;
        }
        t = not_null(f_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm x_17 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = x_17;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_3);
  t = p_61(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  t = SSL_table_create(not_null(l_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  {
    ATerm f_18;
    f_18 = t;
    {
      t = term_g_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_18, term_h_18, not_null(p_24));
          t = table_put_0(t);
        }
      }
    }
    t = f_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_table_destroy(not_null(t_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_exit(not_null(x_24));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  t = SSL_implode_string(not_null(b_25));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm g_25 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_25);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          t = Nil_0(t);
          t = l_73(t);
        }
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
        k_25 = t;
        i_25 :
        if(((ATgetType(k_25) == AT_LIST) && ((ATermList) k_25 != ATempty)))
          {
            l_25 = ATgetFirst((ATermList) k_25);
            m_25 = (ATerm) ATgetNext((ATermList) k_25);
            {
              t = not_null(l_25);
              {
                ATerm y_3 (ATerm t)
                {
                  t = not_null(m_25);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_3);
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
  ATerm t_25 = NULL;
  t_25 = t;
  t = SSL_explode_string(not_null(t_25));
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
ATerm long_description_1 (ATerm t, ATerm g_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm w_25 (ATerm t)
  {
    ATerm q_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = q_18;
        t = Cons_2(t, w_72, w_25);
      }
    return(t);
  }
  t = w_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  f_26 = t;
  c_26 :
  if(((ATgetType(f_26) == AT_LIST) && ((ATermList) f_26 != ATempty)))
    {
      d_26 = ATgetFirst((ATermList) f_26);
      e_26 = (ATerm) ATgetNext((ATermList) f_26);
      {
        ATerm l_26 = NULL;
        t = not_null(e_26);
        {
          ATerm w_18;
          w_18 = t;
          {
            ATerm m_26 = NULL,o_26 = NULL,q_26 = NULL;
            ATerm z_18;
            z_18 = t;
            {
              ATerm n_26 = NULL;
              t = i_0(t);
              {
                n_26 = t;
                if(((m_26 != NULL) && (m_26 != n_26)))
                  _fail(n_26);
                else
                  m_26 = n_26;
              }
            }
            t = z_18;
            {
              ATerm p_26 = NULL;
              t = not_null(d_26);
              {
                t = h_0(t);
                {
                  p_26 = t;
                  if(((o_26 != NULL) && (o_26 != p_26)))
                    _fail(p_26);
                  else
                    o_26 = p_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_26)), not_null(o_26));
                {
                  q_26 = t;
                  if(((l_26 != NULL) && (l_26 != q_26)))
                    _fail(q_26);
                  else
                    l_26 = q_26;
                }
              }
            }
          }
          t = w_18;
          {
            ATerm e_4 (ATerm t)
            {
              t = not_null(l_26);
              return(t);
            }
            t = reverse_acc_2(t, h_0, e_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_26 == ATempty))
        {
          {
            t = term_w_6;
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
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_Program_1))
    {
      c_27 = ATgetArgument(b_27, 0);
      {
        ATerm f_27 = NULL,h_27 = NULL;
        ATerm g_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        {
          t = not_null(c_27);
          {
            ATerm j_27 = NULL;
            t = i_47(t);
            {
              h_27 = t;
              {
                ATerm k_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_27)), not_null(f_27));
                {
                  k_27 = t;
                  if(((j_27 != NULL) && (j_27 != k_27)))
                    _fail(k_27);
                  else
                    j_27 = k_27;
                }
                t = not_null(j_27);
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
  ATerm t_27 = NULL;
  ATerm j_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      ATerm u_27 = NULL;
      u_27 = t;
      if(((t_27 != NULL) && (t_27 != u_27)))
        _fail(u_27);
      else
        t_27 = u_27;
      return(t);
    }
    t = Program_1(t, k_4);
    return(t);
  }
  t = option_defined_1(t, j_4);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm v_27 = NULL;
      ATerm w_27 = NULL;
      t = term_w_6;
      {
        ATerm m_4 (ATerm t)
        {
          t = not_null(t_27);
          return(t);
        }
        t = short_description_1(t, m_4);
        {
          t = concat_strings_0(t);
          {
            w_27 = t;
            if(((v_27 != NULL) && (v_27 != w_27)))
              _fail(w_27);
            else
              v_27 = w_27;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATempty, not_null(v_27)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATempty, term_a_19));
      {
        t = printnl_0(t);
        {
          t = term_d_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm x_27 = NULL;
                  x_27 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_27)), term_e_19));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_4);
                {
                  ATerm q_4 (ATerm t)
                  {
                    ATerm z_27 = NULL;
                    ATerm a_28 = NULL;
                    t = term_w_6;
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = not_null(t_27);
                        return(t);
                      }
                      t = long_description_1(t, r_4);
                      {
                        t = concat_strings_0(t);
                        {
                          a_28 = t;
                          if(((z_27 != NULL) && (z_27 != a_28)))
                            _fail(a_28);
                          else
                            z_27 = a_28;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_27)), term_f_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_4);
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
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym__2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      {
        ATerm k_19;
        k_19 = t;
        t = SSL_printnl(not_null(i_28), not_null(j_28));
        t = k_19;
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
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym_Undefined_1))
    {
      t_28 = ATgetArgument(s_28, 0);
      {
        ATerm w_28 = NULL,y_28 = NULL;
        ATerm x_28 = NULL;
        t = SSLgetAnnotations(not_null(s_28));
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
        {
          t = not_null(t_28);
          {
            ATerm a_29 = NULL;
            t = j_47(t);
            {
              y_28 = t;
              {
                ATerm b_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_28)), not_null(w_28));
                {
                  b_29 = t;
                  if(((a_29 != NULL) && (a_29 != b_29)))
                    _fail(b_29);
                  else
                    a_29 = b_29;
                }
                t = not_null(a_29);
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
  ATerm g_29 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_73, _id);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = Cons_2(t, _id, g_29);
      }
    return(t);
  }
  t = g_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_60 (ATerm))
{
  t = fetch_1(t, k_60);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Help_0))
    {
      ATerm n_29 = NULL,p_29 = NULL;
      ATerm o_19;
      o_19 = t;
      {
        ATerm o_29 = NULL;
        t = SSLgetAnnotations(not_null(l_29));
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
      }
      t = o_19;
      {
        ATerm q_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_29));
        {
          q_29 = t;
          if(((p_29 != NULL) && (p_29 != q_29)))
            _fail(q_29);
          else
            p_29 = q_29;
        }
        t = not_null(p_29);
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
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_75(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym__2))
    {
      x_29 = ATgetArgument(w_29, 0);
      y_29 = ATgetArgument(w_29, 1);
      t = SSL_table_get(not_null(x_29), not_null(y_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,n_30 = NULL;
  i_30 = t;
  f_30 :
  if(match_cons(i_30, sym__3))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      n_30 = ATgetArgument(i_30, 2);
      {
        ATerm r_19;
        r_19 = t;
        {
          ATerm u_30 = NULL;
          ATerm v_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), not_null(k_30));
          {
            ATerm s_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_19);
              }
            else
              {
                t = s_19;
                t = (ATerm) ATempty;
              }
            {
              v_30 = t;
              if(((u_30 != NULL) && (u_30 != v_30)))
                _fail(v_30);
              else
                u_30 = v_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_30), not_null(k_30), (ATerm) ATinsert(CheckATermList(not_null(u_30)), not_null(n_30)));
            t = table_put_0(t);
          }
        }
        t = r_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm j_31 = NULL;
  ATerm k_31 = NULL;
  t = term_w_6;
  {
    t = k_59(t);
    {
      k_31 = t;
      if(((j_31 != NULL) && (j_31 != k_31)))
        _fail(k_31);
      else
        j_31 = k_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_c_19, not_null(j_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_31 = NULL,a_32 = NULL,e_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_string(y_31, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_31) == AT_LIST) && ((ATermList) y_31 != ATempty)))
        {
          a_32 = ATgetFirst((ATermList) y_31);
          e_32 = (ATerm) ATgetNext((ATermList) y_31);
          {
            ATerm k_32 = NULL;
            ATerm u_19;
            u_19 = t;
            {
              t = not_null(a_32);
              t = a_0(t);
            }
            t = u_19;
            {
              ATerm l_32 = NULL;
              t = term_w_6;
              {
                t = b_0(t);
                {
                  l_32 = t;
                  if(((k_32 != NULL) && (k_32 != l_32)))
                    _fail(l_32);
                  else
                    k_32 = l_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(k_32));
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
  ATerm s_4 (ATerm t)
  {
    ATerm w_32 = NULL;
    w_32 = t;
    v_32 :
    if(!(match_string(w_32, "--help")))
      {
        if(!(match_string(w_32, "-h")))
          {
            if(!(match_string(w_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  t = Option_3(t, s_4, u_4, x_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  y_32 :
  if(((ATgetType(b_33) == AT_LIST) && ((ATermList) b_33 != ATempty)))
    {
      c_33 = ATgetFirst((ATermList) b_33);
      d_33 = (ATerm) ATgetNext((ATermList) b_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_33)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  r_33 :
  if(((ATgetType(s_33) == AT_LIST) && ((ATermList) s_33 != ATempty)))
    {
      t_33 = ATgetFirst((ATermList) s_33);
      u_33 = (ATerm) ATgetNext((ATermList) s_33);
      {
        ATerm y_33 = NULL,a_34 = NULL;
        ATerm z_33 = NULL;
        t = SSLgetAnnotations(not_null(s_33));
        {
          z_33 = t;
          if(((y_33 != NULL) && (y_33 != z_33)))
            _fail(z_33);
          else
            y_33 = z_33;
        }
        {
          t = not_null(t_33);
          {
            ATerm e_34 = NULL;
            t = i_52(t);
            {
              a_34 = t;
              {
                t = not_null(u_33);
                {
                  ATerm g_34 = NULL;
                  t = j_52(t);
                  {
                    e_34 = t;
                    {
                      ATerm h_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_34)), not_null(a_34)), not_null(y_33));
                      {
                        h_34 = t;
                        if(((g_34 != NULL) && (g_34 != h_34)))
                          _fail(h_34);
                        else
                          g_34 = h_34;
                      }
                      t = not_null(g_34);
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
  ATerm r_34 = NULL;
  r_34 = t;
  q_34 :
  if(((ATermList) r_34 == ATempty))
    {
      {
        ATerm t_34 = NULL,v_34 = NULL;
        ATerm b_20;
        b_20 = t;
        {
          ATerm u_34 = NULL;
          t = SSLgetAnnotations(not_null(r_34));
          {
            u_34 = t;
            if(((t_34 != NULL) && (t_34 != u_34)))
              _fail(u_34);
            else
              t_34 = u_34;
          }
        }
        t = b_20;
        {
          ATerm w_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_34));
          {
            w_34 = t;
            if(((v_34 != NULL) && (v_34 != w_34)))
              _fail(w_34);
            else
              v_34 = w_34;
          }
          t = not_null(v_34);
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
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym__2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_16, not_null(d_35), not_null(e_35));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm c_20;
  c_20 = t;
  {
    ATerm y_4 (ATerm t)
    {
      t = term_h_20;
      t = i_59(t);
      return(t);
    }
    t = try_1(t, y_4);
  }
  t = c_20;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm m_35 = NULL;
      ATerm i_20;
      i_20 = t;
      {
        ATerm k_35 = NULL;
        ATerm l_35 = NULL;
        l_35 = t;
        if(((k_35 != NULL) && (k_35 != l_35)))
          _fail(l_35);
        else
          k_35 = l_35;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(k_35));
          t = set_config_0(t);
        }
      }
      t = i_20;
      {
        ATerm n_35 = NULL;
        n_35 = t;
        if(((m_35 != NULL) && (m_35 != n_35)))
          _fail(n_35);
        else
          m_35 = n_35;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_35));
      }
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm j_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              {
                t = i_59(t);
                t = Cons_2(t, _id, b_5);
              }
            }
          LocalPopChoice(k_20);
        }
      else
        {
          t = j_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_4, b_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  ATerm n_20;
  n_20 = t;
  {
    ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
    w_35 = t;
    s_35 :
    if(match_cons(w_35, sym__3))
      {
        x_35 = ATgetArgument(w_35, 0);
        y_35 = ATgetArgument(w_35, 1);
        z_35 = ATgetArgument(w_35, 2);
        {
          if(((t_35 != NULL) && (t_35 != x_35)))
            _fail(x_35);
          else
            t_35 = x_35;
          {
            if(((u_35 != NULL) && (u_35 != y_35)))
              _fail(y_35);
            else
              u_35 = y_35;
            {
              if(((v_35 != NULL) && (v_35 != z_35)))
                _fail(z_35);
              else
                v_35 = z_35;
              t = SSL_table_put(not_null(t_35), not_null(u_35), not_null(v_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm d_36 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    t = term_s_20;
    t = table_put_0(t);
  }
  t = p_20;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_59(t);
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_5);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_12;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm g_5 (ATerm t)
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm e_36 = NULL;
                  e_36 = t;
                  if(((d_36 != NULL) && (d_36 != e_36)))
                    _fail(e_36);
                  else
                    d_36 = e_36;
                  return(t);
                }
                t = Undefined_1(t, h_5);
                return(t);
              }
              t = option_defined_1(t, g_5);
              {
                ATerm y_20;
                y_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_36)), term_d_21));
                  t = printnl_0(t);
                }
                t = y_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_5);
      {
        ATerm e_21;
        e_21 = t;
        {
          t = term_b_19;
          t = table_destroy_0(t);
        }
        t = e_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm p_60 (ATerm))
{
  t = parse_options_1(t, m_60);
  {
    t = store_options_0(t);
    {
      t = o_60(t);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_60);
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_60(t);
                  t = report_success_0(t);
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_60 (ATerm), ATerm r_60 (ATerm))
{
  t = option_wrap_4(t, q_60, default_usage_0, _id, r_60);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    t = xtc_io_1(t, l_65);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, j_5);
  return(t);
}
ATerm io_parse_c_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      t = term_j_21;
      return(t);
    }
    ATerm m_5 (ATerm t)
    {
      ATerm h_36 = NULL;
      ATerm i_36 = NULL;
      t = term_k_21;
      {
        t = xtc_find_0(t);
        {
          i_36 = t;
          if(((h_36 != NULL) && (h_36 != i_36)))
            _fail(i_36);
          else
            h_36 = i_36;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_36)), term_m_21), term_l_21);
      return(t);
    }
    t = xtc_transform_2(t, l_5, m_5);
    {
      ATerm n_5 (ATerm t)
      {
        t = term_n_21;
        return(t);
      }
      t = xtc_transform_1(t, n_5);
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, k_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_c_0(t);
  return(t);
}
