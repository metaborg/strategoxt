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
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_l_25;
ATerm term_m_24;
ATerm term_a_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_m_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_c_18;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_x_15;
ATerm term_a_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_k_8;
ATerm term_a_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_l_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_p_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_d_9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_v_11);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_k_12);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_u_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_k_12);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_k_12);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_k_12);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__3, term_i_21, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm y_73 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm b_65 (ATerm));
ATerm init_0 (ATerm);
ATerm elem_1 (ATerm, ATerm j_64 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm u_64 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm n_64 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm w_85 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm remove_extension_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm b_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm a_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm c_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm union_1 (ATerm, ATerm y_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm l_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm t_58 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm x_73 (ATerm));
ATerm assert_1 (ATerm, ATerm t_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm a_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm k_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm a_63 (ATerm), ATerm b_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm n_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm o_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm crush_2 (ATerm, ATerm n_69 (ATerm), ATerm o_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_77 (ATerm));
ATerm Program_1 (ATerm, ATerm r_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm o_50 (ATerm), ATerm p_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_84 (ATerm));
ATerm map_1 (ATerm, ATerm b_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm r_73 (ATerm));
ATerm io_pp_c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, y_73, b_0);
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
  ATerm y_0 = NULL,d_1 = NULL,e_1 = NULL;
  y_0 = t;
  w_0 :
  if(match_cons(y_0, sym__2))
    {
      d_1 = ATgetArgument(y_0, 0);
      e_1 = ATgetArgument(y_0, 1);
      {
        t = not_null(e_1);
        {
          ATerm s_2 = t;
          int v_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_5);
            }
          else
            {
              t = s_2;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm x_5 = t;
                  int y_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(y_5);
                    }
                  else
                    {
                      t = x_5;
                      {
                        ATerm y_1 = NULL;
                        t = Cons_2(t, _id, c_0);
                        {
                          ATerm z_1 = NULL;
                          z_1 = t;
                          if(((y_1 != NULL) && (y_1 != z_1)))
                            _fail(z_1);
                          else
                            y_1 = z_1;
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_1)), not_null(d_1));
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
ATerm at_last_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm z_5 = t;
    int a_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = b_65(t);
        LocalPopChoice(a_6);
      }
    else
      {
        t = z_5;
        t = Cons_2(t, _id, y_2);
      }
    return(t);
  }
  t = y_2(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm elem_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = not_null(f_3);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm b_6;
            b_6 = t;
            {
              ATerm j_3 = NULL;
              ATerm k_3 = NULL;
              k_3 = t;
              if(((j_3 != NULL) && (j_3 != k_3)))
                _fail(k_3);
              else
                j_3 = k_3;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(j_3));
                t = j_64(t);
              }
            }
            t = b_6;
            return(t);
          }
          t = _one(t, e_0);
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
ATerm at_suffix_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm d_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_64(t);
        LocalPopChoice(f_6);
      }
    else
      {
        t = d_6;
        t = Cons_2(t, _id, n_3);
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm q_3 = NULL,s_3 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = Cons_2(t, n_64, _id);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm r_3 = NULL;
        r_3 = t;
        if(((q_3 != NULL) && (q_3 != r_3)))
          _fail(r_3);
        else
          q_3 = r_3;
        return(t);
      }
      t = Cons_2(t, _id, p_0);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, f_0);
  {
    ATerm t_3 = NULL;
    t_3 = t;
    if(((s_3 != NULL) && (s_3 != t_3)))
      _fail(t_3);
    else
      s_3 = t_3;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_3), not_null(q_3));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  ATerm i_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, w_85);
      LocalPopChoice(j_6);
    }
  else
    {
      t = i_6;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        h_4 = t;
        if(((g_4 != NULL) && (g_4 != h_4)))
          _fail(h_4);
        else
          g_4 = h_4;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), (ATerm) ATempty);
      }
    }
  {
    i_4 = t;
    c_4 :
    if(match_cons(i_4, sym__2))
      {
        j_4 = ATgetArgument(i_4, 0);
        m_4 = ATgetArgument(i_4, 1);
        d_4 :
        if(((ATgetType(j_4) == AT_LIST) && ATisEmpty(j_4)))
          {
            e_4 :
            if(((ATgetType(m_4) == AT_LIST) && ATisEmpty(m_4)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
                  {
                    n_4 = ATgetFirst((ATermList) m_4);
                    o_4 = (ATerm) ATgetNext((ATermList) m_4);
                    {
                      t = not_null(m_4);
                      t = list_tokenize_1(t, w_85);
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
            if(((ATgetType(j_4) == AT_LIST) && !(ATisEmpty(j_4))))
              {
                k_4 = ATgetFirst((ATermList) j_4);
                l_4 = (ATerm) ATgetNext((ATermList) j_4);
                f_4 :
                if(((ATgetType(m_4) == AT_LIST) && ATisEmpty(m_4)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(j_4));
                  }
                else
                  {
                    if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
                      {
                        n_4 = ATgetFirst((ATermList) m_4);
                        o_4 = (ATerm) ATgetNext((ATermList) m_4);
                        {
                          ATerm t_4 = NULL;
                          ATerm u_4 = NULL;
                          t = not_null(m_4);
                          {
                            t = list_tokenize_1(t, w_85);
                            {
                              u_4 = t;
                              if(((t_4 != NULL) && (t_4 != u_4)))
                                _fail(u_4);
                              else
                                t_4 = u_4;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(t_4)), not_null(j_4));
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
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    e_5 = t;
    d_5 :
    if(match_cons(e_5, sym__2))
      {
        f_5 = ATgetArgument(e_5, 0);
        g_5 = ATgetArgument(e_5, 1);
        {
          t = not_null(g_5);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm j_5 = NULL;
              ATerm k_5 = NULL;
              k_5 = t;
              if(((j_5 != NULL) && (j_5 != k_5)))
                _fail(k_5);
              else
                j_5 = k_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(f_5));
                t = elem_1(t, eq_0);
              }
              return(t);
            }
            t = list_tokenize_1(t, q_0);
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
  ATerm p_5 = NULL,r_5 = NULL;
  ATerm q_5 = NULL;
  q_5 = t;
  if(((p_5 != NULL) && (p_5 != q_5)))
    _fail(q_5);
  else
    p_5 = q_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_k_6), not_null(p_5));
    {
      t = string_tokenize_0(t);
      {
        t = at_last_1(t, Tl_0);
        {
          ATerm s_5 = NULL;
          s_5 = t;
          if(((r_5 != NULL) && (r_5 != s_5)))
            _fail(s_5);
          else
            r_5 = s_5;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_6, not_null(r_5));
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
  ATerm w_5 = NULL;
  w_5 = t;
  t = SSL_table_keys(not_null(w_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm e_6 = NULL;
        ATerm g_6 = NULL;
        e_6 = t;
        {
          ATerm h_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(e_6));
          {
            t = table_get_0(t);
            {
              h_6 = t;
              if(((g_6 != NULL) && (g_6 != h_6)))
                _fail(h_6);
              else
                g_6 = h_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(g_6));
        }
        return(t);
      }
      t = map_1(t, r_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6;
      s_6 = t;
      {
        ATerm m_6 = NULL;
        ATerm n_6 = NULL;
        t = term_t_6;
        {
          t = get_config_0(t);
          {
            n_6 = t;
            if(((m_6 != NULL) && (m_6 != n_6)))
              _fail(n_6);
            else
              m_6 = n_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), term_u_6);
          t = geq_0(t);
        }
      }
      t = s_6;
      t = b_59(t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_6;
  y_6 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(q_6));
      t = printnl_0(t);
    }
  }
  t = y_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm z_6 = NULL,a_7 = NULL;
  x_6 = t;
  {
    ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_6)));
    {
      t = table_get_0(t);
      {
        b_7 = t;
        v_6 :
        if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
          {
            c_7 = ATgetFirst((ATermList) b_7);
            f_7 = (ATerm) ATgetNext((ATermList) b_7);
            w_6 :
            if(match_cons(c_7, sym__2))
              {
                d_7 = ATgetArgument(c_7, 0);
                e_7 = ATgetArgument(c_7, 1);
                {
                  if(((z_6 != NULL) && (z_6 != d_7)))
                    _fail(d_7);
                  else
                    z_6 = d_7;
                  if(((a_7 != NULL) && (a_7 != e_7)))
                    _fail(e_7);
                  else
                    a_7 = e_7;
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
    t = not_null(a_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym__2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm r_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_7)));
        {
          t = table_get_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
              s_7 = t;
              k_7 :
              if(match_cons(s_7, sym__2))
                {
                  t_7 = ATgetArgument(s_7, 0);
                  u_7 = ATgetArgument(s_7, 1);
                  {
                    if(((o_7 != NULL) && (o_7 != t_7)))
                      _fail(t_7);
                    else
                      o_7 = t_7;
                    if(((r_7 != NULL) && (r_7 != u_7)))
                      _fail(u_7);
                    else
                      r_7 = u_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_0);
          }
        }
        t = not_null(r_7);
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
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_7;
      {
        t = table_get_0(t);
        {
          ATerm t_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, t_0);
        }
      }
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
ATerm if_verbose4_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7;
      x_7 = t;
      {
        ATerm y_7 = NULL;
        ATerm z_7 = NULL;
        t = term_t_6;
        {
          t = get_config_0(t);
          {
            z_7 = t;
            if(((y_7 != NULL) && (y_7 != z_7)))
              _fail(z_7);
            else
              y_7 = z_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), term_a_8);
          t = geq_0(t);
        }
      }
      t = x_7;
      t = a_59(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm b_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8;
      f_8 = t;
      {
        ATerm c_8 = NULL;
        ATerm d_8 = NULL;
        t = term_t_6;
        {
          t = get_config_0(t);
          {
            d_8 = t;
            if(((c_8 != NULL) && (c_8 != d_8)))
              _fail(d_8);
            else
              c_8 = d_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), term_k_8);
          t = geq_0(t);
        }
      }
      t = f_8;
      t = c_59(t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = b_8;
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
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym__2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      if(((i_8 != NULL) && (i_8 != j_8)))
        _fail(j_8);
      else
        i_8 = j_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
    {
      q_8 = ATgetFirst((ATermList) p_8);
      r_8 = (ATerm) ATgetNext((ATermList) p_8);
      {
        t = d_70(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm u_8 = NULL;
            u_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(u_8));
              t = c_70(t);
            }
            return(t);
          }
          t = fetch_1(t, u_0);
        }
        t = not_null(r_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        t = not_null(b_9);
        {
          ATerm g_9 (ATerm t)
          {
            ATerm l_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_9);
                LocalPopChoice(m_8);
              }
            else
              {
                t = l_8;
                {
                  ATerm n_8 = t;
                  int s_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_0 (ATerm t)
                      {
                        t = not_null(c_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_69, v_0);
                      t = g_9(t);
                      LocalPopChoice(s_8);
                    }
                  else
                    {
                      t = n_8;
                      t = Cons_2(t, _id, g_9);
                    }
                }
              }
            return(t);
          }
          t = g_9(t);
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
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym__3))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      o_9 = ATgetArgument(l_9, 2);
      {
        ATerm t_8;
        t_8 = t;
        {
          ATerm s_9 = NULL;
          ATerm t_9 = NULL,v_9 = NULL;
          ATerm u_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(n_9));
          {
            ATerm v_8 = t;
            int w_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_8);
              }
            else
              {
                t = v_8;
                t = (ATerm) ATempty;
              }
            {
              u_9 = t;
              if(((t_9 != NULL) && (t_9 != u_9)))
                _fail(u_9);
              else
                t_9 = u_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), not_null(o_9));
            {
              t = union_1(t, eq_0);
              {
                v_9 = t;
                if(((s_9 != NULL) && (s_9 != v_9)))
                  _fail(v_9);
                else
                  s_9 = v_9;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_9), not_null(n_9), not_null(s_9));
            t = table_put_0(t);
          }
        }
        t = t_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym__2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      {
        t = not_null(f_10);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
            i_10 = t;
            b_10 :
            if(match_cons(i_10, sym__2))
              {
                j_10 = ATgetArgument(i_10, 0);
                k_10 = ATgetArgument(i_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_10), not_null(j_10), not_null(k_10));
                  t = l_59(t);
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
ATerm xtc_read_0 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm t_10 = NULL;
  r_10 = t;
  {
    ATerm x_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(r_10)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_8;
      }
    {
      ATerm y_8;
      y_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_7, term_d_9, (ATerm) ATinsert(ATempty, not_null(r_10)));
        t = table_put_0(t);
      }
      t = y_8;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = term_e_9;
            return(t);
          }
          t = debug_1(t, a_1);
          return(t);
        }
        t = if_verbose4_1(t, z_0);
        {
          ATerm f_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(h_9);
            }
          else
            {
              t = f_9;
              t = (ATerm) ATempty;
            }
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = term_i_9;
                return(t);
              }
              t = say_1(t, c_1);
              return(t);
            }
            t = if_verbose6_1(t, b_1);
            {
              ATerm u_10 = NULL;
              u_10 = t;
              if(((t_10 != NULL) && (t_10 != u_10)))
                _fail(u_10);
              else
                t_10 = u_10;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(t_10));
                {
                  t = table_putlist_1(t, table_append_0);
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
                      t = (ATerm) ATmakeAppl(sym__3, term_h_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(r_10)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm i_1 (ATerm t)
                            {
                              t = term_i_9;
                              return(t);
                            }
                            t = say_1(t, i_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, h_1);
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
  ATerm y_10 = NULL;
  y_10 = t;
  t = SSL_getenv(not_null(y_10));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_9;
      t = get_config_0(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_9;
            t = getenv_0(t);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      t = term_z_9;
      return(t);
    }
    t = debug_1(t, k_1);
    return(t);
  }
  t = if_verbose5_1(t, j_1);
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm g_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_10;
          t = table_get_0(t);
          LocalPopChoice(h_10);
        }
      else
        {
          t = g_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = a_10;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = term_m_10;
          return(t);
        }
        t = debug_1(t, m_1);
        return(t);
      }
      t = if_verbose5_1(t, l_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_p_10;
          return(t);
        }
        t = debug_1(t, o_1);
        return(t);
      }
      t = if_verbose5_1(t, n_1);
      {
        t = xtc_load_0(t);
        {
          ATerm q_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = q_10;
              t = xtc_find_loc_0(t);
            }
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
      }
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), not_null(c_11)), term_v_10);
          {
            t = error_0(t);
            {
              ATerm r_1 (ATerm t)
              {
                t = term_h_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm s_1 (ATerm t)
                    {
                      t = term_x_10;
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL;
      h_11 = t;
      {
        if(((g_11 != NULL) && (g_11 != h_11)))
          _fail(h_11);
        else
          g_11 = h_11;
        t = SSL_ReadFromFile(not_null(g_11));
      }
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_b_11;
          return(t);
        }
        t = debug_1(t, t_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_stdin_0))
    {
      ATerm q_11 = NULL;
      ATerm r_11 = NULL;
      t = term_e_11;
      {
        t = ReadFromFile_0(t);
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
      t = not_null(q_11);
    }
  else
    {
      if(match_cons(o_11, sym_FILE_1))
        {
          p_11 = ATgetArgument(o_11, 0);
          {
            ATerm t_11 = NULL;
            ATerm u_11 = NULL;
            t = not_null(p_11);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_11 = t;
                  if(((t_11 != NULL) && (t_11 != u_11)))
                    _fail(u_11);
                  else
                    t_11 = u_11;
                }
              }
            }
            t = not_null(t_11);
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
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      t = SSL_WriteToBinaryFile(not_null(c_12), not_null(d_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm j_12 = NULL;
  ATerm l_12 = NULL;
  j_12 = t;
  {
    ATerm m_12 = NULL;
    t = xtc_new_file_0(t);
    {
      m_12 = t;
      {
        if(((l_12 != NULL) && (l_12 != m_12)))
          _fail(m_12);
        else
          l_12 = m_12;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(j_12));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(l_12);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_12));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, g_74, h_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  t = SSL_close_file(not_null(q_12));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      t = SSL_execvp(not_null(w_12), not_null(x_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_waitpid(not_null(c_13));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm m_13 = NULL;
  ATerm o_13 = NULL;
  m_13 = t;
  {
    t = fork_0(t);
    {
      o_13 = t;
      {
        ATerm f_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = NULL;
            q_13 = t;
            i_13 :
            if(match_int(q_13, 0))
              {
                t = not_null(m_13);
                t = t_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(i_11);
          }
        else
          {
            t = f_11;
            {
              ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
              t = not_null(o_13);
              {
                t = waitpid_0(t);
                {
                  r_13 = t;
                  k_13 :
                  if(match_cons(r_13, sym_WaitStatus_3))
                    {
                      s_13 = ATgetArgument(r_13, 0);
                      t_13 = ATgetArgument(r_13, 1);
                      u_13 = ATgetArgument(r_13, 2);
                      l_13 :
                      if(match_int(s_13, 0))
                        {
                          t = not_null(m_13);
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
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      {
        ATerm u_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(d_14));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, u_1);
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
ATerm xtc_command_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm j_14 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm k_14 = NULL;
    t = x_73(t);
    {
      t = xtc_find_0(t);
      {
        k_14 = t;
        if(((j_14 != NULL) && (j_14 != k_14)))
          _fail(k_14);
        else
          j_14 = k_14;
      }
    }
  }
  t = j_11;
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      m_14 = t;
      if(((l_14 != NULL) && (l_14 != m_14)))
        _fail(m_14);
      else
        l_14 = m_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(l_14));
        t = call_0(t);
      }
    }
    t = k_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
        ATerm l_11;
        l_11 = t;
        {
          ATerm c_15 = NULL;
          ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
          t = t_74(t);
          {
            c_15 = t;
            {
              if(((z_14 != NULL) && (z_14 != c_15)))
                _fail(c_15);
              else
                z_14 = c_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_14), not_null(v_14), not_null(w_14));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_11 = t;
                    int s_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), term_v_11);
                        t = table_get_0(t);
                        LocalPopChoice(s_11);
                      }
                    else
                      {
                        t = m_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_15 = t;
                      s_14 :
                      if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
                        {
                          e_15 = ATgetFirst((ATermList) d_15);
                          f_15 = (ATerm) ATgetNext((ATermList) d_15);
                          {
                            if(((a_15 != NULL) && (a_15 != e_15)))
                              _fail(e_15);
                            else
                              a_15 = e_15;
                            {
                              if(((b_15 != NULL) && (b_15 != f_15)))
                                _fail(f_15);
                              else
                                b_15 = f_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_14), term_v_11, (ATerm) ATinsert(CheckATermList(not_null(b_15)), (ATerm) ATinsert(CheckATermList(not_null(a_15)), not_null(v_14))));
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
ATerm obsolete_1 (ATerm t, ATerm a_85 (ATerm))
{
  ATerm w_11;
  w_11 = t;
  {
    t = a_85(t);
    {
      ATerm v_1 (ATerm t)
      {
        t = term_x_11;
        return(t);
      }
      t = debug_1(t, v_1);
    }
  }
  t = w_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
      p_15 = t;
      k_15 :
      if(match_cons(p_15, sym__2))
        {
          q_15 = ATgetArgument(p_15, 0);
          r_15 = ATgetArgument(p_15, 1);
          {
            if(((o_15 != NULL) && (o_15 != q_15)))
              _fail(q_15);
            else
              o_15 = q_15;
            if(((n_15 != NULL) && (n_15 != r_15)))
              _fail(r_15);
            else
              n_15 = r_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_11);
      t = SSL_open_file(not_null(o_15), not_null(n_15));
    }
  else
    {
      t = y_11;
      {
        ATerm s_15 = NULL;
        ATerm t_15 = NULL;
        ATerm w_1 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = obsolete_1(t, w_1);
        {
          s_15 = t;
          {
            if(((o_15 != NULL) && (o_15 != s_15)))
              _fail(s_15);
            else
              o_15 = s_15;
            {
              ATerm f_12;
              f_12 = t;
              {
                ATerm u_15 = NULL;
                t = term_g_12;
                {
                  u_15 = t;
                  if(((t_15 != NULL) && (t_15 != u_15)))
                    _fail(u_15);
                  else
                    t_15 = u_15;
                }
              }
              t = f_12;
              t = SSL_open_file(not_null(o_15), not_null(t_15));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm c_16 = NULL;
  a_16 = t;
  {
    ATerm h_12;
    h_12 = t;
    {
      ATerm d_16 = NULL;
      t = term_i_12;
      {
        d_16 = t;
        if(((c_16 != NULL) && (c_16 != d_16)))
          _fail(d_16);
        else
          c_16 = d_16;
      }
    }
    t = h_12;
    {
      t = SSL_open_file(not_null(a_16), not_null(c_16));
      t = SSL_close_file(not_null(a_16));
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
  ATerm h_16 = NULL;
  ATerm i_16 = NULL;
  t = term_k_12;
  {
    t = new_0(t);
    {
      i_16 = t;
      if(((h_16 != NULL) && (h_16 != i_16)))
        _fail(i_16);
      else
        h_16 = i_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), term_n_12);
    {
      t = conc_strings_0(t);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
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
  ATerm m_16 = NULL;
  t = new_file_0(t);
  {
    m_16 = t;
    {
      ATerm r_12;
      r_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_g_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_k_12);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_s_12;
                return(t);
              }
              t = assert_1(t, x_1);
            }
          }
        }
      }
      t = r_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym_stdin_0))
    {
      ATerm y_16 = NULL;
      ATerm z_16 = NULL;
      ATerm a_17 = NULL;
      t = xtc_new_file_0(t);
      {
        z_16 = t;
        {
          if(((y_16 != NULL) && (y_16 != z_16)))
            _fail(z_16);
          else
            y_16 = z_16;
          {
            ATerm b_17 = NULL;
            t = o_0(t);
            {
              b_17 = t;
              if(((a_17 != NULL) && (a_17 != b_17)))
                _fail(b_17);
              else
                a_17 = b_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_16)), term_t_12));
              {
                ATerm y_12 = t;
                int z_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(z_12);
                  }
                else
                  {
                    t = y_12;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(y_16);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_16));
    }
  else
    {
      if(match_cons(w_16, sym_FILE_1))
        {
          x_16 = ATgetArgument(w_16, 0);
          {
            ATerm d_17 = NULL;
            ATerm e_17 = NULL;
            t = not_null(x_16);
            {
              ATerm f_17 = NULL;
              t = xtc_new_file_0(t);
              {
                e_17 = t;
                {
                  if(((d_17 != NULL) && (d_17 != e_17)))
                    _fail(e_17);
                  else
                    d_17 = e_17;
                  {
                    ATerm g_17 = NULL;
                    t = o_0(t);
                    {
                      g_17 = t;
                      if(((f_17 != NULL) && (f_17 != g_17)))
                        _fail(g_17);
                      else
                        f_17 = g_17;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_17)), term_t_12), not_null(x_16)), term_a_13));
                      {
                        ATerm b_13 = t;
                        int d_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(d_13);
                          }
                        else
                          {
                            t = b_13;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(d_17);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
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
  ATerm r_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_stdin_0))
    {
      ATerm t_17 = NULL,v_17 = NULL;
      ATerm e_13;
      e_13 = t;
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
      t = e_13;
      {
        ATerm w_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(t_17));
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
ATerm FILE_1 (ATerm t, ATerm k_52 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_FILE_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      {
        ATerm j_18 = NULL,l_18 = NULL;
        ATerm k_18 = NULL;
        t = SSLgetAnnotations(not_null(f_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
        {
          t = not_null(g_18);
          {
            ATerm n_18 = NULL;
            t = k_52(t);
            {
              l_18 = t;
              {
                ATerm o_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_18)), not_null(j_18));
                {
                  o_18 = t;
                  if(((n_18 != NULL) && (n_18 != o_18)))
                    _fail(o_18);
                  else
                    n_18 = o_18;
                }
                t = not_null(n_18);
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
ATerm xtc_transform_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(j_13);
        }
      else
        {
          t = h_13;
          t = stdin_0(t);
        }
      LocalPopChoice(g_13);
      t = xtc_transform_file_2(t, z_73, a_74);
    }
  else
    {
      t = f_13;
      t = xtc_transform_term_2(t, z_73, a_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      t = SSL_copy(not_null(x_18), not_null(y_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_stderr_0))
    {
      ATerm i_19 = NULL,k_19 = NULL;
      ATerm n_13;
      n_13 = t;
      {
        ATerm j_19 = NULL;
        t = SSLgetAnnotations(not_null(g_19));
        {
          j_19 = t;
          if(((i_19 != NULL) && (i_19 != j_19)))
            _fail(j_19);
          else
            i_19 = j_19;
        }
      }
      t = n_13;
      {
        ATerm l_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(i_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
        t = not_null(k_19);
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
  ATerm z_19 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_stdout_0))
    {
      ATerm b_20 = NULL,d_20 = NULL;
      ATerm p_13;
      p_13 = t;
      {
        ATerm c_20 = NULL;
        t = SSLgetAnnotations(not_null(z_19));
        {
          c_20 = t;
          if(((b_20 != NULL) && (b_20 != c_20)))
            _fail(c_20);
          else
            b_20 = c_20;
        }
      }
      t = p_13;
      {
        ATerm g_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(b_20));
        {
          g_20 = t;
          if(((d_20 != NULL) && (d_20 != g_20)))
            _fail(g_20);
          else
            d_20 = g_20;
        }
        t = not_null(d_20);
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
  ATerm x_20 = NULL,y_20 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym_FILE_1))
    {
      y_20 = ATgetArgument(x_20, 0);
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_21 = NULL;
            ATerm b_21 = NULL;
            t = m_0(t);
            {
              b_21 = t;
              {
                if(((a_21 != NULL) && (a_21 != b_21)))
                  _fail(b_21);
                else
                  a_21 = b_21;
                {
                  ATerm x_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(a_21));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_20));
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm z_13 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_21 = NULL;
                  ATerm e_21 = NULL;
                  t = m_0(t);
                  {
                    e_21 = t;
                    {
                      if(((d_21 != NULL) && (d_21 != e_21)))
                        _fail(e_21);
                      else
                        d_21 = e_21;
                      {
                        ATerm f_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm g_14 = t;
                            int h_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(h_14);
                              }
                            else
                              {
                                t = g_14;
                                {
                                  ATerm i_14 = t;
                                  int n_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(n_14);
                                    }
                                  else
                                    {
                                      t = i_14;
                                      {
                                        ATerm f_21 = NULL;
                                        f_21 = t;
                                        if(((y_20 != NULL) && (y_20 != f_21)))
                                          _fail(f_21);
                                        else
                                          y_20 = f_21;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = f_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(d_21));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_20));
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm h_21 = NULL;
                    t = m_0(t);
                    {
                      h_21 = t;
                      if(((y_20 != NULL) && (y_20 != h_21)))
                        _fail(h_21);
                      else
                        y_20 = h_21;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_20));
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
  ATerm i_22 = NULL,k_22 = NULL,l_22 = NULL;
  i_22 = t;
  h_22 :
  if(((ATgetType(i_22) == AT_LIST) && !(ATisEmpty(i_22))))
    {
      k_22 = ATgetFirst((ATermList) i_22);
      l_22 = (ATerm) ATgetNext((ATermList) i_22);
      t = not_null(l_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym__2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm o_14;
        o_14 = t;
        {
          ATerm w_22 = NULL;
          ATerm x_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), not_null(t_22));
          {
            ATerm p_14 = t;
            int q_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(q_14);
              }
            else
              {
                t = p_14;
                t = (ATerm) ATempty;
              }
            {
              x_22 = t;
              if(((w_22 != NULL) && (w_22 != x_22)))
                _fail(x_22);
              else
                w_22 = x_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_22), not_null(t_22), not_null(w_22));
            t = table_put_0(t);
          }
        }
        t = o_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  ATerm r_14;
  r_14 = t;
  {
    ATerm h_23 = NULL;
    ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
    t = q_74(t);
    {
      h_23 = t;
      {
        if(((g_23 != NULL) && (g_23 != h_23)))
          _fail(h_23);
        else
          g_23 = h_23;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), term_v_11);
              t = table_get_0(t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_23 = t;
            d_23 :
            if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
              {
                j_23 = ATgetFirst((ATermList) i_23);
                k_23 = (ATerm) ATgetNext((ATermList) i_23);
                {
                  if(((f_23 != NULL) && (f_23 != j_23)))
                    _fail(j_23);
                  else
                    f_23 = j_23;
                  {
                    if(((e_23 != NULL) && (e_23 != k_23)))
                      _fail(k_23);
                    else
                      e_23 = k_23;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_23), term_v_11, not_null(e_23));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_23);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm l_23 = NULL;
                              l_23 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(l_23));
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
  t = r_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_23 = NULL;
  y_23 = t;
  t = SSL_remove(not_null(y_23));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_63(t);
      t = b_63(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        t = b_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm f_24 = NULL;
  ATerm i_15;
  i_15 = t;
  {
    ATerm g_24 = NULL;
    ATerm h_24 = NULL;
    t = p_74(t);
    {
      g_24 = t;
      {
        if(((f_24 != NULL) && (f_24 != g_24)))
          _fail(g_24);
        else
          f_24 = g_24;
        {
          ATerm i_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), term_v_11);
          {
            ATerm j_15 = t;
            int l_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_15);
              }
            else
              {
                t = j_15;
                t = (ATerm) ATempty;
              }
            {
              i_24 = t;
              if(((h_24 != NULL) && (h_24 != i_24)))
                _fail(i_24);
              else
                h_24 = i_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_24), term_v_11, (ATerm) ATinsert(CheckATermList(not_null(h_24)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL;
  ATerm b_2 (ATerm t)
  {
    t = term_s_12;
    return(t);
  }
  t = begin_scope_1(t, b_2);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm m_15;
      m_15 = t;
      {
        ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_15;
            t = table_get_0(t);
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          t_24 = t;
          q_24 :
          if(((ATgetType(t_24) == AT_LIST) && !(ATisEmpty(t_24))))
            {
              u_24 = ATgetFirst((ATermList) t_24);
              v_24 = (ATerm) ATgetNext((ATermList) t_24);
              {
                if(((s_24 != NULL) && (s_24 != u_24)))
                  _fail(u_24);
                else
                  s_24 = u_24;
                {
                  if(((r_24 != NULL) && (r_24 != v_24)))
                    _fail(v_24);
                  else
                    r_24 = v_24;
                  {
                    t = not_null(s_24);
                    {
                      ATerm d_2 (ATerm t)
                      {
                        ATerm y_15 = t;
                        int z_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(z_15);
                          }
                        else
                          {
                            t = y_15;
                            {
                            }
                          }
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
      t = m_15;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_s_12;
          return(t);
        }
        t = end_scope_1(t, e_2);
      }
      return(t);
    }
    t = restore_always_2(t, n_73, c_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm b_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL;
        ATerm z_24 = NULL;
        t = term_a_13;
        {
          t = get_config_0(t);
          {
            z_24 = t;
            if(((y_24 != NULL) && (y_24 != z_24)))
              _fail(z_24);
            else
              y_24 = z_24;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_24));
        LocalPopChoice(e_16);
      }
    else
      {
        t = b_16;
        t = term_e_11;
      }
    {
      t = o_73(t);
      {
        ATerm g_2 (ATerm t)
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_t_12;
              t = get_config_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = term_j_16;
            }
          return(t);
        }
        t = copy_to_1(t, g_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, f_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm c_25 = NULL;
    c_25 = t;
    b_25 :
    if(!(match_string(c_25, "-v")))
      {
        if(!(match_string(c_25, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_l_16;
    t = set_config_0(t);
    t = term_n_16;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = Option_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm f_25 = NULL;
    f_25 = t;
    d_25 :
    if(!(match_string(f_25, "-k")))
      {
        if(!(match_string(f_25, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm p_16;
    p_16 = t;
    {
      ATerm g_25 = NULL;
      ATerm h_25 = NULL;
      t = string_to_int_0(t);
      {
        h_25 = t;
        if(((g_25 != NULL) && (g_25 != h_25)))
          _fail(h_25);
        else
          g_25 = h_25;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_16, not_null(g_25));
        t = set_config_0(t);
      }
    }
    t = p_16;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_string_to_int(not_null(k_25));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm s_25 = NULL;
        s_25 = t;
        n_25 :
        if(!(match_string(s_25, "-S")))
          {
            if(!(match_string(s_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_c_17;
        t = set_config_0(t);
        t = term_h_17;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_i_17;
        return(t);
      }
      t = Option_3(t, n_2, o_2, p_2);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm t_25 = NULL;
              t_25 = t;
              o_25 :
              if(!(match_string(t_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              ATerm w_25 = NULL;
              ATerm l_17;
              l_17 = t;
              {
                ATerm u_25 = NULL;
                ATerm v_25 = NULL;
                t = string_to_int_0(t);
                {
                  v_25 = t;
                  if(((u_25 != NULL) && (u_25 != v_25)))
                    _fail(v_25);
                  else
                    u_25 = v_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_6, not_null(u_25));
                  t = set_config_0(t);
                }
              }
              t = l_17;
              {
                ATerm x_25 = NULL;
                x_25 = t;
                if(((w_25 != NULL) && (w_25 != x_25)))
                  _fail(x_25);
                else
                  w_25 = x_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_25));
              }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_m_17;
              return(t);
            }
            t = ArgOption_3(t, q_2, r_2, t_2);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm y_25 = NULL;
                y_25 = t;
                r_25 :
                if(!(match_string(y_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_o_17;
                t = set_config_0(t);
                t = term_p_17;
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                t = term_s_17;
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
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
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
    ATerm e_26 = NULL;
    e_26 = t;
    b_26 :
    if(!(match_string(e_26, "-o")))
      {
        if(!(match_string(e_26, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm h_26 = NULL;
    ATerm b_18;
    b_18 = t;
    {
      ATerm f_26 = NULL;
      ATerm g_26 = NULL;
      g_26 = t;
      if(((f_26 != NULL) && (f_26 != g_26)))
        _fail(g_26);
      else
        f_26 = g_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(f_26));
        t = set_config_0(t);
      }
    }
    t = b_18;
    {
      ATerm i_26 = NULL;
      i_26 = t;
      if(((h_26 != NULL) && (h_26 != i_26)))
        _fail(i_26);
      else
        h_26 = i_26;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_26));
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = ArgOption_3(t, x_2, z_2, a_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm d_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = d_18;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm m_26 = NULL;
          m_26 = t;
          l_26 :
          if(!(match_string(m_26, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_m_18;
          t = set_config_0(t);
          t = term_p_18;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_q_18;
          return(t);
        }
        t = Option_3(t, b_3, g_3, h_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  s_26 = t;
  q_26 :
  if(match_string(s_26, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
        {
          t_26 = ATgetFirst((ATermList) s_26);
          u_26 = (ATerm) ATgetNext((ATermList) s_26);
          r_26 :
          if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
            {
              v_26 = ATgetFirst((ATermList) u_26);
              w_26 = (ATerm) ATgetNext((ATermList) u_26);
              {
                ATerm a_27 = NULL;
                ATerm r_18;
                r_18 = t;
                {
                  t = not_null(t_26);
                  t = j_0(t);
                }
                t = r_18;
                {
                  ATerm b_27 = NULL;
                  t = not_null(v_26);
                  {
                    t = k_0(t);
                    {
                      b_27 = t;
                      if(((a_27 != NULL) && (a_27 != b_27)))
                        _fail(b_27);
                      else
                        a_27 = b_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_26)), not_null(a_27));
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
  ATerm i_3 (ATerm t)
  {
    ATerm i_27 = NULL;
    i_27 = t;
    f_27 :
    if(!(match_string(i_27, "-i")))
      {
        if(!(match_string(i_27, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm l_27 = NULL;
    ATerm s_18;
    s_18 = t;
    {
      ATerm j_27 = NULL;
      ATerm k_27 = NULL;
      k_27 = t;
      if(((j_27 != NULL) && (j_27 != k_27)))
        _fail(k_27);
      else
        j_27 = k_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(j_27));
        t = set_config_0(t);
      }
    }
    t = s_18;
    {
      ATerm m_27 = NULL;
      m_27 = t;
      if(((l_27 != NULL) && (l_27 != m_27)))
        _fail(m_27);
      else
        l_27 = m_27;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_27));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_t_18;
    return(t);
  }
  t = ArgOption_3(t, i_3, l_3, m_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = u_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm c_19;
  c_19 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm s_27 = NULL,t_27 = NULL;
      s_27 = t;
      q_27 :
      if(match_cons(s_27, sym_Program_1))
        {
          t_27 = ATgetArgument(s_27, 0);
          if(((r_27 != NULL) && (r_27 != t_27)))
            _fail(t_27);
          else
            r_27 = t_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_19), not_null(r_27)), term_d_19));
      {
        t = printnl_0(t);
        {
          t = term_h_19;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, term_m_19));
  {
    t = printnl_0(t);
    {
      t = term_h_19;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_TicksToSeconds(not_null(w_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym__2))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_28), not_null(d_28));
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = SSL_addr(not_null(c_28), not_null(d_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_70(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
        k_28 = t;
        j_28 :
        if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
          {
            l_28 = ATgetFirst((ATermList) k_28);
            m_28 = (ATerm) ATgetNext((ATermList) k_28);
            {
              ATerm p_28 = NULL;
              ATerm q_28 = NULL;
              t = not_null(m_28);
              {
                t = foldr_2(t, p_70, q_70);
                {
                  q_28 = t;
                  if(((p_28 != NULL) && (p_28 != q_28)))
                    _fail(q_28);
                  else
                    p_28 = q_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_28), not_null(p_28));
                t = q_70(t);
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
ATerm crush_2 (ATerm t, ATerm n_69 (ATerm), ATerm o_69 (ATerm))
{
  ATerm x_28 = NULL;
  ATerm a_29 = NULL;
  x_28 = t;
  {
    ATerm b_29 = NULL;
    ATerm d_29 = NULL,e_29 = NULL,h_29 = NULL;
    t = not_null(x_28);
    {
      b_29 = t;
      {
        t = SSL_explode_term(not_null(b_29));
        {
          d_29 = t;
          w_28 :
          if(match_cons(d_29, sym__2))
            {
              e_29 = ATgetArgument(d_29, 0);
              h_29 = ATgetArgument(d_29, 1);
              if(((a_29 != NULL) && (a_29 != h_29)))
                _fail(h_29);
              else
                a_29 = h_29;
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
      t = foldr_2(t, n_69, o_69);
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
    ATerm p_3 (ATerm t)
    {
      t = term_u_16;
      return(t);
    }
    t = crush_2(t, p_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym__2))
    {
      r_29 = ATgetArgument(q_29, 0);
      s_29 = ATgetArgument(q_29, 1);
      {
        ATerm r_19;
        r_19 = t;
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_29), not_null(s_29));
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              t = SSL_gtr(not_null(r_29), not_null(s_29));
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
  ATerm y_29 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL,a_30 = NULL,d_30 = NULL;
      z_29 = t;
      x_29 :
      if(match_cons(z_29, sym__2))
        {
          a_30 = ATgetArgument(z_29, 0);
          d_30 = ATgetArgument(z_29, 1);
          {
            if(((y_29 != NULL) && (y_29 != a_30)))
              _fail(a_30);
            else
              y_29 = a_30;
            if(((y_29 != NULL) && (y_29 != d_30)))
              _fail(d_30);
            else
              y_29 = d_30;
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
ATerm if_verbose1_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20;
      a_20 = t;
      {
        ATerm g_30 = NULL;
        ATerm h_30 = NULL;
        t = term_t_6;
        {
          t = get_config_0(t);
          {
            h_30 = t;
            if(((g_30 != NULL) && (g_30 != h_30)))
              _fail(h_30);
            else
              g_30 = h_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), term_h_19);
          t = geq_0(t);
        }
      }
      t = a_20;
      t = x_58(t);
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
  ATerm u_3 (ATerm t)
  {
    ATerm l_30 = NULL,n_30 = NULL;
    ATerm e_20;
    e_20 = t;
    {
      ATerm m_30 = NULL;
      t = run_time_0(t);
      {
        m_30 = t;
        if(((l_30 != NULL) && (l_30 != m_30)))
          _fail(m_30);
        else
          l_30 = m_30;
      }
    }
    t = e_20;
    {
      ATerm o_30 = NULL;
      t = term_f_20;
      {
        t = get_config_0(t);
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_20), not_null(l_30)), term_h_20), not_null(n_30)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_3);
  {
    t = term_u_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym_Version_0))
    {
      ATerm x_30 = NULL,z_30 = NULL;
      ATerm j_20;
      j_20 = t;
      {
        ATerm y_30 = NULL;
        t = SSLgetAnnotations(not_null(v_30));
        {
          y_30 = t;
          if(((x_30 != NULL) && (x_30 != y_30)))
            _fail(y_30);
          else
            x_30 = y_30;
        }
      }
      t = j_20;
      {
        ATerm a_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_30));
        {
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
        }
        t = not_null(z_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_3);
  t = w_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_31 = NULL;
  f_31 = t;
  t = SSL_table_create(not_null(f_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  {
    ATerm o_20;
    o_20 = t;
    {
      t = term_p_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_20, term_q_20, not_null(j_31));
          t = table_put_0(t);
        }
      }
    }
    t = o_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  t = SSL_table_destroy(not_null(n_31));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  t = SSL_exit(not_null(t_31));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,e_32 = NULL;
  x_31 = t;
  w_31 :
  if(((ATgetType(x_31) == AT_LIST) && ATisEmpty(x_31)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          y_31 = ATgetFirst((ATermList) x_31);
          e_32 = (ATerm) ATgetNext((ATermList) x_31);
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
  ATerm r_20;
  r_20 = t;
  {
    ATerm h_32 = NULL;
    ATerm m_32 = NULL;
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
          ATerm k_32 = NULL;
          ATerm l_32 = NULL;
          l_32 = t;
          if(((k_32 != NULL) && (k_32 != l_32)))
            _fail(l_32);
          else
            k_32 = l_32;
          t = (ATerm) ATinsert(ATempty, not_null(k_32));
        }
      }
    {
      m_32 = t;
      if(((h_32 != NULL) && (h_32 != m_32)))
        _fail(m_32);
      else
        h_32 = m_32;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, not_null(h_32));
      t = printnl_0(t);
    }
  }
  t = r_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  z_32 = t;
  w_32 :
  if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
    {
      x_32 = ATgetFirst((ATermList) z_32);
      y_32 = (ATerm) ATgetNext((ATermList) z_32);
      {
        ATerm c_33 = NULL;
        t = not_null(y_32);
        {
          ATerm u_20;
          u_20 = t;
          {
            ATerm n_33 = NULL,p_33 = NULL,s_33 = NULL;
            ATerm v_20;
            v_20 = t;
            {
              ATerm o_33 = NULL;
              t = i_0(t);
              {
                o_33 = t;
                if(((n_33 != NULL) && (n_33 != o_33)))
                  _fail(o_33);
                else
                  n_33 = o_33;
              }
            }
            t = v_20;
            {
              ATerm q_33 = NULL;
              t = not_null(x_32);
              {
                t = h_0(t);
                {
                  q_33 = t;
                  if(((p_33 != NULL) && (p_33 != q_33)))
                    _fail(q_33);
                  else
                    p_33 = q_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_33)), not_null(p_33));
                {
                  s_33 = t;
                  if(((c_33 != NULL) && (c_33 != s_33)))
                    _fail(s_33);
                  else
                    c_33 = s_33;
                }
              }
            }
          }
          t = u_20;
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(c_33);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_32) == AT_LIST) && ATisEmpty(z_32)))
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
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm t_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Program_1))
    {
      v_34 = ATgetArgument(t_34, 0);
      {
        ATerm y_34 = NULL,b_35 = NULL;
        ATerm z_34 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
        }
        {
          t = not_null(v_34);
          {
            ATerm i_35 = NULL;
            t = r_52(t);
            {
              b_35 = t;
              {
                ATerm j_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_35)), not_null(y_34));
                {
                  j_35 = t;
                  if(((i_35 != NULL) && (i_35 != j_35)))
                    _fail(j_35);
                  else
                    i_35 = j_35;
                }
                t = not_null(i_35);
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
  ATerm v_35 = NULL;
  ATerm z_20 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_35 = NULL;
      t = term_f_20;
      {
        t = get_config_0(t);
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
      }
      LocalPopChoice(c_21);
    }
  else
    {
      t = z_20;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            ATerm x_35 = NULL;
            x_35 = t;
            if(((v_35 != NULL) && (v_35 != x_35)))
              _fail(x_35);
            else
              v_35 = x_35;
            return(t);
          }
          t = Program_1(t, z_3);
          return(t);
        }
        t = fetch_1(t, y_3);
      }
    }
  {
    t = term_g_21;
    {
      t = echo_0(t);
      {
        t = term_k_21;
        {
          t = table_get_0(t);
          {
            ATerm a_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, a_4);
            {
              ATerm b_4 (ATerm t)
              {
                ATerm y_35 = NULL;
                ATerm z_35 = NULL;
                z_35 = t;
                if(((y_35 != NULL) && (y_35 != z_35)))
                  _fail(z_35);
                else
                  y_35 = z_35;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_35)), term_l_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, b_4);
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
  ATerm m_21;
  m_21 = t;
  {
    ATerm e_36 = NULL;
    ATerm f_36 = NULL;
    f_36 = t;
    if(((e_36 != NULL) && (e_36 != f_36)))
      _fail(f_36);
    else
      e_36 = f_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, not_null(e_36)));
      t = printnl_0(t);
    }
  }
  t = m_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm n_21;
  n_21 = t;
  {
    t = u_84(t);
    t = debug_0(t);
  }
  t = n_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm m_36 = NULL,n_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Undefined_1))
    {
      n_36 = ATgetArgument(m_36, 0);
      {
        ATerm q_36 = NULL,s_36 = NULL;
        ATerm r_36 = NULL;
        t = SSLgetAnnotations(not_null(m_36));
        {
          r_36 = t;
          if(((q_36 != NULL) && (q_36 != r_36)))
            _fail(r_36);
          else
            q_36 = r_36;
        }
        {
          t = not_null(n_36);
          {
            ATerm u_36 = NULL;
            t = s_52(t);
            {
              s_36 = t;
              {
                ATerm v_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_36)), not_null(q_36));
                {
                  v_36 = t;
                  if(((u_36 != NULL) && (u_36 != v_36)))
                    _fail(v_36);
                  else
                    u_36 = v_36;
                }
                t = not_null(u_36);
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
ATerm fetch_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm a_37 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_64, _id);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = Cons_2(t, _id, a_37);
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_76 (ATerm))
{
  t = fetch_1(t, d_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Help_0))
    {
      ATerm h_37 = NULL,j_37 = NULL;
      ATerm q_21;
      q_21 = t;
      {
        ATerm i_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          i_37 = t;
          if(((h_37 != NULL) && (h_37 != i_37)))
            _fail(i_37);
          else
            h_37 = i_37;
        }
      }
      t = q_21;
      {
        ATerm k_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_37));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
        t = not_null(j_37);
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
  ATerm p_37 = NULL;
  p_37 = t;
  t = SSL_implode_string(not_null(p_37));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
        v_37 = t;
        t_37 :
        if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
          {
            w_37 = ATgetFirst((ATermList) v_37);
            x_37 = (ATerm) ATgetNext((ATermList) v_37);
            {
              t = not_null(w_37);
              {
                ATerm p_4 (ATerm t)
                {
                  t = not_null(x_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_4);
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
  ATerm j_38 = NULL;
  ATerm l_38 = NULL;
  j_38 = t;
  {
    ATerm m_38 = NULL;
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    t = not_null(j_38);
    {
      m_38 = t;
      {
        t = SSL_explode_term(not_null(m_38));
        {
          o_38 = t;
          h_38 :
          if(match_cons(o_38, sym__2))
            {
              p_38 = ATgetArgument(o_38, 0);
              q_38 = ATgetArgument(o_38, 1);
              i_38 :
              if(match_string(p_38, ""))
                {
                  if(((l_38 != NULL) && (l_38 != q_38)))
                    _fail(q_38);
                  else
                    l_38 = q_38;
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
      t = not_null(l_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm u_38 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_38);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          t = Nil_0(t);
          t = q_64(t);
        }
      }
    return(t);
  }
  t = u_38(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,b_39 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym__2))
    {
      y_38 = ATgetArgument(x_38, 0);
      b_39 = ATgetArgument(x_38, 1);
      {
        t = not_null(y_38);
        {
          ATerm q_4 (ATerm t)
          {
            t = not_null(b_39);
            return(t);
          }
          t = at_end_1(t, q_4);
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
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_39 = NULL;
  h_39 = t;
  t = SSL_explode_string(not_null(h_39));
  return(t);
}
ATerm _2 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym__2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        ATerm w_39 = NULL,y_39 = NULL;
        ATerm x_39 = NULL;
        t = SSLgetAnnotations(not_null(q_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = not_null(r_39);
          {
            ATerm a_40 = NULL;
            t = o_50(t);
            {
              y_39 = t;
              {
                t = not_null(s_39);
                {
                  ATerm c_40 = NULL;
                  t = p_50(t);
                  {
                    a_40 = t;
                    {
                      ATerm d_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_39), not_null(a_40)), not_null(w_39));
                      {
                        d_40 = t;
                        if(((c_40 != NULL) && (c_40 != d_40)))
                          _fail(d_40);
                        else
                          c_40 = d_40;
                      }
                      t = not_null(c_40);
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
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      {
        ATerm z_21;
        z_21 = t;
        t = SSL_printnl(not_null(m_40), not_null(n_40));
        t = z_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm a_22;
  a_22 = t;
  {
    ATerm t_40 = NULL,v_40 = NULL;
    ATerm b_22;
    b_22 = t;
    {
      ATerm u_40 = NULL;
      t = t_84(t);
      {
        u_40 = t;
        if(((t_40 != NULL) && (t_40 != u_40)))
          _fail(u_40);
        else
          t_40 = u_40;
      }
    }
    t = b_22;
    {
      ATerm w_40 = NULL;
      w_40 = t;
      if(((v_40 != NULL) && (v_40 != w_40)))
        _fail(w_40);
      else
        v_40 = w_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_40)), not_null(t_40)));
        t = printnl_0(t);
      }
    }
  }
  t = a_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm z_40 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = Cons_2(t, b_64, z_40);
      }
    return(t);
  }
  t = z_40(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_41 = NULL;
  b_41 = t;
  t = SSL_is_string(not_null(b_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm g_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              ATerm m_22 = t;
              int n_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(n_22);
                }
              else
                {
                  t = m_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_4);
            LocalPopChoice(j_22);
          }
        else
          {
            t = g_22;
            {
              ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
              k_41 = t;
              j_41 :
              if(match_cons(k_41, sym_Path_1))
                {
                  l_41 = ATgetArgument(k_41, 0);
                  t = not_null(l_41);
                }
              else
                {
                  if(match_cons(k_41, sym_Var_1))
                    {
                      l_41 = ATgetArgument(k_41, 0);
                      {
                        t = not_null(l_41);
                        {
                          ATerm o_22 = t;
                          int p_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_22);
                            }
                          else
                            {
                              t = o_22;
                              {
                                ATerm s_4 (ATerm t)
                                {
                                  t = term_u_22;
                                  return(t);
                                }
                                t = debug_1(t, s_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_41, sym_Prefix_2))
                        {
                          l_41 = ATgetArgument(k_41, 0);
                          m_41 = ATgetArgument(k_41, 1);
                          {
                            ATerm r_41 = NULL,t_41 = NULL;
                            ATerm v_22;
                            v_22 = t;
                            {
                              ATerm s_41 = NULL;
                              t = not_null(l_41);
                              {
                                t = eval_config_0(t);
                                {
                                  s_41 = t;
                                  if(((r_41 != NULL) && (r_41 != s_41)))
                                    _fail(s_41);
                                  else
                                    r_41 = s_41;
                                }
                              }
                            }
                            t = v_22;
                            {
                              ATerm u_41 = NULL;
                              t = not_null(m_41);
                              {
                                t = eval_config_0(t);
                                {
                                  u_41 = t;
                                  if(((t_41 != NULL) && (t_41 != u_41)))
                                    _fail(u_41);
                                  else
                                    t_41 = u_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(t_41));
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
  ATerm c_42 = NULL;
  c_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_22, not_null(c_42));
    {
      t = table_get_0(t);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm b_23;
              b_23 = t;
              {
                ATerm e_42 = NULL;
                ATerm f_42 = NULL;
                f_42 = t;
                if(((e_42 != NULL) && (e_42 != f_42)))
                  _fail(f_42);
                else
                  e_42 = f_42;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_y_22, not_null(c_42), not_null(e_42));
                  t = table_put_0(t);
                }
              }
              t = b_23;
            }
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm c_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_62(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = c_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym__2))
    {
      l_42 = ATgetArgument(k_42, 0);
      m_42 = ATgetArgument(k_42, 1);
      t = SSL_table_get(not_null(l_42), not_null(m_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym__3))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      x_42 = ATgetArgument(u_42, 2);
      {
        ATerm n_23;
        n_23 = t;
        {
          ATerm b_43 = NULL;
          ATerm c_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), not_null(w_42));
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = (ATerm) ATempty;
              }
            {
              c_43 = t;
              if(((b_43 != NULL) && (b_43 != c_43)))
                _fail(c_43);
              else
                b_43 = c_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_42), not_null(w_42), (ATerm) ATinsert(CheckATermList(not_null(b_43)), not_null(x_42)));
            t = table_put_0(t);
          }
        }
        t = n_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm g_43 = NULL;
  ATerm h_43 = NULL;
  t = term_k_12;
  {
    t = i_77(t);
    {
      h_43 = t;
      if(((g_43 != NULL) && (g_43 != h_43)))
        _fail(h_43);
      else
        g_43 = h_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_21, term_j_21, not_null(g_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_string(n_43, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(n_43) == AT_LIST) && !(ATisEmpty(n_43))))
        {
          o_43 = ATgetFirst((ATermList) n_43);
          p_43 = (ATerm) ATgetNext((ATermList) n_43);
          {
            ATerm s_43 = NULL;
            ATerm q_23;
            q_23 = t;
            {
              t = not_null(o_43);
              t = a_0(t);
            }
            t = q_23;
            {
              ATerm t_43 = NULL;
              t = term_k_12;
              {
                t = d_0(t);
                {
                  t_43 = t;
                  if(((s_43 != NULL) && (s_43 != t_43)))
                    _fail(t_43);
                  else
                    s_43 = t_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_43)), not_null(s_43));
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
  ATerm v_4 (ATerm t)
  {
    ATerm y_43 = NULL;
    y_43 = t;
    x_43 :
    if(!(match_string(y_43, "--help")))
      {
        if(!(match_string(y_43, "-h")))
          {
            if(!(match_string(y_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_s_23;
    {
      t = set_config_0(t);
      t = term_t_23;
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_u_23;
    return(t);
  }
  t = Option_3(t, v_4, w_4, x_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
    {
      c_44 = ATgetFirst((ATermList) b_44);
      d_44 = (ATerm) ATgetNext((ATermList) b_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  m_44 :
  if(((ATgetType(n_44) == AT_LIST) && !(ATisEmpty(n_44))))
    {
      o_44 = ATgetFirst((ATermList) n_44);
      p_44 = (ATerm) ATgetNext((ATermList) n_44);
      {
        ATerm t_44 = NULL,z_44 = NULL;
        ATerm u_44 = NULL;
        t = SSLgetAnnotations(not_null(n_44));
        {
          u_44 = t;
          if(((t_44 != NULL) && (t_44 != u_44)))
            _fail(u_44);
          else
            t_44 = u_44;
        }
        {
          t = not_null(o_44);
          {
            ATerm b_45 = NULL;
            t = x_51(t);
            {
              z_44 = t;
              {
                t = not_null(p_44);
                {
                  ATerm f_45 = NULL;
                  t = y_51(t);
                  {
                    b_45 = t;
                    {
                      ATerm g_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_45)), not_null(z_44)), not_null(t_44));
                      {
                        g_45 = t;
                        if(((f_45 != NULL) && (f_45 != g_45)))
                          _fail(g_45);
                        else
                          f_45 = g_45;
                      }
                      t = not_null(f_45);
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
  ATerm z_45 = NULL;
  z_45 = t;
  y_45 :
  if(((ATgetType(z_45) == AT_LIST) && ATisEmpty(z_45)))
    {
      {
        ATerm b_46 = NULL,d_46 = NULL;
        ATerm v_23;
        v_23 = t;
        {
          ATerm c_46 = NULL;
          t = SSLgetAnnotations(not_null(z_45));
          {
            c_46 = t;
            if(((b_46 != NULL) && (b_46 != c_46)))
              _fail(c_46);
            else
              b_46 = c_46;
          }
        }
        t = v_23;
        {
          ATerm e_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_46));
          {
            e_46 = t;
            if(((d_46 != NULL) && (d_46 != e_46)))
              _fail(e_46);
            else
              d_46 = e_46;
          }
          t = not_null(d_46);
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
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym__2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_22, not_null(l_46), not_null(m_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm w_23;
  w_23 = t;
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_24;
        t = g_77(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        {
        }
      }
  }
  t = w_23;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm u_46 = NULL;
      ATerm b_24;
      b_24 = t;
      {
        ATerm s_46 = NULL;
        ATerm t_46 = NULL;
        t_46 = t;
        if(((s_46 != NULL) && (s_46 != t_46)))
          _fail(t_46);
        else
          s_46 = t_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_20, not_null(s_46));
          t = set_config_0(t);
        }
      }
      t = b_24;
      {
        ATerm v_46 = NULL;
        v_46 = t;
        if(((u_46 != NULL) && (u_46 != v_46)))
          _fail(v_46);
        else
          u_46 = v_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_46));
      }
      return(t);
    }
    ATerm z_4 (ATerm t)
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_24);
            }
          else
            {
              t = e_24;
              {
                t = g_77(t);
                t = Cons_2(t, _id, z_4);
              }
            }
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_4, z_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
    e_47 = t;
    a_47 :
    if(match_cons(e_47, sym__3))
      {
        f_47 = ATgetArgument(e_47, 0);
        g_47 = ATgetArgument(e_47, 1);
        h_47 = ATgetArgument(e_47, 2);
        {
          if(((b_47 != NULL) && (b_47 != f_47)))
            _fail(f_47);
          else
            b_47 = f_47;
          {
            if(((c_47 != NULL) && (c_47 != g_47)))
              _fail(g_47);
            else
              c_47 = g_47;
            {
              if(((d_47 != NULL) && (d_47 != h_47)))
                _fail(h_47);
              else
                d_47 = h_47;
              t = SSL_table_put(not_null(b_47), not_null(c_47), not_null(d_47));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm k_47 = NULL;
  ATerm l_24;
  l_24 = t;
  {
    t = term_m_24;
    t = table_put_0(t);
  }
  t = l_24;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_77(t);
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_5);
    {
      ATerm p_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_24;
          x_24 = t;
          {
            ATerm a_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_23;
                t = get_config_0(t);
                LocalPopChoice(e_25);
              }
            else
              {
                t = a_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = x_24;
          {
            t = system_usage_0(t);
            {
              t = term_u_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(w_24);
        }
      else
        {
          t = p_24;
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm l_47 = NULL;
                    l_47 = t;
                    if(((k_47 != NULL) && (k_47 != l_47)))
                      _fail(l_47);
                    else
                      k_47 = l_47;
                    return(t);
                  }
                  t = Undefined_1(t, c_5);
                  return(t);
                }
                t = fetch_1(t, b_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_47)), term_l_25);
                    return(t);
                  }
                  t = say_1(t, h_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_19;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
                {
                }
              }
          }
        }
      {
        ATerm m_25;
        m_25 = t;
        {
          t = term_i_21;
          t = table_destroy_0(t);
        }
        t = m_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  t = parse_options_1(t, c_75);
  {
    t = store_options_0(t);
    {
      t = e_75(t);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_75);
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  t = option_wrap_4(t, g_75, default_usage_0, _id, h_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_73(t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = xtc_io_1(t, t_73);
    return(t);
  }
  t = option_wrap_2(t, i_5, l_5);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm r_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, r_73);
  return(t);
}
ATerm io_pp_c_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      t = term_j_26;
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm o_47 = NULL;
      ATerm p_47 = NULL;
      t = term_k_26;
      {
        t = xtc_find_0(t);
        {
          t = remove_extension_0(t);
          {
            p_47 = t;
            if(((o_47 != NULL) && (o_47 != p_47)))
              _fail(p_47);
            else
              o_47 = p_47;
          }
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_47)), term_n_26);
      return(t);
    }
    t = xtc_transform_2(t, n_5, o_5);
    {
      ATerm t_5 (ATerm t)
      {
        t = term_o_26;
        return(t);
      }
      t = xtc_transform_1(t, t_5);
      {
        ATerm u_5 (ATerm t)
        {
          t = term_p_26;
          return(t);
        }
        t = xtc_transform_1(t, u_5);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, m_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_c_0(t);
  return(t);
}
