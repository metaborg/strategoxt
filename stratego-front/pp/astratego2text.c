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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_CUT_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_w_23;
ATerm term_b_23;
ATerm term_n_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_m_21;
ATerm term_b_21;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_y_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_w_13;
ATerm term_d_13;
ATerm term_w_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_v_6;
ATerm term_m_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_v_5;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_m_5;
void init_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_d_6);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_l_7);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_r_9);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_m_5, term_h_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_n_10);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_n_10);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_n_10);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_n_10);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__3, term_w_18, term_b_19, (ATerm) ATempty);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm w_68 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_54 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm g_54 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm i_54 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_65 (ATerm), ATerm i_65 (ATerm));
ATerm union_1 (ATerm, ATerm d_65 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm r_54 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm v_68 (ATerm));
ATerm assert_1 (ATerm, ATerm n_69 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_70 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm d_48 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_69 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_69 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_68 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_68 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm crush_2 (ATerm, ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_54 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_75 (ATerm));
ATerm Program_1 (ATerm, ATerm q_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_69 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_59 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm h_46 (ATerm), ATerm i_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_69 (ATerm));
ATerm map_1 (ATerm, ATerm i_59 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_57 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm xtc_iowrap_1 (ATerm, ATerm r_68 (ATerm));
ATerm astratego2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm w_68 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, w_68, b_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_table_keys(not_null(e_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_1 = NULL;
  t_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm n_2 = NULL;
        ATerm s_2 = NULL;
        n_2 = t;
        {
          ATerm t_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_1), not_null(n_2));
          {
            t = table_get_0(t);
            {
              t_2 = t;
              if(((s_2 != NULL) && (s_2 != t_2)))
                _fail(t_2);
              else
                s_2 = t_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), not_null(s_2));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_54 (ATerm))
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5;
      l_5 = t;
      {
        ATerm a_3 = NULL;
        ATerm b_3 = NULL;
        t = term_m_5;
        {
          t = get_config_0(t);
          {
            b_3 = t;
            if(((a_3 != NULL) && (a_3 != b_3)))
              _fail(b_3);
            else
              a_3 = b_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_r_5);
          t = geq_0(t);
        }
      }
      t = l_5;
      t = h_54(t);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm s_5;
  s_5 = t;
  {
    ATerm e_3 = NULL;
    ATerm f_3 = NULL;
    f_3 = t;
    if(((e_3 != NULL) && (e_3 != f_3)))
      _fail(f_3);
    else
      e_3 = f_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_5, not_null(e_3));
      t = printnl_0(t);
    }
  }
  t = s_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm l_3 = NULL;
  ATerm n_3 = NULL,o_3 = NULL;
  l_3 = t;
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_3)));
    {
      t = table_get_0(t);
      {
        p_3 = t;
        j_3 :
        if(((ATgetType(p_3) == AT_LIST) && !(ATisEmpty(p_3))))
          {
            q_3 = ATgetFirst((ATermList) p_3);
            t_3 = (ATerm) ATgetNext((ATermList) p_3);
            k_3 :
            if(match_cons(q_3, sym__2))
              {
                r_3 = ATgetArgument(q_3, 0);
                s_3 = ATgetArgument(q_3, 1);
                {
                  if(((n_3 != NULL) && (n_3 != r_3)))
                    _fail(r_3);
                  else
                    n_3 = r_3;
                  if(((o_3 != NULL) && (o_3 != s_3)))
                    _fail(s_3);
                  else
                    o_3 = s_3;
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
    t = not_null(o_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      {
        ATerm f_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_4)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
              g_4 = t;
              y_3 :
              if(match_cons(g_4, sym__2))
                {
                  h_4 = ATgetArgument(g_4, 0);
                  i_4 = ATgetArgument(g_4, 1);
                  {
                    if(((c_4 != NULL) && (c_4 != h_4)))
                      _fail(h_4);
                    else
                      c_4 = h_4;
                    if(((f_4 != NULL) && (f_4 != i_4)))
                      _fail(i_4);
                    else
                      f_4 = i_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, f_0);
          }
        }
        t = not_null(f_4);
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
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_6;
      {
        t = table_get_0(t);
        {
          ATerm p_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm f_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_6;
      l_6 = t;
      {
        ATerm m_4 = NULL;
        ATerm n_4 = NULL;
        t = term_m_5;
        {
          t = get_config_0(t);
          {
            n_4 = t;
            if(((m_4 != NULL) && (m_4 != n_4)))
              _fail(n_4);
            else
              m_4 = n_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), term_m_6);
          t = geq_0(t);
        }
      }
      t = l_6;
      t = g_54(t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = f_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm i_54 (ATerm))
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6;
      u_6 = t;
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        t = term_m_5;
        {
          t = get_config_0(t);
          {
            r_4 = t;
            if(((q_4 != NULL) && (q_4 != r_4)))
              _fail(r_4);
            else
              q_4 = r_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), term_v_6);
          t = geq_0(t);
        }
      }
      t = u_6;
      t = i_54(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
      }
    }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      if(((w_4 != NULL) && (w_4 != x_4)))
        _fail(x_4);
      else
        w_4 = x_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_65 (ATerm), ATerm i_65 (ATerm))
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
    {
      e_5 = ATgetFirst((ATermList) d_5);
      f_5 = (ATerm) ATgetNext((ATermList) d_5);
      {
        t = i_65(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm i_5 = NULL;
            i_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_5), not_null(i_5));
              t = h_65(t);
            }
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(f_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        t = not_null(p_5);
        {
          ATerm u_5 (ATerm t)
          {
            ATerm z_6 = t;
            int a_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_5);
                LocalPopChoice(a_7);
              }
            else
              {
                t = z_6;
                {
                  ATerm b_7 = t;
                  int c_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(q_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_65, r_0);
                      t = u_5(t);
                      LocalPopChoice(c_7);
                    }
                  else
                    {
                      t = b_7;
                      t = Cons_2(t, _id, u_5);
                    }
                }
              }
            return(t);
          }
          t = u_5(t);
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
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  z_5 = t;
  y_5 :
  if(match_cons(z_5, sym__3))
    {
      a_6 = ATgetArgument(z_5, 0);
      b_6 = ATgetArgument(z_5, 1);
      c_6 = ATgetArgument(z_5, 2);
      {
        ATerm d_7;
        d_7 = t;
        {
          ATerm g_6 = NULL;
          ATerm h_6 = NULL,j_6 = NULL;
          ATerm i_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), not_null(b_6));
          {
            ATerm e_7 = t;
            int g_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_7);
              }
            else
              {
                t = e_7;
                t = (ATerm) ATempty;
              }
            {
              i_6 = t;
              if(((h_6 != NULL) && (h_6 != i_6)))
                _fail(i_6);
              else
                h_6 = i_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(c_6));
            {
              t = union_1(t, eq_0);
              {
                j_6 = t;
                if(((g_6 != NULL) && (g_6 != j_6)))
                  _fail(j_6);
                else
                  g_6 = j_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_6), not_null(b_6), not_null(g_6));
            t = table_put_0(t);
          }
        }
        t = d_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym__2))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      {
        t = not_null(t_6);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
            w_6 = t;
            p_6 :
            if(match_cons(w_6, sym__2))
              {
                x_6 = ATgetArgument(w_6, 0);
                y_6 = ATgetArgument(w_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_6), not_null(x_6), not_null(y_6));
                  t = r_54(t);
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
ATerm xtc_read_0 (ATerm t)
{
  ATerm f_7 = NULL;
  ATerm h_7 = NULL;
  f_7 = t;
  {
    ATerm j_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(f_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_7;
      }
    {
      ATerm k_7;
      k_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_5, term_l_7, (ATerm) ATinsert(ATempty, not_null(f_7)));
        t = table_put_0(t);
      }
      t = k_7;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = term_n_7;
            return(t);
          }
          t = debug_1(t, u_0);
          return(t);
        }
        t = if_verbose4_1(t, t_0);
        {
          ATerm o_7 = t;
          int p_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(p_7);
            }
          else
            {
              t = o_7;
              t = (ATerm) ATempty;
            }
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = term_s_7;
                return(t);
              }
              t = say_1(t, w_0);
              return(t);
            }
            t = if_verbose6_1(t, v_0);
            {
              ATerm i_7 = NULL;
              i_7 = t;
              if(((h_7 != NULL) && (h_7 != i_7)))
                _fail(i_7);
              else
                h_7 = i_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(h_7));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = term_t_7;
                        return(t);
                      }
                      t = say_1(t, y_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, x_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_v_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(f_7)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm a_1 (ATerm t)
                            {
                              t = term_s_7;
                              return(t);
                            }
                            t = say_1(t, a_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, z_0);
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
  ATerm m_7 = NULL;
  m_7 = t;
  t = SSL_getenv(not_null(m_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_7;
      t = get_config_0(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_8;
            t = getenv_0(t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    t = debug_1(t, c_1);
    return(t);
  }
  t = if_verbose5_1(t, b_1);
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_8;
          t = table_get_0(t);
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_8;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_n_8;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_u_8;
          return(t);
        }
        t = debug_1(t, g_1);
        return(t);
      }
      t = if_verbose5_1(t, f_1);
      {
        t = xtc_load_0(t);
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = term_u_8;
                return(t);
              }
              t = debug_1(t, i_1);
              return(t);
            }
            t = if_verbose5_1(t, h_1);
          }
        }
      }
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm q_7 = NULL;
        ATerm r_7 = NULL;
        r_7 = t;
        if(((q_7 != NULL) && (q_7 != r_7)))
          _fail(r_7);
        else
          q_7 = r_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(q_7)), term_y_8);
          {
            t = error_0(t);
            {
              ATerm j_1 (ATerm t)
              {
                t = term_v_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      t = term_c_9;
                      return(t);
                    }
                    t = debug_1(t, k_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, j_1);
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
  ATerm u_7 = NULL;
  u_7 = t;
  t = SSL_ReadFromFile(not_null(u_7));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_stdin_0))
    {
      ATerm e_8 = NULL;
      ATerm f_8 = NULL;
      t = term_d_9;
      {
        t = ReadFromFile_0(t);
        {
          f_8 = t;
          if(((e_8 != NULL) && (e_8 != f_8)))
            _fail(f_8);
          else
            e_8 = f_8;
        }
      }
      t = not_null(e_8);
    }
  else
    {
      if(match_cons(c_8, sym_FILE_1))
        {
          d_8 = ATgetArgument(c_8, 0);
          {
            ATerm h_8 = NULL;
            ATerm i_8 = NULL;
            t = not_null(d_8);
            {
              t = ReadFromFile_0(t);
              {
                i_8 = t;
                if(((h_8 != NULL) && (h_8 != i_8)))
                  _fail(i_8);
                else
                  h_8 = i_8;
              }
            }
            t = not_null(h_8);
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
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym__2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      t = SSL_WriteToBinaryFile(not_null(q_8), not_null(r_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm x_8 = NULL;
  ATerm z_8 = NULL;
  x_8 = t;
  {
    ATerm a_9 = NULL;
    t = xtc_new_file_0(t);
    {
      a_9 = t;
      {
        if(((z_8 != NULL) && (z_8 != a_9)))
          _fail(a_9);
        else
          z_8 = a_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(x_8));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, e_69, f_69);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym__2))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      t = SSL_call(not_null(g_9), not_null(h_9));
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
ATerm xtc_command_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm n_9 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm o_9 = NULL;
    t = v_68(t);
    {
      t = xtc_find_0(t);
      {
        o_9 = t;
        if(((n_9 != NULL) && (n_9 != o_9)))
          _fail(o_9);
        else
          n_9 = o_9;
      }
    }
  }
  t = i_9;
  {
    ATerm j_9;
    j_9 = t;
    {
      ATerm p_9 = NULL;
      ATerm q_9 = NULL;
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(p_9));
        t = call_0(t);
      }
    }
    t = j_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      {
        ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
        ATerm k_9;
        k_9 = t;
        {
          ATerm g_10 = NULL;
          ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
          t = n_69(t);
          {
            g_10 = t;
            {
              if(((d_10 != NULL) && (d_10 != g_10)))
                _fail(g_10);
              else
                d_10 = g_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_10), not_null(z_9), not_null(a_10));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_9 = t;
                    int m_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), term_r_9);
                        t = table_get_0(t);
                        LocalPopChoice(m_9);
                      }
                    else
                      {
                        t = l_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_10 = t;
                      w_9 :
                      if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
                        {
                          i_10 = ATgetFirst((ATermList) h_10);
                          j_10 = (ATerm) ATgetNext((ATermList) h_10);
                          {
                            if(((e_10 != NULL) && (e_10 != i_10)))
                              _fail(i_10);
                            else
                              e_10 = i_10;
                            {
                              if(((f_10 != NULL) && (f_10 != j_10)))
                                _fail(j_10);
                              else
                                f_10 = j_10;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_10), term_r_9, (ATerm) ATinsert(CheckATermList(not_null(f_10)), (ATerm) ATinsert(CheckATermList(not_null(e_10)), not_null(z_9))));
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
        t = k_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_70 (ATerm))
{
  ATerm s_9;
  s_9 = t;
  {
    t = b_70(t);
    {
      ATerm l_1 (ATerm t)
      {
        t = term_t_9;
        return(t);
      }
      t = debug_1(t, l_1);
    }
  }
  t = s_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
      t_10 = t;
      o_10 :
      if(match_cons(t_10, sym__2))
        {
          u_10 = ATgetArgument(t_10, 0);
          v_10 = ATgetArgument(t_10, 1);
          {
            if(((s_10 != NULL) && (s_10 != u_10)))
              _fail(u_10);
            else
              s_10 = u_10;
            if(((r_10 != NULL) && (r_10 != v_10)))
              _fail(v_10);
            else
              r_10 = v_10;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_9);
      t = SSL_open_file(not_null(s_10), not_null(r_10));
    }
  else
    {
      t = u_9;
      {
        ATerm w_10 = NULL;
        ATerm x_10 = NULL;
        ATerm m_1 (ATerm t)
        {
          t = term_b_10;
          return(t);
        }
        t = obsolete_1(t, m_1);
        {
          w_10 = t;
          {
            if(((s_10 != NULL) && (s_10 != w_10)))
              _fail(w_10);
            else
              s_10 = w_10;
            {
              ATerm c_10;
              c_10 = t;
              {
                ATerm y_10 = NULL;
                t = term_k_10;
                {
                  y_10 = t;
                  if(((x_10 != NULL) && (x_10 != y_10)))
                    _fail(y_10);
                  else
                    x_10 = y_10;
                }
              }
              t = c_10;
              t = SSL_open_file(not_null(s_10), not_null(x_10));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm g_11 = NULL;
  e_11 = t;
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm h_11 = NULL;
      t = term_m_10;
      {
        h_11 = t;
        if(((g_11 != NULL) && (g_11 != h_11)))
          _fail(h_11);
        else
          g_11 = h_11;
      }
    }
    t = l_10;
    {
      t = SSL_open_file(not_null(e_11), not_null(g_11));
      t = SSL_close_file(not_null(e_11));
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
  ATerm l_11 = NULL;
  ATerm m_11 = NULL;
  t = term_n_10;
  {
    t = new_0(t);
    {
      m_11 = t;
      if(((l_11 != NULL) && (l_11 != m_11)))
        _fail(m_11);
      else
        l_11 = m_11;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_p_10);
    {
      t = conc_strings_0(t);
      {
        ATerm q_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = q_10;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm q_11 = NULL;
  t = new_file_0(t);
  {
    q_11 = t;
    {
      ATerm a_11;
      a_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_k_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_n_10);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_b_11;
                return(t);
              }
              t = assert_1(t, n_1);
            }
          }
        }
      }
      t = a_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_stdin_0))
    {
      ATerm c_12 = NULL;
      ATerm d_12 = NULL;
      ATerm e_12 = NULL;
      t = xtc_new_file_0(t);
      {
        d_12 = t;
        {
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
          {
            ATerm f_12 = NULL;
            t = o_0(t);
            {
              f_12 = t;
              if(((e_12 != NULL) && (e_12 != f_12)))
                _fail(f_12);
              else
                e_12 = f_12;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_12), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_12)), term_c_11));
              {
                ATerm d_11 = t;
                int f_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(f_11);
                  }
                else
                  {
                    t = d_11;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, n_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_12));
    }
  else
    {
      if(match_cons(a_12, sym_FILE_1))
        {
          b_12 = ATgetArgument(a_12, 0);
          {
            ATerm h_12 = NULL;
            ATerm i_12 = NULL;
            t = not_null(b_12);
            {
              ATerm j_12 = NULL;
              t = xtc_new_file_0(t);
              {
                i_12 = t;
                {
                  if(((h_12 != NULL) && (h_12 != i_12)))
                    _fail(i_12);
                  else
                    h_12 = i_12;
                  {
                    ATerm k_12 = NULL;
                    t = o_0(t);
                    {
                      k_12 = t;
                      if(((j_12 != NULL) && (j_12 != k_12)))
                        _fail(k_12);
                      else
                        j_12 = k_12;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_12)), term_c_11), not_null(b_12)), term_i_11));
                      {
                        ATerm j_11 = t;
                        int k_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(k_11);
                          }
                        else
                          {
                            t = j_11;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, n_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_12));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm v_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_stdin_0))
    {
      ATerm x_12 = NULL,z_12 = NULL;
      ATerm n_11;
      n_11 = t;
      {
        ATerm y_12 = NULL;
        t = SSLgetAnnotations(not_null(v_12));
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
      }
      t = n_11;
      {
        ATerm a_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(x_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        t = not_null(z_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_FILE_1))
    {
      k_13 = ATgetArgument(j_13, 0);
      {
        ATerm n_13 = NULL,p_13 = NULL;
        ATerm o_13 = NULL;
        t = SSLgetAnnotations(not_null(j_13));
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
        {
          t = not_null(k_13);
          {
            ATerm r_13 = NULL;
            t = d_48(t);
            {
              p_13 = t;
              {
                ATerm s_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(p_13)), not_null(n_13));
                {
                  s_13 = t;
                  if(((r_13 != NULL) && (r_13 != s_13)))
                    _fail(s_13);
                  else
                    r_13 = s_13;
                }
                t = not_null(r_13);
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
ATerm xtc_transform_2 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 = t;
      int s_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_11);
        }
      else
        {
          t = r_11;
          t = stdin_0(t);
        }
      LocalPopChoice(p_11);
      t = xtc_transform_file_2(t, x_68, y_68);
    }
  else
    {
      t = o_11;
      t = xtc_transform_term_2(t, x_68, y_68);
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym__2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      t = SSL_rename(not_null(a_14), not_null(b_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_stdout_0))
    {
      ATerm l_14 = NULL,n_14 = NULL;
      ATerm t_11;
      t_11 = t;
      {
        ATerm m_14 = NULL;
        t = SSLgetAnnotations(not_null(j_14));
        {
          m_14 = t;
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
        }
      }
      t = t_11;
      {
        ATerm o_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(l_14));
        {
          o_14 = t;
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
        }
        t = not_null(n_14);
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
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      t = SSL_copy(not_null(v_14), not_null(w_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_FILE_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL;
            t = m_0(t);
            {
              j_15 = t;
              d_15 :
              if(match_cons(j_15, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), term_w_11);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(h_15);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_w_11;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm l_15 = NULL;
              ATerm m_15 = NULL;
              t = m_0(t);
              {
                m_15 = t;
                {
                  if(((l_15 != NULL) && (l_15 != m_15)))
                    _fail(m_15);
                  else
                    l_15 = m_15;
                  {
                    ATerm x_11 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_11;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), not_null(l_15));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_15));
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
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
    {
      u_15 = ATgetFirst((ATermList) t_15);
      v_15 = (ATerm) ATgetNext((ATermList) t_15);
      t = not_null(v_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      {
        ATerm y_11;
        y_11 = t;
        {
          ATerm h_16 = NULL;
          ATerm i_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(e_16));
          {
            ATerm g_12 = t;
            int l_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_12);
              }
            else
              {
                t = g_12;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_16), not_null(e_16), not_null(h_16));
            t = table_put_0(t);
          }
        }
        t = y_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  ATerm m_12;
  m_12 = t;
  {
    ATerm t_16 = NULL;
    ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
    t = k_69(t);
    {
      t_16 = t;
      {
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), term_r_9);
              t = table_get_0(t);
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            u_16 = t;
            p_16 :
            if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
              {
                v_16 = ATgetFirst((ATermList) u_16);
                w_16 = (ATerm) ATgetNext((ATermList) u_16);
                {
                  if(((r_16 != NULL) && (r_16 != v_16)))
                    _fail(v_16);
                  else
                    r_16 = v_16;
                  {
                    if(((q_16 != NULL) && (q_16 != w_16)))
                      _fail(w_16);
                    else
                      q_16 = w_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_16), term_r_9, not_null(q_16));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_16);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm x_16 = NULL;
                              x_16 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), not_null(x_16));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, o_1);
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
  ATerm e_17 = NULL;
  e_17 = t;
  t = SSL_remove(not_null(e_17));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_58(t);
      t = k_58(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        t = k_58(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm j_17 = NULL;
  ATerm r_12;
  r_12 = t;
  {
    ATerm k_17 = NULL;
    ATerm l_17 = NULL;
    t = j_69(t);
    {
      k_17 = t;
      {
        if(((j_17 != NULL) && (j_17 != k_17)))
          _fail(k_17);
        else
          j_17 = k_17;
        {
          ATerm m_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_17), term_r_9);
          {
            ATerm s_12 = t;
            int t_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_12);
              }
            else
              {
                t = s_12;
                t = (ATerm) ATempty;
              }
            {
              m_17 = t;
              if(((l_17 != NULL) && (l_17 != m_17)))
                _fail(m_17);
              else
                l_17 = m_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_17), term_r_9, (ATerm) ATinsert(CheckATermList(not_null(l_17)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL;
  ATerm p_1 (ATerm t)
  {
    t = term_b_11;
    return(t);
  }
  t = begin_scope_1(t, p_1);
  {
    ATerm q_1 (ATerm t)
    {
      ATerm w_12;
      w_12 = t;
      {
        ATerm v_17 = NULL,w_17 = NULL,c_18 = NULL;
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_13;
            t = table_get_0(t);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          v_17 = t;
          s_17 :
          if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
            {
              w_17 = ATgetFirst((ATermList) v_17);
              c_18 = (ATerm) ATgetNext((ATermList) v_17);
              {
                if(((u_17 != NULL) && (u_17 != w_17)))
                  _fail(w_17);
                else
                  u_17 = w_17;
                {
                  if(((t_17 != NULL) && (t_17 != c_18)))
                    _fail(c_18);
                  else
                    t_17 = c_18;
                  {
                    t = not_null(u_17);
                    {
                      ATerm r_1 (ATerm t)
                      {
                        ATerm e_13 = t;
                        int f_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(f_13);
                          }
                        else
                          {
                            t = e_13;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, r_1);
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
        ATerm s_1 (ATerm t)
        {
          t = term_b_11;
          return(t);
        }
        t = end_scope_1(t, s_1);
      }
      return(t);
    }
    t = restore_always_2(t, p_68, q_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_18 = NULL;
        ATerm g_18 = NULL;
        t = term_i_11;
        {
          t = get_config_0(t);
          {
            g_18 = t;
            if(((f_18 != NULL) && (f_18 != g_18)))
              _fail(g_18);
            else
              f_18 = g_18;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = term_d_9;
      }
    {
      t = q_68(t);
      {
        ATerm v_1 (ATerm t)
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_c_11;
              t = get_config_0(t);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              t = term_w_11;
            }
          return(t);
        }
        t = rename_to_1(t, v_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, u_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  t = SSL_string_to_int(not_null(j_18));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  r_18 = t;
  p_18 :
  if(match_string(r_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
        {
          x_18 = ATgetFirst((ATermList) r_18);
          y_18 = (ATerm) ATgetNext((ATermList) r_18);
          q_18 :
          if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
            {
              z_18 = ATgetFirst((ATermList) y_18);
              a_19 = (ATerm) ATgetNext((ATermList) y_18);
              {
                ATerm p_19 = NULL;
                ATerm q_13;
                q_13 = t;
                {
                  t = not_null(x_18);
                  t = j_0(t);
                }
                t = q_13;
                {
                  ATerm r_19 = NULL;
                  t = not_null(z_18);
                  {
                    t = k_0(t);
                    {
                      r_19 = t;
                      if(((p_19 != NULL) && (p_19 != r_19)))
                        _fail(r_19);
                      else
                        p_19 = r_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_19)), not_null(p_19));
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
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm l_20 = NULL;
        l_20 = t;
        w_19 :
        if(!(match_string(l_20, "-i")))
          {
            if(!(match_string(l_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        ATerm o_20 = NULL;
        ATerm v_13;
        v_13 = t;
        {
          ATerm m_20 = NULL;
          ATerm n_20 = NULL;
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(m_20));
            t = set_config_0(t);
          }
        }
        t = v_13;
        {
          ATerm p_20 = NULL;
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_20));
        }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_w_13;
        return(t);
      }
      t = ArgOption_3(t, w_1, x_1, y_1);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm x_13 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm q_20 = NULL;
              q_20 = t;
              z_19 :
              if(!(match_string(q_20, "-o")))
                {
                  if(!(match_string(q_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm a_2 (ATerm t)
            {
              ATerm t_20 = NULL;
              ATerm d_14;
              d_14 = t;
              {
                ATerm r_20 = NULL;
                ATerm s_20 = NULL;
                s_20 = t;
                if(((r_20 != NULL) && (r_20 != s_20)))
                  _fail(s_20);
                else
                  r_20 = s_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(r_20));
                  t = set_config_0(t);
                }
              }
              t = d_14;
              {
                ATerm u_20 = NULL;
                u_20 = t;
                if(((t_20 != NULL) && (t_20 != u_20)))
                  _fail(u_20);
                else
                  t_20 = u_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_20));
              }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_e_14;
              return(t);
            }
            t = ArgOption_3(t, z_1, a_2, b_2);
            LocalPopChoice(c_14);
          }
        else
          {
            t = x_13;
            {
              ATerm f_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 (ATerm t)
                  {
                    ATerm v_20 = NULL;
                    v_20 = t;
                    c_20 :
                    if(!(match_string(v_20, "-S")))
                      {
                        if(!(match_string(v_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm d_2 (ATerm t)
                  {
                    t = term_k_14;
                    t = set_config_0(t);
                    t = term_p_14;
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_q_14;
                    return(t);
                  }
                  t = Option_3(t, c_2, d_2, e_2);
                  LocalPopChoice(g_14);
                }
              else
                {
                  t = f_14;
                  {
                    ATerm r_14 = t;
                    int s_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_2 (ATerm t)
                        {
                          ATerm w_20 = NULL;
                          w_20 = t;
                          d_20 :
                          if(!(match_string(w_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm g_2 (ATerm t)
                        {
                          ATerm e_21 = NULL;
                          ATerm x_14;
                          x_14 = t;
                          {
                            ATerm x_20 = NULL;
                            ATerm d_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_21 = t;
                              if(((x_20 != NULL) && (x_20 != d_21)))
                                _fail(d_21);
                              else
                                x_20 = d_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(x_20));
                              t = set_config_0(t);
                            }
                          }
                          t = x_14;
                          {
                            ATerm f_21 = NULL;
                            f_21 = t;
                            if(((e_21 != NULL) && (e_21 != f_21)))
                              _fail(f_21);
                            else
                              e_21 = f_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_21));
                          }
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          t = term_y_14;
                          return(t);
                        }
                        t = ArgOption_3(t, f_2, g_2, h_2);
                        LocalPopChoice(s_14);
                      }
                    else
                      {
                        t = r_14;
                        {
                          ATerm z_14 = t;
                          int a_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_2 (ATerm t)
                              {
                                ATerm g_21 = NULL;
                                g_21 = t;
                                g_20 :
                                if(!(match_string(g_21, "-k")))
                                  {
                                    if(!(match_string(g_21, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm j_2 (ATerm t)
                              {
                                ATerm b_15;
                                b_15 = t;
                                {
                                  ATerm h_21 = NULL;
                                  ATerm i_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    i_21 = t;
                                    if(((h_21 != NULL) && (h_21 != i_21)))
                                      _fail(i_21);
                                    else
                                      h_21 = i_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_c_15, not_null(h_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = b_15;
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                t = term_e_15;
                                return(t);
                              }
                              t = ArgOption_3(t, i_2, j_2, k_2);
                              LocalPopChoice(a_15);
                            }
                          else
                            {
                              t = z_14;
                              {
                                ATerm i_15 = t;
                                int k_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_2 (ATerm t)
                                    {
                                      ATerm j_21 = NULL;
                                      j_21 = t;
                                      i_20 :
                                      if(!(match_string(j_21, "-v")))
                                        {
                                          if(!(match_string(j_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm m_2 (ATerm t)
                                    {
                                      t = term_o_15;
                                      t = set_config_0(t);
                                      t = term_p_15;
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = term_q_15;
                                      return(t);
                                    }
                                    t = Option_3(t, l_2, m_2, o_2);
                                    LocalPopChoice(k_15);
                                  }
                                else
                                  {
                                    t = i_15;
                                    {
                                      ATerm r_15 = t;
                                      int w_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_2 (ATerm t)
                                          {
                                            ATerm k_21 = NULL;
                                            k_21 = t;
                                            j_20 :
                                            if(!(match_string(k_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = term_y_15;
                                            t = set_config_0(t);
                                            t = term_z_15;
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_a_16;
                                            return(t);
                                          }
                                          t = Option_3(t, p_2, q_2, r_2);
                                          LocalPopChoice(w_15);
                                        }
                                      else
                                        {
                                          t = r_15;
                                          {
                                            ATerm u_2 (ATerm t)
                                            {
                                              ATerm l_21 = NULL;
                                              l_21 = t;
                                              k_20 :
                                              if(!(match_string(l_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm v_2 (ATerm t)
                                            {
                                              t = term_g_16;
                                              t = set_config_0(t);
                                              t = term_j_16;
                                              return(t);
                                            }
                                            ATerm w_2 (ATerm t)
                                            {
                                              t = term_k_16;
                                              return(t);
                                            }
                                            t = Option_3(t, u_2, v_2, w_2);
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
  ATerm a_22 = NULL;
  ATerm l_16;
  l_16 = t;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm b_22 = NULL,c_22 = NULL;
      b_22 = t;
      z_21 :
      if(match_cons(b_22, sym_Program_1))
        {
          c_22 = ATgetArgument(b_22, 0);
          if(((a_22 != NULL) && (a_22 != c_22)))
            _fail(c_22);
          else
            a_22 = c_22;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, x_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_16), not_null(a_22)), term_m_16));
      {
        t = printnl_0(t);
        {
          t = term_o_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_5, (ATerm) ATinsert(ATempty, term_y_16));
  {
    t = printnl_0(t);
    {
      t = term_o_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = SSL_TicksToSeconds(not_null(f_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym__2))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_22), not_null(m_22));
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = SSL_addr(not_null(l_22), not_null(m_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_65(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
        t_22 = t;
        s_22 :
        if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
          {
            u_22 = ATgetFirst((ATermList) t_22);
            v_22 = (ATerm) ATgetNext((ATermList) t_22);
            {
              ATerm y_22 = NULL;
              ATerm z_22 = NULL;
              t = not_null(v_22);
              {
                t = foldr_2(t, u_65, v_65);
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_22), not_null(y_22));
                t = v_65(t);
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
ATerm crush_2 (ATerm t, ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm g_23 = NULL;
  ATerm i_23 = NULL;
  g_23 = t;
  {
    ATerm j_23 = NULL;
    ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
    t = not_null(g_23);
    {
      j_23 = t;
      {
        t = SSL_explode_term(not_null(j_23));
        {
          l_23 = t;
          f_23 :
          if(match_cons(l_23, sym__2))
            {
              m_23 = ATgetArgument(l_23, 0);
              n_23 = ATgetArgument(l_23, 1);
              if(((i_23 != NULL) && (i_23 != n_23)))
                _fail(n_23);
              else
                i_23 = n_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_23);
      t = foldr_2(t, s_64, t_64);
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
    ATerm y_2 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = crush_2(t, y_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm d_17;
        d_17 = t;
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_23), not_null(v_23));
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              t = SSL_gtr(not_null(u_23), not_null(v_23));
            }
        }
        t = d_17;
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
  ATerm b_24 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
      c_24 = t;
      a_24 :
      if(match_cons(c_24, sym__2))
        {
          d_24 = ATgetArgument(c_24, 0);
          e_24 = ATgetArgument(c_24, 1);
          {
            if(((b_24 != NULL) && (b_24 != d_24)))
              _fail(d_24);
            else
              b_24 = d_24;
            if(((b_24 != NULL) && (b_24 != e_24)))
              _fail(e_24);
            else
              b_24 = e_24;
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
ATerm if_verbose1_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17;
      p_17 = t;
      {
        ATerm h_24 = NULL;
        ATerm i_24 = NULL;
        t = term_m_5;
        {
          t = get_config_0(t);
          {
            i_24 = t;
            if(((h_24 != NULL) && (h_24 != i_24)))
              _fail(i_24);
            else
              h_24 = i_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_24), term_o_16);
          t = geq_0(t);
        }
      }
      t = p_17;
      t = d_54(t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm m_24 = NULL,o_24 = NULL;
    ATerm q_17;
    q_17 = t;
    {
      ATerm n_24 = NULL;
      t = run_time_0(t);
      {
        n_24 = t;
        if(((m_24 != NULL) && (m_24 != n_24)))
          _fail(n_24);
        else
          m_24 = n_24;
      }
    }
    t = q_17;
    {
      ATerm p_24 = NULL;
      t = term_r_17;
      {
        t = get_config_0(t);
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), not_null(m_24)), term_x_17), not_null(o_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  {
    t = term_h_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_Version_0))
    {
      ATerm y_24 = NULL,a_25 = NULL;
      ATerm z_17;
      z_17 = t;
      {
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
      }
      t = z_17;
      {
        ATerm b_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_24));
        {
          b_25 = t;
          if(((a_25 != NULL) && (a_25 != b_25)))
            _fail(b_25);
          else
            a_25 = b_25;
        }
        t = not_null(a_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
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
  t = fetch_1(t, c_3);
  t = u_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_table_create(not_null(g_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  {
    ATerm h_18;
    h_18 = t;
    {
      t = term_i_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_18, term_k_18, not_null(k_25));
          t = table_put_0(t);
        }
      }
    }
    t = h_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = SSL_table_destroy(not_null(o_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_exit(not_null(s_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(((ATgetType(w_25) == AT_LIST) && ATisEmpty(w_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
        {
          x_25 = ATgetFirst((ATermList) w_25);
          y_25 = (ATerm) ATgetNext((ATermList) w_25);
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
  ATerm l_18;
  l_18 = t;
  {
    ATerm b_26 = NULL;
    ATerm e_26 = NULL;
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        {
          ATerm c_26 = NULL;
          ATerm d_26 = NULL;
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
          t = (ATerm) ATinsert(ATempty, not_null(c_26));
        }
      }
    {
      e_26 = t;
      if(((b_26 != NULL) && (b_26 != e_26)))
        _fail(e_26);
      else
        b_26 = e_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(b_26));
      t = printnl_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_26 = NULL,u_26 = NULL,v_26 = NULL;
  v_26 = t;
  p_26 :
  if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
    {
      q_26 = ATgetFirst((ATermList) v_26);
      u_26 = (ATerm) ATgetNext((ATermList) v_26);
      {
        ATerm y_26 = NULL;
        t = not_null(u_26);
        {
          ATerm o_18;
          o_18 = t;
          {
            ATerm z_26 = NULL,b_27 = NULL,d_27 = NULL;
            ATerm s_18;
            s_18 = t;
            {
              ATerm a_27 = NULL;
              t = i_0(t);
              {
                a_27 = t;
                if(((z_26 != NULL) && (z_26 != a_27)))
                  _fail(a_27);
                else
                  z_26 = a_27;
              }
            }
            t = s_18;
            {
              ATerm c_27 = NULL;
              t = not_null(q_26);
              {
                t = h_0(t);
                {
                  c_27 = t;
                  if(((b_27 != NULL) && (b_27 != c_27)))
                    _fail(c_27);
                  else
                    b_27 = c_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_26)), not_null(b_27));
                {
                  d_27 = t;
                  if(((y_26 != NULL) && (y_26 != d_27)))
                    _fail(d_27);
                  else
                    y_26 = d_27;
                }
              }
            }
          }
          t = o_18;
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(y_26);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_26) == AT_LIST) && ATisEmpty(v_26)))
        {
          {
            t = term_n_10;
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
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_52 (ATerm))
{
  ATerm q_27 = NULL,r_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_Program_1))
    {
      r_27 = ATgetArgument(q_27, 0);
      {
        ATerm u_27 = NULL,w_27 = NULL;
        ATerm v_27 = NULL;
        t = SSLgetAnnotations(not_null(q_27));
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
        {
          t = not_null(r_27);
          {
            ATerm y_27 = NULL;
            t = q_52(t);
            {
              w_27 = t;
              {
                ATerm z_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_27)), not_null(u_27));
                {
                  z_27 = t;
                  if(((y_27 != NULL) && (y_27 != z_27)))
                    _fail(z_27);
                  else
                    y_27 = z_27;
                }
                t = not_null(y_27);
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
  ATerm h_28 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28 = NULL;
      t = term_r_17;
      {
        t = get_config_0(t);
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
      }
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_3 (ATerm t)
          {
            ATerm j_28 = NULL;
            j_28 = t;
            if(((h_28 != NULL) && (h_28 != j_28)))
              _fail(j_28);
            else
              h_28 = j_28;
            return(t);
          }
          t = Program_1(t, i_3);
          return(t);
        }
        t = fetch_1(t, h_3);
      }
    }
  {
    t = term_v_18;
    {
      t = echo_0(t);
      {
        t = term_c_19;
        {
          t = table_get_0(t);
          {
            ATerm m_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, m_3);
            {
              ATerm u_3 (ATerm t)
              {
                ATerm k_28 = NULL;
                ATerm l_28 = NULL;
                l_28 = t;
                if(((k_28 != NULL) && (k_28 != l_28)))
                  _fail(l_28);
                else
                  k_28 = l_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_28)), term_d_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_3);
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
  ATerm e_19;
  e_19 = t;
  {
    ATerm q_28 = NULL;
    ATerm r_28 = NULL;
    r_28 = t;
    if(((q_28 != NULL) && (q_28 != r_28)))
      _fail(r_28);
    else
      q_28 = r_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_5, (ATerm) ATinsert(ATempty, not_null(q_28)));
      t = printnl_0(t);
    }
  }
  t = e_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm f_19;
  f_19 = t;
  {
    t = v_69(t);
    t = debug_0(t);
  }
  t = f_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  x_28 :
  if(match_cons(a_29, sym_Undefined_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      {
        ATerm e_29 = NULL,g_29 = NULL;
        ATerm f_29 = NULL;
        t = SSLgetAnnotations(not_null(a_29));
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
        {
          t = not_null(b_29);
          {
            ATerm n_29 = NULL;
            t = r_52(t);
            {
              g_29 = t;
              {
                ATerm s_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_29)), not_null(e_29));
                {
                  s_29 = t;
                  if(((n_29 != NULL) && (n_29 != s_29)))
                    _fail(s_29);
                  else
                    n_29 = s_29;
                }
                t = not_null(n_29);
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
ATerm fetch_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm z_29 (ATerm t)
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_59, _id);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = Cons_2(t, _id, z_29);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_74 (ATerm))
{
  t = fetch_1(t, b_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Help_0))
    {
      ATerm o_30 = NULL,u_30 = NULL;
      ATerm i_19;
      i_19 = t;
      {
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(h_30));
        {
          q_30 = t;
          if(((o_30 != NULL) && (o_30 != q_30)))
            _fail(q_30);
          else
            o_30 = q_30;
        }
      }
      t = i_19;
      {
        ATerm v_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_30));
        {
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
        }
        t = not_null(u_30);
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
  ATerm n_31 = NULL;
  n_31 = t;
  t = SSL_implode_string(not_null(n_31));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      {
        ATerm v_31 = NULL,y_31 = NULL,z_31 = NULL;
        v_31 = t;
        u_31 :
        if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
          {
            y_31 = ATgetFirst((ATermList) v_31);
            z_31 = (ATerm) ATgetNext((ATermList) v_31);
            {
              t = not_null(y_31);
              {
                ATerm v_3 (ATerm t)
                {
                  t = not_null(z_31);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_3);
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
  ATerm m_32 = NULL;
  ATerm o_32 = NULL;
  m_32 = t;
  {
    ATerm p_32 = NULL;
    ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
    t = not_null(m_32);
    {
      p_32 = t;
      {
        t = SSL_explode_term(not_null(p_32));
        {
          r_32 = t;
          k_32 :
          if(match_cons(r_32, sym__2))
            {
              s_32 = ATgetArgument(r_32, 0);
              t_32 = ATgetArgument(r_32, 1);
              l_32 :
              if(match_string(s_32, ""))
                {
                  if(((o_32 != NULL) && (o_32 != t_32)))
                    _fail(t_32);
                  else
                    o_32 = t_32;
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
      t = not_null(o_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm x_32 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_32);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          t = Nil_0(t);
          t = x_59(t);
        }
      }
    return(t);
  }
  t = x_32(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      {
        t = not_null(b_33);
        {
          ATerm w_3 (ATerm t)
          {
            t = not_null(c_33);
            return(t);
          }
          t = at_end_1(t, w_3);
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
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  t = SSL_explode_string(not_null(h_33));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_46 (ATerm), ATerm i_46 (ATerm))
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      {
        ATerm w_33 = NULL,y_33 = NULL;
        ATerm x_33 = NULL;
        t = SSLgetAnnotations(not_null(q_33));
        {
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
        }
        {
          t = not_null(r_33);
          {
            ATerm a_34 = NULL;
            t = h_46(t);
            {
              y_33 = t;
              {
                t = not_null(s_33);
                {
                  ATerm c_34 = NULL;
                  t = i_46(t);
                  {
                    a_34 = t;
                    {
                      ATerm d_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_33), not_null(a_34)), not_null(w_33));
                      {
                        d_34 = t;
                        if(((c_34 != NULL) && (c_34 != d_34)))
                          _fail(d_34);
                        else
                          c_34 = d_34;
                      }
                      t = not_null(c_34);
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
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym__2))
    {
      m_34 = ATgetArgument(l_34, 0);
      n_34 = ATgetArgument(l_34, 1);
      {
        ATerm t_19;
        t_19 = t;
        t = SSL_printnl(not_null(m_34), not_null(n_34));
        t = t_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm u_19;
  u_19 = t;
  {
    ATerm t_34 = NULL,v_34 = NULL;
    ATerm v_19;
    v_19 = t;
    {
      ATerm u_34 = NULL;
      t = u_69(t);
      {
        u_34 = t;
        if(((t_34 != NULL) && (t_34 != u_34)))
          _fail(u_34);
        else
          t_34 = u_34;
      }
    }
    t = v_19;
    {
      ATerm w_34 = NULL;
      w_34 = t;
      if(((v_34 != NULL) && (v_34 != w_34)))
        _fail(w_34);
      else
        v_34 = w_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_34)), not_null(t_34)));
        t = printnl_0(t);
      }
    }
  }
  t = u_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm z_34 (ATerm t)
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = Cons_2(t, i_59, z_34);
      }
    return(t);
  }
  t = z_34(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  t = SSL_is_string(not_null(b_35));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm h_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = h_20;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, x_3);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            {
              ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
              k_35 = t;
              j_35 :
              if(match_cons(k_35, sym_Path_1))
                {
                  l_35 = ATgetArgument(k_35, 0);
                  t = not_null(l_35);
                }
              else
                {
                  if(match_cons(k_35, sym_Var_1))
                    {
                      l_35 = ATgetArgument(k_35, 0);
                      {
                        t = not_null(l_35);
                        {
                          ATerm z_20 = t;
                          int a_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_21);
                            }
                          else
                            {
                              t = z_20;
                              {
                                ATerm d_4 (ATerm t)
                                {
                                  t = term_b_21;
                                  return(t);
                                }
                                t = debug_1(t, d_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_35, sym_Prefix_2))
                        {
                          l_35 = ATgetArgument(k_35, 0);
                          m_35 = ATgetArgument(k_35, 1);
                          {
                            ATerm r_35 = NULL,t_35 = NULL;
                            ATerm c_21;
                            c_21 = t;
                            {
                              ATerm s_35 = NULL;
                              t = not_null(l_35);
                              {
                                t = eval_config_0(t);
                                {
                                  s_35 = t;
                                  if(((r_35 != NULL) && (r_35 != s_35)))
                                    _fail(s_35);
                                  else
                                    r_35 = s_35;
                                }
                              }
                            }
                            t = c_21;
                            {
                              ATerm u_35 = NULL;
                              t = not_null(m_35);
                              {
                                t = eval_config_0(t);
                                {
                                  u_35 = t;
                                  if(((t_35 != NULL) && (t_35 != u_35)))
                                    _fail(u_35);
                                  else
                                    t_35 = u_35;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_35), not_null(t_35));
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
  ATerm f_36 = NULL;
  f_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(f_36));
    {
      t = table_get_0(t);
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_21;
              p_21 = t;
              {
                ATerm h_36 = NULL;
                ATerm i_36 = NULL;
                i_36 = t;
                if(((h_36 != NULL) && (h_36 != i_36)))
                  _fail(i_36);
                else
                  h_36 = i_36;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_21, not_null(f_36), not_null(h_36));
                  t = table_put_0(t);
                }
              }
              t = p_21;
            }
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_57(t);
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
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      t = SSL_table_get(not_null(o_36), not_null(p_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym__3))
    {
      x_36 = ATgetArgument(w_36, 0);
      z_36 = ATgetArgument(w_36, 1);
      a_37 = ATgetArgument(w_36, 2);
      {
        ATerm s_21;
        s_21 = t;
        {
          ATerm g_37 = NULL;
          ATerm h_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_36), not_null(z_36));
          {
            ATerm t_21 = t;
            int u_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_21);
              }
            else
              {
                t = t_21;
                t = (ATerm) ATempty;
              }
            {
              h_37 = t;
              if(((g_37 != NULL) && (g_37 != h_37)))
                _fail(h_37);
              else
                g_37 = h_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_36), not_null(z_36), (ATerm) ATinsert(CheckATermList(not_null(g_37)), not_null(a_37)));
            t = table_put_0(t);
          }
        }
        t = s_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm l_37 = NULL;
  ATerm m_37 = NULL;
  t = term_n_10;
  {
    t = g_75(t);
    {
      m_37 = t;
      if(((l_37 != NULL) && (l_37 != m_37)))
        _fail(m_37);
      else
        l_37 = m_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_b_19, not_null(l_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  r_37 :
  if(match_string(s_37, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
        {
          t_37 = ATgetFirst((ATermList) s_37);
          u_37 = (ATerm) ATgetNext((ATermList) s_37);
          {
            ATerm x_37 = NULL;
            ATerm v_21;
            v_21 = t;
            {
              t = not_null(t_37);
              t = a_0(t);
            }
            t = v_21;
            {
              ATerm y_37 = NULL;
              t = term_n_10;
              {
                t = d_0(t);
                {
                  y_37 = t;
                  if(((x_37 != NULL) && (x_37 != y_37)))
                    _fail(y_37);
                  else
                    x_37 = y_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_37)), not_null(x_37));
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
  ATerm e_4 (ATerm t)
  {
    ATerm f_38 = NULL;
    f_38 = t;
    c_38 :
    if(!(match_string(f_38, "--help")))
      {
        if(!(match_string(f_38, "-h")))
          {
            if(!(match_string(f_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_x_21;
    {
      t = set_config_0(t);
      t = term_y_21;
    }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_d_22;
    return(t);
  }
  t = Option_3(t, e_4, j_4, k_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_38 = NULL,k_38 = NULL,m_38 = NULL;
  i_38 = t;
  h_38 :
  if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
    {
      k_38 = ATgetFirst((ATermList) i_38);
      m_38 = (ATerm) ATgetNext((ATermList) i_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
    {
      x_38 = ATgetFirst((ATermList) w_38);
      y_38 = (ATerm) ATgetNext((ATermList) w_38);
      {
        ATerm c_39 = NULL,e_39 = NULL;
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(w_38));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
        {
          t = not_null(x_38);
          {
            ATerm g_39 = NULL;
            t = q_47(t);
            {
              e_39 = t;
              {
                t = not_null(y_38);
                {
                  ATerm i_39 = NULL;
                  t = r_47(t);
                  {
                    g_39 = t;
                    {
                      ATerm j_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_39)), not_null(e_39)), not_null(c_39));
                      {
                        j_39 = t;
                        if(((i_39 != NULL) && (i_39 != j_39)))
                          _fail(j_39);
                        else
                          i_39 = j_39;
                      }
                      t = not_null(i_39);
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
  ATerm t_39 = NULL;
  t_39 = t;
  s_39 :
  if(((ATgetType(t_39) == AT_LIST) && ATisEmpty(t_39)))
    {
      {
        ATerm v_39 = NULL,x_39 = NULL;
        ATerm e_22;
        e_22 = t;
        {
          ATerm w_39 = NULL;
          t = SSLgetAnnotations(not_null(t_39));
          {
            w_39 = t;
            if(((v_39 != NULL) && (v_39 != w_39)))
              _fail(w_39);
            else
              v_39 = w_39;
          }
        }
        t = e_22;
        {
          ATerm y_39 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_39));
          {
            y_39 = t;
            if(((x_39 != NULL) && (x_39 != y_39)))
              _fail(y_39);
            else
              x_39 = y_39;
          }
          t = not_null(x_39);
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
  ATerm e_40 = NULL,f_40 = NULL,h_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__2))
    {
      f_40 = ATgetArgument(e_40, 0);
      h_40 = ATgetArgument(e_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_21, not_null(f_40), not_null(h_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm g_22;
  g_22 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_22;
        t = e_75(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        {
        }
      }
  }
  t = g_22;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm v_40 = NULL;
      ATerm o_22;
      o_22 = t;
      {
        ATerm o_40 = NULL;
        ATerm u_40 = NULL;
        u_40 = t;
        if(((o_40 != NULL) && (o_40 != u_40)))
          _fail(u_40);
        else
          o_40 = u_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_17, not_null(o_40));
          t = set_config_0(t);
        }
      }
      t = o_22;
      {
        ATerm w_40 = NULL;
        w_40 = t;
        if(((v_40 != NULL) && (v_40 != w_40)))
          _fail(w_40);
        else
          v_40 = w_40;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_40));
      }
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_22);
            }
          else
            {
              t = r_22;
              {
                t = e_75(t);
                t = Cons_2(t, _id, o_4);
              }
            }
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_4, o_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  ATerm x_22;
  x_22 = t;
  {
    ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
    j_41 = t;
    b_41 :
    if(match_cons(j_41, sym__3))
      {
        k_41 = ATgetArgument(j_41, 0);
        l_41 = ATgetArgument(j_41, 1);
        m_41 = ATgetArgument(j_41, 2);
        {
          if(((g_41 != NULL) && (g_41 != k_41)))
            _fail(k_41);
          else
            g_41 = k_41;
          {
            if(((h_41 != NULL) && (h_41 != l_41)))
              _fail(l_41);
            else
              h_41 = l_41;
            {
              if(((i_41 != NULL) && (i_41 != m_41)))
                _fail(m_41);
              else
                i_41 = m_41;
              t = SSL_table_put(not_null(g_41), not_null(h_41), not_null(i_41));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm p_41 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    t = term_b_23;
    t = table_put_0(t);
  }
  t = a_23;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_75(t);
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_4);
    {
      ATerm e_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23;
          k_23 = t;
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_21;
                t = get_config_0(t);
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_23;
          {
            t = system_usage_0(t);
            {
              t = term_h_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_23);
        }
      else
        {
          t = e_23;
          {
            ATerm q_23 = t;
            int r_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm q_41 = NULL;
                    q_41 = t;
                    if(((p_41 != NULL) && (p_41 != q_41)))
                      _fail(q_41);
                    else
                      p_41 = q_41;
                    return(t);
                  }
                  t = Undefined_1(t, t_4);
                  return(t);
                }
                t = fetch_1(t, s_4);
                {
                  ATerm y_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_41)), term_w_23);
                    return(t);
                  }
                  t = say_1(t, y_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_o_16;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(r_23);
              }
            else
              {
                t = q_23;
                {
                }
              }
          }
        }
      {
        ATerm x_23;
        x_23 = t;
        {
          t = term_w_18;
          t = table_destroy_0(t);
        }
        t = x_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  t = parse_options_1(t, a_73);
  {
    t = store_options_0(t);
    {
      t = c_73(t);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_73);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm f_24 = t;
              int g_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_24);
                }
              else
                {
                  t = f_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  t = option_wrap_4(t, e_73, default_usage_0, _id, f_73);
  return(t);
}
ATerm xtc_iowrap_1 (ATerm t, ATerm r_68 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    t = xtc_io_1(t, r_68);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, z_4);
  return(t);
}
ATerm astratego2text_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      t = term_j_24;
      return(t);
    }
    ATerm g_5 (ATerm t)
    {
      ATerm t_41 = NULL;
      ATerm u_41 = NULL;
      t = term_k_24;
      {
        t = xtc_find_0(t);
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_l_24);
      return(t);
    }
    t = xtc_transform_2(t, b_5, g_5);
    {
      ATerm h_5 (ATerm t)
      {
        t = term_q_24;
        return(t);
      }
      t = xtc_transform_1(t, h_5);
    }
    return(t);
  }
  t = xtc_iowrap_1(t, a_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = astratego2text_0(t);
  return(t);
}
