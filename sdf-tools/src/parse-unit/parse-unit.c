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
ATerm term_g_32;
ATerm term_q_31;
ATerm term_e_31;
ATerm term_v_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_j_29;
ATerm term_f_29;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_b_22;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_h_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_u_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_v_16;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_b_13;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-----------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("results testsuite ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("successes : ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("failures  : ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--parse-table", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("* OK   : test ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("* ERROR: test ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** Result:   ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** Expected: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Failure_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Success_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_o_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_r_13);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_ParseResult_2, term_m_10, term_i_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("executing testsuite ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" with ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" tests", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p FILE   Use parse table FILE (required)", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_h_19);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_u_19);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_z_18);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_18);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_u_19);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_u_19);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_d_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_u_19);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__3, term_x_26, term_d_27, (ATerm) ATempty);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1 (ATerm, ATerm f_77 (ATerm));
ATerm count_in_string_1 (ATerm, ATerm m_60 (ATerm));
ATerm echo_results_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm echo_report_0 (ATerm);
ATerm create_test_result_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm h_75 (ATerm));
ATerm xtc_transform_term_2 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm q_61 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm y_61 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm x_61 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm z_61 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_72 (ATerm), ATerm a_73 (ATerm));
ATerm union_1 (ATerm, ATerm v_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_62 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm g_75 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm k_54 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm parse_sglr_0 (ATerm);
ATerm finally_2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm print_0 (ATerm);
ATerm print_to_tmp_file_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm abs_test_file_0 (ATerm);
ATerm parse_helper_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm execute_test_2 (ATerm, ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm t_68 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm));
ATerm length_0 (ATerm);
ATerm echo_start_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm c_76 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_76 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm r_75 (ATerm));
ATerm parse_unit_0 (ATerm);
ATerm parse_table_option_0 (ATerm);
ATerm parse_unit_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm w_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm x_74 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm crush_2 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_61 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_79 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_82 (ATerm));
ATerm Program_1 (ATerm, ATerm j_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_76 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_67 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm s_52 (ATerm), ATerm t_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_76 (ATerm));
ATerm map_1 (ATerm, ATerm y_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_82 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_54 (ATerm), ATerm c_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_82 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm e_80 (ATerm), ATerm f_80 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm io_parse_unit_0 (ATerm);
ATerm main_0 (ATerm);
ATerm filter_1 (ATerm t, ATerm f_77 (ATerm))
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
            ATerm b_0 (ATerm t)
            {
              t = filter_1(t, f_77);
              return(t);
            }
            t = Cons_2(t, f_77, b_0);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            {
              ATerm x_0 = NULL,c_1 = NULL,d_1 = NULL;
              x_0 = t;
              e_0 :
              if(((ATgetType(x_0) == AT_LIST) && !(ATisEmpty(x_0))))
                {
                  c_1 = ATgetFirst((ATermList) x_0);
                  d_1 = (ATerm) ATgetNext((ATermList) x_0);
                  {
                    t = not_null(d_1);
                    t = filter_1(t, f_77);
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
ATerm count_in_string_1 (ATerm t, ATerm m_60 (ATerm))
{
  t = filter_1(t, m_60);
  {
    t = length_0(t);
    t = int_to_string_0(t);
  }
  return(t);
}
ATerm echo_results_0 (ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm f_8;
    f_8 = t;
    {
      ATerm d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL;
      d_3 = t;
      y_2 :
      if(match_cons(d_3, sym__2))
        {
          e_3 = ATgetArgument(d_3, 0);
          g_3 = ATgetArgument(d_3, 1);
          z_2 :
          if(match_cons(g_3, sym_TestResults_1))
            {
              h_3 = ATgetArgument(g_3, 0);
              {
                ATerm i_3 = NULL,l_3 = NULL;
                if(((a_3 != NULL) && (a_3 != e_3)))
                  _fail(e_3);
                else
                  a_3 = e_3;
                {
                  if(((c_3 != NULL) && (c_3 != h_3)))
                    _fail(h_3);
                  else
                    c_3 = h_3;
                  {
                    t = term_h_8;
                    {
                      t = echo_0(t);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(a_3));
                        {
                          t = conc_strings_0(t);
                          {
                            t = echo_0(t);
                            {
                              ATerm k_3 = NULL;
                              t = not_null(c_3);
                              {
                                ATerm f_0 (ATerm t)
                                {
                                  ATerm j_3 = NULL;
                                  j_3 = t;
                                  z_1 :
                                  if(!(match_cons(j_3, sym_Success_0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = count_in_string_1(t, f_0);
                                {
                                  k_3 = t;
                                  if(((i_3 != NULL) && (i_3 != k_3)))
                                    _fail(k_3);
                                  else
                                    i_3 = k_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(i_3));
                                {
                                  t = conc_strings_0(t);
                                  {
                                    t = echo_0(t);
                                    {
                                      ATerm n_3 = NULL;
                                      t = not_null(c_3);
                                      {
                                        ATerm p_0 (ATerm t)
                                        {
                                          ATerm m_3 = NULL;
                                          m_3 = t;
                                          t_2 :
                                          if(!(match_cons(m_3, sym_Failure_0)))
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = count_in_string_1(t, p_0);
                                        {
                                          n_3 = t;
                                          if(((l_3 != NULL) && (l_3 != n_3)))
                                            _fail(n_3);
                                          else
                                            l_3 = n_3;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(l_3));
                                        {
                                          t = conc_strings_0(t);
                                          {
                                            t = echo_0(t);
                                            {
                                              t = term_h_8;
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
    t = f_8;
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_8;
  n_8 = t;
  {
    t = error_0(t);
    {
      t = term_q_8;
      t = exit_0(t);
    }
  }
  t = n_8;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm r_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_8;
      t = get_config_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = r_8;
      {
        t = (ATerm) ATinsert(ATempty, term_w_8);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm echo_report_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
    f_4 = t;
    y_3 :
    if(match_cons(f_4, sym__4))
      {
        g_4 = ATgetArgument(f_4, 0);
        h_4 = ATgetArgument(f_4, 1);
        m_4 = ATgetArgument(f_4, 2);
        n_4 = ATgetArgument(f_4, 3);
        z_3 :
        if(match_cons(h_4, sym_Test_3))
          {
            i_4 = ATgetArgument(h_4, 0);
            k_4 = ATgetArgument(h_4, 1);
            l_4 = ATgetArgument(h_4, 2);
            a_4 :
            if(match_cons(i_4, sym_Descr_1))
              {
                j_4 = ATgetArgument(i_4, 0);
                {
                  ATerm o_4 = NULL;
                  if(((b_4 != NULL) && (b_4 != g_4)))
                    _fail(g_4);
                  else
                    b_4 = g_4;
                  {
                    if(((c_4 != NULL) && (c_4 != j_4)))
                      _fail(j_4);
                    else
                      c_4 = j_4;
                    {
                      if(((e_4 != NULL) && (e_4 != l_4)))
                        _fail(l_4);
                      else
                        e_4 = l_4;
                      {
                        if(((d_4 != NULL) && (d_4 != m_4)))
                          _fail(m_4);
                        else
                          d_4 = m_4;
                        {
                          if(((o_4 != NULL) && (o_4 != n_4)))
                            _fail(n_4);
                          else
                            o_4 = n_4;
                          {
                            t = not_null(o_4);
                            {
                              ATerm a_9;
                              a_9 = t;
                              {
                                ATerm i_9 = t;
                                int j_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_4 = NULL;
                                    p_4 = t;
                                    u_3 :
                                    if(match_cons(p_4, sym_Success_0))
                                      {
                                        ATerm q_4 = NULL;
                                        ATerm r_4 = NULL;
                                        t = not_null(b_4);
                                        {
                                          t = int_to_string_0(t);
                                          {
                                            r_4 = t;
                                            if(((q_4 != NULL) && (q_4 != r_4)))
                                              _fail(r_4);
                                            else
                                              q_4 = r_4;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(c_4)), term_l_9), not_null(q_4)), term_k_9);
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
                                    LocalPopChoice(j_9);
                                  }
                                else
                                  {
                                    t = i_9;
                                    {
                                    }
                                  }
                              }
                              t = a_9;
                              {
                                ATerm s_9;
                                s_9 = t;
                                {
                                  ATerm x_9 = t;
                                  int y_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_4 = NULL;
                                      s_4 = t;
                                      x_3 :
                                      if(match_cons(s_4, sym_Failure_0))
                                        {
                                          ATerm t_4 = NULL;
                                          ATerm u_4 = NULL;
                                          t = not_null(b_4);
                                          {
                                            t = int_to_string_0(t);
                                            {
                                              u_4 = t;
                                              if(((t_4 != NULL) && (t_4 != u_4)))
                                                _fail(u_4);
                                              else
                                                t_4 = u_4;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(c_4)), term_l_9), not_null(t_4)), term_z_9);
                                            {
                                              t = concat_strings_0(t);
                                              {
                                                t = echo_0(t);
                                                {
                                                  t = not_null(d_4);
                                                  {
                                                    ATerm r_0 (ATerm t)
                                                    {
                                                      t = term_c_10;
                                                      return(t);
                                                    }
                                                    t = debug_1(t, r_0);
                                                    {
                                                      t = not_null(e_4);
                                                      {
                                                        ATerm s_0 (ATerm t)
                                                        {
                                                          t = term_d_10;
                                                          return(t);
                                                        }
                                                        t = debug_1(t, s_0);
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
                                      LocalPopChoice(y_9);
                                    }
                                  else
                                    {
                                      t = x_9;
                                      {
                                      }
                                    }
                                }
                                t = s_9;
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
  t = if_verbose1_1(t, q_0);
  return(t);
}
ATerm create_test_result_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  ATerm a_6 (ATerm t)
  {
    t = not_null(r_5);
    {
      ATerm g_10 = t;
      if((PushChoice() == 0))
        {
          ATerm u_5 = NULL;
          u_5 = t;
          f_5 :
          if(!(match_cons(u_5, sym_Success_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_10;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(r_5));
        {
          ATerm h_10 = t;
          if((PushChoice() == 0))
            {
              t = eq_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_10;
            }
        }
      }
    }
    t = term_m_10;
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = not_null(r_5);
    {
      ATerm n_10 = t;
      if((PushChoice() == 0))
        {
          ATerm x_5 = NULL;
          x_5 = t;
          g_5 :
          if(!(match_cons(x_5, sym_Success_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_10;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(r_5));
        t = eq_0(t);
      }
    }
    t = term_o_10;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = not_null(r_5);
    {
      ATerm p_10 = t;
      if((PushChoice() == 0))
        {
          ATerm z_5 = NULL;
          z_5 = t;
          h_5 :
          if(!(match_cons(z_5, sym_Failure_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_10;
        }
    }
    t = term_m_10;
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  n_5 = t;
  i_5 :
  if(match_cons(n_5, sym__2))
    {
      o_5 = ATgetArgument(n_5, 0);
      r_5 = ATgetArgument(n_5, 1);
      j_5 :
      if(match_cons(o_5, sym_ParseResult_2))
        {
          p_5 = ATgetArgument(o_5, 0);
          q_5 = ATgetArgument(o_5, 1);
          k_5 :
          if(match_cons(p_5, sym_Success_0))
            {
              l_5 :
              if(match_cons(r_5, sym_Success_0))
                {
                  ATerm u_10 = t;
                  int v_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_6(t);
                      LocalPopChoice(v_10);
                    }
                  else
                    {
                      t = u_10;
                      {
                        ATerm x_10 = t;
                        int y_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_6(t);
                            LocalPopChoice(y_10);
                          }
                        else
                          {
                            t = x_10;
                            t = c_6(t);
                          }
                      }
                    }
                }
              else
                {
                  ATerm z_10 = t;
                  int a_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_6(t);
                      LocalPopChoice(a_11);
                    }
                  else
                    {
                      t = z_10;
                      t = b_6(t);
                    }
                }
            }
          else
            {
              if(match_cons(p_5, sym_Failure_0))
                {
                  m_5 :
                  if(match_cons(r_5, sym_Failure_0))
                    {
                      ATerm f_11 = t;
                      int g_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_6(t);
                          LocalPopChoice(g_11);
                        }
                      else
                        {
                          t = f_11;
                          t = e_6(t);
                        }
                    }
                  else
                    {
                      t = d_6(t);
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
  ATerm g_6 = NULL;
  g_6 = t;
  {
    ATerm h_11;
    h_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATinsert(CheckATermList(not_null(g_6)), term_k_11));
      t = call_0(t);
    }
    t = h_11;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, h_75, t_0);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, p_75, q_75);
    t = read_from_0(t);
  }
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym__2))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      t = SSL_execvp(not_null(m_6), not_null(n_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  t = SSL_waitpid(not_null(s_6));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm c_7 = NULL;
  ATerm e_7 = NULL;
  c_7 = t;
  {
    t = fork_0(t);
    {
      e_7 = t;
      {
        ATerm l_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL;
            g_7 = t;
            y_6 :
            if(match_int(g_7, 0))
              {
                t = not_null(c_7);
                t = q_61(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(r_11);
          }
        else
          {
            t = l_11;
            {
              ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
              t = not_null(e_7);
              {
                t = waitpid_0(t);
                {
                  h_7 = t;
                  a_7 :
                  if(match_cons(h_7, sym_WaitStatus_3))
                    {
                      i_7 = ATgetArgument(h_7, 0);
                      j_7 = ATgetArgument(h_7, 1);
                      k_7 = ATgetArgument(h_7, 2);
                      b_7 :
                      if(match_int(i_7, 0))
                        {
                          t = not_null(c_7);
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
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      {
        ATerm u_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), not_null(t_7));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, u_0);
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
  ATerm y_7 = NULL;
  y_7 = t;
  t = SSL_table_keys(not_null(y_7));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm g_8 = NULL;
        ATerm i_8 = NULL;
        g_8 = t;
        {
          ATerm j_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(g_8));
          {
            t = table_get_0(t);
            {
              j_8 = t;
              if(((i_8 != NULL) && (i_8 != j_8)))
                _fail(j_8);
              else
                i_8 = j_8;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(i_8));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_11;
      y_11 = t;
      {
        ATerm o_8 = NULL;
        ATerm p_8 = NULL;
        t = term_z_11;
        {
          t = get_config_0(t);
          {
            p_8 = t;
            if(((o_8 != NULL) && (o_8 != p_8)))
              _fail(p_8);
            else
              o_8 = p_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), term_a_12);
          t = geq_0(t);
        }
      }
      t = y_11;
      t = y_61(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_12;
  b_12 = t;
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    t_8 = t;
    if(((s_8 != NULL) && (s_8 != t_8)))
      _fail(t_8);
    else
      s_8 = t_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(s_8));
      t = printnl_0(t);
    }
  }
  t = b_12;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm z_8 = NULL;
  ATerm b_9 = NULL,c_9 = NULL;
  z_8 = t;
  {
    ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_8)));
    {
      t = table_get_0(t);
      {
        d_9 = t;
        x_8 :
        if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
          {
            e_9 = ATgetFirst((ATermList) d_9);
            h_9 = (ATerm) ATgetNext((ATermList) d_9);
            y_8 :
            if(match_cons(e_9, sym__2))
              {
                f_9 = ATgetArgument(e_9, 0);
                g_9 = ATgetArgument(e_9, 1);
                {
                  if(((b_9 != NULL) && (b_9 != f_9)))
                    _fail(f_9);
                  else
                    b_9 = f_9;
                  if(((c_9 != NULL) && (c_9 != g_9)))
                    _fail(g_9);
                  else
                    c_9 = g_9;
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
    t = not_null(c_9);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm t_9 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_9)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
              u_9 = t;
              m_9 :
              if(match_cons(u_9, sym__2))
                {
                  v_9 = ATgetArgument(u_9, 0);
                  w_9 = ATgetArgument(u_9, 1);
                  {
                    if(((q_9 != NULL) && (q_9 != v_9)))
                      _fail(v_9);
                    else
                      q_9 = v_9;
                    if(((t_9 != NULL) && (t_9 != w_9)))
                      _fail(w_9);
                    else
                      t_9 = w_9;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(t_9);
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
  ATerm j_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_12;
      {
        t = table_get_0(t);
        {
          ATerm y_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, y_0);
        }
      }
      LocalPopChoice(n_12);
    }
  else
    {
      t = j_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12;
      s_12 = t;
      {
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
        t = term_z_11;
        {
          t = get_config_0(t);
          {
            b_10 = t;
            if(((a_10 != NULL) && (a_10 != b_10)))
              _fail(b_10);
            else
              a_10 = b_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_u_12);
          t = geq_0(t);
        }
      }
      t = s_12;
      t = x_61(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12;
      z_12 = t;
      {
        ATerm e_10 = NULL;
        ATerm f_10 = NULL;
        t = term_z_11;
        {
          t = get_config_0(t);
          {
            f_10 = t;
            if(((e_10 != NULL) && (e_10 != f_10)))
              _fail(f_10);
            else
              e_10 = f_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), term_b_13);
          t = geq_0(t);
        }
      }
      t = z_12;
      t = z_61(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
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
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym__2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      if(((k_10 != NULL) && (k_10 != l_10)))
        _fail(l_10);
      else
        k_10 = l_10;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_72 (ATerm), ATerm a_73 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  q_10 :
  if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
    {
      s_10 = ATgetFirst((ATermList) r_10);
      t_10 = (ATerm) ATgetNext((ATermList) r_10);
      {
        t = a_73(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm w_10 = NULL;
            w_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(w_10));
              t = z_72(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(t_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym__2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      {
        t = not_null(d_11);
        {
          ATerm i_11 (ATerm t)
          {
            ATerm c_13 = t;
            int d_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_11);
                LocalPopChoice(d_13);
              }
            else
              {
                t = c_13;
                {
                  ATerm g_13 = t;
                  int h_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(e_11);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_72, a_1);
                      t = i_11(t);
                      LocalPopChoice(h_13);
                    }
                  else
                    {
                      t = g_13;
                      t = Cons_2(t, _id, i_11);
                    }
                }
              }
            return(t);
          }
          t = i_11(t);
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
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__3))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      q_11 = ATgetArgument(n_11, 2);
      {
        ATerm i_13;
        i_13 = t;
        {
          ATerm u_11 = NULL;
          ATerm v_11 = NULL,x_11 = NULL;
          ATerm w_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(p_11));
          {
            ATerm n_13 = t;
            int o_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_13);
              }
            else
              {
                t = n_13;
                t = (ATerm) ATempty;
              }
            {
              w_11 = t;
              if(((v_11 != NULL) && (v_11 != w_11)))
                _fail(w_11);
              else
                v_11 = w_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(q_11));
            {
              t = union_1(t, eq_0);
              {
                x_11 = t;
                if(((u_11 != NULL) && (u_11 != x_11)))
                  _fail(x_11);
                else
                  u_11 = x_11;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_11), not_null(p_11), not_null(u_11));
            t = table_put_0(t);
          }
        }
        t = i_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        t = not_null(h_12);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
            k_12 = t;
            d_12 :
            if(match_cons(k_12, sym__2))
              {
                l_12 = ATgetArgument(k_12, 0);
                m_12 = ATgetArgument(k_12, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_12), not_null(l_12), not_null(m_12));
                  t = i_62(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_1);
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
  ATerm t_12 = NULL;
  ATerm v_12 = NULL;
  t_12 = t;
  {
    ATerm p_13 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_12)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_13;
      }
    {
      ATerm q_13;
      q_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_r_13, (ATerm) ATinsert(ATempty, not_null(t_12)));
        t = table_put_0(t);
      }
      t = q_13;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm f_1 (ATerm t)
          {
            t = term_s_13;
            return(t);
          }
          t = debug_1(t, f_1);
          return(t);
        }
        t = if_verbose4_1(t, e_1);
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = (ATerm) ATempty;
            }
          {
            ATerm g_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = term_c_14;
                return(t);
              }
              t = say_1(t, h_1);
              return(t);
            }
            t = if_verbose6_1(t, g_1);
            {
              ATerm w_12 = NULL;
              w_12 = t;
              if(((v_12 != NULL) && (v_12 != w_12)))
                _fail(w_12);
              else
                v_12 = w_12;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_12, not_null(v_12));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm j_1 (ATerm t)
                      {
                        t = term_h_14;
                        return(t);
                      }
                      t = say_1(t, j_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, i_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_i_12, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_12)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm l_1 (ATerm t)
                            {
                              t = term_c_14;
                              return(t);
                            }
                            t = say_1(t, l_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, k_1);
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
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_getenv(not_null(a_13));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_14;
      t = get_config_0(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_14;
            t = getenv_0(t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      t = term_o_14;
      return(t);
    }
    t = debug_1(t, n_1);
    return(t);
  }
  t = if_verbose5_1(t, m_1);
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm s_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_y_14;
          t = table_get_0(t);
          LocalPopChoice(x_14);
        }
      else
        {
          t = s_14;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_14;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = term_z_14;
          return(t);
        }
        t = debug_1(t, p_1);
        return(t);
      }
      t = if_verbose5_1(t, o_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_c_15;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, q_1);
      {
        t = xtc_load_0(t);
        {
          ATerm d_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(h_15);
            }
          else
            {
              t = d_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_c_15;
                return(t);
              }
              t = debug_1(t, t_1);
              return(t);
            }
            t = if_verbose5_1(t, s_1);
          }
        }
      }
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm e_13 = NULL;
        ATerm f_13 = NULL;
        f_13 = t;
        if(((e_13 != NULL) && (e_13 != f_13)))
          _fail(f_13);
        else
          e_13 = f_13;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_15), not_null(e_13)), term_i_15);
          {
            t = error_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_i_12;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      t = term_p_15;
                      return(t);
                    }
                    t = debug_1(t, v_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, u_1);
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
ATerm xtc_command_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm j_13 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    ATerm k_13 = NULL;
    t = g_75(t);
    {
      t = xtc_find_0(t);
      {
        k_13 = t;
        if(((j_13 != NULL) && (j_13 != k_13)))
          _fail(k_13);
        else
          j_13 = k_13;
      }
    }
  }
  t = q_15;
  {
    ATerm r_15;
    r_15 = t;
    {
      ATerm l_13 = NULL;
      ATerm m_13 = NULL;
      m_13 = t;
      if(((l_13 != NULL) && (l_13 != m_13)))
        _fail(m_13);
      else
        l_13 = m_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), not_null(l_13));
        t = call_0(t);
      }
    }
    t = r_15;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym_stdin_0))
    {
      ATerm y_13 = NULL;
      ATerm z_13 = NULL;
      ATerm a_14 = NULL;
      t = xtc_new_file_0(t);
      {
        z_13 = t;
        {
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
          {
            ATerm b_14 = NULL;
            t = o_0(t);
            {
              b_14 = t;
              if(((a_14 != NULL) && (a_14 != b_14)))
                _fail(b_14);
              else
                a_14 = b_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_13)), term_s_15));
              {
                ATerm t_15 = t;
                int u_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(u_15);
                  }
                else
                  {
                    t = t_15;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(y_13);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_13));
    }
  else
    {
      if(match_cons(w_13, sym_FILE_1))
        {
          x_13 = ATgetArgument(w_13, 0);
          {
            ATerm d_14 = NULL;
            ATerm e_14 = NULL;
            t = not_null(x_13);
            {
              ATerm f_14 = NULL;
              t = xtc_new_file_0(t);
              {
                e_14 = t;
                {
                  if(((d_14 != NULL) && (d_14 != e_14)))
                    _fail(e_14);
                  else
                    d_14 = e_14;
                  {
                    ATerm g_14 = NULL;
                    t = o_0(t);
                    {
                      g_14 = t;
                      if(((f_14 != NULL) && (f_14 != g_14)))
                        _fail(g_14);
                      else
                        f_14 = g_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_14)), term_s_15), not_null(x_13)), term_v_15));
                      {
                        ATerm i_16 = t;
                        int j_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(j_16);
                          }
                        else
                          {
                            t = i_16;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(d_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_14));
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
  ATerm r_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_stdin_0))
    {
      ATerm t_14 = NULL,v_14 = NULL;
      ATerm k_16;
      k_16 = t;
      {
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
      }
      t = k_16;
      {
        ATerm w_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(t_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        t = not_null(v_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_FILE_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      {
        ATerm j_15 = NULL,l_15 = NULL;
        ATerm k_15 = NULL;
        t = SSLgetAnnotations(not_null(f_15));
        {
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
        }
        {
          t = not_null(g_15);
          {
            ATerm n_15 = NULL;
            t = k_54(t);
            {
              l_15 = t;
              {
                ATerm o_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_15)), not_null(j_15));
                {
                  o_15 = t;
                  if(((n_15 != NULL) && (n_15 != o_15)))
                    _fail(o_15);
                  else
                    n_15 = o_15;
                }
                t = not_null(n_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm l_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          t = stdin_0(t);
        }
      LocalPopChoice(q_16);
      t = xtc_transform_file_2(t, i_75, j_75);
    }
  else
    {
      t = l_16;
      t = xtc_transform_term_2(t, i_75, j_75);
    }
  return(t);
}
ATerm parse_sglr_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
      a_16 = t;
      w_15 :
      if(match_cons(a_16, sym__2))
        {
          b_16 = ATgetArgument(a_16, 0);
          c_16 = ATgetArgument(a_16, 1);
          x_15 :
          if(match_cons(c_16, sym_File_1))
            {
              d_16 = ATgetArgument(c_16, 0);
              {
                if(((z_15 != NULL) && (z_15 != b_16)))
                  _fail(b_16);
                else
                  z_15 = b_16;
                {
                  if(((y_15 != NULL) && (y_15 != d_16)))
                    _fail(d_16);
                  else
                    y_15 = d_16;
                  {
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_15));
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = term_v_16;
                        return(t);
                      }
                      ATerm x_1 (ATerm t)
                      {
                        t = not_null(z_15);
                        return(t);
                      }
                      t = xtc_transform_2(t, w_1, x_1);
                      {
                        ATerm c_17 = t;
                        int d_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_16 = NULL;
                            ATerm y_1 (ATerm t)
                            {
                              t = term_e_17;
                              return(t);
                            }
                            t = xtc_transform_1(t, y_1);
                            {
                              ATerm f_16 = NULL;
                              t = read_from_0(t);
                              {
                                f_16 = t;
                                if(((e_16 != NULL) && (e_16 != f_16)))
                                  _fail(f_16);
                                else
                                  e_16 = f_16;
                              }
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_o_10, not_null(e_16));
                            }
                            LocalPopChoice(d_17);
                          }
                        else
                          {
                            t = c_17;
                            {
                              ATerm g_16 = NULL;
                              ATerm h_16 = NULL;
                              t = read_from_0(t);
                              {
                                h_16 = t;
                                if(((g_16 != NULL) && (g_16 != h_16)))
                                  _fail(h_16);
                                else
                                  g_16 = h_16;
                              }
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_m_10, not_null(g_16));
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
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      t = term_j_17;
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_65(t);
      LocalPopChoice(p_17);
      {
        ATerm q_17;
        q_17 = t;
        t = a_66(t);
        t = q_17;
      }
    }
  else
    {
      t = o_17;
      {
        ATerm r_17;
        r_17 = t;
        t = a_66(t);
        t = r_17;
        _fail(t);
      }
    }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      {
        ATerm s_17;
        s_17 = t;
        t = SSL_print(not_null(o_16), not_null(p_16));
        t = s_17;
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
  ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL;
  ATerm t_17;
  t_17 = t;
  {
    ATerm y_16 = NULL;
    ATerm z_16 = NULL;
    t = new_file_0(t);
    {
      y_16 = t;
      {
        if(((w_16 != NULL) && (w_16 != y_16)))
          _fail(y_16);
        else
          w_16 = y_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), term_u_17);
          {
            t = open_file_0(t);
            {
              z_16 = t;
              if(((x_16 != NULL) && (x_16 != z_16)))
                _fail(z_16);
              else
                x_16 = z_16;
            }
          }
        }
      }
    }
  }
  t = t_17;
  {
    ATerm b_17 = NULL;
    b_17 = t;
    if(((a_17 != NULL) && (a_17 != b_17)))
      _fail(b_17);
    else
      a_17 = b_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), (ATerm) ATinsert(ATempty, not_null(a_17)));
      {
        t = print_0(t);
        {
          t = not_null(w_16);
          {
            t = close_file_0(t);
            t = not_null(w_16);
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
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 (ATerm t)
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, h_17);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm g_17 = NULL;
                  g_17 = t;
                  f_17 :
                  if(!(match_int(g_17, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm b_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, a_2, b_2);
              }
            }
          return(t);
        }
        t = h_17(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm abs_test_file_0 (ATerm t)
{
  ATerm k_17 = NULL,m_17 = NULL;
  ATerm i_18;
  i_18 = t;
  {
    ATerm l_17 = NULL;
    l_17 = t;
    if(((k_17 != NULL) && (k_17 != l_17)))
      _fail(l_17);
    else
      k_17 = l_17;
  }
  t = i_18;
  {
    ATerm n_17 = NULL;
    t = term_v_15;
    {
      t = get_config_0(t);
      {
        t = get_path_0(t);
        {
          n_17 = t;
          if(((m_17 != NULL) && (m_17 != n_17)))
            _fail(n_17);
          else
            m_17 = n_17;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(k_17));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm parse_helper_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  x_17 = t;
  v_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      w_17 :
      if(match_cons(z_17, sym_File_1))
        {
          a_18 = ATgetArgument(z_17, 0);
          {
            ATerm d_18 = NULL;
            ATerm e_18 = NULL;
            t = not_null(a_18);
            {
              t = abs_test_file_0(t);
              {
                e_18 = t;
                if(((d_18 != NULL) && (d_18 != e_18)))
                  _fail(e_18);
                else
                  d_18 = e_18;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), (ATerm) ATmakeAppl(sym_File_1, not_null(d_18)));
              t = parse_sglr_0(t);
            }
          }
        }
      else
        {
          if(match_cons(z_17, sym_String_1))
            {
              a_18 = ATgetArgument(z_17, 0);
              {
                ATerm h_18 = NULL;
                t = not_null(a_18);
                {
                  t = print_to_tmp_file_0(t);
                  {
                    h_18 = t;
                    {
                      ATerm c_2 (ATerm t)
                      {
                        ATerm j_18 = NULL;
                        ATerm k_18 = NULL;
                        k_18 = t;
                        if(((j_18 != NULL) && (j_18 != k_18)))
                          _fail(k_18);
                        else
                          j_18 = k_18;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), (ATerm) ATmakeAppl(sym_File_1, not_null(j_18)));
                          t = parse_sglr_0(t);
                        }
                        return(t);
                      }
                      ATerm d_2 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, not_null(h_18));
                        t = rm_files_0(t);
                        return(t);
                      }
                      t = finally_2(t, c_2, d_2);
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
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym__3))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      v_18 = ATgetArgument(s_18, 2);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_18)), term_n_18), not_null(u_18)), term_m_18), term_l_18), not_null(v_18));
        t = parse_helper_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm execute_test_2 (ATerm t, ATerm n_60 (ATerm), ATerm o_60 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm y_20 = NULL;
        ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
        t = not_null(n_19);
        {
          y_20 = t;
          {
            b_21 = t;
            i_19 :
            if(match_cons(b_21, sym_Test_3))
              {
                c_21 = ATgetArgument(b_21, 0);
                e_21 = ATgetArgument(b_21, 1);
                f_21 = ATgetArgument(b_21, 2);
                j_19 :
                if(match_cons(c_21, sym_Descr_1))
                  {
                    d_21 = ATgetArgument(c_21, 0);
                    {
                      ATerm j_21 = NULL,l_21 = NULL,n_21 = NULL;
                      ATerm o_18;
                      o_18 = t;
                      {
                        ATerm k_21 = NULL;
                        t = n_60(t);
                        {
                          k_21 = t;
                          if(((j_21 != NULL) && (j_21 != k_21)))
                            _fail(k_21);
                          else
                            j_21 = k_21;
                        }
                      }
                      t = o_18;
                      {
                        ATerm m_21 = NULL;
                        t = o_60(t);
                        {
                          m_21 = t;
                          if(((l_21 != NULL) && (l_21 != m_21)))
                            _fail(m_21);
                          else
                            l_21 = m_21;
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(j_21), not_null(l_21), not_null(e_21));
                          {
                            ATerm p_21 = NULL;
                            t = parse_0(t);
                            {
                              n_21 = t;
                              {
                                ATerm q_21 = NULL;
                                q_21 = t;
                                if(((p_21 != NULL) && (p_21 != q_21)))
                                  _fail(q_21);
                                else
                                  p_21 = q_21;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), not_null(f_21));
                                  {
                                    t = create_test_result_0(t);
                                    {
                                      ATerm p_18;
                                      p_18 = t;
                                      {
                                        ATerm s_21 = NULL;
                                        ATerm t_21 = NULL;
                                        t_21 = t;
                                        if(((s_21 != NULL) && (s_21 != t_21)))
                                          _fail(t_21);
                                        else
                                          s_21 = t_21;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(m_19), not_null(y_20), not_null(n_21), not_null(s_21));
                                          t = echo_report_0(t);
                                        }
                                      }
                                      t = p_18;
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
  ATerm k_22 = NULL;
  ATerm l_22 = NULL;
  l_22 = t;
  if(((k_22 != NULL) && (k_22 != l_22)))
    _fail(l_22);
  else
    k_22 = l_22;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), term_q_8);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm t_68 (ATerm))
{
  ATerm a_23 = NULL;
  ATerm b_23 = NULL;
  b_23 = t;
  if(((a_23 != NULL) && (a_23 != b_23)))
    _fail(b_23);
  else
    a_23 = b_23;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(a_23));
    {
      ATerm a_24 (ATerm t)
      {
        ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
        c_23 = t;
        y_22 :
        if(match_cons(c_23, sym__2))
          {
            d_23 = ATgetArgument(c_23, 0);
            e_23 = ATgetArgument(c_23, 1);
            z_22 :
            if(((ATgetType(e_23) == AT_LIST) && ATisEmpty(e_23)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                  {
                    f_23 = ATgetFirst((ATermList) e_23);
                    g_23 = (ATerm) ATgetNext((ATermList) e_23);
                    {
                      ATerm k_23 = NULL,r_23 = NULL;
                      ATerm q_18;
                      q_18 = t;
                      {
                        ATerm l_23 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(f_23));
                        {
                          t = t_68(t);
                          {
                            l_23 = t;
                            if(((k_23 != NULL) && (k_23 != l_23)))
                              _fail(l_23);
                            else
                              k_23 = l_23;
                          }
                        }
                      }
                      t = q_18;
                      {
                        ATerm s_23 = NULL,u_23 = NULL;
                        ATerm t_23 = NULL;
                        t = not_null(d_23);
                        {
                          t = inc_0(t);
                          {
                            t_23 = t;
                            if(((s_23 != NULL) && (s_23 != t_23)))
                              _fail(t_23);
                            else
                              s_23 = t_23;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(g_23));
                          {
                            t = a_24(t);
                            {
                              u_23 = t;
                              if(((r_23 != NULL) && (r_23 != u_23)))
                                _fail(u_23);
                              else
                                r_23 = u_23;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(r_23)), not_null(k_23));
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
      t = a_24(t);
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
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_int_to_string(not_null(q_24));
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm))
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_73(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
        x_24 = t;
        w_24 :
        if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
          {
            y_24 = ATgetFirst((ATermList) x_24);
            z_24 = (ATerm) ATgetNext((ATermList) x_24);
            {
              ATerm c_25 = NULL,e_25 = NULL;
              ATerm y_18;
              y_18 = t;
              {
                ATerm d_25 = NULL;
                t = not_null(y_24);
                {
                  t = q_73(t);
                  {
                    d_25 = t;
                    if(((c_25 != NULL) && (c_25 != d_25)))
                      _fail(d_25);
                    else
                      c_25 = d_25;
                  }
                }
              }
              t = y_18;
              {
                ATerm f_25 = NULL;
                t = not_null(z_24);
                {
                  t = foldr_3(t, o_73, p_73, q_73);
                  {
                    f_25 = t;
                    if(((e_25 != NULL) && (e_25 != f_25)))
                      _fail(f_25);
                    else
                      e_25 = f_25;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(e_25));
                  t = p_73(t);
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
  ATerm e_2 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_q_8;
    return(t);
  }
  t = foldr_3(t, e_2, add_0, f_2);
  return(t);
}
ATerm echo_start_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm a_19;
    a_19 = t;
    {
      ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,z_25 = NULL,a_26 = NULL;
      q_25 = t;
      l_25 :
      if(match_cons(q_25, sym_TestSuite_3))
        {
          r_25 = ATgetArgument(q_25, 0);
          t_25 = ATgetArgument(q_25, 1);
          z_25 = ATgetArgument(q_25, 2);
          m_25 :
          if(match_cons(r_25, sym_Name_1))
            {
              s_25 = ATgetArgument(r_25, 0);
              n_25 :
              if(match_cons(z_25, sym_Tests_1))
                {
                  a_26 = ATgetArgument(z_25, 0);
                  {
                    ATerm b_26 = NULL;
                    if(((o_25 != NULL) && (o_25 != s_25)))
                      _fail(s_25);
                    else
                      o_25 = s_25;
                    {
                      if(((p_25 != NULL) && (p_25 != a_26)))
                        _fail(a_26);
                      else
                        p_25 = a_26;
                      {
                        t = term_h_8;
                        {
                          t = echo_0(t);
                          {
                            ATerm c_26 = NULL;
                            t = not_null(p_25);
                            {
                              t = length_0(t);
                              {
                                t = int_to_string_0(t);
                                {
                                  c_26 = t;
                                  if(((b_26 != NULL) && (b_26 != c_26)))
                                    _fail(c_26);
                                  else
                                    b_26 = c_26;
                                }
                              }
                            }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_19), not_null(b_26)), term_c_19), not_null(o_25)), term_b_19);
                              {
                                t = concat_strings_0(t);
                                {
                                  t = echo_0(t);
                                  {
                                    t = term_h_8;
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
    t = a_19;
    return(t);
  }
  t = if_verbose1_1(t, g_2);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_close_file(not_null(g_26));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,q_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym__2))
    {
      m_26 = ATgetArgument(l_26, 0);
      q_26 = ATgetArgument(l_26, 1);
      t = SSL_WriteToBinaryFile(not_null(m_26), not_null(q_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
        ATerm e_19;
        e_19 = t;
        {
          ATerm l_27 = NULL;
          ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
          t = c_76(t);
          {
            l_27 = t;
            {
              if(((f_27 != NULL) && (f_27 != l_27)))
                _fail(l_27);
              else
                f_27 = l_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_27), not_null(b_27), not_null(c_27));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_19 = t;
                    int g_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), term_h_19);
                        t = table_get_0(t);
                        LocalPopChoice(g_19);
                      }
                    else
                      {
                        t = f_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_27 = t;
                      y_26 :
                      if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
                        {
                          n_27 = ATgetFirst((ATermList) m_27);
                          o_27 = (ATerm) ATgetNext((ATermList) m_27);
                          {
                            if(((g_27 != NULL) && (g_27 != n_27)))
                              _fail(n_27);
                            else
                              g_27 = n_27;
                            {
                              if(((h_27 != NULL) && (h_27 != o_27)))
                                _fail(o_27);
                              else
                                h_27 = o_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_27), term_h_19, (ATerm) ATinsert(CheckATermList(not_null(h_27)), (ATerm) ATinsert(CheckATermList(not_null(g_27)), not_null(b_27))));
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
        t = e_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm o_19;
  o_19 = t;
  {
    t = q_76(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_p_19;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = o_19;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
      y_27 = t;
      t_27 :
      if(match_cons(y_27, sym__2))
        {
          z_27 = ATgetArgument(y_27, 0);
          a_28 = ATgetArgument(y_27, 1);
          {
            if(((x_27 != NULL) && (x_27 != z_27)))
              _fail(z_27);
            else
              x_27 = z_27;
            if(((w_27 != NULL) && (w_27 != a_28)))
              _fail(a_28);
            else
              w_27 = a_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_19);
      t = SSL_open_file(not_null(x_27), not_null(w_27));
    }
  else
    {
      t = q_19;
      {
        ATerm b_28 = NULL;
        ATerm c_28 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_s_19;
          return(t);
        }
        t = obsolete_1(t, i_2);
        {
          b_28 = t;
          {
            if(((x_27 != NULL) && (x_27 != b_28)))
              _fail(b_28);
            else
              x_27 = b_28;
            {
              ATerm t_19;
              t_19 = t;
              {
                ATerm d_28 = NULL;
                t = term_u_17;
                {
                  d_28 = t;
                  if(((c_28 != NULL) && (c_28 != d_28)))
                    _fail(d_28);
                  else
                    c_28 = d_28;
                }
              }
              t = t_19;
              t = SSL_open_file(not_null(x_27), not_null(c_28));
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
  ATerm i_28 = NULL;
  ATerm j_28 = NULL;
  t = term_u_19;
  {
    t = new_0(t);
    {
      j_28 = t;
      if(((i_28 != NULL) && (i_28 != j_28)))
        _fail(j_28);
      else
        i_28 = j_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_28), term_v_19);
    {
      t = conc_strings_0(t);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
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
  ATerm n_28 = NULL;
  t = new_file_0(t);
  {
    n_28 = t;
    {
      ATerm y_19;
      y_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), term_u_17);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), term_u_19);
            {
              ATerm j_2 (ATerm t)
              {
                t = term_z_19;
                return(t);
              }
              t = assert_1(t, j_2);
            }
          }
        }
      }
      t = y_19;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm u_28 = NULL;
  s_28 = t;
  {
    ATerm v_28 = NULL;
    t = xtc_new_file_0(t);
    {
      v_28 = t;
      {
        if(((u_28 != NULL) && (u_28 != v_28)))
          _fail(v_28);
        else
          u_28 = v_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_28), not_null(s_28));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(u_28);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_28));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_28 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_29 = NULL;
      a_29 = t;
      {
        if(((z_28 != NULL) && (z_28 != a_29)))
          _fail(a_29);
        else
          z_28 = a_29;
        t = SSL_ReadFromFile(not_null(z_28));
      }
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_c_20;
          return(t);
        }
        t = debug_1(t, k_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_29 = NULL;
  ATerm g_29 = NULL;
  e_29 = t;
  {
    ATerm d_20;
    d_20 = t;
    {
      ATerm h_29 = NULL;
      t = term_e_20;
      {
        h_29 = t;
        if(((g_29 != NULL) && (g_29 != h_29)))
          _fail(h_29);
        else
          g_29 = h_29;
      }
    }
    t = d_20;
    {
      t = SSL_open_file(not_null(e_29), not_null(g_29));
      t = SSL_close_file(not_null(e_29));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym_stdin_0))
    {
      ATerm r_29 = NULL;
      ATerm s_29 = NULL;
      t = term_f_20;
      {
        t = ReadFromFile_0(t);
        {
          s_29 = t;
          if(((r_29 != NULL) && (r_29 != s_29)))
            _fail(s_29);
          else
            r_29 = s_29;
        }
      }
      t = not_null(r_29);
    }
  else
    {
      if(match_cons(p_29, sym_FILE_1))
        {
          q_29 = ATgetArgument(p_29, 0);
          {
            ATerm u_29 = NULL;
            ATerm v_29 = NULL;
            t = not_null(q_29);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  v_29 = t;
                  if(((u_29 != NULL) && (u_29 != v_29)))
                    _fail(v_29);
                  else
                    u_29 = v_29;
                }
              }
            }
            t = not_null(u_29);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm r_75 (ATerm))
{
  t = read_from_0(t);
  {
    t = r_75(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm parse_unit_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
    t = echo_start_0(t);
    {
      j_30 = t;
      d_30 :
      if(match_cons(j_30, sym_TestSuite_3))
        {
          k_30 = ATgetArgument(j_30, 0);
          m_30 = ATgetArgument(j_30, 1);
          o_30 = ATgetArgument(j_30, 2);
          e_30 :
          if(match_cons(k_30, sym_Name_1))
            {
              l_30 = ATgetArgument(k_30, 0);
              f_30 :
              if(match_cons(m_30, sym_Sort_1))
                {
                  n_30 = ATgetArgument(m_30, 0);
                  g_30 :
                  if(match_cons(o_30, sym_Tests_1))
                    {
                      p_30 = ATgetArgument(o_30, 0);
                      {
                        ATerm q_30 = NULL,r_30 = NULL;
                        if(((i_30 != NULL) && (i_30 != l_30)))
                          _fail(l_30);
                        else
                          i_30 = l_30;
                        {
                          if(((h_30 != NULL) && (h_30 != n_30)))
                            _fail(n_30);
                          else
                            h_30 = n_30;
                          {
                            if(((q_30 != NULL) && (q_30 != p_30)))
                              _fail(p_30);
                            else
                              q_30 = p_30;
                            {
                              t = not_null(q_30);
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  ATerm n_2 (ATerm t)
                                  {
                                    t = not_null(h_30);
                                    return(t);
                                  }
                                  t = execute_test_2(t, n_2, get_parse_table_0);
                                  return(t);
                                }
                                t = map_with_index_1(t, m_2);
                                {
                                  ATerm s_30 = NULL;
                                  s_30 = t;
                                  if(((r_30 != NULL) && (r_30 != s_30)))
                                    _fail(s_30);
                                  else
                                    r_30 = s_30;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_TestResults_1, not_null(r_30));
                                    {
                                      ATerm g_20;
                                      g_20 = t;
                                      {
                                        ATerm t_30 = NULL;
                                        ATerm u_30 = NULL;
                                        u_30 = t;
                                        if(((t_30 != NULL) && (t_30 != u_30)))
                                          _fail(u_30);
                                        else
                                          t_30 = u_30;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), not_null(t_30));
                                          t = echo_results_0(t);
                                        }
                                      }
                                      t = g_20;
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
  t = xtc_io_transform_1(t, l_2);
  return(t);
}
ATerm parse_table_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm a_31 = NULL;
    a_31 = t;
    y_30 :
    if(!(match_string(a_31, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm h_20;
    h_20 = t;
    {
      ATerm b_31 = NULL;
      ATerm c_31 = NULL;
      c_31 = t;
      if(((b_31 != NULL) && (b_31 != c_31)))
        _fail(c_31);
      else
        b_31 = c_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(b_31));
        t = set_config_0(t);
      }
    }
    t = h_20;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_i_20;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm parse_unit_options_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = parse_table_option_0(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,l_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym__2))
    {
      i_31 = ATgetArgument(h_31, 0);
      l_31 = ATgetArgument(h_31, 1);
      t = SSL_copy(not_null(i_31), not_null(l_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_stderr_0))
    {
      ATerm y_31 = NULL,a_32 = NULL;
      ATerm l_20;
      l_20 = t;
      {
        ATerm z_31 = NULL;
        t = SSLgetAnnotations(not_null(w_31));
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
      }
      t = l_20;
      {
        ATerm b_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(y_31));
        {
          b_32 = t;
          if(((a_32 != NULL) && (a_32 != b_32)))
            _fail(b_32);
          else
            a_32 = b_32;
        }
        t = not_null(a_32);
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
  ATerm n_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_stdout_0))
    {
      ATerm p_32 = NULL,r_32 = NULL;
      ATerm m_20;
      m_20 = t;
      {
        ATerm q_32 = NULL;
        t = SSLgetAnnotations(not_null(n_32));
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
      }
      t = m_20;
      {
        ATerm s_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_32));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_FILE_1))
    {
      f_33 = ATgetArgument(e_33, 0);
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = NULL;
            ATerm i_33 = NULL;
            t = m_0(t);
            {
              i_33 = t;
              {
                if(((h_33 != NULL) && (h_33 != i_33)))
                  _fail(i_33);
                else
                  h_33 = i_33;
                {
                  ATerm p_20 = t;
                  int q_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(q_20);
                    }
                  else
                    {
                      t = p_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), not_null(h_33));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_33));
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_33 = NULL;
                  ATerm l_33 = NULL;
                  t = m_0(t);
                  {
                    l_33 = t;
                    {
                      if(((k_33 != NULL) && (k_33 != l_33)))
                        _fail(l_33);
                      else
                        k_33 = l_33;
                      {
                        ATerm t_20 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm u_20 = t;
                            int v_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(v_20);
                              }
                            else
                              {
                                t = u_20;
                                {
                                  ATerm w_20 = t;
                                  int x_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(x_20);
                                    }
                                  else
                                    {
                                      t = w_20;
                                      {
                                        ATerm m_33 = NULL;
                                        m_33 = t;
                                        if(((f_33 != NULL) && (f_33 != m_33)))
                                          _fail(m_33);
                                        else
                                          f_33 = m_33;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = t_20;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), not_null(k_33));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_33));
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  {
                    ATerm o_33 = NULL;
                    t = m_0(t);
                    {
                      o_33 = t;
                      if(((f_33 != NULL) && (f_33 != o_33)))
                        _fail(o_33);
                      else
                        f_33 = o_33;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_33));
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
  ATerm i_34 = NULL,j_34 = NULL,l_34 = NULL;
  i_34 = t;
  h_34 :
  if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
    {
      j_34 = ATgetFirst((ATermList) i_34);
      l_34 = (ATerm) ATgetNext((ATermList) i_34);
      t = not_null(l_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm u_34 = NULL,y_34 = NULL,j_35 = NULL;
  u_34 = t;
  t_34 :
  if(match_cons(u_34, sym__2))
    {
      y_34 = ATgetArgument(u_34, 0);
      j_35 = ATgetArgument(u_34, 1);
      {
        ATerm z_20;
        z_20 = t;
        {
          ATerm m_35 = NULL;
          ATerm n_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), not_null(j_35));
          {
            ATerm a_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(g_21);
              }
            else
              {
                t = a_21;
                t = (ATerm) ATempty;
              }
            {
              n_35 = t;
              if(((m_35 != NULL) && (m_35 != n_35)))
                _fail(n_35);
              else
                m_35 = n_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_34), not_null(j_35), not_null(m_35));
            t = table_put_0(t);
          }
        }
        t = z_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm w_35 = NULL,z_35 = NULL,a_36 = NULL;
  ATerm h_21;
  h_21 = t;
  {
    ATerm b_36 = NULL;
    ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
    t = z_75(t);
    {
      b_36 = t;
      {
        if(((a_36 != NULL) && (a_36 != b_36)))
          _fail(b_36);
        else
          a_36 = b_36;
        {
          ATerm i_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), term_h_19);
              t = table_get_0(t);
              LocalPopChoice(o_21);
            }
          else
            {
              t = i_21;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_36 = t;
            v_35 :
            if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
              {
                j_36 = ATgetFirst((ATermList) i_36);
                k_36 = (ATerm) ATgetNext((ATermList) i_36);
                {
                  if(((z_35 != NULL) && (z_35 != j_36)))
                    _fail(j_36);
                  else
                    z_35 = j_36;
                  {
                    if(((w_35 != NULL) && (w_35 != k_36)))
                      _fail(k_36);
                    else
                      w_35 = k_36;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_36), term_h_19, not_null(w_35));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_35);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm l_36 = NULL;
                              l_36 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), not_null(l_36));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
  t = h_21;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  t = SSL_remove(not_null(z_36));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm r_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_65(t);
      t = y_65(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = r_21;
      {
        t = y_65(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm h_37 = NULL;
  ATerm v_21;
  v_21 = t;
  {
    ATerm i_37 = NULL;
    ATerm j_37 = NULL;
    t = y_75(t);
    {
      i_37 = t;
      {
        if(((h_37 != NULL) && (h_37 != i_37)))
          _fail(i_37);
        else
          h_37 = i_37;
        {
          ATerm k_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), term_h_19);
          {
            ATerm w_21 = t;
            int x_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_21);
              }
            else
              {
                t = w_21;
                t = (ATerm) ATempty;
              }
            {
              k_37 = t;
              if(((j_37 != NULL) && (j_37 != k_37)))
                _fail(k_37);
              else
                j_37 = k_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_37), term_h_19, (ATerm) ATinsert(CheckATermList(not_null(j_37)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_21;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm p_37 = NULL,q_37 = NULL;
  ATerm s_2 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  t = begin_scope_1(t, s_2);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm y_21;
      y_21 = t;
      {
        ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_22;
            t = table_get_0(t);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          r_37 = t;
          o_37 :
          if(((ATgetType(r_37) == AT_LIST) && !(ATisEmpty(r_37))))
            {
              s_37 = ATgetFirst((ATermList) r_37);
              t_37 = (ATerm) ATgetNext((ATermList) r_37);
              {
                if(((q_37 != NULL) && (q_37 != s_37)))
                  _fail(s_37);
                else
                  q_37 = s_37;
                {
                  if(((p_37 != NULL) && (p_37 != t_37)))
                    _fail(t_37);
                  else
                    p_37 = t_37;
                  {
                    t = not_null(q_37);
                    {
                      ATerm v_2 (ATerm t)
                      {
                        ATerm c_22 = t;
                        int d_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(d_22);
                          }
                        else
                          {
                            t = c_22;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, v_2);
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
      t = y_21;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_z_19;
          return(t);
        }
        t = end_scope_1(t, w_2);
      }
      return(t);
    }
    t = restore_always_2(t, w_74, u_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_37 = NULL;
        ATerm x_37 = NULL;
        t = term_v_15;
        {
          t = get_config_0(t);
          {
            x_37 = t;
            if(((w_37 != NULL) && (w_37 != x_37)))
              _fail(x_37);
            else
              w_37 = x_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_37));
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = term_f_20;
      }
    {
      t = x_74(t);
      {
        ATerm b_3 (ATerm t)
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_s_15;
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
        t = copy_to_1(t, b_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, x_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm c_38 = NULL;
    c_38 = t;
    b_38 :
    if(!(match_string(c_38, "-v")))
      {
        if(!(match_string(c_38, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_m_22;
    t = set_config_0(t);
    t = term_n_22;
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_o_22;
    return(t);
  }
  t = Option_3(t, f_3, o_3, p_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm h_38 = NULL;
    h_38 = t;
    d_38 :
    if(!(match_string(h_38, "-k")))
      {
        if(!(match_string(h_38, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm p_22;
    p_22 = t;
    {
      ATerm i_38 = NULL;
      ATerm j_38 = NULL;
      t = string_to_int_0(t);
      {
        j_38 = t;
        if(((i_38 != NULL) && (i_38 != j_38)))
          _fail(j_38);
        else
          i_38 = j_38;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(i_38));
        t = set_config_0(t);
      }
    }
    t = p_22;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_r_22;
    return(t);
  }
  t = ArgOption_3(t, q_3, r_3, s_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  t = SSL_string_to_int(not_null(m_38));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm u_38 = NULL;
        u_38 = t;
        p_38 :
        if(!(match_string(u_38, "-S")))
          {
            if(!(match_string(u_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_u_22;
        t = set_config_0(t);
        t = term_v_22;
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_w_22;
        return(t);
      }
      t = Option_3(t, t_3, v_3, w_3);
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm x_22 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 (ATerm t)
            {
              ATerm v_38 = NULL;
              v_38 = t;
              q_38 :
              if(!(match_string(v_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              ATerm y_38 = NULL;
              ATerm i_23;
              i_23 = t;
              {
                ATerm w_38 = NULL;
                ATerm x_38 = NULL;
                t = string_to_int_0(t);
                {
                  x_38 = t;
                  if(((w_38 != NULL) && (w_38 != x_38)))
                    _fail(x_38);
                  else
                    w_38 = x_38;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(w_38));
                  t = set_config_0(t);
                }
              }
              t = i_23;
              {
                ATerm z_38 = NULL;
                z_38 = t;
                if(((y_38 != NULL) && (y_38 != z_38)))
                  _fail(z_38);
                else
                  y_38 = z_38;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_38));
              }
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = term_j_23;
              return(t);
            }
            t = ArgOption_3(t, v_4, w_4, x_4);
            LocalPopChoice(h_23);
          }
        else
          {
            t = x_22;
            {
              ATerm y_4 (ATerm t)
              {
                ATerm a_39 = NULL;
                a_39 = t;
                t_38 :
                if(!(match_string(a_39, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_4 (ATerm t)
              {
                t = term_m_23;
                t = set_config_0(t);
                t = term_n_23;
                return(t);
              }
              ATerm a_5 (ATerm t)
              {
                t = term_o_23;
                return(t);
              }
              t = Option_3(t, y_4, z_4, a_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm i_39 = NULL;
    i_39 = t;
    d_39 :
    if(!(match_string(i_39, "-o")))
      {
        if(!(match_string(i_39, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm n_39 = NULL;
    ATerm x_23;
    x_23 = t;
    {
      ATerm j_39 = NULL;
      ATerm l_39 = NULL;
      l_39 = t;
      if(((j_39 != NULL) && (j_39 != l_39)))
        _fail(l_39);
      else
        j_39 = l_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(j_39));
        t = set_config_0(t);
      }
    }
    t = x_23;
    {
      ATerm o_39 = NULL;
      o_39 = t;
      if(((n_39 != NULL) && (n_39 != o_39)))
        _fail(o_39);
      else
        n_39 = o_39;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_39));
    }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  t = ArgOption_3(t, b_5, c_5, d_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = z_23;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm s_39 = NULL;
          s_39 = t;
          r_39 :
          if(!(match_string(s_39, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = term_d_24;
          t = set_config_0(t);
          t = term_e_24;
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_f_24;
          return(t);
        }
        t = Option_3(t, e_5, s_5, t_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  y_39 = t;
  w_39 :
  if(match_string(y_39, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
        {
          z_39 = ATgetFirst((ATermList) y_39);
          a_40 = (ATerm) ATgetNext((ATermList) y_39);
          x_39 :
          if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
            {
              b_40 = ATgetFirst((ATermList) a_40);
              c_40 = (ATerm) ATgetNext((ATermList) a_40);
              {
                ATerm g_40 = NULL;
                ATerm g_24;
                g_24 = t;
                {
                  t = not_null(z_39);
                  t = j_0(t);
                }
                t = g_24;
                {
                  ATerm h_40 = NULL;
                  t = not_null(b_40);
                  {
                    t = k_0(t);
                    {
                      h_40 = t;
                      if(((g_40 != NULL) && (g_40 != h_40)))
                        _fail(h_40);
                      else
                        g_40 = h_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_40)), not_null(g_40));
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
  ATerm v_5 (ATerm t)
  {
    ATerm o_40 = NULL;
    o_40 = t;
    l_40 :
    if(!(match_string(o_40, "-i")))
      {
        if(!(match_string(o_40, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm r_40 = NULL;
    ATerm h_24;
    h_24 = t;
    {
      ATerm p_40 = NULL;
      ATerm q_40 = NULL;
      q_40 = t;
      if(((p_40 != NULL) && (p_40 != q_40)))
        _fail(q_40);
      else
        p_40 = q_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(p_40));
        t = set_config_0(t);
      }
    }
    t = h_24;
    {
      ATerm s_40 = NULL;
      s_40 = t;
      if(((r_40 != NULL) && (r_40 != s_40)))
        _fail(s_40);
      else
        r_40 = s_40;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_40));
    }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_i_24;
    return(t);
  }
  t = ArgOption_3(t, v_5, w_5, y_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_40 = NULL;
  ATerm n_24;
  n_24 = t;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm y_40 = NULL,z_40 = NULL;
      y_40 = t;
      w_40 :
      if(match_cons(y_40, sym_Program_1))
        {
          z_40 = ATgetArgument(y_40, 0);
          if(((x_40 != NULL) && (x_40 != z_40)))
            _fail(z_40);
          else
            x_40 = z_40;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, f_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), not_null(x_40)), term_o_24));
      {
        t = printnl_0(t);
        {
          t = term_q_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(ATempty, term_r_24));
  {
    t = printnl_0(t);
    {
      t = term_q_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  t = SSL_TicksToSeconds(not_null(c_41));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  g_41 :
  if(match_cons(h_41, sym__2))
    {
      i_41 = ATgetArgument(h_41, 0);
      j_41 = ATgetArgument(h_41, 1);
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_41), not_null(j_41));
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            t = SSL_addr(not_null(i_41), not_null(j_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_73(t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
        q_41 = t;
        p_41 :
        if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
          {
            r_41 = ATgetFirst((ATermList) q_41);
            s_41 = (ATerm) ATgetNext((ATermList) q_41);
            {
              ATerm v_41 = NULL;
              ATerm w_41 = NULL;
              t = not_null(s_41);
              {
                t = foldr_2(t, m_73, n_73);
                {
                  w_41 = t;
                  if(((v_41 != NULL) && (v_41 != w_41)))
                    _fail(w_41);
                  else
                    v_41 = w_41;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(v_41));
                t = n_73(t);
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
ATerm crush_2 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm))
{
  ATerm d_42 = NULL;
  ATerm f_42 = NULL;
  d_42 = t;
  {
    ATerm g_42 = NULL;
    ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
    t = not_null(d_42);
    {
      g_42 = t;
      {
        t = SSL_explode_term(not_null(g_42));
        {
          i_42 = t;
          c_42 :
          if(match_cons(i_42, sym__2))
            {
              j_42 = ATgetArgument(i_42, 0);
              k_42 = ATgetArgument(i_42, 1);
              if(((f_42 != NULL) && (f_42 != k_42)))
                _fail(k_42);
              else
                f_42 = k_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_42);
      t = foldr_2(t, k_72, l_72);
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
    ATerm h_6 (ATerm t)
    {
      t = term_z_18;
      return(t);
    }
    t = crush_2(t, h_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym__2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      {
        ATerm a_25;
        a_25 = t;
        {
          ATerm b_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_42), not_null(s_42));
              LocalPopChoice(g_25);
            }
          else
            {
              t = b_25;
              t = SSL_gtr(not_null(r_42), not_null(s_42));
            }
        }
        t = a_25;
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
  ATerm y_42 = NULL;
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
      z_42 = t;
      x_42 :
      if(match_cons(z_42, sym__2))
        {
          a_43 = ATgetArgument(z_42, 0);
          b_43 = ATgetArgument(z_42, 1);
          {
            if(((y_42 != NULL) && (y_42 != a_43)))
              _fail(a_43);
            else
              y_42 = a_43;
            if(((y_42 != NULL) && (y_42 != b_43)))
              _fail(b_43);
            else
              y_42 = b_43;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25;
      u_25 = t;
      {
        ATerm e_43 = NULL;
        ATerm f_43 = NULL;
        t = term_z_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), term_q_8);
          t = geq_0(t);
        }
      }
      t = u_25;
      t = u_61(t);
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_43 = NULL,l_43 = NULL;
    ATerm v_25;
    v_25 = t;
    {
      ATerm k_43 = NULL;
      t = run_time_0(t);
      {
        k_43 = t;
        if(((j_43 != NULL) && (j_43 != k_43)))
          _fail(k_43);
        else
          j_43 = k_43;
      }
    }
    t = v_25;
    {
      ATerm m_43 = NULL;
      t = term_w_25;
      {
        t = get_config_0(t);
        {
          m_43 = t;
          if(((l_43 != NULL) && (l_43 != m_43)))
            _fail(m_43);
          else
            l_43 = m_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_25), not_null(j_43)), term_l_9), not_null(l_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_6);
  {
    t = term_z_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_Version_0))
    {
      ATerm v_43 = NULL,x_43 = NULL;
      ATerm y_25;
      y_25 = t;
      {
        ATerm w_43 = NULL;
        t = SSLgetAnnotations(not_null(t_43));
        {
          w_43 = t;
          if(((v_43 != NULL) && (v_43 != w_43)))
            _fail(w_43);
          else
            v_43 = w_43;
        }
      }
      t = y_25;
      {
        ATerm y_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_43));
        {
          y_43 = t;
          if(((x_43 != NULL) && (x_43 != y_43)))
            _fail(y_43);
          else
            x_43 = y_43;
        }
        t = not_null(x_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm f_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_26);
            }
          else
            {
              t = f_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_6);
  t = u_79(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  t = SSL_table_create(not_null(d_44));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  {
    ATerm i_26;
    i_26 = t;
    {
      t = term_j_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_26, term_n_26, not_null(h_44));
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
  ATerm l_44 = NULL;
  l_44 = t;
  t = SSL_table_destroy(not_null(l_44));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  t = SSL_exit(not_null(p_44));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(((ATgetType(t_44) == AT_LIST) && ATisEmpty(t_44)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
        {
          u_44 = ATgetFirst((ATermList) t_44);
          v_44 = (ATerm) ATgetNext((ATermList) t_44);
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
  ATerm o_26;
  o_26 = t;
  {
    ATerm y_44 = NULL;
    ATerm b_45 = NULL;
    ATerm p_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = p_26;
        {
          ATerm z_44 = NULL;
          ATerm a_45 = NULL;
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
          t = (ATerm) ATinsert(ATempty, not_null(z_44));
        }
      }
    {
      b_45 = t;
      if(((y_44 != NULL) && (y_44 != b_45)))
        _fail(b_45);
      else
        y_44 = b_45;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_22, not_null(y_44));
      t = printnl_0(t);
    }
  }
  t = o_26;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  m_45 = t;
  j_45 :
  if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
    {
      k_45 = ATgetFirst((ATermList) m_45);
      l_45 = (ATerm) ATgetNext((ATermList) m_45);
      {
        ATerm p_45 = NULL;
        t = not_null(l_45);
        {
          ATerm s_26;
          s_26 = t;
          {
            ATerm q_45 = NULL,s_45 = NULL,u_45 = NULL;
            ATerm t_26;
            t_26 = t;
            {
              ATerm r_45 = NULL;
              t = i_0(t);
              {
                r_45 = t;
                if(((q_45 != NULL) && (q_45 != r_45)))
                  _fail(r_45);
                else
                  q_45 = r_45;
              }
            }
            t = t_26;
            {
              ATerm t_45 = NULL;
              t = not_null(k_45);
              {
                t = h_0(t);
                {
                  t_45 = t;
                  if(((s_45 != NULL) && (s_45 != t_45)))
                    _fail(t_45);
                  else
                    s_45 = t_45;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_45)), not_null(s_45));
                {
                  u_45 = t;
                  if(((p_45 != NULL) && (p_45 != u_45)))
                    _fail(u_45);
                  else
                    p_45 = u_45;
                }
              }
            }
          }
          t = s_26;
          {
            ATerm o_6 (ATerm t)
            {
              t = not_null(p_45);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_45) == AT_LIST) && ATisEmpty(m_45)))
        {
          {
            t = term_u_19;
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
  ATerm p_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Program_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      {
        ATerm n_46 = NULL,p_46 = NULL;
        ATerm o_46 = NULL;
        t = SSLgetAnnotations(not_null(f_46));
        {
          o_46 = t;
          if(((n_46 != NULL) && (n_46 != o_46)))
            _fail(o_46);
          else
            n_46 = o_46;
        }
        {
          t = not_null(g_46);
          {
            ATerm r_46 = NULL;
            t = j_59(t);
            {
              p_46 = t;
              {
                ATerm t_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_46)), not_null(n_46));
                {
                  t_46 = t;
                  if(((r_46 != NULL) && (r_46 != t_46)))
                    _fail(t_46);
                  else
                    r_46 = t_46;
                }
                t = not_null(r_46);
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
  ATerm g_47 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_47 = NULL;
      t = term_w_25;
      {
        t = get_config_0(t);
        {
          h_47 = t;
          if(((g_47 != NULL) && (g_47 != h_47)))
            _fail(h_47);
          else
            g_47 = h_47;
        }
      }
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm m_47 = NULL;
            m_47 = t;
            if(((g_47 != NULL) && (g_47 != m_47)))
              _fail(m_47);
            else
              g_47 = m_47;
            return(t);
          }
          t = Program_1(t, r_6);
          return(t);
        }
        t = fetch_1(t, q_6);
      }
    }
  {
    t = term_w_26;
    {
      t = echo_0(t);
      {
        t = term_e_27;
        {
          t = table_get_0(t);
          {
            ATerm t_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, t_6);
            {
              ATerm u_6 (ATerm t)
              {
                ATerm n_47 = NULL;
                ATerm o_47 = NULL;
                o_47 = t;
                if(((n_47 != NULL) && (n_47 != o_47)))
                  _fail(o_47);
                else
                  n_47 = o_47;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_47)), term_i_27);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_6);
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
  ATerm j_27;
  j_27 = t;
  {
    ATerm t_47 = NULL;
    ATerm u_47 = NULL;
    u_47 = t;
    if(((t_47 != NULL) && (t_47 != u_47)))
      _fail(u_47);
    else
      t_47 = u_47;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(ATempty, not_null(t_47)));
      t = printnl_0(t);
    }
  }
  t = j_27;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm k_27;
  k_27 = t;
  {
    t = k_76(t);
    t = debug_0(t);
  }
  t = k_27;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm b_48 = NULL,c_48 = NULL;
  b_48 = t;
  a_48 :
  if(match_cons(b_48, sym_Undefined_1))
    {
      c_48 = ATgetArgument(b_48, 0);
      {
        ATerm f_48 = NULL,h_48 = NULL;
        ATerm g_48 = NULL;
        t = SSLgetAnnotations(not_null(b_48));
        {
          g_48 = t;
          if(((f_48 != NULL) && (f_48 != g_48)))
            _fail(g_48);
          else
            f_48 = g_48;
        }
        {
          t = not_null(c_48);
          {
            ATerm j_48 = NULL;
            t = k_59(t);
            {
              h_48 = t;
              {
                ATerm k_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_48)), not_null(f_48));
                {
                  k_48 = t;
                  if(((j_48 != NULL) && (j_48 != k_48)))
                    _fail(k_48);
                  else
                    j_48 = k_48;
                }
                t = not_null(j_48);
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
ATerm fetch_1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm p_48 (ATerm t)
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_67, _id);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = Cons_2(t, _id, p_48);
      }
    return(t);
  }
  t = p_48(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_81 (ATerm))
{
  t = fetch_1(t, b_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  t_48 :
  if(match_cons(u_48, sym_Help_0))
    {
      ATerm w_48 = NULL,y_48 = NULL;
      ATerm r_27;
      r_27 = t;
      {
        ATerm x_48 = NULL;
        t = SSLgetAnnotations(not_null(u_48));
        {
          x_48 = t;
          if(((w_48 != NULL) && (w_48 != x_48)))
            _fail(x_48);
          else
            w_48 = x_48;
        }
      }
      t = r_27;
      {
        ATerm z_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_48));
        {
          z_48 = t;
          if(((y_48 != NULL) && (y_48 != z_48)))
            _fail(z_48);
          else
            y_48 = z_48;
        }
        t = not_null(y_48);
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
  ATerm e_49 = NULL;
  e_49 = t;
  t = SSL_implode_string(not_null(e_49));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = s_27;
      {
        ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
        j_49 = t;
        i_49 :
        if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
          {
            k_49 = ATgetFirst((ATermList) j_49);
            l_49 = (ATerm) ATgetNext((ATermList) j_49);
            {
              t = not_null(k_49);
              {
                ATerm v_6 (ATerm t)
                {
                  t = not_null(l_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_6);
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
  ATerm v_49 = NULL;
  ATerm x_49 = NULL;
  v_49 = t;
  {
    ATerm y_49 = NULL;
    ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
    t = not_null(v_49);
    {
      y_49 = t;
      {
        t = SSL_explode_term(not_null(y_49));
        {
          a_50 = t;
          t_49 :
          if(match_cons(a_50, sym__2))
            {
              b_50 = ATgetArgument(a_50, 0);
              c_50 = ATgetArgument(a_50, 1);
              u_49 :
              if(match_string(b_50, ""))
                {
                  if(((x_49 != NULL) && (x_49 != c_50)))
                    _fail(c_50);
                  else
                    x_49 = c_50;
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
      t = not_null(x_49);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm g_50 (ATerm t)
  {
    ATerm v_27 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_50);
        LocalPopChoice(e_28);
      }
    else
      {
        t = v_27;
        {
          t = Nil_0(t);
          t = n_67(t);
        }
      }
    return(t);
  }
  t = g_50(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym__2))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      {
        t = not_null(k_50);
        {
          ATerm w_6 (ATerm t)
          {
            t = not_null(l_50);
            return(t);
          }
          t = at_end_1(t, w_6);
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
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  t = SSL_explode_string(not_null(q_50));
  return(t);
}
ATerm _2 (ATerm t, ATerm s_52 (ATerm), ATerm t_52 (ATerm))
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(match_cons(z_50, sym__2))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      {
        ATerm f_51 = NULL,h_51 = NULL;
        ATerm g_51 = NULL;
        t = SSLgetAnnotations(not_null(z_50));
        {
          g_51 = t;
          if(((f_51 != NULL) && (f_51 != g_51)))
            _fail(g_51);
          else
            f_51 = g_51;
        }
        {
          t = not_null(a_51);
          {
            ATerm j_51 = NULL;
            t = s_52(t);
            {
              h_51 = t;
              {
                t = not_null(b_51);
                {
                  ATerm l_51 = NULL;
                  t = t_52(t);
                  {
                    j_51 = t;
                    {
                      ATerm m_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_51), not_null(j_51)), not_null(f_51));
                      {
                        m_51 = t;
                        if(((l_51 != NULL) && (l_51 != m_51)))
                          _fail(m_51);
                        else
                          l_51 = m_51;
                      }
                      t = not_null(l_51);
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
    ATerm h_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = h_28;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t_51 :
  if(match_cons(u_51, sym__2))
    {
      v_51 = ATgetArgument(u_51, 0);
      w_51 = ATgetArgument(u_51, 1);
      {
        ATerm l_28;
        l_28 = t;
        t = SSL_printnl(not_null(v_51), not_null(w_51));
        t = l_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm m_28;
  m_28 = t;
  {
    ATerm c_52 = NULL,g_52 = NULL;
    ATerm o_28;
    o_28 = t;
    {
      ATerm f_52 = NULL;
      t = j_76(t);
      {
        f_52 = t;
        if(((c_52 != NULL) && (c_52 != f_52)))
          _fail(f_52);
        else
          c_52 = f_52;
      }
    }
    t = o_28;
    {
      ATerm h_52 = NULL;
      h_52 = t;
      if(((g_52 != NULL) && (g_52 != h_52)))
        _fail(h_52);
      else
        g_52 = h_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_52)), not_null(c_52)));
        t = printnl_0(t);
      }
    }
  }
  t = m_28;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm k_52 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2(t, y_66, k_52);
      }
    return(t);
  }
  t = k_52(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  t = SSL_is_string(not_null(r_52));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = r_28;
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              ATerm y_28 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = y_28;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, x_6);
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
              c_53 = t;
              b_53 :
              if(match_cons(c_53, sym_Path_1))
                {
                  d_53 = ATgetArgument(c_53, 0);
                  t = not_null(d_53);
                }
              else
                {
                  if(match_cons(c_53, sym_Var_1))
                    {
                      d_53 = ATgetArgument(c_53, 0);
                      {
                        t = not_null(d_53);
                        {
                          ATerm c_29 = t;
                          int d_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_29);
                            }
                          else
                            {
                              t = c_29;
                              {
                                ATerm z_6 (ATerm t)
                                {
                                  t = term_f_29;
                                  return(t);
                                }
                                t = debug_1(t, z_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_53, sym_Prefix_2))
                        {
                          d_53 = ATgetArgument(c_53, 0);
                          e_53 = ATgetArgument(c_53, 1);
                          {
                            ATerm j_53 = NULL,l_53 = NULL;
                            ATerm i_29;
                            i_29 = t;
                            {
                              ATerm k_53 = NULL;
                              t = not_null(d_53);
                              {
                                t = eval_config_0(t);
                                {
                                  k_53 = t;
                                  if(((j_53 != NULL) && (j_53 != k_53)))
                                    _fail(k_53);
                                  else
                                    j_53 = k_53;
                                }
                              }
                            }
                            t = i_29;
                            {
                              ATerm m_53 = NULL;
                              t = not_null(e_53);
                              {
                                t = eval_config_0(t);
                                {
                                  m_53 = t;
                                  if(((l_53 != NULL) && (l_53 != m_53)))
                                    _fail(m_53);
                                  else
                                    l_53 = m_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_53), not_null(l_53));
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
  ATerm u_53 = NULL;
  u_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_29, not_null(u_53));
    {
      t = table_get_0(t);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_29;
              m_29 = t;
              {
                ATerm w_53 = NULL;
                ATerm x_53 = NULL;
                x_53 = t;
                if(((w_53 != NULL) && (w_53 != x_53)))
                  _fail(x_53);
                else
                  w_53 = x_53;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_29, not_null(u_53), not_null(w_53));
                  t = table_put_0(t);
                }
              }
              t = m_29;
            }
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm n_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_65(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = n_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  e_54 = t;
  d_54 :
  if(match_cons(e_54, sym__2))
    {
      f_54 = ATgetArgument(e_54, 0);
      g_54 = ATgetArgument(e_54, 1);
      t = SSL_table_get(not_null(f_54), not_null(g_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym__3))
    {
      p_54 = ATgetArgument(o_54, 0);
      q_54 = ATgetArgument(o_54, 1);
      r_54 = ATgetArgument(o_54, 2);
      {
        ATerm w_29;
        w_29 = t;
        {
          ATerm v_54 = NULL;
          ATerm w_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_54), not_null(q_54));
          {
            ATerm x_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_29);
              }
            else
              {
                t = x_29;
                t = (ATerm) ATempty;
              }
            {
              w_54 = t;
              if(((v_54 != NULL) && (v_54 != w_54)))
                _fail(w_54);
              else
                v_54 = w_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_54), not_null(q_54), (ATerm) ATinsert(CheckATermList(not_null(v_54)), not_null(r_54)));
            t = table_put_0(t);
          }
        }
        t = w_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm a_55 = NULL;
  ATerm b_55 = NULL;
  t = term_u_19;
  {
    t = g_82(t);
    {
      b_55 = t;
      if(((a_55 != NULL) && (a_55 != b_55)))
        _fail(b_55);
      else
        a_55 = b_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_26, term_d_27, not_null(a_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_string(h_55, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_55) == AT_LIST) && !(ATisEmpty(h_55))))
        {
          i_55 = ATgetFirst((ATermList) h_55);
          j_55 = (ATerm) ATgetNext((ATermList) h_55);
          {
            ATerm m_55 = NULL;
            ATerm z_29;
            z_29 = t;
            {
              t = not_null(i_55);
              t = a_0(t);
            }
            t = z_29;
            {
              ATerm n_55 = NULL;
              t = term_u_19;
              {
                t = d_0(t);
                {
                  n_55 = t;
                  if(((m_55 != NULL) && (m_55 != n_55)))
                    _fail(n_55);
                  else
                    m_55 = n_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_55)), not_null(m_55));
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
  ATerm d_7 (ATerm t)
  {
    ATerm s_55 = NULL;
    s_55 = t;
    r_55 :
    if(!(match_string(s_55, "--help")))
      {
        if(!(match_string(s_55, "-h")))
          {
            if(!(match_string(s_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_b_30;
    {
      t = set_config_0(t);
      t = term_c_30;
    }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = term_v_30;
    return(t);
  }
  t = Option_3(t, d_7, f_7, l_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  u_55 :
  if(((ATgetType(v_55) == AT_LIST) && !(ATisEmpty(v_55))))
    {
      w_55 = ATgetFirst((ATermList) v_55);
      x_55 = (ATerm) ATgetNext((ATermList) v_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_54 (ATerm), ATerm c_54 (ATerm))
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  g_56 :
  if(((ATgetType(h_56) == AT_LIST) && !(ATisEmpty(h_56))))
    {
      i_56 = ATgetFirst((ATermList) h_56);
      j_56 = (ATerm) ATgetNext((ATermList) h_56);
      {
        ATerm n_56 = NULL,p_56 = NULL;
        ATerm o_56 = NULL;
        t = SSLgetAnnotations(not_null(h_56));
        {
          o_56 = t;
          if(((n_56 != NULL) && (n_56 != o_56)))
            _fail(o_56);
          else
            n_56 = o_56;
        }
        {
          t = not_null(i_56);
          {
            ATerm r_56 = NULL;
            t = b_54(t);
            {
              p_56 = t;
              {
                t = not_null(j_56);
                {
                  ATerm t_56 = NULL;
                  t = c_54(t);
                  {
                    r_56 = t;
                    {
                      ATerm u_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_56)), not_null(p_56)), not_null(n_56));
                      {
                        u_56 = t;
                        if(((t_56 != NULL) && (t_56 != u_56)))
                          _fail(u_56);
                        else
                          t_56 = u_56;
                      }
                      t = not_null(t_56);
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
  ATerm e_57 = NULL;
  e_57 = t;
  d_57 :
  if(((ATgetType(e_57) == AT_LIST) && ATisEmpty(e_57)))
    {
      {
        ATerm g_57 = NULL,i_57 = NULL;
        ATerm w_30;
        w_30 = t;
        {
          ATerm h_57 = NULL;
          t = SSLgetAnnotations(not_null(e_57));
          {
            h_57 = t;
            if(((g_57 != NULL) && (g_57 != h_57)))
              _fail(h_57);
            else
              g_57 = h_57;
          }
        }
        t = w_30;
        {
          ATerm j_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_57));
          {
            j_57 = t;
            if(((i_57 != NULL) && (i_57 != j_57)))
              _fail(j_57);
            else
              i_57 = j_57;
          }
          t = not_null(i_57);
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
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  o_57 :
  if(match_cons(p_57, sym__2))
    {
      q_57 = ATgetArgument(p_57, 0);
      r_57 = ATgetArgument(p_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_29, not_null(q_57), not_null(r_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm x_30;
  x_30 = t;
  {
    ATerm z_30 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_31;
        t = e_82(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = z_30;
        {
        }
      }
  }
  t = x_30;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm z_57 = NULL;
      ATerm f_31;
      f_31 = t;
      {
        ATerm x_57 = NULL;
        ATerm y_57 = NULL;
        y_57 = t;
        if(((x_57 != NULL) && (x_57 != y_57)))
          _fail(y_57);
        else
          x_57 = y_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(x_57));
          t = set_config_0(t);
        }
      }
      t = f_31;
      {
        ATerm a_58 = NULL;
        a_58 = t;
        if(((z_57 != NULL) && (z_57 != a_58)))
          _fail(a_58);
        else
          z_57 = a_58;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_57));
      }
      return(t);
    }
    ATerm n_7 (ATerm t)
    {
      ATerm j_31 = t;
      int k_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              {
                t = e_82(t);
                t = Cons_2(t, _id, n_7);
              }
            }
          LocalPopChoice(k_31);
        }
      else
        {
          t = j_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_7, n_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  ATerm o_31;
  o_31 = t;
  {
    ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
    j_58 = t;
    f_58 :
    if(match_cons(j_58, sym__3))
      {
        k_58 = ATgetArgument(j_58, 0);
        l_58 = ATgetArgument(j_58, 1);
        m_58 = ATgetArgument(j_58, 2);
        {
          if(((g_58 != NULL) && (g_58 != k_58)))
            _fail(k_58);
          else
            g_58 = k_58;
          {
            if(((h_58 != NULL) && (h_58 != l_58)))
              _fail(l_58);
            else
              h_58 = l_58;
            {
              if(((i_58 != NULL) && (i_58 != m_58)))
                _fail(m_58);
              else
                i_58 = m_58;
              t = SSL_table_put(not_null(g_58), not_null(h_58), not_null(i_58));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_82 (ATerm))
{
  ATerm p_58 = NULL;
  ATerm p_31;
  p_31 = t;
  {
    t = term_q_31;
    t = table_put_0(t);
  }
  t = p_31;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm r_31 = t;
      int s_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_82(t);
          LocalPopChoice(s_31);
        }
      else
        {
          t = r_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_7);
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_31;
          x_31 = t;
          {
            ATerm c_32 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_30;
                t = get_config_0(t);
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = fetch_1(t, Help_0);
              }
          }
          t = x_31;
          {
            t = system_usage_0(t);
            {
              t = term_z_18;
              t = exit_0(t);
            }
          }
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_7 (ATerm t)
                {
                  ATerm u_7 (ATerm t)
                  {
                    ATerm q_58 = NULL;
                    q_58 = t;
                    if(((p_58 != NULL) && (p_58 != q_58)))
                      _fail(q_58);
                    else
                      p_58 = q_58;
                    return(t);
                  }
                  t = Undefined_1(t, u_7);
                  return(t);
                }
                t = fetch_1(t, p_7);
                {
                  ATerm v_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_58)), term_g_32);
                    return(t);
                  }
                  t = say_1(t, v_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                {
                }
              }
          }
        }
      {
        ATerm h_32;
        h_32 = t;
        {
          t = term_x_26;
          t = table_destroy_0(t);
        }
        t = h_32;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  t = parse_options_1(t, a_80);
  {
    t = store_options_0(t);
    {
      t = c_80(t);
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_80);
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm k_32 = t;
              int l_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_80(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_32);
                }
              else
                {
                  t = k_32;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm e_80 (ATerm), ATerm f_80 (ATerm))
{
  t = option_wrap_4(t, e_80, default_usage_0, _id, f_80);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  ATerm w_7 (ATerm t)
  {
    ATerm o_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_75(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = o_32;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    t = xtc_io_1(t, c_75);
    return(t);
  }
  t = option_wrap_2(t, w_7, x_7);
  return(t);
}
ATerm io_parse_unit_0 (ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        t = parse_table_option_0(t);
      }
    return(t);
  }
  t = xtc_io_wrap_2(t, z_7, parse_unit_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_unit_0(t);
  return(t);
}
