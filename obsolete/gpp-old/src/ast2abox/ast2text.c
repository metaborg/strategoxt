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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_CUT_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_a_22;
ATerm term_z_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_b_20;
ATerm term_p_19;
ATerm term_y_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_h_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_m_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_m_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_p_11);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_d_7);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_7);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_q_7);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_q_7);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_q_7);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   use pretty-print table files", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_r_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__3, term_q_17, term_r_17, (ATerm) ATempty);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Input in: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Box in: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Pretty-printed to: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Output in: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm));
ATerm crush_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_76 (ATerm));
ATerm debug_1 (ATerm, ATerm s_61 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm m_76 (ATerm));
ATerm _2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm v_62 (ATerm));
ATerm debug_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm o_76 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm n_76 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_62 (ATerm));
ATerm assert_1 (ATerm, ATerm o_62 (ATerm));
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_62 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm k_62 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_55 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm pp_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_53 (ATerm));
ATerm map_1 (ATerm, ATerm d_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_53 (ATerm));
ATerm Program_1 (ATerm, ATerm r_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_54 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_53 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_53 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_53 (ATerm));
ATerm ast2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_w_5));
  {
    t = printnl_0(t);
    {
      t = term_b_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = SSL_exit(not_null(t_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  o_1 = t;
  a_1 :
  if(match_cons(o_1, sym__2))
    {
      p_1 = ATgetArgument(o_1, 0);
      q_1 = ATgetArgument(o_1, 1);
      {
        ATerm c_6;
        c_6 = t;
        t = SSL_printnl(not_null(p_1), not_null(q_1));
        t = c_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  t = SSL_is_string(not_null(i_2));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = d_6;
      {
        ATerm j_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(m_6);
          }
        else
          {
            t = j_6;
            {
              ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
              r_2 = t;
              q_2 :
              if(match_cons(r_2, sym_Path_1))
                {
                  s_2 = ATgetArgument(r_2, 0);
                  t = not_null(s_2);
                }
              else
                {
                  if(match_cons(r_2, sym_Var_1))
                    {
                      s_2 = ATgetArgument(r_2, 0);
                      {
                        t = not_null(s_2);
                        {
                          ATerm n_6 = t;
                          int o_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_6);
                            }
                          else
                            {
                              t = n_6;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_p_6;
                                  return(t);
                                }
                                t = debug_1(t, d_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_2, sym_Prefix_2))
                        {
                          s_2 = ATgetArgument(r_2, 0);
                          t_2 = ATgetArgument(r_2, 1);
                          {
                            ATerm y_2 = NULL,a_3 = NULL;
                            ATerm q_6;
                            q_6 = t;
                            {
                              ATerm z_2 = NULL;
                              t = not_null(s_2);
                              {
                                t = eval_config_0(t);
                                {
                                  z_2 = t;
                                  if(((y_2 != NULL) && (y_2 != z_2)))
                                    _fail(z_2);
                                  else
                                    y_2 = z_2;
                                }
                              }
                            }
                            t = q_6;
                            {
                              ATerm b_3 = NULL;
                              t = not_null(t_2);
                              {
                                t = eval_config_0(t);
                                {
                                  b_3 = t;
                                  if(((a_3 != NULL) && (a_3 != b_3)))
                                    _fail(b_3);
                                  else
                                    a_3 = b_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
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
  ATerm j_3 = NULL;
  j_3 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_6, not_null(j_3));
    {
      t = table_get_0(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_6;
            u_6 = t;
            {
              ATerm l_3 = NULL;
              ATerm m_3 = NULL;
              m_3 = t;
              if(((l_3 != NULL) && (l_3 != m_3)))
                _fail(m_3);
              else
                l_3 = m_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_6, not_null(j_3), not_null(l_3));
                t = table_put_0(t);
              }
            }
            t = u_6;
          }
          return(t);
        }
        t = try_1(t, e_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  t = SSL_TicksToSeconds(not_null(q_3));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  v_3 = t;
  u_3 :
  if(match_cons(v_3, sym__2))
    {
      w_3 = ATgetArgument(v_3, 0);
      x_3 = ATgetArgument(v_3, 1);
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_3), not_null(x_3));
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            t = SSL_addr(not_null(w_3), not_null(x_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_64(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
        e_4 = t;
        d_4 :
        if(((ATgetType(e_4) == AT_LIST) && ((ATermList) e_4 != ATempty)))
          {
            f_4 = ATgetFirst((ATermList) e_4);
            g_4 = (ATerm) ATgetNext((ATermList) e_4);
            {
              ATerm j_4 = NULL;
              ATerm k_4 = NULL;
              t = not_null(g_4);
              {
                t = foldr_2(t, n_64, o_64);
                {
                  k_4 = t;
                  if(((j_4 != NULL) && (j_4 != k_4)))
                    _fail(k_4);
                  else
                    j_4 = k_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), not_null(j_4));
                t = o_64(t);
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
ATerm crush_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm r_4 = NULL;
  ATerm t_4 = NULL;
  r_4 = t;
  {
    ATerm u_4 = NULL;
    ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
    t = not_null(r_4);
    {
      u_4 = t;
      {
        t = SSL_explode_term(not_null(u_4));
        {
          w_4 = t;
          q_4 :
          if(match_cons(w_4, sym__2))
            {
              x_4 = ATgetArgument(w_4, 0);
              y_4 = ATgetArgument(w_4, 1);
              if(((t_4 != NULL) && (t_4 != y_4)))
                _fail(y_4);
              else
                t_4 = y_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_4);
      t = foldr_2(t, f_66, g_66);
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
    ATerm f_0 (ATerm t)
    {
      t = term_d_7;
      return(t);
    }
    t = crush_2(t, f_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm d_5 = NULL;
      ATerm e_5 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          e_5 = t;
          if(((d_5 != NULL) && (d_5 != e_5)))
            _fail(e_5);
          else
            d_5 = e_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), term_b_6);
        t = geq_0(t);
      }
    }
    t = e_7;
    t = k_76(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm g_7;
  g_7 = t;
  {
    ATerm i_5 = NULL,k_5 = NULL;
    ATerm j_7;
    j_7 = t;
    {
      ATerm j_5 = NULL;
      t = s_61(t);
      {
        j_5 = t;
        if(((i_5 != NULL) && (i_5 != j_5)))
          _fail(j_5);
        else
          i_5 = j_5;
      }
    }
    t = j_7;
    {
      ATerm l_5 = NULL;
      l_5 = t;
      if(((k_5 != NULL) && (k_5 != l_5)))
        _fail(l_5);
      else
        k_5 = l_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_5)), not_null(i_5)));
        t = printnl_0(t);
      }
    }
  }
  t = g_7;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm o_7;
    o_7 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          q_5 = t;
          if(((p_5 != NULL) && (p_5 != q_5)))
            _fail(q_5);
          else
            p_5 = q_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_p_7);
        t = geq_0(t);
      }
    }
    t = o_7;
    t = m_76(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      {
        ATerm e_6 = NULL,g_6 = NULL;
        ATerm f_6 = NULL;
        t = SSLgetAnnotations(not_null(y_5));
        {
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
        }
        {
          t = not_null(z_5);
          {
            ATerm i_6 = NULL;
            t = i_44(t);
            {
              g_6 = t;
              {
                t = not_null(a_6);
                {
                  ATerm k_6 = NULL;
                  t = j_44(t);
                  {
                    i_6 = t;
                    {
                      ATerm l_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_6), not_null(i_6)), not_null(e_6));
                      {
                        l_6 = t;
                        if(((k_6 != NULL) && (k_6 != l_6)))
                          _fail(l_6);
                        else
                          k_6 = l_6;
                      }
                      t = not_null(k_6);
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
    t = conc_0(t);
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
  ATerm s_6 = NULL;
  ATerm t_6 = NULL;
  t = term_q_7;
  {
    t = new_0(t);
    {
      t_6 = t;
      if(((s_6 != NULL) && (s_6 != t_6)))
        _fail(t_6);
      else
        s_6 = t_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), term_r_7);
    {
      t = conc_strings_0(t);
      {
        ATerm r_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_0);
      }
    }
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      t = SSL_rename(not_null(z_6), not_null(a_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_stdout_0))
    {
      ATerm k_7 = NULL,m_7 = NULL;
      ATerm s_7;
      s_7 = t;
      {
        ATerm l_7 = NULL;
        t = SSLgetAnnotations(not_null(i_7));
        {
          l_7 = t;
          if(((k_7 != NULL) && (k_7 != l_7)))
            _fail(l_7);
          else
            k_7 = l_7;
        }
      }
      t = s_7;
      {
        ATerm n_7 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(k_7));
        {
          n_7 = t;
          if(((m_7 != NULL) && (m_7 != n_7)))
            _fail(n_7);
          else
            m_7 = n_7;
        }
        t = not_null(m_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm y_7 = NULL,z_7 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym_FILE_1))
    {
      z_7 = ATgetArgument(y_7, 0);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL;
            ATerm c_8 = NULL;
            t = o_0(t);
            {
              c_8 = t;
              v_7 :
              if(match_cons(c_8, sym_stdout_0))
                {
                  ATerm d_8 = NULL;
                  t = not_null(z_7);
                  {
                    t = ReadFromFile_0(t);
                    {
                      d_8 = t;
                      {
                        if(((b_8 != NULL) && (b_8 != d_8)))
                          _fail(d_8);
                        else
                          b_8 = d_8;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(b_8));
                          t = WriteToTextFile_0(t);
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
            t = term_w_7;
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
              ATerm f_8 = NULL;
              ATerm g_8 = NULL;
              t = o_0(t);
              {
                g_8 = t;
                {
                  if(((f_8 != NULL) && (f_8 != g_8)))
                    _fail(g_8);
                  else
                    f_8 = g_8;
                  {
                    ATerm a_8 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = a_8;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(f_8));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_8));
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
ATerm xtc_transform_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, v_62, s_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm e_8;
  e_8 = t;
  {
    ATerm n_8 = NULL;
    ATerm o_8 = NULL;
    o_8 = t;
    if(((n_8 != NULL) && (n_8 != o_8)))
      _fail(o_8);
    else
      n_8 = o_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(n_8)));
      t = printnl_0(t);
    }
  }
  t = e_8;
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_stdin_0))
    {
      ATerm x_8 = NULL;
      ATerm y_8 = NULL;
      t = term_h_8;
      {
        t = ReadFromFile_0(t);
        {
          y_8 = t;
          if(((x_8 != NULL) && (x_8 != y_8)))
            _fail(y_8);
          else
            x_8 = y_8;
        }
      }
      t = not_null(x_8);
    }
  else
    {
      if(match_cons(v_8, sym_FILE_1))
        {
          w_8 = ATgetArgument(v_8, 0);
          {
            ATerm a_9 = NULL;
            ATerm b_9 = NULL;
            t = not_null(w_8);
            {
              t = ReadFromFile_0(t);
              {
                b_9 = t;
                if(((a_9 != NULL) && (a_9 != b_9)))
                  _fail(b_9);
                else
                  a_9 = b_9;
              }
            }
            t = not_null(a_9);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      t = SSL_WriteToTextFile(not_null(j_9), not_null(k_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm q_9 = NULL;
  ATerm s_9 = NULL;
  q_9 = t;
  {
    ATerm t_9 = NULL;
    t = xtc_new_file_0(t);
    {
      t_9 = t;
      {
        if(((s_9 != NULL) && (s_9 != t_9)))
          _fail(t_9);
        else
          s_9 = t_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(q_9));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_9));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_63, e_63);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      t = SSL_call(not_null(z_9), not_null(a_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  t = SSL_table_keys(not_null(f_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm n_10 = NULL;
        ATerm p_10 = NULL;
        n_10 = t;
        {
          ATerm q_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(n_10));
          {
            t = table_get_0(t);
            {
              q_10 = t;
              if(((p_10 != NULL) && (p_10 != q_10)))
                _fail(q_10);
              else
                p_10 = q_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(p_10));
        }
        return(t);
      }
      t = map_1(t, u_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm i_8;
    i_8 = t;
    {
      ATerm v_10 = NULL;
      ATerm w_10 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), term_j_8);
        t = geq_0(t);
      }
    }
    t = i_8;
    t = o_76(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_8;
  k_8 = t;
  {
    ATerm z_10 = NULL;
    ATerm a_11 = NULL;
    a_11 = t;
    if(((z_10 != NULL) && (z_10 != a_11)))
      _fail(a_11);
    else
      z_10 = a_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(z_10));
      t = printnl_0(t);
    }
  }
  t = k_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm i_11 = NULL,j_11 = NULL;
  g_11 = t;
  {
    ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_11)));
    {
      t = table_get_0(t);
      {
        k_11 = t;
        e_11 :
        if(((ATgetType(k_11) == AT_LIST) && ((ATermList) k_11 != ATempty)))
          {
            l_11 = ATgetFirst((ATermList) k_11);
            o_11 = (ATerm) ATgetNext((ATermList) k_11);
            f_11 :
            if(match_cons(l_11, sym__2))
              {
                m_11 = ATgetArgument(l_11, 0);
                n_11 = ATgetArgument(l_11, 1);
                {
                  if(((i_11 != NULL) && (i_11 != m_11)))
                    _fail(m_11);
                  else
                    i_11 = m_11;
                  if(((j_11 != NULL) && (j_11 != n_11)))
                    _fail(n_11);
                  else
                    j_11 = n_11;
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
    t = not_null(j_11);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        ATerm a_12 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_11)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
              b_12 = t;
              t_11 :
              if(match_cons(b_12, sym__2))
                {
                  c_12 = ATgetArgument(b_12, 0);
                  d_12 = ATgetArgument(b_12, 1);
                  {
                    if(((x_11 != NULL) && (x_11 != c_12)))
                      _fail(c_12);
                    else
                      x_11 = c_12;
                    if(((a_12 != NULL) && (a_12 != d_12)))
                      _fail(d_12);
                    else
                      a_12 = d_12;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(a_12);
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
  ATerm x_0 (ATerm t)
  {
    t = term_p_8;
    {
      t = table_get_0(t);
      {
        ATerm y_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, y_0);
      }
    }
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym__2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      {
        t = not_null(m_12);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
            p_12 = t;
            i_12 :
            if(match_cons(p_12, sym__2))
              {
                q_12 = ATgetArgument(p_12, 0);
                r_12 = ATgetArgument(p_12, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_12), not_null(q_12), not_null(r_12));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
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
  ATerm x_12 = NULL;
  x_12 = t;
  t = SSL_ReadFromFile(not_null(x_12));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_13 = NULL;
  ATerm e_13 = NULL;
  c_13 = t;
  {
    ATerm q_8;
    q_8 = t;
    {
      ATerm f_13 = NULL;
      t = term_r_8;
      {
        f_13 = t;
        if(((e_13 != NULL) && (e_13 != f_13)))
          _fail(f_13);
        else
          e_13 = f_13;
      }
    }
    t = q_8;
    {
      t = SSL_open_file(not_null(c_13), not_null(e_13));
      t = SSL_close_file(not_null(c_13));
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym__2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm s_8;
        s_8 = t;
        {
          ATerm t_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_13), not_null(m_13));
              LocalPopChoice(z_8);
            }
          else
            {
              t = t_8;
              t = SSL_gtr(not_null(l_13), not_null(m_13));
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
ATerm geq_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
      t_13 = t;
      r_13 :
      if(match_cons(t_13, sym__2))
        {
          u_13 = ATgetArgument(t_13, 0);
          v_13 = ATgetArgument(t_13, 1);
          {
            if(((s_13 != NULL) && (s_13 != u_13)))
              _fail(u_13);
            else
              s_13 = u_13;
            if(((s_13 != NULL) && (s_13 != v_13)))
              _fail(v_13);
            else
              s_13 = v_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm e_9;
    e_9 = t;
    {
      ATerm y_13 = NULL;
      ATerm z_13 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_f_9);
        t = geq_0(t);
      }
    }
    t = e_9;
    t = n_76(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm f_14 = NULL;
  d_14 = t;
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(d_14)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_9;
      }
    {
      ATerm l_9;
      l_9 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_8, term_m_9, not_null(d_14));
        t = table_put_0(t);
      }
      t = l_9;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_n_9;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose4_1(t, c_1);
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
            ATerm g_14 = NULL;
            g_14 = t;
            if(((f_14 != NULL) && (f_14 != g_14)))
              _fail(g_14);
            else
              f_14 = g_14;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(f_14));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_l_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(d_14)), term_q_7);
                  t = table_put_0(t);
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
  ATerm k_14 = NULL;
  k_14 = t;
  t = SSL_getenv(not_null(k_14));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm r_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_9;
      t = get_config_0(t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = r_9;
      {
        ATerm w_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_10;
            t = getenv_0(t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = w_9;
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
      t = term_d_10;
      return(t);
    }
    t = debug_1(t, f_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm g_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_10;
          t = table_get_0(t);
          LocalPopChoice(h_10);
        }
      else
        {
          t = g_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_10;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_j_10;
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
  ATerm k_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = term_o_10;
          return(t);
        }
        t = debug_1(t, j_1);
        return(t);
      }
      t = if_verbose5_1(t, i_1);
      {
        t = xtc_load_0(t);
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = term_o_10;
                return(t);
              }
              t = debug_1(t, l_1);
              return(t);
            }
            t = if_verbose5_1(t, k_1);
          }
        }
      }
      LocalPopChoice(m_10);
    }
  else
    {
      t = k_10;
      {
        ATerm o_14 = NULL;
        ATerm p_14 = NULL;
        p_14 = t;
        if(((o_14 != NULL) && (o_14 != p_14)))
          _fail(p_14);
        else
          o_14 = p_14;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(o_14)), term_t_10);
          {
            t = error_0(t);
            {
              ATerm m_1 (ATerm t)
              {
                t = term_l_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_x_10;
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
ATerm xtc_command_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm t_14 = NULL;
  ATerm y_10;
  y_10 = t;
  {
    ATerm u_14 = NULL;
    t = u_62(t);
    {
      t = xtc_find_warning_0(t);
      {
        u_14 = t;
        if(((t_14 != NULL) && (t_14 != u_14)))
          _fail(u_14);
        else
          t_14 = u_14;
      }
    }
  }
  t = y_10;
  {
    ATerm b_11;
    b_11 = t;
    {
      ATerm v_14 = NULL;
      ATerm w_14 = NULL;
      w_14 = t;
      if(((v_14 != NULL) && (v_14 != w_14)))
        _fail(w_14);
      else
        v_14 = w_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), not_null(v_14));
        t = call_0(t);
      }
    }
    t = b_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      {
        ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
        ATerm c_11;
        c_11 = t;
        {
          ATerm m_15 = NULL;
          ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
          t = o_62(t);
          {
            m_15 = t;
            {
              if(((j_15 != NULL) && (j_15 != m_15)))
                _fail(m_15);
              else
                j_15 = m_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_15), not_null(f_15), not_null(g_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), term_p_11);
                        t = table_get_0(t);
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = d_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_15 = t;
                      c_15 :
                      if(((ATgetType(n_15) == AT_LIST) && ((ATermList) n_15 != ATempty)))
                        {
                          o_15 = ATgetFirst((ATermList) n_15);
                          p_15 = (ATerm) ATgetNext((ATermList) n_15);
                          {
                            if(((k_15 != NULL) && (k_15 != o_15)))
                              _fail(o_15);
                            else
                              k_15 = o_15;
                            {
                              if(((l_15 != NULL) && (l_15 != p_15)))
                                _fail(p_15);
                              else
                                l_15 = p_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_15), term_p_11, (ATerm) ATinsert(CheckATermList(not_null(l_15)), (ATerm) ATinsert(CheckATermList(not_null(k_15)), not_null(f_15))));
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
        t = c_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm u_15 = NULL;
  t = new_file_0(t);
  {
    u_15 = t;
    {
      ATerm q_11;
      q_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), term_q_7);
        {
          ATerm r_1 (ATerm t)
          {
            t = term_r_11;
            return(t);
          }
          t = assert_1(t, r_1);
        }
      }
      t = q_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_stdin_0))
    {
      ATerm g_16 = NULL;
      ATerm h_16 = NULL;
      ATerm i_16 = NULL;
      t = xtc_new_file_0(t);
      {
        h_16 = t;
        {
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
          {
            ATerm j_16 = NULL;
            t = n_0(t);
            {
              j_16 = t;
              if(((i_16 != NULL) && (i_16 != j_16)))
                _fail(j_16);
              else
                i_16 = j_16;
            }
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_16)), not_null(g_16)), term_s_11);
              t = xtc_command_1(t, m_0);
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_16));
    }
  else
    {
      if(match_cons(e_16, sym_FILE_1))
        {
          f_16 = ATgetArgument(e_16, 0);
          {
            ATerm l_16 = NULL;
            ATerm m_16 = NULL;
            t = not_null(f_16);
            {
              ATerm n_16 = NULL;
              t = xtc_new_file_0(t);
              {
                m_16 = t;
                {
                  if(((l_16 != NULL) && (l_16 != m_16)))
                    _fail(m_16);
                  else
                    l_16 = m_16;
                  {
                    ATerm o_16 = NULL;
                    t = n_0(t);
                    {
                      o_16 = t;
                      if(((n_16 != NULL) && (n_16 != o_16)))
                        _fail(o_16);
                      else
                        n_16 = o_16;
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_16)), not_null(l_16)), term_s_11), not_null(f_16)), term_y_11);
                      t = xtc_command_1(t, m_0);
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_16));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm z_11 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, w_62, x_62);
      LocalPopChoice(e_12);
    }
  else
    {
      t = z_11;
      t = xtc_transform_term_2(t, w_62, x_62);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
    {
      y_16 = ATgetFirst((ATermList) x_16);
      z_16 = (ATerm) ATgetNext((ATermList) x_16);
      t = not_null(z_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      {
        ATerm f_12;
        f_12 = t;
        {
          ATerm l_17 = NULL;
          ATerm m_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(i_17));
          {
            ATerm g_12 = t;
            int h_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_12);
              }
            else
              {
                t = g_12;
                t = (ATerm) ATempty;
              }
            {
              m_17 = t;
              if(((l_17 != NULL) && (l_17 != m_17)))
                _fail(m_17);
              else
                l_17 = m_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_17), not_null(i_17), not_null(l_17));
            t = table_put_0(t);
          }
        }
        t = f_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  ATerm n_12;
  n_12 = t;
  {
    ATerm w_17 = NULL;
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
    t = l_62(t);
    {
      w_17 = t;
      {
        if(((u_17 != NULL) && (u_17 != w_17)))
          _fail(w_17);
        else
          u_17 = w_17;
        {
          ATerm o_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), term_p_11);
              t = table_get_0(t);
              LocalPopChoice(s_12);
            }
          else
            {
              t = o_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            x_17 = t;
            s_17 :
            if(((ATgetType(x_17) == AT_LIST) && ((ATermList) x_17 != ATempty)))
              {
                y_17 = ATgetFirst((ATermList) x_17);
                z_17 = (ATerm) ATgetNext((ATermList) x_17);
                {
                  if(((v_17 != NULL) && (v_17 != y_17)))
                    _fail(y_17);
                  else
                    v_17 = y_17;
                  {
                    if(((t_17 != NULL) && (t_17 != z_17)))
                      _fail(z_17);
                    else
                      t_17 = z_17;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_17), term_p_11, not_null(t_17));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(v_17);
                          {
                            ATerm s_1 (ATerm t)
                            {
                              ATerm a_18 = NULL;
                              a_18 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(a_18));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_1);
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
  t = n_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm g_18 = NULL;
  g_18 = t;
  t = SSL_remove(not_null(g_18));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm t_18 = NULL;
  ATerm t_12;
  t_12 = t;
  {
    ATerm u_18 = NULL;
    ATerm v_18 = NULL;
    t = k_62(t);
    {
      u_18 = t;
      {
        if(((t_18 != NULL) && (t_18 != u_18)))
          _fail(u_18);
        else
          t_18 = u_18;
        {
          ATerm w_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), term_p_11);
          {
            ATerm u_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_12);
              }
            else
              {
                t = u_12;
                t = (ATerm) ATempty;
              }
            {
              w_18 = t;
              if(((v_18 != NULL) && (v_18 != w_18)))
                _fail(w_18);
              else
                v_18 = w_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_18), term_p_11, (ATerm) ATinsert(CheckATermList(not_null(v_18)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_12;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL;
  ATerm t_1 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = begin_scope_1(t, t_1);
  {
    t = t_62(t);
    {
      ATerm w_12;
      w_12 = t;
      {
        ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_13;
            t = table_get_0(t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          g_19 = t;
          c_19 :
          if(((ATgetType(g_19) == AT_LIST) && ((ATermList) g_19 != ATempty)))
            {
              h_19 = ATgetFirst((ATermList) g_19);
              i_19 = (ATerm) ATgetNext((ATermList) g_19);
              {
                if(((f_19 != NULL) && (f_19 != h_19)))
                  _fail(h_19);
                else
                  f_19 = h_19;
                {
                  if(((e_19 != NULL) && (e_19 != i_19)))
                    _fail(i_19);
                  else
                    e_19 = i_19;
                  {
                    t = not_null(f_19);
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
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
      t = w_12;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_r_11;
          return(t);
        }
        t = end_scope_1(t, v_1);
      }
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_19 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL;
      n_19 = t;
      l_19 :
      if(match_cons(n_19, sym_Program_1))
        {
          o_19 = ATgetArgument(n_19, 0);
          if(((m_19 != NULL) && (m_19 != o_19)))
            _fail(o_19);
          else
            m_19 = o_19;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_13), not_null(m_19)), term_d_13));
      {
        t = printnl_0(t);
        {
          t = term_b_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_13;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Version_0))
    {
      ATerm w_19 = NULL,y_19 = NULL;
      ATerm h_13;
      h_13 = t;
      {
        ATerm x_19 = NULL;
        t = SSLgetAnnotations(not_null(u_19));
        {
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
        }
      }
      t = h_13;
      {
        ATerm z_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        t = not_null(y_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm i_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = i_13;
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_1);
  t = u_55(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_string_to_int(not_null(e_20));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm w_20 = NULL;
        w_20 = t;
        h_20 :
        if(!(match_string(w_20, "-i")))
          {
            if(!(match_string(w_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm z_20 = NULL;
        ATerm x_13;
        x_13 = t;
        {
          ATerm x_20 = NULL;
          ATerm y_20 = NULL;
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(x_20));
            t = set_config_0(t);
          }
        }
        t = x_13;
        {
          ATerm a_21 = NULL;
          a_21 = t;
          if(((z_20 != NULL) && (z_20 != a_21)))
            _fail(a_21);
          else
            z_20 = a_21;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_20));
        }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_a_14;
        return(t);
      }
      t = ArgOption_3(t, y_1, z_1, a_2);
      LocalPopChoice(w_13);
    }
  else
    {
      t = q_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm b_21 = NULL;
              b_21 = t;
              k_20 :
              if(!(match_string(b_21, "-o")))
                {
                  if(!(match_string(b_21, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              ATerm e_21 = NULL;
              ATerm e_14;
              e_14 = t;
              {
                ATerm c_21 = NULL;
                ATerm d_21 = NULL;
                d_21 = t;
                if(((c_21 != NULL) && (c_21 != d_21)))
                  _fail(d_21);
                else
                  c_21 = d_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(c_21));
                  t = set_config_0(t);
                }
              }
              t = e_14;
              {
                ATerm f_21 = NULL;
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_21));
              }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              t = term_h_14;
              return(t);
            }
            t = ArgOption_3(t, b_2, c_2, d_2);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm i_14 = t;
              int j_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm g_21 = NULL;
                    g_21 = t;
                    n_20 :
                    if(!(match_string(g_21, "-S")))
                      {
                        if(!(match_string(g_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_l_14;
                    t = set_config_0(t);
                    t = term_m_14;
                    return(t);
                  }
                  ATerm g_2 (ATerm t)
                  {
                    t = term_n_14;
                    return(t);
                  }
                  t = Option_3(t, e_2, f_2, g_2);
                  LocalPopChoice(j_14);
                }
              else
                {
                  t = i_14;
                  {
                    ATerm q_14 = t;
                    int r_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_2 (ATerm t)
                        {
                          ATerm n_21 = NULL;
                          n_21 = t;
                          o_20 :
                          if(!(match_string(n_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm j_2 (ATerm t)
                        {
                          ATerm q_21 = NULL;
                          ATerm s_14;
                          s_14 = t;
                          {
                            ATerm o_21 = NULL;
                            ATerm p_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              p_21 = t;
                              if(((o_21 != NULL) && (o_21 != p_21)))
                                _fail(p_21);
                              else
                                o_21 = p_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(o_21));
                              t = set_config_0(t);
                            }
                          }
                          t = s_14;
                          {
                            ATerm r_21 = NULL;
                            r_21 = t;
                            if(((q_21 != NULL) && (q_21 != r_21)))
                              _fail(r_21);
                            else
                              q_21 = r_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_21));
                          }
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          t = term_x_14;
                          return(t);
                        }
                        t = ArgOption_3(t, h_2, j_2, k_2);
                        LocalPopChoice(r_14);
                      }
                    else
                      {
                        t = q_14;
                        {
                          ATerm y_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_2 (ATerm t)
                              {
                                ATerm s_21 = NULL;
                                s_21 = t;
                                r_20 :
                                if(!(match_string(s_21, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm m_2 (ATerm t)
                              {
                                ATerm a_15;
                                a_15 = t;
                                {
                                  ATerm u_21 = NULL;
                                  ATerm v_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    v_21 = t;
                                    if(((u_21 != NULL) && (u_21 != v_21)))
                                      _fail(v_21);
                                    else
                                      u_21 = v_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_b_15, not_null(u_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = a_15;
                                return(t);
                              }
                              ATerm n_2 (ATerm t)
                              {
                                t = term_h_15;
                                return(t);
                              }
                              t = ArgOption_3(t, l_2, m_2, n_2);
                              LocalPopChoice(z_14);
                            }
                          else
                            {
                              t = y_14;
                              {
                                ATerm i_15 = t;
                                int q_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_2 (ATerm t)
                                    {
                                      ATerm w_21 = NULL;
                                      w_21 = t;
                                      t_20 :
                                      if(!(match_string(w_21, "-v")))
                                        {
                                          if(!(match_string(w_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm p_2 (ATerm t)
                                    {
                                      t = term_s_15;
                                      t = set_config_0(t);
                                      t = term_t_15;
                                      return(t);
                                    }
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = term_v_15;
                                      return(t);
                                    }
                                    t = Option_3(t, o_2, p_2, u_2);
                                    LocalPopChoice(q_15);
                                  }
                                else
                                  {
                                    t = i_15;
                                    {
                                      ATerm w_15 = t;
                                      int x_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm x_21 = NULL;
                                            x_21 = t;
                                            u_20 :
                                            if(!(match_string(x_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm w_2 (ATerm t)
                                          {
                                            t = term_z_15;
                                            t = set_config_0(t);
                                            t = term_a_16;
                                            return(t);
                                          }
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = term_b_16;
                                            return(t);
                                          }
                                          t = Option_3(t, v_2, w_2, x_2);
                                          LocalPopChoice(x_15);
                                        }
                                      else
                                        {
                                          t = w_15;
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              ATerm y_21 = NULL;
                                              y_21 = t;
                                              v_20 :
                                              if(!(match_string(y_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = term_k_16;
                                              t = set_config_0(t);
                                              t = term_p_16;
                                              return(t);
                                            }
                                            ATerm e_3 (ATerm t)
                                            {
                                              t = term_q_16;
                                              return(t);
                                            }
                                            t = Option_3(t, c_3, d_3, e_3);
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
ATerm conc_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym__2))
    {
      j_22 = ATgetArgument(i_22, 0);
      k_22 = ATgetArgument(i_22, 1);
      {
        t = not_null(j_22);
        {
          ATerm f_3 (ATerm t)
          {
            t = not_null(k_22);
            return(t);
          }
          t = at_end_1(t, f_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm x_22 = NULL;
        ATerm y_22 = NULL,a_23 = NULL;
        ATerm z_22 = NULL;
        t = not_null(t_22);
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              t = (ATerm) ATempty;
            }
          {
            z_22 = t;
            if(((y_22 != NULL) && (y_22 != z_22)))
              _fail(z_22);
            else
              y_22 = z_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_22), not_null(y_22));
          {
            t = conc_0(t);
            {
              a_23 = t;
              if(((x_22 != NULL) && (x_22 != a_23)))
                _fail(a_23);
              else
                x_22 = a_23;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_6, not_null(t_22), not_null(x_22));
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
      if(((ATgetType(j_23) == AT_LIST) && ((ATermList) j_23 != ATempty)))
        {
          k_23 = ATgetFirst((ATermList) j_23);
          l_23 = (ATerm) ATgetNext((ATermList) j_23);
          i_23 :
          if(((ATgetType(l_23) == AT_LIST) && ((ATermList) l_23 != ATempty)))
            {
              m_23 = ATgetFirst((ATermList) l_23);
              n_23 = (ATerm) ATgetNext((ATermList) l_23);
              {
                ATerm t_23 = NULL;
                ATerm t_16;
                t_16 = t;
                {
                  t = not_null(k_23);
                  t = j_0(t);
                }
                t = t_16;
                {
                  ATerm u_23 = NULL;
                  t = not_null(m_23);
                  {
                    t = k_0(t);
                    {
                      u_23 = t;
                      if(((t_23 != NULL) && (t_23 != u_23)))
                        _fail(u_23);
                      else
                        t_23 = u_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_23)), not_null(t_23));
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
ATerm pp_options_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm a_24 = NULL;
    a_24 = t;
    y_23 :
    if(!(match_string(a_24, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm u_16;
    u_16 = t;
    {
      ATerm b_24 = NULL;
      ATerm c_24 = NULL;
      c_24 = t;
      if(((b_24 != NULL) && (b_24 != c_24)))
        _fail(c_24);
      else
        b_24 = c_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_24)), term_v_16));
        t = extend_config_0(t);
      }
    }
    t = u_16;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  t = SSL_table_destroy(not_null(f_24));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_implode_string(not_null(j_24));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm m_24 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_24);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          t = Nil_0(t);
          t = s_70(t);
        }
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
        r_24 = t;
        o_24 :
        if(((ATgetType(r_24) == AT_LIST) && ((ATermList) r_24 != ATempty)))
          {
            s_24 = ATgetFirst((ATermList) r_24);
            t_24 = (ATerm) ATgetNext((ATermList) r_24);
            {
              t = not_null(s_24);
              {
                ATerm k_3 (ATerm t)
                {
                  t = not_null(t_24);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  t = SSL_explode_string(not_null(b_25));
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
ATerm long_description_1 (ATerm t, ATerm r_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm e_25 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = Cons_2(t, d_70, e_25);
      }
    return(t);
  }
  t = e_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_25 = NULL,p_25 = NULL,q_25 = NULL;
  q_25 = t;
  k_25 :
  if(((ATgetType(q_25) == AT_LIST) && ((ATermList) q_25 != ATempty)))
    {
      l_25 = ATgetFirst((ATermList) q_25);
      p_25 = (ATerm) ATgetNext((ATermList) q_25);
      {
        ATerm t_25 = NULL;
        t = not_null(p_25);
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm u_25 = NULL,w_25 = NULL,y_25 = NULL;
            ATerm o_17;
            o_17 = t;
            {
              ATerm v_25 = NULL;
              t = i_0(t);
              {
                v_25 = t;
                if(((u_25 != NULL) && (u_25 != v_25)))
                  _fail(v_25);
                else
                  u_25 = v_25;
              }
            }
            t = o_17;
            {
              ATerm x_25 = NULL;
              t = not_null(l_25);
              {
                t = h_0(t);
                {
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_25)), not_null(w_25));
                {
                  y_25 = t;
                  if(((t_25 != NULL) && (t_25 != y_25)))
                    _fail(y_25);
                  else
                    t_25 = y_25;
                }
              }
            }
          }
          t = n_17;
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(t_25);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_25 == ATempty))
        {
          {
            t = term_q_7;
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
  ATerm o_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_45 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Program_1))
    {
      k_26 = ATgetArgument(j_26, 0);
      {
        ATerm n_26 = NULL,p_26 = NULL;
        ATerm o_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
        {
          t = not_null(k_26);
          {
            ATerm r_26 = NULL;
            t = r_45(t);
            {
              p_26 = t;
              {
                ATerm s_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_26)), not_null(n_26));
                {
                  s_26 = t;
                  if(((r_26 != NULL) && (r_26 != s_26)))
                    _fail(s_26);
                  else
                    r_26 = s_26;
                }
                t = not_null(r_26);
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
  ATerm b_27 = NULL;
  ATerm p_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm c_27 = NULL;
      c_27 = t;
      if(((b_27 != NULL) && (b_27 != c_27)))
        _fail(c_27);
      else
        b_27 = c_27;
      return(t);
    }
    t = Program_1(t, r_3);
    return(t);
  }
  t = option_defined_1(t, p_3);
  {
    ATerm s_3 (ATerm t)
    {
      ATerm d_27 = NULL;
      ATerm e_27 = NULL;
      t = term_q_7;
      {
        ATerm t_3 (ATerm t)
        {
          t = not_null(b_27);
          return(t);
        }
        t = short_description_1(t, t_3);
        {
          t = concat_strings_0(t);
          {
            e_27 = t;
            if(((d_27 != NULL) && (d_27 != e_27)))
              _fail(e_27);
            else
              d_27 = e_27;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(d_27)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, s_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_p_17));
      {
        t = printnl_0(t);
        {
          t = term_b_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm f_27 = NULL;
                  f_27 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_c_18));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_3);
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm h_27 = NULL;
                    ATerm i_27 = NULL;
                    t = term_q_7;
                    {
                      ATerm a_4 (ATerm t)
                      {
                        t = not_null(b_27);
                        return(t);
                      }
                      t = long_description_1(t, a_4);
                      {
                        t = concat_strings_0(t);
                        {
                          i_27 = t;
                          if(((h_27 != NULL) && (h_27 != i_27)))
                            _fail(i_27);
                          else
                            h_27 = i_27;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_27)), term_d_18));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_3);
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
ATerm Undefined_1 (ATerm t, ATerm s_45 (ATerm))
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_Undefined_1))
    {
      t_27 = ATgetArgument(s_27, 0);
      {
        ATerm w_27 = NULL,y_27 = NULL;
        ATerm x_27 = NULL;
        t = SSLgetAnnotations(not_null(s_27));
        {
          x_27 = t;
          if(((w_27 != NULL) && (w_27 != x_27)))
            _fail(x_27);
          else
            w_27 = x_27;
        }
        {
          t = not_null(t_27);
          {
            ATerm a_28 = NULL;
            t = s_45(t);
            {
              y_27 = t;
              {
                ATerm b_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_27)), not_null(w_27));
                {
                  b_28 = t;
                  if(((a_28 != NULL) && (a_28 != b_28)))
                    _fail(b_28);
                  else
                    a_28 = b_28;
                }
                t = not_null(a_28);
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
ATerm fetch_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_70, _id);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = Cons_2(t, _id, g_28);
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_54 (ATerm))
{
  t = fetch_1(t, v_54);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_Help_0))
    {
      ATerm n_28 = NULL,p_28 = NULL;
      ATerm h_18;
      h_18 = t;
      {
        ATerm o_28 = NULL;
        t = SSLgetAnnotations(not_null(l_28));
        {
          o_28 = t;
          if(((n_28 != NULL) && (n_28 != o_28)))
            _fail(o_28);
          else
            n_28 = o_28;
        }
      }
      t = h_18;
      {
        ATerm q_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_28));
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
        }
        t = not_null(p_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_72(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym__2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      t = SSL_table_get(not_null(x_28), not_null(y_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym__3))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      j_29 = ATgetArgument(g_29, 2);
      {
        ATerm k_18;
        k_18 = t;
        {
          ATerm p_29 = NULL;
          ATerm r_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(i_29));
          {
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_18);
              }
            else
              {
                t = l_18;
                t = (ATerm) ATempty;
              }
            {
              r_29 = t;
              if(((p_29 != NULL) && (p_29 != r_29)))
                _fail(r_29);
              else
                p_29 = r_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_29), not_null(i_29), (ATerm) ATinsert(CheckATermList(not_null(p_29)), not_null(j_29)));
            t = table_put_0(t);
          }
        }
        t = k_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm h_30 = NULL;
  ATerm i_30 = NULL;
  t = term_q_7;
  {
    t = v_53(t);
    {
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_17, term_r_17, not_null(h_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_31 = NULL,j_31 = NULL,k_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_string(g_31, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(g_31) == AT_LIST) && ((ATermList) g_31 != ATempty)))
        {
          j_31 = ATgetFirst((ATermList) g_31);
          k_31 = (ATerm) ATgetNext((ATermList) g_31);
          {
            ATerm n_31 = NULL;
            ATerm n_18;
            n_18 = t;
            {
              t = not_null(j_31);
              t = a_0(t);
            }
            t = n_18;
            {
              ATerm q_31 = NULL;
              t = term_q_7;
              {
                t = b_0(t);
                {
                  q_31 = t;
                  if(((n_31 != NULL) && (n_31 != q_31)))
                    _fail(q_31);
                  else
                    n_31 = q_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_31)), not_null(n_31));
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
  ATerm b_4 (ATerm t)
  {
    ATerm c_32 = NULL;
    c_32 = t;
    w_31 :
    if(!(match_string(c_32, "--help")))
      {
        if(!(match_string(c_32, "-h")))
          {
            if(!(match_string(c_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_p_18;
    return(t);
  }
  t = Option_3(t, b_4, c_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(((ATgetType(f_32) == AT_LIST) && ((ATermList) f_32 != ATempty)))
    {
      g_32 = ATgetFirst((ATermList) f_32);
      h_32 = (ATerm) ATgetNext((ATermList) f_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  q_32 :
  if(((ATgetType(t_32) == AT_LIST) && ((ATermList) t_32 != ATempty)))
    {
      u_32 = ATgetFirst((ATermList) t_32);
      v_32 = (ATerm) ATgetNext((ATermList) t_32);
      {
        ATerm z_32 = NULL,b_33 = NULL;
        ATerm a_33 = NULL;
        t = SSLgetAnnotations(not_null(t_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        {
          t = not_null(u_32);
          {
            ATerm d_33 = NULL;
            t = u_50(t);
            {
              b_33 = t;
              {
                t = not_null(v_32);
                {
                  ATerm f_33 = NULL;
                  t = v_50(t);
                  {
                    d_33 = t;
                    {
                      ATerm g_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_33)), not_null(b_33)), not_null(z_32));
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
  ATerm q_33 = NULL;
  q_33 = t;
  p_33 :
  if(((ATermList) q_33 == ATempty))
    {
      {
        ATerm s_33 = NULL,u_33 = NULL;
        ATerm q_18;
        q_18 = t;
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
        t = q_18;
        {
          ATerm v_33 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_33));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_6, not_null(c_34), not_null(d_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm r_18;
  r_18 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_s_18;
      t = t_53(t);
      return(t);
    }
    t = try_1(t, i_4);
  }
  t = r_18;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm l_34 = NULL;
      ATerm x_18;
      x_18 = t;
      {
        ATerm j_34 = NULL;
        ATerm k_34 = NULL;
        k_34 = t;
        if(((j_34 != NULL) && (j_34 != k_34)))
          _fail(k_34);
        else
          j_34 = k_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_18, not_null(j_34));
          t = set_config_0(t);
        }
      }
      t = x_18;
      {
        ATerm m_34 = NULL;
        m_34 = t;
        if(((l_34 != NULL) && (l_34 != m_34)))
          _fail(m_34);
        else
          l_34 = m_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_34));
      }
      return(t);
    }
    ATerm m_4 (ATerm t)
    {
      ATerm z_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_19);
            }
          else
            {
              t = b_19;
              {
                t = t_53(t);
                t = Cons_2(t, _id, m_4);
              }
            }
          LocalPopChoice(a_19);
        }
      else
        {
          t = z_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_4, m_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
    w_34 = t;
    s_34 :
    if(match_cons(w_34, sym__3))
      {
        x_34 = ATgetArgument(w_34, 0);
        y_34 = ATgetArgument(w_34, 1);
        z_34 = ATgetArgument(w_34, 2);
        {
          if(((t_34 != NULL) && (t_34 != x_34)))
            _fail(x_34);
          else
            t_34 = x_34;
          {
            if(((u_34 != NULL) && (u_34 != y_34)))
              _fail(y_34);
            else
              u_34 = y_34;
            {
              if(((v_34 != NULL) && (v_34 != z_34)))
                _fail(z_34);
              else
                v_34 = z_34;
              t = SSL_table_put(not_null(t_34), not_null(u_34), not_null(v_34));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm c_35 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    t = term_p_19;
    t = table_put_0(t);
  }
  t = k_19;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm q_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_53(t);
          LocalPopChoice(r_19);
        }
      else
        {
          t = q_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_4);
    {
      ATerm o_4 (ATerm t)
      {
        ATerm s_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_19);
          }
        else
          {
            t = s_19;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm d_35 = NULL;
                  d_35 = t;
                  if(((c_35 != NULL) && (c_35 != d_35)))
                    _fail(d_35);
                  else
                    c_35 = d_35;
                  return(t);
                }
                t = Undefined_1(t, s_4);
                return(t);
              }
              t = option_defined_1(t, p_4);
              {
                ATerm a_20;
                a_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_35)), term_b_20));
                  t = printnl_0(t);
                }
                t = a_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_4);
      {
        ATerm c_20;
        c_20 = t;
        {
          t = term_q_17;
          t = table_destroy_0(t);
        }
        t = c_20;
      }
    }
  }
  return(t);
}
ATerm ast2text_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_options_0(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_4);
  {
    ATerm g_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1(t, default_usage_0);
        LocalPopChoice(i_20);
      }
    else
      {
        t = g_20;
        {
          ATerm j_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_4 (ATerm t)
              {
                ATerm m_20 = t;
                int p_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_35 = NULL;
                    ATerm j_35 = NULL;
                    t = term_y_11;
                    {
                      t = get_config_0(t);
                      {
                        j_35 = t;
                        if(((i_35 != NULL) && (i_35 != j_35)))
                          _fail(j_35);
                        else
                          i_35 = j_35;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_35));
                    LocalPopChoice(p_20);
                  }
                else
                  {
                    t = m_20;
                    t = term_h_8;
                  }
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm b_5 (ATerm t)
                    {
                      t = term_q_20;
                      return(t);
                    }
                    t = debug_1(t, b_5);
                    return(t);
                  }
                  t = if_verbose3_1(t, a_5);
                  {
                    ATerm c_5 (ATerm t)
                    {
                      t = term_s_20;
                      return(t);
                    }
                    ATerm f_5 (ATerm t)
                    {
                      t = term_v_16;
                      {
                        t = get_config_0(t);
                        t = debug_0(t);
                      }
                      return(t);
                    }
                    t = xtc_transform_2(t, c_5, f_5);
                    {
                      ATerm g_5 (ATerm t)
                      {
                        ATerm h_5 (ATerm t)
                        {
                          t = term_h_21;
                          return(t);
                        }
                        t = debug_1(t, h_5);
                        return(t);
                      }
                      t = if_verbose3_1(t, g_5);
                      {
                        ATerm m_5 (ATerm t)
                        {
                          t = term_i_21;
                          return(t);
                        }
                        t = xtc_transform_1(t, m_5);
                        {
                          ATerm n_5 (ATerm t)
                          {
                            ATerm o_5 (ATerm t)
                            {
                              t = term_j_21;
                              return(t);
                            }
                            t = debug_1(t, o_5);
                            return(t);
                          }
                          t = if_verbose3_1(t, n_5);
                          {
                            ATerm r_5 (ATerm t)
                            {
                              ATerm k_21 = t;
                              int l_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = term_s_11;
                                  t = get_config_0(t);
                                  LocalPopChoice(l_21);
                                }
                              else
                                {
                                  t = k_21;
                                  t = new_file_0(t);
                                }
                              return(t);
                            }
                            t = rename_to_1(t, r_5);
                            {
                              ATerm s_5 (ATerm t)
                              {
                                ATerm t_5 (ATerm t)
                                {
                                  t = term_m_21;
                                  return(t);
                                }
                                t = debug_1(t, t_5);
                                return(t);
                              }
                              t = if_verbose3_1(t, s_5);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                return(t);
              }
              t = xtc_temp_files_1(t, z_4);
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm k_35 = NULL,m_35 = NULL;
                  ATerm t_21;
                  t_21 = t;
                  {
                    ATerm l_35 = NULL;
                    t = run_time_0(t);
                    {
                      l_35 = t;
                      if(((k_35 != NULL) && (k_35 != l_35)))
                        _fail(l_35);
                      else
                        k_35 = l_35;
                    }
                  }
                  t = t_21;
                  {
                    ATerm n_35 = NULL;
                    t = term_y_18;
                    {
                      t = get_config_0(t);
                      {
                        n_35 = t;
                        if(((m_35 != NULL) && (m_35 != n_35)))
                          _fail(n_35);
                        else
                          m_35 = n_35;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_22), not_null(k_35)), term_z_21), not_null(m_35)));
                      t = printnl_0(t);
                    }
                  }
                  return(t);
                }
                t = if_verbose1_1(t, u_5);
                {
                  t = term_d_7;
                  t = exit_0(t);
                }
              }
              LocalPopChoice(l_20);
            }
          else
            {
              t = j_20;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = ast2text_0(t);
  return(t);
}
