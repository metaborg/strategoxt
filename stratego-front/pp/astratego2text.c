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
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_c_24;
ATerm term_h_23;
ATerm term_o_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_v_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_k_13;
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
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_s_9);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_n_10);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_o_5, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_n_10);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_n_10);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_n_10);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm f_70 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm l_55 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm k_55 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm m_55 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm));
ATerm union_1 (ATerm, ATerm i_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm v_55 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm n_70 (ATerm), ATerm o_70 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm d_55 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm e_70 (ATerm));
ATerm assert_1 (ATerm, ATerm z_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm g_49 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_70 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_70 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm u_69 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm v_69 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm crush_2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_76 (ATerm));
ATerm Program_1 (ATerm, ATerm t_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm k_47 (ATerm), ATerm l_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_71 (ATerm));
ATerm map_1 (ATerm, ATerm l_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_76 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_48 (ATerm), ATerm u_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_76 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_76 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm y_69 (ATerm));
ATerm xtc_iowrap_1 (ATerm, ATerm b_70 (ATerm));
ATerm astratego2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, f_70, b_0);
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
ATerm if_verbose5_1 (ATerm t, ATerm l_55 (ATerm))
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
      t = l_55(t);
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
    ATerm h_3 = NULL;
    ATerm i_3 = NULL;
    i_3 = t;
    if(((h_3 != NULL) && (h_3 != i_3)))
      _fail(i_3);
    else
      h_3 = i_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(h_3));
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
ATerm if_verbose4_1 (ATerm t, ATerm k_55 (ATerm))
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
      t = k_55(t);
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
ATerm if_verbose6_1 (ATerm t, ATerm m_55 (ATerm))
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
      t = m_55(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
    {
      i_5 = ATgetFirst((ATermList) h_5);
      j_5 = (ATerm) ATgetNext((ATermList) h_5);
      {
        t = n_66(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm m_5 = NULL;
            m_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(m_5));
              t = m_66(t);
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
ATerm union_1 (ATerm t, ATerm i_66 (ATerm))
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
                      t = HdMember_p__2(t, i_66, r_0);
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
ATerm table_putlist_1 (ATerm t, ATerm v_55 (ATerm))
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
                  t = v_55(t);
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
ATerm xtc_transform_term_2 (ATerm t, ATerm n_70 (ATerm), ATerm o_70 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, n_70, o_70);
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
ATerm fork_and_wait_1 (ATerm t, ATerm d_55 (ATerm))
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
                t = d_55(t);
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
ATerm xtc_command_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm b_11 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm c_11 = NULL;
    t = e_70(t);
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
ATerm assert_1 (ATerm t, ATerm z_70 (ATerm))
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
          t = z_70(t);
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
ATerm obsolete_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    t = n_71(t);
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
ATerm FILE_1 (ATerm t, ATerm g_49 (ATerm))
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
            t = g_49(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm))
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
      t = xtc_transform_file_2(t, g_70, h_70);
    }
  else
    {
      t = i_11;
      t = xtc_transform_term_2(t, g_70, h_70);
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
      ATerm m_16 = NULL,p_16 = NULL;
      ATerm z_11;
      z_11 = t;
      {
        ATerm o_16 = NULL;
        t = SSLgetAnnotations(not_null(k_16));
        {
          o_16 = t;
          if(((m_16 != NULL) && (m_16 != o_16)))
            _fail(o_16);
          else
            m_16 = o_16;
        }
      }
      t = z_11;
      {
        ATerm q_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(m_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
        t = not_null(p_16);
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
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_FILE_1))
    {
      a_17 = ATgetArgument(z_16, 0);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_17 = NULL;
            ATerm d_17 = NULL;
            t = m_0(t);
            {
              d_17 = t;
              {
                if(((c_17 != NULL) && (c_17 != d_17)))
                  _fail(d_17);
                else
                  c_17 = d_17;
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
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), not_null(c_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_17));
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
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
                    ATerm n_12 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm o_12 = t;
                        int p_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(p_12);
                          }
                        else
                          {
                            t = o_12;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = n_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), not_null(f_17));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_17));
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
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
    {
      u_17 = ATgetFirst((ATermList) t_17);
      v_17 = (ATerm) ATgetNext((ATermList) t_17);
      t = not_null(v_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm q_12;
        q_12 = t;
        {
          ATerm n_18 = NULL;
          ATerm o_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(f_18));
          {
            ATerm r_12 = t;
            int t_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(t_12);
              }
            else
              {
                t = r_12;
                t = (ATerm) ATempty;
              }
            {
              o_18 = t;
              if(((n_18 != NULL) && (n_18 != o_18)))
                _fail(o_18);
              else
                n_18 = o_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_18), not_null(f_18), not_null(n_18));
            t = table_put_0(t);
          }
        }
        t = q_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  ATerm w_12;
  w_12 = t;
  {
    ATerm y_18 = NULL;
    ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
    t = w_70(t);
    {
      y_18 = t;
      {
        if(((x_18 != NULL) && (x_18 != y_18)))
          _fail(y_18);
        else
          x_18 = y_18;
        {
          ATerm x_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), term_s_9);
              t = table_get_0(t);
              LocalPopChoice(y_12);
            }
          else
            {
              t = x_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_18 = t;
            u_18 :
            if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
              {
                a_19 = ATgetFirst((ATermList) z_18);
                b_19 = (ATerm) ATgetNext((ATermList) z_18);
                {
                  if(((w_18 != NULL) && (w_18 != a_19)))
                    _fail(a_19);
                  else
                    w_18 = a_19;
                  {
                    if(((v_18 != NULL) && (v_18 != b_19)))
                      _fail(b_19);
                    else
                      v_18 = b_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_18), term_s_9, not_null(v_18));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(w_18);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm h_19 = NULL;
                              h_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(h_19));
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
  t = w_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_remove(not_null(y_19));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_59(t);
      t = l_59(t);
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        t = l_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm f_20 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm g_20 = NULL;
    ATerm h_20 = NULL;
    t = v_70(t);
    {
      g_20 = t;
      {
        if(((f_20 != NULL) && (f_20 != g_20)))
          _fail(g_20);
        else
          f_20 = g_20;
        {
          ATerm i_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_s_9);
          {
            ATerm f_13 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_13);
              }
            else
              {
                t = f_13;
                t = (ATerm) ATempty;
              }
            {
              i_20 = t;
              if(((h_20 != NULL) && (h_20 != i_20)))
                _fail(i_20);
              else
                h_20 = i_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_20), term_s_9, (ATerm) ATinsert(CheckATermList(not_null(h_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = term_w_10;
    return(t);
  }
  t = begin_scope_1(t, r_1);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm h_13;
      h_13 = t;
      {
        ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_13;
            t = table_get_0(t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_20 = t;
          m_20 :
          if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
            {
              q_20 = ATgetFirst((ATermList) p_20);
              r_20 = (ATerm) ATgetNext((ATermList) p_20);
              {
                if(((o_20 != NULL) && (o_20 != q_20)))
                  _fail(q_20);
                else
                  o_20 = q_20;
                {
                  if(((n_20 != NULL) && (n_20 != r_20)))
                    _fail(r_20);
                  else
                    n_20 = r_20;
                  {
                    t = not_null(o_20);
                    {
                      ATerm t_1 (ATerm t)
                      {
                        ATerm l_13 = t;
                        int m_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(m_13);
                          }
                        else
                          {
                            t = l_13;
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
      t = h_13;
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
    t = restore_always_2(t, u_69, s_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm u_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL;
        ATerm v_20 = NULL;
        t = term_a_11;
        {
          t = get_config_0(t);
          {
            v_20 = t;
            if(((u_20 != NULL) && (u_20 != v_20)))
              _fail(v_20);
            else
              u_20 = v_20;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_20));
        LocalPopChoice(z_13);
      }
    else
      {
        t = u_13;
        t = term_f_9;
      }
    {
      t = v_69(t);
      {
        ATerm w_1 (ATerm t)
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_10;
              t = get_config_0(t);
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = term_c_14;
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
    ATerm y_20 = NULL;
    y_20 = t;
    x_20 :
    if(!(match_string(y_20, "-v")))
      {
        if(!(match_string(y_20, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_e_14;
    t = set_config_0(t);
    t = term_f_14;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  t = Option_3(t, x_1, y_1, a_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm b_21 = NULL;
    b_21 = t;
    z_20 :
    if(!(match_string(b_21, "-k")))
      {
        if(!(match_string(b_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm c_21 = NULL;
      ATerm d_21 = NULL;
      t = string_to_int_0(t);
      {
        d_21 = t;
        if(((c_21 != NULL) && (c_21 != d_21)))
          _fail(d_21);
        else
          c_21 = d_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(c_21));
        t = set_config_0(t);
      }
    }
    t = h_14;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_p_14;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  t = SSL_string_to_int(not_null(g_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm t_21 = NULL;
        t_21 = t;
        j_21 :
        if(!(match_string(t_21, "-S")))
          {
            if(!(match_string(t_21, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_t_14;
        t = set_config_0(t);
        t = term_u_14;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_v_14;
        return(t);
      }
      t = Option_3(t, e_2, f_2, g_2);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm u_21 = NULL;
              u_21 = t;
              p_21 :
              if(!(match_string(u_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm x_21 = NULL;
              ATerm e_15;
              e_15 = t;
              {
                ATerm v_21 = NULL;
                ATerm w_21 = NULL;
                t = string_to_int_0(t);
                {
                  w_21 = t;
                  if(((v_21 != NULL) && (v_21 != w_21)))
                    _fail(w_21);
                  else
                    v_21 = w_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_5, not_null(v_21));
                  t = set_config_0(t);
                }
              }
              t = e_15;
              {
                ATerm y_21 = NULL;
                y_21 = t;
                if(((x_21 != NULL) && (x_21 != y_21)))
                  _fail(y_21);
                else
                  x_21 = y_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_21));
              }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_h_15;
              return(t);
            }
            t = ArgOption_3(t, h_2, i_2, j_2);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm k_2 (ATerm t)
              {
                ATerm z_21 = NULL;
                z_21 = t;
                s_21 :
                if(!(match_string(z_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_j_15;
                t = set_config_0(t);
                t = term_k_15;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_l_15;
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
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
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
    ATerm j_22 = NULL;
    j_22 = t;
    c_22 :
    if(!(match_string(j_22, "-o")))
      {
        if(!(match_string(j_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm m_22 = NULL;
    ATerm u_15;
    u_15 = t;
    {
      ATerm k_22 = NULL;
      ATerm l_22 = NULL;
      l_22 = t;
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(k_22));
        t = set_config_0(t);
      }
    }
    t = u_15;
    {
      ATerm n_22 = NULL;
      n_22 = t;
      if(((m_22 != NULL) && (m_22 != n_22)))
        _fail(n_22);
      else
        m_22 = n_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_22));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_v_15;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_15 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = y_15;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm r_22 = NULL;
          r_22 = t;
          q_22 :
          if(!(match_string(r_22, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_f_16;
          t = set_config_0(t);
          t = term_g_16;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_h_16;
          return(t);
        }
        t = Option_3(t, q_2, r_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  x_22 = t;
  v_22 :
  if(match_string(x_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
        {
          y_22 = ATgetFirst((ATermList) x_22);
          z_22 = (ATerm) ATgetNext((ATermList) x_22);
          w_22 :
          if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
            {
              a_23 = ATgetFirst((ATermList) z_22);
              b_23 = (ATerm) ATgetNext((ATermList) z_22);
              {
                ATerm f_23 = NULL;
                ATerm i_16;
                i_16 = t;
                {
                  t = not_null(y_22);
                  t = j_0(t);
                }
                t = i_16;
                {
                  ATerm g_23 = NULL;
                  t = not_null(a_23);
                  {
                    t = k_0(t);
                    {
                      g_23 = t;
                      if(((f_23 != NULL) && (f_23 != g_23)))
                        _fail(g_23);
                      else
                        f_23 = g_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_23)), not_null(f_23));
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
    ATerm n_23 = NULL;
    n_23 = t;
    k_23 :
    if(!(match_string(n_23, "-i")))
      {
        if(!(match_string(n_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm q_23 = NULL;
    ATerm l_16;
    l_16 = t;
    {
      ATerm o_23 = NULL;
      ATerm p_23 = NULL;
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(o_23));
        t = set_config_0(t);
      }
    }
    t = l_16;
    {
      ATerm r_23 = NULL;
      r_23 = t;
      if(((q_23 != NULL) && (q_23 != r_23)))
        _fail(r_23);
      else
        q_23 = r_23;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_23));
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_n_16;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_23 = NULL;
  ATerm v_16;
  v_16 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm x_23 = NULL,y_23 = NULL;
      x_23 = t;
      v_23 :
      if(match_cons(x_23, sym_Program_1))
        {
          y_23 = ATgetArgument(x_23, 0);
          if(((w_23 != NULL) && (w_23 != y_23)))
            _fail(y_23);
          else
            w_23 = y_23;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_16), not_null(w_23)), term_w_16));
      {
        t = printnl_0(t);
        {
          t = term_b_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_e_17));
  {
    t = printnl_0(t);
    {
      t = term_b_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  t = SSL_TicksToSeconds(not_null(b_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym__2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_24), not_null(i_24));
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = SSL_addr(not_null(h_24), not_null(i_24));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_66(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
        p_24 = t;
        o_24 :
        if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
          {
            q_24 = ATgetFirst((ATermList) p_24);
            r_24 = (ATerm) ATgetNext((ATermList) p_24);
            {
              ATerm u_24 = NULL;
              ATerm v_24 = NULL;
              t = not_null(r_24);
              {
                t = foldr_2(t, z_66, a_67);
                {
                  v_24 = t;
                  if(((u_24 != NULL) && (u_24 != v_24)))
                    _fail(v_24);
                  else
                    u_24 = v_24;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), not_null(u_24));
                t = a_67(t);
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
ATerm crush_2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm c_25 = NULL;
  ATerm e_25 = NULL;
  c_25 = t;
  {
    ATerm f_25 = NULL;
    ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
    t = not_null(c_25);
    {
      f_25 = t;
      {
        t = SSL_explode_term(not_null(f_25));
        {
          h_25 = t;
          b_25 :
          if(match_cons(h_25, sym__2))
            {
              i_25 = ATgetArgument(h_25, 0);
              j_25 = ATgetArgument(h_25, 1);
              if(((e_25 != NULL) && (e_25 != j_25)))
                _fail(j_25);
              else
                e_25 = j_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_25);
      t = foldr_2(t, x_65, y_65);
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
      t = term_s_14;
      return(t);
    }
    t = crush_2(t, z_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym__2))
    {
      q_25 = ATgetArgument(p_25, 0);
      r_25 = ATgetArgument(p_25, 1);
      {
        ATerm l_17;
        l_17 = t;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_25), not_null(r_25));
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = SSL_gtr(not_null(q_25), not_null(r_25));
            }
        }
        t = l_17;
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
  ATerm x_25 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
      y_25 = t;
      w_25 :
      if(match_cons(y_25, sym__2))
        {
          z_25 = ATgetArgument(y_25, 0);
          a_26 = ATgetArgument(y_25, 1);
          {
            if(((x_25 != NULL) && (x_25 != z_25)))
              _fail(z_25);
            else
              x_25 = z_25;
            if(((x_25 != NULL) && (x_25 != a_26)))
              _fail(a_26);
            else
              x_25 = a_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17;
      w_17 = t;
      {
        ATerm d_26 = NULL;
        ATerm e_26 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            e_26 = t;
            if(((d_26 != NULL) && (d_26 != e_26)))
              _fail(e_26);
            else
              d_26 = e_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_26), term_b_17);
          t = geq_0(t);
        }
      }
      t = w_17;
      t = h_55(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm i_26 = NULL,k_26 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm j_26 = NULL;
      t = run_time_0(t);
      {
        j_26 = t;
        if(((i_26 != NULL) && (i_26 != j_26)))
          _fail(j_26);
        else
          i_26 = j_26;
      }
    }
    t = x_17;
    {
      ATerm l_26 = NULL;
      t = term_y_17;
      {
        t = get_config_0(t);
        {
          l_26 = t;
          if(((k_26 != NULL) && (k_26 != l_26)))
            _fail(l_26);
          else
            k_26 = l_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_18), not_null(i_26)), term_z_17), not_null(k_26)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  {
    t = term_s_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Version_0))
    {
      ATerm v_26 = NULL,x_26 = NULL;
      ATerm b_18;
      b_18 = t;
      {
        ATerm w_26 = NULL;
        t = SSLgetAnnotations(not_null(s_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
      }
      t = b_18;
      {
        ATerm y_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_26));
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
        t = not_null(x_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_3);
  t = f_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  t = SSL_table_create(not_null(i_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  {
    ATerm k_18;
    k_18 = t;
    {
      t = term_l_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_18, term_m_18, not_null(m_27));
          t = table_put_0(t);
        }
      }
    }
    t = k_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_table_destroy(not_null(q_27));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_exit(not_null(u_27));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(((ATgetType(a_28) == AT_LIST) && ATisEmpty(a_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
        {
          b_28 = ATgetFirst((ATermList) a_28);
          c_28 = (ATerm) ATgetNext((ATermList) a_28);
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
    ATerm f_28 = NULL;
    ATerm i_28 = NULL;
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm g_28 = NULL;
          ATerm h_28 = NULL;
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
          t = (ATerm) ATinsert(ATempty, not_null(g_28));
        }
      }
    {
      i_28 = t;
      if(((f_28 != NULL) && (f_28 != i_28)))
        _fail(i_28);
      else
        f_28 = i_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_14, not_null(f_28));
      t = printnl_0(t);
    }
  }
  t = p_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  t_28 = t;
  q_28 :
  if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
    {
      r_28 = ATgetFirst((ATermList) t_28);
      s_28 = (ATerm) ATgetNext((ATermList) t_28);
      {
        ATerm w_28 = NULL;
        t = not_null(s_28);
        {
          ATerm s_18;
          s_18 = t;
          {
            ATerm x_28 = NULL,z_28 = NULL,b_29 = NULL;
            ATerm t_18;
            t_18 = t;
            {
              ATerm y_28 = NULL;
              t = i_0(t);
              {
                y_28 = t;
                if(((x_28 != NULL) && (x_28 != y_28)))
                  _fail(y_28);
                else
                  x_28 = y_28;
              }
            }
            t = t_18;
            {
              ATerm a_29 = NULL;
              t = not_null(r_28);
              {
                t = h_0(t);
                {
                  a_29 = t;
                  if(((z_28 != NULL) && (z_28 != a_29)))
                    _fail(a_29);
                  else
                    z_28 = a_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_28)), not_null(z_28));
                {
                  b_29 = t;
                  if(((w_28 != NULL) && (w_28 != b_29)))
                    _fail(b_29);
                  else
                    w_28 = b_29;
                }
              }
            }
          }
          t = s_18;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(w_28);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_28) == AT_LIST) && ATisEmpty(t_28)))
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
ATerm short_description_1 (ATerm t, ATerm m_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL;
  o_29 = t;
  n_29 :
  if(match_cons(o_29, sym_Program_1))
    {
      p_29 = ATgetArgument(o_29, 0);
      {
        ATerm s_29 = NULL,z_29 = NULL;
        ATerm y_29 = NULL;
        t = SSLgetAnnotations(not_null(o_29));
        {
          y_29 = t;
          if(((s_29 != NULL) && (s_29 != y_29)))
            _fail(y_29);
          else
            s_29 = y_29;
        }
        {
          t = not_null(p_29);
          {
            ATerm b_30 = NULL;
            t = t_53(t);
            {
              z_29 = t;
              {
                ATerm e_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_29)), not_null(s_29));
                {
                  e_30 = t;
                  if(((b_30 != NULL) && (b_30 != e_30)))
                    _fail(e_30);
                  else
                    b_30 = e_30;
                }
                t = not_null(b_30);
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
  ATerm o_30 = NULL;
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL;
      t = term_y_17;
      {
        t = get_config_0(t);
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
      }
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm z_30 = NULL;
            z_30 = t;
            if(((o_30 != NULL) && (o_30 != z_30)))
              _fail(z_30);
            else
              o_30 = z_30;
            return(t);
          }
          t = Program_1(t, j_3);
          return(t);
        }
        t = fetch_1(t, g_3);
      }
    }
  {
    t = term_e_19;
    {
      t = echo_0(t);
      {
        t = term_i_19;
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
                ATerm a_31 = NULL;
                ATerm c_31 = NULL;
                c_31 = t;
                if(((a_31 != NULL) && (a_31 != c_31)))
                  _fail(c_31);
                else
                  a_31 = c_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_31)), term_j_19);
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
  ATerm k_19;
  k_19 = t;
  {
    ATerm x_31 = NULL;
    ATerm y_31 = NULL;
    y_31 = t;
    if(((x_31 != NULL) && (x_31 != y_31)))
      _fail(y_31);
    else
      x_31 = y_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(x_31)));
      t = printnl_0(t);
    }
  }
  t = k_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm l_19;
  l_19 = t;
  {
    t = h_71(t);
    t = debug_0(t);
  }
  t = l_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL;
  l_32 = t;
  i_32 :
  if(match_cons(l_32, sym_Undefined_1))
    {
      m_32 = ATgetArgument(l_32, 0);
      {
        ATerm s_32 = NULL,u_32 = NULL;
        ATerm t_32 = NULL;
        t = SSLgetAnnotations(not_null(l_32));
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
        {
          t = not_null(m_32);
          {
            ATerm w_32 = NULL;
            t = u_53(t);
            {
              u_32 = t;
              {
                ATerm x_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_32)), not_null(s_32));
                {
                  x_32 = t;
                  if(((w_32 != NULL) && (w_32 != x_32)))
                    _fail(x_32);
                  else
                    w_32 = x_32;
                }
                t = not_null(w_32);
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
ATerm fetch_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm c_33 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_60, _id);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = Cons_2(t, _id, c_33);
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_75 (ATerm))
{
  t = fetch_1(t, m_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym_Help_0))
    {
      ATerm j_33 = NULL,l_33 = NULL;
      ATerm o_19;
      o_19 = t;
      {
        ATerm k_33 = NULL;
        t = SSLgetAnnotations(not_null(h_33));
        {
          k_33 = t;
          if(((j_33 != NULL) && (j_33 != k_33)))
            _fail(k_33);
          else
            j_33 = k_33;
        }
      }
      t = o_19;
      {
        ATerm m_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_33));
        {
          m_33 = t;
          if(((l_33 != NULL) && (l_33 != m_33)))
            _fail(m_33);
          else
            l_33 = m_33;
        }
        t = not_null(l_33);
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
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_implode_string(not_null(r_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
        w_33 = t;
        v_33 :
        if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
          {
            x_33 = ATgetFirst((ATermList) w_33);
            y_33 = (ATerm) ATgetNext((ATermList) w_33);
            {
              t = not_null(x_33);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(y_33);
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
  ATerm i_34 = NULL;
  ATerm k_34 = NULL;
  i_34 = t;
  {
    ATerm l_34 = NULL;
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
    t = not_null(i_34);
    {
      l_34 = t;
      {
        t = SSL_explode_term(not_null(l_34));
        {
          n_34 = t;
          g_34 :
          if(match_cons(n_34, sym__2))
            {
              o_34 = ATgetArgument(n_34, 0);
              p_34 = ATgetArgument(n_34, 1);
              h_34 :
              if(match_string(o_34, ""))
                {
                  if(((k_34 != NULL) && (k_34 != p_34)))
                    _fail(p_34);
                  else
                    k_34 = p_34;
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
      t = not_null(k_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm t_34 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_34);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          t = Nil_0(t);
          t = a_61(t);
        }
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  v_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      {
        t = not_null(x_34);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(y_34);
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
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_explode_string(not_null(d_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      {
        ATerm s_35 = NULL,u_35 = NULL;
        ATerm t_35 = NULL;
        t = SSLgetAnnotations(not_null(m_35));
        {
          t_35 = t;
          if(((s_35 != NULL) && (s_35 != t_35)))
            _fail(t_35);
          else
            s_35 = t_35;
        }
        {
          t = not_null(n_35);
          {
            ATerm w_35 = NULL;
            t = k_47(t);
            {
              u_35 = t;
              {
                t = not_null(o_35);
                {
                  ATerm y_35 = NULL;
                  t = l_47(t);
                  {
                    w_35 = t;
                    {
                      ATerm z_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_35), not_null(w_35)), not_null(s_35));
                      {
                        z_35 = t;
                        if(((y_35 != NULL) && (y_35 != z_35)))
                          _fail(z_35);
                        else
                          y_35 = z_35;
                      }
                      t = not_null(y_35);
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
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym__2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      {
        ATerm x_19;
        x_19 = t;
        t = SSL_printnl(not_null(i_36), not_null(j_36));
        t = x_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm z_19;
  z_19 = t;
  {
    ATerm p_36 = NULL,r_36 = NULL;
    ATerm a_20;
    a_20 = t;
    {
      ATerm q_36 = NULL;
      t = g_71(t);
      {
        q_36 = t;
        if(((p_36 != NULL) && (p_36 != q_36)))
          _fail(q_36);
        else
          p_36 = q_36;
      }
    }
    t = a_20;
    {
      ATerm s_36 = NULL;
      s_36 = t;
      if(((r_36 != NULL) && (r_36 != s_36)))
        _fail(s_36);
      else
        r_36 = s_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_36)), not_null(p_36)));
        t = printnl_0(t);
      }
    }
  }
  t = z_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm v_36 (ATerm t)
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = Cons_2(t, l_60, v_36);
      }
    return(t);
  }
  t = v_36(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = SSL_is_string(not_null(x_36));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm l_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = l_20;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, y_3);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
              j_37 = t;
              i_37 :
              if(match_cons(j_37, sym_Path_1))
                {
                  k_37 = ATgetArgument(j_37, 0);
                  t = not_null(k_37);
                }
              else
                {
                  if(match_cons(j_37, sym_Var_1))
                    {
                      k_37 = ATgetArgument(j_37, 0);
                      {
                        t = not_null(k_37);
                        {
                          ATerm t_20 = t;
                          int w_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_20);
                            }
                          else
                            {
                              t = t_20;
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = term_a_21;
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
                      if(match_cons(j_37, sym_Prefix_2))
                        {
                          k_37 = ATgetArgument(j_37, 0);
                          l_37 = ATgetArgument(j_37, 1);
                          {
                            ATerm q_37 = NULL,s_37 = NULL;
                            ATerm e_21;
                            e_21 = t;
                            {
                              ATerm r_37 = NULL;
                              t = not_null(k_37);
                              {
                                t = eval_config_0(t);
                                {
                                  r_37 = t;
                                  if(((q_37 != NULL) && (q_37 != r_37)))
                                    _fail(r_37);
                                  else
                                    q_37 = r_37;
                                }
                              }
                            }
                            t = e_21;
                            {
                              ATerm t_37 = NULL;
                              t = not_null(l_37);
                              {
                                t = eval_config_0(t);
                                {
                                  t_37 = t;
                                  if(((s_37 != NULL) && (s_37 != t_37)))
                                    _fail(t_37);
                                  else
                                    s_37 = t_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_37), not_null(s_37));
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
  ATerm c_38 = NULL;
  c_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(c_38));
    {
      t = table_get_0(t);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm k_21;
              k_21 = t;
              {
                ATerm e_38 = NULL;
                ATerm f_38 = NULL;
                f_38 = t;
                if(((e_38 != NULL) && (e_38 != f_38)))
                  _fail(f_38);
                else
                  e_38 = f_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_21, not_null(c_38), not_null(e_38));
                  t = table_put_0(t);
                }
              }
              t = k_21;
            }
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_59(t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym__2))
    {
      n_38 = ATgetArgument(m_38, 0);
      o_38 = ATgetArgument(m_38, 1);
      t = SSL_table_get(not_null(n_38), not_null(o_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym__3))
    {
      w_38 = ATgetArgument(v_38, 0);
      x_38 = ATgetArgument(v_38, 1);
      y_38 = ATgetArgument(v_38, 2);
      {
        ATerm n_21;
        n_21 = t;
        {
          ATerm c_39 = NULL;
          ATerm d_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_38), not_null(x_38));
          {
            ATerm o_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_21);
              }
            else
              {
                t = o_21;
                t = (ATerm) ATempty;
              }
            {
              d_39 = t;
              if(((c_39 != NULL) && (c_39 != d_39)))
                _fail(d_39);
              else
                c_39 = d_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_38), not_null(x_38), (ATerm) ATinsert(CheckATermList(not_null(c_39)), not_null(y_38)));
            t = table_put_0(t);
          }
        }
        t = n_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm j_39 = NULL;
  ATerm k_39 = NULL;
  t = term_n_10;
  {
    t = r_76(t);
    {
      k_39 = t;
      if(((j_39 != NULL) && (j_39 != k_39)))
        _fail(k_39);
      else
        j_39 = k_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, not_null(j_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_string(s_39, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
        {
          t_39 = ATgetFirst((ATermList) s_39);
          u_39 = (ATerm) ATgetNext((ATermList) s_39);
          {
            ATerm x_39 = NULL;
            ATerm r_21;
            r_21 = t;
            {
              t = not_null(t_39);
              t = a_0(t);
            }
            t = r_21;
            {
              ATerm y_39 = NULL;
              t = term_n_10;
              {
                t = d_0(t);
                {
                  y_39 = t;
                  if(((x_39 != NULL) && (x_39 != y_39)))
                    _fail(y_39);
                  else
                    x_39 = y_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_39)), not_null(x_39));
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
    ATerm d_40 = NULL;
    d_40 = t;
    c_40 :
    if(!(match_string(d_40, "--help")))
      {
        if(!(match_string(d_40, "-h")))
          {
            if(!(match_string(d_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_b_22;
    {
      t = set_config_0(t);
      t = term_d_22;
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_e_22;
    return(t);
  }
  t = Option_3(t, a_4, b_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(((ATgetType(g_40) == AT_LIST) && !(ATisEmpty(g_40))))
    {
      h_40 = ATgetFirst((ATermList) g_40);
      i_40 = (ATerm) ATgetNext((ATermList) g_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
    {
      t_40 = ATgetFirst((ATermList) s_40);
      u_40 = (ATerm) ATgetNext((ATermList) s_40);
      {
        ATerm y_40 = NULL,a_41 = NULL;
        ATerm z_40 = NULL;
        t = SSLgetAnnotations(not_null(s_40));
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
        {
          t = not_null(t_40);
          {
            ATerm c_41 = NULL;
            t = t_48(t);
            {
              a_41 = t;
              {
                t = not_null(u_40);
                {
                  ATerm e_41 = NULL;
                  t = u_48(t);
                  {
                    c_41 = t;
                    {
                      ATerm f_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_41)), not_null(a_41)), not_null(y_40));
                      {
                        f_41 = t;
                        if(((e_41 != NULL) && (e_41 != f_41)))
                          _fail(f_41);
                        else
                          e_41 = f_41;
                      }
                      t = not_null(e_41);
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
  ATerm r_41 = NULL;
  r_41 = t;
  q_41 :
  if(((ATgetType(r_41) == AT_LIST) && ATisEmpty(r_41)))
    {
      {
        ATerm y_41 = NULL,a_42 = NULL;
        ATerm f_22;
        f_22 = t;
        {
          ATerm z_41 = NULL;
          t = SSLgetAnnotations(not_null(r_41));
          {
            z_41 = t;
            if(((y_41 != NULL) && (y_41 != z_41)))
              _fail(z_41);
            else
              y_41 = z_41;
          }
        }
        t = f_22;
        {
          ATerm b_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_41));
          {
            b_42 = t;
            if(((a_42 != NULL) && (a_42 != b_42)))
              _fail(b_42);
            else
              a_42 = b_42;
          }
          t = not_null(a_42);
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
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym__2))
    {
      m_42 = ATgetArgument(l_42, 0);
      n_42 = ATgetArgument(l_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_21, not_null(m_42), not_null(n_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm g_22;
  g_22 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_22;
        t = p_76(t);
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
    ATerm i_4 (ATerm t)
    {
      ATerm v_42 = NULL;
      ATerm p_22;
      p_22 = t;
      {
        ATerm t_42 = NULL;
        ATerm u_42 = NULL;
        u_42 = t;
        if(((t_42 != NULL) && (t_42 != u_42)))
          _fail(u_42);
        else
          t_42 = u_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(t_42));
          t = set_config_0(t);
        }
      }
      t = p_22;
      {
        ATerm w_42 = NULL;
        w_42 = t;
        if(((v_42 != NULL) && (v_42 != w_42)))
          _fail(w_42);
        else
          v_42 = w_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_42));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_22 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_23);
            }
          else
            {
              t = u_22;
              {
                t = p_76(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
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
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
    f_43 = t;
    b_43 :
    if(match_cons(f_43, sym__3))
      {
        g_43 = ATgetArgument(f_43, 0);
        h_43 = ATgetArgument(f_43, 1);
        i_43 = ATgetArgument(f_43, 2);
        {
          if(((c_43 != NULL) && (c_43 != g_43)))
            _fail(g_43);
          else
            c_43 = g_43;
          {
            if(((d_43 != NULL) && (d_43 != h_43)))
              _fail(h_43);
            else
              d_43 = h_43;
            {
              if(((e_43 != NULL) && (e_43 != i_43)))
                _fail(i_43);
              else
                e_43 = i_43;
              t = SSL_table_put(not_null(c_43), not_null(d_43), not_null(e_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm l_43 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    t = term_h_23;
    t = table_put_0(t);
  }
  t = e_23;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_76(t);
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_23;
          s_23 = t;
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_22;
                t = get_config_0(t);
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = s_23;
          {
            t = system_usage_0(t);
            {
              t = term_s_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm m_43 = NULL;
                    m_43 = t;
                    if(((l_43 != NULL) && (l_43 != m_43)))
                      _fail(m_43);
                    else
                      l_43 = m_43;
                    return(t);
                  }
                  t = Undefined_1(t, s_4);
                  return(t);
                }
                t = fetch_1(t, p_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_43)), term_c_24);
                    return(t);
                  }
                  t = say_1(t, t_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_17;
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
        ATerm d_24;
        d_24 = t;
        {
          t = term_f_19;
          t = table_destroy_0(t);
        }
        t = d_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  t = parse_options_1(t, l_74);
  {
    t = store_options_0(t);
    {
      t = n_74(t);
      {
        ATerm e_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_74);
            LocalPopChoice(j_24);
          }
        else
          {
            t = e_24;
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  t = option_wrap_4(t, p_74, default_usage_0, _id, q_74);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_69(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = xtc_io_1(t, a_70);
    return(t);
  }
  t = option_wrap_2(t, w_4, x_4);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm y_69 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, y_69);
  return(t);
}
ATerm xtc_iowrap_1 (ATerm t, ATerm b_70 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, b_70);
  return(t);
}
ATerm astratego2text_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      t = term_s_24;
      return(t);
    }
    ATerm e_5 (ATerm t)
    {
      ATerm p_43 = NULL;
      ATerm q_43 = NULL;
      t = term_t_24;
      {
        t = xtc_find_0(t);
        {
          q_43 = t;
          if(((p_43 != NULL) && (p_43 != q_43)))
            _fail(q_43);
          else
            p_43 = q_43;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_43)), term_w_24);
      return(t);
    }
    t = xtc_transform_2(t, d_5, e_5);
    {
      ATerm f_5 (ATerm t)
      {
        t = term_x_24;
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
  t = astratego2text_0(t);
  return(t);
}
