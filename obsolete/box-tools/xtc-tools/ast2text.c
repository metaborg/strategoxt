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
ATerm term_d_26;
ATerm term_g_25;
ATerm term_l_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_c_23;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_w_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_e_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_h_15;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_o_7;
ATerm term_g_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_q_6;
ATerm term_g_6;
ATerm term_y_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_n_5;
ATerm term_j_5;
void init_constant_terms (void)
{
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__2, term_u_6, term_y_6);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_u_6, term_w_8);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_i_11);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_y_5);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_j_5, term_a_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_y_5);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_y_5);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__3, term_h_21, term_i_21, (ATerm) ATempty);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm pass_width_0 (ATerm);
ATerm xtc_abox2text_width_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm u_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm j_86 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm i_86 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm k_86 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm union_1 (ATerm, ATerm l_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_58 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm k_73 (ATerm));
ATerm assert_1 (ATerm, ATerm g_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm u_74 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm n_62 (ATerm), ATerm o_62 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm a_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm b_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm crush_2 (ATerm, ATerm a_69 (ATerm), ATerm b_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_79 (ATerm));
ATerm Program_1 (ATerm, ATerm k_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_74 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_74 (ATerm));
ATerm map_1 (ATerm, ATerm o_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm io_ast2text_0 (ATerm);
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
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(i_5);
          }
        else
          {
            t = h_5;
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
  t = term_j_5;
  {
    ATerm k_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(m_5);
      }
    else
      {
        t = k_5;
        t = term_n_5;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_n_5);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_2)), term_j_5);
  return(t);
}
ATerm pass_width_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_5;
      t = get_config_0(t);
      LocalPopChoice(p_5);
      {
        ATerm h_3 = NULL;
        ATerm i_3 = NULL;
        i_3 = t;
        if(((h_3 != NULL) && (h_3 != i_3)))
          _fail(i_3);
        else
          h_3 = i_3;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), term_q_5);
      }
    }
  else
    {
      t = o_5;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_abox2text_width_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_s_5;
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm m_3 = NULL,o_3 = NULL;
    ATerm w_5;
    w_5 = t;
    {
      ATerm n_3 = NULL;
      t = term_y_5;
      {
        t = pass_width_0(t);
        {
          n_3 = t;
          if(((m_3 != NULL) && (m_3 != n_3)))
            _fail(n_3);
          else
            m_3 = n_3;
        }
      }
    }
    t = w_5;
    {
      ATerm p_3 = NULL;
      t = term_y_5;
      {
        t = pass_verbose_0(t);
        {
          p_3 = t;
          if(((o_3 != NULL) && (o_3 != p_3)))
            _fail(p_3);
          else
            o_3 = p_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_3), not_null(o_3));
        {
          ATerm e_6 = t;
          int f_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(f_6);
            }
          else
            {
              t = e_6;
              t = conc_more_lists_0(t);
            }
        }
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, b_0, c_0);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym_stdin_0))
    {
      ATerm z_3 = NULL;
      ATerm a_4 = NULL;
      t = term_g_6;
      {
        t = ReadFromFile_0(t);
        {
          a_4 = t;
          if(((z_3 != NULL) && (z_3 != a_4)))
            _fail(a_4);
          else
            z_3 = a_4;
        }
      }
      t = not_null(z_3);
    }
  else
    {
      if(match_cons(x_3, sym_FILE_1))
        {
          y_3 = ATgetArgument(x_3, 0);
          {
            ATerm c_4 = NULL;
            ATerm d_4 = NULL;
            t = not_null(y_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  d_4 = t;
                  if(((c_4 != NULL) && (c_4 != d_4)))
                    _fail(d_4);
                  else
                    c_4 = d_4;
                }
              }
            }
            t = not_null(c_4);
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
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      t = SSL_WriteToBinaryFile(not_null(l_4), not_null(m_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm s_4 = NULL;
  ATerm u_4 = NULL;
  s_4 = t;
  {
    ATerm v_4 = NULL;
    t = xtc_new_file_0(t);
    {
      v_4 = t;
      {
        if(((u_4 != NULL) && (u_4 != v_4)))
          _fail(v_4);
        else
          u_4 = v_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), not_null(s_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(u_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, t_73, u_73);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = SSL_close_file(not_null(z_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      t = SSL_execvp(not_null(f_5), not_null(g_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = SSL_waitpid(not_null(l_5));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm v_5 = NULL;
  ATerm x_5 = NULL;
  v_5 = t;
  {
    t = fork_0(t);
    {
      x_5 = t;
      {
        ATerm h_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL;
            z_5 = t;
            r_5 :
            if(match_int(z_5, 0))
              {
                t = not_null(v_5);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(i_6);
          }
        else
          {
            t = h_6;
            {
              ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
              t = not_null(x_5);
              {
                t = waitpid_0(t);
                {
                  a_6 = t;
                  t_5 :
                  if(match_cons(a_6, sym_WaitStatus_3))
                    {
                      b_6 = ATgetArgument(a_6, 0);
                      c_6 = ATgetArgument(a_6, 1);
                      d_6 = ATgetArgument(a_6, 2);
                      u_5 :
                      if(match_int(b_6, 0))
                        {
                          t = not_null(v_5);
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
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        ATerm f_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(m_6));
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
  ATerm r_6 = NULL;
  r_6 = t;
  t = SSL_table_keys(not_null(r_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm x_6 = NULL;
  x_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm z_6 = NULL;
        ATerm b_7 = NULL;
        z_6 = t;
        {
          ATerm c_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(z_6));
          {
            t = table_get_0(t);
            {
              c_7 = t;
              if(((b_7 != NULL) && (b_7 != c_7)))
                _fail(c_7);
              else
                b_7 = c_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(b_7));
        }
        return(t);
      }
      t = map_1(t, p_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6;
      p_6 = t;
      {
        ATerm h_7 = NULL;
        ATerm i_7 = NULL;
        t = term_j_5;
        {
          t = get_config_0(t);
          {
            i_7 = t;
            if(((h_7 != NULL) && (h_7 != i_7)))
              _fail(i_7);
            else
              h_7 = i_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_q_6);
          t = geq_0(t);
        }
      }
      t = p_6;
      t = j_86(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm s_6;
  s_6 = t;
  {
    ATerm l_7 = NULL;
    ATerm m_7 = NULL;
    m_7 = t;
    if(((l_7 != NULL) && (l_7 != m_7)))
      _fail(m_7);
    else
      l_7 = m_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, not_null(l_7));
      t = printnl_0(t);
    }
  }
  t = s_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm s_7 = NULL;
  ATerm u_7 = NULL,v_7 = NULL;
  s_7 = t;
  {
    ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_7)));
    {
      t = table_get_0(t);
      {
        w_7 = t;
        q_7 :
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            x_7 = ATgetFirst((ATermList) w_7);
            a_8 = (ATerm) ATgetNext((ATermList) w_7);
            r_7 :
            if(match_cons(x_7, sym__2))
              {
                y_7 = ATgetArgument(x_7, 0);
                z_7 = ATgetArgument(x_7, 1);
                {
                  if(((u_7 != NULL) && (u_7 != y_7)))
                    _fail(y_7);
                  else
                    u_7 = y_7;
                  if(((v_7 != NULL) && (v_7 != z_7)))
                    _fail(z_7);
                  else
                    v_7 = z_7;
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
    t = not_null(v_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym__2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        ATerm m_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_8)));
        {
          t = table_get_0(t);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
              n_8 = t;
              f_8 :
              if(match_cons(n_8, sym__2))
                {
                  o_8 = ATgetArgument(n_8, 0);
                  p_8 = ATgetArgument(n_8, 1);
                  {
                    if(((j_8 != NULL) && (j_8 != o_8)))
                      _fail(o_8);
                    else
                      j_8 = o_8;
                    if(((m_8 != NULL) && (m_8 != p_8)))
                      _fail(p_8);
                    else
                      m_8 = p_8;
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
        t = not_null(m_8);
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
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_7;
      {
        t = table_get_0(t);
        {
          ATerm r_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, r_0);
        }
      }
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7;
      f_7 = t;
      {
        ATerm t_8 = NULL;
        ATerm u_8 = NULL;
        t = term_j_5;
        {
          t = get_config_0(t);
          {
            u_8 = t;
            if(((t_8 != NULL) && (t_8 != u_8)))
              _fail(u_8);
            else
              t_8 = u_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), term_g_7);
          t = geq_0(t);
        }
      }
      t = f_7;
      t = i_86(t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7;
      n_7 = t;
      {
        ATerm x_8 = NULL;
        ATerm y_8 = NULL;
        t = term_j_5;
        {
          t = get_config_0(t);
          {
            y_8 = t;
            if(((x_8 != NULL) && (x_8 != y_8)))
              _fail(y_8);
            else
              x_8 = y_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_o_7);
          t = geq_0(t);
        }
      }
      t = n_7;
      t = k_86(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      if(((d_9 != NULL) && (d_9 != e_9)))
        _fail(e_9);
      else
        d_9 = e_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
    {
      l_9 = ATgetFirst((ATermList) k_9);
      m_9 = (ATerm) ATgetNext((ATermList) k_9);
      {
        t = q_69(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm p_9 = NULL;
            p_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(p_9));
              t = p_69(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(m_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        t = not_null(w_9);
        {
          ATerm b_10 (ATerm t)
          {
            ATerm p_7 = t;
            int t_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_9);
                LocalPopChoice(t_7);
              }
            else
              {
                t = p_7;
                {
                  ATerm b_8 = t;
                  int c_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(x_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_69, t_0);
                      t = b_10(t);
                      LocalPopChoice(c_8);
                    }
                  else
                    {
                      t = b_8;
                      t = Cons_2(t, _id, b_10);
                    }
                }
              }
            return(t);
          }
          t = b_10(t);
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__3))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      j_10 = ATgetArgument(g_10, 2);
      {
        ATerm d_8;
        d_8 = t;
        {
          ATerm n_10 = NULL;
          ATerm o_10 = NULL,q_10 = NULL;
          ATerm p_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(i_10));
          {
            ATerm e_8 = t;
            int k_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_8);
              }
            else
              {
                t = e_8;
                t = (ATerm) ATempty;
              }
            {
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), not_null(j_10));
            {
              t = union_1(t, eq_0);
              {
                q_10 = t;
                if(((n_10 != NULL) && (n_10 != q_10)))
                  _fail(q_10);
                else
                  n_10 = q_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_10), not_null(i_10), not_null(n_10));
            t = table_put_0(t);
          }
        }
        t = d_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym__2))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      {
        t = not_null(a_11);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
            d_11 = t;
            w_10 :
            if(match_cons(d_11, sym__2))
              {
                e_11 = ATgetArgument(d_11, 0);
                f_11 = ATgetArgument(d_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(z_10), not_null(e_11), not_null(f_11));
                  t = y_58(t);
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
  ATerm l_11 = NULL;
  ATerm l_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL;
      m_11 = t;
      {
        if(((l_11 != NULL) && (l_11 != m_11)))
          _fail(m_11);
        else
          l_11 = m_11;
        t = SSL_ReadFromFile(not_null(l_11));
      }
      LocalPopChoice(q_8);
    }
  else
    {
      t = l_8;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_r_8;
          return(t);
        }
        t = debug_1(t, v_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm q_11 = NULL;
  ATerm s_11 = NULL;
  q_11 = t;
  {
    ATerm s_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(q_11)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_8;
      }
    {
      ATerm v_8;
      v_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_6, term_w_8, (ATerm) ATinsert(ATempty, not_null(q_11)));
        t = table_put_0(t);
      }
      t = v_8;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_z_8;
            return(t);
          }
          t = debug_1(t, x_0);
          return(t);
        }
        t = if_verbose4_1(t, w_0);
        {
          ATerm a_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(f_9);
            }
          else
            {
              t = a_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = term_g_9;
                return(t);
              }
              t = say_1(t, z_0);
              return(t);
            }
            t = if_verbose6_1(t, y_0);
            {
              ATerm t_11 = NULL;
              t_11 = t;
              if(((s_11 != NULL) && (s_11 != t_11)))
                _fail(t_11);
              else
                s_11 = t_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_u_6, not_null(s_11));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = term_h_9;
                        return(t);
                      }
                      t = say_1(t, b_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, a_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_u_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(q_11)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = term_g_9;
                              return(t);
                            }
                            t = say_1(t, d_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, c_1);
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
  ATerm x_11 = NULL;
  x_11 = t;
  t = SSL_getenv(not_null(x_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm i_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_9;
      t = get_config_0(t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = i_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_9;
            t = getenv_0(t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
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
    ATerm y_9;
    y_9 = t;
    {
      ATerm z_9 = t;
      int a_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_10;
          t = table_get_0(t);
          LocalPopChoice(a_10);
        }
      else
        {
          t = z_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = y_9;
    {
      ATerm h_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_d_10;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm e_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = debug_1(t, m_1);
        return(t);
      }
      t = if_verbose5_1(t, l_1);
      {
        t = xtc_load_0(t);
        {
          ATerm m_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(r_10);
            }
          else
            {
              t = m_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm n_1 (ATerm t)
            {
              ATerm o_1 (ATerm t)
              {
                t = term_l_10;
                return(t);
              }
              t = debug_1(t, o_1);
              return(t);
            }
            t = if_verbose5_1(t, n_1);
          }
        }
      }
      LocalPopChoice(k_10);
    }
  else
    {
      t = e_10;
      {
        ATerm b_12 = NULL;
        ATerm c_12 = NULL;
        c_12 = t;
        if(((b_12 != NULL) && (b_12 != c_12)))
          _fail(c_12);
        else
          b_12 = c_12;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_10), not_null(b_12)), term_s_10);
          {
            t = error_0(t);
            {
              ATerm p_1 (ATerm t)
              {
                t = term_u_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm q_1 (ATerm t)
                    {
                      t = term_u_10;
                      return(t);
                    }
                    t = debug_1(t, q_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, p_1);
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
ATerm xtc_command_1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm g_12 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm h_12 = NULL;
    t = k_73(t);
    {
      t = xtc_find_0(t);
      {
        h_12 = t;
        if(((g_12 != NULL) && (g_12 != h_12)))
          _fail(h_12);
        else
          g_12 = h_12;
      }
    }
  }
  t = v_10;
  {
    ATerm b_11;
    b_11 = t;
    {
      ATerm i_12 = NULL;
      ATerm j_12 = NULL;
      j_12 = t;
      if(((i_12 != NULL) && (i_12 != j_12)))
        _fail(j_12);
      else
        i_12 = j_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(i_12));
        t = call_0(t);
      }
    }
    t = b_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym__2))
    {
      s_12 = ATgetArgument(r_12, 0);
      t_12 = ATgetArgument(r_12, 1);
      {
        ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
        ATerm c_11;
        c_11 = t;
        {
          ATerm z_12 = NULL;
          ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
          t = g_74(t);
          {
            z_12 = t;
            {
              if(((w_12 != NULL) && (w_12 != z_12)))
                _fail(z_12);
              else
                w_12 = z_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_12), not_null(s_12), not_null(t_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), term_i_11);
                        t = table_get_0(t);
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = g_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_13 = t;
                      p_12 :
                      if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
                        {
                          b_13 = ATgetFirst((ATermList) a_13);
                          c_13 = (ATerm) ATgetNext((ATermList) a_13);
                          {
                            if(((x_12 != NULL) && (x_12 != b_13)))
                              _fail(b_13);
                            else
                              x_12 = b_13;
                            {
                              if(((y_12 != NULL) && (y_12 != c_13)))
                                _fail(c_13);
                              else
                                y_12 = c_13;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_12), term_i_11, (ATerm) ATinsert(CheckATermList(not_null(y_12)), (ATerm) ATinsert(CheckATermList(not_null(x_12)), not_null(s_12))));
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
ATerm obsolete_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm j_11;
  j_11 = t;
  {
    t = u_74(t);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_k_11;
        return(t);
      }
      t = debug_1(t, r_1);
    }
  }
  t = j_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
      m_13 = t;
      h_13 :
      if(match_cons(m_13, sym__2))
        {
          n_13 = ATgetArgument(m_13, 0);
          o_13 = ATgetArgument(m_13, 1);
          {
            if(((l_13 != NULL) && (l_13 != n_13)))
              _fail(n_13);
            else
              l_13 = n_13;
            if(((k_13 != NULL) && (k_13 != o_13)))
              _fail(o_13);
            else
              k_13 = o_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_11);
      t = SSL_open_file(not_null(l_13), not_null(k_13));
    }
  else
    {
      t = n_11;
      {
        ATerm p_13 = NULL;
        ATerm q_13 = NULL;
        ATerm s_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = obsolete_1(t, s_1);
        {
          p_13 = t;
          {
            if(((l_13 != NULL) && (l_13 != p_13)))
              _fail(p_13);
            else
              l_13 = p_13;
            {
              ATerm r_11;
              r_11 = t;
              {
                ATerm r_13 = NULL;
                t = term_u_11;
                {
                  r_13 = t;
                  if(((q_13 != NULL) && (q_13 != r_13)))
                    _fail(r_13);
                  else
                    q_13 = r_13;
                }
              }
              t = r_11;
              t = SSL_open_file(not_null(l_13), not_null(q_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm x_13 = NULL;
  ATerm z_13 = NULL;
  x_13 = t;
  {
    ATerm v_11;
    v_11 = t;
    {
      ATerm a_14 = NULL;
      t = term_w_11;
      {
        a_14 = t;
        if(((z_13 != NULL) && (z_13 != a_14)))
          _fail(a_14);
        else
          z_13 = a_14;
      }
    }
    t = v_11;
    {
      t = SSL_open_file(not_null(x_13), not_null(z_13));
      t = SSL_close_file(not_null(x_13));
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
  ATerm e_14 = NULL;
  ATerm f_14 = NULL;
  t = term_y_5;
  {
    t = new_0(t);
    {
      f_14 = t;
      if(((e_14 != NULL) && (e_14 != f_14)))
        _fail(f_14);
      else
        e_14 = f_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_y_11);
    {
      t = conc_strings_0(t);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
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
  ATerm j_14 = NULL;
  t = new_file_0(t);
  {
    j_14 = t;
    {
      ATerm d_12;
      d_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), term_u_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), term_y_5);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_e_12;
                return(t);
              }
              t = assert_1(t, t_1);
            }
          }
        }
      }
      t = d_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym_stdin_0))
    {
      ATerm v_14 = NULL;
      ATerm w_14 = NULL;
      ATerm x_14 = NULL;
      t = xtc_new_file_0(t);
      {
        w_14 = t;
        {
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
          {
            ATerm y_14 = NULL;
            t = o_0(t);
            {
              y_14 = t;
              if(((x_14 != NULL) && (x_14 != y_14)))
                _fail(y_14);
              else
                x_14 = y_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_14)), term_f_12));
              {
                ATerm k_12 = t;
                int l_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(l_12);
                  }
                else
                  {
                    t = k_12;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(v_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_14));
    }
  else
    {
      if(match_cons(t_14, sym_FILE_1))
        {
          u_14 = ATgetArgument(t_14, 0);
          {
            ATerm a_15 = NULL;
            ATerm b_15 = NULL;
            t = not_null(u_14);
            {
              ATerm c_15 = NULL;
              t = xtc_new_file_0(t);
              {
                b_15 = t;
                {
                  if(((a_15 != NULL) && (a_15 != b_15)))
                    _fail(b_15);
                  else
                    a_15 = b_15;
                  {
                    ATerm d_15 = NULL;
                    t = o_0(t);
                    {
                      d_15 = t;
                      if(((c_15 != NULL) && (c_15 != d_15)))
                        _fail(d_15);
                      else
                        c_15 = d_15;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_15)), term_f_12), not_null(u_14)), term_m_12));
                      {
                        ATerm n_12 = t;
                        int o_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(o_12);
                          }
                        else
                          {
                            t = n_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(a_15);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_15));
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
  ATerm o_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_stdin_0))
    {
      ATerm q_15 = NULL,s_15 = NULL;
      ATerm u_12;
      u_12 = t;
      {
        ATerm r_15 = NULL;
        t = SSLgetAnnotations(not_null(o_15));
        {
          r_15 = t;
          if(((q_15 != NULL) && (q_15 != r_15)))
            _fail(r_15);
          else
            q_15 = r_15;
        }
      }
      t = u_12;
      {
        ATerm t_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(q_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
        t = not_null(s_15);
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
  ATerm c_16 = NULL,d_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym_FILE_1))
    {
      d_16 = ATgetArgument(c_16, 0);
      {
        ATerm g_16 = NULL,i_16 = NULL;
        ATerm h_16 = NULL;
        t = SSLgetAnnotations(not_null(c_16));
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
        {
          t = not_null(d_16);
          {
            ATerm k_16 = NULL;
            t = l_52(t);
            {
              i_16 = t;
              {
                ATerm l_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(i_16)), not_null(g_16));
                {
                  l_16 = t;
                  if(((k_16 != NULL) && (k_16 != l_16)))
                    _fail(l_16);
                  else
                    k_16 = l_16;
                }
                t = not_null(k_16);
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
ATerm xtc_transform_2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  ATerm v_12 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(f_13);
        }
      else
        {
          t = e_13;
          t = stdin_0(t);
        }
      LocalPopChoice(d_13);
      t = xtc_transform_file_2(t, m_73, n_73);
    }
  else
    {
      t = v_12;
      t = xtc_transform_term_2(t, m_73, n_73);
    }
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
      ATerm g_13;
      g_13 = t;
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
      t = g_13;
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
      ATerm i_13;
      i_13 = t;
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
      t = i_13;
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
        ATerm j_13 = t;
        int s_13 = stack_ptr;
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
                  ATerm t_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = t_13;
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
            LocalPopChoice(s_13);
          }
        else
          {
            t = j_13;
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
                            ATerm b_14 = t;
                            int c_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(c_14);
                              }
                            else
                              {
                                t = b_14;
                                {
                                  ATerm d_14 = t;
                                  int g_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(g_14);
                                    }
                                  else
                                    {
                                      t = d_14;
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
        ATerm h_14;
        h_14 = t;
        {
          ATerm p_19 = NULL;
          ATerm q_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(l_19));
          {
            ATerm i_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(k_14);
              }
            else
              {
                t = i_14;
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
        t = h_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL,g_20 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm h_20 = NULL;
    ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
    t = d_74(t);
    {
      h_20 = t;
      {
        if(((g_20 != NULL) && (g_20 != h_20)))
          _fail(h_20);
        else
          g_20 = h_20;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_i_11);
              t = table_get_0(t);
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_20), term_i_11, not_null(c_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_20);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm l_20 = NULL;
                              l_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(l_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, u_1);
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
  ATerm w_20 = NULL;
  w_20 = t;
  t = SSL_remove(not_null(w_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_62 (ATerm), ATerm o_62 (ATerm))
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_62(t);
      t = o_62(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        t = o_62(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm b_21 = NULL;
  ATerm q_14;
  q_14 = t;
  {
    ATerm c_21 = NULL;
    ATerm d_21 = NULL;
    t = c_74(t);
    {
      c_21 = t;
      {
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
        {
          ATerm e_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), term_i_11);
          {
            ATerm r_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = r_14;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_21), term_i_11, (ATerm) ATinsert(CheckATermList(not_null(d_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL;
  ATerm v_1 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  t = begin_scope_1(t, v_1);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm e_15;
      e_15 = t;
      {
        ATerm q_21 = NULL,v_21 = NULL,w_21 = NULL;
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_15;
            t = table_get_0(t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          q_21 = t;
          n_21 :
          if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
            {
              v_21 = ATgetFirst((ATermList) q_21);
              w_21 = (ATerm) ATgetNext((ATermList) q_21);
              {
                if(((p_21 != NULL) && (p_21 != v_21)))
                  _fail(v_21);
                else
                  p_21 = v_21;
                {
                  if(((o_21 != NULL) && (o_21 != w_21)))
                    _fail(w_21);
                  else
                    o_21 = w_21;
                  {
                    t = not_null(p_21);
                    {
                      ATerm x_1 (ATerm t)
                      {
                        ATerm i_15 = t;
                        int j_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(j_15);
                          }
                        else
                          {
                            t = i_15;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, x_1);
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
        ATerm z_1 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = end_scope_1(t, z_1);
      }
      return(t);
    }
    t = restore_always_2(t, a_73, w_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm a_2 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        ATerm i_22 = NULL;
        t = term_m_12;
        {
          t = get_config_0(t);
          {
            i_22 = t;
            if(((h_22 != NULL) && (h_22 != i_22)))
              _fail(i_22);
            else
              h_22 = i_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_22));
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = term_g_6;
      }
    {
      t = b_73(t);
      {
        ATerm b_2 (ATerm t)
        {
          ATerm m_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_f_12;
              t = get_config_0(t);
              LocalPopChoice(p_15);
            }
          else
            {
              t = m_15;
              t = term_u_15;
            }
          return(t);
        }
        t = copy_to_1(t, b_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, a_2);
  return(t);
}
ATerm ast2text_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      t = term_v_15;
      return(t);
    }
    ATerm e_2 (ATerm t)
    {
      t = term_w_15;
      t = get_config_0(t);
      return(t);
    }
    t = xtc_transform_2(t, d_2, e_2);
    t = xtc_abox2text_width_0(t);
    return(t);
  }
  t = xtc_io_1(t, c_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym__2))
    {
      q_22 = ATgetArgument(p_22, 0);
      r_22 = ATgetArgument(p_22, 1);
      {
        ATerm u_22 = NULL;
        ATerm v_22 = NULL,x_22 = NULL;
        ATerm w_22 = NULL;
        t = not_null(q_22);
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = (ATerm) ATempty;
            }
          {
            w_22 = t;
            if(((v_22 != NULL) && (v_22 != w_22)))
              _fail(w_22);
            else
              v_22 = w_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(v_22));
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
                t = conc_more_lists_0(t);
              }
            {
              x_22 = t;
              if(((u_22 != NULL) && (u_22 != x_22)))
                _fail(x_22);
              else
                u_22 = x_22;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_16, not_null(q_22), not_null(u_22));
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
  ATerm f_2 (ATerm t)
  {
    ATerm d_23 = NULL;
    d_23 = t;
    b_23 :
    if(!(match_string(d_23, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm f_16;
    f_16 = t;
    {
      ATerm e_23 = NULL;
      ATerm f_23 = NULL;
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATinsert(ATempty, not_null(e_23)));
        t = extend_config_0(t);
      }
    }
    t = f_16;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,v_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_string(m_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
        {
          n_23 = ATgetFirst((ATermList) m_23);
          o_23 = (ATerm) ATgetNext((ATermList) m_23);
          l_23 :
          if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
            {
              p_23 = ATgetFirst((ATermList) o_23);
              v_23 = (ATerm) ATgetNext((ATermList) o_23);
              {
                ATerm z_23 = NULL;
                ATerm m_16;
                m_16 = t;
                {
                  t = not_null(n_23);
                  t = j_0(t);
                }
                t = m_16;
                {
                  ATerm a_24 = NULL;
                  t = not_null(p_23);
                  {
                    t = k_0(t);
                    {
                      a_24 = t;
                      if(((z_23 != NULL) && (z_23 != a_24)))
                        _fail(a_24);
                      else
                        z_23 = a_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_23)), not_null(z_23));
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
  ATerm i_2 (ATerm t)
  {
    ATerm f_24 = NULL;
    f_24 = t;
    e_24 :
    if(!(match_string(f_24, "-v")))
      {
        if(!(match_string(f_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_o_16;
    t = set_config_0(t);
    t = term_p_16;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = Option_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm i_24 = NULL;
    i_24 = t;
    g_24 :
    if(!(match_string(i_24, "-k")))
      {
        if(!(match_string(i_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm v_16;
    v_16 = t;
    {
      ATerm m_24 = NULL;
      ATerm o_24 = NULL;
      t = string_to_int_0(t);
      {
        o_24 = t;
        if(((m_24 != NULL) && (m_24 != o_24)))
          _fail(o_24);
        else
          m_24 = o_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_16, not_null(m_24));
        t = set_config_0(t);
      }
    }
    t = v_16;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  t = ArgOption_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_string_to_int(not_null(r_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm z_24 = NULL;
        z_24 = t;
        u_24 :
        if(!(match_string(z_24, "-S")))
          {
            if(!(match_string(z_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_d_17;
        t = set_config_0(t);
        t = term_i_17;
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_j_17;
        return(t);
      }
      t = Option_3(t, o_2, p_2, q_2);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm a_25 = NULL;
              a_25 = t;
              v_24 :
              if(!(match_string(a_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              ATerm d_25 = NULL;
              ATerm m_17;
              m_17 = t;
              {
                ATerm b_25 = NULL;
                ATerm c_25 = NULL;
                t = string_to_int_0(t);
                {
                  c_25 = t;
                  if(((b_25 != NULL) && (b_25 != c_25)))
                    _fail(c_25);
                  else
                    b_25 = c_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_5, not_null(b_25));
                  t = set_config_0(t);
                }
              }
              t = m_17;
              {
                ATerm e_25 = NULL;
                e_25 = t;
                if(((d_25 != NULL) && (d_25 != e_25)))
                  _fail(e_25);
                else
                  d_25 = e_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_25));
              }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_n_17;
              return(t);
            }
            t = ArgOption_3(t, r_2, s_2, t_2);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm f_25 = NULL;
                f_25 = t;
                y_24 :
                if(!(match_string(f_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_v_17;
                t = set_config_0(t);
                t = term_w_17;
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                t = term_x_17;
                return(t);
              }
              t = Option_3(t, u_2, v_2, w_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm l_25 = NULL;
    l_25 = t;
    i_25 :
    if(!(match_string(l_25, "-o")))
      {
        if(!(match_string(l_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm o_25 = NULL;
    ATerm c_18;
    c_18 = t;
    {
      ATerm m_25 = NULL;
      ATerm n_25 = NULL;
      n_25 = t;
      if(((m_25 != NULL) && (m_25 != n_25)))
        _fail(n_25);
      else
        m_25 = n_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_12, not_null(m_25));
        t = set_config_0(t);
      }
    }
    t = c_18;
    {
      ATerm p_25 = NULL;
      p_25 = t;
      if(((o_25 != NULL) && (o_25 != p_25)))
        _fail(p_25);
      else
        o_25 = p_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_25));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  t = ArgOption_3(t, x_2, y_2, b_3);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm v_25 = NULL;
    v_25 = t;
    s_25 :
    if(!(match_string(v_25, "-i")))
      {
        if(!(match_string(v_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm y_25 = NULL;
    ATerm e_18;
    e_18 = t;
    {
      ATerm w_25 = NULL;
      ATerm x_25 = NULL;
      x_25 = t;
      if(((w_25 != NULL) && (w_25 != x_25)))
        _fail(x_25);
      else
        w_25 = x_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_12, not_null(w_25));
        t = set_config_0(t);
      }
    }
    t = e_18;
    {
      ATerm z_25 = NULL;
      z_25 = t;
      if(((y_25 != NULL) && (y_25 != z_25)))
        _fail(z_25);
      else
        y_25 = z_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_25));
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_i_18;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm l_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = l_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            {
              ATerm t_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = t_18;
                  {
                    ATerm j_3 (ATerm t)
                    {
                      ATerm e_26 = NULL;
                      e_26 = t;
                      c_26 :
                      if(!(match_string(e_26, "-w")))
                        {
                          if(!(match_string(e_26, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm k_3 (ATerm t)
                    {
                      ATerm v_18;
                      v_18 = t;
                      {
                        ATerm f_26 = NULL;
                        ATerm g_26 = NULL;
                        g_26 = t;
                        if(((f_26 != NULL) && (f_26 != g_26)))
                          _fail(g_26);
                        else
                          f_26 = g_26;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_5, not_null(f_26));
                          t = set_config_0(t);
                        }
                      }
                      t = v_18;
                      return(t);
                    }
                    ATerm l_3 (ATerm t)
                    {
                      t = term_w_18;
                      return(t);
                    }
                    t = ArgOption_3(t, j_3, k_3, l_3);
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
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0(t);
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      t = pp_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_26 = NULL;
  ATerm z_18;
  z_18 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm l_26 = NULL,m_26 = NULL;
      l_26 = t;
      j_26 :
      if(match_cons(l_26, sym_Program_1))
        {
          m_26 = ATgetArgument(l_26, 0);
          if(((k_26 != NULL) && (k_26 != m_26)))
            _fail(m_26);
          else
            k_26 = m_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, q_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_19), not_null(k_26)), term_e_19));
      {
        t = printnl_0(t);
        {
          t = term_n_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, term_g_19));
  {
    t = printnl_0(t);
    {
      t = term_n_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  t = SSL_TicksToSeconds(not_null(p_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym__2))
    {
      v_26 = ATgetArgument(u_26, 0);
      w_26 = ATgetArgument(u_26, 1);
      {
        ATerm h_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_26), not_null(w_26));
            LocalPopChoice(m_19);
          }
        else
          {
            t = h_19;
            t = SSL_addr(not_null(v_26), not_null(w_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_70(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
        d_27 = t;
        c_27 :
        if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
          {
            e_27 = ATgetFirst((ATermList) d_27);
            f_27 = (ATerm) ATgetNext((ATermList) d_27);
            {
              ATerm i_27 = NULL;
              ATerm j_27 = NULL;
              t = not_null(f_27);
              {
                t = foldr_2(t, c_70, d_70);
                {
                  j_27 = t;
                  if(((i_27 != NULL) && (i_27 != j_27)))
                    _fail(j_27);
                  else
                    i_27 = j_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), not_null(i_27));
                t = d_70(t);
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
ATerm crush_2 (ATerm t, ATerm a_69 (ATerm), ATerm b_69 (ATerm))
{
  ATerm q_27 = NULL;
  ATerm s_27 = NULL;
  q_27 = t;
  {
    ATerm t_27 = NULL;
    ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
    t = not_null(q_27);
    {
      t_27 = t;
      {
        t = SSL_explode_term(not_null(t_27));
        {
          v_27 = t;
          p_27 :
          if(match_cons(v_27, sym__2))
            {
              w_27 = ATgetArgument(v_27, 0);
              x_27 = ATgetArgument(v_27, 1);
              if(((s_27 != NULL) && (s_27 != x_27)))
                _fail(x_27);
              else
                s_27 = x_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_27);
      t = foldr_2(t, a_69, b_69);
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
    ATerm r_3 (ATerm t)
    {
      t = term_a_17;
      return(t);
    }
    t = crush_2(t, r_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(match_cons(d_28, sym__2))
    {
      e_28 = ATgetArgument(d_28, 0);
      f_28 = ATgetArgument(d_28, 1);
      {
        ATerm r_19;
        r_19 = t;
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_28), not_null(f_28));
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              t = SSL_gtr(not_null(e_28), not_null(f_28));
            }
        }
        t = r_19;
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
  ATerm l_28 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
      m_28 = t;
      k_28 :
      if(match_cons(m_28, sym__2))
        {
          n_28 = ATgetArgument(m_28, 0);
          o_28 = ATgetArgument(m_28, 1);
          {
            if(((l_28 != NULL) && (l_28 != n_28)))
              _fail(n_28);
            else
              l_28 = n_28;
            if(((l_28 != NULL) && (l_28 != o_28)))
              _fail(o_28);
            else
              l_28 = o_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19;
      y_19 = t;
      {
        ATerm r_28 = NULL;
        ATerm s_28 = NULL;
        t = term_j_5;
        {
          t = get_config_0(t);
          {
            s_28 = t;
            if(((r_28 != NULL) && (r_28 != s_28)))
              _fail(s_28);
            else
              r_28 = s_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), term_n_5);
          t = geq_0(t);
        }
      }
      t = y_19;
      t = f_86(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm w_28 = NULL,y_28 = NULL;
    ATerm z_19;
    z_19 = t;
    {
      ATerm x_28 = NULL;
      t = run_time_0(t);
      {
        x_28 = t;
        if(((w_28 != NULL) && (w_28 != x_28)))
          _fail(x_28);
        else
          w_28 = x_28;
      }
    }
    t = z_19;
    {
      ATerm a_29 = NULL;
      t = term_a_20;
      {
        t = get_config_0(t);
        {
          a_29 = t;
          if(((y_28 != NULL) && (y_28 != a_29)))
            _fail(a_29);
          else
            y_28 = a_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_20), not_null(w_28)), term_e_20), not_null(y_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_3);
  {
    t = term_a_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  i_29 :
  if(match_cons(m_29, sym_Version_0))
    {
      ATerm o_29 = NULL,q_29 = NULL;
      ATerm m_20;
      m_20 = t;
      {
        ATerm p_29 = NULL;
        t = SSLgetAnnotations(not_null(m_29));
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
      }
      t = m_20;
      {
        ATerm r_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_29));
        {
          r_29 = t;
          if(((q_29 != NULL) && (q_29 != r_29)))
            _fail(r_29);
          else
            q_29 = r_29;
        }
        t = not_null(q_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, t_3);
  t = p_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_table_create(not_null(w_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm r_20;
    r_20 = t;
    {
      t = term_s_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_20, term_t_20, not_null(a_30));
          t = table_put_0(t);
        }
      }
    }
    t = r_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  t = SSL_table_destroy(not_null(g_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  t = SSL_exit(not_null(k_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(((ATgetType(o_30) == AT_LIST) && ATisEmpty(o_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          p_30 = ATgetFirst((ATermList) o_30);
          q_30 = (ATerm) ATgetNext((ATermList) o_30);
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
  ATerm u_20;
  u_20 = t;
  {
    ATerm t_30 = NULL;
    ATerm w_30 = NULL;
    ATerm v_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = v_20;
        {
          ATerm u_30 = NULL;
          ATerm v_30 = NULL;
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
          t = (ATerm) ATinsert(ATempty, not_null(u_30));
        }
      }
    {
      w_30 = t;
      if(((t_30 != NULL) && (t_30 != w_30)))
        _fail(w_30);
      else
        t_30 = w_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_15, not_null(t_30));
      t = printnl_0(t);
    }
  }
  t = u_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  h_31 = t;
  e_31 :
  if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
    {
      f_31 = ATgetFirst((ATermList) h_31);
      g_31 = (ATerm) ATgetNext((ATermList) h_31);
      {
        ATerm k_31 = NULL;
        t = not_null(g_31);
        {
          ATerm y_20;
          y_20 = t;
          {
            ATerm l_31 = NULL,n_31 = NULL,p_31 = NULL;
            ATerm z_20;
            z_20 = t;
            {
              ATerm m_31 = NULL;
              t = i_0(t);
              {
                m_31 = t;
                if(((l_31 != NULL) && (l_31 != m_31)))
                  _fail(m_31);
                else
                  l_31 = m_31;
              }
            }
            t = z_20;
            {
              ATerm o_31 = NULL;
              t = not_null(f_31);
              {
                t = h_0(t);
                {
                  o_31 = t;
                  if(((n_31 != NULL) && (n_31 != o_31)))
                    _fail(o_31);
                  else
                    n_31 = o_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_31)), not_null(n_31));
                {
                  p_31 = t;
                  if(((k_31 != NULL) && (k_31 != p_31)))
                    _fail(p_31);
                  else
                    k_31 = p_31;
                }
              }
            }
          }
          t = y_20;
          {
            ATerm u_3 (ATerm t)
            {
              t = not_null(k_31);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_31) == AT_LIST) && ATisEmpty(h_31)))
        {
          {
            t = term_y_5;
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
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Program_1))
    {
      m_32 = ATgetArgument(l_32, 0);
      {
        ATerm r_32 = NULL,t_32 = NULL;
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
            ATerm v_32 = NULL;
            t = k_57(t);
            {
              t_32 = t;
              {
                ATerm w_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_32)), not_null(r_32));
                {
                  w_32 = t;
                  if(((v_32 != NULL) && (v_32 != w_32)))
                    _fail(w_32);
                  else
                    v_32 = w_32;
                }
                t = not_null(v_32);
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
  ATerm o_33 = NULL;
  ATerm a_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL;
      t = term_a_20;
      {
        t = get_config_0(t);
        {
          p_33 = t;
          if(((o_33 != NULL) && (o_33 != p_33)))
            _fail(p_33);
          else
            o_33 = p_33;
        }
      }
      LocalPopChoice(f_21);
    }
  else
    {
      t = a_21;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm e_4 (ATerm t)
          {
            ATerm q_33 = NULL;
            q_33 = t;
            if(((o_33 != NULL) && (o_33 != q_33)))
              _fail(q_33);
            else
              o_33 = q_33;
            return(t);
          }
          t = Program_1(t, e_4);
          return(t);
        }
        t = fetch_1(t, b_4);
      }
    }
  {
    t = term_g_21;
    {
      t = echo_0(t);
      {
        t = term_j_21;
        {
          t = table_get_0(t);
          {
            ATerm f_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, f_4);
            {
              ATerm g_4 (ATerm t)
              {
                ATerm s_33 = NULL;
                ATerm v_33 = NULL;
                v_33 = t;
                if(((s_33 != NULL) && (s_33 != v_33)))
                  _fail(v_33);
                else
                  s_33 = v_33;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_33)), term_k_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, g_4);
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
  ATerm l_21;
  l_21 = t;
  {
    ATerm b_34 = NULL;
    ATerm f_34 = NULL;
    f_34 = t;
    if(((b_34 != NULL) && (b_34 != f_34)))
      _fail(f_34);
    else
      b_34 = f_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, not_null(b_34)));
      t = printnl_0(t);
    }
  }
  t = l_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm m_21;
  m_21 = t;
  {
    t = o_74(t);
    t = debug_0(t);
  }
  t = m_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm a_35 = NULL,b_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym_Undefined_1))
    {
      b_35 = ATgetArgument(a_35, 0);
      {
        ATerm g_35 = NULL,l_35 = NULL;
        ATerm h_35 = NULL;
        t = SSLgetAnnotations(not_null(a_35));
        {
          h_35 = t;
          if(((g_35 != NULL) && (g_35 != h_35)))
            _fail(h_35);
          else
            g_35 = h_35;
        }
        {
          t = not_null(b_35);
          {
            ATerm n_35 = NULL;
            t = l_57(t);
            {
              l_35 = t;
              {
                ATerm o_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_35)), not_null(g_35));
                {
                  o_35 = t;
                  if(((n_35 != NULL) && (n_35 != o_35)))
                    _fail(o_35);
                  else
                    n_35 = o_35;
                }
                t = not_null(n_35);
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
ATerm fetch_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm t_35 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_63, _id);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = Cons_2(t, _id, t_35);
      }
    return(t);
  }
  t = t_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_78 (ATerm))
{
  t = fetch_1(t, w_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym_Help_0))
    {
      ATerm a_36 = NULL,c_36 = NULL;
      ATerm t_21;
      t_21 = t;
      {
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(y_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
      }
      t = t_21;
      {
        ATerm d_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_36));
        {
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
        }
        t = not_null(c_36);
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
  ATerm i_36 = NULL;
  i_36 = t;
  t = SSL_implode_string(not_null(i_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_21);
    }
  else
    {
      t = u_21;
      {
        ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
        n_36 = t;
        m_36 :
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            o_36 = ATgetFirst((ATermList) n_36);
            p_36 = (ATerm) ATgetNext((ATermList) n_36);
            {
              t = not_null(o_36);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(p_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_4);
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
  ATerm z_36 = NULL;
  ATerm b_37 = NULL;
  z_36 = t;
  {
    ATerm c_37 = NULL;
    ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
    t = not_null(z_36);
    {
      c_37 = t;
      {
        t = SSL_explode_term(not_null(c_37));
        {
          e_37 = t;
          x_36 :
          if(match_cons(e_37, sym__2))
            {
              f_37 = ATgetArgument(e_37, 0);
              g_37 = ATgetArgument(e_37, 1);
              y_36 :
              if(match_string(f_37, ""))
                {
                  if(((b_37 != NULL) && (b_37 != g_37)))
                    _fail(g_37);
                  else
                    b_37 = g_37;
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
      t = not_null(b_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm k_37 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_37);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          t = Nil_0(t);
          t = d_64(t);
        }
      }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym__2))
    {
      o_37 = ATgetArgument(n_37, 0);
      p_37 = ATgetArgument(n_37, 1);
      {
        t = not_null(o_37);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(p_37);
            return(t);
          }
          t = at_end_1(t, i_4);
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
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_explode_string(not_null(u_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym__2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      {
        ATerm j_38 = NULL,l_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm n_38 = NULL;
            t = p_50(t);
            {
              l_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm p_38 = NULL;
                  t = q_50(t);
                  {
                    n_38 = t;
                    {
                      ATerm q_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_38), not_null(n_38)), not_null(j_38));
                      {
                        q_38 = t;
                        if(((p_38 != NULL) && (p_38 != q_38)))
                          _fail(q_38);
                        else
                          p_38 = q_38;
                      }
                      t = not_null(p_38);
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
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym__2))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      {
        ATerm e_22;
        e_22 = t;
        t = SSL_printnl(not_null(z_38), not_null(a_39));
        t = e_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm f_22;
  f_22 = t;
  {
    ATerm g_39 = NULL,i_39 = NULL;
    ATerm g_22;
    g_22 = t;
    {
      ATerm h_39 = NULL;
      t = n_74(t);
      {
        h_39 = t;
        if(((g_39 != NULL) && (g_39 != h_39)))
          _fail(h_39);
        else
          g_39 = h_39;
      }
    }
    t = g_22;
    {
      ATerm j_39 = NULL;
      j_39 = t;
      if(((i_39 != NULL) && (i_39 != j_39)))
        _fail(j_39);
      else
        i_39 = j_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_39)), not_null(g_39)));
        t = printnl_0(t);
      }
    }
  }
  t = f_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm m_39 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = Cons_2(t, o_63, m_39);
      }
    return(t);
  }
  t = m_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  t = SSL_is_string(not_null(o_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm n_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              ATerm t_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_22);
                }
              else
                {
                  t = t_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_4);
            LocalPopChoice(s_22);
          }
        else
          {
            t = n_22;
            {
              ATerm x_39 = NULL,y_39 = NULL,c_40 = NULL;
              x_39 = t;
              w_39 :
              if(match_cons(x_39, sym_Path_1))
                {
                  y_39 = ATgetArgument(x_39, 0);
                  t = not_null(y_39);
                }
              else
                {
                  if(match_cons(x_39, sym_Var_1))
                    {
                      y_39 = ATgetArgument(x_39, 0);
                      {
                        t = not_null(y_39);
                        {
                          ATerm z_22 = t;
                          int a_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_23);
                            }
                          else
                            {
                              t = z_22;
                              {
                                ATerm o_4 (ATerm t)
                                {
                                  t = term_c_23;
                                  return(t);
                                }
                                t = debug_1(t, o_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_39, sym_Prefix_2))
                        {
                          y_39 = ATgetArgument(x_39, 0);
                          c_40 = ATgetArgument(x_39, 1);
                          {
                            ATerm h_40 = NULL,j_40 = NULL;
                            ATerm g_23;
                            g_23 = t;
                            {
                              ATerm i_40 = NULL;
                              t = not_null(y_39);
                              {
                                t = eval_config_0(t);
                                {
                                  i_40 = t;
                                  if(((h_40 != NULL) && (h_40 != i_40)))
                                    _fail(i_40);
                                  else
                                    h_40 = i_40;
                                }
                              }
                            }
                            t = g_23;
                            {
                              ATerm k_40 = NULL;
                              t = not_null(c_40);
                              {
                                t = eval_config_0(t);
                                {
                                  k_40 = t;
                                  if(((j_40 != NULL) && (j_40 != k_40)))
                                    _fail(k_40);
                                  else
                                    j_40 = k_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), not_null(j_40));
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
  ATerm s_40 = NULL;
  s_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_16, not_null(s_40));
    {
      t = table_get_0(t);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm j_23;
              j_23 = t;
              {
                ATerm w_40 = NULL;
                ATerm x_40 = NULL;
                x_40 = t;
                if(((w_40 != NULL) && (w_40 != x_40)))
                  _fail(x_40);
                else
                  w_40 = x_40;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_16, not_null(s_40), not_null(w_40));
                  t = table_put_0(t);
                }
              }
              t = j_23;
            }
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_62(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,i_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym__2))
    {
      f_41 = ATgetArgument(e_41, 0);
      i_41 = ATgetArgument(e_41, 1);
      t = SSL_table_get(not_null(f_41), not_null(i_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym__3))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      s_41 = ATgetArgument(p_41, 2);
      {
        ATerm s_23;
        s_23 = t;
        {
          ATerm w_41 = NULL;
          ATerm x_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_41), not_null(r_41));
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = (ATerm) ATempty;
              }
            {
              x_41 = t;
              if(((w_41 != NULL) && (w_41 != x_41)))
                _fail(x_41);
              else
                w_41 = x_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_41), not_null(r_41), (ATerm) ATinsert(CheckATermList(not_null(w_41)), not_null(s_41)));
            t = table_put_0(t);
          }
        }
        t = s_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm d_42 = NULL;
  ATerm e_42 = NULL;
  t = term_y_5;
  {
    t = b_80(t);
    {
      e_42 = t;
      if(((d_42 != NULL) && (d_42 != e_42)))
        _fail(e_42);
      else
        d_42 = e_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_21, term_i_21, not_null(d_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_string(m_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
        {
          n_42 = ATgetFirst((ATermList) m_42);
          o_42 = (ATerm) ATgetNext((ATermList) m_42);
          {
            ATerm r_42 = NULL;
            ATerm w_23;
            w_23 = t;
            {
              t = not_null(n_42);
              t = a_0(t);
            }
            t = w_23;
            {
              ATerm s_42 = NULL;
              t = term_y_5;
              {
                t = d_0(t);
                {
                  s_42 = t;
                  if(((r_42 != NULL) && (r_42 != s_42)))
                    _fail(s_42);
                  else
                    r_42 = s_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(r_42));
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
  ATerm p_4 (ATerm t)
  {
    ATerm x_42 = NULL;
    x_42 = t;
    w_42 :
    if(!(match_string(x_42, "--help")))
      {
        if(!(match_string(x_42, "-h")))
          {
            if(!(match_string(x_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_y_23;
    {
      t = set_config_0(t);
      t = term_b_24;
    }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = Option_3(t, p_4, q_4, r_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(((ATgetType(a_43) == AT_LIST) && !(ATisEmpty(a_43))))
    {
      b_43 = ATgetFirst((ATermList) a_43);
      c_43 = (ATerm) ATgetNext((ATermList) a_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  l_43 :
  if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
    {
      n_43 = ATgetFirst((ATermList) m_43);
      o_43 = (ATerm) ATgetNext((ATermList) m_43);
      {
        ATerm s_43 = NULL,u_43 = NULL;
        ATerm t_43 = NULL;
        t = SSLgetAnnotations(not_null(m_43));
        {
          t_43 = t;
          if(((s_43 != NULL) && (s_43 != t_43)))
            _fail(t_43);
          else
            s_43 = t_43;
        }
        {
          t = not_null(n_43);
          {
            ATerm w_43 = NULL;
            t = y_51(t);
            {
              u_43 = t;
              {
                t = not_null(o_43);
                {
                  ATerm y_43 = NULL;
                  t = z_51(t);
                  {
                    w_43 = t;
                    {
                      ATerm z_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_43)), not_null(u_43)), not_null(s_43));
                      {
                        z_43 = t;
                        if(((y_43 != NULL) && (y_43 != z_43)))
                          _fail(z_43);
                        else
                          y_43 = z_43;
                      }
                      t = not_null(y_43);
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
  ATerm j_44 = NULL;
  j_44 = t;
  i_44 :
  if(((ATgetType(j_44) == AT_LIST) && ATisEmpty(j_44)))
    {
      {
        ATerm l_44 = NULL,t_44 = NULL;
        ATerm d_24;
        d_24 = t;
        {
          ATerm m_44 = NULL;
          t = SSLgetAnnotations(not_null(j_44));
          {
            m_44 = t;
            if(((l_44 != NULL) && (l_44 != m_44)))
              _fail(m_44);
            else
              l_44 = m_44;
          }
        }
        t = d_24;
        {
          ATerm u_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_44));
          {
            u_44 = t;
            if(((t_44 != NULL) && (t_44 != u_44)))
              _fail(u_44);
            else
              t_44 = u_44;
          }
          t = not_null(t_44);
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
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym__2))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_16, not_null(c_45), not_null(d_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm h_24;
  h_24 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_24;
        t = z_79(t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
        }
      }
  }
  t = h_24;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm r_45 = NULL;
      ATerm n_24;
      n_24 = t;
      {
        ATerm p_45 = NULL;
        ATerm q_45 = NULL;
        q_45 = t;
        if(((p_45 != NULL) && (p_45 != q_45)))
          _fail(q_45);
        else
          p_45 = q_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_20, not_null(p_45));
          t = set_config_0(t);
        }
      }
      t = n_24;
      {
        ATerm s_45 = NULL;
        s_45 = t;
        if(((r_45 != NULL) && (r_45 != s_45)))
          _fail(s_45);
        else
          r_45 = s_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_45));
      }
      return(t);
    }
    ATerm w_4 (ATerm t)
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              {
                t = z_79(t);
                t = Cons_2(t, _id, w_4);
              }
            }
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_4, w_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
    f_46 = t;
    b_46 :
    if(match_cons(f_46, sym__3))
      {
        g_46 = ATgetArgument(f_46, 0);
        h_46 = ATgetArgument(f_46, 1);
        i_46 = ATgetArgument(f_46, 2);
        {
          if(((c_46 != NULL) && (c_46 != g_46)))
            _fail(g_46);
          else
            c_46 = g_46;
          {
            if(((d_46 != NULL) && (d_46 != h_46)))
              _fail(h_46);
            else
              d_46 = h_46;
            {
              if(((e_46 != NULL) && (e_46 != i_46)))
                _fail(i_46);
              else
                e_46 = i_46;
              t = SSL_table_put(not_null(c_46), not_null(d_46), not_null(e_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm l_46 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    t = term_g_25;
    t = table_put_0(t);
  }
  t = x_24;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm h_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_79(t);
          LocalPopChoice(j_25);
        }
      else
        {
          t = h_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_4);
    {
      ATerm k_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_25;
          r_25 = t;
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_23;
                t = get_config_0(t);
                LocalPopChoice(u_25);
              }
            else
              {
                t = t_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_25;
          {
            t = system_usage_0(t);
            {
              t = term_a_17;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_25);
        }
      else
        {
          t = k_25;
          {
            ATerm a_26 = t;
            int b_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm m_46 = NULL;
                    m_46 = t;
                    if(((l_46 != NULL) && (l_46 != m_46)))
                      _fail(m_46);
                    else
                      l_46 = m_46;
                    return(t);
                  }
                  t = Undefined_1(t, a_5);
                  return(t);
                }
                t = fetch_1(t, y_4);
                {
                  ATerm b_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_46)), term_d_26);
                    return(t);
                  }
                  t = say_1(t, b_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(b_26);
              }
            else
              {
                t = a_26;
                {
                }
              }
          }
        }
      {
        ATerm h_26;
        h_26 = t;
        {
          t = term_h_21;
          t = table_destroy_0(t);
        }
        t = h_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  t = parse_options_1(t, v_77);
  {
    t = store_options_0(t);
    {
      t = x_77(t);
      {
        ATerm i_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_77);
            LocalPopChoice(n_26);
          }
        else
          {
            t = i_26;
            {
              ATerm o_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_77(t);
                  t = report_success_0(t);
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = o_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  t = option_wrap_4(t, z_77, default_usage_0, _id, a_78);
  return(t);
}
ATerm io_ast2text_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = abox2text_options_0(t);
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = pp_options_0(t);
      }
    return(t);
  }
  t = option_wrap_2(t, c_5, ast2text_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2text_0(t);
  return(t);
}