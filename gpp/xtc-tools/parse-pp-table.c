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
ATerm term_a_26;
ATerm term_z_25;
ATerm term_i_25;
ATerm term_s_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
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
ATerm term_p_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_k_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_f_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_k_9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_a_12);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_w_12);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_w_12);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_w_12);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_c_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_w_12);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__3, term_b_21, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm g_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm y_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm f_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm h_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm union_1 (ATerm, ATerm e_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm q_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm y_58 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_74 (ATerm));
ATerm assert_1 (ATerm, ATerm z_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm p_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm xtc_sglr_2 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm u_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm));
ATerm crush_2 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_77 (ATerm));
ATerm Program_1 (ATerm, ATerm w_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_86 (ATerm));
ATerm map_1 (ATerm, ATerm h_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm x_73 (ATerm));
ATerm io_parse_pp_table_0 (ATerm);
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
        ATerm w_6 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            LocalPopChoice(c_7);
          }
        else
          {
            t = w_6;
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
  t = term_d_7;
  {
    ATerm e_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(j_7);
      }
    else
      {
        t = e_7;
        t = term_k_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_k_7);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_d_7);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm e_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_m_7);
      return(t);
    }
    t = if_verbose1_1(t, e_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  t = SSL_table_keys(not_null(b_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm j_3 = NULL;
        ATerm l_3 = NULL;
        j_3 = t;
        {
          ATerm m_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_3), not_null(j_3));
          {
            t = table_get_0(t);
            {
              m_3 = t;
              if(((l_3 != NULL) && (l_3 != m_3)))
                _fail(m_3);
              else
                l_3 = m_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), not_null(l_3));
        }
        return(t);
      }
      t = map_1(t, f_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm n_7;
    n_7 = t;
    {
      ATerm r_3 = NULL;
      ATerm s_3 = NULL;
      t = term_d_7;
      {
        t = get_config_0(t);
        {
          s_3 = t;
          if(((r_3 != NULL) && (r_3 != s_3)))
            _fail(s_3);
          else
            r_3 = s_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), term_t_7);
        t = geq_0(t);
      }
    }
    t = n_7;
    t = g_59(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_7;
  u_7 = t;
  {
    ATerm v_3 = NULL;
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(v_3));
      t = printnl_0(t);
    }
  }
  t = u_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm e_4 = NULL,f_4 = NULL;
  c_4 = t;
  {
    ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_4)));
    {
      t = table_get_0(t);
      {
        g_4 = t;
        a_4 :
        if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
          {
            h_4 = ATgetFirst((ATermList) g_4);
            k_4 = (ATerm) ATgetNext((ATermList) g_4);
            b_4 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((e_4 != NULL) && (e_4 != i_4)))
                    _fail(i_4);
                  else
                    e_4 = i_4;
                  if(((f_4 != NULL) && (f_4 != j_4)))
                    _fail(j_4);
                  else
                    f_4 = j_4;
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
    t = not_null(f_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm w_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_4)));
        {
          t = table_get_0(t);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
              x_4 = t;
              p_4 :
              if(match_cons(x_4, sym__2))
                {
                  y_4 = ATgetArgument(x_4, 0);
                  z_4 = ATgetArgument(x_4, 1);
                  {
                    if(((t_4 != NULL) && (t_4 != y_4)))
                      _fail(y_4);
                    else
                      t_4 = y_4;
                    if(((w_4 != NULL) && (w_4 != z_4)))
                      _fail(z_4);
                    else
                      w_4 = z_4;
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
        t = not_null(w_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1(t, y_71);
              return(t);
            }
            t = Cons_2(t, y_71, r_0);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
              e_5 = t;
              d_5 :
              if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
                {
                  f_5 = ATgetFirst((ATermList) e_5);
                  g_5 = (ATerm) ATgetNext((ATermList) e_5);
                  {
                    t = not_null(g_5);
                    t = filter_1(t, y_71);
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
ATerm repeat_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = s_77(t);
      t = j_5(t);
      return(t);
    }
    t = try_1(t, s_0);
    return(t);
  }
  t = j_5(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_i_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm j_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_8;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, t_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm k_8;
    k_8 = t;
    {
      ATerm l_5 = NULL;
      ATerm m_5 = NULL;
      t = term_d_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_m_8);
        t = geq_0(t);
      }
    }
    t = k_8;
    t = f_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm n_8;
    n_8 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_d_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_o_8);
        t = geq_0(t);
      }
    }
    t = n_8;
    t = h_59(t);
    return(t);
  }
  t = try_1(t, v_0);
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
ATerm HdMember_p__2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
    {
      d_6 = ATgetFirst((ATermList) c_6);
      e_6 = (ATerm) ATgetNext((ATermList) c_6);
      {
        t = j_70(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm h_6 = NULL;
            h_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(h_6));
              t = i_70(t);
            }
            return(t);
          }
          t = fetch_1(t, w_0);
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
ATerm union_1 (ATerm t, ATerm e_70 (ATerm))
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
            ATerm r_8 = t;
            int s_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_6);
                LocalPopChoice(s_8);
              }
            else
              {
                t = r_8;
                {
                  ATerm v_8 = t;
                  int w_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_0 (ATerm t)
                      {
                        t = not_null(p_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_70, x_0);
                      t = t_6(t);
                      LocalPopChoice(w_8);
                    }
                  else
                    {
                      t = v_8;
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
        ATerm x_8;
        x_8 = t;
        {
          ATerm f_7 = NULL;
          ATerm g_7 = NULL,i_7 = NULL;
          ATerm h_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(a_7));
          {
            ATerm y_8 = t;
            int z_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(z_8);
              }
            else
              {
                t = y_8;
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
              t = union_0(t);
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
            t = set_0(t);
          }
        }
        t = x_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm q_59 (ATerm))
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
          ATerm z_0 (ATerm t)
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
                  t = q_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
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
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = term_f_9;
        return(t);
      }
      t = debug_1(t, b_1);
      return(t);
    }
    t = if_verbose5_1(t, a_1);
    {
      ATerm i_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_9;
        }
      {
        ATerm j_9;
        j_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_7, term_k_9, (ATerm) ATinsert(ATempty, not_null(e_8)));
          t = table_put_0(t);
        }
        t = j_9;
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_l_9;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose4_1(t, f_1);
          {
            ATerm m_9 = t;
            int r_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(r_9);
              }
            else
              {
                t = m_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm h_1 (ATerm t)
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_s_9;
                  return(t);
                }
                t = say_1(t, i_1);
                return(t);
              }
              t = if_verbose6_1(t, h_1);
              {
                ATerm h_8 = NULL;
                h_8 = t;
                if(((g_8 != NULL) && (g_8 != h_8)))
                  _fail(h_8);
                else
                  g_8 = h_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(g_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        ATerm k_1 (ATerm t)
                        {
                          t = term_t_9;
                          return(t);
                        }
                        t = say_1(t, k_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, j_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_z_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm m_1 (ATerm t)
                              {
                                t = term_s_9;
                                return(t);
                              }
                              t = say_1(t, m_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, l_1);
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
  ATerm l_8 = NULL;
  l_8 = t;
  t = SSL_getenv(not_null(l_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_9;
      t = get_config_0(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_10;
            t = getenv_0(t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_e_10;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose5_1(t, n_1);
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm g_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_10;
          t = table_get_0(t);
          LocalPopChoice(l_10);
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
    t = f_10;
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = debug_1(t, q_1);
        return(t);
      }
      t = if_verbose5_1(t, p_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm o_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_r_10;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
      {
        t = xtc_load_0(t);
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_r_10;
                return(t);
              }
              t = debug_1(t, u_1);
              return(t);
            }
            t = if_verbose5_1(t, t_1);
          }
        }
      }
      LocalPopChoice(q_10);
    }
  else
    {
      t = o_10;
      {
        ATerm p_8 = NULL;
        ATerm q_8 = NULL;
        q_8 = t;
        if(((p_8 != NULL) && (p_8 != q_8)))
          _fail(q_8);
        else
          p_8 = q_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), not_null(p_8)), term_u_10);
          {
            t = error_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_z_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      t = term_a_11;
                      return(t);
                    }
                    t = debug_1(t, w_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, v_1);
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
  ATerm c_11 = t;
  int i_11 = stack_ptr;
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
      LocalPopChoice(i_11);
    }
  else
    {
      t = c_11;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_j_11;
          return(t);
        }
        t = debug_1(t, x_1);
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
      t = term_k_11;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_74, n_74);
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
ATerm fork_and_wait_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm z_10 = NULL;
  ATerm b_11 = NULL;
  z_10 = t;
  {
    t = fork_0(t);
    {
      b_11 = t;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_11 = NULL;
            d_11 = t;
            v_10 :
            if(match_int(d_11, 0))
              {
                t = not_null(z_10);
                t = y_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
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
        ATerm y_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), not_null(q_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, y_1);
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
ATerm xtc_command_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm w_11 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm x_11 = NULL;
    t = d_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        x_11 = t;
        if(((w_11 != NULL) && (w_11 != x_11)))
          _fail(x_11);
        else
          w_11 = x_11;
      }
    }
  }
  t = r_11;
  {
    ATerm s_11;
    s_11 = t;
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
    t = s_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_74 (ATerm))
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
        ATerm t_11;
        t_11 = t;
        {
          ATerm p_12 = NULL;
          ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
          t = z_74(t);
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
                    ATerm u_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_a_12);
                        t = table_get_0(t);
                        LocalPopChoice(v_11);
                      }
                    else
                      {
                        t = u_11;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_12), term_a_12, (ATerm) ATinsert(CheckATermList(not_null(o_12)), (ATerm) ATinsert(CheckATermList(not_null(n_12)), not_null(i_12))));
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
        t = t_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm b_12;
  b_12 = t;
  {
    t = n_86(t);
    {
      ATerm z_1 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = debug_1(t, z_1);
    }
  }
  t = b_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
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
      LocalPopChoice(e_12);
      t = SSL_open_file(not_null(b_13), not_null(a_13));
    }
  else
    {
      t = d_12;
      {
        ATerm f_13 = NULL;
        ATerm g_13 = NULL;
        ATerm b_2 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = obsolete_1(t, b_2);
        {
          f_13 = t;
          {
            if(((b_13 != NULL) && (b_13 != f_13)))
              _fail(f_13);
            else
              b_13 = f_13;
            {
              ATerm l_12;
              l_12 = t;
              {
                ATerm h_13 = NULL;
                t = term_t_12;
                {
                  h_13 = t;
                  if(((g_13 != NULL) && (g_13 != h_13)))
                    _fail(h_13);
                  else
                    g_13 = h_13;
                }
              }
              t = l_12;
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
    ATerm u_12;
    u_12 = t;
    {
      ATerm q_13 = NULL;
      t = term_v_12;
      {
        q_13 = t;
        if(((p_13 != NULL) && (p_13 != q_13)))
          _fail(q_13);
        else
          p_13 = q_13;
      }
    }
    t = u_12;
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
  t = term_w_12;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), term_y_12);
    {
      t = conc_strings_0(t);
      {
        ATerm c_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, c_2);
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
      ATerm z_12;
      z_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_t_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_w_12);
            {
              ATerm d_2 (ATerm t)
              {
                t = term_i_13;
                return(t);
              }
              t = assert_1(t, d_2);
            }
          }
        }
      }
      t = z_12;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_j_13));
              {
                t = conc_0(t);
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_14)), term_j_13), not_null(k_14)), term_k_13));
                      {
                        t = conc_0(t);
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
      ATerm l_13;
      l_13 = t;
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
      t = l_13;
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
ATerm FILE_1 (ATerm t, ATerm p_52 (ATerm))
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
            t = p_52(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm m_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = stdin_0(t);
        }
      LocalPopChoice(o_13);
      t = xtc_transform_file_2(t, f_74, g_74);
    }
  else
    {
      t = m_13;
      t = xtc_transform_term_2(t, f_74, g_74);
    }
  return(t);
}
ATerm xtc_sglr_2 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_t_13;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm j_16 = NULL,l_16 = NULL,n_16 = NULL;
    ATerm w_13;
    w_13 = t;
    {
      ATerm k_16 = NULL;
      t = term_w_12;
      {
        t = x_86(t);
        {
          t = xtc_find_0(t);
          {
            k_16 = t;
            if(((j_16 != NULL) && (j_16 != k_16)))
              _fail(k_16);
            else
              j_16 = k_16;
          }
        }
      }
    }
    t = w_13;
    {
      ATerm x_13;
      x_13 = t;
      {
        ATerm m_16 = NULL;
        t = term_w_12;
        {
          t = y_86(t);
          {
            m_16 = t;
            if(((l_16 != NULL) && (l_16 != m_16)))
              _fail(m_16);
            else
              l_16 = m_16;
          }
        }
      }
      t = x_13;
      {
        ATerm o_16 = NULL;
        t = term_w_12;
        {
          t = pass_v_verbose_0(t);
          {
            o_16 = t;
            if(((n_16 != NULL) && (n_16 != o_16)))
              _fail(o_16);
            else
              n_16 = o_16;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_16)), not_null(l_16)), term_b_14), not_null(j_16)), term_a_14), term_y_13);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
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
      ATerm c_14;
      c_14 = t;
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
      t = c_14;
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
      ATerm d_14;
      d_14 = t;
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
      t = d_14;
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
        ATerm e_14 = t;
        int f_14 = stack_ptr;
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
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            {
              ATerm p_14 = t;
              int u_14 = stack_ptr;
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
                        ATerm v_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm w_14 = t;
                            int x_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(x_14);
                              }
                            else
                              {
                                t = w_14;
                                {
                                  ATerm y_14 = t;
                                  int z_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(z_14);
                                    }
                                  else
                                    {
                                      t = y_14;
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
                            t = v_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(o_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = p_14;
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
        ATerm a_15;
        a_15 = t;
        {
          ATerm r_19 = NULL;
          ATerm s_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
          {
            ATerm b_15 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_15);
              }
            else
              {
                t = b_15;
                t = (ATerm) ATempty;
              }
            {
              s_19 = t;
              if(((r_19 != NULL) && (r_19 != s_19)))
                _fail(s_19);
              else
                r_19 = s_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_19), not_null(n_19), not_null(r_19));
            t = table_put_0(t);
          }
        }
        t = a_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL;
  ATerm f_15;
  f_15 = t;
  {
    ATerm j_20 = NULL;
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
    t = w_74(t);
    {
      j_20 = t;
      {
        if(((i_20 != NULL) && (i_20 != j_20)))
          _fail(j_20);
        else
          i_20 = j_20;
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_a_12);
              t = table_get_0(t);
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_20), term_a_12, not_null(e_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_20);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm n_20 = NULL;
                              n_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(n_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_2);
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
ATerm restore_always_2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_63(t);
      t = g_63(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        t = g_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm d_21 = NULL;
  ATerm o_15;
  o_15 = t;
  {
    ATerm e_21 = NULL;
    ATerm f_21 = NULL;
    t = v_74(t);
    {
      e_21 = t;
      {
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        {
          ATerm g_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), term_a_12);
          {
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_15);
              }
            else
              {
                t = p_15;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_21), term_a_12, (ATerm) ATinsert(CheckATermList(not_null(f_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = begin_scope_1(t, h_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm u_15;
      u_15 = t;
      {
        ATerm s_21 = NULL,x_21 = NULL,y_21 = NULL;
        ATerm v_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_16;
            t = table_get_0(t);
            LocalPopChoice(z_15);
          }
        else
          {
            t = v_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_21 = t;
          p_21 :
          if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
            {
              x_21 = ATgetFirst((ATermList) s_21);
              y_21 = (ATerm) ATgetNext((ATermList) s_21);
              {
                if(((r_21 != NULL) && (r_21 != x_21)))
                  _fail(x_21);
                else
                  r_21 = x_21;
                {
                  if(((q_21 != NULL) && (q_21 != y_21)))
                    _fail(y_21);
                  else
                    q_21 = y_21;
                  {
                    t = not_null(r_21);
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, j_2);
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
      t = u_15;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_i_13;
          return(t);
        }
        t = end_scope_1(t, k_2);
      }
      return(t);
    }
    t = restore_always_2(t, t_73, i_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        ATerm k_22 = NULL;
        t = term_k_13;
        {
          t = get_config_0(t);
          {
            k_22 = t;
            if(((j_22 != NULL) && (j_22 != k_22)))
              _fail(k_22);
            else
              j_22 = k_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_22));
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = term_k_11;
      }
    {
      t = u_73(t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_j_13;
              t = get_config_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = term_h_16;
            }
          return(t);
        }
        t = copy_to_1(t, m_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, l_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    n_22 :
    if(!(match_string(o_22, "-v")))
      {
        if(!(match_string(o_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_i_16;
    t = set_config_0(t);
    t = term_p_16;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = Option_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
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
  ATerm r_2 (ATerm t)
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
  ATerm v_2 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, v_2);
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
      ATerm w_2 (ATerm t)
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
      ATerm x_2 (ATerm t)
      {
        t = term_b_17;
        t = set_config_0(t);
        t = term_c_17;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_f_17;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
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
            ATerm z_2 (ATerm t)
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
            ATerm a_3 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(g_23));
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
            ATerm c_3 (ATerm t)
            {
              t = term_n_17;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, c_3);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm d_3 (ATerm t)
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
              ATerm e_3 (ATerm t)
              {
                t = term_o_17;
                t = set_config_0(t);
                t = term_p_17;
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_s_17;
                return(t);
              }
              t = Option_3(t, d_3, e_3, f_3);
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
  ATerm g_3 (ATerm t)
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
  ATerm i_3 (ATerm t)
  {
    ATerm t_23 = NULL;
    ATerm b_18;
    b_18 = t;
    {
      ATerm r_23 = NULL;
      ATerm s_23 = NULL;
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(r_23));
        t = set_config_0(t);
      }
    }
    t = b_18;
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
  ATerm k_3 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = ArgOption_3(t, g_3, i_3, k_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm d_24 = NULL;
          d_24 = t;
          c_24 :
          if(!(match_string(d_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = term_g_18;
          t = set_config_0(t);
          t = term_k_18;
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_n_18;
          return(t);
        }
        t = Option_3(t, n_3, o_3, p_3);
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
                ATerm v_24 = NULL;
                ATerm r_18;
                r_18 = t;
                {
                  t = not_null(k_24);
                  t = j_0(t);
                }
                t = r_18;
                {
                  ATerm w_24 = NULL;
                  t = not_null(m_24);
                  {
                    t = k_0(t);
                    {
                      w_24 = t;
                      if(((v_24 != NULL) && (v_24 != w_24)))
                        _fail(w_24);
                      else
                        v_24 = w_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(v_24));
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
  ATerm q_3 (ATerm t)
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
  ATerm t_3 (ATerm t)
  {
    ATerm g_25 = NULL;
    ATerm t_18;
    t_18 = t;
    {
      ATerm e_25 = NULL;
      ATerm f_25 = NULL;
      f_25 = t;
      if(((e_25 != NULL) && (e_25 != f_25)))
        _fail(f_25);
      else
        e_25 = f_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(e_25));
        t = set_config_0(t);
      }
    }
    t = t_18;
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
  ATerm u_3 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  t = ArgOption_3(t, q_3, t_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm z_18;
  z_18 = t;
  {
    ATerm x_3 (ATerm t)
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
    t = option_defined_1(t, x_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_19), not_null(m_25)), term_a_19));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
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
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATempty, term_g_19));
  {
    t = printnl_0(t);
    {
      t = term_k_7;
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
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_25), not_null(y_25));
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
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
ATerm foldr_2 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm))
{
  ATerm j_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_70(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = j_19;
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
                t = foldr_2(t, v_70, w_70);
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
                t = w_70(t);
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
ATerm crush_2 (ATerm t, ATerm t_69 (ATerm), ATerm u_69 (ATerm))
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
      t = foldr_2(t, t_69, u_69);
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
    ATerm y_3 (ATerm t)
    {
      t = term_a_17;
      return(t);
    }
    t = crush_2(t, y_3, add_0);
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
        ATerm p_19;
        p_19 = t;
        {
          ATerm q_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_27), not_null(h_27));
              LocalPopChoice(t_19);
            }
          else
            {
              t = q_19;
              t = SSL_gtr(not_null(g_27), not_null(h_27));
            }
        }
        t = p_19;
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
  ATerm u_19 = t;
  int v_19 = stack_ptr;
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
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm w_19;
    w_19 = t;
    {
      ATerm t_27 = NULL;
      ATerm u_27 = NULL;
      t = term_d_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), term_k_7);
        t = geq_0(t);
      }
    }
    t = w_19;
    t = c_59(t);
    return(t);
  }
  t = try_1(t, z_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm y_27 = NULL,a_28 = NULL;
    ATerm x_19;
    x_19 = t;
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
    t = x_19;
    {
      ATerm b_28 = NULL;
      t = term_y_19;
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
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_20), not_null(y_27)), term_z_19), not_null(a_28)));
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
      ATerm b_20;
      b_20 = t;
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
      t = b_20;
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
ATerm need_help_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm c_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = c_20;
        {
          ATerm h_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_20);
            }
          else
            {
              t = h_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_4);
  t = c_75(t);
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
    ATerm p_20;
    p_20 = t;
    {
      t = term_q_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_20, term_r_20, not_null(w_28));
          t = table_put_0(t);
        }
      }
    }
    t = p_20;
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
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_exit(not_null(f_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
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
          m_29 = ATgetFirst((ATermList) j_29);
          n_29 = (ATerm) ATgetNext((ATermList) j_29);
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
  ATerm s_20;
  s_20 = t;
  {
    ATerm t_29 = NULL;
    ATerm w_29 = NULL;
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
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
      if(((t_29 != NULL) && (t_29 != w_29)))
        _fail(w_29);
      else
        t_29 = w_29;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_16, not_null(t_29));
      t = printnl_0(t);
    }
  }
  t = s_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_30 = NULL,i_30 = NULL,j_30 = NULL;
  j_30 = t;
  e_30 :
  if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
    {
      f_30 = ATgetFirst((ATermList) j_30);
      i_30 = (ATerm) ATgetNext((ATermList) j_30);
      {
        ATerm m_30 = NULL;
        t = not_null(i_30);
        {
          ATerm v_20;
          v_20 = t;
          {
            ATerm n_30 = NULL,p_30 = NULL,r_30 = NULL;
            ATerm w_20;
            w_20 = t;
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
            t = w_20;
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
          t = v_20;
          {
            ATerm m_4 (ATerm t)
            {
              t = not_null(m_30);
              return(t);
            }
            t = reverse_acc_2(t, h_0, m_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_30) == AT_LIST) && ATisEmpty(j_30)))
        {
          {
            t = term_w_12;
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
  ATerm n_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_52 (ATerm))
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
            t = w_52(t);
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
  ATerm x_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_31 = NULL;
      t = term_y_19;
      {
        t = get_config_0(t);
        {
          x_31 = t;
          if(((u_31 != NULL) && (u_31 != x_31)))
            _fail(x_31);
          else
            u_31 = x_31;
        }
      }
      LocalPopChoice(z_20);
    }
  else
    {
      t = x_20;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm u_4 (ATerm t)
          {
            ATerm y_31 = NULL;
            y_31 = t;
            if(((u_31 != NULL) && (u_31 != y_31)))
              _fail(y_31);
            else
              u_31 = y_31;
            return(t);
          }
          t = Program_1(t, u_4);
          return(t);
        }
        t = option_defined_1(t, o_4);
      }
    }
  {
    ATerm v_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        t = not_null(u_31);
        return(t);
      }
      t = short_description_1(t, a_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_4);
    {
      t = term_a_21;
      {
        t = echo_0(t);
        {
          t = term_h_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm z_31 = NULL;
                  ATerm a_32 = NULL;
                  a_32 = t;
                  if(((z_31 != NULL) && (z_31 != a_32)))
                    _fail(a_32);
                  else
                    z_31 = a_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_31)), term_i_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm b_32 = NULL;
                    ATerm c_32 = NULL;
                    ATerm h_5 (ATerm t)
                    {
                      t = not_null(u_31);
                      return(t);
                    }
                    t = long_description_1(t, h_5);
                    {
                      c_32 = t;
                      if(((b_32 != NULL) && (b_32 != c_32)))
                        _fail(c_32);
                      else
                        b_32 = c_32;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_32)), term_j_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_5);
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
  ATerm k_21;
  k_21 = t;
  {
    ATerm p_32 = NULL;
    ATerm q_32 = NULL;
    q_32 = t;
    if(((p_32 != NULL) && (p_32 != q_32)))
      _fail(q_32);
    else
      p_32 = q_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATempty, not_null(p_32)));
      t = printnl_0(t);
    }
  }
  t = k_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm l_21;
  l_21 = t;
  {
    t = h_86(t);
    t = debug_0(t);
  }
  t = l_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_52 (ATerm))
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
            t = x_52(t);
            {
              f_33 = t;
              {
                ATerm s_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_33)), not_null(d_33));
                {
                  s_33 = t;
                  if(((h_33 != NULL) && (h_33 != s_33)))
                    _fail(s_33);
                  else
                    h_33 = s_33;
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
ATerm fetch_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm a_34 (ATerm t)
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_64, _id);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = Cons_2(t, _id, a_34);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_76 (ATerm))
{
  t = fetch_1(t, j_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_Help_0))
    {
      ATerm v_34 = NULL,x_34 = NULL;
      ATerm o_21;
      o_21 = t;
      {
        ATerm w_34 = NULL;
        t = SSLgetAnnotations(not_null(g_34));
        {
          w_34 = t;
          if(((v_34 != NULL) && (v_34 != w_34)))
            _fail(w_34);
          else
            v_34 = w_34;
        }
      }
      t = o_21;
      {
        ATerm y_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
        t = not_null(x_34);
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
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
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
                ATerm i_5 (ATerm t)
                {
                  t = not_null(r_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_5);
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
ATerm at_end_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm q_36 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_36);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          t = Nil_0(t);
          t = w_64(t);
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
          ATerm k_5 (ATerm t)
          {
            t = not_null(v_36);
            return(t);
          }
          t = at_end_1(t, k_5);
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
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
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
ATerm _2 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm))
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
            t = t_50(t);
            {
              r_37 = t;
              {
                t = not_null(l_37);
                {
                  ATerm v_37 = NULL;
                  t = u_50(t);
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
        ATerm b_22;
        b_22 = t;
        t = SSL_printnl(not_null(f_38), not_null(g_38));
        t = b_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm c_22;
  c_22 = t;
  {
    ATerm m_38 = NULL,o_38 = NULL;
    ATerm d_22;
    d_22 = t;
    {
      ATerm n_38 = NULL;
      t = g_86(t);
      {
        n_38 = t;
        if(((m_38 != NULL) && (m_38 != n_38)))
          _fail(n_38);
        else
          m_38 = n_38;
      }
    }
    t = d_22;
    {
      ATerm p_38 = NULL;
      p_38 = t;
      if(((o_38 != NULL) && (o_38 != p_38)))
        _fail(p_38);
      else
        o_38 = p_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), not_null(m_38)));
        t = printnl_0(t);
      }
    }
  }
  t = c_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm s_38 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = Cons_2(t, h_64, s_38);
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
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm i_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_5);
            LocalPopChoice(l_22);
          }
        else
          {
            t = i_22;
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
                          ATerm m_22 = t;
                          int q_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_22);
                            }
                          else
                            {
                              t = m_22;
                              {
                                ATerm o_5 (ATerm t)
                                {
                                  t = term_u_22;
                                  return(t);
                                }
                                t = debug_1(t, o_5);
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
                            ATerm v_22;
                            v_22 = t;
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
                            t = v_22;
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
    t = (ATerm) ATmakeAppl(sym__2, term_x_22, not_null(v_39));
    {
      t = table_get_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_22;
            y_22 = t;
            {
              ATerm x_39 = NULL;
              ATerm y_39 = NULL;
              y_39 = t;
              if(((x_39 != NULL) && (x_39 != y_39)))
                _fail(y_39);
              else
                x_39 = y_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_22, not_null(v_39), not_null(x_39));
                t = table_put_0(t);
              }
            }
            t = y_22;
          }
          return(t);
        }
        t = try_1(t, r_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_62(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
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
        ATerm l_23;
        l_23 = t;
        {
          ATerm t_40 = NULL;
          ATerm u_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_40), not_null(o_40));
          {
            ATerm m_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_23);
              }
            else
              {
                t = m_23;
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
        t = l_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm y_40 = NULL;
  ATerm z_40 = NULL;
  t = term_w_12;
  {
    t = o_77(t);
    {
      z_40 = t;
      if(((y_40 != NULL) && (y_40 != z_40)))
        _fail(z_40);
      else
        y_40 = z_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_21, term_c_21, not_null(y_40));
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
            ATerm p_23;
            p_23 = t;
            {
              t = not_null(j_41);
              t = a_0(t);
            }
            t = p_23;
            {
              ATerm o_41 = NULL;
              t = term_w_12;
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
  ATerm s_5 (ATerm t)
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
  ATerm x_5 (ATerm t)
  {
    t = term_w_23;
    {
      t = set_config_0(t);
      t = term_x_23;
    }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  t = Option_3(t, s_5, x_5, y_5);
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
ATerm Cons_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  h_42 :
  if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
    {
      j_42 = ATgetFirst((ATermList) i_42);
      k_42 = (ATerm) ATgetNext((ATermList) i_42);
      {
        ATerm q_42 = NULL,s_42 = NULL;
        ATerm r_42 = NULL;
        t = SSLgetAnnotations(not_null(i_42));
        {
          r_42 = t;
          if(((q_42 != NULL) && (q_42 != r_42)))
            _fail(r_42);
          else
            q_42 = r_42;
        }
        {
          t = not_null(j_42);
          {
            ATerm w_42 = NULL;
            t = c_52(t);
            {
              s_42 = t;
              {
                t = not_null(k_42);
                {
                  ATerm y_42 = NULL;
                  t = d_52(t);
                  {
                    w_42 = t;
                    {
                      ATerm b_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_42)), not_null(s_42)), not_null(q_42));
                      {
                        b_43 = t;
                        if(((y_42 != NULL) && (y_42 != b_43)))
                          _fail(b_43);
                        else
                          y_42 = b_43;
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
        ATerm z_23;
        z_23 = t;
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
        t = z_23;
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
  ATerm y_43 = NULL,a_44 = NULL,b_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym__2))
    {
      a_44 = ATgetArgument(y_43, 0);
      b_44 = ATgetArgument(y_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_22, not_null(a_44), not_null(b_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm a_24;
  a_24 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_b_24;
      t = m_77(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = a_24;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm j_44 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm h_44 = NULL;
        ATerm i_44 = NULL;
        i_44 = t;
        if(((h_44 != NULL) && (h_44 != i_44)))
          _fail(i_44);
        else
          h_44 = i_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_19, not_null(h_44));
          t = set_config_0(t);
        }
      }
      t = e_24;
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
    ATerm f_6 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              {
                t = m_77(t);
                t = Cons_2(t, _id, f_6);
              }
            }
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, f_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  ATerm q_24;
  q_24 = t;
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
  t = q_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm z_44 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    t = term_s_24;
    t = table_put_0(t);
  }
  t = r_24;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_77(t);
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_6);
    {
      ATerm i_6 (ATerm t)
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_24;
            z_24 = t;
            {
              ATerm b_25 = t;
              int c_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_23;
                  t = get_config_0(t);
                  LocalPopChoice(c_25);
                }
              else
                {
                  t = b_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_24;
            {
              t = system_usage_0(t);
              {
                t = term_a_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm j_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm a_45 = NULL;
                  a_45 = t;
                  if(((z_44 != NULL) && (z_44 != a_45)))
                    _fail(a_45);
                  else
                    z_44 = a_45;
                  return(t);
                }
                t = Undefined_1(t, k_6);
                return(t);
              }
              t = option_defined_1(t, j_6);
              {
                ATerm l_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_44)), term_i_25);
                  return(t);
                }
                t = say_1(t, l_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_6);
      {
        ATerm j_25;
        j_25 = t;
        {
          t = term_b_21;
          t = table_destroy_0(t);
        }
        t = j_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  t = parse_options_1(t, i_75);
  {
    t = store_options_0(t);
    {
      t = k_75(t);
      {
        ATerm k_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_75);
            LocalPopChoice(p_25);
          }
        else
          {
            t = k_25;
            {
              ATerm q_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(s_25);
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
ATerm option_wrap_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  t = option_wrap_4(t, m_75, default_usage_0, _id, n_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_73(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = xtc_io_1(t, z_73);
    return(t);
  }
  t = option_wrap_2(t, q_6, r_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm x_73 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, x_73);
  return(t);
}
ATerm io_parse_pp_table_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      t = term_z_25;
      return(t);
    }
    ATerm v_6 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    t = xtc_sglr_2(t, u_6, v_6);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_1(t, s_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_pp_table_0(t);
  return(t);
}