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
ATerm term_q_31;
ATerm term_l_30;
ATerm term_c_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_s_25;
ATerm term_n_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_t_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_c_21;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_u_16;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_z_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_n_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_f_8;
void init_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-----------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("results testsuite ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("successes : ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("failures  : ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--parse-table", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("* OK   : test ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("* ERROR: test ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** Result:   ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** Expected: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Failure_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Success_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_n_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_q_13);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_ParseResult_2, term_h_10, term_e_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("executing testsuite ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" with ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" tests", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p FILE   Use parse table FILE (required)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_o_18);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_x_18);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_g_18);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_18);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_x_18);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_x_18);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_q_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_x_18);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__3, term_p_26, term_q_26, (ATerm) ATempty);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1 (ATerm, ATerm y_73 (ATerm));
ATerm count_in_string_1 (ATerm, ATerm g_57 (ATerm));
ATerm echo_results_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm echo_report_0 (ATerm);
ATerm create_test_result_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm a_72 (ATerm));
ATerm xtc_transform_term_2 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm));
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm k_58 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm s_58 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm r_58 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm t_58 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm));
ATerm union_1 (ATerm, ATerm p_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm c_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm z_71 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm q_51 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm parse_sglr_0 (ATerm);
ATerm finally_2 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm));
ATerm print_0 (ATerm);
ATerm print_to_tmp_file_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm abs_test_file_0 (ATerm);
ATerm parse_helper_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm execute_test_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm n_65 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm length_0 (ATerm);
ATerm echo_start_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_73 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm k_72 (ATerm));
ATerm parse_unit_0 (ATerm);
ATerm parse_table_option_0 (ATerm);
ATerm parse_unit_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_71 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_71 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm crush_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_58 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_78 (ATerm));
ATerm Program_1 (ATerm, ATerm d_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm y_49 (ATerm), ATerm z_49 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_73 (ATerm));
ATerm map_1 (ATerm, ATerm s_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_51 (ATerm), ATerm i_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm u_71 (ATerm), ATerm v_71 (ATerm));
ATerm io_parse_unit_0 (ATerm);
ATerm main_0 (ATerm);
ATerm filter_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = filter_1(t, y_73);
              return(t);
            }
            t = Cons_2(t, y_73, b_0);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
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
                    t = filter_1(t, y_73);
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
ATerm count_in_string_1 (ATerm t, ATerm g_57 (ATerm))
{
  t = filter_1(t, g_57);
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
    ATerm d_8;
    d_8 = t;
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
                    t = term_f_8;
                    {
                      t = echo_0(t);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(a_3));
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
                                t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(i_3));
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
                                        t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(l_3));
                                        {
                                          t = conc_strings_0(t);
                                          {
                                            t = echo_0(t);
                                            {
                                              t = term_f_8;
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
    t = d_8;
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_8;
  m_8 = t;
  {
    t = error_0(t);
    {
      t = term_n_8;
      t = exit_0(t);
    }
  }
  t = m_8;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_8;
      t = get_config_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        t = (ATerm) ATinsert(ATempty, term_v_8);
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
                              ATerm w_8;
                              w_8 = t;
                              {
                                ATerm a_9 = t;
                                int i_9 = stack_ptr;
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
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), not_null(c_4)), term_k_9), not_null(q_4)), term_j_9);
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
                                    LocalPopChoice(i_9);
                                  }
                                else
                                  {
                                    t = a_9;
                                    {
                                    }
                                  }
                              }
                              t = w_8;
                              {
                                ATerm r_9;
                                r_9 = t;
                                {
                                  ATerm s_9 = t;
                                  int x_9 = stack_ptr;
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
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), not_null(c_4)), term_k_9), not_null(t_4)), term_y_9);
                                            {
                                              t = concat_strings_0(t);
                                              {
                                                t = echo_0(t);
                                                {
                                                  t = not_null(d_4);
                                                  {
                                                    ATerm r_0 (ATerm t)
                                                    {
                                                      t = term_z_9;
                                                      return(t);
                                                    }
                                                    t = debug_1(t, r_0);
                                                    {
                                                      t = not_null(e_4);
                                                      {
                                                        ATerm s_0 (ATerm t)
                                                        {
                                                          t = term_c_10;
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
                                      LocalPopChoice(x_9);
                                    }
                                  else
                                    {
                                      t = s_9;
                                      {
                                      }
                                    }
                                }
                                t = r_9;
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
      ATerm d_10 = t;
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
          t = d_10;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(r_5));
        {
          ATerm g_10 = t;
          if((PushChoice() == 0))
            {
              t = eq_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_10;
            }
        }
      }
    }
    t = term_h_10;
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = not_null(r_5);
    {
      ATerm m_10 = t;
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
          t = m_10;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(r_5));
        t = eq_0(t);
      }
    }
    t = term_n_10;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = not_null(r_5);
    {
      ATerm o_10 = t;
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
          t = o_10;
        }
    }
    t = term_h_10;
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_n_10;
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
                  ATerm p_10 = t;
                  int u_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_6(t);
                      LocalPopChoice(u_10);
                    }
                  else
                    {
                      t = p_10;
                      {
                        ATerm v_10 = t;
                        int x_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_6(t);
                            LocalPopChoice(x_10);
                          }
                        else
                          {
                            t = v_10;
                            t = c_6(t);
                          }
                      }
                    }
                }
              else
                {
                  ATerm y_10 = t;
                  int z_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_6(t);
                      LocalPopChoice(z_10);
                    }
                  else
                    {
                      t = y_10;
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
                      ATerm a_11 = t;
                      int f_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_6(t);
                          LocalPopChoice(f_11);
                        }
                      else
                        {
                          t = a_11;
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
    ATerm g_11;
    g_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATinsert(CheckATermList(not_null(g_6)), term_j_11));
      t = call_0(t);
    }
    t = g_11;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, a_72, t_0);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, i_72, j_72);
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
ATerm fork_and_wait_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm c_7 = NULL;
  ATerm e_7 = NULL;
  c_7 = t;
  {
    t = fork_0(t);
    {
      e_7 = t;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL;
            g_7 = t;
            y_6 :
            if(match_int(g_7, 0))
              {
                t = not_null(c_7);
                t = k_58(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
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
ATerm if_verbose5_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_11;
      t_11 = t;
      {
        ATerm o_8 = NULL;
        ATerm p_8 = NULL;
        t = term_y_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), term_z_11);
          t = geq_0(t);
        }
      }
      t = t_11;
      t = s_58(t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_12;
  a_12 = t;
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    t_8 = t;
    if(((s_8 != NULL) && (s_8 != t_8)))
      _fail(t_8);
    else
      s_8 = t_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(s_8));
      t = printnl_0(t);
    }
  }
  t = a_12;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm z_8 = NULL;
  ATerm b_9 = NULL,c_9 = NULL;
  z_8 = t;
  {
    ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_8)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_9)));
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
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_12;
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
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_12;
      r_12 = t;
      {
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
        t = term_y_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_s_12);
          t = geq_0(t);
        }
      }
      t = r_12;
      t = r_58(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm u_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12;
      y_12 = t;
      {
        ATerm e_10 = NULL;
        ATerm f_10 = NULL;
        t = term_y_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), term_z_12);
          t = geq_0(t);
        }
      }
      t = y_12;
      t = t_58(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = u_12;
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
ATerm HdMember_p__2 (ATerm t, ATerm t_69 (ATerm), ATerm u_69 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  q_10 :
  if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
    {
      s_10 = ATgetFirst((ATermList) r_10);
      t_10 = (ATerm) ATgetNext((ATermList) r_10);
      {
        t = u_69(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm w_10 = NULL;
            w_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(w_10));
              t = t_69(t);
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
ATerm union_1 (ATerm t, ATerm p_69 (ATerm))
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
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_11);
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                {
                  ATerm d_13 = t;
                  int g_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(e_11);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_69, a_1);
                      t = i_11(t);
                      LocalPopChoice(g_13);
                    }
                  else
                    {
                      t = d_13;
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
        ATerm h_13;
        h_13 = t;
        {
          ATerm u_11 = NULL;
          ATerm v_11 = NULL,x_11 = NULL;
          ATerm w_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(p_11));
          {
            ATerm i_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_13);
              }
            else
              {
                t = i_13;
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
        t = h_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm c_59 (ATerm))
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
                  t = c_59(t);
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
    ATerm o_13 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_12)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_13;
      }
    {
      ATerm p_13;
      p_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_12, term_q_13, (ATerm) ATinsert(ATempty, not_null(t_12)));
        t = table_put_0(t);
      }
      t = p_13;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm f_1 (ATerm t)
          {
            t = term_r_13;
            return(t);
          }
          t = debug_1(t, f_1);
          return(t);
        }
        t = if_verbose4_1(t, e_1);
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = (ATerm) ATempty;
            }
          {
            ATerm g_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = term_u_13;
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
                t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(v_12));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm j_1 (ATerm t)
                      {
                        t = term_c_14;
                        return(t);
                      }
                      t = say_1(t, j_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, i_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_12)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm l_1 (ATerm t)
                            {
                              t = term_u_13;
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
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_14;
      t = get_config_0(t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_14;
            t = getenv_0(t);
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
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
      t = term_n_14;
      return(t);
    }
    t = debug_1(t, n_1);
    return(t);
  }
  t = if_verbose5_1(t, m_1);
  {
    ATerm o_14;
    o_14 = t;
    {
      ATerm p_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_14;
          t = table_get_0(t);
          LocalPopChoice(s_14);
        }
      else
        {
          t = p_14;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = o_14;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = term_y_14;
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
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, q_1);
      {
        t = xtc_load_0(t);
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_b_15;
                return(t);
              }
              t = debug_1(t, t_1);
              return(t);
            }
            t = if_verbose5_1(t, s_1);
          }
        }
      }
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm e_13 = NULL;
        ATerm f_13 = NULL;
        f_13 = t;
        if(((e_13 != NULL) && (e_13 != f_13)))
          _fail(f_13);
        else
          e_13 = f_13;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_15), not_null(e_13)), term_h_15);
          {
            t = error_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_c_12;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      t = term_m_15;
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
ATerm xtc_command_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm j_13 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    ATerm k_13 = NULL;
    t = z_71(t);
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
  t = p_15;
  {
    ATerm q_15;
    q_15 = t;
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
    t = q_15;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_13)), term_r_15));
              {
                ATerm s_15 = t;
                int t_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(t_15);
                  }
                else
                  {
                    t = s_15;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_14)), term_r_15), not_null(x_13)), term_u_15));
                      {
                        ATerm v_15 = t;
                        int i_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(i_16);
                          }
                        else
                          {
                            t = v_15;
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
      ATerm j_16;
      j_16 = t;
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
      t = j_16;
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
ATerm FILE_1 (ATerm t, ATerm q_51 (ATerm))
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
            t = q_51(t);
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
ATerm xtc_transform_2 (ATerm t, ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16 = t;
      int r_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(r_16);
        }
      else
        {
          t = q_16;
          t = stdin_0(t);
        }
      LocalPopChoice(l_16);
      t = xtc_transform_file_2(t, b_72, c_72);
    }
  else
    {
      t = k_16;
      t = xtc_transform_term_2(t, b_72, c_72);
    }
  return(t);
}
ATerm parse_sglr_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
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
                        t = term_u_16;
                        return(t);
                      }
                      ATerm x_1 (ATerm t)
                      {
                        t = not_null(z_15);
                        return(t);
                      }
                      t = xtc_transform_2(t, w_1, x_1);
                      {
                        ATerm v_16 = t;
                        int c_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_16 = NULL;
                            ATerm y_1 (ATerm t)
                            {
                              t = term_d_17;
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
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_n_10, not_null(e_16));
                            }
                            LocalPopChoice(c_17);
                          }
                        else
                          {
                            t = v_16;
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
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_h_10, not_null(g_16));
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
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = term_i_17;
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm))
{
  ATerm j_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_62(t);
      LocalPopChoice(m_17);
      {
        ATerm n_17;
        n_17 = t;
        t = u_62(t);
        t = n_17;
      }
    }
  else
    {
      t = j_17;
      {
        ATerm o_17;
        o_17 = t;
        t = u_62(t);
        t = o_17;
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
        ATerm p_17;
        p_17 = t;
        t = SSL_print(not_null(o_16), not_null(p_16));
        t = p_17;
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
  ATerm q_17;
  q_17 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), term_r_17);
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
  t = q_17;
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
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 (ATerm t)
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, h_17);
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
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
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm abs_test_file_0 (ATerm t)
{
  ATerm k_17 = NULL,u_18 = NULL;
  ATerm w_17;
  w_17 = t;
  {
    ATerm l_17 = NULL;
    l_17 = t;
    if(((k_17 != NULL) && (k_17 != l_17)))
      _fail(l_17);
    else
      k_17 = l_17;
  }
  t = w_17;
  {
    ATerm v_18 = NULL;
    t = term_u_15;
    {
      t = get_config_0(t);
      {
        t = get_path_0(t);
        {
          v_18 = t;
          if(((u_18 != NULL) && (u_18 != v_18)))
            _fail(v_18);
          else
            u_18 = v_18;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(k_17));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm parse_helper_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  g_19 = t;
  e_19 :
  if(match_cons(g_19, sym__2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      f_19 :
      if(match_cons(i_19, sym_File_1))
        {
          j_19 = ATgetArgument(i_19, 0);
          {
            ATerm m_19 = NULL;
            ATerm o_19 = NULL;
            t = not_null(j_19);
            {
              t = abs_test_file_0(t);
              {
                o_19 = t;
                if(((m_19 != NULL) && (m_19 != o_19)))
                  _fail(o_19);
                else
                  m_19 = o_19;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), (ATerm) ATmakeAppl(sym_File_1, not_null(m_19)));
              t = parse_sglr_0(t);
            }
          }
        }
      else
        {
          if(match_cons(i_19, sym_String_1))
            {
              j_19 = ATgetArgument(i_19, 0);
              {
                ATerm r_19 = NULL;
                t = not_null(j_19);
                {
                  t = print_to_tmp_file_0(t);
                  {
                    r_19 = t;
                    {
                      ATerm c_2 (ATerm t)
                      {
                        ATerm y_19 = NULL;
                        ATerm z_19 = NULL;
                        z_19 = t;
                        if(((y_19 != NULL) && (y_19 != z_19)))
                          _fail(z_19);
                        else
                          y_19 = z_19;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), (ATerm) ATmakeAppl(sym_File_1, not_null(y_19)));
                          t = parse_sglr_0(t);
                        }
                        return(t);
                      }
                      ATerm d_2 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, not_null(r_19));
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
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__3))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      m_20 = ATgetArgument(j_20, 2);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_20)), term_z_17), not_null(l_20)), term_y_17), term_x_17), not_null(m_20));
        t = parse_helper_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm execute_test_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm h_21 = NULL,n_21 = NULL,o_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym__2))
    {
      n_21 = ATgetArgument(h_21, 0);
      o_21 = ATgetArgument(h_21, 1);
      {
        ATerm v_21 = NULL;
        ATerm e_22 = NULL,f_22 = NULL,h_22 = NULL,i_22 = NULL,k_22 = NULL;
        t = not_null(o_21);
        {
          v_21 = t;
          {
            e_22 = t;
            e_21 :
            if(match_cons(e_22, sym_Test_3))
              {
                f_22 = ATgetArgument(e_22, 0);
                i_22 = ATgetArgument(e_22, 1);
                k_22 = ATgetArgument(e_22, 2);
                f_21 :
                if(match_cons(f_22, sym_Descr_1))
                  {
                    h_22 = ATgetArgument(f_22, 0);
                    {
                      ATerm o_22 = NULL,q_22 = NULL,s_22 = NULL;
                      ATerm a_18;
                      a_18 = t;
                      {
                        ATerm p_22 = NULL;
                        t = h_57(t);
                        {
                          p_22 = t;
                          if(((o_22 != NULL) && (o_22 != p_22)))
                            _fail(p_22);
                          else
                            o_22 = p_22;
                        }
                      }
                      t = a_18;
                      {
                        ATerm r_22 = NULL;
                        t = i_57(t);
                        {
                          r_22 = t;
                          if(((q_22 != NULL) && (q_22 != r_22)))
                            _fail(r_22);
                          else
                            q_22 = r_22;
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(o_22), not_null(q_22), not_null(i_22));
                          {
                            ATerm u_22 = NULL;
                            t = parse_0(t);
                            {
                              s_22 = t;
                              {
                                ATerm v_22 = NULL;
                                v_22 = t;
                                if(((u_22 != NULL) && (u_22 != v_22)))
                                  _fail(v_22);
                                else
                                  u_22 = v_22;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_22), not_null(k_22));
                                  {
                                    t = create_test_result_0(t);
                                    {
                                      ATerm b_18;
                                      b_18 = t;
                                      {
                                        ATerm w_22 = NULL;
                                        ATerm x_22 = NULL;
                                        x_22 = t;
                                        if(((w_22 != NULL) && (w_22 != x_22)))
                                          _fail(x_22);
                                        else
                                          w_22 = x_22;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(n_21), not_null(v_21), not_null(s_22), not_null(w_22));
                                          t = echo_report_0(t);
                                        }
                                      }
                                      t = b_18;
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
  ATerm h_23 = NULL;
  ATerm i_23 = NULL;
  i_23 = t;
  if(((h_23 != NULL) && (h_23 != i_23)))
    _fail(i_23);
  else
    h_23 = i_23;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), term_n_8);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm x_23 = NULL;
  ATerm y_23 = NULL;
  y_23 = t;
  if(((x_23 != NULL) && (x_23 != y_23)))
    _fail(y_23);
  else
    x_23 = y_23;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(x_23));
    {
      ATerm s_24 (ATerm t)
      {
        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
        z_23 = t;
        v_23 :
        if(match_cons(z_23, sym__2))
          {
            a_24 = ATgetArgument(z_23, 0);
            b_24 = ATgetArgument(z_23, 1);
            w_23 :
            if(((ATgetType(b_24) == AT_LIST) && ATisEmpty(b_24)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(b_24) == AT_LIST) && !(ATisEmpty(b_24))))
                  {
                    c_24 = ATgetFirst((ATermList) b_24);
                    d_24 = (ATerm) ATgetNext((ATermList) b_24);
                    {
                      ATerm h_24 = NULL,m_24 = NULL;
                      ATerm c_18;
                      c_18 = t;
                      {
                        ATerm i_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), not_null(c_24));
                        {
                          t = n_65(t);
                          {
                            i_24 = t;
                            if(((h_24 != NULL) && (h_24 != i_24)))
                              _fail(i_24);
                            else
                              h_24 = i_24;
                          }
                        }
                      }
                      t = c_18;
                      {
                        ATerm o_24 = NULL,q_24 = NULL;
                        ATerm p_24 = NULL;
                        t = not_null(a_24);
                        {
                          t = inc_0(t);
                          {
                            p_24 = t;
                            if(((o_24 != NULL) && (o_24 != p_24)))
                              _fail(p_24);
                            else
                              o_24 = p_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_24), not_null(d_24));
                          {
                            t = s_24(t);
                            {
                              q_24 = t;
                              if(((m_24 != NULL) && (m_24 != q_24)))
                                _fail(q_24);
                              else
                                m_24 = q_24;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(m_24)), not_null(h_24));
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
      t = s_24(t);
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
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_int_to_string(not_null(z_24));
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_70(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
        j_25 = t;
        i_25 :
        if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
          {
            k_25 = ATgetFirst((ATermList) j_25);
            l_25 = (ATerm) ATgetNext((ATermList) j_25);
            {
              ATerm o_25 = NULL,q_25 = NULL;
              ATerm f_18;
              f_18 = t;
              {
                ATerm p_25 = NULL;
                t = not_null(k_25);
                {
                  t = k_70(t);
                  {
                    p_25 = t;
                    if(((o_25 != NULL) && (o_25 != p_25)))
                      _fail(p_25);
                    else
                      o_25 = p_25;
                  }
                }
              }
              t = f_18;
              {
                ATerm r_25 = NULL;
                t = not_null(l_25);
                {
                  t = foldr_3(t, i_70, j_70, k_70);
                  {
                    r_25 = t;
                    if(((q_25 != NULL) && (q_25 != r_25)))
                      _fail(r_25);
                    else
                      q_25 = r_25;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), not_null(q_25));
                  t = j_70(t);
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
    t = term_g_18;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  t = foldr_3(t, e_2, add_0, f_2);
  return(t);
}
ATerm echo_start_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm h_18;
    h_18 = t;
    {
      ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
      c_26 = t;
      x_25 :
      if(match_cons(c_26, sym_TestSuite_3))
        {
          d_26 = ATgetArgument(c_26, 0);
          f_26 = ATgetArgument(c_26, 1);
          g_26 = ATgetArgument(c_26, 2);
          y_25 :
          if(match_cons(d_26, sym_Name_1))
            {
              e_26 = ATgetArgument(d_26, 0);
              z_25 :
              if(match_cons(g_26, sym_Tests_1))
                {
                  h_26 = ATgetArgument(g_26, 0);
                  {
                    ATerm i_26 = NULL;
                    if(((a_26 != NULL) && (a_26 != e_26)))
                      _fail(e_26);
                    else
                      a_26 = e_26;
                    {
                      if(((b_26 != NULL) && (b_26 != h_26)))
                        _fail(h_26);
                      else
                        b_26 = h_26;
                      {
                        t = term_f_8;
                        {
                          t = echo_0(t);
                          {
                            ATerm j_26 = NULL;
                            t = not_null(b_26);
                            {
                              t = length_0(t);
                              {
                                t = int_to_string_0(t);
                                {
                                  j_26 = t;
                                  if(((i_26 != NULL) && (i_26 != j_26)))
                                    _fail(j_26);
                                  else
                                    i_26 = j_26;
                                }
                              }
                            }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_18), not_null(i_26)), term_j_18), not_null(a_26)), term_i_18);
                              {
                                t = concat_strings_0(t);
                                {
                                  t = echo_0(t);
                                  {
                                    t = term_f_8;
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
    t = h_18;
    return(t);
  }
  t = if_verbose1_1(t, g_2);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_close_file(not_null(n_26));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym__2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      t = SSL_WriteToBinaryFile(not_null(t_26), not_null(u_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym__2))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      {
        ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
        ATerm l_18;
        l_18 = t;
        {
          ATerm l_27 = NULL;
          ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
          t = v_72(t);
          {
            l_27 = t;
            {
              if(((i_27 != NULL) && (i_27 != l_27)))
                _fail(l_27);
              else
                i_27 = l_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_27), not_null(e_27), not_null(f_27));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_18 = t;
                    int n_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), term_o_18);
                        t = table_get_0(t);
                        LocalPopChoice(n_18);
                      }
                    else
                      {
                        t = m_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_27 = t;
                      b_27 :
                      if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
                        {
                          n_27 = ATgetFirst((ATermList) m_27);
                          o_27 = (ATerm) ATgetNext((ATermList) m_27);
                          {
                            if(((j_27 != NULL) && (j_27 != n_27)))
                              _fail(n_27);
                            else
                              j_27 = n_27;
                            {
                              if(((k_27 != NULL) && (k_27 != o_27)))
                                _fail(o_27);
                              else
                                k_27 = o_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_27), term_o_18, (ATerm) ATinsert(CheckATermList(not_null(k_27)), (ATerm) ATinsert(CheckATermList(not_null(j_27)), not_null(e_27))));
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
        t = l_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_73 (ATerm))
{
  ATerm p_18;
  p_18 = t;
  {
    t = j_73(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_q_18;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = p_18;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
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
      LocalPopChoice(s_18);
      t = SSL_open_file(not_null(x_27), not_null(w_27));
    }
  else
    {
      t = r_18;
      {
        ATerm b_28 = NULL;
        ATerm c_28 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_t_18;
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
              ATerm w_18;
              w_18 = t;
              {
                ATerm d_28 = NULL;
                t = term_r_17;
                {
                  d_28 = t;
                  if(((c_28 != NULL) && (c_28 != d_28)))
                    _fail(d_28);
                  else
                    c_28 = d_28;
                }
              }
              t = w_18;
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
  t = term_x_18;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_28), term_y_18);
    {
      t = conc_strings_0(t);
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
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
      ATerm b_19;
      b_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), term_r_17);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), term_x_18);
            {
              ATerm j_2 (ATerm t)
              {
                t = term_c_19;
                return(t);
              }
              t = assert_1(t, j_2);
            }
          }
        }
      }
      t = b_19;
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
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_ReadFromFile(not_null(a_29));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_29 = NULL;
  ATerm m_29 = NULL;
  h_29 = t;
  {
    ATerm d_19;
    d_19 = t;
    {
      ATerm n_29 = NULL;
      t = term_k_19;
      {
        n_29 = t;
        if(((m_29 != NULL) && (m_29 != n_29)))
          _fail(n_29);
        else
          m_29 = n_29;
      }
    }
    t = d_19;
    {
      t = SSL_open_file(not_null(h_29), not_null(m_29));
      t = SSL_close_file(not_null(h_29));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_stdin_0))
    {
      ATerm x_29 = NULL;
      ATerm y_29 = NULL;
      t = term_l_19;
      {
        t = ReadFromFile_0(t);
        {
          y_29 = t;
          if(((x_29 != NULL) && (x_29 != y_29)))
            _fail(y_29);
          else
            x_29 = y_29;
        }
      }
      t = not_null(x_29);
    }
  else
    {
      if(match_cons(v_29, sym_FILE_1))
        {
          w_29 = ATgetArgument(v_29, 0);
          {
            ATerm a_30 = NULL;
            ATerm f_30 = NULL;
            t = not_null(w_29);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_30 = t;
                  if(((a_30 != NULL) && (a_30 != f_30)))
                    _fail(f_30);
                  else
                    a_30 = f_30;
                }
              }
            }
            t = not_null(a_30);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm k_72 (ATerm))
{
  t = read_from_0(t);
  {
    t = k_72(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm parse_unit_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
    t = echo_start_0(t);
    {
      t_30 = t;
      n_30 :
      if(match_cons(t_30, sym_TestSuite_3))
        {
          u_30 = ATgetArgument(t_30, 0);
          w_30 = ATgetArgument(t_30, 1);
          y_30 = ATgetArgument(t_30, 2);
          o_30 :
          if(match_cons(u_30, sym_Name_1))
            {
              v_30 = ATgetArgument(u_30, 0);
              p_30 :
              if(match_cons(w_30, sym_Sort_1))
                {
                  x_30 = ATgetArgument(w_30, 0);
                  q_30 :
                  if(match_cons(y_30, sym_Tests_1))
                    {
                      z_30 = ATgetArgument(y_30, 0);
                      {
                        ATerm a_31 = NULL,b_31 = NULL;
                        if(((s_30 != NULL) && (s_30 != v_30)))
                          _fail(v_30);
                        else
                          s_30 = v_30;
                        {
                          if(((r_30 != NULL) && (r_30 != x_30)))
                            _fail(x_30);
                          else
                            r_30 = x_30;
                          {
                            if(((a_31 != NULL) && (a_31 != z_30)))
                              _fail(z_30);
                            else
                              a_31 = z_30;
                            {
                              t = not_null(a_31);
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  ATerm m_2 (ATerm t)
                                  {
                                    t = not_null(r_30);
                                    return(t);
                                  }
                                  t = execute_test_2(t, m_2, get_parse_table_0);
                                  return(t);
                                }
                                t = map_with_index_1(t, l_2);
                                {
                                  ATerm c_31 = NULL;
                                  c_31 = t;
                                  if(((b_31 != NULL) && (b_31 != c_31)))
                                    _fail(c_31);
                                  else
                                    b_31 = c_31;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_TestResults_1, not_null(b_31));
                                    {
                                      ATerm n_19;
                                      n_19 = t;
                                      {
                                        ATerm d_31 = NULL;
                                        ATerm e_31 = NULL;
                                        e_31 = t;
                                        if(((d_31 != NULL) && (d_31 != e_31)))
                                          _fail(e_31);
                                        else
                                          d_31 = e_31;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_30), not_null(d_31));
                                          t = echo_results_0(t);
                                        }
                                      }
                                      t = n_19;
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
  t = xtc_io_transform_1(t, k_2);
  return(t);
}
ATerm parse_table_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm k_31 = NULL;
    k_31 = t;
    i_31 :
    if(!(match_string(k_31, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm p_19;
    p_19 = t;
    {
      ATerm l_31 = NULL;
      ATerm w_31 = NULL;
      w_31 = t;
      if(((l_31 != NULL) && (l_31 != w_31)))
        _fail(w_31);
      else
        l_31 = w_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_8, not_null(l_31));
        t = set_config_0(t);
      }
    }
    t = p_19;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm parse_unit_options_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      t = parse_table_option_0(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm b_32 = NULL,e_32 = NULL,f_32 = NULL;
  b_32 = t;
  z_31 :
  if(match_cons(b_32, sym__2))
    {
      e_32 = ATgetArgument(b_32, 0);
      f_32 = ATgetArgument(b_32, 1);
      t = SSL_copy(not_null(e_32), not_null(f_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_stderr_0))
    {
      ATerm j_33 = NULL,l_33 = NULL;
      ATerm u_19;
      u_19 = t;
      {
        ATerm k_33 = NULL;
        t = SSLgetAnnotations(not_null(b_33));
        {
          k_33 = t;
          if(((j_33 != NULL) && (j_33 != k_33)))
            _fail(k_33);
          else
            j_33 = k_33;
        }
      }
      t = u_19;
      {
        ATerm m_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_33));
        {
          m_33 = t;
          if(((l_33 != NULL) && (l_33 != m_33)))
            _fail(m_33);
          else
            l_33 = m_33;
        }
        t = not_null(l_33);
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
  ATerm f_34 = NULL;
  f_34 = t;
  b_34 :
  if(match_cons(f_34, sym_stdout_0))
    {
      ATerm h_34 = NULL,j_34 = NULL;
      ATerm v_19;
      v_19 = t;
      {
        ATerm i_34 = NULL;
        t = SSLgetAnnotations(not_null(f_34));
        {
          i_34 = t;
          if(((h_34 != NULL) && (h_34 != i_34)))
            _fail(i_34);
          else
            h_34 = i_34;
        }
      }
      t = v_19;
      {
        ATerm k_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(h_34));
        {
          k_34 = t;
          if(((j_34 != NULL) && (j_34 != k_34)))
            _fail(k_34);
          else
            j_34 = k_34;
        }
        t = not_null(j_34);
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
  ATerm w_34 = NULL,x_34 = NULL;
  w_34 = t;
  v_34 :
  if(match_cons(w_34, sym_FILE_1))
    {
      x_34 = ATgetArgument(w_34, 0);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_35 = NULL;
            ATerm c_35 = NULL;
            t = m_0(t);
            {
              c_35 = t;
              {
                if(((b_35 != NULL) && (b_35 != c_35)))
                  _fail(c_35);
                else
                  b_35 = c_35;
                {
                  ATerm a_20 = t;
                  int b_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(b_20);
                    }
                  else
                    {
                      t = a_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), not_null(b_35));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_34));
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_35 = NULL;
                  ATerm h_35 = NULL;
                  t = m_0(t);
                  {
                    h_35 = t;
                    {
                      if(((e_35 != NULL) && (e_35 != h_35)))
                        _fail(h_35);
                      else
                        e_35 = h_35;
                      {
                        ATerm e_20 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_20 = t;
                            int g_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(g_20);
                              }
                            else
                              {
                                t = f_20;
                                {
                                  ATerm h_20 = t;
                                  int n_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(n_20);
                                    }
                                  else
                                    {
                                      t = h_20;
                                      {
                                        ATerm i_35 = NULL;
                                        i_35 = t;
                                        if(((x_34 != NULL) && (x_34 != i_35)))
                                          _fail(i_35);
                                        else
                                          x_34 = i_35;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = e_20;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), not_null(e_35));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_34));
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  {
                    ATerm k_35 = NULL;
                    t = m_0(t);
                    {
                      k_35 = t;
                      if(((x_34 != NULL) && (x_34 != k_35)))
                        _fail(k_35);
                      else
                        x_34 = k_35;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_34));
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
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t_35 :
  if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
    {
      v_35 = ATgetFirst((ATermList) u_35);
      w_35 = (ATerm) ATgetNext((ATermList) u_35);
      t = not_null(w_35);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm o_20;
        o_20 = t;
        {
          ATerm j_36 = NULL;
          ATerm k_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_36), not_null(e_36));
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
                t = (ATerm) ATempty;
              }
            {
              k_36 = t;
              if(((j_36 != NULL) && (j_36 != k_36)))
                _fail(k_36);
              else
                j_36 = k_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_36), not_null(e_36), not_null(j_36));
            t = table_put_0(t);
          }
        }
        t = o_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_72 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  ATerm r_20;
  r_20 = t;
  {
    ATerm w_36 = NULL;
    ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
    t = s_72(t);
    {
      w_36 = t;
      {
        if(((v_36 != NULL) && (v_36 != w_36)))
          _fail(w_36);
        else
          v_36 = w_36;
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), term_o_18);
              t = table_get_0(t);
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            x_36 = t;
            s_36 :
            if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
              {
                y_36 = ATgetFirst((ATermList) x_36);
                z_36 = (ATerm) ATgetNext((ATermList) x_36);
                {
                  if(((u_36 != NULL) && (u_36 != y_36)))
                    _fail(y_36);
                  else
                    u_36 = y_36;
                  {
                    if(((t_36 != NULL) && (t_36 != z_36)))
                      _fail(z_36);
                    else
                      t_36 = z_36;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(v_36), term_o_18, not_null(t_36));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(u_36);
                          {
                            ATerm q_2 (ATerm t)
                            {
                              ATerm a_37 = NULL;
                              a_37 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), not_null(a_37));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, q_2);
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
  t = r_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  t = SSL_remove(not_null(g_37));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_62(t);
      t = s_62(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        t = s_62(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm l_37 = NULL;
  ATerm w_20;
  w_20 = t;
  {
    ATerm m_37 = NULL;
    ATerm n_37 = NULL;
    t = r_72(t);
    {
      m_37 = t;
      {
        if(((l_37 != NULL) && (l_37 != m_37)))
          _fail(m_37);
        else
          l_37 = m_37;
        {
          ATerm o_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), term_o_18);
          {
            ATerm x_20 = t;
            int y_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_20);
              }
            else
              {
                t = x_20;
                t = (ATerm) ATempty;
              }
            {
              o_37 = t;
              if(((n_37 != NULL) && (n_37 != o_37)))
                _fail(o_37);
              else
                n_37 = o_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_37), term_o_18, (ATerm) ATinsert(CheckATermList(not_null(n_37)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_20;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm t_37 = NULL,u_37 = NULL;
  ATerm r_2 (ATerm t)
  {
    t = term_c_19;
    return(t);
  }
  t = begin_scope_1(t, r_2);
  {
    ATerm s_2 (ATerm t)
    {
      ATerm z_20;
      z_20 = t;
      {
        ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_21;
            t = table_get_0(t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          v_37 = t;
          s_37 :
          if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
            {
              w_37 = ATgetFirst((ATermList) v_37);
              x_37 = (ATerm) ATgetNext((ATermList) v_37);
              {
                if(((u_37 != NULL) && (u_37 != w_37)))
                  _fail(w_37);
                else
                  u_37 = w_37;
                {
                  if(((t_37 != NULL) && (t_37 != x_37)))
                    _fail(x_37);
                  else
                    t_37 = x_37;
                  {
                    t = not_null(u_37);
                    {
                      ATerm u_2 (ATerm t)
                      {
                        ATerm d_21 = t;
                        int i_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(i_21);
                          }
                        else
                          {
                            t = d_21;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, u_2);
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
      t = z_20;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_c_19;
          return(t);
        }
        t = end_scope_1(t, v_2);
      }
      return(t);
    }
    t = restore_always_2(t, p_71, s_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_38 = NULL;
        ATerm b_38 = NULL;
        t = term_u_15;
        {
          t = get_config_0(t);
          {
            b_38 = t;
            if(((a_38 != NULL) && (a_38 != b_38)))
              _fail(b_38);
            else
              a_38 = b_38;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_38));
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = term_l_19;
      }
    {
      t = q_71(t);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm l_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_r_15;
              t = get_config_0(t);
              LocalPopChoice(m_21);
            }
          else
            {
              t = l_21;
              t = term_p_21;
            }
          return(t);
        }
        t = copy_to_1(t, x_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, w_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm e_38 = NULL;
    e_38 = t;
    d_38 :
    if(!(match_string(e_38, "-v")))
      {
        if(!(match_string(e_38, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_r_21;
    t = set_config_0(t);
    t = term_s_21;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_t_21;
    return(t);
  }
  t = Option_3(t, b_3, f_3, o_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm h_38 = NULL;
    h_38 = t;
    f_38 :
    if(!(match_string(h_38, "-k")))
      {
        if(!(match_string(h_38, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm u_21;
    u_21 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_21, not_null(i_38));
        t = set_config_0(t);
      }
    }
    t = u_21;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_x_21;
    return(t);
  }
  t = ArgOption_3(t, p_3, q_3, r_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  t = SSL_string_to_int(not_null(o_38));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 (ATerm t)
      {
        ATerm y_38 = NULL;
        y_38 = t;
        r_38 :
        if(!(match_string(y_38, "-S")))
          {
            if(!(match_string(y_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_a_22;
        t = set_config_0(t);
        t = term_b_22;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_c_22;
        return(t);
      }
      t = Option_3(t, s_3, t_3, v_3);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm d_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              ATerm z_38 = NULL;
              z_38 = t;
              u_38 :
              if(!(match_string(z_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_4 (ATerm t)
            {
              ATerm c_39 = NULL;
              ATerm j_22;
              j_22 = t;
              {
                ATerm a_39 = NULL;
                ATerm b_39 = NULL;
                t = string_to_int_0(t);
                {
                  b_39 = t;
                  if(((a_39 != NULL) && (a_39 != b_39)))
                    _fail(b_39);
                  else
                    a_39 = b_39;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(a_39));
                  t = set_config_0(t);
                }
              }
              t = j_22;
              {
                ATerm d_39 = NULL;
                d_39 = t;
                if(((c_39 != NULL) && (c_39 != d_39)))
                  _fail(d_39);
                else
                  c_39 = d_39;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_39));
              }
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = term_l_22;
              return(t);
            }
            t = ArgOption_3(t, w_3, v_4, w_4);
            LocalPopChoice(g_22);
          }
        else
          {
            t = d_22;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm e_39 = NULL;
                e_39 = t;
                x_38 :
                if(!(match_string(e_39, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                t = term_m_22;
                t = set_config_0(t);
                t = term_n_22;
                return(t);
              }
              ATerm z_4 (ATerm t)
              {
                t = term_t_22;
                return(t);
              }
              t = Option_3(t, x_4, y_4, z_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm k_39 = NULL;
    k_39 = t;
    h_39 :
    if(!(match_string(k_39, "-o")))
      {
        if(!(match_string(k_39, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm n_39 = NULL;
    ATerm c_23;
    c_23 = t;
    {
      ATerm l_39 = NULL;
      ATerm m_39 = NULL;
      m_39 = t;
      if(((l_39 != NULL) && (l_39 != m_39)))
        _fail(m_39);
      else
        l_39 = m_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(l_39));
        t = set_config_0(t);
      }
    }
    t = c_23;
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
  ATerm c_5 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = ArgOption_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm d_5 (ATerm t)
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
        ATerm e_5 (ATerm t)
        {
          t = term_j_23;
          t = set_config_0(t);
          t = term_k_23;
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = term_l_23;
          return(t);
        }
        t = Option_3(t, d_5, e_5, s_5);
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
                ATerm m_23;
                m_23 = t;
                {
                  t = not_null(z_39);
                  t = j_0(t);
                }
                t = m_23;
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
  ATerm t_5 (ATerm t)
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
  ATerm v_5 (ATerm t)
  {
    ATerm r_40 = NULL;
    ATerm n_23;
    n_23 = t;
    {
      ATerm p_40 = NULL;
      ATerm q_40 = NULL;
      q_40 = t;
      if(((p_40 != NULL) && (p_40 != q_40)))
        _fail(q_40);
      else
        p_40 = q_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_15, not_null(p_40));
        t = set_config_0(t);
      }
    }
    t = n_23;
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
  ATerm w_5 (ATerm t)
  {
    t = term_o_23;
    return(t);
  }
  t = ArgOption_3(t, t_5, v_5, w_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_40 = NULL;
  ATerm t_23;
  t_23 = t;
  {
    ATerm y_5 (ATerm t)
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
    t = fetch_1(t, y_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), not_null(x_40)), term_u_23));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATempty, term_f_24));
  {
    t = printnl_0(t);
    {
      t = term_n_8;
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
        ATerm g_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_41), not_null(j_41));
            LocalPopChoice(j_24);
          }
        else
          {
            t = g_24;
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
ATerm foldr_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_70(t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
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
                t = foldr_2(t, g_70, h_70);
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
                t = h_70(t);
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
ATerm crush_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
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
      t = foldr_2(t, e_69, f_69);
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
    ATerm f_6 (ATerm t)
    {
      t = term_g_18;
      return(t);
    }
    t = crush_2(t, f_6, add_0);
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
        ATerm n_24;
        n_24 = t;
        {
          ATerm r_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_42), not_null(s_42));
              LocalPopChoice(t_24);
            }
          else
            {
              t = r_24;
              t = SSL_gtr(not_null(r_42), not_null(s_42));
            }
        }
        t = n_24;
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
  ATerm u_24 = t;
  int v_24 = stack_ptr;
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
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_24;
      y_24 = t;
      {
        ATerm e_43 = NULL;
        ATerm f_43 = NULL;
        t = term_y_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), term_n_8);
          t = geq_0(t);
        }
      }
      t = y_24;
      t = o_58(t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm j_43 = NULL,l_43 = NULL;
    ATerm a_25;
    a_25 = t;
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
    t = a_25;
    {
      ATerm m_43 = NULL;
      t = term_b_25;
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
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_25), not_null(j_43)), term_k_9), not_null(l_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_6);
  {
    t = term_g_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym_Version_0))
    {
      ATerm a_44 = NULL,h_44 = NULL;
      ATerm d_25;
      d_25 = t;
      {
        ATerm g_44 = NULL;
        t = SSLgetAnnotations(not_null(x_43));
        {
          g_44 = t;
          if(((a_44 != NULL) && (a_44 != g_44)))
            _fail(g_44);
          else
            a_44 = g_44;
        }
      }
      t = d_25;
      {
        ATerm i_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_44));
        {
          i_44 = t;
          if(((h_44 != NULL) && (h_44 != i_44)))
            _fail(i_44);
          else
            h_44 = i_44;
        }
        t = not_null(h_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm i_6 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_6);
  t = n_76(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  t = SSL_table_create(not_null(n_44));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  {
    ATerm m_25;
    m_25 = t;
    {
      t = term_n_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_25, term_s_25, not_null(v_44));
          t = table_put_0(t);
        }
      }
    }
    t = m_25;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  t = SSL_table_destroy(not_null(z_44));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = SSL_exit(not_null(d_45));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  g_45 :
  if(((ATgetType(h_45) == AT_LIST) && ATisEmpty(h_45)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
        {
          i_45 = ATgetFirst((ATermList) h_45);
          j_45 = (ATerm) ATgetNext((ATermList) h_45);
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
  ATerm t_25;
  t_25 = t;
  {
    ATerm m_45 = NULL;
    ATerm p_45 = NULL;
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          ATerm n_45 = NULL;
          ATerm o_45 = NULL;
          o_45 = t;
          if(((n_45 != NULL) && (n_45 != o_45)))
            _fail(o_45);
          else
            n_45 = o_45;
          t = (ATerm) ATinsert(ATempty, not_null(n_45));
        }
      }
    {
      p_45 = t;
      if(((m_45 != NULL) && (m_45 != p_45)))
        _fail(p_45);
      else
        m_45 = p_45;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_21, not_null(m_45));
      t = printnl_0(t);
    }
  }
  t = t_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  a_46 = t;
  x_45 :
  if(((ATgetType(a_46) == AT_LIST) && !(ATisEmpty(a_46))))
    {
      y_45 = ATgetFirst((ATermList) a_46);
      z_45 = (ATerm) ATgetNext((ATermList) a_46);
      {
        ATerm d_46 = NULL;
        t = not_null(z_45);
        {
          ATerm w_25;
          w_25 = t;
          {
            ATerm e_46 = NULL,g_46 = NULL,i_46 = NULL;
            ATerm k_26;
            k_26 = t;
            {
              ATerm f_46 = NULL;
              t = i_0(t);
              {
                f_46 = t;
                if(((e_46 != NULL) && (e_46 != f_46)))
                  _fail(f_46);
                else
                  e_46 = f_46;
              }
            }
            t = k_26;
            {
              ATerm h_46 = NULL;
              t = not_null(y_45);
              {
                t = h_0(t);
                {
                  h_46 = t;
                  if(((g_46 != NULL) && (g_46 != h_46)))
                    _fail(h_46);
                  else
                    g_46 = h_46;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_46)), not_null(g_46));
                {
                  i_46 = t;
                  if(((d_46 != NULL) && (d_46 != i_46)))
                    _fail(i_46);
                  else
                    d_46 = i_46;
                }
              }
            }
          }
          t = w_25;
          {
            ATerm j_6 (ATerm t)
            {
              t = not_null(d_46);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_46) == AT_LIST) && ATisEmpty(a_46)))
        {
          {
            t = term_x_18;
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
  ATerm o_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm t_46 = NULL,u_46 = NULL;
  t_46 = t;
  s_46 :
  if(match_cons(t_46, sym_Program_1))
    {
      u_46 = ATgetArgument(t_46, 0);
      {
        ATerm x_46 = NULL,z_46 = NULL;
        ATerm y_46 = NULL;
        t = SSLgetAnnotations(not_null(t_46));
        {
          y_46 = t;
          if(((x_46 != NULL) && (x_46 != y_46)))
            _fail(y_46);
          else
            x_46 = y_46;
        }
        {
          t = not_null(u_46);
          {
            ATerm b_47 = NULL;
            t = d_56(t);
            {
              z_46 = t;
              {
                ATerm c_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_46)), not_null(x_46));
                {
                  c_47 = t;
                  if(((b_47 != NULL) && (b_47 != c_47)))
                    _fail(c_47);
                  else
                    b_47 = c_47;
                }
                t = not_null(b_47);
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
  ATerm k_47 = NULL;
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_47 = NULL;
      t = term_b_25;
      {
        t = get_config_0(t);
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
      }
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm p_6 (ATerm t)
        {
          ATerm q_6 (ATerm t)
          {
            ATerm m_47 = NULL;
            m_47 = t;
            if(((k_47 != NULL) && (k_47 != m_47)))
              _fail(m_47);
            else
              k_47 = m_47;
            return(t);
          }
          t = Program_1(t, q_6);
          return(t);
        }
        t = fetch_1(t, p_6);
      }
    }
  {
    t = term_o_26;
    {
      t = echo_0(t);
      {
        t = term_v_26;
        {
          t = table_get_0(t);
          {
            ATerm r_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, r_6);
            {
              ATerm t_6 (ATerm t)
              {
                ATerm n_47 = NULL;
                ATerm o_47 = NULL;
                o_47 = t;
                if(((n_47 != NULL) && (n_47 != o_47)))
                  _fail(o_47);
                else
                  n_47 = o_47;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_47)), term_w_26);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, t_6);
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
  ATerm x_26;
  x_26 = t;
  {
    ATerm t_47 = NULL;
    ATerm u_47 = NULL;
    u_47 = t;
    if(((t_47 != NULL) && (t_47 != u_47)))
      _fail(u_47);
    else
      t_47 = u_47;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATempty, not_null(t_47)));
      t = printnl_0(t);
    }
  }
  t = x_26;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm y_26;
  y_26 = t;
  {
    t = d_73(t);
    t = debug_0(t);
  }
  t = y_26;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_56 (ATerm))
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
            t = e_56(t);
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
ATerm fetch_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm p_48 (ATerm t)
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_64, _id);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = Cons_2(t, _id, p_48);
      }
    return(t);
  }
  t = p_48(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_77 (ATerm))
{
  t = fetch_1(t, u_77);
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
      ATerm g_27;
      g_27 = t;
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
      t = g_27;
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
  ATerm h_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = h_27;
      {
        ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
        l_49 = t;
        i_49 :
        if(((ATgetType(l_49) == AT_LIST) && !(ATisEmpty(l_49))))
          {
            m_49 = ATgetFirst((ATermList) l_49);
            n_49 = (ATerm) ATgetNext((ATermList) l_49);
            {
              t = not_null(m_49);
              {
                ATerm u_6 (ATerm t)
                {
                  t = not_null(n_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_6);
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
  ATerm e_50 = NULL;
  ATerm g_50 = NULL;
  e_50 = t;
  {
    ATerm h_50 = NULL;
    ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
    t = not_null(e_50);
    {
      h_50 = t;
      {
        t = SSL_explode_term(not_null(h_50));
        {
          j_50 = t;
          c_50 :
          if(match_cons(j_50, sym__2))
            {
              k_50 = ATgetArgument(j_50, 0);
              l_50 = ATgetArgument(j_50, 1);
              d_50 :
              if(match_string(k_50, ""))
                {
                  if(((g_50 != NULL) && (g_50 != l_50)))
                    _fail(l_50);
                  else
                    g_50 = l_50;
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
      t = not_null(g_50);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm p_50 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_50);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          t = Nil_0(t);
          t = h_64(t);
        }
      }
    return(t);
  }
  t = p_50(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_cons(s_50, sym__2))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      {
        t = not_null(t_50);
        {
          ATerm v_6 (ATerm t)
          {
            t = not_null(u_50);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = s_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  t = SSL_explode_string(not_null(z_50));
  return(t);
}
ATerm _2 (ATerm t, ATerm y_49 (ATerm), ATerm z_49 (ATerm))
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym__2))
    {
      l_51 = ATgetArgument(k_51, 0);
      m_51 = ATgetArgument(k_51, 1);
      {
        ATerm r_51 = NULL,t_51 = NULL;
        ATerm s_51 = NULL;
        t = SSLgetAnnotations(not_null(k_51));
        {
          s_51 = t;
          if(((r_51 != NULL) && (r_51 != s_51)))
            _fail(s_51);
          else
            r_51 = s_51;
        }
        {
          t = not_null(l_51);
          {
            ATerm v_51 = NULL;
            t = y_49(t);
            {
              t_51 = t;
              {
                t = not_null(m_51);
                {
                  ATerm x_51 = NULL;
                  t = z_49(t);
                  {
                    v_51 = t;
                    {
                      ATerm y_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_51), not_null(v_51)), not_null(r_51));
                      {
                        y_51 = t;
                        if(((x_51 != NULL) && (x_51 != y_51)))
                          _fail(y_51);
                        else
                          x_51 = y_51;
                      }
                      t = not_null(x_51);
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
    ATerm v_27 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = v_27;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym__2))
    {
      h_52 = ATgetArgument(g_52, 0);
      i_52 = ATgetArgument(g_52, 1);
      {
        ATerm f_28;
        f_28 = t;
        t = SSL_printnl(not_null(h_52), not_null(i_52));
        t = f_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm g_28;
  g_28 = t;
  {
    ATerm o_52 = NULL,q_52 = NULL;
    ATerm h_28;
    h_28 = t;
    {
      ATerm p_52 = NULL;
      t = c_73(t);
      {
        p_52 = t;
        if(((o_52 != NULL) && (o_52 != p_52)))
          _fail(p_52);
        else
          o_52 = p_52;
      }
    }
    t = h_28;
    {
      ATerm r_52 = NULL;
      r_52 = t;
      if(((q_52 != NULL) && (q_52 != r_52)))
        _fail(r_52);
      else
        q_52 = r_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_52)), not_null(o_52)));
        t = printnl_0(t);
      }
    }
  }
  t = g_28;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm u_52 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = Cons_2(t, s_63, u_52);
      }
    return(t);
  }
  t = u_52(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = SSL_is_string(not_null(w_52));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_28);
    }
  else
    {
      t = m_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 (ATerm t)
            {
              ATerm r_28 = t;
              int t_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = r_28;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, w_6);
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
              f_53 = t;
              e_53 :
              if(match_cons(f_53, sym_Path_1))
                {
                  g_53 = ATgetArgument(f_53, 0);
                  t = not_null(g_53);
                }
              else
                {
                  if(match_cons(f_53, sym_Var_1))
                    {
                      g_53 = ATgetArgument(f_53, 0);
                      {
                        t = not_null(g_53);
                        {
                          ATerm w_28 = t;
                          int x_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_28);
                            }
                          else
                            {
                              t = w_28;
                              {
                                ATerm x_6 (ATerm t)
                                {
                                  t = term_y_28;
                                  return(t);
                                }
                                t = debug_1(t, x_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_53, sym_Prefix_2))
                        {
                          g_53 = ATgetArgument(f_53, 0);
                          h_53 = ATgetArgument(f_53, 1);
                          {
                            ATerm m_53 = NULL,o_53 = NULL;
                            ATerm z_28;
                            z_28 = t;
                            {
                              ATerm n_53 = NULL;
                              t = not_null(g_53);
                              {
                                t = eval_config_0(t);
                                {
                                  n_53 = t;
                                  if(((m_53 != NULL) && (m_53 != n_53)))
                                    _fail(n_53);
                                  else
                                    m_53 = n_53;
                                }
                              }
                            }
                            t = z_28;
                            {
                              ATerm p_53 = NULL;
                              t = not_null(h_53);
                              {
                                t = eval_config_0(t);
                                {
                                  p_53 = t;
                                  if(((o_53 != NULL) && (o_53 != p_53)))
                                    _fail(p_53);
                                  else
                                    o_53 = p_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_53), not_null(o_53));
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
  ATerm x_53 = NULL;
  x_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(x_53));
    {
      t = table_get_0(t);
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_29;
              e_29 = t;
              {
                ATerm z_53 = NULL;
                ATerm a_54 = NULL;
                a_54 = t;
                if(((z_53 != NULL) && (z_53 != a_54)))
                  _fail(a_54);
                else
                  z_53 = a_54;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_29, not_null(x_53), not_null(z_53));
                  t = table_put_0(t);
                }
              }
              t = e_29;
            }
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_62(t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym__2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      t = SSL_table_get(not_null(g_54), not_null(h_54));
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
        ATerm i_29;
        i_29 = t;
        {
          ATerm v_54 = NULL;
          ATerm w_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_54), not_null(q_54));
          {
            ATerm j_29 = t;
            int k_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_29);
              }
            else
              {
                t = j_29;
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
        t = i_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm a_55 = NULL;
  ATerm b_55 = NULL;
  t = term_x_18;
  {
    t = z_78(t);
    {
      b_55 = t;
      if(((a_55 != NULL) && (a_55 != b_55)))
        _fail(b_55);
      else
        a_55 = b_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_26, term_q_26, not_null(a_55));
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
            ATerm l_29;
            l_29 = t;
            {
              t = not_null(i_55);
              t = a_0(t);
            }
            t = l_29;
            {
              ATerm n_55 = NULL;
              t = term_x_18;
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
  ATerm z_6 (ATerm t)
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
  ATerm d_7 (ATerm t)
  {
    t = term_p_29;
    {
      t = set_config_0(t);
      t = term_q_29;
    }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  t = Option_3(t, z_6, d_7, f_7);
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
ATerm Cons_2 (ATerm t, ATerm h_51 (ATerm), ATerm i_51 (ATerm))
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  j_56 = t;
  i_56 :
  if(((ATgetType(j_56) == AT_LIST) && !(ATisEmpty(j_56))))
    {
      k_56 = ATgetFirst((ATermList) j_56);
      l_56 = (ATerm) ATgetNext((ATermList) j_56);
      {
        ATerm p_56 = NULL,r_56 = NULL;
        ATerm q_56 = NULL;
        t = SSLgetAnnotations(not_null(j_56));
        {
          q_56 = t;
          if(((p_56 != NULL) && (p_56 != q_56)))
            _fail(q_56);
          else
            p_56 = q_56;
        }
        {
          t = not_null(k_56);
          {
            ATerm t_56 = NULL;
            t = h_51(t);
            {
              r_56 = t;
              {
                t = not_null(l_56);
                {
                  ATerm v_56 = NULL;
                  t = i_51(t);
                  {
                    t_56 = t;
                    {
                      ATerm w_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_56)), not_null(r_56)), not_null(p_56));
                      {
                        w_56 = t;
                        if(((v_56 != NULL) && (v_56 != w_56)))
                          _fail(w_56);
                        else
                          v_56 = w_56;
                      }
                      t = not_null(v_56);
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
  ATerm j_57 = NULL;
  j_57 = t;
  f_57 :
  if(((ATgetType(j_57) == AT_LIST) && ATisEmpty(j_57)))
    {
      {
        ATerm l_57 = NULL,n_57 = NULL;
        ATerm s_29;
        s_29 = t;
        {
          ATerm m_57 = NULL;
          t = SSLgetAnnotations(not_null(j_57));
          {
            m_57 = t;
            if(((l_57 != NULL) && (l_57 != m_57)))
              _fail(m_57);
            else
              l_57 = m_57;
          }
        }
        t = s_29;
        {
          ATerm o_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_57));
          {
            o_57 = t;
            if(((n_57 != NULL) && (n_57 != o_57)))
              _fail(o_57);
            else
              n_57 = o_57;
          }
          t = not_null(n_57);
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
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym__2))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_29, not_null(v_57), not_null(w_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm t_29;
  t_29 = t;
  {
    ATerm z_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_30;
        t = x_78(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = z_29;
        {
        }
      }
  }
  t = t_29;
  {
    ATerm l_7 (ATerm t)
    {
      ATerm e_58 = NULL;
      ATerm d_30;
      d_30 = t;
      {
        ATerm c_58 = NULL;
        ATerm d_58 = NULL;
        d_58 = t;
        if(((c_58 != NULL) && (c_58 != d_58)))
          _fail(d_58);
        else
          c_58 = d_58;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_25, not_null(c_58));
          t = set_config_0(t);
        }
      }
      t = d_30;
      {
        ATerm f_58 = NULL;
        f_58 = t;
        if(((e_58 != NULL) && (e_58 != f_58)))
          _fail(f_58);
        else
          e_58 = f_58;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_58));
      }
      return(t);
    }
    ATerm m_7 (ATerm t)
    {
      ATerm e_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              {
                t = x_78(t);
                t = Cons_2(t, _id, m_7);
              }
            }
          LocalPopChoice(g_30);
        }
      else
        {
          t = e_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_7, m_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,p_58 = NULL;
  ATerm j_30;
  j_30 = t;
  {
    ATerm q_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
    q_58 = t;
    l_58 :
    if(match_cons(q_58, sym__3))
      {
        u_58 = ATgetArgument(q_58, 0);
        v_58 = ATgetArgument(q_58, 1);
        w_58 = ATgetArgument(q_58, 2);
        {
          if(((m_58 != NULL) && (m_58 != u_58)))
            _fail(u_58);
          else
            m_58 = u_58;
          {
            if(((n_58 != NULL) && (n_58 != v_58)))
              _fail(v_58);
            else
              n_58 = v_58;
            {
              if(((p_58 != NULL) && (p_58 != w_58)))
                _fail(w_58);
              else
                p_58 = w_58;
              t = SSL_table_put(not_null(m_58), not_null(n_58), not_null(p_58));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm z_58 = NULL;
  ATerm k_30;
  k_30 = t;
  {
    t = term_l_30;
    t = table_put_0(t);
  }
  t = k_30;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm m_30 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_78(t);
          LocalPopChoice(f_31);
        }
      else
        {
          t = m_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_7);
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_31;
          j_31 = t;
          {
            ATerm m_31 = t;
            int n_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_29;
                t = get_config_0(t);
                LocalPopChoice(n_31);
              }
            else
              {
                t = m_31;
                t = fetch_1(t, Help_0);
              }
          }
          t = j_31;
          {
            t = system_usage_0(t);
            {
              t = term_g_18;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          {
            ATerm o_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm a_59 = NULL;
                    a_59 = t;
                    if(((z_58 != NULL) && (z_58 != a_59)))
                      _fail(a_59);
                    else
                      z_58 = a_59;
                    return(t);
                  }
                  t = Undefined_1(t, p_7);
                  return(t);
                }
                t = fetch_1(t, o_7);
                {
                  ATerm u_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_58)), term_q_31);
                    return(t);
                  }
                  t = say_1(t, u_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(p_31);
              }
            else
              {
                t = o_31;
                {
                }
              }
          }
        }
      {
        ATerm r_31;
        r_31 = t;
        {
          t = term_p_26;
          t = table_destroy_0(t);
        }
        t = r_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  t = parse_options_1(t, t_76);
  {
    t = store_options_0(t);
    {
      t = v_76(t);
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_76);
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            {
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_76(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_31);
                }
              else
                {
                  t = u_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  t = option_wrap_4(t, x_76, default_usage_0, _id, y_76);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm u_71 (ATerm), ATerm v_71 (ATerm))
{
  ATerm v_7 (ATerm t)
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_71(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_7 (ATerm t)
  {
    t = xtc_io_1(t, v_71);
    return(t);
  }
  t = option_wrap_2(t, v_7, w_7);
  return(t);
}
ATerm io_parse_unit_0 (ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm a_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = a_32;
        t = parse_table_option_0(t);
      }
    return(t);
  }
  t = xtc_io_wrap_2(t, x_7, parse_unit_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_unit_0(t);
  return(t);
}
