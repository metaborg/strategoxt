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
ATerm term_f_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_n_22;
ATerm term_z_21;
ATerm term_l_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_c_7;
ATerm term_t_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_w_5;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym__2, term_d_6, term_k_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_d_6, term_w_7);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_y_9);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_o_10);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_v_5, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_o_10);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_o_10);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__3, term_h_18, term_i_18, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
}
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm d_55 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm e_70 (ATerm));
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
ATerm assert_1 (ATerm, ATerm z_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm g_49 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_70 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_70 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm u_69 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm x_69 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm input_options_0 (ATerm);
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
ATerm sdf_to_sig_0 (ATerm);
ATerm main_0 (ATerm);
ATerm execvp_0 (ATerm t)
{
  ATerm v_0 = NULL,x_0 = NULL,m_1 = NULL;
  v_0 = t;
  e_0 :
  if(match_cons(v_0, sym__2))
    {
      x_0 = ATgetArgument(v_0, 0);
      m_1 = ATgetArgument(v_0, 1);
      t = SSL_execvp(not_null(x_0), not_null(m_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  t = SSL_waitpid(not_null(m_2));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm y_2 = NULL;
  ATerm a_3 = NULL;
  y_2 = t;
  {
    t = fork_0(t);
    {
      a_3 = t;
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 = NULL;
            c_3 = t;
            t_2 :
            if(match_int(c_3, 0))
              {
                t = not_null(y_2);
                t = d_55(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
              t = not_null(a_3);
              {
                t = waitpid_0(t);
                {
                  d_3 = t;
                  w_2 :
                  if(match_cons(d_3, sym_WaitStatus_3))
                    {
                      e_3 = ATgetArgument(d_3, 0);
                      f_3 = ATgetArgument(d_3, 1);
                      g_3 = ATgetArgument(d_3, 2);
                      x_2 :
                      if(match_int(e_3, 0))
                        {
                          t = not_null(y_2);
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
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), not_null(p_3));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, b_0);
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
  ATerm v_3 = NULL;
  ATerm e_5;
  e_5 = t;
  {
    ATerm w_3 = NULL;
    t = e_70(t);
    {
      t = xtc_find_0(t);
      {
        w_3 = t;
        if(((v_3 != NULL) && (v_3 != w_3)))
          _fail(w_3);
        else
          v_3 = w_3;
      }
    }
  }
  t = e_5;
  {
    ATerm m_5;
    m_5 = t;
    {
      ATerm x_3 = NULL;
      ATerm y_3 = NULL;
      y_3 = t;
      if(((x_3 != NULL) && (x_3 != y_3)))
        _fail(y_3);
      else
        x_3 = y_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), not_null(x_3));
        t = call_0(t);
      }
    }
    t = m_5;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, f_70, c_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  t = SSL_table_keys(not_null(c_4));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm k_4 = NULL;
        ATerm m_4 = NULL;
        k_4 = t;
        {
          ATerm n_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(k_4));
          {
            t = table_get_0(t);
            {
              n_4 = t;
              if(((m_4 != NULL) && (m_4 != n_4)))
                _fail(n_4);
              else
                m_4 = n_4;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), not_null(m_4));
        }
        return(t);
      }
      t = map_1(t, f_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5;
      p_5 = t;
      {
        ATerm s_4 = NULL;
        ATerm t_4 = NULL;
        t = term_v_5;
        {
          t = get_config_0(t);
          {
            t_4 = t;
            if(((s_4 != NULL) && (s_4 != t_4)))
              _fail(t_4);
            else
              s_4 = t_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_4), term_w_5);
          t = geq_0(t);
        }
      }
      t = p_5;
      t = l_55(t);
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_6;
  b_6 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_6, not_null(w_4));
      t = printnl_0(t);
    }
  }
  t = b_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm d_5 = NULL;
  ATerm f_5 = NULL,g_5 = NULL;
  d_5 = t;
  {
    ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_5)));
    {
      t = table_get_0(t);
      {
        h_5 = t;
        b_5 :
        if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
          {
            i_5 = ATgetFirst((ATermList) h_5);
            l_5 = (ATerm) ATgetNext((ATermList) h_5);
            c_5 :
            if(match_cons(i_5, sym__2))
              {
                j_5 = ATgetArgument(i_5, 0);
                k_5 = ATgetArgument(i_5, 1);
                {
                  if(((f_5 != NULL) && (f_5 != j_5)))
                    _fail(j_5);
                  else
                    f_5 = j_5;
                  if(((g_5 != NULL) && (g_5 != k_5)))
                    _fail(k_5);
                  else
                    g_5 = k_5;
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
    t = not_null(g_5);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        ATerm x_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_5)));
        {
          t = table_get_0(t);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
              y_5 = t;
              q_5 :
              if(match_cons(y_5, sym__2))
                {
                  z_5 = ATgetArgument(y_5, 0);
                  a_6 = ATgetArgument(y_5, 1);
                  {
                    if(((u_5 != NULL) && (u_5 != z_5)))
                      _fail(z_5);
                    else
                      u_5 = z_5;
                    if(((x_5 != NULL) && (x_5 != a_6)))
                      _fail(a_6);
                    else
                      x_5 = a_6;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, o_0);
          }
        }
        t = not_null(x_5);
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
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_6;
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
ATerm if_verbose4_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6;
      s_6 = t;
      {
        ATerm e_6 = NULL;
        ATerm f_6 = NULL;
        t = term_v_5;
        {
          t = get_config_0(t);
          {
            f_6 = t;
            if(((e_6 != NULL) && (e_6 != f_6)))
              _fail(f_6);
            else
              e_6 = f_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), term_t_6);
          t = geq_0(t);
        }
      }
      t = s_6;
      t = k_55(t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7;
      b_7 = t;
      {
        ATerm i_6 = NULL;
        ATerm j_6 = NULL;
        t = term_v_5;
        {
          t = get_config_0(t);
          {
            j_6 = t;
            if(((i_6 != NULL) && (i_6 != j_6)))
              _fail(j_6);
            else
              i_6 = j_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_6), term_c_7);
          t = geq_0(t);
        }
      }
      t = b_7;
      t = m_55(t);
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      if(((o_6 != NULL) && (o_6 != p_6)))
        _fail(p_6);
      else
        o_6 = p_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
    {
      w_6 = ATgetFirst((ATermList) v_6);
      x_6 = (ATerm) ATgetNext((ATermList) v_6);
      {
        t = n_66(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm a_7 = NULL;
            a_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_6), not_null(a_7));
              t = m_66(t);
            }
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(x_6);
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
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  f_7 :
  if(match_cons(g_7, sym__2))
    {
      h_7 = ATgetArgument(g_7, 0);
      i_7 = ATgetArgument(g_7, 1);
      {
        t = not_null(h_7);
        {
          ATerm m_7 (ATerm t)
          {
            ATerm d_7 = t;
            int e_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_7);
                LocalPopChoice(e_7);
              }
            else
              {
                t = d_7;
                {
                  ATerm j_7 = t;
                  int k_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(i_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_66, r_0);
                      t = m_7(t);
                      LocalPopChoice(k_7);
                    }
                  else
                    {
                      t = j_7;
                      t = Cons_2(t, _id, m_7);
                    }
                }
              }
            return(t);
          }
          t = m_7(t);
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
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym__3))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      u_7 = ATgetArgument(r_7, 2);
      {
        ATerm l_7;
        l_7 = t;
        {
          ATerm y_7 = NULL;
          ATerm z_7 = NULL,b_8 = NULL;
          ATerm a_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), not_null(t_7));
          {
            ATerm n_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_7);
              }
            else
              {
                t = n_7;
                t = (ATerm) ATempty;
              }
            {
              a_8 = t;
              if(((z_7 != NULL) && (z_7 != a_8)))
                _fail(a_8);
              else
                z_7 = a_8;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(u_7));
            {
              t = union_1(t, eq_0);
              {
                b_8 = t;
                if(((y_7 != NULL) && (y_7 != b_8)))
                  _fail(b_8);
                else
                  y_7 = b_8;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_7), not_null(t_7), not_null(y_7));
            t = table_put_0(t);
          }
        }
        t = l_7;
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
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym__2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        t = not_null(l_8);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
            o_8 = t;
            h_8 :
            if(match_cons(o_8, sym__2))
              {
                p_8 = ATgetArgument(o_8, 0);
                q_8 = ATgetArgument(o_8, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(k_8), not_null(p_8), not_null(q_8));
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
  ATerm x_8 = NULL;
  ATerm z_8 = NULL;
  x_8 = t;
  {
    ATerm p_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_7;
      }
    {
      ATerm v_7;
      v_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_6, term_w_7, (ATerm) ATinsert(ATempty, not_null(x_8)));
        t = table_put_0(t);
      }
      t = v_7;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = term_x_7;
            return(t);
          }
          t = debug_1(t, u_0);
          return(t);
        }
        t = if_verbose4_1(t, t_0);
        {
          ATerm c_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = term_e_8;
                return(t);
              }
              t = say_1(t, y_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm a_9 = NULL;
              a_9 = t;
              if(((z_8 != NULL) && (z_8 != a_9)))
                _fail(a_9);
              else
                z_8 = a_9;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_d_6, not_null(z_8));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = term_f_8;
                        return(t);
                      }
                      t = say_1(t, a_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, z_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_d_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_8)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm b_1 (ATerm t)
                          {
                            ATerm c_1 (ATerm t)
                            {
                              t = term_e_8;
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
  ATerm e_9 = NULL;
  e_9 = t;
  t = SSL_getenv(not_null(e_9));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_8;
      t = get_config_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = g_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_8;
            t = getenv_0(t);
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
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
      t = term_u_8;
      return(t);
    }
    t = debug_1(t, e_1);
    return(t);
  }
  t = if_verbose5_1(t, d_1);
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm w_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_9;
          t = table_get_0(t);
          LocalPopChoice(y_8);
        }
      else
        {
          t = w_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = v_8;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_c_9;
          return(t);
        }
        t = debug_1(t, g_1);
        return(t);
      }
      t = if_verbose5_1(t, f_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm d_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = debug_1(t, i_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
      {
        t = xtc_load_0(t);
        {
          ATerm h_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(k_9);
            }
          else
            {
              t = h_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm j_1 (ATerm t)
            {
              ATerm k_1 (ATerm t)
              {
                t = term_g_9;
                return(t);
              }
              t = debug_1(t, k_1);
              return(t);
            }
            t = if_verbose5_1(t, j_1);
          }
        }
      }
      LocalPopChoice(f_9);
    }
  else
    {
      t = d_9;
      {
        ATerm i_9 = NULL;
        ATerm j_9 = NULL;
        j_9 = t;
        if(((i_9 != NULL) && (i_9 != j_9)))
          _fail(j_9);
        else
          i_9 = j_9;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_9), not_null(i_9)), term_l_9);
          {
            t = error_0(t);
            {
              ATerm l_1 (ATerm t)
              {
                t = term_d_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_o_9;
                      return(t);
                    }
                    t = debug_1(t, n_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, l_1);
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
  ATerm m_9 = NULL;
  m_9 = t;
  t = SSL_ReadFromFile(not_null(m_9));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_stdin_0))
    {
      ATerm w_9 = NULL;
      ATerm x_9 = NULL;
      t = term_p_9;
      {
        t = ReadFromFile_0(t);
        {
          x_9 = t;
          if(((w_9 != NULL) && (w_9 != x_9)))
            _fail(x_9);
          else
            w_9 = x_9;
        }
      }
      t = not_null(w_9);
    }
  else
    {
      if(match_cons(u_9, sym_FILE_1))
        {
          v_9 = ATgetArgument(u_9, 0);
          {
            ATerm z_9 = NULL;
            ATerm a_10 = NULL;
            t = not_null(v_9);
            {
              t = ReadFromFile_0(t);
              {
                a_10 = t;
                if(((z_9 != NULL) && (z_9 != a_10)))
                  _fail(a_10);
                else
                  z_9 = a_10;
              }
            }
            t = not_null(z_9);
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
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      t = SSL_WriteToBinaryFile(not_null(i_10), not_null(j_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm p_10 = NULL;
  ATerm r_10 = NULL;
  p_10 = t;
  {
    ATerm s_10 = NULL;
    t = xtc_new_file_0(t);
    {
      s_10 = t;
      {
        if(((r_10 != NULL) && (r_10 != s_10)))
          _fail(s_10);
        else
          r_10 = s_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), not_null(p_10));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(r_10);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_10));
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
  ATerm w_10 = NULL;
  w_10 = t;
  t = SSL_close_file(not_null(w_10));
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym__2))
    {
      f_11 = ATgetArgument(e_11, 0);
      g_11 = ATgetArgument(e_11, 1);
      {
        ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
        ATerm q_9;
        q_9 = t;
        {
          ATerm m_11 = NULL;
          ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
          t = z_70(t);
          {
            m_11 = t;
            {
              if(((j_11 != NULL) && (j_11 != m_11)))
                _fail(m_11);
              else
                j_11 = m_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_11), not_null(f_11), not_null(g_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_9 = t;
                    int s_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), term_y_9);
                        t = table_get_0(t);
                        LocalPopChoice(s_9);
                      }
                    else
                      {
                        t = r_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_11 = t;
                      c_11 :
                      if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
                        {
                          o_11 = ATgetFirst((ATermList) n_11);
                          p_11 = (ATerm) ATgetNext((ATermList) n_11);
                          {
                            if(((k_11 != NULL) && (k_11 != o_11)))
                              _fail(o_11);
                            else
                              k_11 = o_11;
                            {
                              if(((l_11 != NULL) && (l_11 != p_11)))
                                _fail(p_11);
                              else
                                l_11 = p_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_11), term_y_9, (ATerm) ATinsert(CheckATermList(not_null(l_11)), (ATerm) ATinsert(CheckATermList(not_null(k_11)), not_null(f_11))));
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
        t = q_9;
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
  ATerm b_10;
  b_10 = t;
  {
    t = n_71(t);
    {
      ATerm o_1 (ATerm t)
      {
        t = term_c_10;
        return(t);
      }
      t = debug_1(t, o_1);
    }
  }
  t = b_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
      z_11 = t;
      u_11 :
      if(match_cons(z_11, sym__2))
        {
          a_12 = ATgetArgument(z_11, 0);
          b_12 = ATgetArgument(z_11, 1);
          {
            if(((y_11 != NULL) && (y_11 != a_12)))
              _fail(a_12);
            else
              y_11 = a_12;
            if(((x_11 != NULL) && (x_11 != b_12)))
              _fail(b_12);
            else
              x_11 = b_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_10);
      t = SSL_open_file(not_null(y_11), not_null(x_11));
    }
  else
    {
      t = d_10;
      {
        ATerm c_12 = NULL;
        ATerm d_12 = NULL;
        ATerm p_1 (ATerm t)
        {
          t = term_f_10;
          return(t);
        }
        t = obsolete_1(t, p_1);
        {
          c_12 = t;
          {
            if(((y_11 != NULL) && (y_11 != c_12)))
              _fail(c_12);
            else
              y_11 = c_12;
            {
              ATerm k_10;
              k_10 = t;
              {
                ATerm e_12 = NULL;
                t = term_l_10;
                {
                  e_12 = t;
                  if(((d_12 != NULL) && (d_12 != e_12)))
                    _fail(e_12);
                  else
                    d_12 = e_12;
                }
              }
              t = k_10;
              t = SSL_open_file(not_null(y_11), not_null(d_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm m_12 = NULL;
  k_12 = t;
  {
    ATerm m_10;
    m_10 = t;
    {
      ATerm n_12 = NULL;
      t = term_n_10;
      {
        n_12 = t;
        if(((m_12 != NULL) && (m_12 != n_12)))
          _fail(n_12);
        else
          m_12 = n_12;
      }
    }
    t = m_10;
    {
      t = SSL_open_file(not_null(k_12), not_null(m_12));
      t = SSL_close_file(not_null(k_12));
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
  ATerm r_12 = NULL;
  ATerm s_12 = NULL;
  t = term_o_10;
  {
    t = new_0(t);
    {
      s_12 = t;
      if(((r_12 != NULL) && (r_12 != s_12)))
        _fail(s_12);
      else
        r_12 = s_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), term_q_10);
    {
      t = conc_strings_0(t);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
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
  ATerm w_12 = NULL;
  t = new_file_0(t);
  {
    w_12 = t;
    {
      ATerm v_10;
      v_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), term_l_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), term_o_10);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_x_10;
                return(t);
              }
              t = assert_1(t, q_1);
            }
          }
        }
      }
      t = v_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_stdin_0))
    {
      ATerm i_13 = NULL;
      ATerm j_13 = NULL;
      ATerm k_13 = NULL;
      t = xtc_new_file_0(t);
      {
        j_13 = t;
        {
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
          {
            ATerm l_13 = NULL;
            t = n_0(t);
            {
              l_13 = t;
              if(((k_13 != NULL) && (k_13 != l_13)))
                _fail(l_13);
              else
                k_13 = l_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_13)), term_y_10));
              {
                ATerm z_10 = t;
                int a_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(a_11);
                  }
                else
                  {
                    t = z_10;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, m_0);
                  {
                    t = not_null(i_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_13));
    }
  else
    {
      if(match_cons(g_13, sym_FILE_1))
        {
          h_13 = ATgetArgument(g_13, 0);
          {
            ATerm n_13 = NULL;
            ATerm o_13 = NULL;
            t = not_null(h_13);
            {
              ATerm p_13 = NULL;
              t = xtc_new_file_0(t);
              {
                o_13 = t;
                {
                  if(((n_13 != NULL) && (n_13 != o_13)))
                    _fail(o_13);
                  else
                    n_13 = o_13;
                  {
                    ATerm q_13 = NULL;
                    t = n_0(t);
                    {
                      q_13 = t;
                      if(((p_13 != NULL) && (p_13 != q_13)))
                        _fail(q_13);
                      else
                        p_13 = q_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_13)), term_y_10), not_null(h_13)), term_b_11));
                      {
                        ATerm h_11 = t;
                        int i_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(i_11);
                          }
                        else
                          {
                            t = h_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, m_0);
                          {
                            t = not_null(n_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_13));
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
  ATerm b_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_stdin_0))
    {
      ATerm d_14 = NULL,f_14 = NULL;
      ATerm q_11;
      q_11 = t;
      {
        ATerm e_14 = NULL;
        t = SSLgetAnnotations(not_null(b_14));
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
      }
      t = q_11;
      {
        ATerm g_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(d_14));
        {
          g_14 = t;
          if(((f_14 != NULL) && (f_14 != g_14)))
            _fail(g_14);
          else
            f_14 = g_14;
        }
        t = not_null(f_14);
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
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_FILE_1))
    {
      q_14 = ATgetArgument(p_14, 0);
      {
        ATerm t_14 = NULL,v_14 = NULL;
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(p_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
        {
          t = not_null(q_14);
          {
            ATerm x_14 = NULL;
            t = g_49(t);
            {
              v_14 = t;
              {
                ATerm y_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(v_14)), not_null(t_14));
                {
                  y_14 = t;
                  if(((x_14 != NULL) && (x_14 != y_14)))
                    _fail(y_14);
                  else
                    x_14 = y_14;
                }
                t = not_null(x_14);
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
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(v_11);
        }
      else
        {
          t = t_11;
          t = stdin_0(t);
        }
      LocalPopChoice(s_11);
      t = xtc_transform_file_2(t, g_70, h_70);
    }
  else
    {
      t = r_11;
      t = xtc_transform_term_2(t, g_70, h_70);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
    {
      g_15 = ATgetFirst((ATermList) f_15);
      h_15 = (ATerm) ATgetNext((ATermList) f_15);
      t = not_null(h_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      {
        ATerm w_11;
        w_11 = t;
        {
          ATerm s_15 = NULL;
          ATerm t_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), not_null(p_15));
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
              t_15 = t;
              if(((s_15 != NULL) && (s_15 != t_15)))
                _fail(t_15);
              else
                s_15 = t_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_15), not_null(p_15), not_null(s_15));
            t = table_put_0(t);
          }
        }
        t = w_11;
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
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm d_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
    t = w_70(t);
    {
      d_16 = t;
      {
        if(((c_16 != NULL) && (c_16 != d_16)))
          _fail(d_16);
        else
          c_16 = d_16;
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), term_y_9);
              t = table_get_0(t);
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_16 = t;
            z_15 :
            if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
              {
                f_16 = ATgetFirst((ATermList) e_16);
                g_16 = (ATerm) ATgetNext((ATermList) e_16);
                {
                  if(((b_16 != NULL) && (b_16 != f_16)))
                    _fail(f_16);
                  else
                    b_16 = f_16;
                  {
                    if(((a_16 != NULL) && (a_16 != g_16)))
                      _fail(g_16);
                    else
                      a_16 = g_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_16), term_y_9, not_null(a_16));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_16);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm h_16 = NULL;
                              h_16 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(h_16));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_1);
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
  ATerm o_16 = NULL;
  o_16 = t;
  t = SSL_remove(not_null(o_16));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm l_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_59(t);
      t = l_59(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = l_12;
      {
        t = l_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm t_16 = NULL;
  ATerm p_12;
  p_12 = t;
  {
    ATerm u_16 = NULL;
    ATerm v_16 = NULL;
    t = v_70(t);
    {
      u_16 = t;
      {
        if(((t_16 != NULL) && (t_16 != u_16)))
          _fail(u_16);
        else
          t_16 = u_16;
        {
          ATerm w_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), term_y_9);
          {
            ATerm q_12 = t;
            int t_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_12);
              }
            else
              {
                t = q_12;
                t = (ATerm) ATempty;
              }
            {
              w_16 = t;
              if(((v_16 != NULL) && (v_16 != w_16)))
                _fail(w_16);
              else
                v_16 = w_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_16), term_y_9, (ATerm) ATinsert(CheckATermList(not_null(v_16)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = p_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL;
  ATerm s_1 (ATerm t)
  {
    t = term_x_10;
    return(t);
  }
  t = begin_scope_1(t, s_1);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_12;
      u_12 = t;
      {
        ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
        ATerm v_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_12;
            t = table_get_0(t);
            LocalPopChoice(x_12);
          }
        else
          {
            t = v_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          d_17 = t;
          a_17 :
          if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
            {
              e_17 = ATgetFirst((ATermList) d_17);
              f_17 = (ATerm) ATgetNext((ATermList) d_17);
              {
                if(((c_17 != NULL) && (c_17 != e_17)))
                  _fail(e_17);
                else
                  c_17 = e_17;
                {
                  if(((b_17 != NULL) && (b_17 != f_17)))
                    _fail(f_17);
                  else
                    b_17 = f_17;
                  {
                    t = not_null(c_17);
                    {
                      ATerm u_1 (ATerm t)
                      {
                        ATerm z_12 = t;
                        int a_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(a_13);
                          }
                        else
                          {
                            t = z_12;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, u_1);
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
      t = u_12;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_x_10;
          return(t);
        }
        t = end_scope_1(t, v_1);
      }
      return(t);
    }
    t = restore_always_2(t, u_69, t_1);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        ATerm k_17 = NULL;
        t = term_b_11;
        {
          t = get_config_0(t);
          {
            k_17 = t;
            if(((j_17 != NULL) && (j_17 != k_17)))
              _fail(k_17);
            else
              j_17 = k_17;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_17));
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = term_p_9;
      }
    t = x_69(t);
    return(t);
  }
  t = xtc_temp_files_1(t, w_1);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm s_17 = NULL;
    s_17 = t;
    r_17 :
    if(!(match_string(s_17, "-v")))
      {
        if(!(match_string(s_17, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_e_13;
    t = set_config_0(t);
    t = term_m_13;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = Option_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm v_17 = NULL;
    v_17 = t;
    t_17 :
    if(!(match_string(v_17, "-k")))
      {
        if(!(match_string(v_17, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm s_13;
    s_13 = t;
    {
      ATerm w_17 = NULL;
      ATerm x_17 = NULL;
      t = string_to_int_0(t);
      {
        x_17 = t;
        if(((w_17 != NULL) && (w_17 != x_17)))
          _fail(x_17);
        else
          w_17 = x_17;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_13, not_null(w_17));
        t = set_config_0(t);
      }
    }
    t = s_13;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_u_13;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_string_to_int(not_null(c_18));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm p_18 = NULL;
        p_18 = t;
        f_18 :
        if(!(match_string(p_18, "-S")))
          {
            if(!(match_string(p_18, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = term_y_13;
        t = set_config_0(t);
        t = term_z_13;
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_c_14;
        return(t);
      }
      t = Option_3(t, d_2, e_2, f_2);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              ATerm q_18 = NULL;
              q_18 = t;
              g_18 :
              if(!(match_string(q_18, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              ATerm t_18 = NULL;
              ATerm j_14;
              j_14 = t;
              {
                ATerm r_18 = NULL;
                ATerm s_18 = NULL;
                t = string_to_int_0(t);
                {
                  s_18 = t;
                  if(((r_18 != NULL) && (r_18 != s_18)))
                    _fail(s_18);
                  else
                    r_18 = s_18;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(r_18));
                  t = set_config_0(t);
                }
              }
              t = j_14;
              {
                ATerm u_18 = NULL;
                u_18 = t;
                if(((t_18 != NULL) && (t_18 != u_18)))
                  _fail(u_18);
                else
                  t_18 = u_18;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_18));
              }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_k_14;
              return(t);
            }
            t = ArgOption_3(t, g_2, h_2, i_2);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm v_18 = NULL;
                v_18 = t;
                o_18 :
                if(!(match_string(v_18, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = term_m_14;
                t = set_config_0(t);
                t = term_n_14;
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_r_14;
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
  ATerm s_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = s_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,p_19 = NULL,q_19 = NULL;
  i_19 = t;
  b_19 :
  if(match_string(i_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
        {
          j_19 = ATgetFirst((ATermList) i_19);
          k_19 = (ATerm) ATgetNext((ATermList) i_19);
          h_19 :
          if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
            {
              p_19 = ATgetFirst((ATermList) k_19);
              q_19 = (ATerm) ATgetNext((ATermList) k_19);
              {
                ATerm c_20 = NULL;
                ATerm b_15;
                b_15 = t;
                {
                  t = not_null(j_19);
                  t = j_0(t);
                }
                t = b_15;
                {
                  ATerm e_20 = NULL;
                  t = not_null(p_19);
                  {
                    t = k_0(t);
                    {
                      e_20 = t;
                      if(((c_20 != NULL) && (c_20 != e_20)))
                        _fail(e_20);
                      else
                        c_20 = e_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_19)), not_null(c_20));
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
  ATerm n_2 (ATerm t)
  {
    ATerm l_20 = NULL;
    l_20 = t;
    i_20 :
    if(!(match_string(l_20, "-i")))
      {
        if(!(match_string(l_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm o_20 = NULL;
    ATerm c_15;
    c_15 = t;
    {
      ATerm m_20 = NULL;
      ATerm n_20 = NULL;
      n_20 = t;
      if(((m_20 != NULL) && (m_20 != n_20)))
        _fail(n_20);
      else
        m_20 = n_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_11, not_null(m_20));
        t = set_config_0(t);
      }
    }
    t = c_15;
    {
      ATerm p_20 = NULL;
      p_20 = t;
      if(((o_20 != NULL) && (o_20 != p_20)))
        _fail(p_20);
      else
        o_20 = p_20;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_20));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_d_15;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm input_options_0 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = general_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_20 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm v_20 = NULL,w_20 = NULL;
      v_20 = t;
      t_20 :
      if(match_cons(v_20, sym_Program_1))
        {
          w_20 = ATgetArgument(v_20, 0);
          if(((u_20 != NULL) && (u_20 != w_20)))
            _fail(w_20);
          else
            u_20 = w_20;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, q_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_15), not_null(u_20)), term_l_15));
      {
        t = printnl_0(t);
        {
          t = term_r_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_15;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATempty, term_u_15));
  {
    t = printnl_0(t);
    {
      t = term_r_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  t = SSL_TicksToSeconds(not_null(z_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_21), not_null(g_21));
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            t = SSL_addr(not_null(f_21), not_null(g_21));
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
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_66(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
        s_21 = t;
        r_21 :
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            t_21 = ATgetFirst((ATermList) s_21);
            u_21 = (ATerm) ATgetNext((ATermList) s_21);
            {
              ATerm x_21 = NULL;
              ATerm y_21 = NULL;
              t = not_null(u_21);
              {
                t = foldr_2(t, z_66, a_67);
                {
                  y_21 = t;
                  if(((x_21 != NULL) && (x_21 != y_21)))
                    _fail(y_21);
                  else
                    x_21 = y_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_21), not_null(x_21));
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
  ATerm j_22 = NULL;
  ATerm l_22 = NULL;
  j_22 = t;
  {
    ATerm m_22 = NULL;
    ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
    t = not_null(j_22);
    {
      m_22 = t;
      {
        t = SSL_explode_term(not_null(m_22));
        {
          o_22 = t;
          i_22 :
          if(match_cons(o_22, sym__2))
            {
              p_22 = ATgetArgument(o_22, 0);
              q_22 = ATgetArgument(o_22, 1);
              if(((l_22 != NULL) && (l_22 != q_22)))
                _fail(q_22);
              else
                l_22 = q_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_22);
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
    ATerm r_2 (ATerm t)
    {
      t = term_x_13;
      return(t);
    }
    t = crush_2(t, r_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym__2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      {
        ATerm i_16;
        i_16 = t;
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_22), not_null(y_22));
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
              t = SSL_gtr(not_null(x_22), not_null(y_22));
            }
        }
        t = i_16;
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
  ATerm e_23 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
      f_23 = t;
      d_23 :
      if(match_cons(f_23, sym__2))
        {
          g_23 = ATgetArgument(f_23, 0);
          h_23 = ATgetArgument(f_23, 1);
          {
            if(((e_23 != NULL) && (e_23 != g_23)))
              _fail(g_23);
            else
              e_23 = g_23;
            if(((e_23 != NULL) && (e_23 != h_23)))
              _fail(h_23);
            else
              e_23 = h_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm n_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16;
      q_16 = t;
      {
        ATerm k_23 = NULL;
        ATerm l_23 = NULL;
        t = term_v_5;
        {
          t = get_config_0(t);
          {
            l_23 = t;
            if(((k_23 != NULL) && (k_23 != l_23)))
              _fail(l_23);
            else
              k_23 = l_23;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), term_r_15);
          t = geq_0(t);
        }
      }
      t = q_16;
      t = h_55(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = n_16;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm p_23 = NULL,r_23 = NULL;
    ATerm r_16;
    r_16 = t;
    {
      ATerm q_23 = NULL;
      t = run_time_0(t);
      {
        q_23 = t;
        if(((p_23 != NULL) && (p_23 != q_23)))
          _fail(q_23);
        else
          p_23 = q_23;
      }
    }
    t = r_16;
    {
      ATerm s_23 = NULL;
      t = term_s_16;
      {
        t = get_config_0(t);
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_16), not_null(p_23)), term_x_16), not_null(r_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_2);
  {
    t = term_x_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym_Version_0))
    {
      ATerm b_24 = NULL,d_24 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm c_24 = NULL;
        t = SSLgetAnnotations(not_null(z_23));
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
      }
      t = z_16;
      {
        ATerm e_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_24));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
        t = not_null(d_24);
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
  ATerm u_2 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm i_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_17);
            }
          else
            {
              t = i_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, u_2);
  t = f_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_table_create(not_null(j_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm m_17;
    m_17 = t;
    {
      t = term_n_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_17, term_o_17, not_null(n_24));
          t = table_put_0(t);
        }
      }
    }
    t = m_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_table_destroy(not_null(r_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_exit(not_null(v_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  y_24 :
  if(((ATgetType(z_24) == AT_LIST) && ATisEmpty(z_24)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
        {
          a_25 = ATgetFirst((ATermList) z_24);
          b_25 = (ATerm) ATgetNext((ATermList) z_24);
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
  ATerm p_17;
  p_17 = t;
  {
    ATerm e_25 = NULL;
    ATerm h_25 = NULL;
    ATerm q_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = q_17;
        {
          ATerm f_25 = NULL;
          ATerm g_25 = NULL;
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
          t = (ATerm) ATinsert(ATempty, not_null(f_25));
        }
      }
    {
      h_25 = t;
      if(((e_25 != NULL) && (e_25 != h_25)))
        _fail(h_25);
      else
        e_25 = h_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(e_25));
      t = printnl_0(t);
    }
  }
  t = p_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  p_25 :
  if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
    {
      q_25 = ATgetFirst((ATermList) s_25);
      r_25 = (ATerm) ATgetNext((ATermList) s_25);
      {
        ATerm v_25 = NULL;
        t = not_null(r_25);
        {
          ATerm z_17;
          z_17 = t;
          {
            ATerm w_25 = NULL,y_25 = NULL,a_26 = NULL;
            ATerm a_18;
            a_18 = t;
            {
              ATerm x_25 = NULL;
              t = i_0(t);
              {
                x_25 = t;
                if(((w_25 != NULL) && (w_25 != x_25)))
                  _fail(x_25);
                else
                  w_25 = x_25;
              }
            }
            t = a_18;
            {
              ATerm z_25 = NULL;
              t = not_null(q_25);
              {
                t = h_0(t);
                {
                  z_25 = t;
                  if(((y_25 != NULL) && (y_25 != z_25)))
                    _fail(z_25);
                  else
                    y_25 = z_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_25)), not_null(y_25));
                {
                  a_26 = t;
                  if(((v_25 != NULL) && (v_25 != a_26)))
                    _fail(a_26);
                  else
                    v_25 = a_26;
                }
              }
            }
          }
          t = z_17;
          {
            ATerm v_2 (ATerm t)
            {
              t = not_null(v_25);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_25) == AT_LIST) && ATisEmpty(s_25)))
        {
          {
            t = term_o_10;
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
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_Program_1))
    {
      m_26 = ATgetArgument(l_26, 0);
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(l_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
        {
          t = not_null(m_26);
          {
            ATerm u_26 = NULL;
            t = t_53(t);
            {
              r_26 = t;
              {
                ATerm v_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_26)), not_null(p_26));
                {
                  v_26 = t;
                  if(((u_26 != NULL) && (u_26 != v_26)))
                    _fail(v_26);
                  else
                    u_26 = v_26;
                }
                t = not_null(u_26);
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
  ATerm i_27 = NULL;
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL;
      t = term_s_16;
      {
        t = get_config_0(t);
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
      }
      LocalPopChoice(d_18);
    }
  else
    {
      t = b_18;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm k_27 = NULL;
            k_27 = t;
            if(((i_27 != NULL) && (i_27 != k_27)))
              _fail(k_27);
            else
              i_27 = k_27;
            return(t);
          }
          t = Program_1(t, h_3);
          return(t);
        }
        t = fetch_1(t, b_3);
      }
    }
  {
    t = term_e_18;
    {
      t = echo_0(t);
      {
        t = term_j_18;
        {
          t = table_get_0(t);
          {
            ATerm i_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, i_3);
            {
              ATerm j_3 (ATerm t)
              {
                ATerm l_27 = NULL;
                ATerm m_27 = NULL;
                m_27 = t;
                if(((l_27 != NULL) && (l_27 != m_27)))
                  _fail(m_27);
                else
                  l_27 = m_27;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_27)), term_k_18);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, j_3);
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
  ATerm l_18;
  l_18 = t;
  {
    ATerm r_27 = NULL;
    ATerm s_27 = NULL;
    s_27 = t;
    if(((r_27 != NULL) && (r_27 != s_27)))
      _fail(s_27);
    else
      r_27 = s_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATempty, not_null(r_27)));
      t = printnl_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm m_18;
  m_18 = t;
  {
    t = h_71(t);
    t = debug_0(t);
  }
  t = m_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_Undefined_1))
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
            t = u_53(t);
            {
              h_28 = t;
              {
                ATerm k_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_28)), not_null(f_28));
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
ATerm fetch_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm p_28 (ATerm t)
  {
    ATerm n_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_60, _id);
        LocalPopChoice(w_18);
      }
    else
      {
        t = n_18;
        t = Cons_2(t, _id, p_28);
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_75 (ATerm))
{
  t = fetch_1(t, m_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Help_0))
    {
      ATerm w_28 = NULL,y_28 = NULL;
      ATerm x_18;
      x_18 = t;
      {
        ATerm x_28 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
      }
      t = x_18;
      {
        ATerm z_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
        t = not_null(y_28);
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
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_implode_string(not_null(e_29));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
        j_29 = t;
        i_29 :
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            m_29 = ATgetFirst((ATermList) j_29);
            n_29 = (ATerm) ATgetNext((ATermList) j_29);
            {
              t = not_null(m_29);
              {
                ATerm k_3 (ATerm t)
                {
                  t = not_null(n_29);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_3);
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
  ATerm c_30 = NULL;
  ATerm e_30 = NULL;
  c_30 = t;
  {
    ATerm f_30 = NULL;
    ATerm h_30 = NULL,k_30 = NULL,l_30 = NULL;
    t = not_null(c_30);
    {
      f_30 = t;
      {
        t = SSL_explode_term(not_null(f_30));
        {
          h_30 = t;
          a_30 :
          if(match_cons(h_30, sym__2))
            {
              k_30 = ATgetArgument(h_30, 0);
              l_30 = ATgetArgument(h_30, 1);
              b_30 :
              if(match_string(k_30, ""))
                {
                  if(((e_30 != NULL) && (e_30 != l_30)))
                    _fail(l_30);
                  else
                    e_30 = l_30;
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
      t = not_null(e_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm p_30 (ATerm t)
  {
    ATerm a_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_30);
        LocalPopChoice(c_19);
      }
    else
      {
        t = a_19;
        {
          t = Nil_0(t);
          t = a_61(t);
        }
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,z_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__2))
    {
      t_30 = ATgetArgument(s_30, 0);
      z_30 = ATgetArgument(s_30, 1);
      {
        t = not_null(t_30);
        {
          ATerm l_3 (ATerm t)
          {
            t = not_null(z_30);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  t = SSL_explode_string(not_null(i_31));
  return(t);
}
ATerm _2 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm))
{
  ATerm i_32 = NULL,l_32 = NULL,m_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym__2))
    {
      l_32 = ATgetArgument(i_32, 0);
      m_32 = ATgetArgument(i_32, 1);
      {
        ATerm t_32 = NULL,v_32 = NULL;
        ATerm u_32 = NULL;
        t = SSLgetAnnotations(not_null(i_32));
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
        {
          t = not_null(l_32);
          {
            ATerm x_32 = NULL;
            t = k_47(t);
            {
              v_32 = t;
              {
                t = not_null(m_32);
                {
                  ATerm z_32 = NULL;
                  t = l_47(t);
                  {
                    x_32 = t;
                    {
                      ATerm a_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_32), not_null(x_32)), not_null(t_32));
                      {
                        a_33 = t;
                        if(((z_32 != NULL) && (z_32 != a_33)))
                          _fail(a_33);
                        else
                          z_32 = a_33;
                      }
                      t = not_null(z_32);
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
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  h_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      {
        ATerm l_19;
        l_19 = t;
        t = SSL_printnl(not_null(j_33), not_null(k_33));
        t = l_19;
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
  ATerm m_19;
  m_19 = t;
  {
    ATerm q_33 = NULL,s_33 = NULL;
    ATerm n_19;
    n_19 = t;
    {
      ATerm r_33 = NULL;
      t = g_71(t);
      {
        r_33 = t;
        if(((q_33 != NULL) && (q_33 != r_33)))
          _fail(r_33);
        else
          q_33 = r_33;
      }
    }
    t = n_19;
    {
      ATerm t_33 = NULL;
      t_33 = t;
      if(((s_33 != NULL) && (s_33 != t_33)))
        _fail(t_33);
      else
        s_33 = t_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_33)), not_null(q_33)));
        t = printnl_0(t);
      }
    }
  }
  t = m_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm w_33 (ATerm t)
  {
    ATerm o_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = o_19;
        t = Cons_2(t, l_60, w_33);
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  t = SSL_is_string(not_null(y_33));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_3);
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            {
              ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
              h_34 = t;
              g_34 :
              if(match_cons(h_34, sym_Path_1))
                {
                  i_34 = ATgetArgument(h_34, 0);
                  t = not_null(i_34);
                }
              else
                {
                  if(match_cons(h_34, sym_Var_1))
                    {
                      i_34 = ATgetArgument(h_34, 0);
                      {
                        t = not_null(i_34);
                        {
                          ATerm y_19 = t;
                          int z_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_19);
                            }
                          else
                            {
                              t = y_19;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = term_a_20;
                                  return(t);
                                }
                                t = debug_1(t, r_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_34, sym_Prefix_2))
                        {
                          i_34 = ATgetArgument(h_34, 0);
                          j_34 = ATgetArgument(h_34, 1);
                          {
                            ATerm o_34 = NULL,q_34 = NULL;
                            ATerm b_20;
                            b_20 = t;
                            {
                              ATerm p_34 = NULL;
                              t = not_null(i_34);
                              {
                                t = eval_config_0(t);
                                {
                                  p_34 = t;
                                  if(((o_34 != NULL) && (o_34 != p_34)))
                                    _fail(p_34);
                                  else
                                    o_34 = p_34;
                                }
                              }
                            }
                            t = b_20;
                            {
                              ATerm r_34 = NULL;
                              t = not_null(j_34);
                              {
                                t = eval_config_0(t);
                                {
                                  r_34 = t;
                                  if(((q_34 != NULL) && (q_34 != r_34)))
                                    _fail(r_34);
                                  else
                                    q_34 = r_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), not_null(q_34));
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
  ATerm z_34 = NULL;
  z_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_20, not_null(z_34));
    {
      t = table_get_0(t);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm h_20;
              h_20 = t;
              {
                ATerm b_35 = NULL;
                ATerm c_35 = NULL;
                c_35 = t;
                if(((b_35 != NULL) && (b_35 != c_35)))
                  _fail(c_35);
                else
                  b_35 = c_35;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_20, not_null(z_34), not_null(b_35));
                  t = table_put_0(t);
                }
              }
              t = h_20;
            }
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
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
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_59(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_cons(h_35, sym__2))
    {
      i_35 = ATgetArgument(h_35, 0);
      j_35 = ATgetArgument(h_35, 1);
      t = SSL_table_get(not_null(i_35), not_null(j_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym__3))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      t_35 = ATgetArgument(q_35, 2);
      {
        ATerm q_20;
        q_20 = t;
        {
          ATerm x_35 = NULL;
          ATerm y_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_35), not_null(s_35));
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = (ATerm) ATempty;
              }
            {
              y_35 = t;
              if(((x_35 != NULL) && (x_35 != y_35)))
                _fail(y_35);
              else
                x_35 = y_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_35), not_null(s_35), (ATerm) ATinsert(CheckATermList(not_null(x_35)), not_null(t_35)));
            t = table_put_0(t);
          }
        }
        t = q_20;
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
  ATerm c_36 = NULL;
  ATerm d_36 = NULL;
  t = term_o_10;
  {
    t = r_76(t);
    {
      d_36 = t;
      if(((c_36 != NULL) && (c_36 != d_36)))
        _fail(d_36);
      else
        c_36 = d_36;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_18, term_i_18, not_null(c_36));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(match_string(j_36, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
        {
          k_36 = ATgetFirst((ATermList) j_36);
          l_36 = (ATerm) ATgetNext((ATermList) j_36);
          {
            ATerm o_36 = NULL;
            ATerm x_20;
            x_20 = t;
            {
              t = not_null(k_36);
              t = a_0(t);
            }
            t = x_20;
            {
              ATerm p_36 = NULL;
              t = term_o_10;
              {
                t = d_0(t);
                {
                  p_36 = t;
                  if(((o_36 != NULL) && (o_36 != p_36)))
                    _fail(p_36);
                  else
                    o_36 = p_36;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_36)), not_null(o_36));
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
  ATerm s_3 (ATerm t)
  {
    ATerm u_36 = NULL;
    u_36 = t;
    t_36 :
    if(!(match_string(u_36, "--help")))
      {
        if(!(match_string(u_36, "-h")))
          {
            if(!(match_string(u_36, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_a_21;
    {
      t = set_config_0(t);
      t = term_b_21;
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_c_21;
    return(t);
  }
  t = Option_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  w_36 :
  if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
    {
      y_36 = ATgetFirst((ATermList) x_36);
      z_36 = (ATerm) ATgetNext((ATermList) x_36);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_36)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_36)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  l_37 :
  if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
    {
      n_37 = ATgetFirst((ATermList) m_37);
      o_37 = (ATerm) ATgetNext((ATermList) m_37);
      {
        ATerm s_37 = NULL,u_37 = NULL;
        ATerm t_37 = NULL;
        t = SSLgetAnnotations(not_null(m_37));
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
        {
          t = not_null(n_37);
          {
            ATerm w_37 = NULL;
            t = t_48(t);
            {
              u_37 = t;
              {
                t = not_null(o_37);
                {
                  ATerm y_37 = NULL;
                  t = u_48(t);
                  {
                    w_37 = t;
                    {
                      ATerm z_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_37)), not_null(u_37)), not_null(s_37));
                      {
                        z_37 = t;
                        if(((y_37 != NULL) && (y_37 != z_37)))
                          _fail(z_37);
                        else
                          y_37 = z_37;
                      }
                      t = not_null(y_37);
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
  ATerm m_38 = NULL;
  m_38 = t;
  l_38 :
  if(((ATgetType(m_38) == AT_LIST) && ATisEmpty(m_38)))
    {
      {
        ATerm o_38 = NULL,q_38 = NULL;
        ATerm h_21;
        h_21 = t;
        {
          ATerm p_38 = NULL;
          t = SSLgetAnnotations(not_null(m_38));
          {
            p_38 = t;
            if(((o_38 != NULL) && (o_38 != p_38)))
              _fail(p_38);
            else
              o_38 = p_38;
          }
        }
        t = h_21;
        {
          ATerm r_38 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_38));
          {
            r_38 = t;
            if(((q_38 != NULL) && (q_38 != r_38)))
              _fail(r_38);
            else
              q_38 = r_38;
          }
          t = not_null(q_38);
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
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym__2))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_20, not_null(y_38), not_null(z_38));
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
  ATerm i_21;
  i_21 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_21;
        t = p_76(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
        }
      }
  }
  t = i_21;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm j_39 = NULL;
      ATerm m_21;
      m_21 = t;
      {
        ATerm f_39 = NULL;
        ATerm i_39 = NULL;
        i_39 = t;
        if(((f_39 != NULL) && (f_39 != i_39)))
          _fail(i_39);
        else
          f_39 = i_39;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_16, not_null(f_39));
          t = set_config_0(t);
        }
      }
      t = m_21;
      {
        ATerm k_39 = NULL;
        k_39 = t;
        if(((j_39 != NULL) && (j_39 != k_39)))
          _fail(k_39);
        else
          j_39 = k_39;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_39));
      }
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              {
                t = p_76(t);
                t = Cons_2(t, _id, a_4);
              }
            }
          LocalPopChoice(o_21);
        }
      else
        {
          t = n_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_3, a_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  ATerm v_21;
  v_21 = t;
  {
    ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
    v_39 = t;
    r_39 :
    if(match_cons(v_39, sym__3))
      {
        w_39 = ATgetArgument(v_39, 0);
        x_39 = ATgetArgument(v_39, 1);
        y_39 = ATgetArgument(v_39, 2);
        {
          if(((s_39 != NULL) && (s_39 != w_39)))
            _fail(w_39);
          else
            s_39 = w_39;
          {
            if(((t_39 != NULL) && (t_39 != x_39)))
              _fail(x_39);
            else
              t_39 = x_39;
            {
              if(((u_39 != NULL) && (u_39 != y_39)))
                _fail(y_39);
              else
                u_39 = y_39;
              t = SSL_table_put(not_null(s_39), not_null(t_39), not_null(u_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm b_40 = NULL;
  ATerm w_21;
  w_21 = t;
  {
    t = term_z_21;
    t = table_put_0(t);
  }
  t = w_21;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_76(t);
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_4);
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_22;
          e_22 = t;
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_20;
                t = get_config_0(t);
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_22;
          {
            t = system_usage_0(t);
            {
              t = term_x_13;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          {
            ATerm h_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm e_4 (ATerm t)
                  {
                    ATerm c_40 = NULL;
                    c_40 = t;
                    if(((b_40 != NULL) && (b_40 != c_40)))
                      _fail(c_40);
                    else
                      b_40 = c_40;
                    return(t);
                  }
                  t = Undefined_1(t, e_4);
                  return(t);
                }
                t = fetch_1(t, d_4);
                {
                  ATerm f_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_40)), term_n_22);
                    return(t);
                  }
                  t = say_1(t, f_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_r_15;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(k_22);
              }
            else
              {
                t = h_22;
                {
                }
              }
          }
        }
      {
        ATerm r_22;
        r_22 = t;
        {
          t = term_h_18;
          t = table_destroy_0(t);
        }
        t = r_22;
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
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_74);
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm u_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = u_22;
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
ATerm sdf_to_sig_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = general_options_0(t);
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm j_4 (ATerm t)
    {
      ATerm q_40 = NULL;
      ATerm l_4 (ATerm t)
      {
        t = term_c_23;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm k_40 = NULL;
        ATerm l_40 = NULL;
        t = term_i_23;
        {
          t = xtc_find_0(t);
          {
            l_40 = t;
            if(((k_40 != NULL) && (k_40 != l_40)))
              _fail(l_40);
            else
              k_40 = l_40;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_40)), term_m_23), term_j_23);
        return(t);
      }
      t = xtc_transform_2(t, l_4, o_4);
      {
        ATerm p_4 (ATerm t)
        {
          t = term_n_23;
          return(t);
        }
        t = xtc_transform_1(t, p_4);
        {
          ATerm q_4 (ATerm t)
          {
            t = term_o_23;
            return(t);
          }
          t = xtc_transform_1(t, q_4);
          {
            ATerm r_4 (ATerm t)
            {
              t = term_t_23;
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm m_40 = NULL,o_40 = NULL;
              ATerm u_23;
              u_23 = t;
              {
                ATerm n_40 = NULL;
                t = term_v_23;
                {
                  t = xtc_find_0(t);
                  {
                    n_40 = t;
                    if(((m_40 != NULL) && (m_40 != n_40)))
                      _fail(n_40);
                    else
                      m_40 = n_40;
                  }
                }
              }
              t = u_23;
              {
                ATerm p_40 = NULL;
                t = term_w_23;
                {
                  t = xtc_find_0(t);
                  {
                    p_40 = t;
                    if(((o_40 != NULL) && (o_40 != p_40)))
                      _fail(p_40);
                    else
                      o_40 = p_40;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_40)), term_m_23), not_null(m_40)), term_m_23);
              }
              return(t);
            }
            t = xtc_transform_2(t, r_4, u_4);
            {
              ATerm v_4 (ATerm t)
              {
                t = term_x_23;
                return(t);
              }
              t = xtc_transform_1(t, v_4);
              {
                ATerm r_40 = NULL,s_40 = NULL;
                r_40 = t;
                j_40 :
                if(match_cons(r_40, sym_FILE_1))
                  {
                    s_40 = ATgetArgument(r_40, 0);
                    {
                      ATerm u_40 = NULL;
                      t = not_null(s_40);
                      {
                        u_40 = t;
                        if(((q_40 != NULL) && (q_40 != u_40)))
                          _fail(u_40);
                        else
                          q_40 = u_40;
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_24), not_null(q_40));
                  {
                    ATerm y_4 (ATerm t)
                    {
                      t = term_f_24;
                      return(t);
                    }
                    t = xtc_command_1(t, y_4);
                  }
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_input_1(t, j_4);
    return(t);
  }
  t = option_wrap_2(t, g_4, h_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sdf_to_sig_0(t);
  return(t);
}
