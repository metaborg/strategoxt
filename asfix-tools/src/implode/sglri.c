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
ATerm term_w_26;
ATerm term_v_26;
ATerm term_k_26;
ATerm term_u_25;
ATerm term_b_25;
ATerm term_g_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_m_16;
ATerm term_m_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_p_8;
ATerm term_h_8;
ATerm term_y_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__2, term_k_7, term_q_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_k_7, term_l_9);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f              use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt        pass option to sglr", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt        pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_r_11);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_r_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_r_12);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_r_12);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_r_12);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_k_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_r_12);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__3, term_i_22, term_k_22, (ATerm) ATempty);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm h_48 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm n_54 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm m_54 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm o_54 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_65 (ATerm), ATerm q_65 (ATerm));
ATerm union_1 (ATerm, ATerm l_65 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm x_54 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_69 (ATerm));
ATerm assert_1 (ATerm, ATerm v_69 (ATerm));
ATerm debug_1 (ATerm, ATerm c_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_70 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm l_46 (ATerm), ATerm m_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm sglri_options_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_69 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm p_58 (ATerm), ATerm q_58 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_69 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm x_68 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm y_68 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm crush_2 (ATerm, ATerm a_65 (ATerm), ATerm b_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_54 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm o_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm u_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_47 (ATerm), ATerm v_47 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm l_73 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm a_69 (ATerm), ATerm b_69 (ATerm));
ATerm sglri_0 (ATerm);
ATerm main_0 (ATerm);
ATerm is_string_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_is_string(not_null(c_0));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              ATerm y_5 = t;
              int b_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_6);
                }
              else
                {
                  t = y_5;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_0);
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
              u_2 = t;
              p_2 :
              if(match_cons(u_2, sym_Path_1))
                {
                  v_2 = ATgetArgument(u_2, 0);
                  t = not_null(v_2);
                }
              else
                {
                  if(match_cons(u_2, sym_Var_1))
                    {
                      v_2 = ATgetArgument(u_2, 0);
                      {
                        t = not_null(v_2);
                        {
                          ATerm c_6 = t;
                          int d_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_6);
                            }
                          else
                            {
                              t = c_6;
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  t = term_e_6;
                                  return(t);
                                }
                                t = debug_1(t, e_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_2, sym_Prefix_2))
                        {
                          v_2 = ATgetArgument(u_2, 0);
                          w_2 = ATgetArgument(u_2, 1);
                          {
                            ATerm c_3 = NULL,e_3 = NULL;
                            ATerm f_6;
                            f_6 = t;
                            {
                              ATerm d_3 = NULL;
                              t = not_null(v_2);
                              {
                                t = eval_config_0(t);
                                {
                                  d_3 = t;
                                  if(((c_3 != NULL) && (c_3 != d_3)))
                                    _fail(d_3);
                                  else
                                    c_3 = d_3;
                                }
                              }
                            }
                            t = f_6;
                            {
                              ATerm f_3 = NULL;
                              t = not_null(w_2);
                              {
                                t = eval_config_0(t);
                                {
                                  f_3 = t;
                                  if(((e_3 != NULL) && (e_3 != f_3)))
                                    _fail(f_3);
                                  else
                                    e_3 = f_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(e_3));
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
  ATerm n_3 = NULL;
  n_3 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(n_3));
    {
      t = table_get_0(t);
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm n_6;
              n_6 = t;
              {
                ATerm p_3 = NULL;
                ATerm q_3 = NULL;
                q_3 = t;
                if(((p_3 != NULL) && (p_3 != q_3)))
                  _fail(q_3);
                else
                  p_3 = q_3;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_k_6, not_null(n_3), not_null(p_3));
                  t = table_put_0(t);
                }
              }
              t = n_6;
            }
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym_stdin_0))
    {
      ATerm a_4 = NULL;
      ATerm b_4 = NULL;
      t = term_p_6;
      {
        t = ReadFromFile_0(t);
        {
          b_4 = t;
          if(((a_4 != NULL) && (a_4 != b_4)))
            _fail(b_4);
          else
            a_4 = b_4;
        }
      }
      t = not_null(a_4);
    }
  else
    {
      if(match_cons(y_3, sym_FILE_1))
        {
          z_3 = ATgetArgument(y_3, 0);
          {
            ATerm d_4 = NULL;
            ATerm e_4 = NULL;
            t = not_null(z_3);
            {
              t = ReadFromFile_0(t);
              {
                e_4 = t;
                if(((d_4 != NULL) && (d_4 != e_4)))
                  _fail(e_4);
                else
                  d_4 = e_4;
              }
            }
            t = not_null(d_4);
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
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym__2))
    {
      m_4 = ATgetArgument(l_4, 0);
      n_4 = ATgetArgument(l_4, 1);
      t = SSL_WriteToBinaryFile(not_null(m_4), not_null(n_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm t_4 = NULL;
  ATerm v_4 = NULL;
  t_4 = t;
  {
    ATerm w_4 = NULL;
    t = xtc_new_file_0(t);
    {
      w_4 = t;
      {
        if(((v_4 != NULL) && (v_4 != w_4)))
          _fail(w_4);
        else
          v_4 = w_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), not_null(t_4));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_69, n_69);
    t = read_from_0(t);
  }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym_stdin_0))
    {
      ATerm f_5 = NULL,h_5 = NULL;
      ATerm q_6;
      q_6 = t;
      {
        ATerm g_5 = NULL;
        t = SSLgetAnnotations(not_null(d_5));
        {
          g_5 = t;
          if(((f_5 != NULL) && (f_5 != g_5)))
            _fail(g_5);
          else
            f_5 = g_5;
        }
      }
      t = q_6;
      {
        ATerm i_5 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(f_5));
        {
          i_5 = t;
          if(((h_5 != NULL) && (h_5 != i_5)))
            _fail(i_5);
          else
            h_5 = i_5;
        }
        t = not_null(h_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm r_5 = NULL,s_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym_FILE_1))
    {
      s_5 = ATgetArgument(r_5, 0);
      {
        ATerm v_5 = NULL,x_5 = NULL;
        ATerm w_5 = NULL;
        t = SSLgetAnnotations(not_null(r_5));
        {
          w_5 = t;
          if(((v_5 != NULL) && (v_5 != w_5)))
            _fail(w_5);
          else
            v_5 = w_5;
        }
        {
          t = not_null(s_5);
          {
            ATerm z_5 = NULL;
            t = h_48(t);
            {
              x_5 = t;
              {
                ATerm a_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(x_5)), not_null(v_5));
                {
                  a_6 = t;
                  if(((z_5 != NULL) && (z_5 != a_6)))
                    _fail(a_6);
                  else
                    z_5 = a_6;
                }
                t = not_null(z_5);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm))
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(v_6);
        }
      else
        {
          t = t_6;
          t = stdin_0(t);
        }
      LocalPopChoice(s_6);
      t = xtc_transform_file_2(t, f_69, g_69);
    }
  else
    {
      t = r_6;
      t = xtc_transform_term_2(t, f_69, g_69);
    }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym__2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      t = SSL_call(not_null(i_6), not_null(j_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  t = SSL_table_keys(not_null(o_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm u_6 = NULL;
  u_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm w_6 = NULL;
        ATerm y_6 = NULL;
        w_6 = t;
        {
          ATerm z_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), not_null(w_6));
          {
            t = table_get_0(t);
            {
              z_6 = t;
              if(((y_6 != NULL) && (y_6 != z_6)))
                _fail(z_6);
              else
                y_6 = z_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_6), not_null(y_6));
        }
        return(t);
      }
      t = map_1(t, f_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm x_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7;
      b_7 = t;
      {
        ATerm e_7 = NULL;
        ATerm f_7 = NULL;
        t = term_c_7;
        {
          t = get_config_0(t);
          {
            f_7 = t;
            if(((e_7 != NULL) && (e_7 != f_7)))
              _fail(f_7);
            else
              e_7 = f_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), term_d_7);
          t = geq_0(t);
        }
      }
      t = b_7;
      t = n_54(t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = x_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_7;
  g_7 = t;
  {
    ATerm i_7 = NULL;
    ATerm j_7 = NULL;
    j_7 = t;
    if(((i_7 != NULL) && (i_7 != j_7)))
      _fail(j_7);
    else
      i_7 = j_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(i_7));
      t = printnl_0(t);
    }
  }
  t = g_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_7 = NULL;
  ATerm r_7 = NULL,s_7 = NULL;
  p_7 = t;
  {
    ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_7)));
    {
      t = table_get_0(t);
      {
        t_7 = t;
        n_7 :
        if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
          {
            u_7 = ATgetFirst((ATermList) t_7);
            x_7 = (ATerm) ATgetNext((ATermList) t_7);
            o_7 :
            if(match_cons(u_7, sym__2))
              {
                v_7 = ATgetArgument(u_7, 0);
                w_7 = ATgetArgument(u_7, 1);
                {
                  if(((r_7 != NULL) && (r_7 != v_7)))
                    _fail(v_7);
                  else
                    r_7 = v_7;
                  if(((s_7 != NULL) && (s_7 != w_7)))
                    _fail(w_7);
                  else
                    s_7 = w_7;
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
    t = not_null(s_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym__2))
    {
      f_8 = ATgetArgument(e_8, 0);
      g_8 = ATgetArgument(e_8, 1);
      {
        ATerm j_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_8)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
              k_8 = t;
              c_8 :
              if(match_cons(k_8, sym__2))
                {
                  l_8 = ATgetArgument(k_8, 0);
                  m_8 = ATgetArgument(k_8, 1);
                  {
                    if(((g_8 != NULL) && (g_8 != l_8)))
                      _fail(l_8);
                    else
                      g_8 = l_8;
                    if(((j_8 != NULL) && (j_8 != m_8)))
                      _fail(m_8);
                    else
                      j_8 = m_8;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_0);
          }
        }
        t = not_null(j_8);
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
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_7;
      {
        t = table_get_0(t);
        {
          ATerm s_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, s_0);
        }
      }
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8;
      b_8 = t;
      {
        ATerm q_8 = NULL;
        ATerm r_8 = NULL;
        t = term_c_7;
        {
          t = get_config_0(t);
          {
            r_8 = t;
            if(((q_8 != NULL) && (q_8 != r_8)))
              _fail(r_8);
            else
              q_8 = r_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), term_h_8);
          t = geq_0(t);
        }
      }
      t = b_8;
      t = m_54(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm i_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8;
      o_8 = t;
      {
        ATerm u_8 = NULL;
        ATerm v_8 = NULL;
        t = term_c_7;
        {
          t = get_config_0(t);
          {
            v_8 = t;
            if(((u_8 != NULL) && (u_8 != v_8)))
              _fail(v_8);
            else
              u_8 = v_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_8), term_p_8);
          t = geq_0(t);
        }
      }
      t = o_8;
      t = o_54(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = i_8;
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      if(((a_9 != NULL) && (a_9 != b_9)))
        _fail(b_9);
      else
        a_9 = b_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_65 (ATerm), ATerm q_65 (ATerm))
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
    {
      i_9 = ATgetFirst((ATermList) h_9);
      j_9 = (ATerm) ATgetNext((ATermList) h_9);
      {
        t = q_65(t);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm m_9 = NULL;
            m_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(m_9));
              t = p_65(t);
            }
            return(t);
          }
          t = fetch_1(t, t_0);
        }
        t = not_null(j_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      {
        t = not_null(t_9);
        {
          ATerm y_9 (ATerm t)
          {
            ATerm s_8 = t;
            int t_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_9);
                LocalPopChoice(t_8);
              }
            else
              {
                t = s_8;
                {
                  ATerm w_8 = t;
                  int x_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_0 (ATerm t)
                      {
                        t = not_null(u_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_65, u_0);
                      t = y_9(t);
                      LocalPopChoice(x_8);
                    }
                  else
                    {
                      t = w_8;
                      t = Cons_2(t, _id, y_9);
                    }
                }
              }
            return(t);
          }
          t = y_9(t);
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
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym__3))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      g_10 = ATgetArgument(d_10, 2);
      {
        ATerm c_9;
        c_9 = t;
        {
          ATerm k_10 = NULL;
          ATerm l_10 = NULL,n_10 = NULL;
          ATerm m_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(f_10));
          {
            ATerm d_9 = t;
            int e_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_9);
              }
            else
              {
                t = d_9;
                t = (ATerm) ATempty;
              }
            {
              m_10 = t;
              if(((l_10 != NULL) && (l_10 != m_10)))
                _fail(m_10);
              else
                l_10 = m_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(g_10));
            {
              t = union_1(t, eq_0);
              {
                n_10 = t;
                if(((k_10 != NULL) && (k_10 != n_10)))
                  _fail(n_10);
                else
                  k_10 = n_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_10), not_null(f_10), not_null(k_10));
            t = table_put_0(t);
          }
        }
        t = c_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        t = not_null(x_10);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
            a_11 = t;
            t_10 :
            if(match_cons(a_11, sym__2))
              {
                b_11 = ATgetArgument(a_11, 0);
                c_11 = ATgetArgument(a_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_10), not_null(b_11), not_null(c_11));
                  t = x_54(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_0);
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
  ATerm i_11 = NULL;
  i_11 = t;
  t = SSL_ReadFromFile(not_null(i_11));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm p_11 = NULL;
  n_11 = t;
  {
    ATerm f_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(n_11)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_9;
      }
    {
      ATerm k_9;
      k_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_9, (ATerm) ATinsert(ATempty, not_null(n_11)));
        t = table_put_0(t);
      }
      t = k_9;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_n_9;
            return(t);
          }
          t = debug_1(t, x_0);
          return(t);
        }
        t = if_verbose4_1(t, w_0);
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = term_q_9;
                return(t);
              }
              t = say_1(t, z_0);
              return(t);
            }
            t = if_verbose6_1(t, y_0);
            {
              ATerm q_11 = NULL;
              q_11 = t;
              if(((p_11 != NULL) && (p_11 != q_11)))
                _fail(q_11);
              else
                p_11 = q_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_7, not_null(p_11));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = term_v_9;
                        return(t);
                      }
                      t = say_1(t, b_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, a_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_k_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(n_11)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = term_q_9;
                              return(t);
                            }
                            t = say_1(t, d_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, c_1);
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
  ATerm u_11 = NULL;
  u_11 = t;
  t = SSL_getenv(not_null(u_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_9;
      t = get_config_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_10;
            t = getenv_0(t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    t = debug_1(t, f_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm o_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_10;
          t = table_get_0(t);
          LocalPopChoice(p_10);
        }
      else
        {
          t = o_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_10;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_r_10;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, g_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm s_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_z_10;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
      {
        t = xtc_load_0(t);
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = term_z_10;
                return(t);
              }
              t = debug_1(t, l_1);
              return(t);
            }
            t = if_verbose5_1(t, k_1);
          }
        }
      }
      LocalPopChoice(y_10);
    }
  else
    {
      t = s_10;
      {
        ATerm y_11 = NULL;
        ATerm z_11 = NULL;
        z_11 = t;
        if(((y_11 != NULL) && (y_11 != z_11)))
          _fail(z_11);
        else
          y_11 = z_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_11), not_null(y_11)), term_f_11);
          {
            t = error_0(t);
            {
              ATerm m_1 (ATerm t)
              {
                t = term_k_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_h_11;
                      return(t);
                    }
                    t = debug_1(t, n_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, m_1);
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
ATerm xtc_command_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm d_12 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm e_12 = NULL;
    t = d_69(t);
    {
      t = xtc_find_0(t);
      {
        e_12 = t;
        if(((d_12 != NULL) && (d_12 != e_12)))
          _fail(e_12);
        else
          d_12 = e_12;
      }
    }
  }
  t = j_11;
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm f_12 = NULL;
      ATerm g_12 = NULL;
      g_12 = t;
      if(((f_12 != NULL) && (f_12 != g_12)))
        _fail(g_12);
      else
        f_12 = g_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), not_null(f_12));
        t = call_0(t);
      }
    }
    t = k_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym__2))
    {
      p_12 = ATgetArgument(o_12, 0);
      q_12 = ATgetArgument(o_12, 1);
      {
        ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
        ATerm l_11;
        l_11 = t;
        {
          ATerm w_12 = NULL;
          ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
          t = v_69(t);
          {
            w_12 = t;
            {
              if(((t_12 != NULL) && (t_12 != w_12)))
                _fail(w_12);
              else
                t_12 = w_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_12), not_null(p_12), not_null(q_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_11 = t;
                    int o_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), term_r_11);
                        t = table_get_0(t);
                        LocalPopChoice(o_11);
                      }
                    else
                      {
                        t = m_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_12 = t;
                      m_12 :
                      if(((ATgetType(x_12) == AT_LIST) && !(ATisEmpty(x_12))))
                        {
                          y_12 = ATgetFirst((ATermList) x_12);
                          z_12 = (ATerm) ATgetNext((ATermList) x_12);
                          {
                            if(((u_12 != NULL) && (u_12 != y_12)))
                              _fail(y_12);
                            else
                              u_12 = y_12;
                            {
                              if(((v_12 != NULL) && (v_12 != z_12)))
                                _fail(z_12);
                              else
                                v_12 = z_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_12), term_r_11, (ATerm) ATinsert(CheckATermList(not_null(v_12)), (ATerm) ATinsert(CheckATermList(not_null(u_12)), not_null(p_12))));
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
        t = l_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm f_13 = NULL,h_13 = NULL;
    ATerm t_11;
    t_11 = t;
    {
      ATerm g_13 = NULL;
      t = c_70(t);
      {
        g_13 = t;
        if(((f_13 != NULL) && (f_13 != g_13)))
          _fail(g_13);
        else
          f_13 = g_13;
      }
    }
    t = t_11;
    {
      ATerm i_13 = NULL;
      i_13 = t;
      if(((h_13 != NULL) && (h_13 != i_13)))
        _fail(i_13);
      else
        h_13 = i_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_13)), not_null(f_13)));
        t = printnl_0(t);
      }
    }
  }
  t = s_11;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm v_11;
  v_11 = t;
  {
    t = j_70(t);
    {
      ATerm o_1 (ATerm t)
      {
        t = term_w_11;
        return(t);
      }
      t = debug_1(t, o_1);
    }
  }
  t = v_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  ATerm x_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
      r_13 = t;
      m_13 :
      if(match_cons(r_13, sym__2))
        {
          s_13 = ATgetArgument(r_13, 0);
          t_13 = ATgetArgument(r_13, 1);
          {
            if(((q_13 != NULL) && (q_13 != s_13)))
              _fail(s_13);
            else
              q_13 = s_13;
            if(((p_13 != NULL) && (p_13 != t_13)))
              _fail(t_13);
            else
              p_13 = t_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_12);
      t = SSL_open_file(not_null(q_13), not_null(p_13));
    }
  else
    {
      t = x_11;
      {
        ATerm u_13 = NULL;
        ATerm v_13 = NULL;
        ATerm p_1 (ATerm t)
        {
          t = term_b_12;
          return(t);
        }
        t = obsolete_1(t, p_1);
        {
          u_13 = t;
          {
            if(((q_13 != NULL) && (q_13 != u_13)))
              _fail(u_13);
            else
              q_13 = u_13;
            {
              ATerm c_12;
              c_12 = t;
              {
                ATerm w_13 = NULL;
                t = term_h_12;
                {
                  w_13 = t;
                  if(((v_13 != NULL) && (v_13 != w_13)))
                    _fail(w_13);
                  else
                    v_13 = w_13;
                }
              }
              t = c_12;
              t = SSL_open_file(not_null(q_13), not_null(v_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm e_14 = NULL;
  c_14 = t;
  {
    ATerm i_12;
    i_12 = t;
    {
      ATerm f_14 = NULL;
      t = term_j_12;
      {
        f_14 = t;
        if(((e_14 != NULL) && (e_14 != f_14)))
          _fail(f_14);
        else
          e_14 = f_14;
      }
    }
    t = i_12;
    {
      t = SSL_open_file(not_null(c_14), not_null(e_14));
      t = SSL_close_file(not_null(c_14));
    }
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  t = SSL_implode_string(not_null(j_14));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_explode_string(not_null(n_14));
  return(t);
}
ATerm _2 (ATerm t, ATerm l_46 (ATerm), ATerm m_46 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm c_15 = NULL,e_15 = NULL;
        ATerm d_15 = NULL;
        t = SSLgetAnnotations(not_null(w_14));
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
        {
          t = not_null(x_14);
          {
            ATerm g_15 = NULL;
            t = l_46(t);
            {
              e_15 = t;
              {
                t = not_null(y_14);
                {
                  ATerm i_15 = NULL;
                  t = m_46(t);
                  {
                    g_15 = t;
                    {
                      ATerm j_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_15), not_null(g_15)), not_null(c_15));
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
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
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
  ATerm q_15 = NULL;
  ATerm r_15 = NULL;
  t = term_r_12;
  {
    t = new_0(t);
    {
      r_15 = t;
      if(((q_15 != NULL) && (q_15 != r_15)))
        _fail(r_15);
      else
        q_15 = r_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), term_s_12);
    {
      t = conc_strings_0(t);
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
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
  ATerm v_15 = NULL;
  t = new_file_0(t);
  {
    v_15 = t;
    {
      ATerm c_13;
      c_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), term_h_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), term_r_12);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_d_13;
                return(t);
              }
              t = assert_1(t, q_1);
            }
          }
        }
      }
      t = c_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_stdin_0))
    {
      ATerm h_16 = NULL;
      ATerm i_16 = NULL;
      ATerm j_16 = NULL;
      t = xtc_new_file_0(t);
      {
        i_16 = t;
        {
          if(((h_16 != NULL) && (h_16 != i_16)))
            _fail(i_16);
          else
            h_16 = i_16;
          {
            ATerm l_16 = NULL;
            t = q_0(t);
            {
              l_16 = t;
              if(((j_16 != NULL) && (j_16 != l_16)))
                _fail(l_16);
              else
                j_16 = l_16;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_16)), term_e_13));
              {
                ATerm j_13 = t;
                int k_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(k_13);
                  }
                else
                  {
                    t = j_13;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, p_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_16));
    }
  else
    {
      if(match_cons(f_16, sym_FILE_1))
        {
          g_16 = ATgetArgument(f_16, 0);
          {
            ATerm n_16 = NULL;
            ATerm o_16 = NULL;
            t = not_null(g_16);
            {
              ATerm p_16 = NULL;
              t = xtc_new_file_0(t);
              {
                o_16 = t;
                {
                  if(((n_16 != NULL) && (n_16 != o_16)))
                    _fail(o_16);
                  else
                    n_16 = o_16;
                  {
                    ATerm q_16 = NULL;
                    t = q_0(t);
                    {
                      q_16 = t;
                      if(((p_16 != NULL) && (p_16 != q_16)))
                        _fail(q_16);
                      else
                        p_16 = q_16;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_16)), term_e_13), not_null(g_16)), term_l_13));
                      {
                        ATerm n_13 = t;
                        int o_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(o_13);
                          }
                        else
                          {
                            t = n_13;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, p_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_16));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
        z_16 = t;
        y_16 :
        if(((ATgetType(z_16) == AT_LIST) && !(ATisEmpty(z_16))))
          {
            a_17 = ATgetFirst((ATermList) z_16);
            b_17 = (ATerm) ATgetNext((ATermList) z_16);
            {
              t = not_null(a_17);
              {
                ATerm r_1 (ATerm t)
                {
                  t = not_null(b_17);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_1);
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
  ATerm m_17 = NULL;
  ATerm o_17 = NULL;
  m_17 = t;
  {
    ATerm p_17 = NULL;
    ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
    t = not_null(m_17);
    {
      p_17 = t;
      {
        t = SSL_explode_term(not_null(p_17));
        {
          t_17 = t;
          k_17 :
          if(match_cons(t_17, sym__2))
            {
              u_17 = ATgetArgument(t_17, 0);
              v_17 = ATgetArgument(t_17, 1);
              l_17 :
              if(match_string(u_17, ""))
                {
                  if(((o_17 != NULL) && (o_17 != v_17)))
                    _fail(v_17);
                  else
                    o_17 = v_17;
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
      t = not_null(o_17);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm e_18 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_18);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          t = Nil_0(t);
          t = d_60(t);
        }
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym__2))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      {
        t = not_null(i_18);
        {
          ATerm s_1 (ATerm t)
          {
            t = not_null(j_18);
            return(t);
          }
          t = at_end_1(t, s_1);
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
  ATerm b_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = b_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,y_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      y_18 = ATgetArgument(r_18, 1);
      {
        ATerm b_19 = NULL;
        ATerm g_19 = NULL,p_19 = NULL;
        ATerm h_19 = NULL;
        t = not_null(s_18);
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = (ATerm) ATempty;
            }
          {
            h_19 = t;
            if(((g_19 != NULL) && (g_19 != h_19)))
              _fail(h_19);
            else
              g_19 = h_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(g_19));
          {
            ATerm i_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(k_14);
              }
            else
              {
                t = i_14;
                t = conc_more_lists_0(t);
              }
            {
              p_19 = t;
              if(((b_19 != NULL) && (b_19 != p_19)))
                _fail(p_19);
              else
                b_19 = p_19;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_6, not_null(s_18), not_null(b_19));
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
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm b_20 = NULL;
        b_20 = t;
        v_19 :
        if(!(match_string(b_20, "-p")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        ATerm o_14;
        o_14 = t;
        {
          ATerm c_20 = NULL;
          ATerm d_20 = NULL;
          d_20 = t;
          if(((c_20 != NULL) && (c_20 != d_20)))
            _fail(d_20);
          else
            c_20 = d_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(c_20));
            t = set_config_0(t);
          }
        }
        t = o_14;
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_q_14;
        return(t);
      }
      t = ArgOption_3(t, t_1, u_1, v_1);
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm e_20 = NULL;
              e_20 = t;
              x_19 :
              if(!(match_string(e_20, "--sglr")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              ATerm t_14;
              t_14 = t;
              {
                ATerm f_20 = NULL;
                ATerm g_20 = NULL;
                g_20 = t;
                if(((f_20 != NULL) && (f_20 != g_20)))
                  _fail(g_20);
                else
                  f_20 = g_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_14, not_null(f_20));
                  t = extend_config_0(t);
                }
              }
              t = t_14;
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = term_z_14;
              return(t);
            }
            t = ArgOption_3(t, w_1, x_1, y_1);
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm z_1 (ATerm t)
              {
                ATerm h_20 = NULL;
                h_20 = t;
                z_19 :
                if(!(match_string(h_20, "--impl")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                ATerm a_15;
                a_15 = t;
                {
                  ATerm i_20 = NULL;
                  ATerm j_20 = NULL;
                  j_20 = t;
                  if(((i_20 != NULL) && (i_20 != j_20)))
                    _fail(j_20);
                  else
                    i_20 = j_20;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_15, not_null(i_20));
                    t = extend_config_0(t);
                  }
                }
                t = a_15;
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_f_15;
                return(t);
              }
              t = ArgOption_3(t, z_1, a_2, b_2);
            }
          }
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym__2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      t = SSL_rename(not_null(q_20), not_null(r_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_stdout_0))
    {
      ATerm g_21 = NULL,i_21 = NULL;
      ATerm h_15;
      h_15 = t;
      {
        ATerm h_21 = NULL;
        t = SSLgetAnnotations(not_null(z_20));
        {
          h_21 = t;
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
        }
      }
      t = h_15;
      {
        ATerm j_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(g_21));
        {
          j_21 = t;
          if(((i_21 != NULL) && (i_21 != j_21)))
            _fail(j_21);
          else
            i_21 = j_21;
        }
        t = not_null(i_21);
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
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym__2))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      t = SSL_copy(not_null(q_21), not_null(r_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym_FILE_1))
    {
      h_22 = ATgetArgument(g_22, 0);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = NULL;
            t = o_0(t);
            {
              j_22 = t;
              d_22 :
              if(match_cons(j_22, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), term_m_15);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(h_22);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_m_15;
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm l_22 = NULL;
              ATerm m_22 = NULL;
              t = o_0(t);
              {
                m_22 = t;
                {
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                  {
                    ATerm n_15 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = n_15;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(l_22));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_22));
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  s_22 :
  if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
    {
      u_22 = ATgetFirst((ATermList) t_22);
      v_22 = (ATerm) ATgetNext((ATermList) t_22);
      t = not_null(v_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym__2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      {
        ATerm o_15;
        o_15 = t;
        {
          ATerm h_23 = NULL;
          ATerm i_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(e_23));
          {
            ATerm p_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(s_15);
              }
            else
              {
                t = p_15;
                t = (ATerm) ATempty;
              }
            {
              i_23 = t;
              if(((h_23 != NULL) && (h_23 != i_23)))
                _fail(i_23);
              else
                h_23 = i_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_23), not_null(e_23), not_null(h_23));
            t = table_put_0(t);
          }
        }
        t = o_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_69 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    ATerm s_23 = NULL;
    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
    t = s_69(t);
    {
      s_23 = t;
      {
        if(((r_23 != NULL) && (r_23 != s_23)))
          _fail(s_23);
        else
          r_23 = s_23;
        {
          ATerm u_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), term_r_11);
              t = table_get_0(t);
              LocalPopChoice(w_15);
            }
          else
            {
              t = u_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_23 = t;
            o_23 :
            if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
              {
                u_23 = ATgetFirst((ATermList) t_23);
                v_23 = (ATerm) ATgetNext((ATermList) t_23);
                {
                  if(((q_23 != NULL) && (q_23 != u_23)))
                    _fail(u_23);
                  else
                    q_23 = u_23;
                  {
                    if(((p_23 != NULL) && (p_23 != v_23)))
                      _fail(v_23);
                    else
                      p_23 = v_23;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_23), term_r_11, not_null(p_23));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(q_23);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm w_23 = NULL;
                              w_23 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(w_23));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, c_2);
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
  t = t_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  t = SSL_remove(not_null(c_24));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm p_58 (ATerm), ATerm q_58 (ATerm))
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_58(t);
      t = q_58(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        t = q_58(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm h_24 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm i_24 = NULL;
    ATerm j_24 = NULL;
    t = r_69(t);
    {
      i_24 = t;
      {
        if(((h_24 != NULL) && (h_24 != i_24)))
          _fail(i_24);
        else
          h_24 = i_24;
        {
          ATerm k_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_24), term_r_11);
          {
            ATerm a_16 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_16);
              }
            else
              {
                t = a_16;
                t = (ATerm) ATempty;
              }
            {
              k_24 = t;
              if(((j_24 != NULL) && (j_24 != k_24)))
                _fail(k_24);
              else
                j_24 = k_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_24), term_r_11, (ATerm) ATinsert(CheckATermList(not_null(j_24)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL;
  ATerm d_2 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  t = begin_scope_1(t, d_2);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm c_16;
      c_16 = t;
      {
        ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
        ATerm d_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_16;
            t = table_get_0(t);
            LocalPopChoice(k_16);
          }
        else
          {
            t = d_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          r_24 = t;
          o_24 :
          if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
            {
              s_24 = ATgetFirst((ATermList) r_24);
              t_24 = (ATerm) ATgetNext((ATermList) r_24);
              {
                if(((q_24 != NULL) && (q_24 != s_24)))
                  _fail(s_24);
                else
                  q_24 = s_24;
                {
                  if(((p_24 != NULL) && (p_24 != t_24)))
                    _fail(t_24);
                  else
                    p_24 = t_24;
                  {
                    t = not_null(q_24);
                    {
                      ATerm f_2 (ATerm t)
                      {
                        ATerm r_16 = t;
                        int s_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(s_16);
                          }
                        else
                          {
                            t = r_16;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, f_2);
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
      t = c_16;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_d_13;
          return(t);
        }
        t = end_scope_1(t, g_2);
      }
      return(t);
    }
    t = restore_always_2(t, x_68, e_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        ATerm x_24 = NULL;
        t = term_l_13;
        {
          t = get_config_0(t);
          {
            x_24 = t;
            if(((w_24 != NULL) && (w_24 != x_24)))
              _fail(x_24);
            else
              w_24 = x_24;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_24));
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = term_p_6;
      }
    {
      t = y_68(t);
      {
        ATerm i_2 (ATerm t)
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_e_13;
              t = get_config_0(t);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              t = term_m_15;
            }
          return(t);
        }
        t = rename_to_1(t, i_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, h_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = SSL_string_to_int(not_null(a_25));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  g_25 :
  if(match_string(i_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
        {
          j_25 = ATgetFirst((ATermList) i_25);
          k_25 = (ATerm) ATgetNext((ATermList) i_25);
          h_25 :
          if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
            {
              l_25 = ATgetFirst((ATermList) k_25);
              m_25 = (ATerm) ATgetNext((ATermList) k_25);
              {
                ATerm q_25 = NULL;
                ATerm x_16;
                x_16 = t;
                {
                  t = not_null(j_25);
                  t = l_0(t);
                }
                t = x_16;
                {
                  ATerm r_25 = NULL;
                  t = not_null(l_25);
                  {
                    t = m_0(t);
                    {
                      r_25 = t;
                      if(((q_25 != NULL) && (q_25 != r_25)))
                        _fail(r_25);
                      else
                        q_25 = r_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_25)), not_null(q_25));
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
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm l_26 = NULL;
        l_26 = t;
        v_25 :
        if(!(match_string(l_26, "-i")))
          {
            if(!(match_string(l_26, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        ATerm o_26 = NULL;
        ATerm e_17;
        e_17 = t;
        {
          ATerm m_26 = NULL;
          ATerm n_26 = NULL;
          n_26 = t;
          if(((m_26 != NULL) && (m_26 != n_26)))
            _fail(n_26);
          else
            m_26 = n_26;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(m_26));
            t = set_config_0(t);
          }
        }
        t = e_17;
        {
          ATerm p_26 = NULL;
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_26));
        }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_f_17;
        return(t);
      }
      t = ArgOption_3(t, j_2, k_2, l_2);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              ATerm s_26 = NULL;
              s_26 = t;
              y_25 :
              if(!(match_string(s_26, "-o")))
                {
                  if(!(match_string(s_26, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              ATerm y_26 = NULL;
              ATerm i_17;
              i_17 = t;
              {
                ATerm t_26 = NULL;
                ATerm x_26 = NULL;
                x_26 = t;
                if(((t_26 != NULL) && (t_26 != x_26)))
                  _fail(x_26);
                else
                  t_26 = x_26;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(t_26));
                  t = set_config_0(t);
                }
              }
              t = i_17;
              {
                ATerm z_26 = NULL;
                z_26 = t;
                if(((y_26 != NULL) && (y_26 != z_26)))
                  _fail(z_26);
                else
                  y_26 = z_26;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_26));
              }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              t = term_j_17;
              return(t);
            }
            t = ArgOption_3(t, m_2, n_2, o_2);
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm n_17 = t;
              int q_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm a_27 = NULL;
                    a_27 = t;
                    b_26 :
                    if(!(match_string(a_27, "-S")))
                      {
                        if(!(match_string(a_27, "--silent")))
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
                    t = term_w_17;
                    return(t);
                  }
                  ATerm s_2 (ATerm t)
                  {
                    t = term_x_17;
                    return(t);
                  }
                  t = Option_3(t, q_2, r_2, s_2);
                  LocalPopChoice(q_17);
                }
              else
                {
                  t = n_17;
                  {
                    ATerm y_17 = t;
                    int z_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_2 (ATerm t)
                        {
                          ATerm b_27 = NULL;
                          b_27 = t;
                          c_26 :
                          if(!(match_string(b_27, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
                        {
                          ATerm e_27 = NULL;
                          ATerm a_18;
                          a_18 = t;
                          {
                            ATerm c_27 = NULL;
                            ATerm d_27 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_27 = t;
                              if(((c_27 != NULL) && (c_27 != d_27)))
                                _fail(d_27);
                              else
                                c_27 = d_27;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(c_27));
                              t = set_config_0(t);
                            }
                          }
                          t = a_18;
                          {
                            ATerm f_27 = NULL;
                            f_27 = t;
                            if(((e_27 != NULL) && (e_27 != f_27)))
                              _fail(f_27);
                            else
                              e_27 = f_27;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_27));
                          }
                          return(t);
                        }
                        ATerm y_2 (ATerm t)
                        {
                          t = term_b_18;
                          return(t);
                        }
                        t = ArgOption_3(t, t_2, x_2, y_2);
                        LocalPopChoice(z_17);
                      }
                    else
                      {
                        t = y_17;
                        {
                          ATerm c_18 = t;
                          int d_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_2 (ATerm t)
                              {
                                ATerm g_27 = NULL;
                                g_27 = t;
                                f_26 :
                                if(!(match_string(g_27, "-k")))
                                  {
                                    if(!(match_string(g_27, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                ATerm f_18;
                                f_18 = t;
                                {
                                  ATerm h_27 = NULL;
                                  ATerm i_27 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    i_27 = t;
                                    if(((h_27 != NULL) && (h_27 != i_27)))
                                      _fail(i_27);
                                    else
                                      h_27 = i_27;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(h_27));
                                    t = set_config_0(t);
                                  }
                                }
                                t = f_18;
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                t = term_l_18;
                                return(t);
                              }
                              t = ArgOption_3(t, z_2, a_3, b_3);
                              LocalPopChoice(d_18);
                            }
                          else
                            {
                              t = c_18;
                              {
                                ATerm m_18 = t;
                                int n_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_3 (ATerm t)
                                    {
                                      ATerm j_27 = NULL;
                                      j_27 = t;
                                      h_26 :
                                      if(!(match_string(j_27, "-v")))
                                        {
                                          if(!(match_string(j_27, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_p_18;
                                      t = set_config_0(t);
                                      t = term_t_18;
                                      return(t);
                                    }
                                    ATerm i_3 (ATerm t)
                                    {
                                      t = term_u_18;
                                      return(t);
                                    }
                                    t = Option_3(t, g_3, h_3, i_3);
                                    LocalPopChoice(n_18);
                                  }
                                else
                                  {
                                    t = m_18;
                                    {
                                      ATerm v_18 = t;
                                      int w_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_3 (ATerm t)
                                          {
                                            ATerm k_27 = NULL;
                                            k_27 = t;
                                            i_26 :
                                            if(!(match_string(k_27, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_3 (ATerm t)
                                          {
                                            t = term_z_18;
                                            t = set_config_0(t);
                                            t = term_a_19;
                                            return(t);
                                          }
                                          ATerm l_3 (ATerm t)
                                          {
                                            t = term_c_19;
                                            return(t);
                                          }
                                          t = Option_3(t, j_3, k_3, l_3);
                                          LocalPopChoice(w_18);
                                        }
                                      else
                                        {
                                          t = v_18;
                                          {
                                            ATerm m_3 (ATerm t)
                                            {
                                              ATerm l_27 = NULL;
                                              l_27 = t;
                                              j_26 :
                                              if(!(match_string(l_27, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm o_3 (ATerm t)
                                            {
                                              t = term_e_19;
                                              t = set_config_0(t);
                                              t = term_f_19;
                                              return(t);
                                            }
                                            ATerm r_3 (ATerm t)
                                            {
                                              t = term_i_19;
                                              return(t);
                                            }
                                            t = Option_3(t, m_3, o_3, r_3);
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
  ATerm x_27 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm y_27 = NULL,z_27 = NULL;
      y_27 = t;
      w_27 :
      if(match_cons(y_27, sym_Program_1))
        {
          z_27 = ATgetArgument(y_27, 0);
          if(((x_27 != NULL) && (x_27 != z_27)))
            _fail(z_27);
          else
            x_27 = z_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, s_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_19), not_null(x_27)), term_k_19));
      {
        t = printnl_0(t);
        {
          t = term_m_19;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATempty, term_n_19));
  {
    t = printnl_0(t);
    {
      t = term_m_19;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_TicksToSeconds(not_null(c_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym__2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      {
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_28), not_null(j_28));
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
            t = SSL_addr(not_null(i_28), not_null(j_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_66(t);
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      {
        ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
        q_28 = t;
        p_28 :
        if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
          {
            r_28 = ATgetFirst((ATermList) q_28);
            s_28 = (ATerm) ATgetNext((ATermList) q_28);
            {
              ATerm v_28 = NULL;
              ATerm w_28 = NULL;
              t = not_null(s_28);
              {
                t = foldr_2(t, c_66, d_66);
                {
                  w_28 = t;
                  if(((v_28 != NULL) && (v_28 != w_28)))
                    _fail(w_28);
                  else
                    v_28 = w_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                t = d_66(t);
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
ATerm crush_2 (ATerm t, ATerm a_65 (ATerm), ATerm b_65 (ATerm))
{
  ATerm f_29 = NULL;
  ATerm j_29 = NULL;
  f_29 = t;
  {
    ATerm p_29 = NULL;
    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
    t = not_null(f_29);
    {
      p_29 = t;
      {
        t = SSL_explode_term(not_null(p_29));
        {
          v_29 = t;
          e_29 :
          if(match_cons(v_29, sym__2))
            {
              w_29 = ATgetArgument(v_29, 0);
              x_29 = ATgetArgument(v_29, 1);
              if(((j_29 != NULL) && (j_29 != x_29)))
                _fail(x_29);
              else
                j_29 = x_29;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_29);
      t = foldr_2(t, a_65, b_65);
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
    ATerm t_3 (ATerm t)
    {
      t = term_r_17;
      return(t);
    }
    t = crush_2(t, t_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym__2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      {
        ATerm t_19;
        t_19 = t;
        {
          ATerm u_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_30), not_null(k_30));
              LocalPopChoice(w_19);
            }
          else
            {
              t = u_19;
              t = SSL_gtr(not_null(j_30), not_null(k_30));
            }
        }
        t = t_19;
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
  ATerm z_30 = NULL;
  ATerm y_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
      n_31 = t;
      y_30 :
      if(match_cons(n_31, sym__2))
        {
          o_31 = ATgetArgument(n_31, 0);
          p_31 = ATgetArgument(n_31, 1);
          {
            if(((z_30 != NULL) && (z_30 != o_31)))
              _fail(o_31);
            else
              z_30 = o_31;
            if(((z_30 != NULL) && (z_30 != p_31)))
              _fail(p_31);
            else
              z_30 = p_31;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_20);
    }
  else
    {
      t = y_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_20;
      m_20 = t;
      {
        ATerm t_31 = NULL;
        ATerm w_31 = NULL;
        t = term_c_7;
        {
          t = get_config_0(t);
          {
            w_31 = t;
            if(((t_31 != NULL) && (t_31 != w_31)))
              _fail(w_31);
            else
              t_31 = w_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), term_m_19);
          t = geq_0(t);
        }
      }
      t = m_20;
      t = j_54(t);
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm c_32 = NULL,e_32 = NULL;
    ATerm n_20;
    n_20 = t;
    {
      ATerm d_32 = NULL;
      t = run_time_0(t);
      {
        d_32 = t;
        if(((c_32 != NULL) && (c_32 != d_32)))
          _fail(d_32);
        else
          c_32 = d_32;
      }
    }
    t = n_20;
    {
      ATerm i_32 = NULL;
      t = term_s_20;
      {
        t = get_config_0(t);
        {
          i_32 = t;
          if(((e_32 != NULL) && (e_32 != i_32)))
            _fail(i_32);
          else
            e_32 = i_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), not_null(c_32)), term_t_20), not_null(e_32)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_3);
  {
    t = term_r_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym_Version_0))
    {
      ATerm r_32 = NULL,t_32 = NULL;
      ATerm v_20;
      v_20 = t;
      {
        ATerm s_32 = NULL;
        t = SSLgetAnnotations(not_null(p_32));
        {
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
        }
      }
      t = v_20;
      {
        ATerm u_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_32));
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
        t = not_null(t_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_3);
  t = c_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  t = SSL_table_create(not_null(z_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  {
    ATerm c_21;
    c_21 = t;
    {
      t = term_d_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, not_null(d_33));
          t = table_put_0(t);
        }
      }
    }
    t = c_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  t = SSL_table_destroy(not_null(h_33));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_exit(not_null(l_33));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(((ATgetType(p_33) == AT_LIST) && ATisEmpty(p_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_33) == AT_LIST) && !(ATisEmpty(p_33))))
        {
          q_33 = ATgetFirst((ATermList) p_33);
          r_33 = (ATerm) ATgetNext((ATermList) p_33);
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
  ATerm f_21;
  f_21 = t;
  {
    ATerm u_33 = NULL;
    ATerm x_33 = NULL;
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          ATerm v_33 = NULL;
          ATerm w_33 = NULL;
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
          t = (ATerm) ATinsert(ATempty, not_null(v_33));
        }
      }
    {
      x_33 = t;
      if(((u_33 != NULL) && (u_33 != x_33)))
        _fail(x_33);
      else
        u_33 = x_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(u_33));
      t = printnl_0(t);
    }
  }
  t = f_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_21), term_n_21), term_m_21);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm a_34 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = Cons_2(t, o_59, a_34);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  j_34 = t;
  g_34 :
  if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
    {
      h_34 = ATgetFirst((ATermList) j_34);
      i_34 = (ATerm) ATgetNext((ATermList) j_34);
      {
        ATerm m_34 = NULL;
        t = not_null(i_34);
        {
          ATerm v_21;
          v_21 = t;
          {
            ATerm n_34 = NULL,p_34 = NULL,r_34 = NULL;
            ATerm w_21;
            w_21 = t;
            {
              ATerm o_34 = NULL;
              t = j_0(t);
              {
                o_34 = t;
                if(((n_34 != NULL) && (n_34 != o_34)))
                  _fail(o_34);
                else
                  n_34 = o_34;
              }
            }
            t = w_21;
            {
              ATerm q_34 = NULL;
              t = not_null(h_34);
              {
                t = i_0(t);
                {
                  q_34 = t;
                  if(((p_34 != NULL) && (p_34 != q_34)))
                    _fail(q_34);
                  else
                    p_34 = q_34;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_34)), not_null(p_34));
                {
                  r_34 = t;
                  if(((m_34 != NULL) && (m_34 != r_34)))
                    _fail(r_34);
                  else
                    m_34 = r_34;
                }
              }
            }
          }
          t = v_21;
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(m_34);
              return(t);
            }
            t = reverse_acc_2(t, i_0, w_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_34) == AT_LIST) && ATisEmpty(j_34)))
        {
          {
            t = term_r_12;
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
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm y_34 = NULL;
  ATerm z_34 = NULL;
  t = term_r_12;
  {
    t = h_0(t);
    {
      z_34 = t;
      if(((y_34 != NULL) && (y_34 != z_34)))
        _fail(z_34);
      else
        y_34 = z_34;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), not_null(y_34)), term_x_21);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_52 (ATerm))
{
  ATerm g_35 = NULL,h_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Program_1))
    {
      h_35 = ATgetArgument(g_35, 0);
      {
        ATerm k_35 = NULL,m_35 = NULL;
        ATerm l_35 = NULL;
        t = SSLgetAnnotations(not_null(g_35));
        {
          l_35 = t;
          if(((k_35 != NULL) && (k_35 != l_35)))
            _fail(l_35);
          else
            k_35 = l_35;
        }
        {
          t = not_null(h_35);
          {
            ATerm o_35 = NULL;
            t = u_52(t);
            {
              m_35 = t;
              {
                ATerm p_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_35)), not_null(k_35));
                {
                  p_35 = t;
                  if(((o_35 != NULL) && (o_35 != p_35)))
                    _fail(p_35);
                  else
                    o_35 = p_35;
                }
                t = not_null(o_35);
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
  ATerm y_35 = NULL;
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = NULL;
      t = term_s_20;
      {
        t = get_config_0(t);
        {
          z_35 = t;
          if(((y_35 != NULL) && (y_35 != z_35)))
            _fail(z_35);
          else
            y_35 = z_35;
        }
      }
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm a_36 = NULL;
            a_36 = t;
            if(((y_35 != NULL) && (y_35 != a_36)))
              _fail(a_36);
            else
              y_35 = a_36;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = fetch_1(t, f_4);
      }
    }
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 (ATerm t)
        {
          t = not_null(y_35);
          return(t);
        }
        t = short_description_1(t, h_4);
        t = echo_0(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
        }
      }
    {
      t = term_e_22;
      {
        t = echo_0(t);
        {
          t = term_n_22;
          {
            t = table_get_0(t);
            {
              ATerm i_4 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, i_4);
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm b_36 = NULL;
                  ATerm c_36 = NULL;
                  c_36 = t;
                  if(((b_36 != NULL) && (b_36 != c_36)))
                    _fail(c_36);
                  else
                    b_36 = c_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_36)), term_o_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_4);
                {
                  ATerm p_22 = t;
                  int q_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_36 = NULL;
                      ATerm e_36 = NULL;
                      ATerm o_4 (ATerm t)
                      {
                        t = not_null(y_35);
                        return(t);
                      }
                      t = long_description_1(t, o_4);
                      {
                        e_36 = t;
                        if(((d_36 != NULL) && (d_36 != e_36)))
                          _fail(e_36);
                        else
                          d_36 = e_36;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(d_36)), term_r_22);
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
ATerm printnl_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym__2))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      {
        ATerm w_22;
        w_22 = t;
        t = SSL_printnl(not_null(p_36), not_null(q_36));
        t = w_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm x_22;
  x_22 = t;
  {
    ATerm v_36 = NULL;
    ATerm w_36 = NULL;
    w_36 = t;
    if(((v_36 != NULL) && (v_36 != w_36)))
      _fail(w_36);
    else
      v_36 = w_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATempty, not_null(v_36)));
      t = printnl_0(t);
    }
  }
  t = x_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm y_22;
  y_22 = t;
  {
    t = d_70(t);
    t = debug_0(t);
  }
  t = y_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_52 (ATerm))
{
  ATerm e_37 = NULL,f_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym_Undefined_1))
    {
      f_37 = ATgetArgument(e_37, 0);
      {
        ATerm k_37 = NULL,m_37 = NULL;
        ATerm l_37 = NULL;
        t = SSLgetAnnotations(not_null(e_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
        {
          t = not_null(f_37);
          {
            ATerm o_37 = NULL;
            t = v_52(t);
            {
              m_37 = t;
              {
                ATerm p_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_37)), not_null(k_37));
                {
                  p_37 = t;
                  if(((o_37 != NULL) && (o_37 != p_37)))
                    _fail(p_37);
                  else
                    o_37 = p_37;
                }
                t = not_null(o_37);
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
ATerm fetch_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm u_37 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_59, _id);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = Cons_2(t, _id, u_37);
      }
    return(t);
  }
  t = u_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_74 (ATerm))
{
  t = fetch_1(t, j_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym_Help_0))
    {
      ATerm b_38 = NULL,d_38 = NULL;
      ATerm f_23;
      f_23 = t;
      {
        ATerm c_38 = NULL;
        t = SSLgetAnnotations(not_null(z_37));
        {
          c_38 = t;
          if(((b_38 != NULL) && (b_38 != c_38)))
            _fail(c_38);
          else
            b_38 = c_38;
        }
      }
      t = f_23;
      {
        ATerm e_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_38));
        {
          e_38 = t;
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
        }
        t = not_null(d_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm g_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_58(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = g_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_38 = NULL,o_38 = NULL,q_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym__2))
    {
      o_38 = ATgetArgument(m_38, 0);
      q_38 = ATgetArgument(m_38, 1);
      t = SSL_table_get(not_null(o_38), not_null(q_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym__3))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      a_39 = ATgetArgument(x_38, 2);
      {
        ATerm k_23;
        k_23 = t;
        {
          ATerm e_39 = NULL;
          ATerm f_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_38), not_null(z_38));
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                t = (ATerm) ATempty;
              }
            {
              f_39 = t;
              if(((e_39 != NULL) && (e_39 != f_39)))
                _fail(f_39);
              else
                e_39 = f_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_38), not_null(z_38), (ATerm) ATinsert(CheckATermList(not_null(e_39)), not_null(a_39)));
            t = table_put_0(t);
          }
        }
        t = k_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm j_39 = NULL;
  ATerm k_39 = NULL;
  t = term_r_12;
  {
    t = o_75(t);
    {
      k_39 = t;
      if(((j_39 != NULL) && (j_39 != k_39)))
        _fail(k_39);
      else
        j_39 = k_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_22, term_k_22, not_null(j_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_string(q_39, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
        {
          r_39 = ATgetFirst((ATermList) q_39);
          s_39 = (ATerm) ATgetNext((ATermList) q_39);
          {
            ATerm v_39 = NULL;
            ATerm n_23;
            n_23 = t;
            {
              t = not_null(r_39);
              t = a_0(t);
            }
            t = n_23;
            {
              ATerm w_39 = NULL;
              t = term_r_12;
              {
                t = d_0(t);
                {
                  w_39 = t;
                  if(((v_39 != NULL) && (v_39 != w_39)))
                    _fail(w_39);
                  else
                    v_39 = w_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_39)), not_null(v_39));
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
  ATerm p_4 (ATerm t)
  {
    ATerm b_40 = NULL;
    b_40 = t;
    a_40 :
    if(!(match_string(b_40, "--help")))
      {
        if(!(match_string(b_40, "-h")))
          {
            if(!(match_string(b_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_y_23;
    {
      t = set_config_0(t);
      t = term_z_23;
    }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_a_24;
    return(t);
  }
  t = Option_3(t, p_4, q_4, r_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
    {
      f_40 = ATgetFirst((ATermList) e_40);
      g_40 = (ATerm) ATgetNext((ATermList) e_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_47 (ATerm), ATerm v_47 (ATerm))
{
  ATerm s_40 = NULL,y_40 = NULL,z_40 = NULL;
  s_40 = t;
  r_40 :
  if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
    {
      y_40 = ATgetFirst((ATermList) s_40);
      z_40 = (ATerm) ATgetNext((ATermList) s_40);
      {
        ATerm d_41 = NULL,f_41 = NULL;
        ATerm e_41 = NULL;
        t = SSLgetAnnotations(not_null(s_40));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
        {
          t = not_null(y_40);
          {
            ATerm r_41 = NULL;
            t = u_47(t);
            {
              f_41 = t;
              {
                t = not_null(z_40);
                {
                  ATerm t_41 = NULL;
                  t = v_47(t);
                  {
                    r_41 = t;
                    {
                      ATerm u_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_41)), not_null(f_41)), not_null(d_41));
                      {
                        u_41 = t;
                        if(((t_41 != NULL) && (t_41 != u_41)))
                          _fail(u_41);
                        else
                          t_41 = u_41;
                      }
                      t = not_null(t_41);
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
        ATerm g_42 = NULL,i_42 = NULL;
        ATerm b_24;
        b_24 = t;
        {
          ATerm h_42 = NULL;
          t = SSLgetAnnotations(not_null(e_42));
          {
            h_42 = t;
            if(((g_42 != NULL) && (g_42 != h_42)))
              _fail(h_42);
            else
              g_42 = h_42;
          }
        }
        t = b_24;
        {
          ATerm j_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_42));
          {
            j_42 = t;
            if(((i_42 != NULL) && (i_42 != j_42)))
              _fail(j_42);
            else
              i_42 = j_42;
          }
          t = not_null(i_42);
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
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  o_42 :
  if(match_cons(p_42, sym__2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_6, not_null(q_42), not_null(r_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm d_24;
  d_24 = t;
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_24;
        t = m_75(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
        }
      }
  }
  t = d_24;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm z_42 = NULL;
      ATerm l_24;
      l_24 = t;
      {
        ATerm x_42 = NULL;
        ATerm y_42 = NULL;
        y_42 = t;
        if(((x_42 != NULL) && (x_42 != y_42)))
          _fail(y_42);
        else
          x_42 = y_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_20, not_null(x_42));
          t = set_config_0(t);
        }
      }
      t = l_24;
      {
        ATerm a_43 = NULL;
        a_43 = t;
        if(((z_42 != NULL) && (z_42 != a_43)))
          _fail(a_43);
        else
          z_42 = a_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_42));
      }
      return(t);
    }
    ATerm u_4 (ATerm t)
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              {
                t = m_75(t);
                t = Cons_2(t, _id, u_4);
              }
            }
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_4, u_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
    j_43 = t;
    f_43 :
    if(match_cons(j_43, sym__3))
      {
        k_43 = ATgetArgument(j_43, 0);
        l_43 = ATgetArgument(j_43, 1);
        m_43 = ATgetArgument(j_43, 2);
        {
          if(((g_43 != NULL) && (g_43 != k_43)))
            _fail(k_43);
          else
            g_43 = k_43;
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
              t = SSL_table_put(not_null(g_43), not_null(h_43), not_null(i_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm p_43 = NULL;
  ATerm z_24;
  z_24 = t;
  {
    t = term_b_25;
    t = table_put_0(t);
  }
  t = z_24;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_75(t);
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_4);
    {
      ATerm e_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_25;
          n_25 = t;
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_23;
                t = get_config_0(t);
                LocalPopChoice(p_25);
              }
            else
              {
                t = o_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_25;
          {
            t = system_usage_0(t);
            {
              t = term_r_17;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_25);
        }
      else
        {
          t = e_25;
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm z_4 (ATerm t)
                  {
                    ATerm q_43 = NULL;
                    q_43 = t;
                    if(((p_43 != NULL) && (p_43 != q_43)))
                      _fail(q_43);
                    else
                      p_43 = q_43;
                    return(t);
                  }
                  t = Undefined_1(t, z_4);
                  return(t);
                }
                t = fetch_1(t, y_4);
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_43)), term_u_25);
                    return(t);
                  }
                  t = say_1(t, a_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_m_19;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                {
                }
              }
          }
        }
      {
        ATerm w_25;
        w_25 = t;
        {
          t = term_i_22;
          t = table_destroy_0(t);
        }
        t = w_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm l_73 (ATerm))
{
  t = parse_options_1(t, i_73);
  {
    t = store_options_0(t);
    {
      t = k_73(t);
      {
        ATerm x_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_73);
            LocalPopChoice(z_25);
          }
        else
          {
            t = x_25;
            {
              ATerm a_26 = t;
              int d_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_26);
                }
              else
                {
                  t = a_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  t = option_wrap_4(t, m_73, default_usage_0, _id, n_73);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm a_69 (ATerm), ATerm b_69 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm e_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_69(t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = e_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = xtc_io_1(t, b_69);
    return(t);
  }
  t = option_wrap_2(t, b_5, e_5);
  return(t);
}
ATerm sglri_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      t = term_k_26;
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      ATerm u_43 = NULL,w_43 = NULL;
      ATerm q_26;
      q_26 = t;
      {
        ATerm v_43 = NULL;
        t = term_p_14;
        {
          t = get_config_0(t);
          {
            v_43 = t;
            if(((u_43 != NULL) && (u_43 != v_43)))
              _fail(v_43);
            else
              u_43 = v_43;
          }
        }
      }
      t = q_26;
      {
        ATerm x_43 = NULL;
        t = term_u_14;
        {
          ATerm r_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(u_26);
            }
          else
            {
              t = r_26;
              t = (ATerm) ATempty;
            }
          {
            x_43 = t;
            if(((w_43 != NULL) && (w_43 != x_43)))
              _fail(x_43);
            else
              w_43 = x_43;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_43)), term_v_26), not_null(u_43)), term_p_14);
      }
      return(t);
    }
    t = xtc_transform_file_2(t, k_5, l_5);
    {
      ATerm m_5 (ATerm t)
      {
        t = term_w_26;
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_b_15;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              t = (ATerm) ATempty;
            }
        }
        return(t);
      }
      t = xtc_transform_2(t, m_5, n_5);
    }
    return(t);
  }
  t = xtc_iowrap_2(t, sglri_options_0, j_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sglri_0(t);
  return(t);
}
