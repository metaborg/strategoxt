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
ATerm term_e_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_z_24;
ATerm term_x_23;
ATerm term_f_23;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_d_22;
ATerm term_x_21;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_d_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_y_14;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_q_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_y_8;
ATerm term_f_8;
ATerm term_x_7;
ATerm term_p_7;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_y_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_k_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_j_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_y_8);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_j_11);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_e_12);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_e_12);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_e_12);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_e_12);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__3, term_e_20, term_f_20, (ATerm) ATempty);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm f_70 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm l_61 (ATerm));
ATerm init_0 (ATerm);
ATerm elem_1 (ATerm, ATerm t_60 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm e_61 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm x_60 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm c_82 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm remove_extension_0 (ATerm);
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
ATerm need_help_1 (ATerm, ATerm c_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_74 (ATerm));
ATerm Program_1 (ATerm, ATerm t_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_73 (ATerm));
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
ATerm register_usage_1 (ATerm, ATerm o_74 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_48 (ATerm), ATerm u_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_74 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_74 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm l_72 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm y_69 (ATerm));
ATerm io_pp_c_0 (ATerm);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm y_0 = NULL,d_1 = NULL,e_1 = NULL;
  y_0 = t;
  w_0 :
  if(match_cons(y_0, sym__2))
    {
      d_1 = ATgetArgument(y_0, 0);
      e_1 = ATgetArgument(y_0, 1);
      {
        t = not_null(e_1);
        {
          ATerm s_2 = t;
          int u_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_5);
            }
          else
            {
              t = s_2;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm v_5 = t;
                  int x_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(x_5);
                    }
                  else
                    {
                      t = v_5;
                      {
                        ATerm y_1 = NULL;
                        t = Cons_2(t, _id, c_0);
                        {
                          ATerm z_1 = NULL;
                          z_1 = t;
                          if(((y_1 != NULL) && (y_1 != z_1)))
                            _fail(z_1);
                          else
                            y_1 = z_1;
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_1)), not_null(d_1));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, c_0);
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
ATerm at_last_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = l_61(t);
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        t = Cons_2(t, _id, y_2);
      }
    return(t);
  }
  t = y_2(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm elem_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = not_null(f_3);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm a_6;
            a_6 = t;
            {
              ATerm j_3 = NULL;
              ATerm k_3 = NULL;
              k_3 = t;
              if(((j_3 != NULL) && (j_3 != k_3)))
                _fail(k_3);
              else
                j_3 = k_3;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(j_3));
                t = t_60(t);
              }
            }
            t = a_6;
            return(t);
          }
          t = _one(t, e_0);
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
ATerm at_suffix_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm b_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_61(t);
        LocalPopChoice(d_6);
      }
    else
      {
        t = b_6;
        t = Cons_2(t, _id, n_3);
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm q_3 = NULL,s_3 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = Cons_2(t, x_60, _id);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm r_3 = NULL;
        r_3 = t;
        if(((q_3 != NULL) && (q_3 != r_3)))
          _fail(r_3);
        else
          q_3 = r_3;
        return(t);
      }
      t = Cons_2(t, _id, p_0);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, f_0);
  {
    ATerm t_3 = NULL;
    t_3 = t;
    if(((s_3 != NULL) && (s_3 != t_3)))
      _fail(t_3);
    else
      s_3 = t_3;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_3), not_null(q_3));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  ATerm f_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, c_82);
      LocalPopChoice(i_6);
    }
  else
    {
      t = f_6;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        h_4 = t;
        if(((g_4 != NULL) && (g_4 != h_4)))
          _fail(h_4);
        else
          g_4 = h_4;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), (ATerm) ATempty);
      }
    }
  {
    i_4 = t;
    c_4 :
    if(match_cons(i_4, sym__2))
      {
        j_4 = ATgetArgument(i_4, 0);
        m_4 = ATgetArgument(i_4, 1);
        d_4 :
        if(((ATgetType(j_4) == AT_LIST) && ATisEmpty(j_4)))
          {
            e_4 :
            if(((ATgetType(m_4) == AT_LIST) && ATisEmpty(m_4)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
                  {
                    n_4 = ATgetFirst((ATermList) m_4);
                    o_4 = (ATerm) ATgetNext((ATermList) m_4);
                    {
                      t = not_null(m_4);
                      t = list_tokenize_1(t, c_82);
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
            if(((ATgetType(j_4) == AT_LIST) && !(ATisEmpty(j_4))))
              {
                k_4 = ATgetFirst((ATermList) j_4);
                l_4 = (ATerm) ATgetNext((ATermList) j_4);
                f_4 :
                if(((ATgetType(m_4) == AT_LIST) && ATisEmpty(m_4)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(j_4));
                  }
                else
                  {
                    if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
                      {
                        n_4 = ATgetFirst((ATermList) m_4);
                        o_4 = (ATerm) ATgetNext((ATermList) m_4);
                        {
                          ATerm t_4 = NULL;
                          ATerm u_4 = NULL;
                          t = not_null(m_4);
                          {
                            t = list_tokenize_1(t, c_82);
                            {
                              u_4 = t;
                              if(((t_4 != NULL) && (t_4 != u_4)))
                                _fail(u_4);
                              else
                                t_4 = u_4;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(t_4)), not_null(j_4));
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
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    e_5 = t;
    d_5 :
    if(match_cons(e_5, sym__2))
      {
        f_5 = ATgetArgument(e_5, 0);
        g_5 = ATgetArgument(e_5, 1);
        {
          t = not_null(g_5);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm j_5 = NULL;
              ATerm k_5 = NULL;
              k_5 = t;
              if(((j_5 != NULL) && (j_5 != k_5)))
                _fail(k_5);
              else
                j_5 = k_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(f_5));
                t = elem_1(t, eq_0);
              }
              return(t);
            }
            t = list_tokenize_1(t, q_0);
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
  ATerm p_5 = NULL,r_5 = NULL;
  ATerm q_5 = NULL;
  q_5 = t;
  if(((p_5 != NULL) && (p_5 != q_5)))
    _fail(q_5);
  else
    p_5 = q_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_6), not_null(p_5));
    {
      t = string_tokenize_0(t);
      {
        t = at_last_1(t, Tl_0);
        {
          ATerm s_5 = NULL;
          s_5 = t;
          if(((r_5 != NULL) && (r_5 != s_5)))
            _fail(s_5);
          else
            r_5 = s_5;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(r_5));
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
  ATerm w_5 = NULL;
  w_5 = t;
  t = SSL_table_keys(not_null(w_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm e_6 = NULL;
        ATerm g_6 = NULL;
        e_6 = t;
        {
          ATerm h_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(e_6));
          {
            t = table_get_0(t);
            {
              h_6 = t;
              if(((g_6 != NULL) && (g_6 != h_6)))
                _fail(h_6);
              else
                g_6 = h_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(g_6));
        }
        return(t);
      }
      t = map_1(t, r_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm l_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6;
      p_6 = t;
      {
        ATerm m_6 = NULL;
        ATerm n_6 = NULL;
        t = term_s_6;
        {
          t = get_config_0(t);
          {
            n_6 = t;
            if(((m_6 != NULL) && (m_6 != n_6)))
              _fail(n_6);
            else
              m_6 = n_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), term_t_6);
          t = geq_0(t);
        }
      }
      t = p_6;
      t = l_55(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = l_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_6;
  u_6 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, not_null(q_6));
      t = printnl_0(t);
    }
  }
  t = u_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm z_6 = NULL,a_7 = NULL;
  x_6 = t;
  {
    ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_6)));
    {
      t = table_get_0(t);
      {
        b_7 = t;
        v_6 :
        if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
          {
            c_7 = ATgetFirst((ATermList) b_7);
            f_7 = (ATerm) ATgetNext((ATermList) b_7);
            w_6 :
            if(match_cons(c_7, sym__2))
              {
                d_7 = ATgetArgument(c_7, 0);
                e_7 = ATgetArgument(c_7, 1);
                {
                  if(((z_6 != NULL) && (z_6 != d_7)))
                    _fail(d_7);
                  else
                    z_6 = d_7;
                  if(((a_7 != NULL) && (a_7 != e_7)))
                    _fail(e_7);
                  else
                    a_7 = e_7;
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
    t = not_null(a_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym__2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm r_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_7)));
        {
          t = table_get_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
              s_7 = t;
              k_7 :
              if(match_cons(s_7, sym__2))
                {
                  t_7 = ATgetArgument(s_7, 0);
                  u_7 = ATgetArgument(s_7, 1);
                  {
                    if(((o_7 != NULL) && (o_7 != t_7)))
                      _fail(t_7);
                    else
                      o_7 = t_7;
                    if(((r_7 != NULL) && (r_7 != u_7)))
                      _fail(u_7);
                    else
                      r_7 = u_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_0);
          }
        }
        t = not_null(r_7);
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
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_7;
      {
        t = table_get_0(t);
        {
          ATerm t_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, t_0);
        }
      }
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm q_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7;
      w_7 = t;
      {
        ATerm y_7 = NULL;
        ATerm z_7 = NULL;
        t = term_s_6;
        {
          t = get_config_0(t);
          {
            z_7 = t;
            if(((y_7 != NULL) && (y_7 != z_7)))
              _fail(z_7);
            else
              y_7 = z_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), term_x_7);
          t = geq_0(t);
        }
      }
      t = w_7;
      t = k_55(t);
      LocalPopChoice(v_7);
    }
  else
    {
      t = q_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8;
      e_8 = t;
      {
        ATerm c_8 = NULL;
        ATerm d_8 = NULL;
        t = term_s_6;
        {
          t = get_config_0(t);
          {
            d_8 = t;
            if(((c_8 != NULL) && (c_8 != d_8)))
              _fail(d_8);
            else
              c_8 = d_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), term_f_8);
          t = geq_0(t);
        }
      }
      t = e_8;
      t = m_55(t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
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
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym__2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      if(((i_8 != NULL) && (i_8 != j_8)))
        _fail(j_8);
      else
        i_8 = j_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
    {
      q_8 = ATgetFirst((ATermList) p_8);
      r_8 = (ATerm) ATgetNext((ATermList) p_8);
      {
        t = n_66(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm u_8 = NULL;
            u_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(u_8));
              t = m_66(t);
            }
            return(t);
          }
          t = fetch_1(t, u_0);
        }
        t = not_null(r_8);
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
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        t = not_null(b_9);
        {
          ATerm g_9 (ATerm t)
          {
            ATerm k_8 = t;
            int l_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_9);
                LocalPopChoice(l_8);
              }
            else
              {
                t = k_8;
                {
                  ATerm m_8 = t;
                  int n_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_0 (ATerm t)
                      {
                        t = not_null(c_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_66, v_0);
                      t = g_9(t);
                      LocalPopChoice(n_8);
                    }
                  else
                    {
                      t = m_8;
                      t = Cons_2(t, _id, g_9);
                    }
                }
              }
            return(t);
          }
          t = g_9(t);
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
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym__3))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      o_9 = ATgetArgument(l_9, 2);
      {
        ATerm s_8;
        s_8 = t;
        {
          ATerm s_9 = NULL;
          ATerm t_9 = NULL,v_9 = NULL;
          ATerm u_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(n_9));
          {
            ATerm t_8 = t;
            int v_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_8);
              }
            else
              {
                t = t_8;
                t = (ATerm) ATempty;
              }
            {
              u_9 = t;
              if(((t_9 != NULL) && (t_9 != u_9)))
                _fail(u_9);
              else
                t_9 = u_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), not_null(o_9));
            {
              t = union_1(t, eq_0);
              {
                v_9 = t;
                if(((s_9 != NULL) && (s_9 != v_9)))
                  _fail(v_9);
                else
                  s_9 = v_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_9), not_null(n_9), not_null(s_9));
            t = table_put_0(t);
          }
        }
        t = s_8;
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
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym__2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      {
        t = not_null(f_10);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
            i_10 = t;
            b_10 :
            if(match_cons(i_10, sym__2))
              {
                j_10 = ATgetArgument(i_10, 0);
                k_10 = ATgetArgument(i_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_10), not_null(j_10), not_null(k_10));
                  t = v_55(t);
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
ATerm xtc_read_0 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm t_10 = NULL;
  r_10 = t;
  {
    ATerm w_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(r_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_8;
      }
    {
      ATerm x_8;
      x_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_y_8, (ATerm) ATinsert(ATempty, not_null(r_10)));
        t = table_put_0(t);
      }
      t = x_8;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = term_d_9;
            return(t);
          }
          t = debug_1(t, a_1);
          return(t);
        }
        t = if_verbose4_1(t, z_0);
        {
          ATerm e_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(f_9);
            }
          else
            {
              t = e_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = term_h_9;
                return(t);
              }
              t = say_1(t, c_1);
              return(t);
            }
            t = if_verbose6_1(t, b_1);
            {
              ATerm u_10 = NULL;
              u_10 = t;
              if(((t_10 != NULL) && (t_10 != u_10)))
                _fail(u_10);
              else
                t_10 = u_10;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(t_10));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = term_i_9;
                        return(t);
                      }
                      t = say_1(t, g_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, f_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(r_10)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm i_1 (ATerm t)
                            {
                              t = term_h_9;
                              return(t);
                            }
                            t = say_1(t, i_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, h_1);
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
  ATerm y_10 = NULL;
  y_10 = t;
  t = SSL_getenv(not_null(y_10));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm j_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_9;
      t = get_config_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = j_9;
      {
        ATerm r_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_9;
            t = getenv_0(t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = r_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      t = term_y_9;
      return(t);
    }
    t = debug_1(t, k_1);
    return(t);
  }
  t = if_verbose5_1(t, j_1);
  {
    ATerm z_9;
    z_9 = t;
    {
      ATerm a_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_10;
          t = table_get_0(t);
          LocalPopChoice(g_10);
        }
      else
        {
          t = a_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = z_9;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = debug_1(t, m_1);
        return(t);
      }
      t = if_verbose5_1(t, l_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_o_10;
          return(t);
        }
        t = debug_1(t, o_1);
        return(t);
      }
      t = if_verbose5_1(t, n_1);
      {
        t = xtc_load_0(t);
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = term_o_10;
                return(t);
              }
              t = debug_1(t, q_1);
              return(t);
            }
            t = if_verbose5_1(t, p_1);
          }
        }
      }
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_10), not_null(c_11)), term_s_10);
          {
            t = error_0(t);
            {
              ATerm r_1 (ATerm t)
              {
                t = term_g_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm s_1 (ATerm t)
                    {
                      t = term_w_10;
                      return(t);
                    }
                    t = debug_1(t, s_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, r_1);
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
  ATerm g_11 = NULL;
  g_11 = t;
  t = SSL_ReadFromFile(not_null(g_11));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_stdin_0))
    {
      ATerm q_11 = NULL;
      ATerm r_11 = NULL;
      t = term_x_10;
      {
        t = ReadFromFile_0(t);
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
      t = not_null(q_11);
    }
  else
    {
      if(match_cons(o_11, sym_FILE_1))
        {
          p_11 = ATgetArgument(o_11, 0);
          {
            ATerm t_11 = NULL;
            ATerm u_11 = NULL;
            t = not_null(p_11);
            {
              t = ReadFromFile_0(t);
              {
                u_11 = t;
                if(((t_11 != NULL) && (t_11 != u_11)))
                  _fail(u_11);
                else
                  t_11 = u_11;
              }
            }
            t = not_null(t_11);
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
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      t = SSL_WriteToBinaryFile(not_null(c_12), not_null(d_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm j_12 = NULL;
  ATerm l_12 = NULL;
  j_12 = t;
  {
    ATerm m_12 = NULL;
    t = xtc_new_file_0(t);
    {
      m_12 = t;
      {
        if(((l_12 != NULL) && (l_12 != m_12)))
          _fail(m_12);
        else
          l_12 = m_12;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(j_12));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(l_12);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_12));
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
  ATerm q_12 = NULL;
  q_12 = t;
  t = SSL_close_file(not_null(q_12));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      t = SSL_execvp(not_null(w_12), not_null(x_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_waitpid(not_null(c_13));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm m_13 = NULL;
  ATerm o_13 = NULL;
  m_13 = t;
  {
    t = fork_0(t);
    {
      o_13 = t;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = NULL;
            q_13 = t;
            i_13 :
            if(match_int(q_13, 0))
              {
                t = not_null(m_13);
                t = d_55(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
              t = not_null(o_13);
              {
                t = waitpid_0(t);
                {
                  r_13 = t;
                  k_13 :
                  if(match_cons(r_13, sym_WaitStatus_3))
                    {
                      s_13 = ATgetArgument(r_13, 0);
                      t_13 = ATgetArgument(r_13, 1);
                      u_13 = ATgetArgument(r_13, 2);
                      l_13 :
                      if(match_int(s_13, 0))
                        {
                          t = not_null(m_13);
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
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      {
        ATerm t_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(d_14));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, t_1);
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
  ATerm j_14 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm k_14 = NULL;
    t = e_70(t);
    {
      t = xtc_find_0(t);
      {
        k_14 = t;
        if(((j_14 != NULL) && (j_14 != k_14)))
          _fail(k_14);
        else
          j_14 = k_14;
      }
    }
  }
  t = b_11;
  {
    ATerm e_11;
    e_11 = t;
    {
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      m_14 = t;
      if(((l_14 != NULL) && (l_14 != m_14)))
        _fail(m_14);
      else
        l_14 = m_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(l_14));
        t = call_0(t);
      }
    }
    t = e_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
        ATerm f_11;
        f_11 = t;
        {
          ATerm c_15 = NULL;
          ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
          t = z_70(t);
          {
            c_15 = t;
            {
              if(((z_14 != NULL) && (z_14 != c_15)))
                _fail(c_15);
              else
                z_14 = c_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_14), not_null(v_14), not_null(w_14));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_11 = t;
                    int i_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), term_j_11);
                        t = table_get_0(t);
                        LocalPopChoice(i_11);
                      }
                    else
                      {
                        t = h_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_15 = t;
                      s_14 :
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
                              if(((b_15 != NULL) && (b_15 != f_15)))
                                _fail(f_15);
                              else
                                b_15 = f_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_14), term_j_11, (ATerm) ATinsert(CheckATermList(not_null(b_15)), (ATerm) ATinsert(CheckATermList(not_null(a_15)), not_null(v_14))));
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
        t = f_11;
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
  ATerm k_11;
  k_11 = t;
  {
    t = n_71(t);
    {
      ATerm u_1 (ATerm t)
      {
        t = term_l_11;
        return(t);
      }
      t = debug_1(t, u_1);
    }
  }
  t = k_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  ATerm m_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
      p_15 = t;
      k_15 :
      if(match_cons(p_15, sym__2))
        {
          q_15 = ATgetArgument(p_15, 0);
          r_15 = ATgetArgument(p_15, 1);
          {
            if(((o_15 != NULL) && (o_15 != q_15)))
              _fail(q_15);
            else
              o_15 = q_15;
            if(((n_15 != NULL) && (n_15 != r_15)))
              _fail(r_15);
            else
              n_15 = r_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_11);
      t = SSL_open_file(not_null(o_15), not_null(n_15));
    }
  else
    {
      t = m_11;
      {
        ATerm s_15 = NULL;
        ATerm t_15 = NULL;
        ATerm v_1 (ATerm t)
        {
          t = term_v_11;
          return(t);
        }
        t = obsolete_1(t, v_1);
        {
          s_15 = t;
          {
            if(((o_15 != NULL) && (o_15 != s_15)))
              _fail(s_15);
            else
              o_15 = s_15;
            {
              ATerm w_11;
              w_11 = t;
              {
                ATerm u_15 = NULL;
                t = term_x_11;
                {
                  u_15 = t;
                  if(((t_15 != NULL) && (t_15 != u_15)))
                    _fail(u_15);
                  else
                    t_15 = u_15;
                }
              }
              t = w_11;
              t = SSL_open_file(not_null(o_15), not_null(t_15));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm c_16 = NULL;
  a_16 = t;
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm d_16 = NULL;
      t = term_z_11;
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
      t = SSL_open_file(not_null(a_16), not_null(c_16));
      t = SSL_close_file(not_null(a_16));
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
  ATerm h_16 = NULL;
  ATerm i_16 = NULL;
  t = term_e_12;
  {
    t = new_0(t);
    {
      i_16 = t;
      if(((h_16 != NULL) && (h_16 != i_16)))
        _fail(i_16);
      else
        h_16 = i_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), term_f_12);
    {
      t = conc_strings_0(t);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
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
  ATerm m_16 = NULL;
  t = new_file_0(t);
  {
    m_16 = t;
    {
      ATerm i_12;
      i_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_x_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_e_12);
            {
              ATerm w_1 (ATerm t)
              {
                t = term_k_12;
                return(t);
              }
              t = assert_1(t, w_1);
            }
          }
        }
      }
      t = i_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_stdin_0))
    {
      ATerm z_16 = NULL;
      ATerm a_17 = NULL;
      ATerm b_17 = NULL;
      t = xtc_new_file_0(t);
      {
        a_17 = t;
        {
          if(((z_16 != NULL) && (z_16 != a_17)))
            _fail(a_17);
          else
            z_16 = a_17;
          {
            ATerm c_17 = NULL;
            t = o_0(t);
            {
              c_17 = t;
              if(((b_17 != NULL) && (b_17 != c_17)))
                _fail(c_17);
              else
                b_17 = c_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_16)), term_n_12));
              {
                ATerm o_12 = t;
                int p_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(p_12);
                  }
                else
                  {
                    t = o_12;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(z_16);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_16));
    }
  else
    {
      if(match_cons(x_16, sym_FILE_1))
        {
          y_16 = ATgetArgument(x_16, 0);
          {
            ATerm e_17 = NULL;
            ATerm f_17 = NULL;
            t = not_null(y_16);
            {
              ATerm g_17 = NULL;
              t = xtc_new_file_0(t);
              {
                f_17 = t;
                {
                  if(((e_17 != NULL) && (e_17 != f_17)))
                    _fail(f_17);
                  else
                    e_17 = f_17;
                  {
                    ATerm i_17 = NULL;
                    t = o_0(t);
                    {
                      i_17 = t;
                      if(((g_17 != NULL) && (g_17 != i_17)))
                        _fail(i_17);
                      else
                        g_17 = i_17;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_17)), term_n_12), not_null(y_16)), term_r_12));
                      {
                        ATerm s_12 = t;
                        int t_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(t_12);
                          }
                        else
                          {
                            t = s_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(e_17);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_17));
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
  ATerm a_18 = NULL;
  a_18 = t;
  x_17 :
  if(match_cons(a_18, sym_stdin_0))
    {
      ATerm c_18 = NULL,e_18 = NULL;
      ATerm y_12;
      y_12 = t;
      {
        ATerm d_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
      }
      t = y_12;
      {
        ATerm f_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(c_18));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        t = not_null(e_18);
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
  ATerm t_18 = NULL,u_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_FILE_1))
    {
      u_18 = ATgetArgument(t_18, 0);
      {
        ATerm x_18 = NULL,z_18 = NULL;
        ATerm y_18 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          y_18 = t;
          if(((x_18 != NULL) && (x_18 != y_18)))
            _fail(y_18);
          else
            x_18 = y_18;
        }
        {
          t = not_null(u_18);
          {
            ATerm b_19 = NULL;
            t = g_49(t);
            {
              z_18 = t;
              {
                ATerm h_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(z_18)), not_null(x_18));
                {
                  h_19 = t;
                  if(((b_19 != NULL) && (b_19 != h_19)))
                    _fail(h_19);
                  else
                    b_19 = h_19;
                }
                t = not_null(b_19);
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
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(d_13);
        }
      else
        {
          t = b_13;
          t = stdin_0(t);
        }
      LocalPopChoice(a_13);
      t = xtc_transform_file_2(t, g_70, h_70);
    }
  else
    {
      t = z_12;
      t = xtc_transform_term_2(t, g_70, h_70);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL,c_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym__2))
    {
      b_20 = ATgetArgument(z_19, 0);
      c_20 = ATgetArgument(z_19, 1);
      t = SSL_copy(not_null(b_20), not_null(c_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_stderr_0))
    {
      ATerm n_20 = NULL,p_20 = NULL;
      ATerm e_13;
      e_13 = t;
      {
        ATerm o_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
      }
      t = e_13;
      {
        ATerm q_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(n_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        t = not_null(p_20);
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
  ATerm y_20 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_stdout_0))
    {
      ATerm a_21 = NULL,c_21 = NULL;
      ATerm f_13;
      f_13 = t;
      {
        ATerm b_21 = NULL;
        t = SSLgetAnnotations(not_null(y_20));
        {
          b_21 = t;
          if(((a_21 != NULL) && (a_21 != b_21)))
            _fail(b_21);
          else
            a_21 = b_21;
        }
      }
      t = f_13;
      {
        ATerm d_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(a_21));
        {
          d_21 = t;
          if(((c_21 != NULL) && (c_21 != d_21)))
            _fail(d_21);
          else
            c_21 = d_21;
        }
        t = not_null(c_21);
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
  ATerm t_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym_FILE_1))
    {
      v_21 = ATgetArgument(t_21, 0);
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = NULL;
            ATerm z_21 = NULL;
            t = m_0(t);
            {
              z_21 = t;
              {
                if(((y_21 != NULL) && (y_21 != z_21)))
                  _fail(z_21);
                else
                  y_21 = z_21;
                {
                  ATerm j_13 = t;
                  int n_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(n_13);
                    }
                  else
                    {
                      t = j_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(y_21));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_21));
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm b_22 = NULL;
              ATerm c_22 = NULL;
              t = m_0(t);
              {
                c_22 = t;
                {
                  if(((b_22 != NULL) && (b_22 != c_22)))
                    _fail(c_22);
                  else
                    b_22 = c_22;
                  {
                    ATerm p_13 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm v_13 = t;
                        int w_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(w_13);
                          }
                        else
                          {
                            t = v_13;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_13;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(b_22));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_21));
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
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
    {
      o_22 = ATgetFirst((ATermList) n_22);
      p_22 = (ATerm) ATgetNext((ATermList) n_22);
      t = not_null(p_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm x_13;
        x_13 = t;
        {
          ATerm a_23 = NULL;
          ATerm b_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(x_22));
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                t = (ATerm) ATempty;
              }
            {
              b_23 = t;
              if(((a_23 != NULL) && (a_23 != b_23)))
                _fail(b_23);
              else
                a_23 = b_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_22), not_null(x_22), not_null(a_23));
            t = table_put_0(t);
          }
        }
        t = x_13;
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
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  ATerm e_14;
  e_14 = t;
  {
    ATerm l_23 = NULL;
    ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
    t = w_70(t);
    {
      l_23 = t;
      {
        if(((k_23 != NULL) && (k_23 != l_23)))
          _fail(l_23);
        else
          k_23 = l_23;
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), term_j_11);
              t = table_get_0(t);
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_23 = t;
            h_23 :
            if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
              {
                n_23 = ATgetFirst((ATermList) m_23);
                o_23 = (ATerm) ATgetNext((ATermList) m_23);
                {
                  if(((j_23 != NULL) && (j_23 != n_23)))
                    _fail(n_23);
                  else
                    j_23 = n_23;
                  {
                    if(((i_23 != NULL) && (i_23 != o_23)))
                      _fail(o_23);
                    else
                      i_23 = o_23;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_23), term_j_11, not_null(i_23));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_23);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm p_23 = NULL;
                              p_23 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), not_null(p_23));
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
  t = e_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  t = SSL_remove(not_null(v_23));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_59(t);
      t = l_59(t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        t = l_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm a_24 = NULL;
  ATerm n_14;
  n_14 = t;
  {
    ATerm b_24 = NULL;
    ATerm c_24 = NULL;
    t = v_70(t);
    {
      b_24 = t;
      {
        if(((a_24 != NULL) && (a_24 != b_24)))
          _fail(b_24);
        else
          a_24 = b_24;
        {
          ATerm d_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), term_j_11);
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                t = (ATerm) ATempty;
              }
            {
              d_24 = t;
              if(((c_24 != NULL) && (c_24 != d_24)))
                _fail(d_24);
              else
                c_24 = d_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_24), term_j_11, (ATerm) ATinsert(CheckATermList(not_null(c_24)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL;
  ATerm a_2 (ATerm t)
  {
    t = term_k_12;
    return(t);
  }
  t = begin_scope_1(t, a_2);
  {
    ATerm b_2 (ATerm t)
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
        ATerm r_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_14;
            t = table_get_0(t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = r_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          k_24 = t;
          h_24 :
          if(((ATgetType(k_24) == AT_LIST) && !(ATisEmpty(k_24))))
            {
              l_24 = ATgetFirst((ATermList) k_24);
              m_24 = (ATerm) ATgetNext((ATermList) k_24);
              {
                if(((j_24 != NULL) && (j_24 != l_24)))
                  _fail(l_24);
                else
                  j_24 = l_24;
                {
                  if(((i_24 != NULL) && (i_24 != m_24)))
                    _fail(m_24);
                  else
                    i_24 = m_24;
                  {
                    t = not_null(j_24);
                    {
                      ATerm c_2 (ATerm t)
                      {
                        ATerm g_15 = t;
                        int h_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(h_15);
                          }
                        else
                          {
                            t = g_15;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, c_2);
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
      t = q_14;
      {
        ATerm d_2 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = end_scope_1(t, d_2);
      }
      return(t);
    }
    t = restore_always_2(t, u_69, b_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_24 = NULL;
        ATerm q_24 = NULL;
        t = term_r_12;
        {
          t = get_config_0(t);
          {
            q_24 = t;
            if(((p_24 != NULL) && (p_24 != q_24)))
              _fail(q_24);
            else
              p_24 = q_24;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_24));
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = term_x_10;
      }
    {
      t = v_69(t);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm l_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_12;
              t = get_config_0(t);
              LocalPopChoice(m_15);
            }
          else
            {
              t = l_15;
              t = term_v_15;
            }
          return(t);
        }
        t = copy_to_1(t, f_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, e_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm t_24 = NULL;
    t_24 = t;
    s_24 :
    if(!(match_string(t_24, "-v")))
      {
        if(!(match_string(t_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_x_15;
    t = set_config_0(t);
    t = term_y_15;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  t = Option_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm w_24 = NULL;
    w_24 = t;
    u_24 :
    if(!(match_string(w_24, "-k")))
      {
        if(!(match_string(w_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm b_16;
    b_16 = t;
    {
      ATerm x_24 = NULL;
      ATerm y_24 = NULL;
      t = string_to_int_0(t);
      {
        y_24 = t;
        if(((x_24 != NULL) && (x_24 != y_24)))
          _fail(y_24);
        else
          x_24 = y_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_16, not_null(x_24));
        t = set_config_0(t);
      }
    }
    t = b_16;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  t = ArgOption_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  t = SSL_string_to_int(not_null(b_25));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
      {
        ATerm j_25 = NULL;
        j_25 = t;
        e_25 :
        if(!(match_string(j_25, "-S")))
          {
            if(!(match_string(j_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = term_l_16;
        t = set_config_0(t);
        t = term_n_16;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_o_16;
        return(t);
      }
      t = Option_3(t, m_2, n_2, o_2);
      LocalPopChoice(j_16);
    }
  else
    {
      t = g_16;
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              ATerm k_25 = NULL;
              k_25 = t;
              f_25 :
              if(!(match_string(k_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm n_25 = NULL;
              ATerm r_16;
              r_16 = t;
              {
                ATerm l_25 = NULL;
                ATerm m_25 = NULL;
                t = string_to_int_0(t);
                {
                  m_25 = t;
                  if(((l_25 != NULL) && (l_25 != m_25)))
                    _fail(m_25);
                  else
                    l_25 = m_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_6, not_null(l_25));
                  t = set_config_0(t);
                }
              }
              t = r_16;
              {
                ATerm o_25 = NULL;
                o_25 = t;
                if(((n_25 != NULL) && (n_25 != o_25)))
                  _fail(o_25);
                else
                  n_25 = o_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_25));
              }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_s_16;
              return(t);
            }
            t = ArgOption_3(t, p_2, q_2, r_2);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm t_2 (ATerm t)
              {
                ATerm p_25 = NULL;
                p_25 = t;
                i_25 :
                if(!(match_string(p_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = term_u_16;
                t = set_config_0(t);
                t = term_v_16;
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_d_17;
                return(t);
              }
              t = Option_3(t, t_2, u_2, v_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = h_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm v_25 = NULL;
    v_25 = t;
    s_25 :
    if(!(match_string(v_25, "-o")))
      {
        if(!(match_string(v_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm y_25 = NULL;
    ATerm m_17;
    m_17 = t;
    {
      ATerm w_25 = NULL;
      ATerm x_25 = NULL;
      x_25 = t;
      if(((w_25 != NULL) && (w_25 != x_25)))
        _fail(x_25);
      else
        w_25 = x_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(w_25));
        t = set_config_0(t);
      }
    }
    t = m_17;
    {
      ATerm z_25 = NULL;
      z_25 = t;
      if(((y_25 != NULL) && (y_25 != z_25)))
        _fail(z_25);
      else
        y_25 = z_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_25));
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_n_17;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, z_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm d_26 = NULL;
          d_26 = t;
          c_26 :
          if(!(match_string(d_26, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          t = term_r_17;
          t = set_config_0(t);
          t = term_s_17;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_t_17;
          return(t);
        }
        t = Option_3(t, a_3, b_3, g_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  j_26 = t;
  h_26 :
  if(match_string(j_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
        {
          k_26 = ATgetFirst((ATermList) j_26);
          l_26 = (ATerm) ATgetNext((ATermList) j_26);
          i_26 :
          if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
            {
              m_26 = ATgetFirst((ATermList) l_26);
              n_26 = (ATerm) ATgetNext((ATermList) l_26);
              {
                ATerm r_26 = NULL;
                ATerm u_17;
                u_17 = t;
                {
                  t = not_null(k_26);
                  t = j_0(t);
                }
                t = u_17;
                {
                  ATerm s_26 = NULL;
                  t = not_null(m_26);
                  {
                    t = k_0(t);
                    {
                      s_26 = t;
                      if(((r_26 != NULL) && (r_26 != s_26)))
                        _fail(s_26);
                      else
                        r_26 = s_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_26)), not_null(r_26));
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
  ATerm h_3 (ATerm t)
  {
    ATerm c_27 = NULL;
    c_27 = t;
    x_26 :
    if(!(match_string(c_27, "-i")))
      {
        if(!(match_string(c_27, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm i_27 = NULL;
    ATerm v_17;
    v_17 = t;
    {
      ATerm g_27 = NULL;
      ATerm h_27 = NULL;
      h_27 = t;
      if(((g_27 != NULL) && (g_27 != h_27)))
        _fail(h_27);
      else
        g_27 = h_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(g_27));
        t = set_config_0(t);
      }
    }
    t = v_17;
    {
      ATerm j_27 = NULL;
      j_27 = t;
      if(((i_27 != NULL) && (i_27 != j_27)))
        _fail(j_27);
      else
        i_27 = j_27;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_27));
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, l_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm b_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = b_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_27 = NULL;
  ATerm h_18;
  h_18 = t;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm p_27 = NULL,q_27 = NULL;
      p_27 = t;
      n_27 :
      if(match_cons(p_27, sym_Program_1))
        {
          q_27 = ATgetArgument(p_27, 0);
          if(((o_27 != NULL) && (o_27 != q_27)))
            _fail(q_27);
          else
            o_27 = q_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, m_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_18), not_null(o_27)), term_i_18));
      {
        t = printnl_0(t);
        {
          t = term_k_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, term_l_18));
  {
    t = printnl_0(t);
    {
      t = term_k_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_TicksToSeconds(not_null(t_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym__2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_28), not_null(c_28));
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = SSL_addr(not_null(b_28), not_null(c_28));
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
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_66(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
        j_28 = t;
        i_28 :
        if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
          {
            k_28 = ATgetFirst((ATermList) j_28);
            l_28 = (ATerm) ATgetNext((ATermList) j_28);
            {
              ATerm o_28 = NULL;
              ATerm p_28 = NULL;
              t = not_null(l_28);
              {
                t = foldr_2(t, z_66, a_67);
                {
                  p_28 = t;
                  if(((o_28 != NULL) && (o_28 != p_28)))
                    _fail(p_28);
                  else
                    o_28 = p_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), not_null(o_28));
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
  ATerm w_28 = NULL;
  ATerm y_28 = NULL;
  w_28 = t;
  {
    ATerm z_28 = NULL;
    ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
    t = not_null(w_28);
    {
      z_28 = t;
      {
        t = SSL_explode_term(not_null(z_28));
        {
          b_29 = t;
          v_28 :
          if(match_cons(b_29, sym__2))
            {
              c_29 = ATgetArgument(b_29, 0);
              d_29 = ATgetArgument(b_29, 1);
              if(((y_28 != NULL) && (y_28 != d_29)))
                _fail(d_29);
              else
                y_28 = d_29;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_28);
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
    ATerm o_3 (ATerm t)
    {
      t = term_k_16;
      return(t);
    }
    t = crush_2(t, o_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym__2))
    {
      m_29 = ATgetArgument(j_29, 0);
      n_29 = ATgetArgument(j_29, 1);
      {
        ATerm q_18;
        q_18 = t;
        {
          ATerm r_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_29), not_null(n_29));
              LocalPopChoice(v_18);
            }
          else
            {
              t = r_18;
              t = SSL_gtr(not_null(m_29), not_null(n_29));
            }
        }
        t = q_18;
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
  ATerm y_29 = NULL;
  ATerm w_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
      z_29 = t;
      s_29 :
      if(match_cons(z_29, sym__2))
        {
          a_30 = ATgetArgument(z_29, 0);
          b_30 = ATgetArgument(z_29, 1);
          {
            if(((y_29 != NULL) && (y_29 != a_30)))
              _fail(a_30);
            else
              y_29 = a_30;
            if(((y_29 != NULL) && (y_29 != b_30)))
              _fail(b_30);
            else
              y_29 = b_30;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_19);
    }
  else
    {
      t = w_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_19;
      e_19 = t;
      {
        ATerm g_30 = NULL;
        ATerm h_30 = NULL;
        t = term_s_6;
        {
          t = get_config_0(t);
          {
            h_30 = t;
            if(((g_30 != NULL) && (g_30 != h_30)))
              _fail(h_30);
            else
              g_30 = h_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), term_k_18);
          t = geq_0(t);
        }
      }
      t = e_19;
      t = h_55(t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm n_30 = NULL,p_30 = NULL;
    ATerm f_19;
    f_19 = t;
    {
      ATerm o_30 = NULL;
      t = run_time_0(t);
      {
        o_30 = t;
        if(((n_30 != NULL) && (n_30 != o_30)))
          _fail(o_30);
        else
          n_30 = o_30;
      }
    }
    t = f_19;
    {
      ATerm z_30 = NULL;
      t = term_g_19;
      {
        t = get_config_0(t);
        {
          z_30 = t;
          if(((p_30 != NULL) && (p_30 != z_30)))
            _fail(z_30);
          else
            p_30 = z_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), not_null(n_30)), term_i_19), not_null(p_30)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_3);
  {
    t = term_k_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  m_31 :
  if(match_cons(x_31, sym_Version_0))
    {
      ATerm z_31 = NULL,b_32 = NULL;
      ATerm k_19;
      k_19 = t;
      {
        ATerm a_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
        }
      }
      t = k_19;
      {
        ATerm g_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_31));
        {
          g_32 = t;
          if(((b_32 != NULL) && (b_32 != g_32)))
            _fail(g_32);
          else
            b_32 = g_32;
        }
        t = not_null(b_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm n_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_19);
            }
          else
            {
              t = n_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, u_3);
  t = c_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  t = SSL_table_create(not_null(n_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  {
    ATerm p_19;
    p_19 = t;
    {
      t = term_q_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_r_19, not_null(u_32));
          t = table_put_0(t);
        }
      }
    }
    t = p_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  t = SSL_table_destroy(not_null(y_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  t = SSL_exit(not_null(c_33));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  f_33 :
  if(((ATgetType(g_33) == AT_LIST) && ATisEmpty(g_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
        {
          h_33 = ATgetFirst((ATermList) g_33);
          i_33 = (ATerm) ATgetNext((ATermList) g_33);
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
  ATerm s_19;
  s_19 = t;
  {
    ATerm l_33 = NULL;
    ATerm p_33 = NULL;
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        {
          ATerm m_33 = NULL;
          ATerm o_33 = NULL;
          o_33 = t;
          if(((m_33 != NULL) && (m_33 != o_33)))
            _fail(o_33);
          else
            m_33 = o_33;
          t = (ATerm) ATinsert(ATempty, not_null(m_33));
        }
      }
    {
      p_33 = t;
      if(((l_33 != NULL) && (l_33 != p_33)))
        _fail(p_33);
      else
        l_33 = p_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(l_33));
      t = printnl_0(t);
    }
  }
  t = s_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_74 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  c_34 = t;
  z_33 :
  if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
    {
      a_34 = ATgetFirst((ATermList) c_34);
      b_34 = (ATerm) ATgetNext((ATermList) c_34);
      {
        ATerm f_34 = NULL;
        t = not_null(b_34);
        {
          ATerm v_19;
          v_19 = t;
          {
            ATerm g_34 = NULL,i_34 = NULL,k_34 = NULL;
            ATerm w_19;
            w_19 = t;
            {
              ATerm h_34 = NULL;
              t = i_0(t);
              {
                h_34 = t;
                if(((g_34 != NULL) && (g_34 != h_34)))
                  _fail(h_34);
                else
                  g_34 = h_34;
              }
            }
            t = w_19;
            {
              ATerm j_34 = NULL;
              t = not_null(a_34);
              {
                t = h_0(t);
                {
                  j_34 = t;
                  if(((i_34 != NULL) && (i_34 != j_34)))
                    _fail(j_34);
                  else
                    i_34 = j_34;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_34)), not_null(i_34));
                {
                  k_34 = t;
                  if(((f_34 != NULL) && (f_34 != k_34)))
                    _fail(k_34);
                  else
                    f_34 = k_34;
                }
              }
            }
          }
          t = v_19;
          {
            ATerm v_3 (ATerm t)
            {
              t = not_null(f_34);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_34) == AT_LIST) && ATisEmpty(c_34)))
        {
          {
            t = term_e_12;
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
  ATerm w_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_74 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm x_34 = NULL,z_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym_Program_1))
    {
      z_34 = ATgetArgument(x_34, 0);
      {
        ATerm d_35 = NULL,f_35 = NULL;
        ATerm e_35 = NULL;
        t = SSLgetAnnotations(not_null(x_34));
        {
          e_35 = t;
          if(((d_35 != NULL) && (d_35 != e_35)))
            _fail(e_35);
          else
            d_35 = e_35;
        }
        {
          t = not_null(z_34);
          {
            ATerm h_35 = NULL;
            t = t_53(t);
            {
              f_35 = t;
              {
                ATerm i_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_35)), not_null(d_35));
                {
                  i_35 = t;
                  if(((h_35 != NULL) && (h_35 != i_35)))
                    _fail(i_35);
                  else
                    h_35 = i_35;
                }
                t = not_null(h_35);
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
  ATerm q_35 = NULL;
  ATerm x_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_35 = NULL;
      t = term_g_19;
      {
        t = get_config_0(t);
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
      }
      LocalPopChoice(a_20);
    }
  else
    {
      t = x_19;
      {
        ATerm x_3 (ATerm t)
        {
          ATerm y_3 (ATerm t)
          {
            ATerm s_35 = NULL;
            s_35 = t;
            if(((q_35 != NULL) && (q_35 != s_35)))
              _fail(s_35);
            else
              q_35 = s_35;
            return(t);
          }
          t = Program_1(t, y_3);
          return(t);
        }
        t = fetch_1(t, x_3);
      }
    }
  {
    t = term_d_20;
    {
      t = echo_0(t);
      {
        t = term_g_20;
        {
          t = table_get_0(t);
          {
            ATerm z_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, z_3);
            {
              ATerm a_4 (ATerm t)
              {
                ATerm t_35 = NULL;
                ATerm u_35 = NULL;
                u_35 = t;
                if(((t_35 != NULL) && (t_35 != u_35)))
                  _fail(u_35);
                else
                  t_35 = u_35;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_35)), term_h_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, a_4);
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
  ATerm i_20;
  i_20 = t;
  {
    ATerm z_35 = NULL;
    ATerm a_36 = NULL;
    a_36 = t;
    if(((z_35 != NULL) && (z_35 != a_36)))
      _fail(a_36);
    else
      z_35 = a_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, not_null(z_35)));
      t = printnl_0(t);
    }
  }
  t = i_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm j_20;
  j_20 = t;
  {
    t = h_71(t);
    t = debug_0(t);
  }
  t = j_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_Undefined_1))
    {
      i_36 = ATgetArgument(h_36, 0);
      {
        ATerm l_36 = NULL,n_36 = NULL;
        ATerm m_36 = NULL;
        t = SSLgetAnnotations(not_null(h_36));
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
        {
          t = not_null(i_36);
          {
            ATerm p_36 = NULL;
            t = u_53(t);
            {
              n_36 = t;
              {
                ATerm q_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_36)), not_null(l_36));
                {
                  q_36 = t;
                  if(((p_36 != NULL) && (p_36 != q_36)))
                    _fail(q_36);
                  else
                    p_36 = q_36;
                }
                t = not_null(p_36);
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
  ATerm w_36 (ATerm t)
  {
    ATerm m_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_60, _id);
        LocalPopChoice(r_20);
      }
    else
      {
        t = m_20;
        t = Cons_2(t, _id, w_36);
      }
    return(t);
  }
  t = w_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_73 (ATerm))
{
  t = fetch_1(t, j_73);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  a_37 :
  if(match_cons(c_37, sym_Help_0))
    {
      ATerm j_37 = NULL,l_37 = NULL;
      ATerm s_20;
      s_20 = t;
      {
        ATerm k_37 = NULL;
        t = SSLgetAnnotations(not_null(c_37));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
      }
      t = s_20;
      {
        ATerm m_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
        t = not_null(l_37);
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
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_implode_string(not_null(v_37));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
        a_38 = t;
        z_37 :
        if(((ATgetType(a_38) == AT_LIST) && !(ATisEmpty(a_38))))
          {
            b_38 = ATgetFirst((ATermList) a_38);
            c_38 = (ATerm) ATgetNext((ATermList) a_38);
            {
              t = not_null(b_38);
              {
                ATerm b_4 (ATerm t)
                {
                  t = not_null(c_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_4);
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
  ATerm m_38 = NULL;
  ATerm o_38 = NULL;
  m_38 = t;
  {
    ATerm p_38 = NULL;
    ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
    t = not_null(m_38);
    {
      p_38 = t;
      {
        t = SSL_explode_term(not_null(p_38));
        {
          r_38 = t;
          k_38 :
          if(match_cons(r_38, sym__2))
            {
              s_38 = ATgetArgument(r_38, 0);
              t_38 = ATgetArgument(r_38, 1);
              l_38 :
              if(match_string(s_38, ""))
                {
                  if(((o_38 != NULL) && (o_38 != t_38)))
                    _fail(t_38);
                  else
                    o_38 = t_38;
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
      t = not_null(o_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm x_38 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_38);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          t = Nil_0(t);
          t = a_61(t);
        }
      }
    return(t);
  }
  t = x_38(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  z_38 :
  if(match_cons(a_39, sym__2))
    {
      b_39 = ATgetArgument(a_39, 0);
      c_39 = ATgetArgument(a_39, 1);
      {
        t = not_null(b_39);
        {
          ATerm p_4 (ATerm t)
          {
            t = not_null(c_39);
            return(t);
          }
          t = at_end_1(t, p_4);
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
  ATerm z_20 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = z_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_39 = NULL;
  h_39 = t;
  t = SSL_explode_string(not_null(h_39));
  return(t);
}
ATerm _2 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym__2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        ATerm w_39 = NULL,y_39 = NULL;
        ATerm x_39 = NULL;
        t = SSLgetAnnotations(not_null(q_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = not_null(r_39);
          {
            ATerm a_40 = NULL;
            t = k_47(t);
            {
              y_39 = t;
              {
                t = not_null(s_39);
                {
                  ATerm c_40 = NULL;
                  t = l_47(t);
                  {
                    a_40 = t;
                    {
                      ATerm d_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_39), not_null(a_40)), not_null(w_39));
                      {
                        d_40 = t;
                        if(((c_40 != NULL) && (c_40 != d_40)))
                          _fail(d_40);
                        else
                          c_40 = d_40;
                      }
                      t = not_null(c_40);
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
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      {
        ATerm h_21;
        h_21 = t;
        t = SSL_printnl(not_null(m_40), not_null(n_40));
        t = h_21;
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
  ATerm i_21;
  i_21 = t;
  {
    ATerm t_40 = NULL,v_40 = NULL;
    ATerm j_21;
    j_21 = t;
    {
      ATerm u_40 = NULL;
      t = g_71(t);
      {
        u_40 = t;
        if(((t_40 != NULL) && (t_40 != u_40)))
          _fail(u_40);
        else
          t_40 = u_40;
      }
    }
    t = j_21;
    {
      ATerm w_40 = NULL;
      w_40 = t;
      if(((v_40 != NULL) && (v_40 != w_40)))
        _fail(w_40);
      else
        v_40 = w_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_40)), not_null(t_40)));
        t = printnl_0(t);
      }
    }
  }
  t = i_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm z_40 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = Cons_2(t, l_60, z_40);
      }
    return(t);
  }
  t = z_40(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_41 = NULL;
  b_41 = t;
  t = SSL_is_string(not_null(b_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 (ATerm t)
            {
              ATerm q_21 = t;
              int r_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
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
            t = map_1(t, q_4);
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
              k_41 = t;
              j_41 :
              if(match_cons(k_41, sym_Path_1))
                {
                  l_41 = ATgetArgument(k_41, 0);
                  t = not_null(l_41);
                }
              else
                {
                  if(match_cons(k_41, sym_Var_1))
                    {
                      l_41 = ATgetArgument(k_41, 0);
                      {
                        t = not_null(l_41);
                        {
                          ATerm u_21 = t;
                          int w_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_21);
                            }
                          else
                            {
                              t = u_21;
                              {
                                ATerm r_4 (ATerm t)
                                {
                                  t = term_x_21;
                                  return(t);
                                }
                                t = debug_1(t, r_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_41, sym_Prefix_2))
                        {
                          l_41 = ATgetArgument(k_41, 0);
                          m_41 = ATgetArgument(k_41, 1);
                          {
                            ATerm r_41 = NULL,t_41 = NULL;
                            ATerm a_22;
                            a_22 = t;
                            {
                              ATerm s_41 = NULL;
                              t = not_null(l_41);
                              {
                                t = eval_config_0(t);
                                {
                                  s_41 = t;
                                  if(((r_41 != NULL) && (r_41 != s_41)))
                                    _fail(s_41);
                                  else
                                    r_41 = s_41;
                                }
                              }
                            }
                            t = a_22;
                            {
                              ATerm u_41 = NULL;
                              t = not_null(m_41);
                              {
                                t = eval_config_0(t);
                                {
                                  u_41 = t;
                                  if(((t_41 != NULL) && (t_41 != u_41)))
                                    _fail(u_41);
                                  else
                                    t_41 = u_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(t_41));
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
  ATerm c_42 = NULL;
  c_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_22, not_null(c_42));
    {
      t = table_get_0(t);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_22;
              g_22 = t;
              {
                ATerm e_42 = NULL;
                ATerm f_42 = NULL;
                f_42 = t;
                if(((e_42 != NULL) && (e_42 != f_42)))
                  _fail(f_42);
                else
                  e_42 = f_42;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_22, not_null(c_42), not_null(e_42));
                  t = table_put_0(t);
                }
              }
              t = g_22;
            }
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
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
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_59(t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  j_42 :
  if(match_cons(q_42, sym__2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      t = SSL_table_get(not_null(r_42), not_null(s_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym__3))
    {
      a_43 = ATgetArgument(z_42, 0);
      b_43 = ATgetArgument(z_42, 1);
      c_43 = ATgetArgument(z_42, 2);
      {
        ATerm j_22;
        j_22 = t;
        {
          ATerm g_43 = NULL;
          ATerm h_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_43), not_null(b_43));
          {
            ATerm k_22 = t;
            int l_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_22);
              }
            else
              {
                t = k_22;
                t = (ATerm) ATempty;
              }
            {
              h_43 = t;
              if(((g_43 != NULL) && (g_43 != h_43)))
                _fail(h_43);
              else
                g_43 = h_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_43), not_null(b_43), (ATerm) ATinsert(CheckATermList(not_null(g_43)), not_null(c_43)));
            t = table_put_0(t);
          }
        }
        t = j_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm l_43 = NULL;
  ATerm m_43 = NULL;
  t = term_e_12;
  {
    t = o_74(t);
    {
      m_43 = t;
      if(((l_43 != NULL) && (l_43 != m_43)))
        _fail(m_43);
      else
        l_43 = m_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_20, term_f_20, not_null(l_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_string(s_43, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
        {
          t_43 = ATgetFirst((ATermList) s_43);
          u_43 = (ATerm) ATgetNext((ATermList) s_43);
          {
            ATerm x_43 = NULL;
            ATerm q_22;
            q_22 = t;
            {
              t = not_null(t_43);
              t = a_0(t);
            }
            t = q_22;
            {
              ATerm y_43 = NULL;
              t = term_e_12;
              {
                t = d_0(t);
                {
                  y_43 = t;
                  if(((x_43 != NULL) && (x_43 != y_43)))
                    _fail(y_43);
                  else
                    x_43 = y_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_43)), not_null(x_43));
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
    ATerm d_44 = NULL;
    d_44 = t;
    c_44 :
    if(!(match_string(d_44, "--help")))
      {
        if(!(match_string(d_44, "-h")))
          {
            if(!(match_string(d_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_s_22;
    {
      t = set_config_0(t);
      t = term_t_22;
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_y_22;
    return(t);
  }
  t = Option_3(t, s_4, v_4, w_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  f_44 :
  if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
    {
      h_44 = ATgetFirst((ATermList) g_44);
      i_44 = (ATerm) ATgetNext((ATermList) g_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  r_44 :
  if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
    {
      t_44 = ATgetFirst((ATermList) s_44);
      u_44 = (ATerm) ATgetNext((ATermList) s_44);
      {
        ATerm y_44 = NULL,a_45 = NULL;
        ATerm z_44 = NULL;
        t = SSLgetAnnotations(not_null(s_44));
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
        {
          t = not_null(t_44);
          {
            ATerm c_45 = NULL;
            t = t_48(t);
            {
              a_45 = t;
              {
                t = not_null(u_44);
                {
                  ATerm e_45 = NULL;
                  t = u_48(t);
                  {
                    c_45 = t;
                    {
                      ATerm f_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_45)), not_null(a_45)), not_null(y_44));
                      {
                        f_45 = t;
                        if(((e_45 != NULL) && (e_45 != f_45)))
                          _fail(f_45);
                        else
                          e_45 = f_45;
                      }
                      t = not_null(e_45);
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
  ATerm p_45 = NULL;
  p_45 = t;
  o_45 :
  if(((ATgetType(p_45) == AT_LIST) && ATisEmpty(p_45)))
    {
      {
        ATerm r_45 = NULL,t_45 = NULL;
        ATerm z_22;
        z_22 = t;
        {
          ATerm s_45 = NULL;
          t = SSLgetAnnotations(not_null(p_45));
          {
            s_45 = t;
            if(((r_45 != NULL) && (r_45 != s_45)))
              _fail(s_45);
            else
              r_45 = s_45;
          }
        }
        t = z_22;
        {
          ATerm u_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_45));
          {
            u_45 = t;
            if(((t_45 != NULL) && (t_45 != u_45)))
              _fail(u_45);
            else
              t_45 = u_45;
          }
          t = not_null(t_45);
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
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym__2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_22, not_null(g_46), not_null(h_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm c_23;
  c_23 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_23;
        t = m_74(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
        }
      }
  }
  t = c_23;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm p_46 = NULL;
      ATerm g_23;
      g_23 = t;
      {
        ATerm n_46 = NULL;
        ATerm o_46 = NULL;
        o_46 = t;
        if(((n_46 != NULL) && (n_46 != o_46)))
          _fail(o_46);
        else
          n_46 = o_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_19, not_null(n_46));
          t = set_config_0(t);
        }
      }
      t = g_23;
      {
        ATerm q_46 = NULL;
        q_46 = t;
        if(((p_46 != NULL) && (p_46 != q_46)))
          _fail(q_46);
        else
          p_46 = q_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_46));
      }
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      ATerm q_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                t = m_74(t);
                t = Cons_2(t, _id, y_4);
              }
            }
          LocalPopChoice(r_23);
        }
      else
        {
          t = q_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_4, y_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
    z_46 = t;
    v_46 :
    if(match_cons(z_46, sym__3))
      {
        a_47 = ATgetArgument(z_46, 0);
        b_47 = ATgetArgument(z_46, 1);
        c_47 = ATgetArgument(z_46, 2);
        {
          if(((w_46 != NULL) && (w_46 != a_47)))
            _fail(a_47);
          else
            w_46 = a_47;
          {
            if(((x_46 != NULL) && (x_46 != b_47)))
              _fail(b_47);
            else
              x_46 = b_47;
            {
              if(((y_46 != NULL) && (y_46 != c_47)))
                _fail(c_47);
              else
                y_46 = c_47;
              t = SSL_table_put(not_null(w_46), not_null(x_46), not_null(y_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm f_47 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    t = term_x_23;
    t = table_put_0(t);
  }
  t = w_23;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_74(t);
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_4);
    {
      ATerm e_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_24;
          g_24 = t;
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_22;
                t = get_config_0(t);
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = g_24;
          {
            t = system_usage_0(t);
            {
              t = term_k_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_24);
        }
      else
        {
          t = e_24;
          {
            ATerm r_24 = t;
            int v_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm j_47 = NULL;
                    j_47 = t;
                    if(((f_47 != NULL) && (f_47 != j_47)))
                      _fail(j_47);
                    else
                      f_47 = j_47;
                    return(t);
                  }
                  t = Undefined_1(t, b_5);
                  return(t);
                }
                t = fetch_1(t, a_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_47)), term_z_24);
                    return(t);
                  }
                  t = say_1(t, c_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_18;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(v_24);
              }
            else
              {
                t = r_24;
                {
                }
              }
          }
        }
      {
        ATerm a_25;
        a_25 = t;
        {
          t = term_e_20;
          t = table_destroy_0(t);
        }
        t = a_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm l_72 (ATerm))
{
  t = parse_options_1(t, i_72);
  {
    t = store_options_0(t);
    {
      t = k_72(t);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_72);
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_72(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm))
{
  t = option_wrap_4(t, m_72, default_usage_0, _id, n_72);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_69(t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = xtc_io_1(t, a_70);
    return(t);
  }
  t = option_wrap_2(t, h_5, i_5);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm y_69 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, y_69);
  return(t);
}
ATerm io_pp_c_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      t = term_t_25;
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm o_47 = NULL;
      ATerm p_47 = NULL;
      t = term_u_25;
      {
        t = xtc_find_0(t);
        {
          t = remove_extension_0(t);
          {
            p_47 = t;
            if(((o_47 != NULL) && (o_47 != p_47)))
              _fail(p_47);
            else
              o_47 = p_47;
          }
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_47)), term_a_26);
      return(t);
    }
    t = xtc_transform_2(t, m_5, n_5);
    {
      ATerm o_5 (ATerm t)
      {
        t = term_b_26;
        return(t);
      }
      t = xtc_transform_1(t, o_5);
      {
        ATerm t_5 (ATerm t)
        {
          t = term_e_26;
          return(t);
        }
        t = xtc_transform_1(t, t_5);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, l_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_c_0(t);
  return(t);
}
