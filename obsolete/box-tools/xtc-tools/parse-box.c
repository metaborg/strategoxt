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
ATerm term_w_25;
ATerm term_j_25;
ATerm term_n_24;
ATerm term_y_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_j_23;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_i_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_z_14;
ATerm term_g_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_a_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_y_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_k_7;
ATerm term_c_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__2, term_o_6, term_s_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_o_6, term_d_8);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_p_10);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_y_5, term_j_11);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_j_11);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_j_11);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_j_11);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__3, term_p_20, term_q_20, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
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
ATerm xtc_sglr_1 (ATerm, ATerm q_86 (ATerm));
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
ATerm io_parse_box_0 (ATerm);
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
        ATerm l_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(m_5);
          }
        else
          {
            t = l_5;
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
  t = term_p_5;
  {
    ATerm q_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(v_5);
      }
    else
      {
        t = q_5;
        t = term_w_5;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_w_5);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_2)), term_p_5);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_x_5;
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
      t = (ATerm) ATinsert(ATempty, term_y_5);
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
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6;
      g_6 = t;
      {
        ATerm x_3 = NULL;
        ATerm y_3 = NULL;
        t = term_p_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), term_h_6);
          t = geq_0(t);
        }
      }
      t = g_6;
      t = c_59(t);
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
ATerm error_0 (ATerm t)
{
  ATerm i_6;
  i_6 = t;
  {
    ATerm b_4 = NULL;
    ATerm c_4 = NULL;
    c_4 = t;
    if(((b_4 != NULL) && (b_4 != c_4)))
      _fail(c_4);
    else
      b_4 = c_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(b_4));
      t = printnl_0(t);
    }
  }
  t = i_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_4 = NULL;
  ATerm k_4 = NULL,l_4 = NULL;
  i_4 = t;
  {
    ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_4)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_4)));
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
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_6;
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
ATerm if_verbose4_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm u_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7;
      b_7 = t;
      {
        ATerm j_5 = NULL;
        ATerm k_5 = NULL;
        t = term_p_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), term_c_7);
          t = geq_0(t);
        }
      }
      t = b_7;
      t = b_59(t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = u_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_7;
      j_7 = t;
      {
        ATerm n_5 = NULL;
        ATerm o_5 = NULL;
        t = term_p_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_5), term_k_7);
          t = geq_0(t);
        }
      }
      t = j_7;
      t = d_59(t);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
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
            ATerm l_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_6);
                LocalPopChoice(r_7);
              }
            else
              {
                t = l_7;
                {
                  ATerm s_7 = t;
                  int w_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = not_null(n_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, s_0);
                      t = r_6(t);
                      LocalPopChoice(w_7);
                    }
                  else
                    {
                      t = s_7;
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
        ATerm x_7;
        x_7 = t;
        {
          ATerm d_7 = NULL;
          ATerm e_7 = NULL,g_7 = NULL;
          ATerm f_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(y_6));
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
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
        t = x_7;
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
    ATerm a_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(c_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_8;
      }
    {
      ATerm b_8;
      b_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_6, term_d_8, (ATerm) ATinsert(ATempty, not_null(c_8)));
        t = table_put_0(t);
      }
      t = b_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_g_8;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_k_8;
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
                t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(e_8));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_l_8;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_o_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(c_8)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_k_8;
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
  ATerm m_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_8;
      t = get_config_0(t);
      LocalPopChoice(p_8);
    }
  else
    {
      t = m_8;
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_8;
            t = getenv_0(t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
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
      t = term_w_8;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm d_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_9;
          t = table_get_0(t);
          LocalPopChoice(g_9);
        }
      else
        {
          t = d_9;
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
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_i_9;
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_p_9;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
      {
        t = xtc_load_0(t);
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = term_p_9;
                return(t);
              }
              t = debug_1(t, m_1);
              return(t);
            }
            t = if_verbose5_1(t, l_1);
          }
        }
      }
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm n_8 = NULL;
        ATerm o_8 = NULL;
        o_8 = t;
        if(((n_8 != NULL) && (n_8 != o_8)))
          _fail(o_8);
        else
          n_8 = o_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), not_null(n_8)), term_s_9);
          {
            t = error_0(t);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_o_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = term_v_9;
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
  ATerm y_9 = t;
  int z_9 = stack_ptr;
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
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm p_1 (ATerm t)
        {
          t = term_a_10;
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
      t = term_c_10;
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
        ATerm d_10 = t;
        int e_10 = stack_ptr;
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
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
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
  ATerm j_10;
  j_10 = t;
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
  t = j_10;
  {
    ATerm k_10;
    k_10 = t;
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
    t = k_10;
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
        ATerm l_10;
        l_10 = t;
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
                    ATerm m_10 = t;
                    int o_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_12), term_p_10);
                        t = table_get_0(t);
                        LocalPopChoice(o_10);
                      }
                    else
                      {
                        t = m_10;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_12), term_p_10, (ATerm) ATinsert(CheckATermList(not_null(m_12)), (ATerm) ATinsert(CheckATermList(not_null(l_12)), not_null(g_12))));
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
        t = l_10;
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
  ATerm q_10;
  q_10 = t;
  {
    t = h_86(t);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_r_10;
        return(t);
      }
      t = debug_1(t, r_1);
    }
  }
  t = q_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  ATerm s_10 = t;
  int u_10 = stack_ptr;
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
      LocalPopChoice(u_10);
      t = SSL_open_file(not_null(z_12), not_null(y_12));
    }
  else
    {
      t = s_10;
      {
        ATerm d_13 = NULL;
        ATerm e_13 = NULL;
        ATerm s_1 (ATerm t)
        {
          t = term_y_10;
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
              ATerm a_11;
              a_11 = t;
              {
                ATerm f_13 = NULL;
                t = term_g_11;
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
              }
              t = a_11;
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
    ATerm h_11;
    h_11 = t;
    {
      ATerm o_13 = NULL;
      t = term_i_11;
      {
        o_13 = t;
        if(((n_13 != NULL) && (n_13 != o_13)))
          _fail(o_13);
        else
          n_13 = o_13;
      }
    }
    t = h_11;
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
  t = term_j_11;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_k_11);
    {
      t = conc_strings_0(t);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
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
      ATerm r_11;
      r_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_g_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_j_11);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_s_11;
                return(t);
              }
              t = assert_1(t, t_1);
            }
          }
        }
      }
      t = r_11;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_14)), term_t_11));
              {
                ATerm y_11 = t;
                int z_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(z_11);
                  }
                else
                  {
                    t = y_11;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_14)), term_t_11), not_null(i_14)), term_a_12));
                      {
                        ATerm b_12 = t;
                        int c_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(c_12);
                          }
                        else
                          {
                            t = b_12;
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
      ATerm i_12;
      i_12 = t;
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
      t = i_12;
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
  ATerm j_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          t = stdin_0(t);
        }
      LocalPopChoice(r_12);
      t = xtc_transform_file_2(t, a_74, b_74);
    }
  else
    {
      t = j_12;
      t = xtc_transform_term_2(t, a_74, b_74);
    }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    t = term_u_12;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm g_16 = NULL,i_16 = NULL;
    ATerm w_12;
    w_12 = t;
    {
      ATerm h_16 = NULL;
      t = term_j_11;
      {
        t = q_86(t);
        {
          t = xtc_find_0(t);
          {
            h_16 = t;
            if(((g_16 != NULL) && (g_16 != h_16)))
              _fail(h_16);
            else
              g_16 = h_16;
          }
        }
      }
    }
    t = w_12;
    {
      ATerm j_16 = NULL;
      t = term_j_11;
      {
        t = pass_v_verbose_0(t);
        {
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_16)), not_null(g_16)), term_g_13), term_x_12);
    }
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      t = SSL_copy(not_null(p_16), not_null(q_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_stderr_0))
    {
      ATerm a_17 = NULL,c_17 = NULL;
      ATerm h_13;
      h_13 = t;
      {
        ATerm b_17 = NULL;
        t = SSLgetAnnotations(not_null(y_16));
        {
          b_17 = t;
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
        }
      }
      t = h_13;
      {
        ATerm d_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(a_17));
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
        t = not_null(c_17);
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
  ATerm l_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_stdout_0))
    {
      ATerm n_17 = NULL,p_17 = NULL;
      ATerm i_13;
      i_13 = t;
      {
        ATerm o_17 = NULL;
        t = SSLgetAnnotations(not_null(l_17));
        {
          o_17 = t;
          if(((n_17 != NULL) && (n_17 != o_17)))
            _fail(o_17);
          else
            n_17 = o_17;
        }
      }
      t = i_13;
      {
        ATerm q_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(n_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
        t = not_null(p_17);
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
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym_FILE_1))
    {
      d_18 = ATgetArgument(c_18, 0);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL;
            ATerm g_18 = NULL;
            t = m_0(t);
            {
              g_18 = t;
              {
                if(((f_18 != NULL) && (f_18 != g_18)))
                  _fail(g_18);
                else
                  f_18 = g_18;
                {
                  ATerm m_13 = t;
                  int p_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(p_13);
                    }
                  else
                    {
                      t = m_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(f_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_18));
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm q_13 = t;
              int r_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_18 = NULL;
                  ATerm j_18 = NULL;
                  t = m_0(t);
                  {
                    j_18 = t;
                    {
                      if(((i_18 != NULL) && (i_18 != j_18)))
                        _fail(j_18);
                      else
                        i_18 = j_18;
                      {
                        ATerm u_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_13 = t;
                            int w_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(w_13);
                              }
                            else
                              {
                                t = v_13;
                                {
                                  ATerm y_13 = t;
                                  int z_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(z_13);
                                    }
                                  else
                                    {
                                      t = y_13;
                                      {
                                        ATerm k_18 = NULL;
                                        k_18 = t;
                                        if(((d_18 != NULL) && (d_18 != k_18)))
                                          _fail(k_18);
                                        else
                                          d_18 = k_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(i_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_18));
                  LocalPopChoice(r_13);
                }
              else
                {
                  t = q_13;
                  {
                    ATerm m_18 = NULL;
                    t = m_0(t);
                    {
                      m_18 = t;
                      if(((d_18 != NULL) && (d_18 != m_18)))
                        _fail(m_18);
                      else
                        d_18 = m_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_18));
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
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(((ATgetType(x_18) == AT_LIST) && !(ATisEmpty(x_18))))
    {
      y_18 = ATgetFirst((ATermList) x_18);
      z_18 = (ATerm) ATgetNext((ATermList) x_18);
      t = not_null(z_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym__2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      {
        ATerm a_14;
        a_14 = t;
        {
          ATerm k_19 = NULL;
          ATerm l_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_19), not_null(h_19));
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                t = (ATerm) ATempty;
              }
            {
              l_19 = t;
              if(((k_19 != NULL) && (k_19 != l_19)))
                _fail(l_19);
              else
                k_19 = l_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_19), not_null(h_19), not_null(k_19));
            t = table_put_0(t);
          }
        }
        t = a_14;
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
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm b_20 = NULL;
    ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
    t = r_74(t);
    {
      b_20 = t;
      {
        if(((a_20 != NULL) && (a_20 != b_20)))
          _fail(b_20);
        else
          a_20 = b_20;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), term_p_10);
              t = table_get_0(t);
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_20 = t;
            s_19 :
            if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
              {
                d_20 = ATgetFirst((ATermList) c_20);
                e_20 = (ATerm) ATgetNext((ATermList) c_20);
                {
                  if(((z_19 != NULL) && (z_19 != d_20)))
                    _fail(d_20);
                  else
                    z_19 = d_20;
                  {
                    if(((y_19 != NULL) && (y_19 != e_20)))
                      _fail(e_20);
                    else
                      y_19 = e_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_20), term_p_10, not_null(y_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_19);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm h_20 = NULL;
                              h_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(h_20));
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
  t = d_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_remove(not_null(n_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm n_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      t = c_63(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = n_14;
      {
        t = c_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm x_20 = NULL;
  ATerm t_14;
  t_14 = t;
  {
    ATerm y_20 = NULL;
    ATerm z_20 = NULL;
    t = q_74(t);
    {
      y_20 = t;
      {
        if(((x_20 != NULL) && (x_20 != y_20)))
          _fail(y_20);
        else
          x_20 = y_20;
        {
          ATerm a_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_20), term_p_10);
          {
            ATerm u_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_14);
              }
            else
              {
                t = u_14;
                t = (ATerm) ATempty;
              }
            {
              a_21 = t;
              if(((z_20 != NULL) && (z_20 != a_21)))
                _fail(a_21);
              else
                z_20 = a_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_20), term_p_10, (ATerm) ATinsert(CheckATermList(not_null(z_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_s_11;
    return(t);
  }
  t = begin_scope_1(t, x_1);
  {
    ATerm z_1 (ATerm t)
    {
      ATerm w_14;
      w_14 = t;
      {
        ATerm h_21 = NULL,i_21 = NULL,o_21 = NULL;
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_14;
            t = table_get_0(t);
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          h_21 = t;
          e_21 :
          if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
            {
              i_21 = ATgetFirst((ATermList) h_21);
              o_21 = (ATerm) ATgetNext((ATermList) h_21);
              {
                if(((g_21 != NULL) && (g_21 != i_21)))
                  _fail(i_21);
                else
                  g_21 = i_21;
                {
                  if(((f_21 != NULL) && (f_21 != o_21)))
                    _fail(o_21);
                  else
                    f_21 = o_21;
                  {
                    t = not_null(g_21);
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm a_15 = t;
                        int d_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(d_15);
                          }
                        else
                          {
                            t = a_15;
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
      t = w_14;
      {
        ATerm b_2 (ATerm t)
        {
          t = term_s_11;
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
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL;
        ATerm w_21 = NULL;
        t = term_a_12;
        {
          t = get_config_0(t);
          {
            w_21 = t;
            if(((r_21 != NULL) && (r_21 != w_21)))
              _fail(w_21);
            else
              r_21 = w_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_21));
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = term_c_10;
      }
    {
      t = p_73(t);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_t_11;
              t = get_config_0(t);
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = term_m_15;
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
    ATerm g_22 = NULL;
    g_22 = t;
    f_22 :
    if(!(match_string(g_22, "-v")))
      {
        if(!(match_string(g_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_n_15;
    t = set_config_0(t);
    t = term_o_15;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = Option_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm l_22 = NULL;
    l_22 = t;
    i_22 :
    if(!(match_string(l_22, "-k")))
      {
        if(!(match_string(l_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm t_15;
    t_15 = t;
    {
      ATerm m_22 = NULL;
      ATerm n_22 = NULL;
      t = string_to_int_0(t);
      {
        n_22 = t;
        if(((m_22 != NULL) && (m_22 != n_22)))
          _fail(n_22);
        else
          m_22 = n_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_15, not_null(m_22));
        t = set_config_0(t);
      }
    }
    t = t_15;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_a_16;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_string_to_int(not_null(q_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm y_22 = NULL;
        y_22 = t;
        t_22 :
        if(!(match_string(y_22, "-S")))
          {
            if(!(match_string(y_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_e_16;
        t = set_config_0(t);
        t = term_f_16;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_k_16;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm z_22 = NULL;
              z_22 = t;
              u_22 :
              if(!(match_string(z_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm c_23 = NULL;
              ATerm r_16;
              r_16 = t;
              {
                ATerm a_23 = NULL;
                ATerm b_23 = NULL;
                t = string_to_int_0(t);
                {
                  b_23 = t;
                  if(((a_23 != NULL) && (a_23 != b_23)))
                    _fail(b_23);
                  else
                    a_23 = b_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(a_23));
                  t = set_config_0(t);
                }
              }
              t = r_16;
              {
                ATerm d_23 = NULL;
                d_23 = t;
                if(((c_23 != NULL) && (c_23 != d_23)))
                  _fail(d_23);
                else
                  c_23 = d_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_23));
              }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_s_16;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm e_23 = NULL;
                e_23 = t;
                x_22 :
                if(!(match_string(e_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_u_16;
                t = set_config_0(t);
                t = term_v_16;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_w_16;
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
  ATerm z_16 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(e_17);
    }
  else
    {
      t = z_16;
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
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
    ATerm k_23 = NULL;
    k_23 = t;
    h_23 :
    if(!(match_string(k_23, "-o")))
      {
        if(!(match_string(k_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm n_23 = NULL;
    ATerm h_17;
    h_17 = t;
    {
      ATerm l_23 = NULL;
      ATerm m_23 = NULL;
      m_23 = t;
      if(((l_23 != NULL) && (l_23 != m_23)))
        _fail(m_23);
      else
        l_23 = m_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(l_23));
        t = set_config_0(t);
      }
    }
    t = h_17;
    {
      ATerm o_23 = NULL;
      o_23 = t;
      if(((n_23 != NULL) && (n_23 != o_23)))
        _fail(o_23);
      else
        n_23 = o_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_23));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(m_17);
    }
  else
    {
      t = j_17;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm x_23 = NULL;
          x_23 = t;
          w_23 :
          if(!(match_string(x_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_s_17;
          t = set_config_0(t);
          t = term_t_17;
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = term_u_17;
          return(t);
        }
        t = Option_3(t, w_2, x_2, y_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  d_24 = t;
  b_24 :
  if(match_string(d_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
        {
          e_24 = ATgetFirst((ATermList) d_24);
          f_24 = (ATerm) ATgetNext((ATermList) d_24);
          c_24 :
          if(((ATgetType(f_24) == AT_LIST) && !(ATisEmpty(f_24))))
            {
              g_24 = ATgetFirst((ATermList) f_24);
              h_24 = (ATerm) ATgetNext((ATermList) f_24);
              {
                ATerm p_24 = NULL;
                ATerm v_17;
                v_17 = t;
                {
                  t = not_null(e_24);
                  t = j_0(t);
                }
                t = v_17;
                {
                  ATerm q_24 = NULL;
                  t = not_null(g_24);
                  {
                    t = k_0(t);
                    {
                      q_24 = t;
                      if(((p_24 != NULL) && (p_24 != q_24)))
                        _fail(q_24);
                      else
                        p_24 = q_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_24)), not_null(p_24));
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
    ATerm x_24 = NULL;
    x_24 = t;
    u_24 :
    if(!(match_string(x_24, "-i")))
      {
        if(!(match_string(x_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm a_25 = NULL;
    ATerm w_17;
    w_17 = t;
    {
      ATerm y_24 = NULL;
      ATerm z_24 = NULL;
      z_24 = t;
      if(((y_24 != NULL) && (y_24 != z_24)))
        _fail(z_24);
      else
        y_24 = z_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(y_24));
        t = set_config_0(t);
      }
    }
    t = w_17;
    {
      ATerm b_25 = NULL;
      b_25 = t;
      if(((a_25 != NULL) && (a_25 != b_25)))
        _fail(b_25);
      else
        a_25 = b_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_25));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = ArgOption_3(t, b_3, e_3, f_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm a_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(e_18);
          }
        else
          {
            t = a_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_25 = NULL;
  ATerm h_18;
  h_18 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_25 = NULL,i_25 = NULL;
      h_25 = t;
      f_25 :
      if(match_cons(h_25, sym_Program_1))
        {
          i_25 = ATgetArgument(h_25, 0);
          if(((g_25 != NULL) && (g_25 != i_25)))
            _fail(i_25);
          else
            g_25 = i_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_18), not_null(g_25)), term_l_18));
      {
        t = printnl_0(t);
        {
          t = term_w_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, term_o_18));
  {
    t = printnl_0(t);
    {
      t = term_w_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  t = SSL_TicksToSeconds(not_null(l_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_25), not_null(s_25));
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = SSL_addr(not_null(r_25), not_null(s_25));
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
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
        z_25 = t;
        y_25 :
        if(((ATgetType(z_25) == AT_LIST) && !(ATisEmpty(z_25))))
          {
            a_26 = ATgetFirst((ATermList) z_25);
            b_26 = (ATerm) ATgetNext((ATermList) z_25);
            {
              ATerm e_26 = NULL;
              ATerm f_26 = NULL;
              t = not_null(b_26);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  f_26 = t;
                  if(((e_26 != NULL) && (e_26 != f_26)))
                    _fail(f_26);
                  else
                    e_26 = f_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), not_null(e_26));
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
  ATerm m_26 = NULL;
  ATerm o_26 = NULL;
  m_26 = t;
  {
    ATerm p_26 = NULL;
    ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
    t = not_null(m_26);
    {
      p_26 = t;
      {
        t = SSL_explode_term(not_null(p_26));
        {
          r_26 = t;
          l_26 :
          if(match_cons(r_26, sym__2))
            {
              s_26 = ATgetArgument(r_26, 0);
              t_26 = ATgetArgument(r_26, 1);
              if(((o_26 != NULL) && (o_26 != t_26)))
                _fail(t_26);
              else
                o_26 = t_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_26);
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
      t = term_d_16;
      return(t);
    }
    t = crush_2(t, i_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        ATerm t_18;
        t_18 = t;
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_27), not_null(b_27));
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = SSL_gtr(not_null(a_27), not_null(b_27));
            }
        }
        t = t_18;
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
  ATerm h_27 = NULL;
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
      i_27 = t;
      g_27 :
      if(match_cons(i_27, sym__2))
        {
          j_27 = ATgetArgument(i_27, 0);
          k_27 = ATgetArgument(i_27, 1);
          {
            if(((h_27 != NULL) && (h_27 != j_27)))
              _fail(j_27);
            else
              h_27 = j_27;
            if(((h_27 != NULL) && (h_27 != k_27)))
              _fail(k_27);
            else
              h_27 = k_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_19;
      i_19 = t;
      {
        ATerm n_27 = NULL;
        ATerm o_27 = NULL;
        t = term_p_5;
        {
          t = get_config_0(t);
          {
            o_27 = t;
            if(((n_27 != NULL) && (n_27 != o_27)))
              _fail(o_27);
            else
              n_27 = o_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), term_w_5);
          t = geq_0(t);
        }
      }
      t = i_19;
      t = y_58(t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm s_27 = NULL,u_27 = NULL;
    ATerm j_19;
    j_19 = t;
    {
      ATerm t_27 = NULL;
      t = run_time_0(t);
      {
        t_27 = t;
        if(((s_27 != NULL) && (s_27 != t_27)))
          _fail(t_27);
        else
          s_27 = t_27;
      }
    }
    t = j_19;
    {
      ATerm v_27 = NULL;
      t = term_m_19;
      {
        t = get_config_0(t);
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_19), not_null(s_27)), term_n_19), not_null(u_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_3);
  {
    t = term_d_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_Version_0))
    {
      ATerm e_28 = NULL,g_28 = NULL;
      ATerm p_19;
      p_19 = t;
      {
        ATerm f_28 = NULL;
        t = SSLgetAnnotations(not_null(c_28));
        {
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
        }
      }
      t = p_19;
      {
        ATerm h_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
        t = not_null(g_28);
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
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
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
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_table_create(not_null(m_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  {
    ATerm v_19;
    v_19 = t;
    {
      t = term_w_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_19, term_x_19, not_null(q_28));
          t = table_put_0(t);
        }
      }
    }
    t = v_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_table_destroy(not_null(u_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = SSL_exit(not_null(y_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(((ATgetType(d_29) == AT_LIST) && ATisEmpty(d_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
        {
          e_29 = ATgetFirst((ATermList) d_29);
          f_29 = (ATerm) ATgetNext((ATermList) d_29);
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
    ATerm n_29 = NULL;
    ATerm q_29 = NULL;
    ATerm g_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = g_20;
        {
          ATerm o_29 = NULL;
          ATerm p_29 = NULL;
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
          t = (ATerm) ATinsert(ATempty, not_null(o_29));
        }
      }
    {
      q_29 = t;
      if(((n_29 != NULL) && (n_29 != q_29)))
        _fail(q_29);
      else
        n_29 = q_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(n_29));
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
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  b_30 = t;
  y_29 :
  if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
    {
      z_29 = ATgetFirst((ATermList) b_30);
      a_30 = (ATerm) ATgetNext((ATermList) b_30);
      {
        ATerm g_30 = NULL;
        t = not_null(a_30);
        {
          ATerm j_20;
          j_20 = t;
          {
            ATerm h_30 = NULL,j_30 = NULL,l_30 = NULL;
            ATerm k_20;
            k_20 = t;
            {
              ATerm i_30 = NULL;
              t = i_0(t);
              {
                i_30 = t;
                if(((h_30 != NULL) && (h_30 != i_30)))
                  _fail(i_30);
                else
                  h_30 = i_30;
              }
            }
            t = k_20;
            {
              ATerm k_30 = NULL;
              t = not_null(z_29);
              {
                t = h_0(t);
                {
                  k_30 = t;
                  if(((j_30 != NULL) && (j_30 != k_30)))
                    _fail(k_30);
                  else
                    j_30 = k_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_30)), not_null(j_30));
                {
                  l_30 = t;
                  if(((g_30 != NULL) && (g_30 != l_30)))
                    _fail(l_30);
                  else
                    g_30 = l_30;
                }
              }
            }
          }
          t = j_20;
          {
            ATerm l_3 (ATerm t)
            {
              t = not_null(g_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, l_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_30) == AT_LIST) && ATisEmpty(b_30)))
        {
          {
            t = term_j_11;
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
  ATerm w_30 = NULL,x_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Program_1))
    {
      x_30 = ATgetArgument(w_30, 0);
      {
        ATerm a_31 = NULL,c_31 = NULL;
        ATerm b_31 = NULL;
        t = SSLgetAnnotations(not_null(w_30));
        {
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
        }
        {
          t = not_null(x_30);
          {
            ATerm e_31 = NULL;
            t = s_52(t);
            {
              c_31 = t;
              {
                ATerm f_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_31)), not_null(a_31));
                {
                  f_31 = t;
                  if(((e_31 != NULL) && (e_31 != f_31)))
                    _fail(f_31);
                  else
                    e_31 = f_31;
                }
                t = not_null(e_31);
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
  ATerm n_31 = NULL;
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = NULL;
      t = term_m_19;
      {
        t = get_config_0(t);
        {
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
        }
      }
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            ATerm p_31 = NULL;
            p_31 = t;
            if(((n_31 != NULL) && (n_31 != p_31)))
              _fail(p_31);
            else
              n_31 = p_31;
            return(t);
          }
          t = Program_1(t, q_3);
          return(t);
        }
        t = fetch_1(t, o_3);
      }
    }
  {
    t = term_o_20;
    {
      t = echo_0(t);
      {
        t = term_r_20;
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
                ATerm q_31 = NULL;
                ATerm t_31 = NULL;
                t_31 = t;
                if(((q_31 != NULL) && (q_31 != t_31)))
                  _fail(t_31);
                else
                  q_31 = t_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_31)), term_s_20);
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
  ATerm t_20;
  t_20 = t;
  {
    ATerm y_31 = NULL;
    ATerm z_31 = NULL;
    z_31 = t;
    if(((y_31 != NULL) && (y_31 != z_31)))
      _fail(z_31);
    else
      y_31 = z_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, not_null(y_31)));
      t = printnl_0(t);
    }
  }
  t = t_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm u_20;
  u_20 = t;
  {
    t = b_86(t);
    t = debug_0(t);
  }
  t = u_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_Undefined_1))
    {
      o_32 = ATgetArgument(n_32, 0);
      {
        ATerm t_32 = NULL,v_32 = NULL;
        ATerm u_32 = NULL;
        t = SSLgetAnnotations(not_null(n_32));
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
        {
          t = not_null(o_32);
          {
            ATerm x_32 = NULL;
            t = t_52(t);
            {
              v_32 = t;
              {
                ATerm y_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_32)), not_null(t_32));
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
ATerm fetch_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm d_33 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = Cons_2(t, _id, d_33);
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_76 (ATerm))
{
  t = fetch_1(t, e_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_33 = NULL;
  t_33 = t;
  r_33 :
  if(match_cons(t_33, sym_Help_0))
    {
      ATerm x_33 = NULL,a_34 = NULL;
      ATerm b_21;
      b_21 = t;
      {
        ATerm y_33 = NULL;
        t = SSLgetAnnotations(not_null(t_33));
        {
          y_33 = t;
          if(((x_33 != NULL) && (x_33 != y_33)))
            _fail(y_33);
          else
            x_33 = y_33;
        }
      }
      t = b_21;
      {
        ATerm b_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_33));
        {
          b_34 = t;
          if(((a_34 != NULL) && (a_34 != b_34)))
            _fail(b_34);
          else
            a_34 = b_34;
        }
        t = not_null(a_34);
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
  ATerm t_34 = NULL;
  t_34 = t;
  t = SSL_implode_string(not_null(t_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm z_34 = NULL,a_35 = NULL,c_35 = NULL;
        z_34 = t;
        y_34 :
        if(((ATgetType(z_34) == AT_LIST) && !(ATisEmpty(z_34))))
          {
            a_35 = ATgetFirst((ATermList) z_34);
            c_35 = (ATerm) ATgetNext((ATermList) z_34);
            {
              t = not_null(a_35);
              {
                ATerm v_3 (ATerm t)
                {
                  t = not_null(c_35);
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
  ATerm v_35 = NULL;
  ATerm x_35 = NULL;
  v_35 = t;
  {
    ATerm y_35 = NULL;
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
    t = not_null(v_35);
    {
      y_35 = t;
      {
        t = SSL_explode_term(not_null(y_35));
        {
          a_36 = t;
          p_35 :
          if(match_cons(a_36, sym__2))
            {
              b_36 = ATgetArgument(a_36, 0);
              c_36 = ATgetArgument(a_36, 1);
              q_35 :
              if(match_string(b_36, ""))
                {
                  if(((x_35 != NULL) && (x_35 != c_36)))
                    _fail(c_36);
                  else
                    x_35 = c_36;
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
      t = not_null(x_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm g_36 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_36);
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
  t = g_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(match_cons(j_36, sym__2))
    {
      k_36 = ATgetArgument(j_36, 0);
      l_36 = ATgetArgument(j_36, 1);
      {
        t = not_null(k_36);
        {
          ATerm w_3 (ATerm t)
          {
            t = not_null(l_36);
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
  ATerm q_36 = NULL;
  q_36 = t;
  t = SSL_explode_string(not_null(q_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  y_36 :
  if(match_cons(z_36, sym__2))
    {
      a_37 = ATgetArgument(z_36, 0);
      b_37 = ATgetArgument(z_36, 1);
      {
        ATerm f_37 = NULL,h_37 = NULL;
        ATerm g_37 = NULL;
        t = SSLgetAnnotations(not_null(z_36));
        {
          g_37 = t;
          if(((f_37 != NULL) && (f_37 != g_37)))
            _fail(g_37);
          else
            f_37 = g_37;
        }
        {
          t = not_null(a_37);
          {
            ATerm j_37 = NULL;
            t = p_50(t);
            {
              h_37 = t;
              {
                t = not_null(b_37);
                {
                  ATerm l_37 = NULL;
                  t = q_50(t);
                  {
                    j_37 = t;
                    {
                      ATerm m_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_37), not_null(j_37)), not_null(f_37));
                      {
                        m_37 = t;
                        if(((l_37 != NULL) && (l_37 != m_37)))
                          _fail(m_37);
                        else
                          l_37 = m_37;
                      }
                      t = not_null(l_37);
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
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(p_21);
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
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      {
        ATerm q_21;
        q_21 = t;
        t = SSL_printnl(not_null(v_37), not_null(w_37));
        t = q_21;
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
  ATerm s_21;
  s_21 = t;
  {
    ATerm c_38 = NULL,e_38 = NULL;
    ATerm t_21;
    t_21 = t;
    {
      ATerm d_38 = NULL;
      t = a_86(t);
      {
        d_38 = t;
        if(((c_38 != NULL) && (c_38 != d_38)))
          _fail(d_38);
        else
          c_38 = d_38;
      }
    }
    t = t_21;
    {
      ATerm f_38 = NULL;
      f_38 = t;
      if(((e_38 != NULL) && (e_38 != f_38)))
        _fail(f_38);
      else
        e_38 = f_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), not_null(c_38)));
        t = printnl_0(t);
      }
    }
  }
  t = s_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm i_38 (ATerm t)
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
        t = Cons_2(t, c_64, i_38);
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  t = SSL_is_string(not_null(k_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm b_22 = t;
              int c_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(c_22);
                }
              else
                {
                  t = b_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_3);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            {
              ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
              t_38 = t;
              s_38 :
              if(match_cons(t_38, sym_Path_1))
                {
                  u_38 = ATgetArgument(t_38, 0);
                  t = not_null(u_38);
                }
              else
                {
                  if(match_cons(t_38, sym_Var_1))
                    {
                      u_38 = ATgetArgument(t_38, 0);
                      {
                        t = not_null(u_38);
                        {
                          ATerm d_22 = t;
                          int e_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_22);
                            }
                          else
                            {
                              t = d_22;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = term_h_22;
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
                      if(match_cons(t_38, sym_Prefix_2))
                        {
                          u_38 = ATgetArgument(t_38, 0);
                          v_38 = ATgetArgument(t_38, 1);
                          {
                            ATerm a_39 = NULL,c_39 = NULL;
                            ATerm j_22;
                            j_22 = t;
                            {
                              ATerm b_39 = NULL;
                              t = not_null(u_38);
                              {
                                t = eval_config_0(t);
                                {
                                  b_39 = t;
                                  if(((a_39 != NULL) && (a_39 != b_39)))
                                    _fail(b_39);
                                  else
                                    a_39 = b_39;
                                }
                              }
                            }
                            t = j_22;
                            {
                              ATerm d_39 = NULL;
                              t = not_null(v_38);
                              {
                                t = eval_config_0(t);
                                {
                                  d_39 = t;
                                  if(((c_39 != NULL) && (c_39 != d_39)))
                                    _fail(d_39);
                                  else
                                    c_39 = d_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_39), not_null(c_39));
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
  ATerm l_39 = NULL;
  l_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(l_39));
    {
      t = table_get_0(t);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm r_22;
              r_22 = t;
              {
                ATerm n_39 = NULL;
                ATerm o_39 = NULL;
                o_39 = t;
                if(((n_39 != NULL) && (n_39 != o_39)))
                  _fail(o_39);
                else
                  n_39 = o_39;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_k_22, not_null(l_39), not_null(n_39));
                  t = table_put_0(t);
                }
              }
              t = r_22;
            }
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
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
  ATerm s_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = s_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym__2))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      t = SSL_table_get(not_null(u_39), not_null(v_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym__3))
    {
      d_40 = ATgetArgument(c_40, 0);
      e_40 = ATgetArgument(c_40, 1);
      f_40 = ATgetArgument(c_40, 2);
      {
        ATerm w_22;
        w_22 = t;
        {
          ATerm j_40 = NULL;
          ATerm k_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_40), not_null(e_40));
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
                t = (ATerm) ATempty;
              }
            {
              k_40 = t;
              if(((j_40 != NULL) && (j_40 != k_40)))
                _fail(k_40);
              else
                j_40 = k_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_40), not_null(e_40), (ATerm) ATinsert(CheckATermList(not_null(j_40)), not_null(f_40)));
            t = table_put_0(t);
          }
        }
        t = w_22;
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
  ATerm o_40 = NULL;
  ATerm p_40 = NULL;
  t = term_j_11;
  {
    t = j_77(t);
    {
      p_40 = t;
      if(((o_40 != NULL) && (o_40 != p_40)))
        _fail(p_40);
      else
        o_40 = p_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_20, term_q_20, not_null(o_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL,a_41 = NULL;
  v_40 = t;
  u_40 :
  if(match_string(v_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
        {
          w_40 = ATgetFirst((ATermList) v_40);
          a_41 = (ATerm) ATgetNext((ATermList) v_40);
          {
            ATerm d_41 = NULL;
            ATerm i_23;
            i_23 = t;
            {
              t = not_null(w_40);
              t = a_0(t);
            }
            t = i_23;
            {
              ATerm e_41 = NULL;
              t = term_j_11;
              {
                t = d_0(t);
                {
                  e_41 = t;
                  if(((d_41 != NULL) && (d_41 != e_41)))
                    _fail(e_41);
                  else
                    d_41 = e_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_41)), not_null(d_41));
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
    ATerm j_41 = NULL;
    j_41 = t;
    i_41 :
    if(!(match_string(j_41, "--help")))
      {
        if(!(match_string(j_41, "-h")))
          {
            if(!(match_string(j_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_p_23;
    {
      t = set_config_0(t);
      t = term_q_23;
    }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  t = Option_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  l_41 :
  if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
    {
      n_41 = ATgetFirst((ATermList) m_41);
      o_41 = (ATerm) ATgetNext((ATermList) m_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
    {
      z_41 = ATgetFirst((ATermList) y_41);
      a_42 = (ATerm) ATgetNext((ATermList) y_41);
      {
        ATerm e_42 = NULL,g_42 = NULL;
        ATerm f_42 = NULL;
        t = SSLgetAnnotations(not_null(y_41));
        {
          f_42 = t;
          if(((e_42 != NULL) && (e_42 != f_42)))
            _fail(f_42);
          else
            e_42 = f_42;
        }
        {
          t = not_null(z_41);
          {
            ATerm i_42 = NULL;
            t = y_51(t);
            {
              g_42 = t;
              {
                t = not_null(a_42);
                {
                  ATerm m_42 = NULL;
                  t = z_51(t);
                  {
                    i_42 = t;
                    {
                      ATerm n_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_42)), not_null(g_42)), not_null(e_42));
                      {
                        n_42 = t;
                        if(((m_42 != NULL) && (m_42 != n_42)))
                          _fail(n_42);
                        else
                          m_42 = n_42;
                      }
                      t = not_null(m_42);
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
  ATerm b_43 = NULL;
  b_43 = t;
  a_43 :
  if(((ATgetType(b_43) == AT_LIST) && ATisEmpty(b_43)))
    {
      {
        ATerm d_43 = NULL,f_43 = NULL;
        ATerm s_23;
        s_23 = t;
        {
          ATerm e_43 = NULL;
          t = SSLgetAnnotations(not_null(b_43));
          {
            e_43 = t;
            if(((d_43 != NULL) && (d_43 != e_43)))
              _fail(e_43);
            else
              d_43 = e_43;
          }
        }
        t = s_23;
        {
          ATerm g_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_43));
          {
            g_43 = t;
            if(((f_43 != NULL) && (f_43 != g_43)))
              _fail(g_43);
            else
              f_43 = g_43;
          }
          t = not_null(f_43);
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
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  l_43 :
  if(match_cons(m_43, sym__2))
    {
      n_43 = ATgetArgument(m_43, 0);
      o_43 = ATgetArgument(m_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_22, not_null(n_43), not_null(o_43));
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
  ATerm t_23;
  t_23 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_23;
        t = h_77(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
        }
      }
  }
  t = t_23;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm z_43 = NULL;
      ATerm z_23;
      z_23 = t;
      {
        ATerm x_43 = NULL;
        ATerm y_43 = NULL;
        y_43 = t;
        if(((x_43 != NULL) && (x_43 != y_43)))
          _fail(y_43);
        else
          x_43 = y_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_19, not_null(x_43));
          t = set_config_0(t);
        }
      }
      t = z_23;
      {
        ATerm a_44 = NULL;
        a_44 = t;
        if(((z_43 != NULL) && (z_43 != a_44)))
          _fail(a_44);
        else
          z_43 = a_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_43));
      }
      return(t);
    }
    ATerm r_4 (ATerm t)
    {
      ATerm a_24 = t;
      int i_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                t = h_77(t);
                t = Cons_2(t, _id, r_4);
              }
            }
          LocalPopChoice(i_24);
        }
      else
        {
          t = a_24;
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
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  ATerm l_24;
  l_24 = t;
  {
    ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
    j_44 = t;
    f_44 :
    if(match_cons(j_44, sym__3))
      {
        k_44 = ATgetArgument(j_44, 0);
        l_44 = ATgetArgument(j_44, 1);
        m_44 = ATgetArgument(j_44, 2);
        {
          if(((g_44 != NULL) && (g_44 != k_44)))
            _fail(k_44);
          else
            g_44 = k_44;
          {
            if(((h_44 != NULL) && (h_44 != l_44)))
              _fail(l_44);
            else
              h_44 = l_44;
            {
              if(((i_44 != NULL) && (i_44 != m_44)))
                _fail(m_44);
              else
                i_44 = m_44;
              t = SSL_table_put(not_null(g_44), not_null(h_44), not_null(i_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm p_44 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    t = term_n_24;
    t = table_put_0(t);
  }
  t = m_24;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm o_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_77(t);
          LocalPopChoice(r_24);
        }
      else
        {
          t = o_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_4);
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_24;
          v_24 = t;
          {
            ATerm w_24 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_23;
                t = get_config_0(t);
                LocalPopChoice(c_25);
              }
            else
              {
                t = w_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = v_24;
          {
            t = system_usage_0(t);
            {
              t = term_d_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          {
            ATerm d_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm q_44 = NULL;
                    q_44 = t;
                    if(((p_44 != NULL) && (p_44 != q_44)))
                      _fail(q_44);
                    else
                      p_44 = q_44;
                    return(t);
                  }
                  t = Undefined_1(t, u_4);
                  return(t);
                }
                t = fetch_1(t, t_4);
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_44)), term_j_25);
                    return(t);
                  }
                  t = say_1(t, a_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(e_25);
              }
            else
              {
                t = d_25;
                {
                }
              }
          }
        }
      {
        ATerm k_25;
        k_25 = t;
        {
          t = term_p_20;
          t = table_destroy_0(t);
        }
        t = k_25;
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
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_75);
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm o_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = o_25;
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
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_73(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
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
ATerm io_parse_box_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = term_w_25;
      return(t);
    }
    t = xtc_sglr_1(t, i_5);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, h_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_box_0(t);
  return(t);
}