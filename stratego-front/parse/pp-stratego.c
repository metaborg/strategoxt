#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
ATerm term_w_23;
ATerm term_h_23;
ATerm term_w_22;
ATerm term_i_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_o_13;
ATerm term_a_13;
ATerm term_a_12;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_k_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_m_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_w_6);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_c_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_n_10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_m_6, term_b_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_d_11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_d_11);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_d_11);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_v_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_d_11);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__3, term_q_19, term_v_19, (ATerm) ATempty);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
}
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm z_78 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm y_78 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm a_79 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_68 (ATerm), ATerm f_68 (ATerm));
ATerm union_1 (ATerm, ATerm g_68 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm u_78 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm p_64 (ATerm));
ATerm assert_1 (ATerm, ATerm g_64 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_63 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm q_64 (ATerm));
ATerm debug_0 (ATerm);
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
ATerm foldr_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm crush_2 (ATerm, ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_78 (ATerm));
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
ATerm say_1 (ATerm, ATerm k_63 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_45 (ATerm), ATerm q_45 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_63 (ATerm));
ATerm map_1 (ATerm, ATerm n_72 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_75 (ATerm));
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
ATerm pp_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm read_from_0 (ATerm t)
{
  ATerm t_0 = NULL,h_1 = NULL;
  t_0 = t;
  s_0 :
  if(match_cons(t_0, sym_stdin_0))
    {
      ATerm i_1 = NULL;
      ATerm j_1 = NULL;
      t = term_k_6;
      {
        t = ReadFromFile_0(t);
        {
          j_1 = t;
          if(((i_1 != NULL) && (i_1 != j_1)))
            _fail(j_1);
          else
            i_1 = j_1;
        }
      }
      t = not_null(i_1);
    }
  else
    {
      if(match_cons(t_0, sym_FILE_1))
        {
          h_1 = ATgetArgument(t_0, 0);
          {
            ATerm c_2 = NULL;
            ATerm d_2 = NULL;
            t = not_null(h_1);
            {
              t = ReadFromFile_0(t);
              {
                d_2 = t;
                if(((c_2 != NULL) && (c_2 != d_2)))
                  _fail(d_2);
                else
                  c_2 = d_2;
              }
            }
            t = not_null(c_2);
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
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
  n_2 = t;
  m_2 :
  if(match_cons(n_2, sym__2))
    {
      o_2 = ATgetArgument(n_2, 0);
      p_2 = ATgetArgument(n_2, 1);
      t = SSL_WriteToBinaryFile(not_null(o_2), not_null(p_2));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm v_2 = NULL;
  ATerm x_2 = NULL;
  v_2 = t;
  {
    ATerm y_2 = NULL;
    t = xtc_new_file_0(t);
    {
      y_2 = t;
      {
        if(((x_2 != NULL) && (x_2 != y_2)))
          _fail(y_2);
        else
          x_2 = y_2;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), not_null(v_2));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_2));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, y_64, z_64);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      t = SSL_call(not_null(e_3), not_null(f_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  t = SSL_table_keys(not_null(k_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm a_0 (ATerm t)
      {
        ATerm s_3 = NULL;
        ATerm u_3 = NULL;
        s_3 = t;
        {
          ATerm v_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_3), not_null(s_3));
          {
            t = table_get_0(t);
            {
              v_3 = t;
              if(((u_3 != NULL) && (u_3 != v_3)))
                _fail(v_3);
              else
                u_3 = v_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_3), not_null(u_3));
        }
        return(t);
      }
      t = map_1(t, a_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    ATerm l_6;
    l_6 = t;
    {
      ATerm a_4 = NULL;
      ATerm b_4 = NULL;
      t = term_m_6;
      {
        t = get_config_0(t);
        {
          b_4 = t;
          if(((a_4 != NULL) && (a_4 != b_4)))
            _fail(b_4);
          else
            a_4 = b_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_4), term_r_6);
        t = geq_0(t);
      }
    }
    t = l_6;
    t = z_78(t);
    return(t);
  }
  t = try_1(t, b_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm s_6;
  s_6 = t;
  {
    ATerm e_4 = NULL;
    ATerm f_4 = NULL;
    f_4 = t;
    if(((e_4 != NULL) && (e_4 != f_4)))
      _fail(f_4);
    else
      e_4 = f_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, not_null(e_4));
      t = printnl_0(t);
    }
  }
  t = s_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm n_4 = NULL,o_4 = NULL;
  l_4 = t;
  {
    ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_4)));
    {
      t = table_get_0(t);
      {
        p_4 = t;
        j_4 :
        if(((ATgetType(p_4) == AT_LIST) && !(ATisEmpty(p_4))))
          {
            q_4 = ATgetFirst((ATermList) p_4);
            t_4 = (ATerm) ATgetNext((ATermList) p_4);
            k_4 :
            if(match_cons(q_4, sym__2))
              {
                r_4 = ATgetArgument(q_4, 0);
                s_4 = ATgetArgument(q_4, 1);
                {
                  if(((n_4 != NULL) && (n_4 != r_4)))
                    _fail(r_4);
                  else
                    n_4 = r_4;
                  if(((o_4 != NULL) && (o_4 != s_4)))
                    _fail(s_4);
                  else
                    o_4 = s_4;
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
    t = not_null(o_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym__2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      {
        ATerm f_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_5)));
        {
          t = table_get_0(t);
          {
            ATerm n_0 (ATerm t)
            {
              ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
              g_5 = t;
              y_4 :
              if(match_cons(g_5, sym__2))
                {
                  h_5 = ATgetArgument(g_5, 0);
                  i_5 = ATgetArgument(g_5, 1);
                  {
                    if(((c_5 != NULL) && (c_5 != h_5)))
                      _fail(h_5);
                    else
                      c_5 = h_5;
                    if(((f_5 != NULL) && (f_5 != i_5)))
                      _fail(i_5);
                    else
                      f_5 = i_5;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, n_0);
          }
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
ATerm xtc_import_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = term_x_6;
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
    return(t);
  }
  t = try_1(t, o_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm d_7;
    d_7 = t;
    {
      ATerm m_5 = NULL;
      ATerm n_5 = NULL;
      t = term_m_6;
      {
        t = get_config_0(t);
        {
          n_5 = t;
          if(((m_5 != NULL) && (m_5 != n_5)))
            _fail(n_5);
          else
            m_5 = n_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), term_e_7);
        t = geq_0(t);
      }
    }
    t = d_7;
    t = y_78(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm f_7;
    f_7 = t;
    {
      ATerm q_5 = NULL;
      ATerm r_5 = NULL;
      t = term_m_6;
      {
        t = get_config_0(t);
        {
          r_5 = t;
          if(((q_5 != NULL) && (q_5 != r_5)))
            _fail(r_5);
          else
            q_5 = r_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), term_k_7);
        t = geq_0(t);
      }
    }
    t = f_7;
    t = a_79(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      if(((w_5 != NULL) && (w_5 != x_5)))
        _fail(x_5);
      else
        w_5 = x_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_68 (ATerm), ATerm f_68 (ATerm))
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
    {
      e_6 = ATgetFirst((ATermList) d_6);
      f_6 = (ATerm) ATgetNext((ATermList) d_6);
      {
        t = f_68(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm i_6 = NULL;
            i_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(i_6));
              t = e_68(t);
            }
            return(t);
          }
          t = fetch_1(t, u_0);
        }
        t = not_null(f_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym__2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      {
        t = not_null(p_6);
        {
          ATerm u_6 (ATerm t)
          {
            ATerm l_7 = t;
            int m_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_6);
                LocalPopChoice(m_7);
              }
            else
              {
                t = l_7;
                {
                  ATerm n_7 = t;
                  int o_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_0 (ATerm t)
                      {
                        t = not_null(q_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_68, v_0);
                      t = u_6(t);
                      LocalPopChoice(o_7);
                    }
                  else
                    {
                      t = n_7;
                      t = Cons_2(t, _id, u_6);
                    }
                }
              }
            return(t);
          }
          t = u_6(t);
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
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym__3))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      c_7 = ATgetArgument(z_6, 2);
      {
        ATerm u_7;
        u_7 = t;
        {
          ATerm g_7 = NULL;
          ATerm h_7 = NULL,j_7 = NULL;
          ATerm i_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), not_null(b_7));
          {
            ATerm v_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(z_7);
              }
            else
              {
                t = v_7;
                t = (ATerm) ATempty;
              }
            {
              i_7 = t;
              if(((h_7 != NULL) && (h_7 != i_7)))
                _fail(i_7);
              else
                h_7 = i_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(c_7));
            {
              t = union_0(t);
              {
                j_7 = t;
                if(((g_7 != NULL) && (g_7 != j_7)))
                  _fail(j_7);
                else
                  g_7 = j_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_7), not_null(b_7), not_null(g_7));
            t = set_0(t);
          }
        }
        t = u_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      {
        t = not_null(t_7);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
            w_7 = t;
            p_7 :
            if(match_cons(w_7, sym__2))
              {
                x_7 = ATgetArgument(w_7, 0);
                y_7 = ATgetArgument(w_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_7), not_null(x_7), not_null(y_7));
                  t = u_78(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  t = SSL_ReadFromFile(not_null(e_8));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm j_8 = NULL;
  ATerm l_8 = NULL;
  j_8 = t;
  {
    ATerm a_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_8;
      }
    {
      ATerm b_8;
      b_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_6, term_c_8, (ATerm) ATinsert(ATempty, not_null(j_8)));
        t = table_put_0(t);
      }
      t = b_8;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            t = term_d_8;
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
              ATerm m_8 = NULL;
              m_8 = t;
              if(((l_8 != NULL) && (l_8 != m_8)))
                _fail(m_8);
              else
                l_8 = m_8;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_6, not_null(l_8));
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
                      t = (ATerm) ATmakeAppl(sym__3, term_v_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_8)), (ATerm) ATempty);
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
  ATerm q_8 = NULL;
  q_8 = t;
  t = SSL_getenv(not_null(q_8));
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
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_8;
            t = getenv_0(t);
            LocalPopChoice(r_8);
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
      t = term_t_8;
      return(t);
    }
    t = debug_1(t, g_1);
    return(t);
  }
  t = if_verbose5_1(t, f_1);
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_9;
          t = table_get_0(t);
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = w_8;
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = term_e_9;
          return(t);
        }
        t = debug_1(t, l_1);
        return(t);
      }
      t = if_verbose5_1(t, k_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
      {
        t = xtc_load_0(t);
        {
          ATerm n_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(o_9);
            }
          else
            {
              t = n_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_h_9;
                return(t);
              }
              t = debug_1(t, p_1);
              return(t);
            }
            t = if_verbose5_1(t, o_1);
          }
        }
      }
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm u_8 = NULL;
        ATerm v_8 = NULL;
        v_8 = t;
        if(((u_8 != NULL) && (u_8 != v_8)))
          _fail(v_8);
        else
          u_8 = v_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), not_null(u_8)), term_w_9);
          {
            t = error_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_v_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = term_y_9;
                      return(t);
                    }
                    t = debug_1(t, r_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, q_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm z_8 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm a_9 = NULL;
    t = p_64(t);
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
  t = z_9;
  {
    ATerm b_10;
    b_10 = t;
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
    t = b_10;
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
        ATerm c_10;
        c_10 = t;
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
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), term_n_10);
                        t = table_get_0(t);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(r_9)), (ATerm) ATinsert(CheckATermList(not_null(q_9)), not_null(l_9))));
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
        t = c_10;
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
  ATerm o_10;
  o_10 = t;
  {
    t = q_63(t);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_p_10;
        return(t);
      }
      t = debug_1(t, s_1);
    }
  }
  t = o_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  ATerm r_10 = t;
  int u_10 = stack_ptr;
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
      LocalPopChoice(u_10);
      t = SSL_open_file(not_null(e_10), not_null(d_10));
    }
  else
    {
      t = r_10;
      {
        ATerm i_10 = NULL;
        ATerm j_10 = NULL;
        ATerm t_1 (ATerm t)
        {
          t = term_v_10;
          return(t);
        }
        t = obsolete_1(t, t_1);
        {
          i_10 = t;
          {
            if(((e_10 != NULL) && (e_10 != i_10)))
              _fail(i_10);
            else
              e_10 = i_10;
            {
              ATerm w_10;
              w_10 = t;
              {
                ATerm k_10 = NULL;
                t = term_z_10;
                {
                  k_10 = t;
                  if(((j_10 != NULL) && (j_10 != k_10)))
                    _fail(k_10);
                  else
                    j_10 = k_10;
                }
              }
              t = w_10;
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
    ATerm a_11;
    a_11 = t;
    {
      ATerm t_10 = NULL;
      t = term_b_11;
      {
        t_10 = t;
        if(((s_10 != NULL) && (s_10 != t_10)))
          _fail(t_10);
        else
          s_10 = t_10;
      }
    }
    t = a_11;
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
  t = term_d_11;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_e_11);
    {
      t = conc_strings_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, u_1);
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
      ATerm f_11;
      f_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_z_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_d_11);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_g_11;
                return(t);
              }
              t = assert_1(t, v_1);
            }
          }
        }
      }
      t = f_11;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_11)), term_h_11));
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_11)), term_h_11), not_null(n_11)), term_i_11));
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
ATerm xtc_transform_2 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, r_64, s_64);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = xtc_transform_term_2(t, r_64, s_64);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, q_64, w_1);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm e_12 = NULL;
    ATerm f_12 = NULL;
    f_12 = t;
    if(((e_12 != NULL) && (e_12 != f_12)))
      _fail(f_12);
    else
      e_12 = f_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, not_null(e_12)));
      t = printnl_0(t);
    }
  }
  t = s_11;
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      t = SSL_rename(not_null(k_12), not_null(l_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_stdout_0))
    {
      ATerm v_12 = NULL,x_12 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm w_12 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
      }
      t = x_11;
      {
        ATerm y_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(v_12));
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
        t = not_null(x_12);
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
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      t = SSL_copy(not_null(f_13), not_null(g_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_FILE_1))
    {
      r_13 = ATgetArgument(q_13, 0);
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_13 = NULL;
            t = k_0(t);
            {
              t_13 = t;
              n_13 :
              if(match_cons(t_13, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_a_12);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(r_13);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_a_12;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            {
              ATerm v_13 = NULL;
              ATerm w_13 = NULL;
              t = k_0(t);
              {
                w_13 = t;
                {
                  if(((v_13 != NULL) && (v_13 != w_13)))
                    _fail(w_13);
                  else
                    v_13 = w_13;
                  {
                    ATerm b_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), not_null(v_13));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_13));
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
    {
      e_14 = ATgetFirst((ATermList) d_14);
      f_14 = (ATerm) ATgetNext((ATermList) d_14);
      t = not_null(f_14);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      {
        ATerm c_12;
        c_12 = t;
        {
          ATerm r_14 = NULL;
          ATerm s_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(o_14));
          {
            ATerm d_12 = t;
            int g_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(g_12);
              }
            else
              {
                t = d_12;
                t = (ATerm) ATempty;
              }
            {
              s_14 = t;
              if(((r_14 != NULL) && (r_14 != s_14)))
                _fail(s_14);
              else
                r_14 = s_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_14), not_null(o_14), not_null(r_14));
            t = table_put_0(t);
          }
        }
        t = c_12;
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
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm c_15 = NULL;
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
    t = d_64(t);
    {
      c_15 = t;
      {
        if(((b_15 != NULL) && (b_15 != c_15)))
          _fail(c_15);
        else
          b_15 = c_15;
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), term_n_10);
              t = table_get_0(t);
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_15 = t;
            y_14 :
            if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
              {
                e_15 = ATgetFirst((ATermList) d_15);
                f_15 = (ATerm) ATgetNext((ATermList) d_15);
                {
                  if(((a_15 != NULL) && (a_15 != e_15)))
                    _fail(e_15);
                  else
                    a_15 = e_15;
                  {
                    if(((z_14 != NULL) && (z_14 != f_15)))
                      _fail(f_15);
                    else
                      z_14 = f_15;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_15), term_n_10, not_null(z_14));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_15);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm g_15 = NULL;
                              g_15 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(g_15));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, x_1);
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
  t = h_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  t = SSL_remove(not_null(m_15));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm r_15 = NULL;
  ATerm o_12;
  o_12 = t;
  {
    ATerm s_15 = NULL;
    ATerm t_15 = NULL;
    t = c_64(t);
    {
      s_15 = t;
      {
        if(((r_15 != NULL) && (r_15 != s_15)))
          _fail(s_15);
        else
          r_15 = s_15;
        {
          ATerm u_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), term_n_10);
          {
            ATerm p_12 = t;
            int q_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_12);
              }
            else
              {
                t = p_12;
                t = (ATerm) ATempty;
              }
            {
              u_15 = t;
              if(((t_15 != NULL) && (t_15 != u_15)))
                _fail(u_15);
              else
                t_15 = u_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_15), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(t_15)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm z_15 = NULL,a_16 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = begin_scope_1(t, y_1);
  {
    t = n_64(t);
    {
      ATerm r_12;
      r_12 = t;
      {
        ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
        ATerm u_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_13;
            t = table_get_0(t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = u_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_16 = t;
          y_15 :
          if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
            {
              c_16 = ATgetFirst((ATermList) b_16);
              d_16 = (ATerm) ATgetNext((ATermList) b_16);
              {
                if(((a_16 != NULL) && (a_16 != c_16)))
                  _fail(c_16);
                else
                  a_16 = c_16;
                {
                  if(((z_15 != NULL) && (z_15 != d_16)))
                    _fail(d_16);
                  else
                    z_15 = d_16;
                  {
                    t = not_null(a_16);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, z_1);
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
      t = r_12;
      {
        ATerm a_2 (ATerm t)
        {
          t = term_g_11;
          return(t);
        }
        t = end_scope_1(t, a_2);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_16 = NULL;
        ATerm h_16 = NULL;
        t = term_i_11;
        {
          t = get_config_0(t);
          {
            h_16 = t;
            if(((g_16 != NULL) && (g_16 != h_16)))
              _fail(h_16);
            else
              g_16 = h_16;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_16));
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = term_k_6;
      }
    {
      t = o_64(t);
      {
        ATerm e_2 (ATerm t)
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_h_11;
              t = get_config_0(t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = term_a_12;
            }
          return(t);
        }
        t = rename_to_1(t, e_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, b_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  t = SSL_string_to_int(not_null(k_16));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  s_16 = t;
  q_16 :
  if(match_string(s_16, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
        {
          t_16 = ATgetFirst((ATermList) s_16);
          u_16 = (ATerm) ATgetNext((ATermList) s_16);
          r_16 :
          if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
            {
              v_16 = ATgetFirst((ATermList) u_16);
              w_16 = (ATerm) ATgetNext((ATermList) u_16);
              {
                ATerm a_17 = NULL;
                ATerm j_13;
                j_13 = t;
                {
                  t = not_null(t_16);
                  t = h_0(t);
                }
                t = j_13;
                {
                  ATerm b_17 = NULL;
                  t = not_null(v_16);
                  {
                    t = i_0(t);
                    {
                      b_17 = t;
                      if(((a_17 != NULL) && (a_17 != b_17)))
                        _fail(b_17);
                      else
                        a_17 = b_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_16)), not_null(a_17));
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
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm u_17 = NULL;
        u_17 = t;
        f_17 :
        if(!(match_string(u_17, "-i")))
          {
            if(!(match_string(u_17, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        ATerm x_17 = NULL;
        ATerm m_13;
        m_13 = t;
        {
          ATerm v_17 = NULL;
          ATerm w_17 = NULL;
          w_17 = t;
          if(((v_17 != NULL) && (v_17 != w_17)))
            _fail(w_17);
          else
            v_17 = w_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(v_17));
            t = set_config_0(t);
          }
        }
        t = m_13;
        {
          ATerm y_17 = NULL;
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_17));
        }
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_o_13;
        return(t);
      }
      t = ArgOption_3(t, f_2, g_2, h_2);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm s_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm z_17 = NULL;
              z_17 = t;
              i_17 :
              if(!(match_string(z_17, "-o")))
                {
                  if(!(match_string(z_17, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              ATerm c_18 = NULL;
              ATerm x_13;
              x_13 = t;
              {
                ATerm a_18 = NULL;
                ATerm b_18 = NULL;
                b_18 = t;
                if(((a_18 != NULL) && (a_18 != b_18)))
                  _fail(b_18);
                else
                  a_18 = b_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_11, not_null(a_18));
                  t = set_config_0(t);
                }
              }
              t = x_13;
              {
                ATerm d_18 = NULL;
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_18));
              }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = term_y_13;
              return(t);
            }
            t = ArgOption_3(t, i_2, j_2, k_2);
            LocalPopChoice(u_13);
          }
        else
          {
            t = s_13;
            {
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm e_18 = NULL;
                    e_18 = t;
                    l_17 :
                    if(!(match_string(e_18, "-S")))
                      {
                        if(!(match_string(e_18, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm q_2 (ATerm t)
                  {
                    t = term_g_14;
                    t = set_config_0(t);
                    t = term_h_14;
                    return(t);
                  }
                  ATerm r_2 (ATerm t)
                  {
                    t = term_i_14;
                    return(t);
                  }
                  t = Option_3(t, l_2, q_2, r_2);
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm j_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_2 (ATerm t)
                        {
                          ATerm f_18 = NULL;
                          f_18 = t;
                          m_17 :
                          if(!(match_string(f_18, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm t_2 (ATerm t)
                        {
                          ATerm i_18 = NULL;
                          ATerm p_14;
                          p_14 = t;
                          {
                            ATerm g_18 = NULL;
                            ATerm h_18 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_18 = t;
                              if(((g_18 != NULL) && (g_18 != h_18)))
                                _fail(h_18);
                              else
                                g_18 = h_18;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(g_18));
                              t = set_config_0(t);
                            }
                          }
                          t = p_14;
                          {
                            ATerm j_18 = NULL;
                            j_18 = t;
                            if(((i_18 != NULL) && (i_18 != j_18)))
                              _fail(j_18);
                            else
                              i_18 = j_18;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_18));
                          }
                          return(t);
                        }
                        ATerm u_2 (ATerm t)
                        {
                          t = term_q_14;
                          return(t);
                        }
                        t = ArgOption_3(t, s_2, t_2, u_2);
                        LocalPopChoice(k_14);
                      }
                    else
                      {
                        t = j_14;
                        {
                          ATerm t_14 = t;
                          int u_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_2 (ATerm t)
                              {
                                ATerm k_18 = NULL;
                                k_18 = t;
                                p_17 :
                                if(!(match_string(k_18, "-k")))
                                  {
                                    if(!(match_string(k_18, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_2 (ATerm t)
                              {
                                ATerm v_14;
                                v_14 = t;
                                {
                                  ATerm l_18 = NULL;
                                  ATerm m_18 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    m_18 = t;
                                    if(((l_18 != NULL) && (l_18 != m_18)))
                                      _fail(m_18);
                                    else
                                      l_18 = m_18;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(l_18));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_14;
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                t = term_x_14;
                                return(t);
                              }
                              t = ArgOption_3(t, w_2, z_2, a_3);
                              LocalPopChoice(u_14);
                            }
                          else
                            {
                              t = t_14;
                              {
                                ATerm h_15 = t;
                                int i_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_3 (ATerm t)
                                    {
                                      ATerm n_18 = NULL;
                                      n_18 = t;
                                      r_17 :
                                      if(!(match_string(n_18, "-v")))
                                        {
                                          if(!(match_string(n_18, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm g_3 (ATerm t)
                                    {
                                      t = term_k_15;
                                      t = set_config_0(t);
                                      t = term_l_15;
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_n_15;
                                      return(t);
                                    }
                                    t = Option_3(t, b_3, g_3, h_3);
                                    LocalPopChoice(i_15);
                                  }
                                else
                                  {
                                    t = h_15;
                                    {
                                      ATerm o_15 = t;
                                      int p_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_3 (ATerm t)
                                          {
                                            ATerm o_18 = NULL;
                                            o_18 = t;
                                            s_17 :
                                            if(!(match_string(o_18, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_3 (ATerm t)
                                          {
                                            t = term_v_15;
                                            t = set_config_0(t);
                                            t = term_w_15;
                                            return(t);
                                          }
                                          ATerm l_3 (ATerm t)
                                          {
                                            t = term_x_15;
                                            return(t);
                                          }
                                          t = Option_3(t, i_3, j_3, l_3);
                                          LocalPopChoice(p_15);
                                        }
                                      else
                                        {
                                          t = o_15;
                                          {
                                            ATerm m_3 (ATerm t)
                                            {
                                              ATerm p_18 = NULL;
                                              p_18 = t;
                                              t_17 :
                                              if(!(match_string(p_18, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_3 (ATerm t)
                                            {
                                              t = term_f_16;
                                              t = set_config_0(t);
                                              t = term_i_16;
                                              return(t);
                                            }
                                            ATerm o_3 (ATerm t)
                                            {
                                              t = term_j_16;
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
  ATerm z_18 = NULL;
  ATerm l_16;
  l_16 = t;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm a_19 = NULL,b_19 = NULL;
      a_19 = t;
      y_18 :
      if(match_cons(a_19, sym_Program_1))
        {
          b_19 = ATgetArgument(a_19, 0);
          if(((z_18 != NULL) && (z_18 != b_19)))
            _fail(b_19);
          else
            z_18 = b_19;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_16), not_null(z_18)), term_m_16));
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
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, term_p_16));
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
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_TicksToSeconds(not_null(e_19));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_19), not_null(l_19));
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            t = SSL_addr(not_null(k_19), not_null(l_19));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm z_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_66(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = z_16;
      {
        ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
        s_19 = t;
        r_19 :
        if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
          {
            t_19 = ATgetFirst((ATermList) s_19);
            u_19 = (ATerm) ATgetNext((ATermList) s_19);
            {
              ATerm x_19 = NULL;
              ATerm y_19 = NULL;
              t = not_null(u_19);
              {
                t = foldr_2(t, x_66, y_66);
                {
                  y_19 = t;
                  if(((x_19 != NULL) && (x_19 != y_19)))
                    _fail(y_19);
                  else
                    x_19 = y_19;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), not_null(x_19));
                t = y_66(t);
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
ATerm crush_2 (ATerm t, ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  ATerm f_20 = NULL;
  ATerm h_20 = NULL;
  f_20 = t;
  {
    ATerm i_20 = NULL;
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
    t = not_null(f_20);
    {
      i_20 = t;
      {
        t = SSL_explode_term(not_null(i_20));
        {
          k_20 = t;
          e_20 :
          if(match_cons(k_20, sym__2))
            {
              l_20 = ATgetArgument(k_20, 0);
              m_20 = ATgetArgument(k_20, 1);
              if(((h_20 != NULL) && (h_20 != m_20)))
                _fail(m_20);
              else
                h_20 = m_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_20);
      t = foldr_2(t, p_68, q_68);
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
    ATerm r_3 (ATerm t)
    {
      t = term_b_14;
      return(t);
    }
    t = crush_2(t, r_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      {
        ATerm d_17;
        d_17 = t;
        {
          ATerm e_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_21), not_null(b_21));
              LocalPopChoice(g_17);
            }
          else
            {
              t = e_17;
              t = SSL_gtr(not_null(a_21), not_null(b_21));
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
  ATerm l_21 = NULL;
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_21 = NULL,n_21 = NULL,u_21 = NULL;
      m_21 = t;
      k_21 :
      if(match_cons(m_21, sym__2))
        {
          n_21 = ATgetArgument(m_21, 0);
          u_21 = ATgetArgument(m_21, 1);
          {
            if(((l_21 != NULL) && (l_21 != n_21)))
              _fail(n_21);
            else
              l_21 = n_21;
            if(((l_21 != NULL) && (l_21 != u_21)))
              _fail(u_21);
            else
              l_21 = u_21;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_17);
    }
  else
    {
      t = h_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm k_17;
    k_17 = t;
    {
      ATerm x_21 = NULL;
      ATerm y_21 = NULL;
      t = term_m_6;
      {
        t = get_config_0(t);
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_21), term_o_16);
        t = geq_0(t);
      }
    }
    t = k_17;
    t = v_78(t);
    return(t);
  }
  t = try_1(t, t_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm d_22 = NULL,f_22 = NULL;
    ATerm n_17;
    n_17 = t;
    {
      ATerm e_22 = NULL;
      t = run_time_0(t);
      {
        e_22 = t;
        if(((d_22 != NULL) && (d_22 != e_22)))
          _fail(e_22);
        else
          d_22 = e_22;
      }
    }
    t = n_17;
    {
      ATerm g_22 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          g_22 = t;
          if(((f_22 != NULL) && (f_22 != g_22)))
            _fail(g_22);
          else
            f_22 = g_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_18), not_null(d_22)), term_q_17), not_null(f_22)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_3);
  {
    t = term_b_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Version_0))
    {
      ATerm p_22 = NULL,r_22 = NULL;
      ATerm r_18;
      r_18 = t;
      {
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
      }
      t = r_18;
      {
        ATerm s_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_22));
        {
          s_22 = t;
          if(((r_22 != NULL) && (r_22 != s_22)))
            _fail(s_22);
          else
            r_22 = s_22;
        }
        t = not_null(r_22);
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
  ATerm x_3 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_3);
  t = u_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  t = SSL_table_create(not_null(x_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  {
    ATerm w_18;
    w_18 = t;
    {
      t = term_x_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_18, term_c_19, not_null(b_23));
          t = table_put_0(t);
        }
      }
    }
    t = w_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_table_destroy(not_null(f_23));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  t = SSL_exit(not_null(j_23));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(((ATgetType(n_23) == AT_LIST) && ATisEmpty(n_23)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
        {
          o_23 = ATgetFirst((ATermList) n_23);
          p_23 = (ATerm) ATgetNext((ATermList) n_23);
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
  ATerm d_19;
  d_19 = t;
  {
    ATerm s_23 = NULL;
    ATerm v_23 = NULL;
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        {
          ATerm t_23 = NULL;
          ATerm u_23 = NULL;
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
          t = (ATerm) ATinsert(ATempty, not_null(t_23));
        }
      }
    {
      v_23 = t;
      if(((s_23 != NULL) && (s_23 != v_23)))
        _fail(v_23);
      else
        s_23 = v_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(s_23));
      t = printnl_0(t);
    }
  }
  t = d_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  i_24 = t;
  f_24 :
  if(((ATgetType(i_24) == AT_LIST) && !(ATisEmpty(i_24))))
    {
      g_24 = ATgetFirst((ATermList) i_24);
      h_24 = (ATerm) ATgetNext((ATermList) i_24);
      {
        ATerm l_24 = NULL;
        t = not_null(h_24);
        {
          ATerm h_19;
          h_19 = t;
          {
            ATerm m_24 = NULL,o_24 = NULL,q_24 = NULL;
            ATerm m_19;
            m_19 = t;
            {
              ATerm n_24 = NULL;
              t = g_0(t);
              {
                n_24 = t;
                if(((m_24 != NULL) && (m_24 != n_24)))
                  _fail(n_24);
                else
                  m_24 = n_24;
              }
            }
            t = m_19;
            {
              ATerm p_24 = NULL;
              t = not_null(g_24);
              {
                t = f_0(t);
                {
                  p_24 = t;
                  if(((o_24 != NULL) && (o_24 != p_24)))
                    _fail(p_24);
                  else
                    o_24 = p_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_24)), not_null(o_24));
                {
                  q_24 = t;
                  if(((l_24 != NULL) && (l_24 != q_24)))
                    _fail(q_24);
                  else
                    l_24 = q_24;
                }
              }
            }
          }
          t = h_19;
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(l_24);
              return(t);
            }
            t = reverse_acc_2(t, f_0, y_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_24) == AT_LIST) && ATisEmpty(i_24)))
        {
          {
            t = term_d_11;
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
  ATerm z_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Program_1))
    {
      f_25 = ATgetArgument(e_25, 0);
      {
        ATerm j_25 = NULL,l_25 = NULL;
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(e_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
        {
          t = not_null(f_25);
          {
            ATerm n_25 = NULL;
            t = b_47(t);
            {
              l_25 = t;
              {
                ATerm o_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_25)), not_null(j_25));
                {
                  o_25 = t;
                  if(((n_25 != NULL) && (n_25 != o_25)))
                    _fail(o_25);
                  else
                    n_25 = o_25;
                }
                t = not_null(n_25);
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
  ATerm x_25 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_25 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          y_25 = t;
          if(((x_25 != NULL) && (x_25 != y_25)))
            _fail(y_25);
          else
            x_25 = y_25;
        }
      }
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm c_26 = NULL;
            c_26 = t;
            if(((x_25 != NULL) && (x_25 != c_26)))
              _fail(c_26);
            else
              x_25 = c_26;
            return(t);
          }
          t = Program_1(t, d_4);
          return(t);
        }
        t = option_defined_1(t, c_4);
      }
    }
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(x_25);
        return(t);
      }
      t = short_description_1(t, h_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_4);
    {
      t = term_p_19;
      {
        t = echo_0(t);
        {
          t = term_w_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm d_26 = NULL;
                  ATerm e_26 = NULL;
                  e_26 = t;
                  if(((d_26 != NULL) && (d_26 != e_26)))
                    _fail(e_26);
                  else
                    d_26 = e_26;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_26)), term_z_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_4);
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm f_26 = NULL;
                    ATerm g_26 = NULL;
                    ATerm u_4 (ATerm t)
                    {
                      t = not_null(x_25);
                      return(t);
                    }
                    t = long_description_1(t, u_4);
                    {
                      g_26 = t;
                      if(((f_26 != NULL) && (f_26 != g_26)))
                        _fail(g_26);
                      else
                        f_26 = g_26;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_26)), term_a_20);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_4);
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
ATerm fetch_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm e_27 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_72, _id);
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
      ATerm g_20;
      g_20 = t;
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
      t = g_20;
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
  ATerm j_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = j_20;
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
                ATerm v_4 (ATerm t)
                {
                  t = not_null(a_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_4);
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
ATerm at_end_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm v_28 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_28);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          t = Nil_0(t);
          t = c_73(t);
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
          ATerm w_4 (ATerm t)
          {
            t = not_null(a_29);
            return(t);
          }
          t = at_end_1(t, w_4);
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
  ATerm t_20;
  t_20 = t;
  {
    ATerm y_31 = NULL,e_32 = NULL;
    ATerm u_20;
    u_20 = t;
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
    t = u_20;
    {
      ATerm f_32 = NULL;
      f_32 = t;
      if(((e_32 != NULL) && (e_32 != f_32)))
        _fail(f_32);
      else
        e_32 = f_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_32)), not_null(y_31)));
        t = printnl_0(t);
      }
    }
  }
  t = t_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm k_32 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = Cons_2(t, n_72, k_32);
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
  ATerm x_20 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = x_20;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_4);
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
                                ATerm d_5 (ATerm t)
                                {
                                  t = term_h_21;
                                  return(t);
                                }
                                t = debug_1(t, d_5);
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
                            ATerm i_21;
                            i_21 = t;
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
                            t = i_21;
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
    t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(w_33));
    {
      t = table_get_0(t);
      {
        ATerm e_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_21;
            o_21 = t;
            {
              ATerm y_33 = NULL;
              ATerm z_33 = NULL;
              z_33 = t;
              if(((y_33 != NULL) && (y_33 != z_33)))
                _fail(z_33);
              else
                y_33 = z_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_21, not_null(w_33), not_null(y_33));
                t = table_put_0(t);
              }
            }
            t = o_21;
          }
          return(t);
        }
        t = try_1(t, e_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_75(t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
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
        ATerm r_21;
        r_21 = t;
        {
          ATerm u_34 = NULL;
          ATerm v_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), not_null(p_34));
          {
            ATerm s_21 = t;
            int t_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_21);
              }
            else
              {
                t = s_21;
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
        t = r_21;
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
  t = term_d_11;
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
    t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_v_19, not_null(z_34));
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
            ATerm v_21;
            v_21 = t;
            {
              t = not_null(m_35);
              t = c_0(t);
            }
            t = v_21;
            {
              ATerm s_35 = NULL;
              t = term_d_11;
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
  ATerm k_5 (ATerm t)
  {
    t = term_z_21;
    {
      t = set_config_0(t);
      t = term_a_22;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
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
        ATerm c_22;
        c_22 = t;
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
        t = c_22;
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
        t = (ATerm) ATmakeAppl(sym__3, term_j_21, not_null(v_37), not_null(w_37));
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
    ATerm o_5 (ATerm t)
    {
      t = term_i_22;
      t = n_58(t);
      return(t);
    }
    t = try_1(t, o_5);
  }
  t = h_22;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm e_38 = NULL;
      ATerm j_22;
      j_22 = t;
      {
        ATerm c_38 = NULL;
        ATerm d_38 = NULL;
        d_38 = t;
        if(((c_38 != NULL) && (c_38 != d_38)))
          _fail(d_38);
        else
          c_38 = d_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_17, not_null(c_38));
          t = set_config_0(t);
        }
      }
      t = j_22;
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
    ATerm s_5 (ATerm t)
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = o_22;
              {
                t = n_58(t);
                t = Cons_2(t, _id, s_5);
              }
            }
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_5, s_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  ATerm u_22;
  u_22 = t;
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
  t = u_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm u_38 = NULL;
  ATerm v_22;
  v_22 = t;
  {
    t = term_w_22;
    t = table_put_0(t);
  }
  t = v_22;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_58(t);
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_5);
    {
      ATerm y_5 (ATerm t)
      {
        ATerm a_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_23;
            d_23 = t;
            {
              ATerm e_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_21;
                  t = get_config_0(t);
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = e_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_23;
            {
              t = system_usage_0(t);
              {
                t = term_b_14;
                t = exit_0(t);
              }
            }
            LocalPopChoice(c_23);
          }
        else
          {
            t = a_23;
            {
              ATerm z_5 (ATerm t)
              {
                ATerm a_6 (ATerm t)
                {
                  ATerm v_38 = NULL;
                  v_38 = t;
                  if(((u_38 != NULL) && (u_38 != v_38)))
                    _fail(v_38);
                  else
                    u_38 = v_38;
                  return(t);
                }
                t = Undefined_1(t, a_6);
                return(t);
              }
              t = option_defined_1(t, z_5);
              {
                ATerm b_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_38)), term_h_23);
                  return(t);
                }
                t = say_1(t, b_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, y_5);
      {
        ATerm i_23;
        i_23 = t;
        {
          t = term_q_19;
          t = table_destroy_0(t);
        }
        t = i_23;
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
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_59);
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            {
              ATerm q_23 = t;
              int r_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_59(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_23);
                }
              else
                {
                  t = q_23;
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
ATerm pp_stratego_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      t = debug_0(t);
      {
        ATerm j_6 (ATerm t)
        {
          t = term_w_23;
          return(t);
        }
        t = xtc_transform_1(t, j_6);
      }
      return(t);
    }
    t = xtc_io_1(t, h_6);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, g_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pp_stratego_0(t);
  return(t);
}
