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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  init_constant_terms();
}
ATerm term_b_26;
ATerm term_a_26;
ATerm term_n_25;
ATerm term_r_24;
ATerm term_c_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_m_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_i_15;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_w_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_a_11;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_i_6;
ATerm term_d_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_q_5;
void init_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_t_6);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_g_8);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_q_10);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_d_6, term_k_11);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_q_5, term_g_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_k_11);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_k_11);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_k_11);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__3, term_s_20, term_t_20, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm c_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm b_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm d_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm union_1 (ATerm, ATerm z_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm m_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm u_58 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm y_73 (ATerm));
ATerm assert_1 (ATerm, ATerm u_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm h_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm xtc_sglr_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm r_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm q_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm o_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm p_73 (ATerm));
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm crush_2 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_77 (ATerm));
ATerm Program_1 (ATerm, ATerm s_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm a_86 (ATerm));
ATerm map_1 (ATerm, ATerm c_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm s_73 (ATerm));
ATerm io_parse_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_int_to_string(not_null(e_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,y_1 = NULL;
  i_1 = t;
  e_1 :
  if(match_cons(i_1, sym__2))
    {
      j_1 = ATgetArgument(i_1, 0);
      y_1 = ATgetArgument(i_1, 1);
      {
        ATerm m_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(p_5);
          }
        else
          {
            t = m_5;
            t = SSL_subtr(not_null(j_1), not_null(y_1));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm z_2 = NULL;
  ATerm a_3 = NULL,d_3 = NULL;
  ATerm c_3 = NULL;
  t = term_q_5;
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(w_5);
      }
    else
      {
        t = v_5;
        t = term_x_5;
      }
    {
      c_3 = t;
      if(((a_3 != NULL) && (a_3 != c_3)))
        _fail(c_3);
      else
        a_3 = c_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_x_5);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          d_3 = t;
          if(((z_2 != NULL) && (z_2 != d_3)))
            _fail(d_3);
          else
            z_2 = d_3;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_2)), term_q_5);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_y_5;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm c_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_d_6);
      return(t);
    }
    t = if_verbose1_1(t, c_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  t = SSL_table_keys(not_null(h_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm p_3 = NULL;
        ATerm r_3 = NULL;
        p_3 = t;
        {
          ATerm s_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(p_3));
          {
            t = table_get_0(t);
            {
              s_3 = t;
              if(((r_3 != NULL) && (r_3 != s_3)))
                _fail(s_3);
              else
                r_3 = s_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), not_null(r_3));
        }
        return(t);
      }
      t = map_1(t, f_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm e_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6;
      h_6 = t;
      {
        ATerm x_3 = NULL;
        ATerm y_3 = NULL;
        t = term_q_5;
        {
          t = get_config_0(t);
          {
            y_3 = t;
            if(((x_3 != NULL) && (x_3 != y_3)))
              _fail(y_3);
            else
              x_3 = y_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), term_i_6);
          t = geq_0(t);
        }
      }
      t = h_6;
      t = c_59(t);
      LocalPopChoice(g_6);
    }
  else
    {
      t = e_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm j_6;
  j_6 = t;
  {
    ATerm b_4 = NULL;
    ATerm c_4 = NULL;
    c_4 = t;
    if(((b_4 != NULL) && (b_4 != c_4)))
      _fail(c_4);
    else
      b_4 = c_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(b_4));
      t = printnl_0(t);
    }
  }
  t = j_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_4 = NULL;
  ATerm k_4 = NULL,l_4 = NULL;
  i_4 = t;
  {
    ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_4)));
    {
      t = table_get_0(t);
      {
        m_4 = t;
        g_4 :
        if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
          {
            n_4 = ATgetFirst((ATermList) m_4);
            q_4 = (ATerm) ATgetNext((ATermList) m_4);
            h_4 :
            if(match_cons(n_4, sym__2))
              {
                o_4 = ATgetArgument(n_4, 0);
                p_4 = ATgetArgument(n_4, 1);
                {
                  if(((k_4 != NULL) && (k_4 != o_4)))
                    _fail(o_4);
                  else
                    k_4 = o_4;
                  if(((l_4 != NULL) && (l_4 != p_4)))
                    _fail(p_4);
                  else
                    l_4 = p_4;
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
    t = not_null(l_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm c_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_4)));
        {
          t = table_get_0(t);
          {
            ATerm p_0 (ATerm t)
            {
              ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
              d_5 = t;
              v_4 :
              if(match_cons(d_5, sym__2))
                {
                  e_5 = ATgetArgument(d_5, 0);
                  f_5 = ATgetArgument(d_5, 1);
                  {
                    if(((z_4 != NULL) && (z_4 != e_5)))
                      _fail(e_5);
                    else
                      z_4 = e_5;
                    if(((c_5 != NULL) && (c_5 != f_5)))
                      _fail(f_5);
                    else
                      c_5 = f_5;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, p_0);
          }
        }
        t = not_null(c_5);
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
  ATerm q_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_6;
      {
        t = table_get_0(t);
        {
          ATerm q_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, q_0);
        }
      }
      LocalPopChoice(s_6);
    }
  else
    {
      t = q_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_7;
      c_7 = t;
      {
        ATerm j_5 = NULL;
        ATerm k_5 = NULL;
        t = term_q_5;
        {
          t = get_config_0(t);
          {
            k_5 = t;
            if(((j_5 != NULL) && (j_5 != k_5)))
              _fail(k_5);
            else
              j_5 = k_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), term_h_7);
          t = geq_0(t);
        }
      }
      t = c_7;
      t = b_59(t);
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_7;
      k_7 = t;
      {
        ATerm n_5 = NULL;
        ATerm o_5 = NULL;
        t = term_q_5;
        {
          t = get_config_0(t);
          {
            o_5 = t;
            if(((n_5 != NULL) && (n_5 != o_5)))
              _fail(o_5);
            else
              n_5 = o_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_5), term_l_7);
          t = geq_0(t);
        }
      }
      t = k_7;
      t = d_59(t);
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      if(((t_5 != NULL) && (t_5 != u_5)))
        _fail(u_5);
      else
        t_5 = u_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
    {
      b_6 = ATgetFirst((ATermList) a_6);
      c_6 = (ATerm) ATgetNext((ATermList) a_6);
      {
        t = e_70(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm f_6 = NULL;
            f_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), not_null(f_6));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, r_0);
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
ATerm union_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym__2))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      {
        t = not_null(m_6);
        {
          ATerm r_6 (ATerm t)
          {
            ATerm r_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_6);
                LocalPopChoice(s_7);
              }
            else
              {
                t = r_7;
                {
                  ATerm w_7 = t;
                  int x_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = not_null(n_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, s_0);
                      t = r_6(t);
                      LocalPopChoice(x_7);
                    }
                  else
                    {
                      t = w_7;
                      t = Cons_2(t, _id, r_6);
                    }
                }
              }
            return(t);
          }
          t = r_6(t);
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
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym__3))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      z_6 = ATgetArgument(w_6, 2);
      {
        ATerm y_7;
        y_7 = t;
        {
          ATerm d_7 = NULL;
          ATerm e_7 = NULL,g_7 = NULL;
          ATerm f_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(y_6));
          {
            ATerm z_7 = t;
            int a_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_8);
              }
            else
              {
                t = z_7;
                t = (ATerm) ATempty;
              }
            {
              f_7 = t;
              if(((e_7 != NULL) && (e_7 != f_7)))
                _fail(f_7);
              else
                e_7 = f_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), not_null(z_6));
            {
              t = union_1(t, eq_0);
              {
                g_7 = t;
                if(((d_7 != NULL) && (d_7 != g_7)))
                  _fail(g_7);
                else
                  d_7 = g_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_6), not_null(y_6), not_null(d_7));
            t = table_put_0(t);
          }
        }
        t = y_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym__2))
    {
      p_7 = ATgetArgument(o_7, 0);
      q_7 = ATgetArgument(o_7, 1);
      {
        t = not_null(q_7);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
            t_7 = t;
            m_7 :
            if(match_cons(t_7, sym__2))
              {
                u_7 = ATgetArgument(t_7, 0);
                v_7 = ATgetArgument(t_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_7), not_null(u_7), not_null(v_7));
                  t = m_59(t);
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
ATerm xtc_read_0 (ATerm t)
{
  ATerm c_8 = NULL;
  ATerm e_8 = NULL;
  c_8 = t;
  {
    ATerm b_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(c_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_8;
      }
    {
      ATerm d_8;
      d_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_6, term_g_8, (ATerm) ATinsert(ATempty, not_null(c_8)));
        t = table_put_0(t);
      }
      t = d_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_h_8;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm i_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(k_8);
            }
          else
            {
              t = i_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_l_8;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm f_8 = NULL;
              f_8 = t;
              if(((e_8 != NULL) && (e_8 != f_8)))
                _fail(f_8);
              else
                e_8 = f_8;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(e_8));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_m_8;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_p_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(c_8)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_l_8;
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
  ATerm j_8 = NULL;
  j_8 = t;
  t = SSL_getenv(not_null(j_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_8;
      t = get_config_0(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_8;
            t = getenv_0(t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
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
      t = term_x_8;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm d_9;
    d_9 = t;
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_9;
          t = table_get_0(t);
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = d_9;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_j_9;
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
  ATerm k_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_q_9;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
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
            ATerm l_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = term_q_9;
                return(t);
              }
              t = debug_1(t, m_1);
              return(t);
            }
            t = if_verbose5_1(t, l_1);
          }
        }
      }
      LocalPopChoice(p_9);
    }
  else
    {
      t = k_9;
      {
        ATerm n_8 = NULL;
        ATerm o_8 = NULL;
        o_8 = t;
        if(((n_8 != NULL) && (n_8 != o_8)))
          _fail(o_8);
        else
          n_8 = o_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), not_null(n_8)), term_t_9);
          {
            t = error_0(t);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_p_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = term_y_9;
                      return(t);
                    }
                    t = debug_1(t, o_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, n_1);
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
  ATerm r_8 = NULL;
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL;
      s_8 = t;
      {
        if(((r_8 != NULL) && (r_8 != s_8)))
          _fail(s_8);
        else
          r_8 = s_8;
        t = SSL_ReadFromFile(not_null(r_8));
      }
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm p_1 (ATerm t)
        {
          t = term_c_10;
          return(t);
        }
        t = debug_1(t, p_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_stdin_0))
    {
      ATerm b_9 = NULL;
      ATerm c_9 = NULL;
      t = term_d_10;
      {
        t = ReadFromFile_0(t);
        {
          c_9 = t;
          if(((b_9 != NULL) && (b_9 != c_9)))
            _fail(c_9);
          else
            b_9 = c_9;
        }
      }
      t = not_null(b_9);
    }
  else
    {
      if(match_cons(z_8, sym_FILE_1))
        {
          a_9 = ATgetArgument(z_8, 0);
          {
            ATerm e_9 = NULL;
            ATerm f_9 = NULL;
            t = not_null(a_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_9 = t;
                  if(((e_9 != NULL) && (e_9 != f_9)))
                    _fail(f_9);
                  else
                    e_9 = f_9;
                }
              }
            }
            t = not_null(e_9);
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
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      t = SSL_WriteToBinaryFile(not_null(n_9), not_null(o_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm w_9 = NULL;
  u_9 = t;
  {
    ATerm x_9 = NULL;
    t = xtc_new_file_0(t);
    {
      x_9 = t;
      {
        if(((w_9 != NULL) && (w_9 != x_9)))
          _fail(x_9);
        else
          w_9 = x_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(u_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(w_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_9));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, h_74, i_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  t = SSL_close_file(not_null(b_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      t = SSL_execvp(not_null(h_10), not_null(i_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = SSL_waitpid(not_null(n_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm x_10 = NULL;
  ATerm z_10 = NULL;
  x_10 = t;
  {
    t = fork_0(t);
    {
      z_10 = t;
      {
        ATerm e_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL;
            b_11 = t;
            t_10 :
            if(match_int(b_11, 0))
              {
                t = not_null(x_10);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(j_10);
          }
        else
          {
            t = e_10;
            {
              ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
              t = not_null(z_10);
              {
                t = waitpid_0(t);
                {
                  c_11 = t;
                  v_10 :
                  if(match_cons(c_11, sym_WaitStatus_3))
                    {
                      d_11 = ATgetArgument(c_11, 0);
                      e_11 = ATgetArgument(c_11, 1);
                      f_11 = ATgetArgument(c_11, 2);
                      w_10 :
                      if(match_int(d_11, 0))
                        {
                          t = not_null(x_10);
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
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm q_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(o_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, q_1);
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
ATerm xtc_command_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm u_11 = NULL;
  ATerm k_10;
  k_10 = t;
  {
    ATerm v_11 = NULL;
    t = y_73(t);
    {
      t = xtc_find_0(t);
      {
        v_11 = t;
        if(((u_11 != NULL) && (u_11 != v_11)))
          _fail(v_11);
        else
          u_11 = v_11;
      }
    }
  }
  t = k_10;
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm w_11 = NULL;
      ATerm x_11 = NULL;
      x_11 = t;
      if(((w_11 != NULL) && (w_11 != x_11)))
        _fail(x_11);
      else
        w_11 = x_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(w_11));
        t = call_0(t);
      }
    }
    t = l_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
        ATerm m_10;
        m_10 = t;
        {
          ATerm n_12 = NULL;
          ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
          t = u_74(t);
          {
            n_12 = t;
            {
              if(((k_12 != NULL) && (k_12 != n_12)))
                _fail(n_12);
              else
                k_12 = n_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_12), not_null(g_12), not_null(h_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_12), term_q_10);
                        t = table_get_0(t);
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_12 = t;
                      d_12 :
                      if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
                        {
                          p_12 = ATgetFirst((ATermList) o_12);
                          q_12 = (ATerm) ATgetNext((ATermList) o_12);
                          {
                            if(((l_12 != NULL) && (l_12 != p_12)))
                              _fail(p_12);
                            else
                              l_12 = p_12;
                            {
                              if(((m_12 != NULL) && (m_12 != q_12)))
                                _fail(q_12);
                              else
                                m_12 = q_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_12), term_q_10, (ATerm) ATinsert(CheckATermList(not_null(m_12)), (ATerm) ATinsert(CheckATermList(not_null(l_12)), not_null(g_12))));
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
        t = m_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm r_10;
  r_10 = t;
  {
    t = h_86(t);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_s_10;
        return(t);
      }
      t = debug_1(t, r_1);
    }
  }
  t = r_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  ATerm u_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
      a_13 = t;
      v_12 :
      if(match_cons(a_13, sym__2))
        {
          b_13 = ATgetArgument(a_13, 0);
          c_13 = ATgetArgument(a_13, 1);
          {
            if(((z_12 != NULL) && (z_12 != b_13)))
              _fail(b_13);
            else
              z_12 = b_13;
            if(((y_12 != NULL) && (y_12 != c_13)))
              _fail(c_13);
            else
              y_12 = c_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_10);
      t = SSL_open_file(not_null(z_12), not_null(y_12));
    }
  else
    {
      t = u_10;
      {
        ATerm d_13 = NULL;
        ATerm e_13 = NULL;
        ATerm s_1 (ATerm t)
        {
          t = term_a_11;
          return(t);
        }
        t = obsolete_1(t, s_1);
        {
          d_13 = t;
          {
            if(((z_12 != NULL) && (z_12 != d_13)))
              _fail(d_13);
            else
              z_12 = d_13;
            {
              ATerm g_11;
              g_11 = t;
              {
                ATerm f_13 = NULL;
                t = term_h_11;
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
              }
              t = g_11;
              t = SSL_open_file(not_null(z_12), not_null(e_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm n_13 = NULL;
  l_13 = t;
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm o_13 = NULL;
      t = term_j_11;
      {
        o_13 = t;
        if(((n_13 != NULL) && (n_13 != o_13)))
          _fail(o_13);
        else
          n_13 = o_13;
      }
    }
    t = i_11;
    {
      t = SSL_open_file(not_null(l_13), not_null(n_13));
      t = SSL_close_file(not_null(l_13));
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
  ATerm s_13 = NULL;
  ATerm t_13 = NULL;
  t = term_k_11;
  {
    t = new_0(t);
    {
      t_13 = t;
      if(((s_13 != NULL) && (s_13 != t_13)))
        _fail(t_13);
      else
        s_13 = t_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_p_11);
    {
      t = conc_strings_0(t);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
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
  ATerm x_13 = NULL;
  t = new_file_0(t);
  {
    x_13 = t;
    {
      ATerm s_11;
      s_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_h_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_k_11);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_t_11;
                return(t);
              }
              t = assert_1(t, t_1);
            }
          }
        }
      }
      t = s_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm h_14 = NULL,i_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym_stdin_0))
    {
      ATerm j_14 = NULL;
      ATerm k_14 = NULL;
      ATerm l_14 = NULL;
      t = xtc_new_file_0(t);
      {
        k_14 = t;
        {
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
          {
            ATerm m_14 = NULL;
            t = o_0(t);
            {
              m_14 = t;
              if(((l_14 != NULL) && (l_14 != m_14)))
                _fail(m_14);
              else
                l_14 = m_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_14)), term_y_11));
              {
                ATerm z_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = z_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(j_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_14));
    }
  else
    {
      if(match_cons(h_14, sym_FILE_1))
        {
          i_14 = ATgetArgument(h_14, 0);
          {
            ATerm o_14 = NULL;
            ATerm p_14 = NULL;
            t = not_null(i_14);
            {
              ATerm q_14 = NULL;
              t = xtc_new_file_0(t);
              {
                p_14 = t;
                {
                  if(((o_14 != NULL) && (o_14 != p_14)))
                    _fail(p_14);
                  else
                    o_14 = p_14;
                  {
                    ATerm r_14 = NULL;
                    t = o_0(t);
                    {
                      r_14 = t;
                      if(((q_14 != NULL) && (q_14 != r_14)))
                        _fail(r_14);
                      else
                        q_14 = r_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_14)), term_y_11), not_null(i_14)), term_b_12));
                      {
                        ATerm c_12 = t;
                        int i_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(i_12);
                          }
                        else
                          {
                            t = c_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(o_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_14));
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
  ATerm c_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_stdin_0))
    {
      ATerm e_15 = NULL,g_15 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm f_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
        }
      }
      t = j_12;
      {
        ATerm h_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(e_15));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm l_52 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_FILE_1))
    {
      r_15 = ATgetArgument(q_15, 0);
      {
        ATerm u_15 = NULL,w_15 = NULL;
        ATerm v_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
        {
          t = not_null(r_15);
          {
            ATerm y_15 = NULL;
            t = l_52(t);
            {
              w_15 = t;
              {
                ATerm z_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(w_15)), not_null(u_15));
                {
                  z_15 = t;
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                }
                t = not_null(y_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          t = stdin_0(t);
        }
      LocalPopChoice(s_12);
      t = xtc_transform_file_2(t, a_74, b_74);
    }
  else
    {
      t = r_12;
      t = xtc_transform_term_2(t, a_74, b_74);
    }
  return(t);
}
ATerm xtc_sglr_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm h_16 = NULL,j_16 = NULL,l_16 = NULL;
    ATerm x_12;
    x_12 = t;
    {
      ATerm i_16 = NULL;
      t = term_k_11;
      {
        t = r_86(t);
        {
          t = xtc_find_0(t);
          {
            i_16 = t;
            if(((h_16 != NULL) && (h_16 != i_16)))
              _fail(i_16);
            else
              h_16 = i_16;
          }
        }
      }
    }
    t = x_12;
    {
      ATerm g_13;
      g_13 = t;
      {
        ATerm k_16 = NULL;
        t = term_k_11;
        {
          t = s_86(t);
          {
            k_16 = t;
            if(((j_16 != NULL) && (j_16 != k_16)))
              _fail(k_16);
            else
              j_16 = k_16;
          }
        }
      }
      t = g_13;
      {
        ATerm m_16 = NULL;
        t = term_k_11;
        {
          t = pass_v_verbose_0(t);
          {
            m_16 = t;
            if(((l_16 != NULL) && (l_16 != m_16)))
              _fail(m_16);
            else
              l_16 = m_16;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_16)), not_null(j_16)), term_j_13), not_null(h_16)), term_i_13), term_h_13);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym__2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      t = SSL_copy(not_null(t_16), not_null(u_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_stderr_0))
    {
      ATerm e_17 = NULL,g_17 = NULL;
      ATerm k_13;
      k_13 = t;
      {
        ATerm f_17 = NULL;
        t = SSLgetAnnotations(not_null(c_17));
        {
          f_17 = t;
          if(((e_17 != NULL) && (e_17 != f_17)))
            _fail(f_17);
          else
            e_17 = f_17;
        }
      }
      t = k_13;
      {
        ATerm h_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(e_17));
        {
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
        }
        t = not_null(g_17);
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
  ATerm p_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_stdout_0))
    {
      ATerm r_17 = NULL,t_17 = NULL;
      ATerm m_13;
      m_13 = t;
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
      t = m_13;
      {
        ATerm u_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(r_17));
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
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym_FILE_1))
    {
      h_18 = ATgetArgument(g_18, 0);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_18 = NULL;
            ATerm k_18 = NULL;
            t = m_0(t);
            {
              k_18 = t;
              {
                if(((j_18 != NULL) && (j_18 != k_18)))
                  _fail(k_18);
                else
                  j_18 = k_18;
                {
                  ATerm r_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = r_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(j_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_18));
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_18 = NULL;
                  ATerm n_18 = NULL;
                  t = m_0(t);
                  {
                    n_18 = t;
                    {
                      if(((m_18 != NULL) && (m_18 != n_18)))
                        _fail(n_18);
                      else
                        m_18 = n_18;
                      {
                        ATerm y_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm z_13 = t;
                            int a_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(a_14);
                              }
                            else
                              {
                                t = z_13;
                                {
                                  ATerm b_14 = t;
                                  int c_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(c_14);
                                    }
                                  else
                                    {
                                      t = b_14;
                                      {
                                        ATerm o_18 = NULL;
                                        o_18 = t;
                                        if(((h_18 != NULL) && (h_18 != o_18)))
                                          _fail(o_18);
                                        else
                                          h_18 = o_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = y_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(m_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_18));
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                  {
                    ATerm q_18 = NULL;
                    t = m_0(t);
                    {
                      q_18 = t;
                      if(((h_18 != NULL) && (h_18 != q_18)))
                        _fail(q_18);
                      else
                        h_18 = q_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_18));
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
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
    {
      c_19 = ATgetFirst((ATermList) b_19);
      d_19 = (ATerm) ATgetNext((ATermList) b_19);
      t = not_null(d_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      {
        ATerm d_14;
        d_14 = t;
        {
          ATerm p_19 = NULL;
          ATerm q_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(l_19));
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
                t = (ATerm) ATempty;
              }
            {
              q_19 = t;
              if(((p_19 != NULL) && (p_19 != q_19)))
                _fail(q_19);
              else
                p_19 = q_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_19), not_null(l_19), not_null(p_19));
            t = table_put_0(t);
          }
        }
        t = d_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  ATerm n_14;
  n_14 = t;
  {
    ATerm h_20 = NULL;
    ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
    t = r_74(t);
    {
      h_20 = t;
      {
        if(((e_20 != NULL) && (e_20 != h_20)))
          _fail(h_20);
        else
          e_20 = h_20;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), term_q_10);
              t = table_get_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_20 = t;
            b_20 :
            if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
              {
                j_20 = ATgetFirst((ATermList) i_20);
                k_20 = (ATerm) ATgetNext((ATermList) i_20);
                {
                  if(((d_20 != NULL) && (d_20 != j_20)))
                    _fail(j_20);
                  else
                    d_20 = j_20;
                  {
                    if(((c_20 != NULL) && (c_20 != k_20)))
                      _fail(k_20);
                    else
                      c_20 = k_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_20), term_q_10, not_null(c_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_20);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm l_20 = NULL;
                              l_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(l_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_1);
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
  t = n_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  t = SSL_remove(not_null(w_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      t = c_63(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        t = c_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm b_21 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    ATerm c_21 = NULL;
    ATerm d_21 = NULL;
    t = q_74(t);
    {
      c_21 = t;
      {
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
        {
          ATerm e_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), term_q_10);
          {
            ATerm x_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_14);
              }
            else
              {
                t = x_14;
                t = (ATerm) ATempty;
              }
            {
              e_21 = t;
              if(((d_21 != NULL) && (d_21 != e_21)))
                _fail(e_21);
              else
                d_21 = e_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_21), term_q_10, (ATerm) ATinsert(CheckATermList(not_null(d_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_t_11;
    return(t);
  }
  t = begin_scope_1(t, x_1);
  {
    ATerm z_1 (ATerm t)
    {
      ATerm z_14;
      z_14 = t;
      {
        ATerm q_21 = NULL,r_21 = NULL,w_21 = NULL;
        ATerm a_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_15;
            t = table_get_0(t);
            LocalPopChoice(d_15);
          }
        else
          {
            t = a_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          q_21 = t;
          i_21 :
          if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
            {
              r_21 = ATgetFirst((ATermList) q_21);
              w_21 = (ATerm) ATgetNext((ATermList) q_21);
              {
                if(((p_21 != NULL) && (p_21 != r_21)))
                  _fail(r_21);
                else
                  p_21 = r_21;
                {
                  if(((o_21 != NULL) && (o_21 != w_21)))
                    _fail(w_21);
                  else
                    o_21 = w_21;
                  {
                    t = not_null(p_21);
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm j_15 = t;
                        int k_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(k_15);
                          }
                        else
                          {
                            t = j_15;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, a_2);
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
      t = z_14;
      {
        ATerm b_2 (ATerm t)
        {
          t = term_t_11;
          return(t);
        }
        t = end_scope_1(t, b_2);
      }
      return(t);
    }
    t = restore_always_2(t, o_73, z_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL;
        ATerm i_22 = NULL;
        t = term_b_12;
        {
          t = get_config_0(t);
          {
            i_22 = t;
            if(((g_22 != NULL) && (g_22 != i_22)))
              _fail(i_22);
            else
              g_22 = i_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_22));
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = term_d_10;
      }
    {
      t = p_73(t);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_11;
              t = get_config_0(t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              t = term_s_15;
            }
          return(t);
        }
        t = copy_to_1(t, d_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, c_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm m_22 = NULL;
    m_22 = t;
    l_22 :
    if(!(match_string(m_22, "-v")))
      {
        if(!(match_string(m_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_t_15;
    t = set_config_0(t);
    t = term_x_15;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_a_16;
    return(t);
  }
  t = Option_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm p_22 = NULL;
    p_22 = t;
    n_22 :
    if(!(match_string(p_22, "-k")))
      {
        if(!(match_string(p_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm b_16;
    b_16 = t;
    {
      ATerm q_22 = NULL;
      ATerm r_22 = NULL;
      t = string_to_int_0(t);
      {
        r_22 = t;
        if(((q_22 != NULL) && (q_22 != r_22)))
          _fail(r_22);
        else
          q_22 = r_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_16, not_null(q_22));
        t = set_config_0(t);
      }
    }
    t = b_16;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_string_to_int(not_null(u_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm c_23 = NULL;
        c_23 = t;
        x_22 :
        if(!(match_string(c_23, "-S")))
          {
            if(!(match_string(c_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_n_16;
        t = set_config_0(t);
        t = term_o_16;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_p_16;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        ATerm q_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm d_23 = NULL;
              d_23 = t;
              y_22 :
              if(!(match_string(d_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm g_23 = NULL;
              ATerm w_16;
              w_16 = t;
              {
                ATerm e_23 = NULL;
                ATerm f_23 = NULL;
                t = string_to_int_0(t);
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_5, not_null(e_23));
                  t = set_config_0(t);
                }
              }
              t = w_16;
              {
                ATerm h_23 = NULL;
                h_23 = t;
                if(((g_23 != NULL) && (g_23 != h_23)))
                  _fail(h_23);
                else
                  g_23 = h_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_23));
              }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_x_16;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            LocalPopChoice(v_16);
          }
        else
          {
            t = q_16;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm i_23 = NULL;
                i_23 = t;
                b_23 :
                if(!(match_string(i_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_y_16;
                t = set_config_0(t);
                t = term_z_16;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_a_17;
                return(t);
              }
              t = Option_3(t, q_2, r_2, s_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = d_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm o_23 = NULL;
    o_23 = t;
    l_23 :
    if(!(match_string(o_23, "-o")))
      {
        if(!(match_string(o_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm w_23 = NULL;
    ATerm l_17;
    l_17 = t;
    {
      ATerm p_23 = NULL;
      ATerm q_23 = NULL;
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(p_23));
        t = set_config_0(t);
      }
    }
    t = l_17;
    {
      ATerm x_23 = NULL;
      x_23 = t;
      if(((w_23 != NULL) && (w_23 != x_23)))
        _fail(x_23);
      else
        w_23 = x_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_23));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = n_17;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm b_24 = NULL;
          b_24 = t;
          a_24 :
          if(!(match_string(b_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_w_17;
          t = set_config_0(t);
          t = term_x_17;
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = term_y_17;
          return(t);
        }
        t = Option_3(t, w_2, x_2, y_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,n_24 = NULL,p_24 = NULL;
  h_24 = t;
  f_24 :
  if(match_string(h_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
        {
          i_24 = ATgetFirst((ATermList) h_24);
          j_24 = (ATerm) ATgetNext((ATermList) h_24);
          g_24 :
          if(((ATgetType(j_24) == AT_LIST) && !(ATisEmpty(j_24))))
            {
              n_24 = ATgetFirst((ATermList) j_24);
              p_24 = (ATerm) ATgetNext((ATermList) j_24);
              {
                ATerm t_24 = NULL;
                ATerm z_17;
                z_17 = t;
                {
                  t = not_null(i_24);
                  t = j_0(t);
                }
                t = z_17;
                {
                  ATerm u_24 = NULL;
                  t = not_null(n_24);
                  {
                    t = k_0(t);
                    {
                      u_24 = t;
                      if(((t_24 != NULL) && (t_24 != u_24)))
                        _fail(u_24);
                      else
                        t_24 = u_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_24)), not_null(t_24));
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
  ATerm b_3 (ATerm t)
  {
    ATerm b_25 = NULL;
    b_25 = t;
    y_24 :
    if(!(match_string(b_25, "-i")))
      {
        if(!(match_string(b_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm e_25 = NULL;
    ATerm a_18;
    a_18 = t;
    {
      ATerm c_25 = NULL;
      ATerm d_25 = NULL;
      d_25 = t;
      if(((c_25 != NULL) && (c_25 != d_25)))
        _fail(d_25);
      else
        c_25 = d_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(c_25));
        t = set_config_0(t);
      }
    }
    t = a_18;
    {
      ATerm f_25 = NULL;
      f_25 = t;
      if(((e_25 != NULL) && (e_25 != f_25)))
        _fail(f_25);
      else
        e_25 = f_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_25));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = ArgOption_3(t, b_3, e_3, f_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm e_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(i_18);
          }
        else
          {
            t = e_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_25 = NULL;
  ATerm l_18;
  l_18 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm l_25 = NULL,m_25 = NULL;
      l_25 = t;
      j_25 :
      if(match_cons(l_25, sym_Program_1))
        {
          m_25 = ATgetArgument(l_25, 0);
          if(((k_25 != NULL) && (k_25 != m_25)))
            _fail(m_25);
          else
            k_25 = m_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_18), not_null(k_25)), term_p_18));
      {
        t = printnl_0(t);
        {
          t = term_x_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATempty, term_s_18));
  {
    t = printnl_0(t);
    {
      t = term_x_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  t = SSL_TicksToSeconds(not_null(p_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_25), not_null(w_25));
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = SSL_addr(not_null(v_25), not_null(w_25));
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
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
        d_26 = t;
        c_26 :
        if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
          {
            e_26 = ATgetFirst((ATermList) d_26);
            f_26 = (ATerm) ATgetNext((ATermList) d_26);
            {
              ATerm i_26 = NULL;
              ATerm j_26 = NULL;
              t = not_null(f_26);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  j_26 = t;
                  if(((i_26 != NULL) && (i_26 != j_26)))
                    _fail(j_26);
                  else
                    i_26 = j_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), not_null(i_26));
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
  ATerm q_26 = NULL;
  ATerm s_26 = NULL;
  q_26 = t;
  {
    ATerm t_26 = NULL;
    ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
    t = not_null(q_26);
    {
      t_26 = t;
      {
        t = SSL_explode_term(not_null(t_26));
        {
          v_26 = t;
          p_26 :
          if(match_cons(v_26, sym__2))
            {
              w_26 = ATgetArgument(v_26, 0);
              x_26 = ATgetArgument(v_26, 1);
              if(((s_26 != NULL) && (s_26 != x_26)))
                _fail(x_26);
              else
                s_26 = x_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_26);
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
    ATerm i_3 (ATerm t)
    {
      t = term_g_16;
      return(t);
    }
    t = crush_2(t, i_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym__2))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      {
        ATerm x_18;
        x_18 = t;
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_27), not_null(f_27));
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = SSL_gtr(not_null(e_27), not_null(f_27));
            }
        }
        t = x_18;
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
  ATerm l_27 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
      m_27 = t;
      k_27 :
      if(match_cons(m_27, sym__2))
        {
          n_27 = ATgetArgument(m_27, 0);
          o_27 = ATgetArgument(m_27, 1);
          {
            if(((l_27 != NULL) && (l_27 != n_27)))
              _fail(n_27);
            else
              l_27 = n_27;
            if(((l_27 != NULL) && (l_27 != o_27)))
              _fail(o_27);
            else
              l_27 = o_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_19;
      m_19 = t;
      {
        ATerm r_27 = NULL;
        ATerm s_27 = NULL;
        t = term_q_5;
        {
          t = get_config_0(t);
          {
            s_27 = t;
            if(((r_27 != NULL) && (r_27 != s_27)))
              _fail(s_27);
            else
              r_27 = s_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), term_x_5);
          t = geq_0(t);
        }
      }
      t = m_19;
      t = y_58(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm w_27 = NULL,y_27 = NULL;
    ATerm n_19;
    n_19 = t;
    {
      ATerm x_27 = NULL;
      t = run_time_0(t);
      {
        x_27 = t;
        if(((w_27 != NULL) && (w_27 != x_27)))
          _fail(x_27);
        else
          w_27 = x_27;
      }
    }
    t = n_19;
    {
      ATerm z_27 = NULL;
      t = term_o_19;
      {
        t = get_config_0(t);
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_19), not_null(w_27)), term_r_19), not_null(y_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_3);
  {
    t = term_g_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Version_0))
    {
      ATerm i_28 = NULL,k_28 = NULL;
      ATerm t_19;
      t_19 = t;
      {
        ATerm j_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
      }
      t = t_19;
      {
        ATerm l_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
        t = not_null(k_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_3);
  t = x_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = SSL_table_create(not_null(q_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  {
    ATerm y_19;
    y_19 = t;
    {
      t = term_z_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, not_null(u_28));
          t = table_put_0(t);
        }
      }
    }
    t = y_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = SSL_table_destroy(not_null(y_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  t = SSL_exit(not_null(d_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_29 = NULL,n_29 = NULL,o_29 = NULL;
  j_29 = t;
  i_29 :
  if(((ATgetType(j_29) == AT_LIST) && ATisEmpty(j_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
        {
          n_29 = ATgetFirst((ATermList) j_29);
          o_29 = (ATerm) ATgetNext((ATermList) j_29);
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
  ATerm f_20;
  f_20 = t;
  {
    ATerm r_29 = NULL;
    ATerm u_29 = NULL;
    ATerm g_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = g_20;
        {
          ATerm s_29 = NULL;
          ATerm t_29 = NULL;
          t_29 = t;
          if(((s_29 != NULL) && (s_29 != t_29)))
            _fail(t_29);
          else
            s_29 = t_29;
          t = (ATerm) ATinsert(ATempty, not_null(s_29));
        }
      }
    {
      u_29 = t;
      if(((r_29 != NULL) && (r_29 != u_29)))
        _fail(u_29);
      else
        r_29 = u_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(r_29));
      t = printnl_0(t);
    }
  }
  t = f_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  h_30 = t;
  e_30 :
  if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
    {
      f_30 = ATgetFirst((ATermList) h_30);
      g_30 = (ATerm) ATgetNext((ATermList) h_30);
      {
        ATerm k_30 = NULL;
        t = not_null(g_30);
        {
          ATerm n_20;
          n_20 = t;
          {
            ATerm l_30 = NULL,n_30 = NULL,p_30 = NULL;
            ATerm o_20;
            o_20 = t;
            {
              ATerm m_30 = NULL;
              t = i_0(t);
              {
                m_30 = t;
                if(((l_30 != NULL) && (l_30 != m_30)))
                  _fail(m_30);
                else
                  l_30 = m_30;
              }
            }
            t = o_20;
            {
              ATerm o_30 = NULL;
              t = not_null(f_30);
              {
                t = h_0(t);
                {
                  o_30 = t;
                  if(((n_30 != NULL) && (n_30 != o_30)))
                    _fail(o_30);
                  else
                    n_30 = o_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_30)), not_null(n_30));
                {
                  p_30 = t;
                  if(((k_30 != NULL) && (k_30 != p_30)))
                    _fail(p_30);
                  else
                    k_30 = p_30;
                }
              }
            }
          }
          t = n_20;
          {
            ATerm l_3 (ATerm t)
            {
              t = not_null(k_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, l_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_30) == AT_LIST) && ATisEmpty(h_30)))
        {
          {
            t = term_k_11;
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
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_Program_1))
    {
      b_31 = ATgetArgument(a_31, 0);
      {
        ATerm e_31 = NULL,g_31 = NULL;
        ATerm f_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
        {
          t = not_null(b_31);
          {
            ATerm i_31 = NULL;
            t = s_52(t);
            {
              g_31 = t;
              {
                ATerm j_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_31)), not_null(e_31));
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
  ATerm t_31 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_31 = NULL;
      t = term_o_19;
      {
        t = get_config_0(t);
        {
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
        }
      }
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            ATerm v_31 = NULL;
            v_31 = t;
            if(((t_31 != NULL) && (t_31 != v_31)))
              _fail(v_31);
            else
              t_31 = v_31;
            return(t);
          }
          t = Program_1(t, q_3);
          return(t);
        }
        t = fetch_1(t, o_3);
      }
    }
  {
    t = term_r_20;
    {
      t = echo_0(t);
      {
        t = term_u_20;
        {
          t = table_get_0(t);
          {
            ATerm t_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, t_3);
            {
              ATerm u_3 (ATerm t)
              {
                ATerm w_31 = NULL;
                ATerm x_31 = NULL;
                x_31 = t;
                if(((w_31 != NULL) && (w_31 != x_31)))
                  _fail(x_31);
                else
                  w_31 = x_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_31)), term_v_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_3);
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
  ATerm x_20;
  x_20 = t;
  {
    ATerm h_32 = NULL;
    ATerm i_32 = NULL;
    i_32 = t;
    if(((h_32 != NULL) && (h_32 != i_32)))
      _fail(i_32);
    else
      h_32 = i_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATempty, not_null(h_32)));
      t = printnl_0(t);
    }
  }
  t = x_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm y_20;
  y_20 = t;
  {
    t = b_86(t);
    t = debug_0(t);
  }
  t = y_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm t_32 = NULL,u_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym_Undefined_1))
    {
      u_32 = ATgetArgument(t_32, 0);
      {
        ATerm x_32 = NULL,z_32 = NULL;
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(t_32));
        {
          y_32 = t;
          if(((x_32 != NULL) && (x_32 != y_32)))
            _fail(y_32);
          else
            x_32 = y_32;
        }
        {
          t = not_null(u_32);
          {
            ATerm b_33 = NULL;
            t = t_52(t);
            {
              z_32 = t;
              {
                ATerm c_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_32)), not_null(x_32));
                {
                  c_33 = t;
                  if(((b_33 != NULL) && (b_33 != c_33)))
                    _fail(c_33);
                  else
                    b_33 = c_33;
                }
                t = not_null(b_33);
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
ATerm fetch_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm r_33 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = Cons_2(t, _id, r_33);
      }
    return(t);
  }
  t = r_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_76 (ATerm))
{
  t = fetch_1(t, e_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  y_33 :
  if(match_cons(a_34, sym_Help_0))
    {
      ATerm c_34 = NULL,r_34 = NULL;
      ATerm f_21;
      f_21 = t;
      {
        ATerm g_34 = NULL;
        t = SSLgetAnnotations(not_null(a_34));
        {
          g_34 = t;
          if(((c_34 != NULL) && (c_34 != g_34)))
            _fail(g_34);
          else
            c_34 = g_34;
        }
      }
      t = f_21;
      {
        ATerm s_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_34));
        {
          s_34 = t;
          if(((r_34 != NULL) && (r_34 != s_34)))
            _fail(s_34);
          else
            r_34 = s_34;
        }
        t = not_null(r_34);
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
  ATerm y_34 = NULL;
  y_34 = t;
  t = SSL_implode_string(not_null(y_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
        j_35 = t;
        d_35 :
        if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
          {
            k_35 = ATgetFirst((ATermList) j_35);
            l_35 = (ATerm) ATgetNext((ATermList) j_35);
            {
              t = not_null(k_35);
              {
                ATerm v_3 (ATerm t)
                {
                  t = not_null(l_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_3);
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
  ATerm z_35 = NULL;
  ATerm b_36 = NULL;
  z_35 = t;
  {
    ATerm c_36 = NULL;
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
    t = not_null(z_35);
    {
      c_36 = t;
      {
        t = SSL_explode_term(not_null(c_36));
        {
          e_36 = t;
          x_35 :
          if(match_cons(e_36, sym__2))
            {
              f_36 = ATgetArgument(e_36, 0);
              g_36 = ATgetArgument(e_36, 1);
              y_35 :
              if(match_string(f_36, ""))
                {
                  if(((b_36 != NULL) && (b_36 != g_36)))
                    _fail(g_36);
                  else
                    b_36 = g_36;
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
      t = not_null(b_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm k_36 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_36);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          t = Nil_0(t);
          t = r_64(t);
        }
      }
    return(t);
  }
  t = k_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      {
        t = not_null(o_36);
        {
          ATerm w_3 (ATerm t)
          {
            t = not_null(p_36);
            return(t);
          }
          t = at_end_1(t, w_3);
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
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_explode_string(not_null(u_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym__2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      {
        ATerm j_37 = NULL,l_37 = NULL;
        ATerm k_37 = NULL;
        t = SSLgetAnnotations(not_null(d_37));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
        {
          t = not_null(e_37);
          {
            ATerm n_37 = NULL;
            t = p_50(t);
            {
              l_37 = t;
              {
                t = not_null(f_37);
                {
                  ATerm p_37 = NULL;
                  t = q_50(t);
                  {
                    n_37 = t;
                    {
                      ATerm q_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_37), not_null(n_37)), not_null(j_37));
                      {
                        q_37 = t;
                        if(((p_37 != NULL) && (p_37 != q_37)))
                          _fail(q_37);
                        else
                          p_37 = q_37;
                      }
                      t = not_null(p_37);
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
    ATerm n_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = n_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        ATerm t_21;
        t_21 = t;
        t = SSL_printnl(not_null(z_37), not_null(a_38));
        t = t_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm g_38 = NULL,i_38 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm h_38 = NULL;
      t = a_86(t);
      {
        h_38 = t;
        if(((g_38 != NULL) && (g_38 != h_38)))
          _fail(h_38);
        else
          g_38 = h_38;
      }
    }
    t = v_21;
    {
      ATerm j_38 = NULL;
      j_38 = t;
      if(((i_38 != NULL) && (i_38 != j_38)))
        _fail(j_38);
      else
        i_38 = j_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_38)), not_null(g_38)));
        t = printnl_0(t);
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm m_38 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = Cons_2(t, c_64, m_38);
      }
    return(t);
  }
  t = m_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  t = SSL_is_string(not_null(o_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm d_22 = t;
              int e_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_22);
                }
              else
                {
                  t = d_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_3);
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            {
              ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
              x_38 = t;
              w_38 :
              if(match_cons(x_38, sym_Path_1))
                {
                  y_38 = ATgetArgument(x_38, 0);
                  t = not_null(y_38);
                }
              else
                {
                  if(match_cons(x_38, sym_Var_1))
                    {
                      y_38 = ATgetArgument(x_38, 0);
                      {
                        t = not_null(y_38);
                        {
                          ATerm f_22 = t;
                          int h_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_22);
                            }
                          else
                            {
                              t = f_22;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = term_j_22;
                                  return(t);
                                }
                                t = debug_1(t, a_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_38, sym_Prefix_2))
                        {
                          y_38 = ATgetArgument(x_38, 0);
                          z_38 = ATgetArgument(x_38, 1);
                          {
                            ATerm e_39 = NULL,g_39 = NULL;
                            ATerm k_22;
                            k_22 = t;
                            {
                              ATerm f_39 = NULL;
                              t = not_null(y_38);
                              {
                                t = eval_config_0(t);
                                {
                                  f_39 = t;
                                  if(((e_39 != NULL) && (e_39 != f_39)))
                                    _fail(f_39);
                                  else
                                    e_39 = f_39;
                                }
                              }
                            }
                            t = k_22;
                            {
                              ATerm h_39 = NULL;
                              t = not_null(z_38);
                              {
                                t = eval_config_0(t);
                                {
                                  h_39 = t;
                                  if(((g_39 != NULL) && (g_39 != h_39)))
                                    _fail(h_39);
                                  else
                                    g_39 = h_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), not_null(g_39));
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
  ATerm p_39 = NULL;
  p_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_22, not_null(p_39));
    {
      t = table_get_0(t);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm v_22;
              v_22 = t;
              {
                ATerm r_39 = NULL;
                ATerm s_39 = NULL;
                s_39 = t;
                if(((r_39 != NULL) && (r_39 != s_39)))
                  _fail(s_39);
                else
                  r_39 = s_39;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(p_39), not_null(r_39));
                  t = table_put_0(t);
                }
              }
              t = v_22;
            }
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm w_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = w_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym__2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      t = SSL_table_get(not_null(y_39), not_null(z_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym__3))
    {
      h_40 = ATgetArgument(g_40, 0);
      i_40 = ATgetArgument(g_40, 1);
      j_40 = ATgetArgument(g_40, 2);
      {
        ATerm a_23;
        a_23 = t;
        {
          ATerm n_40 = NULL;
          ATerm o_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), not_null(i_40));
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                t = (ATerm) ATempty;
              }
            {
              o_40 = t;
              if(((n_40 != NULL) && (n_40 != o_40)))
                _fail(o_40);
              else
                n_40 = o_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_40), not_null(i_40), (ATerm) ATinsert(CheckATermList(not_null(n_40)), not_null(j_40)));
            t = table_put_0(t);
          }
        }
        t = a_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm s_40 = NULL;
  ATerm t_40 = NULL;
  t = term_k_11;
  {
    t = j_77(t);
    {
      t_40 = t;
      if(((s_40 != NULL) && (s_40 != t_40)))
        _fail(t_40);
      else
        s_40 = t_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_20, term_t_20, not_null(s_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_string(c_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
        {
          d_41 = ATgetFirst((ATermList) c_41);
          e_41 = (ATerm) ATgetNext((ATermList) c_41);
          {
            ATerm h_41 = NULL;
            ATerm m_23;
            m_23 = t;
            {
              t = not_null(d_41);
              t = a_0(t);
            }
            t = m_23;
            {
              ATerm i_41 = NULL;
              t = term_k_11;
              {
                t = d_0(t);
                {
                  i_41 = t;
                  if(((h_41 != NULL) && (h_41 != i_41)))
                    _fail(i_41);
                  else
                    h_41 = i_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_41)), not_null(h_41));
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
  ATerm d_4 (ATerm t)
  {
    ATerm n_41 = NULL;
    n_41 = t;
    m_41 :
    if(!(match_string(n_41, "--help")))
      {
        if(!(match_string(n_41, "-h")))
          {
            if(!(match_string(n_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_r_23;
    {
      t = set_config_0(t);
      t = term_s_23;
    }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_t_23;
    return(t);
  }
  t = Option_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  p_41 :
  if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
    {
      r_41 = ATgetFirst((ATermList) q_41);
      s_41 = (ATerm) ATgetNext((ATermList) q_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  b_42 :
  if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
    {
      d_42 = ATgetFirst((ATermList) c_42);
      e_42 = (ATerm) ATgetNext((ATermList) c_42);
      {
        ATerm i_42 = NULL,m_42 = NULL;
        ATerm l_42 = NULL;
        t = SSLgetAnnotations(not_null(c_42));
        {
          l_42 = t;
          if(((i_42 != NULL) && (i_42 != l_42)))
            _fail(l_42);
          else
            i_42 = l_42;
        }
        {
          t = not_null(d_42);
          {
            ATerm o_42 = NULL;
            t = y_51(t);
            {
              m_42 = t;
              {
                t = not_null(e_42);
                {
                  ATerm s_42 = NULL;
                  t = z_51(t);
                  {
                    o_42 = t;
                    {
                      ATerm t_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_42)), not_null(m_42)), not_null(i_42));
                      {
                        t_42 = t;
                        if(((s_42 != NULL) && (s_42 != t_42)))
                          _fail(t_42);
                        else
                          s_42 = t_42;
                      }
                      t = not_null(s_42);
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
  ATerm f_43 = NULL;
  f_43 = t;
  e_43 :
  if(((ATgetType(f_43) == AT_LIST) && ATisEmpty(f_43)))
    {
      {
        ATerm h_43 = NULL,j_43 = NULL;
        ATerm u_23;
        u_23 = t;
        {
          ATerm i_43 = NULL;
          t = SSLgetAnnotations(not_null(f_43));
          {
            i_43 = t;
            if(((h_43 != NULL) && (h_43 != i_43)))
              _fail(i_43);
            else
              h_43 = i_43;
          }
        }
        t = u_23;
        {
          ATerm k_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_43));
          {
            k_43 = t;
            if(((j_43 != NULL) && (j_43 != k_43)))
              _fail(k_43);
            else
              j_43 = k_43;
          }
          t = not_null(j_43);
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
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_cons(s_43, sym__2))
    {
      t_43 = ATgetArgument(s_43, 0);
      u_43 = ATgetArgument(s_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_22, not_null(t_43), not_null(u_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm v_23;
  v_23 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_24;
        t = h_77(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
        }
      }
  }
  t = v_23;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm d_44 = NULL;
      ATerm d_24;
      d_24 = t;
      {
        ATerm b_44 = NULL;
        ATerm c_44 = NULL;
        c_44 = t;
        if(((b_44 != NULL) && (b_44 != c_44)))
          _fail(c_44);
        else
          b_44 = c_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_19, not_null(b_44));
          t = set_config_0(t);
        }
      }
      t = d_24;
      {
        ATerm e_44 = NULL;
        e_44 = t;
        if(((d_44 != NULL) && (d_44 != e_44)))
          _fail(e_44);
        else
          d_44 = e_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_44));
      }
      return(t);
    }
    ATerm r_4 (ATerm t)
    {
      ATerm e_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              {
                t = h_77(t);
                t = Cons_2(t, _id, r_4);
              }
            }
          LocalPopChoice(k_24);
        }
      else
        {
          t = e_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_4, r_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  ATerm o_24;
  o_24 = t;
  {
    ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
    n_44 = t;
    j_44 :
    if(match_cons(n_44, sym__3))
      {
        o_44 = ATgetArgument(n_44, 0);
        p_44 = ATgetArgument(n_44, 1);
        q_44 = ATgetArgument(n_44, 2);
        {
          if(((k_44 != NULL) && (k_44 != o_44)))
            _fail(o_44);
          else
            k_44 = o_44;
          {
            if(((l_44 != NULL) && (l_44 != p_44)))
              _fail(p_44);
            else
              l_44 = p_44;
            {
              if(((m_44 != NULL) && (m_44 != q_44)))
                _fail(q_44);
              else
                m_44 = q_44;
              t = SSL_table_put(not_null(k_44), not_null(l_44), not_null(m_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm t_44 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    t = term_r_24;
    t = table_put_0(t);
  }
  t = q_24;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm s_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_77(t);
          LocalPopChoice(v_24);
        }
      else
        {
          t = s_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_4);
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_24;
          z_24 = t;
          {
            ATerm a_25 = t;
            int g_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_23;
                t = get_config_0(t);
                LocalPopChoice(g_25);
              }
            else
              {
                t = a_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = z_24;
          {
            t = system_usage_0(t);
            {
              t = term_g_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
          {
            ATerm h_25 = t;
            int i_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm u_44 = NULL;
                    u_44 = t;
                    if(((t_44 != NULL) && (t_44 != u_44)))
                      _fail(u_44);
                    else
                      t_44 = u_44;
                    return(t);
                  }
                  t = Undefined_1(t, u_4);
                  return(t);
                }
                t = fetch_1(t, t_4);
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_44)), term_n_25);
                    return(t);
                  }
                  t = say_1(t, a_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_25);
              }
            else
              {
                t = h_25;
                {
                }
              }
          }
        }
      {
        ATerm o_25;
        o_25 = t;
        {
          t = term_s_20;
          t = table_destroy_0(t);
        }
        t = o_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm))
{
  t = parse_options_1(t, d_75);
  {
    t = store_options_0(t);
    {
      t = f_75(t);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_75);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            {
              ATerm s_25 = t;
              int x_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_25);
                }
              else
                {
                  t = s_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm))
{
  t = option_wrap_4(t, h_75, default_usage_0, _id, i_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_73(t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = xtc_io_1(t, u_73);
    return(t);
  }
  t = option_wrap_2(t, b_5, g_5);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm s_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, s_73);
  return(t);
}
ATerm io_parse_pp_table_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      t = term_b_26;
      return(t);
    }
    t = xtc_sglr_2(t, i_5, l_5);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, h_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_pp_table_0(t);
  return(t);
}