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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_a_26;
ATerm term_j_25;
ATerm term_t_24;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_z_15;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_x_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_a_7;
void init_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_j_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_o_9);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_e_12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_a_13);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_a_13);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_a_13);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_a_13);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__3, term_c_21, term_h_21, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm h_59 (ATerm));
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm j_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_72 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm i_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm k_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm union_1 (ATerm, ATerm n_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm t_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm b_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm q_74 (ATerm));
ATerm assert_1 (ATerm, ATerm m_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm t_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm s_74 (ATerm), ATerm t_74 (ATerm));
ATerm xtc_sglr_1 (ATerm, ATerm j_87 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm i_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm c_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm d_74 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm));
ATerm crush_2 (ATerm, ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_77 (ATerm));
ATerm Program_1 (ATerm, ATerm a_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_86 (ATerm));
ATerm map_1 (ATerm, ATerm q_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm g_74 (ATerm));
ATerm io_parse_sdf_0 (ATerm);
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
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
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
  t = term_a_7;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = term_i_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_i_7);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_a_7);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_n_7;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm o_7;
    o_7 = t;
    {
      ATerm b_3 = NULL;
      ATerm c_3 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          c_3 = t;
          if(((b_3 != NULL) && (b_3 != c_3)))
            _fail(c_3);
          else
            b_3 = c_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_3), term_p_7);
        t = geq_0(t);
      }
    }
    t = o_7;
    t = h_59(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm f_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_q_7);
      return(t);
    }
    t = if_verbose3_1(t, f_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  t = SSL_table_keys(not_null(f_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_3 = NULL;
  l_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm n_3 = NULL;
        ATerm p_3 = NULL;
        n_3 = t;
        {
          ATerm q_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), not_null(n_3));
          {
            t = table_get_0(t);
            {
              q_3 = t;
              if(((p_3 != NULL) && (p_3 != q_3)))
                _fail(q_3);
              else
                p_3 = q_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(p_3));
        }
        return(t);
      }
      t = map_1(t, p_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm r_7;
    r_7 = t;
    {
      ATerm v_3 = NULL;
      ATerm w_3 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          w_3 = t;
          if(((v_3 != NULL) && (v_3 != w_3)))
            _fail(w_3);
          else
            v_3 = w_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), term_x_7);
        t = geq_0(t);
      }
    }
    t = r_7;
    t = j_59(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_7;
  y_7 = t;
  {
    ATerm z_3 = NULL;
    ATerm a_4 = NULL;
    a_4 = t;
    if(((z_3 != NULL) && (z_3 != a_4)))
      _fail(a_4);
    else
      z_3 = a_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(z_3));
      t = printnl_0(t);
    }
  }
  t = y_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm i_4 = NULL,j_4 = NULL;
  g_4 = t;
  {
    ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_4)));
    {
      t = table_get_0(t);
      {
        k_4 = t;
        e_4 :
        if(((ATgetType(k_4) == AT_LIST) && !(ATisEmpty(k_4))))
          {
            l_4 = ATgetFirst((ATermList) k_4);
            o_4 = (ATerm) ATgetNext((ATermList) k_4);
            f_4 :
            if(match_cons(l_4, sym__2))
              {
                m_4 = ATgetArgument(l_4, 0);
                n_4 = ATgetArgument(l_4, 1);
                {
                  if(((i_4 != NULL) && (i_4 != m_4)))
                    _fail(m_4);
                  else
                    i_4 = m_4;
                  if(((j_4 != NULL) && (j_4 != n_4)))
                    _fail(n_4);
                  else
                    j_4 = n_4;
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
    t = not_null(j_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm a_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_4)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
              b_5 = t;
              t_4 :
              if(match_cons(b_5, sym__2))
                {
                  c_5 = ATgetArgument(b_5, 0);
                  d_5 = ATgetArgument(b_5, 1);
                  {
                    if(((x_4 != NULL) && (x_4 != c_5)))
                      _fail(c_5);
                    else
                      x_4 = c_5;
                    if(((a_5 != NULL) && (a_5 != d_5)))
                      _fail(d_5);
                    else
                      a_5 = d_5;
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
        t = not_null(a_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, h_72);
              return(t);
            }
            t = Cons_2(t, h_72, s_0);
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            {
              ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
              i_5 = t;
              h_5 :
              if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
                {
                  j_5 = ATgetFirst((ATermList) i_5);
                  k_5 = (ATerm) ATgetNext((ATermList) i_5);
                  {
                    t = not_null(k_5);
                    t = filter_1(t, h_72);
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
ATerm repeat_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = f_78(t);
      t = n_5(t);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_m_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm n_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_8;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, u_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm o_8;
    o_8 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_a_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_q_8);
        t = geq_0(t);
      }
    }
    t = o_8;
    t = i_59(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm t_5 = NULL;
      ATerm u_5 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          u_5 = t;
          if(((t_5 != NULL) && (t_5 != u_5)))
            _fail(u_5);
          else
            t_5 = u_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_s_8);
        t = geq_0(t);
      }
    }
    t = r_8;
    t = k_59(t);
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
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      if(((z_5 != NULL) && (z_5 != a_6)))
        _fail(a_6);
      else
        z_5 = a_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
    {
      h_6 = ATgetFirst((ATermList) g_6);
      i_6 = (ATerm) ATgetNext((ATermList) g_6);
      {
        t = s_70(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm l_6 = NULL;
            l_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(l_6));
              t = r_70(t);
            }
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(i_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym__2))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      {
        t = not_null(s_6);
        {
          ATerm x_6 (ATerm t)
          {
            ATerm v_8 = t;
            int w_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_6);
                ;
                LocalPopChoice(w_8);
              }
            else
              {
                t = v_8;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(t_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_70, z_0);
                      t = x_6(t);
                      ;
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = z_8;
                      t = Cons_2(t, _id, x_6);
                    }
                }
              }
            return(t);
          }
          t = x_6(t);
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
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      {
        ATerm b_9;
        b_9 = t;
        {
          ATerm j_7 = NULL;
          ATerm k_7 = NULL,m_7 = NULL;
          ATerm l_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(e_7));
          {
            ATerm c_9 = t;
            int d_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(d_9);
              }
            else
              {
                t = c_9;
                t = (ATerm) ATempty;
              }
            {
              l_7 = t;
              if(((k_7 != NULL) && (k_7 != l_7)))
                _fail(l_7);
              else
                k_7 = l_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_7), not_null(f_7));
            {
              t = union_0(t);
              {
                m_7 = t;
                if(((j_7 != NULL) && (j_7 != m_7)))
                  _fail(m_7);
                else
                  j_7 = m_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_7), not_null(e_7), not_null(j_7));
            t = set_0(t);
          }
        }
        t = b_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = not_null(w_7);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
            z_7 = t;
            s_7 :
            if(match_cons(z_7, sym__2))
              {
                a_8 = ATgetArgument(z_7, 0);
                b_8 = ATgetArgument(z_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_7), not_null(a_8), not_null(b_8));
                  t = t_59(t);
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
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = term_j_9;
        return(t);
      }
      t = debug_1(t, f_1);
      return(t);
    }
    t = if_verbose5_1(t, b_1);
    {
      ATerm m_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_9;
        }
      {
        ATerm n_9;
        n_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_8, term_o_9, (ATerm) ATinsert(ATempty, not_null(i_8)));
          t = table_put_0(t);
        }
        t = n_9;
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              t = term_p_9;
              return(t);
            }
            t = debug_1(t, h_1);
            return(t);
          }
          t = if_verbose4_1(t, g_1);
          {
            ATerm q_9 = t;
            int v_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(v_9);
              }
            else
              {
                t = q_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm i_1 (ATerm t)
              {
                ATerm j_1 (ATerm t)
                {
                  t = term_w_9;
                  return(t);
                }
                t = say_1(t, j_1);
                return(t);
              }
              t = if_verbose6_1(t, i_1);
              {
                ATerm l_8 = NULL;
                l_8 = t;
                if(((k_8 != NULL) && (k_8 != l_8)))
                  _fail(l_8);
                else
                  k_8 = l_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(k_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = term_x_9;
                          return(t);
                        }
                        t = say_1(t, l_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, k_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_d_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm n_1 (ATerm t)
                              {
                                t = term_w_9;
                                return(t);
                              }
                              t = say_1(t, n_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, m_1);
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
  ATerm p_8 = NULL;
  p_8 = t;
  t = SSL_getenv(not_null(p_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    t = debug_1(t, p_1);
    return(t);
  }
  t = if_verbose5_1(t, o_1);
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm k_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_10;
          t = table_get_0(t);
          ;
          LocalPopChoice(p_10);
        }
      else
        {
          t = k_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_10;
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_r_10;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, q_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm s_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          t = term_v_10;
          return(t);
        }
        t = debug_1(t, t_1);
        return(t);
      }
      t = if_verbose5_1(t, s_1);
      {
        t = xtc_load_0(t);
        {
          ATerm w_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(x_10);
            }
          else
            {
              t = w_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm u_1 (ATerm t)
            {
              ATerm v_1 (ATerm t)
              {
                t = term_v_10;
                return(t);
              }
              t = debug_1(t, v_1);
              return(t);
            }
            t = if_verbose5_1(t, u_1);
          }
        }
      }
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = s_10;
      {
        ATerm t_8 = NULL;
        ATerm u_8 = NULL;
        u_8 = t;
        if(((t_8 != NULL) && (t_8 != u_8)))
          _fail(u_8);
        else
          t_8 = u_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_11), not_null(t_8)), term_y_10);
          {
            t = error_0(t);
            {
              ATerm w_1 (ATerm t)
              {
                t = term_d_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      t = term_e_11;
                      return(t);
                    }
                    t = debug_1(t, x_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, w_1);
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
  ATerm x_8 = NULL;
  ATerm g_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL;
      y_8 = t;
      {
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
        t = SSL_ReadFromFile(not_null(x_8));
      }
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = g_11;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_n_11;
          return(t);
        }
        t = debug_1(t, y_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_stdin_0))
    {
      ATerm h_9 = NULL;
      ATerm i_9 = NULL;
      t = term_o_11;
      {
        t = ReadFromFile_0(t);
        {
          i_9 = t;
          if(((h_9 != NULL) && (h_9 != i_9)))
            _fail(i_9);
          else
            h_9 = i_9;
        }
      }
      t = not_null(h_9);
    }
  else
    {
      if(match_cons(f_9, sym_FILE_1))
        {
          g_9 = ATgetArgument(f_9, 0);
          {
            ATerm k_9 = NULL;
            ATerm l_9 = NULL;
            t = not_null(g_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_9 = t;
                  if(((k_9 != NULL) && (k_9 != l_9)))
                    _fail(l_9);
                  else
                    k_9 = l_9;
                }
              }
            }
            t = not_null(k_9);
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
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      t = SSL_WriteToBinaryFile(not_null(t_9), not_null(u_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm c_10 = NULL;
  a_10 = t;
  {
    ATerm d_10 = NULL;
    t = xtc_new_file_0(t);
    {
      d_10 = t;
      {
        if(((c_10 != NULL) && (c_10 != d_10)))
          _fail(d_10);
        else
          c_10 = d_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(a_10));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_10);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_10));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, z_74, a_75);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_close_file(not_null(h_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym__2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      t = SSL_execvp(not_null(n_10), not_null(o_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_waitpid(not_null(t_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm d_11 = NULL;
  ATerm f_11 = NULL;
  d_11 = t;
  {
    t = fork_0(t);
    {
      f_11 = t;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL;
            h_11 = t;
            z_10 :
            if(match_int(h_11, 0))
              {
                t = not_null(d_11);
                t = b_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
              t = not_null(f_11);
              {
                t = waitpid_0(t);
                {
                  i_11 = t;
                  b_11 :
                  if(match_cons(i_11, sym_WaitStatus_3))
                    {
                      j_11 = ATgetArgument(i_11, 0);
                      k_11 = ATgetArgument(i_11, 1);
                      l_11 = ATgetArgument(i_11, 2);
                      c_11 :
                      if(match_int(j_11, 0))
                        {
                          t = not_null(d_11);
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
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym__2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm z_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), not_null(u_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, z_1);
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
ATerm xtc_command_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm a_12 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm b_12 = NULL;
    t = q_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        b_12 = t;
        if(((a_12 != NULL) && (a_12 != b_12)))
          _fail(b_12);
        else
          a_12 = b_12;
      }
    }
  }
  t = v_11;
  {
    ATerm w_11;
    w_11 = t;
    {
      ATerm c_12 = NULL;
      ATerm d_12 = NULL;
      d_12 = t;
      if(((c_12 != NULL) && (c_12 != d_12)))
        _fail(d_12);
      else
        c_12 = d_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(c_12));
        t = call_0(t);
      }
    }
    t = w_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
        ATerm x_11;
        x_11 = t;
        {
          ATerm t_12 = NULL;
          ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
          t = m_75(t);
          {
            t_12 = t;
            {
              if(((q_12 != NULL) && (q_12 != t_12)))
                _fail(t_12);
              else
                q_12 = t_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), not_null(m_12), not_null(n_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_11 = t;
                    int z_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), term_e_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(z_11);
                      }
                    else
                      {
                        t = y_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_12 = t;
                      j_12 :
                      if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                        {
                          v_12 = ATgetFirst((ATermList) u_12);
                          w_12 = (ATerm) ATgetNext((ATermList) u_12);
                          {
                            if(((r_12 != NULL) && (r_12 != v_12)))
                              _fail(v_12);
                            else
                              r_12 = v_12;
                            {
                              if(((s_12 != NULL) && (s_12 != w_12)))
                                _fail(w_12);
                              else
                                s_12 = w_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), term_e_12, (ATerm) ATinsert(CheckATermList(not_null(s_12)), (ATerm) ATinsert(CheckATermList(not_null(r_12)), not_null(m_12))));
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
        t = x_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm f_12;
  f_12 = t;
  {
    t = z_86(t);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_g_12;
        return(t);
      }
      t = debug_1(t, b_2);
    }
  }
  t = f_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
      g_13 = t;
      b_13 :
      if(match_cons(g_13, sym__2))
        {
          h_13 = ATgetArgument(g_13, 0);
          i_13 = ATgetArgument(g_13, 1);
          {
            if(((f_13 != NULL) && (f_13 != h_13)))
              _fail(h_13);
            else
              f_13 = h_13;
            if(((e_13 != NULL) && (e_13 != i_13)))
              _fail(i_13);
            else
              e_13 = i_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_12);
      t = SSL_open_file(not_null(f_13), not_null(e_13));
    }
  else
    {
      t = h_12;
      {
        ATerm j_13 = NULL;
        ATerm k_13 = NULL;
        ATerm c_2 (ATerm t)
        {
          t = term_o_12;
          return(t);
        }
        t = obsolete_1(t, c_2);
        {
          j_13 = t;
          {
            if(((f_13 != NULL) && (f_13 != j_13)))
              _fail(j_13);
            else
              f_13 = j_13;
            {
              ATerm p_12;
              p_12 = t;
              {
                ATerm l_13 = NULL;
                t = term_x_12;
                {
                  l_13 = t;
                  if(((k_13 != NULL) && (k_13 != l_13)))
                    _fail(l_13);
                  else
                    k_13 = l_13;
                }
              }
              t = p_12;
              t = SSL_open_file(not_null(f_13), not_null(k_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm t_13 = NULL;
  r_13 = t;
  {
    ATerm y_12;
    y_12 = t;
    {
      ATerm u_13 = NULL;
      t = term_z_12;
      {
        u_13 = t;
        if(((t_13 != NULL) && (t_13 != u_13)))
          _fail(u_13);
        else
          t_13 = u_13;
      }
    }
    t = y_12;
    {
      t = SSL_open_file(not_null(r_13), not_null(t_13));
      t = SSL_close_file(not_null(r_13));
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
  ATerm y_13 = NULL;
  ATerm z_13 = NULL;
  t = term_a_13;
  {
    t = new_0(t);
    {
      z_13 = t;
      if(((y_13 != NULL) && (y_13 != z_13)))
        _fail(z_13);
      else
        y_13 = z_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_c_13);
    {
      t = conc_strings_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = new_file_0(t);
  {
    d_14 = t;
    {
      ATerm d_13;
      d_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_x_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_a_13);
            {
              ATerm e_2 (ATerm t)
              {
                t = term_m_13;
                return(t);
              }
              t = assert_1(t, e_2);
            }
          }
        }
      }
      t = d_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_stdin_0))
    {
      ATerm p_14 = NULL;
      ATerm q_14 = NULL;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_14)), term_n_13));
              {
                t = conc_0(t);
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
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_14));
    }
  else
    {
      if(match_cons(n_14, sym_FILE_1))
        {
          o_14 = ATgetArgument(n_14, 0);
          {
            ATerm u_14 = NULL;
            ATerm v_14 = NULL;
            t = not_null(o_14);
            {
              ATerm w_14 = NULL;
              t = xtc_new_file_0(t);
              {
                v_14 = t;
                {
                  if(((u_14 != NULL) && (u_14 != v_14)))
                    _fail(v_14);
                  else
                    u_14 = v_14;
                  {
                    ATerm x_14 = NULL;
                    t = o_0(t);
                    {
                      x_14 = t;
                      if(((w_14 != NULL) && (w_14 != x_14)))
                        _fail(x_14);
                      else
                        w_14 = x_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_14)), term_n_13), not_null(o_14)), term_o_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
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
  ATerm i_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_stdin_0))
    {
      ATerm k_15 = NULL,m_15 = NULL;
      ATerm p_13;
      p_13 = t;
      {
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
      }
      t = p_13;
      {
        ATerm n_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        t = not_null(m_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm t_52 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_FILE_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = t_52(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_16)), not_null(a_16));
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
                t = not_null(e_16);
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
ATerm xtc_transform_2 (ATerm t, ATerm s_74 (ATerm), ATerm t_74 (ATerm))
{
  ATerm q_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          t = stdin_0(t);
        }
      LocalPopChoice(s_13);
      t = xtc_transform_file_2(t, s_74, t_74);
    }
  else
    {
      t = q_13;
      t = xtc_transform_term_2(t, s_74, t_74);
    }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = term_x_13;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm m_16 = NULL,o_16 = NULL;
    ATerm a_14;
    a_14 = t;
    {
      ATerm n_16 = NULL;
      t = term_a_13;
      {
        t = j_87(t);
        {
          t = xtc_find_0(t);
          {
            n_16 = t;
            if(((m_16 != NULL) && (m_16 != n_16)))
              _fail(n_16);
            else
              m_16 = n_16;
          }
        }
      }
    }
    t = a_14;
    {
      ATerm p_16 = NULL;
      t = term_a_13;
      {
        t = pass_v_verbose_0(t);
        {
          p_16 = t;
          if(((o_16 != NULL) && (o_16 != p_16)))
            _fail(p_16);
          else
            o_16 = p_16;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_16)), not_null(m_16)), term_c_14), term_b_14);
    }
    return(t);
  }
  t = xtc_transform_2(t, f_2, g_2);
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
      ATerm e_14;
      e_14 = t;
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
      t = e_14;
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
      ATerm f_14;
      f_14 = t;
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
      t = f_14;
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
        ATerm g_14 = t;
        int h_14 = stack_ptr;
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
                  ATerm i_14 = t;
                  int j_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(j_14);
                    }
                  else
                    {
                      t = i_14;
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
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
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
                        ATerm t_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_14 = t;
                            int z_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(z_14);
                              }
                            else
                              {
                                t = y_14;
                                {
                                  ATerm a_15 = t;
                                  int b_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_15);
                                    }
                                  else
                                    {
                                      t = a_15;
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
                            t = t_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(o_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
                  ;
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
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
        ATerm c_15;
        c_15 = t;
        {
          ATerm q_19 = NULL;
          ATerm s_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
          {
            ATerm d_15 = t;
            int e_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(e_15);
              }
            else
              {
                t = d_15;
                t = (ATerm) ATempty;
              }
            {
              s_19 = t;
              if(((q_19 != NULL) && (q_19 != s_19)))
                _fail(s_19);
              else
                q_19 = s_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_19), not_null(n_19), not_null(q_19));
            t = table_put_0(t);
          }
        }
        t = c_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm f_15;
  f_15 = t;
  {
    ATerm h_20 = NULL;
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
    t = j_75(t);
    {
      h_20 = t;
      {
        if(((g_20 != NULL) && (g_20 != h_20)))
          _fail(h_20);
        else
          g_20 = h_20;
        {
          ATerm g_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_e_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(j_15);
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_20), term_e_12, not_null(e_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_20);
                          {
                            ATerm h_2 (ATerm t)
                            {
                              ATerm n_20 = NULL;
                              n_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(n_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, h_2);
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
  t = f_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_remove(not_null(y_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_63(t);
      t = o_63(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        t = o_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm d_21 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    ATerm e_21 = NULL;
    ATerm f_21 = NULL;
    t = i_75(t);
    {
      e_21 = t;
      {
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        {
          ATerm g_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), term_e_12);
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_21), term_e_12, (ATerm) ATinsert(CheckATermList(not_null(f_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm l_21 = NULL,r_21 = NULL;
  ATerm i_2 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = begin_scope_1(t, i_2);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm t_15;
      t_15 = t;
      {
        ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
        ATerm u_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_15;
            t = table_get_0(t);
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = u_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_21 = t;
          k_21 :
          if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
            {
              t_21 = ATgetFirst((ATermList) s_21);
              u_21 = (ATerm) ATgetNext((ATermList) s_21);
              {
                if(((r_21 != NULL) && (r_21 != t_21)))
                  _fail(t_21);
                else
                  r_21 = t_21;
                {
                  if(((l_21 != NULL) && (l_21 != u_21)))
                    _fail(u_21);
                  else
                    l_21 = u_21;
                  {
                    t = not_null(r_21);
                    {
                      ATerm k_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, k_2);
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
      t = t_15;
      {
        ATerm l_2 (ATerm t)
        {
          t = term_m_13;
          return(t);
        }
        t = end_scope_1(t, l_2);
      }
      return(t);
    }
    t = restore_always_2(t, c_74, j_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm d_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        ATerm j_22 = NULL;
        t = term_o_13;
        {
          t = get_config_0(t);
          {
            j_22 = t;
            if(((i_22 != NULL) && (i_22 != j_22)))
              _fail(j_22);
            else
              i_22 = j_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_22));
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = d_16;
        t = term_o_11;
      }
    {
      t = d_74(t);
      {
        ATerm n_2 (ATerm t)
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              t = term_j_16;
            }
          return(t);
        }
        t = copy_to_1(t, n_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, m_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm n_22 = NULL;
    n_22 = t;
    m_22 :
    if(!(match_string(n_22, "-v")))
      {
        if(!(match_string(n_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_k_16;
    t = set_config_0(t);
    t = term_l_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = Option_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm r_22 = NULL;
    r_22 = t;
    p_22 :
    if(!(match_string(r_22, "-k")))
      {
        if(!(match_string(r_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm r_16;
    r_16 = t;
    {
      ATerm s_22 = NULL;
      ATerm t_22 = NULL;
      t = string_to_int_0(t);
      {
        t_22 = t;
        if(((s_22 != NULL) && (s_22 != t_22)))
          _fail(t_22);
        else
          s_22 = t_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_16, not_null(s_22));
        t = set_config_0(t);
      }
    }
    t = r_16;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  t = ArgOption_3(t, r_2, v_2, w_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  t = SSL_string_to_int(not_null(w_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm e_23 = NULL;
        e_23 = t;
        z_22 :
        if(!(match_string(e_23, "-S")))
          {
            if(!(match_string(e_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_b_17;
        t = set_config_0(t);
        t = term_c_17;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_f_17;
        return(t);
      }
      t = Option_3(t, x_2, y_2, z_2);
      ;
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
            ATerm a_3 (ATerm t)
            {
              ATerm f_23 = NULL;
              f_23 = t;
              a_23 :
              if(!(match_string(f_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm i_23 = NULL;
              ATerm m_17;
              m_17 = t;
              {
                ATerm g_23 = NULL;
                ATerm h_23 = NULL;
                t = string_to_int_0(t);
                {
                  h_23 = t;
                  if(((g_23 != NULL) && (g_23 != h_23)))
                    _fail(h_23);
                  else
                    g_23 = h_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(g_23));
                  t = set_config_0(t);
                }
              }
              t = m_17;
              {
                ATerm j_23 = NULL;
                j_23 = t;
                if(((i_23 != NULL) && (i_23 != j_23)))
                  _fail(j_23);
                else
                  i_23 = j_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_23));
              }
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_n_17;
              return(t);
            }
            t = ArgOption_3(t, a_3, d_3, e_3);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm g_3 (ATerm t)
              {
                ATerm k_23 = NULL;
                k_23 = t;
                d_23 :
                if(!(match_string(k_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = term_p_17;
                t = set_config_0(t);
                t = term_s_17;
                return(t);
              }
              ATerm i_3 (ATerm t)
              {
                t = term_x_17;
                return(t);
              }
              t = Option_3(t, g_3, h_3, i_3);
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
      ;
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
            ;
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
  ATerm j_3 (ATerm t)
  {
    ATerm q_23 = NULL;
    q_23 = t;
    n_23 :
    if(!(match_string(q_23, "-o")))
      {
        if(!(match_string(q_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm t_23 = NULL;
    ATerm c_18;
    c_18 = t;
    {
      ATerm r_23 = NULL;
      ATerm s_23 = NULL;
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_13, not_null(r_23));
        t = set_config_0(t);
      }
    }
    t = c_18;
    {
      ATerm u_23 = NULL;
      u_23 = t;
      if(((t_23 != NULL) && (t_23 != u_23)))
        _fail(u_23);
      else
        t_23 = u_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_23));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, m_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm d_24 = NULL;
          d_24 = t;
          x_23 :
          if(!(match_string(d_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_k_18;
          t = set_config_0(t);
          t = term_n_18;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_r_18;
          return(t);
        }
        t = Option_3(t, o_3, r_3, s_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  j_24 = t;
  h_24 :
  if(match_string(j_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_24) == AT_LIST) && !(ATisEmpty(j_24))))
        {
          k_24 = ATgetFirst((ATermList) j_24);
          l_24 = (ATerm) ATgetNext((ATermList) j_24);
          i_24 :
          if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
            {
              m_24 = ATgetFirst((ATermList) l_24);
              n_24 = (ATerm) ATgetNext((ATermList) l_24);
              {
                ATerm u_24 = NULL;
                ATerm t_18;
                t_18 = t;
                {
                  t = not_null(k_24);
                  t = j_0(t);
                }
                t = t_18;
                {
                  ATerm w_24 = NULL;
                  t = not_null(m_24);
                  {
                    t = k_0(t);
                    {
                      w_24 = t;
                      if(((u_24 != NULL) && (u_24 != w_24)))
                        _fail(w_24);
                      else
                        u_24 = w_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(u_24));
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
  ATerm t_3 (ATerm t)
  {
    ATerm d_25 = NULL;
    d_25 = t;
    a_25 :
    if(!(match_string(d_25, "-i")))
      {
        if(!(match_string(d_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm g_25 = NULL;
    ATerm u_18;
    u_18 = t;
    {
      ATerm e_25 = NULL;
      ATerm f_25 = NULL;
      f_25 = t;
      if(((e_25 != NULL) && (e_25 != f_25)))
        _fail(f_25);
      else
        e_25 = f_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(e_25));
        t = set_config_0(t);
      }
    }
    t = u_18;
    {
      ATerm h_25 = NULL;
      h_25 = t;
      if(((g_25 != NULL) && (g_25 != h_25)))
        _fail(h_25);
      else
        g_25 = h_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_25));
    }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, x_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm n_25 = NULL,o_25 = NULL;
      n_25 = t;
      l_25 :
      if(match_cons(n_25, sym_Program_1))
        {
          o_25 = ATgetArgument(n_25, 0);
          if(((m_25 != NULL) && (m_25 != o_25)))
            _fail(o_25);
          else
            m_25 = o_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_19), not_null(m_25)), term_b_19));
      {
        t = printnl_0(t);
        {
          t = term_i_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, term_h_19));
  {
    t = printnl_0(t);
    {
      t = term_i_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_TicksToSeconds(not_null(r_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_25), not_null(y_25));
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = SSL_addr(not_null(x_25), not_null(y_25));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm))
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_71(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
        f_26 = t;
        e_26 :
        if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
          {
            g_26 = ATgetFirst((ATermList) f_26);
            h_26 = (ATerm) ATgetNext((ATermList) f_26);
            {
              ATerm k_26 = NULL;
              ATerm l_26 = NULL;
              t = not_null(h_26);
              {
                t = foldr_2(t, e_71, f_71);
                {
                  l_26 = t;
                  if(((k_26 != NULL) && (k_26 != l_26)))
                    _fail(l_26);
                  else
                    k_26 = l_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(k_26));
                t = f_71(t);
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
ATerm crush_2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm s_26 = NULL;
  ATerm u_26 = NULL;
  s_26 = t;
  {
    ATerm v_26 = NULL;
    ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
    t = not_null(s_26);
    {
      v_26 = t;
      {
        t = SSL_explode_term(not_null(v_26));
        {
          x_26 = t;
          r_26 :
          if(match_cons(x_26, sym__2))
            {
              y_26 = ATgetArgument(x_26, 0);
              z_26 = ATgetArgument(x_26, 1);
              if(((u_26 != NULL) && (u_26 != z_26)))
                _fail(z_26);
              else
                u_26 = z_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_26);
      t = foldr_2(t, c_70, d_70);
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
      t = term_a_17;
      return(t);
    }
    t = crush_2(t, b_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  e_27 :
  if(match_cons(f_27, sym__2))
    {
      g_27 = ATgetArgument(f_27, 0);
      h_27 = ATgetArgument(f_27, 1);
      {
        ATerm r_19;
        r_19 = t;
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_27), not_null(h_27));
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              t = SSL_gtr(not_null(g_27), not_null(h_27));
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
  ATerm n_27 = NULL;
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
      o_27 = t;
      m_27 :
      if(match_cons(o_27, sym__2))
        {
          p_27 = ATgetArgument(o_27, 0);
          q_27 = ATgetArgument(o_27, 1);
          {
            if(((n_27 != NULL) && (n_27 != p_27)))
              _fail(p_27);
            else
              n_27 = p_27;
            if(((n_27 != NULL) && (n_27 != q_27)))
              _fail(q_27);
            else
              n_27 = q_27;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm x_19;
    x_19 = t;
    {
      ATerm t_27 = NULL;
      ATerm u_27 = NULL;
      t = term_a_7;
      {
        t = get_config_0(t);
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), term_i_7);
        t = geq_0(t);
      }
    }
    t = x_19;
    t = f_59(t);
    return(t);
  }
  t = try_1(t, c_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm y_27 = NULL,a_28 = NULL;
    ATerm y_19;
    y_19 = t;
    {
      ATerm z_27 = NULL;
      t = run_time_0(t);
      {
        z_27 = t;
        if(((y_27 != NULL) && (y_27 != z_27)))
          _fail(z_27);
        else
          y_27 = z_27;
      }
    }
    t = y_19;
    {
      ATerm b_28 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_20), not_null(y_27)), term_a_20), not_null(a_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_4);
  {
    t = term_a_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_Version_0))
    {
      ATerm k_28 = NULL,m_28 = NULL;
      ATerm c_20;
      c_20 = t;
      {
        ATerm l_28 = NULL;
        t = SSLgetAnnotations(not_null(i_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
      }
      t = c_20;
      {
        ATerm n_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_28));
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
        t = not_null(m_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, h_4);
  t = p_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_table_create(not_null(s_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  {
    ATerm q_20;
    q_20 = t;
    {
      t = term_r_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, not_null(w_28));
          t = table_put_0(t);
        }
      }
    }
    t = q_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_table_destroy(not_null(a_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_exit(not_null(e_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(((ATgetType(j_29) == AT_LIST) && ATisEmpty(j_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
        {
          k_29 = ATgetFirst((ATermList) j_29);
          l_29 = (ATerm) ATgetNext((ATermList) j_29);
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
  ATerm t_20;
  t_20 = t;
  {
    ATerm q_29 = NULL;
    ATerm w_29 = NULL;
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        {
          ATerm u_29 = NULL;
          ATerm v_29 = NULL;
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
          t = (ATerm) ATinsert(ATempty, not_null(u_29));
        }
      }
    {
      w_29 = t;
      if(((q_29 != NULL) && (q_29 != w_29)))
        _fail(w_29);
      else
        q_29 = w_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, not_null(q_29));
      t = printnl_0(t);
    }
  }
  t = t_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  h_30 = t;
  e_30 :
  if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
    {
      f_30 = ATgetFirst((ATermList) h_30);
      g_30 = (ATerm) ATgetNext((ATermList) h_30);
      {
        ATerm m_30 = NULL;
        t = not_null(g_30);
        {
          ATerm w_20;
          w_20 = t;
          {
            ATerm n_30 = NULL,p_30 = NULL,r_30 = NULL;
            ATerm x_20;
            x_20 = t;
            {
              ATerm o_30 = NULL;
              t = i_0(t);
              {
                o_30 = t;
                if(((n_30 != NULL) && (n_30 != o_30)))
                  _fail(o_30);
                else
                  n_30 = o_30;
              }
            }
            t = x_20;
            {
              ATerm q_30 = NULL;
              t = not_null(f_30);
              {
                t = h_0(t);
                {
                  q_30 = t;
                  if(((p_30 != NULL) && (p_30 != q_30)))
                    _fail(q_30);
                  else
                    p_30 = q_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_30)), not_null(p_30));
                {
                  r_30 = t;
                  if(((m_30 != NULL) && (m_30 != r_30)))
                    _fail(r_30);
                  else
                    m_30 = r_30;
                }
              }
            }
          }
          t = w_20;
          {
            ATerm p_4 (ATerm t)
            {
              t = not_null(m_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, p_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_30) == AT_LIST) && ATisEmpty(h_30)))
        {
          {
            t = term_a_13;
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
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm c_31 = NULL,d_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym_Program_1))
    {
      d_31 = ATgetArgument(c_31, 0);
      {
        ATerm g_31 = NULL,i_31 = NULL;
        ATerm h_31 = NULL;
        t = SSLgetAnnotations(not_null(c_31));
        {
          h_31 = t;
          if(((g_31 != NULL) && (g_31 != h_31)))
            _fail(h_31);
          else
            g_31 = h_31;
        }
        {
          t = not_null(d_31);
          {
            ATerm k_31 = NULL;
            t = a_53(t);
            {
              i_31 = t;
              {
                ATerm l_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_31)), not_null(g_31));
                {
                  l_31 = t;
                  if(((k_31 != NULL) && (k_31 != l_31)))
                    _fail(l_31);
                  else
                    k_31 = l_31;
                }
                t = not_null(k_31);
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
  ATerm u_31 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_31 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
      }
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm w_31 = NULL;
            w_31 = t;
            if(((u_31 != NULL) && (u_31 != w_31)))
              _fail(w_31);
            else
              u_31 = w_31;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = option_defined_1(t, r_4);
      }
    }
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(u_31);
        return(t);
      }
      t = short_description_1(t, z_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_4);
    {
      t = term_b_21;
      {
        t = echo_0(t);
        {
          t = term_i_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm x_31 = NULL;
                  ATerm a_32 = NULL;
                  a_32 = t;
                  if(((x_31 != NULL) && (x_31 != a_32)))
                    _fail(a_32);
                  else
                    x_31 = a_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_31)), term_j_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_5);
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm b_32 = NULL;
                    ATerm c_32 = NULL;
                    ATerm g_5 (ATerm t)
                    {
                      t = not_null(u_31);
                      return(t);
                    }
                    t = long_description_1(t, g_5);
                    {
                      c_32 = t;
                      if(((b_32 != NULL) && (b_32 != c_32)))
                        _fail(c_32);
                      else
                        b_32 = c_32;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_32)), term_m_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_5);
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
  ATerm n_21;
  n_21 = t;
  {
    ATerm n_32 = NULL;
    ATerm o_32 = NULL;
    o_32 = t;
    if(((n_32 != NULL) && (n_32 != o_32)))
      _fail(o_32);
    else
      n_32 = o_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, not_null(n_32)));
      t = printnl_0(t);
    }
  }
  t = n_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm o_21;
  o_21 = t;
  {
    t = t_86(t);
    t = debug_0(t);
  }
  t = o_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm z_32 = NULL,a_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Undefined_1))
    {
      a_33 = ATgetArgument(z_32, 0);
      {
        ATerm d_33 = NULL,f_33 = NULL;
        ATerm e_33 = NULL;
        t = SSLgetAnnotations(not_null(z_32));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
        {
          t = not_null(a_33);
          {
            ATerm h_33 = NULL;
            t = b_53(t);
            {
              f_33 = t;
              {
                ATerm i_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_33)), not_null(d_33));
                {
                  i_33 = t;
                  if(((h_33 != NULL) && (h_33 != i_33)))
                    _fail(i_33);
                  else
                    h_33 = i_33;
                }
                t = not_null(h_33);
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
ATerm fetch_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm x_33 (ATerm t)
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_64, _id);
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = Cons_2(t, _id, x_33);
      }
    return(t);
  }
  t = x_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_76 (ATerm))
{
  t = fetch_1(t, w_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym_Help_0))
    {
      ATerm i_34 = NULL,n_34 = NULL;
      ATerm v_21;
      v_21 = t;
      {
        ATerm j_34 = NULL;
        t = SSLgetAnnotations(not_null(f_34));
        {
          j_34 = t;
          if(((i_34 != NULL) && (i_34 != j_34)))
            _fail(j_34);
          else
            i_34 = j_34;
        }
      }
      t = v_21;
      {
        ATerm y_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_34));
        {
          y_34 = t;
          if(((n_34 != NULL) && (n_34 != y_34)))
            _fail(y_34);
          else
            n_34 = y_34;
        }
        t = not_null(n_34);
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
  ATerm e_35 = NULL;
  e_35 = t;
  t = SSL_implode_string(not_null(e_35));
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm k_35 = NULL,q_35 = NULL,r_35 = NULL;
        k_35 = t;
        j_35 :
        if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
          {
            q_35 = ATgetFirst((ATermList) k_35);
            r_35 = (ATerm) ATgetNext((ATermList) k_35);
            {
              t = not_null(q_35);
              {
                ATerm l_5 (ATerm t)
                {
                  t = not_null(r_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_5);
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
  ATerm f_36 = NULL;
  ATerm h_36 = NULL;
  f_36 = t;
  {
    ATerm i_36 = NULL;
    ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
    t = not_null(f_36);
    {
      i_36 = t;
      {
        t = SSL_explode_term(not_null(i_36));
        {
          k_36 = t;
          d_36 :
          if(match_cons(k_36, sym__2))
            {
              l_36 = ATgetArgument(k_36, 0);
              m_36 = ATgetArgument(k_36, 1);
              e_36 :
              if(match_string(l_36, ""))
                {
                  if(((h_36 != NULL) && (h_36 != m_36)))
                    _fail(m_36);
                  else
                    h_36 = m_36;
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
      t = not_null(h_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm q_36 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_36);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          t = Nil_0(t);
          t = f_65(t);
        }
      }
    return(t);
  }
  t = q_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym__2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        t = not_null(u_36);
        {
          ATerm m_5 (ATerm t)
          {
            t = not_null(v_36);
            return(t);
          }
          t = at_end_1(t, m_5);
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
      ;
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
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_explode_string(not_null(a_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym__2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        {
          t = not_null(k_37);
          {
            ATerm t_37 = NULL;
            t = w_50(t);
            {
              r_37 = t;
              {
                t = not_null(l_37);
                {
                  ATerm v_37 = NULL;
                  t = x_50(t);
                  {
                    t_37 = t;
                    {
                      ATerm w_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_37), not_null(t_37)), not_null(p_37));
                      {
                        w_37 = t;
                        if(((v_37 != NULL) && (v_37 != w_37)))
                          _fail(w_37);
                        else
                          v_37 = w_37;
                      }
                      t = not_null(v_37);
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
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym__2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      {
        ATerm c_22;
        c_22 = t;
        t = SSL_printnl(not_null(f_38), not_null(g_38));
        t = c_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm d_22;
  d_22 = t;
  {
    ATerm m_38 = NULL,o_38 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm n_38 = NULL;
      t = s_86(t);
      {
        n_38 = t;
        if(((m_38 != NULL) && (m_38 != n_38)))
          _fail(n_38);
        else
          m_38 = n_38;
      }
    }
    t = e_22;
    {
      ATerm p_38 = NULL;
      p_38 = t;
      if(((o_38 != NULL) && (o_38 != p_38)))
        _fail(p_38);
      else
        o_38 = p_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), not_null(m_38)));
        t = printnl_0(t);
      }
    }
  }
  t = d_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm s_38 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = Cons_2(t, q_64, s_38);
      }
    return(t);
  }
  t = s_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t = SSL_is_string(not_null(u_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = h_22;
      {
        ATerm l_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_5);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = l_22;
            {
              ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
              d_39 = t;
              c_39 :
              if(match_cons(d_39, sym_Path_1))
                {
                  e_39 = ATgetArgument(d_39, 0);
                  t = not_null(e_39);
                }
              else
                {
                  if(match_cons(d_39, sym_Var_1))
                    {
                      e_39 = ATgetArgument(d_39, 0);
                      {
                        t = not_null(e_39);
                        {
                          ATerm q_22 = t;
                          int u_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_22);
                            }
                          else
                            {
                              t = q_22;
                              {
                                ATerm r_5 (ATerm t)
                                {
                                  t = term_v_22;
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
                      if(match_cons(d_39, sym_Prefix_2))
                        {
                          e_39 = ATgetArgument(d_39, 0);
                          f_39 = ATgetArgument(d_39, 1);
                          {
                            ATerm k_39 = NULL,m_39 = NULL;
                            ATerm x_22;
                            x_22 = t;
                            {
                              ATerm l_39 = NULL;
                              t = not_null(e_39);
                              {
                                t = eval_config_0(t);
                                {
                                  l_39 = t;
                                  if(((k_39 != NULL) && (k_39 != l_39)))
                                    _fail(l_39);
                                  else
                                    k_39 = l_39;
                                }
                              }
                            }
                            t = x_22;
                            {
                              ATerm n_39 = NULL;
                              t = not_null(f_39);
                              {
                                t = eval_config_0(t);
                                {
                                  n_39 = t;
                                  if(((m_39 != NULL) && (m_39 != n_39)))
                                    _fail(n_39);
                                  else
                                    m_39 = n_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_39), not_null(m_39));
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
  ATerm v_39 = NULL;
  v_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_22, not_null(v_39));
    {
      t = table_get_0(t);
      {
        ATerm s_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_23;
            b_23 = t;
            {
              ATerm x_39 = NULL;
              ATerm y_39 = NULL;
              y_39 = t;
              if(((x_39 != NULL) && (x_39 != y_39)))
                _fail(y_39);
              else
                x_39 = y_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_22, not_null(v_39), not_null(x_39));
                t = table_put_0(t);
              }
            }
            t = b_23;
          }
          return(t);
        }
        t = try_1(t, s_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm c_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_62(t);
      ;
      LocalPopChoice(l_23);
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
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym__2))
    {
      e_40 = ATgetArgument(d_40, 0);
      f_40 = ATgetArgument(d_40, 1);
      t = SSL_table_get(not_null(e_40), not_null(f_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym__3))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      p_40 = ATgetArgument(m_40, 2);
      {
        ATerm m_23;
        m_23 = t;
        {
          ATerm t_40 = NULL;
          ATerm u_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_40), not_null(o_40));
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = (ATerm) ATempty;
              }
            {
              u_40 = t;
              if(((t_40 != NULL) && (t_40 != u_40)))
                _fail(u_40);
              else
                t_40 = u_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_40), not_null(o_40), (ATerm) ATinsert(CheckATermList(not_null(t_40)), not_null(p_40)));
            t = table_put_0(t);
          }
        }
        t = m_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm y_40 = NULL;
  ATerm z_40 = NULL;
  t = term_a_13;
  {
    t = b_78(t);
    {
      z_40 = t;
      if(((y_40 != NULL) && (y_40 != z_40)))
        _fail(z_40);
      else
        y_40 = z_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_21, term_h_21, not_null(y_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_string(i_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(i_41) == AT_LIST) && !(ATisEmpty(i_41))))
        {
          j_41 = ATgetFirst((ATermList) i_41);
          k_41 = (ATerm) ATgetNext((ATermList) i_41);
          {
            ATerm n_41 = NULL;
            ATerm v_23;
            v_23 = t;
            {
              t = not_null(j_41);
              t = a_0(t);
            }
            t = v_23;
            {
              ATerm o_41 = NULL;
              t = term_a_13;
              {
                t = d_0(t);
                {
                  o_41 = t;
                  if(((n_41 != NULL) && (n_41 != o_41)))
                    _fail(o_41);
                  else
                    n_41 = o_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_41)), not_null(n_41));
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
  ATerm v_5 (ATerm t)
  {
    ATerm t_41 = NULL;
    t_41 = t;
    s_41 :
    if(!(match_string(t_41, "--help")))
      {
        if(!(match_string(t_41, "-h")))
          {
            if(!(match_string(t_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_y_23;
    {
      t = set_config_0(t);
      t = term_z_23;
    }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_a_24;
    return(t);
  }
  t = Option_3(t, v_5, w_5, b_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
    {
      x_41 = ATgetFirst((ATermList) w_41);
      y_41 = (ATerm) ATgetNext((ATermList) w_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  h_42 :
  if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
    {
      j_42 = ATgetFirst((ATermList) i_42);
      k_42 = (ATerm) ATgetNext((ATermList) i_42);
      {
        ATerm o_42 = NULL,s_42 = NULL;
        ATerm p_42 = NULL;
        t = SSLgetAnnotations(not_null(i_42));
        {
          p_42 = t;
          if(((o_42 != NULL) && (o_42 != p_42)))
            _fail(p_42);
          else
            o_42 = p_42;
        }
        {
          t = not_null(j_42);
          {
            ATerm u_42 = NULL;
            t = f_52(t);
            {
              s_42 = t;
              {
                t = not_null(k_42);
                {
                  ATerm y_42 = NULL;
                  t = g_52(t);
                  {
                    u_42 = t;
                    {
                      ATerm z_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_42)), not_null(s_42)), not_null(o_42));
                      {
                        z_42 = t;
                        if(((y_42 != NULL) && (y_42 != z_42)))
                          _fail(z_42);
                        else
                          y_42 = z_42;
                      }
                      t = not_null(y_42);
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
        ATerm b_24;
        b_24 = t;
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
        t = b_24;
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
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  v_43 :
  if(match_cons(y_43, sym__2))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_22, not_null(z_43), not_null(a_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm c_24;
  c_24 = t;
  {
    ATerm c_6 (ATerm t)
    {
      t = term_e_24;
      t = z_77(t);
      return(t);
    }
    t = try_1(t, c_6);
  }
  t = c_24;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm j_44 = NULL;
      ATerm f_24;
      f_24 = t;
      {
        ATerm h_44 = NULL;
        ATerm i_44 = NULL;
        i_44 = t;
        if(((h_44 != NULL) && (h_44 != i_44)))
          _fail(i_44);
        else
          h_44 = i_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_19, not_null(h_44));
          t = set_config_0(t);
        }
      }
      t = f_24;
      {
        ATerm k_44 = NULL;
        k_44 = t;
        if(((j_44 != NULL) && (j_44 != k_44)))
          _fail(k_44);
        else
          j_44 = k_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_44));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm g_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              {
                t = z_77(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          ;
          LocalPopChoice(o_24);
        }
      else
        {
          t = g_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
    t_44 = t;
    p_44 :
    if(match_cons(t_44, sym__3))
      {
        u_44 = ATgetArgument(t_44, 0);
        v_44 = ATgetArgument(t_44, 1);
        w_44 = ATgetArgument(t_44, 2);
        {
          if(((q_44 != NULL) && (q_44 != u_44)))
            _fail(u_44);
          else
            q_44 = u_44;
          {
            if(((r_44 != NULL) && (r_44 != v_44)))
              _fail(v_44);
            else
              r_44 = v_44;
            {
              if(((s_44 != NULL) && (s_44 != w_44)))
                _fail(w_44);
              else
                s_44 = w_44;
              t = SSL_table_put(not_null(q_44), not_null(r_44), not_null(s_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm z_44 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    t = term_t_24;
    t = table_put_0(t);
  }
  t = s_24;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm v_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_77(t);
          ;
          LocalPopChoice(x_24);
        }
      else
        {
          t = v_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25;
            b_25 = t;
            {
              ATerm c_25 = t;
              int i_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(i_25);
                }
              else
                {
                  t = c_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_25;
            {
              t = system_usage_0(t);
              {
                t = term_a_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm m_6 (ATerm t)
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm a_45 = NULL;
                  a_45 = t;
                  if(((z_44 != NULL) && (z_44 != a_45)))
                    _fail(a_45);
                  else
                    z_44 = a_45;
                  return(t);
                }
                t = Undefined_1(t, n_6);
                return(t);
              }
              t = option_defined_1(t, m_6);
              {
                ATerm o_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_44)), term_j_25);
                  return(t);
                }
                t = say_1(t, o_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_6);
      {
        ATerm k_25;
        k_25 = t;
        {
          t = term_c_21;
          t = table_destroy_0(t);
        }
        t = k_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  t = parse_options_1(t, v_75);
  {
    t = store_options_0(t);
    {
      t = x_75(t);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_75);
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            {
              ATerm s_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_75(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = s_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  t = option_wrap_4(t, z_75, default_usage_0, _id, a_76);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm u_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_74(t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = u_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = xtc_io_1(t, i_74);
    return(t);
  }
  t = option_wrap_2(t, p_6, u_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm g_74 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, g_74);
  return(t);
}
ATerm io_parse_sdf_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    t = xtc_sglr_1(t, w_6);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_1(t, v_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_sdf_0(t);
  return(t);
}
