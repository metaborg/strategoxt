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
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_c_24;
ATerm term_g_23;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_d_21;
ATerm term_w_20;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_x_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_k_13;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_r_6;
ATerm term_n_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_o_5;
ATerm term_n_5;
void init_constant_terms (void)
{
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_z_5);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_m_7);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_r_9);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_m_10);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_n_5, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_m_10);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_m_10);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_f_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_m_10);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__3, term_e_19, term_f_19, (ATerm) ATempty);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2text", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
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
ATerm xtc_transform_1 (ATerm, ATerm f_70 (ATerm));
ATerm debug_0 (ATerm);
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
ATerm pp_stratego_0 (ATerm);
ATerm main_0 (ATerm);
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
      ATerm b_0 (ATerm t)
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
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5;
      m_5 = t;
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
      t = m_5;
      t = l_55(t);
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
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, not_null(h_3));
      t = printnl_0(t);
    }
  }
  t = p_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm o_3 = NULL;
  ATerm q_3 = NULL,r_3 = NULL;
  o_3 = t;
  {
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_3)));
    {
      t = table_get_0(t);
      {
        s_3 = t;
        m_3 :
        if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
          {
            t_3 = ATgetFirst((ATermList) s_3);
            w_3 = (ATerm) ATgetNext((ATermList) s_3);
            n_3 :
            if(match_cons(t_3, sym__2))
              {
                u_3 = ATgetArgument(t_3, 0);
                v_3 = ATgetArgument(t_3, 1);
                {
                  if(((q_3 != NULL) && (q_3 != u_3)))
                    _fail(u_3);
                  else
                    q_3 = u_3;
                  if(((r_3 != NULL) && (r_3 != v_3)))
                    _fail(v_3);
                  else
                    r_3 = v_3;
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
    t = not_null(r_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
  d_4 = t;
  c_4 :
  if(match_cons(d_4, sym__2))
    {
      e_4 = ATgetArgument(d_4, 0);
      f_4 = ATgetArgument(d_4, 1);
      {
        ATerm i_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_4)));
        {
          t = table_get_0(t);
          {
            ATerm c_0 (ATerm t)
            {
              ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
              j_4 = t;
              b_4 :
              if(match_cons(j_4, sym__2))
                {
                  k_4 = ATgetArgument(j_4, 0);
                  l_4 = ATgetArgument(j_4, 1);
                  {
                    if(((f_4 != NULL) && (f_4 != k_4)))
                      _fail(k_4);
                    else
                      f_4 = k_4;
                    if(((i_4 != NULL) && (i_4 != l_4)))
                      _fail(l_4);
                    else
                      i_4 = l_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, c_0);
          }
        }
        t = not_null(i_4);
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
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_6;
      {
        t = table_get_0(t);
        {
          ATerm f_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, f_0);
        }
      }
      LocalPopChoice(y_5);
    }
  else
    {
      t = w_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6;
      i_6 = t;
      {
        ATerm p_4 = NULL;
        ATerm q_4 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_n_6);
          t = geq_0(t);
        }
      }
      t = i_6;
      t = k_55(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6;
      q_6 = t;
      {
        ATerm t_4 = NULL;
        ATerm u_4 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            u_4 = t;
            if(((t_4 != NULL) && (t_4 != u_4)))
              _fail(u_4);
            else
              t_4 = u_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), term_r_6);
          t = geq_0(t);
        }
      }
      t = q_6;
      t = m_55(t);
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
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      if(((z_4 != NULL) && (z_4 != a_5)))
        _fail(a_5);
      else
        z_4 = a_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(((ATgetType(g_5) == AT_LIST) && !(ATisEmpty(g_5))))
    {
      h_5 = ATgetFirst((ATermList) g_5);
      i_5 = (ATerm) ATgetNext((ATermList) g_5);
      {
        t = n_66(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm l_5 = NULL;
            l_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(l_5));
              t = m_66(t);
            }
            return(t);
          }
          t = fetch_1(t, p_0);
        }
        t = not_null(i_5);
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
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym__2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        t = not_null(s_5);
        {
          ATerm x_5 (ATerm t)
          {
            ATerm x_6 = t;
            int y_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_5);
                LocalPopChoice(y_6);
              }
            else
              {
                t = x_6;
                {
                  ATerm c_7 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(t_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_66, q_0);
                      t = x_5(t);
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = c_7;
                      t = Cons_2(t, _id, x_5);
                    }
                }
              }
            return(t);
          }
          t = x_5(t);
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
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym__3))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      f_6 = ATgetArgument(c_6, 2);
      {
        ATerm e_7;
        e_7 = t;
        {
          ATerm j_6 = NULL;
          ATerm k_6 = NULL,m_6 = NULL;
          ATerm l_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(e_6));
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
              l_6 = t;
              if(((k_6 != NULL) && (k_6 != l_6)))
                _fail(l_6);
              else
                k_6 = l_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_6), not_null(f_6));
            {
              t = union_1(t, eq_0);
              {
                m_6 = t;
                if(((j_6 != NULL) && (j_6 != m_6)))
                  _fail(m_6);
                else
                  j_6 = m_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_6), not_null(e_6), not_null(j_6));
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
ATerm table_putlist_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym__2))
    {
      v_6 = ATgetArgument(u_6, 0);
      w_6 = ATgetArgument(u_6, 1);
      {
        t = not_null(w_6);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
            z_6 = t;
            s_6 :
            if(match_cons(z_6, sym__2))
              {
                a_7 = ATgetArgument(z_6, 0);
                b_7 = ATgetArgument(z_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_6), not_null(a_7), not_null(b_7));
                  t = v_55(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_0);
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
  ATerm i_7 = NULL;
  ATerm k_7 = NULL;
  i_7 = t;
  {
    ATerm h_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_7;
      }
    {
      ATerm j_7;
      j_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_5, term_m_7, (ATerm) ATinsert(ATempty, not_null(i_7)));
        t = table_put_0(t);
      }
      t = j_7;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm t_0 (ATerm t)
          {
            t = term_n_7;
            return(t);
          }
          t = debug_1(t, t_0);
          return(t);
        }
        t = if_verbose4_1(t, s_0);
        {
          ATerm o_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(q_7);
            }
          else
            {
              t = o_7;
              t = (ATerm) ATempty;
            }
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_r_7;
                return(t);
              }
              t = say_1(t, v_0);
              return(t);
            }
            t = if_verbose6_1(t, u_0);
            {
              ATerm l_7 = NULL;
              l_7 = t;
              if(((k_7 != NULL) && (k_7 != l_7)))
                _fail(l_7);
              else
                k_7 = l_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(k_7));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm x_0 (ATerm t)
                      {
                        t = term_s_7;
                        return(t);
                      }
                      t = say_1(t, x_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, w_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_v_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_7)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm z_0 (ATerm t)
                            {
                              t = term_r_7;
                              return(t);
                            }
                            t = say_1(t, z_0);
                            return(t);
                          }
                          t = if_verbose4_1(t, y_0);
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
  ATerm p_7 = NULL;
  p_7 = t;
  t = SSL_getenv(not_null(p_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_7;
      t = get_config_0(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
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
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      t = term_c_8;
      return(t);
    }
    t = debug_1(t, b_1);
    return(t);
  }
  t = if_verbose5_1(t, a_1);
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm j_8 = t;
      int m_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_8;
          t = table_get_0(t);
          LocalPopChoice(m_8);
        }
      else
        {
          t = j_8;
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
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          t = term_o_8;
          return(t);
        }
        t = debug_1(t, d_1);
        return(t);
      }
      t = if_verbose5_1(t, c_1);
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
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = term_v_8;
          return(t);
        }
        t = debug_1(t, f_1);
        return(t);
      }
      t = if_verbose5_1(t, e_1);
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
            ATerm g_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = term_v_8;
                return(t);
              }
              t = debug_1(t, h_1);
              return(t);
            }
            t = if_verbose5_1(t, g_1);
          }
        }
      }
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm t_7 = NULL;
        ATerm u_7 = NULL;
        u_7 = t;
        if(((t_7 != NULL) && (t_7 != u_7)))
          _fail(u_7);
        else
          t_7 = u_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), not_null(t_7)), term_y_8);
          {
            t = error_0(t);
            {
              ATerm i_1 (ATerm t)
              {
                t = term_v_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      t = term_b_9;
                      return(t);
                    }
                    t = debug_1(t, k_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, i_1);
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
  ATerm x_7 = NULL;
  x_7 = t;
  t = SSL_ReadFromFile(not_null(x_7));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_stdin_0))
    {
      ATerm h_8 = NULL;
      ATerm i_8 = NULL;
      t = term_e_9;
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
  else
    {
      if(match_cons(f_8, sym_FILE_1))
        {
          g_8 = ATgetArgument(f_8, 0);
          {
            ATerm k_8 = NULL;
            ATerm l_8 = NULL;
            t = not_null(g_8);
            {
              t = ReadFromFile_0(t);
              {
                l_8 = t;
                if(((k_8 != NULL) && (k_8 != l_8)))
                  _fail(l_8);
                else
                  k_8 = l_8;
              }
            }
            t = not_null(k_8);
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
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym__2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      t = SSL_WriteToBinaryFile(not_null(t_8), not_null(u_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_9 = NULL;
  ATerm c_9 = NULL;
  a_9 = t;
  {
    ATerm d_9 = NULL;
    t = xtc_new_file_0(t);
    {
      d_9 = t;
      {
        if(((c_9 != NULL) && (c_9 != d_9)))
          _fail(d_9);
        else
          c_9 = d_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(a_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_9));
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
  ATerm h_9 = NULL;
  h_9 = t;
  t = SSL_close_file(not_null(h_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      t = SSL_execvp(not_null(n_9), not_null(o_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  t = SSL_waitpid(not_null(t_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm d_10 = NULL;
  ATerm f_10 = NULL;
  d_10 = t;
  {
    t = fork_0(t);
    {
      f_10 = t;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_10 = NULL;
            h_10 = t;
            z_9 :
            if(match_int(h_10, 0))
              {
                t = not_null(d_10);
                t = d_55(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
              t = not_null(f_10);
              {
                t = waitpid_0(t);
                {
                  i_10 = t;
                  b_10 :
                  if(match_cons(i_10, sym_WaitStatus_3))
                    {
                      j_10 = ATgetArgument(i_10, 0);
                      k_10 = ATgetArgument(i_10, 1);
                      l_10 = ATgetArgument(i_10, 2);
                      c_10 :
                      if(match_int(j_10, 0))
                        {
                          t = not_null(d_10);
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
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym__2))
    {
      t_10 = ATgetArgument(s_10, 0);
      u_10 = ATgetArgument(s_10, 1);
      {
        ATerm l_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(u_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, l_1);
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
  ATerm a_11 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm b_11 = NULL;
    t = e_70(t);
    {
      t = xtc_find_0(t);
      {
        b_11 = t;
        if(((a_11 != NULL) && (a_11 != b_11)))
          _fail(b_11);
        else
          a_11 = b_11;
      }
    }
  }
  t = i_9;
  {
    ATerm j_9;
    j_9 = t;
    {
      ATerm c_11 = NULL;
      ATerm d_11 = NULL;
      d_11 = t;
      if(((c_11 != NULL) && (c_11 != d_11)))
        _fail(d_11);
      else
        c_11 = d_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(c_11));
        t = call_0(t);
      }
    }
    t = j_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
        ATerm k_9;
        k_9 = t;
        {
          ATerm t_11 = NULL;
          ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
          t = z_70(t);
          {
            t_11 = t;
            {
              if(((q_11 != NULL) && (q_11 != t_11)))
                _fail(t_11);
              else
                q_11 = t_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_11), not_null(m_11), not_null(n_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_9 = t;
                    int q_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_r_9);
                        t = table_get_0(t);
                        LocalPopChoice(q_9);
                      }
                    else
                      {
                        t = p_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_11 = t;
                      j_11 :
                      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
                        {
                          v_11 = ATgetFirst((ATermList) u_11);
                          w_11 = (ATerm) ATgetNext((ATermList) u_11);
                          {
                            if(((r_11 != NULL) && (r_11 != v_11)))
                              _fail(v_11);
                            else
                              r_11 = v_11;
                            {
                              if(((s_11 != NULL) && (s_11 != w_11)))
                                _fail(w_11);
                              else
                                s_11 = w_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_11), term_r_9, (ATerm) ATinsert(CheckATermList(not_null(s_11)), (ATerm) ATinsert(CheckATermList(not_null(r_11)), not_null(m_11))));
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
ATerm obsolete_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm s_9;
  s_9 = t;
  {
    t = n_71(t);
    {
      ATerm m_1 (ATerm t)
      {
        t = term_u_9;
        return(t);
      }
      t = debug_1(t, m_1);
    }
  }
  t = s_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
      g_12 = t;
      b_12 :
      if(match_cons(g_12, sym__2))
        {
          h_12 = ATgetArgument(g_12, 0);
          i_12 = ATgetArgument(g_12, 1);
          {
            if(((f_12 != NULL) && (f_12 != h_12)))
              _fail(h_12);
            else
              f_12 = h_12;
            if(((e_12 != NULL) && (e_12 != i_12)))
              _fail(i_12);
            else
              e_12 = i_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_9);
      t = SSL_open_file(not_null(f_12), not_null(e_12));
    }
  else
    {
      t = v_9;
      {
        ATerm j_12 = NULL;
        ATerm k_12 = NULL;
        ATerm n_1 (ATerm t)
        {
          t = term_x_9;
          return(t);
        }
        t = obsolete_1(t, n_1);
        {
          j_12 = t;
          {
            if(((f_12 != NULL) && (f_12 != j_12)))
              _fail(j_12);
            else
              f_12 = j_12;
            {
              ATerm y_9;
              y_9 = t;
              {
                ATerm l_12 = NULL;
                t = term_a_10;
                {
                  l_12 = t;
                  if(((k_12 != NULL) && (k_12 != l_12)))
                    _fail(l_12);
                  else
                    k_12 = l_12;
                }
              }
              t = y_9;
              t = SSL_open_file(not_null(f_12), not_null(k_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_12 = NULL;
  ATerm t_12 = NULL;
  r_12 = t;
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm u_12 = NULL;
      t = term_g_10;
      {
        u_12 = t;
        if(((t_12 != NULL) && (t_12 != u_12)))
          _fail(u_12);
        else
          t_12 = u_12;
      }
    }
    t = e_10;
    {
      t = SSL_open_file(not_null(r_12), not_null(t_12));
      t = SSL_close_file(not_null(r_12));
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
  ATerm y_12 = NULL;
  ATerm z_12 = NULL;
  t = term_m_10;
  {
    t = new_0(t);
    {
      z_12 = t;
      if(((y_12 != NULL) && (y_12 != z_12)))
        _fail(z_12);
      else
        y_12 = z_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_n_10);
    {
      t = conc_strings_0(t);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
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
  ATerm d_13 = NULL;
  t = new_file_0(t);
  {
    d_13 = t;
    {
      ATerm q_10;
      q_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_a_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_m_10);
            {
              ATerm o_1 (ATerm t)
              {
                t = term_v_10;
                return(t);
              }
              t = assert_1(t, o_1);
            }
          }
        }
      }
      t = q_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_stdin_0))
    {
      ATerm p_13 = NULL;
      ATerm q_13 = NULL;
      ATerm r_13 = NULL;
      t = xtc_new_file_0(t);
      {
        q_13 = t;
        {
          if(((p_13 != NULL) && (p_13 != q_13)))
            _fail(q_13);
          else
            p_13 = q_13;
          {
            ATerm s_13 = NULL;
            t = o_0(t);
            {
              s_13 = t;
              if(((r_13 != NULL) && (r_13 != s_13)))
                _fail(s_13);
              else
                r_13 = s_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_w_10));
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
                    t = not_null(p_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_13));
    }
  else
    {
      if(match_cons(n_13, sym_FILE_1))
        {
          o_13 = ATgetArgument(n_13, 0);
          {
            ATerm u_13 = NULL;
            ATerm v_13 = NULL;
            t = not_null(o_13);
            {
              ATerm w_13 = NULL;
              t = xtc_new_file_0(t);
              {
                v_13 = t;
                {
                  if(((u_13 != NULL) && (u_13 != v_13)))
                    _fail(v_13);
                  else
                    u_13 = v_13;
                  {
                    ATerm x_13 = NULL;
                    t = o_0(t);
                    {
                      x_13 = t;
                      if(((w_13 != NULL) && (w_13 != x_13)))
                        _fail(x_13);
                      else
                        w_13 = x_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_13)), term_w_10), not_null(o_13)), term_z_10));
                      {
                        ATerm e_11 = t;
                        int f_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(f_11);
                          }
                        else
                          {
                            t = e_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_13));
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
  ATerm i_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_stdin_0))
    {
      ATerm k_14 = NULL,m_14 = NULL;
      ATerm g_11;
      g_11 = t;
      {
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
      }
      t = g_11;
      {
        ATerm n_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
        t = not_null(m_14);
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
  ATerm w_14 = NULL,x_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_FILE_1))
    {
      x_14 = ATgetArgument(w_14, 0);
      {
        ATerm a_15 = NULL,c_15 = NULL;
        ATerm b_15 = NULL;
        t = SSLgetAnnotations(not_null(w_14));
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
        {
          t = not_null(x_14);
          {
            ATerm e_15 = NULL;
            t = g_49(t);
            {
              c_15 = t;
              {
                ATerm f_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_15)), not_null(a_15));
                {
                  f_15 = t;
                  if(((e_15 != NULL) && (e_15 != f_15)))
                    _fail(f_15);
                  else
                    e_15 = f_15;
                }
                t = not_null(e_15);
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
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(p_11);
        }
      else
        {
          t = o_11;
          t = stdin_0(t);
        }
      LocalPopChoice(i_11);
      t = xtc_transform_file_2(t, g_70, h_70);
    }
  else
    {
      t = h_11;
      t = xtc_transform_term_2(t, g_70, h_70);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, f_70, p_1);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm x_11;
  x_11 = t;
  {
    ATerm l_15 = NULL;
    ATerm m_15 = NULL;
    m_15 = t;
    if(((l_15 != NULL) && (l_15 != m_15)))
      _fail(m_15);
    else
      l_15 = m_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, not_null(l_15)));
      t = printnl_0(t);
    }
  }
  t = x_11;
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym__2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      t = SSL_copy(not_null(r_15), not_null(s_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_stderr_0))
    {
      ATerm c_16 = NULL,e_16 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm d_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          d_16 = t;
          if(((c_16 != NULL) && (c_16 != d_16)))
            _fail(d_16);
          else
            c_16 = d_16;
        }
      }
      t = y_11;
      {
        ATerm f_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(c_16));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
        t = not_null(e_16);
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
  ATerm o_16 = NULL;
  o_16 = t;
  m_16 :
  if(match_cons(o_16, sym_stdout_0))
    {
      ATerm q_16 = NULL,s_16 = NULL;
      ATerm z_11;
      z_11 = t;
      {
        ATerm r_16 = NULL;
        t = SSLgetAnnotations(not_null(o_16));
        {
          r_16 = t;
          if(((q_16 != NULL) && (q_16 != r_16)))
            _fail(r_16);
          else
            q_16 = r_16;
        }
      }
      t = z_11;
      {
        ATerm t_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(q_16));
        {
          t_16 = t;
          if(((s_16 != NULL) && (s_16 != t_16)))
            _fail(t_16);
          else
            s_16 = t_16;
        }
        t = not_null(s_16);
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
        int c_12 = stack_ptr;
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
                  int m_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(m_12);
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
            LocalPopChoice(c_12);
          }
        else
          {
            t = a_12;
            {
              ATerm j_17 = NULL;
              ATerm k_17 = NULL;
              t = m_0(t);
              {
                k_17 = t;
                {
                  if(((j_17 != NULL) && (j_17 != k_17)))
                    _fail(k_17);
                  else
                    j_17 = k_17;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(j_17));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
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
  ATerm w_17 = NULL,x_17 = NULL,a_18 = NULL;
  w_17 = t;
  v_17 :
  if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
    {
      x_17 = ATgetFirst((ATermList) w_17);
      a_18 = (ATerm) ATgetNext((ATermList) w_17);
      t = not_null(a_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_18 = NULL,m_18 = NULL,n_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym__2))
    {
      m_18 = ATgetArgument(g_18, 0);
      n_18 = ATgetArgument(g_18, 1);
      {
        ATerm q_12;
        q_12 = t;
        {
          ATerm q_18 = NULL;
          ATerm r_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(n_18));
          {
            ATerm s_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(v_12);
              }
            else
              {
                t = s_12;
                t = (ATerm) ATempty;
              }
            {
              r_18 = t;
              if(((q_18 != NULL) && (q_18 != r_18)))
                _fail(r_18);
              else
                q_18 = r_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_18), not_null(n_18), not_null(q_18));
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
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  ATerm w_12;
  w_12 = t;
  {
    ATerm b_19 = NULL;
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
    t = w_70(t);
    {
      b_19 = t;
      {
        if(((a_19 != NULL) && (a_19 != b_19)))
          _fail(b_19);
        else
          a_19 = b_19;
        {
          ATerm x_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), term_r_9);
              t = table_get_0(t);
              LocalPopChoice(a_13);
            }
          else
            {
              t = x_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_19 = t;
            x_18 :
            if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
              {
                i_19 = ATgetFirst((ATermList) h_19);
                j_19 = (ATerm) ATgetNext((ATermList) h_19);
                {
                  if(((z_18 != NULL) && (z_18 != i_19)))
                    _fail(i_19);
                  else
                    z_18 = i_19;
                  {
                    if(((y_18 != NULL) && (y_18 != j_19)))
                      _fail(j_19);
                    else
                      y_18 = j_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), term_r_9, not_null(y_18));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_18);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm k_19 = NULL;
                              k_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(k_19));
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
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_remove(not_null(c_20));
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
  ATerm i_20 = NULL;
  ATerm e_13;
  e_13 = t;
  {
    ATerm j_20 = NULL;
    ATerm k_20 = NULL;
    t = v_70(t);
    {
      j_20 = t;
      {
        if(((i_20 != NULL) && (i_20 != j_20)))
          _fail(j_20);
        else
          i_20 = j_20;
        {
          ATerm l_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_r_9);
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
              l_20 = t;
              if(((k_20 != NULL) && (k_20 != l_20)))
                _fail(l_20);
              else
                k_20 = l_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_20), term_r_9, (ATerm) ATinsert(CheckATermList(not_null(k_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  t = begin_scope_1(t, r_1);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm h_13;
      h_13 = t;
      {
        ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
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
          s_20 = t;
          p_20 :
          if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
            {
              t_20 = ATgetFirst((ATermList) s_20);
              u_20 = (ATerm) ATgetNext((ATermList) s_20);
              {
                if(((r_20 != NULL) && (r_20 != t_20)))
                  _fail(t_20);
                else
                  r_20 = t_20;
                {
                  if(((q_20 != NULL) && (q_20 != u_20)))
                    _fail(u_20);
                  else
                    q_20 = u_20;
                  {
                    t = not_null(r_20);
                    {
                      ATerm t_1 (ATerm t)
                      {
                        ATerm l_13 = t;
                        int t_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(t_13);
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
          t = term_v_10;
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
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        ATerm y_20 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            y_20 = t;
            if(((x_20 != NULL) && (x_20 != y_20)))
              _fail(y_20);
            else
              x_20 = y_20;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_20));
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = term_e_9;
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
              t = term_w_10;
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
    ATerm b_21 = NULL;
    b_21 = t;
    a_21 :
    if(!(match_string(b_21, "-v")))
      {
        if(!(match_string(b_21, "--version")))
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
    ATerm e_21 = NULL;
    e_21 = t;
    c_21 :
    if(!(match_string(e_21, "-k")))
      {
        if(!(match_string(e_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm j_14;
    j_14 = t;
    {
      ATerm f_21 = NULL;
      ATerm g_21 = NULL;
      t = string_to_int_0(t);
      {
        g_21 = t;
        if(((f_21 != NULL) && (f_21 != g_21)))
          _fail(g_21);
        else
          f_21 = g_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(f_21));
        t = set_config_0(t);
      }
    }
    t = j_14;
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
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_string_to_int(not_null(j_21));
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
        ATerm w_21 = NULL;
        w_21 = t;
        r_21 :
        if(!(match_string(w_21, "-S")))
          {
            if(!(match_string(w_21, "--silent")))
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
        t = term_y_14;
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
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm x_21 = NULL;
              x_21 = t;
              s_21 :
              if(!(match_string(x_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm a_22 = NULL;
              ATerm g_15;
              g_15 = t;
              {
                ATerm y_21 = NULL;
                ATerm z_21 = NULL;
                t = string_to_int_0(t);
                {
                  z_21 = t;
                  if(((y_21 != NULL) && (y_21 != z_21)))
                    _fail(z_21);
                  else
                    y_21 = z_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(y_21));
                  t = set_config_0(t);
                }
              }
              t = g_15;
              {
                ATerm b_22 = NULL;
                b_22 = t;
                if(((a_22 != NULL) && (a_22 != b_22)))
                  _fail(b_22);
                else
                  a_22 = b_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_22));
              }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_h_15;
              return(t);
            }
            t = ArgOption_3(t, h_2, i_2, j_2);
            LocalPopChoice(d_15);
          }
        else
          {
            t = z_14;
            {
              ATerm k_2 (ATerm t)
              {
                ATerm c_22 = NULL;
                c_22 = t;
                v_21 :
                if(!(match_string(c_22, "-s")))
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
                t = term_n_15;
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
  ATerm o_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = o_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
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
    ATerm m_22 = NULL;
    m_22 = t;
    j_22 :
    if(!(match_string(m_22, "-o")))
      {
        if(!(match_string(m_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm p_22 = NULL;
    ATerm w_15;
    w_15 = t;
    {
      ATerm n_22 = NULL;
      ATerm o_22 = NULL;
      o_22 = t;
      if(((n_22 != NULL) && (n_22 != o_22)))
        _fail(o_22);
      else
        n_22 = o_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(n_22));
        t = set_config_0(t);
      }
    }
    t = w_15;
    {
      ATerm q_22 = NULL;
      q_22 = t;
      if(((p_22 != NULL) && (p_22 != q_22)))
        _fail(q_22);
      else
        p_22 = q_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_22));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_x_15;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = y_15;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm u_22 = NULL;
          u_22 = t;
          t_22 :
          if(!(match_string(u_22, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_h_16;
          t = set_config_0(t);
          t = term_i_16;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_j_16;
          return(t);
        }
        t = Option_3(t, q_2, r_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  a_23 = t;
  y_22 :
  if(match_string(a_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
        {
          b_23 = ATgetFirst((ATermList) a_23);
          c_23 = (ATerm) ATgetNext((ATermList) a_23);
          z_22 :
          if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
            {
              d_23 = ATgetFirst((ATermList) c_23);
              e_23 = (ATerm) ATgetNext((ATermList) c_23);
              {
                ATerm i_23 = NULL;
                ATerm k_16;
                k_16 = t;
                {
                  t = not_null(b_23);
                  t = j_0(t);
                }
                t = k_16;
                {
                  ATerm j_23 = NULL;
                  t = not_null(d_23);
                  {
                    t = k_0(t);
                    {
                      j_23 = t;
                      if(((i_23 != NULL) && (i_23 != j_23)))
                        _fail(j_23);
                      else
                        i_23 = j_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_23)), not_null(i_23));
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
    ATerm q_23 = NULL;
    q_23 = t;
    n_23 :
    if(!(match_string(q_23, "-i")))
      {
        if(!(match_string(q_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm t_23 = NULL;
    ATerm l_16;
    l_16 = t;
    {
      ATerm r_23 = NULL;
      ATerm s_23 = NULL;
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(r_23));
        t = set_config_0(t);
      }
    }
    t = l_16;
    {
      ATerm u_23 = NULL;
      u_23 = t;
      if(((t_23 != NULL) && (t_23 != u_23)))
        _fail(u_23);
      else
        t_23 = u_23;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_23));
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
  ATerm p_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = p_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm a_24 = NULL,b_24 = NULL;
      a_24 = t;
      y_23 :
      if(match_cons(a_24, sym_Program_1))
        {
          b_24 = ATgetArgument(a_24, 0);
          if(((z_23 != NULL) && (z_23 != b_24)))
            _fail(b_24);
          else
            z_23 = b_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_16), not_null(z_23)), term_y_16));
      {
        t = printnl_0(t);
        {
          t = term_a_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, term_e_17));
  {
    t = printnl_0(t);
    {
      t = term_a_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  t = SSL_TicksToSeconds(not_null(e_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_24), not_null(l_24));
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = SSL_addr(not_null(k_24), not_null(l_24));
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
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_66(t);
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
        s_24 = t;
        r_24 :
        if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
          {
            t_24 = ATgetFirst((ATermList) s_24);
            u_24 = (ATerm) ATgetNext((ATermList) s_24);
            {
              ATerm x_24 = NULL;
              ATerm y_24 = NULL;
              t = not_null(u_24);
              {
                t = foldr_2(t, z_66, a_67);
                {
                  y_24 = t;
                  if(((x_24 != NULL) && (x_24 != y_24)))
                    _fail(y_24);
                  else
                    x_24 = y_24;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_24), not_null(x_24));
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
  ATerm f_25 = NULL;
  ATerm h_25 = NULL;
  f_25 = t;
  {
    ATerm i_25 = NULL;
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
    t = not_null(f_25);
    {
      i_25 = t;
      {
        t = SSL_explode_term(not_null(i_25));
        {
          k_25 = t;
          e_25 :
          if(match_cons(k_25, sym__2))
            {
              l_25 = ATgetArgument(k_25, 0);
              m_25 = ATgetArgument(k_25, 1);
              if(((h_25 != NULL) && (h_25 != m_25)))
                _fail(m_25);
              else
                h_25 = m_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_25);
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
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym__2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      {
        ATerm n_17;
        n_17 = t;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_25), not_null(u_25));
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              t = SSL_gtr(not_null(t_25), not_null(u_25));
            }
        }
        t = n_17;
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
  ATerm a_26 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
      b_26 = t;
      z_25 :
      if(match_cons(b_26, sym__2))
        {
          c_26 = ATgetArgument(b_26, 0);
          d_26 = ATgetArgument(b_26, 1);
          {
            if(((a_26 != NULL) && (a_26 != c_26)))
              _fail(c_26);
            else
              a_26 = c_26;
            if(((a_26 != NULL) && (a_26 != d_26)))
              _fail(d_26);
            else
              a_26 = d_26;
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
      t = q_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm g_26 = NULL;
        ATerm h_26 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            h_26 = t;
            if(((g_26 != NULL) && (g_26 != h_26)))
              _fail(h_26);
            else
              g_26 = h_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), term_a_17);
          t = geq_0(t);
        }
      }
      t = u_17;
      t = h_55(t);
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
  ATerm a_3 (ATerm t)
  {
    ATerm l_26 = NULL,n_26 = NULL;
    ATerm y_17;
    y_17 = t;
    {
      ATerm m_26 = NULL;
      t = run_time_0(t);
      {
        m_26 = t;
        if(((l_26 != NULL) && (l_26 != m_26)))
          _fail(m_26);
        else
          l_26 = m_26;
      }
    }
    t = y_17;
    {
      ATerm o_26 = NULL;
      t = term_z_17;
      {
        t = get_config_0(t);
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), not_null(l_26)), term_b_18), not_null(n_26)));
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
  ATerm w_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_Version_0))
    {
      ATerm y_26 = NULL,c_27 = NULL;
      ATerm d_18;
      d_18 = t;
      {
        ATerm b_27 = NULL;
        t = SSLgetAnnotations(not_null(w_26));
        {
          b_27 = t;
          if(((y_26 != NULL) && (y_26 != b_27)))
            _fail(b_27);
          else
            y_26 = b_27;
        }
      }
      t = d_18;
      {
        ATerm g_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_26));
        {
          g_27 = t;
          if(((c_27 != NULL) && (c_27 != g_27)))
            _fail(g_27);
          else
            c_27 = g_27;
        }
        t = not_null(c_27);
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
    ATerm e_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = e_18;
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
  ATerm l_27 = NULL;
  l_27 = t;
  t = SSL_table_create(not_null(l_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm k_18;
    k_18 = t;
    {
      t = term_l_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_18, term_o_18, not_null(p_27));
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
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_table_destroy(not_null(t_27));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  t = SSL_exit(not_null(z_27));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(((ATgetType(d_28) == AT_LIST) && ATisEmpty(d_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
        {
          e_28 = ATgetFirst((ATermList) d_28);
          f_28 = (ATerm) ATgetNext((ATermList) d_28);
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
    ATerm i_28 = NULL;
    ATerm l_28 = NULL;
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm j_28 = NULL;
          ATerm k_28 = NULL;
          k_28 = t;
          if(((j_28 != NULL) && (j_28 != k_28)))
            _fail(k_28);
          else
            j_28 = k_28;
          t = (ATerm) ATinsert(ATempty, not_null(j_28));
        }
      }
    {
      l_28 = t;
      if(((i_28 != NULL) && (i_28 != l_28)))
        _fail(l_28);
      else
        i_28 = l_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_14, not_null(i_28));
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
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  w_28 = t;
  t_28 :
  if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
    {
      u_28 = ATgetFirst((ATermList) w_28);
      v_28 = (ATerm) ATgetNext((ATermList) w_28);
      {
        ATerm z_28 = NULL;
        t = not_null(v_28);
        {
          ATerm u_18;
          u_18 = t;
          {
            ATerm a_29 = NULL,c_29 = NULL,e_29 = NULL;
            ATerm v_18;
            v_18 = t;
            {
              ATerm b_29 = NULL;
              t = i_0(t);
              {
                b_29 = t;
                if(((a_29 != NULL) && (a_29 != b_29)))
                  _fail(b_29);
                else
                  a_29 = b_29;
              }
            }
            t = v_18;
            {
              ATerm d_29 = NULL;
              t = not_null(u_28);
              {
                t = h_0(t);
                {
                  d_29 = t;
                  if(((c_29 != NULL) && (c_29 != d_29)))
                    _fail(d_29);
                  else
                    c_29 = d_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_29)), not_null(c_29));
                {
                  e_29 = t;
                  if(((z_28 != NULL) && (z_28 != e_29)))
                    _fail(e_29);
                  else
                    z_28 = e_29;
                }
              }
            }
          }
          t = u_18;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(z_28);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_28) == AT_LIST) && ATisEmpty(w_28)))
        {
          {
            t = term_m_10;
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
  ATerm r_29 = NULL,s_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym_Program_1))
    {
      s_29 = ATgetArgument(r_29, 0);
      {
        ATerm a_30 = NULL,e_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(r_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(s_29);
          {
            ATerm g_30 = NULL;
            t = t_53(t);
            {
              e_30 = t;
              {
                ATerm h_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_30)), not_null(a_30));
                {
                  h_30 = t;
                  if(((g_30 != NULL) && (g_30 != h_30)))
                    _fail(h_30);
                  else
                    g_30 = h_30;
                }
                t = not_null(g_30);
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
  ATerm a_31 = NULL;
  ATerm w_18 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_31 = NULL;
      t = term_z_17;
      {
        t = get_config_0(t);
        {
          c_31 = t;
          if(((a_31 != NULL) && (a_31 != c_31)))
            _fail(c_31);
          else
            a_31 = c_31;
        }
      }
      LocalPopChoice(c_19);
    }
  else
    {
      t = w_18;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm g_31 = NULL;
            g_31 = t;
            if(((a_31 != NULL) && (a_31 != g_31)))
              _fail(g_31);
            else
              a_31 = g_31;
            return(t);
          }
          t = Program_1(t, j_3);
          return(t);
        }
        t = fetch_1(t, g_3);
      }
    }
  {
    t = term_d_19;
    {
      t = echo_0(t);
      {
        t = term_g_19;
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
                ATerm h_31 = NULL;
                ATerm i_31 = NULL;
                i_31 = t;
                if(((h_31 != NULL) && (h_31 != i_31)))
                  _fail(i_31);
                else
                  h_31 = i_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_31)), term_l_19);
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
ATerm say_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm m_19;
  m_19 = t;
  {
    t = h_71(t);
    t = debug_0(t);
  }
  t = m_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm i_32 = NULL,l_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym_Undefined_1))
    {
      l_32 = ATgetArgument(i_32, 0);
      {
        ATerm o_32 = NULL,t_32 = NULL;
        ATerm s_32 = NULL;
        t = SSLgetAnnotations(not_null(i_32));
        {
          s_32 = t;
          if(((o_32 != NULL) && (o_32 != s_32)))
            _fail(s_32);
          else
            o_32 = s_32;
        }
        {
          t = not_null(l_32);
          {
            ATerm v_32 = NULL;
            t = u_53(t);
            {
              t_32 = t;
              {
                ATerm w_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_32)), not_null(o_32));
                {
                  w_32 = t;
                  if(((v_32 != NULL) && (v_32 != w_32)))
                    _fail(w_32);
                  else
                    v_32 = w_32;
                }
                t = not_null(v_32);
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
  ATerm b_33 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_60, _id);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = Cons_2(t, _id, b_33);
      }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_75 (ATerm))
{
  t = fetch_1(t, m_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_Help_0))
    {
      ATerm i_33 = NULL,k_33 = NULL;
      ATerm p_19;
      p_19 = t;
      {
        ATerm j_33 = NULL;
        t = SSLgetAnnotations(not_null(g_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
      }
      t = p_19;
      {
        ATerm l_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_33));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        t = not_null(k_33);
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
  ATerm q_33 = NULL;
  q_33 = t;
  t = SSL_implode_string(not_null(q_33));
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
        ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
        v_33 = t;
        u_33 :
        if(((ATgetType(v_33) == AT_LIST) && !(ATisEmpty(v_33))))
          {
            w_33 = ATgetFirst((ATermList) v_33);
            x_33 = (ATerm) ATgetNext((ATermList) v_33);
            {
              t = not_null(w_33);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(x_33);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_3);
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
  ATerm h_34 = NULL;
  ATerm j_34 = NULL;
  h_34 = t;
  {
    ATerm k_34 = NULL;
    ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
    t = not_null(h_34);
    {
      k_34 = t;
      {
        t = SSL_explode_term(not_null(k_34));
        {
          m_34 = t;
          f_34 :
          if(match_cons(m_34, sym__2))
            {
              n_34 = ATgetArgument(m_34, 0);
              o_34 = ATgetArgument(m_34, 1);
              g_34 :
              if(match_string(n_34, ""))
                {
                  if(((j_34 != NULL) && (j_34 != o_34)))
                    _fail(o_34);
                  else
                    j_34 = o_34;
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
      t = not_null(j_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm s_34 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_34);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        {
          t = Nil_0(t);
          t = a_61(t);
        }
      }
    return(t);
  }
  t = s_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym__2))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      {
        t = not_null(w_34);
        {
          ATerm x_3 (ATerm t)
          {
            t = not_null(x_34);
            return(t);
          }
          t = at_end_1(t, x_3);
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
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  t = SSL_explode_string(not_null(c_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm))
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  k_35 :
  if(match_cons(l_35, sym__2))
    {
      m_35 = ATgetArgument(l_35, 0);
      n_35 = ATgetArgument(l_35, 1);
      {
        ATerm r_35 = NULL,t_35 = NULL;
        ATerm s_35 = NULL;
        t = SSLgetAnnotations(not_null(l_35));
        {
          s_35 = t;
          if(((r_35 != NULL) && (r_35 != s_35)))
            _fail(s_35);
          else
            r_35 = s_35;
        }
        {
          t = not_null(m_35);
          {
            ATerm v_35 = NULL;
            t = k_47(t);
            {
              t_35 = t;
              {
                t = not_null(n_35);
                {
                  ATerm x_35 = NULL;
                  t = l_47(t);
                  {
                    v_35 = t;
                    {
                      ATerm y_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_35), not_null(v_35)), not_null(r_35));
                      {
                        y_35 = t;
                        if(((x_35 != NULL) && (x_35 != y_35)))
                          _fail(y_35);
                        else
                          x_35 = y_35;
                      }
                      t = not_null(x_35);
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
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  f_36 :
  if(match_cons(g_36, sym__2))
    {
      h_36 = ATgetArgument(g_36, 0);
      i_36 = ATgetArgument(g_36, 1);
      {
        ATerm y_19;
        y_19 = t;
        t = SSL_printnl(not_null(h_36), not_null(i_36));
        t = y_19;
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
    ATerm o_36 = NULL,q_36 = NULL;
    ATerm a_20;
    a_20 = t;
    {
      ATerm p_36 = NULL;
      t = g_71(t);
      {
        p_36 = t;
        if(((o_36 != NULL) && (o_36 != p_36)))
          _fail(p_36);
        else
          o_36 = p_36;
      }
    }
    t = a_20;
    {
      ATerm r_36 = NULL;
      r_36 = t;
      if(((q_36 != NULL) && (q_36 != r_36)))
        _fail(r_36);
      else
        q_36 = r_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_36)), not_null(o_36)));
        t = printnl_0(t);
      }
    }
  }
  t = z_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm u_36 (ATerm t)
  {
    ATerm b_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = b_20;
        t = Cons_2(t, l_60, u_36);
      }
    return(t);
  }
  t = u_36(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_is_string(not_null(w_36));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm m_20 = t;
              int n_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(n_20);
                }
              else
                {
                  t = m_20;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, y_3);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
              i_37 = t;
              e_37 :
              if(match_cons(i_37, sym_Path_1))
                {
                  j_37 = ATgetArgument(i_37, 0);
                  t = not_null(j_37);
                }
              else
                {
                  if(match_cons(i_37, sym_Var_1))
                    {
                      j_37 = ATgetArgument(i_37, 0);
                      {
                        t = not_null(j_37);
                        {
                          ATerm o_20 = t;
                          int v_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_20);
                            }
                          else
                            {
                              t = o_20;
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = term_w_20;
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
                      if(match_cons(i_37, sym_Prefix_2))
                        {
                          j_37 = ATgetArgument(i_37, 0);
                          k_37 = ATgetArgument(i_37, 1);
                          {
                            ATerm p_37 = NULL,r_37 = NULL;
                            ATerm z_20;
                            z_20 = t;
                            {
                              ATerm q_37 = NULL;
                              t = not_null(j_37);
                              {
                                t = eval_config_0(t);
                                {
                                  q_37 = t;
                                  if(((p_37 != NULL) && (p_37 != q_37)))
                                    _fail(q_37);
                                  else
                                    p_37 = q_37;
                                }
                              }
                            }
                            t = z_20;
                            {
                              ATerm s_37 = NULL;
                              t = not_null(k_37);
                              {
                                t = eval_config_0(t);
                                {
                                  s_37 = t;
                                  if(((r_37 != NULL) && (r_37 != s_37)))
                                    _fail(s_37);
                                  else
                                    r_37 = s_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(r_37));
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
  ATerm a_38 = NULL;
  a_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_21, not_null(a_38));
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
                ATerm d_38 = NULL;
                ATerm e_38 = NULL;
                e_38 = t;
                if(((d_38 != NULL) && (d_38 != e_38)))
                  _fail(e_38);
                else
                  d_38 = e_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_21, not_null(a_38), not_null(d_38));
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
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym__2))
    {
      m_38 = ATgetArgument(l_38, 0);
      n_38 = ATgetArgument(l_38, 1);
      t = SSL_table_get(not_null(m_38), not_null(n_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym__3))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      x_38 = ATgetArgument(u_38, 2);
      {
        ATerm n_21;
        n_21 = t;
        {
          ATerm b_39 = NULL;
          ATerm c_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_38), not_null(w_38));
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                t = (ATerm) ATempty;
              }
            {
              c_39 = t;
              if(((b_39 != NULL) && (b_39 != c_39)))
                _fail(c_39);
              else
                b_39 = c_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_38), not_null(w_38), (ATerm) ATinsert(CheckATermList(not_null(b_39)), not_null(x_38)));
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
  ATerm i_39 = NULL;
  ATerm j_39 = NULL;
  t = term_m_10;
  {
    t = r_76(t);
    {
      j_39 = t;
      if(((i_39 != NULL) && (i_39 != j_39)))
        _fail(j_39);
      else
        i_39 = j_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_19, term_f_19, not_null(i_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_string(r_39, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
        {
          s_39 = ATgetFirst((ATermList) r_39);
          t_39 = (ATerm) ATgetNext((ATermList) r_39);
          {
            ATerm w_39 = NULL;
            ATerm q_21;
            q_21 = t;
            {
              t = not_null(s_39);
              t = a_0(t);
            }
            t = q_21;
            {
              ATerm x_39 = NULL;
              t = term_m_10;
              {
                t = d_0(t);
                {
                  x_39 = t;
                  if(((w_39 != NULL) && (w_39 != x_39)))
                    _fail(x_39);
                  else
                    w_39 = x_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_39)), not_null(w_39));
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
    ATerm c_40 = NULL;
    c_40 = t;
    b_40 :
    if(!(match_string(c_40, "--help")))
      {
        if(!(match_string(c_40, "-h")))
          {
            if(!(match_string(c_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_u_21;
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
  t = Option_3(t, a_4, g_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
    {
      g_40 = ATgetFirst((ATermList) f_40);
      h_40 = (ATerm) ATgetNext((ATermList) f_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  q_40 :
  if(((ATgetType(r_40) == AT_LIST) && !(ATisEmpty(r_40))))
    {
      s_40 = ATgetFirst((ATermList) r_40);
      t_40 = (ATerm) ATgetNext((ATermList) r_40);
      {
        ATerm x_40 = NULL,z_40 = NULL;
        ATerm y_40 = NULL;
        t = SSLgetAnnotations(not_null(r_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
        {
          t = not_null(s_40);
          {
            ATerm b_41 = NULL;
            t = t_48(t);
            {
              z_40 = t;
              {
                t = not_null(t_40);
                {
                  ATerm d_41 = NULL;
                  t = u_48(t);
                  {
                    b_41 = t;
                    {
                      ATerm e_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_41)), not_null(z_40)), not_null(x_40));
                      {
                        e_41 = t;
                        if(((d_41 != NULL) && (d_41 != e_41)))
                          _fail(e_41);
                        else
                          d_41 = e_41;
                      }
                      t = not_null(d_41);
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
  ATerm v_41 = NULL;
  v_41 = t;
  t_41 :
  if(((ATgetType(v_41) == AT_LIST) && ATisEmpty(v_41)))
    {
      {
        ATerm x_41 = NULL,z_41 = NULL;
        ATerm f_22;
        f_22 = t;
        {
          ATerm y_41 = NULL;
          t = SSLgetAnnotations(not_null(v_41));
          {
            y_41 = t;
            if(((x_41 != NULL) && (x_41 != y_41)))
              _fail(y_41);
            else
              x_41 = y_41;
          }
        }
        t = f_22;
        {
          ATerm b_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_41));
          {
            b_42 = t;
            if(((z_41 != NULL) && (z_41 != b_42)))
              _fail(b_42);
            else
              z_41 = b_42;
          }
          t = not_null(z_41);
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
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_cons(m_42, sym__2))
    {
      n_42 = ATgetArgument(m_42, 0);
      o_42 = ATgetArgument(m_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_21, not_null(n_42), not_null(o_42));
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
        t = term_k_22;
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
    ATerm m_4 (ATerm t)
    {
      ATerm a_43 = NULL;
      ATerm l_22;
      l_22 = t;
      {
        ATerm y_42 = NULL;
        ATerm z_42 = NULL;
        z_42 = t;
        if(((y_42 != NULL) && (y_42 != z_42)))
          _fail(z_42);
        else
          y_42 = z_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(y_42));
          t = set_config_0(t);
        }
      }
      t = l_22;
      {
        ATerm b_43 = NULL;
        b_43 = t;
        if(((a_43 != NULL) && (a_43 != b_43)))
          _fail(b_43);
        else
          a_43 = b_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_43));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              {
                t = p_76(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_4, n_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  ATerm x_22;
  x_22 = t;
  {
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
    k_43 = t;
    g_43 :
    if(match_cons(k_43, sym__3))
      {
        l_43 = ATgetArgument(k_43, 0);
        m_43 = ATgetArgument(k_43, 1);
        n_43 = ATgetArgument(k_43, 2);
        {
          if(((h_43 != NULL) && (h_43 != l_43)))
            _fail(l_43);
          else
            h_43 = l_43;
          {
            if(((i_43 != NULL) && (i_43 != m_43)))
              _fail(m_43);
            else
              i_43 = m_43;
            {
              if(((j_43 != NULL) && (j_43 != n_43)))
                _fail(n_43);
              else
                j_43 = n_43;
              t = SSL_table_put(not_null(h_43), not_null(i_43), not_null(j_43));
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
ATerm parse_options_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm q_43 = NULL;
  ATerm f_23;
  f_23 = t;
  {
    t = term_g_23;
    t = table_put_0(t);
  }
  t = f_23;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm h_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_76(t);
          LocalPopChoice(k_23);
        }
      else
        {
          t = h_23;
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
          ATerm o_23;
          o_23 = t;
          {
            ATerm p_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_21;
                t = get_config_0(t);
                LocalPopChoice(v_23);
              }
            else
              {
                t = p_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_23;
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
            ATerm w_23 = t;
            int x_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm r_43 = NULL;
                    r_43 = t;
                    if(((q_43 != NULL) && (q_43 != r_43)))
                      _fail(r_43);
                    else
                      q_43 = r_43;
                    return(t);
                  }
                  t = Undefined_1(t, s_4);
                  return(t);
                }
                t = fetch_1(t, r_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_43)), term_c_24);
                    return(t);
                  }
                  t = say_1(t, v_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_a_17;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(x_23);
              }
            else
              {
                t = w_23;
                {
                }
              }
          }
        }
      {
        ATerm d_24;
        d_24 = t;
        {
          t = term_e_19;
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
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_74);
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            {
              ATerm h_24 = t;
              int m_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(m_24);
                }
              else
                {
                  t = h_24;
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
ATerm pp_stratego_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      t = debug_0(t);
      {
        ATerm c_5 (ATerm t)
        {
          t = term_n_24;
          return(t);
        }
        t = xtc_transform_1(t, c_5);
        {
          ATerm d_5 (ATerm t)
          {
            t = term_o_24;
            return(t);
          }
          ATerm e_5 (ATerm t)
          {
            ATerm u_43 = NULL;
            ATerm v_43 = NULL;
            t = term_p_24;
            {
              t = xtc_find_0(t);
              {
                v_43 = t;
                if(((u_43 != NULL) && (u_43 != v_43)))
                  _fail(v_43);
                else
                  u_43 = v_43;
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_43)), term_q_24);
            return(t);
          }
          t = xtc_transform_2(t, d_5, e_5);
        }
      }
      return(t);
    }
    t = xtc_io_1(t, b_5);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, w_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pp_stratego_0(t);
  return(t);
}
