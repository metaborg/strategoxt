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
ATerm term_l_25;
ATerm term_r_24;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_b_23;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_j_7;
ATerm term_d_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_q_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_k_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_a_10);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_f_12);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_a_7);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_a_7);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_a_7);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__3, term_k_21, term_l_21, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm pass_width_0 (ATerm);
ATerm xtc_abox2text_width_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm z_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm q_86 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm l_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_76 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm p_86 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm r_86 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm union_1 (ATerm, ATerm r_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm d_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm q_73 (ATerm));
ATerm assert_1 (ATerm, ATerm m_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm a_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm q_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm s_62 (ATerm), ATerm t_62 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm i_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm h_73 (ATerm));
ATerm ast2text_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pp_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2text_options_0 (ATerm);
ATerm ast2text_options_0 (ATerm);
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
ATerm if_verbose1_1 (ATerm, ATerm m_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_80 (ATerm));
ATerm Program_1 (ATerm, ATerm p_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_74 (ATerm));
ATerm Undefined_1 (ATerm, ATerm q_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_74 (ATerm));
ATerm map_1 (ATerm, ATerm u_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm io_ast2text_0 (ATerm);
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
        ATerm k_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            LocalPopChoice(m_6);
          }
        else
          {
            t = k_6;
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
  t = term_n_6;
  {
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(p_6);
      }
    else
      {
        t = o_6;
        t = term_q_6;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_q_6);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_n_6);
  return(t);
}
ATerm pass_width_0 (ATerm t)
{
  ATerm s_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_6;
      t = get_config_0(t);
      LocalPopChoice(u_6);
      {
        ATerm b_3 = NULL;
        ATerm c_3 = NULL;
        c_3 = t;
        if(((b_3 != NULL) && (b_3 != c_3)))
          _fail(c_3);
        else
          b_3 = c_3;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), term_x_6);
      }
    }
  else
    {
      t = s_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_abox2text_width_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_y_6;
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm g_3 = NULL,i_3 = NULL;
    ATerm z_6;
    z_6 = t;
    {
      ATerm h_3 = NULL;
      t = term_a_7;
      {
        t = pass_width_0(t);
        {
          h_3 = t;
          if(((g_3 != NULL) && (g_3 != h_3)))
            _fail(h_3);
          else
            g_3 = h_3;
        }
      }
    }
    t = z_6;
    {
      ATerm j_3 = NULL;
      t = term_a_7;
      {
        t = pass_verbose_0(t);
        {
          j_3 = t;
          if(((i_3 != NULL) && (i_3 != j_3)))
            _fail(j_3);
          else
            i_3 = j_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(i_3));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, b_0, e_0);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym_stdin_0))
    {
      ATerm t_3 = NULL;
      ATerm u_3 = NULL;
      t = term_d_7;
      {
        t = ReadFromFile_0(t);
        {
          u_3 = t;
          if(((t_3 != NULL) && (t_3 != u_3)))
            _fail(u_3);
          else
            t_3 = u_3;
        }
      }
      t = not_null(t_3);
    }
  else
    {
      if(match_cons(r_3, sym_FILE_1))
        {
          s_3 = ATgetArgument(r_3, 0);
          {
            ATerm w_3 = NULL;
            ATerm x_3 = NULL;
            t = not_null(s_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  x_3 = t;
                  if(((w_3 != NULL) && (w_3 != x_3)))
                    _fail(x_3);
                  else
                    w_3 = x_3;
                }
              }
            }
            t = not_null(w_3);
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
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      t = SSL_WriteToBinaryFile(not_null(f_4), not_null(g_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL;
  m_4 = t;
  {
    ATerm p_4 = NULL;
    t = xtc_new_file_0(t);
    {
      p_4 = t;
      {
        if(((o_4 != NULL) && (o_4 != p_4)))
          _fail(p_4);
        else
          o_4 = p_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), not_null(m_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(o_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, z_73, a_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_close_file(not_null(t_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      t = SSL_execvp(not_null(z_4), not_null(a_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm f_5 = NULL;
  f_5 = t;
  t = SSL_waitpid(not_null(f_5));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm p_5 = NULL;
  ATerm r_5 = NULL;
  p_5 = t;
  {
    t = fork_0(t);
    {
      r_5 = t;
      {
        ATerm e_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL;
            t_5 = t;
            l_5 :
            if(match_int(t_5, 0))
              {
                t = not_null(p_5);
                t = z_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(h_7);
          }
        else
          {
            t = e_7;
            {
              ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
              t = not_null(r_5);
              {
                t = waitpid_0(t);
                {
                  u_5 = t;
                  n_5 :
                  if(match_cons(u_5, sym_WaitStatus_3))
                    {
                      v_5 = ATgetArgument(u_5, 0);
                      w_5 = ATgetArgument(u_5, 1);
                      x_5 = ATgetArgument(u_5, 2);
                      o_5 :
                      if(match_int(v_5, 0))
                        {
                          t = not_null(p_5);
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
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym__2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm f_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(g_6));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, f_0);
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
  ATerm l_6 = NULL;
  l_6 = t;
  t = SSL_table_keys(not_null(l_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm t_6 = NULL;
        ATerm v_6 = NULL;
        t_6 = t;
        {
          ATerm w_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(t_6));
          {
            t = table_get_0(t);
            {
              w_6 = t;
              if(((v_6 != NULL) && (v_6 != w_6)))
                _fail(w_6);
              else
                v_6 = w_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), not_null(v_6));
        }
        return(t);
      }
      t = map_1(t, p_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm i_7;
    i_7 = t;
    {
      ATerm b_7 = NULL;
      ATerm c_7 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          c_7 = t;
          if(((b_7 != NULL) && (b_7 != c_7)))
            _fail(c_7);
          else
            b_7 = c_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), term_j_7);
        t = geq_0(t);
      }
    }
    t = i_7;
    t = q_86(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm n_7;
  n_7 = t;
  {
    ATerm f_7 = NULL;
    ATerm g_7 = NULL;
    g_7 = t;
    if(((f_7 != NULL) && (f_7 != g_7)))
      _fail(g_7);
    else
      f_7 = g_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(f_7));
      t = printnl_0(t);
    }
  }
  t = n_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL,p_7 = NULL;
  m_7 = t;
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_7)));
    {
      t = table_get_0(t);
      {
        q_7 = t;
        k_7 :
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            r_7 = ATgetFirst((ATermList) q_7);
            u_7 = (ATerm) ATgetNext((ATermList) q_7);
            l_7 :
            if(match_cons(r_7, sym__2))
              {
                s_7 = ATgetArgument(r_7, 0);
                t_7 = ATgetArgument(r_7, 1);
                {
                  if(((o_7 != NULL) && (o_7 != s_7)))
                    _fail(s_7);
                  else
                    o_7 = s_7;
                  if(((p_7 != NULL) && (p_7 != t_7)))
                    _fail(t_7);
                  else
                    p_7 = t_7;
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
    t = not_null(p_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      {
        ATerm g_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_8)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
              h_8 = t;
              z_7 :
              if(match_cons(h_8, sym__2))
                {
                  i_8 = ATgetArgument(h_8, 0);
                  j_8 = ATgetArgument(h_8, 1);
                  {
                    if(((d_8 != NULL) && (d_8 != i_8)))
                      _fail(i_8);
                    else
                      d_8 = i_8;
                    if(((g_8 != NULL) && (g_8 != j_8)))
                      _fail(j_8);
                    else
                      g_8 = j_8;
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
        t = not_null(g_8);
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
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, l_71);
              return(t);
            }
            t = Cons_2(t, l_71, s_0);
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
              o_8 = t;
              n_8 :
              if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
                {
                  p_8 = ATgetFirst((ATermList) o_8);
                  q_8 = (ATerm) ATgetNext((ATermList) o_8);
                  {
                    t = not_null(q_8);
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
ATerm repeat_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = r_76(t);
      t = t_8(t);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = t_8(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_l_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm m_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_8;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, u_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm v_8 = NULL;
      ATerm w_8 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          w_8 = t;
          if(((v_8 != NULL) && (v_8 != w_8)))
            _fail(w_8);
          else
            v_8 = w_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), term_s_8);
        t = geq_0(t);
      }
    }
    t = r_8;
    t = p_86(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm z_8 = NULL;
      ATerm a_9 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          a_9 = t;
          if(((z_8 != NULL) && (z_8 != a_9)))
            _fail(a_9);
          else
            z_8 = a_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), term_x_8);
        t = geq_0(t);
      }
    }
    t = u_8;
    t = r_86(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym__2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      if(((f_9 != NULL) && (f_9 != g_9)))
        _fail(g_9);
      else
        f_9 = g_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
    {
      n_9 = ATgetFirst((ATermList) m_9);
      o_9 = (ATerm) ATgetNext((ATermList) m_9);
      {
        t = w_69(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm r_9 = NULL;
            r_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(r_9));
              t = v_69(t);
            }
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(o_9);
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
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym__2))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      {
        t = not_null(y_9);
        {
          ATerm d_10 (ATerm t)
          {
            ATerm y_8 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_9);
                LocalPopChoice(b_9);
              }
            else
              {
                t = y_8;
                {
                  ATerm c_9 = t;
                  int h_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(z_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_69, z_0);
                      t = d_10(t);
                      LocalPopChoice(h_9);
                    }
                  else
                    {
                      t = c_9;
                      t = Cons_2(t, _id, d_10);
                    }
                }
              }
            return(t);
          }
          t = d_10(t);
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
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym__3))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      l_10 = ATgetArgument(i_10, 2);
      {
        ATerm i_9;
        i_9 = t;
        {
          ATerm p_10 = NULL;
          ATerm q_10 = NULL,s_10 = NULL;
          ATerm r_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_10), not_null(k_10));
          {
            ATerm j_9 = t;
            int k_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(k_9);
              }
            else
              {
                t = j_9;
                t = (ATerm) ATempty;
              }
            {
              r_10 = t;
              if(((q_10 != NULL) && (q_10 != r_10)))
                _fail(r_10);
              else
                q_10 = r_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(l_10));
            {
              t = union_0(t);
              {
                s_10 = t;
                if(((p_10 != NULL) && (p_10 != s_10)))
                  _fail(s_10);
                else
                  p_10 = s_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_10), not_null(k_10), not_null(p_10));
            t = set_0(t);
          }
        }
        t = i_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym__2))
    {
      b_11 = ATgetArgument(a_11, 0);
      c_11 = ATgetArgument(a_11, 1);
      {
        t = not_null(c_11);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
            f_11 = t;
            y_10 :
            if(match_cons(f_11, sym__2))
              {
                g_11 = ATgetArgument(f_11, 0);
                h_11 = ATgetArgument(f_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_11), not_null(g_11), not_null(h_11));
                  t = d_59(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL;
      o_11 = t;
      {
        if(((n_11 != NULL) && (n_11 != o_11)))
          _fail(o_11);
        else
          n_11 = o_11;
        t = SSL_ReadFromFile(not_null(n_11));
      }
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm b_1 (ATerm t)
        {
          t = term_s_9;
          return(t);
        }
        t = debug_1(t, b_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm s_11 = NULL;
  ATerm u_11 = NULL;
  s_11 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_t_9;
        return(t);
      }
      t = debug_1(t, g_1);
      return(t);
    }
    t = if_verbose5_1(t, f_1);
    {
      ATerm u_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_9;
        }
      {
        ATerm v_9;
        v_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_7, term_a_10, (ATerm) ATinsert(ATempty, not_null(s_11)));
          t = table_put_0(t);
        }
        t = v_9;
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = term_b_10;
              return(t);
            }
            t = debug_1(t, i_1);
            return(t);
          }
          t = if_verbose4_1(t, h_1);
          {
            ATerm c_10 = t;
            int e_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(e_10);
              }
            else
              {
                t = c_10;
                t = (ATerm) ATempty;
              }
            {
              ATerm j_1 (ATerm t)
              {
                ATerm k_1 (ATerm t)
                {
                  t = term_f_10;
                  return(t);
                }
                t = say_1(t, k_1);
                return(t);
              }
              t = if_verbose6_1(t, j_1);
              {
                ATerm v_11 = NULL;
                v_11 = t;
                if(((u_11 != NULL) && (u_11 != v_11)))
                  _fail(v_11);
                else
                  u_11 = v_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(u_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm l_1 (ATerm t)
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = term_g_10;
                          return(t);
                        }
                        t = say_1(t, m_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, l_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_w_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_11)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm o_1 (ATerm t)
                              {
                                t = term_f_10;
                                return(t);
                              }
                              t = say_1(t, o_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, n_1);
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
  ATerm z_11 = NULL;
  z_11 = t;
  t = SSL_getenv(not_null(z_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_10;
      t = get_config_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_10;
            t = getenv_0(t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = term_w_10;
      return(t);
    }
    t = debug_1(t, q_1);
    return(t);
  }
  t = if_verbose5_1(t, p_1);
  {
    ATerm x_10;
    x_10 = t;
    {
      ATerm d_11 = t;
      int e_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_11;
          t = table_get_0(t);
          LocalPopChoice(e_11);
        }
      else
        {
          t = d_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = x_10;
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_j_11;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_m_11;
          return(t);
        }
        t = debug_1(t, u_1);
        return(t);
      }
      t = if_verbose5_1(t, t_1);
      {
        t = xtc_load_0(t);
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm v_1 (ATerm t)
            {
              ATerm w_1 (ATerm t)
              {
                t = term_m_11;
                return(t);
              }
              t = debug_1(t, w_1);
              return(t);
            }
            t = if_verbose5_1(t, v_1);
          }
        }
      }
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm d_12 = NULL;
        ATerm e_12 = NULL;
        e_12 = t;
        if(((d_12 != NULL) && (d_12 != e_12)))
          _fail(e_12);
        else
          d_12 = e_12;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_11), not_null(d_12)), term_r_11);
          {
            t = error_0(t);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_w_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      t = term_w_11;
                      return(t);
                    }
                    t = debug_1(t, y_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, x_1);
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
ATerm xtc_command_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm i_12 = NULL;
  ATerm x_11;
  x_11 = t;
  {
    ATerm j_12 = NULL;
    t = q_73(t);
    {
      t = xtc_find_warning_0(t);
      {
        j_12 = t;
        if(((i_12 != NULL) && (i_12 != j_12)))
          _fail(j_12);
        else
          i_12 = j_12;
      }
    }
  }
  t = x_11;
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm k_12 = NULL;
      ATerm l_12 = NULL;
      l_12 = t;
      if(((k_12 != NULL) && (k_12 != l_12)))
        _fail(l_12);
      else
        k_12 = l_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), not_null(k_12));
        t = call_0(t);
      }
    }
    t = y_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
        ATerm a_12;
        a_12 = t;
        {
          ATerm b_13 = NULL;
          ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
          t = m_74(t);
          {
            b_13 = t;
            {
              if(((y_12 != NULL) && (y_12 != b_13)))
                _fail(b_13);
              else
                y_12 = b_13;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_12), not_null(u_12), not_null(v_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_12 = t;
                    int c_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_f_12);
                        t = table_get_0(t);
                        LocalPopChoice(c_12);
                      }
                    else
                      {
                        t = b_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_13 = t;
                      r_12 :
                      if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
                        {
                          d_13 = ATgetFirst((ATermList) c_13);
                          e_13 = (ATerm) ATgetNext((ATermList) c_13);
                          {
                            if(((z_12 != NULL) && (z_12 != d_13)))
                              _fail(d_13);
                            else
                              z_12 = d_13;
                            {
                              if(((a_13 != NULL) && (a_13 != e_13)))
                                _fail(e_13);
                              else
                                a_13 = e_13;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_12), term_f_12, (ATerm) ATinsert(CheckATermList(not_null(a_13)), (ATerm) ATinsert(CheckATermList(not_null(z_12)), not_null(u_12))));
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
        t = a_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm g_12;
  g_12 = t;
  {
    t = a_75(t);
    {
      ATerm z_1 (ATerm t)
      {
        t = term_h_12;
        return(t);
      }
      t = debug_1(t, z_1);
    }
  }
  t = g_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
      o_13 = t;
      j_13 :
      if(match_cons(o_13, sym__2))
        {
          p_13 = ATgetArgument(o_13, 0);
          q_13 = ATgetArgument(o_13, 1);
          {
            if(((n_13 != NULL) && (n_13 != p_13)))
              _fail(p_13);
            else
              n_13 = p_13;
            if(((m_13 != NULL) && (m_13 != q_13)))
              _fail(q_13);
            else
              m_13 = q_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_12);
      t = SSL_open_file(not_null(n_13), not_null(m_13));
    }
  else
    {
      t = m_12;
      {
        ATerm r_13 = NULL;
        ATerm s_13 = NULL;
        ATerm b_2 (ATerm t)
        {
          t = term_o_12;
          return(t);
        }
        t = obsolete_1(t, b_2);
        {
          r_13 = t;
          {
            if(((n_13 != NULL) && (n_13 != r_13)))
              _fail(r_13);
            else
              n_13 = r_13;
            {
              ATerm p_12;
              p_12 = t;
              {
                ATerm t_13 = NULL;
                t = term_q_12;
                {
                  t_13 = t;
                  if(((s_13 != NULL) && (s_13 != t_13)))
                    _fail(t_13);
                  else
                    s_13 = t_13;
                }
              }
              t = p_12;
              t = SSL_open_file(not_null(n_13), not_null(s_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm z_13 = NULL;
  ATerm b_14 = NULL;
  z_13 = t;
  {
    ATerm w_12;
    w_12 = t;
    {
      ATerm c_14 = NULL;
      t = term_x_12;
      {
        c_14 = t;
        if(((b_14 != NULL) && (b_14 != c_14)))
          _fail(c_14);
        else
          b_14 = c_14;
      }
    }
    t = w_12;
    {
      t = SSL_open_file(not_null(z_13), not_null(b_14));
      t = SSL_close_file(not_null(z_13));
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
  ATerm g_14 = NULL;
  ATerm h_14 = NULL;
  t = term_a_7;
  {
    t = new_0(t);
    {
      h_14 = t;
      if(((g_14 != NULL) && (g_14 != h_14)))
        _fail(h_14);
      else
        g_14 = h_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), term_f_13);
    {
      t = conc_strings_0(t);
      {
        ATerm c_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, c_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm l_14 = NULL;
  t = new_file_0(t);
  {
    l_14 = t;
    {
      ATerm g_13;
      g_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_q_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_a_7);
            {
              ATerm d_2 (ATerm t)
              {
                t = term_h_13;
                return(t);
              }
              t = assert_1(t, d_2);
            }
          }
        }
      }
      t = g_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_stdin_0))
    {
      ATerm x_14 = NULL;
      ATerm y_14 = NULL;
      ATerm z_14 = NULL;
      t = xtc_new_file_0(t);
      {
        y_14 = t;
        {
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
          {
            ATerm a_15 = NULL;
            t = o_0(t);
            {
              a_15 = t;
              if(((z_14 != NULL) && (z_14 != a_15)))
                _fail(a_15);
              else
                z_14 = a_15;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), term_i_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(x_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_14));
    }
  else
    {
      if(match_cons(v_14, sym_FILE_1))
        {
          w_14 = ATgetArgument(v_14, 0);
          {
            ATerm c_15 = NULL;
            ATerm d_15 = NULL;
            t = not_null(w_14);
            {
              ATerm e_15 = NULL;
              t = xtc_new_file_0(t);
              {
                d_15 = t;
                {
                  if(((c_15 != NULL) && (c_15 != d_15)))
                    _fail(d_15);
                  else
                    c_15 = d_15;
                  {
                    ATerm f_15 = NULL;
                    t = o_0(t);
                    {
                      f_15 = t;
                      if(((e_15 != NULL) && (e_15 != f_15)))
                        _fail(f_15);
                      else
                        e_15 = f_15;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_15)), term_i_13), not_null(w_14)), term_k_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(c_15);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_15));
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
  ATerm q_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_stdin_0))
    {
      ATerm s_15 = NULL,u_15 = NULL;
      ATerm l_13;
      l_13 = t;
      {
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
      }
      t = l_13;
      {
        ATerm v_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(s_15));
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
        t = not_null(u_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm q_52 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_FILE_1))
    {
      f_16 = ATgetArgument(e_16, 0);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm j_16 = NULL;
        t = SSLgetAnnotations(not_null(e_16));
        {
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
        }
        {
          t = not_null(f_16);
          {
            ATerm m_16 = NULL;
            t = q_52(t);
            {
              k_16 = t;
              {
                ATerm n_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(k_16)), not_null(i_16));
                {
                  n_16 = t;
                  if(((m_16 != NULL) && (m_16 != n_16)))
                    _fail(n_16);
                  else
                    m_16 = n_16;
                }
                t = not_null(m_16);
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
ATerm xtc_transform_2 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          t = stdin_0(t);
        }
      LocalPopChoice(v_13);
      t = xtc_transform_file_2(t, s_73, t_73);
    }
  else
    {
      t = u_13;
      t = xtc_transform_term_2(t, s_73, t_73);
    }
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
      ATerm y_13;
      y_13 = t;
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
      t = y_13;
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
      ATerm a_14;
      a_14 = t;
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
      t = a_14;
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
        ATerm d_14 = t;
        int e_14 = stack_ptr;
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
                  ATerm f_14 = t;
                  int i_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(i_14);
                    }
                  else
                    {
                      t = f_14;
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
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
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
                        ATerm m_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_14 = t;
                            int o_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(o_14);
                              }
                            else
                              {
                                t = n_14;
                                {
                                  ATerm p_14 = t;
                                  int q_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(q_14);
                                    }
                                  else
                                    {
                                      t = p_14;
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
                            t = m_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(o_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
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
        ATerm r_14;
        r_14 = t;
        {
          ATerm r_19 = NULL;
          ATerm s_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
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
        t = r_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm j_20 = NULL;
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
    t = j_74(t);
    {
      j_20 = t;
      {
        if(((i_20 != NULL) && (i_20 != j_20)))
          _fail(j_20);
        else
          i_20 = j_20;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_f_12);
              t = table_get_0(t);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_20), term_f_12, not_null(e_20));
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
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(n_20));
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
  t = b_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_remove(not_null(y_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_62 (ATerm), ATerm t_62 (ATerm))
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_62(t);
      t = t_62(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        t = t_62(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm d_21 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm e_21 = NULL;
    ATerm f_21 = NULL;
    t = i_74(t);
    {
      e_21 = t;
      {
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        {
          ATerm g_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), term_f_12);
          {
            ATerm l_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_15);
              }
            else
              {
                t = l_15;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_21), term_f_12, (ATerm) ATinsert(CheckATermList(not_null(f_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  ATerm f_2 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = begin_scope_1(t, f_2);
  {
    ATerm g_2 (ATerm t)
    {
      ATerm n_15;
      n_15 = t;
      {
        ATerm s_21 = NULL,x_21 = NULL,y_21 = NULL;
        ATerm o_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_15;
            t = table_get_0(t);
            LocalPopChoice(r_15);
          }
        else
          {
            t = o_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_21 = t;
          p_21 :
          if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
            {
              x_21 = ATgetFirst((ATermList) s_21);
              y_21 = (ATerm) ATgetNext((ATermList) s_21);
              {
                if(((r_21 != NULL) && (r_21 != x_21)))
                  _fail(x_21);
                else
                  r_21 = x_21;
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
      t = n_15;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_h_13;
          return(t);
        }
        t = end_scope_1(t, i_2);
      }
      return(t);
    }
    t = restore_always_2(t, g_73, g_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        ATerm k_22 = NULL;
        t = term_k_13;
        {
          t = get_config_0(t);
          {
            k_22 = t;
            if(((j_22 != NULL) && (j_22 != k_22)))
              _fail(k_22);
            else
              j_22 = k_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_22));
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = term_d_7;
      }
    {
      t = h_73(t);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_13;
              t = get_config_0(t);
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              t = term_b_16;
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
ATerm ast2text_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      t = term_c_16;
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      t = term_g_16;
      t = get_config_0(t);
      return(t);
    }
    t = xtc_transform_2(t, m_2, n_2);
    t = xtc_abox2text_width_0(t);
    return(t);
  }
  t = xtc_io_1(t, l_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym__2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm w_22 = NULL;
        ATerm x_22 = NULL,z_22 = NULL;
        ATerm y_22 = NULL;
        t = not_null(s_22);
        {
          ATerm h_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(l_16);
            }
          else
            {
              t = h_16;
              t = (ATerm) ATempty;
            }
          {
            y_22 = t;
            if(((x_22 != NULL) && (x_22 != y_22)))
              _fail(y_22);
            else
              x_22 = y_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), not_null(x_22));
          {
            t = conc_0(t);
            {
              z_22 = t;
              if(((w_22 != NULL) && (w_22 != z_22)))
                _fail(z_22);
              else
                w_22 = z_22;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_16, not_null(s_22), not_null(w_22));
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
ATerm pp_options_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm f_23 = NULL;
    f_23 = t;
    d_23 :
    if(!(match_string(f_23, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm p_16;
    p_16 = t;
    {
      ATerm g_23 = NULL;
      ATerm h_23 = NULL;
      h_23 = t;
      if(((g_23 != NULL) && (g_23 != h_23)))
        _fail(h_23);
      else
        g_23 = h_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATempty, not_null(g_23)));
        t = extend_config_0(t);
      }
    }
    t = p_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  o_23 = t;
  m_23 :
  if(match_string(o_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
        {
          p_23 = ATgetFirst((ATermList) o_23);
          q_23 = (ATerm) ATgetNext((ATermList) o_23);
          n_23 :
          if(((ATgetType(q_23) == AT_LIST) && !(ATisEmpty(q_23))))
            {
              r_23 = ATgetFirst((ATermList) q_23);
              s_23 = (ATerm) ATgetNext((ATermList) q_23);
              {
                ATerm b_24 = NULL;
                ATerm r_16;
                r_16 = t;
                {
                  t = not_null(p_23);
                  t = j_0(t);
                }
                t = r_16;
                {
                  ATerm c_24 = NULL;
                  t = not_null(r_23);
                  {
                    t = k_0(t);
                    {
                      c_24 = t;
                      if(((b_24 != NULL) && (b_24 != c_24)))
                        _fail(c_24);
                      else
                        b_24 = c_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_23)), not_null(b_24));
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
  ATerm r_2 (ATerm t)
  {
    ATerm h_24 = NULL;
    h_24 = t;
    g_24 :
    if(!(match_string(h_24, "-v")))
      {
        if(!(match_string(h_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_x_16;
    t = set_config_0(t);
    t = term_y_16;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = Option_3(t, r_2, v_2, w_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    i_24 :
    if(!(match_string(k_24, "-k")))
      {
        if(!(match_string(k_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm a_17;
    a_17 = t;
    {
      ATerm l_24 = NULL;
      ATerm m_24 = NULL;
      t = string_to_int_0(t);
      {
        m_24 = t;
        if(((l_24 != NULL) && (l_24 != m_24)))
          _fail(m_24);
        else
          l_24 = m_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(l_24));
        t = set_config_0(t);
      }
    }
    t = a_17;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_c_17;
    return(t);
  }
  t = ArgOption_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_string_to_int(not_null(t_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_25 = NULL;
        b_25 = t;
        w_24 :
        if(!(match_string(b_25, "-S")))
          {
            if(!(match_string(b_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_m_17;
        t = set_config_0(t);
        t = term_n_17;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_o_17;
        return(t);
      }
      t = Option_3(t, a_3, d_3, e_3);
      LocalPopChoice(k_17);
    }
  else
    {
      t = f_17;
      {
        ATerm p_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm c_25 = NULL;
              c_25 = t;
              x_24 :
              if(!(match_string(c_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm f_25 = NULL;
              ATerm x_17;
              x_17 = t;
              {
                ATerm d_25 = NULL;
                ATerm e_25 = NULL;
                t = string_to_int_0(t);
                {
                  e_25 = t;
                  if(((d_25 != NULL) && (d_25 != e_25)))
                    _fail(e_25);
                  else
                    d_25 = e_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(d_25));
                  t = set_config_0(t);
                }
              }
              t = x_17;
              {
                ATerm g_25 = NULL;
                g_25 = t;
                if(((f_25 != NULL) && (f_25 != g_25)))
                  _fail(g_25);
                else
                  f_25 = g_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_25));
              }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_y_17;
              return(t);
            }
            t = ArgOption_3(t, f_3, k_3, l_3);
            LocalPopChoice(s_17);
          }
        else
          {
            t = p_17;
            {
              ATerm m_3 (ATerm t)
              {
                ATerm h_25 = NULL;
                h_25 = t;
                a_25 :
                if(!(match_string(h_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_a_18;
                t = set_config_0(t);
                t = term_b_18;
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_c_18;
                return(t);
              }
              t = Option_3(t, m_3, n_3, o_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm n_25 = NULL;
    n_25 = t;
    k_25 :
    if(!(match_string(n_25, "-o")))
      {
        if(!(match_string(n_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm q_25 = NULL;
    ATerm k_18;
    k_18 = t;
    {
      ATerm o_25 = NULL;
      ATerm p_25 = NULL;
      p_25 = t;
      if(((o_25 != NULL) && (o_25 != p_25)))
        _fail(p_25);
      else
        o_25 = p_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(o_25));
        t = set_config_0(t);
      }
    }
    t = k_18;
    {
      ATerm r_25 = NULL;
      r_25 = t;
      if(((q_25 != NULL) && (q_25 != r_25)))
        _fail(r_25);
      else
        q_25 = r_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_25));
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_n_18;
    return(t);
  }
  t = ArgOption_3(t, p_3, v_3, y_3);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm x_25 = NULL;
    x_25 = t;
    u_25 :
    if(!(match_string(x_25, "-i")))
      {
        if(!(match_string(x_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm a_26 = NULL;
    ATerm r_18;
    r_18 = t;
    {
      ATerm y_25 = NULL;
      ATerm z_25 = NULL;
      z_25 = t;
      if(((y_25 != NULL) && (y_25 != z_25)))
        _fail(z_25);
      else
        y_25 = z_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(y_25));
        t = set_config_0(t);
      }
    }
    t = r_18;
    {
      ATerm b_26 = NULL;
      b_26 = t;
      if(((a_26 != NULL) && (a_26 != b_26)))
        _fail(b_26);
      else
        a_26 = b_26;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_26));
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_t_18;
    return(t);
  }
  t = ArgOption_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm y_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = y_18;
                  {
                    ATerm c_4 (ATerm t)
                    {
                      ATerm g_26 = NULL;
                      g_26 = t;
                      e_26 :
                      if(!(match_string(g_26, "-w")))
                        {
                          if(!(match_string(g_26, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm h_4 (ATerm t)
                    {
                      ATerm a_19;
                      a_19 = t;
                      {
                        ATerm h_26 = NULL;
                        ATerm i_26 = NULL;
                        i_26 = t;
                        if(((h_26 != NULL) && (h_26 != i_26)))
                          _fail(i_26);
                        else
                          h_26 = i_26;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(h_26));
                          t = set_config_0(t);
                        }
                      }
                      t = a_19;
                      return(t);
                    }
                    ATerm i_4 (ATerm t)
                    {
                      t = term_b_19;
                      return(t);
                    }
                    t = ArgOption_3(t, c_4, h_4, i_4);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm ast2text_options_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      t = pp_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_26 = NULL;
  ATerm i_19;
  i_19 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm n_26 = NULL,o_26 = NULL;
      n_26 = t;
      l_26 :
      if(match_cons(n_26, sym_Program_1))
        {
          o_26 = ATgetArgument(n_26, 0);
          if(((m_26 != NULL) && (m_26 != o_26)))
            _fail(o_26);
          else
            m_26 = o_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_19), not_null(m_26)), term_j_19));
      {
        t = printnl_0(t);
        {
          t = term_q_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, term_p_19));
  {
    t = printnl_0(t);
    {
      t = term_q_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  t = SSL_TicksToSeconds(not_null(r_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym__2))
    {
      x_26 = ATgetArgument(w_26, 0);
      y_26 = ATgetArgument(w_26, 1);
      {
        ATerm q_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_26), not_null(y_26));
            LocalPopChoice(t_19);
          }
        else
          {
            t = q_19;
            t = SSL_addr(not_null(x_26), not_null(y_26));
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
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_70(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
        f_27 = t;
        e_27 :
        if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
          {
            g_27 = ATgetFirst((ATermList) f_27);
            h_27 = (ATerm) ATgetNext((ATermList) f_27);
            {
              ATerm k_27 = NULL;
              ATerm l_27 = NULL;
              t = not_null(h_27);
              {
                t = foldr_2(t, i_70, j_70);
                {
                  l_27 = t;
                  if(((k_27 != NULL) && (k_27 != l_27)))
                    _fail(l_27);
                  else
                    k_27 = l_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(k_27));
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
  ATerm s_27 = NULL;
  ATerm u_27 = NULL;
  s_27 = t;
  {
    ATerm v_27 = NULL;
    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
    t = not_null(s_27);
    {
      v_27 = t;
      {
        t = SSL_explode_term(not_null(v_27));
        {
          x_27 = t;
          r_27 :
          if(match_cons(x_27, sym__2))
            {
              y_27 = ATgetArgument(x_27, 0);
              z_27 = ATgetArgument(x_27, 1);
              if(((u_27 != NULL) && (u_27 != z_27)))
                _fail(z_27);
              else
                u_27 = z_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_27);
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
    ATerm k_4 (ATerm t)
    {
      t = term_l_17;
      return(t);
    }
    t = crush_2(t, k_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym__2))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      {
        ATerm w_19;
        w_19 = t;
        {
          ATerm x_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_28), not_null(h_28));
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
              t = SSL_gtr(not_null(g_28), not_null(h_28));
            }
        }
        t = w_19;
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
  ATerm n_28 = NULL;
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
      o_28 = t;
      m_28 :
      if(match_cons(o_28, sym__2))
        {
          p_28 = ATgetArgument(o_28, 0);
          q_28 = ATgetArgument(o_28, 1);
          {
            if(((n_28 != NULL) && (n_28 != p_28)))
              _fail(p_28);
            else
              n_28 = p_28;
            if(((n_28 != NULL) && (n_28 != q_28)))
              _fail(q_28);
            else
              n_28 = q_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm b_20;
    b_20 = t;
    {
      ATerm t_28 = NULL;
      ATerm u_28 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          u_28 = t;
          if(((t_28 != NULL) && (t_28 != u_28)))
            _fail(u_28);
          else
            t_28 = u_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), term_q_6);
        t = geq_0(t);
      }
    }
    t = b_20;
    t = m_86(t);
    return(t);
  }
  t = try_1(t, l_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm y_28 = NULL,a_29 = NULL;
    ATerm c_20;
    c_20 = t;
    {
      ATerm z_28 = NULL;
      t = run_time_0(t);
      {
        z_28 = t;
        if(((y_28 != NULL) && (y_28 != z_28)))
          _fail(z_28);
        else
          y_28 = z_28;
      }
    }
    t = c_20;
    {
      ATerm b_29 = NULL;
      t = term_g_20;
      {
        t = get_config_0(t);
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_20), not_null(y_28)), term_h_20), not_null(a_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  {
    t = term_l_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_Version_0))
    {
      ATerm n_29 = NULL,s_29 = NULL;
      ATerm p_20;
      p_20 = t;
      {
        ATerm r_29 = NULL;
        t = SSLgetAnnotations(not_null(j_29));
        {
          r_29 = t;
          if(((n_29 != NULL) && (n_29 != r_29)))
            _fail(r_29);
          else
            n_29 = r_29;
        }
      }
      t = p_20;
      {
        ATerm t_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_29));
        {
          t_29 = t;
          if(((s_29 != NULL) && (s_29 != t_29)))
            _fail(t_29);
          else
            s_29 = t_29;
        }
        t = not_null(s_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, q_4);
  t = w_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_table_create(not_null(y_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  {
    ATerm u_20;
    u_20 = t;
    {
      t = term_v_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_20, term_w_20, not_null(c_30));
          t = table_put_0(t);
        }
      }
    }
    t = u_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_table_destroy(not_null(i_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_exit(not_null(m_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  p_30 :
  if(((ATgetType(q_30) == AT_LIST) && ATisEmpty(q_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
        {
          r_30 = ATgetFirst((ATermList) q_30);
          s_30 = (ATerm) ATgetNext((ATermList) q_30);
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
  ATerm x_20;
  x_20 = t;
  {
    ATerm v_30 = NULL;
    ATerm y_30 = NULL;
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm w_30 = NULL;
          ATerm x_30 = NULL;
          x_30 = t;
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
          t = (ATerm) ATinsert(ATempty, not_null(w_30));
        }
      }
    {
      y_30 = t;
      if(((v_30 != NULL) && (v_30 != y_30)))
        _fail(y_30);
      else
        v_30 = y_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_16, not_null(v_30));
      t = printnl_0(t);
    }
  }
  t = x_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  j_31 = t;
  g_31 :
  if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
    {
      h_31 = ATgetFirst((ATermList) j_31);
      i_31 = (ATerm) ATgetNext((ATermList) j_31);
      {
        ATerm m_31 = NULL;
        t = not_null(i_31);
        {
          ATerm b_21;
          b_21 = t;
          {
            ATerm n_31 = NULL,p_31 = NULL,r_31 = NULL;
            ATerm c_21;
            c_21 = t;
            {
              ATerm o_31 = NULL;
              t = i_0(t);
              {
                o_31 = t;
                if(((n_31 != NULL) && (n_31 != o_31)))
                  _fail(o_31);
                else
                  n_31 = o_31;
              }
            }
            t = c_21;
            {
              ATerm q_31 = NULL;
              t = not_null(h_31);
              {
                t = h_0(t);
                {
                  q_31 = t;
                  if(((p_31 != NULL) && (p_31 != q_31)))
                    _fail(q_31);
                  else
                    p_31 = q_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_31)), not_null(p_31));
                {
                  r_31 = t;
                  if(((m_31 != NULL) && (m_31 != r_31)))
                    _fail(r_31);
                  else
                    m_31 = r_31;
                }
              }
            }
          }
          t = b_21;
          {
            ATerm r_4 (ATerm t)
            {
              t = not_null(m_31);
              return(t);
            }
            t = reverse_acc_2(t, h_0, r_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_31) == AT_LIST) && ATisEmpty(j_31)))
        {
          {
            t = term_a_7;
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
  ATerm s_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Program_1))
    {
      m_32 = ATgetArgument(l_32, 0);
      {
        ATerm r_32 = NULL,v_32 = NULL;
        ATerm s_32 = NULL;
        t = SSLgetAnnotations(not_null(l_32));
        {
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
        }
        {
          t = not_null(m_32);
          {
            ATerm x_32 = NULL;
            t = p_57(t);
            {
              v_32 = t;
              {
                ATerm y_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_32)), not_null(r_32));
                {
                  y_32 = t;
                  if(((x_32 != NULL) && (x_32 != y_32)))
                    _fail(y_32);
                  else
                    x_32 = y_32;
                }
                t = not_null(x_32);
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
  ATerm h_33 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL;
      t = term_g_20;
      {
        t = get_config_0(t);
        {
          s_33 = t;
          if(((h_33 != NULL) && (h_33 != s_33)))
            _fail(s_33);
          else
            h_33 = s_33;
        }
      }
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm v_4 (ATerm t)
          {
            ATerm t_33 = NULL;
            t_33 = t;
            if(((h_33 != NULL) && (h_33 != t_33)))
              _fail(t_33);
            else
              h_33 = t_33;
            return(t);
          }
          t = Program_1(t, v_4);
          return(t);
        }
        t = option_defined_1(t, u_4);
      }
    }
  {
    ATerm w_4 (ATerm t)
    {
      ATerm b_5 (ATerm t)
      {
        t = not_null(h_33);
        return(t);
      }
      t = short_description_1(t, b_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, w_4);
    {
      t = term_j_21;
      {
        t = echo_0(t);
        {
          t = term_m_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_5 (ATerm t)
                {
                  ATerm u_33 = NULL;
                  ATerm v_33 = NULL;
                  v_33 = t;
                  if(((u_33 != NULL) && (u_33 != v_33)))
                    _fail(v_33);
                  else
                    u_33 = v_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_33)), term_n_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_5);
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm x_33 = NULL;
                    ATerm a_34 = NULL;
                    ATerm e_5 (ATerm t)
                    {
                      t = not_null(h_33);
                      return(t);
                    }
                    t = long_description_1(t, e_5);
                    {
                      a_34 = t;
                      if(((x_33 != NULL) && (x_33 != a_34)))
                        _fail(a_34);
                      else
                        x_33 = a_34;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_33)), term_o_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_5);
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
  ATerm t_21;
  t_21 = t;
  {
    ATerm k_34 = NULL;
    ATerm v_34 = NULL;
    v_34 = t;
    if(((k_34 != NULL) && (k_34 != v_34)))
      _fail(v_34);
    else
      k_34 = v_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, not_null(k_34)));
      t = printnl_0(t);
    }
  }
  t = t_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    t = u_74(t);
    t = debug_0(t);
  }
  t = u_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm g_35 = NULL,j_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Undefined_1))
    {
      j_35 = ATgetArgument(g_35, 0);
      {
        ATerm m_35 = NULL,r_35 = NULL;
        ATerm q_35 = NULL;
        t = SSLgetAnnotations(not_null(g_35));
        {
          q_35 = t;
          if(((m_35 != NULL) && (m_35 != q_35)))
            _fail(q_35);
          else
            m_35 = q_35;
        }
        {
          t = not_null(j_35);
          {
            ATerm t_35 = NULL;
            t = q_57(t);
            {
              r_35 = t;
              {
                ATerm u_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_35)), not_null(m_35));
                {
                  u_35 = t;
                  if(((t_35 != NULL) && (t_35 != u_35)))
                    _fail(u_35);
                  else
                    t_35 = u_35;
                }
                t = not_null(t_35);
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
  ATerm z_35 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_64, _id);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = Cons_2(t, _id, z_35);
      }
    return(t);
  }
  t = z_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_79 (ATerm))
{
  t = fetch_1(t, d_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Help_0))
    {
      ATerm g_36 = NULL,i_36 = NULL;
      ATerm z_21;
      z_21 = t;
      {
        ATerm h_36 = NULL;
        t = SSLgetAnnotations(not_null(e_36));
        {
          h_36 = t;
          if(((g_36 != NULL) && (g_36 != h_36)))
            _fail(h_36);
          else
            g_36 = h_36;
        }
      }
      t = z_21;
      {
        ATerm j_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_36));
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
        t = not_null(i_36);
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
  ATerm o_36 = NULL;
  o_36 = t;
  t = SSL_implode_string(not_null(o_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
        t_36 = t;
        s_36 :
        if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
          {
            u_36 = ATgetFirst((ATermList) t_36);
            v_36 = (ATerm) ATgetNext((ATermList) t_36);
            {
              t = not_null(u_36);
              {
                ATerm g_5 (ATerm t)
                {
                  t = not_null(v_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_5);
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
  ATerm f_37 = NULL;
  ATerm h_37 = NULL;
  f_37 = t;
  {
    ATerm i_37 = NULL;
    ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
    t = not_null(f_37);
    {
      i_37 = t;
      {
        t = SSL_explode_term(not_null(i_37));
        {
          k_37 = t;
          d_37 :
          if(match_cons(k_37, sym__2))
            {
              l_37 = ATgetArgument(k_37, 0);
              m_37 = ATgetArgument(k_37, 1);
              e_37 :
              if(match_string(l_37, ""))
                {
                  if(((h_37 != NULL) && (h_37 != m_37)))
                    _fail(m_37);
                  else
                    h_37 = m_37;
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
      t = not_null(h_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm q_37 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_37);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          t = Nil_0(t);
          t = j_64(t);
        }
      }
    return(t);
  }
  t = q_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym__2))
    {
      u_37 = ATgetArgument(t_37, 0);
      v_37 = ATgetArgument(t_37, 1);
      {
        t = not_null(u_37);
        {
          ATerm h_5 (ATerm t)
          {
            t = not_null(v_37);
            return(t);
          }
          t = at_end_1(t, h_5);
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
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  t = SSL_explode_string(not_null(a_38));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym__2))
    {
      k_38 = ATgetArgument(j_38, 0);
      l_38 = ATgetArgument(j_38, 1);
      {
        ATerm p_38 = NULL,r_38 = NULL;
        ATerm q_38 = NULL;
        t = SSLgetAnnotations(not_null(j_38));
        {
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
        }
        {
          t = not_null(k_38);
          {
            ATerm t_38 = NULL;
            t = u_50(t);
            {
              r_38 = t;
              {
                t = not_null(l_38);
                {
                  ATerm v_38 = NULL;
                  t = v_50(t);
                  {
                    t_38 = t;
                    {
                      ATerm w_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_38), not_null(t_38)), not_null(p_38));
                      {
                        w_38 = t;
                        if(((v_38 != NULL) && (v_38 != w_38)))
                          _fail(w_38);
                        else
                          v_38 = w_38;
                      }
                      t = not_null(v_38);
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
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        ATerm g_22;
        g_22 = t;
        t = SSL_printnl(not_null(f_39), not_null(g_39));
        t = g_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm h_22;
  h_22 = t;
  {
    ATerm m_39 = NULL,o_39 = NULL;
    ATerm i_22;
    i_22 = t;
    {
      ATerm n_39 = NULL;
      t = t_74(t);
      {
        n_39 = t;
        if(((m_39 != NULL) && (m_39 != n_39)))
          _fail(n_39);
        else
          m_39 = n_39;
      }
    }
    t = i_22;
    {
      ATerm p_39 = NULL;
      p_39 = t;
      if(((o_39 != NULL) && (o_39 != p_39)))
        _fail(p_39);
      else
        o_39 = p_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_39)), not_null(m_39)));
        t = printnl_0(t);
      }
    }
  }
  t = h_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm s_39 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = Cons_2(t, u_63, s_39);
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  t = SSL_is_string(not_null(u_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm p_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_5);
            LocalPopChoice(u_22);
          }
        else
          {
            t = p_22;
            {
              ATerm d_40 = NULL,h_40 = NULL,i_40 = NULL;
              d_40 = t;
              c_40 :
              if(match_cons(d_40, sym_Path_1))
                {
                  h_40 = ATgetArgument(d_40, 0);
                  t = not_null(h_40);
                }
              else
                {
                  if(match_cons(d_40, sym_Var_1))
                    {
                      h_40 = ATgetArgument(d_40, 0);
                      {
                        t = not_null(h_40);
                        {
                          ATerm v_22 = t;
                          int a_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_23);
                            }
                          else
                            {
                              t = v_22;
                              {
                                ATerm j_5 (ATerm t)
                                {
                                  t = term_b_23;
                                  return(t);
                                }
                                t = debug_1(t, j_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_40, sym_Prefix_2))
                        {
                          h_40 = ATgetArgument(d_40, 0);
                          i_40 = ATgetArgument(d_40, 1);
                          {
                            ATerm n_40 = NULL,p_40 = NULL;
                            ATerm c_23;
                            c_23 = t;
                            {
                              ATerm o_40 = NULL;
                              t = not_null(h_40);
                              {
                                t = eval_config_0(t);
                                {
                                  o_40 = t;
                                  if(((n_40 != NULL) && (n_40 != o_40)))
                                    _fail(o_40);
                                  else
                                    n_40 = o_40;
                                }
                              }
                            }
                            t = c_23;
                            {
                              ATerm q_40 = NULL;
                              t = not_null(i_40);
                              {
                                t = eval_config_0(t);
                                {
                                  q_40 = t;
                                  if(((p_40 != NULL) && (p_40 != q_40)))
                                    _fail(q_40);
                                  else
                                    p_40 = q_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_40), not_null(p_40));
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
  ATerm y_40 = NULL;
  y_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(y_40));
    {
      t = table_get_0(t);
      {
        ATerm k_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_23;
            e_23 = t;
            {
              ATerm c_41 = NULL;
              ATerm d_41 = NULL;
              d_41 = t;
              if(((c_41 != NULL) && (c_41 != d_41)))
                _fail(d_41);
              else
                c_41 = d_41;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_16, not_null(y_40), not_null(c_41));
                t = table_put_0(t);
              }
            }
            t = e_23;
          }
          return(t);
        }
        t = try_1(t, k_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_62(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_41 = NULL,n_41 = NULL,o_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym__2))
    {
      n_41 = ATgetArgument(k_41, 0);
      o_41 = ATgetArgument(k_41, 1);
      t = SSL_table_get(not_null(n_41), not_null(o_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym__3))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      y_41 = ATgetArgument(v_41, 2);
      {
        ATerm k_23;
        k_23 = t;
        {
          ATerm c_42 = NULL;
          ATerm d_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), not_null(x_41));
          {
            ATerm l_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_23);
              }
            else
              {
                t = l_23;
                t = (ATerm) ATempty;
              }
            {
              d_42 = t;
              if(((c_42 != NULL) && (c_42 != d_42)))
                _fail(d_42);
              else
                c_42 = d_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_41), not_null(x_41), (ATerm) ATinsert(CheckATermList(not_null(c_42)), not_null(y_41)));
            t = table_put_0(t);
          }
        }
        t = k_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm j_42 = NULL;
  ATerm k_42 = NULL;
  t = term_a_7;
  {
    t = i_80(t);
    {
      k_42 = t;
      if(((j_42 != NULL) && (j_42 != k_42)))
        _fail(k_42);
      else
        j_42 = k_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_21, term_l_21, not_null(j_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_string(s_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
        {
          t_42 = ATgetFirst((ATermList) s_42);
          u_42 = (ATerm) ATgetNext((ATermList) s_42);
          {
            ATerm x_42 = NULL;
            ATerm u_23;
            u_23 = t;
            {
              t = not_null(t_42);
              t = a_0(t);
            }
            t = u_23;
            {
              ATerm y_42 = NULL;
              t = term_a_7;
              {
                t = d_0(t);
                {
                  y_42 = t;
                  if(((x_42 != NULL) && (x_42 != y_42)))
                    _fail(y_42);
                  else
                    x_42 = y_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_42)), not_null(x_42));
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
  ATerm m_5 (ATerm t)
  {
    ATerm d_43 = NULL;
    d_43 = t;
    c_43 :
    if(!(match_string(d_43, "--help")))
      {
        if(!(match_string(d_43, "-h")))
          {
            if(!(match_string(d_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_w_23;
    {
      t = set_config_0(t);
      t = term_x_23;
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  t = Option_3(t, m_5, q_5, s_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  f_43 :
  if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
    {
      h_43 = ATgetFirst((ATermList) g_43);
      i_43 = (ATerm) ATgetNext((ATermList) g_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  r_43 :
  if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
    {
      t_43 = ATgetFirst((ATermList) s_43);
      u_43 = (ATerm) ATgetNext((ATermList) s_43);
      {
        ATerm y_43 = NULL,a_44 = NULL;
        ATerm z_43 = NULL;
        t = SSLgetAnnotations(not_null(s_43));
        {
          z_43 = t;
          if(((y_43 != NULL) && (y_43 != z_43)))
            _fail(z_43);
          else
            y_43 = z_43;
        }
        {
          t = not_null(t_43);
          {
            ATerm c_44 = NULL;
            t = d_52(t);
            {
              a_44 = t;
              {
                t = not_null(u_43);
                {
                  ATerm e_44 = NULL;
                  t = e_52(t);
                  {
                    c_44 = t;
                    {
                      ATerm f_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_44)), not_null(a_44)), not_null(y_43));
                      {
                        f_44 = t;
                        if(((e_44 != NULL) && (e_44 != f_44)))
                          _fail(f_44);
                        else
                          e_44 = f_44;
                      }
                      t = not_null(e_44);
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
  ATerm p_44 = NULL;
  p_44 = t;
  o_44 :
  if(((ATgetType(p_44) == AT_LIST) && ATisEmpty(p_44)))
    {
      {
        ATerm r_44 = NULL,z_44 = NULL;
        ATerm z_23;
        z_23 = t;
        {
          ATerm y_44 = NULL;
          t = SSLgetAnnotations(not_null(p_44));
          {
            y_44 = t;
            if(((r_44 != NULL) && (r_44 != y_44)))
              _fail(y_44);
            else
              r_44 = y_44;
          }
        }
        t = z_23;
        {
          ATerm a_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_44));
          {
            a_45 = t;
            if(((z_44 != NULL) && (z_44 != a_45)))
              _fail(a_45);
            else
              z_44 = a_45;
          }
          t = not_null(z_44);
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
  ATerm h_45 = NULL,i_45 = NULL,k_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym__2))
    {
      i_45 = ATgetArgument(h_45, 0);
      k_45 = ATgetArgument(h_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_16, not_null(i_45), not_null(k_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm a_24;
  a_24 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_d_24;
      t = g_80(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = a_24;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm x_45 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm v_45 = NULL;
        ATerm w_45 = NULL;
        w_45 = t;
        if(((v_45 != NULL) && (v_45 != w_45)))
          _fail(w_45);
        else
          v_45 = w_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_20, not_null(v_45));
          t = set_config_0(t);
        }
      }
      t = e_24;
      {
        ATerm y_45 = NULL;
        y_45 = t;
        if(((x_45 != NULL) && (x_45 != y_45)))
          _fail(y_45);
        else
          x_45 = y_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_45));
      }
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm f_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              {
                t = g_80(t);
                t = Cons_2(t, _id, a_6);
              }
            }
          LocalPopChoice(j_24);
        }
      else
        {
          t = f_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_5, a_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  ATerm p_24;
  p_24 = t;
  {
    ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
    l_46 = t;
    h_46 :
    if(match_cons(l_46, sym__3))
      {
        m_46 = ATgetArgument(l_46, 0);
        n_46 = ATgetArgument(l_46, 1);
        o_46 = ATgetArgument(l_46, 2);
        {
          if(((i_46 != NULL) && (i_46 != m_46)))
            _fail(m_46);
          else
            i_46 = m_46;
          {
            if(((j_46 != NULL) && (j_46 != n_46)))
              _fail(n_46);
            else
              j_46 = n_46;
            {
              if(((k_46 != NULL) && (k_46 != o_46)))
                _fail(o_46);
              else
                k_46 = o_46;
              t = SSL_table_put(not_null(i_46), not_null(j_46), not_null(k_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm r_46 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    t = term_r_24;
    t = table_put_0(t);
  }
  t = q_24;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm s_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_80(t);
          LocalPopChoice(u_24);
        }
      else
        {
          t = s_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_6);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm v_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_24;
            z_24 = t;
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_23;
                  t = get_config_0(t);
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_24;
            {
              t = system_usage_0(t);
              {
                t = term_l_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_24);
          }
        else
          {
            t = v_24;
            {
              ATerm h_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm s_46 = NULL;
                  s_46 = t;
                  if(((r_46 != NULL) && (r_46 != s_46)))
                    _fail(s_46);
                  else
                    r_46 = s_46;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, h_6);
              {
                ATerm j_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_46)), term_l_25);
                  return(t);
                }
                t = say_1(t, j_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_6);
      {
        ATerm m_25;
        m_25 = t;
        {
          t = term_k_21;
          t = table_destroy_0(t);
        }
        t = m_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  t = parse_options_1(t, c_78);
  {
    t = store_options_0(t);
    {
      t = e_78(t);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_78);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            {
              ATerm v_25 = t;
              int w_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  t = option_wrap_4(t, g_78, default_usage_0, _id, h_78);
  return(t);
}
ATerm io_ast2text_0 (ATerm t)
{
  t = option_wrap_2(t, ast2text_options_0, ast2text_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2text_0(t);
  return(t);
}