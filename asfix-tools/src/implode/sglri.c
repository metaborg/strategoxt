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
ATerm term_e_21;
ATerm term_c_21;
ATerm term_n_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_b_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_z_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_f_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_a_6;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_d_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_x_7);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_i_10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_f_8);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_f_8);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_f_8);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f              use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt        pass option to sglr", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt        pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_t_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__3, term_s_18, term_t_18, (ATerm) ATempty);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(1);
}
ATerm exit_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm read_from_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm implode_asfix_1 (ATerm, ATerm h_78 (ATerm));
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
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm sglr_2 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_62 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm k_62 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_62 (ATerm));
ATerm parse_and_implode_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm sglri_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm d_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm r_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
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
ATerm sglri_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  t = SSL_exit(not_null(d_0));
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  x_1 = t;
  m_1 :
  if(match_cons(x_1, sym__2))
    {
      y_1 = ATgetArgument(x_1, 0);
      z_1 = ATgetArgument(x_1, 1);
      t = SSL_rename(not_null(y_1), not_null(z_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  j_2 :
  if(match_cons(k_2, sym_stdout_0))
    {
      ATerm m_2 = NULL,o_2 = NULL;
      ATerm r_5;
      r_5 = t;
      {
        ATerm n_2 = NULL;
        t = SSLgetAnnotations(not_null(k_2));
        {
          n_2 = t;
          if(((m_2 != NULL) && (m_2 != n_2)))
            _fail(n_2);
          else
            m_2 = n_2;
        }
      }
      t = r_5;
      {
        ATerm p_2 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(m_2));
        {
          p_2 = t;
          if(((o_2 != NULL) && (o_2 != p_2)))
            _fail(p_2);
          else
            o_2 = p_2;
        }
        t = not_null(o_2);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm a_3 = NULL,b_3 = NULL;
  a_3 = t;
  z_2 :
  if(match_cons(a_3, sym_FILE_1))
    {
      b_3 = ATgetArgument(a_3, 0);
      {
        ATerm s_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 = NULL;
            ATerm e_3 = NULL;
            t = q_0(t);
            {
              e_3 = t;
              x_2 :
              if(match_cons(e_3, sym_stdout_0))
                {
                  ATerm f_3 = NULL;
                  t = not_null(b_3);
                  {
                    t = ReadFromFile_0(t);
                    {
                      f_3 = t;
                      {
                        if(((d_3 != NULL) && (d_3 != f_3)))
                          _fail(f_3);
                        else
                          d_3 = f_3;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(d_3));
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
            t = term_w_5;
            LocalPopChoice(v_5);
          }
        else
          {
            t = s_5;
            {
              ATerm h_3 = NULL;
              ATerm i_3 = NULL;
              t = q_0(t);
              {
                i_3 = t;
                {
                  if(((h_3 != NULL) && (h_3 != i_3)))
                    _fail(i_3);
                  else
                    h_3 = i_3;
                  {
                    ATerm z_5 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_5;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_3), not_null(h_3));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_3));
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
ATerm read_from_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym_stdin_0))
    {
      ATerm v_3 = NULL;
      ATerm w_3 = NULL;
      t = term_a_6;
      {
        t = ReadFromFile_0(t);
        {
          w_3 = t;
          if(((v_3 != NULL) && (v_3 != w_3)))
            _fail(w_3);
          else
            v_3 = w_3;
        }
      }
      t = not_null(v_3);
    }
  else
    {
      if(match_cons(t_3, sym_FILE_1))
        {
          u_3 = ATgetArgument(t_3, 0);
          {
            ATerm y_3 = NULL;
            ATerm z_3 = NULL;
            t = not_null(u_3);
            {
              t = ReadFromFile_0(t);
              {
                z_3 = t;
                if(((y_3 != NULL) && (y_3 != z_3)))
                  _fail(z_3);
                else
                  y_3 = z_3;
              }
            }
            t = not_null(y_3);
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
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  f_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      t = SSL_WriteToTextFile(not_null(h_4), not_null(i_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm o_4 = NULL;
  ATerm q_4 = NULL;
  o_4 = t;
  {
    ATerm r_4 = NULL;
    t = xtc_new_file_0(t);
    {
      r_4 = t;
      {
        if(((q_4 != NULL) && (q_4 != r_4)))
          _fail(r_4);
        else
          q_4 = r_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), not_null(o_4));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_4));
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
ATerm xtc_transform_2 (ATerm t, ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm b_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, w_62, x_62);
      LocalPopChoice(f_6);
    }
  else
    {
      t = b_6;
      t = xtc_transform_term_2(t, w_62, x_62);
    }
  return(t);
}
ATerm implode_asfix_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_n_6;
    return(t);
  }
  t = xtc_transform_2(t, c_0, h_78);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      t = SSL_call(not_null(x_4), not_null(y_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_table_keys(not_null(d_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm l_5 = NULL;
        ATerm n_5 = NULL;
        l_5 = t;
        {
          ATerm o_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(l_5));
          {
            t = table_get_0(t);
            {
              o_5 = t;
              if(((n_5 != NULL) && (n_5 != o_5)))
                _fail(o_5);
              else
                n_5 = o_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), not_null(n_5));
        }
        return(t);
      }
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm o_6;
    o_6 = t;
    {
      ATerm t_5 = NULL;
      ATerm u_5 = NULL;
      t = term_p_6;
      {
        t = get_config_0(t);
        {
          u_5 = t;
          if(((t_5 != NULL) && (t_5 != u_5)))
            _fail(u_5);
          else
            t_5 = u_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_q_6);
        t = geq_0(t);
      }
    }
    t = o_6;
    t = o_76(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_6;
  w_6 = t;
  {
    ATerm x_5 = NULL;
    ATerm y_5 = NULL;
    y_5 = t;
    if(((x_5 != NULL) && (x_5 != y_5)))
      _fail(y_5);
    else
      x_5 = y_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(x_5));
      t = printnl_0(t);
    }
  }
  t = w_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm e_6 = NULL;
  ATerm g_6 = NULL,h_6 = NULL;
  e_6 = t;
  {
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_6)));
    {
      t = table_get_0(t);
      {
        i_6 = t;
        c_6 :
        if(((ATgetType(i_6) == AT_LIST) && ((ATermList) i_6 != ATempty)))
          {
            j_6 = ATgetFirst((ATermList) i_6);
            m_6 = (ATerm) ATgetNext((ATermList) i_6);
            d_6 :
            if(match_cons(j_6, sym__2))
              {
                k_6 = ATgetArgument(j_6, 0);
                l_6 = ATgetArgument(j_6, 1);
                {
                  if(((g_6 != NULL) && (g_6 != k_6)))
                    _fail(k_6);
                  else
                    g_6 = k_6;
                  if(((h_6 != NULL) && (h_6 != l_6)))
                    _fail(l_6);
                  else
                    h_6 = l_6;
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
    t = not_null(h_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      {
        ATerm y_6 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_6)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
              z_6 = t;
              r_6 :
              if(match_cons(z_6, sym__2))
                {
                  a_7 = ATgetArgument(z_6, 0);
                  b_7 = ATgetArgument(z_6, 1);
                  {
                    if(((v_6 != NULL) && (v_6 != a_7)))
                      _fail(a_7);
                    else
                      v_6 = a_7;
                    if(((y_6 != NULL) && (y_6 != b_7)))
                      _fail(b_7);
                    else
                      y_6 = b_7;
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
        t = not_null(y_6);
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
  ATerm s_0 (ATerm t)
  {
    t = term_e_7;
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
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym__2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      {
        t = not_null(k_7);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
            n_7 = t;
            g_7 :
            if(match_cons(n_7, sym__2))
              {
                o_7 = ATgetArgument(n_7, 0);
                p_7 = ATgetArgument(n_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_7), not_null(o_7), not_null(p_7));
                  t = table_put_0(t);
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
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_ReadFromFile(not_null(v_7));
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym__2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      {
        ATerm f_7;
        f_7 = t;
        {
          ATerm l_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_8), not_null(c_8));
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
              t = SSL_gtr(not_null(b_8), not_null(c_8));
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
ATerm geq_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
      j_8 = t;
      h_8 :
      if(match_cons(j_8, sym__2))
        {
          k_8 = ATgetArgument(j_8, 0);
          l_8 = ATgetArgument(j_8, 1);
          {
            if(((i_8 != NULL) && (i_8 != k_8)))
              _fail(k_8);
            else
              i_8 = k_8;
            if(((i_8 != NULL) && (i_8 != l_8)))
              _fail(l_8);
            else
              i_8 = l_8;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm s_7;
    s_7 = t;
    {
      ATerm o_8 = NULL;
      ATerm p_8 = NULL;
      t = term_p_6;
      {
        t = get_config_0(t);
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), term_t_7);
        t = geq_0(t);
      }
    }
    t = s_7;
    t = n_76(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm v_8 = NULL;
  t_8 = t;
  {
    ATerm u_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_7;
      }
    {
      ATerm w_7;
      w_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_7, term_x_7, not_null(t_8));
        t = table_put_0(t);
      }
      t = w_7;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_y_7;
            return(t);
          }
          t = debug_1(t, x_0);
          return(t);
        }
        t = if_verbose4_1(t, w_0);
        {
          ATerm d_8 = t;
          int e_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(e_8);
            }
          else
            {
              t = d_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_8 = NULL;
            w_8 = t;
            if(((v_8 != NULL) && (v_8 != w_8)))
              _fail(w_8);
            else
              v_8 = w_8;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(v_8));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_8)), term_f_8);
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
  ATerm a_9 = NULL;
  a_9 = t;
  t = SSL_getenv(not_null(a_9));
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
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_8;
            t = getenv_0(t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = term_u_8;
      return(t);
    }
    t = debug_1(t, z_0);
    return(t);
  }
  t = if_verbose5_1(t, y_0);
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_9;
          t = table_get_0(t);
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = x_8;
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          t = term_c_9;
          return(t);
        }
        t = debug_1(t, b_1);
        return(t);
      }
      t = if_verbose5_1(t, a_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm d_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = debug_1(t, d_1);
        return(t);
      }
      t = if_verbose5_1(t, c_1);
      {
        t = xtc_load_0(t);
        {
          ATerm i_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(n_9);
            }
          else
            {
              t = i_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = term_h_9;
                return(t);
              }
              t = debug_1(t, f_1);
              return(t);
            }
            t = if_verbose5_1(t, e_1);
          }
        }
      }
      LocalPopChoice(g_9);
    }
  else
    {
      t = d_9;
      {
        ATerm e_9 = NULL;
        ATerm f_9 = NULL;
        f_9 = t;
        if(((e_9 != NULL) && (e_9 != f_9)))
          _fail(f_9);
        else
          e_9 = f_9;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), not_null(e_9)), term_o_9);
          {
            t = error_0(t);
            {
              ATerm g_1 (ATerm t)
              {
                t = term_c_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      t = term_q_9;
                      return(t);
                    }
                    t = debug_1(t, h_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, g_1);
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
  ATerm j_9 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm k_9 = NULL;
    t = u_62(t);
    {
      t = xtc_find_warning_0(t);
      {
        k_9 = t;
        if(((j_9 != NULL) && (j_9 != k_9)))
          _fail(k_9);
        else
          j_9 = k_9;
      }
    }
  }
  t = r_9;
  {
    ATerm x_9;
    x_9 = t;
    {
      ATerm l_9 = NULL;
      ATerm m_9 = NULL;
      m_9 = t;
      if(((l_9 != NULL) && (l_9 != m_9)))
        _fail(m_9);
      else
        l_9 = m_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), not_null(l_9));
        t = call_0(t);
      }
    }
    t = x_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym__2))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      {
        ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
        ATerm y_9;
        y_9 = t;
        {
          ATerm c_10 = NULL;
          ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
          t = o_62(t);
          {
            c_10 = t;
            {
              if(((z_9 != NULL) && (z_9 != c_10)))
                _fail(c_10);
              else
                z_9 = c_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_9), not_null(v_9), not_null(w_9));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_10 = t;
                    int h_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), term_i_10);
                        t = table_get_0(t);
                        LocalPopChoice(h_10);
                      }
                    else
                      {
                        t = g_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_10 = t;
                      s_9 :
                      if(((ATgetType(d_10) == AT_LIST) && ((ATermList) d_10 != ATempty)))
                        {
                          e_10 = ATgetFirst((ATermList) d_10);
                          f_10 = (ATerm) ATgetNext((ATermList) d_10);
                          {
                            if(((a_10 != NULL) && (a_10 != e_10)))
                              _fail(e_10);
                            else
                              a_10 = e_10;
                            {
                              if(((b_10 != NULL) && (b_10 != f_10)))
                                _fail(f_10);
                              else
                                b_10 = f_10;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_9), term_i_10, (ATerm) ATinsert(CheckATermList(not_null(b_10)), (ATerm) ATinsert(CheckATermList(not_null(a_10)), not_null(v_9))));
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
        t = y_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm n_10 = NULL;
  l_10 = t;
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm o_10 = NULL;
      t = term_k_10;
      {
        o_10 = t;
        if(((n_10 != NULL) && (n_10 != o_10)))
          _fail(o_10);
        else
          n_10 = o_10;
      }
    }
    t = j_10;
    {
      t = SSL_open_file(not_null(l_10), not_null(n_10));
      t = SSL_close_file(not_null(l_10));
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
  ATerm s_10 = NULL;
  ATerm t_10 = NULL;
  t = term_f_8;
  {
    t = new_0(t);
    {
      t_10 = t;
      if(((s_10 != NULL) && (s_10 != t_10)))
        _fail(t_10);
      else
        s_10 = t_10;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_m_10);
    {
      t = conc_strings_0(t);
      {
        ATerm i_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, i_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = new_file_0(t);
  {
    x_10 = t;
    {
      ATerm p_10;
      p_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_f_8);
        {
          ATerm j_1 (ATerm t)
          {
            t = term_q_10;
            return(t);
          }
          t = assert_1(t, j_1);
        }
      }
      t = p_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_stdin_0))
    {
      ATerm j_11 = NULL;
      ATerm k_11 = NULL;
      ATerm l_11 = NULL;
      t = xtc_new_file_0(t);
      {
        k_11 = t;
        {
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
          {
            ATerm m_11 = NULL;
            t = p_0(t);
            {
              m_11 = t;
              if(((l_11 != NULL) && (l_11 != m_11)))
                _fail(m_11);
              else
                l_11 = m_11;
            }
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_11)), not_null(j_11)), term_r_10);
              t = xtc_command_1(t, o_0);
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_11));
    }
  else
    {
      if(match_cons(h_11, sym_FILE_1))
        {
          i_11 = ATgetArgument(h_11, 0);
          {
            ATerm o_11 = NULL;
            ATerm p_11 = NULL;
            t = not_null(i_11);
            {
              ATerm q_11 = NULL;
              t = xtc_new_file_0(t);
              {
                p_11 = t;
                {
                  if(((o_11 != NULL) && (o_11 != p_11)))
                    _fail(p_11);
                  else
                    o_11 = p_11;
                  {
                    ATerm r_11 = NULL;
                    t = p_0(t);
                    {
                      r_11 = t;
                      if(((q_11 != NULL) && (q_11 != r_11)))
                        _fail(r_11);
                      else
                        q_11 = r_11;
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_11)), not_null(o_11)), term_r_10), not_null(i_11)), term_u_10);
                      t = xtc_command_1(t, o_0);
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_11));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm sglr_2 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm a_12 = NULL,c_12 = NULL;
    ATerm w_10;
    w_10 = t;
    {
      ATerm b_12 = NULL;
      t = f_78(t);
      {
        b_12 = t;
        if(((a_12 != NULL) && (a_12 != b_12)))
          _fail(b_12);
        else
          a_12 = b_12;
      }
    }
    t = w_10;
    {
      ATerm d_12 = NULL;
      t = g_78(t);
      {
        d_12 = t;
        if(((c_12 != NULL) && (c_12 != d_12)))
          _fail(d_12);
        else
          c_12 = d_12;
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_12)), not_null(a_12)), term_y_10);
    }
    return(t);
  }
  t = xtc_transform_file_2(t, k_1, l_1);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(((ATgetType(i_12) == AT_LIST) && ((ATermList) i_12 != ATempty)))
    {
      j_12 = ATgetFirst((ATermList) i_12);
      k_12 = (ATerm) ATgetNext((ATermList) i_12);
      t = not_null(k_12);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym__2))
    {
      s_12 = ATgetArgument(r_12, 0);
      t_12 = ATgetArgument(r_12, 1);
      {
        ATerm z_10;
        z_10 = t;
        {
          ATerm w_12 = NULL;
          ATerm x_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), not_null(t_12));
          {
            ATerm a_11 = t;
            int b_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(b_11);
              }
            else
              {
                t = a_11;
                t = (ATerm) ATempty;
              }
            {
              x_12 = t;
              if(((w_12 != NULL) && (w_12 != x_12)))
                _fail(x_12);
              else
                w_12 = x_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_12), not_null(t_12), not_null(w_12));
            t = table_put_0(t);
          }
        }
        t = z_10;
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
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  ATerm c_11;
  c_11 = t;
  {
    ATerm h_13 = NULL;
    ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
    t = l_62(t);
    {
      h_13 = t;
      {
        if(((f_13 != NULL) && (f_13 != h_13)))
          _fail(h_13);
        else
          f_13 = h_13;
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_i_10);
              t = table_get_0(t);
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_13 = t;
            d_13 :
            if(((ATgetType(i_13) == AT_LIST) && ((ATermList) i_13 != ATempty)))
              {
                j_13 = ATgetFirst((ATermList) i_13);
                k_13 = (ATerm) ATgetNext((ATermList) i_13);
                {
                  if(((g_13 != NULL) && (g_13 != j_13)))
                    _fail(j_13);
                  else
                    g_13 = j_13;
                  {
                    if(((e_13 != NULL) && (e_13 != k_13)))
                      _fail(k_13);
                    else
                      e_13 = k_13;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_13), term_i_10, not_null(e_13));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_13);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm l_13 = NULL;
                              l_13 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(l_13));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_1);
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
  t = c_11;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  t = SSL_remove(not_null(r_13));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm w_13 = NULL;
  ATerm f_11;
  f_11 = t;
  {
    ATerm x_13 = NULL;
    ATerm y_13 = NULL;
    t = k_62(t);
    {
      x_13 = t;
      {
        if(((w_13 != NULL) && (w_13 != x_13)))
          _fail(x_13);
        else
          w_13 = x_13;
        {
          ATerm z_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_i_10);
          {
            ATerm n_11 = t;
            int s_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_11);
              }
            else
              {
                t = n_11;
                t = (ATerm) ATempty;
              }
            {
              z_13 = t;
              if(((y_13 != NULL) && (y_13 != z_13)))
                _fail(z_13);
              else
                y_13 = z_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_13), term_i_10, (ATerm) ATinsert(CheckATermList(not_null(y_13)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = f_11;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL;
  ATerm o_1 (ATerm t)
  {
    t = term_q_10;
    return(t);
  }
  t = begin_scope_1(t, o_1);
  {
    t = t_62(t);
    {
      ATerm t_11;
      t_11 = t;
      {
        ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_11;
            t = table_get_0(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          g_14 = t;
          d_14 :
          if(((ATgetType(g_14) == AT_LIST) && ((ATermList) g_14 != ATempty)))
            {
              h_14 = ATgetFirst((ATermList) g_14);
              i_14 = (ATerm) ATgetNext((ATermList) g_14);
              {
                if(((f_14 != NULL) && (f_14 != h_14)))
                  _fail(h_14);
                else
                  f_14 = h_14;
                {
                  if(((e_14 != NULL) && (e_14 != i_14)))
                    _fail(i_14);
                  else
                    e_14 = i_14;
                  {
                    t = not_null(f_14);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, p_1);
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
      t = t_11;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_q_10;
          return(t);
        }
        t = end_scope_1(t, q_1);
      }
    }
  }
  return(t);
}
ATerm parse_and_implode_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL;
        ATerm n_14 = NULL;
        t = term_u_10;
        {
          t = get_config_0(t);
          {
            n_14 = t;
            if(((m_14 != NULL) && (m_14 != n_14)))
              _fail(n_14);
            else
              m_14 = n_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = term_a_6;
      }
    {
      ATerm s_1 (ATerm t)
      {
        t = term_y_10;
        t = get_config_0(t);
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        ATerm o_14 = NULL;
        ATerm p_14 = NULL;
        t = term_z_11;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              t = (ATerm) ATempty;
            }
          {
            p_14 = t;
            if(((o_14 != NULL) && (o_14 != p_14)))
              _fail(p_14);
            else
              o_14 = p_14;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(o_14)), term_g_12);
        return(t);
      }
      t = sglr_2(t, s_1, t_1);
      {
        ATerm u_1 (ATerm t)
        {
          t = term_l_12;
          {
            ATerm m_12 = t;
            int n_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_config_0(t);
                LocalPopChoice(n_12);
              }
            else
              {
                t = m_12;
                t = (ATerm) ATempty;
              }
          }
          return(t);
        }
        t = implode_asfix_1(t, u_1);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm o_12 = t;
            int p_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_10;
                t = get_config_0(t);
                LocalPopChoice(p_12);
              }
            else
              {
                t = o_12;
                t = term_w_5;
              }
            return(t);
          }
          t = rename_to_1(t, v_1);
        }
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  t = SSL_string_to_int(not_null(t_14));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm l_15 = NULL;
        l_15 = t;
        w_14 :
        if(!(match_string(l_15, "-i")))
          {
            if(!(match_string(l_15, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        ATerm o_15 = NULL;
        ATerm y_12;
        y_12 = t;
        {
          ATerm m_15 = NULL;
          ATerm n_15 = NULL;
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(m_15));
            t = set_config_0(t);
          }
        }
        t = y_12;
        {
          ATerm p_15 = NULL;
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_15));
        }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_z_12;
        return(t);
      }
      t = ArgOption_3(t, w_1, a_2, b_2);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm q_15 = NULL;
              q_15 = t;
              z_14 :
              if(!(match_string(q_15, "-o")))
                {
                  if(!(match_string(q_15, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm t_15 = NULL;
              ATerm c_13;
              c_13 = t;
              {
                ATerm r_15 = NULL;
                ATerm s_15 = NULL;
                s_15 = t;
                if(((r_15 != NULL) && (r_15 != s_15)))
                  _fail(s_15);
                else
                  r_15 = s_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_10, not_null(r_15));
                  t = set_config_0(t);
                }
              }
              t = c_13;
              {
                ATerm u_15 = NULL;
                u_15 = t;
                if(((t_15 != NULL) && (t_15 != u_15)))
                  _fail(u_15);
                else
                  t_15 = u_15;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_15));
              }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_m_13;
              return(t);
            }
            t = ArgOption_3(t, c_2, d_2, e_2);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm n_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_2 (ATerm t)
                  {
                    ATerm v_15 = NULL;
                    v_15 = t;
                    c_15 :
                    if(!(match_string(v_15, "-S")))
                      {
                        if(!(match_string(v_15, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm g_2 (ATerm t)
                  {
                    t = term_q_13;
                    t = set_config_0(t);
                    t = term_s_13;
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = term_t_13;
                    return(t);
                  }
                  t = Option_3(t, f_2, g_2, h_2);
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = n_13;
                  {
                    ATerm u_13 = t;
                    int v_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_2 (ATerm t)
                        {
                          ATerm w_15 = NULL;
                          w_15 = t;
                          d_15 :
                          if(!(match_string(w_15, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_2 (ATerm t)
                        {
                          ATerm z_15 = NULL;
                          ATerm a_14;
                          a_14 = t;
                          {
                            ATerm x_15 = NULL;
                            ATerm y_15 = NULL;
                            t = string_to_int_0(t);
                            {
                              y_15 = t;
                              if(((x_15 != NULL) && (x_15 != y_15)))
                                _fail(y_15);
                              else
                                x_15 = y_15;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(x_15));
                              t = set_config_0(t);
                            }
                          }
                          t = a_14;
                          {
                            ATerm a_16 = NULL;
                            a_16 = t;
                            if(((z_15 != NULL) && (z_15 != a_16)))
                              _fail(a_16);
                            else
                              z_15 = a_16;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_15));
                          }
                          return(t);
                        }
                        ATerm q_2 (ATerm t)
                        {
                          t = term_b_14;
                          return(t);
                        }
                        t = ArgOption_3(t, i_2, l_2, q_2);
                        LocalPopChoice(v_13);
                      }
                    else
                      {
                        t = u_13;
                        {
                          ATerm c_14 = t;
                          int j_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_2 (ATerm t)
                              {
                                ATerm b_16 = NULL;
                                b_16 = t;
                                g_15 :
                                if(!(match_string(b_16, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_2 (ATerm t)
                              {
                                ATerm k_14;
                                k_14 = t;
                                {
                                  ATerm c_16 = NULL;
                                  ATerm d_16 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    d_16 = t;
                                    if(((c_16 != NULL) && (c_16 != d_16)))
                                      _fail(d_16);
                                    else
                                      c_16 = d_16;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_14, not_null(c_16));
                                    t = set_config_0(t);
                                  }
                                }
                                t = k_14;
                                return(t);
                              }
                              ATerm t_2 (ATerm t)
                              {
                                t = term_q_14;
                                return(t);
                              }
                              t = ArgOption_3(t, r_2, s_2, t_2);
                              LocalPopChoice(j_14);
                            }
                          else
                            {
                              t = c_14;
                              {
                                ATerm r_14 = t;
                                int s_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_2 (ATerm t)
                                    {
                                      ATerm e_16 = NULL;
                                      e_16 = t;
                                      i_15 :
                                      if(!(match_string(e_16, "-v")))
                                        {
                                          if(!(match_string(e_16, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm v_2 (ATerm t)
                                    {
                                      t = term_v_14;
                                      t = set_config_0(t);
                                      t = term_x_14;
                                      return(t);
                                    }
                                    ATerm w_2 (ATerm t)
                                    {
                                      t = term_y_14;
                                      return(t);
                                    }
                                    t = Option_3(t, u_2, v_2, w_2);
                                    LocalPopChoice(s_14);
                                  }
                                else
                                  {
                                    t = r_14;
                                    {
                                      ATerm a_15 = t;
                                      int b_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_2 (ATerm t)
                                          {
                                            ATerm f_16 = NULL;
                                            f_16 = t;
                                            j_15 :
                                            if(!(match_string(f_16, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm c_3 (ATerm t)
                                          {
                                            t = term_f_15;
                                            t = set_config_0(t);
                                            t = term_h_15;
                                            return(t);
                                          }
                                          ATerm g_3 (ATerm t)
                                          {
                                            t = term_h_16;
                                            return(t);
                                          }
                                          t = Option_3(t, y_2, c_3, g_3);
                                          LocalPopChoice(b_15);
                                        }
                                      else
                                        {
                                          t = a_15;
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              ATerm g_16 = NULL;
                                              g_16 = t;
                                              k_15 :
                                              if(!(match_string(g_16, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm k_3 (ATerm t)
                                            {
                                              t = term_j_16;
                                              t = set_config_0(t);
                                              t = term_k_16;
                                              return(t);
                                            }
                                            ATerm l_3 (ATerm t)
                                            {
                                              t = term_l_16;
                                              return(t);
                                            }
                                            t = Option_3(t, j_3, k_3, l_3);
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
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym__2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      {
        t = not_null(r_16);
        {
          ATerm m_3 (ATerm t)
          {
            t = not_null(s_16);
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
  return(t);
}
ATerm _2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        ATerm i_17 = NULL,k_17 = NULL;
        ATerm j_17 = NULL;
        t = SSLgetAnnotations(not_null(c_17));
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
        {
          t = not_null(d_17);
          {
            ATerm m_17 = NULL;
            t = i_44(t);
            {
              k_17 = t;
              {
                t = not_null(e_17);
                {
                  ATerm o_17 = NULL;
                  t = j_44(t);
                  {
                    m_17 = t;
                    {
                      ATerm p_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_17), not_null(m_17)), not_null(i_17));
                      {
                        p_17 = t;
                        if(((o_17 != NULL) && (o_17 != p_17)))
                          _fail(p_17);
                        else
                          o_17 = p_17;
                      }
                      t = not_null(o_17);
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
ATerm debug_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm m_16;
  m_16 = t;
  {
    ATerm x_17 = NULL,z_17 = NULL;
    ATerm n_16;
    n_16 = t;
    {
      ATerm y_17 = NULL;
      t = s_61(t);
      {
        y_17 = t;
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
      }
    }
    t = n_16;
    {
      ATerm a_18 = NULL;
      a_18 = t;
      if(((z_17 != NULL) && (z_17 != a_18)))
        _fail(a_18);
      else
        z_17 = a_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_17)), not_null(x_17)));
        t = printnl_0(t);
      }
    }
  }
  t = m_16;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_is_string(not_null(e_18));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = o_16;
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_3);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            {
              ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
              v_18 = t;
              u_18 :
              if(match_cons(v_18, sym_Path_1))
                {
                  w_18 = ATgetArgument(v_18, 0);
                  t = not_null(w_18);
                }
              else
                {
                  if(match_cons(v_18, sym_Var_1))
                    {
                      w_18 = ATgetArgument(v_18, 0);
                      {
                        t = not_null(w_18);
                        {
                          ATerm w_16 = t;
                          int x_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_16);
                            }
                          else
                            {
                              t = w_16;
                              {
                                ATerm o_3 (ATerm t)
                                {
                                  t = term_y_16;
                                  return(t);
                                }
                                t = debug_1(t, o_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_18, sym_Prefix_2))
                        {
                          w_18 = ATgetArgument(v_18, 0);
                          x_18 = ATgetArgument(v_18, 1);
                          {
                            ATerm e_19 = NULL,g_19 = NULL;
                            ATerm z_16;
                            z_16 = t;
                            {
                              ATerm f_19 = NULL;
                              t = not_null(w_18);
                              {
                                t = eval_config_0(t);
                                {
                                  f_19 = t;
                                  if(((e_19 != NULL) && (e_19 != f_19)))
                                    _fail(f_19);
                                  else
                                    e_19 = f_19;
                                }
                              }
                            }
                            t = z_16;
                            {
                              ATerm h_19 = NULL;
                              t = not_null(x_18);
                              {
                                t = eval_config_0(t);
                                {
                                  h_19 = t;
                                  if(((g_19 != NULL) && (g_19 != h_19)))
                                    _fail(h_19);
                                  else
                                    g_19 = h_19;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), not_null(g_19));
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
  ATerm p_19 = NULL;
  p_19 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_17, not_null(p_19));
    {
      t = table_get_0(t);
      {
        ATerm p_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_17;
            f_17 = t;
            {
              ATerm r_19 = NULL;
              ATerm s_19 = NULL;
              s_19 = t;
              if(((r_19 != NULL) && (r_19 != s_19)))
                _fail(s_19);
              else
                r_19 = s_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_17, not_null(p_19), not_null(r_19));
                t = table_put_0(t);
              }
            }
            t = f_17;
          }
          return(t);
        }
        t = try_1(t, p_3);
      }
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym__2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      {
        ATerm e_20 = NULL;
        ATerm f_20 = NULL,h_20 = NULL;
        ATerm g_20 = NULL;
        t = not_null(a_20);
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              t = (ATerm) ATempty;
            }
          {
            g_20 = t;
            if(((f_20 != NULL) && (f_20 != g_20)))
              _fail(g_20);
            else
              f_20 = g_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(f_20));
          {
            t = conc_0(t);
            {
              h_20 = t;
              if(((e_20 != NULL) && (e_20 != h_20)))
                _fail(h_20);
              else
                e_20 = h_20;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_17, not_null(a_20), not_null(e_20));
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
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  q_20 = t;
  o_20 :
  if(match_string(q_20, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_20) == AT_LIST) && ((ATermList) q_20 != ATempty)))
        {
          r_20 = ATgetFirst((ATermList) q_20);
          s_20 = (ATerm) ATgetNext((ATermList) q_20);
          p_20 :
          if(((ATgetType(s_20) == AT_LIST) && ((ATermList) s_20 != ATempty)))
            {
              t_20 = ATgetFirst((ATermList) s_20);
              u_20 = (ATerm) ATgetNext((ATermList) s_20);
              {
                ATerm y_20 = NULL;
                ATerm l_17;
                l_17 = t;
                {
                  t = not_null(r_20);
                  t = l_0(t);
                }
                t = l_17;
                {
                  ATerm z_20 = NULL;
                  t = not_null(t_20);
                  {
                    t = m_0(t);
                    {
                      z_20 = t;
                      if(((y_20 != NULL) && (y_20 != z_20)))
                        _fail(z_20);
                      else
                        y_20 = z_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(y_20));
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
ATerm sglri_options_0 (ATerm t)
{
  ATerm n_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_3 (ATerm t)
      {
        ATerm p_21 = NULL;
        p_21 = t;
        d_21 :
        if(!(match_string(p_21, "-p")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        ATerm r_17;
        r_17 = t;
        {
          ATerm q_21 = NULL;
          ATerm r_21 = NULL;
          r_21 = t;
          if(((q_21 != NULL) && (q_21 != r_21)))
            _fail(r_21);
          else
            q_21 = r_21;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(q_21));
            t = set_config_0(t);
          }
        }
        t = r_17;
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_s_17;
        return(t);
      }
      t = ArgOption_3(t, q_3, r_3, x_3);
      LocalPopChoice(q_17);
    }
  else
    {
      t = n_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm s_21 = NULL;
              s_21 = t;
              f_21 :
              if(!(match_string(s_21, "--sglr")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm v_17;
              v_17 = t;
              {
                ATerm t_21 = NULL;
                ATerm u_21 = NULL;
                u_21 = t;
                if(((t_21 != NULL) && (t_21 != u_21)))
                  _fail(u_21);
                else
                  t_21 = u_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(t_21));
                  t = extend_config_0(t);
                }
              }
              t = v_17;
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_w_17;
              return(t);
            }
            t = ArgOption_3(t, a_4, b_4, c_4);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm v_21 = NULL;
                v_21 = t;
                n_21 :
                if(!(match_string(v_21, "--impl")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                ATerm b_18;
                b_18 = t;
                {
                  ATerm w_21 = NULL;
                  ATerm x_21 = NULL;
                  x_21 = t;
                  if(((w_21 != NULL) && (w_21 != x_21)))
                    _fail(x_21);
                  else
                    w_21 = x_21;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(w_21));
                    t = extend_config_0(t);
                  }
                }
                t = b_18;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_c_18;
                return(t);
              }
              t = ArgOption_3(t, d_4, e_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  t = SSL_table_destroy(not_null(c_22));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = SSL_implode_string(not_null(g_22));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm j_22 (ATerm t)
  {
    ATerm d_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_22);
        LocalPopChoice(f_18);
      }
    else
      {
        t = d_18;
        {
          t = Nil_0(t);
          t = s_70(t);
        }
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
        m_22 = t;
        l_22 :
        if(((ATgetType(m_22) == AT_LIST) && ((ATermList) m_22 != ATempty)))
          {
            n_22 = ATgetFirst((ATermList) m_22);
            o_22 = (ATerm) ATgetNext((ATermList) m_22);
            {
              t = not_null(n_22);
              {
                ATerm k_4 (ATerm t)
                {
                  t = not_null(o_22);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_4);
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
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_explode_string(not_null(u_22));
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
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_18), term_j_18), term_i_18);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm x_22 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = Cons_2(t, d_70, x_22);
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  g_23 = t;
  d_23 :
  if(((ATgetType(g_23) == AT_LIST) && ((ATermList) g_23 != ATempty)))
    {
      e_23 = ATgetFirst((ATermList) g_23);
      f_23 = (ATerm) ATgetNext((ATermList) g_23);
      {
        ATerm j_23 = NULL;
        t = not_null(f_23);
        {
          ATerm n_18;
          n_18 = t;
          {
            ATerm k_23 = NULL,m_23 = NULL,o_23 = NULL;
            ATerm o_18;
            o_18 = t;
            {
              ATerm l_23 = NULL;
              t = j_0(t);
              {
                l_23 = t;
                if(((k_23 != NULL) && (k_23 != l_23)))
                  _fail(l_23);
                else
                  k_23 = l_23;
              }
            }
            t = o_18;
            {
              ATerm n_23 = NULL;
              t = not_null(e_23);
              {
                t = i_0(t);
                {
                  n_23 = t;
                  if(((m_23 != NULL) && (m_23 != n_23)))
                    _fail(n_23);
                  else
                    m_23 = n_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_23)), not_null(m_23));
                {
                  o_23 = t;
                  if(((j_23 != NULL) && (j_23 != o_23)))
                    _fail(o_23);
                  else
                    j_23 = o_23;
                }
              }
            }
          }
          t = n_18;
          {
            ATerm l_4 (ATerm t)
            {
              t = not_null(j_23);
              return(t);
            }
            t = reverse_acc_2(t, i_0, l_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_23 == ATempty))
        {
          {
            t = term_f_8;
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
  ATerm m_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm v_23 = NULL;
  ATerm w_23 = NULL;
  t = term_f_8;
  {
    t = h_0(t);
    {
      w_23 = t;
      if(((v_23 != NULL) && (v_23 != w_23)))
        _fail(w_23);
      else
        v_23 = w_23;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_18), not_null(v_23)), term_p_18);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_45 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_Program_1))
    {
      e_24 = ATgetArgument(d_24, 0);
      {
        ATerm h_24 = NULL,j_24 = NULL;
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(d_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        {
          t = not_null(e_24);
          {
            ATerm l_24 = NULL;
            t = r_45(t);
            {
              j_24 = t;
              {
                ATerm m_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_24)), not_null(h_24));
                {
                  m_24 = t;
                  if(((l_24 != NULL) && (l_24 != m_24)))
                    _fail(m_24);
                  else
                    l_24 = m_24;
                }
                t = not_null(l_24);
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
  ATerm z_24 = NULL;
  ATerm n_4 (ATerm t)
  {
    ATerm p_4 (ATerm t)
    {
      ATerm a_25 = NULL;
      a_25 = t;
      if(((z_24 != NULL) && (z_24 != a_25)))
        _fail(a_25);
      else
        z_24 = a_25;
      return(t);
    }
    t = Program_1(t, p_4);
    return(t);
  }
  t = option_defined_1(t, n_4);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm b_25 = NULL;
      ATerm c_25 = NULL;
      t = term_f_8;
      {
        ATerm t_4 (ATerm t)
        {
          t = not_null(z_24);
          return(t);
        }
        t = short_description_1(t, t_4);
        {
          t = concat_strings_0(t);
          {
            c_25 = t;
            if(((b_25 != NULL) && (b_25 != c_25)))
              _fail(c_25);
            else
              b_25 = c_25;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, not_null(b_25)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, s_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, term_r_18));
      {
        t = printnl_0(t);
        {
          t = term_y_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm d_25 = NULL;
                  d_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_25)), term_z_18));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_4);
                {
                  ATerm z_4 (ATerm t)
                  {
                    ATerm f_25 = NULL;
                    ATerm g_25 = NULL;
                    t = term_f_8;
                    {
                      ATerm a_5 (ATerm t)
                      {
                        t = not_null(z_24);
                        return(t);
                      }
                      t = long_description_1(t, a_5);
                      {
                        t = concat_strings_0(t);
                        {
                          g_25 = t;
                          if(((f_25 != NULL) && (f_25 != g_25)))
                            _fail(g_25);
                          else
                            f_25 = g_25;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_25)), term_a_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_4);
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
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm b_19;
        b_19 = t;
        t = SSL_printnl(not_null(r_25), not_null(s_25));
        t = b_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_45 (ATerm))
{
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym_Undefined_1))
    {
      c_26 = ATgetArgument(b_26, 0);
      {
        ATerm f_26 = NULL,h_26 = NULL;
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(b_26));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
        {
          t = not_null(c_26);
          {
            ATerm j_26 = NULL;
            t = s_45(t);
            {
              h_26 = t;
              {
                ATerm k_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_26)), not_null(f_26));
                {
                  k_26 = t;
                  if(((j_26 != NULL) && (j_26 != k_26)))
                    _fail(k_26);
                  else
                    j_26 = k_26;
                }
                t = not_null(j_26);
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
  ATerm p_26 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_70, _id);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = Cons_2(t, _id, p_26);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_54 (ATerm))
{
  t = fetch_1(t, v_54);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym_Help_0))
    {
      ATerm w_26 = NULL,y_26 = NULL;
      ATerm i_19;
      i_19 = t;
      {
        ATerm x_26 = NULL;
        t = SSLgetAnnotations(not_null(u_26));
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
      }
      t = i_19;
      {
        ATerm z_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_26));
        {
          z_26 = t;
          if(((y_26 != NULL) && (y_26 != z_26)))
            _fail(z_26);
          else
            y_26 = z_26;
        }
        t = not_null(y_26);
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
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_72(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  e_27 :
  if(match_cons(f_27, sym__2))
    {
      g_27 = ATgetArgument(f_27, 0);
      h_27 = ATgetArgument(f_27, 1);
      t = SSL_table_get(not_null(g_27), not_null(h_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym__3))
    {
      p_27 = ATgetArgument(o_27, 0);
      q_27 = ATgetArgument(o_27, 1);
      r_27 = ATgetArgument(o_27, 2);
      {
        ATerm l_19;
        l_19 = t;
        {
          ATerm v_27 = NULL;
          ATerm w_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(q_27));
          {
            ATerm m_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_19);
              }
            else
              {
                t = m_19;
                t = (ATerm) ATempty;
              }
            {
              w_27 = t;
              if(((v_27 != NULL) && (v_27 != w_27)))
                _fail(w_27);
              else
                v_27 = w_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_27), not_null(q_27), (ATerm) ATinsert(CheckATermList(not_null(v_27)), not_null(r_27)));
            t = table_put_0(t);
          }
        }
        t = l_19;
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
  ATerm a_28 = NULL;
  ATerm b_28 = NULL;
  t = term_f_8;
  {
    t = v_53(t);
    {
      b_28 = t;
      if(((a_28 != NULL) && (a_28 != b_28)))
        _fail(b_28);
      else
        a_28 = b_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_18, term_t_18, not_null(a_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_string(h_28, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_28) == AT_LIST) && ((ATermList) h_28 != ATempty)))
        {
          i_28 = ATgetFirst((ATermList) h_28);
          j_28 = (ATerm) ATgetNext((ATermList) h_28);
          {
            ATerm m_28 = NULL;
            ATerm o_19;
            o_19 = t;
            {
              t = not_null(i_28);
              t = a_0(t);
            }
            t = o_19;
            {
              ATerm n_28 = NULL;
              t = term_f_8;
              {
                t = b_0(t);
                {
                  n_28 = t;
                  if(((m_28 != NULL) && (m_28 != n_28)))
                    _fail(n_28);
                  else
                    m_28 = n_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_28)), not_null(m_28));
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
  ATerm b_5 (ATerm t)
  {
    ATerm s_28 = NULL;
    s_28 = t;
    r_28 :
    if(!(match_string(s_28, "--help")))
      {
        if(!(match_string(s_28, "-h")))
          {
            if(!(match_string(s_28, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  t = Option_3(t, b_5, c_5, e_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(((ATgetType(v_28) == AT_LIST) && ((ATermList) v_28 != ATempty)))
    {
      w_28 = ATgetFirst((ATermList) v_28);
      x_28 = (ATerm) ATgetNext((ATermList) v_28);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_28)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_28)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL,m_29 = NULL;
  i_29 = t;
  h_29 :
  if(((ATgetType(i_29) == AT_LIST) && ((ATermList) i_29 != ATempty)))
    {
      j_29 = ATgetFirst((ATermList) i_29);
      m_29 = (ATerm) ATgetNext((ATermList) i_29);
      {
        ATerm r_29 = NULL,v_29 = NULL;
        ATerm s_29 = NULL;
        t = SSLgetAnnotations(not_null(i_29));
        {
          s_29 = t;
          if(((r_29 != NULL) && (r_29 != s_29)))
            _fail(s_29);
          else
            r_29 = s_29;
        }
        {
          t = not_null(j_29);
          {
            ATerm h_30 = NULL;
            t = u_50(t);
            {
              v_29 = t;
              {
                t = not_null(m_29);
                {
                  ATerm j_30 = NULL;
                  t = v_50(t);
                  {
                    h_30 = t;
                    {
                      ATerm u_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_30)), not_null(v_29)), not_null(r_29));
                      {
                        u_30 = t;
                        if(((j_30 != NULL) && (j_30 != u_30)))
                          _fail(u_30);
                        else
                          j_30 = u_30;
                      }
                      t = not_null(j_30);
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
  ATerm q_31 = NULL;
  q_31 = t;
  n_31 :
  if(((ATermList) q_31 == ATempty))
    {
      {
        ATerm s_31 = NULL,w_31 = NULL;
        ATerm u_19;
        u_19 = t;
        {
          ATerm v_31 = NULL;
          t = SSLgetAnnotations(not_null(q_31));
          {
            v_31 = t;
            if(((s_31 != NULL) && (s_31 != v_31)))
              _fail(v_31);
            else
              s_31 = v_31;
          }
        }
        t = u_19;
        {
          ATerm c_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_31));
          {
            c_32 = t;
            if(((w_31 != NULL) && (w_31 != c_32)))
              _fail(c_32);
            else
              w_31 = c_32;
          }
          t = not_null(w_31);
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
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym__2))
    {
      j_32 = ATgetArgument(i_32, 0);
      k_32 = ATgetArgument(i_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_17, not_null(j_32), not_null(k_32));
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
  ATerm v_19;
  v_19 = t;
  {
    ATerm f_5 (ATerm t)
    {
      t = term_w_19;
      t = t_53(t);
      return(t);
    }
    t = try_1(t, f_5);
  }
  t = v_19;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm s_32 = NULL;
      ATerm x_19;
      x_19 = t;
      {
        ATerm q_32 = NULL;
        ATerm r_32 = NULL;
        r_32 = t;
        if(((q_32 != NULL) && (q_32 != r_32)))
          _fail(r_32);
        else
          q_32 = r_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_20, not_null(q_32));
          t = set_config_0(t);
        }
      }
      t = x_19;
      {
        ATerm t_32 = NULL;
        t_32 = t;
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_32));
      }
      return(t);
    }
    ATerm h_5 (ATerm t)
    {
      ATerm d_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              {
                t = t_53(t);
                t = Cons_2(t, _id, h_5);
              }
            }
          LocalPopChoice(i_20);
        }
      else
        {
          t = d_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_5, h_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
    c_33 = t;
    y_32 :
    if(match_cons(c_33, sym__3))
      {
        d_33 = ATgetArgument(c_33, 0);
        e_33 = ATgetArgument(c_33, 1);
        f_33 = ATgetArgument(c_33, 2);
        {
          if(((z_32 != NULL) && (z_32 != d_33)))
            _fail(d_33);
          else
            z_32 = d_33;
          {
            if(((a_33 != NULL) && (a_33 != e_33)))
              _fail(e_33);
            else
              a_33 = e_33;
            {
              if(((b_33 != NULL) && (b_33 != f_33)))
                _fail(f_33);
              else
                b_33 = f_33;
              t = SSL_table_put(not_null(z_32), not_null(a_33), not_null(b_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm i_33 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    t = term_n_20;
    t = table_put_0(t);
  }
  t = m_20;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_53(t);
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_5);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm x_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_21);
          }
        else
          {
            t = x_20;
            {
              ATerm m_5 (ATerm t)
              {
                ATerm p_5 (ATerm t)
                {
                  ATerm j_33 = NULL;
                  j_33 = t;
                  if(((i_33 != NULL) && (i_33 != j_33)))
                    _fail(j_33);
                  else
                    i_33 = j_33;
                  return(t);
                }
                t = Undefined_1(t, p_5);
                return(t);
              }
              t = option_defined_1(t, m_5);
              {
                ATerm b_21;
                b_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_33)), term_c_21));
                  t = printnl_0(t);
                }
                t = b_21;
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_5);
      {
        ATerm g_21;
        g_21 = t;
        {
          t = term_s_18;
          t = table_destroy_0(t);
        }
        t = g_21;
      }
    }
  }
  return(t);
}
ATerm sglri_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sglri_options_0(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_5);
  {
    t = parse_and_implode_0(t);
    {
      t = term_p_13;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sglri_0(t);
  return(t);
}
