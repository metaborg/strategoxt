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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_z_30;
ATerm term_i_30;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_g_26;
ATerm term_a_26;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_r_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_v_21;
ATerm term_p_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_n_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_l_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_b_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_k_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_e_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_f_13;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
void init_constant_terms (void)
{
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-----------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("results testsuite ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("successes : ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("failures  : ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--parse-table", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("* OK   : test ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("* ERROR: test ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** Result:   ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** Expected: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Failure_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Success_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_y_11);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_m_12);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_ParseResult_2, term_m_10, term_t_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("executing testsuite ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" with ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" tests", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p FILE   Use parse table FILE (required)", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_z_17);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_q_12);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_p_17);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_17);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_q_12);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_q_12);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_j_28, term_k_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, (ATerm) ATempty);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1 (ATerm, ATerm z_67 (ATerm));
ATerm count_in_string_1 (ATerm, ATerm w_84 (ATerm));
ATerm echo_results_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm echo_report_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm create_test_result_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm j_70 (ATerm));
ATerm xtc_transform_term_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm g_83 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm f_83 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm i_70 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm o_55 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm parse_sglr_0 (ATerm);
ATerm finally_2 (ATerm, ATerm w_79 (ATerm), ATerm x_79 (ATerm));
ATerm print_0 (ATerm);
ATerm print_to_tmp_file_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm abs_test_file_0 (ATerm);
ATerm parse_helper_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm execute_test_2 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm u_76 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm length_0 (ATerm);
ATerm echo_start_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm r_69 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_69 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm t_70 (ATerm));
ATerm parse_unit_0 (ATerm);
ATerm parse_table_option_0 (ATerm);
ATerm parse_unit_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm o_69 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm n_69 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm y_69 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm a_70 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm z_69 (ATerm));
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
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm v_48 (ATerm), ATerm w_48 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm crush_2 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_83 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_77 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_63 (ATerm));
ATerm map_1 (ATerm, ATerm w_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_63 (ATerm));
ATerm Program_1 (ATerm, ATerm b_51 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_51 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_63 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_63 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_64 (ATerm), ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm t_64 (ATerm), ATerm u_64 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm io_parse_unit_0 (ATerm);
ATerm main_0 (ATerm);
ATerm filter_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm t_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = t_8;
      {
        ATerm a_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, z_67);
              return(t);
            }
            t = Cons_2(t, z_67, c_0);
            LocalPopChoice(e_9);
          }
        else
          {
            t = a_9;
            {
              ATerm e_0 = NULL,w_0 = NULL,x_0 = NULL;
              e_0 = t;
              d_0 :
              if(((ATgetType(e_0) == AT_LIST) && ((ATermList) e_0 != ATempty)))
                {
                  w_0 = ATgetFirst((ATermList) e_0);
                  x_0 = (ATerm) ATgetNext((ATermList) e_0);
                  {
                    t = not_null(x_0);
                    t = filter_1(t, z_67);
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
ATerm count_in_string_1 (ATerm t, ATerm w_84 (ATerm))
{
  t = filter_1(t, w_84);
  {
    t = length_0(t);
    t = int_to_string_0(t);
  }
  return(t);
}
ATerm echo_results_0 (ATerm t)
{
  ATerm h_2 = NULL,s_2 = NULL;
  ATerm f_0 (ATerm t)
  {
    ATerm f_9;
    f_9 = t;
    {
      ATerm t_2 = NULL,u_2 = NULL,y_2 = NULL,z_2 = NULL;
      t_2 = t;
      f_2 :
      if(match_cons(t_2, sym__2))
        {
          u_2 = ATgetArgument(t_2, 0);
          y_2 = ATgetArgument(t_2, 1);
          g_2 :
          if(match_cons(y_2, sym_TestResults_1))
            {
              z_2 = ATgetArgument(y_2, 0);
              {
                ATerm a_3 = NULL,d_3 = NULL;
                if(((h_2 != NULL) && (h_2 != u_2)))
                  _fail(u_2);
                else
                  h_2 = u_2;
                {
                  if(((s_2 != NULL) && (s_2 != z_2)))
                    _fail(z_2);
                  else
                    s_2 = z_2;
                  {
                    t = term_g_9;
                    {
                      t = echo_0(t);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(h_2));
                        {
                          t = conc_strings_0(t);
                          {
                            t = echo_0(t);
                            {
                              ATerm c_3 = NULL;
                              t = not_null(s_2);
                              {
                                ATerm p_0 (ATerm t)
                                {
                                  ATerm b_3 = NULL;
                                  b_3 = t;
                                  e_1 :
                                  if(!(match_cons(b_3, sym_Success_0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = count_in_string_1(t, p_0);
                                {
                                  c_3 = t;
                                  if(((a_3 != NULL) && (a_3 != c_3)))
                                    _fail(c_3);
                                  else
                                    a_3 = c_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(a_3));
                                {
                                  t = conc_strings_0(t);
                                  {
                                    t = echo_0(t);
                                    {
                                      ATerm f_3 = NULL;
                                      t = not_null(s_2);
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          ATerm e_3 = NULL;
                                          e_3 = t;
                                          q_1 :
                                          if(!(match_cons(e_3, sym_Failure_0)))
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = count_in_string_1(t, q_0);
                                        {
                                          f_3 = t;
                                          if(((d_3 != NULL) && (d_3 != f_3)))
                                            _fail(f_3);
                                          else
                                            d_3 = f_3;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(d_3));
                                        {
                                          t = conc_strings_0(t);
                                          {
                                            t = echo_0(t);
                                            {
                                              t = term_g_9;
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
    t = f_9;
    return(t);
  }
  t = if_verbose1_1(t, f_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_9;
  m_9 = t;
  {
    t = error_0(t);
    {
      t = term_n_9;
      t = exit_0(t);
    }
  }
  t = m_9;
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm p_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_9;
      t = get_config_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = p_9;
      {
        t = (ATerm) ATinsert(ATempty, term_u_9);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm echo_report_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  ATerm r_0 (ATerm t)
  {
    ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
    x_3 = t;
    q_3 :
    if(match_cons(x_3, sym__4))
      {
        y_3 = ATgetArgument(x_3, 0);
        z_3 = ATgetArgument(x_3, 1);
        e_4 = ATgetArgument(x_3, 2);
        f_4 = ATgetArgument(x_3, 3);
        r_3 :
        if(match_cons(z_3, sym_Test_3))
          {
            a_4 = ATgetArgument(z_3, 0);
            c_4 = ATgetArgument(z_3, 1);
            d_4 = ATgetArgument(z_3, 2);
            s_3 :
            if(match_cons(a_4, sym_Descr_1))
              {
                b_4 = ATgetArgument(a_4, 0);
                {
                  ATerm g_4 = NULL;
                  if(((t_3 != NULL) && (t_3 != y_3)))
                    _fail(y_3);
                  else
                    t_3 = y_3;
                  {
                    if(((u_3 != NULL) && (u_3 != b_4)))
                      _fail(b_4);
                    else
                      u_3 = b_4;
                    {
                      if(((w_3 != NULL) && (w_3 != d_4)))
                        _fail(d_4);
                      else
                        w_3 = d_4;
                      {
                        if(((v_3 != NULL) && (v_3 != e_4)))
                          _fail(e_4);
                        else
                          v_3 = e_4;
                        {
                          if(((g_4 != NULL) && (g_4 != f_4)))
                            _fail(f_4);
                          else
                            g_4 = f_4;
                          {
                            t = not_null(g_4);
                            {
                              ATerm w_9;
                              w_9 = t;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  ATerm h_4 = NULL;
                                  h_4 = t;
                                  m_3 :
                                  if(match_cons(h_4, sym_Success_0))
                                    {
                                      ATerm i_4 = NULL;
                                      ATerm j_4 = NULL;
                                      t = not_null(t_3);
                                      {
                                        t = int_to_string_0(t);
                                        {
                                          j_4 = t;
                                          if(((i_4 != NULL) && (i_4 != j_4)))
                                            _fail(j_4);
                                          else
                                            i_4 = j_4;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_10), not_null(u_3)), term_y_9), not_null(i_4)), term_x_9);
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
                                t = try_1(t, s_0);
                              }
                              t = w_9;
                              {
                                ATerm c_10;
                                c_10 = t;
                                {
                                  ATerm t_0 (ATerm t)
                                  {
                                    ATerm k_4 = NULL;
                                    k_4 = t;
                                    p_3 :
                                    if(match_cons(k_4, sym_Failure_0))
                                      {
                                        ATerm l_4 = NULL;
                                        ATerm m_4 = NULL;
                                        t = not_null(t_3);
                                        {
                                          t = int_to_string_0(t);
                                          {
                                            m_4 = t;
                                            if(((l_4 != NULL) && (l_4 != m_4)))
                                              _fail(m_4);
                                            else
                                              l_4 = m_4;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_10), not_null(u_3)), term_y_9), not_null(l_4)), term_d_10);
                                          {
                                            t = concat_strings_0(t);
                                            {
                                              t = echo_0(t);
                                              {
                                                t = not_null(v_3);
                                                {
                                                  ATerm u_0 (ATerm t)
                                                  {
                                                    t = term_i_10;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, u_0);
                                                  {
                                                    t = not_null(w_3);
                                                    {
                                                      ATerm v_0 (ATerm t)
                                                      {
                                                        t = term_j_10;
                                                        return(t);
                                                      }
                                                      t = debug_1(t, v_0);
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
                                  t = try_1(t, t_0);
                                }
                                t = c_10;
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
  t = if_verbose1_1(t, r_0);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(match_cons(u_4, sym__2))
    {
      v_4 = ATgetArgument(u_4, 0);
      w_4 = ATgetArgument(u_4, 1);
      if(((v_4 != NULL) && (v_4 != w_4)))
        _fail(w_4);
      else
        v_4 = w_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_test_result_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  ATerm z_5 (ATerm t)
  {
    t = not_null(q_5);
    {
      ATerm k_10 = t;
      if((PushChoice() == 0))
        {
          ATerm t_5 = NULL;
          t_5 = t;
          e_5 :
          if(!(match_cons(t_5, sym_Success_0)))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_10;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), not_null(q_5));
        {
          ATerm l_10 = t;
          if((PushChoice() == 0))
            {
              t = eq_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_10;
            }
        }
      }
    }
    t = term_m_10;
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = not_null(q_5);
    {
      ATerm n_10 = t;
      if((PushChoice() == 0))
        {
          ATerm w_5 = NULL;
          w_5 = t;
          f_5 :
          if(!(match_cons(w_5, sym_Success_0)))
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), not_null(q_5));
        t = eq_0(t);
      }
    }
    t = term_o_10;
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = not_null(q_5);
    {
      ATerm p_10 = t;
      if((PushChoice() == 0))
        {
          ATerm y_5 = NULL;
          y_5 = t;
          g_5 :
          if(!(match_cons(y_5, sym_Failure_0)))
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
  ATerm d_6 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  m_5 = t;
  h_5 :
  if(match_cons(m_5, sym__2))
    {
      n_5 = ATgetArgument(m_5, 0);
      q_5 = ATgetArgument(m_5, 1);
      i_5 :
      if(match_cons(n_5, sym_ParseResult_2))
        {
          o_5 = ATgetArgument(n_5, 0);
          p_5 = ATgetArgument(n_5, 1);
          j_5 :
          if(match_cons(o_5, sym_Success_0))
            {
              k_5 :
              if(match_cons(q_5, sym_Success_0))
                {
                  ATerm x_10 = t;
                  int c_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_5(t);
                      LocalPopChoice(c_11);
                    }
                  else
                    {
                      t = x_10;
                      {
                        ATerm d_11 = t;
                        int e_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_6(t);
                            LocalPopChoice(e_11);
                          }
                        else
                          {
                            t = d_11;
                            t = b_6(t);
                          }
                      }
                    }
                }
              else
                {
                  ATerm f_11 = t;
                  int g_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_5(t);
                      LocalPopChoice(g_11);
                    }
                  else
                    {
                      t = f_11;
                      t = a_6(t);
                    }
                }
            }
          else
            {
              if(match_cons(o_5, sym_Failure_0))
                {
                  l_5 :
                  if(match_cons(q_5, sym_Failure_0))
                    {
                      ATerm h_11 = t;
                      int i_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_6(t);
                          LocalPopChoice(i_11);
                        }
                      else
                        {
                          t = h_11;
                          t = d_6(t);
                        }
                    }
                  else
                    {
                      t = c_6(t);
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
  ATerm f_6 = NULL;
  f_6 = t;
  {
    ATerm j_11;
    j_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(CheckATermList(not_null(f_6)), term_n_11));
      t = call_0(t);
    }
    t = j_11;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, j_70, y_0);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, r_70, s_70);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      t = SSL_call(not_null(l_6), not_null(m_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  t = SSL_table_keys(not_null(r_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm x_6 = NULL;
  x_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm z_6 = NULL;
        ATerm b_7 = NULL;
        z_6 = t;
        {
          ATerm c_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(z_6));
          {
            t = table_get_0(t);
            {
              c_7 = t;
              if(((b_7 != NULL) && (b_7 != c_7)))
                _fail(c_7);
              else
                b_7 = c_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(b_7));
        }
        return(t);
      }
      t = map_1(t, z_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm h_7 = NULL;
      ATerm i_7 = NULL;
      t = term_t_11;
      {
        t = get_config_0(t);
        {
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_u_11);
        t = geq_0(t);
      }
    }
    t = s_11;
    t = g_83(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm v_11;
  v_11 = t;
  {
    ATerm l_7 = NULL;
    ATerm m_7 = NULL;
    m_7 = t;
    if(((l_7 != NULL) && (l_7 != m_7)))
      _fail(m_7);
    else
      l_7 = m_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(l_7));
      t = printnl_0(t);
    }
  }
  t = v_11;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm s_7 = NULL;
  ATerm u_7 = NULL,v_7 = NULL;
  s_7 = t;
  {
    ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_7)));
    {
      t = table_get_0(t);
      {
        w_7 = t;
        q_7 :
        if(((ATgetType(w_7) == AT_LIST) && ((ATermList) w_7 != ATempty)))
          {
            x_7 = ATgetFirst((ATermList) w_7);
            a_8 = (ATerm) ATgetNext((ATermList) w_7);
            r_7 :
            if(match_cons(x_7, sym__2))
              {
                y_7 = ATgetArgument(x_7, 0);
                z_7 = ATgetArgument(x_7, 1);
                {
                  if(((u_7 != NULL) && (u_7 != y_7)))
                    _fail(y_7);
                  else
                    u_7 = y_7;
                  if(((v_7 != NULL) && (v_7 != z_7)))
                    _fail(z_7);
                  else
                    v_7 = z_7;
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
    t = not_null(v_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym__2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        ATerm m_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_8)));
        {
          t = table_get_0(t);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
              n_8 = t;
              f_8 :
              if(match_cons(n_8, sym__2))
                {
                  o_8 = ATgetArgument(n_8, 0);
                  p_8 = ATgetArgument(n_8, 1);
                  {
                    if(((j_8 != NULL) && (j_8 != o_8)))
                      _fail(o_8);
                    else
                      j_8 = o_8;
                    if(((m_8 != NULL) && (m_8 != p_8)))
                      _fail(p_8);
                    else
                      m_8 = p_8;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, b_1);
          }
        }
        t = not_null(m_8);
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
  ATerm c_1 (ATerm t)
  {
    t = term_c_12;
    {
      t = table_get_0(t);
      {
        ATerm d_1 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, d_1);
      }
    }
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym__2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        t = not_null(y_8);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
            b_9 = t;
            u_8 :
            if(match_cons(b_9, sym__2))
              {
                c_9 = ATgetArgument(b_9, 0);
                d_9 = ATgetArgument(b_9, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_8), not_null(c_9), not_null(d_9));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, f_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm d_12;
    d_12 = t;
    {
      ATerm j_9 = NULL;
      ATerm k_9 = NULL;
      t = term_t_11;
      {
        t = get_config_0(t);
        {
          k_9 = t;
          if(((j_9 != NULL) && (j_9 != k_9)))
            _fail(k_9);
          else
            j_9 = k_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), term_h_12);
        t = geq_0(t);
      }
    }
    t = d_12;
    t = f_83(t);
    return(t);
  }
  t = try_1(t, g_1);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm o_9 = NULL;
  ATerm q_9 = NULL;
  o_9 = t;
  {
    ATerm k_12 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Imported_1, not_null(o_9)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_12;
      }
    {
      ATerm l_12;
      l_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_11, term_m_12, not_null(o_9));
        t = table_put_0(t);
      }
      t = l_12;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            t = term_n_12;
            return(t);
          }
          t = debug_1(t, i_1);
          return(t);
        }
        t = if_verbose4_1(t, h_1);
        {
          ATerm o_12 = t;
          int p_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(p_12);
            }
          else
            {
              t = o_12;
              t = (ATerm) ATempty;
            }
          {
            ATerm r_9 = NULL;
            r_9 = t;
            if(((q_9 != NULL) && (q_9 != r_9)))
              _fail(r_9);
            else
              q_9 = r_9;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, not_null(q_9));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_x_11, (ATerm)ATmakeAppl(sym_Imported_1, not_null(o_9)), term_q_12);
                  t = table_put_0(t);
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
  ATerm v_9 = NULL;
  v_9 = t;
  t = SSL_getenv(not_null(v_9));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_13;
      t = get_config_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm g_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_13;
            t = getenv_0(t);
            LocalPopChoice(l_13);
          }
        else
          {
            t = g_13;
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
    ATerm k_1 (ATerm t)
    {
      t = term_n_13;
      return(t);
    }
    t = debug_1(t, k_1);
    return(t);
  }
  t = if_verbose5_1(t, j_1);
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm p_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_13;
          t = table_get_0(t);
          LocalPopChoice(q_13);
        }
      else
        {
          t = p_13;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = o_13;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = term_y_13;
          return(t);
        }
        t = debug_1(t, m_1);
        return(t);
      }
      t = if_verbose5_1(t, l_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm z_13 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_e_14;
          return(t);
        }
        t = debug_1(t, o_1);
        return(t);
      }
      t = if_verbose5_1(t, n_1);
      {
        t = xtc_load_0(t);
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm p_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = term_e_14;
                return(t);
              }
              t = debug_1(t, r_1);
              return(t);
            }
            t = if_verbose5_1(t, p_1);
          }
        }
      }
      LocalPopChoice(d_14);
    }
  else
    {
      t = z_13;
      {
        ATerm z_9 = NULL;
        ATerm a_10 = NULL;
        a_10 = t;
        if(((z_9 != NULL) && (z_9 != a_10)))
          _fail(a_10);
        else
          z_9 = a_10;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_14), not_null(z_9)), term_l_14);
          {
            t = error_0(t);
            {
              ATerm s_1 (ATerm t)
              {
                t = term_x_11;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm t_1 (ATerm t)
                    {
                      t = term_n_14;
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
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm e_10 = NULL;
  ATerm o_14;
  o_14 = t;
  {
    ATerm f_10 = NULL;
    t = i_70(t);
    {
      t = xtc_find_warning_0(t);
      {
        f_10 = t;
        if(((e_10 != NULL) && (e_10 != f_10)))
          _fail(f_10);
        else
          e_10 = f_10;
      }
    }
  }
  t = o_14;
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm g_10 = NULL;
      ATerm h_10 = NULL;
      h_10 = t;
      if(((g_10 != NULL) && (g_10 != h_10)))
        _fail(h_10);
      else
        g_10 = h_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(g_10));
        t = call_0(t);
      }
    }
    t = p_14;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_stdin_0))
    {
      ATerm t_10 = NULL;
      ATerm u_10 = NULL;
      ATerm v_10 = NULL;
      t = xtc_new_file_0(t);
      {
        u_10 = t;
        {
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
          {
            ATerm w_10 = NULL;
            t = o_0(t);
            {
              w_10 = t;
              if(((v_10 != NULL) && (v_10 != w_10)))
                _fail(w_10);
              else
                v_10 = w_10;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_10)), term_w_14));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(t_10);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_10));
    }
  else
    {
      if(match_cons(r_10, sym_FILE_1))
        {
          s_10 = ATgetArgument(r_10, 0);
          {
            ATerm y_10 = NULL;
            ATerm z_10 = NULL;
            t = not_null(s_10);
            {
              ATerm a_11 = NULL;
              t = xtc_new_file_0(t);
              {
                z_10 = t;
                {
                  if(((y_10 != NULL) && (y_10 != z_10)))
                    _fail(z_10);
                  else
                    y_10 = z_10;
                  {
                    ATerm b_11 = NULL;
                    t = o_0(t);
                    {
                      b_11 = t;
                      if(((a_11 != NULL) && (a_11 != b_11)))
                        _fail(b_11);
                      else
                        a_11 = b_11;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_10)), term_w_14), not_null(s_10)), term_x_14));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(y_10);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_10));
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
  ATerm m_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_stdin_0))
    {
      ATerm o_11 = NULL,q_11 = NULL;
      ATerm a_15;
      a_15 = t;
      {
        ATerm p_11 = NULL;
        t = SSLgetAnnotations(not_null(m_11));
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
      }
      t = a_15;
      {
        ATerm r_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(o_11));
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
        t = not_null(q_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_FILE_1))
    {
      b_12 = ATgetArgument(a_12, 0);
      {
        ATerm e_12 = NULL,g_12 = NULL;
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(a_12));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
        {
          t = not_null(b_12);
          {
            ATerm i_12 = NULL;
            t = o_55(t);
            {
              g_12 = t;
              {
                ATerm j_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(g_12)), not_null(e_12));
                {
                  j_12 = t;
                  if(((i_12 != NULL) && (i_12 != j_12)))
                    _fail(j_12);
                  else
                    i_12 = j_12;
                }
                t = not_null(i_12);
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
ATerm xtc_transform_2 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(h_15);
        }
      else
        {
          t = g_15;
          t = stdin_0(t);
        }
      LocalPopChoice(d_15);
      t = xtc_transform_file_2(t, k_70, l_70);
    }
  else
    {
      t = b_15;
      t = xtc_transform_term_2(t, k_70, l_70);
    }
  return(t);
}
ATerm parse_sglr_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
      v_12 = t;
      r_12 :
      if(match_cons(v_12, sym__2))
        {
          w_12 = ATgetArgument(v_12, 0);
          x_12 = ATgetArgument(v_12, 1);
          s_12 :
          if(match_cons(x_12, sym_File_1))
            {
              y_12 = ATgetArgument(x_12, 0);
              {
                if(((u_12 != NULL) && (u_12 != w_12)))
                  _fail(w_12);
                else
                  u_12 = w_12;
                {
                  if(((t_12 != NULL) && (t_12 != y_12)))
                    _fail(y_12);
                  else
                    t_12 = y_12;
                  {
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_12));
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = term_k_15;
                        return(t);
                      }
                      ATerm v_1 (ATerm t)
                      {
                        t = not_null(u_12);
                        return(t);
                      }
                      t = xtc_transform_2(t, u_1, v_1);
                      {
                        ATerm l_15 = t;
                        int r_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_12 = NULL;
                            ATerm w_1 (ATerm t)
                            {
                              t = term_s_15;
                              return(t);
                            }
                            t = xtc_transform_1(t, w_1);
                            {
                              ATerm a_13 = NULL;
                              t = read_from_0(t);
                              {
                                a_13 = t;
                                if(((z_12 != NULL) && (z_12 != a_13)))
                                  _fail(a_13);
                                else
                                  z_12 = a_13;
                              }
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_o_10, not_null(z_12));
                            }
                            LocalPopChoice(r_15);
                          }
                        else
                          {
                            t = l_15;
                            {
                              ATerm b_13 = NULL;
                              ATerm c_13 = NULL;
                              t = read_from_0(t);
                              {
                                c_13 = t;
                                if(((b_13 != NULL) && (b_13 != c_13)))
                                  _fail(c_13);
                                else
                                  b_13 = c_13;
                              }
                              t = (ATerm) ATmakeAppl(sym_ParseResult_2, term_m_10, not_null(b_13));
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
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = term_u_15;
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm w_79 (ATerm), ATerm x_79 (ATerm))
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_79(t);
      LocalPopChoice(w_15);
      {
        ATerm x_15;
        x_15 = t;
        t = x_79(t);
        t = x_15;
      }
    }
  else
    {
      t = v_15;
      {
        ATerm y_15;
        y_15 = t;
        t = x_79(t);
        t = y_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym__2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      {
        ATerm z_15;
        z_15 = t;
        t = SSL_print(not_null(j_13), not_null(k_13));
        t = z_15;
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
  ATerm r_13 = NULL,s_13 = NULL,v_13 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    ATerm t_13 = NULL;
    ATerm u_13 = NULL;
    t = new_file_0(t);
    {
      t_13 = t;
      {
        if(((r_13 != NULL) && (r_13 != t_13)))
          _fail(t_13);
        else
          r_13 = t_13;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_b_16);
          {
            t = open_file_0(t);
            {
              u_13 = t;
              if(((s_13 != NULL) && (s_13 != u_13)))
                _fail(u_13);
              else
                s_13 = u_13;
            }
          }
        }
      }
    }
  }
  t = a_16;
  {
    ATerm w_13 = NULL;
    w_13 = t;
    if(((v_13 != NULL) && (v_13 != w_13)))
      _fail(w_13);
    else
      v_13 = w_13;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), (ATerm) ATinsert(ATempty, not_null(v_13)));
      {
        t = print_0(t);
        {
          t = not_null(r_13);
          {
            t = close_file_0(t);
            t = not_null(r_13);
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
    ATerm c_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_14 (ATerm t)
        {
          ATerm k_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, c_14);
              LocalPopChoice(m_16);
            }
          else
            {
              t = k_16;
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm b_14 = NULL;
                  b_14 = t;
                  a_14 :
                  if(!(match_int(b_14, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm y_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, x_1, y_1);
              }
            }
          return(t);
        }
        t = c_14(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm abs_test_file_0 (ATerm t)
{
  ATerm f_14 = NULL,h_14 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm g_14 = NULL;
    g_14 = t;
    if(((f_14 != NULL) && (f_14 != g_14)))
      _fail(g_14);
    else
      f_14 = g_14;
  }
  t = s_16;
  {
    ATerm i_14 = NULL;
    t = term_x_14;
    {
      t = get_config_0(t);
      {
        t = get_path_0(t);
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), not_null(f_14));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm parse_helper_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  s_14 = t;
  q_14 :
  if(match_cons(s_14, sym__2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      r_14 :
      if(match_cons(u_14, sym_File_1))
        {
          v_14 = ATgetArgument(u_14, 0);
          {
            ATerm y_14 = NULL;
            ATerm z_14 = NULL;
            t = not_null(v_14);
            {
              t = abs_test_file_0(t);
              {
                z_14 = t;
                if(((y_14 != NULL) && (y_14 != z_14)))
                  _fail(z_14);
                else
                  y_14 = z_14;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), (ATerm) ATmakeAppl(sym_File_1, not_null(y_14)));
              t = parse_sglr_0(t);
            }
          }
        }
      else
        {
          if(match_cons(u_14, sym_String_1))
            {
              v_14 = ATgetArgument(u_14, 0);
              {
                ATerm c_15 = NULL;
                t = not_null(v_14);
                {
                  t = print_to_tmp_file_0(t);
                  {
                    c_15 = t;
                    {
                      ATerm z_1 (ATerm t)
                      {
                        ATerm e_15 = NULL;
                        ATerm f_15 = NULL;
                        f_15 = t;
                        if(((e_15 != NULL) && (e_15 != f_15)))
                          _fail(f_15);
                        else
                          e_15 = f_15;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), (ATerm) ATmakeAppl(sym_File_1, not_null(e_15)));
                          t = parse_sglr_0(t);
                        }
                        return(t);
                      }
                      ATerm a_2 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, not_null(c_15));
                        t = rm_files_0(t);
                        return(t);
                      }
                      t = finally_2(t, z_1, a_2);
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
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym__3))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      q_15 = ATgetArgument(n_15, 2);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_15)), term_a_17), not_null(p_15)), term_u_16), term_t_16), not_null(q_15));
        t = parse_helper_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm execute_test_2 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm l_16 = NULL;
        ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
        t = not_null(i_16);
        {
          l_16 = t;
          {
            n_16 = t;
            d_16 :
            if(match_cons(n_16, sym_Test_3))
              {
                o_16 = ATgetArgument(n_16, 0);
                q_16 = ATgetArgument(n_16, 1);
                r_16 = ATgetArgument(n_16, 2);
                e_16 :
                if(match_cons(o_16, sym_Descr_1))
                  {
                    p_16 = ATgetArgument(o_16, 0);
                    {
                      ATerm v_16 = NULL,x_16 = NULL,z_16 = NULL;
                      ATerm f_17;
                      f_17 = t;
                      {
                        ATerm w_16 = NULL;
                        t = u_84(t);
                        {
                          w_16 = t;
                          if(((v_16 != NULL) && (v_16 != w_16)))
                            _fail(w_16);
                          else
                            v_16 = w_16;
                        }
                      }
                      t = f_17;
                      {
                        ATerm y_16 = NULL;
                        t = v_84(t);
                        {
                          y_16 = t;
                          if(((x_16 != NULL) && (x_16 != y_16)))
                            _fail(y_16);
                          else
                            x_16 = y_16;
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(v_16), not_null(x_16), not_null(q_16));
                          {
                            ATerm b_17 = NULL;
                            t = parse_0(t);
                            {
                              z_16 = t;
                              {
                                ATerm c_17 = NULL;
                                c_17 = t;
                                if(((b_17 != NULL) && (b_17 != c_17)))
                                  _fail(c_17);
                                else
                                  b_17 = c_17;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(r_16));
                                  {
                                    t = create_test_result_0(t);
                                    {
                                      ATerm g_17;
                                      g_17 = t;
                                      {
                                        ATerm d_17 = NULL;
                                        ATerm e_17 = NULL;
                                        e_17 = t;
                                        if(((d_17 != NULL) && (d_17 != e_17)))
                                          _fail(e_17);
                                        else
                                          d_17 = e_17;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(h_16), not_null(l_16), not_null(z_16), not_null(d_17));
                                          t = echo_report_0(t);
                                        }
                                      }
                                      t = g_17;
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
  ATerm v_17 = NULL;
  ATerm w_17 = NULL;
  w_17 = t;
  if(((v_17 != NULL) && (v_17 != w_17)))
    _fail(w_17);
  else
    v_17 = w_17;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), term_n_9);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm u_76 (ATerm))
{
  ATerm g_18 = NULL;
  ATerm h_18 = NULL;
  h_18 = t;
  if(((g_18 != NULL) && (g_18 != h_18)))
    _fail(h_18);
  else
    g_18 = h_18;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(g_18));
    {
      ATerm x_18 (ATerm t)
      {
        ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
        i_18 = t;
        e_18 :
        if(match_cons(i_18, sym__2))
          {
            j_18 = ATgetArgument(i_18, 0);
            k_18 = ATgetArgument(i_18, 1);
            f_18 :
            if(((ATermList) k_18 == ATempty))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(k_18) == AT_LIST) && ((ATermList) k_18 != ATempty)))
                  {
                    l_18 = ATgetFirst((ATermList) k_18);
                    m_18 = (ATerm) ATgetNext((ATermList) k_18);
                    {
                      ATerm q_18 = NULL,s_18 = NULL;
                      ATerm h_17;
                      h_17 = t;
                      {
                        ATerm r_18 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(l_18));
                        {
                          t = u_76(t);
                          {
                            r_18 = t;
                            if(((q_18 != NULL) && (q_18 != r_18)))
                              _fail(r_18);
                            else
                              q_18 = r_18;
                          }
                        }
                      }
                      t = h_17;
                      {
                        ATerm t_18 = NULL,v_18 = NULL;
                        ATerm u_18 = NULL;
                        t = not_null(j_18);
                        {
                          t = inc_0(t);
                          {
                            u_18 = t;
                            if(((t_18 != NULL) && (t_18 != u_18)))
                              _fail(u_18);
                            else
                              t_18 = u_18;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(m_18));
                          {
                            t = x_18(t);
                            {
                              v_18 = t;
                              if(((s_18 != NULL) && (s_18 != v_18)))
                                _fail(v_18);
                              else
                                s_18 = v_18;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(s_18)), not_null(q_18));
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
      t = x_18(t);
    }
  }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(((ATermList) e_19 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_19) == AT_LIST) && ((ATermList) e_19 != ATempty)))
        {
          f_19 = ATgetFirst((ATermList) e_19);
          g_19 = (ATerm) ATgetNext((ATermList) e_19);
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
  ATerm i_17;
  i_17 = t;
  {
    ATerm j_19 = NULL;
    ATerm m_19 = NULL;
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm k_19 = NULL;
          ATerm l_19 = NULL;
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
          t = (ATerm) ATinsert(ATempty, not_null(k_19));
        }
      }
    {
      m_19 = t;
      if(((j_19 != NULL) && (j_19 != m_19)))
        _fail(m_19);
      else
        j_19 = m_19;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(j_19));
      t = printnl_0(t);
    }
  }
  t = i_17;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  t = SSL_int_to_string(not_null(q_19));
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_71(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
        x_19 = t;
        w_19 :
        if(((ATgetType(x_19) == AT_LIST) && ((ATermList) x_19 != ATempty)))
          {
            y_19 = ATgetFirst((ATermList) x_19);
            z_19 = (ATerm) ATgetNext((ATermList) x_19);
            {
              ATerm c_20 = NULL,e_20 = NULL;
              ATerm o_17;
              o_17 = t;
              {
                ATerm d_20 = NULL;
                t = not_null(y_19);
                {
                  t = k_71(t);
                  {
                    d_20 = t;
                    if(((c_20 != NULL) && (c_20 != d_20)))
                      _fail(d_20);
                    else
                      c_20 = d_20;
                  }
                }
              }
              t = o_17;
              {
                ATerm f_20 = NULL;
                t = not_null(z_19);
                {
                  t = foldr_3(t, i_71, j_71, k_71);
                  {
                    f_20 = t;
                    if(((e_20 != NULL) && (e_20 != f_20)))
                      _fail(f_20);
                    else
                      e_20 = f_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(e_20));
                  t = j_71(t);
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
  ATerm b_2 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm echo_start_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm q_17;
    q_17 = t;
    {
      ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
      q_20 = t;
      l_20 :
      if(match_cons(q_20, sym_TestSuite_3))
        {
          r_20 = ATgetArgument(q_20, 0);
          t_20 = ATgetArgument(q_20, 1);
          u_20 = ATgetArgument(q_20, 2);
          m_20 :
          if(match_cons(r_20, sym_Name_1))
            {
              s_20 = ATgetArgument(r_20, 0);
              n_20 :
              if(match_cons(u_20, sym_Tests_1))
                {
                  v_20 = ATgetArgument(u_20, 0);
                  {
                    ATerm w_20 = NULL;
                    if(((o_20 != NULL) && (o_20 != s_20)))
                      _fail(s_20);
                    else
                      o_20 = s_20;
                    {
                      if(((p_20 != NULL) && (p_20 != v_20)))
                        _fail(v_20);
                      else
                        p_20 = v_20;
                      {
                        t = term_g_9;
                        {
                          t = echo_0(t);
                          {
                            ATerm x_20 = NULL;
                            t = not_null(p_20);
                            {
                              t = length_0(t);
                              {
                                t = int_to_string_0(t);
                                {
                                  x_20 = t;
                                  if(((w_20 != NULL) && (w_20 != x_20)))
                                    _fail(x_20);
                                  else
                                    w_20 = x_20;
                                }
                              }
                            }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_17), not_null(w_20)), term_s_17), not_null(o_20)), term_r_17);
                              {
                                t = concat_strings_0(t);
                                {
                                  t = echo_0(t);
                                  {
                                    t = term_g_9;
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
    t = q_17;
    return(t);
  }
  t = if_verbose1_1(t, d_2);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_close_file(not_null(b_21));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      t = SSL_WriteToBinaryFile(not_null(h_21), not_null(i_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym__2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      {
        ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
        ATerm u_17;
        u_17 = t;
        {
          ATerm z_21 = NULL;
          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
          t = r_69(t);
          {
            z_21 = t;
            {
              if(((w_21 != NULL) && (w_21 != z_21)))
                _fail(z_21);
              else
                w_21 = z_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_21), not_null(s_21), not_null(t_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm x_17 = t;
                    int y_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), term_z_17);
                        t = table_get_0(t);
                        LocalPopChoice(y_17);
                      }
                    else
                      {
                        t = x_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_22 = t;
                      p_21 :
                      if(((ATgetType(a_22) == AT_LIST) && ((ATermList) a_22 != ATempty)))
                        {
                          b_22 = ATgetFirst((ATermList) a_22);
                          c_22 = (ATerm) ATgetNext((ATermList) a_22);
                          {
                            if(((x_21 != NULL) && (x_21 != b_22)))
                              _fail(b_22);
                            else
                              x_21 = b_22;
                            {
                              if(((y_21 != NULL) && (y_21 != c_22)))
                                _fail(c_22);
                              else
                                y_21 = c_22;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_21), term_z_17, (ATerm) ATinsert(CheckATermList(not_null(y_21)), (ATerm) ATinsert(CheckATermList(not_null(x_21)), not_null(s_21))));
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
        t = u_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm a_18;
  a_18 = t;
  {
    t = b_69(t);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_b_18;
        return(t);
      }
      t = debug_1(t, e_2);
    }
  }
  t = a_18;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
      u_22 = t;
      h_22 :
      if(match_cons(u_22, sym__2))
        {
          v_22 = ATgetArgument(u_22, 0);
          w_22 = ATgetArgument(u_22, 1);
          {
            if(((t_22 != NULL) && (t_22 != v_22)))
              _fail(v_22);
            else
              t_22 = v_22;
            if(((s_22 != NULL) && (s_22 != w_22)))
              _fail(w_22);
            else
              s_22 = w_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_18);
      t = SSL_open_file(not_null(t_22), not_null(s_22));
    }
  else
    {
      t = c_18;
      {
        ATerm x_22 = NULL;
        ATerm y_22 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_n_18;
          return(t);
        }
        t = obsolete_1(t, i_2);
        {
          x_22 = t;
          {
            if(((t_22 != NULL) && (t_22 != x_22)))
              _fail(x_22);
            else
              t_22 = x_22;
            {
              ATerm o_18;
              o_18 = t;
              {
                ATerm z_22 = NULL;
                t = term_b_16;
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
              }
              t = o_18;
              t = SSL_open_file(not_null(t_22), not_null(y_22));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm o_23 = NULL;
  j_23 = t;
  {
    ATerm p_18;
    p_18 = t;
    {
      ATerm p_23 = NULL;
      t = term_w_18;
      {
        p_23 = t;
        if(((o_23 != NULL) && (o_23 != p_23)))
          _fail(p_23);
        else
          o_23 = p_23;
      }
    }
    t = p_18;
    {
      t = SSL_open_file(not_null(j_23), not_null(o_23));
      t = SSL_close_file(not_null(j_23));
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
  ATerm t_23 = NULL;
  ATerm u_23 = NULL;
  t = term_q_12;
  {
    t = new_0(t);
    {
      u_23 = t;
      if(((t_23 != NULL) && (t_23 != u_23)))
        _fail(u_23);
      else
        t_23 = u_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), term_y_18);
    {
      t = conc_strings_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, j_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm y_23 = NULL;
  t = new_file_0(t);
  {
    y_23 = t;
    {
      ATerm z_18;
      z_18 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), term_b_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), term_q_12);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_a_19;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = z_18;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm d_24 = NULL;
  ATerm f_24 = NULL;
  d_24 = t;
  {
    ATerm g_24 = NULL;
    t = xtc_new_file_0(t);
    {
      g_24 = t;
      {
        if(((f_24 != NULL) && (f_24 != g_24)))
          _fail(g_24);
        else
          f_24 = g_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(d_24));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(f_24);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_24));
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm k_24 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24 = NULL;
      l_24 = t;
      {
        if(((k_24 != NULL) && (k_24 != l_24)))
          _fail(l_24);
        else
          k_24 = l_24;
        t = SSL_ReadFromFile(not_null(k_24));
      }
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm l_2 (ATerm t)
        {
          t = term_h_19;
          return(t);
        }
        t = debug_1(t, l_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym_stdin_0))
    {
      ATerm u_24 = NULL;
      ATerm v_24 = NULL;
      t = term_i_19;
      {
        t = ReadFromFile_0(t);
        {
          v_24 = t;
          if(((u_24 != NULL) && (u_24 != v_24)))
            _fail(v_24);
          else
            u_24 = v_24;
        }
      }
      t = not_null(u_24);
    }
  else
    {
      if(match_cons(s_24, sym_FILE_1))
        {
          t_24 = ATgetArgument(s_24, 0);
          {
            ATerm x_24 = NULL;
            ATerm y_24 = NULL;
            t = not_null(t_24);
            {
              t = ReadFromFile_0(t);
              {
                y_24 = t;
                if(((x_24 != NULL) && (x_24 != y_24)))
                  _fail(y_24);
                else
                  x_24 = y_24;
              }
            }
            t = not_null(x_24);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm t_70 (ATerm))
{
  t = read_from_0(t);
  {
    t = t_70(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm parse_unit_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
    t = echo_start_0(t);
    {
      m_25 = t;
      g_25 :
      if(match_cons(m_25, sym_TestSuite_3))
        {
          n_25 = ATgetArgument(m_25, 0);
          p_25 = ATgetArgument(m_25, 1);
          r_25 = ATgetArgument(m_25, 2);
          h_25 :
          if(match_cons(n_25, sym_Name_1))
            {
              o_25 = ATgetArgument(n_25, 0);
              i_25 :
              if(match_cons(p_25, sym_Sort_1))
                {
                  q_25 = ATgetArgument(p_25, 0);
                  j_25 :
                  if(match_cons(r_25, sym_Tests_1))
                    {
                      s_25 = ATgetArgument(r_25, 0);
                      {
                        ATerm t_25 = NULL,u_25 = NULL;
                        if(((l_25 != NULL) && (l_25 != o_25)))
                          _fail(o_25);
                        else
                          l_25 = o_25;
                        {
                          if(((k_25 != NULL) && (k_25 != q_25)))
                            _fail(q_25);
                          else
                            k_25 = q_25;
                          {
                            if(((t_25 != NULL) && (t_25 != s_25)))
                              _fail(s_25);
                            else
                              t_25 = s_25;
                            {
                              t = not_null(t_25);
                              {
                                ATerm n_2 (ATerm t)
                                {
                                  ATerm o_2 (ATerm t)
                                  {
                                    t = not_null(k_25);
                                    return(t);
                                  }
                                  t = execute_test_2(t, o_2, get_parse_table_0);
                                  return(t);
                                }
                                t = map_with_index_1(t, n_2);
                                {
                                  ATerm v_25 = NULL;
                                  v_25 = t;
                                  if(((u_25 != NULL) && (u_25 != v_25)))
                                    _fail(v_25);
                                  else
                                    u_25 = v_25;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_TestResults_1, not_null(u_25));
                                    {
                                      ATerm n_19;
                                      n_19 = t;
                                      {
                                        ATerm w_25 = NULL;
                                        ATerm x_25 = NULL;
                                        x_25 = t;
                                        if(((w_25 != NULL) && (w_25 != x_25)))
                                          _fail(x_25);
                                        else
                                          w_25 = x_25;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_25), not_null(w_25));
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
  t = xtc_io_transform_1(t, m_2);
  return(t);
}
ATerm parse_table_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm d_26 = NULL;
    d_26 = t;
    b_26 :
    if(!(match_string(d_26, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm o_19;
    o_19 = t;
    {
      ATerm e_26 = NULL;
      ATerm f_26 = NULL;
      f_26 = t;
      if(((e_26 != NULL) && (e_26 != f_26)))
        _fail(f_26);
      else
        e_26 = f_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(e_26));
        t = set_config_0(t);
      }
    }
    t = o_19;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_p_19;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm parse_unit_options_0 (ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = parse_table_option_0(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      t = SSL_copy(not_null(k_26), not_null(l_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_stderr_0))
    {
      ATerm v_26 = NULL,x_26 = NULL;
      ATerm t_19;
      t_19 = t;
      {
        ATerm w_26 = NULL;
        t = SSLgetAnnotations(not_null(t_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
      }
      t = t_19;
      {
        ATerm y_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(v_26));
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
        t = not_null(x_26);
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
  ATerm g_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_stdout_0))
    {
      ATerm i_27 = NULL,k_27 = NULL;
      ATerm u_19;
      u_19 = t;
      {
        ATerm j_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
      }
      t = u_19;
      {
        ATerm l_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(i_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        t = not_null(k_27);
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
  ATerm z_27 = NULL,a_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_FILE_1))
    {
      a_28 = ATgetArgument(z_27, 0);
      {
        ATerm v_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_28 = NULL;
            ATerm d_28 = NULL;
            t = m_0(t);
            {
              d_28 = t;
              {
                if(((c_28 != NULL) && (c_28 != d_28)))
                  _fail(d_28);
                else
                  c_28 = d_28;
                {
                  ATerm b_20 = t;
                  int g_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(g_20);
                    }
                  else
                    {
                      t = b_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(c_28));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_28));
            LocalPopChoice(a_20);
          }
        else
          {
            t = v_19;
            {
              ATerm f_28 = NULL;
              ATerm g_28 = NULL;
              t = m_0(t);
              {
                g_28 = t;
                {
                  if(((f_28 != NULL) && (f_28 != g_28)))
                    _fail(g_28);
                  else
                    f_28 = g_28;
                  {
                    ATerm h_20 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm i_20 = t;
                        int j_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(j_20);
                          }
                        else
                          {
                            t = i_20;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = h_20;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(f_28));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_28));
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  m_28 :
  if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
    {
      o_28 = ATgetFirst((ATermList) n_28);
      p_28 = (ATerm) ATgetNext((ATermList) n_28);
      t = not_null(p_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        ATerm k_20;
        k_20 = t;
        {
          ATerm a_29 = NULL;
          ATerm b_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(x_28));
          {
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                t = (ATerm) ATempty;
              }
            {
              b_29 = t;
              if(((a_29 != NULL) && (a_29 != b_29)))
                _fail(b_29);
              else
                a_29 = b_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_28), not_null(x_28), not_null(a_29));
            t = table_put_0(t);
          }
        }
        t = k_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm l_29 = NULL;
    ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
    t = o_69(t);
    {
      l_29 = t;
      {
        if(((j_29 != NULL) && (j_29 != l_29)))
          _fail(l_29);
        else
          j_29 = l_29;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), term_z_17);
              t = table_get_0(t);
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_29 = t;
            h_29 :
            if(((ATgetType(m_29) == AT_LIST) && ((ATermList) m_29 != ATempty)))
              {
                n_29 = ATgetFirst((ATermList) m_29);
                o_29 = (ATerm) ATgetNext((ATermList) m_29);
                {
                  if(((k_29 != NULL) && (k_29 != n_29)))
                    _fail(n_29);
                  else
                    k_29 = n_29;
                  {
                    if(((i_29 != NULL) && (i_29 != o_29)))
                      _fail(o_29);
                    else
                      i_29 = o_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_29), term_z_17, not_null(i_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_29);
                          {
                            ATerm v_2 (ATerm t)
                            {
                              ATerm p_29 = NULL;
                              p_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(p_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_2);
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
  t = a_21;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_remove(not_null(x_29));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm))
{
  ATerm e_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_79(t);
      t = v_79(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = e_21;
      {
        t = v_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm c_30 = NULL;
  ATerm k_21;
  k_21 = t;
  {
    ATerm d_30 = NULL;
    ATerm e_30 = NULL;
    t = n_69(t);
    {
      d_30 = t;
      {
        if(((c_30 != NULL) && (c_30 != d_30)))
          _fail(d_30);
        else
          c_30 = d_30;
        {
          ATerm f_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_30), term_z_17);
          {
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_21);
              }
            else
              {
                t = l_21;
                t = (ATerm) ATempty;
              }
            {
              f_30 = t;
              if(((e_30 != NULL) && (e_30 != f_30)))
                _fail(f_30);
              else
                e_30 = f_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_30), term_z_17, (ATerm) ATinsert(CheckATermList(not_null(e_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_21;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm k_30 = NULL,l_30 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = term_a_19;
    return(t);
  }
  t = begin_scope_1(t, w_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm n_21;
      n_21 = t;
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
        ATerm o_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_21;
            t = table_get_0(t);
            LocalPopChoice(u_21);
          }
        else
          {
            t = o_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          m_30 = t;
          j_30 :
          if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
            {
              n_30 = ATgetFirst((ATermList) m_30);
              o_30 = (ATerm) ATgetNext((ATermList) m_30);
              {
                if(((l_30 != NULL) && (l_30 != n_30)))
                  _fail(n_30);
                else
                  l_30 = n_30;
                {
                  if(((k_30 != NULL) && (k_30 != o_30)))
                    _fail(o_30);
                  else
                    k_30 = o_30;
                  {
                    t = not_null(l_30);
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, g_3);
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
      t = n_21;
      {
        ATerm h_3 (ATerm t)
        {
          t = term_a_19;
          return(t);
        }
        t = end_scope_1(t, h_3);
      }
      return(t);
    }
    t = restore_always_2(t, y_69, x_2);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    t = a_70(t);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_14;
            t = get_config_0(t);
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = term_l_17;
          }
        return(t);
      }
      t = copy_to_1(t, j_3);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, i_3);
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL;
        ATerm s_30 = NULL;
        t = term_x_14;
        {
          t = get_config_0(t);
          {
            s_30 = t;
            if(((r_30 != NULL) && (r_30 != s_30)))
              _fail(s_30);
            else
              r_30 = s_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_30));
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = term_i_19;
      }
    t = z_69(t);
    return(t);
  }
  t = xtc_output_1(t, k_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm x_30 = NULL;
    x_30 = t;
    w_30 :
    if(!(match_string(x_30, "-v")))
      {
        if(!(match_string(x_30, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_j_22;
    t = set_config_0(t);
    t = term_k_22;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_l_22;
    return(t);
  }
  t = Option_3(t, l_3, n_3, o_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm b_31 = NULL;
    b_31 = t;
    y_30 :
    if(!(match_string(b_31, "-k")))
      {
        if(!(match_string(b_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm m_22;
    m_22 = t;
    {
      ATerm c_31 = NULL;
      ATerm d_31 = NULL;
      t = string_to_int_0(t);
      {
        d_31 = t;
        if(((c_31 != NULL) && (c_31 != d_31)))
          _fail(d_31);
        else
          c_31 = d_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, not_null(c_31));
        t = set_config_0(t);
      }
    }
    t = m_22;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_o_22;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  t = SSL_string_to_int(not_null(i_31));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm q_31 = NULL;
        q_31 = t;
        l_31 :
        if(!(match_string(q_31, "-S")))
          {
            if(!(match_string(q_31, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_r_22;
        t = set_config_0(t);
        t = term_a_23;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_b_23;
        return(t);
      }
      t = Option_3(t, q_4, r_4, s_4);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 (ATerm t)
            {
              ATerm r_31 = NULL;
              r_31 = t;
              m_31 :
              if(!(match_string(r_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              ATerm u_31 = NULL;
              ATerm e_23;
              e_23 = t;
              {
                ATerm s_31 = NULL;
                ATerm t_31 = NULL;
                t = string_to_int_0(t);
                {
                  t_31 = t;
                  if(((s_31 != NULL) && (s_31 != t_31)))
                    _fail(t_31);
                  else
                    s_31 = t_31;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(s_31));
                  t = set_config_0(t);
                }
              }
              t = e_23;
              {
                ATerm v_31 = NULL;
                v_31 = t;
                if(((u_31 != NULL) && (u_31 != v_31)))
                  _fail(v_31);
                else
                  u_31 = v_31;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_31));
              }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              t = term_f_23;
              return(t);
            }
            t = ArgOption_3(t, x_4, y_4, z_4);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm a_5 (ATerm t)
              {
                ATerm a_32 = NULL;
                a_32 = t;
                p_31 :
                if(!(match_string(a_32, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_5 (ATerm t)
              {
                t = term_g_23;
                t = set_config_0(t);
                t = term_h_23;
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = term_i_23;
                return(t);
              }
              t = Option_3(t, a_5, b_5, c_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm n_32 = NULL;
    n_32 = t;
    h_32 :
    if(!(match_string(n_32, "-o")))
      {
        if(!(match_string(n_32, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm w_32 = NULL;
    ATerm q_23;
    q_23 = t;
    {
      ATerm o_32 = NULL;
      ATerm v_32 = NULL;
      v_32 = t;
      if(((o_32 != NULL) && (o_32 != v_32)))
        _fail(v_32);
      else
        o_32 = v_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(o_32));
        t = set_config_0(t);
      }
    }
    t = q_23;
    {
      ATerm x_32 = NULL;
      x_32 = t;
      if(((w_32 != NULL) && (w_32 != x_32)))
        _fail(x_32);
      else
        w_32 = x_32;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_32));
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  t = ArgOption_3(t, d_5, r_5, s_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm l_33 = NULL;
          l_33 = t;
          k_33 :
          if(!(match_string(l_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_x_23;
          t = set_config_0(t);
          t = term_z_23;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_a_24;
          return(t);
        }
        t = Option_3(t, u_5, v_5, x_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,f_34 = NULL;
  a_34 = t;
  p_33 :
  if(match_string(a_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_34) == AT_LIST) && ((ATermList) a_34 != ATempty)))
        {
          b_34 = ATgetFirst((ATermList) a_34);
          c_34 = (ATerm) ATgetNext((ATermList) a_34);
          q_33 :
          if(((ATgetType(c_34) == AT_LIST) && ((ATermList) c_34 != ATempty)))
            {
              d_34 = ATgetFirst((ATermList) c_34);
              f_34 = (ATerm) ATgetNext((ATermList) c_34);
              {
                ATerm p_34 = NULL;
                ATerm b_24;
                b_24 = t;
                {
                  t = not_null(b_34);
                  t = j_0(t);
                }
                t = b_24;
                {
                  ATerm q_34 = NULL;
                  t = not_null(d_34);
                  {
                    t = k_0(t);
                    {
                      q_34 = t;
                      if(((p_34 != NULL) && (p_34 != q_34)))
                        _fail(q_34);
                      else
                        p_34 = q_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_34)), not_null(p_34));
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
  ATerm e_6 (ATerm t)
  {
    ATerm x_34 = NULL;
    x_34 = t;
    u_34 :
    if(!(match_string(x_34, "-i")))
      {
        if(!(match_string(x_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm e_35 = NULL;
    ATerm c_24;
    c_24 = t;
    {
      ATerm y_34 = NULL;
      ATerm d_35 = NULL;
      d_35 = t;
      if(((y_34 != NULL) && (y_34 != d_35)))
        _fail(d_35);
      else
        y_34 = d_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, not_null(y_34));
        t = set_config_0(t);
      }
    }
    t = c_24;
    {
      ATerm f_35 = NULL;
      f_35 = t;
      if(((e_35 != NULL) && (e_35 != f_35)))
        _fail(f_35);
      else
        e_35 = f_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_35));
    }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_e_24;
    return(t);
  }
  t = ArgOption_3(t, e_6, g_6, h_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm j_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_24);
          }
        else
          {
            t = j_24;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_35 = NULL;
  ATerm n_24;
  n_24 = t;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm l_35 = NULL,m_35 = NULL;
      l_35 = t;
      j_35 :
      if(match_cons(l_35, sym_Program_1))
        {
          m_35 = ATgetArgument(l_35, 0);
          if(((k_35 != NULL) && (k_35 != m_35)))
            _fail(m_35);
          else
            k_35 = m_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), not_null(k_35)), term_o_24));
      {
        t = printnl_0(t);
        {
          t = term_n_9;
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
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATempty, term_q_24));
  {
    t = printnl_0(t);
    {
      t = term_n_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm t_35 = NULL;
  ATerm v_35 = NULL;
  t_35 = t;
  {
    ATerm w_35 = NULL;
    ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
    t = not_null(t_35);
    {
      w_35 = t;
      {
        t = SSL_explode_term(not_null(w_35));
        {
          y_35 = t;
          r_35 :
          if(match_cons(y_35, sym__2))
            {
              z_35 = ATgetArgument(y_35, 0);
              a_36 = ATgetArgument(y_35, 1);
              s_35 :
              if(match_string(z_35, ""))
                {
                  if(((v_35 != NULL) && (v_35 != a_36)))
                    _fail(a_36);
                  else
                    v_35 = a_36;
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
      t = not_null(v_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  f_36 :
  if(match_cons(g_36, sym__2))
    {
      h_36 = ATgetArgument(g_36, 0);
      i_36 = ATgetArgument(g_36, 1);
      {
        t = not_null(h_36);
        {
          ATerm n_6 (ATerm t)
          {
            t = not_null(i_36);
            return(t);
          }
          t = at_end_1(t, n_6);
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
  ATerm w_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = w_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm v_48 (ATerm), ATerm w_48 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
  s_36 = t;
  r_36 :
  if(match_cons(s_36, sym__2))
    {
      t_36 = ATgetArgument(s_36, 0);
      u_36 = ATgetArgument(s_36, 1);
      {
        ATerm z_36 = NULL,b_37 = NULL;
        ATerm a_37 = NULL;
        t = SSLgetAnnotations(not_null(s_36));
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
        {
          t = not_null(t_36);
          {
            ATerm d_37 = NULL;
            t = v_48(t);
            {
              b_37 = t;
              {
                t = not_null(u_36);
                {
                  ATerm f_37 = NULL;
                  t = w_48(t);
                  {
                    d_37 = t;
                    {
                      ATerm g_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_37), not_null(d_37)), not_null(z_36));
                      {
                        g_37 = t;
                        if(((f_37 != NULL) && (f_37 != g_37)))
                          _fail(g_37);
                        else
                          f_37 = g_37;
                      }
                      t = not_null(f_37);
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
ATerm debug_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm a_25;
  a_25 = t;
  {
    ATerm o_37 = NULL,q_37 = NULL;
    ATerm b_25;
    b_25 = t;
    {
      ATerm p_37 = NULL;
      t = u_68(t);
      {
        p_37 = t;
        if(((o_37 != NULL) && (o_37 != p_37)))
          _fail(p_37);
        else
          o_37 = p_37;
      }
    }
    t = b_25;
    {
      ATerm r_37 = NULL;
      r_37 = t;
      if(((q_37 != NULL) && (q_37 != r_37)))
        _fail(r_37);
      else
        q_37 = r_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), not_null(o_37)));
        t = printnl_0(t);
      }
    }
  }
  t = a_25;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_is_string(not_null(v_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_6);
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
              e_38 = t;
              d_38 :
              if(match_cons(e_38, sym_Path_1))
                {
                  f_38 = ATgetArgument(e_38, 0);
                  t = not_null(f_38);
                }
              else
                {
                  if(match_cons(e_38, sym_Var_1))
                    {
                      f_38 = ATgetArgument(e_38, 0);
                      {
                        t = not_null(f_38);
                        {
                          ATerm y_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_25);
                            }
                          else
                            {
                              t = y_25;
                              {
                                ATerm p_6 (ATerm t)
                                {
                                  t = term_a_26;
                                  return(t);
                                }
                                t = debug_1(t, p_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_38, sym_Prefix_2))
                        {
                          f_38 = ATgetArgument(e_38, 0);
                          g_38 = ATgetArgument(e_38, 1);
                          {
                            ATerm l_38 = NULL,n_38 = NULL;
                            ATerm c_26;
                            c_26 = t;
                            {
                              ATerm m_38 = NULL;
                              t = not_null(f_38);
                              {
                                t = eval_config_0(t);
                                {
                                  m_38 = t;
                                  if(((l_38 != NULL) && (l_38 != m_38)))
                                    _fail(m_38);
                                  else
                                    l_38 = m_38;
                                }
                              }
                            }
                            t = c_26;
                            {
                              ATerm o_38 = NULL;
                              t = not_null(g_38);
                              {
                                t = eval_config_0(t);
                                {
                                  o_38 = t;
                                  if(((n_38 != NULL) && (n_38 != o_38)))
                                    _fail(o_38);
                                  else
                                    n_38 = o_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_38), not_null(n_38));
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
  ATerm w_38 = NULL;
  w_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_26, not_null(w_38));
    {
      t = table_get_0(t);
      {
        ATerm q_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_26;
            h_26 = t;
            {
              ATerm y_38 = NULL;
              ATerm z_38 = NULL;
              z_38 = t;
              if(((y_38 != NULL) && (y_38 != z_38)))
                _fail(z_38);
              else
                y_38 = z_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_g_26, not_null(w_38), not_null(y_38));
                t = table_put_0(t);
              }
            }
            t = h_26;
          }
          return(t);
        }
        t = try_1(t, q_6);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  t = SSL_TicksToSeconds(not_null(d_39));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym__2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_39), not_null(k_39));
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = SSL_addr(not_null(j_39), not_null(k_39));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_71(t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
        r_39 = t;
        q_39 :
        if(((ATgetType(r_39) == AT_LIST) && ((ATermList) r_39 != ATempty)))
          {
            s_39 = ATgetFirst((ATermList) r_39);
            t_39 = (ATerm) ATgetNext((ATermList) r_39);
            {
              ATerm w_39 = NULL;
              ATerm x_39 = NULL;
              t = not_null(t_39);
              {
                t = foldr_2(t, g_71, h_71);
                {
                  x_39 = t;
                  if(((w_39 != NULL) && (w_39 != x_39)))
                    _fail(x_39);
                  else
                    w_39 = x_39;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_39), not_null(w_39));
                t = h_71(t);
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
ATerm crush_2 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm e_40 = NULL;
  ATerm g_40 = NULL;
  e_40 = t;
  {
    ATerm h_40 = NULL;
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
    t = not_null(e_40);
    {
      h_40 = t;
      {
        t = SSL_explode_term(not_null(h_40));
        {
          j_40 = t;
          d_40 :
          if(match_cons(j_40, sym__2))
            {
              k_40 = ATgetArgument(j_40, 0);
              l_40 = ATgetArgument(j_40, 1);
              if(((g_40 != NULL) && (g_40 != l_40)))
                _fail(l_40);
              else
                g_40 = l_40;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_40);
      t = foldr_2(t, y_72, z_72);
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
    ATerm s_6 (ATerm t)
    {
      t = term_p_17;
      return(t);
    }
    t = crush_2(t, s_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym__2))
    {
      s_40 = ATgetArgument(r_40, 0);
      t_40 = ATgetArgument(r_40, 1);
      {
        ATerm q_26;
        q_26 = t;
        {
          ATerm r_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_40), not_null(t_40));
              LocalPopChoice(u_26);
            }
          else
            {
              t = r_26;
              t = SSL_gtr(not_null(s_40), not_null(t_40));
            }
        }
        t = q_26;
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
  ATerm z_40 = NULL;
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_41 = NULL,b_41 = NULL,f_41 = NULL;
      a_41 = t;
      y_40 :
      if(match_cons(a_41, sym__2))
        {
          b_41 = ATgetArgument(a_41, 0);
          f_41 = ATgetArgument(a_41, 1);
          {
            if(((z_40 != NULL) && (z_40 != b_41)))
              _fail(b_41);
            else
              z_40 = b_41;
            if(((z_40 != NULL) && (z_40 != f_41)))
              _fail(f_41);
            else
              z_40 = f_41;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm b_27;
    b_27 = t;
    {
      ATerm j_41 = NULL;
      ATerm k_41 = NULL;
      t = term_t_11;
      {
        t = get_config_0(t);
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), term_n_9);
        t = geq_0(t);
      }
    }
    t = b_27;
    t = c_83(t);
    return(t);
  }
  t = try_1(t, t_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm o_41 = NULL,q_41 = NULL;
    ATerm c_27;
    c_27 = t;
    {
      ATerm p_41 = NULL;
      t = run_time_0(t);
      {
        p_41 = t;
        if(((o_41 != NULL) && (o_41 != p_41)))
          _fail(p_41);
        else
          o_41 = p_41;
      }
    }
    t = c_27;
    {
      ATerm r_41 = NULL;
      t = term_d_27;
      {
        t = get_config_0(t);
        {
          r_41 = t;
          if(((q_41 != NULL) && (q_41 != r_41)))
            _fail(r_41);
          else
            q_41 = r_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), not_null(o_41)), term_y_9), not_null(q_41)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_6);
  {
    t = term_p_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym_Version_0))
    {
      ATerm i_42 = NULL,k_42 = NULL;
      ATerm h_27;
      h_27 = t;
      {
        ATerm j_42 = NULL;
        t = SSLgetAnnotations(not_null(b_42));
        {
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
        }
      }
      t = h_27;
      {
        ATerm l_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_42));
        {
          l_42 = t;
          if(((k_42 != NULL) && (k_42 != l_42)))
            _fail(l_42);
          else
            k_42 = l_42;
        }
        t = not_null(k_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_6);
  t = s_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  t = SSL_table_create(not_null(q_42));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_42 = NULL;
  u_42 = t;
  {
    ATerm q_27;
    q_27 = t;
    {
      t = term_r_27;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, not_null(u_42));
          t = table_put_0(t);
        }
      }
    }
    t = q_27;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  t = SSL_table_destroy(not_null(y_42));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_43 = NULL;
  c_43 = t;
  t = SSL_exit(not_null(c_43));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_43 = NULL;
  g_43 = t;
  t = SSL_implode_string(not_null(g_43));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm j_43 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_43);
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          t = Nil_0(t);
          t = l_77(t);
        }
      }
    return(t);
  }
  t = j_43(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
        m_43 = t;
        l_43 :
        if(((ATgetType(m_43) == AT_LIST) && ((ATermList) m_43 != ATempty)))
          {
            n_43 = ATgetFirst((ATermList) m_43);
            o_43 = (ATerm) ATgetNext((ATermList) m_43);
            {
              t = not_null(n_43);
              {
                ATerm w_6 (ATerm t)
                {
                  t = not_null(o_43);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_43 = NULL;
  u_43 = t;
  t = SSL_explode_string(not_null(u_43));
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
ATerm long_description_1 (ATerm t, ATerm j_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm x_43 (ATerm t)
  {
    ATerm x_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = x_27;
        t = Cons_2(t, w_76, x_43);
      }
    return(t);
  }
  t = x_43(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  g_44 = t;
  d_44 :
  if(((ATgetType(g_44) == AT_LIST) && ((ATermList) g_44 != ATempty)))
    {
      e_44 = ATgetFirst((ATermList) g_44);
      f_44 = (ATerm) ATgetNext((ATermList) g_44);
      {
        ATerm r_44 = NULL;
        t = not_null(f_44);
        {
          ATerm e_28;
          e_28 = t;
          {
            ATerm s_44 = NULL,v_44 = NULL,d_45 = NULL;
            ATerm h_28;
            h_28 = t;
            {
              ATerm u_44 = NULL;
              t = i_0(t);
              {
                u_44 = t;
                if(((s_44 != NULL) && (s_44 != u_44)))
                  _fail(u_44);
                else
                  s_44 = u_44;
              }
            }
            t = h_28;
            {
              ATerm c_45 = NULL;
              t = not_null(e_44);
              {
                t = h_0(t);
                {
                  c_45 = t;
                  if(((v_44 != NULL) && (v_44 != c_45)))
                    _fail(c_45);
                  else
                    v_44 = c_45;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_44)), not_null(v_44));
                {
                  d_45 = t;
                  if(((r_44 != NULL) && (r_44 != d_45)))
                    _fail(d_45);
                  else
                    r_44 = d_45;
                }
              }
            }
          }
          t = e_28;
          {
            ATerm y_6 (ATerm t)
            {
              t = not_null(r_44);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_44 == ATempty))
        {
          {
            t = term_q_12;
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
  ATerm a_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_51 (ATerm))
{
  ATerm t_45 = NULL,u_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym_Program_1))
    {
      u_45 = ATgetArgument(t_45, 0);
      {
        ATerm x_45 = NULL,a_46 = NULL;
        ATerm y_45 = NULL;
        t = SSLgetAnnotations(not_null(t_45));
        {
          y_45 = t;
          if(((x_45 != NULL) && (x_45 != y_45)))
            _fail(y_45);
          else
            x_45 = y_45;
        }
        {
          t = not_null(u_45);
          {
            ATerm c_46 = NULL;
            t = b_51(t);
            {
              a_46 = t;
              {
                ATerm d_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_46)), not_null(x_45));
                {
                  d_46 = t;
                  if(((c_46 != NULL) && (c_46 != d_46)))
                    _fail(d_46);
                  else
                    c_46 = d_46;
                }
                t = not_null(c_46);
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
  ATerm m_46 = NULL;
  ATerm d_7 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm n_46 = NULL;
      n_46 = t;
      if(((m_46 != NULL) && (m_46 != n_46)))
        _fail(n_46);
      else
        m_46 = n_46;
      return(t);
    }
    t = Program_1(t, e_7);
    return(t);
  }
  t = option_defined_1(t, d_7);
  {
    ATerm f_7 (ATerm t)
    {
      ATerm q_46 = NULL;
      ATerm r_46 = NULL;
      t = term_q_12;
      {
        ATerm g_7 (ATerm t)
        {
          t = not_null(m_46);
          return(t);
        }
        t = short_description_1(t, g_7);
        {
          t = concat_strings_0(t);
          {
            r_46 = t;
            if(((q_46 != NULL) && (q_46 != r_46)))
              _fail(r_46);
            else
              q_46 = r_46;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATempty, not_null(q_46)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATempty, term_i_28));
      {
        t = printnl_0(t);
        {
          t = term_l_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_7 (ATerm t)
                {
                  ATerm s_46 = NULL;
                  s_46 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_46)), term_q_28));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_7);
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm u_46 = NULL;
                    ATerm w_46 = NULL;
                    t = term_q_12;
                    {
                      ATerm n_7 (ATerm t)
                      {
                        t = not_null(m_46);
                        return(t);
                      }
                      t = long_description_1(t, n_7);
                      {
                        t = concat_strings_0(t);
                        {
                          w_46 = t;
                          if(((u_46 != NULL) && (u_46 != w_46)))
                            _fail(w_46);
                          else
                            u_46 = w_46;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_46)), term_r_28));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_7);
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
ATerm printnl_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym__2))
    {
      e_47 = ATgetArgument(d_47, 0);
      f_47 = ATgetArgument(d_47, 1);
      {
        ATerm s_28;
        s_28 = t;
        t = SSL_printnl(not_null(e_47), not_null(f_47));
        t = s_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_51 (ATerm))
{
  ATerm y_48 = NULL,z_48 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym_Undefined_1))
    {
      z_48 = ATgetArgument(y_48, 0);
      {
        ATerm c_49 = NULL,e_49 = NULL;
        ATerm d_49 = NULL;
        t = SSLgetAnnotations(not_null(y_48));
        {
          d_49 = t;
          if(((c_49 != NULL) && (c_49 != d_49)))
            _fail(d_49);
          else
            c_49 = d_49;
        }
        {
          t = not_null(z_48);
          {
            ATerm g_49 = NULL;
            t = c_51(t);
            {
              e_49 = t;
              {
                ATerm h_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_49)), not_null(c_49));
                {
                  h_49 = t;
                  if(((g_49 != NULL) && (g_49 != h_49)))
                    _fail(h_49);
                  else
                    g_49 = h_49;
                }
                t = not_null(g_49);
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
ATerm fetch_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm m_49 (ATerm t)
  {
    ATerm t_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_77, _id);
        LocalPopChoice(y_28);
      }
    else
      {
        t = t_28;
        t = Cons_2(t, _id, m_49);
      }
    return(t);
  }
  t = m_49(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_64 (ATerm))
{
  t = fetch_1(t, n_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_49 = NULL;
  r_49 = t;
  q_49 :
  if(match_cons(r_49, sym_Help_0))
    {
      ATerm t_49 = NULL,v_49 = NULL;
      ATerm z_28;
      z_28 = t;
      {
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(r_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
      }
      t = z_28;
      {
        ATerm w_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_49));
        {
          w_49 = t;
          if(((v_49 != NULL) && (v_49 != w_49)))
            _fail(w_49);
          else
            v_49 = w_49;
        }
        t = not_null(v_49);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_79(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym__2))
    {
      d_50 = ATgetArgument(c_50, 0);
      e_50 = ATgetArgument(c_50, 1);
      t = SSL_table_get(not_null(d_50), not_null(e_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__3))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      o_50 = ATgetArgument(l_50, 2);
      {
        ATerm e_29;
        e_29 = t;
        {
          ATerm s_50 = NULL;
          ATerm t_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), not_null(n_50));
          {
            ATerm f_29 = t;
            int g_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_29);
              }
            else
              {
                t = f_29;
                t = (ATerm) ATempty;
              }
            {
              t_50 = t;
              if(((s_50 != NULL) && (s_50 != t_50)))
                _fail(t_50);
              else
                s_50 = t_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_50), not_null(n_50), (ATerm) ATinsert(CheckATermList(not_null(s_50)), not_null(o_50)));
            t = table_put_0(t);
          }
        }
        t = e_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm x_50 = NULL;
  ATerm y_50 = NULL;
  t = term_q_12;
  {
    t = n_63(t);
    {
      y_50 = t;
      if(((x_50 != NULL) && (x_50 != y_50)))
        _fail(y_50);
      else
        x_50 = y_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, not_null(x_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  f_51 :
  if(match_string(g_51, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(g_51) == AT_LIST) && ((ATermList) g_51 != ATempty)))
        {
          h_51 = ATgetFirst((ATermList) g_51);
          i_51 = (ATerm) ATgetNext((ATermList) g_51);
          {
            ATerm l_51 = NULL;
            ATerm q_29;
            q_29 = t;
            {
              t = not_null(h_51);
              t = a_0(t);
            }
            t = q_29;
            {
              ATerm m_51 = NULL;
              t = term_q_12;
              {
                t = b_0(t);
                {
                  m_51 = t;
                  if(((l_51 != NULL) && (l_51 != m_51)))
                    _fail(m_51);
                  else
                    l_51 = m_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_51)), not_null(l_51));
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
  ATerm o_7 (ATerm t)
  {
    ATerm r_51 = NULL;
    r_51 = t;
    q_51 :
    if(!(match_string(r_51, "--help")))
      {
        if(!(match_string(r_51, "-h")))
          {
            if(!(match_string(r_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_s_29;
    return(t);
  }
  t = Option_3(t, o_7, p_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t_51 :
  if(((ATgetType(u_51) == AT_LIST) && ((ATermList) u_51 != ATempty)))
    {
      v_51 = ATgetFirst((ATermList) u_51);
      w_51 = (ATerm) ATgetNext((ATermList) u_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm))
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(((ATgetType(g_52) == AT_LIST) && ((ATermList) g_52 != ATempty)))
    {
      h_52 = ATgetFirst((ATermList) g_52);
      i_52 = (ATerm) ATgetNext((ATermList) g_52);
      {
        ATerm m_52 = NULL,o_52 = NULL;
        ATerm n_52 = NULL;
        t = SSLgetAnnotations(not_null(g_52));
        {
          n_52 = t;
          if(((m_52 != NULL) && (m_52 != n_52)))
            _fail(n_52);
          else
            m_52 = n_52;
        }
        {
          t = not_null(h_52);
          {
            ATerm q_52 = NULL;
            t = x_55(t);
            {
              o_52 = t;
              {
                t = not_null(i_52);
                {
                  ATerm s_52 = NULL;
                  t = y_55(t);
                  {
                    q_52 = t;
                    {
                      ATerm t_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_52)), not_null(o_52)), not_null(m_52));
                      {
                        t_52 = t;
                        if(((s_52 != NULL) && (s_52 != t_52)))
                          _fail(t_52);
                        else
                          s_52 = t_52;
                      }
                      t = not_null(s_52);
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
  ATerm d_53 = NULL;
  d_53 = t;
  c_53 :
  if(((ATermList) d_53 == ATempty))
    {
      {
        ATerm f_53 = NULL,h_53 = NULL;
        ATerm t_29;
        t_29 = t;
        {
          ATerm g_53 = NULL;
          t = SSLgetAnnotations(not_null(d_53));
          {
            g_53 = t;
            if(((f_53 != NULL) && (f_53 != g_53)))
              _fail(g_53);
            else
              f_53 = g_53;
          }
        }
        t = t_29;
        {
          ATerm i_53 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_53));
          {
            i_53 = t;
            if(((h_53 != NULL) && (h_53 != i_53)))
              _fail(i_53);
            else
              h_53 = i_53;
          }
          t = not_null(h_53);
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
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
  o_53 = t;
  n_53 :
  if(match_cons(o_53, sym__2))
    {
      p_53 = ATgetArgument(o_53, 0);
      q_53 = ATgetArgument(o_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_26, not_null(p_53), not_null(q_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm u_29;
  u_29 = t;
  {
    ATerm b_8 (ATerm t)
    {
      t = term_v_29;
      t = l_63(t);
      return(t);
    }
    t = try_1(t, b_8);
  }
  t = u_29;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm y_53 = NULL;
      ATerm w_29;
      w_29 = t;
      {
        ATerm w_53 = NULL;
        ATerm x_53 = NULL;
        x_53 = t;
        if(((w_53 != NULL) && (w_53 != x_53)))
          _fail(x_53);
        else
          w_53 = x_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_27, not_null(w_53));
          t = set_config_0(t);
        }
      }
      t = w_29;
      {
        ATerm z_53 = NULL;
        z_53 = t;
        if(((y_53 != NULL) && (y_53 != z_53)))
          _fail(z_53);
        else
          y_53 = z_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_53));
      }
      return(t);
    }
    ATerm d_8 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              {
                t = l_63(t);
                t = Cons_2(t, _id, d_8);
              }
            }
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_8, d_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  ATerm g_30;
  g_30 = t;
  {
    ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
    i_54 = t;
    e_54 :
    if(match_cons(i_54, sym__3))
      {
        j_54 = ATgetArgument(i_54, 0);
        k_54 = ATgetArgument(i_54, 1);
        l_54 = ATgetArgument(i_54, 2);
        {
          if(((f_54 != NULL) && (f_54 != j_54)))
            _fail(j_54);
          else
            f_54 = j_54;
          {
            if(((g_54 != NULL) && (g_54 != k_54)))
              _fail(k_54);
            else
              g_54 = k_54;
            {
              if(((h_54 != NULL) && (h_54 != l_54)))
                _fail(l_54);
              else
                h_54 = l_54;
              t = SSL_table_put(not_null(f_54), not_null(g_54), not_null(h_54));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm o_54 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    t = term_i_30;
    t = table_put_0(t);
  }
  t = h_30;
  {
    ATerm e_8 (ATerm t)
    {
      ATerm p_30 = t;
      int q_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_63(t);
          LocalPopChoice(q_30);
        }
      else
        {
          t = p_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_8);
    {
      ATerm k_8 (ATerm t)
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm p_54 = NULL;
                  p_54 = t;
                  if(((o_54 != NULL) && (o_54 != p_54)))
                    _fail(p_54);
                  else
                    o_54 = p_54;
                  return(t);
                }
                t = Undefined_1(t, q_8);
                return(t);
              }
              t = option_defined_1(t, l_8);
              {
                ATerm v_30;
                v_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_54)), term_z_30));
                  t = printnl_0(t);
                }
                t = v_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_8);
      {
        ATerm a_31;
        a_31 = t;
        {
          t = term_j_28;
          t = table_destroy_0(t);
        }
        t = a_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_64 (ATerm), ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  t = parse_options_1(t, p_64);
  {
    t = store_options_0(t);
    {
      t = r_64(t);
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_64);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_64(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm t_64 (ATerm), ATerm u_64 (ATerm))
{
  t = option_wrap_4(t, t_64, default_usage_0, _id, u_64);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    t = xtc_io_1(t, e_70);
    return(t);
  }
  t = option_wrap_2(t, r_8, s_8);
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
