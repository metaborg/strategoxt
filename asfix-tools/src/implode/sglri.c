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
ATerm term_z_27;
ATerm term_i_27;
ATerm term_y_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_m_25;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_f_17;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_e_8;
ATerm term_w_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_g_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_s_5;
void init_constant_terms (void)
{
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_n_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_y_8);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_b_11);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_b_12);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_c_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_b_12);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_b_12);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_l_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_b_12);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, (ATerm) ATempty);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_asfix_1 (ATerm, ATerm r_54 (ATerm));
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm t_55 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm b_56 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm a_56 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm c_56 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_67 (ATerm), ATerm d_67 (ATerm));
ATerm union_1 (ATerm, ATerm y_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm l_56 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm w_70 (ATerm));
ATerm assert_1 (ATerm, ATerm s_71 (ATerm));
ATerm obsolete_1 (ATerm, ATerm g_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm q_49 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm sglr_2 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm));
ATerm parse_and_implode_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm sglri_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm p_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm o_71 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm m_70 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm n_70 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_67 (ATerm), ATerm q_67 (ATerm));
ATerm crush_2 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm d_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_47 (ATerm), ATerm v_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_71 (ATerm));
ATerm map_1 (ATerm, ATerm b_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_49 (ATerm), ATerm e_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm sglri_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_asfix_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_s_5;
    return(t);
  }
  t = xtc_transform_2(t, b_0, r_54);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm u_5;
  u_5 = t;
  {
    t = error_0(t);
    {
      t = term_w_5;
      t = exit_0(t);
    }
  }
  t = u_5;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_6;
      t = get_config_0(t);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        t = (ATerm) ATinsert(ATempty, term_c_6);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm g_1 = NULL,k_1 = NULL;
  g_1 = t;
  f_1 :
  if(match_cons(g_1, sym_stdin_0))
    {
      ATerm l_1 = NULL;
      ATerm a_2 = NULL;
      t = term_f_6;
      {
        t = ReadFromFile_0(t);
        {
          a_2 = t;
          if(((l_1 != NULL) && (l_1 != a_2)))
            _fail(a_2);
          else
            l_1 = a_2;
        }
      }
      t = not_null(l_1);
    }
  else
    {
      if(match_cons(g_1, sym_FILE_1))
        {
          k_1 = ATgetArgument(g_1, 0);
          {
            ATerm c_2 = NULL;
            ATerm u_2 = NULL;
            t = not_null(k_1);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_2 = t;
                  if(((c_2 != NULL) && (c_2 != u_2)))
                    _fail(u_2);
                  else
                    c_2 = u_2;
                }
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
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(match_cons(g_3, sym__2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      t = SSL_WriteToBinaryFile(not_null(h_3), not_null(i_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm o_3 = NULL;
  ATerm q_3 = NULL;
  o_3 = t;
  {
    ATerm r_3 = NULL;
    t = xtc_new_file_0(t);
    {
      r_3 = t;
      {
        if(((q_3 != NULL) && (q_3 != r_3)))
          _fail(r_3);
        else
          q_3 = r_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_3), not_null(o_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(q_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_3));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm f_71 (ATerm), ATerm g_71 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, f_71, g_71);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  t = SSL_close_file(not_null(v_3));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      t = SSL_execvp(not_null(b_4), not_null(c_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = SSL_waitpid(not_null(h_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm r_4 = NULL;
  ATerm t_4 = NULL;
  r_4 = t;
  {
    t = fork_0(t);
    {
      t_4 = t;
      {
        ATerm g_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL;
            v_4 = t;
            n_4 :
            if(match_int(v_4, 0))
              {
                t = not_null(r_4);
                t = t_55(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(j_6);
          }
        else
          {
            t = g_6;
            {
              ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
              t = not_null(t_4);
              {
                t = waitpid_0(t);
                {
                  w_4 = t;
                  p_4 :
                  if(match_cons(w_4, sym_WaitStatus_3))
                    {
                      x_4 = ATgetArgument(w_4, 0);
                      y_4 = ATgetArgument(w_4, 1);
                      z_4 = ATgetArgument(w_4, 2);
                      q_4 :
                      if(match_int(x_4, 0))
                        {
                          t = not_null(r_4);
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
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym__2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      {
        ATerm c_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(i_5));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, c_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  t = SSL_table_keys(not_null(n_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm v_5 = NULL;
        ATerm x_5 = NULL;
        v_5 = t;
        {
          ATerm y_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(v_5));
          {
            t = table_get_0(t);
            {
              y_5 = t;
              if(((x_5 != NULL) && (x_5 != y_5)))
                _fail(y_5);
              else
                x_5 = y_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), not_null(x_5));
        }
        return(t);
      }
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_56 (ATerm))
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6;
      p_6 = t;
      {
        ATerm d_6 = NULL;
        ATerm e_6 = NULL;
        t = term_x_6;
        {
          t = get_config_0(t);
          {
            e_6 = t;
            if(((d_6 != NULL) && (d_6 != e_6)))
              _fail(e_6);
            else
              d_6 = e_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_y_6);
          t = geq_0(t);
        }
      }
      t = p_6;
      t = b_56(t);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm h_6 = NULL;
    ATerm i_6 = NULL;
    i_6 = t;
    if(((h_6 != NULL) && (h_6 != i_6)))
      _fail(i_6);
    else
      h_6 = i_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(h_6));
      t = printnl_0(t);
    }
  }
  t = z_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm o_6 = NULL;
  ATerm q_6 = NULL,r_6 = NULL;
  o_6 = t;
  {
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_6)));
    {
      t = table_get_0(t);
      {
        s_6 = t;
        m_6 :
        if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
          {
            t_6 = ATgetFirst((ATermList) s_6);
            w_6 = (ATerm) ATgetNext((ATermList) s_6);
            n_6 :
            if(match_cons(t_6, sym__2))
              {
                u_6 = ATgetArgument(t_6, 0);
                v_6 = ATgetArgument(t_6, 1);
                {
                  if(((q_6 != NULL) && (q_6 != u_6)))
                    _fail(u_6);
                  else
                    q_6 = u_6;
                  if(((r_6 != NULL) && (r_6 != v_6)))
                    _fail(v_6);
                  else
                    r_6 = v_6;
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
    t = not_null(r_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym__2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      {
        ATerm i_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_7)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
              j_7 = t;
              b_7 :
              if(match_cons(j_7, sym__2))
                {
                  k_7 = ATgetArgument(j_7, 0);
                  l_7 = ATgetArgument(j_7, 1);
                  {
                    if(((f_7 != NULL) && (f_7 != k_7)))
                      _fail(k_7);
                    else
                      f_7 = k_7;
                    if(((i_7 != NULL) && (i_7 != l_7)))
                      _fail(l_7);
                    else
                      i_7 = l_7;
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
        t = not_null(i_7);
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
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_7;
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
      LocalPopChoice(m_7);
    }
  else
    {
      t = h_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm a_56 (ATerm))
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7;
      v_7 = t;
      {
        ATerm p_7 = NULL;
        ATerm q_7 = NULL;
        t = term_x_6;
        {
          t = get_config_0(t);
          {
            q_7 = t;
            if(((p_7 != NULL) && (p_7 != q_7)))
              _fail(q_7);
            else
              p_7 = q_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), term_w_7);
          t = geq_0(t);
        }
      }
      t = v_7;
      t = a_56(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8;
      d_8 = t;
      {
        ATerm t_7 = NULL;
        ATerm u_7 = NULL;
        t = term_x_6;
        {
          t = get_config_0(t);
          {
            u_7 = t;
            if(((t_7 != NULL) && (t_7 != u_7)))
              _fail(u_7);
            else
              t_7 = u_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), term_e_8);
          t = geq_0(t);
        }
      }
      t = d_8;
      t = c_56(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
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
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      if(((z_7 != NULL) && (z_7 != a_8)))
        _fail(a_8);
      else
        z_7 = a_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_67 (ATerm), ATerm d_67 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
    {
      h_8 = ATgetFirst((ATermList) g_8);
      i_8 = (ATerm) ATgetNext((ATermList) g_8);
      {
        t = d_67(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm l_8 = NULL;
            l_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(l_8));
              t = c_67(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(i_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym__2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        t = not_null(s_8);
        {
          ATerm x_8 (ATerm t)
          {
            ATerm j_8 = t;
            int k_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_8);
                LocalPopChoice(k_8);
              }
            else
              {
                t = j_8;
                {
                  ATerm m_8 = t;
                  int n_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(t_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_66, t_0);
                      t = x_8(t);
                      LocalPopChoice(n_8);
                    }
                  else
                    {
                      t = m_8;
                      t = Cons_2(t, _id, x_8);
                    }
                }
              }
            return(t);
          }
          t = x_8(t);
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__3))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      f_9 = ATgetArgument(c_9, 2);
      {
        ATerm o_8;
        o_8 = t;
        {
          ATerm j_9 = NULL;
          ATerm k_9 = NULL,m_9 = NULL;
          ATerm l_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(e_9));
          {
            ATerm p_8 = t;
            int u_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_8);
              }
            else
              {
                t = p_8;
                t = (ATerm) ATempty;
              }
            {
              l_9 = t;
              if(((k_9 != NULL) && (k_9 != l_9)))
                _fail(l_9);
              else
                k_9 = l_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), not_null(f_9));
            {
              t = union_1(t, eq_0);
              {
                m_9 = t;
                if(((j_9 != NULL) && (j_9 != m_9)))
                  _fail(m_9);
                else
                  j_9 = m_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_9), not_null(e_9), not_null(j_9));
            t = table_put_0(t);
          }
        }
        t = o_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym__2))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      {
        t = not_null(w_9);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
            z_9 = t;
            s_9 :
            if(match_cons(z_9, sym__2))
              {
                a_10 = ATgetArgument(z_9, 0);
                b_10 = ATgetArgument(z_9, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_9), not_null(a_10), not_null(b_10));
                  t = l_56(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_0);
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
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_ReadFromFile(not_null(h_10));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm o_10 = NULL;
  m_10 = t;
  {
    ATerm v_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_8;
      }
    {
      ATerm w_8;
      w_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_y_8, (ATerm) ATinsert(ATempty, not_null(m_10)));
        t = table_put_0(t);
      }
      t = w_8;
      {
        ATerm v_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = term_z_8;
            return(t);
          }
          t = debug_1(t, w_0);
          return(t);
        }
        t = if_verbose4_1(t, v_0);
        {
          ATerm a_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(g_9);
            }
          else
            {
              t = a_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = term_h_9;
                return(t);
              }
              t = say_1(t, y_0);
              return(t);
            }
            t = if_verbose6_1(t, x_0);
            {
              ATerm p_10 = NULL;
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(o_10));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = term_i_9;
                        return(t);
                      }
                      t = say_1(t, a_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, z_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_10)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
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
                          t = if_verbose4_1(t, b_1);
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
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_getenv(not_null(t_10));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_9;
      t = get_config_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_9;
            t = getenv_0(t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = term_y_9;
      return(t);
    }
    t = debug_1(t, e_1);
    return(t);
  }
  t = if_verbose5_1(t, d_1);
  {
    ATerm c_10;
    c_10 = t;
    {
      ATerm d_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_f_10;
          t = table_get_0(t);
          LocalPopChoice(e_10);
        }
      else
        {
          t = d_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = c_10;
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          t = term_g_10;
          return(t);
        }
        t = debug_1(t, i_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = term_k_10;
          return(t);
        }
        t = debug_1(t, m_1);
        return(t);
      }
      t = if_verbose5_1(t, j_1);
      {
        t = xtc_load_0(t);
        {
          ATerm l_10 = t;
          int n_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(n_10);
            }
          else
            {
              t = l_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm n_1 (ATerm t)
            {
              ATerm o_1 (ATerm t)
              {
                t = term_k_10;
                return(t);
              }
              t = debug_1(t, o_1);
              return(t);
            }
            t = if_verbose5_1(t, n_1);
          }
        }
      }
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm x_10 = NULL;
        ATerm y_10 = NULL;
        y_10 = t;
        if(((x_10 != NULL) && (x_10 != y_10)))
          _fail(y_10);
        else
          x_10 = y_10;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_10), not_null(x_10)), term_q_10);
          {
            t = error_0(t);
            {
              ATerm p_1 (ATerm t)
              {
                t = term_g_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm q_1 (ATerm t)
                    {
                      t = term_s_10;
                      return(t);
                    }
                    t = debug_1(t, q_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, p_1);
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
ATerm xtc_command_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm c_11 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm d_11 = NULL;
    t = w_70(t);
    {
      t = xtc_find_0(t);
      {
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
      }
    }
  }
  t = u_10;
  {
    ATerm v_10;
    v_10 = t;
    {
      ATerm e_11 = NULL;
      ATerm f_11 = NULL;
      f_11 = t;
      if(((e_11 != NULL) && (e_11 != f_11)))
        _fail(f_11);
      else
        e_11 = f_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(e_11));
        t = call_0(t);
      }
    }
    t = v_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
        ATerm w_10;
        w_10 = t;
        {
          ATerm v_11 = NULL;
          ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
          t = s_71(t);
          {
            v_11 = t;
            {
              if(((s_11 != NULL) && (s_11 != v_11)))
                _fail(v_11);
              else
                s_11 = v_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_11), not_null(o_11), not_null(p_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_10 = t;
                    int a_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), term_b_11);
                        t = table_get_0(t);
                        LocalPopChoice(a_11);
                      }
                    else
                      {
                        t = z_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_11 = t;
                      l_11 :
                      if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
                        {
                          x_11 = ATgetFirst((ATermList) w_11);
                          y_11 = (ATerm) ATgetNext((ATermList) w_11);
                          {
                            if(((t_11 != NULL) && (t_11 != x_11)))
                              _fail(x_11);
                            else
                              t_11 = x_11;
                            {
                              if(((u_11 != NULL) && (u_11 != y_11)))
                                _fail(y_11);
                              else
                                u_11 = y_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_11), term_b_11, (ATerm) ATinsert(CheckATermList(not_null(u_11)), (ATerm) ATinsert(CheckATermList(not_null(t_11)), not_null(o_11))));
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
        t = w_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm g_11;
  g_11 = t;
  {
    t = g_72(t);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_h_11;
        return(t);
      }
      t = debug_1(t, r_1);
    }
  }
  t = g_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
      i_12 = t;
      d_12 :
      if(match_cons(i_12, sym__2))
        {
          j_12 = ATgetArgument(i_12, 0);
          k_12 = ATgetArgument(i_12, 1);
          {
            if(((h_12 != NULL) && (h_12 != j_12)))
              _fail(j_12);
            else
              h_12 = j_12;
            if(((g_12 != NULL) && (g_12 != k_12)))
              _fail(k_12);
            else
              g_12 = k_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_11);
      t = SSL_open_file(not_null(h_12), not_null(g_12));
    }
  else
    {
      t = i_11;
      {
        ATerm l_12 = NULL;
        ATerm m_12 = NULL;
        ATerm s_1 (ATerm t)
        {
          t = term_k_11;
          return(t);
        }
        t = obsolete_1(t, s_1);
        {
          l_12 = t;
          {
            if(((h_12 != NULL) && (h_12 != l_12)))
              _fail(l_12);
            else
              h_12 = l_12;
            {
              ATerm q_11;
              q_11 = t;
              {
                ATerm n_12 = NULL;
                t = term_r_11;
                {
                  n_12 = t;
                  if(((m_12 != NULL) && (m_12 != n_12)))
                    _fail(n_12);
                  else
                    m_12 = n_12;
                }
              }
              t = q_11;
              t = SSL_open_file(not_null(h_12), not_null(m_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm v_12 = NULL;
  t_12 = t;
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm w_12 = NULL;
      t = term_a_12;
      {
        w_12 = t;
        if(((v_12 != NULL) && (v_12 != w_12)))
          _fail(w_12);
        else
          v_12 = w_12;
      }
    }
    t = z_11;
    {
      t = SSL_open_file(not_null(t_12), not_null(v_12));
      t = SSL_close_file(not_null(t_12));
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
  ATerm a_13 = NULL;
  ATerm b_13 = NULL;
  t = term_b_12;
  {
    t = new_0(t);
    {
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), term_c_12);
    {
      t = conc_strings_0(t);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
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
  ATerm f_13 = NULL;
  t = new_file_0(t);
  {
    f_13 = t;
    {
      ATerm o_12;
      o_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_r_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_b_12);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_p_12;
                return(t);
              }
              t = assert_1(t, t_1);
            }
          }
        }
      }
      t = o_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_stdin_0))
    {
      ATerm r_13 = NULL;
      ATerm s_13 = NULL;
      ATerm t_13 = NULL;
      t = xtc_new_file_0(t);
      {
        s_13 = t;
        {
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
          {
            ATerm u_13 = NULL;
            t = q_0(t);
            {
              u_13 = t;
              if(((t_13 != NULL) && (t_13 != u_13)))
                _fail(u_13);
              else
                t_13 = u_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_13)), term_q_12));
              {
                ATerm r_12 = t;
                int s_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(s_12);
                  }
                else
                  {
                    t = r_12;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, p_0);
                  {
                    t = not_null(r_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_13));
    }
  else
    {
      if(match_cons(p_13, sym_FILE_1))
        {
          q_13 = ATgetArgument(p_13, 0);
          {
            ATerm w_13 = NULL;
            ATerm x_13 = NULL;
            t = not_null(q_13);
            {
              ATerm y_13 = NULL;
              t = xtc_new_file_0(t);
              {
                x_13 = t;
                {
                  if(((w_13 != NULL) && (w_13 != x_13)))
                    _fail(x_13);
                  else
                    w_13 = x_13;
                  {
                    ATerm z_13 = NULL;
                    t = q_0(t);
                    {
                      z_13 = t;
                      if(((y_13 != NULL) && (y_13 != z_13)))
                        _fail(z_13);
                      else
                        y_13 = z_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_13)), term_q_12), not_null(q_13)), term_u_12));
                      {
                        ATerm x_12 = t;
                        int y_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(y_12);
                          }
                        else
                          {
                            t = x_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, p_0);
                          {
                            t = not_null(w_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_13));
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
  ATerm k_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_stdin_0))
    {
      ATerm m_14 = NULL,o_14 = NULL;
      ATerm z_12;
      z_12 = t;
      {
        ATerm n_14 = NULL;
        t = SSLgetAnnotations(not_null(k_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
      }
      t = z_12;
      {
        ATerm p_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(m_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        t = not_null(o_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm q_49 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_FILE_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        ATerm c_15 = NULL,e_15 = NULL;
        ATerm d_15 = NULL;
        t = SSLgetAnnotations(not_null(y_14));
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
        {
          t = not_null(z_14);
          {
            ATerm g_15 = NULL;
            t = q_49(t);
            {
              e_15 = t;
              {
                ATerm h_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(e_15)), not_null(c_15));
                {
                  h_15 = t;
                  if(((g_15 != NULL) && (g_15 != h_15)))
                    _fail(h_15);
                  else
                    g_15 = h_15;
                }
                t = not_null(g_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(g_13);
        }
      else
        {
          t = e_13;
          t = stdin_0(t);
        }
      LocalPopChoice(d_13);
      t = xtc_transform_file_2(t, y_70, z_70);
    }
  else
    {
      t = c_13;
      t = xtc_transform_term_2(t, y_70, z_70);
    }
  return(t);
}
ATerm sglr_2 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm o_15 = NULL,q_15 = NULL;
    ATerm i_13;
    i_13 = t;
    {
      ATerm p_15 = NULL;
      t = p_54(t);
      {
        p_15 = t;
        if(((o_15 != NULL) && (o_15 != p_15)))
          _fail(p_15);
        else
          o_15 = p_15;
      }
    }
    t = i_13;
    {
      ATerm r_15 = NULL;
      t = q_54(t);
      {
        r_15 = t;
        if(((q_15 != NULL) && (q_15 != r_15)))
          _fail(r_15);
        else
          q_15 = r_15;
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_15)), not_null(o_15)), term_b_6);
    }
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm parse_and_implode_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm v_15 = NULL;
    ATerm w_15 = NULL;
    t = term_j_13;
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0(t);
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = (ATerm) ATempty;
        }
      {
        w_15 = t;
        if(((v_15 != NULL) && (v_15 != w_15)))
          _fail(w_15);
        else
          v_15 = w_15;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(v_15)), term_m_13);
    return(t);
  }
  t = sglr_2(t, get_parse_table_0, w_1);
  {
    ATerm x_1 (ATerm t)
    {
      t = term_n_13;
      {
        ATerm v_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0(t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = v_13;
            t = (ATerm) ATempty;
          }
      }
      return(t);
    }
    t = implode_asfix_1(t, x_1);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm j_16 = NULL;
        t = not_null(d_16);
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              t = (ATerm) ATempty;
            }
          {
            j_16 = t;
            if(((i_16 != NULL) && (i_16 != j_16)))
              _fail(j_16);
            else
              i_16 = j_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(i_16));
          {
            ATerm d_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
                t = conc_more_lists_0(t);
              }
            {
              k_16 = t;
              if(((h_16 != NULL) && (h_16 != k_16)))
                _fail(k_16);
              else
                h_16 = k_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_14, not_null(d_16), not_null(h_16));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sglri_options_0 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm v_16 = NULL;
        v_16 = t;
        o_16 :
        if(!(match_string(v_16, "-p")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm i_14;
        i_14 = t;
        {
          ATerm w_16 = NULL;
          ATerm x_16 = NULL;
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(w_16));
            t = set_config_0(t);
          }
        }
        t = i_14;
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_l_14;
        return(t);
      }
      t = ArgOption_3(t, y_1, z_1, b_2);
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm y_16 = NULL;
              y_16 = t;
              r_16 :
              if(!(match_string(y_16, "--sglr")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm s_14;
              s_14 = t;
              {
                ATerm z_16 = NULL;
                ATerm a_17 = NULL;
                a_17 = t;
                if(((z_16 != NULL) && (z_16 != a_17)))
                  _fail(a_17);
                else
                  z_16 = a_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(z_16));
                  t = extend_config_0(t);
                }
              }
              t = s_14;
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_t_14;
              return(t);
            }
            t = ArgOption_3(t, d_2, e_2, f_2);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm g_2 (ATerm t)
              {
                ATerm b_17 = NULL;
                b_17 = t;
                t_16 :
                if(!(match_string(b_17, "--impl")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_2 (ATerm t)
              {
                ATerm u_14;
                u_14 = t;
                {
                  ATerm c_17 = NULL;
                  ATerm d_17 = NULL;
                  d_17 = t;
                  if(((c_17 != NULL) && (c_17 != d_17)))
                    _fail(d_17);
                  else
                    c_17 = d_17;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_13, not_null(c_17));
                    t = extend_config_0(t);
                  }
                }
                t = u_14;
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = term_v_14;
                return(t);
              }
              t = ArgOption_3(t, g_2, h_2, i_2);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  i_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      t = SSL_copy(not_null(l_17), not_null(m_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_stderr_0))
    {
      ATerm d_18 = NULL,f_18 = NULL;
      ATerm w_14;
      w_14 = t;
      {
        ATerm e_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
      }
      t = w_14;
      {
        ATerm g_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        t = not_null(f_18);
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
  ATerm t_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_stdout_0))
    {
      ATerm v_18 = NULL,x_18 = NULL;
      ATerm a_15;
      a_15 = t;
      {
        ATerm w_18 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          w_18 = t;
          if(((v_18 != NULL) && (v_18 != w_18)))
            _fail(w_18);
          else
            v_18 = w_18;
        }
      }
      t = a_15;
      {
        ATerm y_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(v_18));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_20 = NULL,b_20 = NULL;
  a_20 = t;
  s_19 :
  if(match_cons(a_20, sym_FILE_1))
    {
      b_20 = ATgetArgument(a_20, 0);
      {
        ATerm b_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = NULL;
            ATerm g_20 = NULL;
            t = o_0(t);
            {
              g_20 = t;
              {
                if(((e_20 != NULL) && (e_20 != g_20)))
                  _fail(g_20);
                else
                  e_20 = g_20;
                {
                  ATerm i_15 = t;
                  int j_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(j_15);
                    }
                  else
                    {
                      t = i_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(e_20));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_20));
            LocalPopChoice(f_15);
          }
        else
          {
            t = b_15;
            {
              ATerm k_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_20 = NULL;
                  ATerm j_20 = NULL;
                  t = o_0(t);
                  {
                    j_20 = t;
                    {
                      if(((i_20 != NULL) && (i_20 != j_20)))
                        _fail(j_20);
                      else
                        i_20 = j_20;
                      {
                        ATerm m_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_15 = t;
                            int s_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(s_15);
                              }
                            else
                              {
                                t = n_15;
                                {
                                  ATerm t_15 = t;
                                  int u_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(u_15);
                                    }
                                  else
                                    {
                                      t = t_15;
                                      {
                                        ATerm k_20 = NULL;
                                        k_20 = t;
                                        if(((b_20 != NULL) && (b_20 != k_20)))
                                          _fail(k_20);
                                        else
                                          b_20 = k_20;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = m_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(i_20));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_20));
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  {
                    ATerm m_20 = NULL;
                    t = o_0(t);
                    {
                      m_20 = t;
                      if(((b_20 != NULL) && (b_20 != m_20)))
                        _fail(m_20);
                      else
                        b_20 = m_20;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_20));
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
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
    {
      x_20 = ATgetFirst((ATermList) w_20);
      y_20 = (ATerm) ATgetNext((ATermList) w_20);
      t = not_null(y_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      {
        ATerm x_15;
        x_15 = t;
        {
          ATerm j_21 = NULL;
          ATerm k_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(g_21));
          {
            ATerm y_15 = t;
            int z_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(z_15);
              }
            else
              {
                t = y_15;
                t = (ATerm) ATempty;
              }
            {
              k_21 = t;
              if(((j_21 != NULL) && (j_21 != k_21)))
                _fail(k_21);
              else
                j_21 = k_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_21), not_null(g_21), not_null(j_21));
            t = table_put_0(t);
          }
        }
        t = x_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    ATerm z_21 = NULL;
    ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
    t = p_71(t);
    {
      z_21 = t;
      {
        if(((y_21 != NULL) && (y_21 != z_21)))
          _fail(z_21);
        else
          y_21 = z_21;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_21), term_b_11);
              t = table_get_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            a_22 = t;
            v_21 :
            if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
              {
                b_22 = ATgetFirst((ATermList) a_22);
                c_22 = (ATerm) ATgetNext((ATermList) a_22);
                {
                  if(((x_21 != NULL) && (x_21 != b_22)))
                    _fail(b_22);
                  else
                    x_21 = b_22;
                  {
                    if(((w_21 != NULL) && (w_21 != c_22)))
                      _fail(c_22);
                    else
                      w_21 = c_22;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_21), term_b_11, not_null(w_21));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_21);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm d_22 = NULL;
                              d_22 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_21), not_null(d_22));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
  t = a_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  t = SSL_remove(not_null(n_22));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm))
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_60(t);
      t = b_60(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        t = b_60(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm s_22 = NULL;
  ATerm n_16;
  n_16 = t;
  {
    ATerm t_22 = NULL;
    ATerm u_22 = NULL;
    t = o_71(t);
    {
      t_22 = t;
      {
        if(((s_22 != NULL) && (s_22 != t_22)))
          _fail(t_22);
        else
          s_22 = t_22;
        {
          ATerm v_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), term_b_11);
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                t = (ATerm) ATempty;
              }
            {
              v_22 = t;
              if(((u_22 != NULL) && (u_22 != v_22)))
                _fail(v_22);
              else
                u_22 = v_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_22), term_b_11, (ATerm) ATinsert(CheckATermList(not_null(u_22)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = term_p_12;
    return(t);
  }
  t = begin_scope_1(t, k_2);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm s_16;
      s_16 = t;
      {
        ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
        ATerm u_16 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_17;
            t = table_get_0(t);
            LocalPopChoice(e_17);
          }
        else
          {
            t = u_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          c_23 = t;
          z_22 :
          if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
            {
              d_23 = ATgetFirst((ATermList) c_23);
              e_23 = (ATerm) ATgetNext((ATermList) c_23);
              {
                if(((b_23 != NULL) && (b_23 != d_23)))
                  _fail(d_23);
                else
                  b_23 = d_23;
                {
                  if(((a_23 != NULL) && (a_23 != e_23)))
                    _fail(e_23);
                  else
                    a_23 = e_23;
                  {
                    t = not_null(b_23);
                    {
                      ATerm m_2 (ATerm t)
                      {
                        ATerm g_17 = t;
                        int h_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(h_17);
                          }
                        else
                          {
                            t = g_17;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, m_2);
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
      t = s_16;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_p_12;
          return(t);
        }
        t = end_scope_1(t, n_2);
      }
      return(t);
    }
    t = restore_always_2(t, m_70, l_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm j_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_23 = NULL;
        ATerm i_23 = NULL;
        t = term_u_12;
        {
          t = get_config_0(t);
          {
            i_23 = t;
            if(((h_23 != NULL) && (h_23 != i_23)))
              _fail(i_23);
            else
              h_23 = i_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_23));
        LocalPopChoice(n_17);
      }
    else
      {
        t = j_17;
        t = term_f_6;
      }
    {
      t = n_70(t);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_q_12;
              t = get_config_0(t);
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              t = term_q_17;
            }
          return(t);
        }
        t = copy_to_1(t, p_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, o_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm l_23 = NULL;
    l_23 = t;
    k_23 :
    if(!(match_string(l_23, "-v")))
      {
        if(!(match_string(l_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_s_17;
    t = set_config_0(t);
    t = term_t_17;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = Option_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm o_23 = NULL;
    o_23 = t;
    m_23 :
    if(!(match_string(o_23, "-k")))
      {
        if(!(match_string(o_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm v_17;
    v_17 = t;
    {
      ATerm p_23 = NULL;
      ATerm q_23 = NULL;
      t = string_to_int_0(t);
      {
        q_23 = t;
        if(((p_23 != NULL) && (p_23 != q_23)))
          _fail(q_23);
        else
          p_23 = q_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(p_23));
        t = set_config_0(t);
      }
    }
    t = v_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = ArgOption_3(t, t_2, v_2, w_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  t = SSL_string_to_int(not_null(t_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm b_24 = NULL;
        b_24 = t;
        w_23 :
        if(!(match_string(b_24, "-S")))
          {
            if(!(match_string(b_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_h_18;
        t = set_config_0(t);
        t = term_i_18;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_j_18;
        return(t);
      }
      t = Option_3(t, x_2, y_2, z_2);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm c_24 = NULL;
              c_24 = t;
              x_23 :
              if(!(match_string(c_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm f_24 = NULL;
              ATerm m_18;
              m_18 = t;
              {
                ATerm d_24 = NULL;
                ATerm e_24 = NULL;
                t = string_to_int_0(t);
                {
                  e_24 = t;
                  if(((d_24 != NULL) && (d_24 != e_24)))
                    _fail(e_24);
                  else
                    d_24 = e_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(d_24));
                  t = set_config_0(t);
                }
              }
              t = m_18;
              {
                ATerm g_24 = NULL;
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_24));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_n_18;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, c_3);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm d_3 (ATerm t)
              {
                ATerm h_24 = NULL;
                h_24 = t;
                a_24 :
                if(!(match_string(h_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_p_18;
                t = set_config_0(t);
                t = term_q_18;
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_r_18;
                return(t);
              }
              t = Option_3(t, d_3, e_3, j_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = u_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm n_24 = NULL;
    n_24 = t;
    k_24 :
    if(!(match_string(n_24, "-o")))
      {
        if(!(match_string(n_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm q_24 = NULL;
    ATerm c_19;
    c_19 = t;
    {
      ATerm o_24 = NULL;
      ATerm p_24 = NULL;
      p_24 = t;
      if(((o_24 != NULL) && (o_24 != p_24)))
        _fail(p_24);
      else
        o_24 = p_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(o_24));
        t = set_config_0(t);
      }
    }
    t = c_19;
    {
      ATerm r_24 = NULL;
      r_24 = t;
      if(((q_24 != NULL) && (q_24 != r_24)))
        _fail(r_24);
      else
        q_24 = r_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_24));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_d_19;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm v_24 = NULL;
          v_24 = t;
          u_24 :
          if(!(match_string(v_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_h_19;
          t = set_config_0(t);
          t = term_i_19;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_j_19;
          return(t);
        }
        t = Option_3(t, n_3, p_3, s_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_string(b_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
        {
          c_25 = ATgetFirst((ATermList) b_25);
          d_25 = (ATerm) ATgetNext((ATermList) b_25);
          a_25 :
          if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
            {
              e_25 = ATgetFirst((ATermList) d_25);
              f_25 = (ATerm) ATgetNext((ATermList) d_25);
              {
                ATerm j_25 = NULL;
                ATerm k_19;
                k_19 = t;
                {
                  t = not_null(c_25);
                  t = l_0(t);
                }
                t = k_19;
                {
                  ATerm k_25 = NULL;
                  t = not_null(e_25);
                  {
                    t = m_0(t);
                    {
                      k_25 = t;
                      if(((j_25 != NULL) && (j_25 != k_25)))
                        _fail(k_25);
                      else
                        j_25 = k_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_25)), not_null(j_25));
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
  ATerm t_3 (ATerm t)
  {
    ATerm r_25 = NULL;
    r_25 = t;
    o_25 :
    if(!(match_string(r_25, "-i")))
      {
        if(!(match_string(r_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm u_25 = NULL;
    ATerm l_19;
    l_19 = t;
    {
      ATerm s_25 = NULL;
      ATerm t_25 = NULL;
      t_25 = t;
      if(((s_25 != NULL) && (s_25 != t_25)))
        _fail(t_25);
      else
        s_25 = t_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(s_25));
        t = set_config_0(t);
      }
    }
    t = l_19;
    {
      ATerm v_25 = NULL;
      v_25 = t;
      if(((u_25 != NULL) && (u_25 != v_25)))
        _fail(v_25);
      else
        u_25 = v_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_25));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_m_19;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, w_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_26 = NULL;
  ATerm r_19;
  r_19 = t;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm b_26 = NULL,c_26 = NULL;
      b_26 = t;
      z_25 :
      if(match_cons(b_26, sym_Program_1))
        {
          c_26 = ATgetArgument(b_26, 0);
          if(((a_26 != NULL) && (a_26 != c_26)))
            _fail(c_26);
          else
            a_26 = c_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, x_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_19), not_null(a_26)), term_t_19));
      {
        t = printnl_0(t);
        {
          t = term_w_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, term_v_19));
  {
    t = printnl_0(t);
    {
      t = term_w_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_TicksToSeconds(not_null(f_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym__2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_26), not_null(m_26));
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = SSL_addr(not_null(l_26), not_null(m_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_67 (ATerm), ATerm q_67 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_67(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm t_26 = NULL,u_26 = NULL,w_26 = NULL;
        t_26 = t;
        s_26 :
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            u_26 = ATgetFirst((ATermList) t_26);
            w_26 = (ATerm) ATgetNext((ATermList) t_26);
            {
              ATerm z_26 = NULL;
              ATerm a_27 = NULL;
              t = not_null(w_26);
              {
                t = foldr_2(t, p_67, q_67);
                {
                  a_27 = t;
                  if(((z_26 != NULL) && (z_26 != a_27)))
                    _fail(a_27);
                  else
                    z_26 = a_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(z_26));
                t = q_67(t);
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
ATerm crush_2 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm m_27 = NULL;
  ATerm o_27 = NULL;
  m_27 = t;
  {
    ATerm p_27 = NULL;
    ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
    t = not_null(m_27);
    {
      p_27 = t;
      {
        t = SSL_explode_term(not_null(p_27));
        {
          r_27 = t;
          l_27 :
          if(match_cons(r_27, sym__2))
            {
              s_27 = ATgetArgument(r_27, 0);
              t_27 = ATgetArgument(r_27, 1);
              if(((o_27 != NULL) && (o_27 != t_27)))
                _fail(t_27);
              else
                o_27 = t_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_27);
      t = foldr_2(t, n_66, o_66);
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
    ATerm y_3 (ATerm t)
    {
      t = term_c_18;
      return(t);
    }
    t = crush_2(t, y_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym__2))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      {
        ATerm c_20;
        c_20 = t;
        {
          ATerm d_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_28), not_null(d_28));
              LocalPopChoice(f_20);
            }
          else
            {
              t = d_20;
              t = SSL_gtr(not_null(c_28), not_null(d_28));
            }
        }
        t = c_20;
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
  ATerm j_28 = NULL;
  ATerm h_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
      k_28 = t;
      i_28 :
      if(match_cons(k_28, sym__2))
        {
          l_28 = ATgetArgument(k_28, 0);
          m_28 = ATgetArgument(k_28, 1);
          {
            if(((j_28 != NULL) && (j_28 != l_28)))
              _fail(l_28);
            else
              j_28 = l_28;
            if(((j_28 != NULL) && (j_28 != m_28)))
              _fail(m_28);
            else
              j_28 = m_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_20);
    }
  else
    {
      t = h_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20;
      p_20 = t;
      {
        ATerm p_28 = NULL;
        ATerm q_28 = NULL;
        t = term_x_6;
        {
          t = get_config_0(t);
          {
            q_28 = t;
            if(((p_28 != NULL) && (p_28 != q_28)))
              _fail(q_28);
            else
              p_28 = q_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), term_w_5);
          t = geq_0(t);
        }
      }
      t = p_20;
      t = x_55(t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_28 = NULL,w_28 = NULL;
    ATerm q_20;
    q_20 = t;
    {
      ATerm v_28 = NULL;
      t = run_time_0(t);
      {
        v_28 = t;
        if(((u_28 != NULL) && (u_28 != v_28)))
          _fail(v_28);
        else
          u_28 = v_28;
      }
    }
    t = q_20;
    {
      ATerm x_28 = NULL;
      t = term_r_20;
      {
        t = get_config_0(t);
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), not_null(u_28)), term_s_20), not_null(w_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_4);
  {
    t = term_c_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_Version_0))
    {
      ATerm g_29 = NULL,i_29 = NULL;
      ATerm u_20;
      u_20 = t;
      {
        ATerm h_29 = NULL;
        t = SSLgetAnnotations(not_null(e_29));
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
      }
      t = u_20;
      {
        ATerm j_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_29));
        {
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
        t = not_null(i_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, e_4);
  t = y_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_table_create(not_null(q_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm h_21;
    h_21 = t;
    {
      t = term_i_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_21, term_l_21, not_null(b_30));
          t = table_put_0(t);
        }
      }
    }
    t = h_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  t = SSL_table_destroy(not_null(h_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = SSL_exit(not_null(n_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,d_31 = NULL;
  r_30 = t;
  q_30 :
  if(((ATgetType(r_30) == AT_LIST) && ATisEmpty(r_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
        {
          s_30 = ATgetFirst((ATermList) r_30);
          d_31 = (ATerm) ATgetNext((ATermList) r_30);
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
  ATerm m_21;
  m_21 = t;
  {
    ATerm g_31 = NULL;
    ATerm m_31 = NULL;
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          ATerm i_31 = NULL;
          ATerm l_31 = NULL;
          l_31 = t;
          if(((i_31 != NULL) && (i_31 != l_31)))
            _fail(l_31);
          else
            i_31 = l_31;
          t = (ATerm) ATinsert(ATempty, not_null(i_31));
        }
      }
    {
      m_31 = t;
      if(((g_31 != NULL) && (g_31 != m_31)))
        _fail(m_31);
      else
        g_31 = m_31;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(g_31));
      t = printnl_0(t);
    }
  }
  t = m_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), term_q_21), term_p_21);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm j_32 = NULL,k_32 = NULL,p_32 = NULL;
  p_32 = t;
  i_32 :
  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
    {
      j_32 = ATgetFirst((ATermList) p_32);
      k_32 = (ATerm) ATgetNext((ATermList) p_32);
      {
        ATerm u_32 = NULL;
        t = not_null(k_32);
        {
          ATerm s_21;
          s_21 = t;
          {
            ATerm v_32 = NULL,x_32 = NULL,c_33 = NULL;
            ATerm t_21;
            t_21 = t;
            {
              ATerm w_32 = NULL;
              t = j_0(t);
              {
                w_32 = t;
                if(((v_32 != NULL) && (v_32 != w_32)))
                  _fail(w_32);
                else
                  v_32 = w_32;
              }
            }
            t = t_21;
            {
              ATerm b_33 = NULL;
              t = not_null(j_32);
              {
                t = i_0(t);
                {
                  b_33 = t;
                  if(((x_32 != NULL) && (x_32 != b_33)))
                    _fail(b_33);
                  else
                    x_32 = b_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_32)), not_null(x_32));
                {
                  c_33 = t;
                  if(((u_32 != NULL) && (u_32 != c_33)))
                    _fail(c_33);
                  else
                    u_32 = c_33;
                }
              }
            }
          }
          t = s_21;
          {
            ATerm f_4 (ATerm t)
            {
              t = not_null(u_32);
              return(t);
            }
            t = reverse_acc_2(t, i_0, f_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_32) == AT_LIST) && ATisEmpty(p_32)))
        {
          {
            t = term_b_12;
            t = j_0(t);
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
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm j_33 = NULL;
  ATerm k_33 = NULL;
  t = term_b_12;
  {
    t = h_0(t);
    {
      k_33 = t;
      if(((j_33 != NULL) && (j_33 != k_33)))
        _fail(k_33);
      else
        j_33 = k_33;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_22), not_null(j_33)), term_u_21);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_Program_1))
    {
      s_33 = ATgetArgument(r_33, 0);
      {
        ATerm v_33 = NULL,x_33 = NULL;
        ATerm w_33 = NULL;
        t = SSLgetAnnotations(not_null(r_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        {
          t = not_null(s_33);
          {
            ATerm z_33 = NULL;
            t = d_54(t);
            {
              x_33 = t;
              {
                ATerm a_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_33)), not_null(v_33));
                {
                  a_34 = t;
                  if(((z_33 != NULL) && (z_33 != a_34)))
                    _fail(a_34);
                  else
                    z_33 = a_34;
                }
                t = not_null(z_33);
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
  ATerm j_34 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL;
      t = term_r_20;
      {
        t = get_config_0(t);
        {
          k_34 = t;
          if(((j_34 != NULL) && (j_34 != k_34)))
            _fail(k_34);
          else
            j_34 = k_34;
        }
      }
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm i_4 (ATerm t)
        {
          ATerm j_4 (ATerm t)
          {
            ATerm l_34 = NULL;
            l_34 = t;
            if(((j_34 != NULL) && (j_34 != l_34)))
              _fail(l_34);
            else
              j_34 = l_34;
            return(t);
          }
          t = Program_1(t, j_4);
          return(t);
        }
        t = fetch_1(t, i_4);
      }
    }
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 (ATerm t)
        {
          t = not_null(j_34);
          return(t);
        }
        t = short_description_1(t, k_4);
        t = echo_0(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        {
        }
      }
    {
      t = term_j_22;
      {
        t = echo_0(t);
        {
          t = term_m_22;
          {
            t = table_get_0(t);
            {
              ATerm l_4 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, l_4);
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm m_34 = NULL;
                  ATerm n_34 = NULL;
                  n_34 = t;
                  if(((m_34 != NULL) && (m_34 != n_34)))
                    _fail(n_34);
                  else
                    m_34 = n_34;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_34)), term_o_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_4);
                {
                  ATerm p_22 = t;
                  int q_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_34 = NULL;
                      ATerm p_34 = NULL;
                      ATerm o_4 (ATerm t)
                      {
                        t = not_null(j_34);
                        return(t);
                      }
                      t = long_description_1(t, o_4);
                      {
                        p_34 = t;
                        if(((o_34 != NULL) && (o_34 != p_34)))
                          _fail(p_34);
                        else
                          o_34 = p_34;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(o_34)), term_r_22);
                        t = echo_0(t);
                      }
                      LocalPopChoice(q_22);
                    }
                  else
                    {
                      t = p_22;
                      {
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
ATerm debug_0 (ATerm t)
{
  ATerm w_22;
  w_22 = t;
  {
    ATerm v_34 = NULL;
    ATerm w_34 = NULL;
    w_34 = t;
    if(((v_34 != NULL) && (v_34 != w_34)))
      _fail(w_34);
    else
      v_34 = w_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, not_null(v_34)));
      t = printnl_0(t);
    }
  }
  t = w_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm x_22;
  x_22 = t;
  {
    t = a_72(t);
    t = debug_0(t);
  }
  t = x_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm d_35 = NULL,e_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym_Undefined_1))
    {
      e_35 = ATgetArgument(d_35, 0);
      {
        ATerm h_35 = NULL,j_35 = NULL;
        ATerm i_35 = NULL;
        t = SSLgetAnnotations(not_null(d_35));
        {
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
        }
        {
          t = not_null(e_35);
          {
            ATerm l_35 = NULL;
            t = e_54(t);
            {
              j_35 = t;
              {
                ATerm m_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_35)), not_null(h_35));
                {
                  m_35 = t;
                  if(((l_35 != NULL) && (l_35 != m_35)))
                    _fail(m_35);
                  else
                    l_35 = m_35;
                }
                t = not_null(l_35);
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
ATerm fetch_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm r_35 (ATerm t)
  {
    ATerm y_22 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_61, _id);
        LocalPopChoice(f_23);
      }
    else
      {
        t = y_22;
        t = Cons_2(t, _id, r_35);
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_76 (ATerm))
{
  t = fetch_1(t, f_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_35 = NULL;
  w_35 = t;
  v_35 :
  if(match_cons(w_35, sym_Help_0))
    {
      ATerm y_35 = NULL,a_36 = NULL;
      ATerm g_23;
      g_23 = t;
      {
        ATerm z_35 = NULL;
        t = SSLgetAnnotations(not_null(w_35));
        {
          z_35 = t;
          if(((y_35 != NULL) && (y_35 != z_35)))
            _fail(z_35);
          else
            y_35 = z_35;
        }
      }
      t = g_23;
      {
        ATerm b_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        t = not_null(a_36);
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
  ATerm g_36 = NULL;
  g_36 = t;
  t = SSL_implode_string(not_null(g_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = j_23;
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        l_36 = t;
        k_36 :
        if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
          {
            m_36 = ATgetFirst((ATermList) l_36);
            n_36 = (ATerm) ATgetNext((ATermList) l_36);
            {
              t = not_null(m_36);
              {
                ATerm s_4 (ATerm t)
                {
                  t = not_null(n_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_4);
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
  ATerm x_36 = NULL;
  ATerm z_36 = NULL;
  x_36 = t;
  {
    ATerm a_37 = NULL;
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
    t = not_null(x_36);
    {
      a_37 = t;
      {
        t = SSL_explode_term(not_null(a_37));
        {
          c_37 = t;
          v_36 :
          if(match_cons(c_37, sym__2))
            {
              d_37 = ATgetArgument(c_37, 0);
              e_37 = ATgetArgument(c_37, 1);
              w_36 :
              if(match_string(d_37, ""))
                {
                  if(((z_36 != NULL) && (z_36 != e_37)))
                    _fail(e_37);
                  else
                    z_36 = e_37;
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
      t = not_null(z_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm i_37 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_37);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          t = Nil_0(t);
          t = q_61(t);
        }
      }
    return(t);
  }
  t = i_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym__2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      {
        t = not_null(m_37);
        {
          ATerm u_4 (ATerm t)
          {
            t = not_null(n_37);
            return(t);
          }
          t = at_end_1(t, u_4);
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
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_explode_string(not_null(v_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_47 (ATerm), ATerm v_47 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym__2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      {
        ATerm k_38 = NULL,n_38 = NULL;
        ATerm m_38 = NULL;
        t = SSLgetAnnotations(not_null(e_38));
        {
          m_38 = t;
          if(((k_38 != NULL) && (k_38 != m_38)))
            _fail(m_38);
          else
            k_38 = m_38;
        }
        {
          t = not_null(f_38);
          {
            ATerm p_38 = NULL;
            t = u_47(t);
            {
              n_38 = t;
              {
                t = not_null(g_38);
                {
                  ATerm t_38 = NULL;
                  t = v_47(t);
                  {
                    p_38 = t;
                    {
                      ATerm u_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_38), not_null(p_38)), not_null(k_38));
                      {
                        u_38 = t;
                        if(((t_38 != NULL) && (t_38 != u_38)))
                          _fail(u_38);
                        else
                          t_38 = u_38;
                      }
                      t = not_null(t_38);
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
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym__2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      {
        ATerm i_24;
        i_24 = t;
        t = SSL_printnl(not_null(d_39), not_null(e_39));
        t = i_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm j_24;
  j_24 = t;
  {
    ATerm k_39 = NULL,m_39 = NULL;
    ATerm l_24;
    l_24 = t;
    {
      ATerm l_39 = NULL;
      t = z_71(t);
      {
        l_39 = t;
        if(((k_39 != NULL) && (k_39 != l_39)))
          _fail(l_39);
        else
          k_39 = l_39;
      }
    }
    t = l_24;
    {
      ATerm n_39 = NULL;
      n_39 = t;
      if(((m_39 != NULL) && (m_39 != n_39)))
        _fail(n_39);
      else
        m_39 = n_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), not_null(k_39)));
        t = printnl_0(t);
      }
    }
  }
  t = j_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_61 (ATerm))
{
  ATerm s_39 (ATerm t)
  {
    ATerm m_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = m_24;
        t = Cons_2(t, b_61, s_39);
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  t = SSL_is_string(not_null(u_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = t_24;
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, a_5);
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
              f_40 = t;
              e_40 :
              if(match_cons(f_40, sym_Path_1))
                {
                  g_40 = ATgetArgument(f_40, 0);
                  t = not_null(g_40);
                }
              else
                {
                  if(match_cons(f_40, sym_Var_1))
                    {
                      g_40 = ATgetArgument(f_40, 0);
                      {
                        t = not_null(g_40);
                        {
                          ATerm i_25 = t;
                          int l_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_25);
                            }
                          else
                            {
                              t = i_25;
                              {
                                ATerm b_5 (ATerm t)
                                {
                                  t = term_m_25;
                                  return(t);
                                }
                                t = debug_1(t, b_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_40, sym_Prefix_2))
                        {
                          g_40 = ATgetArgument(f_40, 0);
                          h_40 = ATgetArgument(f_40, 1);
                          {
                            ATerm m_40 = NULL,o_40 = NULL;
                            ATerm n_25;
                            n_25 = t;
                            {
                              ATerm n_40 = NULL;
                              t = not_null(g_40);
                              {
                                t = eval_config_0(t);
                                {
                                  n_40 = t;
                                  if(((m_40 != NULL) && (m_40 != n_40)))
                                    _fail(n_40);
                                  else
                                    m_40 = n_40;
                                }
                              }
                            }
                            t = n_25;
                            {
                              ATerm p_40 = NULL;
                              t = not_null(h_40);
                              {
                                t = eval_config_0(t);
                                {
                                  p_40 = t;
                                  if(((o_40 != NULL) && (o_40 != p_40)))
                                    _fail(p_40);
                                  else
                                    o_40 = p_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), not_null(o_40));
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
  ATerm x_40 = NULL;
  x_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_14, not_null(x_40));
    {
      t = table_get_0(t);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm w_25;
              w_25 = t;
              {
                ATerm z_40 = NULL;
                ATerm a_41 = NULL;
                a_41 = t;
                if(((z_40 != NULL) && (z_40 != a_41)))
                  _fail(a_41);
                else
                  z_40 = a_41;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_14, not_null(x_40), not_null(z_40));
                  t = table_put_0(t);
                }
              }
              t = w_25;
            }
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_59(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym__2))
    {
      g_41 = ATgetArgument(f_41, 0);
      h_41 = ATgetArgument(f_41, 1);
      t = SSL_table_get(not_null(g_41), not_null(h_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym__3))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      r_41 = ATgetArgument(o_41, 2);
      {
        ATerm d_26;
        d_26 = t;
        {
          ATerm w_41 = NULL;
          ATerm x_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_41), not_null(q_41));
          {
            ATerm e_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_26);
              }
            else
              {
                t = e_26;
                t = (ATerm) ATempty;
              }
            {
              x_41 = t;
              if(((w_41 != NULL) && (w_41 != x_41)))
                _fail(x_41);
              else
                w_41 = x_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_41), not_null(q_41), (ATerm) ATinsert(CheckATermList(not_null(w_41)), not_null(r_41)));
            t = table_put_0(t);
          }
        }
        t = d_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm h_42 = NULL;
  ATerm i_42 = NULL;
  t = term_b_12;
  {
    t = k_77(t);
    {
      i_42 = t;
      if(((h_42 != NULL) && (h_42 != i_42)))
        _fail(i_42);
      else
        h_42 = i_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, not_null(h_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_42 = NULL,z_42 = NULL,a_43 = NULL;
  o_42 = t;
  n_42 :
  if(match_string(o_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
        {
          z_42 = ATgetFirst((ATermList) o_42);
          a_43 = (ATerm) ATgetNext((ATermList) o_42);
          {
            ATerm d_43 = NULL;
            ATerm h_26;
            h_26 = t;
            {
              t = not_null(z_42);
              t = a_0(t);
            }
            t = h_26;
            {
              ATerm e_43 = NULL;
              t = term_b_12;
              {
                t = d_0(t);
                {
                  e_43 = t;
                  if(((d_43 != NULL) && (d_43 != e_43)))
                    _fail(e_43);
                  else
                    d_43 = e_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_43)), not_null(d_43));
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
  ATerm c_5 (ATerm t)
  {
    ATerm j_43 = NULL;
    j_43 = t;
    i_43 :
    if(!(match_string(j_43, "--help")))
      {
        if(!(match_string(j_43, "-h")))
          {
            if(!(match_string(j_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_n_26;
    {
      t = set_config_0(t);
      t = term_o_26;
    }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = Option_3(t, c_5, d_5, e_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  l_43 :
  if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
    {
      n_43 = ATgetFirst((ATermList) m_43);
      o_43 = (ATerm) ATgetNext((ATermList) m_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_49 (ATerm), ATerm e_49 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  x_43 :
  if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
    {
      z_43 = ATgetFirst((ATermList) y_43);
      a_44 = (ATerm) ATgetNext((ATermList) y_43);
      {
        ATerm e_44 = NULL,g_44 = NULL;
        ATerm f_44 = NULL;
        t = SSLgetAnnotations(not_null(y_43));
        {
          f_44 = t;
          if(((e_44 != NULL) && (e_44 != f_44)))
            _fail(f_44);
          else
            e_44 = f_44;
        }
        {
          t = not_null(z_43);
          {
            ATerm i_44 = NULL;
            t = d_49(t);
            {
              g_44 = t;
              {
                t = not_null(a_44);
                {
                  ATerm k_44 = NULL;
                  t = e_49(t);
                  {
                    i_44 = t;
                    {
                      ATerm l_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_44)), not_null(g_44)), not_null(e_44));
                      {
                        l_44 = t;
                        if(((k_44 != NULL) && (k_44 != l_44)))
                          _fail(l_44);
                        else
                          k_44 = l_44;
                      }
                      t = not_null(k_44);
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
  ATerm v_44 = NULL;
  v_44 = t;
  u_44 :
  if(((ATgetType(v_44) == AT_LIST) && ATisEmpty(v_44)))
    {
      {
        ATerm x_44 = NULL,z_44 = NULL;
        ATerm q_26;
        q_26 = t;
        {
          ATerm y_44 = NULL;
          t = SSLgetAnnotations(not_null(v_44));
          {
            y_44 = t;
            if(((x_44 != NULL) && (x_44 != y_44)))
              _fail(y_44);
            else
              x_44 = y_44;
          }
        }
        t = q_26;
        {
          ATerm a_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_44));
          {
            a_45 = t;
            if(((z_44 != NULL) && (z_44 != a_45)))
              _fail(a_45);
            else
              z_44 = a_45;
          }
          t = not_null(z_44);
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
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym__2))
    {
      h_45 = ATgetArgument(g_45, 0);
      i_45 = ATgetArgument(g_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_14, not_null(h_45), not_null(i_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm r_26;
  r_26 = t;
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_26;
        t = i_77(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        {
        }
      }
  }
  t = r_26;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm q_45 = NULL;
      ATerm b_27;
      b_27 = t;
      {
        ATerm o_45 = NULL;
        ATerm p_45 = NULL;
        p_45 = t;
        if(((o_45 != NULL) && (o_45 != p_45)))
          _fail(p_45);
        else
          o_45 = p_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_20, not_null(o_45));
          t = set_config_0(t);
        }
      }
      t = b_27;
      {
        ATerm r_45 = NULL;
        r_45 = t;
        if(((q_45 != NULL) && (q_45 != r_45)))
          _fail(r_45);
        else
          q_45 = r_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_45));
      }
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm c_27 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              {
                t = i_77(t);
                t = Cons_2(t, _id, k_5);
              }
            }
          LocalPopChoice(d_27);
        }
      else
        {
          t = c_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_5, k_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
    a_46 = t;
    w_45 :
    if(match_cons(a_46, sym__3))
      {
        b_46 = ATgetArgument(a_46, 0);
        c_46 = ATgetArgument(a_46, 1);
        d_46 = ATgetArgument(a_46, 2);
        {
          if(((x_45 != NULL) && (x_45 != b_46)))
            _fail(b_46);
          else
            x_45 = b_46;
          {
            if(((y_45 != NULL) && (y_45 != c_46)))
              _fail(c_46);
            else
              y_45 = c_46;
            {
              if(((z_45 != NULL) && (z_45 != d_46)))
                _fail(d_46);
              else
                z_45 = d_46;
              t = SSL_table_put(not_null(x_45), not_null(y_45), not_null(z_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm g_46 = NULL;
  ATerm h_27;
  h_27 = t;
  {
    t = term_i_27;
    t = table_put_0(t);
  }
  t = h_27;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_77(t);
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_5);
    {
      ATerm n_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_27;
          u_27 = t;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_26;
                t = get_config_0(t);
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                t = fetch_1(t, Help_0);
              }
          }
          t = u_27;
          {
            t = system_usage_0(t);
            {
              t = term_c_18;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_27);
        }
      else
        {
          t = n_27;
          {
            ATerm x_27 = t;
            int y_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm h_46 = NULL;
                    h_46 = t;
                    if(((g_46 != NULL) && (g_46 != h_46)))
                      _fail(h_46);
                    else
                      g_46 = h_46;
                    return(t);
                  }
                  t = Undefined_1(t, o_5);
                  return(t);
                }
                t = fetch_1(t, m_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), term_z_27);
                    return(t);
                  }
                  t = say_1(t, p_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_27);
              }
            else
              {
                t = x_27;
                {
                }
              }
          }
        }
      {
        ATerm e_28;
        e_28 = t;
        {
          t = term_k_22;
          t = table_destroy_0(t);
        }
        t = e_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  t = parse_options_1(t, e_75);
  {
    t = store_options_0(t);
    {
      t = g_75(t);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_75);
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm h_28 = t;
              int n_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(n_28);
                }
              else
                {
                  t = h_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  t = option_wrap_4(t, i_75, default_usage_0, _id, j_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm o_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_70(t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = o_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = xtc_io_1(t, s_70);
    return(t);
  }
  t = option_wrap_2(t, q_5, r_5);
  return(t);
}
ATerm sglri_0 (ATerm t)
{
  t = xtc_io_wrap_2(t, sglri_options_0, parse_and_implode_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sglri_0(t);
  return(t);
}
