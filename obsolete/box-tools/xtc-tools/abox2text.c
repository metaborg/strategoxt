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
ATerm term_u_24;
ATerm term_w_23;
ATerm term_l_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_z_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_x_14;
ATerm term_g_12;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_r_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_v_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_c_5;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__2, term_a_6, term_h_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_a_6, term_w_7);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_l_10);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_f_11);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_z_4, term_b_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_f_11);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_f_11);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__3, term_g_20, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm pass_width_0 (ATerm);
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
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm y_73 (ATerm));
ATerm assert_1 (ATerm, ATerm u_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm i_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm abox2text_0 (ATerm);
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
ATerm foldr_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm crush_2 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_80 (ATerm));
ATerm Program_1 (ATerm, ATerm k_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_79 (ATerm));
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
ATerm debug_1 (ATerm, ATerm b_75 (ATerm));
ATerm map_1 (ATerm, ATerm c_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm io_abox2text_0 (ATerm);
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
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
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
  t = term_z_4;
  {
    ATerm a_5 = t;
    int b_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(b_5);
      }
    else
      {
        t = a_5;
        t = term_c_5;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_c_5);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_2)), term_z_4);
  return(t);
}
ATerm pass_width_0 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_5;
      t = get_config_0(t);
      LocalPopChoice(f_5);
      {
        ATerm h_3 = NULL;
        ATerm i_3 = NULL;
        i_3 = t;
        if(((h_3 != NULL) && (h_3 != i_3)))
          _fail(i_3);
        else
          h_3 = i_3;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), term_g_5);
      }
    }
  else
    {
      t = e_5;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  p_3 = t;
  o_3 :
  if(match_cons(p_3, sym_stdin_0))
    {
      ATerm r_3 = NULL;
      ATerm s_3 = NULL;
      t = term_h_5;
      {
        t = ReadFromFile_0(t);
        {
          s_3 = t;
          if(((r_3 != NULL) && (r_3 != s_3)))
            _fail(s_3);
          else
            r_3 = s_3;
        }
      }
      t = not_null(r_3);
    }
  else
    {
      if(match_cons(p_3, sym_FILE_1))
        {
          q_3 = ATgetArgument(p_3, 0);
          {
            ATerm u_3 = NULL;
            ATerm v_3 = NULL;
            t = not_null(q_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  v_3 = t;
                  if(((u_3 != NULL) && (u_3 != v_3)))
                    _fail(v_3);
                  else
                    u_3 = v_3;
                }
              }
            }
            t = not_null(u_3);
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
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      e_4 = ATgetArgument(c_4, 1);
      t = SSL_WriteToBinaryFile(not_null(d_4), not_null(e_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL;
  k_4 = t;
  {
    ATerm n_4 = NULL;
    t = xtc_new_file_0(t);
    {
      n_4 = t;
      {
        if(((m_4 != NULL) && (m_4 != n_4)))
          _fail(n_4);
        else
          m_4 = n_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), not_null(k_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(m_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_4));
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
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_close_file(not_null(r_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      t = SSL_execvp(not_null(x_4), not_null(y_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_waitpid(not_null(d_5));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm n_5 = NULL;
  ATerm p_5 = NULL;
  n_5 = t;
  {
    t = fork_0(t);
    {
      p_5 = t;
      {
        ATerm i_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL;
            r_5 = t;
            j_5 :
            if(match_int(r_5, 0))
              {
                t = not_null(n_5);
                t = u_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(k_5);
          }
        else
          {
            t = i_5;
            {
              ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
              t = not_null(p_5);
              {
                t = waitpid_0(t);
                {
                  s_5 = t;
                  l_5 :
                  if(match_cons(s_5, sym_WaitStatus_3))
                    {
                      t_5 = ATgetArgument(s_5, 0);
                      u_5 = ATgetArgument(s_5, 1);
                      v_5 = ATgetArgument(s_5, 2);
                      m_5 :
                      if(match_int(t_5, 0))
                        {
                          t = not_null(n_5);
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
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym__2))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(e_6));
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
  ATerm j_6 = NULL;
  j_6 = t;
  t = SSL_table_keys(not_null(j_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_6 = NULL;
  p_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm r_6 = NULL;
        ATerm t_6 = NULL;
        r_6 = t;
        {
          ATerm u_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), not_null(r_6));
          {
            t = table_get_0(t);
            {
              u_6 = t;
              if(((t_6 != NULL) && (t_6 != u_6)))
                _fail(u_6);
              else
                t_6 = u_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(t_6));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm o_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5;
      w_5 = t;
      {
        ATerm z_6 = NULL;
        ATerm a_7 = NULL;
        t = term_z_4;
        {
          t = get_config_0(t);
          {
            a_7 = t;
            if(((z_6 != NULL) && (z_6 != a_7)))
              _fail(a_7);
            else
              z_6 = a_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), term_x_5);
          t = geq_0(t);
        }
      }
      t = w_5;
      t = c_59(t);
      LocalPopChoice(q_5);
    }
  else
    {
      t = o_5;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_5;
  y_5 = t;
  {
    ATerm d_7 = NULL;
    ATerm e_7 = NULL;
    e_7 = t;
    if(((d_7 != NULL) && (d_7 != e_7)))
      _fail(e_7);
    else
      d_7 = e_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_5, not_null(d_7));
      t = printnl_0(t);
    }
  }
  t = y_5;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL,n_7 = NULL;
  k_7 = t;
  {
    ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_7)));
    {
      t = table_get_0(t);
      {
        o_7 = t;
        i_7 :
        if(((ATgetType(o_7) == AT_LIST) && !(ATisEmpty(o_7))))
          {
            p_7 = ATgetFirst((ATermList) o_7);
            s_7 = (ATerm) ATgetNext((ATermList) o_7);
            j_7 :
            if(match_cons(p_7, sym__2))
              {
                q_7 = ATgetArgument(p_7, 0);
                r_7 = ATgetArgument(p_7, 1);
                {
                  if(((m_7 != NULL) && (m_7 != q_7)))
                    _fail(q_7);
                  else
                    m_7 = q_7;
                  if(((n_7 != NULL) && (n_7 != r_7)))
                    _fail(r_7);
                  else
                    n_7 = r_7;
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
    t = not_null(n_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym__2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      {
        ATerm e_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_8)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
              f_8 = t;
              x_7 :
              if(match_cons(f_8, sym__2))
                {
                  g_8 = ATgetArgument(f_8, 0);
                  h_8 = ATgetArgument(f_8, 1);
                  {
                    if(((b_8 != NULL) && (b_8 != g_8)))
                      _fail(g_8);
                    else
                      b_8 = g_8;
                    if(((e_8 != NULL) && (e_8 != h_8)))
                      _fail(h_8);
                    else
                      e_8 = h_8;
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
        t = not_null(e_8);
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
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_6;
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
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6;
      m_6 = t;
      {
        ATerm l_8 = NULL;
        ATerm m_8 = NULL;
        t = term_z_4;
        {
          t = get_config_0(t);
          {
            m_8 = t;
            if(((l_8 != NULL) && (l_8 != m_8)))
              _fail(m_8);
            else
              l_8 = m_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), term_n_6);
          t = geq_0(t);
        }
      }
      t = m_6;
      t = b_59(t);
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
ATerm if_verbose6_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm o_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6;
      s_6 = t;
      {
        ATerm p_8 = NULL;
        ATerm q_8 = NULL;
        t = term_z_4;
        {
          t = get_config_0(t);
          {
            q_8 = t;
            if(((p_8 != NULL) && (p_8 != q_8)))
              _fail(q_8);
            else
              p_8 = q_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), term_v_6);
          t = geq_0(t);
        }
      }
      t = s_6;
      t = d_59(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = o_6;
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
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym__2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      if(((v_8 != NULL) && (v_8 != w_8)))
        _fail(w_8);
      else
        v_8 = w_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
    {
      d_9 = ATgetFirst((ATermList) c_9);
      e_9 = (ATerm) ATgetNext((ATermList) c_9);
      {
        t = e_70(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm h_9 = NULL;
            h_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(h_9));
              t = d_70(t);
            }
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(e_9);
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
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        t = not_null(o_9);
        {
          ATerm t_9 (ATerm t)
          {
            ATerm w_6 = t;
            int x_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_9);
                LocalPopChoice(x_6);
              }
            else
              {
                t = w_6;
                {
                  ATerm y_6 = t;
                  int b_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(p_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_69, r_0);
                      t = t_9(t);
                      LocalPopChoice(b_7);
                    }
                  else
                    {
                      t = y_6;
                      t = Cons_2(t, _id, t_9);
                    }
                }
              }
            return(t);
          }
          t = t_9(t);
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
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__3))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      b_10 = ATgetArgument(y_9, 2);
      {
        ATerm c_7;
        c_7 = t;
        {
          ATerm f_10 = NULL;
          ATerm g_10 = NULL,i_10 = NULL;
          ATerm h_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(a_10));
          {
            ATerm f_7 = t;
            int g_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_7);
              }
            else
              {
                t = f_7;
                t = (ATerm) ATempty;
              }
            {
              h_10 = t;
              if(((g_10 != NULL) && (g_10 != h_10)))
                _fail(h_10);
              else
                g_10 = h_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_10), not_null(b_10));
            {
              t = union_1(t, eq_0);
              {
                i_10 = t;
                if(((f_10 != NULL) && (f_10 != i_10)))
                  _fail(i_10);
                else
                  f_10 = i_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_9), not_null(a_10), not_null(f_10));
            t = table_put_0(t);
          }
        }
        t = c_7;
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
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym__2))
    {
      r_10 = ATgetArgument(q_10, 0);
      s_10 = ATgetArgument(q_10, 1);
      {
        t = not_null(s_10);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
            v_10 = t;
            o_10 :
            if(match_cons(v_10, sym__2))
              {
                w_10 = ATgetArgument(v_10, 0);
                x_10 = ATgetArgument(v_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_10), not_null(w_10), not_null(x_10));
                  t = m_59(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_11 = NULL;
  ATerm h_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL;
      e_11 = t;
      {
        if(((d_11 != NULL) && (d_11 != e_11)))
          _fail(e_11);
        else
          d_11 = e_11;
        t = SSL_ReadFromFile(not_null(d_11));
      }
      LocalPopChoice(l_7);
    }
  else
    {
      t = h_7;
      {
        ATerm t_0 (ATerm t)
        {
          t = term_t_7;
          return(t);
        }
        t = debug_1(t, t_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_11 = NULL;
  ATerm k_11 = NULL;
  i_11 = t;
  {
    ATerm u_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_11)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_7;
      }
    {
      ATerm v_7;
      v_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_6, term_w_7, (ATerm) ATinsert(ATempty, not_null(i_11)));
        t = table_put_0(t);
      }
      t = v_7;
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
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(i_8);
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
                t = term_j_8;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm l_11 = NULL;
              l_11 = t;
              if(((k_11 != NULL) && (k_11 != l_11)))
                _fail(l_11);
              else
                k_11 = l_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_6, not_null(k_11));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_k_8;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_a_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_11)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_j_8;
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
  ATerm p_11 = NULL;
  p_11 = t;
  t = SSL_getenv(not_null(p_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_8;
      t = get_config_0(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm s_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_8;
            t = getenv_0(t);
            LocalPopChoice(x_8);
          }
        else
          {
            t = s_8;
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
      t = term_z_8;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_9;
          t = table_get_0(t);
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = a_9;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_j_9;
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_q_9;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
      {
        t = xtc_load_0(t);
        {
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = term_q_9;
                return(t);
              }
              t = debug_1(t, m_1);
              return(t);
            }
            t = if_verbose5_1(t, l_1);
          }
        }
      }
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm t_11 = NULL;
        ATerm u_11 = NULL;
        u_11 = t;
        if(((t_11 != NULL) && (t_11 != u_11)))
          _fail(u_11);
        else
          t_11 = u_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), not_null(t_11)), term_u_9);
          {
            t = error_0(t);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_a_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = term_w_9;
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
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm y_11 = NULL;
  ATerm c_10;
  c_10 = t;
  {
    ATerm z_11 = NULL;
    t = y_73(t);
    {
      t = xtc_find_0(t);
      {
        z_11 = t;
        if(((y_11 != NULL) && (y_11 != z_11)))
          _fail(z_11);
        else
          y_11 = z_11;
      }
    }
  }
  t = c_10;
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm a_12 = NULL;
      ATerm b_12 = NULL;
      b_12 = t;
      if(((a_12 != NULL) && (a_12 != b_12)))
        _fail(b_12);
      else
        a_12 = b_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), not_null(a_12));
        t = call_0(t);
      }
    }
    t = d_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
        ATerm e_10;
        e_10 = t;
        {
          ATerm r_12 = NULL;
          ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
          t = u_74(t);
          {
            r_12 = t;
            {
              if(((o_12 != NULL) && (o_12 != r_12)))
                _fail(r_12);
              else
                o_12 = r_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_12), not_null(k_12), not_null(l_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_10 = t;
                    int k_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), term_l_10);
                        t = table_get_0(t);
                        LocalPopChoice(k_10);
                      }
                    else
                      {
                        t = j_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_12 = t;
                      h_12 :
                      if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
                        {
                          t_12 = ATgetFirst((ATermList) s_12);
                          u_12 = (ATerm) ATgetNext((ATermList) s_12);
                          {
                            if(((p_12 != NULL) && (p_12 != t_12)))
                              _fail(t_12);
                            else
                              p_12 = t_12;
                            {
                              if(((q_12 != NULL) && (q_12 != u_12)))
                                _fail(u_12);
                              else
                                q_12 = u_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_12), term_l_10, (ATerm) ATinsert(CheckATermList(not_null(q_12)), (ATerm) ATinsert(CheckATermList(not_null(p_12)), not_null(k_12))));
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
        t = e_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm m_10;
  m_10 = t;
  {
    t = i_75(t);
    {
      ATerm p_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = debug_1(t, p_1);
    }
  }
  t = m_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
      e_13 = t;
      z_12 :
      if(match_cons(e_13, sym__2))
        {
          f_13 = ATgetArgument(e_13, 0);
          g_13 = ATgetArgument(e_13, 1);
          {
            if(((d_13 != NULL) && (d_13 != f_13)))
              _fail(f_13);
            else
              d_13 = f_13;
            if(((c_13 != NULL) && (c_13 != g_13)))
              _fail(g_13);
            else
              c_13 = g_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_10);
      t = SSL_open_file(not_null(d_13), not_null(c_13));
    }
  else
    {
      t = t_10;
      {
        ATerm h_13 = NULL;
        ATerm i_13 = NULL;
        ATerm q_1 (ATerm t)
        {
          t = term_y_10;
          return(t);
        }
        t = obsolete_1(t, q_1);
        {
          h_13 = t;
          {
            if(((d_13 != NULL) && (d_13 != h_13)))
              _fail(h_13);
            else
              d_13 = h_13;
            {
              ATerm z_10;
              z_10 = t;
              {
                ATerm j_13 = NULL;
                t = term_a_11;
                {
                  j_13 = t;
                  if(((i_13 != NULL) && (i_13 != j_13)))
                    _fail(j_13);
                  else
                    i_13 = j_13;
                }
              }
              t = z_10;
              t = SSL_open_file(not_null(d_13), not_null(i_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm p_13 = NULL;
  ATerm r_13 = NULL;
  p_13 = t;
  {
    ATerm b_11;
    b_11 = t;
    {
      ATerm s_13 = NULL;
      t = term_c_11;
      {
        s_13 = t;
        if(((r_13 != NULL) && (r_13 != s_13)))
          _fail(s_13);
        else
          r_13 = s_13;
      }
    }
    t = b_11;
    {
      t = SSL_open_file(not_null(p_13), not_null(r_13));
      t = SSL_close_file(not_null(p_13));
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
  ATerm w_13 = NULL;
  ATerm x_13 = NULL;
  t = term_f_11;
  {
    t = new_0(t);
    {
      x_13 = t;
      if(((w_13 != NULL) && (w_13 != x_13)))
        _fail(x_13);
      else
        w_13 = x_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_g_11);
    {
      t = conc_strings_0(t);
      {
        ATerm h_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = h_11;
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
  ATerm b_14 = NULL;
  t = new_file_0(t);
  {
    b_14 = t;
    {
      ATerm m_11;
      m_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_14), term_a_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_14), term_f_11);
            {
              ATerm r_1 (ATerm t)
              {
                t = term_n_11;
                return(t);
              }
              t = assert_1(t, r_1);
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
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_stdin_0))
    {
      ATerm n_14 = NULL;
      ATerm o_14 = NULL;
      ATerm p_14 = NULL;
      t = xtc_new_file_0(t);
      {
        o_14 = t;
        {
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
          {
            ATerm q_14 = NULL;
            t = o_0(t);
            {
              q_14 = t;
              if(((p_14 != NULL) && (p_14 != q_14)))
                _fail(q_14);
              else
                p_14 = q_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_14)), term_o_11));
              {
                ATerm q_11 = t;
                int r_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(r_11);
                  }
                else
                  {
                    t = q_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(n_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_14));
    }
  else
    {
      if(match_cons(l_14, sym_FILE_1))
        {
          m_14 = ATgetArgument(l_14, 0);
          {
            ATerm s_14 = NULL;
            ATerm t_14 = NULL;
            t = not_null(m_14);
            {
              ATerm u_14 = NULL;
              t = xtc_new_file_0(t);
              {
                t_14 = t;
                {
                  if(((s_14 != NULL) && (s_14 != t_14)))
                    _fail(t_14);
                  else
                    s_14 = t_14;
                  {
                    ATerm v_14 = NULL;
                    t = o_0(t);
                    {
                      v_14 = t;
                      if(((u_14 != NULL) && (u_14 != v_14)))
                        _fail(v_14);
                      else
                        u_14 = v_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_14)), term_o_11), not_null(m_14)), term_s_11));
                      {
                        ATerm v_11 = t;
                        int w_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(w_11);
                          }
                        else
                          {
                            t = v_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(s_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_14));
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
  ATerm g_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_stdin_0))
    {
      ATerm i_15 = NULL,k_15 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm j_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
      }
      t = x_11;
      {
        ATerm l_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(i_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        t = not_null(k_15);
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
  ATerm u_15 = NULL,v_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_FILE_1))
    {
      v_15 = ATgetArgument(u_15, 0);
      {
        ATerm y_15 = NULL,a_16 = NULL;
        ATerm z_15 = NULL;
        t = SSLgetAnnotations(not_null(u_15));
        {
          z_15 = t;
          if(((y_15 != NULL) && (y_15 != z_15)))
            _fail(z_15);
          else
            y_15 = z_15;
        }
        {
          t = not_null(v_15);
          {
            ATerm c_16 = NULL;
            t = l_52(t);
            {
              a_16 = t;
              {
                ATerm d_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(a_16)), not_null(y_15));
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
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          t = stdin_0(t);
        }
      LocalPopChoice(d_12);
      t = xtc_transform_file_2(t, a_74, b_74);
    }
  else
    {
      t = c_12;
      t = xtc_transform_term_2(t, a_74, b_74);
    }
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm k_16 = NULL,m_16 = NULL;
    ATerm m_12;
    m_12 = t;
    {
      ATerm l_16 = NULL;
      t = term_f_11;
      {
        t = pass_width_0(t);
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
      }
    }
    t = m_12;
    {
      ATerm n_16 = NULL;
      t = term_f_11;
      {
        t = pass_verbose_0(t);
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(m_16));
        {
          ATerm n_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(v_12);
            }
          else
            {
              t = n_12;
              t = conc_more_lists_0(t);
            }
        }
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, s_1, t_1);
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
      ATerm w_12;
      w_12 = t;
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
      t = w_12;
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
      ATerm x_12;
      x_12 = t;
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
      t = x_12;
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
        ATerm y_12 = t;
        int a_13 = stack_ptr;
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
                  ATerm b_13 = t;
                  int k_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(k_13);
                    }
                  else
                    {
                      t = b_13;
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
            LocalPopChoice(a_13);
          }
        else
          {
            t = y_12;
            {
              ATerm l_13 = t;
              int m_13 = stack_ptr;
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
                        ATerm n_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm o_13 = t;
                            int q_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(q_13);
                              }
                            else
                              {
                                t = o_13;
                                {
                                  ATerm t_13 = t;
                                  int u_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(u_13);
                                    }
                                  else
                                    {
                                      t = t_13;
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
                            t = n_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(m_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_18));
                  LocalPopChoice(m_13);
                }
              else
                {
                  t = l_13;
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
        ATerm v_13;
        v_13 = t;
        {
          ATerm p_19 = NULL;
          ATerm q_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(l_19));
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
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
        t = v_13;
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
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm h_20 = NULL;
    ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
    t = r_74(t);
    {
      h_20 = t;
      {
        if(((e_20 != NULL) && (e_20 != h_20)))
          _fail(h_20);
        else
          e_20 = h_20;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), term_l_10);
              t = table_get_0(t);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_20), term_l_10, not_null(c_20));
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
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(l_20));
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
  t = a_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  t = SSL_remove(not_null(w_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      t = c_63(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        t = c_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm b_21 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm c_21 = NULL;
    ATerm d_21 = NULL;
    t = q_74(t);
    {
      c_21 = t;
      {
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
        {
          ATerm e_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), term_l_10);
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_21), term_l_10, (ATerm) ATinsert(CheckATermList(not_null(d_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL;
  ATerm v_1 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = begin_scope_1(t, v_1);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm j_14;
      j_14 = t;
      {
        ATerm q_21 = NULL,r_21 = NULL,w_21 = NULL;
        ATerm r_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_14;
            t = table_get_0(t);
            LocalPopChoice(w_14);
          }
        else
          {
            t = r_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          q_21 = t;
          i_21 :
          if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
            {
              r_21 = ATgetFirst((ATermList) q_21);
              w_21 = (ATerm) ATgetNext((ATermList) q_21);
              {
                if(((p_21 != NULL) && (p_21 != r_21)))
                  _fail(r_21);
                else
                  p_21 = r_21;
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
                        ATerm y_14 = t;
                        int z_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(z_14);
                          }
                        else
                          {
                            t = y_14;
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
      t = j_14;
      {
        ATerm z_1 (ATerm t)
        {
          t = term_n_11;
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
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL;
        ATerm i_22 = NULL;
        t = term_s_11;
        {
          t = get_config_0(t);
          {
            i_22 = t;
            if(((g_22 != NULL) && (g_22 != i_22)))
              _fail(i_22);
            else
              g_22 = i_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_22));
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = term_h_5;
      }
    {
      t = p_73(t);
      {
        ATerm b_2 (ATerm t)
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_o_11;
              t = get_config_0(t);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = term_e_15;
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
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  q_22 = t;
  o_22 :
  if(match_string(q_22, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
        {
          r_22 = ATgetFirst((ATermList) q_22);
          s_22 = (ATerm) ATgetNext((ATermList) q_22);
          p_22 :
          if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
            {
              t_22 = ATgetFirst((ATermList) s_22);
              u_22 = (ATerm) ATgetNext((ATermList) s_22);
              {
                ATerm y_22 = NULL;
                ATerm h_15;
                h_15 = t;
                {
                  t = not_null(r_22);
                  t = j_0(t);
                }
                t = h_15;
                {
                  ATerm z_22 = NULL;
                  t = not_null(t_22);
                  {
                    t = k_0(t);
                    {
                      z_22 = t;
                      if(((y_22 != NULL) && (y_22 != z_22)))
                        _fail(z_22);
                      else
                        y_22 = z_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_22)), not_null(y_22));
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
  ATerm c_2 (ATerm t)
  {
    ATerm e_23 = NULL;
    e_23 = t;
    d_23 :
    if(!(match_string(e_23, "-v")))
      {
        if(!(match_string(e_23, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_n_15;
    t = set_config_0(t);
    t = term_o_15;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_p_15;
    return(t);
  }
  t = Option_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm h_23 = NULL;
    h_23 = t;
    f_23 :
    if(!(match_string(h_23, "-k")))
      {
        if(!(match_string(h_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm q_15;
    q_15 = t;
    {
      ATerm i_23 = NULL;
      ATerm j_23 = NULL;
      t = string_to_int_0(t);
      {
        j_23 = t;
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(i_23));
        t = set_config_0(t);
      }
    }
    t = q_15;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  t = SSL_string_to_int(not_null(m_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm z_23 = NULL;
        z_23 = t;
        p_23 :
        if(!(match_string(z_23, "-S")))
          {
            if(!(match_string(z_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_e_16;
        t = set_config_0(t);
        t = term_f_16;
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_g_16;
        return(t);
      }
      t = Option_3(t, i_2, j_2, k_2);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm a_24 = NULL;
              a_24 = t;
              q_23 :
              if(!(match_string(a_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              ATerm d_24 = NULL;
              ATerm j_16;
              j_16 = t;
              {
                ATerm b_24 = NULL;
                ATerm c_24 = NULL;
                t = string_to_int_0(t);
                {
                  c_24 = t;
                  if(((b_24 != NULL) && (b_24 != c_24)))
                    _fail(c_24);
                  else
                    b_24 = c_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_4, not_null(b_24));
                  t = set_config_0(t);
                }
              }
              t = j_16;
              {
                ATerm e_24 = NULL;
                e_24 = t;
                if(((d_24 != NULL) && (d_24 != e_24)))
                  _fail(e_24);
                else
                  d_24 = e_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_24));
              }
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              t = term_o_16;
              return(t);
            }
            t = ArgOption_3(t, l_2, m_2, n_2);
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm o_2 (ATerm t)
              {
                ATerm f_24 = NULL;
                f_24 = t;
                y_23 :
                if(!(match_string(f_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = term_q_16;
                t = set_config_0(t);
                t = term_v_16;
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                t = term_w_16;
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
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
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
    ATerm p_24 = NULL;
    p_24 = t;
    i_24 :
    if(!(match_string(p_24, "-o")))
      {
        if(!(match_string(p_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm s_24 = NULL;
    ATerm d_17;
    d_17 = t;
    {
      ATerm q_24 = NULL;
      ATerm r_24 = NULL;
      r_24 = t;
      if(((q_24 != NULL) && (q_24 != r_24)))
        _fail(r_24);
      else
        q_24 = r_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(q_24));
        t = set_config_0(t);
      }
    }
    t = d_17;
    {
      ATerm t_24 = NULL;
      t_24 = t;
      if(((s_24 != NULL) && (s_24 != t_24)))
        _fail(t_24);
      else
        s_24 = t_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_24));
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  t = ArgOption_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm z_24 = NULL;
    z_24 = t;
    w_24 :
    if(!(match_string(z_24, "-i")))
      {
        if(!(match_string(z_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm c_25 = NULL;
    ATerm j_17;
    j_17 = t;
    {
      ATerm a_25 = NULL;
      ATerm b_25 = NULL;
      b_25 = t;
      if(((a_25 != NULL) && (a_25 != b_25)))
        _fail(b_25);
      else
        a_25 = b_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(a_25));
        t = set_config_0(t);
      }
    }
    t = j_17;
    {
      ATerm d_25 = NULL;
      d_25 = t;
      if(((c_25 != NULL) && (c_25 != d_25)))
        _fail(d_25);
      else
        c_25 = d_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_25));
    }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_k_17;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm n_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(q_17);
          }
        else
          {
            t = n_17;
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm i_25 = NULL;
                      i_25 = t;
                      g_25 :
                      if(!(match_string(i_25, "-w")))
                        {
                          if(!(match_string(i_25, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm y_2 (ATerm t)
                    {
                      ATerm x_17;
                      x_17 = t;
                      {
                        ATerm j_25 = NULL;
                        ATerm k_25 = NULL;
                        k_25 = t;
                        if(((j_25 != NULL) && (j_25 != k_25)))
                          _fail(k_25);
                        else
                          j_25 = k_25;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_g_5, not_null(j_25));
                          t = set_config_0(t);
                        }
                      }
                      t = x_17;
                      return(t);
                    }
                    ATerm b_3 (ATerm t)
                    {
                      t = term_y_17;
                      return(t);
                    }
                    t = ArgOption_3(t, x_2, y_2, b_3);
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
  ATerm o_25 = NULL;
  ATerm z_17;
  z_17 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm p_25 = NULL,q_25 = NULL;
      p_25 = t;
      n_25 :
      if(match_cons(p_25, sym_Program_1))
        {
          q_25 = ATgetArgument(p_25, 0);
          if(((o_25 != NULL) && (o_25 != q_25)))
            _fail(q_25);
          else
            o_25 = q_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_18), not_null(o_25)), term_a_18));
      {
        t = printnl_0(t);
        {
          t = term_c_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATempty, term_c_18));
  {
    t = printnl_0(t);
    {
      t = term_c_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  t = SSL_TicksToSeconds(not_null(t_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_25), not_null(a_26));
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = SSL_addr(not_null(z_25), not_null(a_26));
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
  ATerm i_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_70(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = i_18;
      {
        ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
        h_26 = t;
        g_26 :
        if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
          {
            i_26 = ATgetFirst((ATermList) h_26);
            j_26 = (ATerm) ATgetNext((ATermList) h_26);
            {
              ATerm m_26 = NULL;
              ATerm n_26 = NULL;
              t = not_null(j_26);
              {
                t = foldr_2(t, q_70, r_70);
                {
                  n_26 = t;
                  if(((m_26 != NULL) && (m_26 != n_26)))
                    _fail(n_26);
                  else
                    m_26 = n_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), not_null(m_26));
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
  ATerm u_26 = NULL;
  ATerm w_26 = NULL;
  u_26 = t;
  {
    ATerm x_26 = NULL;
    ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
    t = not_null(u_26);
    {
      x_26 = t;
      {
        t = SSL_explode_term(not_null(x_26));
        {
          z_26 = t;
          t_26 :
          if(match_cons(z_26, sym__2))
            {
              a_27 = ATgetArgument(z_26, 0);
              b_27 = ATgetArgument(z_26, 1);
              if(((w_26 != NULL) && (w_26 != b_27)))
                _fail(b_27);
              else
                w_26 = b_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_26);
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
      t = term_b_16;
      return(t);
    }
    t = crush_2(t, f_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym__2))
    {
      i_27 = ATgetArgument(h_27, 0);
      j_27 = ATgetArgument(h_27, 1);
      {
        ATerm p_18;
        p_18 = t;
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_27), not_null(j_27));
              LocalPopChoice(s_18);
            }
          else
            {
              t = r_18;
              t = SSL_gtr(not_null(i_27), not_null(j_27));
            }
        }
        t = p_18;
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
  ATerm p_27 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
      q_27 = t;
      o_27 :
      if(match_cons(q_27, sym__2))
        {
          r_27 = ATgetArgument(q_27, 0);
          s_27 = ATgetArgument(q_27, 1);
          {
            if(((p_27 != NULL) && (p_27 != r_27)))
              _fail(r_27);
            else
              p_27 = r_27;
            if(((p_27 != NULL) && (p_27 != s_27)))
              _fail(s_27);
            else
              p_27 = s_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_18;
      x_18 = t;
      {
        ATerm v_27 = NULL;
        ATerm w_27 = NULL;
        t = term_z_4;
        {
          t = get_config_0(t);
          {
            w_27 = t;
            if(((v_27 != NULL) && (v_27 != w_27)))
              _fail(w_27);
            else
              v_27 = w_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), term_c_5);
          t = geq_0(t);
        }
      }
      t = x_18;
      t = y_58(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm a_28 = NULL,c_28 = NULL;
    ATerm y_18;
    y_18 = t;
    {
      ATerm b_28 = NULL;
      t = run_time_0(t);
      {
        b_28 = t;
        if(((a_28 != NULL) && (a_28 != b_28)))
          _fail(b_28);
        else
          a_28 = b_28;
      }
    }
    t = y_18;
    {
      ATerm d_28 = NULL;
      t = term_z_18;
      {
        t = get_config_0(t);
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_19), not_null(a_28)), term_e_19), not_null(c_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, g_3);
  {
    t = term_b_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym_Version_0))
    {
      ATerm m_28 = NULL,o_28 = NULL;
      ATerm g_19;
      g_19 = t;
      {
        ATerm n_28 = NULL;
        t = SSLgetAnnotations(not_null(k_28));
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
      }
      t = g_19;
      {
        ATerm p_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        t = not_null(o_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm h_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = h_19;
        {
          ATerm n_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_19);
            }
          else
            {
              t = n_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_3);
  t = a_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_table_create(not_null(u_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  {
    ATerm r_19;
    r_19 = t;
    {
      t = term_s_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_19, term_t_19, not_null(y_28));
          t = table_put_0(t);
        }
      }
    }
    t = r_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  t = SSL_table_destroy(not_null(d_29));
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
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  p_29 :
  if(((ATgetType(q_29) == AT_LIST) && ATisEmpty(q_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
        {
          r_29 = ATgetFirst((ATermList) q_29);
          s_29 = (ATerm) ATgetNext((ATermList) q_29);
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
  ATerm u_19;
  u_19 = t;
  {
    ATerm v_29 = NULL;
    ATerm y_29 = NULL;
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        {
          ATerm w_29 = NULL;
          ATerm x_29 = NULL;
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
          t = (ATerm) ATinsert(ATempty, not_null(w_29));
        }
      }
    {
      y_29 = t;
      if(((v_29 != NULL) && (v_29 != y_29)))
        _fail(y_29);
      else
        v_29 = y_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_15, not_null(v_29));
      t = printnl_0(t);
    }
  }
  t = u_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  l_30 = t;
  i_30 :
  if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
    {
      j_30 = ATgetFirst((ATermList) l_30);
      k_30 = (ATerm) ATgetNext((ATermList) l_30);
      {
        ATerm o_30 = NULL;
        t = not_null(k_30);
        {
          ATerm x_19;
          x_19 = t;
          {
            ATerm p_30 = NULL,r_30 = NULL,t_30 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              ATerm q_30 = NULL;
              t = i_0(t);
              {
                q_30 = t;
                if(((p_30 != NULL) && (p_30 != q_30)))
                  _fail(q_30);
                else
                  p_30 = q_30;
              }
            }
            t = y_19;
            {
              ATerm s_30 = NULL;
              t = not_null(j_30);
              {
                t = h_0(t);
                {
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_30)), not_null(r_30));
                {
                  t_30 = t;
                  if(((o_30 != NULL) && (o_30 != t_30)))
                    _fail(t_30);
                  else
                    o_30 = t_30;
                }
              }
            }
          }
          t = x_19;
          {
            ATerm k_3 (ATerm t)
            {
              t = not_null(o_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, k_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_30) == AT_LIST) && ATisEmpty(l_30)))
        {
          {
            t = term_f_11;
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
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym_Program_1))
    {
      f_31 = ATgetArgument(e_31, 0);
      {
        ATerm i_31 = NULL,k_31 = NULL;
        ATerm j_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm m_31 = NULL;
            t = k_57(t);
            {
              k_31 = t;
              {
                ATerm n_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_31)), not_null(i_31));
                {
                  n_31 = t;
                  if(((m_31 != NULL) && (m_31 != n_31)))
                    _fail(n_31);
                  else
                    m_31 = n_31;
                }
                t = not_null(m_31);
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
  ATerm x_31 = NULL;
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_31 = NULL;
      t = term_z_18;
      {
        t = get_config_0(t);
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
      }
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            ATerm z_31 = NULL;
            z_31 = t;
            if(((x_31 != NULL) && (x_31 != z_31)))
              _fail(z_31);
            else
              x_31 = z_31;
            return(t);
          }
          t = Program_1(t, n_3);
          return(t);
        }
        t = fetch_1(t, m_3);
      }
    }
  {
    t = term_f_20;
    {
      t = echo_0(t);
      {
        t = term_n_20;
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
              ATerm w_3 (ATerm t)
              {
                ATerm f_32 = NULL;
                ATerm g_32 = NULL;
                g_32 = t;
                if(((f_32 != NULL) && (f_32 != g_32)))
                  _fail(g_32);
                else
                  f_32 = g_32;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_32)), term_o_20);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, w_3);
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
  ATerm p_20;
  p_20 = t;
  {
    ATerm n_32 = NULL;
    ATerm o_32 = NULL;
    o_32 = t;
    if(((n_32 != NULL) && (n_32 != o_32)))
      _fail(o_32);
    else
      n_32 = o_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATempty, not_null(n_32)));
      t = printnl_0(t);
    }
  }
  t = p_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm q_20;
  q_20 = t;
  {
    t = c_75(t);
    t = debug_0(t);
  }
  t = q_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym_Undefined_1))
    {
      y_32 = ATgetArgument(x_32, 0);
      {
        ATerm b_33 = NULL,d_33 = NULL;
        ATerm c_33 = NULL;
        t = SSLgetAnnotations(not_null(x_32));
        {
          c_33 = t;
          if(((b_33 != NULL) && (b_33 != c_33)))
            _fail(c_33);
          else
            b_33 = c_33;
        }
        {
          t = not_null(y_32);
          {
            ATerm p_33 = NULL;
            t = l_57(t);
            {
              d_33 = t;
              {
                ATerm q_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_33)), not_null(b_33));
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
  ATerm y_33 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = Cons_2(t, _id, y_33);
      }
    return(t);
  }
  t = y_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_79 (ATerm))
{
  t = fetch_1(t, h_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  g_34 :
  if(match_cons(r_34, sym_Help_0))
    {
      ATerm t_34 = NULL,v_34 = NULL;
      ATerm t_20;
      t_20 = t;
      {
        ATerm u_34 = NULL;
        t = SSLgetAnnotations(not_null(r_34));
        {
          u_34 = t;
          if(((t_34 != NULL) && (t_34 != u_34)))
            _fail(u_34);
          else
            t_34 = u_34;
        }
      }
      t = t_20;
      {
        ATerm a_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_34));
        {
          a_35 = t;
          if(((v_34 != NULL) && (v_34 != a_35)))
            _fail(a_35);
          else
            v_34 = a_35;
        }
        t = not_null(v_34);
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
  ATerm h_35 = NULL;
  h_35 = t;
  t = SSL_implode_string(not_null(h_35));
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
        ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
        p_35 = t;
        o_35 :
        if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
          {
            q_35 = ATgetFirst((ATermList) p_35);
            r_35 = (ATerm) ATgetNext((ATermList) p_35);
            {
              t = not_null(q_35);
              {
                ATerm x_3 (ATerm t)
                {
                  t = not_null(r_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_3);
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
  ATerm b_36 = NULL;
  ATerm d_36 = NULL;
  b_36 = t;
  {
    ATerm e_36 = NULL;
    ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
    t = not_null(b_36);
    {
      e_36 = t;
      {
        t = SSL_explode_term(not_null(e_36));
        {
          g_36 = t;
          z_35 :
          if(match_cons(g_36, sym__2))
            {
              h_36 = ATgetArgument(g_36, 0);
              i_36 = ATgetArgument(g_36, 1);
              a_36 :
              if(match_string(h_36, ""))
                {
                  if(((d_36 != NULL) && (d_36 != i_36)))
                    _fail(i_36);
                  else
                    d_36 = i_36;
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
      t = not_null(d_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm m_36 (ATerm t)
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_36);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        {
          t = Nil_0(t);
          t = r_64(t);
        }
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym__2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        t = not_null(q_36);
        {
          ATerm y_3 (ATerm t)
          {
            t = not_null(r_36);
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
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_explode_string(not_null(w_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym__2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm l_37 = NULL,n_37 = NULL;
        ATerm m_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
        {
          t = not_null(g_37);
          {
            ATerm p_37 = NULL;
            t = p_50(t);
            {
              n_37 = t;
              {
                t = not_null(h_37);
                {
                  ATerm r_37 = NULL;
                  t = q_50(t);
                  {
                    p_37 = t;
                    {
                      ATerm s_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_37), not_null(p_37)), not_null(l_37));
                      {
                        s_37 = t;
                        if(((r_37 != NULL) && (r_37 != s_37)))
                          _fail(s_37);
                        else
                          r_37 = s_37;
                      }
                      t = not_null(r_37);
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
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(match_cons(a_38, sym__2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      {
        ATerm h_21;
        h_21 = t;
        t = SSL_printnl(not_null(b_38), not_null(c_38));
        t = h_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm j_21;
  j_21 = t;
  {
    ATerm i_38 = NULL,k_38 = NULL;
    ATerm k_21;
    k_21 = t;
    {
      ATerm j_38 = NULL;
      t = b_75(t);
      {
        j_38 = t;
        if(((i_38 != NULL) && (i_38 != j_38)))
          _fail(j_38);
        else
          i_38 = j_38;
      }
    }
    t = k_21;
    {
      ATerm l_38 = NULL;
      l_38 = t;
      if(((k_38 != NULL) && (k_38 != l_38)))
        _fail(l_38);
      else
        k_38 = l_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), not_null(i_38)));
        t = printnl_0(t);
      }
    }
  }
  t = j_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm o_38 (ATerm t)
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
        t = Cons_2(t, c_64, o_38);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = SSL_is_string(not_null(q_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = n_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm v_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(x_21);
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
              ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
              z_38 = t;
              y_38 :
              if(match_cons(z_38, sym_Path_1))
                {
                  a_39 = ATgetArgument(z_38, 0);
                  t = not_null(a_39);
                }
              else
                {
                  if(match_cons(z_38, sym_Var_1))
                    {
                      a_39 = ATgetArgument(z_38, 0);
                      {
                        t = not_null(a_39);
                        {
                          ATerm y_21 = t;
                          int z_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_21);
                            }
                          else
                            {
                              t = y_21;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = term_a_22;
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
                      if(match_cons(z_38, sym_Prefix_2))
                        {
                          a_39 = ATgetArgument(z_38, 0);
                          b_39 = ATgetArgument(z_38, 1);
                          {
                            ATerm g_39 = NULL,i_39 = NULL;
                            ATerm b_22;
                            b_22 = t;
                            {
                              ATerm h_39 = NULL;
                              t = not_null(a_39);
                              {
                                t = eval_config_0(t);
                                {
                                  h_39 = t;
                                  if(((g_39 != NULL) && (g_39 != h_39)))
                                    _fail(h_39);
                                  else
                                    g_39 = h_39;
                                }
                              }
                            }
                            t = b_22;
                            {
                              ATerm j_39 = NULL;
                              t = not_null(b_39);
                              {
                                t = eval_config_0(t);
                                {
                                  j_39 = t;
                                  if(((i_39 != NULL) && (i_39 != j_39)))
                                    _fail(j_39);
                                  else
                                    i_39 = j_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), not_null(i_39));
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
  ATerm r_39 = NULL;
  r_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(r_39));
    {
      t = table_get_0(t);
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_22;
              f_22 = t;
              {
                ATerm t_39 = NULL;
                ATerm u_39 = NULL;
                u_39 = t;
                if(((t_39 != NULL) && (t_39 != u_39)))
                  _fail(u_39);
                else
                  t_39 = u_39;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(r_39), not_null(t_39));
                  t = table_put_0(t);
                }
              }
              t = f_22;
            }
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
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
  ATerm h_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
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
  ATerm z_39 = NULL,d_40 = NULL,e_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym__2))
    {
      d_40 = ATgetArgument(z_39, 0);
      e_40 = ATgetArgument(z_39, 1);
      t = SSL_table_get(not_null(d_40), not_null(e_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__3))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      o_40 = ATgetArgument(l_40, 2);
      {
        ATerm k_22;
        k_22 = t;
        {
          ATerm s_40 = NULL;
          ATerm t_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), not_null(n_40));
          {
            ATerm l_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
                t = (ATerm) ATempty;
              }
            {
              t_40 = t;
              if(((s_40 != NULL) && (s_40 != t_40)))
                _fail(t_40);
              else
                s_40 = t_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_40), not_null(n_40), (ATerm) ATinsert(CheckATermList(not_null(s_40)), not_null(o_40)));
            t = table_put_0(t);
          }
        }
        t = k_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm z_40 = NULL;
  ATerm a_41 = NULL;
  t = term_f_11;
  {
    t = m_80(t);
    {
      a_41 = t;
      if(((z_40 != NULL) && (z_40 != a_41)))
        _fail(a_41);
      else
        z_40 = a_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_m_20, not_null(z_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_string(k_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(k_41) == AT_LIST) && !(ATisEmpty(k_41))))
        {
          l_41 = ATgetFirst((ATermList) k_41);
          m_41 = (ATerm) ATgetNext((ATermList) k_41);
          {
            ATerm p_41 = NULL;
            ATerm n_22;
            n_22 = t;
            {
              t = not_null(l_41);
              t = a_0(t);
            }
            t = n_22;
            {
              ATerm q_41 = NULL;
              t = term_f_11;
              {
                t = d_0(t);
                {
                  q_41 = t;
                  if(((p_41 != NULL) && (p_41 != q_41)))
                    _fail(q_41);
                  else
                    p_41 = q_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(p_41));
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
  ATerm f_4 (ATerm t)
  {
    ATerm v_41 = NULL;
    v_41 = t;
    u_41 :
    if(!(match_string(v_41, "--help")))
      {
        if(!(match_string(v_41, "-h")))
          {
            if(!(match_string(v_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_w_22;
    {
      t = set_config_0(t);
      t = term_x_22;
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_a_23;
    return(t);
  }
  t = Option_3(t, f_4, g_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
    {
      z_41 = ATgetFirst((ATermList) y_41);
      a_42 = (ATerm) ATgetNext((ATermList) y_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  n_42 :
  if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
    {
      p_42 = ATgetFirst((ATermList) o_42);
      q_42 = (ATerm) ATgetNext((ATermList) o_42);
      {
        ATerm u_42 = NULL,w_42 = NULL;
        ATerm v_42 = NULL;
        t = SSLgetAnnotations(not_null(o_42));
        {
          v_42 = t;
          if(((u_42 != NULL) && (u_42 != v_42)))
            _fail(v_42);
          else
            u_42 = v_42;
        }
        {
          t = not_null(p_42);
          {
            ATerm y_42 = NULL;
            t = y_51(t);
            {
              w_42 = t;
              {
                t = not_null(q_42);
                {
                  ATerm a_43 = NULL;
                  t = z_51(t);
                  {
                    y_42 = t;
                    {
                      ATerm b_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_42)), not_null(w_42)), not_null(u_42));
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
  ATerm l_43 = NULL;
  l_43 = t;
  k_43 :
  if(((ATgetType(l_43) == AT_LIST) && ATisEmpty(l_43)))
    {
      {
        ATerm n_43 = NULL,p_43 = NULL;
        ATerm b_23;
        b_23 = t;
        {
          ATerm o_43 = NULL;
          t = SSLgetAnnotations(not_null(l_43));
          {
            o_43 = t;
            if(((n_43 != NULL) && (n_43 != o_43)))
              _fail(o_43);
            else
              n_43 = o_43;
          }
        }
        t = b_23;
        {
          ATerm q_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_43));
          {
            q_43 = t;
            if(((p_43 != NULL) && (p_43 != q_43)))
              _fail(q_43);
            else
              p_43 = q_43;
          }
          t = not_null(p_43);
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
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym__2))
    {
      x_43 = ATgetArgument(w_43, 0);
      y_43 = ATgetArgument(w_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(x_43), not_null(y_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm c_23;
  c_23 = t;
  {
    ATerm g_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_23;
        t = k_80(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = g_23;
        {
        }
      }
  }
  t = c_23;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm g_44 = NULL;
      ATerm n_23;
      n_23 = t;
      {
        ATerm e_44 = NULL;
        ATerm f_44 = NULL;
        f_44 = t;
        if(((e_44 != NULL) && (e_44 != f_44)))
          _fail(f_44);
        else
          e_44 = f_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_18, not_null(e_44));
          t = set_config_0(t);
        }
      }
      t = n_23;
      {
        ATerm h_44 = NULL;
        h_44 = t;
        if(((g_44 != NULL) && (g_44 != h_44)))
          _fail(h_44);
        else
          g_44 = h_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_44));
      }
      return(t);
    }
    ATerm j_4 (ATerm t)
    {
      ATerm o_23 = t;
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
                t = k_80(t);
                t = Cons_2(t, _id, j_4);
              }
            }
          LocalPopChoice(r_23);
        }
      else
        {
          t = o_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_4, j_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_44 = NULL,u_44 = NULL,v_44 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,a_45 = NULL;
    w_44 = t;
    m_44 :
    if(match_cons(w_44, sym__3))
      {
        x_44 = ATgetArgument(w_44, 0);
        y_44 = ATgetArgument(w_44, 1);
        a_45 = ATgetArgument(w_44, 2);
        {
          if(((n_44 != NULL) && (n_44 != x_44)))
            _fail(x_44);
          else
            n_44 = x_44;
          {
            if(((u_44 != NULL) && (u_44 != y_44)))
              _fail(y_44);
            else
              u_44 = y_44;
            {
              if(((v_44 != NULL) && (v_44 != a_45)))
                _fail(a_45);
              else
                v_44 = a_45;
              t = SSL_table_put(not_null(n_44), not_null(u_44), not_null(v_44));
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
ATerm parse_options_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm d_45 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    t = term_w_23;
    t = table_put_0(t);
  }
  t = v_23;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm x_23 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_80(t);
          LocalPopChoice(g_24);
        }
      else
        {
          t = x_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_4);
    {
      ATerm h_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_24;
          k_24 = t;
          {
            ATerm l_24 = t;
            int m_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_v_22;
                t = get_config_0(t);
                LocalPopChoice(m_24);
              }
            else
              {
                t = l_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_24;
          {
            t = system_usage_0(t);
            {
              t = term_b_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(j_24);
        }
      else
        {
          t = h_24;
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm e_45 = NULL;
                    e_45 = t;
                    if(((d_45 != NULL) && (d_45 != e_45)))
                      _fail(e_45);
                    else
                      d_45 = e_45;
                    return(t);
                  }
                  t = Undefined_1(t, p_4);
                  return(t);
                }
                t = fetch_1(t, o_4);
                {
                  ATerm q_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_45)), term_u_24);
                    return(t);
                  }
                  t = say_1(t, q_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                {
                }
              }
          }
        }
      {
        ATerm v_24;
        v_24 = t;
        {
          t = term_g_20;
          t = table_destroy_0(t);
        }
        t = v_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  t = parse_options_1(t, g_78);
  {
    t = store_options_0(t);
    {
      t = i_78(t);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_78);
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm e_25 = t;
              int f_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(f_25);
                }
              else
                {
                  t = e_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  t = option_wrap_4(t, k_78, default_usage_0, _id, l_78);
  return(t);
}
ATerm io_abox2text_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = xtc_io_1(t, abox2text_0);
    return(t);
  }
  t = option_wrap_2(t, abox2text_options_0, s_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2text_0(t);
  return(t);
}