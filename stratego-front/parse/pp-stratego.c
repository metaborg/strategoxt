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
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_q_24;
ATerm term_a_24;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_w_14;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_p_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_s_8);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_i_11);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_f_12);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_z_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_f_12);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_f_12);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_f_12);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, (ATerm) ATempty);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2text", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm g_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm j_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm l_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm union_1 (ATerm, ATerm y_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm u_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm y_77 (ATerm), ATerm z_77 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm c_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm p_77 (ATerm));
ATerm assert_1 (ATerm, ATerm a_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm o_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm m_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm q_77 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm x_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm w_71 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm b_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm c_77 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm g_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_80 (ATerm));
ATerm Program_1 (ATerm, ATerm t_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_72 (ATerm));
ATerm map_1 (ATerm, ATerm f_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
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
  ATerm d_1 = NULL;
  d_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_0 (ATerm t)
      {
        ATerm i_1 = NULL;
        ATerm k_1 = NULL;
        i_1 = t;
        {
          ATerm y_1 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_1), not_null(i_1));
          {
            t = table_get_0(t);
            {
              y_1 = t;
              if(((k_1 != NULL) && (k_1 != y_1)))
                _fail(y_1);
              else
                k_1 = y_1;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_1), not_null(k_1));
        }
        return(t);
      }
      t = map_1(t, b_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm t_6;
    t_6 = t;
    {
      ATerm u_2 = NULL;
      ATerm y_2 = NULL;
      t = term_z_6;
      {
        t = get_config_0(t);
        {
          y_2 = t;
          if(((u_2 != NULL) && (u_2 != y_2)))
            _fail(y_2);
          else
            u_2 = y_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), term_a_7);
        t = geq_0(t);
      }
    }
    t = t_6;
    t = k_59(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm b_3 = NULL;
    ATerm c_3 = NULL;
    c_3 = t;
    if(((b_3 != NULL) && (b_3 != c_3)))
      _fail(c_3);
    else
      b_3 = c_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(b_3));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_3 = NULL;
  ATerm k_3 = NULL,l_3 = NULL;
  i_3 = t;
  {
    ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_3)));
    {
      t = table_get_0(t);
      {
        m_3 = t;
        g_3 :
        if(((ATgetType(m_3) == AT_LIST) && !(ATisEmpty(m_3))))
          {
            n_3 = ATgetFirst((ATermList) m_3);
            q_3 = (ATerm) ATgetNext((ATermList) m_3);
            h_3 :
            if(match_cons(n_3, sym__2))
              {
                o_3 = ATgetArgument(n_3, 0);
                p_3 = ATgetArgument(n_3, 1);
                {
                  if(((k_3 != NULL) && (k_3 != o_3)))
                    _fail(o_3);
                  else
                    k_3 = o_3;
                  if(((l_3 != NULL) && (l_3 != p_3)))
                    _fail(p_3);
                  else
                    l_3 = p_3;
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
    t = not_null(l_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym__2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      {
        ATerm c_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_3)));
        {
          t = table_get_0(t);
          {
            ATerm h_0 (ATerm t)
            {
              ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
              d_4 = t;
              v_3 :
              if(match_cons(d_4, sym__2))
                {
                  e_4 = ATgetArgument(d_4, 0);
                  f_4 = ATgetArgument(d_4, 1);
                  {
                    if(((z_3 != NULL) && (z_3 != e_4)))
                      _fail(e_4);
                    else
                      z_3 = e_4;
                    if(((c_4 != NULL) && (c_4 != f_4)))
                      _fail(f_4);
                    else
                      c_4 = f_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, h_0);
          }
        }
        t = not_null(c_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm j_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = filter_1(t, g_75);
              return(t);
            }
            t = Cons_2(t, g_75, p_0);
            ;
            LocalPopChoice(l_7);
          }
        else
          {
            t = j_7;
            {
              ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
              k_4 = t;
              j_4 :
              if(((ATgetType(k_4) == AT_LIST) && !(ATisEmpty(k_4))))
                {
                  l_4 = ATgetFirst((ATermList) k_4);
                  m_4 = (ATerm) ATgetNext((ATermList) k_4);
                  {
                    t = not_null(m_4);
                    t = filter_1(t, g_75);
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
ATerm repeat_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = f_74(t);
      t = p_4(t);
      return(t);
    }
    t = try_1(t, q_0);
    return(t);
  }
  t = p_4(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm o_7;
  o_7 = t;
  {
    ATerm r_0 (ATerm t)
    {
      t = term_q_7;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm s_7 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_7;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, r_0);
  }
  t = o_7;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_7;
    t_7 = t;
    {
      ATerm r_4 = NULL;
      ATerm s_4 = NULL;
      t = term_z_6;
      {
        t = get_config_0(t);
        {
          s_4 = t;
          if(((r_4 != NULL) && (r_4 != s_4)))
            _fail(s_4);
          else
            r_4 = s_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), term_u_7);
        t = geq_0(t);
      }
    }
    t = t_7;
    t = j_59(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm v_4 = NULL;
      ATerm w_4 = NULL;
      t = term_z_6;
      {
        t = get_config_0(t);
        {
          w_4 = t;
          if(((v_4 != NULL) && (v_4 != w_4)))
            _fail(w_4);
          else
            v_4 = w_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), term_y_7);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = l_59(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym__2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      if(((b_5 != NULL) && (b_5 != c_5)))
        _fail(c_5);
      else
        b_5 = c_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
    {
      j_5 = ATgetFirst((ATermList) i_5);
      k_5 = (ATerm) ATgetNext((ATermList) i_5);
      {
        t = d_70(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm n_5 = NULL;
            n_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(n_5));
              t = c_70(t);
            }
            return(t);
          }
          t = fetch_1(t, u_0);
        }
        t = not_null(k_5);
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
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym__2))
    {
      u_5 = ATgetArgument(t_5, 0);
      v_5 = ATgetArgument(t_5, 1);
      {
        t = not_null(u_5);
        {
          ATerm z_5 (ATerm t)
          {
            ATerm b_8 = t;
            int c_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_5);
                ;
                LocalPopChoice(c_8);
              }
            else
              {
                t = b_8;
                {
                  ATerm d_8 = t;
                  int e_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_0 (ATerm t)
                      {
                        t = not_null(v_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_69, v_0);
                      t = z_5(t);
                      ;
                      LocalPopChoice(e_8);
                    }
                  else
                    {
                      t = d_8;
                      t = Cons_2(t, _id, z_5);
                    }
                }
              }
            return(t);
          }
          t = z_5(t);
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
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym__3))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      h_6 = ATgetArgument(e_6, 2);
      {
        ATerm f_8;
        f_8 = t;
        {
          ATerm l_6 = NULL;
          ATerm m_6 = NULL,o_6 = NULL;
          ATerm n_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(g_6));
          {
            ATerm l_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(o_8);
              }
            else
              {
                t = l_8;
                t = (ATerm) ATempty;
              }
            {
              n_6 = t;
              if(((m_6 != NULL) && (m_6 != n_6)))
                _fail(n_6);
              else
                m_6 = n_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), not_null(h_6));
            {
              t = union_0(t);
              {
                o_6 = t;
                if(((l_6 != NULL) && (l_6 != o_6)))
                  _fail(o_6);
                else
                  l_6 = o_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_6), not_null(g_6), not_null(l_6));
            t = set_0(t);
          }
        }
        t = f_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym__2))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      {
        t = not_null(y_6);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
            b_7 = t;
            u_6 :
            if(match_cons(b_7, sym__2))
              {
                c_7 = ATgetArgument(b_7, 0);
                d_7 = ATgetArgument(b_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_6), not_null(c_7), not_null(d_7));
                  t = u_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_0);
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
  ATerm k_7 = NULL;
  ATerm m_7 = NULL;
  k_7 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = term_p_8;
        return(t);
      }
      t = debug_1(t, y_0);
      return(t);
    }
    t = if_verbose5_1(t, x_0);
    {
      ATerm q_8 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(k_7)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_8;
        }
      {
        ATerm r_8;
        r_8 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_s_8, (ATerm) ATinsert(ATempty, not_null(k_7)));
          t = table_put_0(t);
        }
        t = r_8;
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              t = term_x_8;
              return(t);
            }
            t = debug_1(t, a_1);
            return(t);
          }
          t = if_verbose4_1(t, z_0);
          {
            ATerm y_8 = t;
            int z_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(z_8);
              }
            else
              {
                t = y_8;
                t = (ATerm) ATempty;
              }
            {
              ATerm b_1 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  t = term_a_9;
                  return(t);
                }
                t = say_1(t, c_1);
                return(t);
              }
              t = if_verbose6_1(t, b_1);
              {
                ATerm n_7 = NULL;
                n_7 = t;
                if(((m_7 != NULL) && (m_7 != n_7)))
                  _fail(n_7);
                else
                  m_7 = n_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(m_7));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm e_1 (ATerm t)
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = term_b_9;
                          return(t);
                        }
                        t = say_1(t, f_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, e_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_g_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(k_7)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm g_1 (ATerm t)
                            {
                              ATerm h_1 (ATerm t)
                              {
                                t = term_a_9;
                                return(t);
                              }
                              t = say_1(t, h_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, g_1);
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
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_getenv(not_null(r_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm d_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_9;
      t = get_config_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = d_9;
      {
        ATerm i_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_9;
            t = getenv_0(t);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = i_9;
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
    ATerm l_1 (ATerm t)
    {
      t = term_m_9;
      return(t);
    }
    t = debug_1(t, l_1);
    return(t);
  }
  t = if_verbose5_1(t, j_1);
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_9;
          t = table_get_0(t);
          ;
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = r_9;
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_w_9;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = debug_1(t, p_1);
        return(t);
      }
      t = if_verbose5_1(t, o_1);
      {
        t = xtc_load_0(t);
        {
          ATerm a_10 = t;
          int c_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(c_10);
            }
          else
            {
              t = a_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = term_z_9;
                return(t);
              }
              t = debug_1(t, r_1);
              return(t);
            }
            t = if_verbose5_1(t, q_1);
          }
        }
      }
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm v_7 = NULL;
        ATerm w_7 = NULL;
        w_7 = t;
        if(((v_7 != NULL) && (v_7 != w_7)))
          _fail(w_7);
        else
          v_7 = w_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_10), not_null(v_7)), term_g_10);
          {
            t = error_0(t);
            {
              ATerm s_1 (ATerm t)
              {
                t = term_g_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm t_1 (ATerm t)
                    {
                      t = term_o_10;
                      return(t);
                    }
                    t = debug_1(t, t_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, s_1);
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
  ATerm z_7 = NULL;
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL;
      a_8 = t;
      {
        if(((z_7 != NULL) && (z_7 != a_8)))
          _fail(a_8);
        else
          z_7 = a_8;
        t = SSL_ReadFromFile(not_null(z_7));
      }
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm u_1 (ATerm t)
        {
          t = term_r_10;
          return(t);
        }
        t = debug_1(t, u_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_stdin_0))
    {
      ATerm j_8 = NULL;
      ATerm k_8 = NULL;
      t = term_s_10;
      {
        t = ReadFromFile_0(t);
        {
          k_8 = t;
          if(((j_8 != NULL) && (j_8 != k_8)))
            _fail(k_8);
          else
            j_8 = k_8;
        }
      }
      t = not_null(j_8);
    }
  else
    {
      if(match_cons(h_8, sym_FILE_1))
        {
          i_8 = ATgetArgument(h_8, 0);
          {
            ATerm m_8 = NULL;
            ATerm n_8 = NULL;
            t = not_null(i_8);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  n_8 = t;
                  if(((m_8 != NULL) && (m_8 != n_8)))
                    _fail(n_8);
                  else
                    m_8 = n_8;
                }
              }
            }
            t = not_null(m_8);
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
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym__2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      t = SSL_WriteToBinaryFile(not_null(v_8), not_null(w_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm c_9 = NULL;
  ATerm e_9 = NULL;
  c_9 = t;
  {
    ATerm f_9 = NULL;
    t = xtc_new_file_0(t);
    {
      f_9 = t;
      {
        if(((e_9 != NULL) && (e_9 != f_9)))
          _fail(f_9);
        else
          e_9 = f_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), not_null(c_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(e_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_9));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm y_77 (ATerm), ATerm z_77 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, y_77, z_77);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  t = SSL_close_file(not_null(j_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      t = SSL_execvp(not_null(p_9), not_null(q_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  t = SSL_waitpid(not_null(v_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm f_10 = NULL;
  ATerm h_10 = NULL;
  f_10 = t;
  {
    t = fork_0(t);
    {
      h_10 = t;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_10 = NULL;
            j_10 = t;
            b_10 :
            if(match_int(j_10, 0))
              {
                t = not_null(f_10);
                t = c_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
              t = not_null(h_10);
              {
                t = waitpid_0(t);
                {
                  k_10 = t;
                  d_10 :
                  if(match_cons(k_10, sym_WaitStatus_3))
                    {
                      l_10 = ATgetArgument(k_10, 0);
                      m_10 = ATgetArgument(k_10, 1);
                      n_10 = ATgetArgument(k_10, 2);
                      e_10 :
                      if(match_int(l_10, 0))
                        {
                          t = not_null(f_10);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      {
        ATerm v_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(w_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, v_1);
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
ATerm xtc_command_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm c_11 = NULL;
  ATerm z_10;
  z_10 = t;
  {
    ATerm d_11 = NULL;
    t = p_77(t);
    {
      t = xtc_find_warning_0(t);
      {
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
      }
    }
  }
  t = z_10;
  {
    ATerm a_11;
    a_11 = t;
    {
      ATerm e_11 = NULL;
      ATerm f_11 = NULL;
      f_11 = t;
      if(((e_11 != NULL) && (e_11 != f_11)))
        _fail(f_11);
      else
        e_11 = f_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(e_11));
        t = call_0(t);
      }
    }
    t = a_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
        ATerm b_11;
        b_11 = t;
        {
          ATerm v_11 = NULL;
          ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
          t = a_72(t);
          {
            v_11 = t;
            {
              if(((s_11 != NULL) && (s_11 != v_11)))
                _fail(v_11);
              else
                s_11 = v_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_11), not_null(o_11), not_null(p_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), term_i_11);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = g_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_11 = t;
                      l_11 :
                      if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
                        {
                          x_11 = ATgetFirst((ATermList) w_11);
                          y_11 = (ATerm) ATgetNext((ATermList) w_11);
                          {
                            if(((t_11 != NULL) && (t_11 != x_11)))
                              _fail(x_11);
                            else
                              t_11 = x_11;
                            {
                              if(((u_11 != NULL) && (u_11 != y_11)))
                                _fail(y_11);
                              else
                                u_11 = y_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_11), term_i_11, (ATerm) ATinsert(CheckATermList(not_null(u_11)), (ATerm) ATinsert(CheckATermList(not_null(t_11)), not_null(o_11))));
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
        t = b_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm j_11;
  j_11 = t;
  {
    t = o_72(t);
    {
      ATerm w_1 (ATerm t)
      {
        t = term_k_11;
        return(t);
      }
      t = debug_1(t, w_1);
    }
  }
  t = j_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
      i_12 = t;
      d_12 :
      if(match_cons(i_12, sym__2))
        {
          j_12 = ATgetArgument(i_12, 0);
          k_12 = ATgetArgument(i_12, 1);
          {
            if(((h_12 != NULL) && (h_12 != j_12)))
              _fail(j_12);
            else
              h_12 = j_12;
            if(((g_12 != NULL) && (g_12 != k_12)))
              _fail(k_12);
            else
              g_12 = k_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_11);
      t = SSL_open_file(not_null(h_12), not_null(g_12));
    }
  else
    {
      t = q_11;
      {
        ATerm l_12 = NULL;
        ATerm m_12 = NULL;
        ATerm x_1 (ATerm t)
        {
          t = term_z_11;
          return(t);
        }
        t = obsolete_1(t, x_1);
        {
          l_12 = t;
          {
            if(((h_12 != NULL) && (h_12 != l_12)))
              _fail(l_12);
            else
              h_12 = l_12;
            {
              ATerm a_12;
              a_12 = t;
              {
                ATerm n_12 = NULL;
                t = term_b_12;
                {
                  n_12 = t;
                  if(((m_12 != NULL) && (m_12 != n_12)))
                    _fail(n_12);
                  else
                    m_12 = n_12;
                }
              }
              t = a_12;
              t = SSL_open_file(not_null(h_12), not_null(m_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm v_12 = NULL;
  t_12 = t;
  {
    ATerm c_12;
    c_12 = t;
    {
      ATerm w_12 = NULL;
      t = term_e_12;
      {
        w_12 = t;
        if(((v_12 != NULL) && (v_12 != w_12)))
          _fail(w_12);
        else
          v_12 = w_12;
      }
    }
    t = c_12;
    {
      t = SSL_open_file(not_null(t_12), not_null(v_12));
      t = SSL_close_file(not_null(t_12));
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
  ATerm a_13 = NULL;
  ATerm b_13 = NULL;
  t = term_f_12;
  {
    t = new_0(t);
    {
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), term_o_12);
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
  ATerm f_13 = NULL;
  t = new_file_0(t);
  {
    f_13 = t;
    {
      ATerm p_12;
      p_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_b_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_f_12);
            {
              ATerm a_2 (ATerm t)
              {
                t = term_q_12;
                return(t);
              }
              t = assert_1(t, a_2);
            }
          }
        }
      }
      t = p_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_stdin_0))
    {
      ATerm r_13 = NULL;
      ATerm s_13 = NULL;
      ATerm t_13 = NULL;
      t = xtc_new_file_0(t);
      {
        s_13 = t;
        {
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
          {
            ATerm u_13 = NULL;
            t = o_0(t);
            {
              u_13 = t;
              if(((t_13 != NULL) && (t_13 != u_13)))
                _fail(u_13);
              else
                t_13 = u_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_13)), term_r_12));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(r_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_13));
    }
  else
    {
      if(match_cons(p_13, sym_FILE_1))
        {
          q_13 = ATgetArgument(p_13, 0);
          {
            ATerm w_13 = NULL;
            ATerm x_13 = NULL;
            t = not_null(q_13);
            {
              ATerm y_13 = NULL;
              t = xtc_new_file_0(t);
              {
                x_13 = t;
                {
                  if(((w_13 != NULL) && (w_13 != x_13)))
                    _fail(x_13);
                  else
                    w_13 = x_13;
                  {
                    ATerm z_13 = NULL;
                    t = o_0(t);
                    {
                      z_13 = t;
                      if(((y_13 != NULL) && (y_13 != z_13)))
                        _fail(z_13);
                      else
                        y_13 = z_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_13)), term_r_12), not_null(q_13)), term_s_12));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(w_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_13));
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
  ATerm k_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_stdin_0))
    {
      ATerm m_14 = NULL,o_14 = NULL;
      ATerm u_12;
      u_12 = t;
      {
        ATerm n_14 = NULL;
        t = SSLgetAnnotations(not_null(k_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
      }
      t = u_12;
      {
        ATerm p_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(m_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        t = not_null(o_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_FILE_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        ATerm c_15 = NULL,e_15 = NULL;
        ATerm d_15 = NULL;
        t = SSLgetAnnotations(not_null(y_14));
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
        {
          t = not_null(z_14);
          {
            ATerm g_15 = NULL;
            t = m_57(t);
            {
              e_15 = t;
              {
                ATerm h_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(e_15)), not_null(c_15));
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
ATerm xtc_transform_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = z_12;
          t = stdin_0(t);
        }
      LocalPopChoice(y_12);
      t = xtc_transform_file_2(t, r_77, s_77);
    }
  else
    {
      t = x_12;
      t = xtc_transform_term_2(t, r_77, s_77);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, q_77, b_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym__2))
    {
      p_15 = ATgetArgument(o_15, 0);
      q_15 = ATgetArgument(o_15, 1);
      t = SSL_copy(not_null(p_15), not_null(q_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_stderr_0))
    {
      ATerm a_16 = NULL,c_16 = NULL;
      ATerm d_13;
      d_13 = t;
      {
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(y_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
      }
      t = d_13;
      {
        ATerm d_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(a_16));
        {
          d_16 = t;
          if(((c_16 != NULL) && (c_16 != d_16)))
            _fail(d_16);
          else
            c_16 = d_16;
        }
        t = not_null(c_16);
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
  ATerm l_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_stdout_0))
    {
      ATerm n_16 = NULL,p_16 = NULL;
      ATerm e_13;
      e_13 = t;
      {
        ATerm o_16 = NULL;
        t = SSLgetAnnotations(not_null(l_16));
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
      }
      t = e_13;
      {
        ATerm q_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(n_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
        t = not_null(p_16);
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
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_FILE_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL;
            ATerm g_17 = NULL;
            t = m_0(t);
            {
              g_17 = t;
              {
                if(((f_17 != NULL) && (f_17 != g_17)))
                  _fail(g_17);
                else
                  f_17 = g_17;
                {
                  ATerm i_13 = t;
                  int j_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(j_13);
                    }
                  else
                    {
                      t = i_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(f_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm k_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_17 = NULL;
                  ATerm j_17 = NULL;
                  t = m_0(t);
                  {
                    j_17 = t;
                    {
                      if(((i_17 != NULL) && (i_17 != j_17)))
                        _fail(j_17);
                      else
                        i_17 = j_17;
                      {
                        ATerm m_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_13 = t;
                            int v_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(v_13);
                              }
                            else
                              {
                                t = n_13;
                                {
                                  ATerm a_14 = t;
                                  int b_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_14);
                                    }
                                  else
                                    {
                                      t = a_14;
                                      {
                                        ATerm k_17 = NULL;
                                        k_17 = t;
                                        if(((d_17 != NULL) && (d_17 != k_17)))
                                          _fail(k_17);
                                        else
                                          d_17 = k_17;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = m_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(i_17));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
                  ;
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = k_13;
                  {
                    ATerm m_17 = NULL;
                    t = m_0(t);
                    {
                      m_17 = t;
                      if(((d_17 != NULL) && (d_17 != m_17)))
                        _fail(m_17);
                      else
                        d_17 = m_17;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_17));
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
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
    {
      x_17 = ATgetFirst((ATermList) w_17);
      y_17 = (ATerm) ATgetNext((ATermList) w_17);
      t = not_null(y_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm c_14;
        c_14 = t;
        {
          ATerm j_18 = NULL;
          ATerm k_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(g_18));
          {
            ATerm d_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
                t = (ATerm) ATempty;
              }
            {
              k_18 = t;
              if(((j_18 != NULL) && (j_18 != k_18)))
                _fail(k_18);
              else
                j_18 = k_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_18), not_null(g_18), not_null(j_18));
            t = table_put_0(t);
          }
        }
        t = c_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm u_18 = NULL;
    ATerm v_18 = NULL,x_18 = NULL,y_18 = NULL;
    t = x_71(t);
    {
      u_18 = t;
      {
        if(((t_18 != NULL) && (t_18 != u_18)))
          _fail(u_18);
        else
          t_18 = u_18;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), term_i_11);
              t = table_get_0(t);
              ;
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_18 = t;
            q_18 :
            if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
              {
                x_18 = ATgetFirst((ATermList) v_18);
                y_18 = (ATerm) ATgetNext((ATermList) v_18);
                {
                  if(((s_18 != NULL) && (s_18 != x_18)))
                    _fail(x_18);
                  else
                    s_18 = x_18;
                  {
                    if(((r_18 != NULL) && (r_18 != y_18)))
                      _fail(y_18);
                    else
                      r_18 = y_18;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_18), term_i_11, not_null(r_18));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_18);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm z_18 = NULL;
                              z_18 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(z_18));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, c_2);
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
  t = f_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = SSL_remove(not_null(f_19));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  ATerm i_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_63(t);
      t = d_63(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = i_14;
      {
        t = d_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm w_71 (ATerm))
{
  ATerm k_19 = NULL;
  ATerm q_14;
  q_14 = t;
  {
    ATerm l_19 = NULL;
    ATerm m_19 = NULL;
    t = w_71(t);
    {
      l_19 = t;
      {
        if(((k_19 != NULL) && (k_19 != l_19)))
          _fail(l_19);
        else
          k_19 = l_19;
        {
          ATerm n_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), term_i_11);
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                t = (ATerm) ATempty;
              }
            {
              n_19 = t;
              if(((m_19 != NULL) && (m_19 != n_19)))
                _fail(n_19);
              else
                m_19 = n_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_19), term_i_11, (ATerm) ATinsert(CheckATermList(not_null(m_19)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL;
  ATerm d_2 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  t = begin_scope_1(t, d_2);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm t_14;
      t_14 = t;
      {
        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_14;
            t = table_get_0(t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          a_20 = t;
          s_19 :
          if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
            {
              b_20 = ATgetFirst((ATermList) a_20);
              c_20 = (ATerm) ATgetNext((ATermList) a_20);
              {
                if(((u_19 != NULL) && (u_19 != b_20)))
                  _fail(b_20);
                else
                  u_19 = b_20;
                {
                  if(((t_19 != NULL) && (t_19 != c_20)))
                    _fail(c_20);
                  else
                    t_19 = c_20;
                  {
                    t = not_null(u_19);
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, f_2);
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
      t = t_14;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = end_scope_1(t, g_2);
      }
      return(t);
    }
    t = restore_always_2(t, b_77, e_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL;
        ATerm g_20 = NULL;
        t = term_s_12;
        {
          t = get_config_0(t);
          {
            g_20 = t;
            if(((f_20 != NULL) && (f_20 != g_20)))
              _fail(g_20);
            else
              f_20 = g_20;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_20));
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = term_s_10;
      }
    {
      t = c_77(t);
      {
        ATerm i_2 (ATerm t)
        {
          ATerm f_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_r_12;
              t = get_config_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = f_15;
              t = term_j_15;
            }
          return(t);
        }
        t = copy_to_1(t, i_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, h_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm l_20 = NULL;
    l_20 = t;
    k_20 :
    if(!(match_string(l_20, "-v")))
      {
        if(!(match_string(l_20, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_l_15;
    t = set_config_0(t);
    t = term_m_15;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = Option_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm o_20 = NULL;
    o_20 = t;
    m_20 :
    if(!(match_string(o_20, "-k")))
      {
        if(!(match_string(o_20, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm s_15;
    s_15 = t;
    {
      ATerm p_20 = NULL;
      ATerm v_20 = NULL;
      t = string_to_int_0(t);
      {
        v_20 = t;
        if(((p_20 != NULL) && (p_20 != v_20)))
          _fail(v_20);
        else
          p_20 = v_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_15, not_null(p_20));
        t = set_config_0(t);
      }
    }
    t = s_15;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_string_to_int(not_null(y_20));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm g_21 = NULL;
        g_21 = t;
        b_21 :
        if(!(match_string(g_21, "-S")))
          {
            if(!(match_string(g_21, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_e_16;
        t = set_config_0(t);
        t = term_f_16;
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_g_16;
        return(t);
      }
      t = Option_3(t, p_2, q_2, r_2);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm h_21 = NULL;
              h_21 = t;
              c_21 :
              if(!(match_string(h_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              ATerm k_21 = NULL;
              ATerm j_16;
              j_16 = t;
              {
                ATerm i_21 = NULL;
                ATerm j_21 = NULL;
                t = string_to_int_0(t);
                {
                  j_21 = t;
                  if(((i_21 != NULL) && (i_21 != j_21)))
                    _fail(j_21);
                  else
                    i_21 = j_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_6, not_null(i_21));
                  t = set_config_0(t);
                }
              }
              t = j_16;
              {
                ATerm q_21 = NULL;
                q_21 = t;
                if(((k_21 != NULL) && (k_21 != q_21)))
                  _fail(q_21);
                else
                  k_21 = q_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_21));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_m_16;
              return(t);
            }
            t = ArgOption_3(t, s_2, t_2, v_2);
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm r_21 = NULL;
                r_21 = t;
                f_21 :
                if(!(match_string(r_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_s_16;
                t = set_config_0(t);
                t = term_t_16;
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_u_16;
                return(t);
              }
              t = Option_3(t, w_2, x_2, z_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
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
  ATerm a_3 (ATerm t)
  {
    ATerm i_22 = NULL;
    i_22 = t;
    y_21 :
    if(!(match_string(i_22, "-o")))
      {
        if(!(match_string(i_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm m_22 = NULL;
    ATerm z_16;
    z_16 = t;
    {
      ATerm k_22 = NULL;
      ATerm l_22 = NULL;
      l_22 = t;
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(k_22));
        t = set_config_0(t);
      }
    }
    t = z_16;
    {
      ATerm o_22 = NULL;
      o_22 = t;
      if(((m_22 != NULL) && (m_22 != o_22)))
        _fail(o_22);
      else
        m_22 = o_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_22));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3(t, a_3, d_3, e_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = e_17;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm s_22 = NULL;
          s_22 = t;
          r_22 :
          if(!(match_string(s_22, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_n_17;
          t = set_config_0(t);
          t = term_o_17;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_p_17;
          return(t);
        }
        t = Option_3(t, f_3, j_3, r_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  y_22 = t;
  w_22 :
  if(match_string(y_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
        {
          z_22 = ATgetFirst((ATermList) y_22);
          a_23 = (ATerm) ATgetNext((ATermList) y_22);
          x_22 :
          if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
            {
              b_23 = ATgetFirst((ATermList) a_23);
              c_23 = (ATerm) ATgetNext((ATermList) a_23);
              {
                ATerm g_23 = NULL;
                ATerm q_17;
                q_17 = t;
                {
                  t = not_null(z_22);
                  t = j_0(t);
                }
                t = q_17;
                {
                  ATerm h_23 = NULL;
                  t = not_null(b_23);
                  {
                    t = k_0(t);
                    {
                      h_23 = t;
                      if(((g_23 != NULL) && (g_23 != h_23)))
                        _fail(h_23);
                      else
                        g_23 = h_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_23)), not_null(g_23));
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
  ATerm s_3 (ATerm t)
  {
    ATerm o_23 = NULL;
    o_23 = t;
    l_23 :
    if(!(match_string(o_23, "-i")))
      {
        if(!(match_string(o_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm r_23 = NULL;
    ATerm r_17;
    r_17 = t;
    {
      ATerm p_23 = NULL;
      ATerm q_23 = NULL;
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(p_23));
        t = set_config_0(t);
      }
    }
    t = r_17;
    {
      ATerm s_23 = NULL;
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_23));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  t = ArgOption_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm b_18;
  b_18 = t;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm d_24 = NULL,e_24 = NULL;
      d_24 = t;
      w_23 :
      if(match_cons(d_24, sym_Program_1))
        {
          e_24 = ATgetArgument(d_24, 0);
          if(((c_24 != NULL) && (c_24 != e_24)))
            _fail(e_24);
          else
            c_24 = e_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_18), not_null(c_24)), term_c_18));
      {
        t = printnl_0(t);
        {
          t = term_i_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_l_18));
  {
    t = printnl_0(t);
    {
      t = term_i_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  t = SSL_TicksToSeconds(not_null(h_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym__2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_24), not_null(o_24));
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = SSL_addr(not_null(n_24), not_null(o_24));
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
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_70(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
        z_24 = t;
        y_24 :
        if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
          {
            a_25 = ATgetFirst((ATermList) z_24);
            b_25 = (ATerm) ATgetNext((ATermList) z_24);
            {
              ATerm e_25 = NULL;
              ATerm f_25 = NULL;
              t = not_null(b_25);
              {
                t = foldr_2(t, p_70, q_70);
                {
                  f_25 = t;
                  if(((e_25 != NULL) && (e_25 != f_25)))
                    _fail(f_25);
                  else
                    e_25 = f_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_25), not_null(e_25));
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
  ATerm m_25 = NULL;
  ATerm o_25 = NULL;
  m_25 = t;
  {
    ATerm p_25 = NULL;
    ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
    t = not_null(m_25);
    {
      p_25 = t;
      {
        t = SSL_explode_term(not_null(p_25));
        {
          r_25 = t;
          l_25 :
          if(match_cons(r_25, sym__2))
            {
              s_25 = ATgetArgument(r_25, 0);
              t_25 = ATgetArgument(r_25, 1);
              if(((o_25 != NULL) && (o_25 != t_25)))
                _fail(t_25);
              else
                o_25 = t_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_25);
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
    ATerm b_4 (ATerm t)
    {
      t = term_z_15;
      return(t);
    }
    t = crush_2(t, b_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym__2))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      {
        ATerm w_18;
        w_18 = t;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_26), not_null(b_26));
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              t = SSL_gtr(not_null(a_26), not_null(b_26));
            }
        }
        t = w_18;
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
  ATerm h_26 = NULL;
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      i_26 = t;
      g_26 :
      if(match_cons(i_26, sym__2))
        {
          j_26 = ATgetArgument(i_26, 0);
          k_26 = ATgetArgument(i_26, 1);
          {
            if(((h_26 != NULL) && (h_26 != j_26)))
              _fail(j_26);
            else
              h_26 = j_26;
            if(((h_26 != NULL) && (h_26 != k_26)))
              _fail(k_26);
            else
              h_26 = k_26;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm e_19;
    e_19 = t;
    {
      ATerm n_26 = NULL;
      ATerm o_26 = NULL;
      t = term_z_6;
      {
        t = get_config_0(t);
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), term_i_18);
        t = geq_0(t);
      }
    }
    t = e_19;
    t = g_59(t);
    return(t);
  }
  t = try_1(t, g_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm s_26 = NULL,u_26 = NULL;
    ATerm g_19;
    g_19 = t;
    {
      ATerm t_26 = NULL;
      t = run_time_0(t);
      {
        t_26 = t;
        if(((s_26 != NULL) && (s_26 != t_26)))
          _fail(t_26);
        else
          s_26 = t_26;
      }
    }
    t = g_19;
    {
      ATerm v_26 = NULL;
      t = term_h_19;
      {
        t = get_config_0(t);
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), not_null(s_26)), term_i_19), not_null(u_26)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_4);
  {
    t = term_z_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Version_0))
    {
      ATerm e_27 = NULL,g_27 = NULL;
      ATerm o_19;
      o_19 = t;
      {
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(c_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      t = o_19;
      {
        ATerm h_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
        t = not_null(g_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm r_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(v_19);
            }
          else
            {
              t = r_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_4);
  t = f_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_table_create(not_null(m_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  {
    ATerm w_19;
    w_19 = t;
    {
      t = term_x_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_19, term_y_19, not_null(q_27));
          t = table_put_0(t);
        }
      }
    }
    t = w_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_table_destroy(not_null(u_27));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  t = SSL_exit(not_null(y_27));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(((ATgetType(c_28) == AT_LIST) && ATisEmpty(c_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
        {
          d_28 = ATgetFirst((ATermList) c_28);
          e_28 = (ATerm) ATgetNext((ATermList) c_28);
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
  ATerm z_19;
  z_19 = t;
  {
    ATerm h_28 = NULL;
    ATerm k_28 = NULL;
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        {
          ATerm i_28 = NULL;
          ATerm j_28 = NULL;
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
          t = (ATerm) ATinsert(ATempty, not_null(i_28));
        }
      }
    {
      k_28 = t;
      if(((h_28 != NULL) && (h_28 != k_28)))
        _fail(k_28);
      else
        h_28 = k_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_15, not_null(h_28));
      t = printnl_0(t);
    }
  }
  t = z_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  v_28 = t;
  s_28 :
  if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
    {
      t_28 = ATgetFirst((ATermList) v_28);
      u_28 = (ATerm) ATgetNext((ATermList) v_28);
      {
        ATerm y_28 = NULL;
        t = not_null(u_28);
        {
          ATerm h_20;
          h_20 = t;
          {
            ATerm z_28 = NULL,b_29 = NULL,d_29 = NULL;
            ATerm i_20;
            i_20 = t;
            {
              ATerm a_29 = NULL;
              t = i_0(t);
              {
                a_29 = t;
                if(((z_28 != NULL) && (z_28 != a_29)))
                  _fail(a_29);
                else
                  z_28 = a_29;
              }
            }
            t = i_20;
            {
              ATerm c_29 = NULL;
              t = not_null(t_28);
              {
                t = g_0(t);
                {
                  c_29 = t;
                  if(((b_29 != NULL) && (b_29 != c_29)))
                    _fail(c_29);
                  else
                    b_29 = c_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_28)), not_null(b_29));
                {
                  d_29 = t;
                  if(((y_28 != NULL) && (y_28 != d_29)))
                    _fail(d_29);
                  else
                    y_28 = d_29;
                }
              }
            }
          }
          t = h_20;
          {
            ATerm n_4 (ATerm t)
            {
              t = not_null(y_28);
              return(t);
            }
            t = reverse_acc_2(t, g_0, n_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_28) == AT_LIST) && ATisEmpty(v_28)))
        {
          {
            t = term_f_12;
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
  ATerm o_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t_29 :
  if(match_cons(u_29, sym_Program_1))
    {
      v_29 = ATgetArgument(u_29, 0);
      {
        ATerm y_29 = NULL,a_30 = NULL;
        ATerm z_29 = NULL;
        t = SSLgetAnnotations(not_null(u_29));
        {
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
        }
        {
          t = not_null(v_29);
          {
            ATerm c_30 = NULL;
            t = t_57(t);
            {
              a_30 = t;
              {
                ATerm d_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_30)), not_null(y_29));
                {
                  d_30 = t;
                  if(((c_30 != NULL) && (c_30 != d_30)))
                    _fail(d_30);
                  else
                    c_30 = d_30;
                }
                t = not_null(c_30);
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
  ATerm o_30 = NULL;
  ATerm j_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL;
      t = term_h_19;
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
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = j_20;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm t_4 (ATerm t)
          {
            ATerm q_30 = NULL;
            q_30 = t;
            if(((o_30 != NULL) && (o_30 != q_30)))
              _fail(q_30);
            else
              o_30 = q_30;
            return(t);
          }
          t = Program_1(t, t_4);
          return(t);
        }
        t = option_defined_1(t, q_4);
      }
    }
  {
    ATerm u_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(o_30);
        return(t);
      }
      t = short_description_1(t, x_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_4);
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
                ATerm y_4 (ATerm t)
                {
                  ATerm r_30 = NULL;
                  ATerm s_30 = NULL;
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_30)), term_u_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_4);
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm t_30 = NULL;
                    ATerm u_30 = NULL;
                    ATerm e_5 (ATerm t)
                    {
                      t = not_null(o_30);
                      return(t);
                    }
                    t = long_description_1(t, e_5);
                    {
                      u_30 = t;
                      if(((t_30 != NULL) && (t_30 != u_30)))
                        _fail(u_30);
                      else
                        t_30 = u_30;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), term_w_20);
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
  ATerm x_20;
  x_20 = t;
  {
    ATerm a_31 = NULL;
    ATerm b_31 = NULL;
    b_31 = t;
    if(((a_31 != NULL) && (a_31 != b_31)))
      _fail(b_31);
    else
      a_31 = b_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(a_31)));
      t = printnl_0(t);
    }
  }
  t = x_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm z_20;
  z_20 = t;
  {
    t = i_72(t);
    t = debug_0(t);
  }
  t = z_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym_Undefined_1))
    {
      j_31 = ATgetArgument(i_31, 0);
      {
        ATerm m_31 = NULL,o_31 = NULL;
        ATerm n_31 = NULL;
        t = SSLgetAnnotations(not_null(i_31));
        {
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
        }
        {
          t = not_null(j_31);
          {
            ATerm q_31 = NULL;
            t = u_57(t);
            {
              o_31 = t;
              {
                ATerm r_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_31)), not_null(m_31));
                {
                  r_31 = t;
                  if(((q_31 != NULL) && (q_31 != r_31)))
                    _fail(r_31);
                  else
                    q_31 = r_31;
                }
                t = not_null(q_31);
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
ATerm fetch_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm w_31 (ATerm t)
  {
    ATerm a_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_64, _id);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = a_21;
        t = Cons_2(t, _id, w_31);
      }
    return(t);
  }
  t = w_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_79 (ATerm))
{
  t = fetch_1(t, m_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym_Help_0))
    {
      ATerm d_32 = NULL,f_32 = NULL;
      ATerm e_21;
      e_21 = t;
      {
        ATerm e_32 = NULL;
        t = SSLgetAnnotations(not_null(b_32));
        {
          e_32 = t;
          if(((d_32 != NULL) && (d_32 != e_32)))
            _fail(e_32);
          else
            d_32 = e_32;
        }
      }
      t = e_21;
      {
        ATerm g_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_32));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
        t = not_null(f_32);
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
  ATerm m_32 = NULL;
  m_32 = t;
  t = SSL_implode_string(not_null(m_32));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
        t_32 = t;
        s_32 :
        if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
          {
            u_32 = ATgetFirst((ATermList) t_32);
            v_32 = (ATerm) ATgetNext((ATermList) t_32);
            {
              t = not_null(u_32);
              {
                ATerm f_5 (ATerm t)
                {
                  t = not_null(v_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_5);
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
  ATerm f_33 = NULL;
  ATerm h_33 = NULL;
  f_33 = t;
  {
    ATerm i_33 = NULL;
    ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
    t = not_null(f_33);
    {
      i_33 = t;
      {
        t = SSL_explode_term(not_null(i_33));
        {
          k_33 = t;
          d_33 :
          if(match_cons(k_33, sym__2))
            {
              l_33 = ATgetArgument(k_33, 0);
              m_33 = ATgetArgument(k_33, 1);
              e_33 :
              if(match_string(l_33, ""))
                {
                  if(((h_33 != NULL) && (h_33 != m_33)))
                    _fail(m_33);
                  else
                    h_33 = m_33;
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
      t = not_null(h_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm s_33 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_33);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          t = Nil_0(t);
          t = u_64(t);
        }
      }
    return(t);
  }
  t = s_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        t = not_null(h_34);
        {
          ATerm g_5 (ATerm t)
          {
            t = not_null(i_34);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm p_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = p_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  t = SSL_explode_string(not_null(t_34));
  return(t);
}
ATerm _2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym__2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      {
        ATerm l_35 = NULL,n_35 = NULL;
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(f_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
        {
          t = not_null(g_35);
          {
            ATerm p_35 = NULL;
            t = x_50(t);
            {
              n_35 = t;
              {
                t = not_null(h_35);
                {
                  ATerm r_35 = NULL;
                  t = y_50(t);
                  {
                    p_35 = t;
                    {
                      ATerm s_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_35), not_null(p_35)), not_null(l_35));
                      {
                        s_35 = t;
                        if(((r_35 != NULL) && (r_35 != s_35)))
                          _fail(s_35);
                        else
                          r_35 = s_35;
                      }
                      t = not_null(r_35);
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
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      {
        ATerm t_21;
        t_21 = t;
        t = SSL_printnl(not_null(b_36), not_null(c_36));
        t = t_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm i_36 = NULL,k_36 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm j_36 = NULL;
      t = h_72(t);
      {
        j_36 = t;
        if(((i_36 != NULL) && (i_36 != j_36)))
          _fail(j_36);
        else
          i_36 = j_36;
      }
    }
    t = v_21;
    {
      ATerm l_36 = NULL;
      l_36 = t;
      if(((k_36 != NULL) && (k_36 != l_36)))
        _fail(l_36);
      else
        k_36 = l_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_36)), not_null(i_36)));
        t = printnl_0(t);
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm o_36 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = Cons_2(t, f_64, o_36);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  t = SSL_is_string(not_null(q_36));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
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
            ATerm l_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_5);
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            {
              ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
              z_36 = t;
              y_36 :
              if(match_cons(z_36, sym_Path_1))
                {
                  a_37 = ATgetArgument(z_36, 0);
                  t = not_null(a_37);
                }
              else
                {
                  if(match_cons(z_36, sym_Var_1))
                    {
                      a_37 = ATgetArgument(z_36, 0);
                      {
                        t = not_null(a_37);
                        {
                          ATerm d_22 = t;
                          int e_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_22);
                            }
                          else
                            {
                              t = d_22;
                              {
                                ATerm m_5 (ATerm t)
                                {
                                  t = term_f_22;
                                  return(t);
                                }
                                t = debug_1(t, m_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_36, sym_Prefix_2))
                        {
                          a_37 = ATgetArgument(z_36, 0);
                          b_37 = ATgetArgument(z_36, 1);
                          {
                            ATerm g_37 = NULL,i_37 = NULL;
                            ATerm g_22;
                            g_22 = t;
                            {
                              ATerm h_37 = NULL;
                              t = not_null(a_37);
                              {
                                t = eval_config_0(t);
                                {
                                  h_37 = t;
                                  if(((g_37 != NULL) && (g_37 != h_37)))
                                    _fail(h_37);
                                  else
                                    g_37 = h_37;
                                }
                              }
                            }
                            t = g_22;
                            {
                              ATerm j_37 = NULL;
                              t = not_null(b_37);
                              {
                                t = eval_config_0(t);
                                {
                                  j_37 = t;
                                  if(((i_37 != NULL) && (i_37 != j_37)))
                                    _fail(j_37);
                                  else
                                    i_37 = j_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), not_null(i_37));
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
  ATerm r_37 = NULL;
  r_37 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(r_37));
    {
      t = table_get_0(t);
      {
        ATerm o_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_22;
            j_22 = t;
            {
              ATerm t_37 = NULL;
              ATerm u_37 = NULL;
              u_37 = t;
              if(((t_37 != NULL) && (t_37 != u_37)))
                _fail(u_37);
              else
                t_37 = u_37;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_22, not_null(r_37), not_null(t_37));
                t = table_put_0(t);
              }
            }
            t = j_22;
          }
          return(t);
        }
        t = try_1(t, o_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm n_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_62(t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = n_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      t = SSL_table_get(not_null(a_38), not_null(b_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym__3))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      l_38 = ATgetArgument(i_38, 2);
      {
        ATerm q_22;
        q_22 = t;
        {
          ATerm p_38 = NULL;
          ATerm q_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(k_38));
          {
            ATerm t_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                t = (ATerm) ATempty;
              }
            {
              q_38 = t;
              if(((p_38 != NULL) && (p_38 != q_38)))
                _fail(q_38);
              else
                p_38 = q_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_38), not_null(k_38), (ATerm) ATinsert(CheckATermList(not_null(p_38)), not_null(l_38)));
            t = table_put_0(t);
          }
        }
        t = q_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm u_38 = NULL;
  ATerm v_38 = NULL;
  t = term_f_12;
  {
    t = r_80(t);
    {
      v_38 = t;
      if(((u_38 != NULL) && (u_38 != v_38)))
        _fail(v_38);
      else
        u_38 = v_38;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, not_null(u_38));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_string(b_39, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
        {
          c_39 = ATgetFirst((ATermList) b_39);
          d_39 = (ATerm) ATgetNext((ATermList) b_39);
          {
            ATerm g_39 = NULL;
            ATerm v_22;
            v_22 = t;
            {
              t = not_null(c_39);
              t = a_0(t);
            }
            t = v_22;
            {
              ATerm h_39 = NULL;
              t = term_f_12;
              {
                t = c_0(t);
                {
                  h_39 = t;
                  if(((g_39 != NULL) && (g_39 != h_39)))
                    _fail(h_39);
                  else
                    g_39 = h_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(g_39));
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
  ATerm p_5 (ATerm t)
  {
    ATerm m_39 = NULL;
    m_39 = t;
    l_39 :
    if(!(match_string(m_39, "--help")))
      {
        if(!(match_string(m_39, "-h")))
          {
            if(!(match_string(m_39, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_e_23;
    {
      t = set_config_0(t);
      t = term_f_23;
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_i_23;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t_39 = t;
  s_39 :
  if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
    {
      u_39 = ATgetFirst((ATermList) t_39);
      v_39 = (ATerm) ATgetNext((ATermList) t_39);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_39)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_39)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
    {
      g_40 = ATgetFirst((ATermList) f_40);
      h_40 = (ATerm) ATgetNext((ATermList) f_40);
      {
        ATerm l_40 = NULL,n_40 = NULL;
        ATerm m_40 = NULL;
        t = SSLgetAnnotations(not_null(f_40));
        {
          m_40 = t;
          if(((l_40 != NULL) && (l_40 != m_40)))
            _fail(m_40);
          else
            l_40 = m_40;
        }
        {
          t = not_null(g_40);
          {
            ATerm p_40 = NULL;
            t = g_52(t);
            {
              n_40 = t;
              {
                t = not_null(h_40);
                {
                  ATerm r_40 = NULL;
                  t = h_52(t);
                  {
                    p_40 = t;
                    {
                      ATerm s_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_40)), not_null(n_40)), not_null(l_40));
                      {
                        s_40 = t;
                        if(((r_40 != NULL) && (r_40 != s_40)))
                          _fail(s_40);
                        else
                          r_40 = s_40;
                      }
                      t = not_null(r_40);
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
  ATerm c_41 = NULL;
  c_41 = t;
  b_41 :
  if(((ATgetType(c_41) == AT_LIST) && ATisEmpty(c_41)))
    {
      {
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm j_23;
        j_23 = t;
        {
          ATerm f_41 = NULL;
          t = SSLgetAnnotations(not_null(c_41));
          {
            f_41 = t;
            if(((e_41 != NULL) && (e_41 != f_41)))
              _fail(f_41);
            else
              e_41 = f_41;
          }
        }
        t = j_23;
        {
          ATerm h_41 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_41));
          {
            h_41 = t;
            if(((g_41 != NULL) && (g_41 != h_41)))
              _fail(h_41);
            else
              g_41 = h_41;
          }
          t = not_null(g_41);
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
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_22, not_null(o_41), not_null(p_41));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm k_23;
  k_23 = t;
  {
    ATerm w_5 (ATerm t)
    {
      t = term_m_23;
      t = p_80(t);
      return(t);
    }
    t = try_1(t, w_5);
  }
  t = k_23;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm x_41 = NULL;
      ATerm n_23;
      n_23 = t;
      {
        ATerm v_41 = NULL;
        ATerm w_41 = NULL;
        w_41 = t;
        if(((v_41 != NULL) && (v_41 != w_41)))
          _fail(w_41);
        else
          v_41 = w_41;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(v_41));
          t = set_config_0(t);
        }
      }
      t = n_23;
      {
        ATerm y_41 = NULL;
        y_41 = t;
        if(((x_41 != NULL) && (x_41 != y_41)))
          _fail(y_41);
        else
          x_41 = y_41;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_41));
      }
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(x_23);
            }
          else
            {
              t = v_23;
              {
                t = p_80(t);
                t = Cons_2(t, _id, y_5);
              }
            }
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_5, y_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,k_42 = NULL;
  ATerm y_23;
  y_23 = t;
  {
    ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
    l_42 = t;
    f_42 :
    if(match_cons(l_42, sym__3))
      {
        m_42 = ATgetArgument(l_42, 0);
        n_42 = ATgetArgument(l_42, 1);
        o_42 = ATgetArgument(l_42, 2);
        {
          if(((g_42 != NULL) && (g_42 != m_42)))
            _fail(m_42);
          else
            g_42 = m_42;
          {
            if(((h_42 != NULL) && (h_42 != n_42)))
              _fail(n_42);
            else
              h_42 = n_42;
            {
              if(((k_42 != NULL) && (k_42 != o_42)))
                _fail(o_42);
              else
                k_42 = o_42;
              t = SSL_table_put(not_null(g_42), not_null(h_42), not_null(k_42));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm r_42 = NULL;
  ATerm z_23;
  z_23 = t;
  {
    t = term_a_24;
    t = table_put_0(t);
  }
  t = z_23;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_80(t);
          ;
          LocalPopChoice(f_24);
        }
      else
        {
          t = b_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm g_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_24;
            j_24 = t;
            {
              ATerm k_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = k_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_24;
            {
              t = system_usage_0(t);
              {
                t = term_z_15;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_24);
          }
        else
          {
            t = g_24;
            {
              ATerm c_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm s_42 = NULL;
                  s_42 = t;
                  if(((r_42 != NULL) && (r_42 != s_42)))
                    _fail(s_42);
                  else
                    r_42 = s_42;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, c_6);
              {
                ATerm j_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_42)), term_q_24);
                  return(t);
                }
                t = say_1(t, j_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, b_6);
      {
        ATerm r_24;
        r_24 = t;
        {
          t = term_r_20;
          t = table_destroy_0(t);
        }
        t = r_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  t = parse_options_1(t, l_78);
  {
    t = store_options_0(t);
    {
      t = n_78(t);
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_78);
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(v_24);
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
ATerm option_wrap_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  t = option_wrap_4(t, p_78, default_usage_0, _id, q_78);
  return(t);
}
ATerm pp_stratego_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm p_6 (ATerm t)
    {
      ATerm q_6 (ATerm t)
      {
        t = term_w_24;
        return(t);
      }
      t = xtc_transform_1(t, q_6);
      {
        ATerm r_6 (ATerm t)
        {
          t = term_x_24;
          return(t);
        }
        ATerm s_6 (ATerm t)
        {
          ATerm x_42 = NULL;
          ATerm y_42 = NULL;
          t = term_c_25;
          {
            t = xtc_find_0(t);
            {
              y_42 = t;
              if(((x_42 != NULL) && (x_42 != y_42)))
                _fail(y_42);
              else
                x_42 = y_42;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_42)), term_d_25);
          return(t);
        }
        t = xtc_transform_2(t, r_6, s_6);
      }
      return(t);
    }
    t = xtc_io_1(t, p_6);
    return(t);
  }
  t = option_wrap_2(t, io_options_0, k_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pp_stratego_0(t);
  return(t);
}
