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
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_n_24;
ATerm term_y_23;
ATerm term_l_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_n_19;
ATerm term_i_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_t_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_e_14;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_y_6;
ATerm term_p_6;
ATerm term_h_6;
ATerm term_b_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_q_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_x_5, term_b_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_x_5, term_o_7);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_y_9);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_w_10);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_w_10);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_w_10);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_w_10);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__3, term_c_20, term_d_20, (ATerm) ATempty);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm y_73 (ATerm));
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
ATerm obsolete_1 (ATerm, ATerm g_86 (ATerm));
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
ATerm say_1 (ATerm, ATerm a_86 (ATerm));
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
ATerm debug_1 (ATerm, ATerm z_85 (ATerm));
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
ATerm xtc_iowrap_1 (ATerm, ATerm u_73 (ATerm));
ATerm astratego2text_0 (ATerm);
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
      ATerm c_0 (ATerm t)
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
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm l_5 = t;
  int n_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_5;
      o_5 = t;
      {
        ATerm d_3 = NULL;
        ATerm e_3 = NULL;
        t = term_p_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), term_q_5);
          t = geq_0(t);
        }
      }
      t = o_5;
      t = b_59(t);
      LocalPopChoice(n_5);
    }
  else
    {
      t = l_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm v_5;
  v_5 = t;
  {
    ATerm h_3 = NULL;
    ATerm i_3 = NULL;
    i_3 = t;
    if(((h_3 != NULL) && (h_3 != i_3)))
      _fail(i_3);
    else
      h_3 = i_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(h_3));
      t = printnl_0(t);
    }
  }
  t = v_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_3 = NULL;
  ATerm r_3 = NULL,s_3 = NULL;
  p_3 = t;
  {
    ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_3)));
    {
      t = table_get_0(t);
      {
        t_3 = t;
        n_3 :
        if(((ATgetType(t_3) == AT_LIST) && !(ATisEmpty(t_3))))
          {
            u_3 = ATgetFirst((ATermList) t_3);
            x_3 = (ATerm) ATgetNext((ATermList) t_3);
            o_3 :
            if(match_cons(u_3, sym__2))
              {
                v_3 = ATgetArgument(u_3, 0);
                w_3 = ATgetArgument(u_3, 1);
                {
                  if(((r_3 != NULL) && (r_3 != v_3)))
                    _fail(v_3);
                  else
                    r_3 = v_3;
                  if(((s_3 != NULL) && (s_3 != w_3)))
                    _fail(w_3);
                  else
                    s_3 = w_3;
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
    t = not_null(s_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      {
        ATerm j_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_4)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
              k_4 = t;
              c_4 :
              if(match_cons(k_4, sym__2))
                {
                  l_4 = ATgetArgument(k_4, 0);
                  m_4 = ATgetArgument(k_4, 1);
                  {
                    if(((g_4 != NULL) && (g_4 != l_4)))
                      _fail(l_4);
                    else
                      g_4 = l_4;
                    if(((j_4 != NULL) && (j_4 != m_4)))
                      _fail(m_4);
                    else
                      j_4 = m_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, f_0);
          }
        }
        t = not_null(j_4);
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
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_6;
      {
        t = table_get_0(t);
        {
          ATerm p_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm i_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6;
      o_6 = t;
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        t = term_p_5;
        {
          t = get_config_0(t);
          {
            r_4 = t;
            if(((q_4 != NULL) && (q_4 != r_4)))
              _fail(r_4);
            else
              q_4 = r_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), term_p_6);
          t = geq_0(t);
        }
      }
      t = o_6;
      t = a_59(t);
      LocalPopChoice(j_6);
    }
  else
    {
      t = i_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6;
      s_6 = t;
      {
        ATerm u_4 = NULL;
        ATerm v_4 = NULL;
        t = term_p_5;
        {
          t = get_config_0(t);
          {
            v_4 = t;
            if(((u_4 != NULL) && (u_4 != v_4)))
              _fail(v_4);
            else
              u_4 = v_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_y_6);
          t = geq_0(t);
        }
      }
      t = s_6;
      t = c_59(t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
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
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym__2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      if(((a_5 != NULL) && (a_5 != b_5)))
        _fail(b_5);
      else
        a_5 = b_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
    {
      i_5 = ATgetFirst((ATermList) h_5);
      j_5 = (ATerm) ATgetNext((ATermList) h_5);
      {
        t = d_70(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm m_5 = NULL;
            m_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(m_5));
              t = c_70(t);
            }
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(j_5);
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        t = not_null(t_5);
        {
          ATerm y_5 (ATerm t)
          {
            ATerm z_6 = t;
            int d_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_5);
                LocalPopChoice(d_7);
              }
            else
              {
                t = z_6;
                {
                  ATerm e_7 = t;
                  int f_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(u_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_69, r_0);
                      t = y_5(t);
                      LocalPopChoice(f_7);
                    }
                  else
                    {
                      t = e_7;
                      t = Cons_2(t, _id, y_5);
                    }
                }
              }
            return(t);
          }
          t = y_5(t);
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
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym__3))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      g_6 = ATgetArgument(d_6, 2);
      {
        ATerm g_7;
        g_7 = t;
        {
          ATerm k_6 = NULL;
          ATerm l_6 = NULL,n_6 = NULL;
          ATerm m_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(f_6));
          {
            ATerm h_7 = t;
            int i_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_7);
              }
            else
              {
                t = h_7;
                t = (ATerm) ATempty;
              }
            {
              m_6 = t;
              if(((l_6 != NULL) && (l_6 != m_6)))
                _fail(m_6);
              else
                l_6 = m_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(g_6));
            {
              t = union_1(t, eq_0);
              {
                n_6 = t;
                if(((k_6 != NULL) && (k_6 != n_6)))
                  _fail(n_6);
                else
                  k_6 = n_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_6), not_null(f_6), not_null(k_6));
            t = table_put_0(t);
          }
        }
        t = g_7;
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
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym__2))
    {
      w_6 = ATgetArgument(v_6, 0);
      x_6 = ATgetArgument(v_6, 1);
      {
        t = not_null(x_6);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
            a_7 = t;
            t_6 :
            if(match_cons(a_7, sym__2))
              {
                b_7 = ATgetArgument(a_7, 0);
                c_7 = ATgetArgument(a_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_6), not_null(b_7), not_null(c_7));
                  t = l_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_0);
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
  ATerm j_7 = NULL;
  ATerm l_7 = NULL;
  j_7 = t;
  {
    ATerm k_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_7;
      }
    {
      ATerm n_7;
      n_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_5, term_o_7, (ATerm) ATinsert(ATempty, not_null(j_7)));
        t = table_put_0(t);
      }
      t = n_7;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = term_p_7;
            return(t);
          }
          t = debug_1(t, u_0);
          return(t);
        }
        t = if_verbose4_1(t, t_0);
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
              t = (ATerm) ATempty;
            }
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = term_t_7;
                return(t);
              }
              t = say_1(t, w_0);
              return(t);
            }
            t = if_verbose6_1(t, v_0);
            {
              ATerm m_7 = NULL;
              m_7 = t;
              if(((l_7 != NULL) && (l_7 != m_7)))
                _fail(m_7);
              else
                l_7 = m_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_5, not_null(l_7));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = term_w_7;
                        return(t);
                      }
                      t = say_1(t, y_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, x_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_x_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_7)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm a_1 (ATerm t)
                            {
                              t = term_t_7;
                              return(t);
                            }
                            t = say_1(t, a_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, z_0);
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
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_getenv(not_null(q_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm x_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_8;
      t = get_config_0(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = x_7;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_8;
            t = getenv_0(t);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      t = term_k_8;
      return(t);
    }
    t = debug_1(t, c_1);
    return(t);
  }
  t = if_verbose5_1(t, b_1);
  {
    ATerm n_8;
    n_8 = t;
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_8;
          t = table_get_0(t);
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = n_8;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_r_8;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_y_8;
          return(t);
        }
        t = debug_1(t, g_1);
        return(t);
      }
      t = if_verbose5_1(t, f_1);
      {
        t = xtc_load_0(t);
        {
          ATerm z_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(a_9);
            }
          else
            {
              t = z_8;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = term_y_8;
                return(t);
              }
              t = debug_1(t, i_1);
              return(t);
            }
            t = if_verbose5_1(t, h_1);
          }
        }
      }
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm u_7 = NULL;
        ATerm v_7 = NULL;
        v_7 = t;
        if(((u_7 != NULL) && (u_7 != v_7)))
          _fail(v_7);
        else
          u_7 = v_7;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), not_null(u_7)), term_c_9);
          {
            t = error_0(t);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_x_5;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      t = term_g_9;
                      return(t);
                    }
                    t = debug_1(t, l_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, k_1);
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
  ATerm y_7 = NULL;
  ATerm h_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL;
      z_7 = t;
      {
        if(((y_7 != NULL) && (y_7 != z_7)))
          _fail(z_7);
        else
          y_7 = z_7;
        t = SSL_ReadFromFile(not_null(y_7));
      }
      LocalPopChoice(j_9);
    }
  else
    {
      t = h_9;
      {
        ATerm m_1 (ATerm t)
        {
          t = term_k_9;
          return(t);
        }
        t = debug_1(t, m_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_stdin_0))
    {
      ATerm i_8 = NULL;
      ATerm j_8 = NULL;
      t = term_l_9;
      {
        t = ReadFromFile_0(t);
        {
          j_8 = t;
          if(((i_8 != NULL) && (i_8 != j_8)))
            _fail(j_8);
          else
            i_8 = j_8;
        }
      }
      t = not_null(i_8);
    }
  else
    {
      if(match_cons(g_8, sym_FILE_1))
        {
          h_8 = ATgetArgument(g_8, 0);
          {
            ATerm l_8 = NULL;
            ATerm m_8 = NULL;
            t = not_null(h_8);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  m_8 = t;
                  if(((l_8 != NULL) && (l_8 != m_8)))
                    _fail(m_8);
                  else
                    l_8 = m_8;
                }
              }
            }
            t = not_null(l_8);
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
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym__2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      t = SSL_WriteToBinaryFile(not_null(u_8), not_null(v_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm b_9 = NULL;
  ATerm d_9 = NULL;
  b_9 = t;
  {
    ATerm e_9 = NULL;
    t = xtc_new_file_0(t);
    {
      e_9 = t;
      {
        if(((d_9 != NULL) && (d_9 != e_9)))
          _fail(e_9);
        else
          d_9 = e_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(b_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(d_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_9));
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
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_close_file(not_null(i_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      t = SSL_execvp(not_null(o_9), not_null(p_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  t = SSL_waitpid(not_null(u_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm e_10 = NULL;
  ATerm g_10 = NULL;
  e_10 = t;
  {
    t = fork_0(t);
    {
      g_10 = t;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_10 = NULL;
            i_10 = t;
            a_10 :
            if(match_int(i_10, 0))
              {
                t = not_null(e_10);
                t = t_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            {
              ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
              t = not_null(g_10);
              {
                t = waitpid_0(t);
                {
                  j_10 = t;
                  c_10 :
                  if(match_cons(j_10, sym_WaitStatus_3))
                    {
                      k_10 = ATgetArgument(j_10, 0);
                      l_10 = ATgetArgument(j_10, 1);
                      m_10 = ATgetArgument(j_10, 2);
                      d_10 :
                      if(match_int(k_10, 0))
                        {
                          t = not_null(e_10);
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
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      {
        ATerm n_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), not_null(v_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, n_1);
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
  ATerm b_11 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm c_11 = NULL;
    t = x_73(t);
    {
      t = xtc_find_0(t);
      {
        c_11 = t;
        if(((b_11 != NULL) && (b_11 != c_11)))
          _fail(c_11);
        else
          b_11 = c_11;
      }
    }
  }
  t = s_9;
  {
    ATerm t_9;
    t_9 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      e_11 = t;
      if(((d_11 != NULL) && (d_11 != e_11)))
        _fail(e_11);
      else
        d_11 = e_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(d_11));
        t = call_0(t);
      }
    }
    t = t_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
        ATerm v_9;
        v_9 = t;
        {
          ATerm u_11 = NULL;
          ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
          t = t_74(t);
          {
            u_11 = t;
            {
              if(((r_11 != NULL) && (r_11 != u_11)))
                _fail(u_11);
              else
                r_11 = u_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), not_null(n_11), not_null(o_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_9 = t;
                    int x_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_y_9);
                        t = table_get_0(t);
                        LocalPopChoice(x_9);
                      }
                    else
                      {
                        t = w_9;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_11 = t;
                      k_11 :
                      if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
                        {
                          w_11 = ATgetFirst((ATermList) v_11);
                          x_11 = (ATerm) ATgetNext((ATermList) v_11);
                          {
                            if(((s_11 != NULL) && (s_11 != w_11)))
                              _fail(w_11);
                            else
                              s_11 = w_11;
                            {
                              if(((t_11 != NULL) && (t_11 != x_11)))
                                _fail(x_11);
                              else
                                t_11 = x_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), term_y_9, (ATerm) ATinsert(CheckATermList(not_null(t_11)), (ATerm) ATinsert(CheckATermList(not_null(s_11)), not_null(n_11))));
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
        t = v_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm z_9;
  z_9 = t;
  {
    t = g_86(t);
    {
      ATerm o_1 (ATerm t)
      {
        t = term_b_10;
        return(t);
      }
      t = debug_1(t, o_1);
    }
  }
  t = z_9;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  ATerm f_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
      h_12 = t;
      c_12 :
      if(match_cons(h_12, sym__2))
        {
          i_12 = ATgetArgument(h_12, 0);
          j_12 = ATgetArgument(h_12, 1);
          {
            if(((g_12 != NULL) && (g_12 != i_12)))
              _fail(i_12);
            else
              g_12 = i_12;
            if(((f_12 != NULL) && (f_12 != j_12)))
              _fail(j_12);
            else
              f_12 = j_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_10);
      t = SSL_open_file(not_null(g_12), not_null(f_12));
    }
  else
    {
      t = f_10;
      {
        ATerm k_12 = NULL;
        ATerm l_12 = NULL;
        ATerm p_1 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = obsolete_1(t, p_1);
        {
          k_12 = t;
          {
            if(((g_12 != NULL) && (g_12 != k_12)))
              _fail(k_12);
            else
              g_12 = k_12;
            {
              ATerm o_10;
              o_10 = t;
              {
                ATerm m_12 = NULL;
                t = term_p_10;
                {
                  m_12 = t;
                  if(((l_12 != NULL) && (l_12 != m_12)))
                    _fail(m_12);
                  else
                    l_12 = m_12;
                }
              }
              t = o_10;
              t = SSL_open_file(not_null(g_12), not_null(l_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_12 = NULL;
  ATerm u_12 = NULL;
  s_12 = t;
  {
    ATerm q_10;
    q_10 = t;
    {
      ATerm v_12 = NULL;
      t = term_r_10;
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
    }
    t = q_10;
    {
      t = SSL_open_file(not_null(s_12), not_null(u_12));
      t = SSL_close_file(not_null(s_12));
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
  ATerm z_12 = NULL;
  ATerm a_13 = NULL;
  t = term_w_10;
  {
    t = new_0(t);
    {
      a_13 = t;
      if(((z_12 != NULL) && (z_12 != a_13)))
        _fail(a_13);
      else
        z_12 = a_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), term_x_10);
    {
      t = conc_strings_0(t);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
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
  ATerm e_13 = NULL;
  t = new_file_0(t);
  {
    e_13 = t;
    {
      ATerm a_11;
      a_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_p_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_w_10);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_f_11;
                return(t);
              }
              t = assert_1(t, q_1);
            }
          }
        }
      }
      t = a_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_stdin_0))
    {
      ATerm q_13 = NULL;
      ATerm r_13 = NULL;
      ATerm s_13 = NULL;
      t = xtc_new_file_0(t);
      {
        r_13 = t;
        {
          if(((q_13 != NULL) && (q_13 != r_13)))
            _fail(r_13);
          else
            q_13 = r_13;
          {
            ATerm t_13 = NULL;
            t = o_0(t);
            {
              t_13 = t;
              if(((s_13 != NULL) && (s_13 != t_13)))
                _fail(t_13);
              else
                s_13 = t_13;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_13)), term_g_11));
              {
                ATerm h_11 = t;
                int i_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(i_11);
                  }
                else
                  {
                    t = h_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(q_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_13));
    }
  else
    {
      if(match_cons(o_13, sym_FILE_1))
        {
          p_13 = ATgetArgument(o_13, 0);
          {
            ATerm v_13 = NULL;
            ATerm w_13 = NULL;
            t = not_null(p_13);
            {
              ATerm x_13 = NULL;
              t = xtc_new_file_0(t);
              {
                w_13 = t;
                {
                  if(((v_13 != NULL) && (v_13 != w_13)))
                    _fail(w_13);
                  else
                    v_13 = w_13;
                  {
                    ATerm y_13 = NULL;
                    t = o_0(t);
                    {
                      y_13 = t;
                      if(((x_13 != NULL) && (x_13 != y_13)))
                        _fail(y_13);
                      else
                        x_13 = y_13;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_13)), term_g_11), not_null(p_13)), term_j_11));
                      {
                        ATerm p_11 = t;
                        int q_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(q_11);
                          }
                        else
                          {
                            t = p_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(v_13);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_13));
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
  ATerm j_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_stdin_0))
    {
      ATerm l_14 = NULL,n_14 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm m_14 = NULL;
        t = SSLgetAnnotations(not_null(j_14));
        {
          m_14 = t;
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
        }
      }
      t = y_11;
      {
        ATerm o_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(l_14));
        {
          o_14 = t;
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
        }
        t = not_null(n_14);
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
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_FILE_1))
    {
      y_14 = ATgetArgument(x_14, 0);
      {
        ATerm b_15 = NULL,d_15 = NULL;
        ATerm c_15 = NULL;
        t = SSLgetAnnotations(not_null(x_14));
        {
          c_15 = t;
          if(((b_15 != NULL) && (b_15 != c_15)))
            _fail(c_15);
          else
            b_15 = c_15;
        }
        {
          t = not_null(y_14);
          {
            ATerm f_15 = NULL;
            t = k_52(t);
            {
              d_15 = t;
              {
                ATerm g_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(d_15)), not_null(b_15));
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
                t = not_null(f_15);
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
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(d_12);
        }
      else
        {
          t = b_12;
          t = stdin_0(t);
        }
      LocalPopChoice(a_12);
      t = xtc_transform_file_2(t, z_73, a_74);
    }
  else
    {
      t = z_11;
      t = xtc_transform_term_2(t, z_73, a_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      t = SSL_copy(not_null(o_15), not_null(p_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym_stderr_0))
    {
      ATerm z_15 = NULL,b_16 = NULL;
      ATerm e_12;
      e_12 = t;
      {
        ATerm a_16 = NULL;
        t = SSLgetAnnotations(not_null(x_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
      }
      t = e_12;
      {
        ATerm c_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(z_15));
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
        t = not_null(b_16);
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
  ATerm k_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_stdout_0))
    {
      ATerm m_16 = NULL,o_16 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm n_16 = NULL;
        t = SSLgetAnnotations(not_null(k_16));
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
      }
      t = n_12;
      {
        ATerm p_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(m_16));
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
        t = not_null(o_16);
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
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_FILE_1))
    {
      c_17 = ATgetArgument(b_17, 0);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 = NULL;
            ATerm f_17 = NULL;
            t = m_0(t);
            {
              f_17 = t;
              {
                if(((e_17 != NULL) && (e_17 != f_17)))
                  _fail(f_17);
                else
                  e_17 = f_17;
                {
                  ATerm q_12 = t;
                  int r_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(r_12);
                    }
                  else
                    {
                      t = q_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(e_17));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_17));
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm t_12 = t;
              int w_12 = stack_ptr;
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
                        ATerm x_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_12 = t;
                            int b_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(b_13);
                              }
                            else
                              {
                                t = y_12;
                                {
                                  ATerm c_13 = t;
                                  int d_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(d_13);
                                    }
                                  else
                                    {
                                      t = c_13;
                                      {
                                        ATerm j_17 = NULL;
                                        j_17 = t;
                                        if(((c_17 != NULL) && (c_17 != j_17)))
                                          _fail(j_17);
                                        else
                                          c_17 = j_17;
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
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(h_17));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_17));
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = t_12;
                  {
                    ATerm l_17 = NULL;
                    t = m_0(t);
                    {
                      l_17 = t;
                      if(((c_17 != NULL) && (c_17 != l_17)))
                        _fail(l_17);
                      else
                        c_17 = l_17;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_17));
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  v_17 = t;
  u_17 :
  if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
    {
      w_17 = ATgetFirst((ATermList) v_17);
      x_17 = (ATerm) ATgetNext((ATermList) v_17);
      t = not_null(x_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm i_18 = NULL;
          ATerm j_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(f_18));
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
              j_18 = t;
              if(((i_18 != NULL) && (i_18 != j_18)))
                _fail(j_18);
              else
                i_18 = j_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_18), not_null(f_18), not_null(i_18));
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
ATerm end_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm u_18 = NULL;
    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
    t = q_74(t);
    {
      u_18 = t;
      {
        if(((s_18 != NULL) && (s_18 != u_18)))
          _fail(u_18);
        else
          s_18 = u_18;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), term_y_9);
              t = table_get_0(t);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_18 = t;
            p_18 :
            if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
              {
                w_18 = ATgetFirst((ATermList) v_18);
                x_18 = (ATerm) ATgetNext((ATermList) v_18);
                {
                  if(((r_18 != NULL) && (r_18 != w_18)))
                    _fail(w_18);
                  else
                    r_18 = w_18;
                  {
                    if(((q_18 != NULL) && (q_18 != x_18)))
                      _fail(x_18);
                    else
                      q_18 = x_18;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_18), term_y_9, not_null(q_18));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_18);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm y_18 = NULL;
                              y_18 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(y_18));
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
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_remove(not_null(e_19));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_63(t);
      t = b_63(t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        t = b_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm j_19 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm k_19 = NULL;
    ATerm l_19 = NULL;
    t = p_74(t);
    {
      k_19 = t;
      {
        if(((j_19 != NULL) && (j_19 != k_19)))
          _fail(k_19);
        else
          j_19 = k_19;
        {
          ATerm m_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_y_9);
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
              m_19 = t;
              if(((l_19 != NULL) && (l_19 != m_19)))
                _fail(m_19);
              else
                l_19 = m_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_19), term_y_9, (ATerm) ATinsert(CheckATermList(not_null(l_19)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL;
  ATerm s_1 (ATerm t)
  {
    t = term_f_11;
    return(t);
  }
  t = begin_scope_1(t, s_1);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm b_14;
      b_14 = t;
      {
        ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
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
          z_19 = t;
          r_19 :
          if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
            {
              a_20 = ATgetFirst((ATermList) z_19);
              b_20 = (ATerm) ATgetNext((ATermList) z_19);
              {
                if(((y_19 != NULL) && (y_19 != a_20)))
                  _fail(a_20);
                else
                  y_19 = a_20;
                {
                  if(((x_19 != NULL) && (x_19 != b_20)))
                    _fail(b_20);
                  else
                    x_19 = b_20;
                  {
                    t = not_null(y_19);
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
          t = term_f_11;
          return(t);
        }
        t = end_scope_1(t, v_1);
      }
      return(t);
    }
    t = restore_always_2(t, n_73, t_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm h_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL;
        ATerm h_20 = NULL;
        t = term_j_11;
        {
          t = get_config_0(t);
          {
            h_20 = t;
            if(((g_20 != NULL) && (g_20 != h_20)))
              _fail(h_20);
            else
              g_20 = h_20;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_20));
        LocalPopChoice(k_14);
      }
    else
      {
        t = h_14;
        t = term_l_9;
      }
    {
      t = o_73(t);
      {
        ATerm x_1 (ATerm t)
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_g_11;
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
    ATerm k_20 = NULL;
    k_20 = t;
    j_20 :
    if(!(match_string(k_20, "-v")))
      {
        if(!(match_string(k_20, "--version")))
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
    t = term_v_14;
    return(t);
  }
  t = Option_3(t, y_1, a_2, b_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm s_20 = NULL;
    s_20 = t;
    l_20 :
    if(!(match_string(s_20, "-k")))
      {
        if(!(match_string(s_20, "--keep")))
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
      ATerm t_20 = NULL;
      ATerm u_20 = NULL;
      t = string_to_int_0(t);
      {
        u_20 = t;
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(t_20));
        t = set_config_0(t);
      }
    }
    t = z_14;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  t = SSL_string_to_int(not_null(x_20));
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
        ATerm f_21 = NULL;
        f_21 = t;
        a_21 :
        if(!(match_string(f_21, "-S")))
          {
            if(!(match_string(f_21, "--silent")))
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
        t = term_l_15;
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_q_15;
        return(t);
      }
      t = Option_3(t, f_2, g_2, h_2);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm g_21 = NULL;
              g_21 = t;
              b_21 :
              if(!(match_string(g_21, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              ATerm o_21 = NULL;
              ATerm t_15;
              t_15 = t;
              {
                ATerm h_21 = NULL;
                ATerm n_21 = NULL;
                t = string_to_int_0(t);
                {
                  n_21 = t;
                  if(((h_21 != NULL) && (h_21 != n_21)))
                    _fail(n_21);
                  else
                    h_21 = n_21;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(h_21));
                  t = set_config_0(t);
                }
              }
              t = t_15;
              {
                ATerm p_21 = NULL;
                p_21 = t;
                if(((o_21 != NULL) && (o_21 != p_21)))
                  _fail(p_21);
                else
                  o_21 = p_21;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_21));
              }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = term_u_15;
              return(t);
            }
            t = ArgOption_3(t, i_2, j_2, k_2);
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            {
              ATerm l_2 (ATerm t)
              {
                ATerm q_21 = NULL;
                q_21 = t;
                e_21 :
                if(!(match_string(q_21, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_y_15;
                t = set_config_0(t);
                t = term_d_16;
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_e_16;
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
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
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
    ATerm i_22 = NULL;
    i_22 = t;
    e_22 :
    if(!(match_string(i_22, "-o")))
      {
        if(!(match_string(i_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm m_22 = NULL;
    ATerm l_16;
    l_16 = t;
    {
      ATerm k_22 = NULL;
      ATerm l_22 = NULL;
      l_22 = t;
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, not_null(k_22));
        t = set_config_0(t);
      }
    }
    t = l_16;
    {
      ATerm n_22 = NULL;
      n_22 = t;
      if(((m_22 != NULL) && (m_22 != n_22)))
        _fail(n_22);
      else
        m_22 = n_22;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_22));
    }
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
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm r_22 = NULL;
          r_22 = t;
          q_22 :
          if(!(match_string(r_22, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_u_16;
          t = set_config_0(t);
          t = term_v_16;
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_w_16;
          return(t);
        }
        t = Option_3(t, r_2, u_2, v_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  x_22 = t;
  v_22 :
  if(match_string(x_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
        {
          y_22 = ATgetFirst((ATermList) x_22);
          z_22 = (ATerm) ATgetNext((ATermList) x_22);
          w_22 :
          if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
            {
              a_23 = ATgetFirst((ATermList) z_22);
              b_23 = (ATerm) ATgetNext((ATermList) z_22);
              {
                ATerm f_23 = NULL;
                ATerm x_16;
                x_16 = t;
                {
                  t = not_null(y_22);
                  t = j_0(t);
                }
                t = x_16;
                {
                  ATerm g_23 = NULL;
                  t = not_null(a_23);
                  {
                    t = k_0(t);
                    {
                      g_23 = t;
                      if(((f_23 != NULL) && (f_23 != g_23)))
                        _fail(g_23);
                      else
                        f_23 = g_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_23)), not_null(f_23));
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
    ATerm n_23 = NULL;
    n_23 = t;
    k_23 :
    if(!(match_string(n_23, "-i")))
      {
        if(!(match_string(n_23, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm v_23 = NULL;
    ATerm y_16;
    y_16 = t;
    {
      ATerm o_23 = NULL;
      ATerm p_23 = NULL;
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(o_23));
        t = set_config_0(t);
      }
    }
    t = y_16;
    {
      ATerm w_23 = NULL;
      w_23 = t;
      if(((v_23 != NULL) && (v_23 != w_23)))
        _fail(w_23);
      else
        v_23 = w_23;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_23));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = d_17;
      {
        ATerm k_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_17);
          }
        else
          {
            t = k_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm b_24 = NULL;
  ATerm n_17;
  n_17 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm c_24 = NULL,d_24 = NULL;
      c_24 = t;
      a_24 :
      if(match_cons(c_24, sym_Program_1))
        {
          d_24 = ATgetArgument(c_24, 0);
          if(((b_24 != NULL) && (b_24 != d_24)))
            _fail(d_24);
          else
            b_24 = d_24;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, z_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_17), not_null(b_24)), term_o_17));
      {
        t = printnl_0(t);
        {
          t = term_q_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATempty, term_r_17));
  {
    t = printnl_0(t);
    {
      t = term_q_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  t = SSL_TicksToSeconds(not_null(g_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_24), not_null(r_24));
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = SSL_addr(not_null(q_24), not_null(r_24));
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
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_70(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
        y_24 = t;
        x_24 :
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            z_24 = ATgetFirst((ATermList) y_24);
            a_25 = (ATerm) ATgetNext((ATermList) y_24);
            {
              ATerm d_25 = NULL;
              ATerm e_25 = NULL;
              t = not_null(a_25);
              {
                t = foldr_2(t, p_70, q_70);
                {
                  e_25 = t;
                  if(((d_25 != NULL) && (d_25 != e_25)))
                    _fail(e_25);
                  else
                    d_25 = e_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(d_25));
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
  ATerm l_25 = NULL;
  ATerm n_25 = NULL;
  l_25 = t;
  {
    ATerm o_25 = NULL;
    ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
    t = not_null(l_25);
    {
      o_25 = t;
      {
        t = SSL_explode_term(not_null(o_25));
        {
          q_25 = t;
          k_25 :
          if(match_cons(q_25, sym__2))
            {
              r_25 = ATgetArgument(q_25, 0);
              s_25 = ATgetArgument(q_25, 1);
              if(((n_25 != NULL) && (n_25 != s_25)))
                _fail(s_25);
              else
                n_25 = s_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_25);
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
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      {
        ATerm a_18;
        a_18 = t;
        {
          ATerm b_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_25), not_null(a_26));
              LocalPopChoice(g_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(not_null(z_25), not_null(a_26));
            }
        }
        t = a_18;
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
  ATerm g_26 = NULL;
  ATerm h_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
      h_26 = t;
      f_26 :
      if(match_cons(h_26, sym__2))
        {
          i_26 = ATgetArgument(h_26, 0);
          j_26 = ATgetArgument(h_26, 1);
          {
            if(((g_26 != NULL) && (g_26 != i_26)))
              _fail(i_26);
            else
              g_26 = i_26;
            if(((g_26 != NULL) && (g_26 != j_26)))
              _fail(j_26);
            else
              g_26 = j_26;
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
      t = h_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18;
      n_18 = t;
      {
        ATerm m_26 = NULL;
        ATerm n_26 = NULL;
        t = term_p_5;
        {
          t = get_config_0(t);
          {
            n_26 = t;
            if(((m_26 != NULL) && (m_26 != n_26)))
              _fail(n_26);
            else
              m_26 = n_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_26), term_q_17);
          t = geq_0(t);
        }
      }
      t = n_18;
      t = x_58(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm r_26 = NULL,t_26 = NULL;
    ATerm o_18;
    o_18 = t;
    {
      ATerm s_26 = NULL;
      t = run_time_0(t);
      {
        s_26 = t;
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
      }
    }
    t = o_18;
    {
      ATerm u_26 = NULL;
      t = term_t_18;
      {
        t = get_config_0(t);
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_19), not_null(r_26)), term_z_18), not_null(t_26)));
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
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_Version_0))
    {
      ATerm d_27 = NULL,f_27 = NULL;
      ATerm b_19;
      b_19 = t;
      {
        ATerm e_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
      }
      t = b_19;
      {
        ATerm g_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        t = not_null(f_27);
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
  ATerm c_3 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_3);
  t = w_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  t = SSL_table_create(not_null(l_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm h_19;
    h_19 = t;
    {
      t = term_i_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_19, term_n_19, not_null(p_27));
          t = table_put_0(t);
        }
      }
    }
    t = h_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_table_destroy(not_null(t_27));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_exit(not_null(x_27));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  a_28 :
  if(((ATgetType(b_28) == AT_LIST) && ATisEmpty(b_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_28) == AT_LIST) && !(ATisEmpty(b_28))))
        {
          c_28 = ATgetFirst((ATermList) b_28);
          d_28 = (ATerm) ATgetNext((ATermList) b_28);
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
    ATerm g_28 = NULL;
    ATerm j_28 = NULL;
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm h_28 = NULL;
          ATerm i_28 = NULL;
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
          t = (ATerm) ATinsert(ATempty, not_null(h_28));
        }
      }
    {
      j_28 = t;
      if(((g_28 != NULL) && (g_28 != j_28)))
        _fail(j_28);
      else
        g_28 = j_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(g_28));
      t = printnl_0(t);
    }
  }
  t = o_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  u_28 = t;
  r_28 :
  if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
    {
      s_28 = ATgetFirst((ATermList) u_28);
      t_28 = (ATerm) ATgetNext((ATermList) u_28);
      {
        ATerm x_28 = NULL;
        t = not_null(t_28);
        {
          ATerm s_19;
          s_19 = t;
          {
            ATerm y_28 = NULL,b_29 = NULL,d_29 = NULL;
            ATerm t_19;
            t_19 = t;
            {
              ATerm a_29 = NULL;
              t = i_0(t);
              {
                a_29 = t;
                if(((y_28 != NULL) && (y_28 != a_29)))
                  _fail(a_29);
                else
                  y_28 = a_29;
              }
            }
            t = t_19;
            {
              ATerm c_29 = NULL;
              t = not_null(s_28);
              {
                t = h_0(t);
                {
                  c_29 = t;
                  if(((b_29 != NULL) && (b_29 != c_29)))
                    _fail(c_29);
                  else
                    b_29 = c_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_28)), not_null(b_29));
                {
                  d_29 = t;
                  if(((x_28 != NULL) && (x_28 != d_29)))
                    _fail(d_29);
                  else
                    x_28 = d_29;
                }
              }
            }
          }
          t = s_19;
          {
            ATerm f_3 (ATerm t)
            {
              t = not_null(x_28);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_28) == AT_LIST) && ATisEmpty(u_28)))
        {
          {
            t = term_w_10;
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
ATerm short_description_1 (ATerm t, ATerm d_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm t_29 = NULL,u_29 = NULL;
  t_29 = t;
  s_29 :
  if(match_cons(t_29, sym_Program_1))
    {
      u_29 = ATgetArgument(t_29, 0);
      {
        ATerm x_29 = NULL,z_29 = NULL;
        ATerm y_29 = NULL;
        t = SSLgetAnnotations(not_null(t_29));
        {
          y_29 = t;
          if(((x_29 != NULL) && (x_29 != y_29)))
            _fail(y_29);
          else
            x_29 = y_29;
        }
        {
          t = not_null(u_29);
          {
            ATerm d_30 = NULL;
            t = r_52(t);
            {
              z_29 = t;
              {
                ATerm e_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_29)), not_null(x_29));
                {
                  e_30 = t;
                  if(((d_30 != NULL) && (d_30 != e_30)))
                    _fail(e_30);
                  else
                    d_30 = e_30;
                }
                t = not_null(d_30);
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
  ATerm m_30 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL;
      t = term_t_18;
      {
        t = get_config_0(t);
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
      }
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm o_30 = NULL;
            o_30 = t;
            if(((m_30 != NULL) && (m_30 != o_30)))
              _fail(o_30);
            else
              m_30 = o_30;
            return(t);
          }
          t = Program_1(t, k_3);
          return(t);
        }
        t = fetch_1(t, j_3);
      }
    }
  {
    t = term_w_19;
    {
      t = echo_0(t);
      {
        t = term_e_20;
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
              ATerm m_3 (ATerm t)
              {
                ATerm p_30 = NULL;
                ATerm q_30 = NULL;
                q_30 = t;
                if(((p_30 != NULL) && (p_30 != q_30)))
                  _fail(q_30);
                else
                  p_30 = q_30;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), term_f_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, m_3);
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
  ATerm i_20;
  i_20 = t;
  {
    ATerm v_30 = NULL;
    ATerm w_30 = NULL;
    w_30 = t;
    if(((v_30 != NULL) && (v_30 != w_30)))
      _fail(w_30);
    else
      v_30 = w_30;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATempty, not_null(v_30)));
      t = printnl_0(t);
    }
  }
  t = i_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm m_20;
  m_20 = t;
  {
    t = a_86(t);
    t = debug_0(t);
  }
  t = m_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym_Undefined_1))
    {
      e_31 = ATgetArgument(d_31, 0);
      {
        ATerm h_31 = NULL,j_31 = NULL;
        ATerm i_31 = NULL;
        t = SSLgetAnnotations(not_null(d_31));
        {
          i_31 = t;
          if(((h_31 != NULL) && (h_31 != i_31)))
            _fail(i_31);
          else
            h_31 = i_31;
        }
        {
          t = not_null(e_31);
          {
            ATerm l_31 = NULL;
            t = s_52(t);
            {
              j_31 = t;
              {
                ATerm m_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_31)), not_null(h_31));
                {
                  m_31 = t;
                  if(((l_31 != NULL) && (l_31 != m_31)))
                    _fail(m_31);
                  else
                    l_31 = m_31;
                }
                t = not_null(l_31);
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
  ATerm t_31 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_64, _id);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = Cons_2(t, _id, t_31);
      }
    return(t);
  }
  t = t_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_76 (ATerm))
{
  t = fetch_1(t, d_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Help_0))
    {
      ATerm f_32 = NULL,h_32 = NULL;
      ATerm p_20;
      p_20 = t;
      {
        ATerm g_32 = NULL;
        t = SSLgetAnnotations(not_null(y_31));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
      }
      t = p_20;
      {
        ATerm k_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_32));
        {
          k_32 = t;
          if(((h_32 != NULL) && (h_32 != k_32)))
            _fail(k_32);
          else
            h_32 = k_32;
        }
        t = not_null(h_32);
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
  ATerm r_32 = NULL;
  r_32 = t;
  t = SSL_implode_string(not_null(r_32));
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
        ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
        w_32 = t;
        v_32 :
        if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
          {
            x_32 = ATgetFirst((ATermList) w_32);
            y_32 = (ATerm) ATgetNext((ATermList) w_32);
            {
              t = not_null(x_32);
              {
                ATerm q_3 (ATerm t)
                {
                  t = not_null(y_32);
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
  ATerm v_33 = NULL;
  ATerm x_33 = NULL;
  v_33 = t;
  {
    ATerm z_33 = NULL;
    ATerm b_34 = NULL,f_34 = NULL,q_34 = NULL;
    t = not_null(v_33);
    {
      z_33 = t;
      {
        t = SSL_explode_term(not_null(z_33));
        {
          b_34 = t;
          q_33 :
          if(match_cons(b_34, sym__2))
            {
              f_34 = ATgetArgument(b_34, 0);
              q_34 = ATgetArgument(b_34, 1);
              s_33 :
              if(match_string(f_34, ""))
                {
                  if(((x_33 != NULL) && (x_33 != q_34)))
                    _fail(q_34);
                  else
                    x_33 = q_34;
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
      t = not_null(x_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm v_34 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_34);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          t = Nil_0(t);
          t = q_64(t);
        }
      }
    return(t);
  }
  t = v_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,b_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      b_35 = ATgetArgument(y_34, 1);
      {
        t = not_null(z_34);
        {
          ATerm y_3 (ATerm t)
          {
            t = not_null(b_35);
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
  ATerm l_35 = NULL;
  l_35 = t;
  t = SSL_explode_string(not_null(l_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm))
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      a_36 = ATgetArgument(y_35, 1);
      {
        ATerm e_36 = NULL,g_36 = NULL;
        ATerm f_36 = NULL;
        t = SSLgetAnnotations(not_null(y_35));
        {
          f_36 = t;
          if(((e_36 != NULL) && (e_36 != f_36)))
            _fail(f_36);
          else
            e_36 = f_36;
        }
        {
          t = not_null(z_35);
          {
            ATerm i_36 = NULL;
            t = o_50(t);
            {
              g_36 = t;
              {
                t = not_null(a_36);
                {
                  ATerm k_36 = NULL;
                  t = p_50(t);
                  {
                    i_36 = t;
                    {
                      ATerm l_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_36), not_null(i_36)), not_null(e_36));
                      {
                        l_36 = t;
                        if(((k_36 != NULL) && (k_36 != l_36)))
                          _fail(l_36);
                        else
                          k_36 = l_36;
                      }
                      t = not_null(k_36);
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
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym__2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm i_21;
        i_21 = t;
        t = SSL_printnl(not_null(u_36), not_null(v_36));
        t = i_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm j_21;
  j_21 = t;
  {
    ATerm b_37 = NULL,d_37 = NULL;
    ATerm k_21;
    k_21 = t;
    {
      ATerm c_37 = NULL;
      t = z_85(t);
      {
        c_37 = t;
        if(((b_37 != NULL) && (b_37 != c_37)))
          _fail(c_37);
        else
          b_37 = c_37;
      }
    }
    t = k_21;
    {
      ATerm e_37 = NULL;
      e_37 = t;
      if(((d_37 != NULL) && (d_37 != e_37)))
        _fail(e_37);
      else
        d_37 = e_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), not_null(b_37)));
        t = printnl_0(t);
      }
    }
  }
  t = j_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm h_37 (ATerm t)
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = Cons_2(t, b_64, h_37);
      }
    return(t);
  }
  t = h_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = SSL_is_string(not_null(j_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm v_21 = t;
              int w_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(w_21);
                }
              else
                {
                  t = v_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_3);
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
              s_37 = t;
              r_37 :
              if(match_cons(s_37, sym_Path_1))
                {
                  t_37 = ATgetArgument(s_37, 0);
                  t = not_null(t_37);
                }
              else
                {
                  if(match_cons(s_37, sym_Var_1))
                    {
                      t_37 = ATgetArgument(s_37, 0);
                      {
                        t = not_null(t_37);
                        {
                          ATerm x_21 = t;
                          int y_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_21);
                            }
                          else
                            {
                              t = x_21;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = term_z_21;
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
                      if(match_cons(s_37, sym_Prefix_2))
                        {
                          t_37 = ATgetArgument(s_37, 0);
                          u_37 = ATgetArgument(s_37, 1);
                          {
                            ATerm z_37 = NULL,b_38 = NULL;
                            ATerm a_22;
                            a_22 = t;
                            {
                              ATerm a_38 = NULL;
                              t = not_null(t_37);
                              {
                                t = eval_config_0(t);
                                {
                                  a_38 = t;
                                  if(((z_37 != NULL) && (z_37 != a_38)))
                                    _fail(a_38);
                                  else
                                    z_37 = a_38;
                                }
                              }
                            }
                            t = a_22;
                            {
                              ATerm c_38 = NULL;
                              t = not_null(u_37);
                              {
                                t = eval_config_0(t);
                                {
                                  c_38 = t;
                                  if(((b_38 != NULL) && (b_38 != c_38)))
                                    _fail(c_38);
                                  else
                                    b_38 = c_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), not_null(b_38));
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
  ATerm k_38 = NULL;
  k_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_22, not_null(k_38));
    {
      t = table_get_0(t);
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_22;
              f_22 = t;
              {
                ATerm m_38 = NULL;
                ATerm n_38 = NULL;
                n_38 = t;
                if(((m_38 != NULL) && (m_38 != n_38)))
                  _fail(n_38);
                else
                  m_38 = n_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_22, not_null(k_38), not_null(m_38));
                  t = table_put_0(t);
                }
              }
              t = f_22;
            }
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
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
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_62(t);
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
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym__2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      t = SSL_table_get(not_null(t_38), not_null(u_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym__3))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      e_39 = ATgetArgument(b_39, 2);
      {
        ATerm j_22;
        j_22 = t;
        {
          ATerm i_39 = NULL;
          ATerm j_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), not_null(d_39));
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                t = (ATerm) ATempty;
              }
            {
              j_39 = t;
              if(((i_39 != NULL) && (i_39 != j_39)))
                _fail(j_39);
              else
                i_39 = j_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_39), not_null(d_39), (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(e_39)));
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
ATerm register_usage_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm n_39 = NULL;
  ATerm o_39 = NULL;
  t = term_w_10;
  {
    t = i_77(t);
    {
      o_39 = t;
      if(((n_39 != NULL) && (n_39 != o_39)))
        _fail(o_39);
      else
        n_39 = o_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_20, term_d_20, not_null(n_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_string(u_39, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
        {
          v_39 = ATgetFirst((ATermList) u_39);
          w_39 = (ATerm) ATgetNext((ATermList) u_39);
          {
            ATerm z_39 = NULL;
            ATerm s_22;
            s_22 = t;
            {
              t = not_null(v_39);
              t = a_0(t);
            }
            t = s_22;
            {
              ATerm a_40 = NULL;
              t = term_w_10;
              {
                t = d_0(t);
                {
                  a_40 = t;
                  if(((z_39 != NULL) && (z_39 != a_40)))
                    _fail(a_40);
                  else
                    z_39 = a_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_39)), not_null(z_39));
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
  ATerm b_4 (ATerm t)
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
    t = term_u_22;
    {
      t = set_config_0(t);
      t = term_c_23;
    }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = Option_3(t, b_4, h_4, i_4);
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
ATerm Cons_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL,z_40 = NULL;
  u_40 = t;
  t_40 :
  if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
    {
      v_40 = ATgetFirst((ATermList) u_40);
      z_40 = (ATerm) ATgetNext((ATermList) u_40);
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
            t = x_51(t);
            {
              f_41 = t;
              {
                t = not_null(z_40);
                {
                  ATerm j_41 = NULL;
                  t = y_51(t);
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
        ATerm e_23;
        e_23 = t;
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
        t = e_23;
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
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym__2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_22, not_null(g_42), not_null(h_42));
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
  ATerm h_23;
  h_23 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_23;
        t = g_77(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
        }
      }
  }
  t = h_23;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm s_42 = NULL;
      ATerm m_23;
      m_23 = t;
      {
        ATerm q_42 = NULL;
        ATerm r_42 = NULL;
        r_42 = t;
        if(((q_42 != NULL) && (q_42 != r_42)))
          _fail(r_42);
        else
          q_42 = r_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, not_null(q_42));
          t = set_config_0(t);
        }
      }
      t = m_23;
      {
        ATerm t_42 = NULL;
        t_42 = t;
        if(((s_42 != NULL) && (s_42 != t_42)))
          _fail(t_42);
        else
          s_42 = t_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_42));
      }
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm q_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                t = g_77(t);
                t = Cons_2(t, _id, o_4);
              }
            }
          LocalPopChoice(r_23);
        }
      else
        {
          t = q_23;
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
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
    c_43 = t;
    y_42 :
    if(match_cons(c_43, sym__3))
      {
        d_43 = ATgetArgument(c_43, 0);
        e_43 = ATgetArgument(c_43, 1);
        f_43 = ATgetArgument(c_43, 2);
        {
          if(((z_42 != NULL) && (z_42 != d_43)))
            _fail(d_43);
          else
            z_42 = d_43;
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
              t = SSL_table_put(not_null(z_42), not_null(a_43), not_null(b_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm i_43 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    t = term_y_23;
    t = table_put_0(t);
  }
  t = x_23;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm z_23 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_77(t);
          LocalPopChoice(e_24);
        }
      else
        {
          t = z_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_4);
    {
      ATerm f_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_24;
          i_24 = t;
          {
            ATerm j_24 = t;
            int k_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_22;
                t = get_config_0(t);
                LocalPopChoice(k_24);
              }
            else
              {
                t = j_24;
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
          t = f_24;
          {
            ATerm l_24 = t;
            int m_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm j_43 = NULL;
                    j_43 = t;
                    if(((i_43 != NULL) && (i_43 != j_43)))
                      _fail(j_43);
                    else
                      i_43 = j_43;
                    return(t);
                  }
                  t = Undefined_1(t, t_4);
                  return(t);
                }
                t = fetch_1(t, s_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_43)), term_n_24);
                    return(t);
                  }
                  t = say_1(t, w_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_17;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(m_24);
              }
            else
              {
                t = l_24;
                {
                }
              }
          }
        }
      {
        ATerm s_24;
        s_24 = t;
        {
          t = term_c_20;
          t = table_destroy_0(t);
        }
        t = s_24;
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
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_75);
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm v_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
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
  ATerm x_4 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_73(t);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = xtc_io_1(t, t_73);
    return(t);
  }
  t = option_wrap_2(t, x_4, c_5);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm r_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, r_73);
  return(t);
}
ATerm xtc_iowrap_1 (ATerm t, ATerm u_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, u_73);
  return(t);
}
ATerm astratego2text_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = term_f_25;
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm m_43 = NULL;
      ATerm n_43 = NULL;
      t = term_g_25;
      {
        t = xtc_find_0(t);
        {
          n_43 = t;
          if(((m_43 != NULL) && (m_43 != n_43)))
            _fail(n_43);
          else
            m_43 = n_43;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_43)), term_h_25);
      return(t);
    }
    t = xtc_transform_2(t, e_5, f_5);
    {
      ATerm k_5 (ATerm t)
      {
        t = term_i_25;
        return(t);
      }
      t = xtc_transform_1(t, k_5);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, d_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = astratego2text_0(t);
  return(t);
}
