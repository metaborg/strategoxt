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
Symbol sym_Scopes_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  init_constant_terms();
}
ATerm term_s_22;
ATerm term_h_22;
ATerm term_u_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_r_11;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_w_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
void init_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_x_6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_k_8);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_r_11);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_z_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_z_12);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_z_12);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_p_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_z_12);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, (ATerm) ATempty);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
}
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm q_84 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm l_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_73 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm p_84 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm r_84 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm union_1 (ATerm, ATerm r_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm e_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_file_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm y_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm x_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm v_85 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm x_85 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm output_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm crush_2 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_57 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_77 (ATerm));
ATerm Program_1 (ATerm, ATerm t_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_59 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm s_50 (ATerm), ATerm t_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_59 (ATerm));
ATerm map_1 (ATerm, ATerm u_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm e_58 (ATerm), ATerm f_58 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm g_58 (ATerm), ATerm h_58 (ATerm));
ATerm io_gen_css_boxstyle_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_keys_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_table_keys(not_null(c_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_0 (ATerm t)
      {
        ATerm l_1 = NULL;
        ATerm n_1 = NULL;
        l_1 = t;
        {
          ATerm f_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_0), not_null(l_1));
          {
            t = table_get_0(t);
            {
              f_2 = t;
              if(((n_1 != NULL) && (n_1 != f_2)))
                _fail(f_2);
              else
                n_1 = f_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_1), not_null(n_1));
        }
        return(t);
      }
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm f_6;
    f_6 = t;
    {
      ATerm n_2 = NULL;
      ATerm o_2 = NULL;
      t = term_g_6;
      {
        t = get_config_0(t);
        {
          o_2 = t;
          if(((n_2 != NULL) && (n_2 != o_2)))
            _fail(o_2);
          else
            n_2 = o_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), term_h_6);
        t = geq_0(t);
      }
    }
    t = f_6;
    t = q_84(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_6;
  i_6 = t;
  {
    ATerm r_2 = NULL;
    ATerm s_2 = NULL;
    s_2 = t;
    if(((r_2 != NULL) && (r_2 != s_2)))
      _fail(s_2);
    else
      r_2 = s_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(r_2));
      t = printnl_0(t);
    }
  }
  t = i_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_2 = NULL;
  ATerm a_3 = NULL,b_3 = NULL;
  y_2 = t;
  {
    ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_2)));
    {
      t = table_get_0(t);
      {
        c_3 = t;
        w_2 :
        if(((ATgetType(c_3) == AT_LIST) && !(ATisEmpty(c_3))))
          {
            d_3 = ATgetFirst((ATermList) c_3);
            g_3 = (ATerm) ATgetNext((ATermList) c_3);
            x_2 :
            if(match_cons(d_3, sym__2))
              {
                e_3 = ATgetArgument(d_3, 0);
                f_3 = ATgetArgument(d_3, 1);
                {
                  if(((a_3 != NULL) && (a_3 != e_3)))
                    _fail(e_3);
                  else
                    a_3 = e_3;
                  if(((b_3 != NULL) && (b_3 != f_3)))
                    _fail(f_3);
                  else
                    b_3 = f_3;
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
    t = not_null(b_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm s_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_3)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
              t_3 = t;
              l_3 :
              if(match_cons(t_3, sym__2))
                {
                  u_3 = ATgetArgument(t_3, 0);
                  v_3 = ATgetArgument(t_3, 1);
                  {
                    if(((p_3 != NULL) && (p_3 != u_3)))
                      _fail(u_3);
                    else
                      p_3 = u_3;
                    if(((s_3 != NULL) && (s_3 != v_3)))
                      _fail(v_3);
                    else
                      s_3 = v_3;
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
        t = not_null(s_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm q_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_6);
    }
  else
    {
      t = q_6;
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = filter_1(t, l_71);
              return(t);
            }
            t = Cons_2(t, l_71, n_0);
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            {
              ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
              a_4 = t;
              z_3 :
              if(((ATgetType(a_4) == AT_LIST) && !(ATisEmpty(a_4))))
                {
                  b_4 = ATgetFirst((ATermList) a_4);
                  c_4 = (ATerm) ATgetNext((ATermList) a_4);
                  {
                    t = not_null(c_4);
                    t = filter_1(t, l_71);
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
ATerm repeat_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      t = f_73(t);
      t = f_4(t);
      return(t);
    }
    t = try_1(t, o_0);
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_y_6;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm b_7 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_7;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, p_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm c_7;
    c_7 = t;
    {
      ATerm h_4 = NULL;
      ATerm i_4 = NULL;
      t = term_g_6;
      {
        t = get_config_0(t);
        {
          i_4 = t;
          if(((h_4 != NULL) && (h_4 != i_4)))
            _fail(i_4);
          else
            h_4 = i_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), term_d_7);
        t = geq_0(t);
      }
    }
    t = c_7;
    t = p_84(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm f_7;
    f_7 = t;
    {
      ATerm l_4 = NULL;
      ATerm m_4 = NULL;
      t = term_g_6;
      {
        t = get_config_0(t);
        {
          m_4 = t;
          if(((l_4 != NULL) && (l_4 != m_4)))
            _fail(m_4);
          else
            l_4 = m_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_i_7);
        t = geq_0(t);
      }
    }
    t = f_7;
    t = r_84(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym__2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      if(((r_4 != NULL) && (r_4 != s_4)))
        _fail(s_4);
      else
        r_4 = s_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
    {
      z_4 = ATgetFirst((ATermList) y_4);
      a_5 = (ATerm) ATgetNext((ATermList) y_4);
      {
        t = w_69(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm d_5 = NULL;
            d_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), not_null(d_5));
              t = v_69(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(a_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        t = not_null(k_5);
        {
          ATerm p_5 (ATerm t)
          {
            ATerm j_7 = t;
            int k_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_5);
                LocalPopChoice(k_7);
              }
            else
              {
                t = j_7;
                {
                  ATerm l_7 = t;
                  int n_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(l_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_69, t_0);
                      t = p_5(t);
                      LocalPopChoice(n_7);
                    }
                  else
                    {
                      t = l_7;
                      t = Cons_2(t, _id, p_5);
                    }
                }
              }
            return(t);
          }
          t = p_5(t);
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
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__3))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      x_5 = ATgetArgument(u_5, 2);
      {
        ATerm q_7;
        q_7 = t;
        {
          ATerm b_6 = NULL;
          ATerm c_6 = NULL,e_6 = NULL;
          ATerm d_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), not_null(w_5));
          {
            ATerm r_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(s_7);
              }
            else
              {
                t = r_7;
                t = (ATerm) ATempty;
              }
            {
              d_6 = t;
              if(((c_6 != NULL) && (c_6 != d_6)))
                _fail(d_6);
              else
                c_6 = d_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(x_5));
            {
              t = union_0(t);
              {
                e_6 = t;
                if(((b_6 != NULL) && (b_6 != e_6)))
                  _fail(e_6);
                else
                  b_6 = e_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_5), not_null(w_5), not_null(b_6));
            t = set_0(t);
          }
        }
        t = q_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  m_6 = t;
  l_6 :
  if(match_cons(m_6, sym__2))
    {
      n_6 = ATgetArgument(m_6, 0);
      o_6 = ATgetArgument(m_6, 1);
      {
        t = not_null(o_6);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
            r_6 = t;
            k_6 :
            if(match_cons(r_6, sym__2))
              {
                s_6 = ATgetArgument(r_6, 0);
                t_6 = ATgetArgument(r_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_6), not_null(s_6), not_null(t_6));
                  t = e_75(t);
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
  ATerm z_6 = NULL;
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 = NULL;
      a_7 = t;
      {
        if(((z_6 != NULL) && (z_6 != a_7)))
          _fail(a_7);
        else
          z_6 = a_7;
        t = SSL_ReadFromFile(not_null(z_6));
      }
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_w_7;
          return(t);
        }
        t = debug_1(t, v_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_7 = NULL;
  ATerm g_7 = NULL;
  e_7 = t;
  {
    ATerm z_7;
    z_7 = t;
    {
      ATerm h_7 = NULL;
      t = term_a_8;
      {
        h_7 = t;
        if(((g_7 != NULL) && (g_7 != h_7)))
          _fail(h_7);
        else
          g_7 = h_7;
      }
    }
    t = z_7;
    {
      t = SSL_open_file(not_null(e_7), not_null(g_7));
      t = SSL_close_file(not_null(e_7));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = term_d_8;
        return(t);
      }
      t = debug_1(t, y_0);
      return(t);
    }
    t = if_verbose5_1(t, x_0);
    {
      ATerm e_8 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_7)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_8;
        }
      {
        ATerm j_8;
        j_8 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_6, term_k_8, (ATerm) ATinsert(ATempty, not_null(m_7)));
          t = table_put_0(t);
        }
        t = j_8;
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              t = term_l_8;
              return(t);
            }
            t = debug_1(t, a_1);
            return(t);
          }
          t = if_verbose4_1(t, z_0);
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
                t = (ATerm) ATempty;
              }
            {
              ATerm b_1 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  t = term_o_8;
                  return(t);
                }
                t = say_1(t, c_1);
                return(t);
              }
              t = if_verbose6_1(t, b_1);
              {
                ATerm p_7 = NULL;
                p_7 = t;
                if(((o_7 != NULL) && (o_7 != p_7)))
                  _fail(p_7);
                else
                  o_7 = p_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(o_7));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm d_1 (ATerm t)
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = term_r_8;
                          return(t);
                        }
                        t = say_1(t, e_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, d_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_p_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_7)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm f_1 (ATerm t)
                            {
                              ATerm g_1 (ATerm t)
                              {
                                t = term_o_8;
                                return(t);
                              }
                              t = say_1(t, g_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, f_1);
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
  ATerm t_7 = NULL;
  t_7 = t;
  t = SSL_getenv(not_null(t_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_8;
      t = get_config_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_9;
            t = getenv_0(t);
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = term_e_9;
      return(t);
    }
    t = debug_1(t, i_1);
    return(t);
  }
  t = if_verbose5_1(t, h_1);
  {
    ATerm j_9;
    j_9 = t;
    {
      ATerm k_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_9;
          t = table_get_0(t);
          LocalPopChoice(l_9);
        }
      else
        {
          t = k_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_9;
    {
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_n_9;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, j_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_q_9;
          return(t);
        }
        t = debug_1(t, o_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
      {
        t = xtc_load_0(t);
        {
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = term_q_9;
                return(t);
              }
              t = debug_1(t, q_1);
              return(t);
            }
            t = if_verbose5_1(t, p_1);
          }
        }
      }
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm x_7 = NULL;
        ATerm y_7 = NULL;
        y_7 = t;
        if(((x_7 != NULL) && (x_7 != y_7)))
          _fail(y_7);
        else
          x_7 = y_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), not_null(x_7)), term_w_9);
          {
            t = error_0(t);
            {
              ATerm r_1 (ATerm t)
              {
                t = term_p_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm s_1 (ATerm t)
                    {
                      t = term_d_10;
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
ATerm xtc_find_file_0 (ATerm t)
{
  ATerm b_8 = NULL;
  ATerm c_8 = NULL;
  t = xtc_find_0(t);
  {
    c_8 = t;
    if(((b_8 != NULL) && (b_8 != c_8)))
      _fail(c_8);
    else
      b_8 = c_8;
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_8));
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym__2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      t = SSL_copy(not_null(h_8), not_null(i_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_stderr_0))
    {
      ATerm s_8 = NULL,u_8 = NULL;
      ATerm f_10;
      f_10 = t;
      {
        ATerm t_8 = NULL;
        t = SSLgetAnnotations(not_null(q_8));
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
      }
      t = f_10;
      {
        ATerm v_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(s_8));
        {
          v_8 = t;
          if(((u_8 != NULL) && (u_8 != v_8)))
            _fail(v_8);
          else
            u_8 = v_8;
        }
        t = not_null(u_8);
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
  ATerm d_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_stdout_0))
    {
      ATerm f_9 = NULL,h_9 = NULL;
      ATerm g_10;
      g_10 = t;
      {
        ATerm g_9 = NULL;
        t = SSLgetAnnotations(not_null(d_9));
        {
          g_9 = t;
          if(((f_9 != NULL) && (f_9 != g_9)))
            _fail(g_9);
          else
            f_9 = g_9;
        }
      }
      t = g_10;
      {
        ATerm i_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(f_9));
        {
          i_9 = t;
          if(((h_9 != NULL) && (h_9 != i_9)))
            _fail(i_9);
          else
            h_9 = i_9;
        }
        t = not_null(h_9);
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
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_FILE_1))
    {
      v_9 = ATgetArgument(u_9, 0);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_9 = NULL;
            ATerm y_9 = NULL;
            t = m_0(t);
            {
              y_9 = t;
              {
                if(((x_9 != NULL) && (x_9 != y_9)))
                  _fail(y_9);
                else
                  x_9 = y_9;
                {
                  ATerm j_10 = t;
                  int k_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(k_10);
                    }
                  else
                    {
                      t = j_10;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(x_9));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_9));
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm l_10 = t;
              int m_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL;
                  ATerm b_10 = NULL;
                  t = m_0(t);
                  {
                    b_10 = t;
                    {
                      if(((a_10 != NULL) && (a_10 != b_10)))
                        _fail(b_10);
                      else
                        a_10 = b_10;
                      {
                        ATerm r_10 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm s_10 = t;
                            int t_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(t_10);
                              }
                            else
                              {
                                t = s_10;
                                {
                                  ATerm u_10 = t;
                                  int z_10 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(z_10);
                                    }
                                  else
                                    {
                                      t = u_10;
                                      {
                                        ATerm c_10 = NULL;
                                        c_10 = t;
                                        if(((v_9 != NULL) && (v_9 != c_10)))
                                          _fail(c_10);
                                        else
                                          v_9 = c_10;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = r_10;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(a_10));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_9));
                  LocalPopChoice(m_10);
                }
              else
                {
                  t = l_10;
                  {
                    ATerm e_10 = NULL;
                    t = m_0(t);
                    {
                      e_10 = t;
                      if(((v_9 != NULL) && (v_9 != e_10)))
                        _fail(e_10);
                      else
                        v_9 = e_10;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_9));
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      t = not_null(q_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym__2))
    {
      x_10 = ATgetArgument(w_10, 0);
      y_10 = ATgetArgument(w_10, 1);
      {
        ATerm a_11;
        a_11 = t;
        {
          ATerm b_11 = NULL;
          ATerm c_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(y_10));
          {
            ATerm d_11 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_11);
              }
            else
              {
                t = d_11;
                t = (ATerm) ATempty;
              }
            {
              c_11 = t;
              if(((b_11 != NULL) && (b_11 != c_11)))
                _fail(c_11);
              else
                b_11 = c_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_10), not_null(y_10), not_null(b_11));
            t = table_put_0(t);
          }
        }
        t = a_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  ATerm f_11;
  f_11 = t;
  {
    ATerm m_11 = NULL;
    ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
    t = y_74(t);
    {
      m_11 = t;
      {
        if(((l_11 != NULL) && (l_11 != m_11)))
          _fail(m_11);
        else
          l_11 = m_11;
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_r_11);
              t = table_get_0(t);
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_11 = t;
            i_11 :
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
                    if(((j_11 != NULL) && (j_11 != p_11)))
                      _fail(p_11);
                    else
                      j_11 = p_11;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_11), term_r_11, not_null(j_11));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_11);
                          {
                            ATerm t_1 (ATerm t)
                            {
                              ATerm q_11 = NULL;
                              q_11 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(q_11));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_1);
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
  t = f_11;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  t = SSL_remove(not_null(w_11));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm))
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_63(t);
      t = l_63(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        t = l_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm b_12 = NULL;
  ATerm u_11;
  u_11 = t;
  {
    ATerm c_12 = NULL;
    ATerm d_12 = NULL;
    t = x_74(t);
    {
      c_12 = t;
      {
        if(((b_12 != NULL) && (b_12 != c_12)))
          _fail(c_12);
        else
          b_12 = c_12;
        {
          ATerm e_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), term_r_11);
          {
            ATerm v_11 = t;
            int x_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_11);
              }
            else
              {
                t = v_11;
                t = (ATerm) ATempty;
              }
            {
              e_12 = t;
              if(((d_12 != NULL) && (d_12 != e_12)))
                _fail(e_12);
              else
                d_12 = e_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_12), term_r_11, (ATerm) ATinsert(CheckATermList(not_null(d_12)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_11;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL;
  ATerm u_1 (ATerm t)
  {
    t = term_y_11;
    return(t);
  }
  t = begin_scope_1(t, u_1);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm z_11;
      z_11 = t;
      {
        ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
        ATerm a_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_12;
            t = table_get_0(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = a_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_12 = t;
          i_12 :
          if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
            {
              m_12 = ATgetFirst((ATermList) l_12);
              n_12 = (ATerm) ATgetNext((ATermList) l_12);
              {
                if(((k_12 != NULL) && (k_12 != m_12)))
                  _fail(m_12);
                else
                  k_12 = m_12;
                {
                  if(((j_12 != NULL) && (j_12 != n_12)))
                    _fail(n_12);
                  else
                    j_12 = n_12;
                  {
                    t = not_null(k_12);
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, w_1);
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
      t = z_11;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_y_11;
          return(t);
        }
        t = end_scope_1(t, x_1);
      }
      return(t);
    }
    t = restore_always_2(t, v_85, v_1);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = x_85(t);
    {
      ATerm z_1 (ATerm t)
      {
        ATerm h_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_12;
            t = get_config_0(t);
            LocalPopChoice(o_12);
          }
        else
          {
            t = h_12;
            t = term_w_12;
          }
        return(t);
      }
      t = copy_to_1(t, z_1);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, y_1);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm q_12 = NULL;
    q_12 = t;
    p_12 :
    if(!(match_string(q_12, "-v")))
      {
        if(!(match_string(q_12, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_a_13;
    t = set_config_0(t);
    t = term_d_13;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  t = Option_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm t_12 = NULL;
    t_12 = t;
    r_12 :
    if(!(match_string(t_12, "-k")))
      {
        if(!(match_string(t_12, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm n_13;
    n_13 = t;
    {
      ATerm u_12 = NULL;
      ATerm v_12 = NULL;
      t = string_to_int_0(t);
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(u_12));
        t = set_config_0(t);
      }
    }
    t = n_13;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_p_13;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, g_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  t = SSL_string_to_int(not_null(y_12));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm g_13 = NULL;
        g_13 = t;
        b_13 :
        if(!(match_string(g_13, "-S")))
          {
            if(!(match_string(g_13, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_a_14;
        t = set_config_0(t);
        t = term_b_14;
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_e_14;
        return(t);
      }
      t = Option_3(t, h_2, i_2, j_2);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm h_13 = NULL;
              h_13 = t;
              c_13 :
              if(!(match_string(h_13, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              ATerm k_13 = NULL;
              ATerm i_14;
              i_14 = t;
              {
                ATerm i_13 = NULL;
                ATerm j_13 = NULL;
                t = string_to_int_0(t);
                {
                  j_13 = t;
                  if(((i_13 != NULL) && (i_13 != j_13)))
                    _fail(j_13);
                  else
                    i_13 = j_13;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(i_13));
                  t = set_config_0(t);
                }
              }
              t = i_14;
              {
                ATerm l_13 = NULL;
                l_13 = t;
                if(((k_13 != NULL) && (k_13 != l_13)))
                  _fail(l_13);
                else
                  k_13 = l_13;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_13));
              }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = ArgOption_3(t, k_2, l_2, m_2);
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm p_2 (ATerm t)
              {
                ATerm m_13 = NULL;
                m_13 = t;
                f_13 :
                if(!(match_string(m_13, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                t = term_q_14;
                t = set_config_0(t);
                t = term_t_14;
                return(t);
              }
              ATerm t_2 (ATerm t)
              {
                t = term_y_14;
                return(t);
              }
              t = Option_3(t, p_2, q_2, t_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm z_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = z_14;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  u_13 = t;
  s_13 :
  if(match_string(u_13, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
        {
          v_13 = ATgetFirst((ATermList) u_13);
          w_13 = (ATerm) ATgetNext((ATermList) u_13);
          t_13 :
          if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
            {
              x_13 = ATgetFirst((ATermList) w_13);
              y_13 = (ATerm) ATgetNext((ATermList) w_13);
              {
                ATerm c_14 = NULL;
                ATerm i_15;
                i_15 = t;
                {
                  t = not_null(v_13);
                  t = j_0(t);
                }
                t = i_15;
                {
                  ATerm d_14 = NULL;
                  t = not_null(x_13);
                  {
                    t = k_0(t);
                    {
                      d_14 = t;
                      if(((c_14 != NULL) && (c_14 != d_14)))
                        _fail(d_14);
                      else
                        c_14 = d_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_13)), not_null(c_14));
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
ATerm output_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm k_14 = NULL;
    k_14 = t;
    h_14 :
    if(!(match_string(k_14, "-o")))
      {
        if(!(match_string(k_14, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm n_14 = NULL;
    ATerm j_15;
    j_15 = t;
    {
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      m_14 = t;
      if(((l_14 != NULL) && (l_14 != m_14)))
        _fail(m_14);
      else
        l_14 = m_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(l_14));
        t = set_config_0(t);
      }
    }
    t = j_15;
    {
      ATerm o_14 = NULL;
      o_14 = t;
      if(((n_14 != NULL) && (n_14 != o_14)))
        _fail(o_14);
      else
        n_14 = o_14;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_14));
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, z_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm s_14 = NULL;
          s_14 = t;
          r_14 :
          if(!(match_string(s_14, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_s_15;
          t = set_config_0(t);
          t = term_v_15;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_w_15;
          return(t);
        }
        t = Option_3(t, h_3, i_3, j_3);
      }
    }
  return(t);
}
ATerm output_options_0 (ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = general_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_14 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm w_14 = NULL,x_14 = NULL;
      w_14 = t;
      u_14 :
      if(match_cons(w_14, sym_Program_1))
        {
          x_14 = ATgetArgument(w_14, 0);
          if(((v_14 != NULL) && (v_14 != x_14)))
            _fail(x_14);
          else
            v_14 = x_14;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, k_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_16), not_null(v_14)), term_c_16));
      {
        t = printnl_0(t);
        {
          t = term_j_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_15;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, term_k_16));
  {
    t = printnl_0(t);
    {
      t = term_j_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  t = SSL_TicksToSeconds(not_null(a_15));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_15), not_null(h_15));
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            t = SSL_addr(not_null(g_15), not_null(h_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_70(t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
        o_15 = t;
        n_15 :
        if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
          {
            p_15 = ATgetFirst((ATermList) o_15);
            q_15 = (ATerm) ATgetNext((ATermList) o_15);
            {
              ATerm t_15 = NULL;
              ATerm u_15 = NULL;
              t = not_null(q_15);
              {
                t = foldr_2(t, i_70, j_70);
                {
                  u_15 = t;
                  if(((t_15 != NULL) && (t_15 != u_15)))
                    _fail(u_15);
                  else
                    t_15 = u_15;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(t_15));
                t = j_70(t);
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
ATerm crush_2 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm b_16 = NULL;
  ATerm d_16 = NULL;
  b_16 = t;
  {
    ATerm e_16 = NULL;
    ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
    t = not_null(b_16);
    {
      e_16 = t;
      {
        t = SSL_explode_term(not_null(e_16));
        {
          g_16 = t;
          a_16 :
          if(match_cons(g_16, sym__2))
            {
              h_16 = ATgetArgument(g_16, 0);
              i_16 = ATgetArgument(g_16, 1);
              if(((d_16 != NULL) && (d_16 != i_16)))
                _fail(i_16);
              else
                d_16 = i_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_16);
      t = foldr_2(t, g_69, h_69);
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
    ATerm q_3 (ATerm t)
    {
      t = term_z_13;
      return(t);
    }
    t = crush_2(t, q_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      {
        ATerm t_16;
        t_16 = t;
        {
          ATerm u_16 = t;
          int a_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_16), not_null(q_16));
              LocalPopChoice(a_17);
            }
          else
            {
              t = u_16;
              t = SSL_gtr(not_null(p_16), not_null(q_16));
            }
        }
        t = t_16;
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
  ATerm w_16 = NULL;
  ATerm b_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
      x_16 = t;
      v_16 :
      if(match_cons(x_16, sym__2))
        {
          y_16 = ATgetArgument(x_16, 0);
          z_16 = ATgetArgument(x_16, 1);
          {
            if(((w_16 != NULL) && (w_16 != y_16)))
              _fail(y_16);
            else
              w_16 = y_16;
            if(((w_16 != NULL) && (w_16 != z_16)))
              _fail(z_16);
            else
              w_16 = z_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_17);
    }
  else
    {
      t = b_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm f_17;
    f_17 = t;
    {
      ATerm c_17 = NULL;
      ATerm d_17 = NULL;
      t = term_g_6;
      {
        t = get_config_0(t);
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), term_j_16);
        t = geq_0(t);
      }
    }
    t = f_17;
    t = m_84(t);
    return(t);
  }
  t = try_1(t, r_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm h_17 = NULL,j_17 = NULL;
    ATerm g_17;
    g_17 = t;
    {
      ATerm i_17 = NULL;
      t = run_time_0(t);
      {
        i_17 = t;
        if(((h_17 != NULL) && (h_17 != i_17)))
          _fail(i_17);
        else
          h_17 = i_17;
      }
    }
    t = g_17;
    {
      ATerm k_17 = NULL;
      t = term_l_17;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_17), not_null(h_17)), term_m_17), not_null(j_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_3);
  {
    t = term_z_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_Version_0))
    {
      ATerm t_17 = NULL,v_17 = NULL;
      ATerm o_17;
      o_17 = t;
      {
        ATerm u_17 = NULL;
        t = SSLgetAnnotations(not_null(r_17));
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
      }
      t = o_17;
      {
        ATerm w_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_17));
        {
          w_17 = t;
          if(((v_17 != NULL) && (v_17 != w_17)))
            _fail(w_17);
          else
            v_17 = w_17;
        }
        t = not_null(v_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm p_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = p_17;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_3);
  t = w_57(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  t = SSL_table_create(not_null(b_18));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  {
    ATerm z_17;
    z_17 = t;
    {
      t = term_a_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_c_18, not_null(f_18));
          t = table_put_0(t);
        }
      }
    }
    t = z_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  t = SSL_table_destroy(not_null(j_18));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_exit(not_null(n_18));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(((ATgetType(r_18) == AT_LIST) && ATisEmpty(r_18)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
        {
          s_18 = ATgetFirst((ATermList) r_18);
          t_18 = (ATerm) ATgetNext((ATermList) r_18);
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
  ATerm d_18;
  d_18 = t;
  {
    ATerm x_18 = NULL;
    ATerm b_19 = NULL;
    ATerm e_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = e_18;
        {
          ATerm y_18 = NULL;
          ATerm z_18 = NULL;
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
          t = (ATerm) ATinsert(ATempty, not_null(y_18));
        }
      }
    {
      b_19 = t;
      if(((x_18 != NULL) && (x_18 != b_19)))
        _fail(b_19);
      else
        x_18 = b_19;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_12, not_null(x_18));
      t = printnl_0(t);
    }
  }
  t = d_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  p_19 = t;
  k_19 :
  if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
    {
      n_19 = ATgetFirst((ATermList) p_19);
      o_19 = (ATerm) ATgetNext((ATermList) p_19);
      {
        ATerm t_19 = NULL;
        t = not_null(o_19);
        {
          ATerm h_18;
          h_18 = t;
          {
            ATerm u_19 = NULL,x_19 = NULL,z_19 = NULL;
            ATerm i_18;
            i_18 = t;
            {
              ATerm v_19 = NULL;
              t = i_0(t);
              {
                v_19 = t;
                if(((u_19 != NULL) && (u_19 != v_19)))
                  _fail(v_19);
                else
                  u_19 = v_19;
              }
            }
            t = i_18;
            {
              ATerm y_19 = NULL;
              t = not_null(n_19);
              {
                t = h_0(t);
                {
                  y_19 = t;
                  if(((x_19 != NULL) && (x_19 != y_19)))
                    _fail(y_19);
                  else
                    x_19 = y_19;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_19)), not_null(x_19));
                {
                  z_19 = t;
                  if(((t_19 != NULL) && (t_19 != z_19)))
                    _fail(z_19);
                  else
                    t_19 = z_19;
                }
              }
            }
          }
          t = h_18;
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(t_19);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_19) == AT_LIST) && ATisEmpty(p_19)))
        {
          {
            t = term_z_12;
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
  ATerm d_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Program_1))
    {
      l_20 = ATgetArgument(k_20, 0);
      {
        ATerm o_20 = NULL,v_20 = NULL;
        ATerm p_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
        }
        {
          t = not_null(l_20);
          {
            ATerm x_20 = NULL;
            t = t_56(t);
            {
              v_20 = t;
              {
                ATerm y_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_20)), not_null(o_20));
                {
                  y_20 = t;
                  if(((x_20 != NULL) && (x_20 != y_20)))
                    _fail(y_20);
                  else
                    x_20 = y_20;
                }
                t = not_null(x_20);
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
  ATerm h_21 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      t = term_l_17;
      {
        t = get_config_0(t);
        {
          i_21 = t;
          if(((h_21 != NULL) && (h_21 != i_21)))
            _fail(i_21);
          else
            h_21 = i_21;
        }
      }
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm m_21 = NULL;
            m_21 = t;
            if(((h_21 != NULL) && (h_21 != m_21)))
              _fail(m_21);
            else
              h_21 = m_21;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = option_defined_1(t, e_4);
      }
    }
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        t = not_null(h_21);
        return(t);
      }
      t = short_description_1(t, k_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_4);
    {
      t = term_m_18;
      {
        t = echo_0(t);
        {
          t = term_u_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm o_21 = NULL;
                  ATerm p_21 = NULL;
                  p_21 = t;
                  if(((o_21 != NULL) && (o_21 != p_21)))
                    _fail(p_21);
                  else
                    o_21 = p_21;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_21)), term_v_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_4);
                {
                  ATerm o_4 (ATerm t)
                  {
                    ATerm q_21 = NULL;
                    ATerm r_21 = NULL;
                    ATerm t_4 (ATerm t)
                    {
                      t = not_null(h_21);
                      return(t);
                    }
                    t = long_description_1(t, t_4);
                    {
                      r_21 = t;
                      if(((q_21 != NULL) && (q_21 != r_21)))
                        _fail(r_21);
                      else
                        q_21 = r_21;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_21)), term_w_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_4);
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
  ATerm a_19;
  a_19 = t;
  {
    ATerm x_21 = NULL;
    ATerm y_21 = NULL;
    y_21 = t;
    if(((x_21 != NULL) && (x_21 != y_21)))
      _fail(y_21);
    else
      x_21 = y_21;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, not_null(x_21)));
      t = printnl_0(t);
    }
  }
  t = a_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm c_19;
  c_19 = t;
  {
    t = h_59(t);
    t = debug_0(t);
  }
  t = c_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_56 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_Undefined_1))
    {
      g_22 = ATgetArgument(f_22, 0);
      {
        ATerm j_22 = NULL,l_22 = NULL;
        ATerm k_22 = NULL;
        t = SSLgetAnnotations(not_null(f_22));
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
        {
          t = not_null(g_22);
          {
            ATerm n_22 = NULL;
            t = u_56(t);
            {
              l_22 = t;
              {
                ATerm o_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_22)), not_null(j_22));
                {
                  o_22 = t;
                  if(((n_22 != NULL) && (n_22 != o_22)))
                    _fail(o_22);
                  else
                    n_22 = o_22;
                }
                t = not_null(n_22);
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
ATerm fetch_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm t_22 (ATerm t)
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_64, _id);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = Cons_2(t, _id, t_22);
      }
    return(t);
  }
  t = t_22(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_76 (ATerm))
{
  t = fetch_1(t, l_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Help_0))
    {
      ATerm a_23 = NULL,c_23 = NULL;
      ATerm f_19;
      f_19 = t;
      {
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(y_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
      }
      t = f_19;
      {
        ATerm d_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_23));
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
        t = not_null(c_23);
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
  ATerm i_23 = NULL;
  i_23 = t;
  t = SSL_implode_string(not_null(i_23));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
        n_23 = t;
        m_23 :
        if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
          {
            o_23 = ATgetFirst((ATermList) n_23);
            p_23 = (ATerm) ATgetNext((ATermList) n_23);
            {
              t = not_null(o_23);
              {
                ATerm u_4 (ATerm t)
                {
                  t = not_null(p_23);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm b_24 = NULL;
  z_23 = t;
  {
    ATerm c_24 = NULL;
    ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
    t = not_null(z_23);
    {
      c_24 = t;
      {
        t = SSL_explode_term(not_null(c_24));
        {
          e_24 = t;
          x_23 :
          if(match_cons(e_24, sym__2))
            {
              f_24 = ATgetArgument(e_24, 0);
              g_24 = ATgetArgument(e_24, 1);
              y_23 :
              if(match_string(f_24, ""))
                {
                  if(((b_24 != NULL) && (b_24 != g_24)))
                    _fail(g_24);
                  else
                    b_24 = g_24;
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
      t = not_null(b_24);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm k_24 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_24);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          t = Nil_0(t);
          t = j_64(t);
        }
      }
    return(t);
  }
  t = k_24(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym__2))
    {
      o_24 = ATgetArgument(n_24, 0);
      p_24 = ATgetArgument(n_24, 1);
      {
        t = not_null(o_24);
        {
          ATerm v_4 (ATerm t)
          {
            t = not_null(p_24);
            return(t);
          }
          t = at_end_1(t, v_4);
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
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = SSL_explode_string(not_null(u_24));
  return(t);
}
ATerm _2 (ATerm t, ATerm s_50 (ATerm), ATerm t_50 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym__2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      {
        ATerm j_25 = NULL,l_25 = NULL;
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(d_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
        {
          t = not_null(e_25);
          {
            ATerm n_25 = NULL;
            t = s_50(t);
            {
              l_25 = t;
              {
                t = not_null(f_25);
                {
                  ATerm p_25 = NULL;
                  t = t_50(t);
                  {
                    n_25 = t;
                    {
                      ATerm q_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_25), not_null(n_25)), not_null(j_25));
                      {
                        q_25 = t;
                        if(((p_25 != NULL) && (p_25 != q_25)))
                          _fail(q_25);
                        else
                          p_25 = q_25;
                      }
                      t = not_null(p_25);
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
  ATerm y_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__2))
    {
      a_26 = ATgetArgument(y_25, 0);
      b_26 = ATgetArgument(y_25, 1);
      {
        ATerm q_19;
        q_19 = t;
        t = SSL_printnl(not_null(a_26), not_null(b_26));
        t = q_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm r_19;
  r_19 = t;
  {
    ATerm m_26 = NULL,o_26 = NULL;
    ATerm s_19;
    s_19 = t;
    {
      ATerm n_26 = NULL;
      t = g_59(t);
      {
        n_26 = t;
        if(((m_26 != NULL) && (m_26 != n_26)))
          _fail(n_26);
        else
          m_26 = n_26;
      }
    }
    t = s_19;
    {
      ATerm p_26 = NULL;
      p_26 = t;
      if(((o_26 != NULL) && (o_26 != p_26)))
        _fail(p_26);
      else
        o_26 = p_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_26)), not_null(m_26)));
        t = printnl_0(t);
      }
    }
  }
  t = r_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm w_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = w_19;
        t = Cons_2(t, u_63, s_26);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t = SSL_is_string(not_null(u_26));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_4);
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            {
              ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
              f_27 = t;
              e_27 :
              if(match_cons(f_27, sym_Path_1))
                {
                  g_27 = ATgetArgument(f_27, 0);
                  t = not_null(g_27);
                }
              else
                {
                  if(match_cons(f_27, sym_Var_1))
                    {
                      g_27 = ATgetArgument(f_27, 0);
                      {
                        t = not_null(g_27);
                        {
                          ATerm f_20 = t;
                          int g_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_20);
                            }
                          else
                            {
                              t = f_20;
                              {
                                ATerm b_5 (ATerm t)
                                {
                                  t = term_h_20;
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
                      if(match_cons(f_27, sym_Prefix_2))
                        {
                          g_27 = ATgetArgument(f_27, 0);
                          h_27 = ATgetArgument(f_27, 1);
                          {
                            ATerm m_27 = NULL,o_27 = NULL;
                            ATerm i_20;
                            i_20 = t;
                            {
                              ATerm n_27 = NULL;
                              t = not_null(g_27);
                              {
                                t = eval_config_0(t);
                                {
                                  n_27 = t;
                                  if(((m_27 != NULL) && (m_27 != n_27)))
                                    _fail(n_27);
                                  else
                                    m_27 = n_27;
                                }
                              }
                            }
                            t = i_20;
                            {
                              ATerm p_27 = NULL;
                              t = not_null(h_27);
                              {
                                t = eval_config_0(t);
                                {
                                  p_27 = t;
                                  if(((o_27 != NULL) && (o_27 != p_27)))
                                    _fail(p_27);
                                  else
                                    o_27 = p_27;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), not_null(o_27));
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
  ATerm x_27 = NULL;
  x_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(x_27));
    {
      t = table_get_0(t);
      {
        ATerm c_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_20;
            n_20 = t;
            {
              ATerm z_27 = NULL;
              ATerm a_28 = NULL;
              a_28 = t;
              if(((z_27 != NULL) && (z_27 != a_28)))
                _fail(a_28);
              else
                z_27 = a_28;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_20, not_null(x_27), not_null(z_27));
                t = table_put_0(t);
              }
            }
            t = n_20;
          }
          return(t);
        }
        t = try_1(t, c_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_63(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym__2))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      t = SSL_table_get(not_null(g_28), not_null(h_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_cons(o_28, sym__3))
    {
      p_28 = ATgetArgument(o_28, 0);
      q_28 = ATgetArgument(o_28, 1);
      r_28 = ATgetArgument(o_28, 2);
      {
        ATerm s_20;
        s_20 = t;
        {
          ATerm v_28 = NULL;
          ATerm w_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(q_28));
          {
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
                t = (ATerm) ATempty;
              }
            {
              w_28 = t;
              if(((v_28 != NULL) && (v_28 != w_28)))
                _fail(w_28);
              else
                v_28 = w_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_28), not_null(q_28), (ATerm) ATinsert(CheckATermList(not_null(v_28)), not_null(r_28)));
            t = table_put_0(t);
          }
        }
        t = s_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm a_29 = NULL;
  ATerm b_29 = NULL;
  t = term_z_12;
  {
    t = q_77(t);
    {
      b_29 = t;
      if(((a_29 != NULL) && (a_29 != b_29)))
        _fail(b_29);
      else
        a_29 = b_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, not_null(a_29));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_string(h_29, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
        {
          i_29 = ATgetFirst((ATermList) h_29);
          j_29 = (ATerm) ATgetNext((ATermList) h_29);
          {
            ATerm m_29 = NULL;
            ATerm w_20;
            w_20 = t;
            {
              t = not_null(i_29);
              t = a_0(t);
            }
            t = w_20;
            {
              ATerm n_29 = NULL;
              t = term_z_12;
              {
                t = d_0(t);
                {
                  n_29 = t;
                  if(((m_29 != NULL) && (m_29 != n_29)))
                    _fail(n_29);
                  else
                    m_29 = n_29;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_29)), not_null(m_29));
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
  ATerm e_5 (ATerm t)
  {
    ATerm s_29 = NULL;
    s_29 = t;
    r_29 :
    if(!(match_string(s_29, "--help")))
      {
        if(!(match_string(s_29, "-h")))
          {
            if(!(match_string(s_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_a_21;
    {
      t = set_config_0(t);
      t = term_b_21;
    }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_c_21;
    return(t);
  }
  t = Option_3(t, e_5, f_5, g_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
    {
      w_29 = ATgetFirst((ATermList) v_29);
      x_29 = (ATerm) ATgetNext((ATermList) v_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  g_30 :
  if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
    {
      i_30 = ATgetFirst((ATermList) h_30);
      j_30 = (ATerm) ATgetNext((ATermList) h_30);
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
            t = b_52(t);
            {
              p_30 = t;
              {
                t = not_null(j_30);
                {
                  ATerm t_30 = NULL;
                  t = c_52(t);
                  {
                    r_30 = t;
                    {
                      ATerm u_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_30)), not_null(p_30)), not_null(n_30));
                      {
                        u_30 = t;
                        if(((t_30 != NULL) && (t_30 != u_30)))
                          _fail(u_30);
                        else
                          t_30 = u_30;
                      }
                      t = not_null(t_30);
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
  ATerm e_31 = NULL;
  e_31 = t;
  d_31 :
  if(((ATgetType(e_31) == AT_LIST) && ATisEmpty(e_31)))
    {
      {
        ATerm g_31 = NULL,i_31 = NULL;
        ATerm d_21;
        d_21 = t;
        {
          ATerm h_31 = NULL;
          t = SSLgetAnnotations(not_null(e_31));
          {
            h_31 = t;
            if(((g_31 != NULL) && (g_31 != h_31)))
              _fail(h_31);
            else
              g_31 = h_31;
          }
        }
        t = d_21;
        {
          ATerm j_31 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_31));
          {
            j_31 = t;
            if(((i_31 != NULL) && (i_31 != j_31)))
              _fail(j_31);
            else
              i_31 = j_31;
          }
          t = not_null(i_31);
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
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_20, not_null(q_31), not_null(r_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm e_21;
  e_21 = t;
  {
    ATerm h_5 (ATerm t)
    {
      t = term_f_21;
      t = o_77(t);
      return(t);
    }
    t = try_1(t, h_5);
  }
  t = e_21;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm z_31 = NULL;
      ATerm g_21;
      g_21 = t;
      {
        ATerm x_31 = NULL;
        ATerm y_31 = NULL;
        y_31 = t;
        if(((x_31 != NULL) && (x_31 != y_31)))
          _fail(y_31);
        else
          x_31 = y_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(x_31));
          t = set_config_0(t);
        }
      }
      t = g_21;
      {
        ATerm a_32 = NULL;
        a_32 = t;
        if(((z_31 != NULL) && (z_31 != a_32)))
          _fail(a_32);
        else
          z_31 = a_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_31));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm j_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_21);
            }
          else
            {
              t = l_21;
              {
                t = o_77(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(k_21);
        }
      else
        {
          t = j_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_5, n_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  ATerm s_21;
  s_21 = t;
  {
    ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
    j_32 = t;
    f_32 :
    if(match_cons(j_32, sym__3))
      {
        k_32 = ATgetArgument(j_32, 0);
        l_32 = ATgetArgument(j_32, 1);
        m_32 = ATgetArgument(j_32, 2);
        {
          if(((g_32 != NULL) && (g_32 != k_32)))
            _fail(k_32);
          else
            g_32 = k_32;
          {
            if(((h_32 != NULL) && (h_32 != l_32)))
              _fail(l_32);
            else
              h_32 = l_32;
            {
              if(((i_32 != NULL) && (i_32 != m_32)))
                _fail(m_32);
              else
                i_32 = m_32;
              t = SSL_table_put(not_null(g_32), not_null(h_32), not_null(i_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm p_32 = NULL;
  ATerm t_21;
  t_21 = t;
  {
    t = term_u_21;
    t = table_put_0(t);
  }
  t = t_21;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_77(t);
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_22;
            b_22 = t;
            {
              ATerm c_22 = t;
              int d_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_20;
                  t = get_config_0(t);
                  LocalPopChoice(d_22);
                }
              else
                {
                  t = c_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_22;
            {
              t = system_usage_0(t);
              {
                t = term_z_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            {
              ATerm r_5 (ATerm t)
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm q_32 = NULL;
                  q_32 = t;
                  if(((p_32 != NULL) && (p_32 != q_32)))
                    _fail(q_32);
                  else
                    p_32 = q_32;
                  return(t);
                }
                t = Undefined_1(t, s_5);
                return(t);
              }
              t = option_defined_1(t, r_5);
              {
                ATerm y_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_32)), term_h_22);
                  return(t);
                }
                t = say_1(t, y_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_5);
      {
        ATerm i_22;
        i_22 = t;
        {
          t = term_o_18;
          t = table_destroy_0(t);
        }
        t = i_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm e_58 (ATerm), ATerm f_58 (ATerm))
{
  t = parse_options_1(t, c_58);
  {
    t = store_options_0(t);
    {
      t = e_58(t);
      {
        ATerm m_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_58);
            LocalPopChoice(p_22);
          }
        else
          {
            t = m_22;
            {
              ATerm q_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_58(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_22);
                }
              else
                {
                  t = q_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm g_58 (ATerm), ATerm h_58 (ATerm))
{
  t = option_wrap_4(t, g_58, default_usage_0, _id, h_58);
  return(t);
}
ATerm io_gen_css_boxstyle_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      t = term_s_22;
      t = xtc_find_file_0(t);
      return(t);
    }
    t = xtc_output_1(t, a_6);
    return(t);
  }
  t = option_wrap_2(t, output_options_0, z_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_gen_css_boxstyle_0(t);
  return(t);
}