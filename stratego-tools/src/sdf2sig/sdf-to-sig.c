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
Symbol sym_Pipe_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_f_23;
ATerm term_m_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_g_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_k_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_a_14;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_k_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_y_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_f_7;
ATerm term_e_7;
void init_constant_terms (void)
{
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_y_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_e_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_k_11);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_k_12);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_y_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_k_12);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_k_12);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
}
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm d_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm q_77 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm r_77 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm l_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm k_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm m_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm union_1 (ATerm, ATerm z_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm v_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm close_file_0 (ATerm);
ATerm assert_1 (ATerm, ATerm b_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm p_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm n_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm y_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm x_71 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm c_77 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm f_77 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm crush_2 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_80 (ATerm));
ATerm Program_1 (ATerm, ATerm u_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_72 (ATerm));
ATerm map_1 (ATerm, ATerm g_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm sdf_to_sig_0 (ATerm);
ATerm main_0 (ATerm);
ATerm execvp_0 (ATerm t)
{
  ATerm f_0 = NULL,v_0 = NULL,w_0 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      v_0 = ATgetArgument(f_0, 0);
      w_0 = ATgetArgument(f_0, 1);
      t = SSL_execvp(not_null(v_0), not_null(w_0));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  t = SSL_waitpid(not_null(f_2));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm s_2 = NULL;
  ATerm u_2 = NULL;
  s_2 = t;
  {
    t = fork_0(t);
    {
      u_2 = t;
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 = NULL;
            w_2 = t;
            o_2 :
            if(match_int(w_2, 0))
              {
                t = not_null(s_2);
                t = d_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
            {
              ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
              t = not_null(u_2);
              {
                t = waitpid_0(t);
                {
                  x_2 = t;
                  q_2 :
                  if(match_cons(x_2, sym_WaitStatus_3))
                    {
                      y_2 = ATgetArgument(x_2, 0);
                      z_2 = ATgetArgument(x_2, 1);
                      a_3 = ATgetArgument(x_2, 2);
                      r_2 :
                      if(match_int(y_2, 0))
                        {
                          t = not_null(s_2);
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
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
  h_3 = t;
  g_3 :
  if(match_cons(h_3, sym__2))
    {
      i_3 = ATgetArgument(h_3, 0);
      j_3 = ATgetArgument(h_3, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_3), not_null(j_3));
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
ATerm xtc_command_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm p_3 = NULL;
  ATerm a_7;
  a_7 = t;
  {
    ATerm q_3 = NULL;
    t = q_77(t);
    {
      t = xtc_find_warning_0(t);
      {
        q_3 = t;
        if(((p_3 != NULL) && (p_3 != q_3)))
          _fail(q_3);
        else
          p_3 = q_3;
      }
    }
  }
  t = a_7;
  {
    ATerm b_7;
    b_7 = t;
    {
      ATerm r_3 = NULL;
      ATerm s_3 = NULL;
      s_3 = t;
      if(((r_3 != NULL) && (r_3 != s_3)))
        _fail(s_3);
      else
        r_3 = s_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), not_null(r_3));
        t = call_0(t);
      }
    }
    t = b_7;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, r_77, h_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm w_3 = NULL;
  w_3 = t;
  t = SSL_table_keys(not_null(w_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  {
    t = table_keys_0(t);
    {
      ATerm o_0 (ATerm t)
      {
        ATerm e_4 = NULL;
        ATerm g_4 = NULL;
        e_4 = t;
        {
          ATerm h_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), not_null(e_4));
          {
            t = table_get_0(t);
            {
              h_4 = t;
              if(((g_4 != NULL) && (g_4 != h_4)))
                _fail(h_4);
              else
                g_4 = h_4;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_4), not_null(g_4));
        }
        return(t);
      }
      t = map_1(t, o_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm d_7;
    d_7 = t;
    {
      ATerm m_4 = NULL;
      ATerm n_4 = NULL;
      t = term_e_7;
      {
        t = get_config_0(t);
        {
          n_4 = t;
          if(((m_4 != NULL) && (m_4 != n_4)))
            _fail(n_4);
          else
            m_4 = n_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), term_f_7);
        t = geq_0(t);
      }
    }
    t = d_7;
    t = l_59(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_7;
  g_7 = t;
  {
    ATerm q_4 = NULL;
    ATerm r_4 = NULL;
    r_4 = t;
    if(((q_4 != NULL) && (q_4 != r_4)))
      _fail(r_4);
    else
      q_4 = r_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, not_null(q_4));
      t = printnl_0(t);
    }
  }
  t = g_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm x_4 = NULL;
  ATerm z_4 = NULL,a_5 = NULL;
  x_4 = t;
  {
    ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_4)));
    {
      t = table_get_0(t);
      {
        b_5 = t;
        v_4 :
        if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
          {
            c_5 = ATgetFirst((ATermList) b_5);
            f_5 = (ATerm) ATgetNext((ATermList) b_5);
            w_4 :
            if(match_cons(c_5, sym__2))
              {
                d_5 = ATgetArgument(c_5, 0);
                e_5 = ATgetArgument(c_5, 1);
                {
                  if(((z_4 != NULL) && (z_4 != d_5)))
                    _fail(d_5);
                  else
                    z_4 = d_5;
                  if(((a_5 != NULL) && (a_5 != e_5)))
                    _fail(e_5);
                  else
                    a_5 = e_5;
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
    t = not_null(a_5);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(match_cons(m_5, sym__2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      {
        ATerm r_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_5)));
        {
          t = table_get_0(t);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
              s_5 = t;
              k_5 :
              if(match_cons(s_5, sym__2))
                {
                  t_5 = ATgetArgument(s_5, 0);
                  u_5 = ATgetArgument(s_5, 1);
                  {
                    if(((o_5 != NULL) && (o_5 != t_5)))
                      _fail(t_5);
                    else
                      o_5 = t_5;
                    if(((r_5 != NULL) && (r_5 != u_5)))
                      _fail(u_5);
                    else
                      r_5 = u_5;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, q_0);
          }
        }
        t = not_null(r_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm n_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = n_7;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1(t, h_75);
              return(t);
            }
            t = Cons_2(t, h_75, r_0);
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            {
              ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
              z_5 = t;
              y_5 :
              if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
                {
                  a_6 = ATgetFirst((ATermList) z_5);
                  b_6 = (ATerm) ATgetNext((ATermList) z_5);
                  {
                    t = not_null(b_6);
                    t = filter_1(t, h_75);
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
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = g_74(t);
      t = e_6(t);
      return(t);
    }
    t = try_1(t, s_0);
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm x_7;
  x_7 = t;
  {
    ATerm t_0 (ATerm t)
    {
      t = term_z_7;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm e_8 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_8;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, t_0);
  }
  t = x_7;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm f_8;
    f_8 = t;
    {
      ATerm g_6 = NULL;
      ATerm h_6 = NULL;
      t = term_e_7;
      {
        t = get_config_0(t);
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_g_8);
        t = geq_0(t);
      }
    }
    t = f_8;
    t = k_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm k_6 = NULL;
      ATerm l_6 = NULL;
      t = term_e_7;
      {
        t = get_config_0(t);
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_6), term_i_8);
        t = geq_0(t);
      }
    }
    t = h_8;
    t = m_59(t);
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      if(((q_6 != NULL) && (q_6 != r_6)))
        _fail(r_6);
      else
        q_6 = r_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
    {
      y_6 = ATgetFirst((ATermList) x_6);
      z_6 = (ATerm) ATgetNext((ATermList) x_6);
      {
        t = e_70(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm c_7 = NULL;
            c_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), not_null(c_7));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, y_0);
        }
        t = not_null(z_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym__2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      {
        t = not_null(j_7);
        {
          ATerm o_7 (ATerm t)
          {
            ATerm o_8 = t;
            int p_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_7);
                ;
                LocalPopChoice(p_8);
              }
            else
              {
                t = o_8;
                {
                  ATerm t_8 = t;
                  int u_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(k_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, z_0);
                      t = o_7(t);
                      ;
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = t_8;
                      t = Cons_2(t, _id, o_7);
                    }
                }
              }
            return(t);
          }
          t = o_7(t);
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
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym__3))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      w_7 = ATgetArgument(t_7, 2);
      {
        ATerm v_8;
        v_8 = t;
        {
          ATerm a_8 = NULL;
          ATerm b_8 = NULL,d_8 = NULL;
          ATerm c_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(v_7));
          {
            ATerm w_8 = t;
            int x_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(x_8);
              }
            else
              {
                t = w_8;
                t = (ATerm) ATempty;
              }
            {
              c_8 = t;
              if(((b_8 != NULL) && (b_8 != c_8)))
                _fail(c_8);
              else
                b_8 = c_8;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), not_null(w_7));
            {
              t = union_0(t);
              {
                d_8 = t;
                if(((a_8 != NULL) && (a_8 != d_8)))
                  _fail(d_8);
                else
                  a_8 = d_8;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_7), not_null(v_7), not_null(a_8));
            t = set_0(t);
          }
        }
        t = v_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      {
        t = not_null(n_8);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
            q_8 = t;
            j_8 :
            if(match_cons(q_8, sym__2))
              {
                r_8 = ATgetArgument(q_8, 0);
                s_8 = ATgetArgument(q_8, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_8), not_null(r_8), not_null(s_8));
                  t = v_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, a_1);
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
  ATerm z_8 = NULL;
  ATerm b_9 = NULL;
  z_8 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm c_1 (ATerm t)
      {
        t = term_y_8;
        return(t);
      }
      t = debug_1(t, c_1);
      return(t);
    }
    t = if_verbose5_1(t, b_1);
    {
      ATerm a_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(z_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_9;
        }
      {
        ATerm d_9;
        d_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_7, term_e_9, (ATerm) ATinsert(ATempty, not_null(z_8)));
          t = table_put_0(t);
        }
        t = d_9;
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              t = term_f_9;
              return(t);
            }
            t = debug_1(t, e_1);
            return(t);
          }
          t = if_verbose4_1(t, d_1);
          {
            ATerm h_9 = t;
            int i_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(i_9);
              }
            else
              {
                t = h_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm f_1 (ATerm t)
              {
                ATerm g_1 (ATerm t)
                {
                  t = term_j_9;
                  return(t);
                }
                t = say_1(t, g_1);
                return(t);
              }
              t = if_verbose6_1(t, f_1);
              {
                ATerm c_9 = NULL;
                c_9 = t;
                if(((b_9 != NULL) && (b_9 != c_9)))
                  _fail(c_9);
                else
                  b_9 = c_9;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_7, not_null(b_9));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm h_1 (ATerm t)
                      {
                        ATerm i_1 (ATerm t)
                        {
                          t = term_m_9;
                          return(t);
                        }
                        t = say_1(t, i_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, h_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_m_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(z_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm k_1 (ATerm t)
                              {
                                t = term_j_9;
                                return(t);
                              }
                              t = say_1(t, k_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, j_1);
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
ATerm getenv_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_getenv(not_null(g_9));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm n_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_9;
      t = get_config_0(t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = n_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_9;
            t = getenv_0(t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_a_10;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose5_1(t, l_1);
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_g_10;
          t = table_get_0(t);
          ;
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = d_10;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_h_10;
          return(t);
        }
        t = debug_1(t, o_1);
        return(t);
      }
      t = if_verbose5_1(t, n_1);
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
      {
        t = xtc_load_0(t);
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_o_10;
                return(t);
              }
              t = debug_1(t, s_1);
              return(t);
            }
            t = if_verbose5_1(t, r_1);
          }
        }
      }
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm k_9 = NULL;
        ATerm l_9 = NULL;
        l_9 = t;
        if(((k_9 != NULL) && (k_9 != l_9)))
          _fail(l_9);
        else
          k_9 = l_9;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_10), not_null(k_9)), term_s_10);
          {
            t = error_0(t);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_m_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm u_1 (ATerm t)
                    {
                      t = term_w_10;
                      return(t);
                    }
                    t = debug_1(t, u_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, t_1);
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
  ATerm o_9 = NULL;
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9 = NULL;
      p_9 = t;
      {
        if(((o_9 != NULL) && (o_9 != p_9)))
          _fail(p_9);
        else
          o_9 = p_9;
        t = SSL_ReadFromFile(not_null(o_9));
      }
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_a_11;
          return(t);
        }
        t = debug_1(t, v_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_stdin_0))
    {
      ATerm y_9 = NULL;
      ATerm z_9 = NULL;
      t = term_b_11;
      {
        t = ReadFromFile_0(t);
        {
          z_9 = t;
          if(((y_9 != NULL) && (y_9 != z_9)))
            _fail(z_9);
          else
            y_9 = z_9;
        }
      }
      t = not_null(y_9);
    }
  else
    {
      if(match_cons(w_9, sym_FILE_1))
        {
          x_9 = ATgetArgument(w_9, 0);
          {
            ATerm b_10 = NULL;
            ATerm c_10 = NULL;
            t = not_null(x_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  c_10 = t;
                  if(((b_10 != NULL) && (b_10 != c_10)))
                    _fail(c_10);
                  else
                    b_10 = c_10;
                }
              }
            }
            t = not_null(b_10);
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
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym__2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      t = SSL_WriteToBinaryFile(not_null(k_10), not_null(l_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm t_10 = NULL;
  r_10 = t;
  {
    ATerm u_10 = NULL;
    t = xtc_new_file_0(t);
    {
      u_10 = t;
      {
        if(((t_10 != NULL) && (t_10 != u_10)))
          _fail(u_10);
        else
          t_10 = u_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(r_10));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(t_10);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_10));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, z_77, a_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  t = SSL_close_file(not_null(y_10));
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym__2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      {
        ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
        ATerm c_11;
        c_11 = t;
        {
          ATerm o_11 = NULL;
          ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
          t = b_72(t);
          {
            o_11 = t;
            {
              if(((l_11 != NULL) && (l_11 != o_11)))
                _fail(o_11);
              else
                l_11 = o_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_11), not_null(h_11), not_null(i_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_k_11);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(j_11);
                      }
                    else
                      {
                        t = d_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_11 = t;
                      e_11 :
                      if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
                        {
                          q_11 = ATgetFirst((ATermList) p_11);
                          r_11 = (ATerm) ATgetNext((ATermList) p_11);
                          {
                            if(((m_11 != NULL) && (m_11 != q_11)))
                              _fail(q_11);
                            else
                              m_11 = q_11;
                            {
                              if(((n_11 != NULL) && (n_11 != r_11)))
                                _fail(r_11);
                              else
                                n_11 = r_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_11), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(n_11)), (ATerm) ATinsert(CheckATermList(not_null(m_11)), not_null(h_11))));
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
ATerm obsolete_1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    t = p_72(t);
    {
      ATerm w_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = debug_1(t, w_1);
    }
  }
  t = s_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
      b_12 = t;
      w_11 :
      if(match_cons(b_12, sym__2))
        {
          c_12 = ATgetArgument(b_12, 0);
          d_12 = ATgetArgument(b_12, 1);
          {
            if(((a_12 != NULL) && (a_12 != c_12)))
              _fail(c_12);
            else
              a_12 = c_12;
            if(((z_11 != NULL) && (z_11 != d_12)))
              _fail(d_12);
            else
              z_11 = d_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_11);
      t = SSL_open_file(not_null(a_12), not_null(z_11));
    }
  else
    {
      t = u_11;
      {
        ATerm e_12 = NULL;
        ATerm f_12 = NULL;
        ATerm x_1 (ATerm t)
        {
          t = term_x_11;
          return(t);
        }
        t = obsolete_1(t, x_1);
        {
          e_12 = t;
          {
            if(((a_12 != NULL) && (a_12 != e_12)))
              _fail(e_12);
            else
              a_12 = e_12;
            {
              ATerm y_11;
              y_11 = t;
              {
                ATerm g_12 = NULL;
                t = term_h_12;
                {
                  g_12 = t;
                  if(((f_12 != NULL) && (f_12 != g_12)))
                    _fail(g_12);
                  else
                    f_12 = g_12;
                }
              }
              t = y_11;
              t = SSL_open_file(not_null(a_12), not_null(f_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm o_12 = NULL;
  m_12 = t;
  {
    ATerm i_12;
    i_12 = t;
    {
      ATerm p_12 = NULL;
      t = term_j_12;
      {
        p_12 = t;
        if(((o_12 != NULL) && (o_12 != p_12)))
          _fail(p_12);
        else
          o_12 = p_12;
      }
    }
    t = i_12;
    {
      t = SSL_open_file(not_null(m_12), not_null(o_12));
      t = SSL_close_file(not_null(m_12));
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
  ATerm t_12 = NULL;
  ATerm u_12 = NULL;
  t = term_k_12;
  {
    t = new_0(t);
    {
      u_12 = t;
      if(((t_12 != NULL) && (t_12 != u_12)))
        _fail(u_12);
      else
        t_12 = u_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), term_l_12);
    {
      t = conc_strings_0(t);
      {
        ATerm y_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, y_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm y_12 = NULL;
  t = new_file_0(t);
  {
    y_12 = t;
    {
      ATerm n_12;
      n_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_h_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_k_12);
            {
              ATerm z_1 (ATerm t)
              {
                t = term_q_12;
                return(t);
              }
              t = assert_1(t, z_1);
            }
          }
        }
      }
      t = n_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_stdin_0))
    {
      ATerm k_13 = NULL;
      ATerm l_13 = NULL;
      ATerm m_13 = NULL;
      t = xtc_new_file_0(t);
      {
        l_13 = t;
        {
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
          {
            ATerm n_13 = NULL;
            t = n_0(t);
            {
              n_13 = t;
              if(((m_13 != NULL) && (m_13 != n_13)))
                _fail(n_13);
              else
                m_13 = n_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_13)), term_r_12));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, m_0);
                  {
                    t = not_null(k_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_13));
    }
  else
    {
      if(match_cons(i_13, sym_FILE_1))
        {
          j_13 = ATgetArgument(i_13, 0);
          {
            ATerm p_13 = NULL;
            ATerm q_13 = NULL;
            t = not_null(j_13);
            {
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
                    t = n_0(t);
                    {
                      s_13 = t;
                      if(((r_13 != NULL) && (r_13 != s_13)))
                        _fail(s_13);
                      else
                        r_13 = s_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_13)), term_r_12), not_null(j_13)), term_s_12));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, m_0);
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
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_13));
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
  ATerm d_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_stdin_0))
    {
      ATerm f_14 = NULL,h_14 = NULL;
      ATerm v_12;
      v_12 = t;
      {
        ATerm g_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          g_14 = t;
          if(((f_14 != NULL) && (f_14 != g_14)))
            _fail(g_14);
          else
            f_14 = g_14;
        }
      }
      t = v_12;
      {
        ATerm i_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(f_14));
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
        t = not_null(h_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm r_14 = NULL,s_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_FILE_1))
    {
      s_14 = ATgetArgument(r_14, 0);
      {
        ATerm v_14 = NULL,x_14 = NULL;
        ATerm w_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        {
          t = not_null(s_14);
          {
            ATerm z_14 = NULL;
            t = n_57(t);
            {
              x_14 = t;
              {
                ATerm a_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(x_14)), not_null(v_14));
                {
                  a_15 = t;
                  if(((z_14 != NULL) && (z_14 != a_15)))
                    _fail(a_15);
                  else
                    z_14 = a_15;
                }
                t = not_null(z_14);
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
ATerm xtc_transform_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          t = stdin_0(t);
        }
      LocalPopChoice(x_12);
      t = xtc_transform_file_2(t, s_77, t_77);
    }
  else
    {
      t = w_12;
      t = xtc_transform_term_2(t, s_77, t_77);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
    {
      i_15 = ATgetFirst((ATermList) h_15);
      j_15 = (ATerm) ATgetNext((ATermList) h_15);
      t = not_null(j_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm b_13;
        b_13 = t;
        {
          ATerm u_15 = NULL;
          ATerm v_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(r_15));
          {
            ATerm c_13 = t;
            int d_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(d_13);
              }
            else
              {
                t = c_13;
                t = (ATerm) ATempty;
              }
            {
              v_15 = t;
              if(((u_15 != NULL) && (u_15 != v_15)))
                _fail(v_15);
              else
                u_15 = v_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_15), not_null(r_15), not_null(u_15));
            t = table_put_0(t);
          }
        }
        t = b_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  ATerm e_13;
  e_13 = t;
  {
    ATerm f_16 = NULL;
    ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
    t = y_71(t);
    {
      f_16 = t;
      {
        if(((e_16 != NULL) && (e_16 != f_16)))
          _fail(f_16);
        else
          e_16 = f_16;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), term_k_11);
              t = table_get_0(t);
              ;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_16 = t;
            b_16 :
            if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
              {
                h_16 = ATgetFirst((ATermList) g_16);
                i_16 = (ATerm) ATgetNext((ATermList) g_16);
                {
                  if(((d_16 != NULL) && (d_16 != h_16)))
                    _fail(h_16);
                  else
                    d_16 = h_16;
                  {
                    if(((c_16 != NULL) && (c_16 != i_16)))
                      _fail(i_16);
                    else
                      c_16 = i_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_16), term_k_11, not_null(c_16));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_16);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm j_16 = NULL;
                              j_16 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(j_16));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, a_2);
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
  t = e_13;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  t = SSL_remove(not_null(p_16));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  ATerm o_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_63(t);
      t = e_63(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = o_13;
      {
        t = e_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm u_16 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm v_16 = NULL;
    ATerm w_16 = NULL;
    t = x_71(t);
    {
      v_16 = t;
      {
        if(((u_16 != NULL) && (u_16 != v_16)))
          _fail(v_16);
        else
          u_16 = v_16;
        {
          ATerm x_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_k_11);
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = (ATerm) ATempty;
              }
            {
              x_16 = t;
              if(((w_16 != NULL) && (w_16 != x_16)))
                _fail(x_16);
              else
                w_16 = x_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_16), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(w_16)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL;
  ATerm b_2 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  t = begin_scope_1(t, b_2);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm x_13;
      x_13 = t;
      {
        ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_14;
            t = table_get_0(t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          e_17 = t;
          b_17 :
          if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
            {
              f_17 = ATgetFirst((ATermList) e_17);
              g_17 = (ATerm) ATgetNext((ATermList) e_17);
              {
                if(((d_17 != NULL) && (d_17 != f_17)))
                  _fail(f_17);
                else
                  d_17 = f_17;
                {
                  if(((c_17 != NULL) && (c_17 != g_17)))
                    _fail(g_17);
                  else
                    c_17 = g_17;
                  {
                    t = not_null(d_17);
                    {
                      ATerm d_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, d_2);
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
      t = x_13;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = end_scope_1(t, e_2);
      }
      return(t);
    }
    t = restore_always_2(t, c_77, c_2);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm b_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        ATerm k_17 = NULL;
        t = term_s_12;
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
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = b_14;
        t = term_b_11;
      }
    t = f_77(t);
    return(t);
  }
  t = xtc_temp_files_1(t, g_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm n_17 = NULL;
    n_17 = t;
    m_17 :
    if(!(match_string(n_17, "-v")))
      {
        if(!(match_string(n_17, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_k_14;
    t = set_config_0(t);
    t = term_l_14;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_m_14;
    return(t);
  }
  t = Option_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm q_17 = NULL;
    q_17 = t;
    o_17 :
    if(!(match_string(q_17, "-k")))
      {
        if(!(match_string(q_17, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm n_14;
    n_14 = t;
    {
      ATerm r_17 = NULL;
      ATerm s_17 = NULL;
      t = string_to_int_0(t);
      {
        s_17 = t;
        if(((r_17 != NULL) && (r_17 != s_17)))
          _fail(s_17);
        else
          r_17 = s_17;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(r_17));
        t = set_config_0(t);
      }
    }
    t = n_14;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_p_14;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  t = SSL_string_to_int(not_null(v_17));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm d_18 = NULL;
        d_18 = t;
        y_17 :
        if(!(match_string(d_18, "-S")))
          {
            if(!(match_string(d_18, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_b_15;
        t = set_config_0(t);
        t = term_c_15;
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_d_15;
        return(t);
      }
      t = Option_3(t, n_2, p_2, t_2);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              ATerm e_18 = NULL;
              e_18 = t;
              z_17 :
              if(!(match_string(e_18, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm h_18 = NULL;
              ATerm k_15;
              k_15 = t;
              {
                ATerm f_18 = NULL;
                ATerm g_18 = NULL;
                t = string_to_int_0(t);
                {
                  g_18 = t;
                  if(((f_18 != NULL) && (f_18 != g_18)))
                    _fail(g_18);
                  else
                    f_18 = g_18;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(f_18));
                  t = set_config_0(t);
                }
              }
              t = k_15;
              {
                ATerm i_18 = NULL;
                i_18 = t;
                if(((h_18 != NULL) && (h_18 != i_18)))
                  _fail(i_18);
                else
                  h_18 = i_18;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_18));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_l_15;
              return(t);
            }
            t = ArgOption_3(t, v_2, b_3, c_3);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            {
              ATerm d_3 (ATerm t)
              {
                ATerm j_18 = NULL;
                j_18 = t;
                c_18 :
                if(!(match_string(j_18, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_n_15;
                t = set_config_0(t);
                t = term_s_15;
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_t_15;
                return(t);
              }
              t = Option_3(t, d_3, e_3, f_3);
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
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(z_15);
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
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  r_18 = t;
  p_18 :
  if(match_string(r_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
        {
          s_18 = ATgetFirst((ATermList) r_18);
          t_18 = (ATerm) ATgetNext((ATermList) r_18);
          q_18 :
          if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
            {
              u_18 = ATgetFirst((ATermList) t_18);
              v_18 = (ATerm) ATgetNext((ATermList) t_18);
              {
                ATerm a_19 = NULL;
                ATerm a_16;
                a_16 = t;
                {
                  t = not_null(s_18);
                  t = j_0(t);
                }
                t = a_16;
                {
                  ATerm b_19 = NULL;
                  t = not_null(u_18);
                  {
                    t = k_0(t);
                    {
                      b_19 = t;
                      if(((a_19 != NULL) && (a_19 != b_19)))
                        _fail(b_19);
                      else
                        a_19 = b_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_18)), not_null(a_19));
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
  ATerm k_3 (ATerm t)
  {
    ATerm i_19 = NULL;
    i_19 = t;
    f_19 :
    if(!(match_string(i_19, "-i")))
      {
        if(!(match_string(i_19, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm l_19 = NULL;
    ATerm k_16;
    k_16 = t;
    {
      ATerm j_19 = NULL;
      ATerm k_19 = NULL;
      k_19 = t;
      if(((j_19 != NULL) && (j_19 != k_19)))
        _fail(k_19);
      else
        j_19 = k_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(j_19));
        t = set_config_0(t);
      }
    }
    t = k_16;
    {
      ATerm m_19 = NULL;
      m_19 = t;
      if(((l_19 != NULL) && (l_19 != m_19)))
        _fail(m_19);
      else
        l_19 = m_19;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_19));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm input_options_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = general_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_19 = NULL;
  ATerm o_16;
  o_16 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm t_19 = NULL,u_19 = NULL;
      t_19 = t;
      q_19 :
      if(match_cons(t_19, sym_Program_1))
        {
          u_19 = ATgetArgument(t_19, 0);
          if(((s_19 != NULL) && (s_19 != u_19)))
            _fail(u_19);
          else
            s_19 = u_19;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, n_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(s_19)), term_q_16));
      {
        t = printnl_0(t);
        {
          t = term_s_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_16;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATempty, term_t_16));
  {
    t = printnl_0(t);
    {
      t = term_s_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_TicksToSeconds(not_null(c_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_20 = NULL,k_20 = NULL,l_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym__2))
    {
      k_20 = ATgetArgument(h_20, 0);
      l_20 = ATgetArgument(h_20, 1);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_20), not_null(l_20));
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            t = SSL_addr(not_null(k_20), not_null(l_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_70 (ATerm), ATerm r_70 (ATerm))
{
  ATerm a_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = a_17;
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
        x_20 = t;
        w_20 :
        if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
          {
            y_20 = ATgetFirst((ATermList) x_20);
            z_20 = (ATerm) ATgetNext((ATermList) x_20);
            {
              ATerm c_21 = NULL;
              ATerm d_21 = NULL;
              t = not_null(z_20);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  d_21 = t;
                  if(((c_21 != NULL) && (c_21 != d_21)))
                    _fail(d_21);
                  else
                    c_21 = d_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(c_21));
                t = r_70(t);
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
ATerm crush_2 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm))
{
  ATerm k_21 = NULL;
  ATerm r_21 = NULL;
  k_21 = t;
  {
    ATerm s_21 = NULL;
    ATerm u_21 = NULL,z_21 = NULL,a_22 = NULL;
    t = not_null(k_21);
    {
      s_21 = t;
      {
        t = SSL_explode_term(not_null(s_21));
        {
          u_21 = t;
          j_21 :
          if(match_cons(u_21, sym__2))
            {
              z_21 = ATgetArgument(u_21, 0);
              a_22 = ATgetArgument(u_21, 1);
              if(((r_21 != NULL) && (r_21 != a_22)))
                _fail(a_22);
              else
                r_21 = a_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_21);
      t = foldr_2(t, o_69, p_69);
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
      t = term_y_14;
      return(t);
    }
    t = crush_2(t, o_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  n_22 :
  if(match_cons(p_22, sym__2))
    {
      q_22 = ATgetArgument(p_22, 0);
      r_22 = ATgetArgument(p_22, 1);
      {
        ATerm i_17;
        i_17 = t;
        {
          ATerm l_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_22), not_null(r_22));
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = l_17;
              t = SSL_gtr(not_null(q_22), not_null(r_22));
            }
        }
        t = i_17;
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
  ATerm x_22 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
      y_22 = t;
      w_22 :
      if(match_cons(y_22, sym__2))
        {
          z_22 = ATgetArgument(y_22, 0);
          a_23 = ATgetArgument(y_22, 1);
          {
            if(((x_22 != NULL) && (x_22 != z_22)))
              _fail(z_22);
            else
              x_22 = z_22;
            if(((x_22 != NULL) && (x_22 != a_23)))
              _fail(a_23);
            else
              x_22 = a_23;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm w_17;
    w_17 = t;
    {
      ATerm d_23 = NULL;
      ATerm e_23 = NULL;
      t = term_e_7;
      {
        t = get_config_0(t);
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), term_s_16);
        t = geq_0(t);
      }
    }
    t = w_17;
    t = h_59(t);
    return(t);
  }
  t = try_1(t, t_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm i_23 = NULL,k_23 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm j_23 = NULL;
      t = run_time_0(t);
      {
        j_23 = t;
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
      }
    }
    t = x_17;
    {
      ATerm l_23 = NULL;
      t = term_a_18;
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
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_18), not_null(i_23)), term_b_18), not_null(k_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_3);
  {
    t = term_y_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_Version_0))
    {
      ATerm u_23 = NULL,w_23 = NULL;
      ATerm l_18;
      l_18 = t;
      {
        ATerm v_23 = NULL;
        t = SSLgetAnnotations(not_null(s_23));
        {
          v_23 = t;
          if(((u_23 != NULL) && (u_23 != v_23)))
            _fail(v_23);
          else
            u_23 = v_23;
        }
      }
      t = l_18;
      {
        ATerm x_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
        t = not_null(w_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        {
          ATerm o_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_18);
            }
          else
            {
              t = o_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_3);
  t = g_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  t = SSL_table_create(not_null(h_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  {
    ATerm x_18;
    x_18 = t;
    {
      t = term_y_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_18, term_z_18, not_null(l_24));
          t = table_put_0(t);
        }
      }
    }
    t = x_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  t = SSL_table_destroy(not_null(p_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_exit(not_null(x_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  a_25 :
  if(((ATgetType(b_25) == AT_LIST) && ATisEmpty(b_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
        {
          c_25 = ATgetFirst((ATermList) b_25);
          d_25 = (ATerm) ATgetNext((ATermList) b_25);
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
  ATerm c_19;
  c_19 = t;
  {
    ATerm g_25 = NULL;
    ATerm j_25 = NULL;
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm h_25 = NULL;
          ATerm i_25 = NULL;
          i_25 = t;
          if(((h_25 != NULL) && (h_25 != i_25)))
            _fail(i_25);
          else
            h_25 = i_25;
          t = (ATerm) ATinsert(ATempty, not_null(h_25));
        }
      }
    {
      j_25 = t;
      if(((g_25 != NULL) && (g_25 != j_25)))
        _fail(j_25);
      else
        g_25 = j_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_19, not_null(g_25));
      t = printnl_0(t);
    }
  }
  t = c_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  u_25 = t;
  r_25 :
  if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
    {
      s_25 = ATgetFirst((ATermList) u_25);
      t_25 = (ATerm) ATgetNext((ATermList) u_25);
      {
        ATerm x_25 = NULL;
        t = not_null(t_25);
        {
          ATerm h_19;
          h_19 = t;
          {
            ATerm y_25 = NULL,a_26 = NULL,c_26 = NULL;
            ATerm n_19;
            n_19 = t;
            {
              ATerm z_25 = NULL;
              t = i_0(t);
              {
                z_25 = t;
                if(((y_25 != NULL) && (y_25 != z_25)))
                  _fail(z_25);
                else
                  y_25 = z_25;
              }
            }
            t = n_19;
            {
              ATerm b_26 = NULL;
              t = not_null(s_25);
              {
                t = g_0(t);
                {
                  b_26 = t;
                  if(((a_26 != NULL) && (a_26 != b_26)))
                    _fail(b_26);
                  else
                    a_26 = b_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), not_null(a_26));
                {
                  c_26 = t;
                  if(((x_25 != NULL) && (x_25 != c_26)))
                    _fail(c_26);
                  else
                    x_25 = c_26;
                }
              }
            }
          }
          t = h_19;
          {
            ATerm x_3 (ATerm t)
            {
              t = not_null(x_25);
              return(t);
            }
            t = reverse_acc_2(t, g_0, x_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_25) == AT_LIST) && ATisEmpty(u_25)))
        {
          {
            t = term_k_12;
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
  ATerm y_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Program_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      {
        ATerm r_26 = NULL,t_26 = NULL;
        ATerm s_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        {
          t = not_null(o_26);
          {
            ATerm v_26 = NULL;
            t = u_57(t);
            {
              t_26 = t;
              {
                ATerm w_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_26)), not_null(r_26));
                {
                  w_26 = t;
                  if(((v_26 != NULL) && (v_26 != w_26)))
                    _fail(w_26);
                  else
                    v_26 = w_26;
                }
                t = not_null(v_26);
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
  ATerm f_27 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL;
      t = term_a_18;
      {
        t = get_config_0(t);
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
      }
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm a_4 (ATerm t)
          {
            ATerm h_27 = NULL;
            h_27 = t;
            if(((f_27 != NULL) && (f_27 != h_27)))
              _fail(h_27);
            else
              f_27 = h_27;
            return(t);
          }
          t = Program_1(t, a_4);
          return(t);
        }
        t = option_defined_1(t, z_3);
      }
    }
  {
    ATerm b_4 (ATerm t)
    {
      ATerm d_4 (ATerm t)
      {
        t = not_null(f_27);
        return(t);
      }
      t = short_description_1(t, d_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_4);
    {
      t = term_r_19;
      {
        t = echo_0(t);
        {
          t = term_x_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm i_27 = NULL;
                  ATerm j_27 = NULL;
                  j_27 = t;
                  if(((i_27 != NULL) && (i_27 != j_27)))
                    _fail(j_27);
                  else
                    i_27 = j_27;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), term_y_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_4);
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm k_27 = NULL;
                    ATerm l_27 = NULL;
                    ATerm j_4 (ATerm t)
                    {
                      t = not_null(f_27);
                      return(t);
                    }
                    t = long_description_1(t, j_4);
                    {
                      l_27 = t;
                      if(((k_27 != NULL) && (k_27 != l_27)))
                        _fail(l_27);
                      else
                        k_27 = l_27;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_27)), term_z_19);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_4);
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
  ATerm a_20;
  a_20 = t;
  {
    ATerm r_27 = NULL;
    ATerm s_27 = NULL;
    s_27 = t;
    if(((r_27 != NULL) && (r_27 != s_27)))
      _fail(s_27);
    else
      r_27 = s_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATempty, not_null(r_27)));
      t = printnl_0(t);
    }
  }
  t = a_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_72 (ATerm))
{
  ATerm b_20;
  b_20 = t;
  {
    t = j_72(t);
    t = debug_0(t);
  }
  t = b_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_Undefined_1))
    {
      a_28 = ATgetArgument(z_27, 0);
      {
        ATerm d_28 = NULL,f_28 = NULL;
        ATerm e_28 = NULL;
        t = SSLgetAnnotations(not_null(z_27));
        {
          e_28 = t;
          if(((d_28 != NULL) && (d_28 != e_28)))
            _fail(e_28);
          else
            d_28 = e_28;
        }
        {
          t = not_null(a_28);
          {
            ATerm h_28 = NULL;
            t = v_57(t);
            {
              f_28 = t;
              {
                ATerm i_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_28)), not_null(d_28));
                {
                  i_28 = t;
                  if(((h_28 != NULL) && (h_28 != i_28)))
                    _fail(i_28);
                  else
                    h_28 = i_28;
                }
                t = not_null(h_28);
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
ATerm fetch_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm n_28 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_64, _id);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = Cons_2(t, _id, n_28);
      }
    return(t);
  }
  t = n_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_79 (ATerm))
{
  t = fetch_1(t, n_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym_Help_0))
    {
      ATerm u_28 = NULL,w_28 = NULL;
      ATerm f_20;
      f_20 = t;
      {
        ATerm v_28 = NULL;
        t = SSLgetAnnotations(not_null(s_28));
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
      }
      t = f_20;
      {
        ATerm x_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_28));
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
        t = not_null(w_28);
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
  ATerm c_29 = NULL;
  c_29 = t;
  t = SSL_implode_string(not_null(c_29));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
        i_29 = t;
        g_29 :
        if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
          {
            j_29 = ATgetFirst((ATermList) i_29);
            k_29 = (ATerm) ATgetNext((ATermList) i_29);
            {
              t = not_null(j_29);
              {
                ATerm k_4 (ATerm t)
                {
                  t = not_null(k_29);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm b_30 = NULL;
  z_29 = t;
  {
    ATerm c_30 = NULL;
    ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
    t = not_null(z_29);
    {
      c_30 = t;
      {
        t = SSL_explode_term(not_null(c_30));
        {
          e_30 = t;
          x_29 :
          if(match_cons(e_30, sym__2))
            {
              f_30 = ATgetArgument(e_30, 0);
              g_30 = ATgetArgument(e_30, 1);
              y_29 :
              if(match_string(f_30, ""))
                {
                  if(((b_30 != NULL) && (b_30 != g_30)))
                    _fail(g_30);
                  else
                    b_30 = g_30;
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
      t = not_null(b_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm m_30 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_30);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        {
          t = Nil_0(t);
          t = v_64(t);
        }
      }
    return(t);
  }
  t = m_30(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        t = not_null(q_30);
        {
          ATerm l_4 (ATerm t)
          {
            t = not_null(r_30);
            return(t);
          }
          t = at_end_1(t, l_4);
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
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  t = SSL_explode_string(not_null(w_30));
  return(t);
}
ATerm _2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym__2))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      {
        ATerm l_31 = NULL,n_31 = NULL;
        ATerm m_31 = NULL;
        t = SSLgetAnnotations(not_null(f_31));
        {
          m_31 = t;
          if(((l_31 != NULL) && (l_31 != m_31)))
            _fail(m_31);
          else
            l_31 = m_31;
        }
        {
          t = not_null(g_31);
          {
            ATerm p_31 = NULL;
            t = y_50(t);
            {
              n_31 = t;
              {
                t = not_null(h_31);
                {
                  ATerm r_31 = NULL;
                  t = z_50(t);
                  {
                    p_31 = t;
                    {
                      ATerm s_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_31), not_null(p_31)), not_null(l_31));
                      {
                        s_31 = t;
                        if(((r_31 != NULL) && (r_31 != s_31)))
                          _fail(s_31);
                        else
                          r_31 = s_31;
                      }
                      t = not_null(r_31);
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
ATerm printnl_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym__2))
    {
      b_32 = ATgetArgument(a_32, 0);
      c_32 = ATgetArgument(a_32, 1);
      {
        ATerm q_20;
        q_20 = t;
        t = SSL_printnl(not_null(b_32), not_null(c_32));
        t = q_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm r_20;
  r_20 = t;
  {
    ATerm i_32 = NULL,l_32 = NULL;
    ATerm s_20;
    s_20 = t;
    {
      ATerm k_32 = NULL;
      t = i_72(t);
      {
        k_32 = t;
        if(((i_32 != NULL) && (i_32 != k_32)))
          _fail(k_32);
        else
          i_32 = k_32;
      }
    }
    t = s_20;
    {
      ATerm m_32 = NULL;
      m_32 = t;
      if(((l_32 != NULL) && (l_32 != m_32)))
        _fail(m_32);
      else
        l_32 = m_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_32)), not_null(i_32)));
        t = printnl_0(t);
      }
    }
  }
  t = r_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm r_32 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = Cons_2(t, g_64, r_32);
      }
    return(t);
  }
  t = r_32(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  t = SSL_is_string(not_null(t_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = v_20;
      {
        ATerm b_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_4);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = b_21;
            {
              ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
              c_33 = t;
              b_33 :
              if(match_cons(c_33, sym_Path_1))
                {
                  d_33 = ATgetArgument(c_33, 0);
                  t = not_null(d_33);
                }
              else
                {
                  if(match_cons(c_33, sym_Var_1))
                    {
                      d_33 = ATgetArgument(c_33, 0);
                      {
                        t = not_null(d_33);
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm p_4 (ATerm t)
                                {
                                  t = term_h_21;
                                  return(t);
                                }
                                t = debug_1(t, p_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_33, sym_Prefix_2))
                        {
                          d_33 = ATgetArgument(c_33, 0);
                          e_33 = ATgetArgument(c_33, 1);
                          {
                            ATerm j_33 = NULL,l_33 = NULL;
                            ATerm i_21;
                            i_21 = t;
                            {
                              ATerm k_33 = NULL;
                              t = not_null(d_33);
                              {
                                t = eval_config_0(t);
                                {
                                  k_33 = t;
                                  if(((j_33 != NULL) && (j_33 != k_33)))
                                    _fail(k_33);
                                  else
                                    j_33 = k_33;
                                }
                              }
                            }
                            t = i_21;
                            {
                              ATerm m_33 = NULL;
                              t = not_null(e_33);
                              {
                                t = eval_config_0(t);
                                {
                                  m_33 = t;
                                  if(((l_33 != NULL) && (l_33 != m_33)))
                                    _fail(m_33);
                                  else
                                    l_33 = m_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), not_null(l_33));
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
  ATerm h_34 = NULL;
  h_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_21, not_null(h_34));
    {
      t = table_get_0(t);
      {
        ATerm s_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_21;
            m_21 = t;
            {
              ATerm j_34 = NULL;
              ATerm o_34 = NULL;
              o_34 = t;
              if(((j_34 != NULL) && (j_34 != o_34)))
                _fail(o_34);
              else
                j_34 = o_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_21, not_null(h_34), not_null(j_34));
                t = table_put_0(t);
              }
            }
            t = m_21;
          }
          return(t);
        }
        t = try_1(t, s_4);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_62(t);
      ;
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
  ATerm v_34 = NULL,w_34 = NULL,a_35 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym__2))
    {
      w_34 = ATgetArgument(v_34, 0);
      a_35 = ATgetArgument(v_34, 1);
      t = SSL_table_get(not_null(w_34), not_null(a_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_cons(h_35, sym__3))
    {
      i_35 = ATgetArgument(h_35, 0);
      j_35 = ATgetArgument(h_35, 1);
      k_35 = ATgetArgument(h_35, 2);
      {
        ATerm p_21;
        p_21 = t;
        {
          ATerm o_35 = NULL;
          ATerm p_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_35), not_null(j_35));
          {
            ATerm q_21 = t;
            int t_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_21);
              }
            else
              {
                t = q_21;
                t = (ATerm) ATempty;
              }
            {
              p_35 = t;
              if(((o_35 != NULL) && (o_35 != p_35)))
                _fail(p_35);
              else
                o_35 = p_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_35), not_null(j_35), (ATerm) ATinsert(CheckATermList(not_null(o_35)), not_null(k_35)));
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
ATerm register_usage_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm t_35 = NULL;
  ATerm u_35 = NULL;
  t = term_k_12;
  {
    t = s_80(t);
    {
      u_35 = t;
      if(((t_35 != NULL) && (t_35 != u_35)))
        _fail(u_35);
      else
        t_35 = u_35;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, not_null(t_35));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_string(a_36, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
        {
          b_36 = ATgetFirst((ATermList) a_36);
          c_36 = (ATerm) ATgetNext((ATermList) a_36);
          {
            ATerm f_36 = NULL;
            ATerm v_21;
            v_21 = t;
            {
              t = not_null(b_36);
              t = a_0(t);
            }
            t = v_21;
            {
              ATerm g_36 = NULL;
              t = term_k_12;
              {
                t = c_0(t);
                {
                  g_36 = t;
                  if(((f_36 != NULL) && (f_36 != g_36)))
                    _fail(g_36);
                  else
                    f_36 = g_36;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_36)), not_null(f_36));
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
  ATerm t_4 (ATerm t)
  {
    ATerm l_36 = NULL;
    l_36 = t;
    k_36 :
    if(!(match_string(l_36, "--help")))
      {
        if(!(match_string(l_36, "-h")))
          {
            if(!(match_string(l_36, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_x_21;
    {
      t = set_config_0(t);
      t = term_y_21;
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = Option_3(t, t_4, u_4, y_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  n_36 :
  if(((ATgetType(o_36) == AT_LIST) && !(ATisEmpty(o_36))))
    {
      p_36 = ATgetFirst((ATermList) o_36);
      q_36 = (ATerm) ATgetNext((ATermList) o_36);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_36)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_36)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  z_36 :
  if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
    {
      b_37 = ATgetFirst((ATermList) a_37);
      c_37 = (ATerm) ATgetNext((ATermList) a_37);
      {
        ATerm g_37 = NULL,i_37 = NULL;
        ATerm h_37 = NULL;
        t = SSLgetAnnotations(not_null(a_37));
        {
          h_37 = t;
          if(((g_37 != NULL) && (g_37 != h_37)))
            _fail(h_37);
          else
            g_37 = h_37;
        }
        {
          t = not_null(b_37);
          {
            ATerm k_37 = NULL;
            t = h_52(t);
            {
              i_37 = t;
              {
                t = not_null(c_37);
                {
                  ATerm m_37 = NULL;
                  t = i_52(t);
                  {
                    k_37 = t;
                    {
                      ATerm n_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_37)), not_null(i_37)), not_null(g_37));
                      {
                        n_37 = t;
                        if(((m_37 != NULL) && (m_37 != n_37)))
                          _fail(n_37);
                        else
                          m_37 = n_37;
                      }
                      t = not_null(m_37);
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
  ATerm x_37 = NULL;
  x_37 = t;
  w_37 :
  if(((ATgetType(x_37) == AT_LIST) && ATisEmpty(x_37)))
    {
      {
        ATerm z_37 = NULL,b_38 = NULL;
        ATerm c_22;
        c_22 = t;
        {
          ATerm a_38 = NULL;
          t = SSLgetAnnotations(not_null(x_37));
          {
            a_38 = t;
            if(((z_37 != NULL) && (z_37 != a_38)))
              _fail(a_38);
            else
              z_37 = a_38;
          }
        }
        t = c_22;
        {
          ATerm c_38 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_37));
          {
            c_38 = t;
            if(((b_38 != NULL) && (b_38 != c_38)))
              _fail(c_38);
            else
              b_38 = c_38;
          }
          t = not_null(b_38);
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
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym__2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_21, not_null(j_38), not_null(k_38));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm d_22;
  d_22 = t;
  {
    ATerm g_5 (ATerm t)
    {
      t = term_e_22;
      t = q_80(t);
      return(t);
    }
    t = try_1(t, g_5);
  }
  t = d_22;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm s_38 = NULL;
      ATerm f_22;
      f_22 = t;
      {
        ATerm q_38 = NULL;
        ATerm r_38 = NULL;
        r_38 = t;
        if(((q_38 != NULL) && (q_38 != r_38)))
          _fail(r_38);
        else
          q_38 = r_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(q_38));
          t = set_config_0(t);
        }
      }
      t = f_22;
      {
        ATerm t_38 = NULL;
        t_38 = t;
        if(((s_38 != NULL) && (s_38 != t_38)))
          _fail(t_38);
        else
          s_38 = t_38;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_38));
      }
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              {
                t = q_80(t);
                t = Cons_2(t, _id, i_5);
              }
            }
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_5, i_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  ATerm k_22;
  k_22 = t;
  {
    ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
    c_39 = t;
    y_38 :
    if(match_cons(c_39, sym__3))
      {
        d_39 = ATgetArgument(c_39, 0);
        e_39 = ATgetArgument(c_39, 1);
        f_39 = ATgetArgument(c_39, 2);
        {
          if(((z_38 != NULL) && (z_38 != d_39)))
            _fail(d_39);
          else
            z_38 = d_39;
          {
            if(((a_39 != NULL) && (a_39 != e_39)))
              _fail(e_39);
            else
              a_39 = e_39;
            {
              if(((b_39 != NULL) && (b_39 != f_39)))
                _fail(f_39);
              else
                b_39 = f_39;
              t = SSL_table_put(not_null(z_38), not_null(a_39), not_null(b_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm i_39 = NULL;
  ATerm l_22;
  l_22 = t;
  {
    t = term_m_22;
    t = table_put_0(t);
  }
  t = l_22;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm o_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_80(t);
          ;
          LocalPopChoice(s_22);
        }
      else
        {
          t = o_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_5);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22;
            v_22 = t;
            {
              ATerm b_23 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_21;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = b_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_22;
            {
              t = system_usage_0(t);
              {
                t = term_y_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm j_39 = NULL;
                  j_39 = t;
                  if(((i_39 != NULL) && (i_39 != j_39)))
                    _fail(j_39);
                  else
                    i_39 = j_39;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, q_5);
              {
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_39)), term_f_23);
                  return(t);
                }
                t = say_1(t, w_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_s_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_5);
      {
        ATerm g_23;
        g_23 = t;
        {
          t = term_v_19;
          t = table_destroy_0(t);
        }
        t = g_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  t = parse_options_1(t, m_78);
  {
    t = store_options_0(t);
    {
      t = o_78(t);
      {
        ATerm h_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_78);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = h_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  t = option_wrap_4(t, q_78, default_usage_0, _id, r_78);
  return(t);
}
ATerm sdf_to_sig_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm b_40 = NULL;
      ATerm d_6 (ATerm t)
      {
        t = term_p_23;
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        ATerm v_39 = NULL;
        ATerm w_39 = NULL;
        t = term_q_23;
        {
          t = xtc_find_0(t);
          {
            w_39 = t;
            if(((v_39 != NULL) && (v_39 != w_39)))
              _fail(w_39);
            else
              v_39 = w_39;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_39)), term_y_23), term_t_23);
        return(t);
      }
      t = xtc_transform_2(t, d_6, f_6);
      {
        ATerm i_6 (ATerm t)
        {
          t = term_z_23;
          return(t);
        }
        t = xtc_transform_1(t, i_6);
        {
          ATerm j_6 (ATerm t)
          {
            t = term_a_24;
            return(t);
          }
          t = xtc_transform_1(t, j_6);
          {
            ATerm m_6 (ATerm t)
            {
              t = term_b_24;
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              ATerm x_39 = NULL,z_39 = NULL;
              ATerm c_24;
              c_24 = t;
              {
                ATerm y_39 = NULL;
                t = term_d_24;
                {
                  t = xtc_find_0(t);
                  {
                    y_39 = t;
                    if(((x_39 != NULL) && (x_39 != y_39)))
                      _fail(y_39);
                    else
                      x_39 = y_39;
                  }
                }
              }
              t = c_24;
              {
                ATerm a_40 = NULL;
                t = term_e_24;
                {
                  t = xtc_find_0(t);
                  {
                    a_40 = t;
                    if(((z_39 != NULL) && (z_39 != a_40)))
                      _fail(a_40);
                    else
                      z_39 = a_40;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_39)), term_y_23), not_null(x_39)), term_y_23);
              }
              return(t);
            }
            t = xtc_transform_2(t, m_6, n_6);
            {
              ATerm s_6 (ATerm t)
              {
                t = term_f_24;
                return(t);
              }
              t = xtc_transform_1(t, s_6);
              {
                ATerm c_40 = NULL,d_40 = NULL;
                c_40 = t;
                u_39 :
                if(match_cons(c_40, sym_FILE_1))
                  {
                    d_40 = ATgetArgument(c_40, 0);
                    {
                      ATerm f_40 = NULL;
                      t = not_null(d_40);
                      {
                        f_40 = t;
                        if(((b_40 != NULL) && (b_40 != f_40)))
                          _fail(f_40);
                        else
                          b_40 = f_40;
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_24), not_null(b_40));
                  {
                    ATerm t_6 (ATerm t)
                    {
                      t = term_i_24;
                      return(t);
                    }
                    t = xtc_command_1(t, t_6);
                  }
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_input_1(t, c_6);
    return(t);
  }
  t = option_wrap_2(t, input_options_0, x_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sdf_to_sig_0(t);
  return(t);
}
