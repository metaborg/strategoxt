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
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_j_25;
ATerm term_n_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_u_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_h_10;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_f_8;
void init_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_e_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_n_10);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_z_12);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_v_16, term_o_13);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_p_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_o_13);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_o_13);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_o_13);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__3, term_q_21, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm d_74 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm g_65 (ATerm));
ATerm init_0 (ATerm);
ATerm elem_1 (ATerm, ATerm o_64 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm z_64 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm s_64 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm c_86 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm remove_extension_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm f_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm x_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm e_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm g_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm union_1 (ATerm, ATerm d_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm p_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm x_58 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm c_74 (ATerm));
ATerm assert_1 (ATerm, ATerm y_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm g_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm o_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm e_63 (ATerm), ATerm f_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm s_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm t_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm crush_2 (ATerm, ATerm s_69 (ATerm), ATerm t_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_77 (ATerm));
ATerm Program_1 (ATerm, ATerm v_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm s_50 (ATerm), ATerm t_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_84 (ATerm));
ATerm map_1 (ATerm, ATerm g_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm w_73 (ATerm));
ATerm io_pp_c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, d_74, b_0);
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
  w_0 = t;
  e_0 :
  if(match_cons(w_0, sym__2))
    {
      x_0 = ATgetArgument(w_0, 0);
      y_0 = ATgetArgument(w_0, 1);
      {
        t = not_null(y_0);
        {
          ATerm k_1 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_7);
            }
          else
            {
              t = k_1;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm j_7 = t;
                  int o_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(o_7);
                    }
                  else
                    {
                      t = j_7;
                      {
                        ATerm e_1 = NULL;
                        t = Cons_2(t, _id, c_0);
                        {
                          ATerm i_1 = NULL;
                          i_1 = t;
                          if(((e_1 != NULL) && (e_1 != i_1)))
                            _fail(i_1);
                          else
                            e_1 = i_1;
                          t = (ATerm) ATinsert(CheckATermList(not_null(e_1)), not_null(x_0));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, c_0);
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
ATerm at_last_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = g_65(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = Cons_2(t, _id, z_1);
      }
    return(t);
  }
  t = z_1(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm elem_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm u_2 = NULL,y_2 = NULL,z_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      y_2 = ATgetArgument(u_2, 0);
      z_2 = ATgetArgument(u_2, 1);
      {
        t = not_null(z_2);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm v_7;
            v_7 = t;
            {
              ATerm c_3 = NULL;
              ATerm d_3 = NULL;
              d_3 = t;
              if(((c_3 != NULL) && (c_3 != d_3)))
                _fail(d_3);
              else
                c_3 = d_3;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(c_3));
                t = o_64(t);
              }
            }
            t = v_7;
            return(t);
          }
          t = _one(t, f_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_0 (ATerm t)
{
  t = elem_1(t, eq_0);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm w_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_64(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = w_7;
        t = Cons_2(t, _id, g_3);
      }
    return(t);
  }
  t = g_3(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm j_3 = NULL,l_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = Cons_2(t, s_64, _id);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm k_3 = NULL;
        k_3 = t;
        if(((j_3 != NULL) && (j_3 != k_3)))
          _fail(k_3);
        else
          j_3 = k_3;
        return(t);
      }
      t = Cons_2(t, _id, q_0);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, p_0);
  {
    ATerm m_3 = NULL;
    m_3 = t;
    if(((l_3 != NULL) && (l_3 != m_3)))
      _fail(m_3);
    else
      l_3 = m_3;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), not_null(j_3));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, c_86);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm z_3 = NULL;
        ATerm a_4 = NULL;
        a_4 = t;
        if(((z_3 != NULL) && (z_3 != a_4)))
          _fail(a_4);
        else
          z_3 = a_4;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), (ATerm) ATempty);
      }
    }
  {
    b_4 = t;
    v_3 :
    if(match_cons(b_4, sym__2))
      {
        c_4 = ATgetArgument(b_4, 0);
        f_4 = ATgetArgument(b_4, 1);
        w_3 :
        if(((ATgetType(c_4) == AT_LIST) && ATisEmpty(c_4)))
          {
            x_3 :
            if(((ATgetType(f_4) == AT_LIST) && ATisEmpty(f_4)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(f_4) == AT_LIST) && !(ATisEmpty(f_4))))
                  {
                    g_4 = ATgetFirst((ATermList) f_4);
                    h_4 = (ATerm) ATgetNext((ATermList) f_4);
                    {
                      t = not_null(f_4);
                      t = list_tokenize_1(t, c_86);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
          }
        else
          {
            if(((ATgetType(c_4) == AT_LIST) && !(ATisEmpty(c_4))))
              {
                d_4 = ATgetFirst((ATermList) c_4);
                e_4 = (ATerm) ATgetNext((ATermList) c_4);
                y_3 :
                if(((ATgetType(f_4) == AT_LIST) && ATisEmpty(f_4)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(c_4));
                  }
                else
                  {
                    if(((ATgetType(f_4) == AT_LIST) && !(ATisEmpty(f_4))))
                      {
                        g_4 = ATgetFirst((ATermList) f_4);
                        h_4 = (ATerm) ATgetNext((ATermList) f_4);
                        {
                          ATerm m_4 = NULL;
                          ATerm n_4 = NULL;
                          t = not_null(f_4);
                          {
                            t = list_tokenize_1(t, c_86);
                            {
                              n_4 = t;
                              if(((m_4 != NULL) && (m_4 != n_4)))
                                _fail(n_4);
                              else
                                m_4 = n_4;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(m_4)), not_null(c_4));
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
              }
            else
              {
                _fail(t);
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
ATerm string_tokenize_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    x_4 = t;
    w_4 :
    if(match_cons(x_4, sym__2))
      {
        y_4 = ATgetArgument(x_4, 0);
        z_4 = ATgetArgument(x_4, 1);
        {
          t = not_null(z_4);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm c_5 = NULL;
              ATerm d_5 = NULL;
              d_5 = t;
              if(((c_5 != NULL) && (c_5 != d_5)))
                _fail(d_5);
              else
                c_5 = d_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), not_null(y_4));
                t = elem_0(t);
              }
              return(t);
            }
            t = list_tokenize_1(t, r_0);
            t = map_1(t, implode_string_0);
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
ATerm remove_extension_0 (ATerm t)
{
  ATerm i_5 = NULL,k_5 = NULL;
  ATerm j_5 = NULL;
  j_5 = t;
  if(((i_5 != NULL) && (i_5 != j_5)))
    _fail(j_5);
  else
    i_5 = j_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_f_8), not_null(i_5));
    {
      t = string_tokenize_0(t);
      {
        t = init_0(t);
        {
          ATerm l_5 = NULL;
          l_5 = t;
          if(((k_5 != NULL) && (k_5 != l_5)))
            _fail(l_5);
          else
            k_5 = l_5;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(k_5));
            {
              t = separate_by_0(t);
              t = concat_strings_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  t = SSL_table_keys(not_null(p_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm x_5 = NULL;
        ATerm z_5 = NULL;
        x_5 = t;
        {
          ATerm a_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), not_null(x_5));
          {
            t = table_get_0(t);
            {
              a_6 = t;
              if(((z_5 != NULL) && (z_5 != a_6)))
                _fail(a_6);
              else
                z_5 = a_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(z_5));
        }
        return(t);
      }
      t = map_1(t, s_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm l_8;
    l_8 = t;
    {
      ATerm f_6 = NULL;
      ATerm g_6 = NULL;
      t = term_m_8;
      {
        t = get_config_0(t);
        {
          g_6 = t;
          if(((f_6 != NULL) && (f_6 != g_6)))
            _fail(g_6);
          else
            f_6 = g_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), term_n_8);
        t = geq_0(t);
      }
    }
    t = l_8;
    t = f_59(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm o_8;
  o_8 = t;
  {
    ATerm j_6 = NULL;
    ATerm k_6 = NULL;
    k_6 = t;
    if(((j_6 != NULL) && (j_6 != k_6)))
      _fail(k_6);
    else
      j_6 = k_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(j_6));
      t = printnl_0(t);
    }
  }
  t = o_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm q_6 = NULL;
  ATerm s_6 = NULL,t_6 = NULL;
  q_6 = t;
  {
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_6)));
    {
      t = table_get_0(t);
      {
        u_6 = t;
        o_6 :
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            v_6 = ATgetFirst((ATermList) u_6);
            y_6 = (ATerm) ATgetNext((ATermList) u_6);
            p_6 :
            if(match_cons(v_6, sym__2))
              {
                w_6 = ATgetArgument(v_6, 0);
                x_6 = ATgetArgument(v_6, 1);
                {
                  if(((s_6 != NULL) && (s_6 != w_6)))
                    _fail(w_6);
                  else
                    s_6 = w_6;
                  if(((t_6 != NULL) && (t_6 != x_6)))
                    _fail(x_6);
                  else
                    t_6 = x_6;
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
    t = not_null(t_6);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        ATerm k_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_7)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
              l_7 = t;
              d_7 :
              if(match_cons(l_7, sym__2))
                {
                  m_7 = ATgetArgument(l_7, 0);
                  n_7 = ATgetArgument(l_7, 1);
                  {
                    if(((h_7 != NULL) && (h_7 != m_7)))
                      _fail(m_7);
                    else
                      h_7 = m_7;
                    if(((k_7 != NULL) && (k_7 != n_7)))
                      _fail(n_7);
                    else
                      k_7 = n_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
          }
        }
        t = not_null(k_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1(t, x_71);
              return(t);
            }
            t = Cons_2(t, x_71, v_0);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
              s_7 = t;
              r_7 :
              if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
                {
                  t_7 = ATgetFirst((ATermList) s_7);
                  u_7 = (ATerm) ATgetNext((ATermList) s_7);
                  {
                    t = not_null(u_7);
                    t = filter_1(t, x_71);
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
ATerm repeat_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = r_77(t);
      t = x_7(t);
      return(t);
    }
    t = try_1(t, z_0);
    return(t);
  }
  t = x_7(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_f_9;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm g_9 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_9;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, a_1);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm i_9;
    i_9 = t;
    {
      ATerm z_7 = NULL;
      ATerm a_8 = NULL;
      t = term_m_8;
      {
        t = get_config_0(t);
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), term_j_9);
        t = geq_0(t);
      }
    }
    t = i_9;
    t = e_59(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm k_9;
    k_9 = t;
    {
      ATerm d_8 = NULL;
      ATerm e_8 = NULL;
      t = term_m_8;
      {
        t = get_config_0(t);
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), term_q_9);
        t = geq_0(t);
      }
    }
    t = k_9;
    t = g_59(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym__2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      if(((j_8 != NULL) && (j_8 != k_8)))
        _fail(k_8);
      else
        j_8 = k_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
    {
      r_8 = ATgetFirst((ATermList) q_8);
      s_8 = (ATerm) ATgetNext((ATermList) q_8);
      {
        t = i_70(t);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm v_8 = NULL;
            v_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(v_8));
              t = h_70(t);
            }
            return(t);
          }
          t = fetch_1(t, d_1);
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
ATerm union_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym__2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      {
        t = not_null(c_9);
        {
          ATerm h_9 (ATerm t)
          {
            ATerm r_9 = t;
            int s_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_9);
                LocalPopChoice(s_9);
              }
            else
              {
                t = r_9;
                {
                  ATerm x_9 = t;
                  int y_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(d_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_70, f_1);
                      t = h_9(t);
                      LocalPopChoice(y_9);
                    }
                  else
                    {
                      t = x_9;
                      t = Cons_2(t, _id, h_9);
                    }
                }
              }
            return(t);
          }
          t = h_9(t);
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
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__3))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      p_9 = ATgetArgument(m_9, 2);
      {
        ATerm z_9;
        z_9 = t;
        {
          ATerm t_9 = NULL;
          ATerm u_9 = NULL,w_9 = NULL;
          ATerm v_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(o_9));
          {
            ATerm a_10 = t;
            int b_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(b_10);
              }
            else
              {
                t = a_10;
                t = (ATerm) ATempty;
              }
            {
              v_9 = t;
              if(((u_9 != NULL) && (u_9 != v_9)))
                _fail(v_9);
              else
                u_9 = v_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(p_9));
            {
              t = union_0(t);
              {
                w_9 = t;
                if(((t_9 != NULL) && (t_9 != w_9)))
                  _fail(w_9);
                else
                  t_9 = w_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_9), not_null(o_9), not_null(t_9));
            t = set_0(t);
          }
        }
        t = z_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym__2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        t = not_null(g_10);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
            j_10 = t;
            c_10 :
            if(match_cons(j_10, sym__2))
              {
                k_10 = ATgetArgument(j_10, 0);
                l_10 = ATgetArgument(j_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_10), not_null(k_10), not_null(l_10));
                  t = p_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_1);
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
  ATerm s_10 = NULL;
  ATerm u_10 = NULL;
  s_10 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm j_1 (ATerm t)
      {
        t = term_h_10;
        return(t);
      }
      t = debug_1(t, j_1);
      return(t);
    }
    t = if_verbose5_1(t, h_1);
    {
      ATerm i_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_10)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_10;
        }
      {
        ATerm m_10;
        m_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_8, term_n_10, (ATerm) ATinsert(ATempty, not_null(s_10)));
          t = table_put_0(t);
        }
        t = m_10;
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = term_o_10;
              return(t);
            }
            t = debug_1(t, m_1);
            return(t);
          }
          t = if_verbose4_1(t, l_1);
          {
            ATerm p_10 = t;
            int q_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(q_10);
              }
            else
              {
                t = p_10;
                t = (ATerm) ATempty;
              }
            {
              ATerm n_1 (ATerm t)
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_r_10;
                  return(t);
                }
                t = say_1(t, o_1);
                return(t);
              }
              t = if_verbose6_1(t, n_1);
              {
                ATerm v_10 = NULL;
                v_10 = t;
                if(((u_10 != NULL) && (u_10 != v_10)))
                  _fail(v_10);
                else
                  u_10 = v_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_8, not_null(u_10));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_t_10;
                          return(t);
                        }
                        t = say_1(t, q_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, p_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_u_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_10)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm s_1 (ATerm t)
                              {
                                t = term_r_10;
                                return(t);
                              }
                              t = say_1(t, s_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, r_1);
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
  ATerm z_10 = NULL;
  z_10 = t;
  t = SSL_getenv(not_null(z_10));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_10;
      t = get_config_0(t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_11;
            t = getenv_0(t);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = term_f_11;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose5_1(t, t_1);
  {
    ATerm g_11;
    g_11 = t;
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_11;
          t = table_get_0(t);
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = g_11;
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
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm n_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = term_w_11;
          return(t);
        }
        t = debug_1(t, y_1);
        return(t);
      }
      t = if_verbose5_1(t, x_1);
      {
        t = xtc_load_0(t);
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_w_11;
                return(t);
              }
              t = debug_1(t, b_2);
              return(t);
            }
            t = if_verbose5_1(t, a_2);
          }
        }
      }
      LocalPopChoice(t_11);
    }
  else
    {
      t = n_11;
      {
        ATerm d_11 = NULL;
        ATerm e_11 = NULL;
        e_11 = t;
        if(((d_11 != NULL) && (d_11 != e_11)))
          _fail(e_11);
        else
          d_11 = e_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), not_null(d_11)), term_z_11);
          {
            t = error_0(t);
            {
              ATerm c_2 (ATerm t)
              {
                t = term_u_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm d_2 (ATerm t)
                    {
                      t = term_f_12;
                      return(t);
                    }
                    t = debug_1(t, d_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, c_2);
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
  ATerm h_11 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      {
        if(((h_11 != NULL) && (h_11 != i_11)))
          _fail(i_11);
        else
          h_11 = i_11;
        t = SSL_ReadFromFile(not_null(h_11));
      }
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_i_12;
          return(t);
        }
        t = debug_1(t, e_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_stdin_0))
    {
      ATerm r_11 = NULL;
      ATerm s_11 = NULL;
      t = term_j_12;
      {
        t = ReadFromFile_0(t);
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
      }
      t = not_null(r_11);
    }
  else
    {
      if(match_cons(p_11, sym_FILE_1))
        {
          q_11 = ATgetArgument(p_11, 0);
          {
            ATerm u_11 = NULL;
            ATerm v_11 = NULL;
            t = not_null(q_11);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  v_11 = t;
                  if(((u_11 != NULL) && (u_11 != v_11)))
                    _fail(v_11);
                  else
                    u_11 = v_11;
                }
              }
            }
            t = not_null(u_11);
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
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym__2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      t = SSL_WriteToBinaryFile(not_null(d_12), not_null(e_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm m_12 = NULL;
  k_12 = t;
  {
    ATerm n_12 = NULL;
    t = xtc_new_file_0(t);
    {
      n_12 = t;
      {
        if(((m_12 != NULL) && (m_12 != n_12)))
          _fail(n_12);
        else
          m_12 = n_12;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), not_null(k_12));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(m_12);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_12));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, l_74, m_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  t = SSL_close_file(not_null(r_12));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym__2))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      t = SSL_execvp(not_null(x_12), not_null(y_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  t = SSL_waitpid(not_null(d_13));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm n_13 = NULL;
  ATerm p_13 = NULL;
  n_13 = t;
  {
    t = fork_0(t);
    {
      p_13 = t;
      {
        ATerm l_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13 = NULL;
            r_13 = t;
            j_13 :
            if(match_int(r_13, 0))
              {
                t = not_null(n_13);
                t = x_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(o_12);
          }
        else
          {
            t = l_12;
            {
              ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
              t = not_null(p_13);
              {
                t = waitpid_0(t);
                {
                  s_13 = t;
                  l_13 :
                  if(match_cons(s_13, sym_WaitStatus_3))
                    {
                      t_13 = ATgetArgument(s_13, 0);
                      u_13 = ATgetArgument(s_13, 1);
                      v_13 = ATgetArgument(s_13, 2);
                      m_13 :
                      if(match_int(t_13, 0))
                        {
                          t = not_null(n_13);
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
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym__2))
    {
      d_14 = ATgetArgument(c_14, 0);
      e_14 = ATgetArgument(c_14, 1);
      {
        ATerm f_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), not_null(e_14));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, f_2);
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
ATerm xtc_command_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm k_14 = NULL;
  ATerm p_12;
  p_12 = t;
  {
    ATerm l_14 = NULL;
    t = c_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        l_14 = t;
        if(((k_14 != NULL) && (k_14 != l_14)))
          _fail(l_14);
        else
          k_14 = l_14;
      }
    }
  }
  t = p_12;
  {
    ATerm q_12;
    q_12 = t;
    {
      ATerm m_14 = NULL;
      ATerm n_14 = NULL;
      n_14 = t;
      if(((m_14 != NULL) && (m_14 != n_14)))
        _fail(n_14);
      else
        m_14 = n_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(m_14));
        t = call_0(t);
      }
    }
    t = q_12;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
        ATerm s_12;
        s_12 = t;
        {
          ATerm d_15 = NULL;
          ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
          t = y_74(t);
          {
            d_15 = t;
            {
              if(((a_15 != NULL) && (a_15 != d_15)))
                _fail(d_15);
              else
                a_15 = d_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_15), not_null(w_14), not_null(x_14));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_12 = t;
                    int u_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), term_z_12);
                        t = table_get_0(t);
                        LocalPopChoice(u_12);
                      }
                    else
                      {
                        t = t_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_15 = t;
                      t_14 :
                      if(((ATgetType(e_15) == AT_LIST) && !(ATisEmpty(e_15))))
                        {
                          f_15 = ATgetFirst((ATermList) e_15);
                          g_15 = (ATerm) ATgetNext((ATermList) e_15);
                          {
                            if(((b_15 != NULL) && (b_15 != f_15)))
                              _fail(f_15);
                            else
                              b_15 = f_15;
                            {
                              if(((c_15 != NULL) && (c_15 != g_15)))
                                _fail(g_15);
                              else
                                c_15 = g_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_15), term_z_12, (ATerm) ATinsert(CheckATermList(not_null(c_15)), (ATerm) ATinsert(CheckATermList(not_null(b_15)), not_null(w_14))));
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
        t = s_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm a_13;
  a_13 = t;
  {
    t = g_85(t);
    {
      ATerm g_2 (ATerm t)
      {
        t = term_b_13;
        return(t);
      }
      t = debug_1(t, g_2);
    }
  }
  t = a_13;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  ATerm c_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
      q_15 = t;
      l_15 :
      if(match_cons(q_15, sym__2))
        {
          r_15 = ATgetArgument(q_15, 0);
          s_15 = ATgetArgument(q_15, 1);
          {
            if(((p_15 != NULL) && (p_15 != r_15)))
              _fail(r_15);
            else
              p_15 = r_15;
            if(((o_15 != NULL) && (o_15 != s_15)))
              _fail(s_15);
            else
              o_15 = s_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_13);
      t = SSL_open_file(not_null(p_15), not_null(o_15));
    }
  else
    {
      t = c_13;
      {
        ATerm t_15 = NULL;
        ATerm u_15 = NULL;
        ATerm h_2 (ATerm t)
        {
          t = term_f_13;
          return(t);
        }
        t = obsolete_1(t, h_2);
        {
          t_15 = t;
          {
            if(((p_15 != NULL) && (p_15 != t_15)))
              _fail(t_15);
            else
              p_15 = t_15;
            {
              ATerm g_13;
              g_13 = t;
              {
                ATerm v_15 = NULL;
                t = term_h_13;
                {
                  v_15 = t;
                  if(((u_15 != NULL) && (u_15 != v_15)))
                    _fail(v_15);
                  else
                    u_15 = v_15;
                }
              }
              t = g_13;
              t = SSL_open_file(not_null(p_15), not_null(u_15));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm d_16 = NULL;
  b_16 = t;
  {
    ATerm i_13;
    i_13 = t;
    {
      ATerm e_16 = NULL;
      t = term_k_13;
      {
        e_16 = t;
        if(((d_16 != NULL) && (d_16 != e_16)))
          _fail(e_16);
        else
          d_16 = e_16;
      }
    }
    t = i_13;
    {
      t = SSL_open_file(not_null(b_16), not_null(d_16));
      t = SSL_close_file(not_null(b_16));
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
  ATerm i_16 = NULL;
  ATerm j_16 = NULL;
  t = term_o_13;
  {
    t = new_0(t);
    {
      j_16 = t;
      if(((i_16 != NULL) && (i_16 != j_16)))
        _fail(j_16);
      else
        i_16 = j_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), term_q_13);
    {
      t = conc_strings_0(t);
      {
        ATerm i_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, i_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm n_16 = NULL;
  t = new_file_0(t);
  {
    n_16 = t;
    {
      ATerm w_13;
      w_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_h_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_o_13);
            {
              ATerm j_2 (ATerm t)
              {
                t = term_x_13;
                return(t);
              }
              t = assert_1(t, j_2);
            }
          }
        }
      }
      t = w_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_stdin_0))
    {
      ATerm z_16 = NULL;
      ATerm a_17 = NULL;
      ATerm b_17 = NULL;
      t = xtc_new_file_0(t);
      {
        a_17 = t;
        {
          if(((z_16 != NULL) && (z_16 != a_17)))
            _fail(a_17);
          else
            z_16 = a_17;
          {
            ATerm c_17 = NULL;
            t = o_0(t);
            {
              c_17 = t;
              if(((b_17 != NULL) && (b_17 != c_17)))
                _fail(c_17);
              else
                b_17 = c_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_16)), term_y_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(z_16);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_16));
    }
  else
    {
      if(match_cons(x_16, sym_FILE_1))
        {
          y_16 = ATgetArgument(x_16, 0);
          {
            ATerm e_17 = NULL;
            ATerm f_17 = NULL;
            t = not_null(y_16);
            {
              ATerm g_17 = NULL;
              t = xtc_new_file_0(t);
              {
                f_17 = t;
                {
                  if(((e_17 != NULL) && (e_17 != f_17)))
                    _fail(f_17);
                  else
                    e_17 = f_17;
                  {
                    ATerm h_17 = NULL;
                    t = o_0(t);
                    {
                      h_17 = t;
                      if(((g_17 != NULL) && (g_17 != h_17)))
                        _fail(h_17);
                      else
                        g_17 = h_17;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_17)), term_y_13), not_null(y_16)), term_z_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(e_17);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_17));
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
  ATerm s_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_stdin_0))
    {
      ATerm u_17 = NULL,w_17 = NULL;
      ATerm a_14;
      a_14 = t;
      {
        ATerm v_17 = NULL;
        t = SSLgetAnnotations(not_null(s_17));
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
      }
      t = a_14;
      {
        ATerm x_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(u_17));
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
        t = not_null(w_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm o_52 (ATerm))
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym_FILE_1))
    {
      h_18 = ATgetArgument(g_18, 0);
      {
        ATerm k_18 = NULL,m_18 = NULL;
        ATerm l_18 = NULL;
        t = SSLgetAnnotations(not_null(g_18));
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
        {
          t = not_null(h_18);
          {
            ATerm o_18 = NULL;
            t = o_52(t);
            {
              m_18 = t;
              {
                ATerm p_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(m_18)), not_null(k_18));
                {
                  p_18 = t;
                  if(((o_18 != NULL) && (o_18 != p_18)))
                    _fail(p_18);
                  else
                    o_18 = p_18;
                }
                t = not_null(o_18);
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
ATerm xtc_transform_2 (ATerm t, ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          t = stdin_0(t);
        }
      LocalPopChoice(g_14);
      t = xtc_transform_file_2(t, e_74, f_74);
    }
  else
    {
      t = f_14;
      t = xtc_transform_term_2(t, e_74, f_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      t = SSL_copy(not_null(y_18), not_null(z_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_stderr_0))
    {
      ATerm j_19 = NULL,l_19 = NULL;
      ATerm j_14;
      j_14 = t;
      {
        ATerm k_19 = NULL;
        t = SSLgetAnnotations(not_null(h_19));
        {
          k_19 = t;
          if(((j_19 != NULL) && (j_19 != k_19)))
            _fail(k_19);
          else
            j_19 = k_19;
        }
      }
      t = j_14;
      {
        ATerm m_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_19));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym_stdout_0))
    {
      ATerm c_20 = NULL,e_20 = NULL;
      ATerm o_14;
      o_14 = t;
      {
        ATerm d_20 = NULL;
        t = SSLgetAnnotations(not_null(a_20));
        {
          d_20 = t;
          if(((c_20 != NULL) && (c_20 != d_20)))
            _fail(d_20);
          else
            c_20 = d_20;
        }
      }
      t = o_14;
      {
        ATerm h_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(c_20));
        {
          h_20 = t;
          if(((e_20 != NULL) && (e_20 != h_20)))
            _fail(h_20);
          else
            e_20 = h_20;
        }
        t = not_null(e_20);
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
  ATerm y_20 = NULL,z_20 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_FILE_1))
    {
      z_20 = ATgetArgument(y_20, 0);
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = NULL;
            ATerm c_21 = NULL;
            t = m_0(t);
            {
              c_21 = t;
              {
                if(((b_21 != NULL) && (b_21 != c_21)))
                  _fail(c_21);
                else
                  b_21 = c_21;
                {
                  ATerm r_14 = t;
                  int s_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(s_14);
                    }
                  else
                    {
                      t = r_14;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), not_null(b_21));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_20));
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm y_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_21 = NULL;
                  ATerm f_21 = NULL;
                  t = m_0(t);
                  {
                    f_21 = t;
                    {
                      if(((e_21 != NULL) && (e_21 != f_21)))
                        _fail(f_21);
                      else
                        e_21 = f_21;
                      {
                        ATerm h_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm i_15 = t;
                            int j_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(j_15);
                              }
                            else
                              {
                                t = i_15;
                                {
                                  ATerm k_15 = t;
                                  int m_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(m_15);
                                    }
                                  else
                                    {
                                      t = k_15;
                                      {
                                        ATerm g_21 = NULL;
                                        g_21 = t;
                                        if(((z_20 != NULL) && (z_20 != g_21)))
                                          _fail(g_21);
                                        else
                                          z_20 = g_21;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), not_null(e_21));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_20));
                  LocalPopChoice(z_14);
                }
              else
                {
                  t = y_14;
                  {
                    ATerm i_21 = NULL;
                    t = m_0(t);
                    {
                      i_21 = t;
                      if(((z_20 != NULL) && (z_20 != i_21)))
                        _fail(i_21);
                      else
                        z_20 = i_21;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_20));
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
  ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL;
  j_22 = t;
  i_22 :
  if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
    {
      l_22 = ATgetFirst((ATermList) j_22);
      m_22 = (ATerm) ATgetNext((ATermList) j_22);
      t = not_null(m_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm n_15;
        n_15 = t;
        {
          ATerm x_22 = NULL;
          ATerm y_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), not_null(u_22));
          {
            ATerm w_15 = t;
            int x_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_15);
              }
            else
              {
                t = w_15;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_22), not_null(u_22), not_null(x_22));
            t = table_put_0(t);
          }
        }
        t = n_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  ATerm y_15;
  y_15 = t;
  {
    ATerm i_23 = NULL;
    ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
    t = v_74(t);
    {
      i_23 = t;
      {
        if(((h_23 != NULL) && (h_23 != i_23)))
          _fail(i_23);
        else
          h_23 = i_23;
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), term_z_12);
              t = table_get_0(t);
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_23 = t;
            e_23 :
            if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
              {
                k_23 = ATgetFirst((ATermList) j_23);
                l_23 = (ATerm) ATgetNext((ATermList) j_23);
                {
                  if(((g_23 != NULL) && (g_23 != k_23)))
                    _fail(k_23);
                  else
                    g_23 = k_23;
                  {
                    if(((f_23 != NULL) && (f_23 != l_23)))
                      _fail(l_23);
                    else
                      f_23 = l_23;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_23), term_z_12, not_null(f_23));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_23);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm m_23 = NULL;
                              m_23 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(m_23));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_2);
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
  t = y_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  t = SSL_remove(not_null(z_23));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm e_63 (ATerm), ATerm f_63 (ATerm))
{
  ATerm c_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_63(t);
      t = f_63(t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = c_16;
      {
        t = f_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm f_24 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm h_24 = NULL;
    ATerm i_24 = NULL;
    t = u_74(t);
    {
      h_24 = t;
      {
        if(((f_24 != NULL) && (f_24 != h_24)))
          _fail(h_24);
        else
          f_24 = h_24;
        {
          ATerm j_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), term_z_12);
          {
            ATerm h_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_16);
              }
            else
              {
                t = h_16;
                t = (ATerm) ATempty;
              }
            {
              j_24 = t;
              if(((i_24 != NULL) && (i_24 != j_24)))
                _fail(j_24);
              else
                i_24 = j_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_24), term_z_12, (ATerm) ATinsert(CheckATermList(not_null(i_24)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = term_x_13;
    return(t);
  }
  t = begin_scope_1(t, l_2);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm l_16;
      l_16 = t;
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
        ATerm m_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_16;
            t = table_get_0(t);
            LocalPopChoice(o_16);
          }
        else
          {
            t = m_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          u_24 = t;
          q_24 :
          if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
            {
              v_24 = ATgetFirst((ATermList) u_24);
              w_24 = (ATerm) ATgetNext((ATermList) u_24);
              {
                if(((t_24 != NULL) && (t_24 != v_24)))
                  _fail(v_24);
                else
                  t_24 = v_24;
                {
                  if(((s_24 != NULL) && (s_24 != w_24)))
                    _fail(w_24);
                  else
                    s_24 = w_24;
                  {
                    t = not_null(t_24);
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, n_2);
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
      t = l_16;
      {
        ATerm o_2 (ATerm t)
        {
          t = term_x_13;
          return(t);
        }
        t = end_scope_1(t, o_2);
      }
      return(t);
    }
    t = restore_always_2(t, s_73, m_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        ATerm a_25 = NULL;
        t = term_z_13;
        {
          t = get_config_0(t);
          {
            a_25 = t;
            if(((z_24 != NULL) && (z_24 != a_25)))
              _fail(a_25);
            else
              z_24 = a_25;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_24));
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = term_j_12;
      }
    {
      t = t_73(t);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_13;
              t = get_config_0(t);
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              t = term_u_16;
            }
          return(t);
        }
        t = copy_to_1(t, q_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm d_25 = NULL;
    d_25 = t;
    c_25 :
    if(!(match_string(d_25, "-v")))
      {
        if(!(match_string(d_25, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_d_17;
    t = set_config_0(t);
    t = term_i_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = Option_3(t, r_2, s_2, v_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm g_25 = NULL;
    g_25 = t;
    e_25 :
    if(!(match_string(g_25, "-k")))
      {
        if(!(match_string(g_25, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm k_17;
    k_17 = t;
    {
      ATerm h_25 = NULL;
      ATerm i_25 = NULL;
      t = string_to_int_0(t);
      {
        i_25 = t;
        if(((h_25 != NULL) && (h_25 != i_25)))
          _fail(i_25);
        else
          h_25 = i_25;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(h_25));
        t = set_config_0(t);
      }
    }
    t = k_17;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, a_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  t = SSL_string_to_int(not_null(l_25));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm t_25 = NULL;
        t_25 = t;
        o_25 :
        if(!(match_string(t_25, "-S")))
          {
            if(!(match_string(t_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_q_17;
        t = set_config_0(t);
        t = term_t_17;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_y_17;
        return(t);
      }
      t = Option_3(t, b_3, e_3, f_3);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm u_25 = NULL;
              u_25 = t;
              p_25 :
              if(!(match_string(u_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm x_25 = NULL;
              ATerm b_18;
              b_18 = t;
              {
                ATerm v_25 = NULL;
                ATerm w_25 = NULL;
                t = string_to_int_0(t);
                {
                  w_25 = t;
                  if(((v_25 != NULL) && (v_25 != w_25)))
                    _fail(w_25);
                  else
                    v_25 = w_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(v_25));
                  t = set_config_0(t);
                }
              }
              t = b_18;
              {
                ATerm y_25 = NULL;
                y_25 = t;
                if(((x_25 != NULL) && (x_25 != y_25)))
                  _fail(y_25);
                else
                  x_25 = y_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_25));
              }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_c_18;
              return(t);
            }
            t = ArgOption_3(t, h_3, i_3, n_3);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm z_25 = NULL;
                z_25 = t;
                s_25 :
                if(!(match_string(z_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_e_18;
                t = set_config_0(t);
                t = term_i_18;
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_j_18;
                return(t);
              }
              t = Option_3(t, o_3, p_3, q_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = n_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm f_26 = NULL;
    f_26 = t;
    c_26 :
    if(!(match_string(f_26, "-o")))
      {
        if(!(match_string(f_26, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm i_26 = NULL;
    ATerm t_18;
    t_18 = t;
    {
      ATerm g_26 = NULL;
      ATerm h_26 = NULL;
      h_26 = t;
      if(((g_26 != NULL) && (g_26 != h_26)))
        _fail(h_26);
      else
        g_26 = h_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_13, not_null(g_26));
        t = set_config_0(t);
      }
    }
    t = t_18;
    {
      ATerm j_26 = NULL;
      j_26 = t;
      if(((i_26 != NULL) && (i_26 != j_26)))
        _fail(j_26);
      else
        i_26 = j_26;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_26));
    }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  t = ArgOption_3(t, r_3, s_3, t_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = v_18;
      {
        ATerm u_3 (ATerm t)
        {
          ATerm n_26 = NULL;
          n_26 = t;
          m_26 :
          if(!(match_string(n_26, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_c_19;
          t = set_config_0(t);
          t = term_d_19;
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          t = term_e_19;
          return(t);
        }
        t = Option_3(t, u_3, i_4, j_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  t_26 = t;
  r_26 :
  if(match_string(t_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
        {
          u_26 = ATgetFirst((ATermList) t_26);
          v_26 = (ATerm) ATgetNext((ATermList) t_26);
          s_26 :
          if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
            {
              w_26 = ATgetFirst((ATermList) v_26);
              x_26 = (ATerm) ATgetNext((ATermList) v_26);
              {
                ATerm b_27 = NULL;
                ATerm f_19;
                f_19 = t;
                {
                  t = not_null(u_26);
                  t = j_0(t);
                }
                t = f_19;
                {
                  ATerm c_27 = NULL;
                  t = not_null(w_26);
                  {
                    t = k_0(t);
                    {
                      c_27 = t;
                      if(((b_27 != NULL) && (b_27 != c_27)))
                        _fail(c_27);
                      else
                        b_27 = c_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_26)), not_null(b_27));
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
  ATerm k_4 (ATerm t)
  {
    ATerm j_27 = NULL;
    j_27 = t;
    g_27 :
    if(!(match_string(j_27, "-i")))
      {
        if(!(match_string(j_27, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm m_27 = NULL;
    ATerm i_19;
    i_19 = t;
    {
      ATerm k_27 = NULL;
      ATerm l_27 = NULL;
      l_27 = t;
      if(((k_27 != NULL) && (k_27 != l_27)))
        _fail(l_27);
      else
        k_27 = l_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_13, not_null(k_27));
        t = set_config_0(t);
      }
    }
    t = i_19;
    {
      ATerm n_27 = NULL;
      n_27 = t;
      if(((m_27 != NULL) && (m_27 != n_27)))
        _fail(n_27);
      else
        m_27 = n_27;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_27));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  t = ArgOption_3(t, k_4, l_4, o_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_27 = NULL;
  ATerm s_19;
  s_19 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm t_27 = NULL,u_27 = NULL;
      t_27 = t;
      r_27 :
      if(match_cons(t_27, sym_Program_1))
        {
          u_27 = ATgetArgument(t_27, 0);
          if(((s_27 != NULL) && (s_27 != u_27)))
            _fail(u_27);
          else
            s_27 = u_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_19), not_null(s_27)), term_t_19));
      {
        t = printnl_0(t);
        {
          t = term_v_19;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATempty, term_w_19));
  {
    t = printnl_0(t);
    {
      t = term_v_19;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_TicksToSeconds(not_null(x_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym__2))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_28), not_null(e_28));
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            t = SSL_addr(not_null(d_28), not_null(e_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm b_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_70(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = b_20;
      {
        ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
        l_28 = t;
        k_28 :
        if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
          {
            m_28 = ATgetFirst((ATermList) l_28);
            n_28 = (ATerm) ATgetNext((ATermList) l_28);
            {
              ATerm q_28 = NULL;
              ATerm r_28 = NULL;
              t = not_null(n_28);
              {
                t = foldr_2(t, u_70, v_70);
                {
                  r_28 = t;
                  if(((q_28 != NULL) && (q_28 != r_28)))
                    _fail(r_28);
                  else
                    q_28 = r_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), not_null(q_28));
                t = v_70(t);
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
ATerm crush_2 (ATerm t, ATerm s_69 (ATerm), ATerm t_69 (ATerm))
{
  ATerm y_28 = NULL;
  ATerm a_29 = NULL;
  y_28 = t;
  {
    ATerm b_29 = NULL;
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
    t = not_null(y_28);
    {
      b_29 = t;
      {
        t = SSL_explode_term(not_null(b_29));
        {
          e_29 = t;
          x_28 :
          if(match_cons(e_29, sym__2))
            {
              f_29 = ATgetArgument(e_29, 0);
              g_29 = ATgetArgument(e_29, 1);
              if(((a_29 != NULL) && (a_29 != g_29)))
                _fail(g_29);
              else
                a_29 = g_29;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_29);
      t = foldr_2(t, s_69, t_69);
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
    ATerm q_4 (ATerm t)
    {
      t = term_p_17;
      return(t);
    }
    t = crush_2(t, q_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym__2))
    {
      s_29 = ATgetArgument(r_29, 0);
      t_29 = ATgetArgument(r_29, 1);
      {
        ATerm g_20;
        g_20 = t;
        {
          ATerm i_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_29), not_null(t_29));
              LocalPopChoice(j_20);
            }
          else
            {
              t = i_20;
              t = SSL_gtr(not_null(s_29), not_null(t_29));
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
ATerm geq_0 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
      a_30 = t;
      y_29 :
      if(match_cons(a_30, sym__2))
        {
          b_30 = ATgetArgument(a_30, 0);
          c_30 = ATgetArgument(a_30, 1);
          {
            if(((z_29 != NULL) && (z_29 != b_30)))
              _fail(b_30);
            else
              z_29 = b_30;
            if(((z_29 != NULL) && (z_29 != c_30)))
              _fail(c_30);
            else
              z_29 = c_30;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm m_20;
    m_20 = t;
    {
      ATerm h_30 = NULL;
      ATerm i_30 = NULL;
      t = term_m_8;
      {
        t = get_config_0(t);
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_30), term_v_19);
        t = geq_0(t);
      }
    }
    t = m_20;
    t = b_59(t);
    return(t);
  }
  t = try_1(t, r_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm m_30 = NULL,o_30 = NULL;
    ATerm n_20;
    n_20 = t;
    {
      ATerm n_30 = NULL;
      t = run_time_0(t);
      {
        n_30 = t;
        if(((m_30 != NULL) && (m_30 != n_30)))
          _fail(n_30);
        else
          m_30 = n_30;
      }
    }
    t = n_20;
    {
      ATerm p_30 = NULL;
      t = term_o_20;
      {
        t = get_config_0(t);
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_20), not_null(m_30)), term_p_20), not_null(o_30)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_4);
  {
    t = term_p_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Version_0))
    {
      ATerm y_30 = NULL,a_31 = NULL;
      ATerm r_20;
      r_20 = t;
      {
        ATerm z_30 = NULL;
        t = SSLgetAnnotations(not_null(w_30));
        {
          z_30 = t;
          if(((y_30 != NULL) && (y_30 != z_30)))
            _fail(z_30);
          else
            y_30 = z_30;
        }
      }
      t = r_20;
      {
        ATerm b_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_30));
        {
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
        }
        t = not_null(a_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_4);
  t = b_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  t = SSL_table_create(not_null(g_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  {
    ATerm w_20;
    w_20 = t;
    {
      t = term_a_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_21, term_d_21, not_null(k_31));
          t = table_put_0(t);
        }
      }
    }
    t = w_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = SSL_table_destroy(not_null(o_31));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  t = SSL_exit(not_null(s_31));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(((ATgetType(y_31) == AT_LIST) && ATisEmpty(y_31)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
        {
          z_31 = ATgetFirst((ATermList) y_31);
          a_32 = (ATerm) ATgetNext((ATermList) y_31);
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
  ATerm h_21;
  h_21 = t;
  {
    ATerm i_32 = NULL;
    ATerm l_32 = NULL;
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm j_32 = NULL;
          ATerm k_32 = NULL;
          k_32 = t;
          if(((j_32 != NULL) && (j_32 != k_32)))
            _fail(k_32);
          else
            j_32 = k_32;
          t = (ATerm) ATinsert(ATempty, not_null(j_32));
        }
      }
    {
      l_32 = t;
      if(((i_32 != NULL) && (i_32 != l_32)))
        _fail(l_32);
      else
        i_32 = l_32;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_16, not_null(i_32));
      t = printnl_0(t);
    }
  }
  t = h_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  a_33 = t;
  x_32 :
  if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
    {
      y_32 = ATgetFirst((ATermList) a_33);
      z_32 = (ATerm) ATgetNext((ATermList) a_33);
      {
        ATerm d_33 = NULL;
        t = not_null(z_32);
        {
          ATerm l_21;
          l_21 = t;
          {
            ATerm e_33 = NULL,g_33 = NULL,s_33 = NULL;
            ATerm m_21;
            m_21 = t;
            {
              ATerm f_33 = NULL;
              t = i_0(t);
              {
                f_33 = t;
                if(((e_33 != NULL) && (e_33 != f_33)))
                  _fail(f_33);
                else
                  e_33 = f_33;
              }
            }
            t = m_21;
            {
              ATerm r_33 = NULL;
              t = not_null(y_32);
              {
                t = h_0(t);
                {
                  r_33 = t;
                  if(((g_33 != NULL) && (g_33 != r_33)))
                    _fail(r_33);
                  else
                    g_33 = r_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_33)), not_null(g_33));
                {
                  s_33 = t;
                  if(((d_33 != NULL) && (d_33 != s_33)))
                    _fail(s_33);
                  else
                    d_33 = s_33;
                }
              }
            }
          }
          t = l_21;
          {
            ATerm u_4 (ATerm t)
            {
              t = not_null(d_33);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_33) == AT_LIST) && ATisEmpty(a_33)))
        {
          {
            t = term_o_13;
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
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_52 (ATerm))
{
  ATerm u_34 = NULL,v_34 = NULL;
  u_34 = t;
  j_34 :
  if(match_cons(u_34, sym_Program_1))
    {
      v_34 = ATgetArgument(u_34, 0);
      {
        ATerm z_34 = NULL,b_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(u_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(v_34);
          {
            ATerm d_35 = NULL;
            t = v_52(t);
            {
              b_35 = t;
              {
                ATerm f_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_35)), not_null(z_34));
                {
                  f_35 = t;
                  if(((d_35 != NULL) && (d_35 != f_35)))
                    _fail(f_35);
                  else
                    d_35 = f_35;
                }
                t = not_null(d_35);
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
  ATerm t_35 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_35 = NULL;
      t = term_o_20;
      {
        t = get_config_0(t);
        {
          y_35 = t;
          if(((t_35 != NULL) && (t_35 != y_35)))
            _fail(y_35);
          else
            t_35 = y_35;
        }
      }
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm b_5 (ATerm t)
          {
            ATerm z_35 = NULL;
            z_35 = t;
            if(((t_35 != NULL) && (t_35 != z_35)))
              _fail(z_35);
            else
              t_35 = z_35;
            return(t);
          }
          t = Program_1(t, b_5);
          return(t);
        }
        t = option_defined_1(t, a_5);
      }
    }
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(t_35);
        return(t);
      }
      t = short_description_1(t, f_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = term_p_21;
      {
        t = echo_0(t);
        {
          t = term_s_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm a_36 = NULL;
                  ATerm b_36 = NULL;
                  b_36 = t;
                  if(((a_36 != NULL) && (a_36 != b_36)))
                    _fail(b_36);
                  else
                    a_36 = b_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_36)), term_t_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm c_36 = NULL;
                    ATerm d_36 = NULL;
                    ATerm m_5 (ATerm t)
                    {
                      t = not_null(t_35);
                      return(t);
                    }
                    t = long_description_1(t, m_5);
                    {
                      d_36 = t;
                      if(((c_36 != NULL) && (c_36 != d_36)))
                        _fail(d_36);
                      else
                        c_36 = d_36;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_36)), term_u_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_5);
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
  ATerm v_21;
  v_21 = t;
  {
    ATerm j_36 = NULL;
    ATerm k_36 = NULL;
    k_36 = t;
    if(((j_36 != NULL) && (j_36 != k_36)))
      _fail(k_36);
    else
      j_36 = k_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATempty, not_null(j_36)));
      t = printnl_0(t);
    }
  }
  t = v_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_85 (ATerm))
{
  ATerm w_21;
  w_21 = t;
  {
    t = a_85(t);
    t = debug_0(t);
  }
  t = w_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym_Undefined_1))
    {
      s_36 = ATgetArgument(r_36, 0);
      {
        ATerm v_36 = NULL,x_36 = NULL;
        ATerm w_36 = NULL;
        t = SSLgetAnnotations(not_null(r_36));
        {
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
        }
        {
          t = not_null(s_36);
          {
            ATerm z_36 = NULL;
            t = w_52(t);
            {
              x_36 = t;
              {
                ATerm a_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_36)), not_null(v_36));
                {
                  a_37 = t;
                  if(((z_36 != NULL) && (z_36 != a_37)))
                    _fail(a_37);
                  else
                    z_36 = a_37;
                }
                t = not_null(z_36);
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
  ATerm f_37 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_64, _id);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = Cons_2(t, _id, f_37);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_76 (ATerm))
{
  t = fetch_1(t, i_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_cons(k_37, sym_Help_0))
    {
      ATerm m_37 = NULL,o_37 = NULL;
      ATerm z_21;
      z_21 = t;
      {
        ATerm n_37 = NULL;
        t = SSLgetAnnotations(not_null(k_37));
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
      }
      t = z_21;
      {
        ATerm p_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_37));
        {
          p_37 = t;
          if(((o_37 != NULL) && (o_37 != p_37)))
            _fail(p_37);
          else
            o_37 = p_37;
        }
        t = not_null(o_37);
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
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_implode_string(not_null(u_37));
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
        ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
        a_38 = t;
        z_37 :
        if(((ATgetType(a_38) == AT_LIST) && !(ATisEmpty(a_38))))
          {
            b_38 = ATgetFirst((ATermList) a_38);
            c_38 = (ATerm) ATgetNext((ATermList) a_38);
            {
              t = not_null(b_38);
              {
                ATerm n_5 (ATerm t)
                {
                  t = not_null(c_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_5);
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
  ATerm o_38 = NULL;
  ATerm q_38 = NULL;
  o_38 = t;
  {
    ATerm r_38 = NULL;
    ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
    t = not_null(o_38);
    {
      r_38 = t;
      {
        t = SSL_explode_term(not_null(r_38));
        {
          t_38 = t;
          m_38 :
          if(match_cons(t_38, sym__2))
            {
              u_38 = ATgetArgument(t_38, 0);
              v_38 = ATgetArgument(t_38, 1);
              n_38 :
              if(match_string(u_38, ""))
                {
                  if(((q_38 != NULL) && (q_38 != v_38)))
                    _fail(v_38);
                  else
                    q_38 = v_38;
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
      t = not_null(q_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm z_38 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_38);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          t = Nil_0(t);
          t = v_64(t);
        }
      }
    return(t);
  }
  t = z_38(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_39 = NULL,f_39 = NULL,g_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym__2))
    {
      f_39 = ATgetArgument(c_39, 0);
      g_39 = ATgetArgument(c_39, 1);
      {
        t = not_null(f_39);
        {
          ATerm o_5 (ATerm t)
          {
            t = not_null(g_39);
            return(t);
          }
          t = at_end_1(t, o_5);
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
  ATerm m_39 = NULL;
  m_39 = t;
  t = SSL_explode_string(not_null(m_39));
  return(t);
}
ATerm _2 (ATerm t, ATerm s_50 (ATerm), ATerm t_50 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym__2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      {
        ATerm b_40 = NULL,d_40 = NULL;
        ATerm c_40 = NULL;
        t = SSLgetAnnotations(not_null(v_39));
        {
          c_40 = t;
          if(((b_40 != NULL) && (b_40 != c_40)))
            _fail(c_40);
          else
            b_40 = c_40;
        }
        {
          t = not_null(w_39);
          {
            ATerm f_40 = NULL;
            t = s_50(t);
            {
              d_40 = t;
              {
                t = not_null(x_39);
                {
                  ATerm h_40 = NULL;
                  t = t_50(t);
                  {
                    f_40 = t;
                    {
                      ATerm i_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_40), not_null(f_40)), not_null(b_40));
                      {
                        i_40 = t;
                        if(((h_40 != NULL) && (h_40 != i_40)))
                          _fail(i_40);
                        else
                          h_40 = i_40;
                      }
                      t = not_null(h_40);
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
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym__2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      {
        ATerm g_22;
        g_22 = t;
        t = SSL_printnl(not_null(r_40), not_null(s_40));
        t = g_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm h_22;
  h_22 = t;
  {
    ATerm y_40 = NULL,a_41 = NULL;
    ATerm k_22;
    k_22 = t;
    {
      ATerm z_40 = NULL;
      t = z_84(t);
      {
        z_40 = t;
        if(((y_40 != NULL) && (y_40 != z_40)))
          _fail(z_40);
        else
          y_40 = z_40;
      }
    }
    t = k_22;
    {
      ATerm b_41 = NULL;
      b_41 = t;
      if(((a_41 != NULL) && (a_41 != b_41)))
        _fail(b_41);
      else
        a_41 = b_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_41)), not_null(y_40)));
        t = printnl_0(t);
      }
    }
  }
  t = h_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm e_41 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = Cons_2(t, g_64, e_41);
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  t = SSL_is_string(not_null(g_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_5);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
              p_41 = t;
              o_41 :
              if(match_cons(p_41, sym_Path_1))
                {
                  q_41 = ATgetArgument(p_41, 0);
                  t = not_null(q_41);
                }
              else
                {
                  if(match_cons(p_41, sym_Var_1))
                    {
                      q_41 = ATgetArgument(p_41, 0);
                      {
                        t = not_null(q_41);
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
                                ATerm r_5 (ATerm t)
                                {
                                  t = term_b_23;
                                  return(t);
                                }
                                t = debug_1(t, r_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_41, sym_Prefix_2))
                        {
                          q_41 = ATgetArgument(p_41, 0);
                          r_41 = ATgetArgument(p_41, 1);
                          {
                            ATerm w_41 = NULL,y_41 = NULL;
                            ATerm c_23;
                            c_23 = t;
                            {
                              ATerm x_41 = NULL;
                              t = not_null(q_41);
                              {
                                t = eval_config_0(t);
                                {
                                  x_41 = t;
                                  if(((w_41 != NULL) && (w_41 != x_41)))
                                    _fail(x_41);
                                  else
                                    w_41 = x_41;
                                }
                              }
                            }
                            t = c_23;
                            {
                              ATerm z_41 = NULL;
                              t = not_null(r_41);
                              {
                                t = eval_config_0(t);
                                {
                                  z_41 = t;
                                  if(((y_41 != NULL) && (y_41 != z_41)))
                                    _fail(z_41);
                                  else
                                    y_41 = z_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), not_null(y_41));
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
  ATerm h_42 = NULL;
  h_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, not_null(h_42));
    {
      t = table_get_0(t);
      {
        ATerm s_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_23;
            n_23 = t;
            {
              ATerm j_42 = NULL;
              ATerm k_42 = NULL;
              k_42 = t;
              if(((j_42 != NULL) && (j_42 != k_42)))
                _fail(k_42);
              else
                j_42 = k_42;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_23, not_null(h_42), not_null(j_42));
                t = table_put_0(t);
              }
            }
            t = n_23;
          }
          return(t);
        }
        t = try_1(t, s_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_62(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  o_42 :
  if(match_cons(p_42, sym__2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      t = SSL_table_get(not_null(q_42), not_null(r_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym__3))
    {
      a_43 = ATgetArgument(z_42, 0);
      b_43 = ATgetArgument(z_42, 1);
      c_43 = ATgetArgument(z_42, 2);
      {
        ATerm q_23;
        q_23 = t;
        {
          ATerm g_43 = NULL;
          ATerm h_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_43), not_null(b_43));
          {
            ATerm r_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_23);
              }
            else
              {
                t = r_23;
                t = (ATerm) ATempty;
              }
            {
              h_43 = t;
              if(((g_43 != NULL) && (g_43 != h_43)))
                _fail(h_43);
              else
                g_43 = h_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_43), not_null(b_43), (ATerm) ATinsert(CheckATermList(not_null(g_43)), not_null(c_43)));
            t = table_put_0(t);
          }
        }
        t = q_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm l_43 = NULL;
  ATerm m_43 = NULL;
  t = term_o_13;
  {
    t = n_77(t);
    {
      m_43 = t;
      if(((l_43 != NULL) && (l_43 != m_43)))
        _fail(m_43);
      else
        l_43 = m_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_21, term_r_21, not_null(l_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_string(s_43, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
        {
          t_43 = ATgetFirst((ATermList) s_43);
          u_43 = (ATerm) ATgetNext((ATermList) s_43);
          {
            ATerm x_43 = NULL;
            ATerm t_23;
            t_23 = t;
            {
              t = not_null(t_43);
              t = a_0(t);
            }
            t = t_23;
            {
              ATerm y_43 = NULL;
              t = term_o_13;
              {
                t = d_0(t);
                {
                  y_43 = t;
                  if(((x_43 != NULL) && (x_43 != y_43)))
                    _fail(y_43);
                  else
                    x_43 = y_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_43)), not_null(x_43));
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
  ATerm t_5 (ATerm t)
  {
    ATerm d_44 = NULL;
    d_44 = t;
    c_44 :
    if(!(match_string(d_44, "--help")))
      {
        if(!(match_string(d_44, "-h")))
          {
            if(!(match_string(d_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_v_23;
    {
      t = set_config_0(t);
      t = term_w_23;
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_x_23;
    return(t);
  }
  t = Option_3(t, t_5, u_5, w_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  f_44 :
  if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
    {
      h_44 = ATgetFirst((ATermList) g_44);
      i_44 = (ATerm) ATgetNext((ATermList) g_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  r_44 :
  if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
    {
      t_44 = ATgetFirst((ATermList) s_44);
      u_44 = (ATerm) ATgetNext((ATermList) s_44);
      {
        ATerm y_44 = NULL,e_45 = NULL;
        ATerm d_45 = NULL;
        t = SSLgetAnnotations(not_null(s_44));
        {
          d_45 = t;
          if(((y_44 != NULL) && (y_44 != d_45)))
            _fail(d_45);
          else
            y_44 = d_45;
        }
        {
          t = not_null(t_44);
          {
            ATerm i_45 = NULL;
            t = b_52(t);
            {
              e_45 = t;
              {
                t = not_null(u_44);
                {
                  ATerm k_45 = NULL;
                  t = c_52(t);
                  {
                    i_45 = t;
                    {
                      ATerm l_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_45)), not_null(e_45)), not_null(y_44));
                      {
                        l_45 = t;
                        if(((k_45 != NULL) && (k_45 != l_45)))
                          _fail(l_45);
                        else
                          k_45 = l_45;
                      }
                      t = not_null(k_45);
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
  ATerm e_46 = NULL;
  e_46 = t;
  d_46 :
  if(((ATgetType(e_46) == AT_LIST) && ATisEmpty(e_46)))
    {
      {
        ATerm g_46 = NULL,i_46 = NULL;
        ATerm y_23;
        y_23 = t;
        {
          ATerm h_46 = NULL;
          t = SSLgetAnnotations(not_null(e_46));
          {
            h_46 = t;
            if(((g_46 != NULL) && (g_46 != h_46)))
              _fail(h_46);
            else
              g_46 = h_46;
          }
        }
        t = y_23;
        {
          ATerm j_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_46));
          {
            j_46 = t;
            if(((i_46 != NULL) && (i_46 != j_46)))
              _fail(j_46);
            else
              i_46 = j_46;
          }
          t = not_null(i_46);
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
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym__2))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_23, not_null(q_46), not_null(r_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm a_24;
  a_24 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_b_24;
      t = l_77(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = a_24;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm z_46 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm x_46 = NULL;
        ATerm y_46 = NULL;
        y_46 = t;
        if(((x_46 != NULL) && (x_46 != y_46)))
          _fail(y_46);
        else
          x_46 = y_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_20, not_null(x_46));
          t = set_config_0(t);
        }
      }
      t = c_24;
      {
        ATerm a_47 = NULL;
        a_47 = t;
        if(((z_46 != NULL) && (z_46 != a_47)))
          _fail(a_47);
        else
          z_46 = a_47;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_46));
      }
      return(t);
    }
    ATerm c_6 (ATerm t)
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_24);
            }
          else
            {
              t = g_24;
              {
                t = l_77(t);
                t = Cons_2(t, _id, c_6);
              }
            }
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, c_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  ATerm l_24;
  l_24 = t;
  {
    ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
    j_47 = t;
    f_47 :
    if(match_cons(j_47, sym__3))
      {
        k_47 = ATgetArgument(j_47, 0);
        l_47 = ATgetArgument(j_47, 1);
        m_47 = ATgetArgument(j_47, 2);
        {
          if(((g_47 != NULL) && (g_47 != k_47)))
            _fail(k_47);
          else
            g_47 = k_47;
          {
            if(((h_47 != NULL) && (h_47 != l_47)))
              _fail(l_47);
            else
              h_47 = l_47;
            {
              if(((i_47 != NULL) && (i_47 != m_47)))
                _fail(m_47);
              else
                i_47 = m_47;
              t = SSL_table_put(not_null(g_47), not_null(h_47), not_null(i_47));
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
ATerm parse_options_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm p_47 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    t = term_n_24;
    t = table_put_0(t);
  }
  t = m_24;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_77(t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_6);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm r_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24;
            y_24 = t;
            {
              ATerm b_25 = t;
              int f_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_23;
                  t = get_config_0(t);
                  LocalPopChoice(f_25);
                }
              else
                {
                  t = b_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_24;
            {
              t = system_usage_0(t);
              {
                t = term_p_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_24);
          }
        else
          {
            t = r_24;
            {
              ATerm h_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm q_47 = NULL;
                  q_47 = t;
                  if(((p_47 != NULL) && (p_47 != q_47)))
                    _fail(q_47);
                  else
                    p_47 = q_47;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, h_6);
              {
                ATerm l_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_47)), term_j_25);
                  return(t);
                }
                t = say_1(t, l_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_19;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_6);
      {
        ATerm k_25;
        k_25 = t;
        {
          t = term_q_21;
          t = table_destroy_0(t);
        }
        t = k_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  t = parse_options_1(t, h_75);
  {
    t = store_options_0(t);
    {
      t = j_75(t);
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_75);
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm q_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_25);
                }
              else
                {
                  t = q_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  t = option_wrap_4(t, l_75, default_usage_0, _id, m_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_73(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = xtc_io_1(t, y_73);
    return(t);
  }
  t = option_wrap_2(t, m_6, n_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm w_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, w_73);
  return(t);
}
ATerm io_pp_c_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      t = term_d_26;
      return(t);
    }
    ATerm a_7 (ATerm t)
    {
      ATerm t_47 = NULL;
      ATerm u_47 = NULL;
      t = term_e_26;
      {
        t = xtc_find_0(t);
        {
          t = remove_extension_0(t);
          {
            u_47 = t;
            if(((t_47 != NULL) && (t_47 != u_47)))
              _fail(u_47);
            else
              t_47 = u_47;
          }
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_47)), term_k_26);
      return(t);
    }
    t = xtc_transform_2(t, z_6, a_7);
    {
      ATerm b_7 (ATerm t)
      {
        t = term_l_26;
        return(t);
      }
      t = xtc_transform_1(t, b_7);
      {
        ATerm c_7 (ATerm t)
        {
          t = term_o_26;
          return(t);
        }
        t = xtc_transform_1(t, c_7);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, r_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_c_0(t);
  return(t);
}