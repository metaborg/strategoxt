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
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_j_25;
ATerm term_w_24;
ATerm term_i_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_p_23;
ATerm term_j_23;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_e_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_b_17;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_b_7;
ATerm term_l_3;
void init_constant_terms (void)
{
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_o_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_u_10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_j_13);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_z_13);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_z_13);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_z_13);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_z_13);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__3, term_v_21, term_w_21, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox_format_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm q_65 (ATerm));
ATerm init_0 (ATerm);
ATerm elem_1 (ATerm, ATerm y_64 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm j_65 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm c_65 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm t_86 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm remove_extension_0 (ATerm);
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
ATerm obsolete_1 (ATerm, ATerm t_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm t_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm s_74 (ATerm), ATerm t_74 (ATerm));
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
ATerm say_1 (ATerm, ATerm n_85 (ATerm));
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
ATerm debug_1 (ATerm, ATerm m_85 (ATerm));
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
ATerm io_pp_c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_abox2text_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_l_3;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
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
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
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
  t = term_b_7;
  {
    ATerm c_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = c_7;
        t = term_g_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_g_7);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_b_7);
  return(t);
}
ATerm xtc_abox_format_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = xtc_transform_2(t, e_0, pass_verbose_0);
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
          ATerm l_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_7);
            }
          else
            {
              t = l_7;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm u_7 = t;
                  int v_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(v_7);
                    }
                  else
                    {
                      t = u_7;
                      {
                        ATerm i_3 = NULL;
                        t = Cons_2(t, _id, f_0);
                        {
                          ATerm j_3 = NULL;
                          j_3 = t;
                          if(((i_3 != NULL) && (i_3 != j_3)))
                            _fail(j_3);
                          else
                            i_3 = j_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(i_3)), not_null(e_3));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, f_0);
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
ATerm at_last_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm w_7 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = q_65(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = w_7;
        t = Cons_2(t, _id, n_3);
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm elem_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym__2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      {
        t = not_null(t_3);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm d_8;
            d_8 = t;
            {
              ATerm w_3 = NULL;
              ATerm x_3 = NULL;
              x_3 = t;
              if(((w_3 != NULL) && (w_3 != x_3)))
                _fail(x_3);
              else
                w_3 = x_3;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_3), not_null(w_3));
                t = y_64(t);
              }
            }
            t = d_8;
            return(t);
          }
          t = _one(t, p_0);
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
ATerm at_suffix_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_65(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = Cons_2(t, _id, a_4);
      }
    return(t);
  }
  t = a_4(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm d_4 = NULL,f_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = Cons_2(t, c_65, _id);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm e_4 = NULL;
        e_4 = t;
        if(((d_4 != NULL) && (d_4 != e_4)))
          _fail(e_4);
        else
          d_4 = e_4;
        return(t);
      }
      t = Cons_2(t, _id, r_0);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, q_0);
  {
    ATerm g_4 = NULL;
    g_4 = t;
    if(((f_4 != NULL) && (f_4 != g_4)))
      _fail(g_4);
    else
      f_4 = g_4;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), not_null(d_4));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  ATerm k_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, t_86);
      LocalPopChoice(p_8);
    }
  else
    {
      t = k_8;
      {
        ATerm t_4 = NULL;
        ATerm u_4 = NULL;
        u_4 = t;
        if(((t_4 != NULL) && (t_4 != u_4)))
          _fail(u_4);
        else
          t_4 = u_4;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), (ATerm) ATempty);
      }
    }
  {
    v_4 = t;
    p_4 :
    if(match_cons(v_4, sym__2))
      {
        w_4 = ATgetArgument(v_4, 0);
        z_4 = ATgetArgument(v_4, 1);
        q_4 :
        if(((ATgetType(w_4) == AT_LIST) && ATisEmpty(w_4)))
          {
            r_4 :
            if(((ATgetType(z_4) == AT_LIST) && ATisEmpty(z_4)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
                  {
                    a_5 = ATgetFirst((ATermList) z_4);
                    b_5 = (ATerm) ATgetNext((ATermList) z_4);
                    {
                      t = not_null(z_4);
                      t = list_tokenize_1(t, t_86);
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
            if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
              {
                x_4 = ATgetFirst((ATermList) w_4);
                y_4 = (ATerm) ATgetNext((ATermList) w_4);
                s_4 :
                if(((ATgetType(z_4) == AT_LIST) && ATisEmpty(z_4)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(w_4));
                  }
                else
                  {
                    if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
                      {
                        a_5 = ATgetFirst((ATermList) z_4);
                        b_5 = (ATerm) ATgetNext((ATermList) z_4);
                        {
                          ATerm g_5 = NULL;
                          ATerm h_5 = NULL;
                          t = not_null(z_4);
                          {
                            t = list_tokenize_1(t, t_86);
                            {
                              h_5 = t;
                              if(((g_5 != NULL) && (g_5 != h_5)))
                                _fail(h_5);
                              else
                                g_5 = h_5;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(g_5)), not_null(w_4));
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
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    r_5 = t;
    q_5 :
    if(match_cons(r_5, sym__2))
      {
        s_5 = ATgetArgument(r_5, 0);
        t_5 = ATgetArgument(r_5, 1);
        {
          t = not_null(t_5);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm w_5 = NULL;
              ATerm x_5 = NULL;
              x_5 = t;
              if(((w_5 != NULL) && (w_5 != x_5)))
                _fail(x_5);
              else
                w_5 = x_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(s_5));
                t = elem_0(t);
              }
              return(t);
            }
            t = list_tokenize_1(t, s_0);
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
  ATerm c_6 = NULL,e_6 = NULL;
  ATerm d_6 = NULL;
  d_6 = t;
  if(((c_6 != NULL) && (c_6 != d_6)))
    _fail(d_6);
  else
    c_6 = d_6;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_q_8), not_null(c_6));
    {
      t = string_tokenize_0(t);
      {
        t = init_0(t);
        {
          ATerm f_6 = NULL;
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(e_6));
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
      ATerm t_0 (ATerm t)
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
      t = map_1(t, t_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm z_6 = NULL;
      ATerm a_7 = NULL;
      t = term_b_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), term_w_8);
        t = geq_0(t);
      }
    }
    t = v_8;
    t = j_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_8;
  z_8 = t;
  {
    ATerm d_7 = NULL;
    ATerm e_7 = NULL;
    e_7 = t;
    if(((d_7 != NULL) && (d_7 != e_7)))
      _fail(e_7);
    else
      d_7 = e_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(d_7));
      t = printnl_0(t);
    }
  }
  t = z_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL,n_7 = NULL;
  k_7 = t;
  {
    ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_7)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_8)));
        {
          t = table_get_0(t);
          {
            ATerm v_0 (ATerm t)
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
            t = fetch_1(t, v_0);
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
ATerm filter_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm i_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1(t, h_72);
              return(t);
            }
            t = Cons_2(t, h_72, w_0);
            LocalPopChoice(n_9);
          }
        else
          {
            t = i_9;
            {
              ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
              m_8 = t;
              l_8 :
              if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
                {
                  n_8 = ATgetFirst((ATermList) m_8);
                  o_8 = (ATerm) ATgetNext((ATermList) m_8);
                  {
                    t = not_null(o_8);
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
  ATerm r_8 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = f_78(t);
      t = r_8(t);
      return(t);
    }
    t = try_1(t, x_0);
    return(t);
  }
  t = r_8(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_q_9;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm r_9 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_9;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, z_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm s_9;
    s_9 = t;
    {
      ATerm t_8 = NULL;
      ATerm u_8 = NULL;
      t = term_b_7;
      {
        t = get_config_0(t);
        {
          u_8 = t;
          if(((t_8 != NULL) && (t_8 != u_8)))
            _fail(u_8);
          else
            t_8 = u_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), term_t_9);
        t = geq_0(t);
      }
    }
    t = s_9;
    t = i_59(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm x_8 = NULL;
      ATerm y_8 = NULL;
      t = term_b_7;
      {
        t = get_config_0(t);
        {
          y_8 = t;
          if(((x_8 != NULL) && (x_8 != y_8)))
            _fail(y_8);
          else
            x_8 = y_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_z_9);
        t = geq_0(t);
      }
    }
    t = y_9;
    t = k_59(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      if(((d_9 != NULL) && (d_9 != e_9)))
        _fail(e_9);
      else
        d_9 = e_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
    {
      l_9 = ATgetFirst((ATermList) k_9);
      m_9 = (ATerm) ATgetNext((ATermList) k_9);
      {
        t = s_70(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm p_9 = NULL;
            p_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(p_9));
              t = r_70(t);
            }
            return(t);
          }
          t = fetch_1(t, f_1);
        }
        t = not_null(m_9);
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
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        t = not_null(w_9);
        {
          ATerm b_10 (ATerm t)
          {
            ATerm a_10 = t;
            int c_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_9);
                LocalPopChoice(c_10);
              }
            else
              {
                t = a_10;
                {
                  ATerm d_10 = t;
                  int e_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(x_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_70, g_1);
                      t = b_10(t);
                      LocalPopChoice(e_10);
                    }
                  else
                    {
                      t = d_10;
                      t = Cons_2(t, _id, b_10);
                    }
                }
              }
            return(t);
          }
          t = b_10(t);
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__3))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      j_10 = ATgetArgument(g_10, 2);
      {
        ATerm k_10;
        k_10 = t;
        {
          ATerm n_10 = NULL;
          ATerm o_10 = NULL,q_10 = NULL;
          ATerm p_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(i_10));
          {
            ATerm l_10 = t;
            int m_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(m_10);
              }
            else
              {
                t = l_10;
                t = (ATerm) ATempty;
              }
            {
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), not_null(j_10));
            {
              t = union_0(t);
              {
                q_10 = t;
                if(((n_10 != NULL) && (n_10 != q_10)))
                  _fail(q_10);
                else
                  n_10 = q_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_10), not_null(i_10), not_null(n_10));
            t = set_0(t);
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
ATerm table_putlist_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym__2))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      {
        t = not_null(a_11);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
            d_11 = t;
            w_10 :
            if(match_cons(d_11, sym__2))
              {
                e_11 = ATgetArgument(d_11, 0);
                f_11 = ATgetArgument(d_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(z_10), not_null(e_11), not_null(f_11));
                  t = t_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_1);
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
  ATerm m_11 = NULL;
  ATerm o_11 = NULL;
  m_11 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm j_1 (ATerm t)
      {
        t = term_r_10;
        return(t);
      }
      t = debug_1(t, j_1);
      return(t);
    }
    t = if_verbose5_1(t, i_1);
    {
      ATerm s_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_10;
        }
      {
        ATerm t_10;
        t_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_9, term_u_10, (ATerm) ATinsert(ATempty, not_null(m_11)));
          t = table_put_0(t);
        }
        t = t_10;
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = term_v_10;
              return(t);
            }
            t = debug_1(t, l_1);
            return(t);
          }
          t = if_verbose4_1(t, k_1);
          {
            ATerm b_11 = t;
            int c_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(c_11);
              }
            else
              {
                t = b_11;
                t = (ATerm) ATempty;
              }
            {
              ATerm m_1 (ATerm t)
              {
                ATerm n_1 (ATerm t)
                {
                  t = term_g_11;
                  return(t);
                }
                t = say_1(t, n_1);
                return(t);
              }
              t = if_verbose6_1(t, m_1);
              {
                ATerm p_11 = NULL;
                p_11 = t;
                if(((o_11 != NULL) && (o_11 != p_11)))
                  _fail(p_11);
                else
                  o_11 = p_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_9, not_null(o_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        ATerm p_1 (ATerm t)
                        {
                          t = term_h_11;
                          return(t);
                        }
                        t = say_1(t, p_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, o_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_f_9, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_11)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm r_1 (ATerm t)
                              {
                                t = term_g_11;
                                return(t);
                              }
                              t = say_1(t, r_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, q_1);
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
  ATerm t_11 = NULL;
  t_11 = t;
  t = SSL_getenv(not_null(t_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_11;
      t = get_config_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm l_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_11;
            t = getenv_0(t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = l_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      t = term_r_11;
      return(t);
    }
    t = debug_1(t, t_1);
    return(t);
  }
  t = if_verbose5_1(t, s_1);
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_11;
          t = table_get_0(t);
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_11;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = term_z_11;
          return(t);
        }
        t = debug_1(t, v_1);
        return(t);
      }
      t = if_verbose5_1(t, u_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm a_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = debug_1(t, x_1);
        return(t);
      }
      t = if_verbose5_1(t, w_1);
      {
        t = xtc_load_0(t);
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm y_1 (ATerm t)
            {
              ATerm z_1 (ATerm t)
              {
                t = term_e_12;
                return(t);
              }
              t = debug_1(t, z_1);
              return(t);
            }
            t = if_verbose5_1(t, y_1);
          }
        }
      }
      LocalPopChoice(d_12);
    }
  else
    {
      t = a_12;
      {
        ATerm x_11 = NULL;
        ATerm y_11 = NULL;
        y_11 = t;
        if(((x_11 != NULL) && (x_11 != y_11)))
          _fail(y_11);
        else
          x_11 = y_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_12), not_null(x_11)), term_h_12);
          {
            t = error_0(t);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_f_9;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = term_q_12;
                      return(t);
                    }
                    t = debug_1(t, c_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, b_2);
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
  ATerm b_12 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL;
      c_12 = t;
      {
        if(((b_12 != NULL) && (b_12 != c_12)))
          _fail(c_12);
        else
          b_12 = c_12;
        t = SSL_ReadFromFile(not_null(b_12));
      }
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm d_2 (ATerm t)
        {
          t = term_t_12;
          return(t);
        }
        t = debug_1(t, d_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_stdin_0))
    {
      ATerm l_12 = NULL;
      ATerm m_12 = NULL;
      t = term_u_12;
      {
        t = ReadFromFile_0(t);
        {
          m_12 = t;
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
        }
      }
      t = not_null(l_12);
    }
  else
    {
      if(match_cons(j_12, sym_FILE_1))
        {
          k_12 = ATgetArgument(j_12, 0);
          {
            ATerm o_12 = NULL;
            ATerm p_12 = NULL;
            t = not_null(k_12);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  p_12 = t;
                  if(((o_12 != NULL) && (o_12 != p_12)))
                    _fail(p_12);
                  else
                    o_12 = p_12;
                }
              }
            }
            t = not_null(o_12);
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
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym__2))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      t = SSL_WriteToBinaryFile(not_null(x_12), not_null(y_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm g_13 = NULL;
  e_13 = t;
  {
    ATerm h_13 = NULL;
    t = xtc_new_file_0(t);
    {
      h_13 = t;
      {
        if(((g_13 != NULL) && (g_13 != h_13)))
          _fail(h_13);
        else
          g_13 = h_13;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(e_13));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(g_13);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
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
  ATerm l_13 = NULL;
  l_13 = t;
  t = SSL_close_file(not_null(l_13));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym__2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      t = SSL_execvp(not_null(r_13), not_null(s_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  t = SSL_waitpid(not_null(x_13));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    t = fork_0(t);
    {
      j_14 = t;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_14 = NULL;
            l_14 = t;
            d_14 :
            if(match_int(l_14, 0))
              {
                t = not_null(h_14);
                t = b_59(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
              t = not_null(j_14);
              {
                t = waitpid_0(t);
                {
                  m_14 = t;
                  f_14 :
                  if(match_cons(m_14, sym_WaitStatus_3))
                    {
                      n_14 = ATgetArgument(m_14, 0);
                      o_14 = ATgetArgument(m_14, 1);
                      p_14 = ATgetArgument(m_14, 2);
                      g_14 :
                      if(match_int(n_14, 0))
                        {
                          t = not_null(h_14);
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
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), not_null(y_14));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, e_2);
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
  ATerm e_15 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    ATerm f_15 = NULL;
    t = q_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
    }
  }
  t = b_13;
  {
    ATerm c_13;
    c_13 = t;
    {
      ATerm g_15 = NULL;
      ATerm h_15 = NULL;
      h_15 = t;
      if(((g_15 != NULL) && (g_15 != h_15)))
        _fail(h_15);
      else
        g_15 = h_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(g_15));
        t = call_0(t);
      }
    }
    t = c_13;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
        ATerm d_13;
        d_13 = t;
        {
          ATerm x_15 = NULL;
          ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
          t = m_75(t);
          {
            x_15 = t;
            {
              if(((u_15 != NULL) && (u_15 != x_15)))
                _fail(x_15);
              else
                u_15 = x_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_15), not_null(q_15), not_null(r_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_13 = t;
                    int i_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), term_j_13);
                        t = table_get_0(t);
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = f_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_15 = t;
                      n_15 :
                      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
                        {
                          z_15 = ATgetFirst((ATermList) y_15);
                          a_16 = (ATerm) ATgetNext((ATermList) y_15);
                          {
                            if(((v_15 != NULL) && (v_15 != z_15)))
                              _fail(z_15);
                            else
                              v_15 = z_15;
                            {
                              if(((w_15 != NULL) && (w_15 != a_16)))
                                _fail(a_16);
                              else
                                w_15 = a_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_15), term_j_13, (ATerm) ATinsert(CheckATermList(not_null(w_15)), (ATerm) ATinsert(CheckATermList(not_null(v_15)), not_null(q_15))));
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
        t = d_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm k_13;
  k_13 = t;
  {
    t = t_85(t);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_m_13;
        return(t);
      }
      t = debug_1(t, f_2);
    }
  }
  t = k_13;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
      k_16 = t;
      f_16 :
      if(match_cons(k_16, sym__2))
        {
          l_16 = ATgetArgument(k_16, 0);
          m_16 = ATgetArgument(k_16, 1);
          {
            if(((j_16 != NULL) && (j_16 != l_16)))
              _fail(l_16);
            else
              j_16 = l_16;
            if(((i_16 != NULL) && (i_16 != m_16)))
              _fail(m_16);
            else
              i_16 = m_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_13);
      t = SSL_open_file(not_null(j_16), not_null(i_16));
    }
  else
    {
      t = n_13;
      {
        ATerm n_16 = NULL;
        ATerm o_16 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_t_13;
          return(t);
        }
        t = obsolete_1(t, g_2);
        {
          n_16 = t;
          {
            if(((j_16 != NULL) && (j_16 != n_16)))
              _fail(n_16);
            else
              j_16 = n_16;
            {
              ATerm u_13;
              u_13 = t;
              {
                ATerm p_16 = NULL;
                t = term_v_13;
                {
                  p_16 = t;
                  if(((o_16 != NULL) && (o_16 != p_16)))
                    _fail(p_16);
                  else
                    o_16 = p_16;
                }
              }
              t = u_13;
              t = SSL_open_file(not_null(j_16), not_null(o_16));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm v_16 = NULL;
  ATerm x_16 = NULL;
  v_16 = t;
  {
    ATerm w_13;
    w_13 = t;
    {
      ATerm y_16 = NULL;
      t = term_y_13;
      {
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
      }
    }
    t = w_13;
    {
      t = SSL_open_file(not_null(v_16), not_null(x_16));
      t = SSL_close_file(not_null(v_16));
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
  ATerm c_17 = NULL;
  ATerm d_17 = NULL;
  t = term_z_13;
  {
    t = new_0(t);
    {
      d_17 = t;
      if(((c_17 != NULL) && (c_17 != d_17)))
        _fail(d_17);
      else
        c_17 = d_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), term_a_14);
    {
      t = conc_strings_0(t);
      {
        ATerm h_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, h_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm h_17 = NULL;
  t = new_file_0(t);
  {
    h_17 = t;
    {
      ATerm b_14;
      b_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_v_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_z_13);
            {
              ATerm i_2 (ATerm t)
              {
                t = term_c_14;
                return(t);
              }
              t = assert_1(t, i_2);
            }
          }
        }
      }
      t = b_14;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_stdin_0))
    {
      ATerm t_17 = NULL;
      ATerm u_17 = NULL;
      ATerm v_17 = NULL;
      t = xtc_new_file_0(t);
      {
        u_17 = t;
        {
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
          {
            ATerm w_17 = NULL;
            t = o_0(t);
            {
              w_17 = t;
              if(((v_17 != NULL) && (v_17 != w_17)))
                _fail(w_17);
              else
                v_17 = w_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_17)), term_e_14));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(t_17);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_17));
    }
  else
    {
      if(match_cons(r_17, sym_FILE_1))
        {
          s_17 = ATgetArgument(r_17, 0);
          {
            ATerm y_17 = NULL;
            ATerm z_17 = NULL;
            t = not_null(s_17);
            {
              ATerm a_18 = NULL;
              t = xtc_new_file_0(t);
              {
                z_17 = t;
                {
                  if(((y_17 != NULL) && (y_17 != z_17)))
                    _fail(z_17);
                  else
                    y_17 = z_17;
                  {
                    ATerm b_18 = NULL;
                    t = o_0(t);
                    {
                      b_18 = t;
                      if(((a_18 != NULL) && (a_18 != b_18)))
                        _fail(b_18);
                      else
                        a_18 = b_18;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_17)), term_e_14), not_null(s_17)), term_i_14));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(y_17);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_17));
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
  ATerm m_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_stdin_0))
    {
      ATerm o_18 = NULL,q_18 = NULL;
      ATerm k_14;
      k_14 = t;
      {
        ATerm p_18 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          p_18 = t;
          if(((o_18 != NULL) && (o_18 != p_18)))
            _fail(p_18);
          else
            o_18 = p_18;
        }
      }
      t = k_14;
      {
        ATerm r_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(o_18));
        {
          r_18 = t;
          if(((q_18 != NULL) && (q_18 != r_18)))
            _fail(r_18);
          else
            q_18 = r_18;
        }
        t = not_null(q_18);
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
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym_FILE_1))
    {
      c_19 = ATgetArgument(b_19, 0);
      {
        ATerm f_19 = NULL,h_19 = NULL;
        ATerm g_19 = NULL;
        t = SSLgetAnnotations(not_null(b_19));
        {
          g_19 = t;
          if(((f_19 != NULL) && (f_19 != g_19)))
            _fail(g_19);
          else
            f_19 = g_19;
        }
        {
          t = not_null(c_19);
          {
            ATerm j_19 = NULL;
            t = t_52(t);
            {
              h_19 = t;
              {
                ATerm k_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(h_19)), not_null(f_19));
                {
                  k_19 = t;
                  if(((j_19 != NULL) && (j_19 != k_19)))
                    _fail(k_19);
                  else
                    j_19 = k_19;
                }
                t = not_null(j_19);
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
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          t = stdin_0(t);
        }
      LocalPopChoice(r_14);
      t = xtc_transform_file_2(t, s_74, t_74);
    }
  else
    {
      t = q_14;
      t = xtc_transform_term_2(t, s_74, t_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  q_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      t = SSL_copy(not_null(t_19), not_null(u_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_stderr_0))
    {
      ATerm l_20 = NULL,n_20 = NULL;
      ATerm u_14;
      u_14 = t;
      {
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(h_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
      }
      t = u_14;
      {
        ATerm o_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
        t = not_null(n_20);
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
  ATerm b_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_stdout_0))
    {
      ATerm d_21 = NULL,f_21 = NULL;
      ATerm z_14;
      z_14 = t;
      {
        ATerm e_21 = NULL;
        t = SSLgetAnnotations(not_null(b_21));
        {
          e_21 = t;
          if(((d_21 != NULL) && (d_21 != e_21)))
            _fail(e_21);
          else
            d_21 = e_21;
        }
      }
      t = z_14;
      {
        ATerm g_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(d_21));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
        t = not_null(f_21);
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
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  a_22 :
  if(match_cons(i_22, sym_FILE_1))
    {
      j_22 = ATgetArgument(i_22, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = NULL;
            ATerm n_22 = NULL;
            t = m_0(t);
            {
              n_22 = t;
              {
                if(((m_22 != NULL) && (m_22 != n_22)))
                  _fail(n_22);
                else
                  m_22 = n_22;
                {
                  ATerm c_15 = t;
                  int d_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(d_15);
                    }
                  else
                    {
                      t = c_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), not_null(m_22));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_22));
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm i_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_22 = NULL;
                  ATerm r_22 = NULL;
                  t = m_0(t);
                  {
                    r_22 = t;
                    {
                      if(((q_22 != NULL) && (q_22 != r_22)))
                        _fail(r_22);
                      else
                        q_22 = r_22;
                      {
                        ATerm k_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm l_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = l_15;
                                {
                                  ATerm s_15 = t;
                                  int t_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(t_15);
                                    }
                                  else
                                    {
                                      t = s_15;
                                      {
                                        ATerm s_22 = NULL;
                                        s_22 = t;
                                        if(((j_22 != NULL) && (j_22 != s_22)))
                                          _fail(s_22);
                                        else
                                          j_22 = s_22;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = k_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), not_null(q_22));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_22));
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = i_15;
                  {
                    ATerm u_22 = NULL;
                    t = m_0(t);
                    {
                      u_22 = t;
                      if(((j_22 != NULL) && (j_22 != u_22)))
                        _fail(u_22);
                      else
                        j_22 = u_22;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_22));
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
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  e_23 = t;
  d_23 :
  if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
    {
      f_23 = ATgetFirst((ATermList) e_23);
      g_23 = (ATerm) ATgetNext((ATermList) e_23);
      t = not_null(g_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      {
        ATerm b_16;
        b_16 = t;
        {
          ATerm r_23 = NULL;
          ATerm s_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(o_23));
          {
            ATerm c_16 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(d_16);
              }
            else
              {
                t = c_16;
                t = (ATerm) ATempty;
              }
            {
              s_23 = t;
              if(((r_23 != NULL) && (r_23 != s_23)))
                _fail(s_23);
              else
                r_23 = s_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_23), not_null(o_23), not_null(r_23));
            t = table_put_0(t);
          }
        }
        t = b_16;
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
  ATerm g_24 = NULL,h_24 = NULL,j_24 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm l_24 = NULL;
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
    t = j_75(t);
    {
      l_24 = t;
      {
        if(((j_24 != NULL) && (j_24 != l_24)))
          _fail(l_24);
        else
          j_24 = l_24;
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), term_j_13);
              t = table_get_0(t);
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_24 = t;
            f_24 :
            if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
              {
                n_24 = ATgetFirst((ATermList) m_24);
                o_24 = (ATerm) ATgetNext((ATermList) m_24);
                {
                  if(((h_24 != NULL) && (h_24 != n_24)))
                    _fail(n_24);
                  else
                    h_24 = n_24;
                  {
                    if(((g_24 != NULL) && (g_24 != o_24)))
                      _fail(o_24);
                    else
                      g_24 = o_24;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_24), term_j_13, not_null(g_24));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_24);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm p_24 = NULL;
                              p_24 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(p_24));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
  t = e_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_remove(not_null(z_24));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_63(t);
      t = o_63(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        t = o_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm e_25 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm f_25 = NULL;
    ATerm g_25 = NULL;
    t = i_75(t);
    {
      f_25 = t;
      {
        if(((e_25 != NULL) && (e_25 != f_25)))
          _fail(f_25);
        else
          e_25 = f_25;
        {
          ATerm h_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), term_j_13);
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                t = (ATerm) ATempty;
              }
            {
              h_25 = t;
              if(((g_25 != NULL) && (g_25 != h_25)))
                _fail(h_25);
              else
                g_25 = h_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_25), term_j_13, (ATerm) ATinsert(CheckATermList(not_null(g_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = term_c_14;
    return(t);
  }
  t = begin_scope_1(t, k_2);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm w_16;
      w_16 = t;
      {
        ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_17;
            t = table_get_0(t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          o_25 = t;
          l_25 :
          if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
            {
              p_25 = ATgetFirst((ATermList) o_25);
              q_25 = (ATerm) ATgetNext((ATermList) o_25);
              {
                if(((n_25 != NULL) && (n_25 != p_25)))
                  _fail(p_25);
                else
                  n_25 = p_25;
                {
                  if(((m_25 != NULL) && (m_25 != q_25)))
                    _fail(q_25);
                  else
                    m_25 = q_25;
                  {
                    t = not_null(n_25);
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, m_2);
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
      t = w_16;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_c_14;
          return(t);
        }
        t = end_scope_1(t, n_2);
      }
      return(t);
    }
    t = restore_always_2(t, c_74, l_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL;
        ATerm u_25 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            u_25 = t;
            if(((t_25 != NULL) && (t_25 != u_25)))
              _fail(u_25);
            else
              t_25 = u_25;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_25));
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = term_u_12;
      }
    {
      t = d_74(t);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm g_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_e_14;
              t = get_config_0(t);
              LocalPopChoice(i_17);
            }
          else
            {
              t = g_17;
              t = term_j_17;
            }
          return(t);
        }
        t = copy_to_1(t, p_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, o_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm x_25 = NULL;
    x_25 = t;
    w_25 :
    if(!(match_string(x_25, "-v")))
      {
        if(!(match_string(x_25, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_l_17;
    t = set_config_0(t);
    t = term_m_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_n_17;
    return(t);
  }
  t = Option_3(t, q_2, r_2, v_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm a_26 = NULL;
    a_26 = t;
    y_25 :
    if(!(match_string(a_26, "-k")))
      {
        if(!(match_string(a_26, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm o_17;
    o_17 = t;
    {
      ATerm b_26 = NULL;
      ATerm c_26 = NULL;
      t = string_to_int_0(t);
      {
        c_26 = t;
        if(((b_26 != NULL) && (b_26 != c_26)))
          _fail(c_26);
        else
          b_26 = c_26;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_17, not_null(b_26));
        t = set_config_0(t);
      }
    }
    t = o_17;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_string_to_int(not_null(f_26));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm n_26 = NULL;
        n_26 = t;
        i_26 :
        if(!(match_string(n_26, "-S")))
          {
            if(!(match_string(n_26, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_f_18;
        t = set_config_0(t);
        t = term_g_18;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_h_18;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm o_26 = NULL;
              o_26 = t;
              j_26 :
              if(!(match_string(o_26, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm r_26 = NULL;
              ATerm k_18;
              k_18 = t;
              {
                ATerm p_26 = NULL;
                ATerm q_26 = NULL;
                t = string_to_int_0(t);
                {
                  q_26 = t;
                  if(((p_26 != NULL) && (p_26 != q_26)))
                    _fail(q_26);
                  else
                    p_26 = q_26;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_7, not_null(p_26));
                  t = set_config_0(t);
                }
              }
              t = k_18;
              {
                ATerm s_26 = NULL;
                s_26 = t;
                if(((r_26 != NULL) && (r_26 != s_26)))
                  _fail(s_26);
                else
                  r_26 = s_26;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_26));
              }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_n_18;
              return(t);
            }
            t = ArgOption_3(t, g_3, h_3, k_3);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm m_3 (ATerm t)
              {
                ATerm t_26 = NULL;
                t_26 = t;
                m_26 :
                if(!(match_string(t_26, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_t_18;
                t = set_config_0(t);
                t = term_u_18;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_v_18;
                return(t);
              }
              t = Option_3(t, m_3, o_3, p_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm z_26 = NULL;
    z_26 = t;
    w_26 :
    if(!(match_string(z_26, "-o")))
      {
        if(!(match_string(z_26, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm c_27 = NULL;
    ATerm d_19;
    d_19 = t;
    {
      ATerm a_27 = NULL;
      ATerm b_27 = NULL;
      b_27 = t;
      if(((a_27 != NULL) && (a_27 != b_27)))
        _fail(b_27);
      else
        a_27 = b_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, not_null(a_27));
        t = set_config_0(t);
      }
    }
    t = d_19;
    {
      ATerm d_27 = NULL;
      d_27 = t;
      if(((c_27 != NULL) && (c_27 != d_27)))
        _fail(d_27);
      else
        c_27 = d_27;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_27));
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_e_19;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, y_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(l_19);
    }
  else
    {
      t = i_19;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm h_27 = NULL;
          h_27 = t;
          g_27 :
          if(!(match_string(h_27, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_n_19;
          t = set_config_0(t);
          t = term_o_19;
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_p_19;
          return(t);
        }
        t = Option_3(t, z_3, b_4, c_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  n_27 = t;
  l_27 :
  if(match_string(n_27, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
        {
          o_27 = ATgetFirst((ATermList) n_27);
          p_27 = (ATerm) ATgetNext((ATermList) n_27);
          m_27 :
          if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
            {
              q_27 = ATgetFirst((ATermList) p_27);
              r_27 = (ATerm) ATgetNext((ATermList) p_27);
              {
                ATerm v_27 = NULL;
                ATerm r_19;
                r_19 = t;
                {
                  t = not_null(o_27);
                  t = j_0(t);
                }
                t = r_19;
                {
                  ATerm w_27 = NULL;
                  t = not_null(q_27);
                  {
                    t = k_0(t);
                    {
                      w_27 = t;
                      if(((v_27 != NULL) && (v_27 != w_27)))
                        _fail(w_27);
                      else
                        v_27 = w_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_27)), not_null(v_27));
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
  ATerm h_4 (ATerm t)
  {
    ATerm d_28 = NULL;
    d_28 = t;
    a_28 :
    if(!(match_string(d_28, "-i")))
      {
        if(!(match_string(d_28, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm g_28 = NULL;
    ATerm v_19;
    v_19 = t;
    {
      ATerm e_28 = NULL;
      ATerm f_28 = NULL;
      f_28 = t;
      if(((e_28 != NULL) && (e_28 != f_28)))
        _fail(f_28);
      else
        e_28 = f_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(e_28));
        t = set_config_0(t);
      }
    }
    t = v_19;
    {
      ATerm h_28 = NULL;
      h_28 = t;
      if(((g_28 != NULL) && (g_28 != h_28)))
        _fail(h_28);
      else
        g_28 = h_28;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_28));
    }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_w_19;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_28 = NULL;
  ATerm b_20;
  b_20 = t;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm n_28 = NULL,o_28 = NULL;
      n_28 = t;
      l_28 :
      if(match_cons(n_28, sym_Program_1))
        {
          o_28 = ATgetArgument(n_28, 0);
          if(((m_28 != NULL) && (m_28 != o_28)))
            _fail(o_28);
          else
            m_28 = o_28;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, k_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_20), not_null(m_28)), term_c_20));
      {
        t = printnl_0(t);
        {
          t = term_g_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_20;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, term_e_20));
  {
    t = printnl_0(t);
    {
      t = term_g_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  t = SSL_TicksToSeconds(not_null(r_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym__2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        ATerm f_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_28), not_null(y_28));
            LocalPopChoice(i_20);
          }
        else
          {
            t = f_20;
            t = SSL_addr(not_null(x_28), not_null(y_28));
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
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_71(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm f_29 = NULL,g_29 = NULL,i_29 = NULL;
        f_29 = t;
        e_29 :
        if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
          {
            g_29 = ATgetFirst((ATermList) f_29);
            i_29 = (ATerm) ATgetNext((ATermList) f_29);
            {
              ATerm l_29 = NULL;
              ATerm m_29 = NULL;
              t = not_null(i_29);
              {
                t = foldr_2(t, e_71, f_71);
                {
                  m_29 = t;
                  if(((l_29 != NULL) && (l_29 != m_29)))
                    _fail(m_29);
                  else
                    l_29 = m_29;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(l_29));
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
  ATerm y_29 = NULL;
  ATerm a_30 = NULL;
  y_29 = t;
  {
    ATerm b_30 = NULL;
    ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
    t = not_null(y_29);
    {
      b_30 = t;
      {
        t = SSL_explode_term(not_null(b_30));
        {
          d_30 = t;
          x_29 :
          if(match_cons(d_30, sym__2))
            {
              e_30 = ATgetArgument(d_30, 0);
              f_30 = ATgetArgument(d_30, 1);
              if(((a_30 != NULL) && (a_30 != f_30)))
                _fail(f_30);
              else
                a_30 = f_30;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_30);
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
    ATerm l_4 (ATerm t)
    {
      t = term_e_18;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym__2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        ATerm p_20;
        p_20 = t;
        {
          ATerm q_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_30), not_null(p_30));
              LocalPopChoice(r_20);
            }
          else
            {
              t = q_20;
              t = SSL_gtr(not_null(o_30), not_null(p_30));
            }
        }
        t = p_20;
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
  ATerm v_30 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
      w_30 = t;
      u_30 :
      if(match_cons(w_30, sym__2))
        {
          x_30 = ATgetArgument(w_30, 0);
          y_30 = ATgetArgument(w_30, 1);
          {
            if(((v_30 != NULL) && (v_30 != x_30)))
              _fail(x_30);
            else
              v_30 = x_30;
            if(((v_30 != NULL) && (v_30 != y_30)))
              _fail(y_30);
            else
              v_30 = y_30;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm u_20;
    u_20 = t;
    {
      ATerm b_31 = NULL;
      ATerm c_31 = NULL;
      t = term_b_7;
      {
        t = get_config_0(t);
        {
          c_31 = t;
          if(((b_31 != NULL) && (b_31 != c_31)))
            _fail(c_31);
          else
            b_31 = c_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), term_g_7);
        t = geq_0(t);
      }
    }
    t = u_20;
    t = f_59(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm g_31 = NULL,i_31 = NULL;
    ATerm v_20;
    v_20 = t;
    {
      ATerm h_31 = NULL;
      t = run_time_0(t);
      {
        h_31 = t;
        if(((g_31 != NULL) && (g_31 != h_31)))
          _fail(h_31);
        else
          g_31 = h_31;
      }
    }
    t = v_20;
    {
      ATerm j_31 = NULL;
      t = term_w_20;
      {
        t = get_config_0(t);
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_20), not_null(g_31)), term_x_20), not_null(i_31)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  {
    t = term_e_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Version_0))
    {
      ATerm s_31 = NULL,u_31 = NULL;
      ATerm z_20;
      z_20 = t;
      {
        ATerm t_31 = NULL;
        t = SSLgetAnnotations(not_null(q_31));
        {
          t_31 = t;
          if(((s_31 != NULL) && (s_31 != t_31)))
            _fail(t_31);
          else
            s_31 = t_31;
        }
      }
      t = z_20;
      {
        ATerm v_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_31));
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
        t = not_null(u_31);
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
  ATerm o_4 (ATerm t)
  {
    ATerm c_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = c_21;
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_4);
  t = p_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  t = SSL_table_create(not_null(c_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  {
    ATerm k_21;
    k_21 = t;
    {
      t = term_l_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_21, term_m_21, not_null(g_32));
          t = table_put_0(t);
        }
      }
    }
    t = k_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  t = SSL_table_destroy(not_null(p_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  t = SSL_exit(not_null(v_32));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  a_33 :
  if(((ATgetType(b_33) == AT_LIST) && ATisEmpty(b_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
        {
          c_33 = ATgetFirst((ATermList) b_33);
          d_33 = (ATerm) ATgetNext((ATermList) b_33);
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
  ATerm n_21;
  n_21 = t;
  {
    ATerm g_33 = NULL;
    ATerm j_33 = NULL;
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm h_33 = NULL;
          ATerm i_33 = NULL;
          i_33 = t;
          if(((h_33 != NULL) && (h_33 != i_33)))
            _fail(i_33);
          else
            h_33 = i_33;
          t = (ATerm) ATinsert(ATempty, not_null(h_33));
        }
      }
    {
      j_33 = t;
      if(((g_33 != NULL) && (g_33 != j_33)))
        _fail(j_33);
      else
        g_33 = j_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_17, not_null(g_33));
      t = printnl_0(t);
    }
  }
  t = n_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_34 = NULL,h_34 = NULL,i_34 = NULL;
  i_34 = t;
  e_34 :
  if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
    {
      f_34 = ATgetFirst((ATermList) i_34);
      h_34 = (ATerm) ATgetNext((ATermList) i_34);
      {
        ATerm y_34 = NULL;
        t = not_null(h_34);
        {
          ATerm q_21;
          q_21 = t;
          {
            ATerm z_34 = NULL,b_35 = NULL,e_35 = NULL;
            ATerm r_21;
            r_21 = t;
            {
              ATerm a_35 = NULL;
              t = i_0(t);
              {
                a_35 = t;
                if(((z_34 != NULL) && (z_34 != a_35)))
                  _fail(a_35);
                else
                  z_34 = a_35;
              }
            }
            t = r_21;
            {
              ATerm d_35 = NULL;
              t = not_null(f_34);
              {
                t = h_0(t);
                {
                  d_35 = t;
                  if(((b_35 != NULL) && (b_35 != d_35)))
                    _fail(d_35);
                  else
                    b_35 = d_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_34)), not_null(b_35));
                {
                  e_35 = t;
                  if(((y_34 != NULL) && (y_34 != e_35)))
                    _fail(e_35);
                  else
                    y_34 = e_35;
                }
              }
            }
          }
          t = q_21;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(y_34);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_34) == AT_LIST) && ATisEmpty(i_34)))
        {
          {
            t = term_z_13;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_53 (ATerm))
{
  ATerm v_35 = NULL,w_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym_Program_1))
    {
      w_35 = ATgetArgument(v_35, 0);
      {
        ATerm d_36 = NULL,f_36 = NULL;
        ATerm e_36 = NULL;
        t = SSLgetAnnotations(not_null(v_35));
        {
          e_36 = t;
          if(((d_36 != NULL) && (d_36 != e_36)))
            _fail(e_36);
          else
            d_36 = e_36;
        }
        {
          t = not_null(w_35);
          {
            ATerm h_36 = NULL;
            t = a_53(t);
            {
              f_36 = t;
              {
                ATerm i_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_36)), not_null(d_36));
                {
                  i_36 = t;
                  if(((h_36 != NULL) && (h_36 != i_36)))
                    _fail(i_36);
                  else
                    h_36 = i_36;
                }
                t = not_null(h_36);
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
  ATerm r_36 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_36 = NULL;
      t = term_w_20;
      {
        t = get_config_0(t);
        {
          s_36 = t;
          if(((r_36 != NULL) && (r_36 != s_36)))
            _fail(s_36);
          else
            r_36 = s_36;
        }
      }
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm t_36 = NULL;
            t_36 = t;
            if(((r_36 != NULL) && (r_36 != t_36)))
              _fail(t_36);
            else
              r_36 = t_36;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        t = not_null(r_36);
        return(t);
      }
      t = short_description_1(t, j_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_5);
    {
      t = term_u_21;
      {
        t = echo_0(t);
        {
          t = term_x_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm u_36 = NULL;
                  ATerm v_36 = NULL;
                  v_36 = t;
                  if(((u_36 != NULL) && (u_36 != v_36)))
                    _fail(v_36);
                  else
                    u_36 = v_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_36)), term_y_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_5);
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm w_36 = NULL;
                    ATerm x_36 = NULL;
                    ATerm m_5 (ATerm t)
                    {
                      t = not_null(r_36);
                      return(t);
                    }
                    t = long_description_1(t, m_5);
                    {
                      x_36 = t;
                      if(((w_36 != NULL) && (w_36 != x_36)))
                        _fail(x_36);
                      else
                        w_36 = x_36;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_36)), term_z_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_5);
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
  ATerm b_22;
  b_22 = t;
  {
    ATerm d_37 = NULL;
    ATerm e_37 = NULL;
    e_37 = t;
    if(((d_37 != NULL) && (d_37 != e_37)))
      _fail(e_37);
    else
      d_37 = e_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(d_37)));
      t = printnl_0(t);
    }
  }
  t = b_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm c_22;
  c_22 = t;
  {
    t = n_85(t);
    t = debug_0(t);
  }
  t = c_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym_Undefined_1))
    {
      m_37 = ATgetArgument(l_37, 0);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(l_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        {
          t = not_null(m_37);
          {
            ATerm t_37 = NULL;
            t = b_53(t);
            {
              r_37 = t;
              {
                ATerm u_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_37)), not_null(p_37));
                {
                  u_37 = t;
                  if(((t_37 != NULL) && (t_37 != u_37)))
                    _fail(u_37);
                  else
                    t_37 = u_37;
                }
                t = not_null(t_37);
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
  ATerm z_37 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_64, _id);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = Cons_2(t, _id, z_37);
      }
    return(t);
  }
  t = z_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_76 (ATerm))
{
  t = fetch_1(t, w_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Help_0))
    {
      ATerm k_38 = NULL,m_38 = NULL;
      ATerm f_22;
      f_22 = t;
      {
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
      }
      t = f_22;
      {
        ATerm p_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_38));
        {
          p_38 = t;
          if(((m_38 != NULL) && (m_38 != p_38)))
            _fail(p_38);
          else
            m_38 = p_38;
        }
        t = not_null(m_38);
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
  ATerm u_38 = NULL;
  u_38 = t;
  t = SSL_implode_string(not_null(u_38));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
        z_38 = t;
        y_38 :
        if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
          {
            a_39 = ATgetFirst((ATermList) z_38);
            b_39 = (ATerm) ATgetNext((ATermList) z_38);
            {
              t = not_null(a_39);
              {
                ATerm n_5 (ATerm t)
                {
                  t = not_null(b_39);
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
  ATerm o_39 = NULL;
  ATerm q_39 = NULL;
  o_39 = t;
  {
    ATerm r_39 = NULL;
    ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
    t = not_null(o_39);
    {
      r_39 = t;
      {
        t = SSL_explode_term(not_null(r_39));
        {
          t_39 = t;
          l_39 :
          if(match_cons(t_39, sym__2))
            {
              u_39 = ATgetArgument(t_39, 0);
              v_39 = ATgetArgument(t_39, 1);
              m_39 :
              if(match_string(u_39, ""))
                {
                  if(((q_39 != NULL) && (q_39 != v_39)))
                    _fail(v_39);
                  else
                    q_39 = v_39;
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
      t = not_null(q_39);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_39);
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          t = Nil_0(t);
          t = f_65(t);
        }
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym__2))
    {
      d_40 = ATgetArgument(c_40, 0);
      e_40 = ATgetArgument(c_40, 1);
      {
        t = not_null(d_40);
        {
          ATerm o_5 (ATerm t)
          {
            t = not_null(e_40);
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
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_40 = NULL;
  j_40 = t;
  t = SSL_explode_string(not_null(j_40));
  return(t);
}
ATerm _2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      {
        ATerm y_40 = NULL,a_41 = NULL;
        ATerm z_40 = NULL;
        t = SSLgetAnnotations(not_null(s_40));
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
        {
          t = not_null(t_40);
          {
            ATerm c_41 = NULL;
            t = w_50(t);
            {
              a_41 = t;
              {
                t = not_null(u_40);
                {
                  ATerm e_41 = NULL;
                  t = x_50(t);
                  {
                    c_41 = t;
                    {
                      ATerm f_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_41), not_null(c_41)), not_null(y_40));
                      {
                        f_41 = t;
                        if(((e_41 != NULL) && (e_41 != f_41)))
                          _fail(f_41);
                        else
                          e_41 = f_41;
                      }
                      t = not_null(e_41);
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
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm t_22;
        t_22 = t;
        t = SSL_printnl(not_null(o_41), not_null(p_41));
        t = t_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm v_22;
  v_22 = t;
  {
    ATerm v_41 = NULL,x_41 = NULL;
    ATerm w_22;
    w_22 = t;
    {
      ATerm w_41 = NULL;
      t = m_85(t);
      {
        w_41 = t;
        if(((v_41 != NULL) && (v_41 != w_41)))
          _fail(w_41);
        else
          v_41 = w_41;
      }
    }
    t = w_22;
    {
      ATerm y_41 = NULL;
      y_41 = t;
      if(((x_41 != NULL) && (x_41 != y_41)))
        _fail(y_41);
      else
        x_41 = y_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_41)), not_null(v_41)));
        t = printnl_0(t);
      }
    }
  }
  t = v_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm b_42 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = Cons_2(t, q_64, b_42);
      }
    return(t);
  }
  t = b_42(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_42 = NULL;
  d_42 = t;
  t = SSL_is_string(not_null(d_42));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_5);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
              m_42 = t;
              l_42 :
              if(match_cons(m_42, sym_Path_1))
                {
                  n_42 = ATgetArgument(m_42, 0);
                  t = not_null(n_42);
                }
              else
                {
                  if(match_cons(m_42, sym_Var_1))
                    {
                      n_42 = ATgetArgument(m_42, 0);
                      {
                        t = not_null(n_42);
                        {
                          ATerm h_23 = t;
                          int i_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_23);
                            }
                          else
                            {
                              t = h_23;
                              {
                                ATerm u_5 (ATerm t)
                                {
                                  t = term_j_23;
                                  return(t);
                                }
                                t = debug_1(t, u_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_42, sym_Prefix_2))
                        {
                          n_42 = ATgetArgument(m_42, 0);
                          o_42 = ATgetArgument(m_42, 1);
                          {
                            ATerm t_42 = NULL,v_42 = NULL;
                            ATerm k_23;
                            k_23 = t;
                            {
                              ATerm u_42 = NULL;
                              t = not_null(n_42);
                              {
                                t = eval_config_0(t);
                                {
                                  u_42 = t;
                                  if(((t_42 != NULL) && (t_42 != u_42)))
                                    _fail(u_42);
                                  else
                                    t_42 = u_42;
                                }
                              }
                            }
                            t = k_23;
                            {
                              ATerm w_42 = NULL;
                              t = not_null(o_42);
                              {
                                t = eval_config_0(t);
                                {
                                  w_42 = t;
                                  if(((v_42 != NULL) && (v_42 != w_42)))
                                    _fail(w_42);
                                  else
                                    v_42 = w_42;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_42), not_null(v_42));
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
  ATerm f_43 = NULL;
  f_43 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_23, not_null(f_43));
    {
      t = table_get_0(t);
      {
        ATerm v_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_23;
            q_23 = t;
            {
              ATerm h_43 = NULL;
              ATerm i_43 = NULL;
              i_43 = t;
              if(((h_43 != NULL) && (h_43 != i_43)))
                _fail(i_43);
              else
                h_43 = i_43;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_23, not_null(f_43), not_null(h_43));
                t = table_put_0(t);
              }
            }
            t = q_23;
          }
          return(t);
        }
        t = try_1(t, v_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_62(t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym__2))
    {
      o_43 = ATgetArgument(n_43, 0);
      p_43 = ATgetArgument(n_43, 1);
      t = SSL_table_get(not_null(o_43), not_null(p_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym__3))
    {
      x_43 = ATgetArgument(w_43, 0);
      y_43 = ATgetArgument(w_43, 1);
      z_43 = ATgetArgument(w_43, 2);
      {
        ATerm v_23;
        v_23 = t;
        {
          ATerm d_44 = NULL;
          ATerm e_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), not_null(y_43));
          {
            ATerm w_23 = t;
            int x_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_23);
              }
            else
              {
                t = w_23;
                t = (ATerm) ATempty;
              }
            {
              e_44 = t;
              if(((d_44 != NULL) && (d_44 != e_44)))
                _fail(e_44);
              else
                d_44 = e_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_43), not_null(y_43), (ATerm) ATinsert(CheckATermList(not_null(d_44)), not_null(z_43)));
            t = table_put_0(t);
          }
        }
        t = v_23;
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
  ATerm i_44 = NULL;
  ATerm j_44 = NULL;
  t = term_z_13;
  {
    t = b_78(t);
    {
      j_44 = t;
      if(((i_44 != NULL) && (i_44 != j_44)))
        _fail(j_44);
      else
        i_44 = j_44;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_21, term_w_21, not_null(i_44));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_string(p_44, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_44) == AT_LIST) && !(ATisEmpty(p_44))))
        {
          q_44 = ATgetFirst((ATermList) p_44);
          r_44 = (ATerm) ATgetNext((ATermList) p_44);
          {
            ATerm u_44 = NULL;
            ATerm y_23;
            y_23 = t;
            {
              t = not_null(q_44);
              t = a_0(t);
            }
            t = y_23;
            {
              ATerm v_44 = NULL;
              t = term_z_13;
              {
                t = d_0(t);
                {
                  v_44 = t;
                  if(((u_44 != NULL) && (u_44 != v_44)))
                    _fail(v_44);
                  else
                    u_44 = v_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_44)), not_null(u_44));
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
  ATerm y_5 (ATerm t)
  {
    ATerm a_45 = NULL;
    a_45 = t;
    z_44 :
    if(!(match_string(a_45, "--help")))
      {
        if(!(match_string(a_45, "-h")))
          {
            if(!(match_string(a_45, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_a_24;
    {
      t = set_config_0(t);
      t = term_b_24;
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = Option_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  c_45 :
  if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
    {
      i_45 = ATgetFirst((ATermList) h_45);
      j_45 = (ATerm) ATgetNext((ATermList) h_45);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_45)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_45)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
  e_46 = t;
  d_46 :
  if(((ATgetType(e_46) == AT_LIST) && !(ATisEmpty(e_46))))
    {
      f_46 = ATgetFirst((ATermList) e_46);
      g_46 = (ATerm) ATgetNext((ATermList) e_46);
      {
        ATerm k_46 = NULL,m_46 = NULL;
        ATerm l_46 = NULL;
        t = SSLgetAnnotations(not_null(e_46));
        {
          l_46 = t;
          if(((k_46 != NULL) && (k_46 != l_46)))
            _fail(l_46);
          else
            k_46 = l_46;
        }
        {
          t = not_null(f_46);
          {
            ATerm o_46 = NULL;
            t = f_52(t);
            {
              m_46 = t;
              {
                t = not_null(g_46);
                {
                  ATerm q_46 = NULL;
                  t = g_52(t);
                  {
                    o_46 = t;
                    {
                      ATerm r_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_46)), not_null(m_46)), not_null(k_46));
                      {
                        r_46 = t;
                        if(((q_46 != NULL) && (q_46 != r_46)))
                          _fail(r_46);
                        else
                          q_46 = r_46;
                      }
                      t = not_null(q_46);
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
  ATerm b_47 = NULL;
  b_47 = t;
  a_47 :
  if(((ATgetType(b_47) == AT_LIST) && ATisEmpty(b_47)))
    {
      {
        ATerm d_47 = NULL,f_47 = NULL;
        ATerm d_24;
        d_24 = t;
        {
          ATerm e_47 = NULL;
          t = SSLgetAnnotations(not_null(b_47));
          {
            e_47 = t;
            if(((d_47 != NULL) && (d_47 != e_47)))
              _fail(e_47);
            else
              d_47 = e_47;
          }
        }
        t = d_24;
        {
          ATerm g_47 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_47));
          {
            g_47 = t;
            if(((f_47 != NULL) && (f_47 != g_47)))
              _fail(g_47);
            else
              f_47 = g_47;
          }
          t = not_null(f_47);
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
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym__2))
    {
      n_47 = ATgetArgument(m_47, 0);
      o_47 = ATgetArgument(m_47, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_23, not_null(n_47), not_null(o_47));
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
  ATerm e_24;
  e_24 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = term_i_24;
      t = z_77(t);
      return(t);
    }
    t = try_1(t, b_6);
  }
  t = e_24;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm w_47 = NULL;
      ATerm k_24;
      k_24 = t;
      {
        ATerm u_47 = NULL;
        ATerm v_47 = NULL;
        v_47 = t;
        if(((u_47 != NULL) && (u_47 != v_47)))
          _fail(v_47);
        else
          u_47 = v_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_20, not_null(u_47));
          t = set_config_0(t);
        }
      }
      t = k_24;
      {
        ATerm x_47 = NULL;
        x_47 = t;
        if(((w_47 != NULL) && (w_47 != x_47)))
          _fail(x_47);
        else
          w_47 = x_47;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_47));
      }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              {
                t = z_77(t);
                t = Cons_2(t, _id, h_6);
              }
            }
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_6, h_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  ATerm u_24;
  u_24 = t;
  {
    ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
    g_48 = t;
    c_48 :
    if(match_cons(g_48, sym__3))
      {
        h_48 = ATgetArgument(g_48, 0);
        i_48 = ATgetArgument(g_48, 1);
        j_48 = ATgetArgument(g_48, 2);
        {
          if(((d_48 != NULL) && (d_48 != h_48)))
            _fail(h_48);
          else
            d_48 = h_48;
          {
            if(((e_48 != NULL) && (e_48 != i_48)))
              _fail(i_48);
            else
              e_48 = i_48;
            {
              if(((f_48 != NULL) && (f_48 != j_48)))
                _fail(j_48);
              else
                f_48 = j_48;
              t = SSL_table_put(not_null(d_48), not_null(e_48), not_null(f_48));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm m_48 = NULL;
  ATerm v_24;
  v_24 = t;
  {
    t = term_w_24;
    t = table_put_0(t);
  }
  t = v_24;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_77(t);
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_25;
            c_25 = t;
            {
              ATerm d_25 = t;
              int i_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_23;
                  t = get_config_0(t);
                  LocalPopChoice(i_25);
                }
              else
                {
                  t = d_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = c_25;
            {
              t = system_usage_0(t);
              {
                t = term_e_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm l_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm n_48 = NULL;
                  n_48 = t;
                  if(((m_48 != NULL) && (m_48 != n_48)))
                    _fail(n_48);
                  else
                    m_48 = n_48;
                  return(t);
                }
                t = Undefined_1(t, m_6);
                return(t);
              }
              t = option_defined_1(t, l_6);
              {
                ATerm n_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_48)), term_j_25);
                  return(t);
                }
                t = say_1(t, n_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_7;
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
          t = term_v_21;
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
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_75);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm v_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = v_25;
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
  ATerm o_6 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_74(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    t = xtc_io_1(t, i_74);
    return(t);
  }
  t = option_wrap_2(t, o_6, q_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm g_74 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, g_74);
  return(t);
}
ATerm io_pp_c_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      t = term_g_26;
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      ATerm q_48 = NULL;
      ATerm r_48 = NULL;
      t = term_h_26;
      {
        t = xtc_find_0(t);
        {
          t = remove_extension_0(t);
          {
            r_48 = t;
            if(((q_48 != NULL) && (q_48 != r_48)))
              _fail(r_48);
            else
              q_48 = r_48;
          }
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_48)), term_k_26);
      return(t);
    }
    t = xtc_transform_2(t, v_6, w_6);
    {
      t = xtc_abox_format_0(t);
      t = xtc_abox2text_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, s_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_c_0(t);
  return(t);
}
