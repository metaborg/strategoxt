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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_TestSuite_3;
Symbol sym_Name_1;
Symbol sym_Sort_1;
Symbol sym_File_1;
Symbol sym_Tests_1;
Symbol sym_Test_3;
Symbol sym_Descr_1;
Symbol sym_Success_0;
Symbol sym_Failure_0;
Symbol sym_String_1;
Symbol sym_File_1;
Symbol sym_TestResults_1;
Symbol sym_Success_0;
Symbol sym_Failure_0;
Symbol sym_ParseResult_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_TestSuite_3 = ATmakeSymbol("TestSuite", 3, ATfalse);
  ATprotectSymbol(sym_TestSuite_3);
  sym_Name_1 = ATmakeSymbol("Name", 1, ATfalse);
  ATprotectSymbol(sym_Name_1);
  sym_Sort_1 = ATmakeSymbol("Sort", 1, ATfalse);
  ATprotectSymbol(sym_Sort_1);
  sym_File_1 = ATmakeSymbol("File", 1, ATfalse);
  ATprotectSymbol(sym_File_1);
  sym_Tests_1 = ATmakeSymbol("Tests", 1, ATfalse);
  ATprotectSymbol(sym_Tests_1);
  sym_Test_3 = ATmakeSymbol("Test", 3, ATfalse);
  ATprotectSymbol(sym_Test_3);
  sym_Descr_1 = ATmakeSymbol("Descr", 1, ATfalse);
  ATprotectSymbol(sym_Descr_1);
  sym_Success_0 = ATmakeSymbol("Success", 0, ATfalse);
  ATprotectSymbol(sym_Success_0);
  sym_Failure_0 = ATmakeSymbol("Failure", 0, ATfalse);
  ATprotectSymbol(sym_Failure_0);
  sym_String_1 = ATmakeSymbol("String", 1, ATfalse);
  ATprotectSymbol(sym_String_1);
  sym_File_1 = ATmakeSymbol("File", 1, ATfalse);
  ATprotectSymbol(sym_File_1);
  sym_TestResults_1 = ATmakeSymbol("TestResults", 1, ATfalse);
  ATprotectSymbol(sym_TestResults_1);
  sym_Success_0 = ATmakeSymbol("Success", 0, ATfalse);
  ATprotectSymbol(sym_Success_0);
  sym_Failure_0 = ATmakeSymbol("Failure", 0, ATfalse);
  ATprotectSymbol(sym_Failure_0);
  sym_ParseResult_2 = ATmakeSymbol("ParseResult", 2, ATfalse);
  ATprotectSymbol(sym_ParseResult_2);
  init_constant_terms();
}
ATerm term_s_31;
ATerm term_f_31;
ATerm term_p_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_x_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_h_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_c_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_l_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
void init_constant_terms (void)
{
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-----------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("results testsuite ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("successes : ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("failures  : ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--parse-table", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("* OK   : test ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("* ERROR: test ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** Result:   ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** Expected: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Failure_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Success_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_g_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_i_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_ParseResult_2, term_e_11, term_u_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("executing testsuite ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" with ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" tests", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p FILE   Use parse table FILE (required)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_v_19);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_c_20);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_h_19);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_19);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_u_18, term_c_20);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_c_20);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_g_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_c_20);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm count_in_string_1 (ATerm, ATerm q_60 (ATerm));
ATerm echo_results_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm echo_report_0 (ATerm);
ATerm create_test_result_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm m_75 (ATerm));
ATerm xtc_transform_term_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm u_61 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm c_62 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm k_77 (ATerm));
ATerm repeat_1 (ATerm, ATerm e_79 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm b_62 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm d_62 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm union_1 (ATerm, ATerm a_73 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm m_62 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm l_75 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm o_54 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm parse_sglr_0 (ATerm);
ATerm finally_2 (ATerm, ATerm d_66 (ATerm), ATerm e_66 (ATerm));
ATerm print_0 (ATerm);
ATerm print_to_tmp_file_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm abs_test_file_0 (ATerm);
ATerm parse_helper_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm execute_test_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm y_68 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm));
ATerm length_0 (ATerm);
ATerm echo_start_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm h_76 (ATerm));
ATerm obsolete_1 (ATerm, ATerm v_76 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm w_75 (ATerm));
ATerm parse_unit_0 (ATerm);
ATerm parse_table_option_0 (ATerm);
ATerm parse_unit_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_76 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_76 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm b_75 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm c_75 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_73 (ATerm), ATerm s_73 (ATerm));
ATerm crush_2 (ATerm, ATerm p_72 (ATerm), ATerm q_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_61 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_80 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_82 (ATerm));
ATerm Program_1 (ATerm, ATerm n_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_67 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_76 (ATerm));
ATerm map_1 (ATerm, ATerm d_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_82 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_82 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm k_80 (ATerm), ATerm l_80 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm io_parse_unit_0 (ATerm);
ATerm main_0 (ATerm);
ATerm count_in_string_1 (ATerm t, ATerm q_60 (ATerm))
{
  t = filter_1(t, q_60);
  {
    t = length_0(t);
    t = int_to_string_0(t);
  }
  return(t);
}
ATerm echo_results_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,y_1 = NULL;
      i_1 = t;
      y_0 :
      if(match_cons(i_1, sym__2))
        {
          j_1 = ATgetArgument(i_1, 0);
          k_1 = ATgetArgument(i_1, 1);
          c_1 :
          if(match_cons(k_1, sym_TestResults_1))
            {
              y_1 = ATgetArgument(k_1, 0);
              {
                ATerm z_1 = NULL,t_2 = NULL;
                if(((d_1 != NULL) && (d_1 != j_1)))
                  _fail(j_1);
                else
                  d_1 = j_1;
                {
                  if(((e_1 != NULL) && (e_1 != y_1)))
                    _fail(y_1);
                  else
                    e_1 = y_1;
                  {
                    t = term_s_9;
                    {
                      t = echo_0(t);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(d_1));
                        {
                          t = conc_strings_0(t);
                          {
                            t = echo_0(t);
                            {
                              ATerm s_2 = NULL;
                              t = not_null(e_1);
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  ATerm a_2 = NULL;
                                  a_2 = t;
                                  c_0 :
                                  if(!(match_cons(a_2, sym_Success_0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = count_in_string_1(t, e_0);
                                {
                                  s_2 = t;
                                  if(((z_1 != NULL) && (z_1 != s_2)))
                                    _fail(s_2);
                                  else
                                    z_1 = s_2;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(z_1));
                                {
                                  t = conc_strings_0(t);
                                  {
                                    t = echo_0(t);
                                    {
                                      ATerm y_2 = NULL;
                                      t = not_null(e_1);
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          ATerm u_2 = NULL;
                                          u_2 = t;
                                          w_0 :
                                          if(!(match_cons(u_2, sym_Failure_0)))
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = count_in_string_1(t, f_0);
                                        {
                                          y_2 = t;
                                          if(((t_2 != NULL) && (t_2 != y_2)))
                                            _fail(y_2);
                                          else
                                            t_2 = y_2;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(t_2));
                                        {
                                          t = conc_strings_0(t);
                                          {
                                            t = echo_0(t);
                                            {
                                              t = term_s_9;
                                              t = echo_0(t);
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
                  }
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
    t = q_9;
    return(t);
  }
  t = if_verbose1_1(t, b_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_10;
  a_10 = t;
  {
    t = error_0(t);
    {
      t = term_f_10;
      t = exit_0(t);
    }
  }
  t = a_10;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_10;
      t = get_config_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        t = (ATerm) ATinsert(ATempty, term_n_10);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm echo_report_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
    q_3 = t;
    j_3 :
    if(match_cons(q_3, sym__4))
      {
        r_3 = ATgetArgument(q_3, 0);
        s_3 = ATgetArgument(q_3, 1);
        x_3 = ATgetArgument(q_3, 2);
        y_3 = ATgetArgument(q_3, 3);
        k_3 :
        if(match_cons(s_3, sym_Test_3))
          {
            t_3 = ATgetArgument(s_3, 0);
            v_3 = ATgetArgument(s_3, 1);
            w_3 = ATgetArgument(s_3, 2);
            l_3 :
            if(match_cons(t_3, sym_Descr_1))
              {
                u_3 = ATgetArgument(t_3, 0);
                {
                  ATerm z_3 = NULL;
                  if(((m_3 != NULL) && (m_3 != r_3)))
                    _fail(r_3);
                  else
                    m_3 = r_3;
                  {
                    if(((n_3 != NULL) && (n_3 != u_3)))
                      _fail(u_3);
                    else
                      n_3 = u_3;
                    {
                      if(((p_3 != NULL) && (p_3 != w_3)))
                        _fail(w_3);
                      else
                        p_3 = w_3;
                      {
                        if(((o_3 != NULL) && (o_3 != x_3)))
                          _fail(x_3);
                        else
                          o_3 = x_3;
                        {
                          if(((z_3 != NULL) && (z_3 != y_3)))
                            _fail(y_3);
                          else
                            z_3 = y_3;
                          {
                            t = not_null(z_3);
                            {
                              ATerm o_10;
                              o_10 = t;
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  ATerm a_4 = NULL;
                                  a_4 = t;
                                  f_3 :
                                  if(match_cons(a_4, sym_Success_0))
                                    {
                                      ATerm b_4 = NULL;
                                      ATerm c_4 = NULL;
                                      t = not_null(m_3);
                                      {
                                        t = int_to_string_0(t);
                                        {
                                          c_4 = t;
                                          if(((b_4 != NULL) && (b_4 != c_4)))
                                            _fail(c_4);
                                          else
                                            b_4 = c_4;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_10), not_null(n_3)), term_r_10), not_null(b_4)), term_q_10);
                                        {
                                          t = concat_strings_0(t);
                                          t = echo_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = try_1(t, q_0);
                              }
                              t = o_10;
                              {
                                ATerm t_10;
                                t_10 = t;
                                {
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm d_4 = NULL;
                                    d_4 = t;
                                    i_3 :
                                    if(match_cons(d_4, sym_Failure_0))
                                      {
                                        ATerm e_4 = NULL;
                                        ATerm f_4 = NULL;
                                        t = not_null(m_3);
                                        {
                                          t = int_to_string_0(t);
                                          {
                                            f_4 = t;
                                            if(((e_4 != NULL) && (e_4 != f_4)))
                                              _fail(f_4);
                                            else
                                              e_4 = f_4;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_10), not_null(n_3)), term_r_10), not_null(e_4)), term_y_10);
                                          {
                                            t = concat_strings_0(t);
                                            {
                                              t = echo_0(t);
                                              {
                                                t = not_null(o_3);
                                                {
                                                  ATerm s_0 (ATerm t)
                                                  {
                                                    t = term_z_10;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, s_0);
                                                  {
                                                    t = not_null(p_3);
                                                    {
                                                      ATerm t_0 (ATerm t)
                                                      {
                                                        t = term_a_11;
                                                        return(t);
                                                      }
                                                      t = debug_1(t, t_0);
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
                                  t = try_1(t, r_0);
                                }
                                t = t_10;
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
    return(t);
  }
  t = if_verbose1_1(t, p_0);
  return(t);
}
ATerm create_test_result_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  ATerm l_5 (ATerm t)
  {
    t = not_null(c_5);
    {
      ATerm c_11 = t;
      if((PushChoice() == 0))
        {
          ATerm f_5 = NULL;
          f_5 = t;
          q_4 :
          if(!(match_cons(f_5, sym_Success_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_11;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), not_null(c_5));
        {
          ATerm d_11 = t;
          if((PushChoice() == 0))
            {
              t = eq_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_11;
            }
        }
      }
    }
    t = term_e_11;
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = not_null(c_5);
    {
      ATerm k_11 = t;
      if((PushChoice() == 0))
        {
          ATerm i_5 = NULL;
          i_5 = t;
          r_4 :
          if(!(match_cons(i_5, sym_Success_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_11;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), not_null(c_5));
        t = eq_0(t);
      }
    }
    t = term_l_11;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = not_null(c_5);
    {
      ATerm m_11 = t;
      if((PushChoice() == 0))
        {
          ATerm k_5 = NULL;
          k_5 = t;
          s_4 :
          if(!(match_cons(k_5, sym_Failure_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_11;
        }
    }
    t = term_e_11;
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  y_4 = t;
  t_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      c_5 = ATgetArgument(y_4, 1);
      u_4 :
      if(match_cons(z_4, sym_ParseResult_2))
        {
          a_5 = ATgetArgument(z_4, 0);
          b_5 = ATgetArgument(z_4, 1);
          v_4 :
          if(match_cons(a_5, sym_Success_0))
            {
              w_4 :
              if(match_cons(c_5, sym_Success_0))
                {
                  ATerm r_11 = t;
                  int s_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_5(t);
                      LocalPopChoice(s_11);
                    }
                  else
                    {
                      t = r_11;
                      {
                        ATerm t_11 = t;
                        int u_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = m_5(t);
                            LocalPopChoice(u_11);
                          }
                        else
                          {
                            t = t_11;
                            t = n_5(t);
                          }
                      }
                    }
                }
              else
                {
                  ATerm v_11 = t;
                  int b_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_5(t);
                      LocalPopChoice(b_12);
                    }
                  else
                    {
                      t = v_11;
                      t = m_5(t);
                    }
                }
            }
          else
            {
              if(match_cons(a_5, sym_Failure_0))
                {
                  x_4 :
                  if(match_cons(c_5, sym_Failure_0))
                    {
                      ATerm c_12 = t;
                      int g_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_5(t);
                          LocalPopChoice(g_12);
                        }
                      else
                        {
                          t = c_12;
                          t = p_5(t);
                        }
                    }
                  else
                    {
                      t = o_5(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    ATerm h_12;
    h_12 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATinsert(CheckATermList(not_null(r_5)), term_j_12));
      t = call_0(t);
    }
    t = h_12;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, m_75, u_0);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, u_75, v_75);
    t = read_from_0(t);
  }
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym__2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      t = SSL_execvp(not_null(x_5), not_null(y_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_waitpid(not_null(d_6));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm n_6 = NULL;
  ATerm p_6 = NULL;
  n_6 = t;
  {
    t = fork_0(t);
    {
      p_6 = t;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 = NULL;
            r_6 = t;
            j_6 :
            if(match_int(r_6, 0))
              {
                t = not_null(n_6);
                t = u_61(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
              t = not_null(p_6);
              {
                t = waitpid_0(t);
                {
                  s_6 = t;
                  l_6 :
                  if(match_cons(s_6, sym_WaitStatus_3))
                    {
                      t_6 = ATgetArgument(s_6, 0);
                      u_6 = ATgetArgument(s_6, 1);
                      v_6 = ATgetArgument(s_6, 2);
                      m_6 :
                      if(match_int(t_6, 0))
                        {
                          t = not_null(n_6);
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
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      {
        ATerm v_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(e_7));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, v_0);
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
  ATerm j_7 = NULL;
  j_7 = t;
  t = SSL_table_keys(not_null(j_7));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_7 = NULL;
  p_7 = t;
  {
    t = table_keys_0(t);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm r_7 = NULL;
        ATerm t_7 = NULL;
        r_7 = t;
        {
          ATerm u_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), not_null(r_7));
          {
            t = table_get_0(t);
            {
              u_7 = t;
              if(((t_7 != NULL) && (t_7 != u_7)))
                _fail(u_7);
              else
                t_7 = u_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(t_7));
        }
        return(t);
      }
      t = map_1(t, x_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_62 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm n_12;
    n_12 = t;
    {
      ATerm z_7 = NULL;
      ATerm a_8 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), term_r_12);
        t = geq_0(t);
      }
    }
    t = n_12;
    t = c_62(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm s_12;
  s_12 = t;
  {
    ATerm d_8 = NULL;
    ATerm e_8 = NULL;
    e_8 = t;
    if(((d_8 != NULL) && (d_8 != e_8)))
      _fail(e_8);
    else
      d_8 = e_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(d_8));
      t = printnl_0(t);
    }
  }
  t = s_12;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_8 = NULL;
  ATerm m_8 = NULL,n_8 = NULL;
  k_8 = t;
  {
    ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_8)));
    {
      t = table_get_0(t);
      {
        o_8 = t;
        i_8 :
        if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
          {
            p_8 = ATgetFirst((ATermList) o_8);
            s_8 = (ATerm) ATgetNext((ATermList) o_8);
            j_8 :
            if(match_cons(p_8, sym__2))
              {
                q_8 = ATgetArgument(p_8, 0);
                r_8 = ATgetArgument(p_8, 1);
                {
                  if(((m_8 != NULL) && (m_8 != q_8)))
                    _fail(q_8);
                  else
                    m_8 = q_8;
                  if(((n_8 != NULL) && (n_8 != r_8)))
                    _fail(r_8);
                  else
                    n_8 = r_8;
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
    t = not_null(n_8);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      {
        ATerm e_9 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_9)));
        {
          t = table_get_0(t);
          {
            ATerm a_1 (ATerm t)
            {
              ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
              f_9 = t;
              x_8 :
              if(match_cons(f_9, sym__2))
                {
                  g_9 = ATgetArgument(f_9, 0);
                  h_9 = ATgetArgument(f_9, 1);
                  {
                    if(((b_9 != NULL) && (b_9 != g_9)))
                      _fail(g_9);
                    else
                      b_9 = g_9;
                    if(((e_9 != NULL) && (e_9 != h_9)))
                      _fail(h_9);
                    else
                      e_9 = h_9;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, a_1);
          }
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
ATerm filter_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm w_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = w_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              t = filter_1(t, k_77);
              return(t);
            }
            t = Cons_2(t, k_77, b_1);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
              m_9 = t;
              l_9 :
              if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
                {
                  n_9 = ATgetFirst((ATermList) m_9);
                  o_9 = (ATerm) ATgetNext((ATermList) m_9);
                  {
                    t = not_null(o_9);
                    t = filter_1(t, k_77);
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
ATerm repeat_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = e_79(t);
      t = r_9(t);
      return(t);
    }
    t = try_1(t, f_1);
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_h_13;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm i_13 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_13;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, g_1);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm j_13;
    j_13 = t;
    {
      ATerm t_9 = NULL;
      ATerm u_9 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          u_9 = t;
          if(((t_9 != NULL) && (t_9 != u_9)))
            _fail(u_9);
          else
            t_9 = u_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), term_k_13);
        t = geq_0(t);
      }
    }
    t = j_13;
    t = b_62(t);
    return(t);
  }
  t = try_1(t, h_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm l_13;
    l_13 = t;
    {
      ATerm x_9 = NULL;
      ATerm y_9 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), term_m_13);
        t = geq_0(t);
      }
    }
    t = l_13;
    t = d_62(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym__2))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      if(((d_10 != NULL) && (d_10 != e_10)))
        _fail(e_10);
      else
        d_10 = e_10;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  k_10 = t;
  j_10 :
  if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
    {
      l_10 = ATgetFirst((ATermList) k_10);
      m_10 = (ATerm) ATgetNext((ATermList) k_10);
      {
        t = f_73(t);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm p_10 = NULL;
            p_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(p_10));
              t = e_73(t);
            }
            return(t);
          }
          t = fetch_1(t, m_1);
        }
        t = not_null(m_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        t = not_null(w_10);
        {
          ATerm b_11 (ATerm t)
          {
            ATerm n_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_10);
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
                      ATerm n_1 (ATerm t)
                      {
                        t = not_null(x_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_73, n_1);
                      t = b_11(t);
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      t = Cons_2(t, _id, b_11);
                    }
                }
              }
            return(t);
          }
          t = b_11(t);
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
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym__3))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      j_11 = ATgetArgument(g_11, 2);
      {
        ATerm c_14;
        c_14 = t;
        {
          ATerm n_11 = NULL;
          ATerm o_11 = NULL,q_11 = NULL;
          ATerm p_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(i_11));
          {
            ATerm d_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
                t = (ATerm) ATempty;
              }
            {
              p_11 = t;
              if(((o_11 != NULL) && (o_11 != p_11)))
                _fail(p_11);
              else
                o_11 = p_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(j_11));
            {
              t = union_0(t);
              {
                q_11 = t;
                if(((n_11 != NULL) && (n_11 != q_11)))
                  _fail(q_11);
                else
                  n_11 = q_11;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_11), not_null(i_11), not_null(n_11));
            t = set_0(t);
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
ATerm table_putlist_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym__2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        t = not_null(a_12);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
            d_12 = t;
            w_11 :
            if(match_cons(d_12, sym__2))
              {
                e_12 = ATgetArgument(d_12, 0);
                f_12 = ATgetArgument(d_12, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(z_11), not_null(e_12), not_null(f_12));
                  t = m_62(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_1);
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
  ATerm m_12 = NULL;
  ATerm o_12 = NULL;
  m_12 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        t = term_f_14;
        return(t);
      }
      t = debug_1(t, q_1);
      return(t);
    }
    t = if_verbose5_1(t, p_1);
    {
      ATerm g_14 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_12, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_12)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_14;
        }
      {
        ATerm h_14;
        h_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_i_14, (ATerm) ATinsert(ATempty, not_null(m_12)));
          t = table_put_0(t);
        }
        t = h_14;
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              t = term_l_14;
              return(t);
            }
            t = debug_1(t, s_1);
            return(t);
          }
          t = if_verbose4_1(t, r_1);
          {
            ATerm q_14 = t;
            int r_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(r_14);
              }
            else
              {
                t = q_14;
                t = (ATerm) ATempty;
              }
            {
              ATerm t_1 (ATerm t)
              {
                ATerm u_1 (ATerm t)
                {
                  t = term_s_14;
                  return(t);
                }
                t = say_1(t, u_1);
                return(t);
              }
              t = if_verbose6_1(t, t_1);
              {
                ATerm p_12 = NULL;
                p_12 = t;
                if(((o_12 != NULL) && (o_12 != p_12)))
                  _fail(p_12);
                else
                  o_12 = p_12;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_12, not_null(o_12));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm v_1 (ATerm t)
                      {
                        ATerm w_1 (ATerm t)
                        {
                          t = term_t_14;
                          return(t);
                        }
                        t = say_1(t, w_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, v_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_v_12, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_12)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm b_2 (ATerm t)
                              {
                                t = term_s_14;
                                return(t);
                              }
                              t = say_1(t, b_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, x_1);
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
  ATerm t_12 = NULL;
  t_12 = t;
  t = SSL_getenv(not_null(t_12));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_14;
      t = get_config_0(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_15;
            t = getenv_0(t);
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      t = term_i_15;
      return(t);
    }
    t = debug_1(t, d_2);
    return(t);
  }
  t = if_verbose5_1(t, c_2);
  {
    ATerm j_15;
    j_15 = t;
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_15;
          t = table_get_0(t);
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_15;
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          t = term_n_15;
          return(t);
        }
        t = debug_1(t, f_2);
        return(t);
      }
      t = if_verbose5_1(t, e_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm o_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = debug_1(t, h_2);
        return(t);
      }
      t = if_verbose5_1(t, g_2);
      {
        t = xtc_load_0(t);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm i_2 (ATerm t)
            {
              ATerm j_2 (ATerm t)
              {
                t = term_c_16;
                return(t);
              }
              t = debug_1(t, j_2);
              return(t);
            }
            t = if_verbose5_1(t, i_2);
          }
        }
      }
      LocalPopChoice(b_16);
    }
  else
    {
      t = o_15;
      {
        ATerm x_12 = NULL;
        ATerm y_12 = NULL;
        y_12 = t;
        if(((x_12 != NULL) && (x_12 != y_12)))
          _fail(y_12);
        else
          x_12 = y_12;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_16), not_null(x_12)), term_j_16);
          {
            t = error_0(t);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_v_12;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm l_2 (ATerm t)
                    {
                      t = term_l_16;
                      return(t);
                    }
                    t = debug_1(t, l_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, k_2);
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
ATerm xtc_command_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm c_13 = NULL;
  ATerm m_16;
  m_16 = t;
  {
    ATerm d_13 = NULL;
    t = l_75(t);
    {
      t = xtc_find_warning_0(t);
      {
        d_13 = t;
        if(((c_13 != NULL) && (c_13 != d_13)))
          _fail(d_13);
        else
          c_13 = d_13;
      }
    }
  }
  t = m_16;
  {
    ATerm n_16;
    n_16 = t;
    {
      ATerm e_13 = NULL;
      ATerm f_13 = NULL;
      f_13 = t;
      if(((e_13 != NULL) && (e_13 != f_13)))
        _fail(f_13);
      else
        e_13 = f_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(e_13));
        t = call_0(t);
      }
    }
    t = n_16;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_13)), term_o_16));
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_13)), term_o_16), not_null(q_13)), term_v_16));
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
      ATerm w_16;
      w_16 = t;
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
      t = w_16;
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
ATerm FILE_1 (ATerm t, ATerm o_54 (ATerm))
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
            t = o_54(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm x_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(h_17);
        }
      else
        {
          t = c_17;
          t = stdin_0(t);
        }
      LocalPopChoice(b_17);
      t = xtc_transform_file_2(t, n_75, o_75);
    }
  else
    {
      t = x_16;
      t = xtc_transform_term_2(t, n_75, o_75);
    }
  return(t);
}
ATerm parse_sglr_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
      t_15 = t;
      p_15 :
      if(match_cons(t_15, sym__2))
        {
          u_15 = ATgetArgument(t_15, 0);
          v_15 = ATgetArgument(t_15, 1);
          q_15 :
          if(match_cons(v_15, sym_File_1))
            {
              w_15 = ATgetArgument(v_15, 0);
              {
                if(((s_15 != NULL) && (s_15 != u_15)))
                  _fail(u_15);
                else
                  s_15 = u_15;
                {
                  if(((r_15 != NULL) && (r_15 != w_15)))
                    _fail(w_15);
                  else
                    r_15 = w_15;
                  {
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_15));
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = term_k_17;
                        return(t);
                      }
                      ATerm n_2 (ATerm t)
                      {
                        t = not_null(s_15);
                        return(t);
                      }
                      t = xtc_transform_2(t, m_2, n_2);
                      {
                        ATerm l_17 = t;
                        int m_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_15 = NULL;
                            ATerm o_2 (ATerm t)
                            {
                              t = term_n_17;
                              return(t);
                            }
                            t = xtc_transform_1(t, o_2);
                            {
                              ATerm y_15 = NULL;
                              t = read_from_0(t);
                              {
                                y_15 = t;
                                if(((x_15 != NULL) && (x_15 != y_15)))
                                  _fail(y_15);
                                else
                                  x_15 = y_15;
                              }
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_l_11, not_null(x_15));
                            }
                            LocalPopChoice(m_17);
                          }
                        else
                          {
                            t = l_17;
                            {
                              ATerm z_15 = NULL;
                              ATerm a_16 = NULL;
                              t = read_from_0(t);
                              {
                                a_16 = t;
                                if(((z_15 != NULL) && (z_15 != a_16)))
                                  _fail(a_16);
                                else
                                  z_15 = a_16;
                              }
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_e_11, not_null(z_15));
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
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      t = term_v_17;
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm d_66 (ATerm), ATerm e_66 (ATerm))
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_66(t);
      LocalPopChoice(z_17);
      {
        ATerm b_18;
        b_18 = t;
        t = e_66(t);
        t = b_18;
      }
    }
  else
    {
      t = y_17;
      {
        ATerm e_18;
        e_18 = t;
        t = e_66(t);
        t = e_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm f_18;
        f_18 = t;
        t = SSL_print(not_null(h_16), not_null(i_16));
        t = f_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm print_to_tmp_file_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,t_16 = NULL;
  ATerm g_18;
  g_18 = t;
  {
    ATerm r_16 = NULL;
    ATerm s_16 = NULL;
    t = new_file_0(t);
    {
      r_16 = t;
      {
        if(((p_16 != NULL) && (p_16 != r_16)))
          _fail(r_16);
        else
          p_16 = r_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), term_h_18);
          {
            t = open_file_0(t);
            {
              s_16 = t;
              if(((q_16 != NULL) && (q_16 != s_16)))
                _fail(s_16);
              else
                q_16 = s_16;
            }
          }
        }
      }
    }
  }
  t = g_18;
  {
    ATerm u_16 = NULL;
    u_16 = t;
    if(((t_16 != NULL) && (t_16 != u_16)))
      _fail(u_16);
    else
      t_16 = u_16;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), (ATerm) ATinsert(ATempty, not_null(t_16)));
      {
        t = print_0(t);
        {
          t = not_null(p_16);
          {
            t = close_file_0(t);
            t = not_null(p_16);
          }
        }
      }
    }
  }
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_17 (ATerm t)
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, a_17);
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm z_16 = NULL;
                  z_16 = t;
                  y_16 :
                  if(!(match_int(z_16, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm q_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, p_2, q_2);
              }
            }
          return(t);
        }
        t = a_17(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm abs_test_file_0 (ATerm t)
{
  ATerm d_17 = NULL,f_17 = NULL;
  ATerm r_18;
  r_18 = t;
  {
    ATerm e_17 = NULL;
    e_17 = t;
    if(((d_17 != NULL) && (d_17 != e_17)))
      _fail(e_17);
    else
      d_17 = e_17;
  }
  t = r_18;
  {
    ATerm g_17 = NULL;
    t = term_v_16;
    {
      t = get_config_0(t);
      {
        t = get_path_0(t);
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(d_17));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm parse_helper_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  q_17 = t;
  o_17 :
  if(match_cons(q_17, sym__2))
    {
      r_17 = ATgetArgument(q_17, 0);
      s_17 = ATgetArgument(q_17, 1);
      p_17 :
      if(match_cons(s_17, sym_File_1))
        {
          t_17 = ATgetArgument(s_17, 0);
          {
            ATerm w_17 = NULL;
            ATerm x_17 = NULL;
            t = not_null(t_17);
            {
              t = abs_test_file_0(t);
              {
                x_17 = t;
                if(((w_17 != NULL) && (w_17 != x_17)))
                  _fail(x_17);
                else
                  w_17 = x_17;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), (ATerm) ATmakeAppl(sym_File_1, not_null(w_17)));
              t = parse_sglr_0(t);
            }
          }
        }
      else
        {
          if(match_cons(s_17, sym_String_1))
            {
              t_17 = ATgetArgument(s_17, 0);
              {
                ATerm a_18 = NULL;
                t = not_null(t_17);
                {
                  t = print_to_tmp_file_0(t);
                  {
                    a_18 = t;
                    {
                      ATerm r_2 (ATerm t)
                      {
                        ATerm c_18 = NULL;
                        ATerm d_18 = NULL;
                        d_18 = t;
                        if(((c_18 != NULL) && (c_18 != d_18)))
                          _fail(d_18);
                        else
                          c_18 = d_18;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), (ATerm) ATmakeAppl(sym_File_1, not_null(c_18)));
                          t = parse_sglr_0(t);
                        }
                        return(t);
                      }
                      ATerm v_2 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, not_null(a_18));
                        t = rm_files_0(t);
                        return(t);
                      }
                      t = finally_2(t, r_2, v_2);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__3))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      o_18 = ATgetArgument(l_18, 2);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_18)), term_u_18), not_null(n_18)), term_t_18), term_s_18), not_null(o_18));
        t = parse_helper_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm execute_test_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym__2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      {
        ATerm j_19 = NULL;
        ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
        t = not_null(g_19);
        {
          j_19 = t;
          {
            l_19 = t;
            b_19 :
            if(match_cons(l_19, sym_Test_3))
              {
                m_19 = ATgetArgument(l_19, 0);
                o_19 = ATgetArgument(l_19, 1);
                p_19 = ATgetArgument(l_19, 2);
                c_19 :
                if(match_cons(m_19, sym_Descr_1))
                  {
                    n_19 = ATgetArgument(m_19, 0);
                    {
                      ATerm c_21 = NULL,e_21 = NULL,g_21 = NULL;
                      ATerm v_18;
                      v_18 = t;
                      {
                        ATerm d_21 = NULL;
                        t = r_60(t);
                        {
                          d_21 = t;
                          if(((c_21 != NULL) && (c_21 != d_21)))
                            _fail(d_21);
                          else
                            c_21 = d_21;
                        }
                      }
                      t = v_18;
                      {
                        ATerm f_21 = NULL;
                        t = s_60(t);
                        {
                          f_21 = t;
                          if(((e_21 != NULL) && (e_21 != f_21)))
                            _fail(f_21);
                          else
                            e_21 = f_21;
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(c_21), not_null(e_21), not_null(o_19));
                          {
                            ATerm i_21 = NULL;
                            t = parse_0(t);
                            {
                              g_21 = t;
                              {
                                ATerm j_21 = NULL;
                                j_21 = t;
                                if(((i_21 != NULL) && (i_21 != j_21)))
                                  _fail(j_21);
                                else
                                  i_21 = j_21;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(p_19));
                                  {
                                    t = create_test_result_0(t);
                                    {
                                      ATerm w_18;
                                      w_18 = t;
                                      {
                                        ATerm k_21 = NULL;
                                        ATerm l_21 = NULL;
                                        l_21 = t;
                                        if(((k_21 != NULL) && (k_21 != l_21)))
                                          _fail(l_21);
                                        else
                                          k_21 = l_21;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(f_19), not_null(j_19), not_null(g_21), not_null(k_21));
                                          t = echo_report_0(t);
                                        }
                                      }
                                      t = w_18;
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm w_21 = NULL;
  ATerm c_22 = NULL;
  c_22 = t;
  if(((w_21 != NULL) && (w_21 != c_22)))
    _fail(c_22);
  else
    w_21 = c_22;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), term_f_10);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm o_22 = NULL;
  ATerm p_22 = NULL;
  p_22 = t;
  if(((o_22 != NULL) && (o_22 != p_22)))
    _fail(p_22);
  else
    o_22 = p_22;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(o_22));
    {
      ATerm k_23 (ATerm t)
      {
        ATerm q_22 = NULL,r_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
        q_22 = t;
        m_22 :
        if(match_cons(q_22, sym__2))
          {
            r_22 = ATgetArgument(q_22, 0);
            x_22 = ATgetArgument(q_22, 1);
            n_22 :
            if(((ATgetType(x_22) == AT_LIST) && ATisEmpty(x_22)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
                  {
                    y_22 = ATgetFirst((ATermList) x_22);
                    z_22 = (ATerm) ATgetNext((ATermList) x_22);
                    {
                      ATerm d_23 = NULL,f_23 = NULL;
                      ATerm x_18;
                      x_18 = t;
                      {
                        ATerm e_23 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(y_22));
                        {
                          t = y_68(t);
                          {
                            e_23 = t;
                            if(((d_23 != NULL) && (d_23 != e_23)))
                              _fail(e_23);
                            else
                              d_23 = e_23;
                          }
                        }
                      }
                      t = x_18;
                      {
                        ATerm g_23 = NULL,i_23 = NULL;
                        ATerm h_23 = NULL;
                        t = not_null(r_22);
                        {
                          t = inc_0(t);
                          {
                            h_23 = t;
                            if(((g_23 != NULL) && (g_23 != h_23)))
                              _fail(h_23);
                            else
                              g_23 = h_23;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(z_22));
                          {
                            t = k_23(t);
                            {
                              i_23 = t;
                              if(((f_23 != NULL) && (f_23 != i_23)))
                                _fail(i_23);
                              else
                                f_23 = i_23;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(f_23)), not_null(d_23));
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
        return(t);
      }
      t = k_23(t);
    }
  }
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = SSL_int_to_string(not_null(a_24));
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm))
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_73(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
        q_24 = t;
        p_24 :
        if(((ATgetType(q_24) == AT_LIST) && !(ATisEmpty(q_24))))
          {
            r_24 = ATgetFirst((ATermList) q_24);
            s_24 = (ATerm) ATgetNext((ATermList) q_24);
            {
              ATerm v_24 = NULL,x_24 = NULL;
              ATerm a_19;
              a_19 = t;
              {
                ATerm w_24 = NULL;
                t = not_null(r_24);
                {
                  t = v_73(t);
                  {
                    w_24 = t;
                    if(((v_24 != NULL) && (v_24 != w_24)))
                      _fail(w_24);
                    else
                      v_24 = w_24;
                  }
                }
              }
              t = a_19;
              {
                ATerm y_24 = NULL;
                t = not_null(s_24);
                {
                  t = foldr_3(t, t_73, u_73, v_73);
                  {
                    y_24 = t;
                    if(((x_24 != NULL) && (x_24 != y_24)))
                      _fail(y_24);
                    else
                      x_24 = y_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), not_null(x_24));
                  t = u_73(t);
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
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = term_h_19;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_f_10;
    return(t);
  }
  t = foldr_3(t, w_2, add_0, x_2);
  return(t);
}
ATerm echo_start_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm i_19;
    i_19 = t;
    {
      ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
      j_25 = t;
      e_25 :
      if(match_cons(j_25, sym_TestSuite_3))
        {
          k_25 = ATgetArgument(j_25, 0);
          m_25 = ATgetArgument(j_25, 1);
          n_25 = ATgetArgument(j_25, 2);
          f_25 :
          if(match_cons(k_25, sym_Name_1))
            {
              l_25 = ATgetArgument(k_25, 0);
              g_25 :
              if(match_cons(n_25, sym_Tests_1))
                {
                  o_25 = ATgetArgument(n_25, 0);
                  {
                    ATerm p_25 = NULL;
                    if(((h_25 != NULL) && (h_25 != l_25)))
                      _fail(l_25);
                    else
                      h_25 = l_25;
                    {
                      if(((i_25 != NULL) && (i_25 != o_25)))
                        _fail(o_25);
                      else
                        i_25 = o_25;
                      {
                        t = term_s_9;
                        {
                          t = echo_0(t);
                          {
                            ATerm q_25 = NULL;
                            t = not_null(i_25);
                            {
                              t = length_0(t);
                              {
                                t = int_to_string_0(t);
                                {
                                  q_25 = t;
                                  if(((p_25 != NULL) && (p_25 != q_25)))
                                    _fail(q_25);
                                  else
                                    p_25 = q_25;
                                }
                              }
                            }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_19), not_null(p_25)), term_q_19), not_null(h_25)), term_k_19);
                              {
                                t = concat_strings_0(t);
                                {
                                  t = echo_0(t);
                                  {
                                    t = term_s_9;
                                    t = echo_0(t);
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
      else
        {
          _fail(t);
        }
    }
    t = i_19;
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  t = SSL_close_file(not_null(u_25));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      t = SSL_WriteToBinaryFile(not_null(f_26), not_null(g_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm p_26 = NULL,q_26 = NULL,u_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym__2))
    {
      q_26 = ATgetArgument(p_26, 0);
      u_26 = ATgetArgument(p_26, 1);
      {
        ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
        ATerm s_19;
        s_19 = t;
        {
          ATerm b_27 = NULL;
          ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
          t = h_76(t);
          {
            b_27 = t;
            {
              if(((y_26 != NULL) && (y_26 != b_27)))
                _fail(b_27);
              else
                y_26 = b_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_26), not_null(q_26), not_null(u_26));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), term_v_19);
                        t = table_get_0(t);
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = t_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_27 = t;
                      n_26 :
                      if(((ATgetType(c_27) == AT_LIST) && !(ATisEmpty(c_27))))
                        {
                          d_27 = ATgetFirst((ATermList) c_27);
                          e_27 = (ATerm) ATgetNext((ATermList) c_27);
                          {
                            if(((z_26 != NULL) && (z_26 != d_27)))
                              _fail(d_27);
                            else
                              z_26 = d_27;
                            {
                              if(((a_27 != NULL) && (a_27 != e_27)))
                                _fail(e_27);
                              else
                                a_27 = e_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_26), term_v_19, (ATerm) ATinsert(CheckATermList(not_null(a_27)), (ATerm) ATinsert(CheckATermList(not_null(z_26)), not_null(q_26))));
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
        t = s_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm w_19;
  w_19 = t;
  {
    t = v_76(t);
    {
      ATerm a_3 (ATerm t)
      {
        t = term_x_19;
        return(t);
      }
      t = debug_1(t, a_3);
    }
  }
  t = w_19;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
      r_27 = t;
      j_27 :
      if(match_cons(r_27, sym__2))
        {
          s_27 = ATgetArgument(r_27, 0);
          t_27 = ATgetArgument(r_27, 1);
          {
            if(((q_27 != NULL) && (q_27 != s_27)))
              _fail(s_27);
            else
              q_27 = s_27;
            if(((p_27 != NULL) && (p_27 != t_27)))
              _fail(t_27);
            else
              p_27 = t_27;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_19);
      t = SSL_open_file(not_null(q_27), not_null(p_27));
    }
  else
    {
      t = y_19;
      {
        ATerm u_27 = NULL;
        ATerm v_27 = NULL;
        ATerm b_3 (ATerm t)
        {
          t = term_a_20;
          return(t);
        }
        t = obsolete_1(t, b_3);
        {
          u_27 = t;
          {
            if(((q_27 != NULL) && (q_27 != u_27)))
              _fail(u_27);
            else
              q_27 = u_27;
            {
              ATerm b_20;
              b_20 = t;
              {
                ATerm w_27 = NULL;
                t = term_h_18;
                {
                  w_27 = t;
                  if(((v_27 != NULL) && (v_27 != w_27)))
                    _fail(w_27);
                  else
                    v_27 = w_27;
                }
              }
              t = b_20;
              t = SSL_open_file(not_null(q_27), not_null(v_27));
            }
          }
        }
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
  ATerm b_28 = NULL;
  ATerm c_28 = NULL;
  t = term_c_20;
  {
    t = new_0(t);
    {
      c_28 = t;
      if(((b_28 != NULL) && (b_28 != c_28)))
        _fail(c_28);
      else
        b_28 = c_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_d_20);
    {
      t = conc_strings_0(t);
      {
        ATerm c_3 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, c_3);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm g_28 = NULL;
  t = new_file_0(t);
  {
    g_28 = t;
    {
      ATerm e_20;
      e_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_28), term_h_18);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_28), term_c_20);
            {
              ATerm d_3 (ATerm t)
              {
                t = term_f_20;
                return(t);
              }
              t = assert_1(t, d_3);
            }
          }
        }
      }
      t = e_20;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm l_28 = NULL;
  ATerm n_28 = NULL;
  l_28 = t;
  {
    ATerm o_28 = NULL;
    t = xtc_new_file_0(t);
    {
      o_28 = t;
      {
        if(((n_28 != NULL) && (n_28 != o_28)))
          _fail(o_28);
        else
          n_28 = o_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), not_null(l_28));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(n_28);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_28));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL;
      t_28 = t;
      {
        if(((s_28 != NULL) && (s_28 != t_28)))
          _fail(t_28);
        else
          s_28 = t_28;
        t = SSL_ReadFromFile(not_null(s_28));
      }
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm e_3 (ATerm t)
        {
          t = term_i_20;
          return(t);
        }
        t = debug_1(t, e_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm x_28 = NULL;
  ATerm z_28 = NULL;
  x_28 = t;
  {
    ATerm j_20;
    j_20 = t;
    {
      ATerm a_29 = NULL;
      t = term_k_20;
      {
        a_29 = t;
        if(((z_28 != NULL) && (z_28 != a_29)))
          _fail(a_29);
        else
          z_28 = a_29;
      }
    }
    t = j_20;
    {
      t = SSL_open_file(not_null(x_28), not_null(z_28));
      t = SSL_close_file(not_null(x_28));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym_stdin_0))
    {
      ATerm k_29 = NULL;
      ATerm l_29 = NULL;
      t = term_l_20;
      {
        t = ReadFromFile_0(t);
        {
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
        }
      }
      t = not_null(k_29);
    }
  else
    {
      if(match_cons(i_29, sym_FILE_1))
        {
          j_29 = ATgetArgument(i_29, 0);
          {
            ATerm n_29 = NULL;
            ATerm o_29 = NULL;
            t = not_null(j_29);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  o_29 = t;
                  if(((n_29 != NULL) && (n_29 != o_29)))
                    _fail(o_29);
                  else
                    n_29 = o_29;
                }
              }
            }
            t = not_null(n_29);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm w_75 (ATerm))
{
  t = read_from_0(t);
  {
    t = w_75(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm parse_unit_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  ATerm g_3 (ATerm t)
  {
    ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
    t = echo_start_0(t);
    {
      c_30 = t;
      w_29 :
      if(match_cons(c_30, sym_TestSuite_3))
        {
          d_30 = ATgetArgument(c_30, 0);
          f_30 = ATgetArgument(c_30, 1);
          h_30 = ATgetArgument(c_30, 2);
          x_29 :
          if(match_cons(d_30, sym_Name_1))
            {
              e_30 = ATgetArgument(d_30, 0);
              y_29 :
              if(match_cons(f_30, sym_Sort_1))
                {
                  g_30 = ATgetArgument(f_30, 0);
                  z_29 :
                  if(match_cons(h_30, sym_Tests_1))
                    {
                      i_30 = ATgetArgument(h_30, 0);
                      {
                        ATerm j_30 = NULL,k_30 = NULL;
                        if(((b_30 != NULL) && (b_30 != e_30)))
                          _fail(e_30);
                        else
                          b_30 = e_30;
                        {
                          if(((a_30 != NULL) && (a_30 != g_30)))
                            _fail(g_30);
                          else
                            a_30 = g_30;
                          {
                            if(((j_30 != NULL) && (j_30 != i_30)))
                              _fail(i_30);
                            else
                              j_30 = i_30;
                            {
                              t = not_null(j_30);
                              {
                                ATerm h_3 (ATerm t)
                                {
                                  ATerm g_4 (ATerm t)
                                  {
                                    t = not_null(a_30);
                                    return(t);
                                  }
                                  t = execute_test_2(t, g_4, get_parse_table_0);
                                  return(t);
                                }
                                t = map_with_index_1(t, h_3);
                                {
                                  ATerm l_30 = NULL;
                                  l_30 = t;
                                  if(((k_30 != NULL) && (k_30 != l_30)))
                                    _fail(l_30);
                                  else
                                    k_30 = l_30;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_TestResults_1, not_null(k_30));
                                    {
                                      ATerm m_20;
                                      m_20 = t;
                                      {
                                        ATerm m_30 = NULL;
                                        ATerm n_30 = NULL;
                                        n_30 = t;
                                        if(((m_30 != NULL) && (m_30 != n_30)))
                                          _fail(n_30);
                                        else
                                          m_30 = n_30;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), not_null(m_30));
                                          t = echo_results_0(t);
                                        }
                                      }
                                      t = m_20;
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
      else
        {
          _fail(t);
        }
    }
    return(t);
  }
  t = xtc_io_transform_1(t, g_3);
  return(t);
}
ATerm parse_table_option_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm t_30 = NULL;
    t_30 = t;
    r_30 :
    if(!(match_string(t_30, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm n_20;
    n_20 = t;
    {
      ATerm u_30 = NULL;
      ATerm v_30 = NULL;
      v_30 = t;
      if(((u_30 != NULL) && (u_30 != v_30)))
        _fail(v_30);
      else
        u_30 = v_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(u_30));
        t = set_config_0(t);
      }
    }
    t = n_20;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_o_20;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm parse_unit_options_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      t = parse_table_option_0(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      t = SSL_copy(not_null(a_31), not_null(b_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_stderr_0))
    {
      ATerm m_31 = NULL,q_31 = NULL;
      ATerm r_20;
      r_20 = t;
      {
        ATerm p_31 = NULL;
        t = SSLgetAnnotations(not_null(k_31));
        {
          p_31 = t;
          if(((m_31 != NULL) && (m_31 != p_31)))
            _fail(p_31);
          else
            m_31 = p_31;
        }
      }
      t = r_20;
      {
        ATerm u_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(m_31));
        {
          u_31 = t;
          if(((q_31 != NULL) && (q_31 != u_31)))
            _fail(u_31);
          else
            q_31 = u_31;
        }
        t = not_null(q_31);
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
  ATerm c_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_stdout_0))
    {
      ATerm e_32 = NULL,g_32 = NULL;
      ATerm s_20;
      s_20 = t;
      {
        ATerm f_32 = NULL;
        t = SSLgetAnnotations(not_null(c_32));
        {
          f_32 = t;
          if(((e_32 != NULL) && (e_32 != f_32)))
            _fail(f_32);
          else
            e_32 = f_32;
        }
      }
      t = s_20;
      {
        ATerm h_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(e_32));
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
        t = not_null(g_32);
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
  ATerm x_32 = NULL,y_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym_FILE_1))
    {
      y_32 = ATgetArgument(x_32, 0);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_33 = NULL;
            ATerm b_33 = NULL;
            t = m_0(t);
            {
              b_33 = t;
              {
                if(((a_33 != NULL) && (a_33 != b_33)))
                  _fail(b_33);
                else
                  a_33 = b_33;
                {
                  ATerm v_20 = t;
                  int w_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(w_20);
                    }
                  else
                    {
                      t = v_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), not_null(a_33));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_32));
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_33 = NULL;
                  ATerm e_33 = NULL;
                  t = m_0(t);
                  {
                    e_33 = t;
                    {
                      if(((d_33 != NULL) && (d_33 != e_33)))
                        _fail(e_33);
                      else
                        d_33 = e_33;
                      {
                        ATerm z_20 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_21 = t;
                            int b_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(b_21);
                              }
                            else
                              {
                                t = a_21;
                                {
                                  ATerm h_21 = t;
                                  int m_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(m_21);
                                    }
                                  else
                                    {
                                      t = h_21;
                                      {
                                        ATerm f_33 = NULL;
                                        f_33 = t;
                                        if(((y_32 != NULL) && (y_32 != f_33)))
                                          _fail(f_33);
                                        else
                                          y_32 = f_33;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = z_20;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), not_null(d_33));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_32));
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  {
                    ATerm h_33 = NULL;
                    t = m_0(t);
                    {
                      h_33 = t;
                      if(((y_32 != NULL) && (y_32 != h_33)))
                        _fail(h_33);
                      else
                        y_32 = h_33;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_32));
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
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
    {
      s_33 = ATgetFirst((ATermList) r_33);
      t_33 = (ATerm) ATgetNext((ATermList) r_33);
      t = not_null(t_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_33 = NULL,k_34 = NULL,l_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym__2))
    {
      k_34 = ATgetArgument(z_33, 0);
      l_34 = ATgetArgument(z_33, 1);
      {
        ATerm n_21;
        n_21 = t;
        {
          ATerm p_34 = NULL;
          ATerm s_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_34), not_null(l_34));
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                t = (ATerm) ATempty;
              }
            {
              s_34 = t;
              if(((p_34 != NULL) && (p_34 != s_34)))
                _fail(s_34);
              else
                p_34 = s_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_34), not_null(l_34), not_null(p_34));
            t = table_put_0(t);
          }
        }
        t = n_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    ATerm q_35 = NULL;
    ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
    t = e_76(t);
    {
      q_35 = t;
      {
        if(((p_35 != NULL) && (p_35 != q_35)))
          _fail(q_35);
        else
          p_35 = q_35;
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_35), term_v_19);
              t = table_get_0(t);
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_35 = t;
            c_35 :
            if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
              {
                s_35 = ATgetFirst((ATermList) r_35);
                t_35 = (ATerm) ATgetNext((ATermList) r_35);
                {
                  if(((o_35 != NULL) && (o_35 != s_35)))
                    _fail(s_35);
                  else
                    o_35 = s_35;
                  {
                    if(((n_35 != NULL) && (n_35 != t_35)))
                      _fail(t_35);
                    else
                      n_35 = t_35;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_35), term_v_19, not_null(n_35));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_35);
                          {
                            ATerm k_4 (ATerm t)
                            {
                              ATerm u_35 = NULL;
                              u_35 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_35), not_null(u_35));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_4);
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
  t = q_21;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  t = SSL_remove(not_null(e_36));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_66(t);
      t = c_66(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        t = c_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_76 (ATerm))
{
  ATerm p_36 = NULL;
  ATerm v_21;
  v_21 = t;
  {
    ATerm q_36 = NULL;
    ATerm r_36 = NULL;
    t = d_76(t);
    {
      q_36 = t;
      {
        if(((p_36 != NULL) && (p_36 != q_36)))
          _fail(q_36);
        else
          p_36 = q_36;
        {
          ATerm w_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), term_v_19);
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
                t = (ATerm) ATempty;
              }
            {
              w_36 = t;
              if(((r_36 != NULL) && (r_36 != w_36)))
                _fail(w_36);
              else
                r_36 = w_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_36), term_v_19, (ATerm) ATinsert(CheckATermList(not_null(r_36)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_21;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL;
  ATerm l_4 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = begin_scope_1(t, l_4);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm z_21;
      z_21 = t;
      {
        ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_22;
            t = table_get_0(t);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          k_37 = t;
          e_37 :
          if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
            {
              l_37 = ATgetFirst((ATermList) k_37);
              m_37 = (ATerm) ATgetNext((ATermList) k_37);
              {
                if(((j_37 != NULL) && (j_37 != l_37)))
                  _fail(l_37);
                else
                  j_37 = l_37;
                {
                  if(((i_37 != NULL) && (i_37 != m_37)))
                    _fail(m_37);
                  else
                    i_37 = m_37;
                  {
                    t = not_null(j_37);
                    {
                      ATerm n_4 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, n_4);
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
      t = z_21;
      {
        ATerm o_4 (ATerm t)
        {
          t = term_f_20;
          return(t);
        }
        t = end_scope_1(t, o_4);
      }
      return(t);
    }
    t = restore_always_2(t, b_75, m_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL;
        ATerm q_37 = NULL;
        t = term_v_16;
        {
          t = get_config_0(t);
          {
            q_37 = t;
            if(((p_37 != NULL) && (p_37 != q_37)))
              _fail(q_37);
            else
              p_37 = q_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_37));
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = term_l_20;
      }
    {
      t = c_75(t);
      {
        ATerm d_5 (ATerm t)
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_o_16;
              t = get_config_0(t);
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              t = term_i_22;
            }
          return(t);
        }
        t = copy_to_1(t, d_5);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm t_37 = NULL;
    t_37 = t;
    s_37 :
    if(!(match_string(t_37, "-v")))
      {
        if(!(match_string(t_37, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_k_22;
    t = set_config_0(t);
    t = term_l_22;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_s_22;
    return(t);
  }
  t = Option_3(t, e_5, g_5, h_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm w_37 = NULL;
    w_37 = t;
    u_37 :
    if(!(match_string(w_37, "-k")))
      {
        if(!(match_string(w_37, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm t_22;
    t_22 = t;
    {
      ATerm x_37 = NULL;
      ATerm y_37 = NULL;
      t = string_to_int_0(t);
      {
        y_37 = t;
        if(((x_37 != NULL) && (x_37 != y_37)))
          _fail(y_37);
        else
          x_37 = y_37;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_22, not_null(x_37));
        t = set_config_0(t);
      }
    }
    t = t_22;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_v_22;
    return(t);
  }
  t = ArgOption_3(t, j_5, q_5, s_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  t = SSL_string_to_int(not_null(b_38));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        ATerm n_38 = NULL;
        n_38 = t;
        g_38 :
        if(!(match_string(n_38, "-S")))
          {
            if(!(match_string(n_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_b_23;
        t = set_config_0(t);
        t = term_c_23;
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        t = term_j_23;
        return(t);
      }
      t = Option_3(t, t_5, u_5, z_5);
      LocalPopChoice(a_23);
    }
  else
    {
      t = w_22;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              ATerm o_38 = NULL;
              o_38 = t;
              h_38 :
              if(!(match_string(o_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_6 (ATerm t)
            {
              ATerm r_38 = NULL;
              ATerm n_23;
              n_23 = t;
              {
                ATerm p_38 = NULL;
                ATerm q_38 = NULL;
                t = string_to_int_0(t);
                {
                  q_38 = t;
                  if(((p_38 != NULL) && (p_38 != q_38)))
                    _fail(q_38);
                  else
                    p_38 = q_38;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(p_38));
                  t = set_config_0(t);
                }
              }
              t = n_23;
              {
                ATerm s_38 = NULL;
                s_38 = t;
                if(((r_38 != NULL) && (r_38 != s_38)))
                  _fail(s_38);
                else
                  r_38 = s_38;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_38));
              }
              return(t);
            }
            ATerm c_6 (ATerm t)
            {
              t = term_o_23;
              return(t);
            }
            t = ArgOption_3(t, a_6, b_6, c_6);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm t_38 = NULL;
                t_38 = t;
                m_38 :
                if(!(match_string(t_38, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_6 (ATerm t)
              {
                t = term_p_23;
                t = set_config_0(t);
                t = term_q_23;
                return(t);
              }
              ATerm g_6 (ATerm t)
              {
                t = term_r_23;
                return(t);
              }
              t = Option_3(t, e_6, f_6, g_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm z_38 = NULL;
    z_38 = t;
    w_38 :
    if(!(match_string(z_38, "-o")))
      {
        if(!(match_string(z_38, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm c_39 = NULL;
    ATerm w_23;
    w_23 = t;
    {
      ATerm a_39 = NULL;
      ATerm b_39 = NULL;
      b_39 = t;
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(a_39));
        t = set_config_0(t);
      }
    }
    t = w_23;
    {
      ATerm d_39 = NULL;
      d_39 = t;
      if(((c_39 != NULL) && (c_39 != d_39)))
        _fail(d_39);
      else
        c_39 = d_39;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_39));
    }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_x_23;
    return(t);
  }
  t = ArgOption_3(t, h_6, i_6, k_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm o_6 (ATerm t)
        {
          ATerm h_39 = NULL;
          h_39 = t;
          g_39 :
          if(!(match_string(h_39, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_6 (ATerm t)
        {
          t = term_c_24;
          t = set_config_0(t);
          t = term_d_24;
          return(t);
        }
        ATerm w_6 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = Option_3(t, o_6, q_6, w_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  r_39 = t;
  n_39 :
  if(match_string(r_39, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
        {
          s_39 = ATgetFirst((ATermList) r_39);
          t_39 = (ATerm) ATgetNext((ATermList) r_39);
          p_39 :
          if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
            {
              u_39 = ATgetFirst((ATermList) t_39);
              v_39 = (ATerm) ATgetNext((ATermList) t_39);
              {
                ATerm z_39 = NULL;
                ATerm f_24;
                f_24 = t;
                {
                  t = not_null(s_39);
                  t = j_0(t);
                }
                t = f_24;
                {
                  ATerm a_40 = NULL;
                  t = not_null(u_39);
                  {
                    t = k_0(t);
                    {
                      a_40 = t;
                      if(((z_39 != NULL) && (z_39 != a_40)))
                        _fail(a_40);
                      else
                        z_39 = a_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_39)), not_null(z_39));
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
  ATerm x_6 (ATerm t)
  {
    ATerm h_40 = NULL;
    h_40 = t;
    e_40 :
    if(!(match_string(h_40, "-i")))
      {
        if(!(match_string(h_40, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm k_40 = NULL;
    ATerm g_24;
    g_24 = t;
    {
      ATerm i_40 = NULL;
      ATerm j_40 = NULL;
      j_40 = t;
      if(((i_40 != NULL) && (i_40 != j_40)))
        _fail(j_40);
      else
        i_40 = j_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_16, not_null(i_40));
        t = set_config_0(t);
      }
    }
    t = g_24;
    {
      ATerm l_40 = NULL;
      l_40 = t;
      if(((k_40 != NULL) && (k_40 != l_40)))
        _fail(l_40);
      else
        k_40 = l_40;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_40));
    }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_h_24;
    return(t);
  }
  t = ArgOption_3(t, x_6, y_6, z_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_40 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm r_40 = NULL,s_40 = NULL;
      r_40 = t;
      p_40 :
      if(match_cons(r_40, sym_Program_1))
        {
          s_40 = ATgetArgument(r_40, 0);
          if(((q_40 != NULL) && (q_40 != s_40)))
            _fail(s_40);
          else
            q_40 = s_40;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_24), not_null(q_40)), term_n_24));
      {
        t = printnl_0(t);
        {
          t = term_f_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATempty, term_t_24));
  {
    t = printnl_0(t);
    {
      t = term_f_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  t = SSL_TicksToSeconds(not_null(v_40));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym__2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      {
        ATerm u_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_41), not_null(c_41));
            LocalPopChoice(z_24);
          }
        else
          {
            t = u_24;
            t = SSL_addr(not_null(b_41), not_null(c_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_73 (ATerm), ATerm s_73 (ATerm))
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_73(t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
        j_41 = t;
        i_41 :
        if(((ATgetType(j_41) == AT_LIST) && !(ATisEmpty(j_41))))
          {
            k_41 = ATgetFirst((ATermList) j_41);
            l_41 = (ATerm) ATgetNext((ATermList) j_41);
            {
              ATerm o_41 = NULL;
              ATerm p_41 = NULL;
              t = not_null(l_41);
              {
                t = foldr_2(t, r_73, s_73);
                {
                  p_41 = t;
                  if(((o_41 != NULL) && (o_41 != p_41)))
                    _fail(p_41);
                  else
                    o_41 = p_41;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_41), not_null(o_41));
                t = s_73(t);
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
ATerm crush_2 (ATerm t, ATerm p_72 (ATerm), ATerm q_72 (ATerm))
{
  ATerm w_41 = NULL;
  ATerm y_41 = NULL;
  w_41 = t;
  {
    ATerm z_41 = NULL;
    ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
    t = not_null(w_41);
    {
      z_41 = t;
      {
        t = SSL_explode_term(not_null(z_41));
        {
          b_42 = t;
          v_41 :
          if(match_cons(b_42, sym__2))
            {
              c_42 = ATgetArgument(b_42, 0);
              d_42 = ATgetArgument(b_42, 1);
              if(((y_41 != NULL) && (y_41 != d_42)))
                _fail(d_42);
              else
                y_41 = d_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_41);
      t = foldr_2(t, p_72, q_72);
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
    ATerm f_7 (ATerm t)
    {
      t = term_h_19;
      return(t);
    }
    t = crush_2(t, f_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym__2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      {
        ATerm c_25;
        c_25 = t;
        {
          ATerm d_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_42), not_null(l_42));
              LocalPopChoice(r_25);
            }
          else
            {
              t = d_25;
              t = SSL_gtr(not_null(k_42), not_null(l_42));
            }
        }
        t = c_25;
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
  ATerm r_42 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
      s_42 = t;
      q_42 :
      if(match_cons(s_42, sym__2))
        {
          t_42 = ATgetArgument(s_42, 0);
          u_42 = ATgetArgument(s_42, 1);
          {
            if(((r_42 != NULL) && (r_42 != t_42)))
              _fail(t_42);
            else
              r_42 = t_42;
            if(((r_42 != NULL) && (r_42 != u_42)))
              _fail(u_42);
            else
              r_42 = u_42;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm v_25;
    v_25 = t;
    {
      ATerm x_42 = NULL;
      ATerm y_42 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), term_f_10);
        t = geq_0(t);
      }
    }
    t = v_25;
    t = y_61(t);
    return(t);
  }
  t = try_1(t, g_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm c_43 = NULL,e_43 = NULL;
    ATerm w_25;
    w_25 = t;
    {
      ATerm d_43 = NULL;
      t = run_time_0(t);
      {
        d_43 = t;
        if(((c_43 != NULL) && (c_43 != d_43)))
          _fail(d_43);
        else
          c_43 = d_43;
      }
    }
    t = w_25;
    {
      ATerm f_43 = NULL;
      t = term_x_25;
      {
        t = get_config_0(t);
        {
          f_43 = t;
          if(((e_43 != NULL) && (e_43 != f_43)))
            _fail(f_43);
          else
            e_43 = f_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_25), not_null(c_43)), term_r_10), not_null(e_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_7);
  {
    t = term_h_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_43 = NULL;
  m_43 = t;
  l_43 :
  if(match_cons(m_43, sym_Version_0))
    {
      ATerm o_43 = NULL,q_43 = NULL;
      ATerm z_25;
      z_25 = t;
      {
        ATerm p_43 = NULL;
        t = SSLgetAnnotations(not_null(m_43));
        {
          p_43 = t;
          if(((o_43 != NULL) && (o_43 != p_43)))
            _fail(p_43);
          else
            o_43 = p_43;
        }
      }
      t = z_25;
      {
        ATerm r_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_43));
        {
          r_43 = t;
          if(((q_43 != NULL) && (q_43 != r_43)))
            _fail(r_43);
          else
            q_43 = r_43;
        }
        t = not_null(q_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          ATerm c_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_26);
            }
          else
            {
              t = c_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_7);
  t = a_80(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_43 = NULL;
  w_43 = t;
  t = SSL_table_create(not_null(w_43));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  {
    ATerm i_26;
    i_26 = t;
    {
      t = term_j_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, not_null(a_44));
          t = table_put_0(t);
        }
      }
    }
    t = i_26;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  t = SSL_table_destroy(not_null(e_44));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  t = SSL_exit(not_null(i_44));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  l_44 :
  if(((ATgetType(m_44) == AT_LIST) && ATisEmpty(m_44)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
        {
          n_44 = ATgetFirst((ATermList) m_44);
          o_44 = (ATerm) ATgetNext((ATermList) m_44);
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
  ATerm l_26;
  l_26 = t;
  {
    ATerm r_44 = NULL;
    ATerm u_44 = NULL;
    ATerm m_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = m_26;
        {
          ATerm s_44 = NULL;
          ATerm t_44 = NULL;
          t_44 = t;
          if(((s_44 != NULL) && (s_44 != t_44)))
            _fail(t_44);
          else
            s_44 = t_44;
          t = (ATerm) ATinsert(ATempty, not_null(s_44));
        }
      }
    {
      u_44 = t;
      if(((r_44 != NULL) && (r_44 != u_44)))
        _fail(u_44);
      else
        r_44 = u_44;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_22, not_null(r_44));
      t = printnl_0(t);
    }
  }
  t = l_26;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  f_45 = t;
  c_45 :
  if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
    {
      d_45 = ATgetFirst((ATermList) f_45);
      e_45 = (ATerm) ATgetNext((ATermList) f_45);
      {
        ATerm i_45 = NULL;
        t = not_null(e_45);
        {
          ATerm s_26;
          s_26 = t;
          {
            ATerm j_45 = NULL,l_45 = NULL,n_45 = NULL;
            ATerm t_26;
            t_26 = t;
            {
              ATerm k_45 = NULL;
              t = i_0(t);
              {
                k_45 = t;
                if(((j_45 != NULL) && (j_45 != k_45)))
                  _fail(k_45);
                else
                  j_45 = k_45;
              }
            }
            t = t_26;
            {
              ATerm m_45 = NULL;
              t = not_null(d_45);
              {
                t = h_0(t);
                {
                  m_45 = t;
                  if(((l_45 != NULL) && (l_45 != m_45)))
                    _fail(m_45);
                  else
                    l_45 = m_45;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_45)), not_null(l_45));
                {
                  n_45 = t;
                  if(((i_45 != NULL) && (i_45 != n_45)))
                    _fail(n_45);
                  else
                    i_45 = n_45;
                }
              }
            }
          }
          t = s_26;
          {
            ATerm k_7 (ATerm t)
            {
              t = not_null(i_45);
              return(t);
            }
            t = reverse_acc_2(t, h_0, k_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_45) == AT_LIST) && ATisEmpty(f_45)))
        {
          {
            t = term_c_20;
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
  ATerm l_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym_Program_1))
    {
      z_45 = ATgetArgument(y_45, 0);
      {
        ATerm c_46 = NULL,e_46 = NULL;
        ATerm d_46 = NULL;
        t = SSLgetAnnotations(not_null(y_45));
        {
          d_46 = t;
          if(((c_46 != NULL) && (c_46 != d_46)))
            _fail(d_46);
          else
            c_46 = d_46;
        }
        {
          t = not_null(z_45);
          {
            ATerm g_46 = NULL;
            t = n_59(t);
            {
              e_46 = t;
              {
                ATerm h_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_46)), not_null(c_46));
                {
                  h_46 = t;
                  if(((g_46 != NULL) && (g_46 != h_46)))
                    _fail(h_46);
                  else
                    g_46 = h_46;
                }
                t = not_null(g_46);
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
  ATerm u_46 = NULL;
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_46 = NULL;
      t = term_x_25;
      {
        t = get_config_0(t);
        {
          v_46 = t;
          if(((u_46 != NULL) && (u_46 != v_46)))
            _fail(v_46);
          else
            u_46 = v_46;
        }
      }
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm m_7 (ATerm t)
        {
          ATerm n_7 (ATerm t)
          {
            ATerm x_46 = NULL;
            x_46 = t;
            if(((u_46 != NULL) && (u_46 != x_46)))
              _fail(x_46);
            else
              u_46 = x_46;
            return(t);
          }
          t = Program_1(t, n_7);
          return(t);
        }
        t = option_defined_1(t, m_7);
      }
    }
  {
    ATerm o_7 (ATerm t)
    {
      ATerm q_7 (ATerm t)
      {
        t = not_null(u_46);
        return(t);
      }
      t = short_description_1(t, q_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_7);
    {
      t = term_x_26;
      {
        t = echo_0(t);
        {
          t = term_h_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_7 (ATerm t)
                {
                  ATerm y_46 = NULL;
                  ATerm e_47 = NULL;
                  e_47 = t;
                  if(((y_46 != NULL) && (y_46 != e_47)))
                    _fail(e_47);
                  else
                    y_46 = e_47;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), term_i_27);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_7);
                {
                  ATerm v_7 (ATerm t)
                  {
                    ATerm f_47 = NULL;
                    ATerm g_47 = NULL;
                    ATerm w_7 (ATerm t)
                    {
                      t = not_null(u_46);
                      return(t);
                    }
                    t = long_description_1(t, w_7);
                    {
                      g_47 = t;
                      if(((f_47 != NULL) && (f_47 != g_47)))
                        _fail(g_47);
                      else
                        f_47 = g_47;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_47)), term_k_27);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_7);
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
  ATerm l_27;
  l_27 = t;
  {
    ATerm q_47 = NULL;
    ATerm r_47 = NULL;
    r_47 = t;
    if(((q_47 != NULL) && (q_47 != r_47)))
      _fail(r_47);
    else
      q_47 = r_47;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATempty, not_null(q_47)));
      t = printnl_0(t);
    }
  }
  t = l_27;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm m_27;
  m_27 = t;
  {
    t = p_76(t);
    t = debug_0(t);
  }
  t = m_27;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm y_47 = NULL,z_47 = NULL;
  y_47 = t;
  x_47 :
  if(match_cons(y_47, sym_Undefined_1))
    {
      z_47 = ATgetArgument(y_47, 0);
      {
        ATerm c_48 = NULL,e_48 = NULL;
        ATerm d_48 = NULL;
        t = SSLgetAnnotations(not_null(y_47));
        {
          d_48 = t;
          if(((c_48 != NULL) && (c_48 != d_48)))
            _fail(d_48);
          else
            c_48 = d_48;
        }
        {
          t = not_null(z_47);
          {
            ATerm g_48 = NULL;
            t = o_59(t);
            {
              e_48 = t;
              {
                ATerm h_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_48)), not_null(c_48));
                {
                  h_48 = t;
                  if(((g_48 != NULL) && (g_48 != h_48)))
                    _fail(h_48);
                  else
                    g_48 = h_48;
                }
                t = not_null(g_48);
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
ATerm fetch_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm m_48 (ATerm t)
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_67, _id);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = Cons_2(t, _id, m_48);
      }
    return(t);
  }
  t = m_48(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_81 (ATerm))
{
  t = fetch_1(t, h_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Help_0))
    {
      ATerm t_48 = NULL,v_48 = NULL;
      ATerm x_27;
      x_27 = t;
      {
        ATerm u_48 = NULL;
        t = SSLgetAnnotations(not_null(r_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
      }
      t = x_27;
      {
        ATerm w_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_48));
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
        t = not_null(v_48);
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
  ATerm b_49 = NULL;
  b_49 = t;
  t = SSL_implode_string(not_null(b_49));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
        g_49 = t;
        f_49 :
        if(((ATgetType(g_49) == AT_LIST) && !(ATisEmpty(g_49))))
          {
            h_49 = ATgetFirst((ATermList) g_49);
            i_49 = (ATerm) ATgetNext((ATermList) g_49);
            {
              t = not_null(h_49);
              {
                ATerm x_7 (ATerm t)
                {
                  t = not_null(i_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_7);
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
  ATerm s_49 = NULL;
  ATerm u_49 = NULL;
  s_49 = t;
  {
    ATerm v_49 = NULL;
    ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
    t = not_null(s_49);
    {
      v_49 = t;
      {
        t = SSL_explode_term(not_null(v_49));
        {
          x_49 = t;
          q_49 :
          if(match_cons(x_49, sym__2))
            {
              y_49 = ATgetArgument(x_49, 0);
              z_49 = ATgetArgument(x_49, 1);
              r_49 :
              if(match_string(y_49, ""))
                {
                  if(((u_49 != NULL) && (u_49 != z_49)))
                    _fail(z_49);
                  else
                    u_49 = z_49;
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
      t = not_null(u_49);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm d_50 (ATerm t)
  {
    ATerm a_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_50);
        LocalPopChoice(d_28);
      }
    else
      {
        t = a_28;
        {
          t = Nil_0(t);
          t = s_67(t);
        }
      }
    return(t);
  }
  t = d_50(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  f_50 :
  if(match_cons(g_50, sym__2))
    {
      h_50 = ATgetArgument(g_50, 0);
      i_50 = ATgetArgument(g_50, 1);
      {
        t = not_null(h_50);
        {
          ATerm y_7 (ATerm t)
          {
            t = not_null(i_50);
            return(t);
          }
          t = at_end_1(t, y_7);
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
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  t = SSL_explode_string(not_null(n_50));
  return(t);
}
ATerm _2 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm))
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym__2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      {
        ATerm c_51 = NULL,e_51 = NULL;
        ATerm d_51 = NULL;
        t = SSLgetAnnotations(not_null(w_50));
        {
          d_51 = t;
          if(((c_51 != NULL) && (c_51 != d_51)))
            _fail(d_51);
          else
            c_51 = d_51;
        }
        {
          t = not_null(x_50);
          {
            ATerm g_51 = NULL;
            t = w_52(t);
            {
              e_51 = t;
              {
                t = not_null(y_50);
                {
                  ATerm i_51 = NULL;
                  t = x_52(t);
                  {
                    g_51 = t;
                    {
                      ATerm j_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_51), not_null(g_51)), not_null(c_51));
                      {
                        j_51 = t;
                        if(((i_51 != NULL) && (i_51 != j_51)))
                          _fail(j_51);
                        else
                          i_51 = j_51;
                      }
                      t = not_null(i_51);
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
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym__2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      {
        ATerm h_28;
        h_28 = t;
        t = SSL_printnl(not_null(s_51), not_null(t_51));
        t = h_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm i_28;
  i_28 = t;
  {
    ATerm z_51 = NULL,b_52 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm a_52 = NULL;
      t = o_76(t);
      {
        a_52 = t;
        if(((z_51 != NULL) && (z_51 != a_52)))
          _fail(a_52);
        else
          z_51 = a_52;
      }
    }
    t = j_28;
    {
      ATerm c_52 = NULL;
      c_52 = t;
      if(((b_52 != NULL) && (b_52 != c_52)))
        _fail(c_52);
      else
        b_52 = c_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_52)), not_null(z_51)));
        t = printnl_0(t);
      }
    }
  }
  t = i_28;
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_67 (ATerm))
{
  ATerm f_52 (ATerm t)
  {
    ATerm k_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = k_28;
        t = Cons_2(t, d_67, f_52);
      }
    return(t);
  }
  t = f_52(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_52 = NULL;
  j_52 = t;
  t = SSL_is_string(not_null(j_52));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm r_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_8);
            LocalPopChoice(u_28);
          }
        else
          {
            t = r_28;
            {
              ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
              z_52 = t;
              y_52 :
              if(match_cons(z_52, sym_Path_1))
                {
                  a_53 = ATgetArgument(z_52, 0);
                  t = not_null(a_53);
                }
              else
                {
                  if(match_cons(z_52, sym_Var_1))
                    {
                      a_53 = ATgetArgument(z_52, 0);
                      {
                        t = not_null(a_53);
                        {
                          ATerm v_28 = t;
                          int w_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_28);
                            }
                          else
                            {
                              t = v_28;
                              {
                                ATerm c_8 (ATerm t)
                                {
                                  t = term_y_28;
                                  return(t);
                                }
                                t = debug_1(t, c_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_52, sym_Prefix_2))
                        {
                          a_53 = ATgetArgument(z_52, 0);
                          b_53 = ATgetArgument(z_52, 1);
                          {
                            ATerm g_53 = NULL,i_53 = NULL;
                            ATerm b_29;
                            b_29 = t;
                            {
                              ATerm h_53 = NULL;
                              t = not_null(a_53);
                              {
                                t = eval_config_0(t);
                                {
                                  h_53 = t;
                                  if(((g_53 != NULL) && (g_53 != h_53)))
                                    _fail(h_53);
                                  else
                                    g_53 = h_53;
                                }
                              }
                            }
                            t = b_29;
                            {
                              ATerm j_53 = NULL;
                              t = not_null(b_53);
                              {
                                t = eval_config_0(t);
                                {
                                  j_53 = t;
                                  if(((i_53 != NULL) && (i_53 != j_53)))
                                    _fail(j_53);
                                  else
                                    i_53 = j_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_53), not_null(i_53));
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
  ATerm r_53 = NULL;
  r_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_29, not_null(r_53));
    {
      t = table_get_0(t);
      {
        ATerm f_8 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_29;
            d_29 = t;
            {
              ATerm t_53 = NULL;
              ATerm u_53 = NULL;
              u_53 = t;
              if(((t_53 != NULL) && (t_53 != u_53)))
                _fail(u_53);
              else
                t_53 = u_53;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_29, not_null(r_53), not_null(t_53));
                t = table_put_0(t);
              }
            }
            t = d_29;
          }
          return(t);
        }
        t = try_1(t, f_8);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_65(t);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym__2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      t = SSL_table_get(not_null(a_54), not_null(b_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym__3))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      n_54 = ATgetArgument(k_54, 2);
      {
        ATerm g_29;
        g_29 = t;
        {
          ATerm s_54 = NULL;
          ATerm t_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_54), not_null(m_54));
          {
            ATerm m_29 = t;
            int p_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_29);
              }
            else
              {
                t = m_29;
                t = (ATerm) ATempty;
              }
            {
              t_54 = t;
              if(((s_54 != NULL) && (s_54 != t_54)))
                _fail(t_54);
              else
                s_54 = t_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_54), not_null(m_54), (ATerm) ATinsert(CheckATermList(not_null(s_54)), not_null(n_54)));
            t = table_put_0(t);
          }
        }
        t = g_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm x_54 = NULL;
  ATerm y_54 = NULL;
  t = term_c_20;
  {
    t = m_82(t);
    {
      y_54 = t;
      if(((x_54 != NULL) && (x_54 != y_54)))
        _fail(y_54);
      else
        x_54 = y_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, not_null(x_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_string(e_55, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
        {
          f_55 = ATgetFirst((ATermList) e_55);
          g_55 = (ATerm) ATgetNext((ATermList) e_55);
          {
            ATerm j_55 = NULL;
            ATerm q_29;
            q_29 = t;
            {
              t = not_null(f_55);
              t = a_0(t);
            }
            t = q_29;
            {
              ATerm k_55 = NULL;
              t = term_c_20;
              {
                t = d_0(t);
                {
                  k_55 = t;
                  if(((j_55 != NULL) && (j_55 != k_55)))
                    _fail(k_55);
                  else
                    j_55 = k_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_55)), not_null(j_55));
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
  ATerm g_8 (ATerm t)
  {
    ATerm p_55 = NULL;
    p_55 = t;
    o_55 :
    if(!(match_string(p_55, "--help")))
      {
        if(!(match_string(p_55, "-h")))
          {
            if(!(match_string(p_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    t = term_s_29;
    {
      t = set_config_0(t);
      t = term_t_29;
    }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = term_u_29;
    return(t);
  }
  t = Option_3(t, g_8, h_8, l_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  r_55 :
  if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
    {
      t_55 = ATgetFirst((ATermList) s_55);
      u_55 = (ATerm) ATgetNext((ATermList) s_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  d_56 :
  if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
    {
      f_56 = ATgetFirst((ATermList) e_56);
      g_56 = (ATerm) ATgetNext((ATermList) e_56);
      {
        ATerm k_56 = NULL,m_56 = NULL;
        ATerm l_56 = NULL;
        t = SSLgetAnnotations(not_null(e_56));
        {
          l_56 = t;
          if(((k_56 != NULL) && (k_56 != l_56)))
            _fail(l_56);
          else
            k_56 = l_56;
        }
        {
          t = not_null(f_56);
          {
            ATerm o_56 = NULL;
            t = f_54(t);
            {
              m_56 = t;
              {
                t = not_null(g_56);
                {
                  ATerm q_56 = NULL;
                  t = g_54(t);
                  {
                    o_56 = t;
                    {
                      ATerm r_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_56)), not_null(m_56)), not_null(k_56));
                      {
                        r_56 = t;
                        if(((q_56 != NULL) && (q_56 != r_56)))
                          _fail(r_56);
                        else
                          q_56 = r_56;
                      }
                      t = not_null(q_56);
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
  ATerm b_57 = NULL;
  b_57 = t;
  a_57 :
  if(((ATgetType(b_57) == AT_LIST) && ATisEmpty(b_57)))
    {
      {
        ATerm d_57 = NULL,f_57 = NULL;
        ATerm v_29;
        v_29 = t;
        {
          ATerm e_57 = NULL;
          t = SSLgetAnnotations(not_null(b_57));
          {
            e_57 = t;
            if(((d_57 != NULL) && (d_57 != e_57)))
              _fail(e_57);
            else
              d_57 = e_57;
          }
        }
        t = v_29;
        {
          ATerm g_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_57));
          {
            g_57 = t;
            if(((f_57 != NULL) && (f_57 != g_57)))
              _fail(g_57);
            else
              f_57 = g_57;
          }
          t = not_null(f_57);
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
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym__2))
    {
      n_57 = ATgetArgument(m_57, 0);
      o_57 = ATgetArgument(m_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_29, not_null(n_57), not_null(o_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm o_30;
  o_30 = t;
  {
    ATerm t_8 (ATerm t)
    {
      t = term_p_30;
      t = k_82(t);
      return(t);
    }
    t = try_1(t, t_8);
  }
  t = o_30;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm w_57 = NULL;
      ATerm q_30;
      q_30 = t;
      {
        ATerm u_57 = NULL;
        ATerm v_57 = NULL;
        v_57 = t;
        if(((u_57 != NULL) && (u_57 != v_57)))
          _fail(v_57);
        else
          u_57 = v_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(u_57));
          t = set_config_0(t);
        }
      }
      t = q_30;
      {
        ATerm x_57 = NULL;
        x_57 = t;
        if(((w_57 != NULL) && (w_57 != x_57)))
          _fail(x_57);
        else
          w_57 = x_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_57));
      }
      return(t);
    }
    ATerm v_8 (ATerm t)
    {
      ATerm s_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_30 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_31);
            }
          else
            {
              t = x_30;
              {
                t = k_82(t);
                t = Cons_2(t, _id, v_8);
              }
            }
          LocalPopChoice(w_30);
        }
      else
        {
          t = s_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_8, v_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  ATerm d_31;
  d_31 = t;
  {
    ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
    g_58 = t;
    c_58 :
    if(match_cons(g_58, sym__3))
      {
        h_58 = ATgetArgument(g_58, 0);
        i_58 = ATgetArgument(g_58, 1);
        j_58 = ATgetArgument(g_58, 2);
        {
          if(((d_58 != NULL) && (d_58 != h_58)))
            _fail(h_58);
          else
            d_58 = h_58;
          {
            if(((e_58 != NULL) && (e_58 != i_58)))
              _fail(i_58);
            else
              e_58 = i_58;
            {
              if(((f_58 != NULL) && (f_58 != j_58)))
                _fail(j_58);
              else
                f_58 = j_58;
              t = SSL_table_put(not_null(d_58), not_null(e_58), not_null(f_58));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm m_58 = NULL;
  ATerm e_31;
  e_31 = t;
  {
    t = term_f_31;
    t = table_put_0(t);
  }
  t = e_31;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_82(t);
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_8);
    {
      ATerm c_9 (ATerm t)
      {
        ATerm i_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_31;
            n_31 = t;
            {
              ATerm o_31 = t;
              int r_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_29;
                  t = get_config_0(t);
                  LocalPopChoice(r_31);
                }
              else
                {
                  t = o_31;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_31;
            {
              t = system_usage_0(t);
              {
                t = term_h_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_31);
          }
        else
          {
            t = i_31;
            {
              ATerm d_9 (ATerm t)
              {
                ATerm i_9 (ATerm t)
                {
                  ATerm n_58 = NULL;
                  n_58 = t;
                  if(((m_58 != NULL) && (m_58 != n_58)))
                    _fail(n_58);
                  else
                    m_58 = n_58;
                  return(t);
                }
                t = Undefined_1(t, i_9);
                return(t);
              }
              t = option_defined_1(t, d_9);
              {
                ATerm j_9 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_58)), term_s_31);
                  return(t);
                }
                t = say_1(t, j_9);
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_9);
      {
        ATerm t_31;
        t_31 = t;
        {
          t = term_f_27;
          t = table_destroy_0(t);
        }
        t = t_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  t = parse_options_1(t, g_80);
  {
    t = store_options_0(t);
    {
      t = i_80(t);
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_80);
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm x_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_80(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = x_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm k_80 (ATerm), ATerm l_80 (ATerm))
{
  t = option_wrap_4(t, k_80, default_usage_0, _id, l_80);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  ATerm k_9 (ATerm t)
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_75(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_9 (ATerm t)
  {
    t = xtc_io_1(t, h_75);
    return(t);
  }
  t = option_wrap_2(t, k_9, p_9);
  return(t);
}
ATerm io_parse_unit_0 (ATerm t)
{
  t = xtc_io_wrap_2(t, parse_unit_options_0, parse_unit_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_unit_0(t);
  return(t);
}