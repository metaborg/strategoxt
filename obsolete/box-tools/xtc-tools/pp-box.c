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
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_x_24;
ATerm term_h_24;
ATerm term_s_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_j_7;
ATerm term_b_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_n_5;
ATerm term_i_5;
void init_constant_terms (void)
{
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(4);
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
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_b_8);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_n_10);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_i_11);
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
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_n_5, term_u_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
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
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_i_11);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_i_11);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__3, term_h_20, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
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
ATerm io_pp_box_0 (ATerm);
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
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(m_5);
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
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(r_5);
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
  ATerm i_3 = NULL;
  i_3 = t;
  t = SSL_table_keys(not_null(i_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm q_3 = NULL;
        ATerm s_3 = NULL;
        q_3 = t;
        {
          ATerm t_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), not_null(q_3));
          {
            t = table_get_0(t);
            {
              t_3 = t;
              if(((s_3 != NULL) && (s_3 != t_3)))
                _fail(t_3);
              else
                s_3 = t_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_3), not_null(s_3));
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
      ATerm e_6;
      e_6 = t;
      {
        ATerm y_3 = NULL;
        ATerm z_3 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            z_3 = t;
            if(((y_3 != NULL) && (y_3 != z_3)))
              _fail(z_3);
            else
              y_3 = z_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), term_f_6);
          t = geq_0(t);
        }
      }
      t = e_6;
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
  ATerm h_6;
  h_6 = t;
  {
    ATerm c_4 = NULL;
    ATerm d_4 = NULL;
    d_4 = t;
    if(((c_4 != NULL) && (c_4 != d_4)))
      _fail(d_4);
    else
      c_4 = d_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(c_4));
      t = printnl_0(t);
    }
  }
  t = h_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm j_4 = NULL;
  ATerm l_4 = NULL,m_4 = NULL;
  j_4 = t;
  {
    ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_4)));
    {
      t = table_get_0(t);
      {
        n_4 = t;
        h_4 :
        if(((ATgetType(n_4) == AT_LIST) && !(ATisEmpty(n_4))))
          {
            o_4 = ATgetFirst((ATermList) n_4);
            r_4 = (ATerm) ATgetNext((ATermList) n_4);
            i_4 :
            if(match_cons(o_4, sym__2))
              {
                p_4 = ATgetArgument(o_4, 0);
                q_4 = ATgetArgument(o_4, 1);
                {
                  if(((l_4 != NULL) && (l_4 != p_4)))
                    _fail(p_4);
                  else
                    l_4 = p_4;
                  if(((m_4 != NULL) && (m_4 != q_4)))
                    _fail(q_4);
                  else
                    m_4 = q_4;
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
    t = not_null(m_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        ATerm d_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_4)));
        {
          t = table_get_0(t);
          {
            ATerm p_0 (ATerm t)
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
              e_5 = t;
              w_4 :
              if(match_cons(e_5, sym__2))
                {
                  f_5 = ATgetArgument(e_5, 0);
                  g_5 = ATgetArgument(e_5, 1);
                  {
                    if(((a_5 != NULL) && (a_5 != f_5)))
                      _fail(f_5);
                    else
                      a_5 = f_5;
                    if(((d_5 != NULL) && (d_5 != g_5)))
                      _fail(g_5);
                    else
                      d_5 = g_5;
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
        t = not_null(d_5);
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
  int p_6 = stack_ptr;
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
      LocalPopChoice(p_6);
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
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6;
      v_6 = t;
      {
        ATerm k_5 = NULL;
        ATerm l_5 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            l_5 = t;
            if(((k_5 != NULL) && (k_5 != l_5)))
              _fail(l_5);
            else
              k_5 = l_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), term_b_7);
          t = geq_0(t);
        }
      }
      t = v_6;
      t = b_59(t);
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
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
      ATerm i_7;
      i_7 = t;
      {
        ATerm o_5 = NULL;
        ATerm p_5 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            p_5 = t;
            if(((o_5 != NULL) && (o_5 != p_5)))
              _fail(p_5);
            else
              o_5 = p_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), term_j_7);
          t = geq_0(t);
        }
      }
      t = i_7;
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
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym__2))
    {
      u_5 = ATgetArgument(t_5, 0);
      v_5 = ATgetArgument(t_5, 1);
      if(((u_5 != NULL) && (u_5 != v_5)))
        _fail(v_5);
      else
        u_5 = v_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(((ATgetType(b_6) == AT_LIST) && !(ATisEmpty(b_6))))
    {
      c_6 = ATgetFirst((ATermList) b_6);
      d_6 = (ATerm) ATgetNext((ATermList) b_6);
      {
        t = e_70(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm g_6 = NULL;
            g_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(g_6));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, r_0);
        }
        t = not_null(d_6);
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
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  m_6 = t;
  l_6 :
  if(match_cons(m_6, sym__2))
    {
      n_6 = ATgetArgument(m_6, 0);
      o_6 = ATgetArgument(m_6, 1);
      {
        t = not_null(n_6);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm k_7 = t;
            int l_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_6);
                LocalPopChoice(l_7);
              }
            else
              {
                t = k_7;
                {
                  ATerm m_7 = t;
                  int s_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = not_null(o_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, s_0);
                      t = s_6(t);
                      LocalPopChoice(s_7);
                    }
                  else
                    {
                      t = m_7;
                      t = Cons_2(t, _id, s_6);
                    }
                }
              }
            return(t);
          }
          t = s_6(t);
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
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym__3))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      a_7 = ATgetArgument(x_6, 2);
      {
        ATerm t_7;
        t_7 = t;
        {
          ATerm e_7 = NULL;
          ATerm f_7 = NULL,h_7 = NULL;
          ATerm g_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), not_null(z_6));
          {
            ATerm x_7 = t;
            int y_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_7);
              }
            else
              {
                t = x_7;
                t = (ATerm) ATempty;
              }
            {
              g_7 = t;
              if(((f_7 != NULL) && (f_7 != g_7)))
                _fail(g_7);
              else
                f_7 = g_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), not_null(a_7));
            {
              t = union_1(t, eq_0);
              {
                h_7 = t;
                if(((e_7 != NULL) && (e_7 != h_7)))
                  _fail(h_7);
                else
                  e_7 = h_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_6), not_null(z_6), not_null(e_7));
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
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym__2))
    {
      q_7 = ATgetArgument(p_7, 0);
      r_7 = ATgetArgument(p_7, 1);
      {
        t = not_null(r_7);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
            u_7 = t;
            n_7 :
            if(match_cons(u_7, sym__2))
              {
                v_7 = ATgetArgument(u_7, 0);
                w_7 = ATgetArgument(u_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(q_7), not_null(v_7), not_null(w_7));
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
  ATerm d_8 = NULL;
  ATerm f_8 = NULL;
  d_8 = t;
  {
    ATerm z_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(d_8)));
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
        t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_b_8, (ATerm) ATinsert(ATempty, not_null(d_8)));
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
          ATerm e_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(h_8);
            }
          else
            {
              t = e_8;
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
              ATerm g_8 = NULL;
              g_8 = t;
              if(((f_8 != NULL) && (f_8 != g_8)))
                _fail(g_8);
              else
                f_8 = g_8;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(f_8));
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
                      t = (ATerm) ATmakeAppl(sym__3, term_j_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(d_8)), (ATerm) ATempty);
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
  ATerm k_8 = NULL;
  k_8 = t;
  t = SSL_getenv(not_null(k_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_8;
      t = get_config_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_8;
            t = getenv_0(t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
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
          t = term_e_9;
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
          t = term_h_9;
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
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(q_9);
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
        ATerm o_8 = NULL;
        ATerm p_8 = NULL;
        p_8 = t;
        if(((o_8 != NULL) && (o_8 != p_8)))
          _fail(p_8);
        else
          o_8 = p_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_9), not_null(o_8)), term_r_9);
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
  ATerm s_8 = NULL;
  ATerm u_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_8 = NULL;
      t_8 = t;
      {
        if(((s_8 != NULL) && (s_8 != t_8)))
          _fail(t_8);
        else
          s_8 = t_8;
        t = SSL_ReadFromFile(not_null(s_8));
      }
      LocalPopChoice(w_9);
    }
  else
    {
      t = u_9;
      {
        ATerm p_1 (ATerm t)
        {
          t = term_z_9;
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
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_stdin_0))
    {
      ATerm c_9 = NULL;
      ATerm d_9 = NULL;
      t = term_a_10;
      {
        t = ReadFromFile_0(t);
        {
          d_9 = t;
          if(((c_9 != NULL) && (c_9 != d_9)))
            _fail(d_9);
          else
            c_9 = d_9;
        }
      }
      t = not_null(c_9);
    }
  else
    {
      if(match_cons(a_9, sym_FILE_1))
        {
          b_9 = ATgetArgument(a_9, 0);
          {
            ATerm f_9 = NULL;
            ATerm g_9 = NULL;
            t = not_null(b_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  g_9 = t;
                  if(((f_9 != NULL) && (f_9 != g_9)))
                    _fail(g_9);
                  else
                    f_9 = g_9;
                }
              }
            }
            t = not_null(f_9);
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
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      t = SSL_WriteToBinaryFile(not_null(o_9), not_null(p_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm v_9 = NULL;
  ATerm x_9 = NULL;
  v_9 = t;
  {
    ATerm y_9 = NULL;
    t = xtc_new_file_0(t);
    {
      y_9 = t;
      {
        if(((x_9 != NULL) && (x_9 != y_9)))
          _fail(y_9);
        else
          x_9 = y_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(v_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(x_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_9));
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
  ATerm c_10 = NULL;
  c_10 = t;
  t = SSL_close_file(not_null(c_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      t = SSL_execvp(not_null(i_10), not_null(j_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_waitpid(not_null(o_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm y_10 = NULL;
  ATerm a_11 = NULL;
  y_10 = t;
  {
    t = fork_0(t);
    {
      a_11 = t;
      {
        ATerm b_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_11 = NULL;
            c_11 = t;
            u_10 :
            if(match_int(c_11, 0))
              {
                t = not_null(y_10);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(d_10);
          }
        else
          {
            t = b_10;
            {
              ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
              t = not_null(a_11);
              {
                t = waitpid_0(t);
                {
                  d_11 = t;
                  w_10 :
                  if(match_cons(d_11, sym_WaitStatus_3))
                    {
                      e_11 = ATgetArgument(d_11, 0);
                      f_11 = ATgetArgument(d_11, 1);
                      g_11 = ATgetArgument(d_11, 2);
                      x_10 :
                      if(match_int(e_11, 0))
                        {
                          t = not_null(y_10);
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
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm q_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(p_11));
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
  ATerm v_11 = NULL;
  ATerm e_10;
  e_10 = t;
  {
    ATerm w_11 = NULL;
    t = y_73(t);
    {
      t = xtc_find_0(t);
      {
        w_11 = t;
        if(((v_11 != NULL) && (v_11 != w_11)))
          _fail(w_11);
        else
          v_11 = w_11;
      }
    }
  }
  t = e_10;
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm x_11 = NULL;
      ATerm y_11 = NULL;
      y_11 = t;
      if(((x_11 != NULL) && (x_11 != y_11)))
        _fail(y_11);
      else
        x_11 = y_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(x_11));
        t = call_0(t);
      }
    }
    t = f_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym__2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      {
        ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
        ATerm k_10;
        k_10 = t;
        {
          ATerm o_12 = NULL;
          ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
          t = u_74(t);
          {
            o_12 = t;
            {
              if(((l_12 != NULL) && (l_12 != o_12)))
                _fail(o_12);
              else
                l_12 = o_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_12), not_null(h_12), not_null(i_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), term_n_10);
                        t = table_get_0(t);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_12 = t;
                      e_12 :
                      if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
                        {
                          q_12 = ATgetFirst((ATermList) p_12);
                          r_12 = (ATerm) ATgetNext((ATermList) p_12);
                          {
                            if(((m_12 != NULL) && (m_12 != q_12)))
                              _fail(q_12);
                            else
                              m_12 = q_12;
                            {
                              if(((n_12 != NULL) && (n_12 != r_12)))
                                _fail(r_12);
                              else
                                n_12 = r_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_12), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(n_12)), (ATerm) ATinsert(CheckATermList(not_null(m_12)), not_null(h_12))));
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
        t = k_10;
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
  ATerm p_10;
  p_10 = t;
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
  t = p_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
      b_13 = t;
      w_12 :
      if(match_cons(b_13, sym__2))
        {
          c_13 = ATgetArgument(b_13, 0);
          d_13 = ATgetArgument(b_13, 1);
          {
            if(((a_13 != NULL) && (a_13 != c_13)))
              _fail(c_13);
            else
              a_13 = c_13;
            if(((z_12 != NULL) && (z_12 != d_13)))
              _fail(d_13);
            else
              z_12 = d_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_10);
      t = SSL_open_file(not_null(a_13), not_null(z_12));
    }
  else
    {
      t = r_10;
      {
        ATerm e_13 = NULL;
        ATerm f_13 = NULL;
        ATerm s_1 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = obsolete_1(t, s_1);
        {
          e_13 = t;
          {
            if(((a_13 != NULL) && (a_13 != e_13)))
              _fail(e_13);
            else
              a_13 = e_13;
            {
              ATerm v_10;
              v_10 = t;
              {
                ATerm g_13 = NULL;
                t = term_z_10;
                {
                  g_13 = t;
                  if(((f_13 != NULL) && (f_13 != g_13)))
                    _fail(g_13);
                  else
                    f_13 = g_13;
                }
              }
              t = v_10;
              t = SSL_open_file(not_null(a_13), not_null(f_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_13 = NULL;
  ATerm o_13 = NULL;
  m_13 = t;
  {
    ATerm b_11;
    b_11 = t;
    {
      ATerm p_13 = NULL;
      t = term_h_11;
      {
        p_13 = t;
        if(((o_13 != NULL) && (o_13 != p_13)))
          _fail(p_13);
        else
          o_13 = p_13;
      }
    }
    t = b_11;
    {
      t = SSL_open_file(not_null(m_13), not_null(o_13));
      t = SSL_close_file(not_null(m_13));
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
  ATerm t_13 = NULL;
  ATerm u_13 = NULL;
  t = term_i_11;
  {
    t = new_0(t);
    {
      u_13 = t;
      if(((t_13 != NULL) && (t_13 != u_13)))
        _fail(u_13);
      else
        t_13 = u_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), term_j_11);
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
  ATerm y_13 = NULL;
  t = new_file_0(t);
  {
    y_13 = t;
    {
      ATerm q_11;
      q_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_z_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_i_11);
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
      t = q_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_stdin_0))
    {
      ATerm k_14 = NULL;
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      t = xtc_new_file_0(t);
      {
        l_14 = t;
        {
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
          {
            ATerm n_14 = NULL;
            t = o_0(t);
            {
              n_14 = t;
              if(((m_14 != NULL) && (m_14 != n_14)))
                _fail(n_14);
              else
                m_14 = n_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_14)), term_s_11));
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
                    t = not_null(k_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_14));
    }
  else
    {
      if(match_cons(i_14, sym_FILE_1))
        {
          j_14 = ATgetArgument(i_14, 0);
          {
            ATerm p_14 = NULL;
            ATerm q_14 = NULL;
            t = not_null(j_14);
            {
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_14)), term_s_11), not_null(j_14)), term_z_11));
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
                            t = not_null(p_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_14));
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
  ATerm d_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_stdin_0))
    {
      ATerm f_15 = NULL,h_15 = NULL;
      ATerm c_12;
      c_12 = t;
      {
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(d_15));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
      }
      t = c_12;
      {
        ATerm i_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(f_15));
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
        t = not_null(h_15);
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
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_FILE_1))
    {
      s_15 = ATgetArgument(r_15, 0);
      {
        ATerm v_15 = NULL,x_15 = NULL;
        ATerm w_15 = NULL;
        t = SSLgetAnnotations(not_null(r_15));
        {
          w_15 = t;
          if(((v_15 != NULL) && (v_15 != w_15)))
            _fail(w_15);
          else
            v_15 = w_15;
        }
        {
          t = not_null(s_15);
          {
            ATerm z_15 = NULL;
            t = l_52(t);
            {
              x_15 = t;
              {
                ATerm a_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(x_15)), not_null(v_15));
                {
                  a_16 = t;
                  if(((z_15 != NULL) && (z_15 != a_16)))
                    _fail(a_16);
                  else
                    z_15 = a_16;
                }
                t = not_null(z_15);
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
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_12);
        }
      else
        {
          t = k_12;
          t = stdin_0(t);
        }
      LocalPopChoice(j_12);
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
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym__2))
    {
      i_16 = ATgetArgument(h_16, 0);
      j_16 = ATgetArgument(h_16, 1);
      t = SSL_copy(not_null(i_16), not_null(j_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_stderr_0))
    {
      ATerm t_16 = NULL,v_16 = NULL;
      ATerm t_12;
      t_12 = t;
      {
        ATerm u_16 = NULL;
        t = SSLgetAnnotations(not_null(r_16));
        {
          u_16 = t;
          if(((t_16 != NULL) && (t_16 != u_16)))
            _fail(u_16);
          else
            t_16 = u_16;
        }
      }
      t = t_12;
      {
        ATerm w_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(t_16));
        {
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
        }
        t = not_null(v_16);
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
  ATerm e_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_stdout_0))
    {
      ATerm g_17 = NULL,i_17 = NULL;
      ATerm u_12;
      u_12 = t;
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
      t = u_12;
      {
        ATerm j_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(g_17));
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
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_FILE_1))
    {
      w_17 = ATgetArgument(v_17, 0);
      {
        ATerm v_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_17 = NULL;
            ATerm z_17 = NULL;
            t = m_0(t);
            {
              z_17 = t;
              {
                if(((y_17 != NULL) && (y_17 != z_17)))
                  _fail(z_17);
                else
                  y_17 = z_17;
                {
                  ATerm y_12 = t;
                  int h_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(h_13);
                    }
                  else
                    {
                      t = y_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), not_null(y_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_17));
            LocalPopChoice(x_12);
          }
        else
          {
            t = v_12;
            {
              ATerm i_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_18 = NULL;
                  ATerm c_18 = NULL;
                  t = m_0(t);
                  {
                    c_18 = t;
                    {
                      if(((b_18 != NULL) && (b_18 != c_18)))
                        _fail(c_18);
                      else
                        b_18 = c_18;
                      {
                        ATerm k_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm l_13 = t;
                            int n_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(n_13);
                              }
                            else
                              {
                                t = l_13;
                                {
                                  ATerm q_13 = t;
                                  int r_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(r_13);
                                    }
                                  else
                                    {
                                      t = q_13;
                                      {
                                        ATerm d_18 = NULL;
                                        d_18 = t;
                                        if(((w_17 != NULL) && (w_17 != d_18)))
                                          _fail(d_18);
                                        else
                                          w_17 = d_18;
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
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), not_null(b_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_17));
                  LocalPopChoice(j_13);
                }
              else
                {
                  t = i_13;
                  {
                    ATerm f_18 = NULL;
                    t = m_0(t);
                    {
                      f_18 = t;
                      if(((w_17 != NULL) && (w_17 != f_18)))
                        _fail(f_18);
                      else
                        w_17 = f_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_17));
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
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
    {
      q_18 = ATgetFirst((ATermList) p_18);
      r_18 = (ATerm) ATgetNext((ATermList) p_18);
      t = not_null(r_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      {
        ATerm s_13;
        s_13 = t;
        {
          ATerm d_19 = NULL;
          ATerm e_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(a_19));
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = (ATerm) ATempty;
              }
            {
              e_19 = t;
              if(((d_19 != NULL) && (d_19 != e_19)))
                _fail(e_19);
              else
                d_19 = e_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_18), not_null(a_19), not_null(d_19));
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
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm p_19 = NULL;
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
    t = r_74(t);
    {
      p_19 = t;
      {
        if(((n_19 != NULL) && (n_19 != p_19)))
          _fail(p_19);
        else
          n_19 = p_19;
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), term_n_10);
              t = table_get_0(t);
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_19 = t;
            k_19 :
            if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
              {
                r_19 = ATgetFirst((ATermList) q_19);
                s_19 = (ATerm) ATgetNext((ATermList) q_19);
                {
                  if(((m_19 != NULL) && (m_19 != r_19)))
                    _fail(r_19);
                  else
                    m_19 = r_19;
                  {
                    if(((l_19 != NULL) && (l_19 != s_19)))
                      _fail(s_19);
                    else
                      l_19 = s_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(n_19), term_n_10, not_null(l_19));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(m_19);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm y_19 = NULL;
                              y_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(y_19));
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
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_remove(not_null(e_20));
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
  ATerm l_20 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm m_20 = NULL;
    ATerm n_20 = NULL;
    t = q_74(t);
    {
      m_20 = t;
      {
        if(((l_20 != NULL) && (l_20 != m_20)))
          _fail(m_20);
        else
          l_20 = m_20;
        {
          ATerm t_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), term_n_10);
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
              t_20 = t;
              if(((n_20 != NULL) && (n_20 != t_20)))
                _fail(t_20);
              else
                n_20 = t_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_20), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(n_20)), (ATerm) ATempty));
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
  ATerm y_20 = NULL,z_20 = NULL;
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
        ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
        ATerm o_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_14;
            t = table_get_0(t);
            LocalPopChoice(t_14);
          }
        else
          {
            t = o_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          a_21 = t;
          x_20 :
          if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
            {
              b_21 = ATgetFirst((ATermList) a_21);
              c_21 = (ATerm) ATgetNext((ATermList) a_21);
              {
                if(((z_20 != NULL) && (z_20 != b_21)))
                  _fail(b_21);
                else
                  z_20 = b_21;
                {
                  if(((y_20 != NULL) && (y_20 != c_21)))
                    _fail(c_21);
                  else
                    y_20 = c_21;
                  {
                    t = not_null(z_20);
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
        ATerm f_21 = NULL;
        ATerm g_21 = NULL;
        t = term_z_11;
        {
          t = get_config_0(t);
          {
            g_21 = t;
            if(((f_21 != NULL) && (f_21 != g_21)))
              _fail(g_21);
            else
              f_21 = g_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_21));
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
    ATerm o_21 = NULL;
    o_21 = t;
    i_21 :
    if(!(match_string(o_21, "-v")))
      {
        if(!(match_string(o_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_j_15;
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
    ATerm r_21 = NULL;
    r_21 = t;
    p_21 :
    if(!(match_string(r_21, "-k")))
      {
        if(!(match_string(r_21, "--keep")))
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
      ATerm w_21 = NULL;
      ATerm x_21 = NULL;
      t = string_to_int_0(t);
      {
        x_21 = t;
        if(((w_21 != NULL) && (w_21 != x_21)))
          _fail(x_21);
        else
          w_21 = x_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, not_null(w_21));
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
  ATerm i_22 = NULL;
  i_22 = t;
  t = SSL_string_to_int(not_null(i_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm r_22 = NULL;
        r_22 = t;
        m_22 :
        if(!(match_string(r_22, "-S")))
          {
            if(!(match_string(r_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_y_15;
        t = set_config_0(t);
        t = term_b_16;
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_c_16;
        return(t);
      }
      t = Option_3(t, i_2, j_2, k_2);
      LocalPopChoice(t_15);
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
              ATerm s_22 = NULL;
              s_22 = t;
              n_22 :
              if(!(match_string(s_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              ATerm v_22 = NULL;
              ATerm f_16;
              f_16 = t;
              {
                ATerm t_22 = NULL;
                ATerm u_22 = NULL;
                t = string_to_int_0(t);
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(t_22));
                  t = set_config_0(t);
                }
              }
              t = f_16;
              {
                ATerm w_22 = NULL;
                w_22 = t;
                if(((v_22 != NULL) && (v_22 != w_22)))
                  _fail(w_22);
                else
                  v_22 = w_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_22));
              }
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              t = term_k_16;
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
                ATerm x_22 = NULL;
                x_22 = t;
                q_22 :
                if(!(match_string(x_22, "-s")))
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
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = p_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
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
    ATerm d_23 = NULL;
    d_23 = t;
    a_23 :
    if(!(match_string(d_23, "-o")))
      {
        if(!(match_string(d_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm g_23 = NULL;
    ATerm z_16;
    z_16 = t;
    {
      ATerm e_23 = NULL;
      ATerm f_23 = NULL;
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(e_23));
        t = set_config_0(t);
      }
    }
    t = z_16;
    {
      ATerm h_23 = NULL;
      h_23 = t;
      if(((g_23 != NULL) && (g_23 != h_23)))
        _fail(h_23);
      else
        g_23 = h_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_23));
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
          ATerm l_23 = NULL;
          l_23 = t;
          k_23 :
          if(!(match_string(l_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_k_17;
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
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  w_23 = t;
  p_23 :
  if(match_string(w_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
        {
          x_23 = ATgetFirst((ATermList) w_23);
          y_23 = (ATerm) ATgetNext((ATermList) w_23);
          q_23 :
          if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
            {
              z_23 = ATgetFirst((ATermList) y_23);
              a_24 = (ATerm) ATgetNext((ATermList) y_23);
              {
                ATerm e_24 = NULL;
                ATerm n_17;
                n_17 = t;
                {
                  t = not_null(x_23);
                  t = j_0(t);
                }
                t = n_17;
                {
                  ATerm f_24 = NULL;
                  t = not_null(z_23);
                  {
                    t = k_0(t);
                    {
                      f_24 = t;
                      if(((e_24 != NULL) && (e_24 != f_24)))
                        _fail(f_24);
                      else
                        e_24 = f_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_24)), not_null(e_24));
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
    ATerm q_24 = NULL;
    q_24 = t;
    j_24 :
    if(!(match_string(q_24, "-i")))
      {
        if(!(match_string(q_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm t_24 = NULL;
    ATerm o_17;
    o_17 = t;
    {
      ATerm r_24 = NULL;
      ATerm s_24 = NULL;
      s_24 = t;
      if(((r_24 != NULL) && (r_24 != s_24)))
        _fail(s_24);
      else
        r_24 = s_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(r_24));
        t = set_config_0(t);
      }
    }
    t = o_17;
    {
      ATerm u_24 = NULL;
      u_24 = t;
      if(((t_24 != NULL) && (t_24 != u_24)))
        _fail(u_24);
      else
        t_24 = u_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_24));
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
  ATerm z_24 = NULL;
  ATerm x_17;
  x_17 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm a_25 = NULL,b_25 = NULL;
      a_25 = t;
      y_24 :
      if(match_cons(a_25, sym_Program_1))
        {
          b_25 = ATgetArgument(a_25, 0);
          if(((z_24 != NULL) && (z_24 != b_25)))
            _fail(b_25);
          else
            z_24 = b_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_18), not_null(z_24)), term_a_18));
      {
        t = printnl_0(t);
        {
          t = term_w_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, term_g_18));
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
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_TicksToSeconds(not_null(e_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym__2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_25), not_null(l_25));
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = SSL_addr(not_null(k_25), not_null(l_25));
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
        ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
        s_25 = t;
        r_25 :
        if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
          {
            t_25 = ATgetFirst((ATermList) s_25);
            u_25 = (ATerm) ATgetNext((ATermList) s_25);
            {
              ATerm x_25 = NULL;
              ATerm y_25 = NULL;
              t = not_null(u_25);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  y_25 = t;
                  if(((x_25 != NULL) && (x_25 != y_25)))
                    _fail(y_25);
                  else
                    x_25 = y_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(x_25));
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
  ATerm f_26 = NULL;
  ATerm h_26 = NULL;
  f_26 = t;
  {
    ATerm i_26 = NULL;
    ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
    t = not_null(f_26);
    {
      i_26 = t;
      {
        t = SSL_explode_term(not_null(i_26));
        {
          k_26 = t;
          e_26 :
          if(match_cons(k_26, sym__2))
            {
              l_26 = ATgetArgument(k_26, 0);
              m_26 = ATgetArgument(k_26, 1);
              if(((h_26 != NULL) && (h_26 != m_26)))
                _fail(m_26);
              else
                h_26 = m_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_26);
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
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym__2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_26), not_null(u_26));
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              t = SSL_gtr(not_null(t_26), not_null(u_26));
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
  ATerm a_27 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
      b_27 = t;
      z_26 :
      if(match_cons(b_27, sym__2))
        {
          c_27 = ATgetArgument(b_27, 0);
          d_27 = ATgetArgument(b_27, 1);
          {
            if(((a_27 != NULL) && (a_27 != c_27)))
              _fail(c_27);
            else
              a_27 = c_27;
            if(((a_27 != NULL) && (a_27 != d_27)))
              _fail(d_27);
            else
              a_27 = d_27;
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
      t = s_18;
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
        ATerm g_27 = NULL;
        ATerm h_27 = NULL;
        t = term_n_5;
        {
          t = get_config_0(t);
          {
            h_27 = t;
            if(((g_27 != NULL) && (g_27 != h_27)))
              _fail(h_27);
            else
              g_27 = h_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), term_w_5);
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
    ATerm l_27 = NULL,n_27 = NULL;
    ATerm b_19;
    b_19 = t;
    {
      ATerm m_27 = NULL;
      t = run_time_0(t);
      {
        m_27 = t;
        if(((l_27 != NULL) && (l_27 != m_27)))
          _fail(m_27);
        else
          l_27 = m_27;
      }
    }
    t = b_19;
    {
      ATerm o_27 = NULL;
      t = term_c_19;
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
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_19), not_null(l_27)), term_f_19), not_null(n_27)));
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
  ATerm v_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Version_0))
    {
      ATerm x_27 = NULL,z_27 = NULL;
      ATerm h_19;
      h_19 = t;
      {
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(v_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
      }
      t = h_19;
      {
        ATerm a_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_27));
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
        t = not_null(z_27);
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
          ATerm o_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_19);
            }
          else
            {
              t = o_19;
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
  ATerm f_28 = NULL;
  f_28 = t;
  t = SSL_table_create(not_null(f_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  {
    ATerm u_19;
    u_19 = t;
    {
      t = term_v_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, not_null(j_28));
          t = table_put_0(t);
        }
      }
    }
    t = u_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  t = SSL_table_destroy(not_null(n_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  t = SSL_exit(not_null(r_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(((ATgetType(v_28) == AT_LIST) && ATisEmpty(v_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
        {
          w_28 = ATgetFirst((ATermList) v_28);
          x_28 = (ATerm) ATgetNext((ATermList) v_28);
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
  ATerm x_19;
  x_19 = t;
  {
    ATerm b_29 = NULL;
    ATerm e_29 = NULL;
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm c_29 = NULL;
          ATerm d_29 = NULL;
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
          t = (ATerm) ATinsert(ATempty, not_null(c_29));
        }
      }
    {
      e_29 = t;
      if(((b_29 != NULL) && (b_29 != e_29)))
        _fail(e_29);
      else
        b_29 = e_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_15, not_null(b_29));
      t = printnl_0(t);
    }
  }
  t = x_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  u_29 = t;
  r_29 :
  if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
    {
      s_29 = ATgetFirst((ATermList) u_29);
      t_29 = (ATerm) ATgetNext((ATermList) u_29);
      {
        ATerm x_29 = NULL;
        t = not_null(t_29);
        {
          ATerm b_20;
          b_20 = t;
          {
            ATerm y_29 = NULL,a_30 = NULL,e_30 = NULL;
            ATerm c_20;
            c_20 = t;
            {
              ATerm z_29 = NULL;
              t = i_0(t);
              {
                z_29 = t;
                if(((y_29 != NULL) && (y_29 != z_29)))
                  _fail(z_29);
                else
                  y_29 = z_29;
              }
            }
            t = c_20;
            {
              ATerm b_30 = NULL;
              t = not_null(s_29);
              {
                t = h_0(t);
                {
                  b_30 = t;
                  if(((a_30 != NULL) && (a_30 != b_30)))
                    _fail(b_30);
                  else
                    a_30 = b_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_29)), not_null(a_30));
                {
                  e_30 = t;
                  if(((x_29 != NULL) && (x_29 != e_30)))
                    _fail(e_30);
                  else
                    x_29 = e_30;
                }
              }
            }
          }
          t = b_20;
          {
            ATerm j_3 (ATerm t)
            {
              t = not_null(x_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_29) == AT_LIST) && ATisEmpty(u_29)))
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
  ATerm p_30 = NULL,q_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym_Program_1))
    {
      q_30 = ATgetArgument(p_30, 0);
      {
        ATerm t_30 = NULL,v_30 = NULL;
        ATerm u_30 = NULL;
        t = SSLgetAnnotations(not_null(p_30));
        {
          u_30 = t;
          if(((t_30 != NULL) && (t_30 != u_30)))
            _fail(u_30);
          else
            t_30 = u_30;
        }
        {
          t = not_null(q_30);
          {
            ATerm x_30 = NULL;
            t = s_52(t);
            {
              v_30 = t;
              {
                ATerm y_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_30)), not_null(t_30));
                {
                  y_30 = t;
                  if(((x_30 != NULL) && (x_30 != y_30)))
                    _fail(y_30);
                  else
                    x_30 = y_30;
                }
                t = not_null(x_30);
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
  ATerm g_31 = NULL;
  ATerm d_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = NULL;
      t = term_c_19;
      {
        t = get_config_0(t);
        {
          h_31 = t;
          if(((g_31 != NULL) && (g_31 != h_31)))
            _fail(h_31);
          else
            g_31 = h_31;
        }
      }
      LocalPopChoice(f_20);
    }
  else
    {
      t = d_20;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            ATerm i_31 = NULL;
            i_31 = t;
            if(((g_31 != NULL) && (g_31 != i_31)))
              _fail(i_31);
            else
              g_31 = i_31;
            return(t);
          }
          t = Program_1(t, m_3);
          return(t);
        }
        t = fetch_1(t, l_3);
      }
    }
  {
    t = term_g_20;
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
              ATerm p_3 (ATerm t)
              {
                ATerm j_31 = NULL;
                ATerm k_31 = NULL;
                k_31 = t;
                if(((j_31 != NULL) && (j_31 != k_31)))
                  _fail(k_31);
                else
                  j_31 = k_31;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_31)), term_k_20);
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
ATerm debug_0 (ATerm t)
{
  ATerm o_20;
  o_20 = t;
  {
    ATerm p_31 = NULL;
    ATerm q_31 = NULL;
    q_31 = t;
    if(((p_31 != NULL) && (p_31 != q_31)))
      _fail(q_31);
    else
      p_31 = q_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, not_null(p_31)));
      t = printnl_0(t);
    }
  }
  t = o_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm p_20;
  p_20 = t;
  {
    t = v_84(t);
    t = debug_0(t);
  }
  t = p_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm z_31 = NULL,f_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym_Undefined_1))
    {
      f_32 = ATgetArgument(z_31, 0);
      {
        ATerm i_32 = NULL,m_32 = NULL;
        ATerm l_32 = NULL;
        t = SSLgetAnnotations(not_null(z_31));
        {
          l_32 = t;
          if(((i_32 != NULL) && (i_32 != l_32)))
            _fail(l_32);
          else
            i_32 = l_32;
        }
        {
          t = not_null(f_32);
          {
            ATerm o_32 = NULL;
            t = t_52(t);
            {
              m_32 = t;
              {
                ATerm r_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_32)), not_null(i_32));
                {
                  r_32 = t;
                  if(((o_32 != NULL) && (o_32 != r_32)))
                    _fail(r_32);
                  else
                    o_32 = r_32;
                }
                t = not_null(o_32);
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
  ATerm w_32 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = Cons_2(t, _id, w_32);
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_76 (ATerm))
{
  t = fetch_1(t, e_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_Help_0))
    {
      ATerm d_33 = NULL,p_33 = NULL;
      ATerm s_20;
      s_20 = t;
      {
        ATerm o_33 = NULL;
        t = SSLgetAnnotations(not_null(b_33));
        {
          o_33 = t;
          if(((d_33 != NULL) && (d_33 != o_33)))
            _fail(o_33);
          else
            d_33 = o_33;
        }
      }
      t = s_20;
      {
        ATerm q_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_33));
        {
          q_33 = t;
          if(((p_33 != NULL) && (p_33 != q_33)))
            _fail(q_33);
          else
            p_33 = q_33;
        }
        t = not_null(p_33);
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
  ATerm y_33 = NULL;
  y_33 = t;
  t = SSL_implode_string(not_null(y_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
        r_34 = t;
        g_34 :
        if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
          {
            s_34 = ATgetFirst((ATermList) r_34);
            t_34 = (ATerm) ATgetNext((ATermList) r_34);
            {
              t = not_null(s_34);
              {
                ATerm r_3 (ATerm t)
                {
                  t = not_null(t_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_3);
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
  ATerm k_35 = NULL;
  ATerm m_35 = NULL;
  k_35 = t;
  {
    ATerm n_35 = NULL;
    ATerm p_35 = NULL,q_35 = NULL,v_35 = NULL;
    t = not_null(k_35);
    {
      n_35 = t;
      {
        t = SSL_explode_term(not_null(n_35));
        {
          p_35 = t;
          d_35 :
          if(match_cons(p_35, sym__2))
            {
              q_35 = ATgetArgument(p_35, 0);
              v_35 = ATgetArgument(p_35, 1);
              j_35 :
              if(match_string(q_35, ""))
                {
                  if(((m_35 != NULL) && (m_35 != v_35)))
                    _fail(v_35);
                  else
                    m_35 = v_35;
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
      t = not_null(m_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm z_35 (ATerm t)
  {
    ATerm w_20 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_35);
        LocalPopChoice(d_21);
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
  t = z_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        t = not_null(d_36);
        {
          ATerm u_3 (ATerm t)
          {
            t = not_null(e_36);
            return(t);
          }
          t = at_end_1(t, u_3);
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
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_21);
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
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_explode_string(not_null(j_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
  s_36 = t;
  r_36 :
  if(match_cons(s_36, sym__2))
    {
      t_36 = ATgetArgument(s_36, 0);
      u_36 = ATgetArgument(s_36, 1);
      {
        ATerm y_36 = NULL,a_37 = NULL;
        ATerm z_36 = NULL;
        t = SSLgetAnnotations(not_null(s_36));
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
        {
          t = not_null(t_36);
          {
            ATerm c_37 = NULL;
            t = p_50(t);
            {
              a_37 = t;
              {
                t = not_null(u_36);
                {
                  ATerm e_37 = NULL;
                  t = q_50(t);
                  {
                    c_37 = t;
                    {
                      ATerm f_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_37), not_null(c_37)), not_null(y_36));
                      {
                        f_37 = t;
                        if(((e_37 != NULL) && (e_37 != f_37)))
                          _fail(f_37);
                        else
                          e_37 = f_37;
                      }
                      t = not_null(e_37);
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
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym__2))
    {
      o_37 = ATgetArgument(n_37, 0);
      p_37 = ATgetArgument(n_37, 1);
      {
        ATerm l_21;
        l_21 = t;
        t = SSL_printnl(not_null(o_37), not_null(p_37));
        t = l_21;
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
  ATerm m_21;
  m_21 = t;
  {
    ATerm x_37 = NULL,z_37 = NULL;
    ATerm n_21;
    n_21 = t;
    {
      ATerm y_37 = NULL;
      t = u_84(t);
      {
        y_37 = t;
        if(((x_37 != NULL) && (x_37 != y_37)))
          _fail(y_37);
        else
          x_37 = y_37;
      }
    }
    t = n_21;
    {
      ATerm c_38 = NULL;
      c_38 = t;
      if(((z_37 != NULL) && (z_37 != c_38)))
        _fail(c_38);
      else
        z_37 = c_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), not_null(x_37)));
        t = printnl_0(t);
      }
    }
  }
  t = m_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm f_38 (ATerm t)
  {
    ATerm q_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = q_21;
        t = Cons_2(t, c_64, f_38);
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  t = SSL_is_string(not_null(j_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm v_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm z_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = z_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, v_3);
            LocalPopChoice(y_21);
          }
        else
          {
            t = v_21;
            {
              ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
              s_38 = t;
              r_38 :
              if(match_cons(s_38, sym_Path_1))
                {
                  t_38 = ATgetArgument(s_38, 0);
                  t = not_null(t_38);
                }
              else
                {
                  if(match_cons(s_38, sym_Var_1))
                    {
                      t_38 = ATgetArgument(s_38, 0);
                      {
                        t = not_null(t_38);
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
                                ATerm w_3 (ATerm t)
                                {
                                  t = term_d_22;
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
                      if(match_cons(s_38, sym_Prefix_2))
                        {
                          t_38 = ATgetArgument(s_38, 0);
                          u_38 = ATgetArgument(s_38, 1);
                          {
                            ATerm z_38 = NULL,d_39 = NULL;
                            ATerm e_22;
                            e_22 = t;
                            {
                              ATerm c_39 = NULL;
                              t = not_null(t_38);
                              {
                                t = eval_config_0(t);
                                {
                                  c_39 = t;
                                  if(((z_38 != NULL) && (z_38 != c_39)))
                                    _fail(c_39);
                                  else
                                    z_38 = c_39;
                                }
                              }
                            }
                            t = e_22;
                            {
                              ATerm e_39 = NULL;
                              t = not_null(u_38);
                              {
                                t = eval_config_0(t);
                                {
                                  e_39 = t;
                                  if(((d_39 != NULL) && (d_39 != e_39)))
                                    _fail(e_39);
                                  else
                                    d_39 = e_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_38), not_null(d_39));
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
  ATerm n_39 = NULL;
  n_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_22, not_null(n_39));
    {
      t = table_get_0(t);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm j_22;
              j_22 = t;
              {
                ATerm p_39 = NULL;
                ATerm q_39 = NULL;
                q_39 = t;
                if(((p_39 != NULL) && (p_39 != q_39)))
                  _fail(q_39);
                else
                  p_39 = q_39;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_22, not_null(n_39), not_null(p_39));
                  t = table_put_0(t);
                }
              }
              t = j_22;
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
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym__2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      t = SSL_table_get(not_null(w_39), not_null(x_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__3))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      h_40 = ATgetArgument(e_40, 2);
      {
        ATerm o_22;
        o_22 = t;
        {
          ATerm l_40 = NULL;
          ATerm m_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_40), not_null(g_40));
          {
            ATerm p_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = p_22;
                t = (ATerm) ATempty;
              }
            {
              m_40 = t;
              if(((l_40 != NULL) && (l_40 != m_40)))
                _fail(m_40);
              else
                l_40 = m_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_40), not_null(g_40), (ATerm) ATinsert(CheckATermList(not_null(l_40)), not_null(h_40)));
            t = table_put_0(t);
          }
        }
        t = o_22;
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
  ATerm q_40 = NULL;
  ATerm r_40 = NULL;
  t = term_i_11;
  {
    t = j_77(t);
    {
      r_40 = t;
      if(((q_40 != NULL) && (q_40 != r_40)))
        _fail(r_40);
      else
        q_40 = r_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_20, term_i_20, not_null(q_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_string(x_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_40) == AT_LIST) && !(ATisEmpty(x_40))))
        {
          y_40 = ATgetFirst((ATermList) x_40);
          z_40 = (ATerm) ATgetNext((ATermList) x_40);
          {
            ATerm c_41 = NULL;
            ATerm z_22;
            z_22 = t;
            {
              t = not_null(y_40);
              t = a_0(t);
            }
            t = z_22;
            {
              ATerm d_41 = NULL;
              t = term_i_11;
              {
                t = d_0(t);
                {
                  d_41 = t;
                  if(((c_41 != NULL) && (c_41 != d_41)))
                    _fail(d_41);
                  else
                    c_41 = d_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_40)), not_null(c_41));
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
    ATerm i_41 = NULL;
    i_41 = t;
    h_41 :
    if(!(match_string(i_41, "--help")))
      {
        if(!(match_string(i_41, "-h")))
          {
            if(!(match_string(i_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_c_23;
    {
      t = set_config_0(t);
      t = term_i_23;
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_j_23;
    return(t);
  }
  t = Option_3(t, x_3, a_4, b_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(((ATgetType(l_41) == AT_LIST) && !(ATisEmpty(l_41))))
    {
      m_41 = ATgetFirst((ATermList) l_41);
      n_41 = (ATerm) ATgetNext((ATermList) l_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
    {
      y_41 = ATgetFirst((ATermList) x_41);
      z_41 = (ATerm) ATgetNext((ATermList) x_41);
      {
        ATerm d_42 = NULL,f_42 = NULL;
        ATerm e_42 = NULL;
        t = SSLgetAnnotations(not_null(x_41));
        {
          e_42 = t;
          if(((d_42 != NULL) && (d_42 != e_42)))
            _fail(e_42);
          else
            d_42 = e_42;
        }
        {
          t = not_null(y_41);
          {
            ATerm h_42 = NULL;
            t = y_51(t);
            {
              f_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm j_42 = NULL;
                  t = z_51(t);
                  {
                    h_42 = t;
                    {
                      ATerm k_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_42)), not_null(f_42)), not_null(d_42));
                      {
                        k_42 = t;
                        if(((j_42 != NULL) && (j_42 != k_42)))
                          _fail(k_42);
                        else
                          j_42 = k_42;
                      }
                      t = not_null(j_42);
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
  ATerm v_42 = NULL;
  v_42 = t;
  u_42 :
  if(((ATgetType(v_42) == AT_LIST) && ATisEmpty(v_42)))
    {
      {
        ATerm x_42 = NULL,z_42 = NULL;
        ATerm m_23;
        m_23 = t;
        {
          ATerm y_42 = NULL;
          t = SSLgetAnnotations(not_null(v_42));
          {
            y_42 = t;
            if(((x_42 != NULL) && (x_42 != y_42)))
              _fail(y_42);
            else
              x_42 = y_42;
          }
        }
        t = m_23;
        {
          ATerm a_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_42));
          {
            a_43 = t;
            if(((z_42 != NULL) && (z_42 != a_43)))
              _fail(a_43);
            else
              z_42 = a_43;
          }
          t = not_null(z_42);
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
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym__2))
    {
      h_43 = ATgetArgument(g_43, 0);
      i_43 = ATgetArgument(g_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_22, not_null(h_43), not_null(i_43));
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
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_23;
        t = h_77(t);
        LocalPopChoice(r_23);
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
    ATerm e_4 (ATerm t)
    {
      ATerm q_43 = NULL;
      ATerm t_23;
      t_23 = t;
      {
        ATerm o_43 = NULL;
        ATerm p_43 = NULL;
        p_43 = t;
        if(((o_43 != NULL) && (o_43 != p_43)))
          _fail(p_43);
        else
          o_43 = p_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(o_43));
          t = set_config_0(t);
        }
      }
      t = t_23;
      {
        ATerm r_43 = NULL;
        r_43 = t;
        if(((q_43 != NULL) && (q_43 != r_43)))
          _fail(r_43);
        else
          q_43 = r_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_43));
      }
      return(t);
    }
    ATerm f_4 (ATerm t)
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              {
                t = h_77(t);
                t = Cons_2(t, _id, f_4);
              }
            }
          LocalPopChoice(v_23);
        }
      else
        {
          t = u_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_4, f_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  ATerm d_24;
  d_24 = t;
  {
    ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
    a_44 = t;
    w_43 :
    if(match_cons(a_44, sym__3))
      {
        b_44 = ATgetArgument(a_44, 0);
        c_44 = ATgetArgument(a_44, 1);
        d_44 = ATgetArgument(a_44, 2);
        {
          if(((x_43 != NULL) && (x_43 != b_44)))
            _fail(b_44);
          else
            x_43 = b_44;
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
              t = SSL_table_put(not_null(x_43), not_null(y_43), not_null(z_43));
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
  ATerm g_44 = NULL;
  ATerm g_24;
  g_24 = t;
  {
    t = term_h_24;
    t = table_put_0(t);
  }
  t = g_24;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm i_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_77(t);
          LocalPopChoice(k_24);
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
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24;
          n_24 = t;
          {
            ATerm o_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_23;
                t = get_config_0(t);
                LocalPopChoice(p_24);
              }
            else
              {
                t = o_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_24;
          {
            t = system_usage_0(t);
            {
              t = term_u_15;
              t = exit_0(t);
            }
          }
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm v_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm h_44 = NULL;
                    h_44 = t;
                    if(((g_44 != NULL) && (g_44 != h_44)))
                      _fail(h_44);
                    else
                      g_44 = h_44;
                    return(t);
                  }
                  t = Undefined_1(t, s_4);
                  return(t);
                }
                t = fetch_1(t, k_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_44)), term_x_24);
                    return(t);
                  }
                  t = say_1(t, t_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_24);
              }
            else
              {
                t = v_24;
                {
                }
              }
          }
        }
      {
        ATerm c_25;
        c_25 = t;
        {
          t = term_h_20;
          t = table_destroy_0(t);
        }
        t = c_25;
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
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_75);
            LocalPopChoice(f_25);
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
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_73(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
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
ATerm io_pp_box_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    ATerm h_5 (ATerm t)
    {
      ATerm k_44 = NULL;
      ATerm l_44 = NULL;
      t = term_p_25;
      {
        t = xtc_find_0(t);
        {
          l_44 = t;
          if(((k_44 != NULL) && (k_44 != l_44)))
            _fail(l_44);
          else
            k_44 = l_44;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_44)), term_q_25);
      return(t);
    }
    t = xtc_transform_2(t, c_5, h_5);
    {
      t = xtc_abox_format_0(t);
      t = xtc_abox2text_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, b_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_box_0(t);
  return(t);
}