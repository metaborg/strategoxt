#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Scopes_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_b_14;
ATerm term_m_13;
ATerm term_z_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_i_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_f_6;
ATerm term_b_6;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_k_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_h_4;
ATerm term_c_4;
ATerm term_o_3;
void init_constant_terms (void)
{
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym__2, term_j_4, term_k_4);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym__2, term_y_4, term_z_4);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_4);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_k_4);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__2, term_m_6, term_k_4);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_k_4);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__3, term_z_10, term_a_11, (ATerm) ATempty);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm copy_file_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_66 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
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
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm));
ATerm crush_2 (ATerm, ATerm s_70 (ATerm), ATerm t_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_61 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_81 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_83 (ATerm));
ATerm map_1 (ATerm, ATerm i_66 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_83 (ATerm));
ATerm Program_1 (ATerm, ATerm r_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm r_81 (ATerm), ATerm s_81 (ATerm));
ATerm cp_file_0 (ATerm);
ATerm main_0 (ATerm);
ATerm copy_file_0 (ATerm t)
{
  ATerm r_0 = NULL,f_1 = NULL,g_1 = NULL;
  r_0 = t;
  q_0 :
  if(match_cons(r_0, sym__2))
    {
      f_1 = ATgetArgument(r_0, 0);
      g_1 = ATgetArgument(r_0, 1);
      t = SSL_copy(not_null(f_1), not_null(g_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_1 = NULL;
  y_1 = t;
  t = SSL_implode_string(not_null(y_1));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_2 = t;
  int g_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_3);
    }
  else
    {
      t = i_2;
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
        d_2 = t;
        c_2 :
        if(((ATgetType(d_2) == AT_LIST) && !(ATisEmpty(d_2))))
          {
            e_2 = ATgetFirst((ATermList) d_2);
            f_2 = (ATerm) ATgetNext((ATermList) d_2);
            {
              t = not_null(e_2);
              {
                ATerm c_0 (ATerm t)
                {
                  t = not_null(f_2);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_0);
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
  ATerm p_2 = NULL;
  ATerm r_2 = NULL;
  p_2 = t;
  {
    ATerm s_2 = NULL;
    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
    t = not_null(p_2);
    {
      s_2 = t;
      {
        t = SSL_explode_term(not_null(s_2));
        {
          u_2 = t;
          n_2 :
          if(match_cons(u_2, sym__2))
            {
              v_2 = ATgetArgument(u_2, 0);
              w_2 = ATgetArgument(u_2, 1);
              o_2 :
              if(match_string(v_2, ""))
                {
                  if(((r_2 != NULL) && (r_2 != w_2)))
                    _fail(w_2);
                  else
                    r_2 = w_2;
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
      t = not_null(r_2);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm h_3 = t;
    int i_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_3);
        ;
        LocalPopChoice(i_3);
      }
    else
      {
        t = h_3;
        {
          t = Nil_0(t);
          t = x_66(t);
        }
      }
    return(t);
  }
  t = a_3(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = not_null(e_3);
        {
          ATerm e_0 (ATerm t)
          {
            t = not_null(f_3);
            return(t);
          }
          t = at_end_1(t, e_0);
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
  ATerm j_3 = t;
  int l_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_3);
    }
  else
    {
      t = j_3;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  t = SSL_explode_string(not_null(k_3));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm))
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        ATerm z_3 = NULL,b_4 = NULL;
        ATerm a_4 = NULL;
        t = SSLgetAnnotations(not_null(t_3));
        {
          a_4 = t;
          if(((z_3 != NULL) && (z_3 != a_4)))
            _fail(a_4);
          else
            z_3 = a_4;
        }
        {
          t = not_null(u_3);
          {
            ATerm d_4 = NULL;
            t = p_52(t);
            {
              b_4 = t;
              {
                t = not_null(v_3);
                {
                  ATerm f_4 = NULL;
                  t = q_52(t);
                  {
                    d_4 = t;
                    {
                      ATerm g_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_4), not_null(d_4)), not_null(z_3));
                      {
                        g_4 = t;
                        if(((f_4 != NULL) && (f_4 != g_4)))
                          _fail(g_4);
                        else
                          f_4 = g_4;
                      }
                      t = not_null(f_4);
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
ATerm debug_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm m_3;
  m_3 = t;
  {
    ATerm o_4 = NULL,q_4 = NULL;
    ATerm n_3;
    n_3 = t;
    {
      ATerm p_4 = NULL;
      t = w_61(t);
      {
        p_4 = t;
        if(((o_4 != NULL) && (o_4 != p_4)))
          _fail(p_4);
        else
          o_4 = p_4;
      }
    }
    t = n_3;
    {
      ATerm r_4 = NULL;
      r_4 = t;
      if(((q_4 != NULL) && (q_4 != r_4)))
        _fail(r_4);
      else
        q_4 = r_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_4)), not_null(o_4)));
        t = printnl_0(t);
      }
    }
  }
  t = m_3;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = SSL_is_string(not_null(v_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_3 = t;
  int q_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_3);
    }
  else
    {
      t = p_3;
      {
        ATerm r_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, f_0);
            ;
            LocalPopChoice(w_3);
          }
        else
          {
            t = r_3;
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
              e_5 = t;
              d_5 :
              if(match_cons(e_5, sym_Path_1))
                {
                  f_5 = ATgetArgument(e_5, 0);
                  t = not_null(f_5);
                }
              else
                {
                  if(match_cons(e_5, sym_Var_1))
                    {
                      f_5 = ATgetArgument(e_5, 0);
                      {
                        t = not_null(f_5);
                        {
                          ATerm x_3 = t;
                          int y_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_3);
                            }
                          else
                            {
                              t = x_3;
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = term_c_4;
                                  return(t);
                                }
                                t = debug_1(t, h_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_5, sym_Prefix_2))
                        {
                          f_5 = ATgetArgument(e_5, 0);
                          g_5 = ATgetArgument(e_5, 1);
                          {
                            ATerm l_5 = NULL,n_5 = NULL;
                            ATerm e_4;
                            e_4 = t;
                            {
                              ATerm m_5 = NULL;
                              t = not_null(f_5);
                              {
                                t = eval_config_0(t);
                                {
                                  m_5 = t;
                                  if(((l_5 != NULL) && (l_5 != m_5)))
                                    _fail(m_5);
                                  else
                                    l_5 = m_5;
                                }
                              }
                            }
                            t = e_4;
                            {
                              ATerm o_5 = NULL;
                              t = not_null(g_5);
                              {
                                t = eval_config_0(t);
                                {
                                  o_5 = t;
                                  if(((n_5 != NULL) && (n_5 != o_5)))
                                    _fail(o_5);
                                  else
                                    n_5 = o_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), not_null(n_5));
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
  ATerm w_5 = NULL;
  w_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_4, not_null(w_5));
    {
      t = table_get_0(t);
      {
        ATerm m_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_4;
            i_4 = t;
            {
              ATerm y_5 = NULL;
              ATerm z_5 = NULL;
              z_5 = t;
              if(((y_5 != NULL) && (y_5 != z_5)))
                _fail(z_5);
              else
                y_5 = z_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_4, not_null(w_5), not_null(y_5));
                t = table_put_0(t);
              }
            }
            t = i_4;
          }
          return(t);
        }
        t = try_1(t, m_0);
      }
    }
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm d_6 = NULL;
    d_6 = t;
    c_6 :
    if(!(match_string(d_6, "-v")))
      {
        if(!(match_string(d_6, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = term_l_4;
    t = set_config_0(t);
    t = term_m_4;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = term_n_4;
    return(t);
  }
  t = Option_3(t, n_0, o_0, p_0);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm g_6 = NULL;
    g_6 = t;
    e_6 :
    if(!(match_string(g_6, "-k")))
      {
        if(!(match_string(g_6, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm s_4;
    s_4 = t;
    {
      ATerm h_6 = NULL;
      ATerm i_6 = NULL;
      t = string_to_int_0(t);
      {
        i_6 = t;
        if(((h_6 != NULL) && (h_6 != i_6)))
          _fail(i_6);
        else
          h_6 = i_6;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_4, not_null(h_6));
        t = set_config_0(t);
      }
    }
    t = s_4;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_u_4;
    return(t);
  }
  t = ArgOption_3(t, s_0, t_0, u_0);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  t = SSL_string_to_int(not_null(l_6));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm t_6 = NULL;
        t_6 = t;
        o_6 :
        if(!(match_string(t_6, "-S")))
          {
            if(!(match_string(t_6, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        t = term_a_5;
        t = set_config_0(t);
        t = term_b_5;
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        t = term_c_5;
        return(t);
      }
      t = Option_3(t, v_0, w_0, x_0);
      ;
      LocalPopChoice(x_4);
    }
  else
    {
      t = w_4;
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm u_6 = NULL;
              u_6 = t;
              p_6 :
              if(!(match_string(u_6, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              ATerm x_6 = NULL;
              ATerm j_5;
              j_5 = t;
              {
                ATerm v_6 = NULL;
                ATerm w_6 = NULL;
                t = string_to_int_0(t);
                {
                  w_6 = t;
                  if(((v_6 != NULL) && (v_6 != w_6)))
                    _fail(w_6);
                  else
                    v_6 = w_6;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(v_6));
                  t = set_config_0(t);
                }
              }
              t = j_5;
              {
                ATerm y_6 = NULL;
                y_6 = t;
                if(((x_6 != NULL) && (x_6 != y_6)))
                  _fail(y_6);
                else
                  x_6 = y_6;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_6));
              }
              return(t);
            }
            ATerm a_1 (ATerm t)
            {
              t = term_k_5;
              return(t);
            }
            t = ArgOption_3(t, y_0, z_0, a_1);
            ;
            LocalPopChoice(i_5);
          }
        else
          {
            t = h_5;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm z_6 = NULL;
                z_6 = t;
                s_6 :
                if(!(match_string(z_6, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                t = term_q_5;
                t = set_config_0(t);
                t = term_r_5;
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                t = term_s_5;
                return(t);
              }
              t = Option_3(t, b_1, c_1, d_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
        ATerm v_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_5);
          }
        else
          {
            t = v_5;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_7 = NULL;
    f_7 = t;
    c_7 :
    if(!(match_string(f_7, "-o")))
      {
        if(!(match_string(f_7, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm i_7 = NULL;
    ATerm a_6;
    a_6 = t;
    {
      ATerm g_7 = NULL;
      ATerm h_7 = NULL;
      h_7 = t;
      if(((g_7 != NULL) && (g_7 != h_7)))
        _fail(h_7);
      else
        g_7 = h_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(g_7));
        t = set_config_0(t);
      }
    }
    t = a_6;
    {
      ATerm j_7 = NULL;
      j_7 = t;
      if(((i_7 != NULL) && (i_7 != j_7)))
        _fail(j_7);
      else
        i_7 = j_7;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_7));
    }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_f_6;
    return(t);
  }
  t = ArgOption_3(t, e_1, h_1, i_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm n_7 = NULL;
          n_7 = t;
          m_7 :
          if(!(match_string(n_7, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = term_n_6;
          t = set_config_0(t);
          t = term_q_6;
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          t = term_r_6;
          return(t);
        }
        t = Option_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  t_7 = t;
  r_7 :
  if(match_string(t_7, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
        {
          u_7 = ATgetFirst((ATermList) t_7);
          v_7 = (ATerm) ATgetNext((ATermList) t_7);
          s_7 :
          if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
            {
              w_7 = ATgetFirst((ATermList) v_7);
              x_7 = (ATerm) ATgetNext((ATermList) v_7);
              {
                ATerm b_8 = NULL;
                ATerm a_7;
                a_7 = t;
                {
                  t = not_null(u_7);
                  t = j_0(t);
                }
                t = a_7;
                {
                  ATerm c_8 = NULL;
                  t = not_null(w_7);
                  {
                    t = k_0(t);
                    {
                      c_8 = t;
                      if(((b_8 != NULL) && (b_8 != c_8)))
                        _fail(c_8);
                      else
                        b_8 = c_8;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_7)), not_null(b_8));
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
  ATerm m_1 (ATerm t)
  {
    ATerm j_8 = NULL;
    j_8 = t;
    g_8 :
    if(!(match_string(j_8, "-i")))
      {
        if(!(match_string(j_8, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm m_8 = NULL;
    ATerm b_7;
    b_7 = t;
    {
      ATerm k_8 = NULL;
      ATerm l_8 = NULL;
      l_8 = t;
      if(((k_8 != NULL) && (k_8 != l_8)))
        _fail(l_8);
      else
        k_8 = l_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(k_8));
        t = set_config_0(t);
      }
    }
    t = b_7;
    {
      ATerm n_8 = NULL;
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_8));
    }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_7;
  q_7 = t;
  {
    ATerm r_8 = NULL;
    ATerm s_8 = NULL;
    t = term_k_4;
    {
      t = whoami_0(t);
      {
        s_8 = t;
        if(((r_8 != NULL) && (r_8 != s_8)))
          _fail(s_8);
        else
          r_8 = s_8;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_7), not_null(r_8)), term_y_7));
      {
        t = printnl_0(t);
        {
          t = term_a_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm v_8 = NULL;
  t = report_run_time_0(t);
  {
    ATerm w_8 = NULL;
    t = term_k_4;
    {
      t = whoami_0(t);
      {
        w_8 = t;
        if(((v_8 != NULL) && (v_8 != w_8)))
          _fail(w_8);
        else
          v_8 = w_8;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_3, (ATerm) ATinsert(ATinsert(ATempty, term_d_8), not_null(v_8)));
      {
        t = printnl_0(t);
        {
          t = term_a_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_8;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = SSL_TicksToSeconds(not_null(z_8));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym__2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      {
        ATerm f_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_9), not_null(g_9));
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = f_8;
            t = SSL_addr(not_null(f_9), not_null(g_9));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm))
{
  ATerm i_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_72(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = i_8;
      {
        ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
        n_9 = t;
        m_9 :
        if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
          {
            o_9 = ATgetFirst((ATermList) n_9);
            p_9 = (ATerm) ATgetNext((ATermList) n_9);
            {
              ATerm s_9 = NULL;
              ATerm t_9 = NULL;
              t = not_null(p_9);
              {
                t = foldr_2(t, u_72, v_72);
                {
                  t_9 = t;
                  if(((s_9 != NULL) && (s_9 != t_9)))
                    _fail(t_9);
                  else
                    s_9 = t_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), not_null(s_9));
                t = v_72(t);
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
ATerm crush_2 (ATerm t, ATerm s_70 (ATerm), ATerm t_70 (ATerm))
{
  ATerm a_10 = NULL;
  ATerm c_10 = NULL;
  a_10 = t;
  {
    ATerm d_10 = NULL;
    ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
    t = not_null(a_10);
    {
      d_10 = t;
      {
        t = SSL_explode_term(not_null(d_10));
        {
          f_10 = t;
          z_9 :
          if(match_cons(f_10, sym__2))
            {
              g_10 = ATgetArgument(f_10, 0);
              h_10 = ATgetArgument(f_10, 1);
              if(((c_10 != NULL) && (c_10 != h_10)))
                _fail(h_10);
              else
                c_10 = h_10;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_10);
      t = foldr_2(t, s_70, t_70);
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
    ATerm p_1 (ATerm t)
    {
      t = term_z_4;
      return(t);
    }
    t = crush_2(t, p_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  m_10 :
  if(match_cons(n_10, sym__2))
    {
      o_10 = ATgetArgument(n_10, 0);
      p_10 = ATgetArgument(n_10, 1);
      {
        ATerm p_8;
        p_8 = t;
        {
          ATerm q_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_10), not_null(p_10));
              ;
              LocalPopChoice(t_8);
            }
          else
            {
              t = q_8;
              t = SSL_gtr(not_null(o_10), not_null(p_10));
            }
        }
        t = p_8;
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
  ATerm v_10 = NULL;
  ATerm u_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
      w_10 = t;
      u_10 :
      if(match_cons(w_10, sym__2))
        {
          x_10 = ATgetArgument(w_10, 0);
          y_10 = ATgetArgument(w_10, 1);
          {
            if(((v_10 != NULL) && (v_10 != x_10)))
              _fail(x_10);
            else
              v_10 = x_10;
            if(((v_10 != NULL) && (v_10 != y_10)))
              _fail(y_10);
            else
              v_10 = y_10;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = u_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm y_8;
    y_8 = t;
    {
      ATerm b_11 = NULL;
      ATerm c_11 = NULL;
      t = term_y_4;
      {
        t = get_config_0(t);
        {
          c_11 = t;
          if(((b_11 != NULL) && (b_11 != c_11)))
            _fail(c_11);
          else
            b_11 = c_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), term_a_8);
        t = geq_0(t);
      }
    }
    t = y_8;
    t = a_61(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm g_11 = NULL,i_11 = NULL;
    ATerm a_9;
    a_9 = t;
    {
      ATerm h_11 = NULL;
      t = run_time_0(t);
      {
        h_11 = t;
        if(((g_11 != NULL) && (g_11 != h_11)))
          _fail(h_11);
        else
          g_11 = h_11;
      }
    }
    t = a_9;
    {
      ATerm j_11 = NULL;
      t = term_k_4;
      {
        t = whoami_0(t);
        {
          j_11 = t;
          if(((i_11 != NULL) && (i_11 != j_11)))
            _fail(j_11);
          else
            i_11 = j_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), not_null(g_11)), term_b_9), not_null(i_11)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_z_4;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_Version_0))
    {
      ATerm s_11 = NULL,u_11 = NULL;
      ATerm h_9;
      h_9 = t;
      {
        ATerm t_11 = NULL;
        t = SSLgetAnnotations(not_null(q_11));
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
      }
      t = h_9;
      {
        ATerm v_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        t = not_null(u_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_9;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm s_1 (ATerm t)
        {
          ATerm l_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(q_9);
            }
          else
            {
              t = l_9;
              {
                ATerm r_9 = t;
                int u_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(u_9);
                  }
                else
                  {
                    t = r_9;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, s_1);
      }
    }
  t = l_81(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  t = SSL_table_create(not_null(a_12));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  {
    ATerm v_9;
    v_9 = t;
    {
      t = term_w_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, not_null(e_12));
          t = table_put_0(t);
        }
      }
    }
    t = v_9;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  t = SSL_table_destroy(not_null(i_12));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  t = SSL_exit(not_null(m_12));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(((ATgetType(q_12) == AT_LIST) && ATisEmpty(q_12)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
        {
          r_12 = ATgetFirst((ATermList) q_12);
          s_12 = (ATerm) ATgetNext((ATermList) q_12);
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
  ATerm y_9;
  y_9 = t;
  {
    ATerm v_12 = NULL;
    ATerm y_12 = NULL;
    ATerm b_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = b_10;
        {
          ATerm w_12 = NULL;
          ATerm x_12 = NULL;
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
          t = (ATerm) ATinsert(ATempty, not_null(w_12));
        }
      }
    {
      y_12 = t;
      if(((v_12 != NULL) && (v_12 != y_12)))
        _fail(y_12);
      else
        v_12 = y_12;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(v_12));
      t = printnl_0(t);
    }
  }
  t = y_9;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm b_13 (ATerm t)
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = Cons_2(t, i_66, b_13);
      }
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  k_13 = t;
  h_13 :
  if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
    {
      i_13 = ATgetFirst((ATermList) k_13);
      j_13 = (ATerm) ATgetNext((ATermList) k_13);
      {
        ATerm n_13 = NULL;
        t = not_null(j_13);
        {
          ATerm l_10;
          l_10 = t;
          {
            ATerm o_13 = NULL,q_13 = NULL,s_13 = NULL;
            ATerm q_10;
            q_10 = t;
            {
              ATerm p_13 = NULL;
              t = i_0(t);
              {
                p_13 = t;
                if(((o_13 != NULL) && (o_13 != p_13)))
                  _fail(p_13);
                else
                  o_13 = p_13;
              }
            }
            t = q_10;
            {
              ATerm r_13 = NULL;
              t = not_null(i_13);
              {
                t = g_0(t);
                {
                  r_13 = t;
                  if(((q_13 != NULL) && (q_13 != r_13)))
                    _fail(r_13);
                  else
                    q_13 = r_13;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_13)), not_null(q_13));
                {
                  s_13 = t;
                  if(((n_13 != NULL) && (n_13 != s_13)))
                    _fail(s_13);
                  else
                    n_13 = s_13;
                }
              }
            }
          }
          t = l_10;
          {
            ATerm t_1 (ATerm t)
            {
              t = not_null(n_13);
              return(t);
            }
            t = reverse_acc_2(t, g_0, t_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_13) == AT_LIST) && ATisEmpty(k_13)))
        {
          {
            t = term_k_4;
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
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm d_14 = NULL,e_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_Program_1))
    {
      e_14 = ATgetArgument(d_14, 0);
      {
        ATerm h_14 = NULL,j_14 = NULL;
        ATerm i_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
        {
          t = not_null(e_14);
          {
            ATerm l_14 = NULL;
            t = r_59(t);
            {
              j_14 = t;
              {
                ATerm m_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_14)), not_null(h_14));
                {
                  m_14 = t;
                  if(((l_14 != NULL) && (l_14 != m_14)))
                    _fail(m_14);
                  else
                    l_14 = m_14;
                }
                t = not_null(l_14);
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
  ATerm v_14 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_14 = NULL;
      t = term_e_8;
      {
        t = get_config_0(t);
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
      }
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm v_1 (ATerm t)
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_14 = NULL;
            x_14 = t;
            if(((v_14 != NULL) && (v_14 != x_14)))
              _fail(x_14);
            else
              v_14 = x_14;
            return(t);
          }
          t = Program_1(t, w_1);
          return(t);
        }
        t = option_defined_1(t, v_1);
      }
    }
  {
    ATerm x_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = not_null(v_14);
        return(t);
      }
      t = short_description_1(t, z_1);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_1);
    {
      t = term_t_10;
      {
        t = echo_0(t);
        {
          t = term_d_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm y_14 = NULL;
                  ATerm z_14 = NULL;
                  z_14 = t;
                  if(((y_14 != NULL) && (y_14 != z_14)))
                    _fail(z_14);
                  else
                    y_14 = z_14;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), term_e_11);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_2);
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm a_15 = NULL;
                    ATerm b_15 = NULL;
                    ATerm g_2 (ATerm t)
                    {
                      t = not_null(v_14);
                      return(t);
                    }
                    t = long_description_1(t, g_2);
                    {
                      b_15 = t;
                      if(((a_15 != NULL) && (a_15 != b_15)))
                        _fail(b_15);
                      else
                        a_15 = b_15;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_15)), term_f_11);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_2);
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
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym__2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm k_11;
        k_11 = t;
        t = SSL_printnl(not_null(j_15), not_null(k_15));
        t = k_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm t_15 = NULL,u_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym_Undefined_1))
    {
      u_15 = ATgetArgument(t_15, 0);
      {
        ATerm x_15 = NULL,z_15 = NULL;
        ATerm y_15 = NULL;
        t = SSLgetAnnotations(not_null(t_15));
        {
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
        }
        {
          t = not_null(u_15);
          {
            ATerm b_16 = NULL;
            t = s_59(t);
            {
              z_15 = t;
              {
                ATerm c_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_15)), not_null(x_15));
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
ATerm fetch_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm h_16 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_66, _id);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = Cons_2(t, _id, h_16);
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_82 (ATerm))
{
  t = fetch_1(t, g_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym_Help_0))
    {
      ATerm o_16 = NULL,q_16 = NULL;
      ATerm n_11;
      n_11 = t;
      {
        ATerm p_16 = NULL;
        t = SSLgetAnnotations(not_null(m_16));
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
      }
      t = n_11;
      {
        ATerm r_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_16));
        {
          r_16 = t;
          if(((q_16 != NULL) && (q_16 != r_16)))
            _fail(r_16);
          else
            q_16 = r_16;
        }
        t = not_null(q_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm o_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_65(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = o_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym__2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      t = SSL_table_get(not_null(y_16), not_null(z_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__3))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      j_17 = ATgetArgument(g_17, 2);
      {
        ATerm w_11;
        w_11 = t;
        {
          ATerm n_17 = NULL;
          ATerm o_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(i_17));
          {
            ATerm x_11 = t;
            int y_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_11);
              }
            else
              {
                t = x_11;
                t = (ATerm) ATempty;
              }
            {
              o_17 = t;
              if(((n_17 != NULL) && (n_17 != o_17)))
                _fail(o_17);
              else
                n_17 = o_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_17), not_null(i_17), (ATerm) ATinsert(CheckATermList(not_null(n_17)), not_null(j_17)));
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
ATerm register_usage_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm s_17 = NULL;
  ATerm t_17 = NULL;
  t = term_k_4;
  {
    t = l_83(t);
    {
      t_17 = t;
      if(((s_17 != NULL) && (s_17 != t_17)))
        _fail(t_17);
      else
        s_17 = t_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_10, term_a_11, not_null(s_17));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_string(z_17, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
        {
          a_18 = ATgetFirst((ATermList) z_17);
          b_18 = (ATerm) ATgetNext((ATermList) z_17);
          {
            ATerm e_18 = NULL;
            ATerm z_11;
            z_11 = t;
            {
              t = not_null(a_18);
              t = a_0(t);
            }
            t = z_11;
            {
              ATerm f_18 = NULL;
              t = term_k_4;
              {
                t = b_0(t);
                {
                  f_18 = t;
                  if(((e_18 != NULL) && (e_18 != f_18)))
                    _fail(f_18);
                  else
                    e_18 = f_18;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_18)), not_null(e_18));
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
  ATerm h_2 (ATerm t)
  {
    ATerm k_18 = NULL;
    k_18 = t;
    j_18 :
    if(!(match_string(k_18, "--help")))
      {
        if(!(match_string(k_18, "-h")))
          {
            if(!(match_string(k_18, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_b_12;
    {
      t = set_config_0(t);
      t = term_c_12;
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  t = Option_3(t, h_2, j_2, k_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
    {
      o_18 = ATgetFirst((ATermList) n_18);
      p_18 = (ATerm) ATgetNext((ATermList) n_18);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_18)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_18)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
    {
      a_19 = ATgetFirst((ATermList) z_18);
      b_19 = (ATerm) ATgetNext((ATermList) z_18);
      {
        ATerm f_19 = NULL,h_19 = NULL;
        ATerm g_19 = NULL;
        t = SSLgetAnnotations(not_null(z_18));
        {
          g_19 = t;
          if(((f_19 != NULL) && (f_19 != g_19)))
            _fail(g_19);
          else
            f_19 = g_19;
        }
        {
          t = not_null(a_19);
          {
            ATerm j_19 = NULL;
            t = y_53(t);
            {
              h_19 = t;
              {
                t = not_null(b_19);
                {
                  ATerm l_19 = NULL;
                  t = z_53(t);
                  {
                    j_19 = t;
                    {
                      ATerm m_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_19)), not_null(h_19)), not_null(f_19));
                      {
                        m_19 = t;
                        if(((l_19 != NULL) && (l_19 != m_19)))
                          _fail(m_19);
                        else
                          l_19 = m_19;
                      }
                      t = not_null(l_19);
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
  ATerm w_19 = NULL;
  w_19 = t;
  v_19 :
  if(((ATgetType(w_19) == AT_LIST) && ATisEmpty(w_19)))
    {
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm f_12;
        f_12 = t;
        {
          ATerm z_19 = NULL;
          t = SSLgetAnnotations(not_null(w_19));
          {
            z_19 = t;
            if(((y_19 != NULL) && (y_19 != z_19)))
              _fail(z_19);
            else
              y_19 = z_19;
          }
        }
        t = f_12;
        {
          ATerm b_20 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_19));
          {
            b_20 = t;
            if(((a_20 != NULL) && (a_20 != b_20)))
              _fail(b_20);
            else
              a_20 = b_20;
          }
          t = not_null(a_20);
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
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym__2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_4, not_null(i_20), not_null(j_20));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_83 (ATerm))
{
  ATerm g_12;
  g_12 = t;
  {
    ATerm l_2 (ATerm t)
    {
      t = term_h_12;
      t = j_83(t);
      return(t);
    }
    t = try_1(t, l_2);
  }
  t = g_12;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm s_20 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm q_20 = NULL;
        ATerm r_20 = NULL;
        r_20 = t;
        if(((q_20 != NULL) && (q_20 != r_20)))
          _fail(r_20);
        else
          q_20 = r_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(q_20));
          t = set_config_0(t);
        }
      }
      t = j_12;
      {
        ATerm t_20 = NULL;
        t_20 = t;
        if(((s_20 != NULL) && (s_20 != t_20)))
          _fail(t_20);
        else
          s_20 = t_20;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_20));
      }
      return(t);
    }
    ATerm q_2 (ATerm t)
    {
      ATerm k_12 = t;
      int l_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              {
                t = j_83(t);
                t = Cons_2(t, _id, q_2);
              }
            }
          ;
          LocalPopChoice(l_12);
        }
      else
        {
          t = k_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_2, q_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  ATerm t_12;
  t_12 = t;
  {
    ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
    c_21 = t;
    y_20 :
    if(match_cons(c_21, sym__3))
      {
        d_21 = ATgetArgument(c_21, 0);
        e_21 = ATgetArgument(c_21, 1);
        f_21 = ATgetArgument(c_21, 2);
        {
          if(((z_20 != NULL) && (z_20 != d_21)))
            _fail(d_21);
          else
            z_20 = d_21;
          {
            if(((a_21 != NULL) && (a_21 != e_21)))
              _fail(e_21);
            else
              a_21 = e_21;
            {
              if(((b_21 != NULL) && (b_21 != f_21)))
                _fail(f_21);
              else
                b_21 = f_21;
              t = SSL_table_put(not_null(z_20), not_null(a_21), not_null(b_21));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm i_21 = NULL;
  ATerm u_12;
  u_12 = t;
  {
    t = term_z_12;
    t = table_put_0(t);
  }
  t = u_12;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm a_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_83(t);
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = a_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_2);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_13;
            f_13 = t;
            {
              ATerm g_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_9;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = g_13;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_13;
            {
              t = system_usage_0(t);
              {
                t = term_z_4;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm y_2 (ATerm t)
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm j_21 = NULL;
                  j_21 = t;
                  if(((i_21 != NULL) && (i_21 != j_21)))
                    _fail(j_21);
                  else
                    i_21 = j_21;
                  return(t);
                }
                t = Undefined_1(t, z_2);
                return(t);
              }
              t = option_defined_1(t, y_2);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_21)), term_m_13));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_a_8;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_2);
      {
        ATerm t_13;
        t_13 = t;
        {
          t = term_z_10;
          t = table_destroy_0(t);
        }
        t = t_13;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  t = parse_options_1(t, n_81);
  {
    t = store_options_0(t);
    {
      t = p_81(t);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_81);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_81(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm r_81 (ATerm), ATerm s_81 (ATerm))
{
  t = option_wrap_4(t, r_81, default_usage_0, _id, s_81);
  return(t);
}
ATerm cp_file_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm p_21 = NULL,r_21 = NULL;
    ATerm y_13;
    y_13 = t;
    {
      ATerm q_21 = NULL;
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_7;
          t = get_config_0(t);
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          t = term_b_14;
        }
      {
        q_21 = t;
        if(((p_21 != NULL) && (p_21 != q_21)))
          _fail(q_21);
        else
          p_21 = q_21;
      }
    }
    t = y_13;
    {
      ATerm s_21 = NULL;
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_6;
          t = get_config_0(t);
          ;
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          t = term_i_10;
        }
      {
        s_21 = t;
        if(((r_21 != NULL) && (r_21 != s_21)))
          _fail(s_21);
        else
          r_21 = s_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), not_null(r_21));
        t = copy_file_0(t);
      }
    }
    return(t);
  }
  t = option_wrap_2(t, io_options_0, b_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = cp_file_0(t);
  return(t);
}
