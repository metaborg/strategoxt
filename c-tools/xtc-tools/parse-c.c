#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
ATerm term_c_25;
ATerm term_b_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_d_24;
ATerm term_l_23;
ATerm term_o_22;
ATerm term_g_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_p_5;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_a_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_n_7);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_s_9);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_n_10);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_o_5, term_z_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_n_10);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_n_10);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_n_10);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm s_70 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm w_55 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm v_55 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm x_55 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm union_1 (ATerm, ATerm t_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm g_56 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm o_55 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm r_70 (ATerm));
ATerm assert_1 (ATerm, ATerm n_71 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_49 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_71 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm h_70 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm i_70 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm k_67 (ATerm), ATerm l_67 (ATerm));
ATerm crush_2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_77 (ATerm));
ATerm Program_1 (ATerm, ATerm e_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_71 (ATerm));
ATerm map_1 (ATerm, ATerm w_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_49 (ATerm), ATerm f_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm l_70 (ATerm));
ATerm io_parse_c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, s_70, b_0);
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
ATerm if_verbose5_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5;
      n_5 = t;
      {
        ATerm d_3 = NULL;
        ATerm e_3 = NULL;
        t = term_o_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), term_p_5);
          t = geq_0(t);
        }
      }
      t = n_5;
      t = w_55(t);
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_5;
  q_5 = t;
  {
    ATerm i_3 = NULL;
    ATerm j_3 = NULL;
    j_3 = t;
    if(((i_3 != NULL) && (i_3 != j_3)))
      _fail(j_3);
    else
      i_3 = j_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(i_3));
      t = printnl_0(t);
    }
  }
  t = q_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_3 = NULL;
  ATerm r_3 = NULL,s_3 = NULL;
  p_3 = t;
  {
    ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_3)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_4)));
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
  ATerm x_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_6;
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
      LocalPopChoice(z_5);
    }
  else
    {
      t = x_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_6;
      j_6 = t;
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        t = term_o_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), term_o_6);
          t = geq_0(t);
        }
      }
      t = j_6;
      t = v_55(t);
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6;
      r_6 = t;
      {
        ATerm u_4 = NULL;
        ATerm v_4 = NULL;
        t = term_o_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_s_6);
          t = geq_0(t);
        }
      }
      t = r_6;
      t = x_55(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
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
ATerm HdMember_p__2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
    {
      i_5 = ATgetFirst((ATermList) h_5);
      j_5 = (ATerm) ATgetNext((ATermList) h_5);
      {
        t = y_66(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm m_5 = NULL;
            m_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(m_5));
              t = x_66(t);
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
ATerm union_1 (ATerm t, ATerm t_66 (ATerm))
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
            ATerm y_6 = t;
            int z_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_5);
                LocalPopChoice(z_6);
              }
            else
              {
                t = y_6;
                {
                  ATerm d_7 = t;
                  int e_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(u_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_66, r_0);
                      t = y_5(t);
                      LocalPopChoice(e_7);
                    }
                  else
                    {
                      t = d_7;
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
        ATerm f_7;
        f_7 = t;
        {
          ATerm k_6 = NULL;
          ATerm l_6 = NULL,n_6 = NULL;
          ATerm m_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(f_6));
          {
            ATerm g_7 = t;
            int h_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_7);
              }
            else
              {
                t = g_7;
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
        t = f_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm g_56 (ATerm))
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
                  t = g_56(t);
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
    ATerm i_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_7;
      }
    {
      ATerm k_7;
      k_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_5, term_n_7, (ATerm) ATinsert(ATempty, not_null(j_7)));
        t = table_put_0(t);
      }
      t = k_7;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = term_o_7;
            return(t);
          }
          t = debug_1(t, u_0);
          return(t);
        }
        t = if_verbose4_1(t, t_0);
        {
          ATerm p_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(r_7);
            }
          else
            {
              t = p_7;
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
              ATerm m_7 = NULL;
              m_7 = t;
              if(((l_7 != NULL) && (l_7 != m_7)))
                _fail(m_7);
              else
                l_7 = m_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(l_7));
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
                      t = (ATerm) ATmakeAppl(sym__3, term_w_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_7)), (ATerm) ATempty);
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
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_getenv(not_null(q_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_7;
      t = get_config_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_8;
            t = getenv_0(t);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
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
      t = term_d_8;
      return(t);
    }
    t = debug_1(t, c_1);
    return(t);
  }
  t = if_verbose5_1(t, b_1);
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm k_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_8;
          t = table_get_0(t);
          LocalPopChoice(n_8);
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
    t = e_8;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_p_8;
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
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
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
        t = xtc_load_0(t);
        {
          ATerm x_8 = t;
          int y_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(y_8);
            }
          else
            {
              t = x_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = term_w_8;
                return(t);
              }
              t = debug_1(t, i_1);
              return(t);
            }
            t = if_verbose5_1(t, h_1);
          }
        }
      }
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm u_7 = NULL;
        ATerm v_7 = NULL;
        v_7 = t;
        if(((u_7 != NULL) && (u_7 != v_7)))
          _fail(v_7);
        else
          u_7 = v_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_9), not_null(u_7)), term_z_8);
          {
            t = error_0(t);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_w_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      t = term_c_9;
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
      t = term_f_9;
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
              t = file_exists_0(t);
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
ATerm xtc_transform_term_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, a_71, b_71);
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
ATerm execvp_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      t = SSL_execvp(not_null(o_9), not_null(p_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  t = SSL_waitpid(not_null(u_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm e_10 = NULL;
  ATerm g_10 = NULL;
  e_10 = t;
  {
    t = fork_0(t);
    {
      g_10 = t;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_10 = NULL;
            i_10 = t;
            a_10 :
            if(match_int(i_10, 0))
              {
                t = not_null(e_10);
                t = o_55(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
              t = not_null(g_10);
              {
                t = waitpid_0(t);
                {
                  j_10 = t;
                  c_10 :
                  if(match_cons(j_10, sym_WaitStatus_3))
                    {
                      k_10 = ATgetArgument(j_10, 0);
                      l_10 = ATgetArgument(j_10, 1);
                      m_10 = ATgetArgument(j_10, 2);
                      d_10 :
                      if(match_int(k_10, 0))
                        {
                          t = not_null(e_10);
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
          }
      }
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      {
        ATerm m_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), not_null(v_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, m_1);
      }
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
ATerm xtc_command_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm b_11 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm c_11 = NULL;
    t = r_70(t);
    {
      t = xtc_find_0(t);
      {
        c_11 = t;
        if(((b_11 != NULL) && (b_11 != c_11)))
          _fail(c_11);
        else
          b_11 = c_11;
      }
    }
  }
  t = j_9;
  {
    ATerm k_9;
    k_9 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      e_11 = t;
      if(((d_11 != NULL) && (d_11 != e_11)))
        _fail(e_11);
      else
        d_11 = e_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(d_11));
        t = call_0(t);
      }
    }
    t = k_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
        ATerm l_9;
        l_9 = t;
        {
          ATerm u_11 = NULL;
          ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
          t = n_71(t);
          {
            u_11 = t;
            {
              if(((r_11 != NULL) && (r_11 != u_11)))
                _fail(u_11);
              else
                r_11 = u_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), not_null(n_11), not_null(o_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_9 = t;
                    int r_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_s_9);
                        t = table_get_0(t);
                        LocalPopChoice(r_9);
                      }
                    else
                      {
                        t = q_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_11 = t;
                      k_11 :
                      if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
                        {
                          w_11 = ATgetFirst((ATermList) v_11);
                          x_11 = (ATerm) ATgetNext((ATermList) v_11);
                          {
                            if(((s_11 != NULL) && (s_11 != w_11)))
                              _fail(w_11);
                            else
                              s_11 = w_11;
                            {
                              if(((t_11 != NULL) && (t_11 != x_11)))
                                _fail(x_11);
                              else
                                t_11 = x_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), term_s_9, (ATerm) ATinsert(CheckATermList(not_null(t_11)), (ATerm) ATinsert(CheckATermList(not_null(s_11)), not_null(n_11))));
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
        t = l_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    t = b_72(t);
    {
      ATerm n_1 (ATerm t)
      {
        t = term_v_9;
        return(t);
      }
      t = debug_1(t, n_1);
    }
  }
  t = t_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
      h_12 = t;
      c_12 :
      if(match_cons(h_12, sym__2))
        {
          i_12 = ATgetArgument(h_12, 0);
          j_12 = ATgetArgument(h_12, 1);
          {
            if(((g_12 != NULL) && (g_12 != i_12)))
              _fail(i_12);
            else
              g_12 = i_12;
            if(((f_12 != NULL) && (f_12 != j_12)))
              _fail(j_12);
            else
              f_12 = j_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_9);
      t = SSL_open_file(not_null(g_12), not_null(f_12));
    }
  else
    {
      t = w_9;
      {
        ATerm k_12 = NULL;
        ATerm l_12 = NULL;
        ATerm o_1 (ATerm t)
        {
          t = term_y_9;
          return(t);
        }
        t = obsolete_1(t, o_1);
        {
          k_12 = t;
          {
            if(((g_12 != NULL) && (g_12 != k_12)))
              _fail(k_12);
            else
              g_12 = k_12;
            {
              ATerm z_9;
              z_9 = t;
              {
                ATerm m_12 = NULL;
                t = term_b_10;
                {
                  m_12 = t;
                  if(((l_12 != NULL) && (l_12 != m_12)))
                    _fail(m_12);
                  else
                    l_12 = m_12;
                }
              }
              t = z_9;
              t = SSL_open_file(not_null(g_12), not_null(l_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_12 = NULL;
  ATerm u_12 = NULL;
  s_12 = t;
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm v_12 = NULL;
      t = term_h_10;
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
    }
    t = f_10;
    {
      t = SSL_open_file(not_null(s_12), not_null(u_12));
      t = SSL_close_file(not_null(s_12));
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
  ATerm z_12 = NULL;
  ATerm a_13 = NULL;
  t = term_n_10;
  {
    t = new_0(t);
    {
      a_13 = t;
      if(((z_12 != NULL) && (z_12 != a_13)))
        _fail(a_13);
      else
        z_12 = a_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), term_o_10);
    {
      t = conc_strings_0(t);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
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
  ATerm e_13 = NULL;
  t = new_file_0(t);
  {
    e_13 = t;
    {
      ATerm r_10;
      r_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_b_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_n_10);
            {
              ATerm p_1 (ATerm t)
              {
                t = term_w_10;
                return(t);
              }
              t = assert_1(t, p_1);
            }
          }
        }
      }
      t = r_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_stdin_0))
    {
      ATerm q_13 = NULL;
      ATerm r_13 = NULL;
      ATerm s_13 = NULL;
      t = xtc_new_file_0(t);
      {
        r_13 = t;
        {
          if(((q_13 != NULL) && (q_13 != r_13)))
            _fail(r_13);
          else
            q_13 = r_13;
          {
            ATerm t_13 = NULL;
            t = o_0(t);
            {
              t_13 = t;
              if(((s_13 != NULL) && (s_13 != t_13)))
                _fail(t_13);
              else
                s_13 = t_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_13)), term_x_10));
              {
                ATerm y_10 = t;
                int z_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(z_10);
                  }
                else
                  {
                    t = y_10;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(q_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_13));
    }
  else
    {
      if(match_cons(o_13, sym_FILE_1))
        {
          p_13 = ATgetArgument(o_13, 0);
          {
            ATerm v_13 = NULL;
            ATerm w_13 = NULL;
            t = not_null(p_13);
            {
              ATerm x_13 = NULL;
              t = xtc_new_file_0(t);
              {
                w_13 = t;
                {
                  if(((v_13 != NULL) && (v_13 != w_13)))
                    _fail(w_13);
                  else
                    v_13 = w_13;
                  {
                    ATerm y_13 = NULL;
                    t = o_0(t);
                    {
                      y_13 = t;
                      if(((x_13 != NULL) && (x_13 != y_13)))
                        _fail(y_13);
                      else
                        x_13 = y_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_13)), term_x_10), not_null(p_13)), term_a_11));
                      {
                        ATerm f_11 = t;
                        int g_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(g_11);
                          }
                        else
                          {
                            t = f_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(v_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_13));
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
  ATerm j_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_stdin_0))
    {
      ATerm l_14 = NULL,n_14 = NULL;
      ATerm h_11;
      h_11 = t;
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
      t = h_11;
      {
        ATerm o_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(l_14));
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
ATerm FILE_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_FILE_1))
    {
      y_14 = ATgetArgument(x_14, 0);
      {
        ATerm b_15 = NULL,d_15 = NULL;
        ATerm c_15 = NULL;
        t = SSLgetAnnotations(not_null(x_14));
        {
          c_15 = t;
          if(((b_15 != NULL) && (b_15 != c_15)))
            _fail(c_15);
          else
            b_15 = c_15;
        }
        {
          t = not_null(y_14);
          {
            ATerm f_15 = NULL;
            t = r_49(t);
            {
              d_15 = t;
              {
                ATerm g_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(d_15)), not_null(b_15));
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
                t = not_null(f_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm))
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 = t;
      int q_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(q_11);
        }
      else
        {
          t = p_11;
          t = stdin_0(t);
        }
      LocalPopChoice(j_11);
      t = xtc_transform_file_2(t, t_70, u_70);
    }
  else
    {
      t = i_11;
      t = xtc_transform_term_2(t, t_70, u_70);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      t = SSL_copy(not_null(o_15), not_null(p_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym_stderr_0))
    {
      ATerm z_15 = NULL,b_16 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm a_16 = NULL;
        t = SSLgetAnnotations(not_null(x_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
      }
      t = y_11;
      {
        ATerm c_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(z_15));
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
        t = not_null(b_16);
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
  ATerm k_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_stdout_0))
    {
      ATerm m_16 = NULL,o_16 = NULL;
      ATerm z_11;
      z_11 = t;
      {
        ATerm n_16 = NULL;
        t = SSLgetAnnotations(not_null(k_16));
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
      }
      t = z_11;
      {
        ATerm p_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(m_16));
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
        t = not_null(o_16);
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
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_FILE_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL;
            ATerm g_17 = NULL;
            t = m_0(t);
            {
              g_17 = t;
              {
                if(((f_17 != NULL) && (f_17 != g_17)))
                  _fail(g_17);
                else
                  f_17 = g_17;
                {
                  ATerm d_12 = t;
                  int e_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(e_12);
                    }
                  else
                    {
                      t = d_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(f_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_17 = NULL;
                  ATerm j_17 = NULL;
                  t = m_0(t);
                  {
                    j_17 = t;
                    {
                      if(((i_17 != NULL) && (i_17 != j_17)))
                        _fail(j_17);
                      else
                        i_17 = j_17;
                      {
                        ATerm p_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_12 = t;
                            int r_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(r_12);
                              }
                            else
                              {
                                t = q_12;
                                {
                                  ATerm t_12 = t;
                                  int w_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(w_12);
                                    }
                                  else
                                    {
                                      t = t_12;
                                      {
                                        ATerm l_17 = NULL;
                                        l_17 = t;
                                        if(((d_17 != NULL) && (d_17 != l_17)))
                                          _fail(l_17);
                                        else
                                          d_17 = l_17;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_12;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(i_17));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  {
                    ATerm n_17 = NULL;
                    t = m_0(t);
                    {
                      n_17 = t;
                      if(((d_17 != NULL) && (d_17 != n_17)))
                        _fail(n_17);
                      else
                        d_17 = n_17;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
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
ATerm Tl_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
    {
      f_18 = ATgetFirst((ATermList) e_18);
      g_18 = (ATerm) ATgetNext((ATermList) e_18);
      t = not_null(g_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        ATerm x_12;
        x_12 = t;
        {
          ATerm w_18 = NULL;
          ATerm x_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(t_18));
          {
            ATerm y_12 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(b_13);
              }
            else
              {
                t = y_12;
                t = (ATerm) ATempty;
              }
            {
              x_18 = t;
              if(((w_18 != NULL) && (w_18 != x_18)))
                _fail(x_18);
              else
                w_18 = x_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_18), not_null(t_18), not_null(w_18));
            t = table_put_0(t);
          }
        }
        t = x_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm e_19 = NULL,k_19 = NULL,l_19 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    ATerm m_19 = NULL;
    ATerm n_19 = NULL,s_19 = NULL,t_19 = NULL;
    t = k_71(t);
    {
      m_19 = t;
      {
        if(((l_19 != NULL) && (l_19 != m_19)))
          _fail(m_19);
        else
          l_19 = m_19;
        {
          ATerm d_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), term_s_9);
              t = table_get_0(t);
              LocalPopChoice(f_13);
            }
          else
            {
              t = d_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_19 = t;
            d_19 :
            if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
              {
                s_19 = ATgetFirst((ATermList) n_19);
                t_19 = (ATerm) ATgetNext((ATermList) n_19);
                {
                  if(((k_19 != NULL) && (k_19 != s_19)))
                    _fail(s_19);
                  else
                    k_19 = s_19;
                  {
                    if(((e_19 != NULL) && (e_19 != t_19)))
                      _fail(t_19);
                    else
                      e_19 = t_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_19), term_s_9, not_null(e_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_19);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm b_20 = NULL;
                              b_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(b_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, q_1);
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
  t = c_13;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  t = SSL_remove(not_null(j_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_59(t);
      t = w_59(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        t = w_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm p_20 = NULL;
    ATerm q_20 = NULL;
    t = j_71(t);
    {
      p_20 = t;
      {
        if(((o_20 != NULL) && (o_20 != p_20)))
          _fail(p_20);
        else
          o_20 = p_20;
        {
          ATerm r_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_s_9);
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = (ATerm) ATempty;
              }
            {
              r_20 = t;
              if(((q_20 != NULL) && (q_20 != r_20)))
                _fail(r_20);
              else
                q_20 = r_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_20), term_s_9, (ATerm) ATinsert(CheckATermList(not_null(q_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm w_20 = NULL,x_20 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = term_w_10;
    return(t);
  }
  t = begin_scope_1(t, r_1);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm l_13;
      l_13 = t;
      {
        ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
        ATerm m_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_13;
            t = table_get_0(t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = m_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          y_20 = t;
          v_20 :
          if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
            {
              z_20 = ATgetFirst((ATermList) y_20);
              a_21 = (ATerm) ATgetNext((ATermList) y_20);
              {
                if(((x_20 != NULL) && (x_20 != z_20)))
                  _fail(z_20);
                else
                  x_20 = z_20;
                {
                  if(((w_20 != NULL) && (w_20 != a_21)))
                    _fail(a_21);
                  else
                    w_20 = a_21;
                  {
                    t = not_null(x_20);
                    {
                      ATerm t_1 (ATerm t)
                      {
                        ATerm a_14 = t;
                        int b_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(b_14);
                          }
                        else
                          {
                            t = a_14;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, t_1);
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
      t = l_13;
      {
        ATerm u_1 (ATerm t)
        {
          t = term_w_10;
          return(t);
        }
        t = end_scope_1(t, u_1);
      }
      return(t);
    }
    t = restore_always_2(t, h_70, s_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_21 = NULL;
        ATerm e_21 = NULL;
        t = term_a_11;
        {
          t = get_config_0(t);
          {
            e_21 = t;
            if(((d_21 != NULL) && (d_21 != e_21)))
              _fail(e_21);
            else
              d_21 = e_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_21));
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = term_f_9;
      }
    {
      t = i_70(t);
      {
        ATerm w_1 (ATerm t)
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_10;
              t = get_config_0(t);
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              t = term_g_14;
            }
          return(t);
        }
        t = copy_to_1(t, w_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, v_1);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm h_21 = NULL;
    h_21 = t;
    g_21 :
    if(!(match_string(h_21, "-v")))
      {
        if(!(match_string(h_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_k_14;
    t = set_config_0(t);
    t = term_p_14;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_q_14;
    return(t);
  }
  t = Option_3(t, x_1, y_1, a_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm k_21 = NULL;
    k_21 = t;
    i_21 :
    if(!(match_string(k_21, "-k")))
      {
        if(!(match_string(k_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm r_14;
    r_14 = t;
    {
      ATerm l_21 = NULL;
      ATerm m_21 = NULL;
      t = string_to_int_0(t);
      {
        m_21 = t;
        if(((l_21 != NULL) && (l_21 != m_21)))
          _fail(m_21);
        else
          l_21 = m_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(l_21));
        t = set_config_0(t);
      }
    }
    t = r_14;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = SSL_string_to_int(not_null(u_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm c_22 = NULL;
        c_22 = t;
        x_21 :
        if(!(match_string(c_22, "-S")))
          {
            if(!(match_string(c_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_a_15;
        t = set_config_0(t);
        t = term_e_15;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_h_15;
        return(t);
      }
      t = Option_3(t, e_2, f_2, g_2);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm d_22 = NULL;
              d_22 = t;
              y_21 :
              if(!(match_string(d_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm j_22 = NULL;
              ATerm k_15;
              k_15 = t;
              {
                ATerm e_22 = NULL;
                ATerm f_22 = NULL;
                t = string_to_int_0(t);
                {
                  f_22 = t;
                  if(((e_22 != NULL) && (e_22 != f_22)))
                    _fail(f_22);
                  else
                    e_22 = f_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_5, not_null(e_22));
                  t = set_config_0(t);
                }
              }
              t = k_15;
              {
                ATerm l_22 = NULL;
                l_22 = t;
                if(((j_22 != NULL) && (j_22 != l_22)))
                  _fail(l_22);
                else
                  j_22 = l_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_22));
              }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_l_15;
              return(t);
            }
            t = ArgOption_3(t, h_2, i_2, j_2);
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            {
              ATerm k_2 (ATerm t)
              {
                ATerm m_22 = NULL;
                m_22 = t;
                b_22 :
                if(!(match_string(m_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_r_15;
                t = set_config_0(t);
                t = term_s_15;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_t_15;
                return(t);
              }
              t = Option_3(t, k_2, l_2, m_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm y_15 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(d_16);
          }
        else
          {
            t = y_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm s_22 = NULL;
    s_22 = t;
    p_22 :
    if(!(match_string(s_22, "-o")))
      {
        if(!(match_string(s_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm v_22 = NULL;
    ATerm e_16;
    e_16 = t;
    {
      ATerm t_22 = NULL;
      ATerm u_22 = NULL;
      u_22 = t;
      if(((t_22 != NULL) && (t_22 != u_22)))
        _fail(u_22);
      else
        t_22 = u_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(t_22));
        t = set_config_0(t);
      }
    }
    t = e_16;
    {
      ATerm w_22 = NULL;
      w_22 = t;
      if(((v_22 != NULL) && (v_22 != w_22)))
        _fail(w_22);
      else
        v_22 = w_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_22));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm a_23 = NULL;
          a_23 = t;
          z_22 :
          if(!(match_string(a_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_l_16;
          t = set_config_0(t);
          t = term_q_16;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_r_16;
          return(t);
        }
        t = Option_3(t, q_2, r_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  g_23 = t;
  e_23 :
  if(match_string(g_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
        {
          h_23 = ATgetFirst((ATermList) g_23);
          i_23 = (ATerm) ATgetNext((ATermList) g_23);
          f_23 :
          if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
            {
              j_23 = ATgetFirst((ATermList) i_23);
              k_23 = (ATerm) ATgetNext((ATermList) i_23);
              {
                ATerm o_23 = NULL;
                ATerm s_16;
                s_16 = t;
                {
                  t = not_null(h_23);
                  t = j_0(t);
                }
                t = s_16;
                {
                  ATerm p_23 = NULL;
                  t = not_null(j_23);
                  {
                    t = k_0(t);
                    {
                      p_23 = t;
                      if(((o_23 != NULL) && (o_23 != p_23)))
                        _fail(p_23);
                      else
                        o_23 = p_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_23)), not_null(o_23));
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
  ATerm v_2 (ATerm t)
  {
    ATerm w_23 = NULL;
    w_23 = t;
    t_23 :
    if(!(match_string(w_23, "-i")))
      {
        if(!(match_string(w_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm z_23 = NULL;
    ATerm t_16;
    t_16 = t;
    {
      ATerm x_23 = NULL;
      ATerm y_23 = NULL;
      y_23 = t;
      if(((x_23 != NULL) && (x_23 != y_23)))
        _fail(y_23);
      else
        x_23 = y_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(x_23));
        t = set_config_0(t);
      }
    }
    t = t_16;
    {
      ATerm a_24 = NULL;
      a_24 = t;
      if(((z_23 != NULL) && (z_23 != a_24)))
        _fail(a_24);
      else
        z_23 = a_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_23));
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_u_16;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm f_24 = NULL;
  ATerm z_16;
  z_16 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm g_24 = NULL,h_24 = NULL;
      g_24 = t;
      e_24 :
      if(match_cons(g_24, sym_Program_1))
        {
          h_24 = ATgetArgument(g_24, 0);
          if(((f_24 != NULL) && (f_24 != h_24)))
            _fail(h_24);
          else
            f_24 = h_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), not_null(f_24)), term_a_17));
      {
        t = printnl_0(t);
        {
          t = term_h_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_k_17));
  {
    t = printnl_0(t);
    {
      t = term_h_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = SSL_TicksToSeconds(not_null(k_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm m_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_24), not_null(r_24));
            LocalPopChoice(o_17);
          }
        else
          {
            t = m_17;
            t = SSL_addr(not_null(q_24), not_null(r_24));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_67 (ATerm), ATerm l_67 (ATerm))
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_67(t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
        y_24 = t;
        x_24 :
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            z_24 = ATgetFirst((ATermList) y_24);
            a_25 = (ATerm) ATgetNext((ATermList) y_24);
            {
              ATerm d_25 = NULL;
              ATerm e_25 = NULL;
              t = not_null(a_25);
              {
                t = foldr_2(t, k_67, l_67);
                {
                  e_25 = t;
                  if(((d_25 != NULL) && (d_25 != e_25)))
                    _fail(e_25);
                  else
                    d_25 = e_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(d_25));
                t = l_67(t);
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
ATerm crush_2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm l_25 = NULL;
  ATerm n_25 = NULL;
  l_25 = t;
  {
    ATerm o_25 = NULL;
    ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
    t = not_null(l_25);
    {
      o_25 = t;
      {
        t = SSL_explode_term(not_null(o_25));
        {
          q_25 = t;
          k_25 :
          if(match_cons(q_25, sym__2))
            {
              r_25 = ATgetArgument(q_25, 0);
              s_25 = ATgetArgument(q_25, 1);
              if(((n_25 != NULL) && (n_25 != s_25)))
                _fail(s_25);
              else
                n_25 = s_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_25);
      t = foldr_2(t, i_66, j_66);
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
    ATerm z_2 (ATerm t)
    {
      t = term_z_14;
      return(t);
    }
    t = crush_2(t, z_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      {
        ATerm r_17;
        r_17 = t;
        {
          ATerm s_17 = t;
          int t_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_25), not_null(a_26));
              LocalPopChoice(t_17);
            }
          else
            {
              t = s_17;
              t = SSL_gtr(not_null(z_25), not_null(a_26));
            }
        }
        t = r_17;
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
  ATerm g_26 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
      h_26 = t;
      f_26 :
      if(match_cons(h_26, sym__2))
        {
          i_26 = ATgetArgument(h_26, 0);
          j_26 = ATgetArgument(h_26, 1);
          {
            if(((g_26 != NULL) && (g_26 != i_26)))
              _fail(i_26);
            else
              g_26 = i_26;
            if(((g_26 != NULL) && (g_26 != j_26)))
              _fail(j_26);
            else
              g_26 = j_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_17;
      y_17 = t;
      {
        ATerm m_26 = NULL;
        ATerm n_26 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            n_26 = t;
            if(((m_26 != NULL) && (m_26 != n_26)))
              _fail(n_26);
            else
              m_26 = n_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_26), term_h_17);
          t = geq_0(t);
        }
      }
      t = y_17;
      t = s_55(t);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm r_26 = NULL,t_26 = NULL;
    ATerm z_17;
    z_17 = t;
    {
      ATerm s_26 = NULL;
      t = run_time_0(t);
      {
        s_26 = t;
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
      }
    }
    t = z_17;
    {
      ATerm u_26 = NULL;
      t = term_a_18;
      {
        t = get_config_0(t);
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), not_null(r_26)), term_b_18), not_null(t_26)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  {
    t = term_z_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  b_27 :
  if(match_cons(e_27, sym_Version_0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      ATerm h_18;
      h_18 = t;
      {
        ATerm k_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          k_27 = t;
          if(((j_27 != NULL) && (j_27 != k_27)))
            _fail(k_27);
          else
            j_27 = k_27;
        }
      }
      t = h_18;
      {
        ATerm m_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
        t = not_null(l_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_3);
  t = t_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_table_create(not_null(r_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  {
    ATerm m_18;
    m_18 = t;
    {
      t = term_n_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, not_null(v_27));
          t = table_put_0(t);
        }
      }
    }
    t = m_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_table_destroy(not_null(b_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = SSL_exit(not_null(f_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(((ATgetType(j_28) == AT_LIST) && ATisEmpty(j_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
        {
          k_28 = ATgetFirst((ATermList) j_28);
          l_28 = (ATerm) ATgetNext((ATermList) j_28);
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
  ATerm p_18;
  p_18 = t;
  {
    ATerm o_28 = NULL;
    ATerm r_28 = NULL;
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          ATerm p_28 = NULL;
          ATerm q_28 = NULL;
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
          t = (ATerm) ATinsert(ATempty, not_null(p_28));
        }
      }
    {
      r_28 = t;
      if(((o_28 != NULL) && (o_28 != r_28)))
        _fail(r_28);
      else
        o_28 = r_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_14, not_null(o_28));
      t = printnl_0(t);
    }
  }
  t = p_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  c_29 = t;
  z_28 :
  if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
    {
      a_29 = ATgetFirst((ATermList) c_29);
      b_29 = (ATerm) ATgetNext((ATermList) c_29);
      {
        ATerm f_29 = NULL;
        t = not_null(b_29);
        {
          ATerm y_18;
          y_18 = t;
          {
            ATerm g_29 = NULL,i_29 = NULL,k_29 = NULL;
            ATerm z_18;
            z_18 = t;
            {
              ATerm h_29 = NULL;
              t = i_0(t);
              {
                h_29 = t;
                if(((g_29 != NULL) && (g_29 != h_29)))
                  _fail(h_29);
                else
                  g_29 = h_29;
              }
            }
            t = z_18;
            {
              ATerm j_29 = NULL;
              t = not_null(a_29);
              {
                t = h_0(t);
                {
                  j_29 = t;
                  if(((i_29 != NULL) && (i_29 != j_29)))
                    _fail(j_29);
                  else
                    i_29 = j_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_29)), not_null(i_29));
                {
                  k_29 = t;
                  if(((f_29 != NULL) && (f_29 != k_29)))
                    _fail(k_29);
                  else
                    f_29 = k_29;
                }
              }
            }
          }
          t = y_18;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(f_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_29) == AT_LIST) && ATisEmpty(c_29)))
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
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm c_30 = NULL,d_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_Program_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      {
        ATerm i_30 = NULL,k_30 = NULL;
        ATerm j_30 = NULL;
        t = SSLgetAnnotations(not_null(c_30));
        {
          j_30 = t;
          if(((i_30 != NULL) && (i_30 != j_30)))
            _fail(j_30);
          else
            i_30 = j_30;
        }
        {
          t = not_null(d_30);
          {
            ATerm o_30 = NULL;
            t = e_54(t);
            {
              k_30 = t;
              {
                ATerm p_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_30)), not_null(i_30));
                {
                  p_30 = t;
                  if(((o_30 != NULL) && (o_30 != p_30)))
                    _fail(p_30);
                  else
                    o_30 = p_30;
                }
                t = not_null(o_30);
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
  ATerm h_31 = NULL;
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_31 = NULL;
      t = term_a_18;
      {
        t = get_config_0(t);
        {
          j_31 = t;
          if(((h_31 != NULL) && (h_31 != j_31)))
            _fail(j_31);
          else
            h_31 = j_31;
        }
      }
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm m_31 = NULL;
            m_31 = t;
            if(((h_31 != NULL) && (h_31 != m_31)))
              _fail(m_31);
            else
              h_31 = m_31;
            return(t);
          }
          t = Program_1(t, h_3);
          return(t);
        }
        t = fetch_1(t, g_3);
      }
    }
  {
    t = term_c_19;
    {
      t = echo_0(t);
      {
        t = term_h_19;
        {
          t = table_get_0(t);
          {
            ATerm k_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, k_3);
            {
              ATerm l_3 (ATerm t)
              {
                ATerm n_31 = NULL;
                ATerm o_31 = NULL;
                o_31 = t;
                if(((n_31 != NULL) && (n_31 != o_31)))
                  _fail(o_31);
                else
                  n_31 = o_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_31)), term_i_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, l_3);
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
  ATerm j_19;
  j_19 = t;
  {
    ATerm h_32 = NULL;
    ATerm i_32 = NULL;
    i_32 = t;
    if(((h_32 != NULL) && (h_32 != i_32)))
      _fail(i_32);
    else
      h_32 = i_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(h_32)));
      t = printnl_0(t);
    }
  }
  t = j_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm o_19;
  o_19 = t;
  {
    t = v_71(t);
    t = debug_0(t);
  }
  t = o_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL;
  v_32 = t;
  s_32 :
  if(match_cons(v_32, sym_Undefined_1))
    {
      w_32 = ATgetArgument(v_32, 0);
      {
        ATerm c_33 = NULL,e_33 = NULL;
        ATerm d_33 = NULL;
        t = SSLgetAnnotations(not_null(v_32));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
        {
          t = not_null(w_32);
          {
            ATerm g_33 = NULL;
            t = f_54(t);
            {
              e_33 = t;
              {
                ATerm h_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_33)), not_null(c_33));
                {
                  h_33 = t;
                  if(((g_33 != NULL) && (g_33 != h_33)))
                    _fail(h_33);
                  else
                    g_33 = h_33;
                }
                t = not_null(g_33);
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
ATerm fetch_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm m_33 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_61, _id);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = Cons_2(t, _id, m_33);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_76 (ATerm))
{
  t = fetch_1(t, a_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_Help_0))
    {
      ATerm t_33 = NULL,v_33 = NULL;
      ATerm r_19;
      r_19 = t;
      {
        ATerm u_33 = NULL;
        t = SSLgetAnnotations(not_null(r_33));
        {
          u_33 = t;
          if(((t_33 != NULL) && (t_33 != u_33)))
            _fail(u_33);
          else
            t_33 = u_33;
        }
      }
      t = r_19;
      {
        ATerm w_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        t = not_null(v_33);
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
  ATerm b_34 = NULL;
  b_34 = t;
  t = SSL_implode_string(not_null(b_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
        g_34 = t;
        f_34 :
        if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
          {
            h_34 = ATgetFirst((ATermList) g_34);
            i_34 = (ATerm) ATgetNext((ATermList) g_34);
            {
              t = not_null(h_34);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(i_34);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm s_34 = NULL;
  ATerm u_34 = NULL;
  s_34 = t;
  {
    ATerm v_34 = NULL;
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
    t = not_null(s_34);
    {
      v_34 = t;
      {
        t = SSL_explode_term(not_null(v_34));
        {
          x_34 = t;
          q_34 :
          if(match_cons(x_34, sym__2))
            {
              y_34 = ATgetArgument(x_34, 0);
              z_34 = ATgetArgument(x_34, 1);
              r_34 :
              if(match_string(y_34, ""))
                {
                  if(((u_34 != NULL) && (u_34 != z_34)))
                    _fail(z_34);
                  else
                    u_34 = z_34;
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
      t = not_null(u_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm d_35 (ATerm t)
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_35);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        {
          t = Nil_0(t);
          t = l_61(t);
        }
      }
    return(t);
  }
  t = d_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        t = not_null(h_35);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(i_35);
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
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  t = SSL_explode_string(not_null(n_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm))
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  v_35 :
  if(match_cons(w_35, sym__2))
    {
      x_35 = ATgetArgument(w_35, 0);
      y_35 = ATgetArgument(w_35, 1);
      {
        ATerm c_36 = NULL,e_36 = NULL;
        ATerm d_36 = NULL;
        t = SSLgetAnnotations(not_null(w_35));
        {
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
        }
        {
          t = not_null(x_35);
          {
            ATerm g_36 = NULL;
            t = v_47(t);
            {
              e_36 = t;
              {
                t = not_null(y_35);
                {
                  ATerm i_36 = NULL;
                  t = w_47(t);
                  {
                    g_36 = t;
                    {
                      ATerm j_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_36), not_null(g_36)), not_null(c_36));
                      {
                        j_36 = t;
                        if(((i_36 != NULL) && (i_36 != j_36)))
                          _fail(j_36);
                        else
                          i_36 = j_36;
                      }
                      t = not_null(i_36);
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
    ATerm a_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = a_20;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym__2))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      {
        ATerm d_20;
        d_20 = t;
        t = SSL_printnl(not_null(s_36), not_null(t_36));
        t = d_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm e_20;
  e_20 = t;
  {
    ATerm z_36 = NULL,b_37 = NULL;
    ATerm f_20;
    f_20 = t;
    {
      ATerm a_37 = NULL;
      t = u_71(t);
      {
        a_37 = t;
        if(((z_36 != NULL) && (z_36 != a_37)))
          _fail(a_37);
        else
          z_36 = a_37;
      }
    }
    t = f_20;
    {
      ATerm c_37 = NULL;
      c_37 = t;
      if(((b_37 != NULL) && (b_37 != c_37)))
        _fail(c_37);
      else
        b_37 = c_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_37)), not_null(z_36)));
        t = printnl_0(t);
      }
    }
  }
  t = e_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm f_37 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2(t, w_60, f_37);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  t = SSL_is_string(not_null(h_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = i_20;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm n_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = n_20;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, y_3);
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
              t_37 = t;
              p_37 :
              if(match_cons(t_37, sym_Path_1))
                {
                  u_37 = ATgetArgument(t_37, 0);
                  t = not_null(u_37);
                }
              else
                {
                  if(match_cons(t_37, sym_Var_1))
                    {
                      u_37 = ATgetArgument(t_37, 0);
                      {
                        t = not_null(u_37);
                        {
                          ATerm t_20 = t;
                          int u_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_20);
                            }
                          else
                            {
                              t = t_20;
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = term_b_21;
                                  return(t);
                                }
                                t = debug_1(t, z_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_37, sym_Prefix_2))
                        {
                          u_37 = ATgetArgument(t_37, 0);
                          v_37 = ATgetArgument(t_37, 1);
                          {
                            ATerm a_38 = NULL,c_38 = NULL;
                            ATerm c_21;
                            c_21 = t;
                            {
                              ATerm b_38 = NULL;
                              t = not_null(u_37);
                              {
                                t = eval_config_0(t);
                                {
                                  b_38 = t;
                                  if(((a_38 != NULL) && (a_38 != b_38)))
                                    _fail(b_38);
                                  else
                                    a_38 = b_38;
                                }
                              }
                            }
                            t = c_21;
                            {
                              ATerm d_38 = NULL;
                              t = not_null(v_37);
                              {
                                t = eval_config_0(t);
                                {
                                  d_38 = t;
                                  if(((c_38 != NULL) && (c_38 != d_38)))
                                    _fail(d_38);
                                  else
                                    c_38 = d_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_38), not_null(c_38));
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
  ATerm l_38 = NULL;
  l_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(l_38));
    {
      t = table_get_0(t);
      {
        ATerm j_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm o_21;
              o_21 = t;
              {
                ATerm o_38 = NULL;
                ATerm p_38 = NULL;
                p_38 = t;
                if(((o_38 != NULL) && (o_38 != p_38)))
                  _fail(p_38);
                else
                  o_38 = p_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_21, not_null(l_38), not_null(o_38));
                  t = table_put_0(t);
                }
              }
              t = o_21;
            }
            LocalPopChoice(n_21);
          }
        else
          {
            t = j_21;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_59(t);
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
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym__2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      t = SSL_table_get(not_null(x_38), not_null(y_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__3))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      i_39 = ATgetArgument(f_39, 2);
      {
        ATerm r_21;
        r_21 = t;
        {
          ATerm m_39 = NULL;
          ATerm n_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), not_null(h_39));
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
              n_39 = t;
              if(((m_39 != NULL) && (m_39 != n_39)))
                _fail(n_39);
              else
                m_39 = n_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_39), not_null(h_39), (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(i_39)));
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
ATerm register_usage_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm t_39 = NULL;
  ATerm u_39 = NULL;
  t = term_n_10;
  {
    t = f_77(t);
    {
      u_39 = t;
      if(((t_39 != NULL) && (t_39 != u_39)))
        _fail(u_39);
      else
        t_39 = u_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, not_null(t_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_string(c_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
        {
          d_40 = ATgetFirst((ATermList) c_40);
          e_40 = (ATerm) ATgetNext((ATermList) c_40);
          {
            ATerm h_40 = NULL;
            ATerm v_21;
            v_21 = t;
            {
              t = not_null(d_40);
              t = a_0(t);
            }
            t = v_21;
            {
              ATerm i_40 = NULL;
              t = term_n_10;
              {
                t = d_0(t);
                {
                  i_40 = t;
                  if(((h_40 != NULL) && (h_40 != i_40)))
                    _fail(i_40);
                  else
                    h_40 = i_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_40)), not_null(h_40));
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
  ATerm a_4 (ATerm t)
  {
    ATerm n_40 = NULL;
    n_40 = t;
    m_40 :
    if(!(match_string(n_40, "--help")))
      {
        if(!(match_string(n_40, "-h")))
          {
            if(!(match_string(n_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_z_21;
    {
      t = set_config_0(t);
      t = term_a_22;
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_g_22;
    return(t);
  }
  t = Option_3(t, a_4, b_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(((ATgetType(q_40) == AT_LIST) && !(ATisEmpty(q_40))))
    {
      r_40 = ATgetFirst((ATermList) q_40);
      s_40 = (ATerm) ATgetNext((ATermList) q_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_49 (ATerm), ATerm f_49 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  b_41 :
  if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
    {
      d_41 = ATgetFirst((ATermList) c_41);
      e_41 = (ATerm) ATgetNext((ATermList) c_41);
      {
        ATerm i_41 = NULL,k_41 = NULL;
        ATerm j_41 = NULL;
        t = SSLgetAnnotations(not_null(c_41));
        {
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
        }
        {
          t = not_null(d_41);
          {
            ATerm m_41 = NULL;
            t = e_49(t);
            {
              k_41 = t;
              {
                t = not_null(e_41);
                {
                  ATerm o_41 = NULL;
                  t = f_49(t);
                  {
                    m_41 = t;
                    {
                      ATerm p_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_41)), not_null(k_41)), not_null(i_41));
                      {
                        p_41 = t;
                        if(((o_41 != NULL) && (o_41 != p_41)))
                          _fail(p_41);
                        else
                          o_41 = p_41;
                      }
                      t = not_null(o_41);
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
  ATerm b_42 = NULL;
  b_42 = t;
  z_41 :
  if(((ATgetType(b_42) == AT_LIST) && ATisEmpty(b_42)))
    {
      {
        ATerm i_42 = NULL,k_42 = NULL;
        ATerm h_22;
        h_22 = t;
        {
          ATerm j_42 = NULL;
          t = SSLgetAnnotations(not_null(b_42));
          {
            j_42 = t;
            if(((i_42 != NULL) && (i_42 != j_42)))
              _fail(j_42);
            else
              i_42 = j_42;
          }
        }
        t = h_22;
        {
          ATerm l_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_42));
          {
            l_42 = t;
            if(((k_42 != NULL) && (k_42 != l_42)))
              _fail(l_42);
            else
              k_42 = l_42;
          }
          t = not_null(k_42);
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
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_21, not_null(w_42), not_null(x_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm i_22;
  i_22 = t;
  {
    ATerm k_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_22;
        t = d_77(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = k_22;
        {
        }
      }
  }
  t = i_22;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm f_43 = NULL;
      ATerm q_22;
      q_22 = t;
      {
        ATerm d_43 = NULL;
        ATerm e_43 = NULL;
        e_43 = t;
        if(((d_43 != NULL) && (d_43 != e_43)))
          _fail(e_43);
        else
          d_43 = e_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(d_43));
          t = set_config_0(t);
        }
      }
      t = q_22;
      {
        ATerm g_43 = NULL;
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_43));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm r_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_22 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_23);
            }
          else
            {
              t = y_22;
              {
                t = d_77(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          LocalPopChoice(x_22);
        }
      else
        {
          t = r_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_4, n_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  ATerm c_23;
  c_23 = t;
  {
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
    p_43 = t;
    l_43 :
    if(match_cons(p_43, sym__3))
      {
        q_43 = ATgetArgument(p_43, 0);
        r_43 = ATgetArgument(p_43, 1);
        s_43 = ATgetArgument(p_43, 2);
        {
          if(((m_43 != NULL) && (m_43 != q_43)))
            _fail(q_43);
          else
            m_43 = q_43;
          {
            if(((n_43 != NULL) && (n_43 != r_43)))
              _fail(r_43);
            else
              n_43 = r_43;
            {
              if(((o_43 != NULL) && (o_43 != s_43)))
                _fail(s_43);
              else
                o_43 = s_43;
              t = SSL_table_put(not_null(m_43), not_null(n_43), not_null(o_43));
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
ATerm parse_options_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm v_43 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    t = term_l_23;
    t = table_put_0(t);
  }
  t = d_23;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_77(t);
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm q_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_23;
          s_23 = t;
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_21;
                t = get_config_0(t);
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = s_23;
          {
            t = system_usage_0(t);
            {
              t = term_z_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(r_23);
        }
      else
        {
          t = q_23;
          {
            ATerm b_24 = t;
            int c_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm w_43 = NULL;
                    w_43 = t;
                    if(((v_43 != NULL) && (v_43 != w_43)))
                      _fail(w_43);
                    else
                      v_43 = w_43;
                    return(t);
                  }
                  t = Undefined_1(t, s_4);
                  return(t);
                }
                t = fetch_1(t, p_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_43)), term_d_24);
                    return(t);
                  }
                  t = say_1(t, t_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_17;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(c_24);
              }
            else
              {
                t = b_24;
                {
                }
              }
          }
        }
      {
        ATerm i_24;
        i_24 = t;
        {
          t = term_f_19;
          t = table_destroy_0(t);
        }
        t = i_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  t = parse_options_1(t, z_74);
  {
    t = store_options_0(t);
    {
      t = b_75(t);
      {
        ATerm j_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_75);
            LocalPopChoice(l_24);
          }
        else
          {
            t = j_24;
            {
              ATerm m_24 = t;
              int n_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(n_24);
                }
              else
                {
                  t = m_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  t = option_wrap_4(t, d_75, default_usage_0, _id, e_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_70(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = xtc_io_1(t, n_70);
    return(t);
  }
  t = option_wrap_2(t, w_4, x_4);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm l_70 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, l_70);
  return(t);
}
ATerm io_parse_c_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      t = term_u_24;
      return(t);
    }
    ATerm e_5 (ATerm t)
    {
      ATerm z_43 = NULL;
      ATerm a_44 = NULL;
      t = term_v_24;
      {
        t = xtc_find_0(t);
        {
          a_44 = t;
          if(((z_43 != NULL) && (z_43 != a_44)))
            _fail(a_44);
          else
            z_43 = a_44;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_43)), term_b_25), term_w_24);
      return(t);
    }
    t = xtc_transform_2(t, d_5, e_5);
    {
      ATerm f_5 (ATerm t)
      {
        t = term_c_25;
        return(t);
      }
      t = xtc_transform_1(t, f_5);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, c_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_c_0(t);
  return(t);
}
