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
ATerm term_b_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_b_24;
ATerm term_i_23;
ATerm term_s_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_n_21;
ATerm term_h_21;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_j_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_p_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_j_13;
ATerm term_h_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_k_7;
ATerm term_r_6;
ATerm term_j_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_v_5;
ATerm term_q_5;
ATerm term_o_5;
ATerm term_n_5;
void init_constant_terms (void)
{
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_z_5);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_k_7);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_l_9);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_d_10);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_n_5, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_d_10);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_d_10);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_h_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_d_10);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__3, term_g_19, term_h_19, (ATerm) ATempty);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm y_69 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm e_55 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm d_55 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm f_55 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm union_1 (ATerm, ATerm b_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm o_55 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm close_file_0 (ATerm);
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm x_69 (ATerm));
ATerm assert_1 (ATerm, ATerm s_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm g_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm a_49 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm p_70 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm o_70 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm n_69 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm o_69 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm crush_2 (ATerm, ATerm q_65 (ATerm), ATerm r_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_76 (ATerm));
ATerm Program_1 (ATerm, ATerm n_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm e_47 (ATerm), ATerm f_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_70 (ATerm));
ATerm map_1 (ATerm, ATerm e_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_76 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_76 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_76 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm s_69 (ATerm), ATerm t_69 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm r_69 (ATerm));
ATerm xtc_iowrap_1 (ATerm, ATerm u_69 (ATerm));
ATerm astratego2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, y_69, b_0);
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
  ATerm j_1 = NULL;
  j_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm z_1 = NULL;
        ATerm s_2 = NULL;
        z_1 = t;
        {
          ATerm t_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), not_null(z_1));
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(s_2));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm f_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5;
      l_5 = t;
      {
        ATerm d_3 = NULL;
        ATerm e_3 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            e_3 = t;
            if(((d_3 != NULL) && (d_3 != e_3)))
              _fail(e_3);
            else
              d_3 = e_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), term_o_5);
          t = geq_0(t);
        }
      }
      t = l_5;
      t = e_55(t);
      LocalPopChoice(k_5);
    }
  else
    {
      t = f_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm p_5;
  p_5 = t;
  {
    ATerm h_3 = NULL;
    ATerm i_3 = NULL;
    i_3 = t;
    if(((h_3 != NULL) && (h_3 != i_3)))
      _fail(i_3);
    else
      h_3 = i_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_5, not_null(h_3));
      t = printnl_0(t);
    }
  }
  t = p_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_3 = NULL;
  ATerm r_3 = NULL,s_3 = NULL;
  p_3 = t;
  {
    ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_3)));
    {
      t = table_get_0(t);
      {
        t_3 = t;
        n_3 :
        if(((ATgetType(t_3) == AT_LIST) && !(ATisEmpty(t_3))))
          {
            u_3 = ATgetFirst((ATermList) t_3);
            x_3 = (ATerm) ATgetNext((ATermList) t_3);
            o_3 :
            if(match_cons(u_3, sym__2))
              {
                v_3 = ATgetArgument(u_3, 0);
                w_3 = ATgetArgument(u_3, 1);
                {
                  if(((r_3 != NULL) && (r_3 != v_3)))
                    _fail(v_3);
                  else
                    r_3 = v_3;
                  if(((s_3 != NULL) && (s_3 != w_3)))
                    _fail(w_3);
                  else
                    s_3 = w_3;
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
    t = not_null(s_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      {
        ATerm j_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_4)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
              k_4 = t;
              c_4 :
              if(match_cons(k_4, sym__2))
                {
                  l_4 = ATgetArgument(k_4, 0);
                  m_4 = ATgetArgument(k_4, 1);
                  {
                    if(((g_4 != NULL) && (g_4 != l_4)))
                      _fail(l_4);
                    else
                      g_4 = l_4;
                    if(((j_4 != NULL) && (j_4 != m_4)))
                      _fail(m_4);
                    else
                      j_4 = m_4;
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
        t = not_null(j_4);
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
      t = term_a_6;
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
ATerm if_verbose4_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm b_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6;
      i_6 = t;
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        t = term_n_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), term_j_6);
          t = geq_0(t);
        }
      }
      t = i_6;
      t = d_55(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = b_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6;
      q_6 = t;
      {
        ATerm u_4 = NULL;
        ATerm v_4 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            v_4 = t;
            if(((u_4 != NULL) && (u_4 != v_4)))
              _fail(v_4);
            else
              u_4 = v_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_r_6);
          t = geq_0(t);
        }
      }
      t = q_6;
      t = f_55(t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
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
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym__2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      if(((a_5 != NULL) && (a_5 != b_5)))
        _fail(b_5);
      else
        a_5 = b_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
    {
      i_5 = ATgetFirst((ATermList) h_5);
      j_5 = (ATerm) ATgetNext((ATermList) h_5);
      {
        t = g_66(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm m_5 = NULL;
            m_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(m_5));
              t = f_66(t);
            }
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(j_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        t = not_null(t_5);
        {
          ATerm y_5 (ATerm t)
          {
            ATerm s_6 = t;
            int y_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_5);
                LocalPopChoice(y_6);
              }
            else
              {
                t = s_6;
                {
                  ATerm z_6 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(u_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_66, r_0);
                      t = y_5(t);
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = z_6;
                      t = Cons_2(t, _id, y_5);
                    }
                }
              }
            return(t);
          }
          t = y_5(t);
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
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym__3))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      g_6 = ATgetArgument(d_6, 2);
      {
        ATerm e_7;
        e_7 = t;
        {
          ATerm k_6 = NULL;
          ATerm l_6 = NULL,n_6 = NULL;
          ATerm m_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(f_6));
          {
            ATerm f_7 = t;
            int g_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_7);
              }
            else
              {
                t = f_7;
                t = (ATerm) ATempty;
              }
            {
              m_6 = t;
              if(((l_6 != NULL) && (l_6 != m_6)))
                _fail(m_6);
              else
                l_6 = m_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(g_6));
            {
              t = union_1(t, eq_0);
              {
                n_6 = t;
                if(((k_6 != NULL) && (k_6 != n_6)))
                  _fail(n_6);
                else
                  k_6 = n_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_6), not_null(f_6), not_null(k_6));
            t = table_put_0(t);
          }
        }
        t = e_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym__2))
    {
      w_6 = ATgetArgument(v_6, 0);
      x_6 = ATgetArgument(v_6, 1);
      {
        t = not_null(x_6);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
            a_7 = t;
            t_6 :
            if(match_cons(a_7, sym__2))
              {
                b_7 = ATgetArgument(a_7, 0);
                c_7 = ATgetArgument(a_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_6), not_null(b_7), not_null(c_7));
                  t = o_55(t);
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
  ATerm j_7 = NULL;
  ATerm l_7 = NULL;
  j_7 = t;
  {
    ATerm h_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_7;
      }
    {
      ATerm i_7;
      i_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_5, term_k_7, (ATerm) ATinsert(ATempty, not_null(j_7)));
        t = table_put_0(t);
      }
      t = i_7;
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
                t = term_r_7;
                return(t);
              }
              t = say_1(t, w_0);
              return(t);
            }
            t = if_verbose6_1(t, v_0);
            {
              ATerm m_7 = NULL;
              m_7 = t;
              if(((l_7 != NULL) && (l_7 != m_7)))
                _fail(m_7);
              else
                l_7 = m_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(l_7));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = term_s_7;
                        return(t);
                      }
                      t = say_1(t, y_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, x_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_v_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_7)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm a_1 (ATerm t)
                            {
                              t = term_r_7;
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
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_getenv(not_null(q_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm t_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_7;
      t = get_config_0(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = t_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_8;
            t = getenv_0(t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
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
      t = term_c_8;
      return(t);
    }
    t = debug_1(t, c_1);
    return(t);
  }
  t = if_verbose5_1(t, b_1);
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm e_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_8;
          t = table_get_0(t);
          LocalPopChoice(k_8);
        }
      else
        {
          t = e_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = d_8;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_o_8;
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
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_r_8;
          return(t);
        }
        t = debug_1(t, g_1);
        return(t);
      }
      t = if_verbose5_1(t, f_1);
      {
        t = xtc_load_0(t);
        {
          ATerm w_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(x_8);
            }
          else
            {
              t = w_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = term_r_8;
                return(t);
              }
              t = debug_1(t, i_1);
              return(t);
            }
            t = if_verbose5_1(t, h_1);
          }
        }
      }
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm u_7 = NULL;
        ATerm v_7 = NULL;
        v_7 = t;
        if(((u_7 != NULL) && (u_7 != v_7)))
          _fail(v_7);
        else
          u_7 = v_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), not_null(u_7)), term_y_8);
          {
            t = error_0(t);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_v_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      t = term_a_9;
                      return(t);
                    }
                    t = debug_1(t, l_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, k_1);
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
  ATerm y_7 = NULL;
  y_7 = t;
  t = SSL_ReadFromFile(not_null(y_7));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_stdin_0))
    {
      ATerm i_8 = NULL;
      ATerm j_8 = NULL;
      t = term_c_9;
      {
        t = ReadFromFile_0(t);
        {
          j_8 = t;
          if(((i_8 != NULL) && (i_8 != j_8)))
            _fail(j_8);
          else
            i_8 = j_8;
        }
      }
      t = not_null(i_8);
    }
  else
    {
      if(match_cons(g_8, sym_FILE_1))
        {
          h_8 = ATgetArgument(g_8, 0);
          {
            ATerm l_8 = NULL;
            ATerm m_8 = NULL;
            t = not_null(h_8);
            {
              t = ReadFromFile_0(t);
              {
                m_8 = t;
                if(((l_8 != NULL) && (l_8 != m_8)))
                  _fail(m_8);
                else
                  l_8 = m_8;
              }
            }
            t = not_null(l_8);
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
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym__2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      t = SSL_WriteToBinaryFile(not_null(u_8), not_null(v_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm b_9 = NULL;
  ATerm d_9 = NULL;
  b_9 = t;
  {
    ATerm e_9 = NULL;
    t = xtc_new_file_0(t);
    {
      e_9 = t;
      {
        if(((d_9 != NULL) && (d_9 != e_9)))
          _fail(e_9);
        else
          d_9 = e_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(b_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(d_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_9));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, g_70, h_70);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_close_file(not_null(i_9));
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      t = SSL_call(not_null(o_9), not_null(p_9));
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
ATerm xtc_command_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm v_9 = NULL;
  ATerm f_9;
  f_9 = t;
  {
    ATerm w_9 = NULL;
    t = x_69(t);
    {
      t = xtc_find_0(t);
      {
        w_9 = t;
        if(((v_9 != NULL) && (v_9 != w_9)))
          _fail(w_9);
        else
          v_9 = w_9;
      }
    }
  }
  t = f_9;
  {
    ATerm g_9;
    g_9 = t;
    {
      ATerm x_9 = NULL;
      ATerm y_9 = NULL;
      y_9 = t;
      if(((x_9 != NULL) && (x_9 != y_9)))
        _fail(y_9);
      else
        x_9 = y_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(x_9));
        t = call_0(t);
      }
    }
    t = g_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
        ATerm h_9;
        h_9 = t;
        {
          ATerm o_10 = NULL;
          ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
          t = s_70(t);
          {
            o_10 = t;
            {
              if(((l_10 != NULL) && (l_10 != o_10)))
                _fail(o_10);
              else
                l_10 = o_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_10), not_null(h_10), not_null(i_10));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_9 = t;
                    int k_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_l_9);
                        t = table_get_0(t);
                        LocalPopChoice(k_9);
                      }
                    else
                      {
                        t = j_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_10 = t;
                      e_10 :
                      if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
                        {
                          q_10 = ATgetFirst((ATermList) p_10);
                          r_10 = (ATerm) ATgetNext((ATermList) p_10);
                          {
                            if(((m_10 != NULL) && (m_10 != q_10)))
                              _fail(q_10);
                            else
                              m_10 = q_10;
                            {
                              if(((n_10 != NULL) && (n_10 != r_10)))
                                _fail(r_10);
                              else
                                n_10 = r_10;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_10), term_l_9, (ATerm) ATinsert(CheckATermList(not_null(n_10)), (ATerm) ATinsert(CheckATermList(not_null(m_10)), not_null(h_10))));
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
        t = h_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm q_9;
  q_9 = t;
  {
    t = g_71(t);
    {
      ATerm m_1 (ATerm t)
      {
        t = term_r_9;
        return(t);
      }
      t = debug_1(t, m_1);
    }
  }
  t = q_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
      b_11 = t;
      w_10 :
      if(match_cons(b_11, sym__2))
        {
          c_11 = ATgetArgument(b_11, 0);
          d_11 = ATgetArgument(b_11, 1);
          {
            if(((a_11 != NULL) && (a_11 != c_11)))
              _fail(c_11);
            else
              a_11 = c_11;
            if(((z_10 != NULL) && (z_10 != d_11)))
              _fail(d_11);
            else
              z_10 = d_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_9);
      t = SSL_open_file(not_null(a_11), not_null(z_10));
    }
  else
    {
      t = s_9;
      {
        ATerm e_11 = NULL;
        ATerm f_11 = NULL;
        ATerm n_1 (ATerm t)
        {
          t = term_u_9;
          return(t);
        }
        t = obsolete_1(t, n_1);
        {
          e_11 = t;
          {
            if(((a_11 != NULL) && (a_11 != e_11)))
              _fail(e_11);
            else
              a_11 = e_11;
            {
              ATerm z_9;
              z_9 = t;
              {
                ATerm g_11 = NULL;
                t = term_a_10;
                {
                  g_11 = t;
                  if(((f_11 != NULL) && (f_11 != g_11)))
                    _fail(g_11);
                  else
                    f_11 = g_11;
                }
              }
              t = z_9;
              t = SSL_open_file(not_null(a_11), not_null(f_11));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_11 = NULL;
  ATerm o_11 = NULL;
  m_11 = t;
  {
    ATerm b_10;
    b_10 = t;
    {
      ATerm p_11 = NULL;
      t = term_c_10;
      {
        p_11 = t;
        if(((o_11 != NULL) && (o_11 != p_11)))
          _fail(p_11);
        else
          o_11 = p_11;
      }
    }
    t = b_10;
    {
      t = SSL_open_file(not_null(m_11), not_null(o_11));
      t = SSL_close_file(not_null(m_11));
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
  ATerm t_11 = NULL;
  ATerm u_11 = NULL;
  t = term_d_10;
  {
    t = new_0(t);
    {
      u_11 = t;
      if(((t_11 != NULL) && (t_11 != u_11)))
        _fail(u_11);
      else
        t_11 = u_11;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), term_j_10);
    {
      t = conc_strings_0(t);
      {
        ATerm k_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(s_10);
          }
        else
          {
            t = k_10;
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
  ATerm y_11 = NULL;
  t = new_file_0(t);
  {
    y_11 = t;
    {
      ATerm t_10;
      t_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), term_a_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), term_d_10);
            {
              ATerm o_1 (ATerm t)
              {
                t = term_u_10;
                return(t);
              }
              t = assert_1(t, o_1);
            }
          }
        }
      }
      t = t_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_stdin_0))
    {
      ATerm k_12 = NULL;
      ATerm l_12 = NULL;
      ATerm m_12 = NULL;
      t = xtc_new_file_0(t);
      {
        l_12 = t;
        {
          if(((k_12 != NULL) && (k_12 != l_12)))
            _fail(l_12);
          else
            k_12 = l_12;
          {
            ATerm n_12 = NULL;
            t = o_0(t);
            {
              n_12 = t;
              if(((m_12 != NULL) && (m_12 != n_12)))
                _fail(n_12);
              else
                m_12 = n_12;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_12)), term_v_10));
              {
                ATerm x_10 = t;
                int y_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(y_10);
                  }
                else
                  {
                    t = x_10;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(k_12);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_12));
    }
  else
    {
      if(match_cons(i_12, sym_FILE_1))
        {
          j_12 = ATgetArgument(i_12, 0);
          {
            ATerm p_12 = NULL;
            ATerm q_12 = NULL;
            t = not_null(j_12);
            {
              ATerm r_12 = NULL;
              t = xtc_new_file_0(t);
              {
                q_12 = t;
                {
                  if(((p_12 != NULL) && (p_12 != q_12)))
                    _fail(q_12);
                  else
                    p_12 = q_12;
                  {
                    ATerm s_12 = NULL;
                    t = o_0(t);
                    {
                      s_12 = t;
                      if(((r_12 != NULL) && (r_12 != s_12)))
                        _fail(s_12);
                      else
                        r_12 = s_12;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_12)), term_v_10), not_null(j_12)), term_h_11));
                      {
                        ATerm i_11 = t;
                        int j_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(j_11);
                          }
                        else
                          {
                            t = i_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(p_12);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_12));
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
  ATerm d_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_stdin_0))
    {
      ATerm f_13 = NULL,h_13 = NULL;
      ATerm k_11;
      k_11 = t;
      {
        ATerm g_13 = NULL;
        t = SSLgetAnnotations(not_null(d_13));
        {
          g_13 = t;
          if(((f_13 != NULL) && (f_13 != g_13)))
            _fail(g_13);
          else
            f_13 = g_13;
        }
      }
      t = k_11;
      {
        ATerm i_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(f_13));
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
        t = not_null(h_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm a_49 (ATerm))
{
  ATerm r_13 = NULL,s_13 = NULL;
  r_13 = t;
  q_13 :
  if(match_cons(r_13, sym_FILE_1))
    {
      s_13 = ATgetArgument(r_13, 0);
      {
        ATerm v_13 = NULL,x_13 = NULL;
        ATerm w_13 = NULL;
        t = SSLgetAnnotations(not_null(r_13));
        {
          w_13 = t;
          if(((v_13 != NULL) && (v_13 != w_13)))
            _fail(w_13);
          else
            v_13 = w_13;
        }
        {
          t = not_null(s_13);
          {
            ATerm z_13 = NULL;
            t = a_49(t);
            {
              x_13 = t;
              {
                ATerm a_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(x_13)), not_null(v_13));
                {
                  a_14 = t;
                  if(((z_13 != NULL) && (z_13 != a_14)))
                    _fail(a_14);
                  else
                    z_13 = a_14;
                }
                t = not_null(z_13);
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
ATerm xtc_transform_2 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  ATerm l_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11 = t;
      int r_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(r_11);
        }
      else
        {
          t = q_11;
          t = stdin_0(t);
        }
      LocalPopChoice(n_11);
      t = xtc_transform_file_2(t, z_69, a_70);
    }
  else
    {
      t = l_11;
      t = xtc_transform_term_2(t, z_69, a_70);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      t = SSL_copy(not_null(i_14), not_null(j_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_stderr_0))
    {
      ATerm t_14 = NULL,v_14 = NULL;
      ATerm s_11;
      s_11 = t;
      {
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
      }
      t = s_11;
      {
        ATerm w_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(t_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        t = not_null(v_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_stdout_0))
    {
      ATerm g_15 = NULL,i_15 = NULL;
      ATerm v_11;
      v_11 = t;
      {
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(e_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
      }
      t = v_11;
      {
        ATerm j_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(g_15));
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
        t = not_null(i_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_FILE_1))
    {
      t_15 = ATgetArgument(s_15, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL;
            ATerm w_15 = NULL;
            t = m_0(t);
            {
              w_15 = t;
              {
                if(((v_15 != NULL) && (v_15 != w_15)))
                  _fail(w_15);
                else
                  v_15 = w_15;
                {
                  ATerm z_11 = t;
                  int a_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(a_12);
                    }
                  else
                    {
                      t = z_11;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(v_15));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_15));
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm y_15 = NULL;
              ATerm z_15 = NULL;
              t = m_0(t);
              {
                z_15 = t;
                {
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                  {
                    ATerm b_12 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm c_12 = t;
                        int d_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(d_12);
                          }
                        else
                          {
                            t = c_12;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(y_15));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_15));
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
    {
      h_16 = ATgetFirst((ATermList) g_16);
      i_16 = (ATerm) ATgetNext((ATermList) g_16);
      t = not_null(i_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        ATerm e_12;
        e_12 = t;
        {
          ATerm u_16 = NULL;
          ATerm v_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(r_16));
          {
            ATerm f_12 = t;
            int g_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(g_12);
              }
            else
              {
                t = f_12;
                t = (ATerm) ATempty;
              }
            {
              v_16 = t;
              if(((u_16 != NULL) && (u_16 != v_16)))
                _fail(v_16);
              else
                u_16 = v_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_16), not_null(r_16), not_null(u_16));
            t = table_put_0(t);
          }
        }
        t = e_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm p_70 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  ATerm o_12;
  o_12 = t;
  {
    ATerm g_17 = NULL;
    ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
    t = p_70(t);
    {
      g_17 = t;
      {
        if(((e_17 != NULL) && (e_17 != g_17)))
          _fail(g_17);
        else
          e_17 = g_17;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), term_l_9);
              t = table_get_0(t);
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_17 = t;
            b_17 :
            if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
              {
                i_17 = ATgetFirst((ATermList) h_17);
                j_17 = (ATerm) ATgetNext((ATermList) h_17);
                {
                  if(((d_17 != NULL) && (d_17 != i_17)))
                    _fail(i_17);
                  else
                    d_17 = i_17;
                  {
                    if(((c_17 != NULL) && (c_17 != j_17)))
                      _fail(j_17);
                    else
                      c_17 = j_17;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_17), term_l_9, not_null(c_17));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_17);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm k_17 = NULL;
                              k_17 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), not_null(k_17));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, p_1);
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
  t = o_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  t = SSL_remove(not_null(q_17));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_59(t);
      t = e_59(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        t = e_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm x_17 = NULL;
  ATerm x_12;
  x_12 = t;
  {
    ATerm y_17 = NULL;
    ATerm z_17 = NULL;
    t = o_70(t);
    {
      y_17 = t;
      {
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
        {
          ATerm a_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), term_l_9);
          {
            ATerm y_12 = t;
            int z_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_12);
              }
            else
              {
                t = y_12;
                t = (ATerm) ATempty;
              }
            {
              a_18 = t;
              if(((z_17 != NULL) && (z_17 != a_18)))
                _fail(a_18);
              else
                z_17 = a_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_17), term_l_9, (ATerm) ATinsert(CheckATermList(not_null(z_17)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = x_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm k_18 = NULL,l_18 = NULL;
  ATerm q_1 (ATerm t)
  {
    t = term_u_10;
    return(t);
  }
  t = begin_scope_1(t, q_1);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm a_13;
      a_13 = t;
      {
        ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
        ATerm b_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_13;
            t = table_get_0(t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = b_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          m_18 = t;
          j_18 :
          if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
            {
              n_18 = ATgetFirst((ATermList) m_18);
              o_18 = (ATerm) ATgetNext((ATermList) m_18);
              {
                if(((l_18 != NULL) && (l_18 != n_18)))
                  _fail(n_18);
                else
                  l_18 = n_18;
                {
                  if(((k_18 != NULL) && (k_18 != o_18)))
                    _fail(o_18);
                  else
                    k_18 = o_18;
                  {
                    t = not_null(l_18);
                    {
                      ATerm s_1 (ATerm t)
                      {
                        ATerm k_13 = t;
                        int l_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(l_13);
                          }
                        else
                          {
                            t = k_13;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, s_1);
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
      t = a_13;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_u_10;
          return(t);
        }
        t = end_scope_1(t, t_1);
      }
      return(t);
    }
    t = restore_always_2(t, n_69, r_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_18 = NULL;
        ATerm s_18 = NULL;
        t = term_h_11;
        {
          t = get_config_0(t);
          {
            s_18 = t;
            if(((r_18 != NULL) && (r_18 != s_18)))
              _fail(s_18);
            else
              r_18 = s_18;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_18));
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = term_c_9;
      }
    {
      t = o_69(t);
      {
        ATerm v_1 (ATerm t)
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_v_10;
              t = get_config_0(t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = term_t_13;
            }
          return(t);
        }
        t = copy_to_1(t, v_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, u_1);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm v_18 = NULL;
    v_18 = t;
    u_18 :
    if(!(match_string(v_18, "-v")))
      {
        if(!(match_string(v_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_y_13;
    t = set_config_0(t);
    t = term_b_14;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_c_14;
    return(t);
  }
  t = Option_3(t, w_1, x_1, y_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm d_19 = NULL;
    d_19 = t;
    b_19 :
    if(!(match_string(d_19, "-k")))
      {
        if(!(match_string(d_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm e_19 = NULL;
      ATerm j_19 = NULL;
      t = string_to_int_0(t);
      {
        j_19 = t;
        if(((e_19 != NULL) && (e_19 != j_19)))
          _fail(j_19);
        else
          e_19 = j_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, not_null(e_19));
        t = set_config_0(t);
      }
    }
    t = d_14;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_f_14;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_string_to_int(not_null(t_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm d_20 = NULL;
        d_20 = t;
        y_19 :
        if(!(match_string(d_20, "-S")))
          {
            if(!(match_string(d_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = term_n_14;
        t = set_config_0(t);
        t = term_o_14;
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_p_14;
        return(t);
      }
      t = Option_3(t, d_2, e_2, f_2);
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm s_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              ATerm e_20 = NULL;
              e_20 = t;
              z_19 :
              if(!(match_string(e_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              ATerm h_20 = NULL;
              ATerm y_14;
              y_14 = t;
              {
                ATerm f_20 = NULL;
                ATerm g_20 = NULL;
                t = string_to_int_0(t);
                {
                  g_20 = t;
                  if(((f_20 != NULL) && (f_20 != g_20)))
                    _fail(g_20);
                  else
                    f_20 = g_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(f_20));
                  t = set_config_0(t);
                }
              }
              t = y_14;
              {
                ATerm i_20 = NULL;
                i_20 = t;
                if(((h_20 != NULL) && (h_20 != i_20)))
                  _fail(i_20);
                else
                  h_20 = i_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_20));
              }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_z_14;
              return(t);
            }
            t = ArgOption_3(t, g_2, h_2, i_2);
            LocalPopChoice(x_14);
          }
        else
          {
            t = s_14;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm j_20 = NULL;
                j_20 = t;
                c_20 :
                if(!(match_string(j_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = term_b_15;
                t = set_config_0(t);
                t = term_c_15;
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_f_15;
                return(t);
              }
              t = Option_3(t, j_2, k_2, l_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_15);
          }
        else
          {
            t = m_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm p_20 = NULL;
    p_20 = t;
    m_20 :
    if(!(match_string(p_20, "-o")))
      {
        if(!(match_string(p_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm s_20 = NULL;
    ATerm o_15;
    o_15 = t;
    {
      ATerm q_20 = NULL;
      ATerm r_20 = NULL;
      r_20 = t;
      if(((q_20 != NULL) && (q_20 != r_20)))
        _fail(r_20);
      else
        q_20 = r_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(q_20));
        t = set_config_0(t);
      }
    }
    t = o_15;
    {
      ATerm t_20 = NULL;
      t_20 = t;
      if(((s_20 != NULL) && (s_20 != t_20)))
        _fail(t_20);
      else
        s_20 = t_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_20));
    }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_p_15;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = q_15;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm x_20 = NULL;
          x_20 = t;
          w_20 :
          if(!(match_string(x_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = term_a_16;
          t = set_config_0(t);
          t = term_b_16;
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = Option_3(t, p_2, q_2, r_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  d_21 = t;
  b_21 :
  if(match_string(d_21, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
        {
          j_21 = ATgetFirst((ATermList) d_21);
          k_21 = (ATerm) ATgetNext((ATermList) d_21);
          c_21 :
          if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
            {
              l_21 = ATgetFirst((ATermList) k_21);
              m_21 = (ATerm) ATgetNext((ATermList) k_21);
              {
                ATerm q_21 = NULL;
                ATerm d_16;
                d_16 = t;
                {
                  t = not_null(j_21);
                  t = j_0(t);
                }
                t = d_16;
                {
                  ATerm r_21 = NULL;
                  t = not_null(l_21);
                  {
                    t = k_0(t);
                    {
                      r_21 = t;
                      if(((q_21 != NULL) && (q_21 != r_21)))
                        _fail(r_21);
                      else
                        q_21 = r_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_21)), not_null(q_21));
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
ATerm input_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm c_22 = NULL;
    c_22 = t;
    v_21 :
    if(!(match_string(c_22, "-i")))
      {
        if(!(match_string(c_22, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm f_22 = NULL;
    ATerm e_16;
    e_16 = t;
    {
      ATerm d_22 = NULL;
      ATerm e_22 = NULL;
      e_22 = t;
      if(((d_22 != NULL) && (d_22 != e_22)))
        _fail(e_22);
      else
        d_22 = e_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_11, not_null(d_22));
        t = set_config_0(t);
      }
    }
    t = e_16;
    {
      ATerm g_22 = NULL;
      g_22 = t;
      if(((f_22 != NULL) && (f_22 != g_22)))
        _fail(g_22);
      else
        f_22 = g_22;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_22));
    }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm l_22 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm m_22 = NULL,n_22 = NULL;
      m_22 = t;
      k_22 :
      if(match_cons(m_22, sym_Program_1))
        {
          n_22 = ATgetArgument(m_22, 0);
          if(((l_22 != NULL) && (l_22 != n_22)))
            _fail(n_22);
          else
            l_22 = n_22;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, x_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_16), not_null(l_22)), term_t_16));
      {
        t = printnl_0(t);
        {
          t = term_x_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATempty, term_y_16));
  {
    t = printnl_0(t);
    {
      t = term_x_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_TicksToSeconds(not_null(q_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_22), not_null(x_22));
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = SSL_addr(not_null(w_22), not_null(x_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm f_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_66(t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = f_17;
      {
        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
        e_23 = t;
        d_23 :
        if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
          {
            f_23 = ATgetFirst((ATermList) e_23);
            g_23 = (ATerm) ATgetNext((ATermList) e_23);
            {
              ATerm j_23 = NULL;
              ATerm k_23 = NULL;
              t = not_null(g_23);
              {
                t = foldr_2(t, s_66, t_66);
                {
                  k_23 = t;
                  if(((j_23 != NULL) && (j_23 != k_23)))
                    _fail(k_23);
                  else
                    j_23 = k_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), not_null(j_23));
                t = t_66(t);
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
ATerm crush_2 (ATerm t, ATerm q_65 (ATerm), ATerm r_65 (ATerm))
{
  ATerm r_23 = NULL;
  ATerm t_23 = NULL;
  r_23 = t;
  {
    ATerm u_23 = NULL;
    ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
    t = not_null(r_23);
    {
      u_23 = t;
      {
        t = SSL_explode_term(not_null(u_23));
        {
          w_23 = t;
          q_23 :
          if(match_cons(w_23, sym__2))
            {
              x_23 = ATgetArgument(w_23, 0);
              y_23 = ATgetArgument(w_23, 1);
              if(((t_23 != NULL) && (t_23 != y_23)))
                _fail(y_23);
              else
                t_23 = y_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_23);
      t = foldr_2(t, q_65, r_65);
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
      t = term_m_14;
      return(t);
    }
    t = crush_2(t, y_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      {
        ATerm m_17;
        m_17 = t;
        {
          ATerm n_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_24), not_null(g_24));
              LocalPopChoice(o_17);
            }
          else
            {
              t = n_17;
              t = SSL_gtr(not_null(f_24), not_null(g_24));
            }
        }
        t = m_17;
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
  ATerm m_24 = NULL;
  ATerm p_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
      n_24 = t;
      l_24 :
      if(match_cons(n_24, sym__2))
        {
          o_24 = ATgetArgument(n_24, 0);
          p_24 = ATgetArgument(n_24, 1);
          {
            if(((m_24 != NULL) && (m_24 != o_24)))
              _fail(o_24);
            else
              m_24 = o_24;
            if(((m_24 != NULL) && (m_24 != p_24)))
              _fail(p_24);
            else
              m_24 = p_24;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_17);
    }
  else
    {
      t = p_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm s_24 = NULL;
        ATerm t_24 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            t_24 = t;
            if(((s_24 != NULL) && (s_24 != t_24)))
              _fail(t_24);
            else
              s_24 = t_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), term_x_16);
          t = geq_0(t);
        }
      }
      t = u_17;
      t = a_55(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_24 = NULL,z_24 = NULL;
    ATerm v_17;
    v_17 = t;
    {
      ATerm y_24 = NULL;
      t = run_time_0(t);
      {
        y_24 = t;
        if(((x_24 != NULL) && (x_24 != y_24)))
          _fail(y_24);
        else
          x_24 = y_24;
      }
    }
    t = v_17;
    {
      ATerm a_25 = NULL;
      t = term_w_17;
      {
        t = get_config_0(t);
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), not_null(x_24)), term_b_18), not_null(z_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  {
    t = term_m_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_Version_0))
    {
      ATerm j_25 = NULL,l_25 = NULL;
      ATerm d_18;
      d_18 = t;
      {
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      t = d_18;
      {
        ATerm m_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        t = not_null(l_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, a_3);
  t = y_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_table_create(not_null(r_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  {
    ATerm i_18;
    i_18 = t;
    {
      t = term_p_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_18, term_q_18, not_null(v_25));
          t = table_put_0(t);
        }
      }
    }
    t = i_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_table_destroy(not_null(z_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  t = SSL_exit(not_null(d_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  g_26 :
  if(((ATgetType(h_26) == AT_LIST) && ATisEmpty(h_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
        {
          i_26 = ATgetFirst((ATermList) h_26);
          j_26 = (ATerm) ATgetNext((ATermList) h_26);
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
  ATerm t_18;
  t_18 = t;
  {
    ATerm m_26 = NULL;
    ATerm q_26 = NULL;
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        {
          ATerm o_26 = NULL;
          ATerm p_26 = NULL;
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
          t = (ATerm) ATinsert(ATempty, not_null(o_26));
        }
      }
    {
      q_26 = t;
      if(((m_26 != NULL) && (m_26 != q_26)))
        _fail(q_26);
      else
        m_26 = q_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_13, not_null(m_26));
      t = printnl_0(t);
    }
  }
  t = t_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  g_27 = t;
  d_27 :
  if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
    {
      e_27 = ATgetFirst((ATermList) g_27);
      f_27 = (ATerm) ATgetNext((ATermList) g_27);
      {
        ATerm j_27 = NULL;
        t = not_null(f_27);
        {
          ATerm y_18;
          y_18 = t;
          {
            ATerm k_27 = NULL,m_27 = NULL,o_27 = NULL;
            ATerm z_18;
            z_18 = t;
            {
              ATerm l_27 = NULL;
              t = i_0(t);
              {
                l_27 = t;
                if(((k_27 != NULL) && (k_27 != l_27)))
                  _fail(l_27);
                else
                  k_27 = l_27;
              }
            }
            t = z_18;
            {
              ATerm n_27 = NULL;
              t = not_null(e_27);
              {
                t = h_0(t);
                {
                  n_27 = t;
                  if(((m_27 != NULL) && (m_27 != n_27)))
                    _fail(n_27);
                  else
                    m_27 = n_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_27)), not_null(m_27));
                {
                  o_27 = t;
                  if(((j_27 != NULL) && (j_27 != o_27)))
                    _fail(o_27);
                  else
                    j_27 = o_27;
                }
              }
            }
          }
          t = y_18;
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(j_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_27) == AT_LIST) && ATisEmpty(g_27)))
        {
          {
            t = term_d_10;
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
  ATerm c_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_53 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_Program_1))
    {
      c_28 = ATgetArgument(b_28, 0);
      {
        ATerm f_28 = NULL,h_28 = NULL;
        ATerm g_28 = NULL;
        t = SSLgetAnnotations(not_null(b_28));
        {
          g_28 = t;
          if(((f_28 != NULL) && (f_28 != g_28)))
            _fail(g_28);
          else
            f_28 = g_28;
        }
        {
          t = not_null(c_28);
          {
            ATerm j_28 = NULL;
            t = n_53(t);
            {
              h_28 = t;
              {
                ATerm k_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_28)), not_null(f_28));
                {
                  k_28 = t;
                  if(((j_28 != NULL) && (j_28 != k_28)))
                    _fail(k_28);
                  else
                    j_28 = k_28;
                }
                t = not_null(j_28);
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
  ATerm s_28 = NULL;
  ATerm a_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL;
      t = term_w_17;
      {
        t = get_config_0(t);
        {
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
        }
      }
      LocalPopChoice(c_19);
    }
  else
    {
      t = a_19;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            ATerm u_28 = NULL;
            u_28 = t;
            if(((s_28 != NULL) && (s_28 != u_28)))
              _fail(u_28);
            else
              s_28 = u_28;
            return(t);
          }
          t = Program_1(t, g_3);
          return(t);
        }
        t = fetch_1(t, f_3);
      }
    }
  {
    t = term_f_19;
    {
      t = echo_0(t);
      {
        t = term_i_19;
        {
          t = table_get_0(t);
          {
            ATerm j_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, j_3);
            {
              ATerm k_3 (ATerm t)
              {
                ATerm v_28 = NULL;
                ATerm w_28 = NULL;
                w_28 = t;
                if(((v_28 != NULL) && (v_28 != w_28)))
                  _fail(w_28);
                else
                  v_28 = w_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_28)), term_k_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, k_3);
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
  ATerm l_19;
  l_19 = t;
  {
    ATerm b_29 = NULL;
    ATerm c_29 = NULL;
    c_29 = t;
    if(((b_29 != NULL) && (b_29 != c_29)))
      _fail(c_29);
    else
      b_29 = c_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATempty, not_null(b_29)));
      t = printnl_0(t);
    }
  }
  t = l_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm m_19;
  m_19 = t;
  {
    t = a_71(t);
    t = debug_0(t);
  }
  t = m_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_53 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Undefined_1))
    {
      m_29 = ATgetArgument(l_29, 0);
      {
        ATerm u_29 = NULL,y_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(l_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(m_29);
          {
            ATerm a_30 = NULL;
            t = o_53(t);
            {
              y_29 = t;
              {
                ATerm b_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_29)), not_null(u_29));
                {
                  b_30 = t;
                  if(((a_30 != NULL) && (a_30 != b_30)))
                    _fail(b_30);
                  else
                    a_30 = b_30;
                }
                t = not_null(a_30);
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
ATerm fetch_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_60, _id);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = Cons_2(t, _id, i_30);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_75 (ATerm))
{
  t = fetch_1(t, f_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  w_30 :
  if(match_cons(a_31, sym_Help_0))
    {
      ATerm c_31 = NULL,r_31 = NULL;
      ATerm p_19;
      p_19 = t;
      {
        ATerm g_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          g_31 = t;
          if(((c_31 != NULL) && (c_31 != g_31)))
            _fail(g_31);
          else
            c_31 = g_31;
        }
      }
      t = p_19;
      {
        ATerm s_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_31));
        {
          s_31 = t;
          if(((r_31 != NULL) && (r_31 != s_31)))
            _fail(s_31);
          else
            r_31 = s_31;
        }
        t = not_null(r_31);
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
  ATerm b_32 = NULL;
  b_32 = t;
  t = SSL_implode_string(not_null(b_32));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm i_32 = NULL,m_32 = NULL,n_32 = NULL;
        i_32 = t;
        h_32 :
        if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
          {
            m_32 = ATgetFirst((ATermList) i_32);
            n_32 = (ATerm) ATgetNext((ATermList) i_32);
            {
              t = not_null(m_32);
              {
                ATerm l_3 (ATerm t)
                {
                  t = not_null(n_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_3);
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
  ATerm x_32 = NULL;
  ATerm z_32 = NULL;
  x_32 = t;
  {
    ATerm a_33 = NULL;
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    t = not_null(x_32);
    {
      a_33 = t;
      {
        t = SSL_explode_term(not_null(a_33));
        {
          c_33 = t;
          v_32 :
          if(match_cons(c_33, sym__2))
            {
              d_33 = ATgetArgument(c_33, 0);
              e_33 = ATgetArgument(c_33, 1);
              w_32 :
              if(match_string(d_33, ""))
                {
                  if(((z_32 != NULL) && (z_32 != e_33)))
                    _fail(e_33);
                  else
                    z_32 = e_33;
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
      t = not_null(z_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm i_33 (ATerm t)
  {
    ATerm s_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_33);
        LocalPopChoice(u_19);
      }
    else
      {
        t = s_19;
        {
          t = Nil_0(t);
          t = t_60(t);
        }
      }
    return(t);
  }
  t = i_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym__2))
    {
      m_33 = ATgetArgument(l_33, 0);
      n_33 = ATgetArgument(l_33, 1);
      {
        t = not_null(m_33);
        {
          ATerm m_3 (ATerm t)
          {
            t = not_null(n_33);
            return(t);
          }
          t = at_end_1(t, m_3);
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
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  t = SSL_explode_string(not_null(s_33));
  return(t);
}
ATerm _2 (ATerm t, ATerm e_47 (ATerm), ATerm f_47 (ATerm))
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      {
        ATerm h_34 = NULL,j_34 = NULL;
        ATerm i_34 = NULL;
        t = SSLgetAnnotations(not_null(b_34));
        {
          i_34 = t;
          if(((h_34 != NULL) && (h_34 != i_34)))
            _fail(i_34);
          else
            h_34 = i_34;
        }
        {
          t = not_null(c_34);
          {
            ATerm l_34 = NULL;
            t = e_47(t);
            {
              j_34 = t;
              {
                t = not_null(d_34);
                {
                  ATerm n_34 = NULL;
                  t = f_47(t);
                  {
                    l_34 = t;
                    {
                      ATerm o_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_34), not_null(l_34)), not_null(h_34));
                      {
                        o_34 = t;
                        if(((n_34 != NULL) && (n_34 != o_34)))
                          _fail(o_34);
                        else
                          n_34 = o_34;
                      }
                      t = not_null(n_34);
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
    ATerm x_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = x_19;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  v_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      {
        ATerm b_20;
        b_20 = t;
        t = SSL_printnl(not_null(x_34), not_null(y_34));
        t = b_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm k_20;
  k_20 = t;
  {
    ATerm e_35 = NULL,g_35 = NULL;
    ATerm l_20;
    l_20 = t;
    {
      ATerm f_35 = NULL;
      t = z_70(t);
      {
        f_35 = t;
        if(((e_35 != NULL) && (e_35 != f_35)))
          _fail(f_35);
        else
          e_35 = f_35;
      }
    }
    t = l_20;
    {
      ATerm h_35 = NULL;
      h_35 = t;
      if(((g_35 != NULL) && (g_35 != h_35)))
        _fail(h_35);
      else
        g_35 = h_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_35)), not_null(e_35)));
        t = printnl_0(t);
      }
    }
  }
  t = k_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm k_35 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = Cons_2(t, e_60, k_35);
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_is_string(not_null(m_35));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm a_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = a_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_3);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            {
              ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
              v_35 = t;
              u_35 :
              if(match_cons(v_35, sym_Path_1))
                {
                  w_35 = ATgetArgument(v_35, 0);
                  t = not_null(w_35);
                }
              else
                {
                  if(match_cons(v_35, sym_Var_1))
                    {
                      w_35 = ATgetArgument(v_35, 0);
                      {
                        t = not_null(w_35);
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
                                ATerm y_3 (ATerm t)
                                {
                                  t = term_h_21;
                                  return(t);
                                }
                                t = debug_1(t, y_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_35, sym_Prefix_2))
                        {
                          w_35 = ATgetArgument(v_35, 0);
                          x_35 = ATgetArgument(v_35, 1);
                          {
                            ATerm c_36 = NULL,e_36 = NULL;
                            ATerm i_21;
                            i_21 = t;
                            {
                              ATerm d_36 = NULL;
                              t = not_null(w_35);
                              {
                                t = eval_config_0(t);
                                {
                                  d_36 = t;
                                  if(((c_36 != NULL) && (c_36 != d_36)))
                                    _fail(d_36);
                                  else
                                    c_36 = d_36;
                                }
                              }
                            }
                            t = i_21;
                            {
                              ATerm f_36 = NULL;
                              t = not_null(x_35);
                              {
                                t = eval_config_0(t);
                                {
                                  f_36 = t;
                                  if(((e_36 != NULL) && (e_36 != f_36)))
                                    _fail(f_36);
                                  else
                                    e_36 = f_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_36), not_null(e_36));
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
  ATerm n_36 = NULL;
  n_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(n_36));
    {
      t = table_get_0(t);
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm s_21;
              s_21 = t;
              {
                ATerm p_36 = NULL;
                ATerm q_36 = NULL;
                q_36 = t;
                if(((p_36 != NULL) && (p_36 != q_36)))
                  _fail(q_36);
                else
                  p_36 = q_36;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_n_21, not_null(n_36), not_null(p_36));
                  t = table_put_0(t);
                }
              }
              t = s_21;
            }
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_58(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(match_cons(v_36, sym__2))
    {
      w_36 = ATgetArgument(v_36, 0);
      x_36 = ATgetArgument(v_36, 1);
      t = SSL_table_get(not_null(w_36), not_null(x_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym__3))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      k_37 = ATgetArgument(h_37, 2);
      {
        ATerm w_21;
        w_21 = t;
        {
          ATerm o_37 = NULL;
          ATerm p_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), not_null(j_37));
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
                t = (ATerm) ATempty;
              }
            {
              p_37 = t;
              if(((o_37 != NULL) && (o_37 != p_37)))
                _fail(p_37);
              else
                o_37 = p_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_37), not_null(j_37), (ATerm) ATinsert(CheckATermList(not_null(o_37)), not_null(k_37)));
            t = table_put_0(t);
          }
        }
        t = w_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm t_37 = NULL;
  ATerm u_37 = NULL;
  t = term_d_10;
  {
    t = k_76(t);
    {
      u_37 = t;
      if(((t_37 != NULL) && (t_37 != u_37)))
        _fail(u_37);
      else
        t_37 = u_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_19, term_h_19, not_null(t_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_string(d_38, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_38) == AT_LIST) && !(ATisEmpty(d_38))))
        {
          e_38 = ATgetFirst((ATermList) d_38);
          f_38 = (ATerm) ATgetNext((ATermList) d_38);
          {
            ATerm i_38 = NULL;
            ATerm z_21;
            z_21 = t;
            {
              t = not_null(e_38);
              t = a_0(t);
            }
            t = z_21;
            {
              ATerm j_38 = NULL;
              t = term_d_10;
              {
                t = d_0(t);
                {
                  j_38 = t;
                  if(((i_38 != NULL) && (i_38 != j_38)))
                    _fail(j_38);
                  else
                    i_38 = j_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_38)), not_null(i_38));
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
  ATerm z_3 (ATerm t)
  {
    ATerm o_38 = NULL;
    o_38 = t;
    n_38 :
    if(!(match_string(o_38, "--help")))
      {
        if(!(match_string(o_38, "-h")))
          {
            if(!(match_string(o_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_b_22;
    {
      t = set_config_0(t);
      t = term_h_22;
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_i_22;
    return(t);
  }
  t = Option_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  q_38 :
  if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
    {
      s_38 = ATgetFirst((ATermList) r_38);
      t_38 = (ATerm) ATgetNext((ATermList) r_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm f_39 = NULL,h_39 = NULL,j_39 = NULL;
  f_39 = t;
  e_39 :
  if(((ATgetType(f_39) == AT_LIST) && !(ATisEmpty(f_39))))
    {
      h_39 = ATgetFirst((ATermList) f_39);
      j_39 = (ATerm) ATgetNext((ATermList) f_39);
      {
        ATerm n_39 = NULL,p_39 = NULL;
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(f_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm r_39 = NULL;
            t = n_48(t);
            {
              p_39 = t;
              {
                t = not_null(j_39);
                {
                  ATerm t_39 = NULL;
                  t = o_48(t);
                  {
                    r_39 = t;
                    {
                      ATerm u_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_39)), not_null(p_39)), not_null(n_39));
                      {
                        u_39 = t;
                        if(((t_39 != NULL) && (t_39 != u_39)))
                          _fail(u_39);
                        else
                          t_39 = u_39;
                      }
                      t = not_null(t_39);
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
  ATerm e_40 = NULL;
  e_40 = t;
  d_40 :
  if(((ATgetType(e_40) == AT_LIST) && ATisEmpty(e_40)))
    {
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm j_22;
        j_22 = t;
        {
          ATerm h_40 = NULL;
          t = SSLgetAnnotations(not_null(e_40));
          {
            h_40 = t;
            if(((g_40 != NULL) && (g_40 != h_40)))
              _fail(h_40);
            else
              g_40 = h_40;
          }
        }
        t = j_22;
        {
          ATerm j_40 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_40));
          {
            j_40 = t;
            if(((i_40 != NULL) && (i_40 != j_40)))
              _fail(j_40);
            else
              i_40 = j_40;
          }
          t = not_null(i_40);
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
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym__2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_21, not_null(q_40), not_null(r_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm o_22;
  o_22 = t;
  {
    ATerm p_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_22;
        t = i_76(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = p_22;
        {
        }
      }
  }
  t = o_22;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm z_40 = NULL;
      ATerm t_22;
      t_22 = t;
      {
        ATerm x_40 = NULL;
        ATerm y_40 = NULL;
        y_40 = t;
        if(((x_40 != NULL) && (x_40 != y_40)))
          _fail(y_40);
        else
          x_40 = y_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(x_40));
          t = set_config_0(t);
        }
      }
      t = t_22;
      {
        ATerm a_41 = NULL;
        a_41 = t;
        if(((z_40 != NULL) && (z_40 != a_41)))
          _fail(a_41);
        else
          z_40 = a_41;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_40));
      }
      return(t);
    }
    ATerm i_4 (ATerm t)
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                t = i_76(t);
                t = Cons_2(t, _id, i_4);
              }
            }
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_4, i_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,k_41 = NULL;
  ATerm c_23;
  c_23 = t;
  {
    ATerm l_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
    l_41 = t;
    g_41 :
    if(match_cons(l_41, sym__3))
      {
        r_41 = ATgetArgument(l_41, 0);
        s_41 = ATgetArgument(l_41, 1);
        t_41 = ATgetArgument(l_41, 2);
        {
          if(((h_41 != NULL) && (h_41 != r_41)))
            _fail(r_41);
          else
            h_41 = r_41;
          {
            if(((i_41 != NULL) && (i_41 != s_41)))
              _fail(s_41);
            else
              i_41 = s_41;
            {
              if(((k_41 != NULL) && (k_41 != t_41)))
                _fail(t_41);
              else
                k_41 = t_41;
              t = SSL_table_put(not_null(h_41), not_null(i_41), not_null(k_41));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm w_41 = NULL;
  ATerm h_23;
  h_23 = t;
  {
    t = term_i_23;
    t = table_put_0(t);
  }
  t = h_23;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_76(t);
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_4);
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_23;
          p_23 = t;
          {
            ATerm s_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_22;
                t = get_config_0(t);
                LocalPopChoice(v_23);
              }
            else
              {
                t = s_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = p_23;
          {
            t = system_usage_0(t);
            {
              t = term_m_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm x_41 = NULL;
                    x_41 = t;
                    if(((w_41 != NULL) && (w_41 != x_41)))
                      _fail(x_41);
                    else
                      w_41 = x_41;
                    return(t);
                  }
                  t = Undefined_1(t, p_4);
                  return(t);
                }
                t = fetch_1(t, o_4);
                {
                  ATerm s_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_41)), term_b_24);
                    return(t);
                  }
                  t = say_1(t, s_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_16;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_24);
              }
            else
              {
                t = z_23;
                {
                }
              }
          }
        }
      {
        ATerm c_24;
        c_24 = t;
        {
          t = term_g_19;
          t = table_destroy_0(t);
        }
        t = c_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  t = parse_options_1(t, e_74);
  {
    t = store_options_0(t);
    {
      t = g_74(t);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_74);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            {
              ATerm j_24 = t;
              int k_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  t = option_wrap_4(t, i_74, default_usage_0, _id, j_74);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm s_69 (ATerm), ATerm t_69 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_69(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = xtc_io_1(t, t_69);
    return(t);
  }
  t = option_wrap_2(t, t_4, w_4);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm r_69 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, r_69);
  return(t);
}
ATerm xtc_iowrap_1 (ATerm t, ATerm u_69 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, u_69);
  return(t);
}
ATerm astratego2text_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      t = term_u_24;
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm e_42 = NULL;
      ATerm f_42 = NULL;
      t = term_v_24;
      {
        t = xtc_find_0(t);
        {
          f_42 = t;
          if(((e_42 != NULL) && (e_42 != f_42)))
            _fail(f_42);
          else
            e_42 = f_42;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_42)), term_w_24);
      return(t);
    }
    t = xtc_transform_2(t, c_5, d_5);
    {
      ATerm e_5 (ATerm t)
      {
        t = term_b_25;
        return(t);
      }
      t = xtc_transform_1(t, e_5);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, x_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = astratego2text_0(t);
  return(t);
}
