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
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_k_25;
ATerm term_x_24;
ATerm term_m_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_i_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_q_9;
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
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_q_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_v_10);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_k_13);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_a_14);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_a_14);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_a_14);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_a_14);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__3, term_x_21, term_y_21, (ATerm) ATempty);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox_format_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm k_65 (ATerm));
ATerm init_0 (ATerm);
ATerm elem_1 (ATerm, ATerm s_64 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm d_65 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm w_64 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm l_86 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm remove_extension_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm union_1 (ATerm, ATerm d_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm h_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm q_75 (ATerm));
ATerm assert_1 (ATerm, ATerm f_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm c_75 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm d_75 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm l_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_78 (ATerm));
ATerm Program_1 (ATerm, ATerm y_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_72 (ATerm));
ATerm map_1 (ATerm, ATerm k_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm g_75 (ATerm));
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
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_int_to_string(not_null(e_0));
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
            ;
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
        ;
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
  ATerm f_0 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = xtc_transform_2(t, f_0, pass_verbose_0);
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
              ;
              LocalPopChoice(t_7);
            }
          else
            {
              t = l_7;
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm u_7 = t;
                  int v_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(v_7);
                    }
                  else
                    {
                      t = u_7;
                      {
                        ATerm i_3 = NULL;
                        t = Cons_2(t, _id, h_0);
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
                t = Cons_2(t, _id, h_0);
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
ATerm at_last_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm w_7 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = k_65(t);
        ;
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
ATerm elem_1 (ATerm t, ATerm s_64 (ATerm))
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
                t = s_64(t);
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
ATerm at_suffix_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_65(t);
        ;
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
ATerm split_fetch_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm d_4 = NULL,f_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = Cons_2(t, w_64, _id);
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
ATerm list_tokenize_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  ATerm k_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, l_86);
      ;
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
                      t = list_tokenize_1(t, l_86);
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
                            t = list_tokenize_1(t, l_86);
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
ATerm if_verbose5_1 (ATerm t, ATerm p_59 (ATerm))
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
    t = p_59(t);
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
ATerm filter_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
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
              t = filter_1(t, h_73);
              return(t);
            }
            t = Cons_2(t, h_73, w_0);
            ;
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
                    t = filter_1(t, h_73);
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
ATerm repeat_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = w_78(t);
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
  ATerm o_9;
  o_9 = t;
  {
    ATerm z_0 (ATerm t)
    {
      t = term_r_9;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm s_9 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_9;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, z_0);
  }
  t = o_9;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm t_9;
    t_9 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), term_y_9);
        t = geq_0(t);
      }
    }
    t = t_9;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm z_9;
    z_9 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_a_10);
        t = geq_0(t);
      }
    }
    t = z_9;
    t = q_59(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
    {
      l_9 = ATgetFirst((ATermList) k_9);
      m_9 = (ATerm) ATgetNext((ATermList) k_9);
      {
        t = i_70(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm p_9 = NULL;
            p_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(p_9));
              t = h_70(t);
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
ATerm union_1 (ATerm t, ATerm d_70 (ATerm))
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
            ATerm c_10 = t;
            int d_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_9);
                ;
                LocalPopChoice(d_10);
              }
            else
              {
                t = c_10;
                {
                  ATerm e_10 = t;
                  int k_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(x_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_70, g_1);
                      t = b_10(t);
                      ;
                      LocalPopChoice(k_10);
                    }
                  else
                    {
                      t = e_10;
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
        ATerm l_10;
        l_10 = t;
        {
          ATerm n_10 = NULL;
          ATerm o_10 = NULL,q_10 = NULL;
          ATerm p_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(i_10));
          {
            ATerm m_10 = t;
            int r_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(r_10);
              }
            else
              {
                t = m_10;
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
        t = l_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm z_59 (ATerm))
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
                  t = z_59(t);
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
        t = term_s_10;
        return(t);
      }
      t = debug_1(t, j_1);
      return(t);
    }
    t = if_verbose5_1(t, i_1);
    {
      ATerm t_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_10;
        }
      {
        ATerm u_10;
        u_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_9, term_v_10, (ATerm) ATinsert(ATempty, not_null(m_11)));
          t = table_put_0(t);
        }
        t = u_10;
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = term_b_11;
              return(t);
            }
            t = debug_1(t, l_1);
            return(t);
          }
          t = if_verbose4_1(t, k_1);
          {
            ATerm c_11 = t;
            int g_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(g_11);
              }
            else
              {
                t = c_11;
                t = (ATerm) ATempty;
              }
            {
              ATerm m_1 (ATerm t)
              {
                ATerm n_1 (ATerm t)
                {
                  t = term_h_11;
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
                          t = term_i_11;
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
                                t = term_h_11;
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
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm n_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_11;
            t = getenv_0(t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = n_11;
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
      t = term_s_11;
      return(t);
    }
    t = debug_1(t, t_1);
    return(t);
  }
  t = if_verbose5_1(t, s_1);
  {
    ATerm u_11;
    u_11 = t;
    {
      ATerm v_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(w_11);
        }
      else
        {
          t = v_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = u_11;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = term_a_12;
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = term_f_12;
          return(t);
        }
        t = debug_1(t, x_1);
        return(t);
      }
      t = if_verbose5_1(t, w_1);
      {
        t = xtc_load_0(t);
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm y_1 (ATerm t)
            {
              ATerm z_1 (ATerm t)
              {
                t = term_f_12;
                return(t);
              }
              t = debug_1(t, z_1);
              return(t);
            }
            t = if_verbose5_1(t, y_1);
          }
        }
      }
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm x_11 = NULL;
        ATerm y_11 = NULL;
        y_11 = t;
        if(((x_11 != NULL) && (x_11 != y_11)))
          _fail(y_11);
        else
          x_11 = y_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), not_null(x_11)), term_n_12);
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
                      t = term_r_12;
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
  ATerm s_12 = t;
  int t_12 = stack_ptr;
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
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm d_2 (ATerm t)
        {
          t = term_u_12;
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
      t = term_z_12;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, z_75, a_76);
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
ATerm fork_and_wait_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    t = fork_0(t);
    {
      j_14 = t;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_14 = NULL;
            l_14 = t;
            d_14 :
            if(match_int(l_14, 0))
              {
                t = not_null(h_14);
                t = h_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
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
ATerm xtc_command_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm e_15 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    ATerm f_15 = NULL;
    t = q_75(t);
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
  t = c_13;
  {
    ATerm d_13;
    d_13 = t;
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
    t = d_13;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_72 (ATerm))
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
        ATerm f_13;
        f_13 = t;
        {
          ATerm x_15 = NULL;
          ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
          t = f_72(t);
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
                    ATerm i_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), term_k_13);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = i_13;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_15), term_k_13, (ATerm) ATinsert(CheckATermList(not_null(w_15)), (ATerm) ATinsert(CheckATermList(not_null(v_15)), not_null(q_15))));
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
        t = f_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm m_13;
  m_13 = t;
  {
    t = t_72(t);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_n_13;
        return(t);
      }
      t = debug_1(t, f_2);
    }
  }
  t = m_13;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  ATerm o_13 = t;
  int t_13 = stack_ptr;
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
      LocalPopChoice(t_13);
      t = SSL_open_file(not_null(j_16), not_null(i_16));
    }
  else
    {
      t = o_13;
      {
        ATerm n_16 = NULL;
        ATerm o_16 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_u_13;
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
              ATerm v_13;
              v_13 = t;
              {
                ATerm p_16 = NULL;
                t = term_w_13;
                {
                  p_16 = t;
                  if(((o_16 != NULL) && (o_16 != p_16)))
                    _fail(p_16);
                  else
                    o_16 = p_16;
                }
              }
              t = v_13;
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
    ATerm y_13;
    y_13 = t;
    {
      ATerm y_16 = NULL;
      t = term_z_13;
      {
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
      }
    }
    t = y_13;
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
  t = term_a_14;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), term_b_14);
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
      ATerm c_14;
      c_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_w_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_a_14);
            {
              ATerm i_2 (ATerm t)
              {
                t = term_e_14;
                return(t);
              }
              t = assert_1(t, i_2);
            }
          }
        }
      }
      t = c_14;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_17)), term_i_14));
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_17)), term_i_14), not_null(s_17)), term_k_14));
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
      ATerm q_14;
      q_14 = t;
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
      t = q_14;
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
ATerm FILE_1 (ATerm t, ATerm r_57 (ATerm))
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
            t = r_57(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(u_14);
        }
      else
        {
          t = t_14;
          t = stdin_0(t);
        }
      LocalPopChoice(s_14);
      t = xtc_transform_file_2(t, s_75, t_75);
    }
  else
    {
      t = r_14;
      t = xtc_transform_term_2(t, s_75, t_75);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,u_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      u_19 = ATgetArgument(r_19, 1);
      t = SSL_copy(not_null(s_19), not_null(u_19));
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
      ATerm j_20 = NULL,n_20 = NULL;
      ATerm z_14;
      z_14 = t;
      {
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(h_20));
        {
          m_20 = t;
          if(((j_20 != NULL) && (j_20 != m_20)))
            _fail(m_20);
          else
            j_20 = m_20;
        }
      }
      t = z_14;
      {
        ATerm o_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_20));
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
      ATerm a_15;
      a_15 = t;
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
      t = a_15;
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
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  w_21 :
  if(match_cons(b_22, sym_FILE_1))
    {
      c_22 = ATgetArgument(b_22, 0);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 = NULL;
            ATerm n_22 = NULL;
            t = m_0(t);
            {
              n_22 = t;
              {
                if(((l_22 != NULL) && (l_22 != n_22)))
                  _fail(n_22);
                else
                  l_22 = n_22;
                {
                  ATerm d_15 = t;
                  int i_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(i_15);
                    }
                  else
                    {
                      t = d_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(l_22));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_22));
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_22 = NULL;
                  ATerm r_22 = NULL;
                  t = m_0(t);
                  {
                    r_22 = t;
                    {
                      if(((p_22 != NULL) && (p_22 != r_22)))
                        _fail(r_22);
                      else
                        p_22 = r_22;
                      {
                        ATerm l_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm m_15 = t;
                            int s_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(s_15);
                              }
                            else
                              {
                                t = m_15;
                                {
                                  ATerm t_15 = t;
                                  int b_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_16);
                                    }
                                  else
                                    {
                                      t = t_15;
                                      {
                                        ATerm s_22 = NULL;
                                        s_22 = t;
                                        if(((c_22 != NULL) && (c_22 != s_22)))
                                          _fail(s_22);
                                        else
                                          c_22 = s_22;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(p_22));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_22));
                  ;
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                  {
                    ATerm u_22 = NULL;
                    t = m_0(t);
                    {
                      u_22 = t;
                      if(((c_22 != NULL) && (c_22 != u_22)))
                        _fail(u_22);
                      else
                        c_22 = u_22;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_22));
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
        ATerm c_16;
        c_16 = t;
        {
          ATerm r_23 = NULL;
          ATerm s_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(o_23));
          {
            ATerm d_16 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(e_16);
              }
            else
              {
                t = d_16;
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
        t = c_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm j_24 = NULL;
    ATerm l_24 = NULL,n_24 = NULL,o_24 = NULL;
    t = c_72(t);
    {
      j_24 = t;
      {
        if(((i_24 != NULL) && (i_24 != j_24)))
          _fail(j_24);
        else
          i_24 = j_24;
        {
          ATerm h_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), term_k_13);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = h_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_24 = t;
            f_24 :
            if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
              {
                n_24 = ATgetFirst((ATermList) l_24);
                o_24 = (ATerm) ATgetNext((ATermList) l_24);
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_24), term_k_13, not_null(g_24));
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
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(p_24));
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
  t = g_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_remove(not_null(z_24));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_63(t);
      t = i_63(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        t = i_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm e_25 = NULL;
  ATerm t_16;
  t_16 = t;
  {
    ATerm f_25 = NULL;
    ATerm g_25 = NULL;
    t = b_72(t);
    {
      f_25 = t;
      {
        if(((e_25 != NULL) && (e_25 != f_25)))
          _fail(f_25);
        else
          e_25 = f_25;
        {
          ATerm h_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), term_k_13);
          {
            ATerm u_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = u_16;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_25), term_k_13, (ATerm) ATinsert(CheckATermList(not_null(g_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = term_e_14;
    return(t);
  }
  t = begin_scope_1(t, k_2);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm z_16;
      z_16 = t;
      {
        ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_17;
            t = table_get_0(t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
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
      t = z_16;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_e_14;
          return(t);
        }
        t = end_scope_1(t, n_2);
      }
      return(t);
    }
    t = restore_always_2(t, c_75, l_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL;
        ATerm u_25 = NULL;
        t = term_k_14;
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
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = term_z_12;
      }
    {
      t = d_75(t);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_14;
              t = get_config_0(t);
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = term_k_17;
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
    t = term_m_17;
    t = set_config_0(t);
    t = term_n_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_o_17;
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
    ATerm p_17;
    p_17 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(b_26));
        t = set_config_0(t);
      }
    }
    t = p_17;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_c_18;
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
  ATerm d_18 = t;
  int e_18 = stack_ptr;
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
        t = term_g_18;
        t = set_config_0(t);
        t = term_h_18;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_i_18;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
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
              ATerm n_18;
              n_18 = t;
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
              t = n_18;
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
              t = term_s_18;
              return(t);
            }
            t = ArgOption_3(t, g_3, h_3, k_3);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
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
                t = term_u_18;
                t = set_config_0(t);
                t = term_v_18;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_w_18;
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
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm z_18 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = z_18;
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
    ATerm e_19;
    e_19 = t;
    {
      ATerm a_27 = NULL;
      ATerm b_27 = NULL;
      b_27 = t;
      if(((a_27 != NULL) && (a_27 != b_27)))
        _fail(b_27);
      else
        a_27 = b_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(a_27));
        t = set_config_0(t);
      }
    }
    t = e_19;
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
    t = term_i_19;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, y_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
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
          t = term_o_19;
          t = set_config_0(t);
          t = term_p_19;
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_t_19;
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
                ATerm v_19;
                v_19 = t;
                {
                  t = not_null(o_27);
                  t = j_0(t);
                }
                t = v_19;
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
    ATerm w_19;
    w_19 = t;
    {
      ATerm e_28 = NULL;
      ATerm f_28 = NULL;
      f_28 = t;
      if(((e_28 != NULL) && (e_28 != f_28)))
        _fail(f_28);
      else
        e_28 = f_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(e_28));
        t = set_config_0(t);
      }
    }
    t = w_19;
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
    t = term_x_19;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_28 = NULL;
  ATerm c_20;
  c_20 = t;
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
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_20), not_null(m_28)), term_d_20));
      {
        t = printnl_0(t);
        {
          t = term_g_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_20;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, term_f_20));
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
        ATerm i_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_28), not_null(y_28));
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = i_20;
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
ATerm foldr_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm l_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_70(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = l_20;
      {
        ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
        f_29 = t;
        e_29 :
        if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
          {
            g_29 = ATgetFirst((ATermList) f_29);
            h_29 = (ATerm) ATgetNext((ATermList) f_29);
            {
              ATerm l_29 = NULL;
              ATerm m_29 = NULL;
              t = not_null(h_29);
              {
                t = foldr_2(t, u_70, v_70);
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
    ATerm l_4 (ATerm t)
    {
      t = term_f_18;
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
  k_30 :
  if(match_cons(n_30, sym__2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        ATerm q_20;
        q_20 = t;
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_30), not_null(p_30));
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              t = SSL_gtr(not_null(o_30), not_null(p_30));
            }
        }
        t = q_20;
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
  ATerm t_20 = t;
  int u_20 = stack_ptr;
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
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm v_20;
    v_20 = t;
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
    t = v_20;
    t = l_59(t);
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
    ATerm w_20;
    w_20 = t;
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
    t = w_20;
    {
      ATerm j_31 = NULL;
      t = term_x_20;
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
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), not_null(g_31)), term_y_20), not_null(i_31)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  {
    t = term_f_18;
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
      ATerm c_21;
      c_21 = t;
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
      t = c_21;
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
ATerm need_help_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_4);
  t = g_76(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  t = SSL_table_create(not_null(a_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  {
    ATerm l_21;
    l_21 = t;
    {
      t = term_m_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_21, term_n_21, not_null(e_32));
          t = table_put_0(t);
        }
      }
    }
    t = l_21;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  t = SSL_table_destroy(not_null(i_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_exit(not_null(o_32));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,y_32 = NULL;
  u_32 = t;
  t_32 :
  if(((ATgetType(u_32) == AT_LIST) && ATisEmpty(u_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
        {
          v_32 = ATgetFirst((ATermList) u_32);
          y_32 = (ATerm) ATgetNext((ATermList) u_32);
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
  ATerm o_21;
  o_21 = t;
  {
    ATerm b_33 = NULL;
    ATerm e_33 = NULL;
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm c_33 = NULL;
          ATerm d_33 = NULL;
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
          t = (ATerm) ATinsert(ATempty, not_null(c_33));
        }
      }
    {
      e_33 = t;
      if(((b_33 != NULL) && (b_33 != e_33)))
        _fail(e_33);
      else
        b_33 = e_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_17, not_null(b_33));
      t = printnl_0(t);
    }
  }
  t = o_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  p_33 = t;
  m_33 :
  if(((ATgetType(p_33) == AT_LIST) && !(ATisEmpty(p_33))))
    {
      n_33 = ATgetFirst((ATermList) p_33);
      o_33 = (ATerm) ATgetNext((ATermList) p_33);
      {
        ATerm u_33 = NULL;
        t = not_null(o_33);
        {
          ATerm r_21;
          r_21 = t;
          {
            ATerm v_33 = NULL,i_34 = NULL,k_34 = NULL;
            ATerm s_21;
            s_21 = t;
            {
              ATerm h_34 = NULL;
              t = i_0(t);
              {
                h_34 = t;
                if(((v_33 != NULL) && (v_33 != h_34)))
                  _fail(h_34);
                else
                  v_33 = h_34;
              }
            }
            t = s_21;
            {
              ATerm j_34 = NULL;
              t = not_null(n_33);
              {
                t = g_0(t);
                {
                  j_34 = t;
                  if(((i_34 != NULL) && (i_34 != j_34)))
                    _fail(j_34);
                  else
                    i_34 = j_34;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_33)), not_null(i_34));
                {
                  k_34 = t;
                  if(((u_33 != NULL) && (u_33 != k_34)))
                    _fail(k_34);
                  else
                    u_33 = k_34;
                }
              }
            }
          }
          t = r_21;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(u_33);
              return(t);
            }
            t = reverse_acc_2(t, g_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_33) == AT_LIST) && ATisEmpty(p_33)))
        {
          {
            t = term_a_14;
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
ATerm short_description_1 (ATerm t, ATerm n_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm e_35 = NULL,g_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym_Program_1))
    {
      g_35 = ATgetArgument(e_35, 0);
      {
        ATerm j_35 = NULL,l_35 = NULL;
        ATerm k_35 = NULL;
        t = SSLgetAnnotations(not_null(e_35));
        {
          k_35 = t;
          if(((j_35 != NULL) && (j_35 != k_35)))
            _fail(k_35);
          else
            j_35 = k_35;
        }
        {
          t = not_null(g_35);
          {
            ATerm n_35 = NULL;
            t = y_57(t);
            {
              l_35 = t;
              {
                ATerm o_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_35)), not_null(j_35));
                {
                  o_35 = t;
                  if(((n_35 != NULL) && (n_35 != o_35)))
                    _fail(o_35);
                  else
                    n_35 = o_35;
                }
                t = not_null(n_35);
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
  ATerm x_35 = NULL;
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_35 = NULL;
      t = term_x_20;
      {
        t = get_config_0(t);
        {
          y_35 = t;
          if(((x_35 != NULL) && (x_35 != y_35)))
            _fail(y_35);
          else
            x_35 = y_35;
        }
      }
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm z_35 = NULL;
            z_35 = t;
            if(((x_35 != NULL) && (x_35 != z_35)))
              _fail(z_35);
            else
              x_35 = z_35;
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
        t = not_null(x_35);
        return(t);
      }
      t = short_description_1(t, j_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_5);
    {
      t = term_v_21;
      {
        t = echo_0(t);
        {
          t = term_z_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm a_36 = NULL;
                  ATerm b_36 = NULL;
                  b_36 = t;
                  if(((a_36 != NULL) && (a_36 != b_36)))
                    _fail(b_36);
                  else
                    a_36 = b_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_36)), term_a_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_5);
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm c_36 = NULL;
                    ATerm d_36 = NULL;
                    ATerm m_5 (ATerm t)
                    {
                      t = not_null(x_35);
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
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_36)), term_d_22);
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
  ATerm e_22;
  e_22 = t;
  {
    ATerm j_36 = NULL;
    ATerm k_36 = NULL;
    k_36 = t;
    if(((j_36 != NULL) && (j_36 != k_36)))
      _fail(k_36);
    else
      j_36 = k_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(j_36)));
      t = printnl_0(t);
    }
  }
  t = e_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm f_22;
  f_22 = t;
  {
    t = n_72(t);
    t = debug_0(t);
  }
  t = f_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_57 (ATerm))
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
            t = z_57(t);
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
ATerm fetch_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm f_37 (ATerm t)
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_64, _id);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = Cons_2(t, _id, f_37);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_77 (ATerm))
{
  t = fetch_1(t, n_77);
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
      ATerm i_22;
      i_22 = t;
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
      t = i_22;
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
  ATerm y_37 = NULL;
  y_37 = t;
  t = SSL_implode_string(not_null(y_37));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
        d_38 = t;
        c_38 :
        if(((ATgetType(d_38) == AT_LIST) && !(ATisEmpty(d_38))))
          {
            e_38 = ATgetFirst((ATermList) d_38);
            f_38 = (ATerm) ATgetNext((ATermList) d_38);
            {
              t = not_null(e_38);
              {
                ATerm n_5 (ATerm t)
                {
                  t = not_null(f_38);
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
  ATerm r_38 = NULL;
  ATerm y_38 = NULL;
  r_38 = t;
  {
    ATerm z_38 = NULL;
    ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
    t = not_null(r_38);
    {
      z_38 = t;
      {
        t = SSL_explode_term(not_null(z_38));
        {
          b_39 = t;
          p_38 :
          if(match_cons(b_39, sym__2))
            {
              c_39 = ATgetArgument(b_39, 0);
              d_39 = ATgetArgument(b_39, 1);
              q_38 :
              if(match_string(c_39, ""))
                {
                  if(((y_38 != NULL) && (y_38 != d_39)))
                    _fail(d_39);
                  else
                    y_38 = d_39;
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
      t = not_null(y_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm r_39 (ATerm t)
  {
    ATerm m_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_39);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = m_22;
        {
          t = Nil_0(t);
          t = z_64(t);
        }
      }
    return(t);
  }
  t = r_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_39 = NULL,w_39 = NULL,z_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym__2))
    {
      w_39 = ATgetArgument(u_39, 0);
      z_39 = ATgetArgument(u_39, 1);
      {
        t = not_null(w_39);
        {
          ATerm o_5 (ATerm t)
          {
            t = not_null(z_39);
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
  ATerm q_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = q_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  t = SSL_explode_string(not_null(f_40));
  return(t);
}
ATerm _2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  s_40 :
  if(match_cons(y_40, sym__2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        ATerm e_41 = NULL,k_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(y_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(z_40);
          {
            ATerm m_41 = NULL;
            t = c_51(t);
            {
              k_41 = t;
              {
                t = not_null(a_41);
                {
                  ATerm o_41 = NULL;
                  t = d_51(t);
                  {
                    m_41 = t;
                    {
                      ATerm p_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_41), not_null(m_41)), not_null(e_41));
                      {
                        p_41 = t;
                        if(((o_41 != NULL) && (o_41 != p_41)))
                          _fail(p_41);
                        else
                          o_41 = p_41;
                      }
                      t = not_null(o_41);
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
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym__2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      {
        ATerm v_22;
        v_22 = t;
        t = SSL_printnl(not_null(y_41), not_null(z_41));
        t = v_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm w_22;
  w_22 = t;
  {
    ATerm f_42 = NULL,h_42 = NULL;
    ATerm x_22;
    x_22 = t;
    {
      ATerm g_42 = NULL;
      t = m_72(t);
      {
        g_42 = t;
        if(((f_42 != NULL) && (f_42 != g_42)))
          _fail(g_42);
        else
          f_42 = g_42;
      }
    }
    t = x_22;
    {
      ATerm i_42 = NULL;
      i_42 = t;
      if(((h_42 != NULL) && (h_42 != i_42)))
        _fail(i_42);
      else
        h_42 = i_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_42)), not_null(f_42)));
        t = printnl_0(t);
      }
    }
  }
  t = w_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm l_42 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = Cons_2(t, k_64, l_42);
      }
    return(t);
  }
  t = l_42(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  t = SSL_is_string(not_null(n_42));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm c_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_5);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = c_23;
            {
              ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
              w_42 = t;
              v_42 :
              if(match_cons(w_42, sym_Path_1))
                {
                  x_42 = ATgetArgument(w_42, 0);
                  t = not_null(x_42);
                }
              else
                {
                  if(match_cons(w_42, sym_Var_1))
                    {
                      x_42 = ATgetArgument(w_42, 0);
                      {
                        t = not_null(x_42);
                        {
                          ATerm i_23 = t;
                          int j_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(j_23);
                            }
                          else
                            {
                              t = i_23;
                              {
                                ATerm u_5 (ATerm t)
                                {
                                  t = term_k_23;
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
                      if(match_cons(w_42, sym_Prefix_2))
                        {
                          x_42 = ATgetArgument(w_42, 0);
                          y_42 = ATgetArgument(w_42, 1);
                          {
                            ATerm d_43 = NULL,f_43 = NULL;
                            ATerm p_23;
                            p_23 = t;
                            {
                              ATerm e_43 = NULL;
                              t = not_null(x_42);
                              {
                                t = eval_config_0(t);
                                {
                                  e_43 = t;
                                  if(((d_43 != NULL) && (d_43 != e_43)))
                                    _fail(e_43);
                                  else
                                    d_43 = e_43;
                                }
                              }
                            }
                            t = p_23;
                            {
                              ATerm g_43 = NULL;
                              t = not_null(y_42);
                              {
                                t = eval_config_0(t);
                                {
                                  g_43 = t;
                                  if(((f_43 != NULL) && (f_43 != g_43)))
                                    _fail(g_43);
                                  else
                                    f_43 = g_43;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_43), not_null(f_43));
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
  ATerm o_43 = NULL;
  o_43 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(o_43));
    {
      t = table_get_0(t);
      {
        ATerm v_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_23;
            t_23 = t;
            {
              ATerm q_43 = NULL;
              ATerm r_43 = NULL;
              r_43 = t;
              if(((q_43 != NULL) && (q_43 != r_43)))
                _fail(r_43);
              else
                q_43 = r_43;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_23, not_null(o_43), not_null(q_43));
                t = table_put_0(t);
              }
            }
            t = t_23;
          }
          return(t);
        }
        t = try_1(t, v_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_62(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym__2))
    {
      x_43 = ATgetArgument(w_43, 0);
      y_43 = ATgetArgument(w_43, 1);
      t = SSL_table_get(not_null(x_43), not_null(y_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  f_44 = t;
  e_44 :
  if(match_cons(f_44, sym__3))
    {
      g_44 = ATgetArgument(f_44, 0);
      h_44 = ATgetArgument(f_44, 1);
      i_44 = ATgetArgument(f_44, 2);
      {
        ATerm w_23;
        w_23 = t;
        {
          ATerm m_44 = NULL;
          ATerm n_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_44), not_null(h_44));
          {
            ATerm x_23 = t;
            int y_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_23);
              }
            else
              {
                t = x_23;
                t = (ATerm) ATempty;
              }
            {
              n_44 = t;
              if(((m_44 != NULL) && (m_44 != n_44)))
                _fail(n_44);
              else
                m_44 = n_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_44), not_null(h_44), (ATerm) ATinsert(CheckATermList(not_null(m_44)), not_null(i_44)));
            t = table_put_0(t);
          }
        }
        t = w_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm r_44 = NULL;
  ATerm s_44 = NULL;
  t = term_a_14;
  {
    t = s_78(t);
    {
      s_44 = t;
      if(((r_44 != NULL) && (r_44 != s_44)))
        _fail(s_44);
      else
        r_44 = s_44;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_21, term_y_21, not_null(r_44));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  x_44 :
  if(match_string(y_44, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
        {
          z_44 = ATgetFirst((ATermList) y_44);
          a_45 = (ATerm) ATgetNext((ATermList) y_44);
          {
            ATerm d_45 = NULL;
            ATerm z_23;
            z_23 = t;
            {
              t = not_null(z_44);
              t = a_0(t);
            }
            t = z_23;
            {
              ATerm e_45 = NULL;
              t = term_a_14;
              {
                t = c_0(t);
                {
                  e_45 = t;
                  if(((d_45 != NULL) && (d_45 != e_45)))
                    _fail(e_45);
                  else
                    d_45 = e_45;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_45)), not_null(d_45));
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
    ATerm j_45 = NULL;
    j_45 = t;
    i_45 :
    if(!(match_string(j_45, "--help")))
      {
        if(!(match_string(j_45, "-h")))
          {
            if(!(match_string(j_45, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_b_24;
    {
      t = set_config_0(t);
      t = term_c_24;
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_d_24;
    return(t);
  }
  t = Option_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  l_45 :
  if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
    {
      n_45 = ATgetFirst((ATermList) m_45);
      o_45 = (ATerm) ATgetNext((ATermList) m_45);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_45)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_45)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm y_45 = NULL,f_46 = NULL,g_46 = NULL;
  y_45 = t;
  x_45 :
  if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
    {
      f_46 = ATgetFirst((ATermList) y_45);
      g_46 = (ATerm) ATgetNext((ATermList) y_45);
      {
        ATerm k_46 = NULL,m_46 = NULL;
        ATerm l_46 = NULL;
        t = SSLgetAnnotations(not_null(y_45));
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
            t = l_52(t);
            {
              m_46 = t;
              {
                t = not_null(g_46);
                {
                  ATerm q_46 = NULL;
                  t = m_52(t);
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
        ATerm e_24;
        e_24 = t;
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
        t = e_24;
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
        t = (ATerm) ATmakeAppl(sym__3, term_q_23, not_null(n_47), not_null(o_47));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm k_24;
  k_24 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = term_m_24;
      t = q_78(t);
      return(t);
    }
    t = try_1(t, b_6);
  }
  t = k_24;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm w_47 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm u_47 = NULL;
        ATerm v_47 = NULL;
        v_47 = t;
        if(((u_47 != NULL) && (u_47 != v_47)))
          _fail(v_47);
        else
          u_47 = v_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_20, not_null(u_47));
          t = set_config_0(t);
        }
      }
      t = q_24;
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
      ATerm r_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              {
                t = q_78(t);
                t = Cons_2(t, _id, h_6);
              }
            }
          ;
          LocalPopChoice(s_24);
        }
      else
        {
          t = r_24;
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
  ATerm v_24;
  v_24 = t;
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
  t = v_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm m_48 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    t = term_x_24;
    t = table_put_0(t);
  }
  t = w_24;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm y_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_78(t);
          ;
          LocalPopChoice(a_25);
        }
      else
        {
          t = y_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_25;
            d_25 = t;
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_24;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_25;
            {
              t = system_usage_0(t);
              {
                t = term_f_18;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
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
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_48)), term_k_25);
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
        ATerm r_25;
        r_25 = t;
        {
          t = term_x_21;
          t = table_destroy_0(t);
        }
        t = r_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm))
{
  t = parse_options_1(t, m_76);
  {
    t = store_options_0(t);
    {
      t = o_76(t);
      {
        ATerm s_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_76);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = s_25;
            {
              ATerm z_25 = t;
              int d_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_76(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(d_26);
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
ATerm option_wrap_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  t = option_wrap_4(t, q_76, default_usage_0, _id, r_76);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm e_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_75(t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = e_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    t = xtc_io_1(t, i_75);
    return(t);
  }
  t = option_wrap_2(t, o_6, q_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm g_75 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, g_75);
  return(t);
}
ATerm io_pp_c_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      t = term_h_26;
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      ATerm q_48 = NULL;
      ATerm r_48 = NULL;
      t = term_k_26;
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
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_48)), term_l_26);
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
