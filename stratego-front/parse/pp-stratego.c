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
ATerm term_f_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_o_24;
ATerm term_v_23;
ATerm term_l_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_c_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_e_14;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_j_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_x_6;
ATerm term_o_6;
ATerm term_g_6;
ATerm term_a_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_p_5;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_a_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_n_7);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_x_9);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_v_10);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_o_5, term_j_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_v_10);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_v_16, term_v_10);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_v_10);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__3, term_y_19, term_f_20, (ATerm) ATempty);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2text", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
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
ATerm obsolete_1 (ATerm, ATerm i_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm z_73 (ATerm));
ATerm debug_0 (ATerm);
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
ATerm need_help_1 (ATerm, ATerm a_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_80 (ATerm));
ATerm Program_1 (ATerm, ATerm k_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_79 (ATerm));
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
ATerm debug_1 (ATerm, ATerm b_75 (ATerm));
ATerm map_1 (ATerm, ATerm c_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm pp_stratego_0 (ATerm);
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
  ATerm j_1 = NULL;
  j_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_0 (ATerm t)
      {
        ATerm z_1 = NULL;
        ATerm s_2 = NULL;
        z_1 = t;
        {
          ATerm t_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), not_null(z_1));
          {
            t = table_get_0(t);
            {
              t_2 = t;
              if(((s_2 != NULL) && (s_2 != t_2)))
                _fail(t_2);
              else
                s_2 = t_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(s_2));
        }
        return(t);
      }
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm k_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5;
      n_5 = t;
      {
        ATerm d_3 = NULL;
        ATerm e_3 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            e_3 = t;
            if(((d_3 != NULL) && (d_3 != e_3)))
              _fail(e_3);
            else
              d_3 = e_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), term_p_5);
          t = geq_0(t);
        }
      }
      t = n_5;
      t = c_59(t);
      LocalPopChoice(m_5);
    }
  else
    {
      t = k_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_5;
  u_5 = t;
  {
    ATerm h_3 = NULL;
    ATerm i_3 = NULL;
    i_3 = t;
    if(((h_3 != NULL) && (h_3 != i_3)))
      _fail(i_3);
    else
      h_3 = i_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(h_3));
      t = printnl_0(t);
    }
  }
  t = u_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm o_3 = NULL;
  ATerm q_3 = NULL,r_3 = NULL;
  o_3 = t;
  {
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_3)));
    {
      t = table_get_0(t);
      {
        s_3 = t;
        m_3 :
        if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
          {
            t_3 = ATgetFirst((ATermList) s_3);
            w_3 = (ATerm) ATgetNext((ATermList) s_3);
            n_3 :
            if(match_cons(t_3, sym__2))
              {
                u_3 = ATgetArgument(t_3, 0);
                v_3 = ATgetArgument(t_3, 1);
                {
                  if(((q_3 != NULL) && (q_3 != u_3)))
                    _fail(u_3);
                  else
                    q_3 = u_3;
                  if(((r_3 != NULL) && (r_3 != v_3)))
                    _fail(v_3);
                  else
                    r_3 = v_3;
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
    t = not_null(r_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
  d_4 = t;
  c_4 :
  if(match_cons(d_4, sym__2))
    {
      e_4 = ATgetArgument(d_4, 0);
      f_4 = ATgetArgument(d_4, 1);
      {
        ATerm i_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_4)));
        {
          t = table_get_0(t);
          {
            ATerm c_0 (ATerm t)
            {
              ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
              j_4 = t;
              b_4 :
              if(match_cons(j_4, sym__2))
                {
                  k_4 = ATgetArgument(j_4, 0);
                  l_4 = ATgetArgument(j_4, 1);
                  {
                    if(((f_4 != NULL) && (f_4 != k_4)))
                      _fail(k_4);
                    else
                      f_4 = k_4;
                    if(((i_4 != NULL) && (i_4 != l_4)))
                      _fail(l_4);
                    else
                      i_4 = l_4;
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
        t = not_null(i_4);
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
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_6;
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
      LocalPopChoice(z_5);
    }
  else
    {
      t = y_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_6;
      n_6 = t;
      {
        ATerm p_4 = NULL;
        ATerm q_4 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_o_6);
          t = geq_0(t);
        }
      }
      t = n_6;
      t = b_59(t);
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6;
      r_6 = t;
      {
        ATerm t_4 = NULL;
        ATerm u_4 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            u_4 = t;
            if(((t_4 != NULL) && (t_4 != u_4)))
              _fail(u_4);
            else
              t_4 = u_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), term_x_6);
          t = geq_0(t);
        }
      }
      t = r_6;
      t = d_59(t);
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
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      if(((z_4 != NULL) && (z_4 != a_5)))
        _fail(a_5);
      else
        z_4 = a_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(((ATgetType(g_5) == AT_LIST) && !(ATisEmpty(g_5))))
    {
      h_5 = ATgetFirst((ATermList) g_5);
      i_5 = (ATerm) ATgetNext((ATermList) g_5);
      {
        t = e_70(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm l_5 = NULL;
            l_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(l_5));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, p_0);
        }
        t = not_null(i_5);
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
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym__2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        t = not_null(s_5);
        {
          ATerm x_5 (ATerm t)
          {
            ATerm y_6 = t;
            int c_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_5);
                LocalPopChoice(c_7);
              }
            else
              {
                t = y_6;
                {
                  ATerm d_7 = t;
                  int e_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(t_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, q_0);
                      t = x_5(t);
                      LocalPopChoice(e_7);
                    }
                  else
                    {
                      t = d_7;
                      t = Cons_2(t, _id, x_5);
                    }
                }
              }
            return(t);
          }
          t = x_5(t);
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
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym__3))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      f_6 = ATgetArgument(c_6, 2);
      {
        ATerm f_7;
        f_7 = t;
        {
          ATerm j_6 = NULL;
          ATerm k_6 = NULL,m_6 = NULL;
          ATerm l_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(e_6));
          {
            ATerm g_7 = t;
            int h_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_7);
              }
            else
              {
                t = g_7;
                t = (ATerm) ATempty;
              }
            {
              l_6 = t;
              if(((k_6 != NULL) && (k_6 != l_6)))
                _fail(l_6);
              else
                k_6 = l_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_6), not_null(f_6));
            {
              t = union_1(t, eq_0);
              {
                m_6 = t;
                if(((j_6 != NULL) && (j_6 != m_6)))
                  _fail(m_6);
                else
                  j_6 = m_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_6), not_null(e_6), not_null(j_6));
            t = table_put_0(t);
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
ATerm table_putlist_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym__2))
    {
      v_6 = ATgetArgument(u_6, 0);
      w_6 = ATgetArgument(u_6, 1);
      {
        t = not_null(w_6);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
            z_6 = t;
            s_6 :
            if(match_cons(z_6, sym__2))
              {
                a_7 = ATgetArgument(z_6, 0);
                b_7 = ATgetArgument(z_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_6), not_null(a_7), not_null(b_7));
                  t = m_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_0);
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
  ATerm i_7 = NULL;
  ATerm k_7 = NULL;
  i_7 = t;
  {
    ATerm j_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_7;
      }
    {
      ATerm m_7;
      m_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_5, term_n_7, (ATerm) ATinsert(ATempty, not_null(i_7)));
        t = table_put_0(t);
      }
      t = m_7;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm t_0 (ATerm t)
          {
            t = term_o_7;
            return(t);
          }
          t = debug_1(t, t_0);
          return(t);
        }
        t = if_verbose4_1(t, s_0);
        {
          ATerm q_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(r_7);
            }
          else
            {
              t = q_7;
              t = (ATerm) ATempty;
            }
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_s_7;
                return(t);
              }
              t = say_1(t, v_0);
              return(t);
            }
            t = if_verbose6_1(t, u_0);
            {
              ATerm l_7 = NULL;
              l_7 = t;
              if(((k_7 != NULL) && (k_7 != l_7)))
                _fail(l_7);
              else
                k_7 = l_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(k_7));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm x_0 (ATerm t)
                      {
                        t = term_v_7;
                        return(t);
                      }
                      t = say_1(t, x_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, w_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_w_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_7)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm z_0 (ATerm t)
                            {
                              t = term_s_7;
                              return(t);
                            }
                            t = say_1(t, z_0);
                            return(t);
                          }
                          t = if_verbose4_1(t, y_0);
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
  ATerm p_7 = NULL;
  p_7 = t;
  t = SSL_getenv(not_null(p_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_8;
      t = get_config_0(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = w_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_8;
            t = getenv_0(t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      t = term_j_8;
      return(t);
    }
    t = debug_1(t, b_1);
    return(t);
  }
  t = if_verbose5_1(t, a_1);
  {
    ATerm m_8;
    m_8 = t;
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_p_8;
          t = table_get_0(t);
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = m_8;
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          t = term_q_8;
          return(t);
        }
        t = debug_1(t, d_1);
        return(t);
      }
      t = if_verbose5_1(t, c_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = term_x_8;
          return(t);
        }
        t = debug_1(t, f_1);
        return(t);
      }
      t = if_verbose5_1(t, e_1);
      {
        t = xtc_load_0(t);
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm g_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = term_x_8;
                return(t);
              }
              t = debug_1(t, h_1);
              return(t);
            }
            t = if_verbose5_1(t, g_1);
          }
        }
      }
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        ATerm t_7 = NULL;
        ATerm u_7 = NULL;
        u_7 = t;
        if(((t_7 != NULL) && (t_7 != u_7)))
          _fail(u_7);
        else
          t_7 = u_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_9), not_null(t_7)), term_b_9);
          {
            t = error_0(t);
            {
              ATerm i_1 (ATerm t)
              {
                t = term_w_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      t = term_f_9;
                      return(t);
                    }
                    t = debug_1(t, k_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, i_1);
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
  ATerm x_7 = NULL;
  ATerm g_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL;
      y_7 = t;
      {
        if(((x_7 != NULL) && (x_7 != y_7)))
          _fail(y_7);
        else
          x_7 = y_7;
        t = SSL_ReadFromFile(not_null(x_7));
      }
      LocalPopChoice(i_9);
    }
  else
    {
      t = g_9;
      {
        ATerm l_1 (ATerm t)
        {
          t = term_j_9;
          return(t);
        }
        t = debug_1(t, l_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_stdin_0))
    {
      ATerm h_8 = NULL;
      ATerm i_8 = NULL;
      t = term_k_9;
      {
        t = ReadFromFile_0(t);
        {
          i_8 = t;
          if(((h_8 != NULL) && (h_8 != i_8)))
            _fail(i_8);
          else
            h_8 = i_8;
        }
      }
      t = not_null(h_8);
    }
  else
    {
      if(match_cons(f_8, sym_FILE_1))
        {
          g_8 = ATgetArgument(f_8, 0);
          {
            ATerm k_8 = NULL;
            ATerm l_8 = NULL;
            t = not_null(g_8);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_8 = t;
                  if(((k_8 != NULL) && (k_8 != l_8)))
                    _fail(l_8);
                  else
                    k_8 = l_8;
                }
              }
            }
            t = not_null(k_8);
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
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym__2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      t = SSL_WriteToBinaryFile(not_null(t_8), not_null(u_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_9 = NULL;
  ATerm c_9 = NULL;
  a_9 = t;
  {
    ATerm d_9 = NULL;
    t = xtc_new_file_0(t);
    {
      d_9 = t;
      {
        if(((c_9 != NULL) && (c_9 != d_9)))
          _fail(d_9);
        else
          c_9 = d_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(a_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_9));
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
  ATerm h_9 = NULL;
  h_9 = t;
  t = SSL_close_file(not_null(h_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      t = SSL_execvp(not_null(n_9), not_null(o_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  t = SSL_waitpid(not_null(t_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm d_10 = NULL;
  ATerm f_10 = NULL;
  d_10 = t;
  {
    t = fork_0(t);
    {
      f_10 = t;
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_10 = NULL;
            h_10 = t;
            z_9 :
            if(match_int(h_10, 0))
              {
                t = not_null(d_10);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            {
              ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
              t = not_null(f_10);
              {
                t = waitpid_0(t);
                {
                  i_10 = t;
                  b_10 :
                  if(match_cons(i_10, sym_WaitStatus_3))
                    {
                      j_10 = ATgetArgument(i_10, 0);
                      k_10 = ATgetArgument(i_10, 1);
                      l_10 = ATgetArgument(i_10, 2);
                      c_10 :
                      if(match_int(j_10, 0))
                        {
                          t = not_null(d_10);
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
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym__2))
    {
      t_10 = ATgetArgument(s_10, 0);
      u_10 = ATgetArgument(s_10, 1);
      {
        ATerm m_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(u_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, m_1);
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
  ATerm a_11 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm b_11 = NULL;
    t = y_73(t);
    {
      t = xtc_find_0(t);
      {
        b_11 = t;
        if(((a_11 != NULL) && (a_11 != b_11)))
          _fail(b_11);
        else
          a_11 = b_11;
      }
    }
  }
  t = r_9;
  {
    ATerm s_9;
    s_9 = t;
    {
      ATerm c_11 = NULL;
      ATerm d_11 = NULL;
      d_11 = t;
      if(((c_11 != NULL) && (c_11 != d_11)))
        _fail(d_11);
      else
        c_11 = d_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(c_11));
        t = call_0(t);
      }
    }
    t = s_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
        ATerm u_9;
        u_9 = t;
        {
          ATerm t_11 = NULL;
          ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
          t = u_74(t);
          {
            t_11 = t;
            {
              if(((q_11 != NULL) && (q_11 != t_11)))
                _fail(t_11);
              else
                q_11 = t_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_11), not_null(m_11), not_null(n_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_9 = t;
                    int w_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_x_9);
                        t = table_get_0(t);
                        LocalPopChoice(w_9);
                      }
                    else
                      {
                        t = v_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_11 = t;
                      j_11 :
                      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
                        {
                          v_11 = ATgetFirst((ATermList) u_11);
                          w_11 = (ATerm) ATgetNext((ATermList) u_11);
                          {
                            if(((r_11 != NULL) && (r_11 != v_11)))
                              _fail(v_11);
                            else
                              r_11 = v_11;
                            {
                              if(((s_11 != NULL) && (s_11 != w_11)))
                                _fail(w_11);
                              else
                                s_11 = w_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_11), term_x_9, (ATerm) ATinsert(CheckATermList(not_null(s_11)), (ATerm) ATinsert(CheckATermList(not_null(r_11)), not_null(m_11))));
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
        t = u_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm y_9;
  y_9 = t;
  {
    t = i_75(t);
    {
      ATerm n_1 (ATerm t)
      {
        t = term_a_10;
        return(t);
      }
      t = debug_1(t, n_1);
    }
  }
  t = y_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  ATerm e_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
      g_12 = t;
      b_12 :
      if(match_cons(g_12, sym__2))
        {
          h_12 = ATgetArgument(g_12, 0);
          i_12 = ATgetArgument(g_12, 1);
          {
            if(((f_12 != NULL) && (f_12 != h_12)))
              _fail(h_12);
            else
              f_12 = h_12;
            if(((e_12 != NULL) && (e_12 != i_12)))
              _fail(i_12);
            else
              e_12 = i_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_10);
      t = SSL_open_file(not_null(f_12), not_null(e_12));
    }
  else
    {
      t = e_10;
      {
        ATerm j_12 = NULL;
        ATerm k_12 = NULL;
        ATerm o_1 (ATerm t)
        {
          t = term_m_10;
          return(t);
        }
        t = obsolete_1(t, o_1);
        {
          j_12 = t;
          {
            if(((f_12 != NULL) && (f_12 != j_12)))
              _fail(j_12);
            else
              f_12 = j_12;
            {
              ATerm n_10;
              n_10 = t;
              {
                ATerm l_12 = NULL;
                t = term_o_10;
                {
                  l_12 = t;
                  if(((k_12 != NULL) && (k_12 != l_12)))
                    _fail(l_12);
                  else
                    k_12 = l_12;
                }
              }
              t = n_10;
              t = SSL_open_file(not_null(f_12), not_null(k_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_12 = NULL;
  ATerm t_12 = NULL;
  r_12 = t;
  {
    ATerm p_10;
    p_10 = t;
    {
      ATerm u_12 = NULL;
      t = term_q_10;
      {
        u_12 = t;
        if(((t_12 != NULL) && (t_12 != u_12)))
          _fail(u_12);
        else
          t_12 = u_12;
      }
    }
    t = p_10;
    {
      t = SSL_open_file(not_null(r_12), not_null(t_12));
      t = SSL_close_file(not_null(r_12));
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
  ATerm y_12 = NULL;
  ATerm z_12 = NULL;
  t = term_v_10;
  {
    t = new_0(t);
    {
      z_12 = t;
      if(((y_12 != NULL) && (y_12 != z_12)))
        _fail(z_12);
      else
        y_12 = z_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_w_10);
    {
      t = conc_strings_0(t);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
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
  ATerm d_13 = NULL;
  t = new_file_0(t);
  {
    d_13 = t;
    {
      ATerm z_10;
      z_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_o_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_v_10);
            {
              ATerm p_1 (ATerm t)
              {
                t = term_e_11;
                return(t);
              }
              t = assert_1(t, p_1);
            }
          }
        }
      }
      t = z_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_stdin_0))
    {
      ATerm p_13 = NULL;
      ATerm q_13 = NULL;
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
            t = o_0(t);
            {
              s_13 = t;
              if(((r_13 != NULL) && (r_13 != s_13)))
                _fail(s_13);
              else
                r_13 = s_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_f_11));
              {
                ATerm g_11 = t;
                int h_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(h_11);
                  }
                else
                  {
                    t = g_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
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
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_13));
    }
  else
    {
      if(match_cons(n_13, sym_FILE_1))
        {
          o_13 = ATgetArgument(n_13, 0);
          {
            ATerm u_13 = NULL;
            ATerm v_13 = NULL;
            t = not_null(o_13);
            {
              ATerm w_13 = NULL;
              t = xtc_new_file_0(t);
              {
                v_13 = t;
                {
                  if(((u_13 != NULL) && (u_13 != v_13)))
                    _fail(v_13);
                  else
                    u_13 = v_13;
                  {
                    ATerm x_13 = NULL;
                    t = o_0(t);
                    {
                      x_13 = t;
                      if(((w_13 != NULL) && (w_13 != x_13)))
                        _fail(x_13);
                      else
                        w_13 = x_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_13)), term_f_11), not_null(o_13)), term_i_11));
                      {
                        ATerm o_11 = t;
                        int p_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(p_11);
                          }
                        else
                          {
                            t = o_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_13));
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
  ATerm i_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_stdin_0))
    {
      ATerm k_14 = NULL,m_14 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
      }
      t = x_11;
      {
        ATerm n_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
        t = not_null(m_14);
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
  ATerm w_14 = NULL,x_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_FILE_1))
    {
      x_14 = ATgetArgument(w_14, 0);
      {
        ATerm a_15 = NULL,c_15 = NULL;
        ATerm b_15 = NULL;
        t = SSLgetAnnotations(not_null(w_14));
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
        {
          t = not_null(x_14);
          {
            ATerm e_15 = NULL;
            t = l_52(t);
            {
              c_15 = t;
              {
                ATerm f_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_15)), not_null(a_15));
                {
                  f_15 = t;
                  if(((e_15 != NULL) && (e_15 != f_15)))
                    _fail(f_15);
                  else
                    e_15 = f_15;
                }
                t = not_null(e_15);
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(c_12);
        }
      else
        {
          t = a_12;
          t = stdin_0(t);
        }
      LocalPopChoice(z_11);
      t = xtc_transform_file_2(t, a_74, b_74);
    }
  else
    {
      t = y_11;
      t = xtc_transform_term_2(t, a_74, b_74);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, z_73, q_1);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm d_12;
  d_12 = t;
  {
    ATerm l_15 = NULL;
    ATerm m_15 = NULL;
    m_15 = t;
    if(((l_15 != NULL) && (l_15 != m_15)))
      _fail(m_15);
    else
      l_15 = m_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(l_15)));
      t = printnl_0(t);
    }
  }
  t = d_12;
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym__2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      t = SSL_copy(not_null(r_15), not_null(s_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_stderr_0))
    {
      ATerm c_16 = NULL,e_16 = NULL;
      ATerm m_12;
      m_12 = t;
      {
        ATerm d_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          d_16 = t;
          if(((c_16 != NULL) && (c_16 != d_16)))
            _fail(d_16);
          else
            c_16 = d_16;
        }
      }
      t = m_12;
      {
        ATerm f_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(c_16));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
        t = not_null(e_16);
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
  ATerm n_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym_stdout_0))
    {
      ATerm p_16 = NULL,r_16 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm q_16 = NULL;
        t = SSLgetAnnotations(not_null(n_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
      }
      t = n_12;
      {
        ATerm s_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_16));
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
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_FILE_1))
    {
      f_17 = ATgetArgument(e_17, 0);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = NULL;
            ATerm i_17 = NULL;
            t = m_0(t);
            {
              i_17 = t;
              {
                if(((h_17 != NULL) && (h_17 != i_17)))
                  _fail(i_17);
                else
                  h_17 = i_17;
                {
                  ATerm q_12 = t;
                  int s_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(s_12);
                    }
                  else
                    {
                      t = q_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_17));
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm v_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_17 = NULL;
                  ATerm l_17 = NULL;
                  t = m_0(t);
                  {
                    l_17 = t;
                    {
                      if(((k_17 != NULL) && (k_17 != l_17)))
                        _fail(l_17);
                      else
                        k_17 = l_17;
                      {
                        ATerm x_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_13 = t;
                            int b_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(b_13);
                              }
                            else
                              {
                                t = a_13;
                                {
                                  ATerm c_13 = t;
                                  int e_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(e_13);
                                    }
                                  else
                                    {
                                      t = c_13;
                                      {
                                        ATerm m_17 = NULL;
                                        m_17 = t;
                                        if(((f_17 != NULL) && (f_17 != m_17)))
                                          _fail(m_17);
                                        else
                                          f_17 = m_17;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = x_12;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(k_17));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_17));
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = v_12;
                  {
                    ATerm o_17 = NULL;
                    t = m_0(t);
                    {
                      o_17 = t;
                      if(((f_17 != NULL) && (f_17 != o_17)))
                        _fail(o_17);
                      else
                        f_17 = o_17;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_17));
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
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  x_17 :
  if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
    {
      z_17 = ATgetFirst((ATermList) y_17);
      a_18 = (ATerm) ATgetNext((ATermList) y_17);
      t = not_null(a_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym__2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm l_18 = NULL;
          ATerm m_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(i_18));
          {
            ATerm g_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_13);
              }
            else
              {
                t = g_13;
                t = (ATerm) ATempty;
              }
            {
              m_18 = t;
              if(((l_18 != NULL) && (l_18 != m_18)))
                _fail(m_18);
              else
                l_18 = m_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_18), not_null(i_18), not_null(l_18));
            t = table_put_0(t);
          }
        }
        t = f_13;
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
  ATerm t_18 = NULL,v_18 = NULL,w_18 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm x_18 = NULL;
    ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
    t = r_74(t);
    {
      x_18 = t;
      {
        if(((w_18 != NULL) && (w_18 != x_18)))
          _fail(x_18);
        else
          w_18 = x_18;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), term_x_9);
              t = table_get_0(t);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            y_18 = t;
            s_18 :
            if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
              {
                z_18 = ATgetFirst((ATermList) y_18);
                a_19 = (ATerm) ATgetNext((ATermList) y_18);
                {
                  if(((v_18 != NULL) && (v_18 != z_18)))
                    _fail(z_18);
                  else
                    v_18 = z_18;
                  {
                    if(((t_18 != NULL) && (t_18 != a_19)))
                      _fail(a_19);
                    else
                      t_18 = a_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_18), term_x_9, not_null(t_18));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(v_18);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm b_19 = NULL;
                              b_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), not_null(b_19));
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
  t = i_13;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  t = SSL_remove(not_null(h_19));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm l_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      t = c_63(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = l_13;
      {
        t = c_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm m_19 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm n_19 = NULL;
    ATerm p_19 = NULL;
    t = q_74(t);
    {
      n_19 = t;
      {
        if(((m_19 != NULL) && (m_19 != n_19)))
          _fail(n_19);
        else
          m_19 = n_19;
        {
          ATerm q_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), term_x_9);
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_19), term_x_9, (ATerm) ATinsert(CheckATermList(not_null(p_19)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm a_20 = NULL,b_20 = NULL;
  ATerm s_1 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  t = begin_scope_1(t, s_1);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm b_14;
      b_14 = t;
      {
        ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_14;
            t = table_get_0(t);
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          c_20 = t;
          z_19 :
          if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
            {
              d_20 = ATgetFirst((ATermList) c_20);
              e_20 = (ATerm) ATgetNext((ATermList) c_20);
              {
                if(((b_20 != NULL) && (b_20 != d_20)))
                  _fail(d_20);
                else
                  b_20 = d_20;
                {
                  if(((a_20 != NULL) && (a_20 != e_20)))
                    _fail(e_20);
                  else
                    a_20 = e_20;
                  {
                    t = not_null(b_20);
                    {
                      ATerm u_1 (ATerm t)
                      {
                        ATerm f_14 = t;
                        int g_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(g_14);
                          }
                        else
                          {
                            t = f_14;
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
      t = b_14;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_e_11;
          return(t);
        }
        t = end_scope_1(t, v_1);
      }
      return(t);
    }
    t = restore_always_2(t, o_73, t_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm j_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL;
        ATerm k_20 = NULL;
        t = term_i_11;
        {
          t = get_config_0(t);
          {
            k_20 = t;
            if(((j_20 != NULL) && (j_20 != k_20)))
              _fail(k_20);
            else
              j_20 = k_20;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_20));
        LocalPopChoice(o_14);
      }
    else
      {
        t = j_14;
        t = term_k_9;
      }
    {
      t = p_73(t);
      {
        ATerm x_1 (ATerm t)
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_f_11;
              t = get_config_0(t);
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              t = term_r_14;
            }
          return(t);
        }
        t = copy_to_1(t, x_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, w_1);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm n_20 = NULL;
    n_20 = t;
    m_20 :
    if(!(match_string(n_20, "-v")))
      {
        if(!(match_string(n_20, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_t_14;
    t = set_config_0(t);
    t = term_u_14;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_y_14;
    return(t);
  }
  t = Option_3(t, y_1, a_2, b_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm v_20 = NULL;
    v_20 = t;
    t_20 :
    if(!(match_string(v_20, "-k")))
      {
        if(!(match_string(v_20, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm z_14;
    z_14 = t;
    {
      ATerm w_20 = NULL;
      ATerm x_20 = NULL;
      t = string_to_int_0(t);
      {
        x_20 = t;
        if(((w_20 != NULL) && (w_20 != x_20)))
          _fail(x_20);
        else
          w_20 = x_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, not_null(w_20));
        t = set_config_0(t);
      }
    }
    t = z_14;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_g_15;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  t = SSL_string_to_int(not_null(a_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm i_21 = NULL;
        i_21 = t;
        d_21 :
        if(!(match_string(i_21, "-S")))
          {
            if(!(match_string(i_21, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_k_15;
        t = set_config_0(t);
        t = term_n_15;
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_o_15;
        return(t);
      }
      t = Option_3(t, f_2, g_2, h_2);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm o_21 = NULL;
              o_21 = t;
              e_21 :
              if(!(match_string(o_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              ATerm r_21 = NULL;
              ATerm v_15;
              v_15 = t;
              {
                ATerm p_21 = NULL;
                ATerm q_21 = NULL;
                t = string_to_int_0(t);
                {
                  q_21 = t;
                  if(((p_21 != NULL) && (p_21 != q_21)))
                    _fail(q_21);
                  else
                    p_21 = q_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_5, not_null(p_21));
                  t = set_config_0(t);
                }
              }
              t = v_15;
              {
                ATerm w_21 = NULL;
                w_21 = t;
                if(((r_21 != NULL) && (r_21 != w_21)))
                  _fail(w_21);
                else
                  r_21 = w_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_21));
              }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = term_w_15;
              return(t);
            }
            t = ArgOption_3(t, i_2, j_2, k_2);
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            {
              ATerm l_2 (ATerm t)
              {
                ATerm x_21 = NULL;
                x_21 = t;
                h_21 :
                if(!(match_string(x_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_y_15;
                t = set_config_0(t);
                t = term_b_16;
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_g_16;
                return(t);
              }
              t = Option_3(t, l_2, m_2, n_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm m_22 = NULL;
    m_22 = t;
    i_22 :
    if(!(match_string(m_22, "-o")))
      {
        if(!(match_string(m_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm p_22 = NULL;
    ATerm l_16;
    l_16 = t;
    {
      ATerm n_22 = NULL;
      ATerm o_22 = NULL;
      o_22 = t;
      if(((n_22 != NULL) && (n_22 != o_22)))
        _fail(o_22);
      else
        n_22 = o_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(n_22));
        t = set_config_0(t);
      }
    }
    t = l_16;
    {
      ATerm q_22 = NULL;
      q_22 = t;
      if(((p_22 != NULL) && (p_22 != q_22)))
        _fail(q_22);
      else
        p_22 = q_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_22));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm u_22 = NULL;
          u_22 = t;
          t_22 :
          if(!(match_string(u_22, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_w_16;
          t = set_config_0(t);
          t = term_x_16;
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = Option_3(t, r_2, u_2, v_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  a_23 = t;
  y_22 :
  if(match_string(a_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
        {
          b_23 = ATgetFirst((ATermList) a_23);
          c_23 = (ATerm) ATgetNext((ATermList) a_23);
          z_22 :
          if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
            {
              d_23 = ATgetFirst((ATermList) c_23);
              e_23 = (ATerm) ATgetNext((ATermList) c_23);
              {
                ATerm i_23 = NULL;
                ATerm z_16;
                z_16 = t;
                {
                  t = not_null(b_23);
                  t = j_0(t);
                }
                t = z_16;
                {
                  ATerm j_23 = NULL;
                  t = not_null(d_23);
                  {
                    t = k_0(t);
                    {
                      j_23 = t;
                      if(((i_23 != NULL) && (i_23 != j_23)))
                        _fail(j_23);
                      else
                        i_23 = j_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_23)), not_null(i_23));
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
  ATerm w_2 (ATerm t)
  {
    ATerm q_23 = NULL;
    q_23 = t;
    n_23 :
    if(!(match_string(q_23, "-i")))
      {
        if(!(match_string(q_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm y_23 = NULL;
    ATerm a_17;
    a_17 = t;
    {
      ATerm w_23 = NULL;
      ATerm x_23 = NULL;
      x_23 = t;
      if(((w_23 != NULL) && (w_23 != x_23)))
        _fail(x_23);
      else
        w_23 = x_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(w_23));
        t = set_config_0(t);
      }
    }
    t = a_17;
    {
      ATerm z_23 = NULL;
      z_23 = t;
      if(((y_23 != NULL) && (y_23 != z_23)))
        _fail(z_23);
      else
        y_23 = z_23;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_23));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_b_17;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = c_17;
      {
        ATerm j_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = j_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm e_24 = NULL;
  ATerm p_17;
  p_17 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm f_24 = NULL,g_24 = NULL;
      f_24 = t;
      d_24 :
      if(match_cons(f_24, sym_Program_1))
        {
          g_24 = ATgetArgument(f_24, 0);
          if(((e_24 != NULL) && (e_24 != g_24)))
            _fail(g_24);
          else
            e_24 = g_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, z_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_17), not_null(e_24)), term_q_17));
      {
        t = printnl_0(t);
        {
          t = term_s_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_t_17));
  {
    t = printnl_0(t);
    {
      t = term_s_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_TicksToSeconds(not_null(j_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym__2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_24), not_null(u_24));
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = SSL_addr(not_null(t_24), not_null(u_24));
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
  ATerm w_17 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = w_17;
      {
        ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
        b_25 = t;
        a_25 :
        if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
          {
            c_25 = ATgetFirst((ATermList) b_25);
            d_25 = (ATerm) ATgetNext((ATermList) b_25);
            {
              ATerm g_25 = NULL;
              ATerm h_25 = NULL;
              t = not_null(d_25);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  h_25 = t;
                  if(((g_25 != NULL) && (g_25 != h_25)))
                    _fail(h_25);
                  else
                    g_25 = h_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(g_25));
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
  ATerm o_25 = NULL;
  ATerm q_25 = NULL;
  o_25 = t;
  {
    ATerm r_25 = NULL;
    ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
    t = not_null(o_25);
    {
      r_25 = t;
      {
        t = SSL_explode_term(not_null(r_25));
        {
          t_25 = t;
          n_25 :
          if(match_cons(t_25, sym__2))
            {
              u_25 = ATgetArgument(t_25, 0);
              v_25 = ATgetArgument(t_25, 1);
              if(((q_25 != NULL) && (q_25 != v_25)))
                _fail(v_25);
              else
                q_25 = v_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_25);
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
    ATerm a_3 (ATerm t)
    {
      t = term_j_15;
      return(t);
    }
    t = crush_2(t, a_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym__2))
    {
      c_26 = ATgetArgument(b_26, 0);
      d_26 = ATgetArgument(b_26, 1);
      {
        ATerm c_18;
        c_18 = t;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_26), not_null(d_26));
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = SSL_gtr(not_null(c_26), not_null(d_26));
            }
        }
        t = c_18;
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
  ATerm j_26 = NULL;
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
      k_26 = t;
      i_26 :
      if(match_cons(k_26, sym__2))
        {
          l_26 = ATgetArgument(k_26, 0);
          m_26 = ATgetArgument(k_26, 1);
          {
            if(((j_26 != NULL) && (j_26 != l_26)))
              _fail(l_26);
            else
              j_26 = l_26;
            if(((j_26 != NULL) && (j_26 != m_26)))
              _fail(m_26);
            else
              j_26 = m_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18;
      p_18 = t;
      {
        ATerm p_26 = NULL;
        ATerm q_26 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            q_26 = t;
            if(((p_26 != NULL) && (p_26 != q_26)))
              _fail(q_26);
            else
              p_26 = q_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), term_s_17);
          t = geq_0(t);
        }
      }
      t = p_18;
      t = y_58(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm u_26 = NULL,w_26 = NULL;
    ATerm q_18;
    q_18 = t;
    {
      ATerm v_26 = NULL;
      t = run_time_0(t);
      {
        v_26 = t;
        if(((u_26 != NULL) && (u_26 != v_26)))
          _fail(v_26);
        else
          u_26 = v_26;
      }
    }
    t = q_18;
    {
      ATerm x_26 = NULL;
      t = term_r_18;
      {
        t = get_config_0(t);
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), not_null(u_26)), term_u_18), not_null(w_26)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_3);
  {
    t = term_j_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_Version_0))
    {
      ATerm g_27 = NULL,i_27 = NULL;
      ATerm d_19;
      d_19 = t;
      {
        ATerm h_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
      }
      t = d_19;
      {
        ATerm j_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        t = not_null(i_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        {
          ATerm g_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_19);
            }
          else
            {
              t = g_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_3);
  t = a_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  t = SSL_table_create(not_null(o_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  {
    ATerm j_19;
    j_19 = t;
    {
      t = term_k_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_19, term_l_19, not_null(s_27));
          t = table_put_0(t);
        }
      }
    }
    t = j_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_table_destroy(not_null(w_27));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = SSL_exit(not_null(a_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(((ATgetType(e_28) == AT_LIST) && ATisEmpty(e_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
        {
          f_28 = ATgetFirst((ATermList) e_28);
          g_28 = (ATerm) ATgetNext((ATermList) e_28);
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
  ATerm o_19;
  o_19 = t;
  {
    ATerm j_28 = NULL;
    ATerm m_28 = NULL;
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm k_28 = NULL;
          ATerm l_28 = NULL;
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
          t = (ATerm) ATinsert(ATempty, not_null(k_28));
        }
      }
    {
      m_28 = t;
      if(((j_28 != NULL) && (j_28 != m_28)))
        _fail(m_28);
      else
        j_28 = m_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(j_28));
      t = printnl_0(t);
    }
  }
  t = o_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  x_28 = t;
  u_28 :
  if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
    {
      v_28 = ATgetFirst((ATermList) x_28);
      w_28 = (ATerm) ATgetNext((ATermList) x_28);
      {
        ATerm b_29 = NULL;
        t = not_null(w_28);
        {
          ATerm t_19;
          t_19 = t;
          {
            ATerm c_29 = NULL,e_29 = NULL,i_29 = NULL;
            ATerm u_19;
            u_19 = t;
            {
              ATerm d_29 = NULL;
              t = i_0(t);
              {
                d_29 = t;
                if(((c_29 != NULL) && (c_29 != d_29)))
                  _fail(d_29);
                else
                  c_29 = d_29;
              }
            }
            t = u_19;
            {
              ATerm f_29 = NULL;
              t = not_null(v_28);
              {
                t = h_0(t);
                {
                  f_29 = t;
                  if(((e_29 != NULL) && (e_29 != f_29)))
                    _fail(f_29);
                  else
                    e_29 = f_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_29)), not_null(e_29));
                {
                  i_29 = t;
                  if(((b_29 != NULL) && (b_29 != i_29)))
                    _fail(i_29);
                  else
                    b_29 = i_29;
                }
              }
            }
          }
          t = t_19;
          {
            ATerm f_3 (ATerm t)
            {
              t = not_null(b_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_28) == AT_LIST) && ATisEmpty(x_28)))
        {
          {
            t = term_v_10;
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
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym_Program_1))
    {
      x_29 = ATgetArgument(w_29, 0);
      {
        ATerm a_30 = NULL,e_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(w_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(x_29);
          {
            ATerm g_30 = NULL;
            t = k_57(t);
            {
              e_30 = t;
              {
                ATerm h_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_30)), not_null(a_30));
                {
                  h_30 = t;
                  if(((g_30 != NULL) && (g_30 != h_30)))
                    _fail(h_30);
                  else
                    g_30 = h_30;
                }
                t = not_null(g_30);
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
  ATerm p_30 = NULL;
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30 = NULL;
      t = term_r_18;
      {
        t = get_config_0(t);
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
      }
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm r_30 = NULL;
            r_30 = t;
            if(((p_30 != NULL) && (p_30 != r_30)))
              _fail(r_30);
            else
              p_30 = r_30;
            return(t);
          }
          t = Program_1(t, k_3);
          return(t);
        }
        t = fetch_1(t, j_3);
      }
    }
  {
    t = term_x_19;
    {
      t = echo_0(t);
      {
        t = term_g_20;
        {
          t = table_get_0(t);
          {
            ATerm l_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, l_3);
            {
              ATerm p_3 (ATerm t)
              {
                ATerm s_30 = NULL;
                ATerm t_30 = NULL;
                t_30 = t;
                if(((s_30 != NULL) && (s_30 != t_30)))
                  _fail(t_30);
                else
                  s_30 = t_30;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_30)), term_h_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, p_3);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm i_20;
  i_20 = t;
  {
    t = c_75(t);
    t = debug_0(t);
  }
  t = i_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm c_31 = NULL,d_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym_Undefined_1))
    {
      d_31 = ATgetArgument(c_31, 0);
      {
        ATerm g_31 = NULL,i_31 = NULL;
        ATerm h_31 = NULL;
        t = SSLgetAnnotations(not_null(c_31));
        {
          h_31 = t;
          if(((g_31 != NULL) && (g_31 != h_31)))
            _fail(h_31);
          else
            g_31 = h_31;
        }
        {
          t = not_null(d_31);
          {
            ATerm k_31 = NULL;
            t = l_57(t);
            {
              i_31 = t;
              {
                ATerm l_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_31)), not_null(g_31));
                {
                  l_31 = t;
                  if(((k_31 != NULL) && (k_31 != l_31)))
                    _fail(l_31);
                  else
                    k_31 = l_31;
                }
                t = not_null(k_31);
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
  ATerm q_31 (ATerm t)
  {
    ATerm l_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(o_20);
      }
    else
      {
        t = l_20;
        t = Cons_2(t, _id, q_31);
      }
    return(t);
  }
  t = q_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_79 (ATerm))
{
  t = fetch_1(t, h_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_Help_0))
    {
      ATerm z_31 = NULL,g_32 = NULL;
      ATerm p_20;
      p_20 = t;
      {
        ATerm f_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          f_32 = t;
          if(((z_31 != NULL) && (z_31 != f_32)))
            _fail(f_32);
          else
            z_31 = f_32;
        }
      }
      t = p_20;
      {
        ATerm h_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_31));
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
        t = not_null(g_32);
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
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_implode_string(not_null(o_32));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
        v_32 = t;
        u_32 :
        if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
          {
            w_32 = ATgetFirst((ATermList) v_32);
            x_32 = (ATerm) ATgetNext((ATermList) v_32);
            {
              t = not_null(w_32);
              {
                ATerm x_3 (ATerm t)
                {
                  t = not_null(x_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_3);
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
  ATerm r_33 = NULL;
  ATerm w_33 = NULL;
  r_33 = t;
  {
    ATerm x_33 = NULL;
    ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
    t = not_null(r_33);
    {
      x_33 = t;
      {
        t = SSL_explode_term(not_null(x_33));
        {
          a_34 = t;
          p_33 :
          if(match_cons(a_34, sym__2))
            {
              b_34 = ATgetArgument(a_34, 0);
              c_34 = ATgetArgument(a_34, 1);
              q_33 :
              if(match_string(b_34, ""))
                {
                  if(((w_33 != NULL) && (w_33 != c_34)))
                    _fail(c_34);
                  else
                    w_33 = c_34;
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
      t = not_null(w_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm t_34 (ATerm t)
  {
    ATerm s_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_34);
        LocalPopChoice(u_20);
      }
    else
      {
        t = s_20;
        {
          t = Nil_0(t);
          t = r_64(t);
        }
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  v_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        t = not_null(b_35);
        {
          ATerm y_3 (ATerm t)
          {
            t = not_null(c_35);
            return(t);
          }
          t = at_end_1(t, y_3);
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
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_explode_string(not_null(m_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__2))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      {
        ATerm b_36 = NULL,d_36 = NULL;
        ATerm c_36 = NULL;
        t = SSLgetAnnotations(not_null(v_35));
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
        {
          t = not_null(w_35);
          {
            ATerm f_36 = NULL;
            t = p_50(t);
            {
              d_36 = t;
              {
                t = not_null(x_35);
                {
                  ATerm h_36 = NULL;
                  t = q_50(t);
                  {
                    f_36 = t;
                    {
                      ATerm i_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_36), not_null(f_36)), not_null(b_36));
                      {
                        i_36 = t;
                        if(((h_36 != NULL) && (h_36 != i_36)))
                          _fail(i_36);
                        else
                          h_36 = i_36;
                      }
                      t = not_null(h_36);
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
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym__2))
    {
      r_36 = ATgetArgument(q_36, 0);
      s_36 = ATgetArgument(q_36, 1);
      {
        ATerm f_21;
        f_21 = t;
        t = SSL_printnl(not_null(r_36), not_null(s_36));
        t = f_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm g_21;
  g_21 = t;
  {
    ATerm y_36 = NULL,a_37 = NULL;
    ATerm j_21;
    j_21 = t;
    {
      ATerm z_36 = NULL;
      t = b_75(t);
      {
        z_36 = t;
        if(((y_36 != NULL) && (y_36 != z_36)))
          _fail(z_36);
        else
          y_36 = z_36;
      }
    }
    t = j_21;
    {
      ATerm b_37 = NULL;
      b_37 = t;
      if(((a_37 != NULL) && (a_37 != b_37)))
        _fail(b_37);
      else
        a_37 = b_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_37)), not_null(y_36)));
        t = printnl_0(t);
      }
    }
  }
  t = g_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm e_37 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = Cons_2(t, c_64, e_37);
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  t = SSL_is_string(not_null(g_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm u_21 = t;
              int v_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_21);
                }
              else
                {
                  t = u_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_3);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
              p_37 = t;
              o_37 :
              if(match_cons(p_37, sym_Path_1))
                {
                  q_37 = ATgetArgument(p_37, 0);
                  t = not_null(q_37);
                }
              else
                {
                  if(match_cons(p_37, sym_Var_1))
                    {
                      q_37 = ATgetArgument(p_37, 0);
                      {
                        t = not_null(q_37);
                        {
                          ATerm y_21 = t;
                          int z_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_21);
                            }
                          else
                            {
                              t = y_21;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = term_a_22;
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
                      if(match_cons(p_37, sym_Prefix_2))
                        {
                          q_37 = ATgetArgument(p_37, 0);
                          r_37 = ATgetArgument(p_37, 1);
                          {
                            ATerm w_37 = NULL,y_37 = NULL;
                            ATerm b_22;
                            b_22 = t;
                            {
                              ATerm x_37 = NULL;
                              t = not_null(q_37);
                              {
                                t = eval_config_0(t);
                                {
                                  x_37 = t;
                                  if(((w_37 != NULL) && (w_37 != x_37)))
                                    _fail(x_37);
                                  else
                                    w_37 = x_37;
                                }
                              }
                            }
                            t = b_22;
                            {
                              ATerm z_37 = NULL;
                              t = not_null(r_37);
                              {
                                t = eval_config_0(t);
                                {
                                  z_37 = t;
                                  if(((y_37 != NULL) && (y_37 != z_37)))
                                    _fail(z_37);
                                  else
                                    y_37 = z_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_37), not_null(y_37));
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
  ATerm h_38 = NULL;
  h_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(h_38));
    {
      t = table_get_0(t);
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_22;
              f_22 = t;
              {
                ATerm j_38 = NULL;
                ATerm k_38 = NULL;
                k_38 = t;
                if(((j_38 != NULL) && (j_38 != k_38)))
                  _fail(k_38);
                else
                  j_38 = k_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(h_38), not_null(j_38));
                  t = table_put_0(t);
                }
              }
              t = f_22;
            }
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
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
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym__2))
    {
      q_38 = ATgetArgument(p_38, 0);
      r_38 = ATgetArgument(p_38, 1);
      t = SSL_table_get(not_null(q_38), not_null(r_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym__3))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      b_39 = ATgetArgument(y_38, 2);
      {
        ATerm j_22;
        j_22 = t;
        {
          ATerm f_39 = NULL;
          ATerm g_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_38), not_null(a_39));
          {
            ATerm k_22 = t;
            int l_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_22);
              }
            else
              {
                t = k_22;
                t = (ATerm) ATempty;
              }
            {
              g_39 = t;
              if(((f_39 != NULL) && (f_39 != g_39)))
                _fail(g_39);
              else
                f_39 = g_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_38), not_null(a_39), (ATerm) ATinsert(CheckATermList(not_null(f_39)), not_null(b_39)));
            t = table_put_0(t);
          }
        }
        t = j_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm k_39 = NULL;
  ATerm l_39 = NULL;
  t = term_v_10;
  {
    t = m_80(t);
    {
      l_39 = t;
      if(((k_39 != NULL) && (k_39 != l_39)))
        _fail(l_39);
      else
        k_39 = l_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_19, term_f_20, not_null(k_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_string(r_39, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
        {
          s_39 = ATgetFirst((ATermList) r_39);
          t_39 = (ATerm) ATgetNext((ATermList) r_39);
          {
            ATerm w_39 = NULL;
            ATerm r_22;
            r_22 = t;
            {
              t = not_null(s_39);
              t = a_0(t);
            }
            t = r_22;
            {
              ATerm x_39 = NULL;
              t = term_v_10;
              {
                t = d_0(t);
                {
                  x_39 = t;
                  if(((w_39 != NULL) && (w_39 != x_39)))
                    _fail(x_39);
                  else
                    w_39 = x_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_39)), not_null(w_39));
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
  ATerm g_4 (ATerm t)
  {
    ATerm f_40 = NULL;
    f_40 = t;
    e_40 :
    if(!(match_string(f_40, "--help")))
      {
        if(!(match_string(f_40, "-h")))
          {
            if(!(match_string(f_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_v_22;
    {
      t = set_config_0(t);
      t = term_w_22;
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_x_22;
    return(t);
  }
  t = Option_3(t, g_4, h_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
    {
      j_40 = ATgetFirst((ATermList) i_40);
      k_40 = (ATerm) ATgetNext((ATermList) i_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL,x_40 = NULL;
  u_40 = t;
  t_40 :
  if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
    {
      v_40 = ATgetFirst((ATermList) u_40);
      x_40 = (ATerm) ATgetNext((ATermList) u_40);
      {
        ATerm d_41 = NULL,f_41 = NULL;
        ATerm e_41 = NULL;
        t = SSLgetAnnotations(not_null(u_40));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
        {
          t = not_null(v_40);
          {
            ATerm h_41 = NULL;
            t = y_51(t);
            {
              f_41 = t;
              {
                t = not_null(x_40);
                {
                  ATerm j_41 = NULL;
                  t = z_51(t);
                  {
                    h_41 = t;
                    {
                      ATerm k_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_41)), not_null(f_41)), not_null(d_41));
                      {
                        k_41 = t;
                        if(((j_41 != NULL) && (j_41 != k_41)))
                          _fail(k_41);
                        else
                          j_41 = k_41;
                      }
                      t = not_null(j_41);
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
  ATerm u_41 = NULL;
  u_41 = t;
  t_41 :
  if(((ATgetType(u_41) == AT_LIST) && ATisEmpty(u_41)))
    {
      {
        ATerm w_41 = NULL,y_41 = NULL;
        ATerm f_23;
        f_23 = t;
        {
          ATerm x_41 = NULL;
          t = SSLgetAnnotations(not_null(u_41));
          {
            x_41 = t;
            if(((w_41 != NULL) && (w_41 != x_41)))
              _fail(x_41);
            else
              w_41 = x_41;
          }
        }
        t = f_23;
        {
          ATerm z_41 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_41));
          {
            z_41 = t;
            if(((y_41 != NULL) && (y_41 != z_41)))
              _fail(z_41);
            else
              y_41 = z_41;
          }
          t = not_null(y_41);
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
  ATerm i_42 = NULL,k_42 = NULL,l_42 = NULL;
  i_42 = t;
  g_42 :
  if(match_cons(i_42, sym__2))
    {
      k_42 = ATgetArgument(i_42, 0);
      l_42 = ATgetArgument(i_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(k_42), not_null(l_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm g_23;
  g_23 = t;
  {
    ATerm h_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_23;
        t = k_80(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = h_23;
        {
        }
      }
  }
  t = g_23;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm t_42 = NULL;
      ATerm m_23;
      m_23 = t;
      {
        ATerm r_42 = NULL;
        ATerm s_42 = NULL;
        s_42 = t;
        if(((r_42 != NULL) && (r_42 != s_42)))
          _fail(s_42);
        else
          r_42 = s_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_18, not_null(r_42));
          t = set_config_0(t);
        }
      }
      t = m_23;
      {
        ATerm u_42 = NULL;
        u_42 = t;
        if(((t_42 != NULL) && (t_42 != u_42)))
          _fail(u_42);
        else
          t_42 = u_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_42));
      }
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              {
                t = k_80(t);
                t = Cons_2(t, _id, o_4);
              }
            }
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_4, o_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  ATerm t_23;
  t_23 = t;
  {
    ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
    d_43 = t;
    z_42 :
    if(match_cons(d_43, sym__3))
      {
        e_43 = ATgetArgument(d_43, 0);
        f_43 = ATgetArgument(d_43, 1);
        g_43 = ATgetArgument(d_43, 2);
        {
          if(((a_43 != NULL) && (a_43 != e_43)))
            _fail(e_43);
          else
            a_43 = e_43;
          {
            if(((b_43 != NULL) && (b_43 != f_43)))
              _fail(f_43);
            else
              b_43 = f_43;
            {
              if(((c_43 != NULL) && (c_43 != g_43)))
                _fail(g_43);
              else
                c_43 = g_43;
              t = SSL_table_put(not_null(a_43), not_null(b_43), not_null(c_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm j_43 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    t = term_v_23;
    t = table_put_0(t);
  }
  t = u_23;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_80(t);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_4);
    {
      ATerm c_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_24;
          i_24 = t;
          {
            ATerm k_24 = t;
            int l_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_22;
                t = get_config_0(t);
                LocalPopChoice(l_24);
              }
            else
              {
                t = k_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_24;
          {
            t = system_usage_0(t);
            {
              t = term_j_15;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_24);
        }
      else
        {
          t = c_24;
          {
            ATerm m_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm k_43 = NULL;
                    k_43 = t;
                    if(((j_43 != NULL) && (j_43 != k_43)))
                      _fail(k_43);
                    else
                      j_43 = k_43;
                    return(t);
                  }
                  t = Undefined_1(t, v_4);
                  return(t);
                }
                t = fetch_1(t, s_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_43)), term_o_24);
                    return(t);
                  }
                  t = say_1(t, w_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_17;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(n_24);
              }
            else
              {
                t = m_24;
                {
                }
              }
          }
        }
      {
        ATerm p_24;
        p_24 = t;
        {
          t = term_y_19;
          t = table_destroy_0(t);
        }
        t = p_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  t = parse_options_1(t, g_78);
  {
    t = store_options_0(t);
    {
      t = i_78(t);
      {
        ATerm q_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_78);
            LocalPopChoice(v_24);
          }
        else
          {
            t = q_24;
            {
              ATerm w_24 = t;
              int x_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_24);
                }
              else
                {
                  t = w_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  t = option_wrap_4(t, k_78, default_usage_0, _id, l_78);
  return(t);
}
ATerm pp_stratego_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      t = debug_0(t);
      {
        ATerm d_5 (ATerm t)
        {
          t = term_y_24;
          return(t);
        }
        t = xtc_transform_1(t, d_5);
        {
          ATerm e_5 (ATerm t)
          {
            t = term_z_24;
            return(t);
          }
          ATerm j_5 (ATerm t)
          {
            ATerm n_43 = NULL;
            ATerm o_43 = NULL;
            t = term_e_25;
            {
              t = xtc_find_0(t);
              {
                o_43 = t;
                if(((n_43 != NULL) && (n_43 != o_43)))
                  _fail(o_43);
                else
                  n_43 = o_43;
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_43)), term_f_25);
            return(t);
          }
          t = xtc_transform_2(t, e_5, j_5);
        }
      }
      return(t);
    }
    t = xtc_io_1(t, c_5);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, b_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pp_stratego_0(t);
  return(t);
}
