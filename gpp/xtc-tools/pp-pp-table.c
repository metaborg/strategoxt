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
ATerm term_r_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_x_24;
ATerm term_h_24;
ATerm term_r_23;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_j_7;
ATerm term_w_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_x_5;
ATerm term_s_5;
ATerm term_n_5;
ATerm term_i_5;
void init_constant_terms (void)
{
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_q_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_b_8);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_n_10);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_i_11);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_n_5, term_u_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_i_11);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_i_11);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_i_11);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__3, term_g_20, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.pp.af", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox_format_0 (ATerm);
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
ATerm obsolete_1 (ATerm, ATerm b_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
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
ATerm say_1 (ATerm, ATerm v_84 (ATerm));
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
ATerm debug_1 (ATerm, ATerm u_84 (ATerm));
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
ATerm io_pp_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_abox2text_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_i_5;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
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
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
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
  t = term_n_5;
  {
    ATerm o_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(r_5);
      }
    else
      {
        t = o_5;
        t = term_s_5;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_s_5);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_2)), term_n_5);
  return(t);
}
ATerm xtc_abox_format_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_x_5;
    return(t);
  }
  t = xtc_transform_2(t, c_0, pass_verbose_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  t = SSL_table_keys(not_null(j_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_3 = NULL;
  p_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm r_3 = NULL;
        ATerm t_3 = NULL;
        r_3 = t;
        {
          ATerm u_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), not_null(r_3));
          {
            t = table_get_0(t);
            {
              u_3 = t;
              if(((t_3 != NULL) && (t_3 != u_3)))
                _fail(u_3);
              else
                t_3 = u_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), not_null(t_3));
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
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6;
      a_6 = t;
      {
        ATerm z_3 = NULL;
        ATerm a_4 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            a_4 = t;
            if(((z_3 != NULL) && (z_3 != a_4)))
              _fail(a_4);
            else
              z_3 = a_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), term_f_6);
          t = geq_0(t);
        }
      }
      t = a_6;
      t = c_59(t);
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
ATerm error_0 (ATerm t)
{
  ATerm g_6;
  g_6 = t;
  {
    ATerm d_4 = NULL;
    ATerm e_4 = NULL;
    e_4 = t;
    if(((d_4 != NULL) && (d_4 != e_4)))
      _fail(e_4);
    else
      d_4 = e_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(d_4));
      t = printnl_0(t);
    }
  }
  t = g_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL,n_4 = NULL;
  k_4 = t;
  {
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_4)));
    {
      t = table_get_0(t);
      {
        o_4 = t;
        i_4 :
        if(((ATgetType(o_4) == AT_LIST) && !(ATisEmpty(o_4))))
          {
            p_4 = ATgetFirst((ATermList) o_4);
            s_4 = (ATerm) ATgetNext((ATermList) o_4);
            j_4 :
            if(match_cons(p_4, sym__2))
              {
                q_4 = ATgetArgument(p_4, 0);
                r_4 = ATgetArgument(p_4, 1);
                {
                  if(((m_4 != NULL) && (m_4 != q_4)))
                    _fail(q_4);
                  else
                    m_4 = q_4;
                  if(((n_4 != NULL) && (n_4 != r_4)))
                    _fail(r_4);
                  else
                    n_4 = r_4;
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
    t = not_null(n_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym__2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      {
        ATerm e_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_5)));
        {
          t = table_get_0(t);
          {
            ATerm p_0 (ATerm t)
            {
              ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
              f_5 = t;
              x_4 :
              if(match_cons(f_5, sym__2))
                {
                  g_5 = ATgetArgument(f_5, 0);
                  h_5 = ATgetArgument(f_5, 1);
                  {
                    if(((b_5 != NULL) && (b_5 != g_5)))
                      _fail(g_5);
                    else
                      b_5 = g_5;
                    if(((e_5 != NULL) && (e_5 != h_5)))
                      _fail(h_5);
                    else
                      e_5 = h_5;
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
        t = not_null(e_5);
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
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_6;
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
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm s_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6;
      v_6 = t;
      {
        ATerm l_5 = NULL;
        ATerm m_5 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            m_5 = t;
            if(((l_5 != NULL) && (l_5 != m_5)))
              _fail(m_5);
            else
              l_5 = m_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_w_6);
          t = geq_0(t);
        }
      }
      t = v_6;
      t = b_59(t);
      LocalPopChoice(u_6);
    }
  else
    {
      t = s_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_7;
      e_7 = t;
      {
        ATerm p_5 = NULL;
        ATerm q_5 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            q_5 = t;
            if(((p_5 != NULL) && (p_5 != q_5)))
              _fail(q_5);
            else
              p_5 = q_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_j_7);
          t = geq_0(t);
        }
      }
      t = e_7;
      t = d_59(t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
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
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      if(((v_5 != NULL) && (v_5 != w_5)))
        _fail(w_5);
      else
        v_5 = w_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
    {
      d_6 = ATgetFirst((ATermList) c_6);
      e_6 = (ATerm) ATgetNext((ATermList) c_6);
      {
        t = e_70(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm h_6 = NULL;
            h_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(h_6));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, r_0);
        }
        t = not_null(e_6);
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      {
        t = not_null(o_6);
        {
          ATerm t_6 (ATerm t)
          {
            ATerm k_7 = t;
            int l_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_6);
                LocalPopChoice(l_7);
              }
            else
              {
                t = k_7;
                {
                  ATerm m_7 = t;
                  int n_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = not_null(p_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, s_0);
                      t = t_6(t);
                      LocalPopChoice(n_7);
                    }
                  else
                    {
                      t = m_7;
                      t = Cons_2(t, _id, t_6);
                    }
                }
              }
            return(t);
          }
          t = t_6(t);
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
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym__3))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      b_7 = ATgetArgument(y_6, 2);
      {
        ATerm t_7;
        t_7 = t;
        {
          ATerm f_7 = NULL;
          ATerm g_7 = NULL,i_7 = NULL;
          ATerm h_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(a_7));
          {
            ATerm u_7 = t;
            int y_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_7);
              }
            else
              {
                t = u_7;
                t = (ATerm) ATempty;
              }
            {
              h_7 = t;
              if(((g_7 != NULL) && (g_7 != h_7)))
                _fail(h_7);
              else
                g_7 = h_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(b_7));
            {
              t = union_1(t, eq_0);
              {
                i_7 = t;
                if(((f_7 != NULL) && (f_7 != i_7)))
                  _fail(i_7);
                else
                  f_7 = i_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_6), not_null(a_7), not_null(f_7));
            t = table_put_0(t);
          }
        }
        t = t_7;
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
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym__2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      {
        t = not_null(s_7);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
            v_7 = t;
            o_7 :
            if(match_cons(v_7, sym__2))
              {
                w_7 = ATgetArgument(v_7, 0);
                x_7 = ATgetArgument(v_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), not_null(w_7), not_null(x_7));
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
  ATerm e_8 = NULL;
  ATerm g_8 = NULL;
  e_8 = t;
  {
    ATerm z_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_8)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_7;
      }
    {
      ATerm a_8;
      a_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_b_8, (ATerm) ATinsert(ATempty, not_null(e_8)));
        t = table_put_0(t);
      }
      t = a_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_c_8;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm d_8 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(f_8);
            }
          else
            {
              t = d_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_i_8;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm h_8 = NULL;
              h_8 = t;
              if(((g_8 != NULL) && (g_8 != h_8)))
                _fail(h_8);
              else
                g_8 = h_8;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(g_8));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_j_8;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_j_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_8)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_i_8;
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
  ATerm l_8 = NULL;
  l_8 = t;
  t = SSL_getenv(not_null(l_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_8;
      t = get_config_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = k_8;
      {
        ATerm o_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_8;
            t = getenv_0(t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = o_8;
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
      t = term_v_8;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_8;
          t = table_get_0(t);
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = w_8;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_f_9;
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_k_9;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
      {
        t = xtc_load_0(t);
        {
          ATerm l_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(m_9);
            }
          else
            {
              t = l_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = term_k_9;
                return(t);
              }
              t = debug_1(t, m_1);
              return(t);
            }
            t = if_verbose5_1(t, l_1);
          }
        }
      }
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm p_8 = NULL;
        ATerm q_8 = NULL;
        q_8 = t;
        if(((p_8 != NULL) && (p_8 != q_8)))
          _fail(q_8);
        else
          p_8 = q_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_9), not_null(p_8)), term_r_9);
          {
            t = error_0(t);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_j_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = term_t_9;
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
  ATerm t_8 = NULL;
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL;
      u_8 = t;
      {
        if(((t_8 != NULL) && (t_8 != u_8)))
          _fail(u_8);
        else
          t_8 = u_8;
        t = SSL_ReadFromFile(not_null(t_8));
      }
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm p_1 (ATerm t)
        {
          t = term_x_9;
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
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_stdin_0))
    {
      ATerm d_9 = NULL;
      ATerm e_9 = NULL;
      t = term_a_10;
      {
        t = ReadFromFile_0(t);
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
      }
      t = not_null(d_9);
    }
  else
    {
      if(match_cons(b_9, sym_FILE_1))
        {
          c_9 = ATgetArgument(b_9, 0);
          {
            ATerm g_9 = NULL;
            ATerm h_9 = NULL;
            t = not_null(c_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  h_9 = t;
                  if(((g_9 != NULL) && (g_9 != h_9)))
                    _fail(h_9);
                  else
                    g_9 = h_9;
                }
              }
            }
            t = not_null(g_9);
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
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      t = SSL_WriteToBinaryFile(not_null(p_9), not_null(q_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm w_9 = NULL;
  ATerm y_9 = NULL;
  w_9 = t;
  {
    ATerm z_9 = NULL;
    t = xtc_new_file_0(t);
    {
      z_9 = t;
      {
        if(((y_9 != NULL) && (y_9 != z_9)))
          _fail(z_9);
        else
          y_9 = z_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(w_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(y_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_9));
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
  ATerm d_10 = NULL;
  d_10 = t;
  t = SSL_close_file(not_null(d_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym__2))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      t = SSL_execvp(not_null(j_10), not_null(k_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = SSL_waitpid(not_null(p_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm z_10 = NULL;
  ATerm b_11 = NULL;
  z_10 = t;
  {
    t = fork_0(t);
    {
      b_11 = t;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_11 = NULL;
            d_11 = t;
            v_10 :
            if(match_int(d_11, 0))
              {
                t = not_null(z_10);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
              t = not_null(b_11);
              {
                t = waitpid_0(t);
                {
                  e_11 = t;
                  x_10 :
                  if(match_cons(e_11, sym_WaitStatus_3))
                    {
                      f_11 = ATgetArgument(e_11, 0);
                      g_11 = ATgetArgument(e_11, 1);
                      h_11 = ATgetArgument(e_11, 2);
                      y_10 :
                      if(match_int(f_11, 0))
                        {
                          t = not_null(z_10);
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym__2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm q_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), not_null(q_11));
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
  ATerm w_11 = NULL;
  ATerm e_10;
  e_10 = t;
  {
    ATerm x_11 = NULL;
    t = y_73(t);
    {
      t = xtc_find_0(t);
      {
        x_11 = t;
        if(((w_11 != NULL) && (w_11 != x_11)))
          _fail(x_11);
        else
          w_11 = x_11;
      }
    }
  }
  t = e_10;
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm y_11 = NULL;
      ATerm z_11 = NULL;
      z_11 = t;
      if(((y_11 != NULL) && (y_11 != z_11)))
        _fail(z_11);
      else
        y_11 = z_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(y_11));
        t = call_0(t);
      }
    }
    t = f_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym__2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
        ATerm g_10;
        g_10 = t;
        {
          ATerm p_12 = NULL;
          ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
          t = u_74(t);
          {
            p_12 = t;
            {
              if(((m_12 != NULL) && (m_12 != p_12)))
                _fail(p_12);
              else
                m_12 = p_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_12), not_null(i_12), not_null(j_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_n_10);
                        t = table_get_0(t);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_12 = t;
                      f_12 :
                      if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
                        {
                          r_12 = ATgetFirst((ATermList) q_12);
                          s_12 = (ATerm) ATgetNext((ATermList) q_12);
                          {
                            if(((n_12 != NULL) && (n_12 != r_12)))
                              _fail(r_12);
                            else
                              n_12 = r_12;
                            {
                              if(((o_12 != NULL) && (o_12 != s_12)))
                                _fail(s_12);
                              else
                                o_12 = s_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_12), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(o_12)), (ATerm) ATinsert(CheckATermList(not_null(n_12)), not_null(i_12))));
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
        t = g_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_85 (ATerm))
{
  ATerm o_10;
  o_10 = t;
  {
    t = b_85(t);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_q_10;
        return(t);
      }
      t = debug_1(t, r_1);
    }
  }
  t = o_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
      c_13 = t;
      x_12 :
      if(match_cons(c_13, sym__2))
        {
          d_13 = ATgetArgument(c_13, 0);
          e_13 = ATgetArgument(c_13, 1);
          {
            if(((b_13 != NULL) && (b_13 != d_13)))
              _fail(d_13);
            else
              b_13 = d_13;
            if(((a_13 != NULL) && (a_13 != e_13)))
              _fail(e_13);
            else
              a_13 = e_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_10);
      t = SSL_open_file(not_null(b_13), not_null(a_13));
    }
  else
    {
      t = r_10;
      {
        ATerm f_13 = NULL;
        ATerm g_13 = NULL;
        ATerm s_1 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = obsolete_1(t, s_1);
        {
          f_13 = t;
          {
            if(((b_13 != NULL) && (b_13 != f_13)))
              _fail(f_13);
            else
              b_13 = f_13;
            {
              ATerm u_10;
              u_10 = t;
              {
                ATerm h_13 = NULL;
                t = term_w_10;
                {
                  h_13 = t;
                  if(((g_13 != NULL) && (g_13 != h_13)))
                    _fail(h_13);
                  else
                    g_13 = h_13;
                }
              }
              t = u_10;
              t = SSL_open_file(not_null(b_13), not_null(g_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm p_13 = NULL;
  n_13 = t;
  {
    ATerm a_11;
    a_11 = t;
    {
      ATerm q_13 = NULL;
      t = term_c_11;
      {
        q_13 = t;
        if(((p_13 != NULL) && (p_13 != q_13)))
          _fail(q_13);
        else
          p_13 = q_13;
      }
    }
    t = a_11;
    {
      t = SSL_open_file(not_null(n_13), not_null(p_13));
      t = SSL_close_file(not_null(n_13));
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
  ATerm u_13 = NULL;
  ATerm v_13 = NULL;
  t = term_i_11;
  {
    t = new_0(t);
    {
      v_13 = t;
      if(((u_13 != NULL) && (u_13 != v_13)))
        _fail(v_13);
      else
        u_13 = v_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), term_j_11);
    {
      t = conc_strings_0(t);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
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
  ATerm z_13 = NULL;
  t = new_file_0(t);
  {
    z_13 = t;
    {
      ATerm m_11;
      m_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_w_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_i_11);
            {
              ATerm t_1 (ATerm t)
              {
                t = term_r_11;
                return(t);
              }
              t = assert_1(t, t_1);
            }
          }
        }
      }
      t = m_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_stdin_0))
    {
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      ATerm n_14 = NULL;
      t = xtc_new_file_0(t);
      {
        m_14 = t;
        {
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
          {
            ATerm o_14 = NULL;
            t = o_0(t);
            {
              o_14 = t;
              if(((n_14 != NULL) && (n_14 != o_14)))
                _fail(o_14);
              else
                n_14 = o_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_s_11));
              {
                ATerm t_11 = t;
                int u_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(u_11);
                  }
                else
                  {
                    t = t_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(l_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_14));
    }
  else
    {
      if(match_cons(j_14, sym_FILE_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          {
            ATerm q_14 = NULL;
            ATerm r_14 = NULL;
            t = not_null(k_14);
            {
              ATerm s_14 = NULL;
              t = xtc_new_file_0(t);
              {
                r_14 = t;
                {
                  if(((q_14 != NULL) && (q_14 != r_14)))
                    _fail(r_14);
                  else
                    q_14 = r_14;
                  {
                    ATerm t_14 = NULL;
                    t = o_0(t);
                    {
                      t_14 = t;
                      if(((s_14 != NULL) && (s_14 != t_14)))
                        _fail(t_14);
                      else
                        s_14 = t_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_14)), term_s_11), not_null(k_14)), term_v_11));
                      {
                        ATerm a_12 = t;
                        int b_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(b_12);
                          }
                        else
                          {
                            t = a_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(q_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_14));
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
  ATerm e_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_stdin_0))
    {
      ATerm g_15 = NULL,i_15 = NULL;
      ATerm c_12;
      c_12 = t;
      {
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(e_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
      }
      t = c_12;
      {
        ATerm j_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(g_15));
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
        t = not_null(i_15);
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
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_FILE_1))
    {
      t_15 = ATgetArgument(s_15, 0);
      {
        ATerm w_15 = NULL,y_15 = NULL;
        ATerm x_15 = NULL;
        t = SSLgetAnnotations(not_null(s_15));
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
        {
          t = not_null(t_15);
          {
            ATerm a_16 = NULL;
            t = l_52(t);
            {
              y_15 = t;
              {
                ATerm b_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(y_15)), not_null(w_15));
                {
                  b_16 = t;
                  if(((a_16 != NULL) && (a_16 != b_16)))
                    _fail(b_16);
                  else
                    a_16 = b_16;
                }
                t = not_null(a_16);
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = t;
      int l_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(l_12);
        }
      else
        {
          t = k_12;
          t = stdin_0(t);
        }
      LocalPopChoice(e_12);
      t = xtc_transform_file_2(t, a_74, b_74);
    }
  else
    {
      t = d_12;
      t = xtc_transform_term_2(t, a_74, b_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      t = SSL_copy(not_null(j_16), not_null(k_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_stderr_0))
    {
      ATerm u_16 = NULL,w_16 = NULL;
      ATerm t_12;
      t_12 = t;
      {
        ATerm v_16 = NULL;
        t = SSLgetAnnotations(not_null(s_16));
        {
          v_16 = t;
          if(((u_16 != NULL) && (u_16 != v_16)))
            _fail(v_16);
          else
            u_16 = v_16;
        }
      }
      t = t_12;
      {
        ATerm x_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(u_16));
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
        t = not_null(w_16);
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
  ATerm f_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_stdout_0))
    {
      ATerm h_17 = NULL,j_17 = NULL;
      ATerm u_12;
      u_12 = t;
      {
        ATerm i_17 = NULL;
        t = SSLgetAnnotations(not_null(f_17));
        {
          i_17 = t;
          if(((h_17 != NULL) && (h_17 != i_17)))
            _fail(i_17);
          else
            h_17 = i_17;
        }
      }
      t = u_12;
      {
        ATerm k_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(h_17));
        {
          k_17 = t;
          if(((j_17 != NULL) && (j_17 != k_17)))
            _fail(k_17);
          else
            j_17 = k_17;
        }
        t = not_null(j_17);
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
  ATerm w_17 = NULL,x_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym_FILE_1))
    {
      x_17 = ATgetArgument(w_17, 0);
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_17 = NULL;
            ATerm a_18 = NULL;
            t = m_0(t);
            {
              a_18 = t;
              {
                if(((z_17 != NULL) && (z_17 != a_18)))
                  _fail(a_18);
                else
                  z_17 = a_18;
                {
                  ATerm y_12 = t;
                  int z_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(z_12);
                    }
                  else
                    {
                      t = y_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(z_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_17));
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm i_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_18 = NULL;
                  ATerm d_18 = NULL;
                  t = m_0(t);
                  {
                    d_18 = t;
                    {
                      if(((c_18 != NULL) && (c_18 != d_18)))
                        _fail(d_18);
                      else
                        c_18 = d_18;
                      {
                        ATerm k_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm l_13 = t;
                            int m_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(m_13);
                              }
                            else
                              {
                                t = l_13;
                                {
                                  ATerm o_13 = t;
                                  int r_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(r_13);
                                    }
                                  else
                                    {
                                      t = o_13;
                                      {
                                        ATerm e_18 = NULL;
                                        e_18 = t;
                                        if(((x_17 != NULL) && (x_17 != e_18)))
                                          _fail(e_18);
                                        else
                                          x_17 = e_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = k_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(c_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_17));
                  LocalPopChoice(j_13);
                }
              else
                {
                  t = i_13;
                  {
                    ATerm g_18 = NULL;
                    t = m_0(t);
                    {
                      g_18 = t;
                      if(((x_17 != NULL) && (x_17 != g_18)))
                        _fail(g_18);
                      else
                        x_17 = g_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_17));
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
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
    {
      r_18 = ATgetFirst((ATermList) q_18);
      s_18 = (ATerm) ATgetNext((ATermList) q_18);
      t = not_null(s_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym__2))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      {
        ATerm s_13;
        s_13 = t;
        {
          ATerm e_19 = NULL;
          ATerm f_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(b_19));
          {
            ATerm t_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = t_13;
                t = (ATerm) ATempty;
              }
            {
              f_19 = t;
              if(((e_19 != NULL) && (e_19 != f_19)))
                _fail(f_19);
              else
                e_19 = f_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), not_null(b_19), not_null(e_19));
            t = table_put_0(t);
          }
        }
        t = s_13;
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
  ATerm m_19 = NULL,n_19 = NULL,p_19 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm q_19 = NULL;
    ATerm r_19 = NULL,s_19 = NULL,y_19 = NULL;
    t = r_74(t);
    {
      q_19 = t;
      {
        if(((p_19 != NULL) && (p_19 != q_19)))
          _fail(q_19);
        else
          p_19 = q_19;
        {
          ATerm y_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), term_n_10);
              t = table_get_0(t);
              LocalPopChoice(a_14);
            }
          else
            {
              t = y_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_19 = t;
            l_19 :
            if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
              {
                s_19 = ATgetFirst((ATermList) r_19);
                y_19 = (ATerm) ATgetNext((ATermList) r_19);
                {
                  if(((n_19 != NULL) && (n_19 != s_19)))
                    _fail(s_19);
                  else
                    n_19 = s_19;
                  {
                    if(((m_19 != NULL) && (m_19 != y_19)))
                      _fail(y_19);
                    else
                      m_19 = y_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_19), term_n_10, not_null(m_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_19);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm z_19 = NULL;
                              z_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), not_null(z_19));
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
  t = x_13;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  t = SSL_remove(not_null(h_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      t = c_63(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        t = c_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm m_20 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm n_20 = NULL;
    ATerm t_20 = NULL;
    t = q_74(t);
    {
      n_20 = t;
      {
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
        {
          ATerm u_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), term_n_10);
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
                t = (ATerm) ATempty;
              }
            {
              u_20 = t;
              if(((t_20 != NULL) && (t_20 != u_20)))
                _fail(u_20);
              else
                t_20 = u_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_20), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(t_20)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm v_1 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = begin_scope_1(t, v_1);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
        ATerm h_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_14;
            t = table_get_0(t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = h_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_21 = t;
          y_20 :
          if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
            {
              c_21 = ATgetFirst((ATermList) b_21);
              d_21 = (ATerm) ATgetNext((ATermList) b_21);
              {
                if(((a_21 != NULL) && (a_21 != c_21)))
                  _fail(c_21);
                else
                  a_21 = c_21;
                {
                  if(((z_20 != NULL) && (z_20 != d_21)))
                    _fail(d_21);
                  else
                    z_20 = d_21;
                  {
                    t = not_null(a_21);
                    {
                      ATerm x_1 (ATerm t)
                      {
                        ATerm v_14 = t;
                        int w_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(w_14);
                          }
                        else
                          {
                            t = v_14;
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
      t = g_14;
      {
        ATerm z_1 (ATerm t)
        {
          t = term_r_11;
          return(t);
        }
        t = end_scope_1(t, z_1);
      }
      return(t);
    }
    t = restore_always_2(t, o_73, w_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm a_2 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL;
        ATerm h_21 = NULL;
        t = term_v_11;
        {
          t = get_config_0(t);
          {
            h_21 = t;
            if(((g_21 != NULL) && (g_21 != h_21)))
              _fail(h_21);
            else
              g_21 = h_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = term_a_10;
      }
    {
      t = p_73(t);
      {
        ATerm b_2 (ATerm t)
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_s_11;
              t = get_config_0(t);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = term_b_15;
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
ATerm version_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm p_21 = NULL;
    p_21 = t;
    o_21 :
    if(!(match_string(p_21, "-v")))
      {
        if(!(match_string(p_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_f_15;
    t = set_config_0(t);
    t = term_k_15;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_l_15;
    return(t);
  }
  t = Option_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm w_21 = NULL;
    w_21 = t;
    q_21 :
    if(!(match_string(w_21, "-k")))
      {
        if(!(match_string(w_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm m_15;
    m_15 = t;
    {
      ATerm x_21 = NULL;
      ATerm f_22 = NULL;
      t = string_to_int_0(t);
      {
        f_22 = t;
        if(((x_21 != NULL) && (x_21 != f_22)))
          _fail(f_22);
        else
          x_21 = f_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, not_null(x_21));
        t = set_config_0(t);
      }
    }
    t = m_15;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_o_15;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  t = SSL_string_to_int(not_null(j_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm s_22 = NULL;
        s_22 = t;
        n_22 :
        if(!(match_string(s_22, "-S")))
          {
            if(!(match_string(s_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_v_15;
        t = set_config_0(t);
        t = term_z_15;
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_c_16;
        return(t);
      }
      t = Option_3(t, i_2, j_2, k_2);
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm t_22 = NULL;
              t_22 = t;
              o_22 :
              if(!(match_string(t_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              ATerm w_22 = NULL;
              ATerm f_16;
              f_16 = t;
              {
                ATerm u_22 = NULL;
                ATerm v_22 = NULL;
                t = string_to_int_0(t);
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(u_22));
                  t = set_config_0(t);
                }
              }
              t = f_16;
              {
                ATerm x_22 = NULL;
                x_22 = t;
                if(((w_22 != NULL) && (w_22 != x_22)))
                  _fail(x_22);
                else
                  w_22 = x_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_22));
              }
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              t = term_g_16;
              return(t);
            }
            t = ArgOption_3(t, l_2, m_2, n_2);
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm o_2 (ATerm t)
              {
                ATerm y_22 = NULL;
                y_22 = t;
                r_22 :
                if(!(match_string(y_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = term_m_16;
                t = set_config_0(t);
                t = term_n_16;
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                t = term_o_16;
                return(t);
              }
              t = Option_3(t, o_2, p_2, q_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
        ATerm t_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = t_16;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm e_23 = NULL;
    e_23 = t;
    b_23 :
    if(!(match_string(e_23, "-o")))
      {
        if(!(match_string(e_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm h_23 = NULL;
    ATerm z_16;
    z_16 = t;
    {
      ATerm f_23 = NULL;
      ATerm g_23 = NULL;
      g_23 = t;
      if(((f_23 != NULL) && (f_23 != g_23)))
        _fail(g_23);
      else
        f_23 = g_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(f_23));
        t = set_config_0(t);
      }
    }
    t = z_16;
    {
      ATerm i_23 = NULL;
      i_23 = t;
      if(((h_23 != NULL) && (h_23 != i_23)))
        _fail(i_23);
      else
        h_23 = i_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_23));
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm m_23 = NULL;
          m_23 = t;
          l_23 :
          if(!(match_string(m_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_g_17;
          t = set_config_0(t);
          t = term_l_17;
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = term_m_17;
          return(t);
        }
        t = Option_3(t, u_2, v_2, w_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  x_23 = t;
  q_23 :
  if(match_string(x_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
        {
          y_23 = ATgetFirst((ATermList) x_23);
          z_23 = (ATerm) ATgetNext((ATermList) x_23);
          w_23 :
          if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
            {
              a_24 = ATgetFirst((ATermList) z_23);
              b_24 = (ATerm) ATgetNext((ATermList) z_23);
              {
                ATerm f_24 = NULL;
                ATerm n_17;
                n_17 = t;
                {
                  t = not_null(y_23);
                  t = j_0(t);
                }
                t = n_17;
                {
                  ATerm g_24 = NULL;
                  t = not_null(a_24);
                  {
                    t = k_0(t);
                    {
                      g_24 = t;
                      if(((f_24 != NULL) && (f_24 != g_24)))
                        _fail(g_24);
                      else
                        f_24 = g_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_24)), not_null(f_24));
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
  ATerm x_2 (ATerm t)
  {
    ATerm r_24 = NULL;
    r_24 = t;
    n_24 :
    if(!(match_string(r_24, "-i")))
      {
        if(!(match_string(r_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm u_24 = NULL;
    ATerm o_17;
    o_17 = t;
    {
      ATerm s_24 = NULL;
      ATerm t_24 = NULL;
      t_24 = t;
      if(((s_24 != NULL) && (s_24 != t_24)))
        _fail(t_24);
      else
        s_24 = t_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(s_24));
        t = set_config_0(t);
      }
    }
    t = o_17;
    {
      ATerm v_24 = NULL;
      v_24 = t;
      if(((u_24 != NULL) && (u_24 != v_24)))
        _fail(v_24);
      else
        u_24 = v_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_24));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  t = ArgOption_3(t, x_2, y_2, b_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_25 = NULL;
  ATerm u_17;
  u_17 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm b_25 = NULL,c_25 = NULL;
      b_25 = t;
      z_24 :
      if(match_cons(b_25, sym_Program_1))
        {
          c_25 = ATgetArgument(b_25, 0);
          if(((a_25 != NULL) && (a_25 != c_25)))
            _fail(c_25);
          else
            a_25 = c_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_18), not_null(a_25)), term_y_17));
      {
        t = printnl_0(t);
        {
          t = term_s_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, term_f_18));
  {
    t = printnl_0(t);
    {
      t = term_s_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_TicksToSeconds(not_null(f_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_25), not_null(m_25));
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = SSL_addr(not_null(l_25), not_null(m_25));
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
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
        t_25 = t;
        s_25 :
        if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
          {
            u_25 = ATgetFirst((ATermList) t_25);
            v_25 = (ATerm) ATgetNext((ATermList) t_25);
            {
              ATerm y_25 = NULL;
              ATerm z_25 = NULL;
              t = not_null(v_25);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  z_25 = t;
                  if(((y_25 != NULL) && (y_25 != z_25)))
                    _fail(z_25);
                  else
                    y_25 = z_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(y_25));
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
  ATerm g_26 = NULL;
  ATerm i_26 = NULL;
  g_26 = t;
  {
    ATerm j_26 = NULL;
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
    t = not_null(g_26);
    {
      j_26 = t;
      {
        t = SSL_explode_term(not_null(j_26));
        {
          l_26 = t;
          f_26 :
          if(match_cons(l_26, sym__2))
            {
              m_26 = ATgetArgument(l_26, 0);
              n_26 = ATgetArgument(l_26, 1);
              if(((i_26 != NULL) && (i_26 != n_26)))
                _fail(n_26);
              else
                i_26 = n_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_26);
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
    ATerm f_3 (ATerm t)
    {
      t = term_u_15;
      return(t);
    }
    t = crush_2(t, f_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym__2))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_26), not_null(v_26));
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              t = SSL_gtr(not_null(u_26), not_null(v_26));
            }
        }
        t = l_18;
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
  ATerm b_27 = NULL;
  ATerm o_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
      c_27 = t;
      a_27 :
      if(match_cons(c_27, sym__2))
        {
          d_27 = ATgetArgument(c_27, 0);
          e_27 = ATgetArgument(c_27, 1);
          {
            if(((b_27 != NULL) && (b_27 != d_27)))
              _fail(d_27);
            else
              b_27 = d_27;
            if(((b_27 != NULL) && (b_27 != e_27)))
              _fail(e_27);
            else
              b_27 = e_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_18);
    }
  else
    {
      t = o_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18;
      w_18 = t;
      {
        ATerm h_27 = NULL;
        ATerm i_27 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            i_27 = t;
            if(((h_27 != NULL) && (h_27 != i_27)))
              _fail(i_27);
            else
              h_27 = i_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), term_s_5);
          t = geq_0(t);
        }
      }
      t = w_18;
      t = y_58(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm m_27 = NULL,o_27 = NULL;
    ATerm x_18;
    x_18 = t;
    {
      ATerm n_27 = NULL;
      t = run_time_0(t);
      {
        n_27 = t;
        if(((m_27 != NULL) && (m_27 != n_27)))
          _fail(n_27);
        else
          m_27 = n_27;
      }
    }
    t = x_18;
    {
      ATerm p_27 = NULL;
      t = term_c_19;
      {
        t = get_config_0(t);
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_19), not_null(m_27)), term_d_19), not_null(o_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, g_3);
  {
    t = term_u_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Version_0))
    {
      ATerm y_27 = NULL,a_28 = NULL;
      ATerm h_19;
      h_19 = t;
      {
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      t = h_19;
      {
        ATerm b_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_27));
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
        t = not_null(a_28);
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
  ATerm h_3 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm k_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_19);
            }
          else
            {
              t = k_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, h_3);
  t = x_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_table_create(not_null(g_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  {
    ATerm t_19;
    t_19 = t;
    {
      t = term_u_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, not_null(k_28));
          t = table_put_0(t);
        }
      }
    }
    t = t_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  t = SSL_table_destroy(not_null(o_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_exit(not_null(s_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(((ATgetType(w_28) == AT_LIST) && ATisEmpty(w_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
        {
          x_28 = ATgetFirst((ATermList) w_28);
          y_28 = (ATerm) ATgetNext((ATermList) w_28);
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
  ATerm w_19;
  w_19 = t;
  {
    ATerm c_29 = NULL;
    ATerm f_29 = NULL;
    ATerm x_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = x_19;
        {
          ATerm d_29 = NULL;
          ATerm e_29 = NULL;
          e_29 = t;
          if(((d_29 != NULL) && (d_29 != e_29)))
            _fail(e_29);
          else
            d_29 = e_29;
          t = (ATerm) ATinsert(ATempty, not_null(d_29));
        }
      }
    {
      f_29 = t;
      if(((c_29 != NULL) && (c_29 != f_29)))
        _fail(f_29);
      else
        c_29 = f_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_15, not_null(c_29));
      t = printnl_0(t);
    }
  }
  t = w_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  v_29 = t;
  s_29 :
  if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
    {
      t_29 = ATgetFirst((ATermList) v_29);
      u_29 = (ATerm) ATgetNext((ATermList) v_29);
      {
        ATerm y_29 = NULL;
        t = not_null(u_29);
        {
          ATerm b_20;
          b_20 = t;
          {
            ATerm z_29 = NULL,b_30 = NULL,f_30 = NULL;
            ATerm c_20;
            c_20 = t;
            {
              ATerm a_30 = NULL;
              t = i_0(t);
              {
                a_30 = t;
                if(((z_29 != NULL) && (z_29 != a_30)))
                  _fail(a_30);
                else
                  z_29 = a_30;
              }
            }
            t = c_20;
            {
              ATerm e_30 = NULL;
              t = not_null(t_29);
              {
                t = h_0(t);
                {
                  e_30 = t;
                  if(((b_30 != NULL) && (b_30 != e_30)))
                    _fail(e_30);
                  else
                    b_30 = e_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_29)), not_null(b_30));
                {
                  f_30 = t;
                  if(((y_29 != NULL) && (y_29 != f_30)))
                    _fail(f_30);
                  else
                    y_29 = f_30;
                }
              }
            }
          }
          t = b_20;
          {
            ATerm i_3 (ATerm t)
            {
              t = not_null(y_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, i_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_29) == AT_LIST) && ATisEmpty(v_29)))
        {
          {
            t = term_i_11;
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
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Program_1))
    {
      r_30 = ATgetArgument(q_30, 0);
      {
        ATerm u_30 = NULL,w_30 = NULL;
        ATerm v_30 = NULL;
        t = SSLgetAnnotations(not_null(q_30));
        {
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
        }
        {
          t = not_null(r_30);
          {
            ATerm y_30 = NULL;
            t = s_52(t);
            {
              w_30 = t;
              {
                ATerm z_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_30)), not_null(u_30));
                {
                  z_30 = t;
                  if(((y_30 != NULL) && (y_30 != z_30)))
                    _fail(z_30);
                  else
                    y_30 = z_30;
                }
                t = not_null(y_30);
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
  ATerm h_31 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_31 = NULL;
      t = term_c_19;
      {
        t = get_config_0(t);
        {
          i_31 = t;
          if(((h_31 != NULL) && (h_31 != i_31)))
            _fail(i_31);
          else
            h_31 = i_31;
        }
      }
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            ATerm j_31 = NULL;
            j_31 = t;
            if(((h_31 != NULL) && (h_31 != j_31)))
              _fail(j_31);
            else
              h_31 = j_31;
            return(t);
          }
          t = Program_1(t, m_3);
          return(t);
        }
        t = fetch_1(t, l_3);
      }
    }
  {
    t = term_f_20;
    {
      t = echo_0(t);
      {
        t = term_j_20;
        {
          t = table_get_0(t);
          {
            ATerm n_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, n_3);
            {
              ATerm o_3 (ATerm t)
              {
                ATerm k_31 = NULL;
                ATerm l_31 = NULL;
                l_31 = t;
                if(((k_31 != NULL) && (k_31 != l_31)))
                  _fail(l_31);
                else
                  k_31 = l_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_31)), term_k_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, o_3);
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
  ATerm l_20;
  l_20 = t;
  {
    ATerm q_31 = NULL;
    ATerm t_31 = NULL;
    t_31 = t;
    if(((q_31 != NULL) && (q_31 != t_31)))
      _fail(t_31);
    else
      q_31 = t_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, not_null(q_31)));
      t = printnl_0(t);
    }
  }
  t = l_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm o_20;
  o_20 = t;
  {
    t = v_84(t);
    t = debug_0(t);
  }
  t = o_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  z_31 :
  if(match_cons(f_32, sym_Undefined_1))
    {
      g_32 = ATgetArgument(f_32, 0);
      {
        ATerm l_32 = NULL,n_32 = NULL;
        ATerm m_32 = NULL;
        t = SSLgetAnnotations(not_null(f_32));
        {
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
        }
        {
          t = not_null(g_32);
          {
            ATerm r_32 = NULL;
            t = t_52(t);
            {
              n_32 = t;
              {
                ATerm s_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_32)), not_null(l_32));
                {
                  s_32 = t;
                  if(((r_32 != NULL) && (r_32 != s_32)))
                    _fail(s_32);
                  else
                    r_32 = s_32;
                }
                t = not_null(r_32);
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
  ATerm x_32 (ATerm t)
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = Cons_2(t, _id, x_32);
      }
    return(t);
  }
  t = x_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_76 (ATerm))
{
  t = fetch_1(t, e_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym_Help_0))
    {
      ATerm o_33 = NULL,q_33 = NULL;
      ATerm r_20;
      r_20 = t;
      {
        ATerm p_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          p_33 = t;
          if(((o_33 != NULL) && (o_33 != p_33)))
            _fail(p_33);
          else
            o_33 = p_33;
        }
      }
      t = r_20;
      {
        ATerm r_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_33));
        {
          r_33 = t;
          if(((q_33 != NULL) && (q_33 != r_33)))
            _fail(r_33);
          else
            q_33 = r_33;
        }
        t = not_null(q_33);
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
  ATerm a_34 = NULL;
  a_34 = t;
  t = SSL_implode_string(not_null(a_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = s_20;
      {
        ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
        s_34 = t;
        r_34 :
        if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
          {
            t_34 = ATgetFirst((ATermList) s_34);
            u_34 = (ATerm) ATgetNext((ATermList) s_34);
            {
              t = not_null(t_34);
              {
                ATerm q_3 (ATerm t)
                {
                  t = not_null(u_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_3);
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
  ATerm l_35 = NULL;
  ATerm n_35 = NULL;
  l_35 = t;
  {
    ATerm o_35 = NULL;
    ATerm q_35 = NULL,v_35 = NULL,w_35 = NULL;
    t = not_null(l_35);
    {
      o_35 = t;
      {
        t = SSL_explode_term(not_null(o_35));
        {
          q_35 = t;
          j_35 :
          if(match_cons(q_35, sym__2))
            {
              v_35 = ATgetArgument(q_35, 0);
              w_35 = ATgetArgument(q_35, 1);
              k_35 :
              if(match_string(v_35, ""))
                {
                  if(((n_35 != NULL) && (n_35 != w_35)))
                    _fail(w_35);
                  else
                    n_35 = w_35;
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
      t = not_null(n_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm a_36 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_36);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        {
          t = Nil_0(t);
          t = r_64(t);
        }
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym__2))
    {
      e_36 = ATgetArgument(d_36, 0);
      f_36 = ATgetArgument(d_36, 1);
      {
        t = not_null(e_36);
        {
          ATerm s_3 (ATerm t)
          {
            t = not_null(f_36);
            return(t);
          }
          t = at_end_1(t, s_3);
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
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  t = SSL_explode_string(not_null(k_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym__2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm z_36 = NULL,b_37 = NULL;
        ATerm a_37 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
        {
          t = not_null(u_36);
          {
            ATerm d_37 = NULL;
            t = p_50(t);
            {
              b_37 = t;
              {
                t = not_null(v_36);
                {
                  ATerm f_37 = NULL;
                  t = q_50(t);
                  {
                    d_37 = t;
                    {
                      ATerm g_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_37), not_null(d_37)), not_null(z_36));
                      {
                        g_37 = t;
                        if(((f_37 != NULL) && (f_37 != g_37)))
                          _fail(g_37);
                        else
                          f_37 = g_37;
                      }
                      t = not_null(f_37);
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
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        ATerm k_21;
        k_21 = t;
        t = SSL_printnl(not_null(p_37), not_null(q_37));
        t = k_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm l_21;
  l_21 = t;
  {
    ATerm y_37 = NULL,c_38 = NULL;
    ATerm m_21;
    m_21 = t;
    {
      ATerm z_37 = NULL;
      t = u_84(t);
      {
        z_37 = t;
        if(((y_37 != NULL) && (y_37 != z_37)))
          _fail(z_37);
        else
          y_37 = z_37;
      }
    }
    t = m_21;
    {
      ATerm d_38 = NULL;
      d_38 = t;
      if(((c_38 != NULL) && (c_38 != d_38)))
        _fail(d_38);
      else
        c_38 = d_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_38)), not_null(y_37)));
        t = printnl_0(t);
      }
    }
  }
  t = l_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm i_38 (ATerm t)
  {
    ATerm n_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = n_21;
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
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm y_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(z_21);
                }
              else
                {
                  t = y_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, v_3);
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
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
                          ATerm a_22 = t;
                          int b_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(b_22);
                            }
                          else
                            {
                              t = a_22;
                              {
                                ATerm w_3 (ATerm t)
                                {
                                  t = term_c_22;
                                  return(t);
                                }
                                t = debug_1(t, w_3);
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
                            ATerm c_39 = NULL,e_39 = NULL;
                            ATerm d_22;
                            d_22 = t;
                            {
                              ATerm d_39 = NULL;
                              t = not_null(u_38);
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
                            }
                            t = d_22;
                            {
                              ATerm f_39 = NULL;
                              t = not_null(v_38);
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
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), not_null(e_39));
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
  ATerm o_39 = NULL;
  o_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_22, not_null(o_39));
    {
      t = table_get_0(t);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm i_22;
              i_22 = t;
              {
                ATerm q_39 = NULL;
                ATerm r_39 = NULL;
                r_39 = t;
                if(((q_39 != NULL) && (q_39 != r_39)))
                  _fail(r_39);
                else
                  q_39 = r_39;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_22, not_null(o_39), not_null(q_39));
                  t = table_put_0(t);
                }
              }
              t = i_22;
            }
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
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
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym__2))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      t = SSL_table_get(not_null(x_39), not_null(y_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym__3))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      i_40 = ATgetArgument(f_40, 2);
      {
        ATerm m_22;
        m_22 = t;
        {
          ATerm m_40 = NULL;
          ATerm n_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_40), not_null(h_40));
          {
            ATerm p_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_22);
              }
            else
              {
                t = p_22;
                t = (ATerm) ATempty;
              }
            {
              n_40 = t;
              if(((m_40 != NULL) && (m_40 != n_40)))
                _fail(n_40);
              else
                m_40 = n_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_40), not_null(h_40), (ATerm) ATinsert(CheckATermList(not_null(m_40)), not_null(i_40)));
            t = table_put_0(t);
          }
        }
        t = m_22;
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
  ATerm r_40 = NULL;
  ATerm s_40 = NULL;
  t = term_i_11;
  {
    t = j_77(t);
    {
      s_40 = t;
      if(((r_40 != NULL) && (r_40 != s_40)))
        _fail(s_40);
      else
        r_40 = s_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_i_20, not_null(r_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_string(y_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
        {
          z_40 = ATgetFirst((ATermList) y_40);
          a_41 = (ATerm) ATgetNext((ATermList) y_40);
          {
            ATerm d_41 = NULL;
            ATerm z_22;
            z_22 = t;
            {
              t = not_null(z_40);
              t = a_0(t);
            }
            t = z_22;
            {
              ATerm e_41 = NULL;
              t = term_i_11;
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
  ATerm x_3 (ATerm t)
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
  ATerm y_3 (ATerm t)
  {
    t = term_c_23;
    {
      t = set_config_0(t);
      t = term_d_23;
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_j_23;
    return(t);
  }
  t = Option_3(t, x_3, y_3, b_4);
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
                  ATerm k_42 = NULL;
                  t = z_51(t);
                  {
                    i_42 = t;
                    {
                      ATerm l_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_42)), not_null(g_42)), not_null(e_42));
                      {
                        l_42 = t;
                        if(((k_42 != NULL) && (k_42 != l_42)))
                          _fail(l_42);
                        else
                          k_42 = l_42;
                      }
                      t = not_null(k_42);
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
  ATerm w_42 = NULL;
  w_42 = t;
  v_42 :
  if(((ATgetType(w_42) == AT_LIST) && ATisEmpty(w_42)))
    {
      {
        ATerm y_42 = NULL,a_43 = NULL;
        ATerm k_23;
        k_23 = t;
        {
          ATerm z_42 = NULL;
          t = SSLgetAnnotations(not_null(w_42));
          {
            z_42 = t;
            if(((y_42 != NULL) && (y_42 != z_42)))
              _fail(z_42);
            else
              y_42 = z_42;
          }
        }
        t = k_23;
        {
          ATerm b_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_42));
          {
            b_43 = t;
            if(((a_43 != NULL) && (a_43 != b_43)))
              _fail(b_43);
            else
              a_43 = b_43;
          }
          t = not_null(a_43);
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
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym__2))
    {
      i_43 = ATgetArgument(h_43, 0);
      j_43 = ATgetArgument(h_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_22, not_null(i_43), not_null(j_43));
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
  ATerm n_23;
  n_23 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_23;
        t = h_77(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
        }
      }
  }
  t = n_23;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm r_43 = NULL;
      ATerm s_23;
      s_23 = t;
      {
        ATerm p_43 = NULL;
        ATerm q_43 = NULL;
        q_43 = t;
        if(((p_43 != NULL) && (p_43 != q_43)))
          _fail(q_43);
        else
          p_43 = q_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(p_43));
          t = set_config_0(t);
        }
      }
      t = s_23;
      {
        ATerm s_43 = NULL;
        s_43 = t;
        if(((r_43 != NULL) && (r_43 != s_43)))
          _fail(s_43);
        else
          r_43 = s_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_43));
      }
      return(t);
    }
    ATerm f_4 (ATerm t)
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_23 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_24);
            }
          else
            {
              t = v_23;
              {
                t = h_77(t);
                t = Cons_2(t, _id, f_4);
              }
            }
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_4, f_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  ATerm d_24;
  d_24 = t;
  {
    ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
    b_44 = t;
    x_43 :
    if(match_cons(b_44, sym__3))
      {
        c_44 = ATgetArgument(b_44, 0);
        d_44 = ATgetArgument(b_44, 1);
        e_44 = ATgetArgument(b_44, 2);
        {
          if(((y_43 != NULL) && (y_43 != c_44)))
            _fail(c_44);
          else
            y_43 = c_44;
          {
            if(((z_43 != NULL) && (z_43 != d_44)))
              _fail(d_44);
            else
              z_43 = d_44;
            {
              if(((a_44 != NULL) && (a_44 != e_44)))
                _fail(e_44);
              else
                a_44 = e_44;
              t = SSL_table_put(not_null(y_43), not_null(z_43), not_null(a_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm h_44 = NULL;
  ATerm e_24;
  e_24 = t;
  {
    t = term_h_24;
    t = table_put_0(t);
  }
  t = e_24;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_77(t);
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_4);
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_24;
          m_24 = t;
          {
            ATerm o_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_23;
                t = get_config_0(t);
                LocalPopChoice(p_24);
              }
            else
              {
                t = o_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = m_24;
          {
            t = system_usage_0(t);
            {
              t = term_u_15;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
          {
            ATerm q_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm i_44 = NULL;
                    i_44 = t;
                    if(((h_44 != NULL) && (h_44 != i_44)))
                      _fail(i_44);
                    else
                      h_44 = i_44;
                    return(t);
                  }
                  t = Undefined_1(t, l_4);
                  return(t);
                }
                t = fetch_1(t, h_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_44)), term_x_24);
                    return(t);
                  }
                  t = say_1(t, t_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_24);
              }
            else
              {
                t = q_24;
                {
                }
              }
          }
        }
      {
        ATerm y_24;
        y_24 = t;
        {
          t = term_g_20;
          t = table_destroy_0(t);
        }
        t = y_24;
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
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_75);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
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
  ATerm u_4 (ATerm t)
  {
    ATerm i_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_73(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = i_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = xtc_io_1(t, u_73);
    return(t);
  }
  t = option_wrap_2(t, u_4, v_4);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm s_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, s_73);
  return(t);
}
ATerm io_pp_pp_table_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm m_44 = NULL,o_44 = NULL;
      ATerm p_25;
      p_25 = t;
      {
        ATerm n_44 = NULL;
        t = term_q_25;
        {
          t = xtc_find_0(t);
          {
            n_44 = t;
            if(((m_44 != NULL) && (m_44 != n_44)))
              _fail(n_44);
            else
              m_44 = n_44;
          }
        }
      }
      t = p_25;
      {
        ATerm p_44 = NULL;
        t = term_r_25;
        {
          t = xtc_find_0(t);
          {
            p_44 = t;
            if(((o_44 != NULL) && (o_44 != p_44)))
              _fail(p_44);
            else
              o_44 = p_44;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_44)), term_w_25), not_null(m_44)), term_w_25);
      }
      return(t);
    }
    t = xtc_transform_2(t, c_5, d_5);
    {
      t = xtc_abox_format_0(t);
      t = xtc_abox2text_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, w_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_pp_table_0(t);
  return(t);
}