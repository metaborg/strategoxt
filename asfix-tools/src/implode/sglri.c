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
ATerm term_x_27;
ATerm term_g_27;
ATerm term_u_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_f_26;
ATerm term_j_25;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_t_16;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_t_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_b_8;
ATerm term_s_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_b_6;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_i_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_x_8);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_i_11);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_x_11);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_v_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_x_11);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_x_11);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_s_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_x_11);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__3, term_r_22, term_s_22, (ATerm) ATempty);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_asfix_1 (ATerm, ATerm b_54 (ATerm));
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm close_file_0 (ATerm);
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_55 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm j_55 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm l_55 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm l_66 (ATerm), ATerm m_66 (ATerm));
ATerm union_1 (ATerm, ATerm h_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm u_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_70 (ATerm));
ATerm assert_1 (ATerm, ATerm y_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm m_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm a_49 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm sglr_2 (ATerm, ATerm z_53 (ATerm), ATerm a_54 (ATerm));
ATerm parse_and_implode_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm sglri_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_70 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_70 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_69 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm u_69 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm crush_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_74 (ATerm));
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
ATerm Program_1 (ATerm, ATerm n_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm e_47 (ATerm), ATerm f_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_71 (ATerm));
ATerm map_1 (ATerm, ATerm k_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_76 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_76 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_76 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm));
ATerm sglri_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_asfix_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_u_5;
    return(t);
  }
  t = xtc_transform_2(t, b_0, b_54);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_6;
  a_6 = t;
  {
    t = error_0(t);
    {
      t = term_b_6;
      t = exit_0(t);
    }
  }
  t = a_6;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_6;
      t = get_config_0(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      {
        t = (ATerm) ATinsert(ATempty, term_l_6);
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
      t = term_m_6;
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
              t = ReadFromFile_0(t);
              {
                u_2 = t;
                if(((c_2 != NULL) && (c_2 != u_2)))
                  _fail(u_2);
                else
                  c_2 = u_2;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_70, n_70);
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
ATerm call_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      t = SSL_call(not_null(b_4), not_null(c_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = SSL_table_keys(not_null(h_4));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm p_4 = NULL;
        ATerm r_4 = NULL;
        p_4 = t;
        {
          ATerm s_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), not_null(p_4));
          {
            t = table_get_0(t);
            {
              s_4 = t;
              if(((r_4 != NULL) && (r_4 != s_4)))
                _fail(s_4);
              else
                r_4 = s_4;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), not_null(r_4));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6;
      v_6 = t;
      {
        ATerm x_4 = NULL;
        ATerm y_4 = NULL;
        t = term_w_6;
        {
          t = get_config_0(t);
          {
            y_4 = t;
            if(((x_4 != NULL) && (x_4 != y_4)))
              _fail(y_4);
            else
              x_4 = y_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), term_x_6);
          t = geq_0(t);
        }
      }
      t = v_6;
      t = k_55(t);
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
ATerm error_0 (ATerm t)
{
  ATerm y_6;
  y_6 = t;
  {
    ATerm b_5 = NULL;
    ATerm c_5 = NULL;
    c_5 = t;
    if(((b_5 != NULL) && (b_5 != c_5)))
      _fail(c_5);
    else
      b_5 = c_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(b_5));
      t = printnl_0(t);
    }
  }
  t = y_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_5 = NULL;
  ATerm k_5 = NULL,l_5 = NULL;
  i_5 = t;
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_5)));
    {
      t = table_get_0(t);
      {
        m_5 = t;
        g_5 :
        if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
          {
            n_5 = ATgetFirst((ATermList) m_5);
            q_5 = (ATerm) ATgetNext((ATermList) m_5);
            h_5 :
            if(match_cons(n_5, sym__2))
              {
                o_5 = ATgetArgument(n_5, 0);
                p_5 = ATgetArgument(n_5, 1);
                {
                  if(((k_5 != NULL) && (k_5 != o_5)))
                    _fail(o_5);
                  else
                    k_5 = o_5;
                  if(((l_5 != NULL) && (l_5 != p_5)))
                    _fail(p_5);
                  else
                    l_5 = p_5;
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
    t = not_null(l_5);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym__2))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      {
        ATerm c_6 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_5)));
        {
          t = table_get_0(t);
          {
            ATerm e_0 (ATerm t)
            {
              ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
              d_6 = t;
              v_5 :
              if(match_cons(d_6, sym__2))
                {
                  e_6 = ATgetArgument(d_6, 0);
                  f_6 = ATgetArgument(d_6, 1);
                  {
                    if(((z_5 != NULL) && (z_5 != e_6)))
                      _fail(e_6);
                    else
                      z_5 = e_6;
                    if(((c_6 != NULL) && (c_6 != f_6)))
                      _fail(f_6);
                    else
                      c_6 = f_6;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, e_0);
          }
        }
        t = not_null(c_6);
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
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_7;
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
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7;
      q_7 = t;
      {
        ATerm j_6 = NULL;
        ATerm k_6 = NULL;
        t = term_w_6;
        {
          t = get_config_0(t);
          {
            k_6 = t;
            if(((j_6 != NULL) && (j_6 != k_6)))
              _fail(k_6);
            else
              j_6 = k_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), term_s_7);
          t = geq_0(t);
        }
      }
      t = q_7;
      t = j_55(t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8;
      a_8 = t;
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        t = term_w_6;
        {
          t = get_config_0(t);
          {
            o_6 = t;
            if(((n_6 != NULL) && (n_6 != o_6)))
              _fail(o_6);
            else
              n_6 = o_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), term_b_8);
          t = geq_0(t);
        }
      }
      t = a_8;
      t = l_55(t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
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
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym__2))
    {
      t_6 = ATgetArgument(s_6, 0);
      u_6 = ATgetArgument(s_6, 1);
      if(((t_6 != NULL) && (t_6 != u_6)))
        _fail(u_6);
      else
        t_6 = u_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_66 (ATerm), ATerm m_66 (ATerm))
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  z_6 :
  if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
    {
      b_7 = ATgetFirst((ATermList) a_7);
      c_7 = (ATerm) ATgetNext((ATermList) a_7);
      {
        t = m_66(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm f_7 = NULL;
            f_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), not_null(f_7));
              t = l_66(t);
            }
            return(t);
          }
          t = fetch_1(t, r_0);
        }
        t = not_null(c_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym__2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      {
        t = not_null(m_7);
        {
          ATerm r_7 (ATerm t)
          {
            ATerm c_8 = t;
            int h_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_7);
                LocalPopChoice(h_8);
              }
            else
              {
                t = c_8;
                {
                  ATerm i_8 = t;
                  int j_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = not_null(n_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, h_66, s_0);
                      t = r_7(t);
                      LocalPopChoice(j_8);
                    }
                  else
                    {
                      t = i_8;
                      t = Cons_2(t, _id, r_7);
                    }
                }
              }
            return(t);
          }
          t = r_7(t);
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
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym__3))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      z_7 = ATgetArgument(w_7, 2);
      {
        ATerm k_8;
        k_8 = t;
        {
          ATerm d_8 = NULL;
          ATerm e_8 = NULL,g_8 = NULL;
          ATerm f_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), not_null(y_7));
          {
            ATerm l_8 = t;
            int r_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_8);
              }
            else
              {
                t = l_8;
                t = (ATerm) ATempty;
              }
            {
              f_8 = t;
              if(((e_8 != NULL) && (e_8 != f_8)))
                _fail(f_8);
              else
                e_8 = f_8;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(z_7));
            {
              t = union_1(t, eq_0);
              {
                g_8 = t;
                if(((d_8 != NULL) && (d_8 != g_8)))
                  _fail(g_8);
                else
                  d_8 = g_8;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_7), not_null(y_7), not_null(d_8));
            t = table_put_0(t);
          }
        }
        t = k_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym__2))
    {
      p_8 = ATgetArgument(o_8, 0);
      q_8 = ATgetArgument(o_8, 1);
      {
        t = not_null(q_8);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
            t_8 = t;
            m_8 :
            if(match_cons(t_8, sym__2))
              {
                u_8 = ATgetArgument(t_8, 0);
                v_8 = ATgetArgument(t_8, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_8), not_null(u_8), not_null(v_8));
                  t = u_55(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_0);
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
  ATerm b_9 = NULL;
  b_9 = t;
  t = SSL_ReadFromFile(not_null(b_9));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm g_9 = NULL;
  ATerm i_9 = NULL;
  g_9 = t;
  {
    ATerm s_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(g_9)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_8;
      }
    {
      ATerm w_8;
      w_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_7, term_x_8, (ATerm) ATinsert(ATempty, not_null(g_9)));
        t = table_put_0(t);
      }
      t = w_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_y_8;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm z_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(a_9);
            }
          else
            {
              t = z_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_c_9;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm j_9 = NULL;
              j_9 = t;
              if(((i_9 != NULL) && (i_9 != j_9)))
                _fail(j_9);
              else
                i_9 = j_9;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(i_9));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_d_9;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_e_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(g_9)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_c_9;
                              return(t);
                            }
                            t = say_1(t, b_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, a_1);
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
  ATerm n_9 = NULL;
  n_9 = t;
  t = SSL_getenv(not_null(n_9));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_9;
      t = get_config_0(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_9;
            t = getenv_0(t);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_o_9;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm p_9;
    p_9 = t;
    {
      ATerm q_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_9;
          t = table_get_0(t);
          LocalPopChoice(t_9);
        }
      else
        {
          t = q_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_9;
    {
      ATerm e_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_v_9;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, e_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_c_10;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
      {
        t = xtc_load_0(t);
        {
          ATerm d_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = term_c_10;
                return(t);
              }
              t = debug_1(t, n_1);
              return(t);
            }
            t = if_verbose5_1(t, m_1);
          }
        }
      }
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm r_9 = NULL;
        ATerm s_9 = NULL;
        s_9 = t;
        if(((r_9 != NULL) && (r_9 != s_9)))
          _fail(s_9);
        else
          r_9 = s_9;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_10), not_null(r_9)), term_k_10);
          {
            t = error_0(t);
            {
              ATerm o_1 (ATerm t)
              {
                t = term_e_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      t = term_t_10;
                      return(t);
                    }
                    t = debug_1(t, p_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, o_1);
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
ATerm xtc_command_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm w_9 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm x_9 = NULL;
    t = d_70(t);
    {
      t = xtc_find_0(t);
      {
        x_9 = t;
        if(((w_9 != NULL) && (w_9 != x_9)))
          _fail(x_9);
        else
          w_9 = x_9;
      }
    }
  }
  t = u_10;
  {
    ATerm v_10;
    v_10 = t;
    {
      ATerm y_9 = NULL;
      ATerm z_9 = NULL;
      z_9 = t;
      if(((y_9 != NULL) && (y_9 != z_9)))
        _fail(z_9);
      else
        y_9 = z_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(y_9));
        t = call_0(t);
      }
    }
    t = v_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_70 (ATerm))
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      {
        ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
        ATerm w_10;
        w_10 = t;
        {
          ATerm p_10 = NULL;
          ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
          t = y_70(t);
          {
            p_10 = t;
            {
              if(((m_10 != NULL) && (m_10 != p_10)))
                _fail(p_10);
              else
                m_10 = p_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_10), not_null(i_10), not_null(j_10));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_10 = t;
                    int z_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_10), term_i_11);
                        t = table_get_0(t);
                        LocalPopChoice(z_10);
                      }
                    else
                      {
                        t = y_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_10 = t;
                      f_10 :
                      if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
                        {
                          r_10 = ATgetFirst((ATermList) q_10);
                          s_10 = (ATerm) ATgetNext((ATermList) q_10);
                          {
                            if(((n_10 != NULL) && (n_10 != r_10)))
                              _fail(r_10);
                            else
                              n_10 = r_10;
                            {
                              if(((o_10 != NULL) && (o_10 != s_10)))
                                _fail(s_10);
                              else
                                o_10 = s_10;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_10), term_i_11, (ATerm) ATinsert(CheckATermList(not_null(o_10)), (ATerm) ATinsert(CheckATermList(not_null(n_10)), not_null(i_10))));
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
ATerm obsolete_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm j_11;
  j_11 = t;
  {
    t = m_71(t);
    {
      ATerm q_1 (ATerm t)
      {
        t = term_k_11;
        return(t);
      }
      t = debug_1(t, q_1);
    }
  }
  t = j_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
      c_11 = t;
      x_10 :
      if(match_cons(c_11, sym__2))
        {
          d_11 = ATgetArgument(c_11, 0);
          e_11 = ATgetArgument(c_11, 1);
          {
            if(((b_11 != NULL) && (b_11 != d_11)))
              _fail(d_11);
            else
              b_11 = d_11;
            if(((a_11 != NULL) && (a_11 != e_11)))
              _fail(e_11);
            else
              a_11 = e_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_11);
      t = SSL_open_file(not_null(b_11), not_null(a_11));
    }
  else
    {
      t = l_11;
      {
        ATerm f_11 = NULL;
        ATerm g_11 = NULL;
        ATerm r_1 (ATerm t)
        {
          t = term_o_11;
          return(t);
        }
        t = obsolete_1(t, r_1);
        {
          f_11 = t;
          {
            if(((b_11 != NULL) && (b_11 != f_11)))
              _fail(f_11);
            else
              b_11 = f_11;
            {
              ATerm r_11;
              r_11 = t;
              {
                ATerm h_11 = NULL;
                t = term_s_11;
                {
                  h_11 = t;
                  if(((g_11 != NULL) && (g_11 != h_11)))
                    _fail(h_11);
                  else
                    g_11 = h_11;
                }
              }
              t = r_11;
              t = SSL_open_file(not_null(b_11), not_null(g_11));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm p_11 = NULL;
  n_11 = t;
  {
    ATerm t_11;
    t_11 = t;
    {
      ATerm q_11 = NULL;
      t = term_w_11;
      {
        q_11 = t;
        if(((p_11 != NULL) && (p_11 != q_11)))
          _fail(q_11);
        else
          p_11 = q_11;
      }
    }
    t = t_11;
    {
      t = SSL_open_file(not_null(n_11), not_null(p_11));
      t = SSL_close_file(not_null(n_11));
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
  ATerm u_11 = NULL;
  ATerm v_11 = NULL;
  t = term_x_11;
  {
    t = new_0(t);
    {
      v_11 = t;
      if(((u_11 != NULL) && (u_11 != v_11)))
        _fail(v_11);
      else
        u_11 = v_11;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), term_y_11);
    {
      t = conc_strings_0(t);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
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
  ATerm z_11 = NULL;
  t = new_file_0(t);
  {
    z_11 = t;
    {
      ATerm c_12;
      c_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), term_s_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), term_x_11);
            {
              ATerm s_1 (ATerm t)
              {
                t = term_d_12;
                return(t);
              }
              t = assert_1(t, s_1);
            }
          }
        }
      }
      t = c_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_stdin_0))
    {
      ATerm l_12 = NULL;
      ATerm m_12 = NULL;
      ATerm n_12 = NULL;
      t = xtc_new_file_0(t);
      {
        m_12 = t;
        {
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
          {
            ATerm o_12 = NULL;
            t = q_0(t);
            {
              o_12 = t;
              if(((n_12 != NULL) && (n_12 != o_12)))
                _fail(o_12);
              else
                n_12 = o_12;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_12)), term_e_12));
              {
                ATerm f_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = f_12;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, p_0);
                  {
                    t = not_null(l_12);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_12));
    }
  else
    {
      if(match_cons(j_12, sym_FILE_1))
        {
          k_12 = ATgetArgument(j_12, 0);
          {
            ATerm q_12 = NULL;
            ATerm r_12 = NULL;
            t = not_null(k_12);
            {
              ATerm s_12 = NULL;
              t = xtc_new_file_0(t);
              {
                r_12 = t;
                {
                  if(((q_12 != NULL) && (q_12 != r_12)))
                    _fail(r_12);
                  else
                    q_12 = r_12;
                  {
                    ATerm t_12 = NULL;
                    t = q_0(t);
                    {
                      t_12 = t;
                      if(((s_12 != NULL) && (s_12 != t_12)))
                        _fail(t_12);
                      else
                        s_12 = t_12;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_12)), term_e_12), not_null(k_12)), term_h_12));
                      {
                        ATerm p_12 = t;
                        int u_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(u_12);
                          }
                        else
                          {
                            t = p_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, p_0);
                          {
                            t = not_null(q_12);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_12));
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
  ATerm e_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_stdin_0))
    {
      ATerm g_13 = NULL,i_13 = NULL;
      ATerm v_12;
      v_12 = t;
      {
        ATerm h_13 = NULL;
        t = SSLgetAnnotations(not_null(e_13));
        {
          h_13 = t;
          if(((g_13 != NULL) && (g_13 != h_13)))
            _fail(h_13);
          else
            g_13 = h_13;
        }
      }
      t = v_12;
      {
        ATerm j_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(g_13));
        {
          j_13 = t;
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
        }
        t = not_null(i_13);
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
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym_FILE_1))
    {
      t_13 = ATgetArgument(s_13, 0);
      {
        ATerm w_13 = NULL,y_13 = NULL;
        ATerm x_13 = NULL;
        t = SSLgetAnnotations(not_null(s_13));
        {
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
        }
        {
          t = not_null(t_13);
          {
            ATerm a_14 = NULL;
            t = a_49(t);
            {
              y_13 = t;
              {
                ATerm b_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(y_13)), not_null(w_13));
                {
                  b_14 = t;
                  if(((a_14 != NULL) && (a_14 != b_14)))
                    _fail(b_14);
                  else
                    a_14 = b_14;
                }
                t = not_null(a_14);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          t = stdin_0(t);
        }
      LocalPopChoice(x_12);
      t = xtc_transform_file_2(t, f_70, g_70);
    }
  else
    {
      t = w_12;
      t = xtc_transform_term_2(t, f_70, g_70);
    }
  return(t);
}
ATerm sglr_2 (ATerm t, ATerm z_53 (ATerm), ATerm a_54 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    t = term_a_13;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm i_14 = NULL,k_14 = NULL;
    ATerm b_13;
    b_13 = t;
    {
      ATerm j_14 = NULL;
      t = z_53(t);
      {
        j_14 = t;
        if(((i_14 != NULL) && (i_14 != j_14)))
          _fail(j_14);
        else
          i_14 = j_14;
      }
    }
    t = b_13;
    {
      ATerm l_14 = NULL;
      t = a_54(t);
      {
        l_14 = t;
        if(((k_14 != NULL) && (k_14 != l_14)))
          _fail(l_14);
        else
          k_14 = l_14;
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_14)), not_null(i_14)), term_i_6);
    }
    return(t);
  }
  t = xtc_transform_2(t, t_1, u_1);
  return(t);
}
ATerm parse_and_implode_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm p_14 = NULL;
    ATerm q_14 = NULL;
    t = term_c_13;
    {
      ATerm f_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0(t);
          LocalPopChoice(k_13);
        }
      else
        {
          t = f_13;
          t = (ATerm) ATempty;
        }
      {
        q_14 = t;
        if(((p_14 != NULL) && (p_14 != q_14)))
          _fail(q_14);
        else
          p_14 = q_14;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(p_14)), term_l_13);
    return(t);
  }
  t = sglr_2(t, get_parse_table_0, v_1);
  {
    ATerm w_1 (ATerm t)
    {
      t = term_m_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0(t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = (ATerm) ATempty;
          }
      }
      return(t);
    }
    t = implode_asfix_1(t, w_1);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm b_15 = NULL;
        ATerm c_15 = NULL,e_15 = NULL;
        ATerm d_15 = NULL;
        t = not_null(x_14);
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = (ATerm) ATempty;
            }
          {
            d_15 = t;
            if(((c_15 != NULL) && (c_15 != d_15)))
              _fail(d_15);
            else
              c_15 = d_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), not_null(c_15));
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = conc_more_lists_0(t);
              }
            {
              e_15 = t;
              if(((b_15 != NULL) && (b_15 != e_15)))
                _fail(e_15);
              else
                b_15 = e_15;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_13, not_null(x_14), not_null(b_15));
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
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm o_15 = NULL;
        o_15 = t;
        i_15 :
        if(!(match_string(o_15, "-p")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm e_14;
        e_14 = t;
        {
          ATerm p_15 = NULL;
          ATerm q_15 = NULL;
          q_15 = t;
          if(((p_15 != NULL) && (p_15 != q_15)))
            _fail(q_15);
          else
            p_15 = q_15;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(p_15));
            t = set_config_0(t);
          }
        }
        t = e_14;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_f_14;
        return(t);
      }
      t = ArgOption_3(t, x_1, y_1, z_1);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm r_15 = NULL;
              r_15 = t;
              k_15 :
              if(!(match_string(r_15, "--sglr")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm m_14;
              m_14 = t;
              {
                ATerm s_15 = NULL;
                ATerm t_15 = NULL;
                t_15 = t;
                if(((s_15 != NULL) && (s_15 != t_15)))
                  _fail(t_15);
                else
                  s_15 = t_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(s_15));
                  t = extend_config_0(t);
                }
              }
              t = m_14;
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_n_14;
              return(t);
            }
            t = ArgOption_3(t, b_2, d_2, e_2);
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
              ATerm f_2 (ATerm t)
              {
                ATerm u_15 = NULL;
                u_15 = t;
                m_15 :
                if(!(match_string(u_15, "--impl")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                ATerm o_14;
                o_14 = t;
                {
                  ATerm v_15 = NULL;
                  ATerm w_15 = NULL;
                  w_15 = t;
                  if(((v_15 != NULL) && (v_15 != w_15)))
                    _fail(w_15);
                  else
                    v_15 = w_15;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_13, not_null(v_15));
                    t = extend_config_0(t);
                  }
                }
                t = o_14;
                return(t);
              }
              ATerm h_2 (ATerm t)
              {
                t = term_r_14;
                return(t);
              }
              t = ArgOption_3(t, f_2, g_2, h_2);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      t = SSL_copy(not_null(d_16), not_null(e_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym_stderr_0))
    {
      ATerm p_16 = NULL,r_16 = NULL;
      ATerm s_14;
      s_14 = t;
      {
        ATerm q_16 = NULL;
        t = SSLgetAnnotations(not_null(m_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
      }
      t = s_14;
      {
        ATerm s_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(p_16));
        {
          s_16 = t;
          if(((r_16 != NULL) && (r_16 != s_16)))
            _fail(s_16);
          else
            r_16 = s_16;
        }
        t = not_null(r_16);
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
  ATerm a_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_stdout_0))
    {
      ATerm c_17 = NULL,e_17 = NULL;
      ATerm t_14;
      t_14 = t;
      {
        ATerm d_17 = NULL;
        t = SSLgetAnnotations(not_null(a_17));
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
      }
      t = t_14;
      {
        ATerm g_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(c_17));
        {
          g_17 = t;
          if(((e_17 != NULL) && (e_17 != g_17)))
            _fail(g_17);
          else
            e_17 = g_17;
        }
        t = not_null(e_17);
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
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_FILE_1))
    {
      q_17 = ATgetArgument(p_17, 0);
      {
        ATerm u_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_17 = NULL;
            ATerm t_17 = NULL;
            t = o_0(t);
            {
              t_17 = t;
              {
                if(((s_17 != NULL) && (s_17 != t_17)))
                  _fail(t_17);
                else
                  s_17 = t_17;
                {
                  ATerm a_15 = t;
                  int f_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(f_15);
                    }
                  else
                    {
                      t = a_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(s_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_17));
            LocalPopChoice(z_14);
          }
        else
          {
            t = u_14;
            {
              ATerm x_17 = NULL;
              ATerm y_17 = NULL;
              t = o_0(t);
              {
                y_17 = t;
                {
                  if(((x_17 != NULL) && (x_17 != y_17)))
                    _fail(y_17);
                  else
                    x_17 = y_17;
                  {
                    ATerm g_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm h_15 = t;
                        int j_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(j_15);
                          }
                        else
                          {
                            t = h_15;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = g_15;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(x_17));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_17));
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  j_18 :
  if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
    {
      l_18 = ATgetFirst((ATermList) k_18);
      m_18 = (ATerm) ATgetNext((ATermList) k_18);
      t = not_null(m_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym__2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      {
        ATerm l_15;
        l_15 = t;
        {
          ATerm c_19 = NULL;
          ATerm d_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(u_18));
          {
            ATerm n_15 = t;
            int x_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_15);
              }
            else
              {
                t = n_15;
                t = (ATerm) ATempty;
              }
            {
              d_19 = t;
              if(((c_19 != NULL) && (c_19 != d_19)))
                _fail(d_19);
              else
                c_19 = d_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_18), not_null(u_18), not_null(c_19));
            t = table_put_0(t);
          }
        }
        t = l_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm w_19 = NULL,y_19 = NULL,z_19 = NULL;
  ATerm y_15;
  y_15 = t;
  {
    ATerm a_20 = NULL;
    ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
    t = v_70(t);
    {
      a_20 = t;
      {
        if(((z_19 != NULL) && (z_19 != a_20)))
          _fail(a_20);
        else
          z_19 = a_20;
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), term_i_11);
              t = table_get_0(t);
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_20 = t;
            v_19 :
            if(((ATgetType(b_20) == AT_LIST) && !(ATisEmpty(b_20))))
              {
                c_20 = ATgetFirst((ATermList) b_20);
                d_20 = (ATerm) ATgetNext((ATermList) b_20);
                {
                  if(((y_19 != NULL) && (y_19 != c_20)))
                    _fail(c_20);
                  else
                    y_19 = c_20;
                  {
                    if(((w_19 != NULL) && (w_19 != d_20)))
                      _fail(d_20);
                    else
                      w_19 = d_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_19), term_i_11, not_null(w_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_19);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm e_20 = NULL;
                              e_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(e_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_2);
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
  t = y_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  t = SSL_remove(not_null(k_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm))
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_59(t);
      t = k_59(t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        t = k_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm p_20 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    ATerm q_20 = NULL;
    ATerm r_20 = NULL;
    t = u_70(t);
    {
      q_20 = t;
      {
        if(((p_20 != NULL) && (p_20 != q_20)))
          _fail(q_20);
        else
          p_20 = q_20;
        {
          ATerm s_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), term_i_11);
          {
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_16);
              }
            else
              {
                t = i_16;
                t = (ATerm) ATempty;
              }
            {
              s_20 = t;
              if(((r_20 != NULL) && (r_20 != s_20)))
                _fail(s_20);
              else
                r_20 = s_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_20), term_i_11, (ATerm) ATinsert(CheckATermList(not_null(r_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm x_20 = NULL,y_20 = NULL;
  ATerm j_2 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  t = begin_scope_1(t, j_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm k_16;
      k_16 = t;
      {
        ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_16;
            t = table_get_0(t);
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          z_20 = t;
          w_20 :
          if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
            {
              a_21 = ATgetFirst((ATermList) z_20);
              b_21 = (ATerm) ATgetNext((ATermList) z_20);
              {
                if(((y_20 != NULL) && (y_20 != a_21)))
                  _fail(a_21);
                else
                  y_20 = a_21;
                {
                  if(((x_20 != NULL) && (x_20 != b_21)))
                    _fail(b_21);
                  else
                    x_20 = b_21;
                  {
                    t = not_null(y_20);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        ATerm u_16 = t;
                        int v_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(v_16);
                          }
                        else
                          {
                            t = u_16;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, l_2);
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
      t = k_16;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = end_scope_1(t, m_2);
      }
      return(t);
    }
    t = restore_always_2(t, t_69, k_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL;
        ATerm k_21 = NULL;
        t = term_h_12;
        {
          t = get_config_0(t);
          {
            k_21 = t;
            if(((j_21 != NULL) && (j_21 != k_21)))
              _fail(k_21);
            else
              j_21 = k_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_21));
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = term_m_6;
      }
    {
      t = u_69(t);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm y_16 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_e_12;
              t = get_config_0(t);
              LocalPopChoice(b_17);
            }
          else
            {
              t = y_16;
              t = term_f_17;
            }
          return(t);
        }
        t = copy_to_1(t, o_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, n_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm n_21 = NULL;
    n_21 = t;
    m_21 :
    if(!(match_string(n_21, "-v")))
      {
        if(!(match_string(n_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_i_17;
    t = set_config_0(t);
    t = term_j_17;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_k_17;
    return(t);
  }
  t = Option_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm q_21 = NULL;
    q_21 = t;
    o_21 :
    if(!(match_string(q_21, "-k")))
      {
        if(!(match_string(q_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm l_17;
    l_17 = t;
    {
      ATerm r_21 = NULL;
      ATerm s_21 = NULL;
      t = string_to_int_0(t);
      {
        s_21 = t;
        if(((r_21 != NULL) && (r_21 != s_21)))
          _fail(s_21);
        else
          r_21 = s_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(r_21));
        t = set_config_0(t);
      }
    }
    t = l_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_n_17;
    return(t);
  }
  t = ArgOption_3(t, s_2, t_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_string_to_int(not_null(v_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm h_22 = NULL;
        h_22 = t;
        c_22 :
        if(!(match_string(h_22, "-S")))
          {
            if(!(match_string(h_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_w_17;
        t = set_config_0(t);
        t = term_z_17;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_a_18;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      LocalPopChoice(u_17);
    }
  else
    {
      t = r_17;
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm i_22 = NULL;
              i_22 = t;
              d_22 :
              if(!(match_string(i_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm l_22 = NULL;
              ATerm d_18;
              d_18 = t;
              {
                ATerm j_22 = NULL;
                ATerm k_22 = NULL;
                t = string_to_int_0(t);
                {
                  k_22 = t;
                  if(((j_22 != NULL) && (j_22 != k_22)))
                    _fail(k_22);
                  else
                    j_22 = k_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_6, not_null(j_22));
                  t = set_config_0(t);
                }
              }
              t = d_18;
              {
                ATerm m_22 = NULL;
                m_22 = t;
                if(((l_22 != NULL) && (l_22 != m_22)))
                  _fail(m_22);
                else
                  l_22 = m_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_22));
              }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_e_18;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, b_3);
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm c_3 (ATerm t)
              {
                ATerm n_22 = NULL;
                n_22 = t;
                g_22 :
                if(!(match_string(n_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_g_18;
                t = set_config_0(t);
                t = term_h_18;
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_i_18;
                return(t);
              }
              t = Option_3(t, c_3, d_3, e_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm t_22 = NULL;
    t_22 = t;
    q_22 :
    if(!(match_string(t_22, "-o")))
      {
        if(!(match_string(t_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm w_22 = NULL;
    ATerm v_18;
    v_18 = t;
    {
      ATerm u_22 = NULL;
      ATerm v_22 = NULL;
      v_22 = t;
      if(((u_22 != NULL) && (u_22 != v_22)))
        _fail(v_22);
      else
        u_22 = v_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(u_22));
        t = set_config_0(t);
      }
    }
    t = v_18;
    {
      ATerm x_22 = NULL;
      x_22 = t;
      if(((w_22 != NULL) && (w_22 != x_22)))
        _fail(x_22);
      else
        w_22 = x_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_22));
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm b_23 = NULL;
          b_23 = t;
          a_23 :
          if(!(match_string(b_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = term_a_19;
          t = set_config_0(t);
          t = term_b_19;
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_e_19;
          return(t);
        }
        t = Option_3(t, m_3, n_3, p_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  h_23 = t;
  f_23 :
  if(match_string(h_23, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
        {
          i_23 = ATgetFirst((ATermList) h_23);
          j_23 = (ATerm) ATgetNext((ATermList) h_23);
          g_23 :
          if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
            {
              k_23 = ATgetFirst((ATermList) j_23);
              l_23 = (ATerm) ATgetNext((ATermList) j_23);
              {
                ATerm p_23 = NULL;
                ATerm f_19;
                f_19 = t;
                {
                  t = not_null(i_23);
                  t = l_0(t);
                }
                t = f_19;
                {
                  ATerm q_23 = NULL;
                  t = not_null(k_23);
                  {
                    t = m_0(t);
                    {
                      q_23 = t;
                      if(((p_23 != NULL) && (p_23 != q_23)))
                        _fail(q_23);
                      else
                        p_23 = q_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_23)), not_null(p_23));
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
  ATerm s_3 (ATerm t)
  {
    ATerm x_23 = NULL;
    x_23 = t;
    u_23 :
    if(!(match_string(x_23, "-i")))
      {
        if(!(match_string(x_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm a_24 = NULL;
    ATerm g_19;
    g_19 = t;
    {
      ATerm y_23 = NULL;
      ATerm z_23 = NULL;
      z_23 = t;
      if(((y_23 != NULL) && (y_23 != z_23)))
        _fail(z_23);
      else
        y_23 = z_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(y_23));
        t = set_config_0(t);
      }
    }
    t = g_19;
    {
      ATerm b_24 = NULL;
      b_24 = t;
      if(((a_24 != NULL) && (a_24 != b_24)))
        _fail(b_24);
      else
        a_24 = b_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_24));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_h_19;
    return(t);
  }
  t = ArgOption_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_24 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm h_24 = NULL,i_24 = NULL;
      h_24 = t;
      f_24 :
      if(match_cons(h_24, sym_Program_1))
        {
          i_24 = ATgetArgument(h_24, 0);
          if(((g_24 != NULL) && (g_24 != i_24)))
            _fail(i_24);
          else
            g_24 = i_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, w_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_19), not_null(g_24)), term_n_19));
      {
        t = printnl_0(t);
        {
          t = term_b_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, term_p_19));
  {
    t = printnl_0(t);
    {
      t = term_b_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  t = SSL_TicksToSeconds(not_null(l_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_24), not_null(s_24));
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = SSL_addr(not_null(r_24), not_null(s_24));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_66(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
        z_24 = t;
        y_24 :
        if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
          {
            a_25 = ATgetFirst((ATermList) z_24);
            b_25 = (ATerm) ATgetNext((ATermList) z_24);
            {
              ATerm e_25 = NULL;
              ATerm f_25 = NULL;
              t = not_null(b_25);
              {
                t = foldr_2(t, y_66, z_66);
                {
                  f_25 = t;
                  if(((e_25 != NULL) && (e_25 != f_25)))
                    _fail(f_25);
                  else
                    e_25 = f_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_25), not_null(e_25));
                t = z_66(t);
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
ATerm crush_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm m_25 = NULL;
  ATerm o_25 = NULL;
  m_25 = t;
  {
    ATerm p_25 = NULL;
    ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
    t = not_null(m_25);
    {
      p_25 = t;
      {
        t = SSL_explode_term(not_null(p_25));
        {
          r_25 = t;
          l_25 :
          if(match_cons(r_25, sym__2))
            {
              s_25 = ATgetArgument(r_25, 0);
              t_25 = ATgetArgument(r_25, 1);
              if(((o_25 != NULL) && (o_25 != t_25)))
                _fail(t_25);
              else
                o_25 = t_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_25);
      t = foldr_2(t, w_65, x_65);
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
    ATerm x_3 (ATerm t)
    {
      t = term_v_17;
      return(t);
    }
    t = crush_2(t, x_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym__2))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      {
        ATerm u_19;
        u_19 = t;
        {
          ATerm x_19 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_26), not_null(b_26));
              LocalPopChoice(f_20);
            }
          else
            {
              t = x_19;
              t = SSL_gtr(not_null(a_26), not_null(b_26));
            }
        }
        t = u_19;
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
  ATerm h_26 = NULL;
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      i_26 = t;
      g_26 :
      if(match_cons(i_26, sym__2))
        {
          j_26 = ATgetArgument(i_26, 0);
          k_26 = ATgetArgument(i_26, 1);
          {
            if(((h_26 != NULL) && (h_26 != j_26)))
              _fail(j_26);
            else
              h_26 = j_26;
            if(((h_26 != NULL) && (h_26 != k_26)))
              _fail(k_26);
            else
              h_26 = k_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_55 (ATerm))
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20;
      l_20 = t;
      {
        ATerm o_26 = NULL;
        ATerm p_26 = NULL;
        t = term_w_6;
        {
          t = get_config_0(t);
          {
            p_26 = t;
            if(((o_26 != NULL) && (o_26 != p_26)))
              _fail(p_26);
            else
              o_26 = p_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), term_b_6);
          t = geq_0(t);
        }
      }
      t = l_20;
      t = g_55(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm v_26 = NULL,a_27 = NULL;
    ATerm m_20;
    m_20 = t;
    {
      ATerm w_26 = NULL;
      t = run_time_0(t);
      {
        w_26 = t;
        if(((v_26 != NULL) && (v_26 != w_26)))
          _fail(w_26);
        else
          v_26 = w_26;
      }
    }
    t = m_20;
    {
      ATerm b_27 = NULL;
      t = term_n_20;
      {
        t = get_config_0(t);
        {
          b_27 = t;
          if(((a_27 != NULL) && (a_27 != b_27)))
            _fail(b_27);
          else
            a_27 = b_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), not_null(v_26)), term_o_20), not_null(a_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_3);
  {
    t = term_v_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Version_0))
    {
      ATerm k_27 = NULL,m_27 = NULL;
      ATerm u_20;
      u_20 = t;
      {
        ATerm l_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
      }
      t = u_20;
      {
        ATerm n_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        t = not_null(m_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm v_20 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = v_20;
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, d_4);
  t = e_74(t);
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
  ATerm y_27 = NULL;
  y_27 = t;
  {
    ATerm f_21;
    f_21 = t;
    {
      t = term_g_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_21, term_h_21, not_null(y_27));
          t = table_put_0(t);
        }
      }
    }
    t = f_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_table_destroy(not_null(c_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_exit(not_null(g_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  j_28 :
  if(((ATgetType(k_28) == AT_LIST) && ATisEmpty(k_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
        {
          l_28 = ATgetFirst((ATermList) k_28);
          m_28 = (ATerm) ATgetNext((ATermList) k_28);
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
  ATerm i_21;
  i_21 = t;
  {
    ATerm p_28 = NULL;
    ATerm s_28 = NULL;
    ATerm l_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = l_21;
        {
          ATerm q_28 = NULL;
          ATerm r_28 = NULL;
          r_28 = t;
          if(((q_28 != NULL) && (q_28 != r_28)))
            _fail(r_28);
          else
            q_28 = r_28;
          t = (ATerm) ATinsert(ATempty, not_null(q_28));
        }
      }
    {
      s_28 = t;
      if(((p_28 != NULL) && (p_28 != s_28)))
        _fail(s_28);
      else
        p_28 = s_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(p_28));
      t = printnl_0(t);
    }
  }
  t = i_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_21), term_u_21), term_t_21);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  d_29 = t;
  a_29 :
  if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
    {
      b_29 = ATgetFirst((ATermList) d_29);
      c_29 = (ATerm) ATgetNext((ATermList) d_29);
      {
        ATerm i_29 = NULL;
        t = not_null(c_29);
        {
          ATerm x_21;
          x_21 = t;
          {
            ATerm l_29 = NULL,s_29 = NULL,u_29 = NULL;
            ATerm y_21;
            y_21 = t;
            {
              ATerm m_29 = NULL;
              t = j_0(t);
              {
                m_29 = t;
                if(((l_29 != NULL) && (l_29 != m_29)))
                  _fail(m_29);
                else
                  l_29 = m_29;
              }
            }
            t = y_21;
            {
              ATerm t_29 = NULL;
              t = not_null(b_29);
              {
                t = i_0(t);
                {
                  t_29 = t;
                  if(((s_29 != NULL) && (s_29 != t_29)))
                    _fail(t_29);
                  else
                    s_29 = t_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_29)), not_null(s_29));
                {
                  u_29 = t;
                  if(((i_29 != NULL) && (i_29 != u_29)))
                    _fail(u_29);
                  else
                    i_29 = u_29;
                }
              }
            }
          }
          t = x_21;
          {
            ATerm e_4 (ATerm t)
            {
              t = not_null(i_29);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_29) == AT_LIST) && ATisEmpty(d_29)))
        {
          {
            t = term_x_11;
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
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm f_30 = NULL;
  ATerm g_30 = NULL;
  t = term_x_11;
  {
    t = h_0(t);
    {
      g_30 = t;
      if(((f_30 != NULL) && (f_30 != g_30)))
        _fail(g_30);
      else
        f_30 = g_30;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_22), not_null(f_30)), term_z_21);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_53 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  w_30 :
  if(match_cons(a_31, sym_Program_1))
    {
      b_31 = ATgetArgument(a_31, 0);
      {
        ATerm r_31 = NULL,t_31 = NULL;
        ATerm s_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          s_31 = t;
          if(((r_31 != NULL) && (r_31 != s_31)))
            _fail(s_31);
          else
            r_31 = s_31;
        }
        {
          t = not_null(b_31);
          {
            ATerm v_31 = NULL;
            t = n_53(t);
            {
              t_31 = t;
              {
                ATerm a_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_31)), not_null(r_31));
                {
                  a_32 = t;
                  if(((v_31 != NULL) && (v_31 != a_32)))
                    _fail(a_32);
                  else
                    v_31 = a_32;
                }
                t = not_null(v_31);
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
  ATerm o_32 = NULL;
  ATerm b_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_32 = NULL;
      t = term_n_20;
      {
        t = get_config_0(t);
        {
          p_32 = t;
          if(((o_32 != NULL) && (o_32 != p_32)))
            _fail(p_32);
          else
            o_32 = p_32;
        }
      }
      LocalPopChoice(e_22);
    }
  else
    {
      t = b_22;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            ATerm q_32 = NULL;
            q_32 = t;
            if(((o_32 != NULL) && (o_32 != q_32)))
              _fail(q_32);
            else
              o_32 = q_32;
            return(t);
          }
          t = Program_1(t, i_4);
          return(t);
        }
        t = fetch_1(t, g_4);
      }
    }
  {
    ATerm f_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 (ATerm t)
        {
          t = not_null(o_32);
          return(t);
        }
        t = short_description_1(t, j_4);
        t = echo_0(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = f_22;
        {
        }
      }
    {
      t = term_p_22;
      {
        t = echo_0(t);
        {
          t = term_y_22;
          {
            t = table_get_0(t);
            {
              ATerm k_4 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, k_4);
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm r_32 = NULL;
                  ATerm s_32 = NULL;
                  s_32 = t;
                  if(((r_32 != NULL) && (r_32 != s_32)))
                    _fail(s_32);
                  else
                    r_32 = s_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_32)), term_z_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_4);
                {
                  ATerm c_23 = t;
                  int d_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_32 = NULL;
                      ATerm u_32 = NULL;
                      ATerm m_4 (ATerm t)
                      {
                        t = not_null(o_32);
                        return(t);
                      }
                      t = long_description_1(t, m_4);
                      {
                        u_32 = t;
                        if(((t_32 != NULL) && (t_32 != u_32)))
                          _fail(u_32);
                        else
                          t_32 = u_32;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(t_32)), term_e_23);
                        t = echo_0(t);
                      }
                      LocalPopChoice(d_23);
                    }
                  else
                    {
                      t = c_23;
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
  ATerm m_23;
  m_23 = t;
  {
    ATerm a_33 = NULL;
    ATerm b_33 = NULL;
    b_33 = t;
    if(((a_33 != NULL) && (a_33 != b_33)))
      _fail(b_33);
    else
      a_33 = b_33;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(a_33)));
      t = printnl_0(t);
    }
  }
  t = m_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm n_23;
  n_23 = t;
  {
    t = g_71(t);
    t = debug_0(t);
  }
  t = n_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_53 (ATerm))
{
  ATerm i_33 = NULL,j_33 = NULL;
  i_33 = t;
  h_33 :
  if(match_cons(i_33, sym_Undefined_1))
    {
      j_33 = ATgetArgument(i_33, 0);
      {
        ATerm m_33 = NULL,o_33 = NULL;
        ATerm n_33 = NULL;
        t = SSLgetAnnotations(not_null(i_33));
        {
          n_33 = t;
          if(((m_33 != NULL) && (m_33 != n_33)))
            _fail(n_33);
          else
            m_33 = n_33;
        }
        {
          t = not_null(j_33);
          {
            ATerm q_33 = NULL;
            t = o_53(t);
            {
              o_33 = t;
              {
                ATerm r_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_33)), not_null(m_33));
                {
                  r_33 = t;
                  if(((q_33 != NULL) && (q_33 != r_33)))
                    _fail(r_33);
                  else
                    q_33 = r_33;
                }
                t = not_null(q_33);
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
ATerm fetch_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm w_33 (ATerm t)
  {
    ATerm o_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_60, _id);
        LocalPopChoice(r_23);
      }
    else
      {
        t = o_23;
        t = Cons_2(t, _id, w_33);
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_75 (ATerm))
{
  t = fetch_1(t, l_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym_Help_0))
    {
      ATerm d_34 = NULL,f_34 = NULL;
      ATerm s_23;
      s_23 = t;
      {
        ATerm e_34 = NULL;
        t = SSLgetAnnotations(not_null(b_34));
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
      }
      t = s_23;
      {
        ATerm g_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_34));
        {
          g_34 = t;
          if(((f_34 != NULL) && (f_34 != g_34)))
            _fail(g_34);
          else
            f_34 = g_34;
        }
        t = not_null(f_34);
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
  ATerm l_34 = NULL;
  l_34 = t;
  t = SSL_implode_string(not_null(l_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = t_23;
      {
        ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
        q_34 = t;
        p_34 :
        if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
          {
            r_34 = ATgetFirst((ATermList) q_34);
            s_34 = (ATerm) ATgetNext((ATermList) q_34);
            {
              t = not_null(r_34);
              {
                ATerm o_4 (ATerm t)
                {
                  t = not_null(s_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_4);
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
  ATerm c_35 = NULL;
  ATerm e_35 = NULL;
  c_35 = t;
  {
    ATerm f_35 = NULL;
    ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
    t = not_null(c_35);
    {
      f_35 = t;
      {
        t = SSL_explode_term(not_null(f_35));
        {
          h_35 = t;
          a_35 :
          if(match_cons(h_35, sym__2))
            {
              i_35 = ATgetArgument(h_35, 0);
              j_35 = ATgetArgument(h_35, 1);
              b_35 :
              if(match_string(i_35, ""))
                {
                  if(((e_35 != NULL) && (e_35 != j_35)))
                    _fail(j_35);
                  else
                    e_35 = j_35;
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
      t = not_null(e_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm n_35 (ATerm t)
  {
    ATerm w_23 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_35);
        LocalPopChoice(c_24);
      }
    else
      {
        t = w_23;
        {
          t = Nil_0(t);
          t = z_60(t);
        }
      }
    return(t);
  }
  t = n_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym__2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      {
        t = not_null(r_35);
        {
          ATerm q_4 (ATerm t)
          {
            t = not_null(s_35);
            return(t);
          }
          t = at_end_1(t, q_4);
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
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_explode_string(not_null(x_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm e_47 (ATerm), ATerm f_47 (ATerm))
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  f_36 :
  if(match_cons(g_36, sym__2))
    {
      h_36 = ATgetArgument(g_36, 0);
      i_36 = ATgetArgument(g_36, 1);
      {
        ATerm m_36 = NULL,o_36 = NULL;
        ATerm n_36 = NULL;
        t = SSLgetAnnotations(not_null(g_36));
        {
          n_36 = t;
          if(((m_36 != NULL) && (m_36 != n_36)))
            _fail(n_36);
          else
            m_36 = n_36;
        }
        {
          t = not_null(h_36);
          {
            ATerm q_36 = NULL;
            t = e_47(t);
            {
              o_36 = t;
              {
                t = not_null(i_36);
                {
                  ATerm s_36 = NULL;
                  t = f_47(t);
                  {
                    q_36 = t;
                    {
                      ATerm t_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_36), not_null(q_36)), not_null(m_36));
                      {
                        t_36 = t;
                        if(((s_36 != NULL) && (s_36 != t_36)))
                          _fail(t_36);
                        else
                          s_36 = t_36;
                      }
                      t = not_null(s_36);
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
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym__2))
    {
      f_37 = ATgetArgument(e_37, 0);
      g_37 = ATgetArgument(e_37, 1);
      {
        ATerm m_24;
        m_24 = t;
        t = SSL_printnl(not_null(f_37), not_null(g_37));
        t = m_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm n_24;
  n_24 = t;
  {
    ATerm m_37 = NULL,o_37 = NULL;
    ATerm o_24;
    o_24 = t;
    {
      ATerm n_37 = NULL;
      t = f_71(t);
      {
        n_37 = t;
        if(((m_37 != NULL) && (m_37 != n_37)))
          _fail(n_37);
        else
          m_37 = n_37;
      }
    }
    t = o_24;
    {
      ATerm p_37 = NULL;
      p_37 = t;
      if(((o_37 != NULL) && (o_37 != p_37)))
        _fail(p_37);
      else
        o_37 = p_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_37)), not_null(m_37)));
        t = printnl_0(t);
      }
    }
  }
  t = n_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm s_37 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = Cons_2(t, k_60, s_37);
      }
    return(t);
  }
  t = s_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_is_string(not_null(u_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm x_24 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm d_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = d_25;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_4);
            LocalPopChoice(c_25);
          }
        else
          {
            t = x_24;
            {
              ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
              g_38 = t;
              f_38 :
              if(match_cons(g_38, sym_Path_1))
                {
                  h_38 = ATgetArgument(g_38, 0);
                  t = not_null(h_38);
                }
              else
                {
                  if(match_cons(g_38, sym_Var_1))
                    {
                      h_38 = ATgetArgument(g_38, 0);
                      {
                        t = not_null(h_38);
                        {
                          ATerm h_25 = t;
                          int i_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_25);
                            }
                          else
                            {
                              t = h_25;
                              {
                                ATerm u_4 (ATerm t)
                                {
                                  t = term_j_25;
                                  return(t);
                                }
                                t = debug_1(t, u_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_38, sym_Prefix_2))
                        {
                          h_38 = ATgetArgument(g_38, 0);
                          i_38 = ATgetArgument(g_38, 1);
                          {
                            ATerm n_38 = NULL,p_38 = NULL;
                            ATerm k_25;
                            k_25 = t;
                            {
                              ATerm o_38 = NULL;
                              t = not_null(h_38);
                              {
                                t = eval_config_0(t);
                                {
                                  o_38 = t;
                                  if(((n_38 != NULL) && (n_38 != o_38)))
                                    _fail(o_38);
                                  else
                                    n_38 = o_38;
                                }
                              }
                            }
                            t = k_25;
                            {
                              ATerm q_38 = NULL;
                              t = not_null(i_38);
                              {
                                t = eval_config_0(t);
                                {
                                  q_38 = t;
                                  if(((p_38 != NULL) && (p_38 != q_38)))
                                    _fail(q_38);
                                  else
                                    p_38 = q_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), not_null(p_38));
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
  ATerm y_38 = NULL;
  y_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_13, not_null(y_38));
    {
      t = table_get_0(t);
      {
        ATerm n_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm u_25;
              u_25 = t;
              {
                ATerm c_39 = NULL;
                ATerm d_39 = NULL;
                d_39 = t;
                if(((c_39 != NULL) && (c_39 != d_39)))
                  _fail(d_39);
                else
                  c_39 = d_39;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_13, not_null(y_38), not_null(c_39));
                  t = table_put_0(t);
                }
              }
              t = u_25;
            }
            LocalPopChoice(q_25);
          }
        else
          {
            t = n_25;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_58(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_cons(k_39, sym__2))
    {
      l_39 = ATgetArgument(k_39, 0);
      m_39 = ATgetArgument(k_39, 1);
      t = SSL_table_get(not_null(l_39), not_null(m_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym__3))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      w_39 = ATgetArgument(t_39, 2);
      {
        ATerm x_25;
        x_25 = t;
        {
          ATerm a_40 = NULL;
          ATerm b_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_39), not_null(v_39));
          {
            ATerm c_26 = t;
            int d_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_26);
              }
            else
              {
                t = c_26;
                t = (ATerm) ATempty;
              }
            {
              b_40 = t;
              if(((a_40 != NULL) && (a_40 != b_40)))
                _fail(b_40);
              else
                a_40 = b_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_39), not_null(v_39), (ATerm) ATinsert(CheckATermList(not_null(a_40)), not_null(w_39)));
            t = table_put_0(t);
          }
        }
        t = x_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm f_40 = NULL;
  ATerm g_40 = NULL;
  t = term_x_11;
  {
    t = q_76(t);
    {
      g_40 = t;
      if(((f_40 != NULL) && (f_40 != g_40)))
        _fail(g_40);
      else
        f_40 = g_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_22, term_s_22, not_null(f_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_string(m_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_40) == AT_LIST) && !(ATisEmpty(m_40))))
        {
          n_40 = ATgetFirst((ATermList) m_40);
          o_40 = (ATerm) ATgetNext((ATermList) m_40);
          {
            ATerm r_40 = NULL;
            ATerm e_26;
            e_26 = t;
            {
              t = not_null(n_40);
              t = a_0(t);
            }
            t = e_26;
            {
              ATerm s_40 = NULL;
              t = term_x_11;
              {
                t = d_0(t);
                {
                  s_40 = t;
                  if(((r_40 != NULL) && (r_40 != s_40)))
                    _fail(s_40);
                  else
                    r_40 = s_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_40)), not_null(r_40));
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
  ATerm v_4 (ATerm t)
  {
    ATerm x_40 = NULL;
    x_40 = t;
    w_40 :
    if(!(match_string(x_40, "--help")))
      {
        if(!(match_string(x_40, "-h")))
          {
            if(!(match_string(x_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_l_26;
    {
      t = set_config_0(t);
      t = term_m_26;
    }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_n_26;
    return(t);
  }
  t = Option_3(t, v_4, w_4, z_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(((ATgetType(a_41) == AT_LIST) && !(ATisEmpty(a_41))))
    {
      b_41 = ATgetFirst((ATermList) a_41);
      c_41 = (ATerm) ATgetNext((ATermList) a_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  s_41 :
  if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
    {
      u_41 = ATgetFirst((ATermList) t_41);
      v_41 = (ATerm) ATgetNext((ATermList) t_41);
      {
        ATerm j_42 = NULL,l_42 = NULL;
        ATerm k_42 = NULL;
        t = SSLgetAnnotations(not_null(t_41));
        {
          k_42 = t;
          if(((j_42 != NULL) && (j_42 != k_42)))
            _fail(k_42);
          else
            j_42 = k_42;
        }
        {
          t = not_null(u_41);
          {
            ATerm n_42 = NULL;
            t = n_48(t);
            {
              l_42 = t;
              {
                t = not_null(v_41);
                {
                  ATerm p_42 = NULL;
                  t = o_48(t);
                  {
                    n_42 = t;
                    {
                      ATerm q_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_42)), not_null(l_42)), not_null(j_42));
                      {
                        q_42 = t;
                        if(((p_42 != NULL) && (p_42 != q_42)))
                          _fail(q_42);
                        else
                          p_42 = q_42;
                      }
                      t = not_null(p_42);
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
  ATerm a_43 = NULL;
  a_43 = t;
  z_42 :
  if(((ATgetType(a_43) == AT_LIST) && ATisEmpty(a_43)))
    {
      {
        ATerm c_43 = NULL,e_43 = NULL;
        ATerm q_26;
        q_26 = t;
        {
          ATerm d_43 = NULL;
          t = SSLgetAnnotations(not_null(a_43));
          {
            d_43 = t;
            if(((c_43 != NULL) && (c_43 != d_43)))
              _fail(d_43);
            else
              c_43 = d_43;
          }
        }
        t = q_26;
        {
          ATerm f_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_43));
          {
            f_43 = t;
            if(((e_43 != NULL) && (e_43 != f_43)))
              _fail(f_43);
            else
              e_43 = f_43;
          }
          t = not_null(e_43);
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
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym__2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_13, not_null(m_43), not_null(n_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm r_26;
  r_26 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_26;
        t = o_76(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        {
        }
      }
  }
  t = r_26;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm v_43 = NULL;
      ATerm x_26;
      x_26 = t;
      {
        ATerm t_43 = NULL;
        ATerm u_43 = NULL;
        u_43 = t;
        if(((t_43 != NULL) && (t_43 != u_43)))
          _fail(u_43);
        else
          t_43 = u_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_20, not_null(t_43));
          t = set_config_0(t);
        }
      }
      t = x_26;
      {
        ATerm w_43 = NULL;
        w_43 = t;
        if(((v_43 != NULL) && (v_43 != w_43)))
          _fail(w_43);
        else
          v_43 = w_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_43));
      }
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              {
                t = o_76(t);
                t = Cons_2(t, _id, d_5);
              }
            }
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_5, d_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  ATerm e_27;
  e_27 = t;
  {
    ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
    f_44 = t;
    b_44 :
    if(match_cons(f_44, sym__3))
      {
        g_44 = ATgetArgument(f_44, 0);
        h_44 = ATgetArgument(f_44, 1);
        i_44 = ATgetArgument(f_44, 2);
        {
          if(((c_44 != NULL) && (c_44 != g_44)))
            _fail(g_44);
          else
            c_44 = g_44;
          {
            if(((d_44 != NULL) && (d_44 != h_44)))
              _fail(h_44);
            else
              d_44 = h_44;
            {
              if(((e_44 != NULL) && (e_44 != i_44)))
                _fail(i_44);
              else
                e_44 = i_44;
              t = SSL_table_put(not_null(c_44), not_null(d_44), not_null(e_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm l_44 = NULL;
  ATerm f_27;
  f_27 = t;
  {
    t = term_g_27;
    t = table_put_0(t);
  }
  t = f_27;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm j_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_76(t);
          LocalPopChoice(o_27);
        }
      else
        {
          t = j_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_5);
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_27;
          r_27 = t;
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_f_26;
                t = get_config_0(t);
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_27;
          {
            t = system_usage_0(t);
            {
              t = term_v_17;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_27);
        }
      else
        {
          t = p_27;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm m_44 = NULL;
                    m_44 = t;
                    if(((l_44 != NULL) && (l_44 != m_44)))
                      _fail(m_44);
                    else
                      l_44 = m_44;
                    return(t);
                  }
                  t = Undefined_1(t, j_5);
                  return(t);
                }
                t = fetch_1(t, f_5);
                {
                  ATerm r_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_44)), term_x_27);
                    return(t);
                  }
                  t = say_1(t, r_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                {
                }
              }
          }
        }
      {
        ATerm z_27;
        z_27 = t;
        {
          t = term_r_22;
          t = table_destroy_0(t);
        }
        t = z_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  t = parse_options_1(t, k_74);
  {
    t = store_options_0(t);
    {
      t = m_74(t);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_74);
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = d_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm))
{
  t = option_wrap_4(t, o_74, default_usage_0, _id, p_74);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_69(t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = xtc_io_1(t, z_69);
    return(t);
  }
  t = option_wrap_2(t, s_5, t_5);
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
