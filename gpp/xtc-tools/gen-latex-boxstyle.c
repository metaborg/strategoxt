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
ATerm term_q_22;
ATerm term_c_22;
ATerm term_n_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_c_11;
ATerm term_s_10;
ATerm term_i_10;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_a_7;
ATerm term_g_6;
ATerm term_y_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_k_5;
ATerm term_f_5;
ATerm term_d_5;
ATerm term_c_5;
void init_constant_terms (void)
{
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym__2, term_k_5, term_o_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym__2, term_k_5, term_i_7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_i_10);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_c_5, term_q_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_t_11);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_t_11);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_t_11);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__3, term_y_17, term_a_18, (ATerm) ATempty);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv.sty", 0, ATtrue));
}
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_84 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm j_84 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm l_84 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm union_1 (ATerm, ATerm m_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_74 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm s_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_85 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm r_85 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm crush_2 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_57 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_77 (ATerm));
ATerm Program_1 (ATerm, ATerm p_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_59 (ATerm));
ATerm Undefined_1 (ATerm, ATerm q_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm o_50 (ATerm), ATerm p_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_59 (ATerm));
ATerm map_1 (ATerm, ATerm p_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_57 (ATerm), ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm io_gen_latex_boxstyle_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_keys_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_table_keys(not_null(e_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_0 (ATerm t)
      {
        ATerm g_2 = NULL;
        ATerm l_2 = NULL;
        g_2 = t;
        {
          ATerm n_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_1), not_null(g_2));
          {
            t = table_get_0(t);
            {
              n_2 = t;
              if(((l_2 != NULL) && (l_2 != n_2)))
                _fail(n_2);
              else
                l_2 = n_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_2), not_null(l_2));
        }
        return(t);
      }
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_84 (ATerm))
{
  ATerm u_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5;
      a_5 = t;
      {
        ATerm t_2 = NULL;
        ATerm u_2 = NULL;
        t = term_c_5;
        {
          t = get_config_0(t);
          {
            u_2 = t;
            if(((t_2 != NULL) && (t_2 != u_2)))
              _fail(u_2);
            else
              t_2 = u_2;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_2), term_d_5);
          t = geq_0(t);
        }
      }
      t = a_5;
      t = k_84(t);
      LocalPopChoice(z_4);
    }
  else
    {
      t = u_4;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_5;
  e_5 = t;
  {
    ATerm x_2 = NULL;
    ATerm y_2 = NULL;
    y_2 = t;
    if(((x_2 != NULL) && (x_2 != y_2)))
      _fail(y_2);
    else
      x_2 = y_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_5, not_null(x_2));
      t = printnl_0(t);
    }
  }
  t = e_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm e_3 = NULL;
  ATerm g_3 = NULL,h_3 = NULL;
  e_3 = t;
  {
    ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_3)));
    {
      t = table_get_0(t);
      {
        i_3 = t;
        c_3 :
        if(((ATgetType(i_3) == AT_LIST) && !(ATisEmpty(i_3))))
          {
            j_3 = ATgetFirst((ATermList) i_3);
            m_3 = (ATerm) ATgetNext((ATermList) i_3);
            d_3 :
            if(match_cons(j_3, sym__2))
              {
                k_3 = ATgetArgument(j_3, 0);
                l_3 = ATgetArgument(j_3, 1);
                {
                  if(((g_3 != NULL) && (g_3 != k_3)))
                    _fail(k_3);
                  else
                    g_3 = k_3;
                  if(((h_3 != NULL) && (h_3 != l_3)))
                    _fail(l_3);
                  else
                    h_3 = l_3;
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
    t = not_null(h_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        ATerm y_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_3)));
        {
          t = table_get_0(t);
          {
            ATerm c_0 (ATerm t)
            {
              ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
              z_3 = t;
              r_3 :
              if(match_cons(z_3, sym__2))
                {
                  a_4 = ATgetArgument(z_3, 0);
                  b_4 = ATgetArgument(z_3, 1);
                  {
                    if(((v_3 != NULL) && (v_3 != a_4)))
                      _fail(a_4);
                    else
                      v_3 = a_4;
                    if(((y_3 != NULL) && (y_3 != b_4)))
                      _fail(b_4);
                    else
                      y_3 = b_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, c_0);
          }
        }
        t = not_null(y_3);
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
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_5;
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
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm q_5 = t;
  int w_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5;
      x_5 = t;
      {
        ATerm f_4 = NULL;
        ATerm g_4 = NULL;
        t = term_c_5;
        {
          t = get_config_0(t);
          {
            g_4 = t;
            if(((f_4 != NULL) && (f_4 != g_4)))
              _fail(g_4);
            else
              f_4 = g_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), term_y_5);
          t = geq_0(t);
        }
      }
      t = x_5;
      t = j_84(t);
      LocalPopChoice(w_5);
    }
  else
    {
      t = q_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6;
      f_6 = t;
      {
        ATerm j_4 = NULL;
        ATerm k_4 = NULL;
        t = term_c_5;
        {
          t = get_config_0(t);
          {
            k_4 = t;
            if(((j_4 != NULL) && (j_4 != k_4)))
              _fail(k_4);
            else
              j_4 = k_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), term_g_6);
          t = geq_0(t);
        }
      }
      t = f_6;
      t = l_84(t);
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
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
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym__2))
    {
      p_4 = ATgetArgument(o_4, 0);
      q_4 = ATgetArgument(o_4, 1);
      if(((p_4 != NULL) && (p_4 != q_4)))
        _fail(q_4);
      else
        p_4 = q_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
    {
      x_4 = ATgetFirst((ATermList) w_4);
      y_4 = (ATerm) ATgetNext((ATermList) w_4);
      {
        t = r_69(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_5 = NULL;
            b_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(b_5));
              t = q_69(t);
            }
            return(t);
          }
          t = fetch_1(t, n_0);
        }
        t = not_null(y_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym__2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      {
        t = not_null(i_5);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm h_6 = t;
            int n_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_5);
                LocalPopChoice(n_6);
              }
            else
              {
                t = h_6;
                {
                  ATerm o_6 = t;
                  int s_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(j_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_69, o_0);
                      t = n_5(t);
                      LocalPopChoice(s_6);
                    }
                  else
                    {
                      t = o_6;
                      t = Cons_2(t, _id, n_5);
                    }
                }
              }
            return(t);
          }
          t = n_5(t);
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__3))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      v_5 = ATgetArgument(s_5, 2);
      {
        ATerm t_6;
        t_6 = t;
        {
          ATerm z_5 = NULL;
          ATerm a_6 = NULL,c_6 = NULL;
          ATerm b_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(u_5));
          {
            ATerm u_6 = t;
            int v_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_6);
              }
            else
              {
                t = u_6;
                t = (ATerm) ATempty;
              }
            {
              b_6 = t;
              if(((a_6 != NULL) && (a_6 != b_6)))
                _fail(b_6);
              else
                a_6 = b_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), not_null(v_5));
            {
              t = union_1(t, eq_0);
              {
                c_6 = t;
                if(((z_5 != NULL) && (z_5 != c_6)))
                  _fail(c_6);
                else
                  z_5 = c_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_5), not_null(u_5), not_null(z_5));
            t = table_put_0(t);
          }
        }
        t = t_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        t = not_null(m_6);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
            p_6 = t;
            i_6 :
            if(match_cons(p_6, sym__2))
              {
                q_6 = ATgetArgument(p_6, 0);
                r_6 = ATgetArgument(p_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_6), not_null(q_6), not_null(r_6));
                  t = y_74(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_0);
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
  ATerm x_6 = NULL;
  ATerm w_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 = NULL;
      y_6 = t;
      {
        if(((x_6 != NULL) && (x_6 != y_6)))
          _fail(y_6);
        else
          x_6 = y_6;
        t = SSL_ReadFromFile(not_null(x_6));
      }
      LocalPopChoice(z_6);
    }
  else
    {
      t = w_6;
      {
        ATerm q_0 (ATerm t)
        {
          t = term_a_7;
          return(t);
        }
        t = debug_1(t, q_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_7 = NULL;
  ATerm e_7 = NULL;
  c_7 = t;
  {
    ATerm b_7;
    b_7 = t;
    {
      ATerm f_7 = NULL;
      t = term_d_7;
      {
        f_7 = t;
        if(((e_7 != NULL) && (e_7 != f_7)))
          _fail(f_7);
        else
          e_7 = f_7;
      }
    }
    t = b_7;
    {
      t = SSL_open_file(not_null(c_7), not_null(e_7));
      t = SSL_close_file(not_null(c_7));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL;
  k_7 = t;
  {
    ATerm g_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(k_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_7;
      }
    {
      ATerm h_7;
      h_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_5, term_i_7, (ATerm) ATinsert(ATempty, not_null(k_7)));
        t = table_put_0(t);
      }
      t = h_7;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_j_7;
            return(t);
          }
          t = debug_1(t, s_0);
          return(t);
        }
        t = if_verbose4_1(t, r_0);
        {
          ATerm l_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(o_7);
            }
          else
            {
              t = l_7;
              t = (ATerm) ATempty;
            }
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = term_p_7;
                return(t);
              }
              t = say_1(t, u_0);
              return(t);
            }
            t = if_verbose6_1(t, t_0);
            {
              ATerm n_7 = NULL;
              n_7 = t;
              if(((m_7 != NULL) && (m_7 != n_7)))
                _fail(n_7);
              else
                m_7 = n_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(m_7));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = term_q_7;
                        return(t);
                      }
                      t = say_1(t, w_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, v_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_k_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(k_7)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm y_0 (ATerm t)
                            {
                              t = term_p_7;
                              return(t);
                            }
                            t = say_1(t, y_0);
                            return(t);
                          }
                          t = if_verbose4_1(t, x_0);
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
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_getenv(not_null(r_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_7;
      t = get_config_0(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_8;
            t = getenv_0(t);
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = term_c_8;
      return(t);
    }
    t = debug_1(t, a_1);
    return(t);
  }
  t = if_verbose5_1(t, z_0);
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_8;
          t = table_get_0(t);
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = h_8;
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = term_l_8;
          return(t);
        }
        t = debug_1(t, c_1);
        return(t);
      }
      t = if_verbose5_1(t, b_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm m_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
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
        t = xtc_load_0(t);
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = term_u_8;
                return(t);
              }
              t = debug_1(t, g_1);
              return(t);
            }
            t = if_verbose5_1(t, f_1);
          }
        }
      }
      LocalPopChoice(p_8);
    }
  else
    {
      t = m_8;
      {
        ATerm v_7 = NULL;
        ATerm w_7 = NULL;
        w_7 = t;
        if(((v_7 != NULL) && (v_7 != w_7)))
          _fail(w_7);
        else
          v_7 = w_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_8), not_null(v_7)), term_x_8);
          {
            t = error_0(t);
            {
              ATerm h_1 (ATerm t)
              {
                t = term_k_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      t = term_z_8;
                      return(t);
                    }
                    t = debug_1(t, i_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, h_1);
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
  ATerm z_7 = NULL;
  ATerm a_8 = NULL;
  t = xtc_find_0(t);
  {
    a_8 = t;
    if(((z_7 != NULL) && (z_7 != a_8)))
      _fail(a_8);
    else
      z_7 = a_8;
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_7));
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym__2))
    {
      f_8 = ATgetArgument(e_8, 0);
      g_8 = ATgetArgument(e_8, 1);
      t = SSL_copy(not_null(f_8), not_null(g_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_stderr_0))
    {
      ATerm q_8 = NULL,s_8 = NULL;
      ATerm c_9;
      c_9 = t;
      {
        ATerm r_8 = NULL;
        t = SSLgetAnnotations(not_null(o_8));
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
      }
      t = c_9;
      {
        ATerm t_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_8));
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
        t = not_null(s_8);
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
  ATerm b_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_stdout_0))
    {
      ATerm d_9 = NULL,f_9 = NULL;
      ATerm h_9;
      h_9 = t;
      {
        ATerm e_9 = NULL;
        t = SSLgetAnnotations(not_null(b_9));
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
      }
      t = h_9;
      {
        ATerm g_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(d_9));
        {
          g_9 = t;
          if(((f_9 != NULL) && (f_9 != g_9)))
            _fail(g_9);
          else
            f_9 = g_9;
        }
        t = not_null(f_9);
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
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym_FILE_1))
    {
      t_9 = ATgetArgument(s_9, 0);
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL;
            ATerm w_9 = NULL;
            t = m_0(t);
            {
              w_9 = t;
              {
                if(((v_9 != NULL) && (v_9 != w_9)))
                  _fail(w_9);
                else
                  v_9 = w_9;
                {
                  ATerm k_9 = t;
                  int l_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(l_9);
                    }
                  else
                    {
                      t = k_9;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), not_null(v_9));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_9));
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm m_9 = t;
              int n_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_9 = NULL;
                  ATerm z_9 = NULL;
                  t = m_0(t);
                  {
                    z_9 = t;
                    {
                      if(((y_9 != NULL) && (y_9 != z_9)))
                        _fail(z_9);
                      else
                        y_9 = z_9;
                      {
                        ATerm o_9 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm p_9 = t;
                            int q_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(q_9);
                              }
                            else
                              {
                                t = p_9;
                                {
                                  ATerm u_9 = t;
                                  int x_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(x_9);
                                    }
                                  else
                                    {
                                      t = u_9;
                                      {
                                        ATerm a_10 = NULL;
                                        a_10 = t;
                                        if(((t_9 != NULL) && (t_9 != a_10)))
                                          _fail(a_10);
                                        else
                                          t_9 = a_10;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = o_9;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), not_null(y_9));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_9));
                  LocalPopChoice(n_9);
                }
              else
                {
                  t = m_9;
                  {
                    ATerm c_10 = NULL;
                    t = m_0(t);
                    {
                      c_10 = t;
                      if(((t_9 != NULL) && (t_9 != c_10)))
                        _fail(c_10);
                      else
                        t_9 = c_10;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_9));
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
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
    {
      n_10 = ATgetFirst((ATermList) m_10);
      o_10 = (ATerm) ATgetNext((ATermList) m_10);
      t = not_null(o_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      {
        ATerm b_10;
        b_10 = t;
        {
          ATerm z_10 = NULL;
          ATerm a_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(w_10));
          {
            ATerm d_10 = t;
            int e_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_10);
              }
            else
              {
                t = d_10;
                t = (ATerm) ATempty;
              }
            {
              a_11 = t;
              if(((z_10 != NULL) && (z_10 != a_11)))
                _fail(a_11);
              else
                z_10 = a_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_10), not_null(w_10), not_null(z_10));
            t = table_put_0(t);
          }
        }
        t = b_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  ATerm f_10;
  f_10 = t;
  {
    ATerm k_11 = NULL;
    ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
    t = s_74(t);
    {
      k_11 = t;
      {
        if(((j_11 != NULL) && (j_11 != k_11)))
          _fail(k_11);
        else
          j_11 = k_11;
        {
          ATerm g_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), term_i_10);
              t = table_get_0(t);
              LocalPopChoice(h_10);
            }
          else
            {
              t = g_10;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_11 = t;
            g_11 :
            if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
              {
                m_11 = ATgetFirst((ATermList) l_11);
                n_11 = (ATerm) ATgetNext((ATermList) l_11);
                {
                  if(((i_11 != NULL) && (i_11 != m_11)))
                    _fail(m_11);
                  else
                    i_11 = m_11;
                  {
                    if(((h_11 != NULL) && (h_11 != n_11)))
                      _fail(n_11);
                    else
                      h_11 = n_11;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_11), term_i_10, not_null(h_11));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(i_11);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm o_11 = NULL;
                              o_11 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), not_null(o_11));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_1);
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
  t = f_10;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t = SSL_remove(not_null(u_11));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_63(t);
      t = h_63(t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        t = h_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm z_11 = NULL;
  ATerm p_10;
  p_10 = t;
  {
    ATerm a_12 = NULL;
    ATerm b_12 = NULL;
    t = r_74(t);
    {
      a_12 = t;
      {
        if(((z_11 != NULL) && (z_11 != a_12)))
          _fail(a_12);
        else
          z_11 = a_12;
        {
          ATerm c_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), term_i_10);
          {
            ATerm q_10 = t;
            int r_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_10);
              }
            else
              {
                t = q_10;
                t = (ATerm) ATempty;
              }
            {
              c_12 = t;
              if(((b_12 != NULL) && (b_12 != c_12)))
                _fail(c_12);
              else
                b_12 = c_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_11), term_i_10, (ATerm) ATinsert(CheckATermList(not_null(b_12)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = p_10;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = term_s_10;
    return(t);
  }
  t = begin_scope_1(t, k_1);
  {
    ATerm l_1 (ATerm t)
    {
      ATerm x_10;
      x_10 = t;
      {
        ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
        ATerm y_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_11;
            t = table_get_0(t);
            LocalPopChoice(b_11);
          }
        else
          {
            t = y_10;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          j_12 = t;
          g_12 :
          if(((ATgetType(j_12) == AT_LIST) && !(ATisEmpty(j_12))))
            {
              k_12 = ATgetFirst((ATermList) j_12);
              l_12 = (ATerm) ATgetNext((ATermList) j_12);
              {
                if(((i_12 != NULL) && (i_12 != k_12)))
                  _fail(k_12);
                else
                  i_12 = k_12;
                {
                  if(((h_12 != NULL) && (h_12 != l_12)))
                    _fail(l_12);
                  else
                    h_12 = l_12;
                  {
                    t = not_null(i_12);
                    {
                      ATerm m_1 (ATerm t)
                      {
                        ATerm d_11 = t;
                        int e_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(e_11);
                          }
                        else
                          {
                            t = d_11;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, m_1);
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
      t = x_10;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_s_10;
          return(t);
        }
        t = end_scope_1(t, o_1);
      }
      return(t);
    }
    t = restore_always_2(t, p_85, l_1);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    t = r_85(t);
    {
      ATerm q_1 (ATerm t)
      {
        ATerm f_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_11;
            t = get_config_0(t);
            LocalPopChoice(p_11);
          }
        else
          {
            t = f_11;
            t = term_r_11;
          }
        return(t);
      }
      t = copy_to_1(t, q_1);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_1);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm o_12 = NULL;
    o_12 = t;
    n_12 :
    if(!(match_string(o_12, "-v")))
      {
        if(!(match_string(o_12, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_v_11;
    t = set_config_0(t);
    t = term_w_11;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = Option_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm r_12 = NULL;
    r_12 = t;
    p_12 :
    if(!(match_string(r_12, "-k")))
      {
        if(!(match_string(r_12, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm s_12 = NULL;
      ATerm t_12 = NULL;
      t = string_to_int_0(t);
      {
        t_12 = t;
        if(((s_12 != NULL) && (s_12 != t_12)))
          _fail(t_12);
        else
          s_12 = t_12;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(s_12));
        t = set_config_0(t);
      }
    }
    t = y_11;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  t = SSL_string_to_int(not_null(w_12));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm e_13 = NULL;
        e_13 = t;
        z_12 :
        if(!(match_string(e_13, "-S")))
          {
            if(!(match_string(e_13, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_u_12;
        t = set_config_0(t);
        t = term_v_12;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_x_12;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(m_12);
    }
  else
    {
      t = f_12;
      {
        ATerm y_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm f_13 = NULL;
              f_13 = t;
              a_13 :
              if(!(match_string(f_13, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm i_13 = NULL;
              ATerm c_13;
              c_13 = t;
              {
                ATerm g_13 = NULL;
                ATerm h_13 = NULL;
                t = string_to_int_0(t);
                {
                  h_13 = t;
                  if(((g_13 != NULL) && (g_13 != h_13)))
                    _fail(h_13);
                  else
                    g_13 = h_13;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_5, not_null(g_13));
                  t = set_config_0(t);
                }
              }
              t = c_13;
              {
                ATerm j_13 = NULL;
                j_13 = t;
                if(((i_13 != NULL) && (i_13 != j_13)))
                  _fail(j_13);
                else
                  i_13 = j_13;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_13));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_l_13;
              return(t);
            }
            t = ArgOption_3(t, a_2, b_2, c_2);
            LocalPopChoice(b_13);
          }
        else
          {
            t = y_12;
            {
              ATerm d_2 (ATerm t)
              {
                ATerm k_13 = NULL;
                k_13 = t;
                d_13 :
                if(!(match_string(k_13, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_n_13;
                t = set_config_0(t);
                t = term_o_13;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_p_13;
                return(t);
              }
              t = Option_3(t, d_2, e_2, f_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_13 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(c_14);
          }
        else
          {
            t = z_13;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  s_13 = t;
  q_13 :
  if(match_string(s_13, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
        {
          t_13 = ATgetFirst((ATermList) s_13);
          u_13 = (ATerm) ATgetNext((ATermList) s_13);
          r_13 :
          if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
            {
              v_13 = ATgetFirst((ATermList) u_13);
              w_13 = (ATerm) ATgetNext((ATermList) u_13);
              {
                ATerm a_14 = NULL;
                ATerm d_14;
                d_14 = t;
                {
                  t = not_null(t_13);
                  t = j_0(t);
                }
                t = d_14;
                {
                  ATerm b_14 = NULL;
                  t = not_null(v_13);
                  {
                    t = k_0(t);
                    {
                      b_14 = t;
                      if(((a_14 != NULL) && (a_14 != b_14)))
                        _fail(b_14);
                      else
                        a_14 = b_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_13)), not_null(a_14));
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
  ATerm h_2 (ATerm t)
  {
    ATerm i_14 = NULL;
    i_14 = t;
    f_14 :
    if(!(match_string(i_14, "-o")))
      {
        if(!(match_string(i_14, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm l_14 = NULL;
    ATerm e_14;
    e_14 = t;
    {
      ATerm j_14 = NULL;
      ATerm k_14 = NULL;
      k_14 = t;
      if(((j_14 != NULL) && (j_14 != k_14)))
        _fail(k_14);
      else
        j_14 = k_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(j_14));
        t = set_config_0(t);
      }
    }
    t = e_14;
    {
      ATerm m_14 = NULL;
      m_14 = t;
      if(((l_14 != NULL) && (l_14 != m_14)))
        _fail(m_14);
      else
        l_14 = m_14;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_14));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm h_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = h_14;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm q_14 = NULL;
          q_14 = t;
          p_14 :
          if(!(match_string(q_14, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_r_14;
          t = set_config_0(t);
          t = term_w_14;
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_x_14;
          return(t);
        }
        t = Option_3(t, k_2, m_2, o_2);
      }
    }
  return(t);
}
ATerm output_options_0 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      t = general_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm t_14 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm u_14 = NULL,v_14 = NULL;
      u_14 = t;
      s_14 :
      if(match_cons(u_14, sym_Program_1))
        {
          v_14 = ATgetArgument(u_14, 0);
          if(((t_14 != NULL) && (t_14 != v_14)))
            _fail(v_14);
          else
            t_14 = v_14;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, p_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_15), not_null(t_14)), term_g_15));
      {
        t = printnl_0(t);
        {
          t = term_i_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATempty, term_j_15));
  {
    t = printnl_0(t);
    {
      t = term_i_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_TicksToSeconds(not_null(y_14));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym__2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        ATerm k_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_15), not_null(f_15));
            LocalPopChoice(p_15);
          }
        else
          {
            t = k_15;
            t = SSL_addr(not_null(e_15), not_null(f_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm q_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_70(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = q_15;
      {
        ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
        m_15 = t;
        l_15 :
        if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
          {
            n_15 = ATgetFirst((ATermList) m_15);
            o_15 = (ATerm) ATgetNext((ATermList) m_15);
            {
              ATerm r_15 = NULL;
              ATerm s_15 = NULL;
              t = not_null(o_15);
              {
                t = foldr_2(t, d_70, e_70);
                {
                  s_15 = t;
                  if(((r_15 != NULL) && (r_15 != s_15)))
                    _fail(s_15);
                  else
                    r_15 = s_15;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(r_15));
                t = e_70(t);
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
ATerm crush_2 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm))
{
  ATerm z_15 = NULL;
  ATerm b_16 = NULL;
  z_15 = t;
  {
    ATerm c_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
    t = not_null(z_15);
    {
      c_16 = t;
      {
        t = SSL_explode_term(not_null(c_16));
        {
          e_16 = t;
          y_15 :
          if(match_cons(e_16, sym__2))
            {
              f_16 = ATgetArgument(e_16, 0);
              g_16 = ATgetArgument(e_16, 1);
              if(((b_16 != NULL) && (b_16 != g_16)))
                _fail(g_16);
              else
                b_16 = g_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_16);
      t = foldr_2(t, b_69, c_69);
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
    ATerm q_2 (ATerm t)
    {
      t = term_q_12;
      return(t);
    }
    t = crush_2(t, q_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      {
        ATerm u_15;
        u_15 = t;
        {
          ATerm v_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_16), not_null(o_16));
              LocalPopChoice(w_15);
            }
          else
            {
              t = v_15;
              t = SSL_gtr(not_null(n_16), not_null(o_16));
            }
        }
        t = u_15;
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
  ATerm u_16 = NULL;
  ATerm x_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
      v_16 = t;
      t_16 :
      if(match_cons(v_16, sym__2))
        {
          w_16 = ATgetArgument(v_16, 0);
          x_16 = ATgetArgument(v_16, 1);
          {
            if(((u_16 != NULL) && (u_16 != w_16)))
              _fail(w_16);
            else
              u_16 = w_16;
            if(((u_16 != NULL) && (u_16 != x_16)))
              _fail(x_16);
            else
              u_16 = x_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_16);
    }
  else
    {
      t = x_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm d_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16;
      i_16 = t;
      {
        ATerm a_17 = NULL;
        ATerm b_17 = NULL;
        t = term_c_5;
        {
          t = get_config_0(t);
          {
            b_17 = t;
            if(((a_17 != NULL) && (a_17 != b_17)))
              _fail(b_17);
            else
              a_17 = b_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), term_i_15);
          t = geq_0(t);
        }
      }
      t = i_16;
      t = g_84(t);
      LocalPopChoice(h_16);
    }
  else
    {
      t = d_16;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm f_17 = NULL,h_17 = NULL;
    ATerm j_16;
    j_16 = t;
    {
      ATerm g_17 = NULL;
      t = run_time_0(t);
      {
        g_17 = t;
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
      }
    }
    t = j_16;
    {
      ATerm i_17 = NULL;
      t = term_k_16;
      {
        t = get_config_0(t);
        {
          i_17 = t;
          if(((h_17 != NULL) && (h_17 != i_17)))
            _fail(i_17);
          else
            h_17 = i_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), not_null(f_17)), term_p_16), not_null(h_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_2);
  {
    t = term_q_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_Version_0))
    {
      ATerm r_17 = NULL,t_17 = NULL;
      ATerm r_16;
      r_16 = t;
      {
        ATerm s_17 = NULL;
        t = SSLgetAnnotations(not_null(p_17));
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
      }
      t = r_16;
      {
        ATerm u_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_17));
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
        t = not_null(t_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm s_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_16);
      }
    else
      {
        t = s_16;
        {
          ATerm z_16 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_17);
            }
          else
            {
              t = z_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, s_2);
  t = s_57(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  t = SSL_table_create(not_null(z_17));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  {
    ATerm d_17;
    d_17 = t;
    {
      t = term_e_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_j_17, not_null(d_18));
          t = table_put_0(t);
        }
      }
    }
    t = d_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_table_destroy(not_null(h_18));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  t = SSL_exit(not_null(l_18));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(((ATgetType(p_18) == AT_LIST) && ATisEmpty(p_18)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
        {
          q_18 = ATgetFirst((ATermList) p_18);
          r_18 = (ATerm) ATgetNext((ATermList) p_18);
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
  ATerm k_17;
  k_17 = t;
  {
    ATerm v_18 = NULL;
    ATerm y_18 = NULL;
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        {
          ATerm w_18 = NULL;
          ATerm x_18 = NULL;
          x_18 = t;
          if(((w_18 != NULL) && (w_18 != x_18)))
            _fail(x_18);
          else
            w_18 = x_18;
          t = (ATerm) ATinsert(ATempty, not_null(w_18));
        }
      }
    {
      y_18 = t;
      if(((v_18 != NULL) && (v_18 != y_18)))
        _fail(y_18);
      else
        v_18 = y_18;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(v_18));
      t = printnl_0(t);
    }
  }
  t = k_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_19 = NULL,m_19 = NULL,n_19 = NULL;
  n_19 = t;
  i_19 :
  if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
    {
      j_19 = ATgetFirst((ATermList) n_19);
      m_19 = (ATerm) ATgetNext((ATermList) n_19);
      {
        ATerm r_19 = NULL;
        t = not_null(m_19);
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm s_19 = NULL,u_19 = NULL,x_19 = NULL;
            ATerm q_17;
            q_17 = t;
            {
              ATerm t_19 = NULL;
              t = i_0(t);
              {
                t_19 = t;
                if(((s_19 != NULL) && (s_19 != t_19)))
                  _fail(t_19);
                else
                  s_19 = t_19;
              }
            }
            t = q_17;
            {
              ATerm w_19 = NULL;
              t = not_null(j_19);
              {
                t = h_0(t);
                {
                  w_19 = t;
                  if(((u_19 != NULL) && (u_19 != w_19)))
                    _fail(w_19);
                  else
                    u_19 = w_19;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_19)), not_null(u_19));
                {
                  x_19 = t;
                  if(((r_19 != NULL) && (r_19 != x_19)))
                    _fail(x_19);
                  else
                    r_19 = x_19;
                }
              }
            }
          }
          t = n_17;
          {
            ATerm v_2 (ATerm t)
            {
              t = not_null(r_19);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_19) == AT_LIST) && ATisEmpty(n_19)))
        {
          {
            t = term_t_11;
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
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL;
  i_20 = t;
  h_20 :
  if(match_cons(i_20, sym_Program_1))
    {
      j_20 = ATgetArgument(i_20, 0);
      {
        ATerm r_20 = NULL,t_20 = NULL;
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(i_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        {
          t = not_null(j_20);
          {
            ATerm v_20 = NULL;
            t = p_56(t);
            {
              t_20 = t;
              {
                ATerm w_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_20)), not_null(r_20));
                {
                  w_20 = t;
                  if(((v_20 != NULL) && (v_20 != w_20)))
                    _fail(w_20);
                  else
                    v_20 = w_20;
                }
                t = not_null(v_20);
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
  ATerm e_21 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      t = term_k_16;
      {
        t = get_config_0(t);
        {
          i_21 = t;
          if(((e_21 != NULL) && (e_21 != i_21)))
            _fail(i_21);
          else
            e_21 = i_21;
        }
      }
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm k_21 = NULL;
            k_21 = t;
            if(((e_21 != NULL) && (e_21 != k_21)))
              _fail(k_21);
            else
              e_21 = k_21;
            return(t);
          }
          t = Program_1(t, a_3);
          return(t);
        }
        t = fetch_1(t, z_2);
      }
    }
  {
    t = term_x_17;
    {
      t = echo_0(t);
      {
        t = term_b_18;
        {
          t = table_get_0(t);
          {
            ATerm b_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, b_3);
            {
              ATerm f_3 (ATerm t)
              {
                ATerm l_21 = NULL;
                ATerm m_21 = NULL;
                m_21 = t;
                if(((l_21 != NULL) && (l_21 != m_21)))
                  _fail(m_21);
                else
                  l_21 = m_21;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_c_18);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, f_3);
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
  ATerm e_18;
  e_18 = t;
  {
    ATerm r_21 = NULL;
    ATerm s_21 = NULL;
    s_21 = t;
    if(((r_21 != NULL) && (r_21 != s_21)))
      _fail(s_21);
    else
      r_21 = s_21;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATempty, not_null(r_21)));
      t = printnl_0(t);
    }
  }
  t = e_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm f_18;
  f_18 = t;
  {
    t = d_59(t);
    t = debug_0(t);
  }
  t = f_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_56 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_Undefined_1))
    {
      a_22 = ATgetArgument(z_21, 0);
      {
        ATerm d_22 = NULL,f_22 = NULL;
        ATerm e_22 = NULL;
        t = SSLgetAnnotations(not_null(z_21));
        {
          e_22 = t;
          if(((d_22 != NULL) && (d_22 != e_22)))
            _fail(e_22);
          else
            d_22 = e_22;
        }
        {
          t = not_null(a_22);
          {
            ATerm h_22 = NULL;
            t = q_56(t);
            {
              f_22 = t;
              {
                ATerm i_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_22)), not_null(d_22));
                {
                  i_22 = t;
                  if(((h_22 != NULL) && (h_22 != i_22)))
                    _fail(i_22);
                  else
                    h_22 = i_22;
                }
                t = not_null(h_22);
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
ATerm fetch_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm n_22 (ATerm t)
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_63, _id);
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        t = Cons_2(t, _id, n_22);
      }
    return(t);
  }
  t = n_22(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_76 (ATerm))
{
  t = fetch_1(t, f_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym_Help_0))
    {
      ATerm u_22 = NULL,w_22 = NULL;
      ATerm j_18;
      j_18 = t;
      {
        ATerm v_22 = NULL;
        t = SSLgetAnnotations(not_null(s_22));
        {
          v_22 = t;
          if(((u_22 != NULL) && (u_22 != v_22)))
            _fail(v_22);
          else
            u_22 = v_22;
        }
      }
      t = j_18;
      {
        ATerm x_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_22));
        {
          x_22 = t;
          if(((w_22 != NULL) && (w_22 != x_22)))
            _fail(x_22);
          else
            w_22 = x_22;
        }
        t = not_null(w_22);
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
  ATerm c_23 = NULL;
  c_23 = t;
  t = SSL_implode_string(not_null(c_23));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = k_18;
      {
        ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
        h_23 = t;
        g_23 :
        if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
          {
            i_23 = ATgetFirst((ATermList) h_23);
            j_23 = (ATerm) ATgetNext((ATermList) h_23);
            {
              t = not_null(i_23);
              {
                ATerm n_3 (ATerm t)
                {
                  t = not_null(j_23);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_3);
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
  ATerm t_23 = NULL;
  ATerm v_23 = NULL;
  t_23 = t;
  {
    ATerm w_23 = NULL;
    ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
    t = not_null(t_23);
    {
      w_23 = t;
      {
        t = SSL_explode_term(not_null(w_23));
        {
          y_23 = t;
          r_23 :
          if(match_cons(y_23, sym__2))
            {
              z_23 = ATgetArgument(y_23, 0);
              a_24 = ATgetArgument(y_23, 1);
              s_23 :
              if(match_string(z_23, ""))
                {
                  if(((v_23 != NULL) && (v_23 != a_24)))
                    _fail(a_24);
                  else
                    v_23 = a_24;
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
      t = not_null(v_23);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm e_24 (ATerm t)
  {
    ATerm n_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_24);
        LocalPopChoice(s_18);
      }
    else
      {
        t = n_18;
        {
          t = Nil_0(t);
          t = e_64(t);
        }
      }
    return(t);
  }
  t = e_24(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      {
        t = not_null(i_24);
        {
          ATerm o_3 (ATerm t)
          {
            t = not_null(j_24);
            return(t);
          }
          t = at_end_1(t, o_3);
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
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  t = SSL_explode_string(not_null(o_24));
  return(t);
}
ATerm _2 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      {
        ATerm d_25 = NULL,f_25 = NULL;
        ATerm e_25 = NULL;
        t = SSLgetAnnotations(not_null(x_24));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
        {
          t = not_null(y_24);
          {
            ATerm h_25 = NULL;
            t = o_50(t);
            {
              f_25 = t;
              {
                t = not_null(z_24);
                {
                  ATerm j_25 = NULL;
                  t = p_50(t);
                  {
                    h_25 = t;
                    {
                      ATerm k_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_25), not_null(h_25)), not_null(d_25));
                      {
                        k_25 = t;
                        if(((j_25 != NULL) && (j_25 != k_25)))
                          _fail(k_25);
                        else
                          j_25 = k_25;
                      }
                      t = not_null(j_25);
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
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym__2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      {
        ATerm b_19;
        b_19 = t;
        t = SSL_printnl(not_null(t_25), not_null(u_25));
        t = b_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm c_19;
  c_19 = t;
  {
    ATerm d_26 = NULL,i_26 = NULL;
    ATerm d_19;
    d_19 = t;
    {
      ATerm e_26 = NULL;
      t = c_59(t);
      {
        e_26 = t;
        if(((d_26 != NULL) && (d_26 != e_26)))
          _fail(e_26);
        else
          d_26 = e_26;
      }
    }
    t = d_19;
    {
      ATerm j_26 = NULL;
      j_26 = t;
      if(((i_26 != NULL) && (i_26 != j_26)))
        _fail(j_26);
      else
        i_26 = j_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(d_26)));
        t = printnl_0(t);
      }
    }
  }
  t = c_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm m_26 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = Cons_2(t, p_63, m_26);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  t = SSL_is_string(not_null(o_26));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 (ATerm t)
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, p_3);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
              z_26 = t;
              w_26 :
              if(match_cons(z_26, sym_Path_1))
                {
                  a_27 = ATgetArgument(z_26, 0);
                  t = not_null(a_27);
                }
              else
                {
                  if(match_cons(z_26, sym_Var_1))
                    {
                      a_27 = ATgetArgument(z_26, 0);
                      {
                        t = not_null(a_27);
                        {
                          ATerm q_19 = t;
                          int v_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_19);
                            }
                          else
                            {
                              t = q_19;
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = term_y_19;
                                  return(t);
                                }
                                t = debug_1(t, q_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_26, sym_Prefix_2))
                        {
                          a_27 = ATgetArgument(z_26, 0);
                          b_27 = ATgetArgument(z_26, 1);
                          {
                            ATerm g_27 = NULL,i_27 = NULL;
                            ATerm z_19;
                            z_19 = t;
                            {
                              ATerm h_27 = NULL;
                              t = not_null(a_27);
                              {
                                t = eval_config_0(t);
                                {
                                  h_27 = t;
                                  if(((g_27 != NULL) && (g_27 != h_27)))
                                    _fail(h_27);
                                  else
                                    g_27 = h_27;
                                }
                              }
                            }
                            t = z_19;
                            {
                              ATerm j_27 = NULL;
                              t = not_null(b_27);
                              {
                                t = eval_config_0(t);
                                {
                                  j_27 = t;
                                  if(((i_27 != NULL) && (i_27 != j_27)))
                                    _fail(j_27);
                                  else
                                    i_27 = j_27;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(i_27));
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
  ATerm r_27 = NULL;
  r_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_20, not_null(r_27));
    {
      t = table_get_0(t);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_20;
              d_20 = t;
              {
                ATerm t_27 = NULL;
                ATerm u_27 = NULL;
                u_27 = t;
                if(((t_27 != NULL) && (t_27 != u_27)))
                  _fail(u_27);
                else
                  t_27 = u_27;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_20, not_null(r_27), not_null(t_27));
                  t = table_put_0(t);
                }
              }
              t = d_20;
            }
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_62(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym__2))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      t = SSL_table_get(not_null(a_28), not_null(b_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym__3))
    {
      j_28 = ATgetArgument(i_28, 0);
      k_28 = ATgetArgument(i_28, 1);
      l_28 = ATgetArgument(i_28, 2);
      {
        ATerm g_20;
        g_20 = t;
        {
          ATerm p_28 = NULL;
          ATerm q_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), not_null(k_28));
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_20);
              }
            else
              {
                t = k_20;
                t = (ATerm) ATempty;
              }
            {
              q_28 = t;
              if(((p_28 != NULL) && (p_28 != q_28)))
                _fail(q_28);
              else
                p_28 = q_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_28), not_null(k_28), (ATerm) ATinsert(CheckATermList(not_null(p_28)), not_null(l_28)));
            t = table_put_0(t);
          }
        }
        t = g_20;
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
  ATerm u_28 = NULL;
  ATerm v_28 = NULL;
  t = term_t_11;
  {
    t = k_77(t);
    {
      v_28 = t;
      if(((u_28 != NULL) && (u_28 != v_28)))
        _fail(v_28);
      else
        u_28 = v_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_17, term_a_18, not_null(u_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_string(b_29, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
        {
          c_29 = ATgetFirst((ATermList) b_29);
          d_29 = (ATerm) ATgetNext((ATermList) b_29);
          {
            ATerm g_29 = NULL;
            ATerm m_20;
            m_20 = t;
            {
              t = not_null(c_29);
              t = a_0(t);
            }
            t = m_20;
            {
              ATerm h_29 = NULL;
              t = term_t_11;
              {
                t = d_0(t);
                {
                  h_29 = t;
                  if(((g_29 != NULL) && (g_29 != h_29)))
                    _fail(h_29);
                  else
                    g_29 = h_29;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_29)), not_null(g_29));
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
  ATerm w_3 (ATerm t)
  {
    ATerm m_29 = NULL;
    m_29 = t;
    l_29 :
    if(!(match_string(m_29, "--help")))
      {
        if(!(match_string(m_29, "-h")))
          {
            if(!(match_string(m_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_o_20;
    {
      t = set_config_0(t);
      t = term_p_20;
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_q_20;
    return(t);
  }
  t = Option_3(t, w_3, x_3, c_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  o_29 :
  if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
    {
      q_29 = ATgetFirst((ATermList) p_29);
      r_29 = (ATerm) ATgetNext((ATermList) p_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  a_30 :
  if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
    {
      c_30 = ATgetFirst((ATermList) b_30);
      d_30 = (ATerm) ATgetNext((ATermList) b_30);
      {
        ATerm h_30 = NULL,j_30 = NULL;
        ATerm i_30 = NULL;
        t = SSLgetAnnotations(not_null(b_30));
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
        {
          t = not_null(c_30);
          {
            ATerm l_30 = NULL;
            t = x_51(t);
            {
              j_30 = t;
              {
                t = not_null(d_30);
                {
                  ATerm n_30 = NULL;
                  t = y_51(t);
                  {
                    l_30 = t;
                    {
                      ATerm o_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_30)), not_null(j_30)), not_null(h_30));
                      {
                        o_30 = t;
                        if(((n_30 != NULL) && (n_30 != o_30)))
                          _fail(o_30);
                        else
                          n_30 = o_30;
                      }
                      t = not_null(n_30);
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
  ATerm y_30 = NULL;
  y_30 = t;
  x_30 :
  if(((ATgetType(y_30) == AT_LIST) && ATisEmpty(y_30)))
    {
      {
        ATerm a_31 = NULL,c_31 = NULL;
        ATerm u_20;
        u_20 = t;
        {
          ATerm b_31 = NULL;
          t = SSLgetAnnotations(not_null(y_30));
          {
            b_31 = t;
            if(((a_31 != NULL) && (a_31 != b_31)))
              _fail(b_31);
            else
              a_31 = b_31;
          }
        }
        t = u_20;
        {
          ATerm d_31 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_31));
          {
            d_31 = t;
            if(((c_31 != NULL) && (c_31 != d_31)))
              _fail(d_31);
            else
              c_31 = d_31;
          }
          t = not_null(c_31);
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
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym__2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_20, not_null(k_31), not_null(l_31));
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
  ATerm x_20;
  x_20 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_21;
        t = i_77(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
        }
      }
  }
  t = x_20;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm t_31 = NULL;
      ATerm b_21;
      b_21 = t;
      {
        ATerm r_31 = NULL;
        ATerm s_31 = NULL;
        s_31 = t;
        if(((r_31 != NULL) && (r_31 != s_31)))
          _fail(s_31);
        else
          r_31 = s_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_16, not_null(r_31));
          t = set_config_0(t);
        }
      }
      t = b_21;
      {
        ATerm u_31 = NULL;
        u_31 = t;
        if(((t_31 != NULL) && (t_31 != u_31)))
          _fail(u_31);
        else
          t_31 = u_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_31));
      }
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              {
                t = i_77(t);
                t = Cons_2(t, _id, e_4);
              }
            }
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_4, e_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  ATerm h_21;
  h_21 = t;
  {
    ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
    d_32 = t;
    z_31 :
    if(match_cons(d_32, sym__3))
      {
        e_32 = ATgetArgument(d_32, 0);
        f_32 = ATgetArgument(d_32, 1);
        g_32 = ATgetArgument(d_32, 2);
        {
          if(((a_32 != NULL) && (a_32 != e_32)))
            _fail(e_32);
          else
            a_32 = e_32;
          {
            if(((b_32 != NULL) && (b_32 != f_32)))
              _fail(f_32);
            else
              b_32 = f_32;
            {
              if(((c_32 != NULL) && (c_32 != g_32)))
                _fail(g_32);
              else
                c_32 = g_32;
              t = SSL_table_put(not_null(a_32), not_null(b_32), not_null(c_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm j_32 = NULL;
  ATerm j_21;
  j_21 = t;
  {
    t = term_n_21;
    t = table_put_0(t);
  }
  t = j_21;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm o_21 = t;
      int p_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_77(t);
          LocalPopChoice(p_21);
        }
      else
        {
          t = o_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_4);
    {
      ATerm q_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_21;
          u_21 = t;
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_20;
                t = get_config_0(t);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = fetch_1(t, Help_0);
              }
          }
          t = u_21;
          {
            t = system_usage_0(t);
            {
              t = term_q_12;
              t = exit_0(t);
            }
          }
          LocalPopChoice(t_21);
        }
      else
        {
          t = q_21;
          {
            ATerm x_21 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm k_32 = NULL;
                    k_32 = t;
                    if(((j_32 != NULL) && (j_32 != k_32)))
                      _fail(k_32);
                    else
                      j_32 = k_32;
                    return(t);
                  }
                  t = Undefined_1(t, l_4);
                  return(t);
                }
                t = fetch_1(t, i_4);
                {
                  ATerm m_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_32)), term_c_22);
                    return(t);
                  }
                  t = say_1(t, m_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_i_15;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(b_22);
              }
            else
              {
                t = x_21;
                {
                }
              }
          }
        }
      {
        ATerm g_22;
        g_22 = t;
        {
          t = term_y_17;
          t = table_destroy_0(t);
        }
        t = g_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_57 (ATerm), ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  t = parse_options_1(t, y_57);
  {
    t = store_options_0(t);
    {
      t = a_58(t);
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_57);
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm l_22 = t;
              int m_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_58(t);
                  t = report_success_0(t);
                  LocalPopChoice(m_22);
                }
              else
                {
                  t = l_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  t = option_wrap_4(t, c_58, default_usage_0, _id, d_58);
  return(t);
}
ATerm io_gen_latex_boxstyle_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = aterm_output_option_0(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = general_options_0(t);
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      t = term_q_22;
      t = xtc_find_file_0(t);
      return(t);
    }
    t = xtc_output_1(t, t_4);
    return(t);
  }
  t = option_wrap_2(t, r_4, s_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_gen_latex_boxstyle_0(t);
  return(t);
}