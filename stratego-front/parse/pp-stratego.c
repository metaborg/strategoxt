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
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_e_24;
ATerm term_f_23;
ATerm term_k_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_e_21;
ATerm term_w_20;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_z_13;
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
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_r_9);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_m_10);
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
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_n_5, term_z_14);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_o_15, term_m_10);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_m_10);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_m_10);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2text", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
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
ATerm xtc_transform_1 (ATerm, ATerm s_70 (ATerm));
ATerm debug_0 (ATerm);
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
ATerm if_verbose5_1 (ATerm t, ATerm w_55 (ATerm))
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
      t = w_55(t);
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
ATerm if_verbose4_1 (ATerm t, ATerm v_55 (ATerm))
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
      t = v_55(t);
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
ATerm if_verbose6_1 (ATerm t, ATerm x_55 (ATerm))
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
      t = x_55(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(((ATgetType(g_5) == AT_LIST) && !(ATisEmpty(g_5))))
    {
      h_5 = ATgetFirst((ATermList) g_5);
      i_5 = (ATerm) ATgetNext((ATermList) g_5);
      {
        t = y_66(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm l_5 = NULL;
            l_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(l_5));
              t = x_66(t);
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
ATerm union_1 (ATerm t, ATerm t_66 (ATerm))
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
                      t = HdMember_p__2(t, t_66, q_0);
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
ATerm table_putlist_1 (ATerm t, ATerm g_56 (ATerm))
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
                  t = g_56(t);
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
              t = file_exists_0(t);
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
ATerm fork_and_wait_1 (ATerm t, ATerm o_55 (ATerm))
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
                t = o_55(t);
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
ATerm xtc_command_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm a_11 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm b_11 = NULL;
    t = r_70(t);
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
ATerm assert_1 (ATerm t, ATerm n_71 (ATerm))
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
          t = n_71(t);
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
ATerm obsolete_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm s_9;
  s_9 = t;
  {
    t = b_72(t);
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
ATerm FILE_1 (ATerm t, ATerm r_49 (ATerm))
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
            t = r_49(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm))
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
      t = xtc_transform_file_2(t, t_70, u_70);
    }
  else
    {
      t = h_11;
      t = xtc_transform_term_2(t, t_70, u_70);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, s_70, p_1);
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
  ATerm n_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym_stdout_0))
    {
      ATerm p_16 = NULL,s_16 = NULL;
      ATerm z_11;
      z_11 = t;
      {
        ATerm r_16 = NULL;
        t = SSLgetAnnotations(not_null(n_16));
        {
          r_16 = t;
          if(((p_16 != NULL) && (p_16 != r_16)))
            _fail(r_16);
          else
            p_16 = r_16;
        }
      }
      t = z_11;
      {
        ATerm t_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_16));
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
  ATerm f_17 = NULL,g_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_FILE_1))
    {
      g_17 = ATgetArgument(f_17, 0);
      {
        ATerm a_12 = t;
        int c_12 = stack_ptr;
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
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(i_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_17));
            LocalPopChoice(c_12);
          }
        else
          {
            t = a_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_17 = NULL;
                  ATerm n_17 = NULL;
                  t = m_0(t);
                  {
                    n_17 = t;
                    {
                      if(((m_17 != NULL) && (m_17 != n_17)))
                        _fail(n_17);
                      else
                        m_17 = n_17;
                      {
                        ATerm p_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_12 = t;
                            int s_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(s_12);
                              }
                            else
                              {
                                t = q_12;
                                {
                                  ATerm v_12 = t;
                                  int w_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(w_12);
                                    }
                                  else
                                    {
                                      t = v_12;
                                      {
                                        ATerm o_17 = NULL;
                                        o_17 = t;
                                        if(((g_17 != NULL) && (g_17 != o_17)))
                                          _fail(o_17);
                                        else
                                          g_17 = o_17;
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
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(m_17));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_17));
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  {
                    ATerm v_17 = NULL;
                    t = m_0(t);
                    {
                      v_17 = t;
                      if(((g_17 != NULL) && (g_17 != v_17)))
                        _fail(v_17);
                      else
                        g_17 = v_17;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_17));
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
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  g_18 :
  if(((ATgetType(h_18) == AT_LIST) && !(ATisEmpty(h_18))))
    {
      i_18 = ATgetFirst((ATermList) h_18);
      j_18 = (ATerm) ATgetNext((ATermList) h_18);
      t = not_null(j_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym__2))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      {
        ATerm x_12;
        x_12 = t;
        {
          ATerm z_18 = NULL;
          ATerm a_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), not_null(w_18));
          {
            ATerm a_13 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(b_13);
              }
            else
              {
                t = a_13;
                t = (ATerm) ATempty;
              }
            {
              a_19 = t;
              if(((z_18 != NULL) && (z_18 != a_19)))
                _fail(a_19);
              else
                z_18 = a_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_18), not_null(w_18), not_null(z_18));
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
  ATerm m_19 = NULL,n_19 = NULL,s_19 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    ATerm t_19 = NULL;
    ATerm b_20 = NULL,c_20 = NULL,e_20 = NULL;
    t = k_71(t);
    {
      t_19 = t;
      {
        if(((s_19 != NULL) && (s_19 != t_19)))
          _fail(t_19);
        else
          s_19 = t_19;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), term_r_9);
              t = table_get_0(t);
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_20 = t;
            l_19 :
            if(((ATgetType(b_20) == AT_LIST) && !(ATisEmpty(b_20))))
              {
                c_20 = ATgetFirst((ATermList) b_20);
                e_20 = (ATerm) ATgetNext((ATermList) b_20);
                {
                  if(((n_19 != NULL) && (n_19 != c_20)))
                    _fail(c_20);
                  else
                    n_19 = c_20;
                  {
                    if(((m_19 != NULL) && (m_19 != e_20)))
                      _fail(e_20);
                    else
                      m_19 = e_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_19), term_r_9, not_null(m_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_19);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm f_20 = NULL;
                              f_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(f_20));
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
  ATerm m_20 = NULL;
  m_20 = t;
  t = SSL_remove(not_null(m_20));
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
  ATerm r_20 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm s_20 = NULL;
    ATerm t_20 = NULL;
    t = j_71(t);
    {
      s_20 = t;
      {
        if(((r_20 != NULL) && (r_20 != s_20)))
          _fail(s_20);
        else
          r_20 = s_20;
        {
          ATerm u_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), term_r_9);
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
              u_20 = t;
              if(((t_20 != NULL) && (t_20 != u_20)))
                _fail(u_20);
              else
                t_20 = u_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_20), term_r_9, (ATerm) ATinsert(CheckATermList(not_null(t_20)), (ATerm) ATempty));
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
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  t = begin_scope_1(t, r_1);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm l_13;
      l_13 = t;
      {
        ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
        ATerm t_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_13;
            t = table_get_0(t);
            LocalPopChoice(y_13);
          }
        else
          {
            t = t_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_21 = t;
          y_20 :
          if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
            {
              c_21 = ATgetFirst((ATermList) b_21);
              d_21 = (ATerm) ATgetNext((ATermList) b_21);
              {
                if(((a_21 != NULL) && (a_21 != c_21)))
                  _fail(c_21);
                else
                  a_21 = c_21;
                {
                  if(((z_20 != NULL) && (z_20 != d_21)))
                    _fail(d_21);
                  else
                    z_20 = d_21;
                  {
                    t = not_null(a_21);
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
          t = term_v_10;
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
        ATerm g_21 = NULL;
        ATerm h_21 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            h_21 = t;
            if(((g_21 != NULL) && (g_21 != h_21)))
              _fail(h_21);
            else
              g_21 = h_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = term_e_9;
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
              t = term_w_10;
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
    ATerm k_21 = NULL;
    k_21 = t;
    j_21 :
    if(!(match_string(k_21, "-v")))
      {
        if(!(match_string(k_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_o_14;
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
    ATerm s_21 = NULL;
    s_21 = t;
    l_21 :
    if(!(match_string(s_21, "-k")))
      {
        if(!(match_string(s_21, "--keep")))
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
      ATerm t_21 = NULL;
      ATerm u_21 = NULL;
      t = string_to_int_0(t);
      {
        u_21 = t;
        if(((t_21 != NULL) && (t_21 != u_21)))
          _fail(u_21);
        else
          t_21 = u_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(t_21));
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
  ATerm x_21 = NULL;
  x_21 = t;
  t = SSL_string_to_int(not_null(x_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_22 = NULL;
        f_22 = t;
        a_22 :
        if(!(match_string(f_22, "-S")))
          {
            if(!(match_string(f_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_d_15;
        t = set_config_0(t);
        t = term_g_15;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_h_15;
        return(t);
      }
      t = Option_3(t, e_2, f_2, g_2);
      LocalPopChoice(y_14);
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
              ATerm j_22 = NULL;
              j_22 = t;
              b_22 :
              if(!(match_string(j_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm n_22 = NULL;
              ATerm k_15;
              k_15 = t;
              {
                ATerm l_22 = NULL;
                ATerm m_22 = NULL;
                t = string_to_int_0(t);
                {
                  m_22 = t;
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(l_22));
                  t = set_config_0(t);
                }
              }
              t = k_15;
              {
                ATerm o_22 = NULL;
                o_22 = t;
                if(((n_22 != NULL) && (n_22 != o_22)))
                  _fail(o_22);
                else
                  n_22 = o_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_22));
              }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_n_15;
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
                ATerm p_22 = NULL;
                p_22 = t;
                e_22 :
                if(!(match_string(p_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_t_15;
                t = set_config_0(t);
                t = term_u_15;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_v_15;
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
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_15 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_16);
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
    ATerm v_22 = NULL;
    v_22 = t;
    s_22 :
    if(!(match_string(v_22, "-o")))
      {
        if(!(match_string(v_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm y_22 = NULL;
    ATerm g_16;
    g_16 = t;
    {
      ATerm w_22 = NULL;
      ATerm x_22 = NULL;
      x_22 = t;
      if(((w_22 != NULL) && (w_22 != x_22)))
        _fail(x_22);
      else
        w_22 = x_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(w_22));
        t = set_config_0(t);
      }
    }
    t = g_16;
    {
      ATerm z_22 = NULL;
      z_22 = t;
      if(((y_22 != NULL) && (y_22 != z_22)))
        _fail(z_22);
      else
        y_22 = z_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_22));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_h_16;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm d_23 = NULL;
          d_23 = t;
          c_23 :
          if(!(match_string(d_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_l_16;
          t = set_config_0(t);
          t = term_o_16;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_q_16;
          return(t);
        }
        t = Option_3(t, q_2, r_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  j_23 = t;
  h_23 :
  if(match_string(j_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
        {
          k_23 = ATgetFirst((ATermList) j_23);
          l_23 = (ATerm) ATgetNext((ATermList) j_23);
          i_23 :
          if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
            {
              m_23 = ATgetFirst((ATermList) l_23);
              n_23 = (ATerm) ATgetNext((ATermList) l_23);
              {
                ATerm r_23 = NULL;
                ATerm u_16;
                u_16 = t;
                {
                  t = not_null(k_23);
                  t = j_0(t);
                }
                t = u_16;
                {
                  ATerm s_23 = NULL;
                  t = not_null(m_23);
                  {
                    t = k_0(t);
                    {
                      s_23 = t;
                      if(((r_23 != NULL) && (r_23 != s_23)))
                        _fail(s_23);
                      else
                        r_23 = s_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_23)), not_null(r_23));
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
    ATerm z_23 = NULL;
    z_23 = t;
    w_23 :
    if(!(match_string(z_23, "-i")))
      {
        if(!(match_string(z_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm c_24 = NULL;
    ATerm v_16;
    v_16 = t;
    {
      ATerm a_24 = NULL;
      ATerm b_24 = NULL;
      b_24 = t;
      if(((a_24 != NULL) && (a_24 != b_24)))
        _fail(b_24);
      else
        a_24 = b_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(a_24));
        t = set_config_0(t);
      }
    }
    t = v_16;
    {
      ATerm d_24 = NULL;
      d_24 = t;
      if(((c_24 != NULL) && (c_24 != d_24)))
        _fail(d_24);
      else
        c_24 = d_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_24));
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_24 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm j_24 = NULL,k_24 = NULL;
      j_24 = t;
      h_24 :
      if(match_cons(j_24, sym_Program_1))
        {
          k_24 = ATgetArgument(j_24, 0);
          if(((i_24 != NULL) && (i_24 != k_24)))
            _fail(k_24);
          else
            i_24 = k_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_17), not_null(i_24)), term_c_17));
      {
        t = printnl_0(t);
        {
          t = term_h_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, term_k_17));
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
  ATerm n_24 = NULL;
  n_24 = t;
  t = SSL_TicksToSeconds(not_null(n_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym__2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      {
        ATerm l_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_24), not_null(u_24));
            LocalPopChoice(p_17);
          }
        else
          {
            t = l_17;
            t = SSL_addr(not_null(t_24), not_null(u_24));
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
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_67(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
        b_25 = t;
        a_25 :
        if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
          {
            c_25 = ATgetFirst((ATermList) b_25);
            d_25 = (ATerm) ATgetNext((ATermList) b_25);
            {
              ATerm g_25 = NULL;
              ATerm h_25 = NULL;
              t = not_null(d_25);
              {
                t = foldr_2(t, k_67, l_67);
                {
                  h_25 = t;
                  if(((g_25 != NULL) && (g_25 != h_25)))
                    _fail(h_25);
                  else
                    g_25 = h_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(g_25));
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
  ATerm o_25 = NULL;
  ATerm q_25 = NULL;
  o_25 = t;
  {
    ATerm r_25 = NULL;
    ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
    t = not_null(o_25);
    {
      r_25 = t;
      {
        t = SSL_explode_term(not_null(r_25));
        {
          t_25 = t;
          n_25 :
          if(match_cons(t_25, sym__2))
            {
              u_25 = ATgetArgument(t_25, 0);
              v_25 = ATgetArgument(t_25, 1);
              if(((q_25 != NULL) && (q_25 != v_25)))
                _fail(v_25);
              else
                q_25 = v_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_25);
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
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym__2))
    {
      c_26 = ATgetArgument(b_26, 0);
      d_26 = ATgetArgument(b_26, 1);
      {
        ATerm s_17;
        s_17 = t;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_26), not_null(d_26));
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = SSL_gtr(not_null(c_26), not_null(d_26));
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
  ATerm j_26 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
      k_26 = t;
      i_26 :
      if(match_cons(k_26, sym__2))
        {
          l_26 = ATgetArgument(k_26, 0);
          m_26 = ATgetArgument(k_26, 1);
          {
            if(((j_26 != NULL) && (j_26 != l_26)))
              _fail(l_26);
            else
              j_26 = l_26;
            if(((j_26 != NULL) && (j_26 != m_26)))
              _fail(m_26);
            else
              j_26 = m_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18;
      a_18 = t;
      {
        ATerm p_26 = NULL;
        ATerm q_26 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            q_26 = t;
            if(((p_26 != NULL) && (p_26 != q_26)))
              _fail(q_26);
            else
              p_26 = q_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), term_h_17);
          t = geq_0(t);
        }
      }
      t = a_18;
      t = s_55(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm u_26 = NULL,x_26 = NULL;
    ATerm b_18;
    b_18 = t;
    {
      ATerm v_26 = NULL;
      t = run_time_0(t);
      {
        v_26 = t;
        if(((u_26 != NULL) && (u_26 != v_26)))
          _fail(v_26);
        else
          u_26 = v_26;
      }
    }
    t = b_18;
    {
      ATerm y_26 = NULL;
      t = term_c_18;
      {
        t = get_config_0(t);
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), not_null(u_26)), term_d_18), not_null(x_26)));
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
  ATerm k_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Version_0))
    {
      ATerm m_27 = NULL,o_27 = NULL;
      ATerm f_18;
      f_18 = t;
      {
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(k_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
      }
      t = f_18;
      {
        ATerm p_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_27));
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
        t = not_null(o_27);
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
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
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
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_table_create(not_null(u_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  {
    ATerm o_18;
    o_18 = t;
    {
      t = term_p_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_18, term_q_18, not_null(a_28));
          t = table_put_0(t);
        }
      }
    }
    t = o_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  t = SSL_table_destroy(not_null(e_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_exit(not_null(i_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(((ATgetType(m_28) == AT_LIST) && ATisEmpty(m_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
        {
          n_28 = ATgetFirst((ATermList) m_28);
          o_28 = (ATerm) ATgetNext((ATermList) m_28);
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
  ATerm r_18;
  r_18 = t;
  {
    ATerm r_28 = NULL;
    ATerm u_28 = NULL;
    ATerm s_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = s_18;
        {
          ATerm s_28 = NULL;
          ATerm t_28 = NULL;
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
          t = (ATerm) ATinsert(ATempty, not_null(s_28));
        }
      }
    {
      u_28 = t;
      if(((r_28 != NULL) && (r_28 != u_28)))
        _fail(u_28);
      else
        r_28 = u_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_14, not_null(r_28));
      t = printnl_0(t);
    }
  }
  t = r_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  f_29 = t;
  c_29 :
  if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
    {
      d_29 = ATgetFirst((ATermList) f_29);
      e_29 = (ATerm) ATgetNext((ATermList) f_29);
      {
        ATerm i_29 = NULL;
        t = not_null(e_29);
        {
          ATerm y_18;
          y_18 = t;
          {
            ATerm j_29 = NULL,l_29 = NULL,p_29 = NULL;
            ATerm b_19;
            b_19 = t;
            {
              ATerm k_29 = NULL;
              t = i_0(t);
              {
                k_29 = t;
                if(((j_29 != NULL) && (j_29 != k_29)))
                  _fail(k_29);
                else
                  j_29 = k_29;
              }
            }
            t = b_19;
            {
              ATerm m_29 = NULL;
              t = not_null(d_29);
              {
                t = h_0(t);
                {
                  m_29 = t;
                  if(((l_29 != NULL) && (l_29 != m_29)))
                    _fail(m_29);
                  else
                    l_29 = m_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_29)), not_null(l_29));
                {
                  p_29 = t;
                  if(((i_29 != NULL) && (i_29 != p_29)))
                    _fail(p_29);
                  else
                    i_29 = p_29;
                }
              }
            }
          }
          t = y_18;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(i_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_29) == AT_LIST) && ATisEmpty(f_29)))
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
ATerm short_description_1 (ATerm t, ATerm a_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  e_30 :
  if(match_cons(h_30, sym_Program_1))
    {
      i_30 = ATgetArgument(h_30, 0);
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm o_30 = NULL;
        t = SSLgetAnnotations(not_null(h_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        {
          t = not_null(i_30);
          {
            ATerm r_30 = NULL;
            t = e_54(t);
            {
              p_30 = t;
              {
                ATerm s_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_30)), not_null(n_30));
                {
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                }
                t = not_null(r_30);
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
  ATerm n_31 = NULL;
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = NULL;
      t = term_c_18;
      {
        t = get_config_0(t);
        {
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
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
            ATerm q_31 = NULL;
            q_31 = t;
            if(((n_31 != NULL) && (n_31 != q_31)))
              _fail(q_31);
            else
              n_31 = q_31;
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
                ATerm r_31 = NULL;
                ATerm s_31 = NULL;
                s_31 = t;
                if(((r_31 != NULL) && (r_31 != s_31)))
                  _fail(s_31);
                else
                  r_31 = s_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_31)), term_i_19);
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
ATerm say_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm j_19;
  j_19 = t;
  {
    t = v_71(t);
    t = debug_0(t);
  }
  t = j_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm s_32 = NULL,v_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym_Undefined_1))
    {
      v_32 = ATgetArgument(s_32, 0);
      {
        ATerm y_32 = NULL,d_33 = NULL;
        ATerm c_33 = NULL;
        t = SSLgetAnnotations(not_null(s_32));
        {
          c_33 = t;
          if(((y_32 != NULL) && (y_32 != c_33)))
            _fail(c_33);
          else
            y_32 = c_33;
        }
        {
          t = not_null(v_32);
          {
            ATerm f_33 = NULL;
            t = f_54(t);
            {
              d_33 = t;
              {
                ATerm g_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_33)), not_null(y_32));
                {
                  g_33 = t;
                  if(((f_33 != NULL) && (f_33 != g_33)))
                    _fail(g_33);
                  else
                    f_33 = g_33;
                }
                t = not_null(f_33);
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
  ATerm l_33 (ATerm t)
  {
    ATerm k_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_61, _id);
        LocalPopChoice(o_19);
      }
    else
      {
        t = k_19;
        t = Cons_2(t, _id, l_33);
      }
    return(t);
  }
  t = l_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_76 (ATerm))
{
  t = fetch_1(t, a_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym_Help_0))
    {
      ATerm s_33 = NULL,u_33 = NULL;
      ATerm p_19;
      p_19 = t;
      {
        ATerm t_33 = NULL;
        t = SSLgetAnnotations(not_null(q_33));
        {
          t_33 = t;
          if(((s_33 != NULL) && (s_33 != t_33)))
            _fail(t_33);
          else
            s_33 = t_33;
        }
      }
      t = p_19;
      {
        ATerm v_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_33));
        {
          v_33 = t;
          if(((u_33 != NULL) && (u_33 != v_33)))
            _fail(v_33);
          else
            u_33 = v_33;
        }
        t = not_null(u_33);
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
  ATerm a_34 = NULL;
  a_34 = t;
  t = SSL_implode_string(not_null(a_34));
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
        ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
        f_34 = t;
        e_34 :
        if(((ATgetType(f_34) == AT_LIST) && !(ATisEmpty(f_34))))
          {
            g_34 = ATgetFirst((ATermList) f_34);
            h_34 = (ATerm) ATgetNext((ATermList) f_34);
            {
              t = not_null(g_34);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(h_34);
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
  ATerm r_34 = NULL;
  ATerm t_34 = NULL;
  r_34 = t;
  {
    ATerm u_34 = NULL;
    ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
    t = not_null(r_34);
    {
      u_34 = t;
      {
        t = SSL_explode_term(not_null(u_34));
        {
          w_34 = t;
          p_34 :
          if(match_cons(w_34, sym__2))
            {
              x_34 = ATgetArgument(w_34, 0);
              y_34 = ATgetArgument(w_34, 1);
              q_34 :
              if(match_string(x_34, ""))
                {
                  if(((t_34 != NULL) && (t_34 != y_34)))
                    _fail(y_34);
                  else
                    t_34 = y_34;
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
      t = not_null(t_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm c_35 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_35);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          t = Nil_0(t);
          t = l_61(t);
        }
      }
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym__2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      {
        t = not_null(g_35);
        {
          ATerm x_3 (ATerm t)
          {
            t = not_null(h_35);
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
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_explode_string(not_null(m_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm))
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__2))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      {
        ATerm b_36 = NULL,d_36 = NULL;
        ATerm c_36 = NULL;
        t = SSLgetAnnotations(not_null(v_35));
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
        {
          t = not_null(w_35);
          {
            ATerm f_36 = NULL;
            t = v_47(t);
            {
              d_36 = t;
              {
                t = not_null(x_35);
                {
                  ATerm h_36 = NULL;
                  t = w_47(t);
                  {
                    f_36 = t;
                    {
                      ATerm i_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_36), not_null(f_36)), not_null(b_36));
                      {
                        i_36 = t;
                        if(((h_36 != NULL) && (h_36 != i_36)))
                          _fail(i_36);
                        else
                          h_36 = i_36;
                      }
                      t = not_null(h_36);
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
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym__2))
    {
      r_36 = ATgetArgument(q_36, 0);
      s_36 = ATgetArgument(q_36, 1);
      {
        ATerm a_20;
        a_20 = t;
        t = SSL_printnl(not_null(r_36), not_null(s_36));
        t = a_20;
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
  ATerm d_20;
  d_20 = t;
  {
    ATerm y_36 = NULL,a_37 = NULL;
    ATerm g_20;
    g_20 = t;
    {
      ATerm z_36 = NULL;
      t = u_71(t);
      {
        z_36 = t;
        if(((y_36 != NULL) && (y_36 != z_36)))
          _fail(z_36);
        else
          y_36 = z_36;
      }
    }
    t = g_20;
    {
      ATerm b_37 = NULL;
      b_37 = t;
      if(((a_37 != NULL) && (a_37 != b_37)))
        _fail(b_37);
      else
        a_37 = b_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_37)), not_null(y_36)));
        t = printnl_0(t);
      }
    }
  }
  t = d_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm e_37 (ATerm t)
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = Cons_2(t, w_60, e_37);
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  t = SSL_is_string(not_null(g_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm l_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm o_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = o_20;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, y_3);
            LocalPopChoice(n_20);
          }
        else
          {
            t = l_20;
            {
              ATerm p_37 = NULL,t_37 = NULL,u_37 = NULL;
              p_37 = t;
              o_37 :
              if(match_cons(p_37, sym_Path_1))
                {
                  t_37 = ATgetArgument(p_37, 0);
                  t = not_null(t_37);
                }
              else
                {
                  if(match_cons(p_37, sym_Var_1))
                    {
                      t_37 = ATgetArgument(p_37, 0);
                      {
                        t = not_null(t_37);
                        {
                          ATerm q_20 = t;
                          int v_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_20);
                            }
                          else
                            {
                              t = q_20;
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
                      if(match_cons(p_37, sym_Prefix_2))
                        {
                          t_37 = ATgetArgument(p_37, 0);
                          u_37 = ATgetArgument(p_37, 1);
                          {
                            ATerm z_37 = NULL,b_38 = NULL;
                            ATerm x_20;
                            x_20 = t;
                            {
                              ATerm a_38 = NULL;
                              t = not_null(t_37);
                              {
                                t = eval_config_0(t);
                                {
                                  a_38 = t;
                                  if(((z_37 != NULL) && (z_37 != a_38)))
                                    _fail(a_38);
                                  else
                                    z_37 = a_38;
                                }
                              }
                            }
                            t = x_20;
                            {
                              ATerm c_38 = NULL;
                              t = not_null(u_37);
                              {
                                t = eval_config_0(t);
                                {
                                  c_38 = t;
                                  if(((b_38 != NULL) && (b_38 != c_38)))
                                    _fail(c_38);
                                  else
                                    b_38 = c_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), not_null(b_38));
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
  ATerm k_38 = NULL;
  k_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_21, not_null(k_38));
    {
      t = table_get_0(t);
      {
        ATerm f_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_21;
              m_21 = t;
              {
                ATerm n_38 = NULL;
                ATerm o_38 = NULL;
                o_38 = t;
                if(((n_38 != NULL) && (n_38 != o_38)))
                  _fail(o_38);
                else
                  n_38 = o_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_21, not_null(k_38), not_null(n_38));
                  t = table_put_0(t);
                }
              }
              t = m_21;
            }
            LocalPopChoice(i_21);
          }
        else
          {
            t = f_21;
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
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_59(t);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym__2))
    {
      w_38 = ATgetArgument(v_38, 0);
      x_38 = ATgetArgument(v_38, 1);
      t = SSL_table_get(not_null(w_38), not_null(x_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__3))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      h_39 = ATgetArgument(e_39, 2);
      {
        ATerm p_21;
        p_21 = t;
        {
          ATerm l_39 = NULL;
          ATerm m_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_39), not_null(g_39));
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
                t = (ATerm) ATempty;
              }
            {
              m_39 = t;
              if(((l_39 != NULL) && (l_39 != m_39)))
                _fail(m_39);
              else
                l_39 = m_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_39), not_null(g_39), (ATerm) ATinsert(CheckATermList(not_null(l_39)), not_null(h_39)));
            t = table_put_0(t);
          }
        }
        t = p_21;
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
  ATerm q_39 = NULL;
  ATerm t_39 = NULL;
  t = term_m_10;
  {
    t = f_77(t);
    {
      t_39 = t;
      if(((q_39 != NULL) && (q_39 != t_39)))
        _fail(t_39);
      else
        q_39 = t_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, not_null(q_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
  b_40 = t;
  a_40 :
  if(match_string(b_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
        {
          c_40 = ATgetFirst((ATermList) b_40);
          d_40 = (ATerm) ATgetNext((ATermList) b_40);
          {
            ATerm g_40 = NULL;
            ATerm v_21;
            v_21 = t;
            {
              t = not_null(c_40);
              t = a_0(t);
            }
            t = v_21;
            {
              ATerm h_40 = NULL;
              t = term_m_10;
              {
                t = d_0(t);
                {
                  h_40 = t;
                  if(((g_40 != NULL) && (g_40 != h_40)))
                    _fail(h_40);
                  else
                    g_40 = h_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_40)), not_null(g_40));
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
    ATerm m_40 = NULL;
    m_40 = t;
    l_40 :
    if(!(match_string(m_40, "--help")))
      {
        if(!(match_string(m_40, "-h")))
          {
            if(!(match_string(m_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_y_21;
    {
      t = set_config_0(t);
      t = term_z_21;
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_c_22;
    return(t);
  }
  t = Option_3(t, a_4, g_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(((ATgetType(p_40) == AT_LIST) && !(ATisEmpty(p_40))))
    {
      q_40 = ATgetFirst((ATermList) p_40);
      r_40 = (ATerm) ATgetNext((ATermList) p_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_49 (ATerm), ATerm f_49 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
    {
      c_41 = ATgetFirst((ATermList) b_41);
      d_41 = (ATerm) ATgetNext((ATermList) b_41);
      {
        ATerm h_41 = NULL,j_41 = NULL;
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(b_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
        {
          t = not_null(c_41);
          {
            ATerm l_41 = NULL;
            t = e_49(t);
            {
              j_41 = t;
              {
                t = not_null(d_41);
                {
                  ATerm n_41 = NULL;
                  t = f_49(t);
                  {
                    l_41 = t;
                    {
                      ATerm o_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_41)), not_null(j_41)), not_null(h_41));
                      {
                        o_41 = t;
                        if(((n_41 != NULL) && (n_41 != o_41)))
                          _fail(o_41);
                        else
                          n_41 = o_41;
                      }
                      t = not_null(n_41);
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
  ATerm e_42 = NULL;
  e_42 = t;
  d_42 :
  if(((ATgetType(e_42) == AT_LIST) && ATisEmpty(e_42)))
    {
      {
        ATerm h_42 = NULL,j_42 = NULL;
        ATerm d_22;
        d_22 = t;
        {
          ATerm i_42 = NULL;
          t = SSLgetAnnotations(not_null(e_42));
          {
            i_42 = t;
            if(((h_42 != NULL) && (h_42 != i_42)))
              _fail(i_42);
            else
              h_42 = i_42;
          }
        }
        t = d_22;
        {
          ATerm k_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_42));
          {
            k_42 = t;
            if(((j_42 != NULL) && (j_42 != k_42)))
              _fail(k_42);
            else
              j_42 = k_42;
          }
          t = not_null(j_42);
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
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym__2))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_21, not_null(x_42), not_null(y_42));
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
  ATerm g_22;
  g_22 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_22;
        t = d_77(t);
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
      ATerm k_43 = NULL;
      ATerm q_22;
      q_22 = t;
      {
        ATerm i_43 = NULL;
        ATerm j_43 = NULL;
        j_43 = t;
        if(((i_43 != NULL) && (i_43 != j_43)))
          _fail(j_43);
        else
          i_43 = j_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_18, not_null(i_43));
          t = set_config_0(t);
        }
      }
      t = q_22;
      {
        ATerm l_43 = NULL;
        l_43 = t;
        if(((k_43 != NULL) && (k_43 != l_43)))
          _fail(l_43);
        else
          k_43 = l_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_43));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm r_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_23);
            }
          else
            {
              t = u_22;
              {
                t = d_77(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          LocalPopChoice(t_22);
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
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  ATerm b_23;
  b_23 = t;
  {
    ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
    u_43 = t;
    q_43 :
    if(match_cons(u_43, sym__3))
      {
        v_43 = ATgetArgument(u_43, 0);
        w_43 = ATgetArgument(u_43, 1);
        x_43 = ATgetArgument(u_43, 2);
        {
          if(((r_43 != NULL) && (r_43 != v_43)))
            _fail(v_43);
          else
            r_43 = v_43;
          {
            if(((s_43 != NULL) && (s_43 != w_43)))
              _fail(w_43);
            else
              s_43 = w_43;
            {
              if(((t_43 != NULL) && (t_43 != x_43)))
                _fail(x_43);
              else
                t_43 = x_43;
              t = SSL_table_put(not_null(r_43), not_null(s_43), not_null(t_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm a_44 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    t = term_f_23;
    t = table_put_0(t);
  }
  t = e_23;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm g_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_77(t);
          LocalPopChoice(o_23);
        }
      else
        {
          t = g_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm p_23 = t;
      int q_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_23;
          t_23 = t;
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
          t = t_23;
          {
            t = system_usage_0(t);
            {
              t = term_z_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_23);
        }
      else
        {
          t = p_23;
          {
            ATerm x_23 = t;
            int y_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm b_44 = NULL;
                    b_44 = t;
                    if(((a_44 != NULL) && (a_44 != b_44)))
                      _fail(b_44);
                    else
                      a_44 = b_44;
                    return(t);
                  }
                  t = Undefined_1(t, s_4);
                  return(t);
                }
                t = fetch_1(t, r_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_44)), term_e_24);
                    return(t);
                  }
                  t = say_1(t, v_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_17;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_23);
              }
            else
              {
                t = x_23;
                {
                }
              }
          }
        }
      {
        ATerm f_24;
        f_24 = t;
        {
          t = term_f_19;
          t = table_destroy_0(t);
        }
        t = f_24;
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
        ATerm g_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_75);
            LocalPopChoice(l_24);
          }
        else
          {
            t = g_24;
            {
              ATerm m_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_24);
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
          t = term_p_24;
          return(t);
        }
        t = xtc_transform_1(t, c_5);
        {
          ATerm d_5 (ATerm t)
          {
            t = term_q_24;
            return(t);
          }
          ATerm e_5 (ATerm t)
          {
            ATerm e_44 = NULL;
            ATerm f_44 = NULL;
            t = term_v_24;
            {
              t = xtc_find_0(t);
              {
                f_44 = t;
                if(((e_44 != NULL) && (e_44 != f_44)))
                  _fail(f_44);
                else
                  e_44 = f_44;
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_44)), term_w_24);
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
