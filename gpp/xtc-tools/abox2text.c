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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_m_24;
ATerm term_x_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_j_15;
ATerm term_n_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_h_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_p_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_k_9);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_q_11);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_h_12);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_e_6, term_l_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_h_12);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_h_12);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, (ATerm) ATempty);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm pass_width_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm y_74 (ATerm), ATerm z_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm a_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm i_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm g_72 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm h_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm j_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm union_1 (ATerm, ATerm m_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm s_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm p_74 (ATerm));
ATerm assert_1 (ATerm, ATerm l_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm s_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm r_74 (ATerm), ATerm s_74 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm m_63 (ATerm), ATerm n_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm b_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm c_74 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2text_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm crush_2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_80 (ATerm));
ATerm Program_1 (ATerm, ATerm r_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm v_50 (ATerm), ATerm w_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_75 (ATerm));
ATerm map_1 (ATerm, ATerm p_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm io_abox2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_int_to_string(not_null(c_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  c_1 = t;
  y_0 :
  if(match_cons(c_1, sym__2))
    {
      d_1 = ATgetArgument(c_1, 0);
      e_1 = ATgetArgument(c_1, 1);
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
            t = SSL_subtr(not_null(d_1), not_null(e_1));
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
  ATerm a_2 = NULL;
  ATerm s_2 = NULL,u_2 = NULL;
  ATerm t_2 = NULL;
  t = term_e_6;
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(g_6);
      }
    else
      {
        t = f_6;
        t = term_h_6;
      }
    {
      t_2 = t;
      if(((s_2 != NULL) && (s_2 != t_2)))
        _fail(t_2);
      else
        s_2 = t_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_h_6);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_2 = t;
          if(((a_2 != NULL) && (a_2 != u_2)))
            _fail(u_2);
          else
            a_2 = u_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_e_6);
  return(t);
}
ATerm pass_width_0 (ATerm t)
{
  ATerm i_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_6;
      t = get_config_0(t);
      LocalPopChoice(k_6);
      {
        ATerm b_3 = NULL;
        ATerm c_3 = NULL;
        c_3 = t;
        if(((b_3 != NULL) && (b_3 != c_3)))
          _fail(c_3);
        else
          b_3 = c_3;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), term_m_6);
      }
    }
  else
    {
      t = i_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym_stdin_0))
    {
      ATerm l_3 = NULL;
      ATerm m_3 = NULL;
      t = term_p_6;
      {
        t = ReadFromFile_0(t);
        {
          m_3 = t;
          if(((l_3 != NULL) && (l_3 != m_3)))
            _fail(m_3);
          else
            l_3 = m_3;
        }
      }
      t = not_null(l_3);
    }
  else
    {
      if(match_cons(j_3, sym_FILE_1))
        {
          k_3 = ATgetArgument(j_3, 0);
          {
            ATerm o_3 = NULL;
            ATerm p_3 = NULL;
            t = not_null(k_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  p_3 = t;
                  if(((o_3 != NULL) && (o_3 != p_3)))
                    _fail(p_3);
                  else
                    o_3 = p_3;
                }
              }
            }
            t = not_null(o_3);
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
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      t = SSL_WriteToBinaryFile(not_null(x_3), not_null(y_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm g_4 = NULL;
  e_4 = t;
  {
    ATerm h_4 = NULL;
    t = xtc_new_file_0(t);
    {
      h_4 = t;
      {
        if(((g_4 != NULL) && (g_4 != h_4)))
          _fail(h_4);
        else
          g_4 = h_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(e_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(g_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm y_74 (ATerm), ATerm z_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, y_74, z_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = SSL_close_file(not_null(l_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym__2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      t = SSL_execvp(not_null(r_4), not_null(s_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  t = SSL_waitpid(not_null(x_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm h_5 = NULL;
  ATerm j_5 = NULL;
  h_5 = t;
  {
    t = fork_0(t);
    {
      j_5 = t;
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 = NULL;
            l_5 = t;
            d_5 :
            if(match_int(l_5, 0))
              {
                t = not_null(h_5);
                t = a_59(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            {
              ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
              t = not_null(j_5);
              {
                t = waitpid_0(t);
                {
                  m_5 = t;
                  f_5 :
                  if(match_cons(m_5, sym_WaitStatus_3))
                    {
                      n_5 = ATgetArgument(m_5, 0);
                      o_5 = ATgetArgument(m_5, 1);
                      p_5 = ATgetArgument(m_5, 2);
                      g_5 :
                      if(match_int(n_5, 0))
                        {
                          t = not_null(h_5);
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
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym__2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(y_5));
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
ATerm table_keys_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_table_keys(not_null(d_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm j_6 = NULL;
  j_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm l_6 = NULL;
        ATerm n_6 = NULL;
        l_6 = t;
        {
          ATerm o_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(l_6));
          {
            t = table_get_0(t);
            {
              o_6 = t;
              if(((n_6 != NULL) && (n_6 != o_6)))
                _fail(o_6);
              else
                n_6 = o_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(n_6));
        }
        return(t);
      }
      t = map_1(t, e_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm s_6;
    s_6 = t;
    {
      ATerm t_6 = NULL;
      ATerm u_6 = NULL;
      t = term_e_6;
      {
        t = get_config_0(t);
        {
          u_6 = t;
          if(((t_6 != NULL) && (t_6 != u_6)))
            _fail(u_6);
          else
            t_6 = u_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), term_v_6);
        t = geq_0(t);
      }
    }
    t = s_6;
    t = i_59(t);
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
    ATerm x_6 = NULL;
    ATerm y_6 = NULL;
    y_6 = t;
    if(((x_6 != NULL) && (x_6 != y_6)))
      _fail(y_6);
    else
      x_6 = y_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, not_null(x_6));
      t = printnl_0(t);
    }
  }
  t = w_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm e_7 = NULL;
  ATerm g_7 = NULL,h_7 = NULL;
  e_7 = t;
  {
    ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_7)));
    {
      t = table_get_0(t);
      {
        i_7 = t;
        c_7 :
        if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
          {
            j_7 = ATgetFirst((ATermList) i_7);
            m_7 = (ATerm) ATgetNext((ATermList) i_7);
            d_7 :
            if(match_cons(j_7, sym__2))
              {
                k_7 = ATgetArgument(j_7, 0);
                l_7 = ATgetArgument(j_7, 1);
                {
                  if(((g_7 != NULL) && (g_7 != k_7)))
                    _fail(k_7);
                  else
                    g_7 = k_7;
                  if(((h_7 != NULL) && (h_7 != l_7)))
                    _fail(l_7);
                  else
                    h_7 = l_7;
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
    t = not_null(h_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym__2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      {
        ATerm y_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_7)));
        {
          t = table_get_0(t);
          {
            ATerm p_0 (ATerm t)
            {
              ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
              z_7 = t;
              r_7 :
              if(match_cons(z_7, sym__2))
                {
                  a_8 = ATgetArgument(z_7, 0);
                  b_8 = ATgetArgument(z_7, 1);
                  {
                    if(((v_7 != NULL) && (v_7 != a_8)))
                      _fail(a_8);
                    else
                      v_7 = a_8;
                    if(((y_7 != NULL) && (y_7 != b_8)))
                      _fail(b_8);
                    else
                      y_7 = b_8;
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
        t = not_null(y_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm b_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_7);
    }
  else
    {
      t = b_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = filter_1(t, g_72);
              return(t);
            }
            t = Cons_2(t, g_72, q_0);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            {
              ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
              g_8 = t;
              f_8 :
              if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
                {
                  h_8 = ATgetFirst((ATermList) g_8);
                  i_8 = (ATerm) ATgetNext((ATermList) g_8);
                  {
                    t = not_null(i_8);
                    t = filter_1(t, g_72);
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
ATerm repeat_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = q_77(t);
      t = l_8(t);
      return(t);
    }
    t = try_1(t, r_0);
    return(t);
  }
  t = l_8(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = term_q_7;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm w_7 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_7;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, s_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm n_8 = NULL;
      ATerm o_8 = NULL;
      t = term_e_6;
      {
        t = get_config_0(t);
        {
          o_8 = t;
          if(((n_8 != NULL) && (n_8 != o_8)))
            _fail(o_8);
          else
            n_8 = o_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), term_c_8);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = h_59(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm r_8 = NULL;
      ATerm s_8 = NULL;
      t = term_e_6;
      {
        t = get_config_0(t);
        {
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), term_e_8);
        t = geq_0(t);
      }
    }
    t = d_8;
    t = j_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym__2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      if(((x_8 != NULL) && (x_8 != y_8)))
        _fail(y_8);
      else
        x_8 = y_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_70 (ATerm), ATerm r_70 (ATerm))
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
    {
      f_9 = ATgetFirst((ATermList) e_9);
      g_9 = (ATerm) ATgetNext((ATermList) e_9);
      {
        t = r_70(t);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm j_9 = NULL;
            j_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(j_9));
              t = q_70(t);
            }
            return(t);
          }
          t = fetch_1(t, v_0);
        }
        t = not_null(g_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym__2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      {
        t = not_null(q_9);
        {
          ATerm v_9 (ATerm t)
          {
            ATerm j_8 = t;
            int k_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_9);
                LocalPopChoice(k_8);
              }
            else
              {
                t = j_8;
                {
                  ATerm m_8 = t;
                  int p_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = not_null(r_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_70, w_0);
                      t = v_9(t);
                      LocalPopChoice(p_8);
                    }
                  else
                    {
                      t = m_8;
                      t = Cons_2(t, _id, v_9);
                    }
                }
              }
            return(t);
          }
          t = v_9(t);
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
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym__3))
    {
      b_10 = ATgetArgument(a_10, 0);
      c_10 = ATgetArgument(a_10, 1);
      d_10 = ATgetArgument(a_10, 2);
      {
        ATerm q_8;
        q_8 = t;
        {
          ATerm h_10 = NULL;
          ATerm i_10 = NULL,k_10 = NULL;
          ATerm j_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_10), not_null(c_10));
          {
            ATerm t_8 = t;
            int u_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(u_8);
              }
            else
              {
                t = t_8;
                t = (ATerm) ATempty;
              }
            {
              j_10 = t;
              if(((i_10 != NULL) && (i_10 != j_10)))
                _fail(j_10);
              else
                i_10 = j_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), not_null(d_10));
            {
              t = union_0(t);
              {
                k_10 = t;
                if(((h_10 != NULL) && (h_10 != k_10)))
                  _fail(k_10);
                else
                  h_10 = k_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_10), not_null(c_10), not_null(h_10));
            t = set_0(t);
          }
        }
        t = q_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym__2))
    {
      t_10 = ATgetArgument(s_10, 0);
      u_10 = ATgetArgument(s_10, 1);
      {
        t = not_null(u_10);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
            x_10 = t;
            q_10 :
            if(match_cons(x_10, sym__2))
              {
                y_10 = ATgetArgument(x_10, 0);
                z_10 = ATgetArgument(x_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_10), not_null(y_10), not_null(z_10));
                  t = s_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_0);
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
  ATerm f_11 = NULL;
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 = NULL;
      g_11 = t;
      {
        if(((f_11 != NULL) && (f_11 != g_11)))
          _fail(g_11);
        else
          f_11 = g_11;
        t = SSL_ReadFromFile(not_null(f_11));
      }
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_b_9;
          return(t);
        }
        t = debug_1(t, z_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm m_11 = NULL;
  k_11 = t;
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
    {
      ATerm h_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(k_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_9;
        }
      {
        ATerm i_9;
        i_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_7, term_k_9, (ATerm) ATinsert(ATempty, not_null(k_11)));
          t = table_put_0(t);
        }
        t = i_9;
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_l_9;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose4_1(t, f_1);
          {
            ATerm m_9 = t;
            int n_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(n_9);
              }
            else
              {
                t = m_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm h_1 (ATerm t)
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_s_9;
                  return(t);
                }
                t = say_1(t, i_1);
                return(t);
              }
              t = if_verbose6_1(t, h_1);
              {
                ATerm n_11 = NULL;
                n_11 = t;
                if(((m_11 != NULL) && (m_11 != n_11)))
                  _fail(n_11);
                else
                  m_11 = n_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(m_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        ATerm k_1 (ATerm t)
                        {
                          t = term_t_9;
                          return(t);
                        }
                        t = say_1(t, k_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, j_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_a_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(k_11)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm m_1 (ATerm t)
                              {
                                t = term_s_9;
                                return(t);
                              }
                              t = say_1(t, m_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, l_1);
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
  ATerm r_11 = NULL;
  r_11 = t;
  t = SSL_getenv(not_null(r_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm u_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_9;
      t = get_config_0(t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = u_9;
      {
        ATerm y_9 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_10;
            t = getenv_0(t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = y_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_g_10;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose5_1(t, n_1);
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_10;
          t = table_get_0(t);
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = l_10;
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_p_10;
          return(t);
        }
        t = debug_1(t, q_1);
        return(t);
      }
      t = if_verbose5_1(t, p_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_a_11;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
      {
        t = xtc_load_0(t);
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_a_11;
                return(t);
              }
              t = debug_1(t, u_1);
              return(t);
            }
            t = if_verbose5_1(t, t_1);
          }
        }
      }
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm v_11 = NULL;
        ATerm w_11 = NULL;
        w_11 = t;
        if(((v_11 != NULL) && (v_11 != w_11)))
          _fail(w_11);
        else
          v_11 = w_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), not_null(v_11)), term_d_11);
          {
            t = error_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_a_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      t = term_h_11;
                      return(t);
                    }
                    t = debug_1(t, w_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, v_1);
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
ATerm xtc_command_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm a_12 = NULL;
  ATerm i_11;
  i_11 = t;
  {
    ATerm b_12 = NULL;
    t = p_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        b_12 = t;
        if(((a_12 != NULL) && (a_12 != b_12)))
          _fail(b_12);
        else
          a_12 = b_12;
      }
    }
  }
  t = i_11;
  {
    ATerm j_11;
    j_11 = t;
    {
      ATerm c_12 = NULL;
      ATerm d_12 = NULL;
      d_12 = t;
      if(((c_12 != NULL) && (c_12 != d_12)))
        _fail(d_12);
      else
        c_12 = d_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(c_12));
        t = call_0(t);
      }
    }
    t = j_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
        ATerm l_11;
        l_11 = t;
        {
          ATerm t_12 = NULL;
          ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
          t = l_75(t);
          {
            t_12 = t;
            {
              if(((q_12 != NULL) && (q_12 != t_12)))
                _fail(t_12);
              else
                q_12 = t_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), not_null(m_12), not_null(n_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_11 = t;
                    int p_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), term_q_11);
                        t = table_get_0(t);
                        LocalPopChoice(p_11);
                      }
                    else
                      {
                        t = o_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_12 = t;
                      j_12 :
                      if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                        {
                          v_12 = ATgetFirst((ATermList) u_12);
                          w_12 = (ATerm) ATgetNext((ATermList) u_12);
                          {
                            if(((r_12 != NULL) && (r_12 != v_12)))
                              _fail(v_12);
                            else
                              r_12 = v_12;
                            {
                              if(((s_12 != NULL) && (s_12 != w_12)))
                                _fail(w_12);
                              else
                                s_12 = w_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), term_q_11, (ATerm) ATinsert(CheckATermList(not_null(s_12)), (ATerm) ATinsert(CheckATermList(not_null(r_12)), not_null(m_12))));
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
ATerm obsolete_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm s_11;
  s_11 = t;
  {
    t = z_75(t);
    {
      ATerm x_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = debug_1(t, x_1);
    }
  }
  t = s_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  ATerm u_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
      g_13 = t;
      b_13 :
      if(match_cons(g_13, sym__2))
        {
          h_13 = ATgetArgument(g_13, 0);
          i_13 = ATgetArgument(g_13, 1);
          {
            if(((f_13 != NULL) && (f_13 != h_13)))
              _fail(h_13);
            else
              f_13 = h_13;
            if(((e_13 != NULL) && (e_13 != i_13)))
              _fail(i_13);
            else
              e_13 = i_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_11);
      t = SSL_open_file(not_null(f_13), not_null(e_13));
    }
  else
    {
      t = u_11;
      {
        ATerm j_13 = NULL;
        ATerm k_13 = NULL;
        ATerm y_1 (ATerm t)
        {
          t = term_y_11;
          return(t);
        }
        t = obsolete_1(t, y_1);
        {
          j_13 = t;
          {
            if(((f_13 != NULL) && (f_13 != j_13)))
              _fail(j_13);
            else
              f_13 = j_13;
            {
              ATerm z_11;
              z_11 = t;
              {
                ATerm l_13 = NULL;
                t = term_e_12;
                {
                  l_13 = t;
                  if(((k_13 != NULL) && (k_13 != l_13)))
                    _fail(l_13);
                  else
                    k_13 = l_13;
                }
              }
              t = z_11;
              t = SSL_open_file(not_null(f_13), not_null(k_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm t_13 = NULL;
  r_13 = t;
  {
    ATerm f_12;
    f_12 = t;
    {
      ATerm u_13 = NULL;
      t = term_g_12;
      {
        u_13 = t;
        if(((t_13 != NULL) && (t_13 != u_13)))
          _fail(u_13);
        else
          t_13 = u_13;
      }
    }
    t = f_12;
    {
      t = SSL_open_file(not_null(r_13), not_null(t_13));
      t = SSL_close_file(not_null(r_13));
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
  ATerm y_13 = NULL;
  ATerm z_13 = NULL;
  t = term_h_12;
  {
    t = new_0(t);
    {
      z_13 = t;
      if(((y_13 != NULL) && (y_13 != z_13)))
        _fail(z_13);
      else
        y_13 = z_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_i_12);
    {
      t = conc_strings_0(t);
      {
        ATerm z_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, z_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = new_file_0(t);
  {
    d_14 = t;
    {
      ATerm o_12;
      o_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_e_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_h_12);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_p_12;
                return(t);
              }
              t = assert_1(t, b_2);
            }
          }
        }
      }
      t = o_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_stdin_0))
    {
      ATerm p_14 = NULL;
      ATerm q_14 = NULL;
      ATerm r_14 = NULL;
      t = xtc_new_file_0(t);
      {
        q_14 = t;
        {
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
          {
            ATerm s_14 = NULL;
            t = o_0(t);
            {
              s_14 = t;
              if(((r_14 != NULL) && (r_14 != s_14)))
                _fail(s_14);
              else
                r_14 = s_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_14)), term_x_12));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(p_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_14));
    }
  else
    {
      if(match_cons(n_14, sym_FILE_1))
        {
          o_14 = ATgetArgument(n_14, 0);
          {
            ATerm u_14 = NULL;
            ATerm v_14 = NULL;
            t = not_null(o_14);
            {
              ATerm w_14 = NULL;
              t = xtc_new_file_0(t);
              {
                v_14 = t;
                {
                  if(((u_14 != NULL) && (u_14 != v_14)))
                    _fail(v_14);
                  else
                    u_14 = v_14;
                  {
                    ATerm x_14 = NULL;
                    t = o_0(t);
                    {
                      x_14 = t;
                      if(((w_14 != NULL) && (w_14 != x_14)))
                        _fail(x_14);
                      else
                        w_14 = x_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_14)), term_x_12), not_null(o_14)), term_y_12));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
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
  ATerm i_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_stdin_0))
    {
      ATerm k_15 = NULL,m_15 = NULL;
      ATerm z_12;
      z_12 = t;
      {
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
      }
      t = z_12;
      {
        ATerm n_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        t = not_null(m_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_FILE_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = s_52(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_16)), not_null(a_16));
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
ATerm xtc_transform_2 (ATerm t, ATerm r_74 (ATerm), ATerm s_74 (ATerm))
{
  ATerm a_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(m_13);
        }
      else
        {
          t = d_13;
          t = stdin_0(t);
        }
      LocalPopChoice(c_13);
      t = xtc_transform_file_2(t, r_74, s_74);
    }
  else
    {
      t = a_13;
      t = xtc_transform_term_2(t, r_74, s_74);
    }
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm m_16 = NULL,o_16 = NULL;
    ATerm o_13;
    o_13 = t;
    {
      ATerm n_16 = NULL;
      t = term_h_12;
      {
        t = pass_width_0(t);
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
      }
    }
    t = o_13;
    {
      ATerm p_16 = NULL;
      t = term_h_12;
      {
        t = pass_verbose_0(t);
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(o_16));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t = SSL_copy(not_null(v_16), not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm e_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_stderr_0))
    {
      ATerm g_17 = NULL,i_17 = NULL;
      ATerm p_13;
      p_13 = t;
      {
        ATerm h_17 = NULL;
        t = SSLgetAnnotations(not_null(e_17));
        {
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
        }
      }
      t = p_13;
      {
        ATerm j_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(g_17));
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
        t = not_null(i_17);
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
  ATerm r_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_stdout_0))
    {
      ATerm t_17 = NULL,v_17 = NULL;
      ATerm q_13;
      q_13 = t;
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
      t = q_13;
      {
        ATerm w_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(t_17));
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
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_FILE_1))
    {
      j_18 = ATgetArgument(i_18, 0);
      {
        ATerm s_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_18 = NULL;
            ATerm m_18 = NULL;
            t = m_0(t);
            {
              m_18 = t;
              {
                if(((l_18 != NULL) && (l_18 != m_18)))
                  _fail(m_18);
                else
                  l_18 = m_18;
                {
                  ATerm w_13 = t;
                  int x_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(x_13);
                    }
                  else
                    {
                      t = w_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(l_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
            LocalPopChoice(v_13);
          }
        else
          {
            t = s_13;
            {
              ATerm a_14 = t;
              int b_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_18 = NULL;
                  ATerm p_18 = NULL;
                  t = m_0(t);
                  {
                    p_18 = t;
                    {
                      if(((o_18 != NULL) && (o_18 != p_18)))
                        _fail(p_18);
                      else
                        o_18 = p_18;
                      {
                        ATerm c_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm e_14 = t;
                            int f_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(f_14);
                              }
                            else
                              {
                                t = e_14;
                                {
                                  ATerm g_14 = t;
                                  int h_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(h_14);
                                    }
                                  else
                                    {
                                      t = g_14;
                                      {
                                        ATerm q_18 = NULL;
                                        q_18 = t;
                                        if(((j_18 != NULL) && (j_18 != q_18)))
                                          _fail(q_18);
                                        else
                                          j_18 = q_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = c_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(o_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
                  LocalPopChoice(b_14);
                }
              else
                {
                  t = a_14;
                  {
                    ATerm s_18 = NULL;
                    t = m_0(t);
                    {
                      s_18 = t;
                      if(((j_18 != NULL) && (j_18 != s_18)))
                        _fail(s_18);
                      else
                        j_18 = s_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
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
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  c_19 :
  if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
    {
      e_19 = ATgetFirst((ATermList) d_19);
      f_19 = (ATerm) ATgetNext((ATermList) d_19);
      t = not_null(f_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm i_14;
        i_14 = t;
        {
          ATerm r_19 = NULL;
          ATerm s_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = (ATerm) ATempty;
              }
            {
              s_19 = t;
              if(((r_19 != NULL) && (r_19 != s_19)))
                _fail(s_19);
              else
                r_19 = s_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_19), not_null(n_19), not_null(r_19));
            t = table_put_0(t);
          }
        }
        t = i_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm j_20 = NULL;
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
    t = i_75(t);
    {
      j_20 = t;
      {
        if(((g_20 != NULL) && (g_20 != j_20)))
          _fail(j_20);
        else
          g_20 = j_20;
        {
          ATerm t_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_q_11);
              t = table_get_0(t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = t_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_20 = t;
            d_20 :
            if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
              {
                l_20 = ATgetFirst((ATermList) k_20);
                m_20 = (ATerm) ATgetNext((ATermList) k_20);
                {
                  if(((f_20 != NULL) && (f_20 != l_20)))
                    _fail(l_20);
                  else
                    f_20 = l_20;
                  {
                    if(((e_20 != NULL) && (e_20 != m_20)))
                      _fail(m_20);
                    else
                      e_20 = m_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_20), term_q_11, not_null(e_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_20);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm n_20 = NULL;
                              n_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(n_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, e_2);
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
  t = l_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_remove(not_null(y_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm m_63 (ATerm), ATerm n_63 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_63(t);
      t = n_63(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        t = n_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm d_21 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm e_21 = NULL;
    ATerm f_21 = NULL;
    t = h_75(t);
    {
      e_21 = t;
      {
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        {
          ATerm g_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), term_q_11);
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
                t = (ATerm) ATempty;
              }
            {
              g_21 = t;
              if(((f_21 != NULL) && (f_21 != g_21)))
                _fail(g_21);
              else
                f_21 = g_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_21), term_q_11, (ATerm) ATinsert(CheckATermList(not_null(f_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  ATerm f_2 (ATerm t)
  {
    t = term_p_12;
    return(t);
  }
  t = begin_scope_1(t, f_2);
  {
    ATerm g_2 (ATerm t)
    {
      ATerm e_15;
      e_15 = t;
      {
        ATerm s_21 = NULL,t_21 = NULL,y_21 = NULL;
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_15;
            t = table_get_0(t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_21 = t;
          k_21 :
          if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
            {
              t_21 = ATgetFirst((ATermList) s_21);
              y_21 = (ATerm) ATgetNext((ATermList) s_21);
              {
                if(((r_21 != NULL) && (r_21 != t_21)))
                  _fail(t_21);
                else
                  r_21 = t_21;
                {
                  if(((q_21 != NULL) && (q_21 != y_21)))
                    _fail(y_21);
                  else
                    q_21 = y_21;
                  {
                    t = not_null(r_21);
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, h_2);
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
      t = e_15;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_p_12;
          return(t);
        }
        t = end_scope_1(t, i_2);
      }
      return(t);
    }
    t = restore_always_2(t, b_74, g_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        ATerm k_22 = NULL;
        t = term_y_12;
        {
          t = get_config_0(t);
          {
            k_22 = t;
            if(((i_22 != NULL) && (i_22 != k_22)))
              _fail(k_22);
            else
              i_22 = k_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_22));
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = term_p_6;
      }
    {
      t = c_74(t);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_12;
              t = get_config_0(t);
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              t = term_s_15;
            }
          return(t);
        }
        t = copy_to_1(t, k_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, j_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  s_22 = t;
  q_22 :
  if(match_string(s_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
        {
          t_22 = ATgetFirst((ATermList) s_22);
          u_22 = (ATerm) ATgetNext((ATermList) s_22);
          r_22 :
          if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
            {
              v_22 = ATgetFirst((ATermList) u_22);
              w_22 = (ATerm) ATgetNext((ATermList) u_22);
              {
                ATerm a_23 = NULL;
                ATerm t_15;
                t_15 = t;
                {
                  t = not_null(t_22);
                  t = j_0(t);
                }
                t = t_15;
                {
                  ATerm b_23 = NULL;
                  t = not_null(v_22);
                  {
                    t = k_0(t);
                    {
                      b_23 = t;
                      if(((a_23 != NULL) && (a_23 != b_23)))
                        _fail(b_23);
                      else
                        a_23 = b_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_22)), not_null(a_23));
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
ATerm version_option_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm g_23 = NULL;
    g_23 = t;
    f_23 :
    if(!(match_string(g_23, "-v")))
      {
        if(!(match_string(g_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_y_15;
    t = set_config_0(t);
    t = term_z_15;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm j_23 = NULL;
    j_23 = t;
    h_23 :
    if(!(match_string(j_23, "-k")))
      {
        if(!(match_string(j_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm g_16;
    g_16 = t;
    {
      ATerm k_23 = NULL;
      ATerm l_23 = NULL;
      t = string_to_int_0(t);
      {
        l_23 = t;
        if(((k_23 != NULL) && (k_23 != l_23)))
          _fail(l_23);
        else
          k_23 = l_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_16, not_null(k_23));
        t = set_config_0(t);
      }
    }
    t = g_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_string_to_int(not_null(o_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm w_23 = NULL;
        w_23 = t;
        r_23 :
        if(!(match_string(w_23, "-S")))
          {
            if(!(match_string(w_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_q_16;
        t = set_config_0(t);
        t = term_r_16;
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_s_16;
        return(t);
      }
      t = Option_3(t, r_2, v_2, w_2);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              ATerm c_24 = NULL;
              c_24 = t;
              s_23 :
              if(!(match_string(c_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm f_24 = NULL;
              ATerm z_16;
              z_16 = t;
              {
                ATerm d_24 = NULL;
                ATerm e_24 = NULL;
                t = string_to_int_0(t);
                {
                  e_24 = t;
                  if(((d_24 != NULL) && (d_24 != e_24)))
                    _fail(e_24);
                  else
                    d_24 = e_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_6, not_null(d_24));
                  t = set_config_0(t);
                }
              }
              t = z_16;
              {
                ATerm g_24 = NULL;
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_24));
              }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_a_17;
              return(t);
            }
            t = ArgOption_3(t, x_2, y_2, z_2);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            {
              ATerm a_3 (ATerm t)
              {
                ATerm h_24 = NULL;
                h_24 = t;
                v_23 :
                if(!(match_string(h_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_c_17;
                t = set_config_0(t);
                t = term_f_17;
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_k_17;
                return(t);
              }
              t = Option_3(t, a_3, d_3, e_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm n_24 = NULL;
    n_24 = t;
    k_24 :
    if(!(match_string(n_24, "-o")))
      {
        if(!(match_string(n_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm t_24 = NULL;
    ATerm p_17;
    p_17 = t;
    {
      ATerm o_24 = NULL;
      ATerm p_24 = NULL;
      p_24 = t;
      if(((o_24 != NULL) && (o_24 != p_24)))
        _fail(p_24);
      else
        o_24 = p_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_12, not_null(o_24));
        t = set_config_0(t);
      }
    }
    t = p_17;
    {
      ATerm v_24 = NULL;
      v_24 = t;
      if(((t_24 != NULL) && (t_24 != v_24)))
        _fail(v_24);
      else
        t_24 = v_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_24));
    }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
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
  ATerm q_3 (ATerm t)
  {
    ATerm e_25 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm c_25 = NULL;
      ATerm d_25 = NULL;
      d_25 = t;
      if(((c_25 != NULL) && (c_25 != d_25)))
        _fail(d_25);
      else
        c_25 = d_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(c_25));
        t = set_config_0(t);
      }
    }
    t = x_17;
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
  ATerm r_3 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = ArgOption_3(t, n_3, q_3, r_3);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm d_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = d_18;
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm k_25 = NULL;
                      k_25 = t;
                      i_25 :
                      if(!(match_string(k_25, "-w")))
                        {
                          if(!(match_string(k_25, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm t_3 (ATerm t)
                    {
                      ATerm f_18;
                      f_18 = t;
                      {
                        ATerm l_25 = NULL;
                        ATerm m_25 = NULL;
                        m_25 = t;
                        if(((l_25 != NULL) && (l_25 != m_25)))
                          _fail(m_25);
                        else
                          l_25 = m_25;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(l_25));
                          t = set_config_0(t);
                        }
                      }
                      t = f_18;
                      return(t);
                    }
                    ATerm u_3 (ATerm t)
                    {
                      t = term_g_18;
                      return(t);
                    }
                    t = ArgOption_3(t, s_3, t_3, u_3);
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
  ATerm q_25 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm r_25 = NULL,s_25 = NULL;
      r_25 = t;
      p_25 :
      if(match_cons(r_25, sym_Program_1))
        {
          s_25 = ATgetArgument(r_25, 0);
          if(((q_25 != NULL) && (q_25 != s_25)))
            _fail(s_25);
          else
            q_25 = s_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_18), not_null(q_25)), term_n_18));
      {
        t = printnl_0(t);
        {
          t = term_h_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, term_t_18));
  {
    t = printnl_0(t);
    {
      t = term_h_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = SSL_TicksToSeconds(not_null(v_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym__2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_26), not_null(c_26));
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            t = SSL_addr(not_null(b_26), not_null(c_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_71(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
        j_26 = t;
        i_26 :
        if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
          {
            k_26 = ATgetFirst((ATermList) j_26);
            l_26 = (ATerm) ATgetNext((ATermList) j_26);
            {
              ATerm o_26 = NULL;
              ATerm p_26 = NULL;
              t = not_null(l_26);
              {
                t = foldr_2(t, d_71, e_71);
                {
                  p_26 = t;
                  if(((o_26 != NULL) && (o_26 != p_26)))
                    _fail(p_26);
                  else
                    o_26 = p_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(o_26));
                t = e_71(t);
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
ATerm crush_2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  ATerm w_26 = NULL;
  ATerm y_26 = NULL;
  w_26 = t;
  {
    ATerm z_26 = NULL;
    ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
    t = not_null(w_26);
    {
      z_26 = t;
      {
        t = SSL_explode_term(not_null(z_26));
        {
          b_27 = t;
          v_26 :
          if(match_cons(b_27, sym__2))
            {
              c_27 = ATgetArgument(b_27, 0);
              d_27 = ATgetArgument(b_27, 1);
              if(((y_26 != NULL) && (y_26 != d_27)))
                _fail(d_27);
              else
                y_26 = d_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_26);
      t = foldr_2(t, b_70, c_70);
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
    ATerm a_4 (ATerm t)
    {
      t = term_l_16;
      return(t);
    }
    t = crush_2(t, a_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm y_18;
        y_18 = t;
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_27), not_null(l_27));
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              t = SSL_gtr(not_null(k_27), not_null(l_27));
            }
        }
        t = y_18;
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
  ATerm r_27 = NULL;
  ATerm b_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
      s_27 = t;
      q_27 :
      if(match_cons(s_27, sym__2))
        {
          t_27 = ATgetArgument(s_27, 0);
          u_27 = ATgetArgument(s_27, 1);
          {
            if(((r_27 != NULL) && (r_27 != t_27)))
              _fail(t_27);
            else
              r_27 = t_27;
            if(((r_27 != NULL) && (r_27 != u_27)))
              _fail(u_27);
            else
              r_27 = u_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_19);
    }
  else
    {
      t = b_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm h_19;
    h_19 = t;
    {
      ATerm x_27 = NULL;
      ATerm y_27 = NULL;
      t = term_e_6;
      {
        t = get_config_0(t);
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), term_h_6);
        t = geq_0(t);
      }
    }
    t = h_19;
    t = e_59(t);
    return(t);
  }
  t = try_1(t, b_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm c_28 = NULL,e_28 = NULL;
    ATerm i_19;
    i_19 = t;
    {
      ATerm d_28 = NULL;
      t = run_time_0(t);
      {
        d_28 = t;
        if(((c_28 != NULL) && (c_28 != d_28)))
          _fail(d_28);
        else
          c_28 = d_28;
      }
    }
    t = i_19;
    {
      ATerm f_28 = NULL;
      t = term_j_19;
      {
        t = get_config_0(t);
        {
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), not_null(c_28)), term_o_19), not_null(e_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_4);
  {
    t = term_l_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Version_0))
    {
      ATerm o_28 = NULL,q_28 = NULL;
      ATerm q_19;
      q_19 = t;
      {
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(m_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      t = q_19;
      {
        ATerm r_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_28));
        {
          r_28 = t;
          if(((q_28 != NULL) && (q_28 != r_28)))
            _fail(r_28);
          else
            q_28 = r_28;
        }
        t = not_null(q_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_4);
  t = s_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = SSL_table_create(not_null(w_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  {
    ATerm x_19;
    x_19 = t;
    {
      t = term_y_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_19, term_z_19, not_null(a_29));
          t = table_put_0(t);
        }
      }
    }
    t = x_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_table_destroy(not_null(e_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  t = SSL_exit(not_null(j_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_29 = NULL,t_29 = NULL,u_29 = NULL;
  p_29 = t;
  o_29 :
  if(((ATgetType(p_29) == AT_LIST) && ATisEmpty(p_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
        {
          t_29 = ATgetFirst((ATermList) p_29);
          u_29 = (ATerm) ATgetNext((ATermList) p_29);
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
  ATerm a_20;
  a_20 = t;
  {
    ATerm x_29 = NULL;
    ATerm a_30 = NULL;
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        {
          ATerm y_29 = NULL;
          ATerm z_29 = NULL;
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
          t = (ATerm) ATinsert(ATempty, not_null(y_29));
        }
      }
    {
      a_30 = t;
      if(((x_29 != NULL) && (x_29 != a_30)))
        _fail(a_30);
      else
        x_29 = a_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(x_29));
      t = printnl_0(t);
    }
  }
  t = a_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  n_30 = t;
  k_30 :
  if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
    {
      l_30 = ATgetFirst((ATermList) n_30);
      m_30 = (ATerm) ATgetNext((ATermList) n_30);
      {
        ATerm q_30 = NULL;
        t = not_null(m_30);
        {
          ATerm h_20;
          h_20 = t;
          {
            ATerm r_30 = NULL,t_30 = NULL,v_30 = NULL;
            ATerm i_20;
            i_20 = t;
            {
              ATerm s_30 = NULL;
              t = i_0(t);
              {
                s_30 = t;
                if(((r_30 != NULL) && (r_30 != s_30)))
                  _fail(s_30);
                else
                  r_30 = s_30;
              }
            }
            t = i_20;
            {
              ATerm u_30 = NULL;
              t = not_null(l_30);
              {
                t = h_0(t);
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_30)), not_null(t_30));
                {
                  v_30 = t;
                  if(((q_30 != NULL) && (q_30 != v_30)))
                    _fail(v_30);
                  else
                    q_30 = v_30;
                }
              }
            }
          }
          t = h_20;
          {
            ATerm f_4 (ATerm t)
            {
              t = not_null(q_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_30) == AT_LIST) && ATisEmpty(n_30)))
        {
          {
            t = term_h_12;
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
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Program_1))
    {
      h_31 = ATgetArgument(g_31, 0);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(g_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(h_31);
          {
            ATerm o_31 = NULL;
            t = r_57(t);
            {
              m_31 = t;
              {
                ATerm p_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_31)), not_null(k_31));
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
                t = not_null(o_31);
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
  ATerm a_32 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_32 = NULL;
      t = term_j_19;
      {
        t = get_config_0(t);
        {
          b_32 = t;
          if(((a_32 != NULL) && (a_32 != b_32)))
            _fail(b_32);
          else
            a_32 = b_32;
        }
      }
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            ATerm c_32 = NULL;
            c_32 = t;
            if(((a_32 != NULL) && (a_32 != c_32)))
              _fail(c_32);
            else
              a_32 = c_32;
            return(t);
          }
          t = Program_1(t, k_4);
          return(t);
        }
        t = option_defined_1(t, j_4);
      }
    }
  {
    ATerm m_4 (ATerm t)
    {
      ATerm n_4 (ATerm t)
      {
        t = not_null(a_32);
        return(t);
      }
      t = short_description_1(t, n_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_4);
    {
      t = term_q_20;
      {
        t = echo_0(t);
        {
          t = term_t_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm d_32 = NULL;
                  ATerm e_32 = NULL;
                  e_32 = t;
                  if(((d_32 != NULL) && (d_32 != e_32)))
                    _fail(e_32);
                  else
                    d_32 = e_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_u_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm f_32 = NULL;
                    ATerm l_32 = NULL;
                    ATerm u_4 (ATerm t)
                    {
                      t = not_null(a_32);
                      return(t);
                    }
                    t = long_description_1(t, u_4);
                    {
                      l_32 = t;
                      if(((f_32 != NULL) && (f_32 != l_32)))
                        _fail(l_32);
                      else
                        f_32 = l_32;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_32)), term_v_20);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_4);
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
  ATerm w_20;
  w_20 = t;
  {
    ATerm t_32 = NULL;
    ATerm u_32 = NULL;
    u_32 = t;
    if(((t_32 != NULL) && (t_32 != u_32)))
      _fail(u_32);
    else
      t_32 = u_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, not_null(t_32)));
      t = printnl_0(t);
    }
  }
  t = w_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm x_20;
  x_20 = t;
  {
    t = t_75(t);
    t = debug_0(t);
  }
  t = x_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym_Undefined_1))
    {
      e_33 = ATgetArgument(d_33, 0);
      {
        ATerm h_33 = NULL,j_33 = NULL;
        ATerm i_33 = NULL;
        t = SSLgetAnnotations(not_null(d_33));
        {
          i_33 = t;
          if(((h_33 != NULL) && (h_33 != i_33)))
            _fail(i_33);
          else
            h_33 = i_33;
        }
        {
          t = not_null(e_33);
          {
            ATerm v_33 = NULL;
            t = s_57(t);
            {
              j_33 = t;
              {
                ATerm w_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_33)), not_null(h_33));
                {
                  w_33 = t;
                  if(((v_33 != NULL) && (v_33 != w_33)))
                    _fail(w_33);
                  else
                    v_33 = w_33;
                }
                t = not_null(v_33);
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
ATerm fetch_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm e_34 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_64, _id);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = Cons_2(t, _id, e_34);
      }
    return(t);
  }
  t = e_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_79 (ATerm))
{
  t = fetch_1(t, z_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  m_34 :
  if(match_cons(x_34, sym_Help_0))
    {
      ATerm z_34 = NULL,b_35 = NULL;
      ATerm b_21;
      b_21 = t;
      {
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(x_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
      }
      t = b_21;
      {
        ATerm g_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_34));
        {
          g_35 = t;
          if(((b_35 != NULL) && (b_35 != g_35)))
            _fail(g_35);
          else
            b_35 = g_35;
        }
        t = not_null(b_35);
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
  ATerm n_35 = NULL;
  n_35 = t;
  t = SSL_implode_string(not_null(n_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = c_21;
      {
        ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
        v_35 = t;
        u_35 :
        if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
          {
            w_35 = ATgetFirst((ATermList) v_35);
            x_35 = (ATerm) ATgetNext((ATermList) v_35);
            {
              t = not_null(w_35);
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(x_35);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm h_36 = NULL;
  ATerm j_36 = NULL;
  h_36 = t;
  {
    ATerm k_36 = NULL;
    ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
    t = not_null(h_36);
    {
      k_36 = t;
      {
        t = SSL_explode_term(not_null(k_36));
        {
          m_36 = t;
          f_36 :
          if(match_cons(m_36, sym__2))
            {
              n_36 = ATgetArgument(m_36, 0);
              o_36 = ATgetArgument(m_36, 1);
              g_36 :
              if(match_string(n_36, ""))
                {
                  if(((j_36 != NULL) && (j_36 != o_36)))
                    _fail(o_36);
                  else
                    j_36 = o_36;
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
      t = not_null(j_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm s_36 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_36);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          t = Nil_0(t);
          t = e_65(t);
        }
      }
    return(t);
  }
  t = s_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(match_cons(v_36, sym__2))
    {
      w_36 = ATgetArgument(v_36, 0);
      x_36 = ATgetArgument(v_36, 1);
      {
        t = not_null(w_36);
        {
          ATerm w_4 (ATerm t)
          {
            t = not_null(x_36);
            return(t);
          }
          t = at_end_1(t, w_4);
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
  ATerm c_37 = NULL;
  c_37 = t;
  t = SSL_explode_string(not_null(c_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm v_50 (ATerm), ATerm w_50 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym__2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      {
        ATerm r_37 = NULL,t_37 = NULL;
        ATerm s_37 = NULL;
        t = SSLgetAnnotations(not_null(l_37));
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
        {
          t = not_null(m_37);
          {
            ATerm v_37 = NULL;
            t = v_50(t);
            {
              t_37 = t;
              {
                t = not_null(n_37);
                {
                  ATerm x_37 = NULL;
                  t = w_50(t);
                  {
                    v_37 = t;
                    {
                      ATerm y_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_37), not_null(v_37)), not_null(r_37));
                      {
                        y_37 = t;
                        if(((x_37 != NULL) && (x_37 != y_37)))
                          _fail(y_37);
                        else
                          x_37 = y_37;
                      }
                      t = not_null(x_37);
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
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym__2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      {
        ATerm n_21;
        n_21 = t;
        t = SSL_printnl(not_null(h_38), not_null(i_38));
        t = n_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm o_21;
  o_21 = t;
  {
    ATerm o_38 = NULL,q_38 = NULL;
    ATerm p_21;
    p_21 = t;
    {
      ATerm p_38 = NULL;
      t = s_75(t);
      {
        p_38 = t;
        if(((o_38 != NULL) && (o_38 != p_38)))
          _fail(p_38);
        else
          o_38 = p_38;
      }
    }
    t = p_21;
    {
      ATerm r_38 = NULL;
      r_38 = t;
      if(((q_38 != NULL) && (q_38 != r_38)))
        _fail(r_38);
      else
        q_38 = r_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), not_null(o_38)));
        t = printnl_0(t);
      }
    }
  }
  t = o_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm u_38 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = Cons_2(t, p_64, u_38);
      }
    return(t);
  }
  t = u_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  t = SSL_is_string(not_null(w_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_4);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            {
              ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
              f_39 = t;
              e_39 :
              if(match_cons(f_39, sym_Path_1))
                {
                  g_39 = ATgetArgument(f_39, 0);
                  t = not_null(g_39);
                }
              else
                {
                  if(match_cons(f_39, sym_Var_1))
                    {
                      g_39 = ATgetArgument(f_39, 0);
                      {
                        t = not_null(g_39);
                        {
                          ATerm b_22 = t;
                          int c_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_22);
                            }
                          else
                            {
                              t = b_22;
                              {
                                ATerm z_4 (ATerm t)
                                {
                                  t = term_d_22;
                                  return(t);
                                }
                                t = debug_1(t, z_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_39, sym_Prefix_2))
                        {
                          g_39 = ATgetArgument(f_39, 0);
                          h_39 = ATgetArgument(f_39, 1);
                          {
                            ATerm m_39 = NULL,o_39 = NULL;
                            ATerm e_22;
                            e_22 = t;
                            {
                              ATerm n_39 = NULL;
                              t = not_null(g_39);
                              {
                                t = eval_config_0(t);
                                {
                                  n_39 = t;
                                  if(((m_39 != NULL) && (m_39 != n_39)))
                                    _fail(n_39);
                                  else
                                    m_39 = n_39;
                                }
                              }
                            }
                            t = e_22;
                            {
                              ATerm p_39 = NULL;
                              t = not_null(h_39);
                              {
                                t = eval_config_0(t);
                                {
                                  p_39 = t;
                                  if(((o_39 != NULL) && (o_39 != p_39)))
                                    _fail(p_39);
                                  else
                                    o_39 = p_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_39), not_null(o_39));
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
  ATerm x_39 = NULL;
  x_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_22, not_null(x_39));
    {
      t = table_get_0(t);
      {
        ATerm a_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_22;
            g_22 = t;
            {
              ATerm z_39 = NULL;
              ATerm a_40 = NULL;
              a_40 = t;
              if(((z_39 != NULL) && (z_39 != a_40)))
                _fail(a_40);
              else
                z_39 = a_40;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_22, not_null(x_39), not_null(z_39));
                t = table_put_0(t);
              }
            }
            t = g_22;
          }
          return(t);
        }
        t = try_1(t, a_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm h_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_62(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = h_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_40 = NULL,j_40 = NULL,k_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym__2))
    {
      j_40 = ATgetArgument(f_40, 0);
      k_40 = ATgetArgument(f_40, 1);
      t = SSL_table_get(not_null(j_40), not_null(k_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym__3))
    {
      s_40 = ATgetArgument(r_40, 0);
      t_40 = ATgetArgument(r_40, 1);
      u_40 = ATgetArgument(r_40, 2);
      {
        ATerm l_22;
        l_22 = t;
        {
          ATerm y_40 = NULL;
          ATerm z_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_40), not_null(t_40));
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = (ATerm) ATempty;
              }
            {
              z_40 = t;
              if(((y_40 != NULL) && (y_40 != z_40)))
                _fail(z_40);
              else
                y_40 = z_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_40), not_null(t_40), (ATerm) ATinsert(CheckATermList(not_null(y_40)), not_null(u_40)));
            t = table_put_0(t);
          }
        }
        t = l_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm f_41 = NULL;
  ATerm g_41 = NULL;
  t = term_h_12;
  {
    t = e_81(t);
    {
      g_41 = t;
      if(((f_41 != NULL) && (f_41 != g_41)))
        _fail(g_41);
      else
        f_41 = g_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, not_null(f_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_string(q_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
        {
          r_41 = ATgetFirst((ATermList) q_41);
          s_41 = (ATerm) ATgetNext((ATermList) q_41);
          {
            ATerm v_41 = NULL;
            ATerm o_22;
            o_22 = t;
            {
              t = not_null(r_41);
              t = a_0(t);
            }
            t = o_22;
            {
              ATerm w_41 = NULL;
              t = term_h_12;
              {
                t = d_0(t);
                {
                  w_41 = t;
                  if(((v_41 != NULL) && (v_41 != w_41)))
                    _fail(w_41);
                  else
                    v_41 = w_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_41)), not_null(v_41));
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
    ATerm b_42 = NULL;
    b_42 = t;
    a_42 :
    if(!(match_string(b_42, "--help")))
      {
        if(!(match_string(b_42, "-h")))
          {
            if(!(match_string(b_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_x_22;
    {
      t = set_config_0(t);
      t = term_y_22;
    }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_z_22;
    return(t);
  }
  t = Option_3(t, b_5, c_5, e_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
    {
      f_42 = ATgetFirst((ATermList) e_42);
      g_42 = (ATerm) ATgetNext((ATermList) e_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(((ATgetType(u_42) == AT_LIST) && !(ATisEmpty(u_42))))
    {
      v_42 = ATgetFirst((ATermList) u_42);
      w_42 = (ATerm) ATgetNext((ATermList) u_42);
      {
        ATerm a_43 = NULL,c_43 = NULL;
        ATerm b_43 = NULL;
        t = SSLgetAnnotations(not_null(u_42));
        {
          b_43 = t;
          if(((a_43 != NULL) && (a_43 != b_43)))
            _fail(b_43);
          else
            a_43 = b_43;
        }
        {
          t = not_null(v_42);
          {
            ATerm e_43 = NULL;
            t = e_52(t);
            {
              c_43 = t;
              {
                t = not_null(w_42);
                {
                  ATerm g_43 = NULL;
                  t = f_52(t);
                  {
                    e_43 = t;
                    {
                      ATerm h_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_43)), not_null(c_43)), not_null(a_43));
                      {
                        h_43 = t;
                        if(((g_43 != NULL) && (g_43 != h_43)))
                          _fail(h_43);
                        else
                          g_43 = h_43;
                      }
                      t = not_null(g_43);
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
  ATerm r_43 = NULL;
  r_43 = t;
  q_43 :
  if(((ATgetType(r_43) == AT_LIST) && ATisEmpty(r_43)))
    {
      {
        ATerm t_43 = NULL,v_43 = NULL;
        ATerm c_23;
        c_23 = t;
        {
          ATerm u_43 = NULL;
          t = SSLgetAnnotations(not_null(r_43));
          {
            u_43 = t;
            if(((t_43 != NULL) && (t_43 != u_43)))
              _fail(u_43);
            else
              t_43 = u_43;
          }
        }
        t = c_23;
        {
          ATerm w_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_43));
          {
            w_43 = t;
            if(((v_43 != NULL) && (v_43 != w_43)))
              _fail(w_43);
            else
              v_43 = w_43;
          }
          t = not_null(v_43);
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
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  b_44 :
  if(match_cons(c_44, sym__2))
    {
      d_44 = ATgetArgument(c_44, 0);
      e_44 = ATgetArgument(c_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_22, not_null(d_44), not_null(e_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm d_23;
  d_23 = t;
  {
    ATerm i_5 (ATerm t)
    {
      t = term_e_23;
      t = c_81(t);
      return(t);
    }
    t = try_1(t, i_5);
  }
  t = d_23;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm m_44 = NULL;
      ATerm i_23;
      i_23 = t;
      {
        ATerm k_44 = NULL;
        ATerm l_44 = NULL;
        l_44 = t;
        if(((k_44 != NULL) && (k_44 != l_44)))
          _fail(l_44);
        else
          k_44 = l_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_19, not_null(k_44));
          t = set_config_0(t);
        }
      }
      t = i_23;
      {
        ATerm n_44 = NULL;
        n_44 = t;
        if(((m_44 != NULL) && (m_44 != n_44)))
          _fail(n_44);
        else
          m_44 = n_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_44));
      }
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                t = c_81(t);
                t = Cons_2(t, _id, q_5);
              }
            }
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_5, q_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_44 = NULL,a_45 = NULL,b_45 = NULL;
  ATerm t_23;
  t_23 = t;
  {
    ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,g_45 = NULL;
    c_45 = t;
    s_44 :
    if(match_cons(c_45, sym__3))
      {
        d_45 = ATgetArgument(c_45, 0);
        e_45 = ATgetArgument(c_45, 1);
        g_45 = ATgetArgument(c_45, 2);
        {
          if(((t_44 != NULL) && (t_44 != d_45)))
            _fail(d_45);
          else
            t_44 = d_45;
          {
            if(((a_45 != NULL) && (a_45 != e_45)))
              _fail(e_45);
            else
              a_45 = e_45;
            {
              if(((b_45 != NULL) && (b_45 != g_45)))
                _fail(g_45);
              else
                b_45 = g_45;
              t = SSL_table_put(not_null(t_44), not_null(a_45), not_null(b_45));
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
ATerm parse_options_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm j_45 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    t = term_x_23;
    t = table_put_0(t);
  }
  t = u_23;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_81(t);
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_5);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_24;
            i_24 = t;
            {
              ATerm j_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_22;
                  t = get_config_0(t);
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = j_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = i_24;
            {
              t = system_usage_0(t);
              {
                t = term_l_16;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm t_5 (ATerm t)
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm k_45 = NULL;
                  k_45 = t;
                  if(((j_45 != NULL) && (j_45 != k_45)))
                    _fail(k_45);
                  else
                    j_45 = k_45;
                  return(t);
                }
                t = Undefined_1(t, u_5);
                return(t);
              }
              t = option_defined_1(t, t_5);
              {
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_45)), term_m_24);
                  return(t);
                }
                t = say_1(t, z_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_5);
      {
        ATerm q_24;
        q_24 = t;
        {
          t = term_r_20;
          t = table_destroy_0(t);
        }
        t = q_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  t = parse_options_1(t, y_78);
  {
    t = store_options_0(t);
    {
      t = a_79(t);
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_78);
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm u_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_79(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = u_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  t = option_wrap_4(t, c_79, default_usage_0, _id, d_79);
  return(t);
}
ATerm io_abox2text_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = xtc_io_1(t, abox2text_0);
    return(t);
  }
  t = option_wrap_2(t, abox2text_options_0, a_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2text_0(t);
  return(t);
}
