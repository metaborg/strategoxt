#include <srts/stratego.h>
#include <srts/stratego-lib.h>
static Symbol sym_Keys_0;
static Symbol sym_Keys_1;
static Symbol sym_Keys_2;
static Symbol sym_Keys_3;
static Symbol sym_Keys_4;
static Symbol sym_Keys_5;
static Symbol sym_Keys_6;
static Symbol sym_Keys_7;
static Symbol sym_Keys_8;
static Symbol sym_Keys_9;
static Symbol sym_Keys_10;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Dummy_0;
static Symbol sym_Scopes_0;
static Symbol sym_RuleScope_2;
static Symbol sym_ChangeSet_3;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conc_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_Pipe_2;
static Symbol sym_F__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_X__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Anno_2;
static Symbol sym_Infinite_0;
static Symbol sym_Hashtable_1;
static Symbol sym_NestedTable_1;
static Symbol sym_Tables_0;
static Symbol sym_NewTable_0;
static Symbol sym_IndexedSet_1;
static Symbol sym_EpochTime_1;
static Symbol sym_ComponentTime_3;
static Symbol sym_DayTime_3;
static Symbol sym_Date_3;
static Symbol sym_Dupl_2;
static Symbol sym_January_0;
static Symbol sym_February_0;
static Symbol sym_March_0;
static Symbol sym_April_0;
static Symbol sym_May_0;
static Symbol sym_June_0;
static Symbol sym_July_0;
static Symbol sym_August_0;
static Symbol sym_September_0;
static Symbol sym_October_0;
static Symbol sym_November_0;
static Symbol sym_December_0;
static Symbol sym_Sunday_0;
static Symbol sym_Monday_0;
static Symbol sym_Tuesday_0;
static Symbol sym_Wednesday_0;
static Symbol sym_Thursday_0;
static Symbol sym_Friday_0;
static Symbol sym_Saturday_0;
static Symbol sym_ErrorNumber_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Prefix_2;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Silent_0;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Runtime_1;
static Symbol sym_DeclVersion_1;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Tool_1;
static Symbol sym_Repository_0;
static Symbol sym_Stack_0;
static Symbol sym_Import_0;
static Symbol sym_Imported_1;
static Symbol sym_FromFile_0;
static Symbol sym_XTC_0;
static Symbol sym_RepoFile_1;
static Symbol sym_RepoTable_2;
static Symbol sym_RepoTable_1;
static Symbol sym_FILE_1;
static Symbol sym_DIR_1;
static Symbol sym_TEMP_0;
static Symbol sym_TempFiles_0;
static Symbol sym_TempDirs_0;
static void init_module_constructors (void)
{
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
  sym_RuleScope_2 = ATmakeSymbol("RuleScope", 2, ATfalse);
  ATprotectSymbol(sym_RuleScope_2);
  sym_ChangeSet_3 = ATmakeSymbol("ChangeSet", 3, ATfalse);
  ATprotectSymbol(sym_ChangeSet_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_NestedTable_1 = ATmakeSymbol("NestedTable", 1, ATfalse);
  ATprotectSymbol(sym_NestedTable_1);
  sym_Tables_0 = ATmakeSymbol("Tables", 0, ATfalse);
  ATprotectSymbol(sym_Tables_0);
  sym_NewTable_0 = ATmakeSymbol("NewTable", 0, ATfalse);
  ATprotectSymbol(sym_NewTable_0);
  sym_IndexedSet_1 = ATmakeSymbol("IndexedSet", 1, ATfalse);
  ATprotectSymbol(sym_IndexedSet_1);
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
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Stack_0 = ATmakeSymbol("Stack", 0, ATfalse);
  ATprotectSymbol(sym_Stack_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_FromFile_0 = ATmakeSymbol("FromFile", 0, ATfalse);
  ATprotectSymbol(sym_FromFile_0);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_RepoFile_1 = ATmakeSymbol("RepoFile", 1, ATfalse);
  ATprotectSymbol(sym_RepoFile_1);
  sym_RepoTable_2 = ATmakeSymbol("RepoTable", 2, ATfalse);
  ATprotectSymbol(sym_RepoTable_2);
  sym_RepoTable_1 = ATmakeSymbol("RepoTable", 1, ATfalse);
  ATprotectSymbol(sym_RepoTable_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_TempDirs_0 = ATmakeSymbol("TempDirs", 0, ATfalse);
  ATprotectSymbol(sym_TempDirs_0);
}
static ATerm term_b_23;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_u_22;
static ATerm term_t_22;
static ATerm term_b_22;
static ATerm term_a_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_b_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_j_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_b_19;
static ATerm term_l_18;
static ATerm term_k_18;
static ATerm term_g_18;
static ATerm term_z_17;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_r_17;
static ATerm term_r_15;
static ATerm term_o_15;
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_e_15;
static ATerm term_d_15;
static ATerm term_c_15;
static ATerm term_f_14;
static ATerm term_e_14;
static ATerm term_d_14;
static ATerm term_i_12;
static ATerm term_g_12;
static ATerm term_y_11;
static ATerm term_x_11;
static ATerm term_r_11;
static ATerm term_q_11;
static ATerm term_p_11;
static ATerm term_h_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("All tools available", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration found for: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--check        check tool dependencies", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_d_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_TEMP_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_n_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Stack_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_r_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, (ATerm) ATempty);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcFilesAndTables", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Tables_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("e_3", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_5", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("n_5", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find? ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
}
#include <srts/init-stratego-module.h>
ATerm xtc_transform_2_0 (ATerm x_7 (ATerm), ATerm y_7 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm w_7 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm v_7 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_check_dependencies_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm check_options_1_0 (ATerm u_7 (ATerm), ATerm t);
ATerm xtc_input_wrap_2_0 (ATerm s_7 (ATerm), ATerm t_7 (ATerm), ATerm t);
ATerm xtc_input_wrap_1_0 (ATerm r_7 (ATerm), ATerm t);
ATerm xtc_iowrap_2_0 (ATerm p_7 (ATerm), ATerm q_7 (ATerm), ATerm t);
ATerm xtc_iowrap_1_0 (ATerm o_7 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_io_wrap_5_0 (ATerm j_7 (ATerm), ATerm k_7 (ATerm), ATerm l_7 (ATerm), ATerm m_7 (ATerm), ATerm n_7 (ATerm), ATerm t);
ATerm xtc_io_wrap_3_0 (ATerm g_7 (ATerm), ATerm h_7 (ATerm), ATerm i_7 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm e_7 (ATerm), ATerm f_7 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm d_7 (ATerm), ATerm t);
ATerm xtc_input_1_0 (ATerm c_7 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_output_1_0 (ATerm b_7 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm a_7 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm z_6 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
ATerm xtc_remove_temporaries_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_find_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm write_to_text_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm copy_to_1_0 (ATerm w_1 (ATerm), ATerm t);
ATerm rename_to_1_0 (ATerm v_1 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm r_6 (ATerm), ATerm s_6 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
ATerm xtc_generate_1_0 (ATerm q_6 (ATerm), ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm p_6 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm o_6 (ATerm), ATerm t);
ATerm xtc_transform_term_2_0 (ATerm m_6 (ATerm), ATerm n_6 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm l_1 (ATerm), ATerm u_1 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
ATerm xtc_transform_file_1_0 (ATerm h_6 (ATerm), ATerm t);
ATerm xtc_transform_file_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm File_as_fd_1_0 (ATerm g_6 (ATerm), ATerm t);
ATerm xtc_filter_text_file_2_0 (ATerm e_6 (ATerm), ATerm f_6 (ATerm), ATerm t);
static ATerm s_11 (ATerm e_6 (ATerm), ATerm f_6 (ATerm), ATerm l_3, ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
ATerm xtc_scope_1_0 (ATerm d_6 (ATerm), ATerm t);
ATerm xtc_pop_0_0 (ATerm t);
ATerm xtc_push_table_0_0 (ATerm t);
ATerm xtc_push_file_0_0 (ATerm t);
ATerm xtc_get_stack_0_0 (ATerm t);
ATerm xtc_set_stack_0_1 (ATerm b_3, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_push_default_0_0 (ATerm t);
ATerm can_write_repository_0_0 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm xtc_read_0_1 (ATerm z_2, ATerm t);
ATerm xtc_import_0_0 (ATerm t);
ATerm aux_XtcFilesAndTables_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm bagof_XtcFilesAndTables_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm XtcFilesAndTables_0_0 (ATerm t);
ATerm xtc_file_to_table_new_0_0 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm t_11 (ATerm e_2, ATerm t);
ATerm xtc_file_to_table_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_register_0_3 (ATerm y_1, ATerm z_1, ATerm b_2, ATerm t);
ATerm xtc_extend_0_2 (ATerm k_0, ATerm n_0, ATerm t);
ATerm xtc_set_0_2 (ATerm c_0, ATerm i_0, ATerm t);
ATerm Keys_0_0 (ATerm t);
ATerm Keys_1_0 (ATerm f_76 (ATerm), ATerm t);
ATerm Keys_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm Keys_3_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t);
ATerm Keys_4_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t);
ATerm Keys_5_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t);
ATerm Keys_6_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t);
ATerm Keys_7_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm t);
ATerm Keys_8_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t);
ATerm Keys_9_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t);
ATerm Keys_10_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t);
ATerm Defined_0_0 (ATerm t);
ATerm Defined_1_0 (ATerm i_78 (ATerm), ATerm t);
ATerm Defined_2_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm t);
ATerm Defined_3_0 (ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t);
ATerm Defined_4_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t);
ATerm Defined_5_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t);
ATerm Defined_6_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t);
ATerm Defined_7_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t);
ATerm Defined_8_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm t);
ATerm Defined_9_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t);
ATerm Defined_10_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t);
ATerm Undefined_0_0 (ATerm t);
ATerm Dummy_0_0 (ATerm t);
ATerm Scopes_0_0 (ATerm t);
ATerm RuleScope_2_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t);
ATerm ChangeSet_3_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm t);
ATerm Conc_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t);
ATerm _0_0 (ATerm t);
ATerm _1_0 (ATerm u_80 (ATerm), ATerm t);
ATerm _2_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm t);
ATerm _3_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t);
ATerm _4_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
ATerm _5_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm t);
ATerm _6_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
ATerm _7_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t);
ATerm _8_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm t);
ATerm _9_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t);
ATerm _10_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t);
ATerm _11_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t);
ATerm _12_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t);
ATerm _13_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t);
ATerm _14_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
ATerm _15_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
ATerm _16_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t);
ATerm _17_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t);
ATerm _18_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm Some_1_0 (ATerm j_87 (ATerm), ATerm t);
ATerm Pipe_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t);
ATerm F__OK_0_0 (ATerm t);
ATerm R__OK_0_0 (ATerm t);
ATerm W__OK_0_0 (ATerm t);
ATerm X__OK_0_0 (ATerm t);
ATerm Stream_1_0 (ATerm m_87 (ATerm), ATerm t);
ATerm Path_1_0 (ATerm n_87 (ATerm), ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm Anno_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t);
ATerm Infinite_0_0 (ATerm t);
ATerm Hashtable_1_0 (ATerm q_87 (ATerm), ATerm t);
ATerm NestedTable_1_0 (ATerm r_87 (ATerm), ATerm t);
ATerm Tables_0_0 (ATerm t);
ATerm NewTable_0_0 (ATerm t);
ATerm IndexedSet_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm EpochTime_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm ComponentTime_3_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
ATerm DayTime_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t);
ATerm Date_3_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t);
ATerm Dupl_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
ATerm January_0_0 (ATerm t);
ATerm February_0_0 (ATerm t);
ATerm March_0_0 (ATerm t);
ATerm April_0_0 (ATerm t);
ATerm May_0_0 (ATerm t);
ATerm June_0_0 (ATerm t);
ATerm July_0_0 (ATerm t);
ATerm August_0_0 (ATerm t);
ATerm September_0_0 (ATerm t);
ATerm October_0_0 (ATerm t);
ATerm November_0_0 (ATerm t);
ATerm December_0_0 (ATerm t);
ATerm Sunday_0_0 (ATerm t);
ATerm Monday_0_0 (ATerm t);
ATerm Tuesday_0_0 (ATerm t);
ATerm Wednesday_0_0 (ATerm t);
ATerm Thursday_0_0 (ATerm t);
ATerm Friday_0_0 (ATerm t);
ATerm Saturday_0_0 (ATerm t);
ATerm ErrorNumber_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm g_88 (ATerm), ATerm t);
ATerm Prefix_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t);
ATerm WaitStatus_3_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t);
ATerm Signal_3_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm UnknownSignal_1_0 (ATerm p_88 (ATerm), ATerm t);
ATerm Silent_0_0 (ATerm t);
ATerm Verbose_1_0 (ATerm q_88 (ATerm), ATerm t);
ATerm Version_0_0 (ATerm t);
ATerm Input_1_0 (ATerm r_88 (ATerm), ATerm t);
ATerm Output_1_0 (ATerm s_88 (ATerm), ATerm t);
ATerm Binary_0_0 (ATerm t);
ATerm Statistics_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm Runtime_1_0 (ATerm t_88 (ATerm), ATerm t);
ATerm DeclVersion_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm v_88 (ATerm), ATerm t);
ATerm Undefined_1_0 (ATerm w_88 (ATerm), ATerm t);
ATerm Anno__Cong_____2_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t);
ATerm Pair_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t);
ATerm Read_0_0 (ATerm t);
ATerm Write_0_0 (ATerm t);
ATerm Execute_0_0 (ATerm t);
ATerm Existence_0_0 (ATerm t);
ATerm SIGPOLL_0_0 (ATerm t);
ATerm SIGPROF_0_0 (ATerm t);
ATerm SIGSYS_0_0 (ATerm t);
ATerm SIGTRAP_0_0 (ATerm t);
ATerm SIGVTALRM_0_0 (ATerm t);
ATerm SIGXCPU_0_0 (ATerm t);
ATerm SIGXFSZ_0_0 (ATerm t);
ATerm SIGBUS_0_0 (ATerm t);
ATerm SIGCHLD_0_0 (ATerm t);
ATerm SIGCONT_0_0 (ATerm t);
ATerm SIGFPE_0_0 (ATerm t);
ATerm SIGILL_0_0 (ATerm t);
ATerm SIGPIPE_0_0 (ATerm t);
ATerm SIGSEGV_0_0 (ATerm t);
ATerm SIGSTOP_0_0 (ATerm t);
ATerm SIGTSTP_0_0 (ATerm t);
ATerm SIGTTIN_0_0 (ATerm t);
ATerm SIGTTOU_0_0 (ATerm t);
ATerm SIGURG_0_0 (ATerm t);
ATerm SIGUSR1_0_0 (ATerm t);
ATerm SIGUSR2_0_0 (ATerm t);
ATerm SIGHUP_0_0 (ATerm t);
ATerm SIGINT_0_0 (ATerm t);
ATerm SIGQUIT_0_0 (ATerm t);
ATerm SIGABRT_0_0 (ATerm t);
ATerm SIGKILL_0_0 (ATerm t);
ATerm SIGALRM_0_0 (ATerm t);
ATerm SIGTERM_0_0 (ATerm t);
ATerm AllSignals_0_0 (ATerm t);
ATerm init_name_space_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm exit_name_space_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_89 (ATerm), ATerm t);
ATerm end_scope_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t);
ATerm assert_1_0 (ATerm h_89 (ATerm), ATerm t);
ATerm override_key_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm rewrite_1_0 (ATerm j_89 (ATerm), ATerm t);
ATerm extend_assert_1_0 (ATerm k_89 (ATerm), ATerm t);
ATerm extend_override_key_1_0 (ATerm l_89 (ATerm), ATerm t);
ATerm extend_assert_undefined_1_0 (ATerm m_89 (ATerm), ATerm t);
ATerm extend_override_key_undefined_1_0 (ATerm n_89 (ATerm), ATerm t);
ATerm extend_rewrite_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm dr_debug_rule_set_0_1 (ATerm q_14, ATerm t);
ATerm dr_debug_rule_set_0_2 (ATerm r_14, ATerm s_14, ATerm t);
ATerm dr_print_rule_set_0_1 (ATerm t_14, ATerm t);
ATerm dr_print_rule_sets_0_1 (ATerm u_14, ATerm t);
ATerm dr_print_rule_set_0_0 (ATerm t);
ATerm dr_print_scope_0_0 (ATerm t);
ATerm dr_eq_rule_sets_0_0 (ATerm t);
ATerm dr_fold_and_intersect_3_1 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm (ATerm), ATerm), ATerm i_15, ATerm t);
ATerm dr_fold_and_intersect_3_2 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm (ATerm), ATerm), ATerm k_15, ATerm l_15, ATerm t);
ATerm dr_map_and_intersect_1_1 (ATerm w_89 (ATerm), ATerm p_15, ATerm t);
ATerm dr_fix_and_intersect_1_1 (ATerm z_89 (ATerm), ATerm q_15, ATerm t);
ATerm dr_fix_and_union_1_1 (ATerm a_90 (ATerm), ATerm t_15, ATerm t);
ATerm dr_fix_and_intersect_union_1_2 (ATerm b_90 (ATerm), ATerm w_15, ATerm x_15, ATerm t);
ATerm dr_fork_and_intersect_2_1 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm c_16, ATerm t);
ATerm dr_fork_and_union_2_1 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm f_16, ATerm t);
ATerm dr_fork_and_intersect_union_2_2 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_16, ATerm j_16, ATerm t);
ATerm dr_fix_and_merge_2_1 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm o_16, ATerm t);
ATerm dr_fix_and_merge_3_2 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm s_16, ATerm t_16, ATerm t);
ATerm fork_rule_sets_0_0 (ATerm t);
ATerm merge_rule_sets_1_0 (ATerm n_90 (ATerm), ATerm t);
ATerm dr_fork_and_merge_3_1 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm c_17, ATerm t);
ATerm dr_fork_and_merge_4_2 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm g_17, ATerm h_17, ATerm t);
ATerm dr_merge_rule_sets_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t);
ATerm dr_merge_rule_sets1_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t);
ATerm dr_merge_rule_sets2_2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t);
ATerm dr_intersect_rule_sets_0_0 (ATerm t);
ATerm apply_rm_set_0_1 (ATerm q_18, ATerm t);
ATerm dr_intersect_rule_sets_symm_0_0 (ATerm t);
ATerm dr_union_rule_sets_0_0 (ATerm t);
ATerm dr_union_rule_sets_symm_0_0 (ATerm t);
ATerm dr_add_to_rule_set_0_2 (ATerm z_19, ATerm a_20, ATerm t);
ATerm dr_add_to_rule_set_0_3 (ATerm b_20, ATerm c_20, ATerm d_20, ATerm t);
ATerm dr_add_fail_0_4 (ATerm e_20, ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
ATerm dr_add_to_rule_set_1_3 (ATerm d_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm f_0, ATerm g_0, ATerm j_0, ATerm t);
ATerm dr_add_to_rule_set_vis_0_3 (ATerm g_21, ATerm h_21, ATerm i_21, ATerm t);
ATerm dr_add_to_rule_set_vis_2_3 (ATerm l_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm o_0 (ATerm, ATerm, ATerm, ATerm), ATerm q_0, ATerm r_0, ATerm t_0, ATerm t);
ATerm dr_set_in_rule_set_0_2 (ATerm h_22, ATerm i_22, ATerm t);
ATerm dr_set_in_rule_set_0_3 (ATerm j_22, ATerm k_22, ATerm l_22, ATerm t);
ATerm dr_set_fail_0_4 (ATerm m_22, ATerm n_22, ATerm o_22, ATerm p_22, ATerm t);
ATerm dr_set_in_rule_set_1_3 (ATerm u_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm v_0, ATerm w_0, ATerm x_0, ATerm t);
ATerm dr_set_in_rule_set_vis_0_2 (ATerm k_23, ATerm l_23, ATerm t);
ATerm dr_set_in_rule_set_vis_0_3 (ATerm m_23, ATerm n_23, ATerm o_23, ATerm t);
ATerm dr_rm_fail_0_3 (ATerm y_0, ATerm z_0, ATerm a_1, ATerm t);
ATerm dr_set_in_rule_set_vis_2_3 (ATerm b_1 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm c_1 (ATerm, ATerm, ATerm, ATerm), ATerm d_1, ATerm e_1, ATerm f_1, ATerm t);
ATerm dr_lookup_rule_0_1 (ATerm p_24, ATerm t);
ATerm dr_lookup_rule_1_1 (ATerm g_1 (ATerm), ATerm h_1, ATerm t);
ATerm dr_lookup_rule_pointer_0_1 (ATerm y_24, ATerm t);
ATerm dr_lookup_rule_pointer_1_1 (ATerm i_1 (ATerm), ATerm j_1, ATerm t);
ATerm dr_lookup_all_rules_0_1 (ATerm h_25, ATerm t);
ATerm dr_lookup_all_rules_1_1 (ATerm k_1 (ATerm), ATerm m_1, ATerm t);
ATerm dr_new_change_set_0_0 (ATerm t);
ATerm dr_start_change_set_0_0 (ATerm t);
ATerm dr_destroy_change_set_0_0 (ATerm t);
ATerm dr_commit_change_set_0_0 (ATerm t);
ATerm dr_discard_change_set_0_0 (ATerm t);
ATerm dr_commit_labels_0_1 (ATerm z_25, ATerm t);
ATerm dr_apply_change_0_1 (ATerm a_26, ATerm t);
ATerm dr_commit_to_rule_set_0_3 (ATerm f_26, ATerm g_26, ATerm h_26, ATerm t);
ATerm dr_commit_to_change_set_0_3 (ATerm i_26, ATerm j_26, ATerm k_26, ATerm t);
ATerm dr_commit_to_rule_scope_0_3 (ATerm m_26, ATerm n_26, ATerm o_26, ATerm t);
ATerm dr_apply_removal_0_0 (ATerm t);
ATerm dr_remove_from_rule_set_0_2 (ATerm u_26, ATerm v_26, ATerm t);
ATerm dr_remove_from_change_set_0_2 (ATerm w_26, ATerm x_26, ATerm t);
ATerm dr_remove_from_rule_scope_0_2 (ATerm z_26, ATerm a_27, ATerm t);
ATerm dr_new_scope_0_0 (ATerm t);
ATerm dr_new_rule_set_0_0 (ATerm t);
ATerm dr_add_scope_0_0 (ATerm t);
ATerm dr_destroy_scope_0_0 (ATerm t);
ATerm dr_leave_scope_0_0 (ATerm t);
ATerm dr_get_inner_scope_0_0 (ATerm t);
ATerm dr_label_scope_0_1 (ATerm g_27, ATerm t);
ATerm dr_get_scope_labels_0_0 (ATerm t);
ATerm dr_get_first_scope_label_1_0 (ATerm d_92 (ATerm), ATerm t);
ATerm dr_save_rule_set_0_0 (ATerm t);
ATerm dr_scope_1_1 (ATerm e_92 (ATerm), ATerm h_27, ATerm t);
ATerm dr_begin_scope_0_1 (ATerm i_27, ATerm t);
ATerm dr_end_scope_0_1 (ATerm j_27, ATerm t);
ATerm dr_scopes_1_1 (ATerm f_92 (ATerm), ATerm k_27, ATerm t);
ATerm dr_begin_scopes_0_1 (ATerm l_27, ATerm t);
ATerm dr_end_scopes_0_1 (ATerm n_27, ATerm t);
ATerm dr_start_change_set_0_1 (ATerm p_27, ATerm t);
ATerm dr_commit_change_set_0_1 (ATerm q_27, ATerm t);
ATerm dr_discard_change_set_0_1 (ATerm r_27, ATerm t);
ATerm dr_label_scope_0_2 (ATerm s_27, ATerm t_27, ATerm t);
ATerm dr_get_scope_labels_0_1 (ATerm u_27, ATerm t);
ATerm dr_get_first_scope_label_1_1 (ATerm g_92 (ATerm), ATerm v_27, ATerm t);
ATerm dr_ignore_state_1_1 (ATerm h_92 (ATerm), ATerm w_27, ATerm t);
ATerm dr_lookup_rule_0_2 (ATerm y_27, ATerm z_27, ATerm t);
ATerm dr_lookup_all_rules_0_2 (ATerm a_28, ATerm b_28, ATerm t);
ATerm dr_lookup_rule_pointer_0_2 (ATerm c_28, ATerm d_28, ATerm t);
ATerm dr_set_rule_0_3 (ATerm e_28, ATerm f_28, ATerm g_28, ATerm t);
ATerm dr_set_rule_0_4 (ATerm h_28, ATerm i_28, ATerm j_28, ATerm k_28, ATerm t);
ATerm dr_set_rule_vis_0_4 (ATerm l_28, ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
ATerm dr_set_rules_vis_0_4 (ATerm p_28, ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
ATerm dr_undefine_rule_0_2 (ATerm t_28, ATerm u_28, ATerm t);
ATerm dr_undefine_rule_0_3 (ATerm v_28, ATerm w_28, ATerm x_28, ATerm t);
ATerm dr_undefine_rule_vis_0_3 (ATerm y_28, ATerm z_28, ATerm a_29, ATerm t);
ATerm dr_add_rule_0_3 (ATerm b_29, ATerm c_29, ATerm d_29, ATerm t);
ATerm dr_add_rule_0_4 (ATerm e_29, ATerm f_29, ATerm g_29, ATerm h_29, ATerm t);
ATerm dr_add_rule_vis_0_4 (ATerm i_29, ATerm j_29, ATerm k_29, ATerm l_29, ATerm t);
ATerm dr_intersect_with_0_1 (ATerm m_29, ATerm t);
ATerm dr_intersect_symm_0_1 (ATerm n_29, ATerm t);
ATerm dr_union_with_0_1 (ATerm o_29, ATerm t);
ATerm dr_union_symm_0_1 (ATerm p_29, ATerm t);
ATerm dr_get_rule_set_0_1 (ATerm q_29, ATerm t);
ATerm dr_set_rule_set_0_1 (ATerm r_29, ATerm t);
ATerm dr_switch_rule_set_0_1 (ATerm s_29, ATerm t);
ATerm try_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm maybe_1_0 (ATerm j_92 (ATerm), ATerm t);
ATerm maybe_2_0 (ATerm n_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm if_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t);
ATerm if_3_0 (ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t);
ATerm ior_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t);
ATerm or_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t);
ATerm and_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm FAIL_0_0 (ATerm t);
ATerm restore_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t);
ATerm finally_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm i_93 (ATerm), ATerm t);
ATerm repeat1_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t);
ATerm repeat1_1_0 (ATerm m_93 (ATerm), ATerm t);
ATerm repeat_until_2_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm t);
ATerm while_2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm t);
ATerm do_while_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t);
ATerm cpl_loaded_0_0 (ATerm t);
ATerm if_cpl_loaded_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm t);
ATerm if_cpl_loaded_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm g_94 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm h_94 (ATerm), ATerm t);
ATerm downup_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t);
ATerm downup2_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t);
ATerm topdownS_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_2_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_3_0 (ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm don_p_t_stop_1_0 (ATerm v_94 (ATerm), ATerm t);
ATerm bottomup_para_1_0 (ATerm w_94 (ATerm), ATerm t);
ATerm spinetd_1_0 (ATerm x_94 (ATerm), ATerm t);
ATerm spinebu_1_0 (ATerm y_94 (ATerm), ATerm t);
ATerm somespinetd_1_0 (ATerm b_95 (ATerm), ATerm t);
ATerm somespinebu_1_0 (ATerm d_95 (ATerm), ATerm t);
ATerm spinetd_p__1_0 (ATerm p_1 (ATerm), ATerm t);
ATerm spinebu_p__1_0 (ATerm q_1 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm j_95 (ATerm), ATerm t);
ATerm oncebu_1_0 (ATerm l_95 (ATerm), ATerm t);
ATerm oncetd_skip_2_0 (ATerm n_95 (ATerm), ATerm o_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm oncetd_stop_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm sometd_1_0 (ATerm t_95 (ATerm), ATerm t);
ATerm somebu_1_0 (ATerm v_95 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm x_95 (ATerm), ATerm t);
ATerm alldownup2_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t);
ATerm downup2_p__obsolete_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t);
ATerm alltd_fold_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm leaves_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t);
ATerm manybu_1_0 (ATerm p_96 (ATerm), ATerm t);
ATerm manytd_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm somedownup_1_0 (ATerm t_96 (ATerm), ATerm t);
ATerm breadthfirst_1_0 (ATerm v_96 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm is_inner_node_0_0 (ATerm t);
ATerm is_proper_subterm_set_0_0 (ATerm t);
ATerm is_proper_superterm_set_0_0 (ATerm t);
ATerm is_superterm_0_0 (ATerm t);
ATerm is_proper_superterm_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm is_proper_subterm_0_0 (ATerm t);
ATerm all_l_1_0 (ATerm x_96 (ATerm), ATerm t);
ATerm topdown_l_1_0 (ATerm y_96 (ATerm), ATerm t);
ATerm bottomup_l_1_0 (ATerm a_97 (ATerm), ATerm t);
ATerm downup_l_1_0 (ATerm c_97 (ATerm), ATerm t);
ATerm downup_l_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t);
ATerm downup2_l_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
ATerm topdownS_l_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_l_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_2_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_3_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_para_l_1_0 (ATerm x_97 (ATerm), ATerm t);
ATerm alltd_l_1_0 (ATerm z_97 (ATerm), ATerm t);
ATerm alldownup2_l_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
ATerm alltd_fold_l_2_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t);
ATerm reduce_1_0 (ATerm h_98 (ATerm), ATerm t);
ATerm outermost_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm innermost_p__1_0 (ATerm k_98 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm l_98 (ATerm), ATerm t);
ATerm innermost_old_1_0 (ATerm m_98 (ATerm), ATerm t);
ATerm pseudo_innermost3_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm innermost_memo_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm innermost_tagged_1_0 (ATerm t_98 (ATerm), ATerm t);
ATerm env_alltd_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm env_topdown_1_0 (ATerm x_98 (ATerm), ATerm t);
ATerm env_topdown_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm (ATerm), ATerm), ATerm t);
ATerm env_bottomup_1_0 (ATerm c_99 (ATerm), ATerm t);
ATerm thread_alltd_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm thread_bottomup_1_0 (ATerm g_99 (ATerm), ATerm t);
ATerm count_bottomup_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm env_oncetd_1_0 (ATerm j_99 (ATerm), ATerm t);
ATerm all_dist_1_0 (ATerm l_99 (ATerm), ATerm t);
ATerm one_dist_1_0 (ATerm m_99 (ATerm), ATerm t);
ATerm d_1_0 (ATerm n_99 (ATerm), ATerm t);
ATerm t_1_0 (ATerm o_99 (ATerm), ATerm t);
ATerm coll_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm stdioO_1_0 (ATerm q_99 (ATerm), ATerm t);
ATerm stdio_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm echo_1_0 (ATerm s_99 (ATerm), ATerm t);
ATerm printchar_0_0 (ATerm t);
ATerm printstring_0_0 (ATerm t);
ATerm debug_stdout_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm say_1_0 (ATerm u_99 (ATerm), ATerm t);
ATerm trace_2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm obsolete_1_0 (ATerm x_99 (ATerm), ATerm t);
ATerm dissuader_1_0 (ATerm y_99 (ATerm), ATerm t);
ATerm Assert_2_0 (ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t);
ATerm risky_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t);
ATerm debug_depth_0_0 (ATerm t);
ATerm debug_depth_1_0 (ATerm d_100 (ATerm), ATerm t);
ATerm debug_depth_2_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t);
ATerm debug_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_100 (ATerm), ATerm t);
ATerm print_strings_nl_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm fprint_0_0 (ATerm t);
ATerm fprintnl_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm write_to_stream_0_0 (ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
ATerm write_in_taf_to_stream_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm read_from_string_0_0 (ATerm t);
ATerm write_to_string_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm WriteToTextFile_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm i_100 (ATerm), ATerm t);
ATerm open_1_0 (ATerm j_100 (ATerm), ATerm t);
ATerm save_1_0 (ATerm k_100 (ATerm), ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm for_each_pair_1_0 (ATerm l_100 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm separate_by_0_1 (ATerm s_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm upto_0_0 (ATerm t);
ATerm UptoInit_0_0 (ATerm t);
ATerm UptoExit_0_0 (ATerm t);
ATerm UptoStep_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm list_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm list_some_1_0 (ATerm v_100 (ATerm), ATerm t);
ATerm length_0_0 (ATerm t);
ATerm elem_0_0 (ATerm t);
ATerm elem_1_0 (ATerm x_100 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm y_100 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm a_101 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm b_101 (ATerm), ATerm t);
ATerm split_fetch_keep_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm at__tail_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_101 (ATerm), ATerm t);
ATerm at__end_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm at__suffix_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm n_101 (ATerm), ATerm t);
ATerm at__last_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm at_init_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t);
ATerm listbu_1_0 (ATerm v_101 (ATerm), ATerm t);
ATerm listbu1_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm y_101 (ATerm), ATerm t);
ATerm listdu_1_0 (ATerm a_102 (ATerm), ATerm t);
ATerm listdu2_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t);
ATerm RevInit_0_0 (ATerm t);
ATerm Rev_0_0 (ATerm t);
ATerm RevExit_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm reverse_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm r_1 (ATerm), ATerm s_1 (ATerm), ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm MkSingleton_0_0 (ATerm t);
ATerm split_Cons_0_0 (ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm insert_0_0 (ATerm t);
ATerm Ins0_0_0 (ATerm t);
ATerm Ins1_0_0 (ATerm t);
ATerm Ins2_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm m_102 (ATerm), ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm set_index_0_0 (ATerm t);
ATerm Sind0_0_0 (ATerm t);
ATerm Sind1_0_0 (ATerm t);
ATerm Sind2_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm get_index_0_0 (ATerm t);
ATerm Gind0_0_0 (ATerm t);
ATerm Gind1_0_0 (ATerm t);
ATerm Gind2_0_0 (ATerm t);
ATerm get__index_0_0 (ATerm t);
ATerm get_index0_1_0 (ATerm r_102 (ATerm), ATerm t);
ATerm index_0_0 (ATerm t);
ATerm Ind1_0_0 (ATerm t);
ATerm Ind2_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm zip_1_0 (ATerm x_102 (ATerm), ATerm t);
ATerm zip_p__1_0 (ATerm y_102 (ATerm), ATerm t);
ATerm zipl_1_0 (ATerm z_102 (ATerm), ATerm t);
ATerm zipr_1_0 (ATerm a_103 (ATerm), ATerm t);
ATerm rest_zip_1_0 (ATerm b_103 (ATerm), ATerm t);
ATerm unzip_0_0 (ATerm t);
ATerm unzip_1_0 (ATerm c_103 (ATerm), ATerm t);
ATerm nzip0_1_0 (ATerm d_103 (ATerm), ATerm t);
ATerm nzip_1_0 (ATerm e_103 (ATerm), ATerm t);
ATerm lzip_1_0 (ATerm f_103 (ATerm), ATerm t);
ATerm rzip_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm zipFetch_1_0 (ATerm h_103 (ATerm), ATerm t);
ATerm lzipFetch_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm rzipFetch_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm zipPad_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
ATerm zip_tail_0_0 (ATerm t);
ATerm zipl_tail_match_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm zipr_tail_match_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm zip_skip_2_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm Zip1a_p__0_0 (ATerm t);
ATerm Zip1b_p__0_0 (ATerm t);
ATerm Zip1c_0_0 (ATerm t);
ATerm Zip1c_p__0_0 (ATerm t);
ATerm Zip1d_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm LZip2_0_0 (ATerm t);
ATerm RZip2_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm UnZip1_0_0 (ATerm t);
ATerm UnZip2_0_0 (ATerm t);
ATerm UnZip3_0_0 (ATerm t);
ATerm NZip00_0_0 (ATerm t);
ATerm NZip01_0_0 (ATerm t);
ATerm NZip1_0_0 (ATerm t);
ATerm NZip2_0_0 (ATerm t);
ATerm NZip3_0_0 (ATerm t);
ATerm cart_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm join_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm Skip_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm SortL_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm LSort_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm LMerge_1_0 (ATerm d_104 (ATerm), ATerm t);
ATerm sort_list_1_0 (ATerm e_104 (ATerm), ATerm t);
ATerm isort_list_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm jsort_list_1_0 (ATerm i_104 (ATerm), ATerm t);
ATerm Uniq_0_0 (ATerm t);
ATerm uniq_0_0 (ATerm t);
ATerm qsort_1_0 (ATerm t_1 (ATerm), ATerm t);
ATerm set_eq_0_0 (ATerm t);
ATerm set_eq_1_0 (ATerm m_104 (ATerm), ATerm t);
ATerm subset_0_0 (ATerm t);
ATerm subset_1_0 (ATerm n_104 (ATerm), ATerm t);
ATerm subseteq_0_0 (ATerm t);
ATerm subseteq_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm subset_gen_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t);
ATerm isect_0_0 (ATerm t);
ATerm isect_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm diff_1_0 (ATerm u_104 (ATerm), ATerm t);
ATerm diff_p__1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm sym_diff_0_0 (ATerm t);
ATerm sym_diff_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm unions_0_0 (ATerm t);
ATerm unions_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm union_1_0 (ATerm z_104 (ATerm), ATerm t);
ATerm make_set_0_0 (ATerm t);
ATerm nub_0_0 (ATerm t);
ATerm HdMember_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm HdMember_p__2_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t);
ATerm twicetd_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm atmostonce_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm atmostonce_p__1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm collect_kids_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm collect_set_1_0 (ATerm i_105 (ATerm), ATerm t);
ATerm collect_2_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm collect_exc_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm (ATerm), ATerm), ATerm t);
ATerm bu_collect_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm postorder_collect_1_0 (ATerm q_105 (ATerm), ATerm t);
ATerm postorder_collect_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm w_105 (ATerm), ATerm t);
ATerm CollectSplit_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t);
ATerm CollectSplit_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t);
ATerm collect_split_p__1_0 (ATerm d_106 (ATerm), ATerm t);
ATerm collect_om_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm collect_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm collect_om_2_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t);
ATerm collect_om_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm collect_all_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t);
ATerm collect_all_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t);
ATerm Look1_0_0 (ATerm t);
ATerm Look2_0_0 (ATerm t);
ATerm Look1_p__1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm getfirst_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm lookup_p__0_0 (ATerm t);
ATerm lookup_1_0 (ATerm z_106 (ATerm), ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm rtrim_1_0 (ATerm b_107 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm c_107 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm d_107 (ATerm), ATerm t);
ATerm foldr1_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t);
ATerm foldr1_3_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm t);
ATerm foldr1_1_0 (ATerm l_107 (ATerm), ATerm t);
ATerm foldr_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t);
ATerm foldl_1_0 (ATerm s_107 (ATerm), ATerm t);
ATerm mapfoldr_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t);
ATerm mapfoldr1_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t);
ATerm mapconcat_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
ATerm init_0_0 (ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm e_108 (ATerm), ATerm t);
ATerm Cons_T_2_0 (ATerm x_1 (ATerm), ATerm a_2 (ATerm), ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm number_1_0 (ATerm g_108 (ATerm), ATerm t);
ATerm take_while_1_0 (ATerm h_108 (ATerm), ATerm t);
ATerm take_until_1_0 (ATerm i_108 (ATerm), ATerm t);
ATerm take_1_0 (ATerm j_108 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm drop_until_1_0 (ATerm l_108 (ATerm), ATerm t);
ATerm split_at_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm drop_1_0 (ATerm n_108 (ATerm), ATerm t);
ATerm FoldR1_0_0 (ATerm t);
ATerm FoldR_0_0 (ATerm t);
ATerm FoldL_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm lsplit_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_108 (ATerm), ATerm t);
ATerm reverse_filter_1_0 (ATerm s_108 (ATerm), ATerm t);
ATerm filter_gen_2_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm (ATerm), ATerm), ATerm t);
ATerm skip1_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm filter_option_args_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm filter_options_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm list_some_filter_1_0 (ATerm a_109 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm partition_p__1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm TupleToList_0_0 (ATerm t);
ATerm ListToTuple_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Third_0_0 (ATerm t);
ATerm Dupl_0_0 (ATerm t);
ATerm split_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t);
ATerm split3_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm Swap_0_0 (ATerm t);
ATerm Thd_0_0 (ATerm t);
ATerm Ttl_0_0 (ATerm t);
ATerm tindex_0_0 (ATerm t);
ATerm is_tuple_0_0 (ATerm t);
ATerm flip_1_0 (ATerm l_109 (ATerm), ATerm t);
ATerm tmap_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm tconcat_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm tconcat_p__2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t);
ATerm tcata_2_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t);
ATerm tfoldr_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t);
ATerm tzip_1_0 (ATerm u_109 (ATerm), ATerm t);
ATerm tuple_zip_1_0 (ATerm v_109 (ATerm), ATerm t);
ATerm tuple_unzip_1_0 (ATerm x_109 (ATerm), ATerm t);
ATerm option_1_0 (ATerm z_109 (ATerm), ATerm t);
ATerm sect_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t);
ATerm string_gt_0_0 (ATerm t);
ATerm string_lt_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm p_40, ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm strcmp_0_0 (ATerm t);
ATerm strncmp_0_0 (ATerm t);
ATerm strcasecmp_0_0 (ATerm t);
ATerm split_at_space_0_0 (ATerm t);
ATerm split_at_dot_0_0 (ATerm t);
ATerm split_before_0_0 (ATerm t);
ATerm split_after_0_0 (ATerm t);
ATerm is_substring_1_0 (ATerm k_110 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm string_sort_0_0 (ATerm t);
ATerm string_sort_desc_0_0 (ATerm t);
ATerm SplitInit_0_0 (ATerm t);
ATerm SplitExit_0_0 (ATerm t);
ATerm SplitNext_0_0 (ATerm t);
ATerm padd_with_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_helper_0_0 (ATerm t);
ATerm div2_0_0 (ATerm t);
ATerm string_tokenize_0_1 (ATerm q_43, ATerm t);
ATerm string_tokenize_1_0 (ATerm n_110 (ATerm), ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm list_tokenize_1_0 (ATerm o_110 (ATerm), ATerm t);
ATerm lc_0_0 (ATerm t);
ATerm uc_0_0 (ATerm t);
ATerm lower_case_0_0 (ATerm t);
ATerm upper_case_0_0 (ATerm t);
ATerm lower_case_chars_0_0 (ATerm t);
ATerm upper_case_chars_0_0 (ATerm t);
ATerm S2I1_0_0 (ATerm t);
ATerm S2I2_0_0 (ATerm t);
ATerm S2D0_0_0 (ATerm t);
ATerm S2D1_0_0 (ATerm t);
ATerm S2D2_0_0 (ATerm t);
ATerm string_to_num_0_0 (ATerm t);
ATerm is_double_quoted_0_0 (ATerm t);
ATerm is_single_quoted_0_0 (ATerm t);
ATerm is_double_quoted_chars_0_0 (ATerm t);
ATerm is_single_quoted_chars_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm is_quoted_chars_0_0 (ATerm t);
ATerm unquote_1_0 (ATerm p_110 (ATerm), ATerm t);
ATerm unquote_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
ATerm unquote_chars_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm unquote_chars_2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t);
ATerm un_single_quote_chars_0_0 (ATerm t);
ATerm un_double_quote_chars_0_0 (ATerm t);
ATerm un_single_quote_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm quote_1_0 (ATerm v_110 (ATerm), ATerm t);
ATerm quote_chars_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm quote_chars_0_0 (ATerm t);
ATerm single_quote_chars_0_0 (ATerm t);
ATerm double_quote_chars_0_0 (ATerm t);
ATerm single_quote_0_0 (ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm q_3 (ATerm), ATerm t);
ATerm UnCify1_1_0 (ATerm a_111 (ATerm), ATerm t);
ATerm UnCify2_1_0 (ATerm b_111 (ATerm), ATerm t);
ATerm UnCify3_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm d_111 (ATerm (ATerm), ATerm), ATerm t);
ATerm cify_0_0 (ATerm t);
ATerm uncify_0_0 (ATerm t);
ATerm UnCify_1_0 (ATerm f_111 (ATerm), ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm g_111 (ATerm), ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm i_111 (ATerm), ATerm t);
ATerm unescape_chars_0_0 (ATerm t);
ATerm Escape_0_0 (ATerm t);
ATerm Escape_double_quote_0_0 (ATerm t);
ATerm Escape_single_quote_0_0 (ATerm t);
ATerm Escape_backslash_0_0 (ATerm t);
ATerm Escape_linefeed_0_0 (ATerm t);
ATerm Escape_carriage_return_0_0 (ATerm t);
ATerm UnEscape_0_0 (ATerm t);
ATerm UnEscape_double_quote_0_0 (ATerm t);
ATerm UnEscape_single_quote_0_0 (ATerm t);
ATerm UnEscape_backslash_0_0 (ATerm t);
ATerm UnEscape_carriage_return_0_0 (ATerm t);
ATerm UnEscape_linefeed_0_0 (ATerm t);
ATerm UnEscape_tab_0_0 (ATerm t);
ATerm UnEscape_0_1 (ATerm d_45, ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm newname_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm is_alphanum_0_0 (ATerm t);
ATerm is_alpha_0_0 (ATerm t);
ATerm is_hexnum_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_ascii_0_0 (ATerm t);
ATerm case_char_1_0 (ATerm l_111 (ATerm), ATerm t);
ATerm to_upper_0_0 (ATerm t);
ATerm to_lower_0_0 (ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_path_1_0 (ATerm m_111 (ATerm), ATerm t);
ATerm find_file_1_0 (ATerm n_111 (ATerm), ATerm t);
ATerm find_file_2_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm temp_file_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
ATerm new_temp_dir_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm basename_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm u_111 (ATerm), ATerm t);
ATerm has_extension_1_0 (ATerm v_111 (ATerm), ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm add_extension_0_0 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm abspath_0_0 (ATerm t);
ATerm is_abspath_0_0 (ATerm t);
ATerm is_relpath_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm can_read_file_0_0 (ATerm t);
ATerm is_readable_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm is_writable_0_0 (ATerm t);
ATerm can_execute_file_0_0 (ATerm t);
ATerm is_executable_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm close_file_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm append_file_0_0 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
ATerm pipe_0_0 (ATerm t);
ATerm fdopen_0_0 (ATerm t);
ATerm fileno_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm isreg_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
ATerm ischr_0_0 (ATerm t);
ATerm isblk_0_0 (ATerm t);
ATerm isfifo_0_0 (ATerm t);
ATerm islnk_0_0 (ATerm t);
ATerm issock_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm mkdtemp_0_0 (ATerm t);
ATerm close_0_0 (ATerm t);
ATerm dup_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm getcwd_0_0 (ATerm t);
ATerm chdir_0_0 (ATerm t);
ATerm home_dir_0_0 (ATerm t);
ATerm mkdir_0_1 (ATerm t_46, ATerm t);
ATerm mkdir_0_0 (ATerm t);
ATerm rmdir_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm fgetc_0_0 (ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm puts_0_0 (ATerm t);
ATerm fputc_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm fflush_0_0 (ATerm t);
ATerm isatty_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm shuffle_forced_0_0 (ATerm t);
ATerm shuffle_0_0 (ATerm t);
ATerm shuffle_word_mids_0_0 (ATerm t);
ATerm shuffle_word_mid_0_0 (ATerm t);
ATerm ltrim_chars_1_0 (ATerm z_111 (ATerm), ATerm t);
ATerm rtrim_chars_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm trim_chars_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm trim_trailing_whitespace_0_0 (ATerm t);
ATerm trim_leading_whitespace_0_0 (ATerm t);
ATerm trim_whitespace_0_0 (ATerm t);
ATerm string_tokenize_keep_empty_0_1 (ATerm s_47, ATerm t);
ATerm string_tokenize_keep_all_0_1 (ATerm v_47, ATerm t);
ATerm get_lines_0_0 (ATerm t);
ATerm all_lines_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm lines_0_0 (ATerm t);
ATerm indent_text_0_1 (ATerm a_48, ATerm t);
ATerm prefix_lines_0_1 (ATerm c_48, ATerm t);
ATerm nrofoccs_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm om_occurrences_1_0 (ATerm g_112 (ATerm), ATerm t);
ATerm occurrences_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm at_depth_2_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm t);
ATerm node_size_0_0 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm crush_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t);
ATerm foldr_kids_2_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t);
ATerm foldr_kids_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm explode_term_0_0 (ATerm t);
ATerm get_constructor_0_0 (ATerm t);
ATerm get_arguments_0_0 (ATerm t);
ATerm address_lt_0_0 (ATerm t);
ATerm address_0_0 (ATerm t);
ATerm get_annos_0_0 (ATerm t);
ATerm get_annotations_0_0 (ATerm t);
ATerm set_annos_0_0 (ATerm t);
ATerm set_annotations_0_0 (ATerm t);
ATerm set_anno_0_0 (ATerm t);
ATerm rm_annotations_0_0 (ATerm t);
ATerm has_annos_0_0 (ATerm t);
ATerm has_annotation_0_0 (ATerm t);
ATerm if_annotation_2_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm t);
ATerm strip_annos_0_0 (ATerm t);
ATerm catch_annos_0_0 (ATerm t);
ATerm preserve_annotation_1_0 (ATerm x_112 (ATerm), ATerm t);
ATerm preserve_annos_1_0 (ATerm y_112 (ATerm), ATerm t);
ATerm Merge_Props_1_0 (ATerm z_112 (ATerm), ATerm t);
ATerm is_same_prop_0_0 (ATerm t);
ATerm is_prop_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm apply_prop_existing_2_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t);
ATerm apply_2_prop_2_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm t);
ATerm apply_2_prop_1_0 (ATerm f_113 (ATerm), ATerm t);
ATerm add_prop_existing_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t);
ATerm add_prop_empty_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t);
ATerm props_union_0_0 (ATerm t);
ATerm valid_props_term_0_0 (ATerm t);
ATerm valid_props_0_0 (ATerm t);
ATerm get_props_0_0 (ATerm t);
ATerm preserve_props_1_0 (ATerm k_113 (ATerm), ATerm t);
ATerm merge_props_1_0 (ATerm l_113 (ATerm), ATerm t);
ATerm has_prop_1_0 (ATerm m_113 (ATerm), ATerm t);
ATerm has_prop_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm get_prop_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm apply_prop_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t);
ATerm replace_prop_2_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm t);
ATerm add_prop_2_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t);
ATerm set_prop_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
ATerm is_interval_0_0 (ATerm t);
ATerm range_1_0 (ATerm r_3 (ATerm), ATerm t);
ATerm range_next_1_0 (ATerm a_114 (ATerm), ATerm t);
ATerm range_0_1 (ATerm s_3, ATerm t);
ATerm range_0_0 (ATerm t);
ATerm sum_0_0 (ATerm t);
ATerm average_0_0 (ATerm t);
ATerm list_min_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm list_accum_1_0 (ATerm b_114 (ATerm), ATerm t);
ATerm add_lists_0_0 (ATerm t);
ATerm averages_0_0 (ATerm t);
ATerm round_list_0_0 (ATerm t);
ATerm int_sort_0_0 (ATerm t);
ATerm is_interval_from_0_0 (ATerm t);
ATerm new_counter_0_0 (ATerm t);
ATerm reset_counter_0_0 (ATerm t);
ATerm set_counter_0_0 (ATerm t);
ATerm Counter_0_0 (ATerm t);
ATerm get_counter_0_0 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
ATerm add_inf1_0_0 (ATerm t);
ATerm add_inf2_0_0 (ATerm t);
ATerm add_inf_0_0 (ATerm t);
ATerm lt_inf_0_0 (ATerm t);
ATerm gcd_0_0 (ATerm t);
ATerm abs_0_0 (ATerm t);
ATerm addS_0_0 (ATerm t);
ATerm subtS_0_0 (ATerm t);
ATerm mulS_0_0 (ATerm t);
ATerm divS_0_0 (ATerm t);
ATerm modS_0_0 (ATerm t);
ATerm gtS_0_0 (ATerm t);
ATerm geqS_0_0 (ATerm t);
ATerm ltS_0_0 (ATerm t);
ATerm leqS_0_0 (ATerm t);
ATerm maxS_0_0 (ATerm t);
ATerm minS_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm dec_0_0 (ATerm t);
ATerm log2_0_0 (ATerm t);
ATerm set_random_seed_0_0 (ATerm t);
ATerm get_random_max_0_0 (ATerm t);
ATerm next_random_0_0 (ATerm t);
ATerm hex_string_to_int_0_0 (ATerm t);
ATerm dec_string_to_int_0_0 (ATerm t);
ATerm oct_string_to_int_0_0 (ATerm t);
ATerm bin_string_to_int_0_0 (ATerm t);
ATerm hex_chars_to_int_0_0 (ATerm t);
ATerm dec_chars_to_int_0_0 (ATerm t);
ATerm oct_chars_to_int_0_0 (ATerm t);
ATerm bin_chars_to_int_0_0 (ATerm t);
ATerm generic_string_to_int_0_0 (ATerm t);
ATerm generic_chars_to_int_0_0 (ATerm t);
ATerm neg_chars_to_int_0_0 (ATerm t);
ATerm pos_chars_to_int_0_0 (ATerm t);
ATerm char_to_digit_0_0 (ATerm t);
ATerm even_0_0 (ATerm t);
ATerm max_0_0 (ATerm t);
ATerm min_0_0 (ATerm t);
ATerm pos_0_0 (ATerm t);
ATerm neg_0_0 (ATerm t);
ATerm int_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm leq_leq_0_0 (ATerm t);
ATerm leq_lt_0_0 (ATerm t);
ATerm lt_leq_0_0 (ATerm t);
ATerm lt_lt_0_0 (ATerm t);
ATerm comp_comp_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm minus_0_0 (ATerm t);
ATerm plus_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm addi_0_0 (ATerm t);
ATerm addr_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm subti_0_0 (ATerm t);
ATerm subtr_0_0 (ATerm t);
ATerm mul_0_0 (ATerm t);
ATerm muli_0_0 (ATerm t);
ATerm mulr_0_0 (ATerm t);
ATerm div_0_0 (ATerm t);
ATerm divi_0_0 (ATerm t);
ATerm divr_0_0 (ATerm t);
ATerm mod_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm gti_0_0 (ATerm t);
ATerm gtr_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm is_real_0_0 (ATerm t);
ATerm cos_0_0 (ATerm t);
ATerm sin_0_0 (ATerm t);
ATerm sqrt_0_0 (ATerm t);
ATerm atan2_0_0 (ATerm t);
ATerm real_to_string_0_0 (ATerm t);
ATerm string_to_real_0_0 (ATerm t);
ATerm real_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm table_pop_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm table_pop_get_0_0 (ATerm t);
ATerm table_lookup_0_0 (ATerm t);
ATerm table_replace_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm table_diff_0_0 (ATerm t);
ATerm table_append_0_0 (ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm table_putlist_1_0 (ATerm g_114 (ATerm), ATerm t);
ATerm table_copy_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm y_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm table_rename_0_0 (ATerm t);
ATerm hashtable_eq_0_0 (ATerm t);
ATerm hashtable_eq_1_0 (ATerm h_114 (ATerm), ATerm t);
ATerm hashtable_union_0_1 (ATerm r_54, ATerm t);
ATerm hashtable_union_wempty_0_2 (ATerm u_54, ATerm v_54, ATerm t);
ATerm hashtable_union_symm_wempty_0_1 (ATerm y_54, ATerm t);
ATerm hashtable_intersect_0_1 (ATerm d_55, ATerm t);
ATerm hashtable_intersect_wempty_0_2 (ATerm h_55, ATerm i_55, ATerm t);
ATerm hashtable_intersect_symm_wempty_0_1 (ATerm m_55, ATerm t);
ATerm hashtable_merge_8_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t);
ATerm hashtable_merge_func_7_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
ATerm symmetric_yes_0_0 (ATerm t);
ATerm symmetric_no_0_0 (ATerm t);
ATerm iterate1_yes_0_0 (ATerm t);
ATerm iterate1_no_0_0 (ATerm t);
ATerm iterate2_yes_0_0 (ATerm t);
ATerm iterate2_no_0_0 (ATerm t);
ATerm remove_yes_0_0 (ATerm t);
ATerm remove_no_0_0 (ATerm t);
ATerm default_no_0_0 (ATerm t);
ATerm hashtable_push_0_2 (ATerm g_56, ATerm h_56, ATerm t);
ATerm hashtable_pushlist_0_2 (ATerm i_56, ATerm j_56, ATerm t);
ATerm hashtable_pushunion_0_2 (ATerm k_56, ATerm l_56, ATerm t);
ATerm hashtable_pop_0_1 (ATerm m_56, ATerm t);
ATerm hashtable_peek_0_1 (ATerm n_56, ATerm t);
ATerm hashtable_peekpop_0_1 (ATerm o_56, ATerm t);
ATerm hashtable_getlist_0_0 (ATerm t);
ATerm hashtable_putlist_0_1 (ATerm s_56, ATerm t);
ATerm hashtable_putlist_1_1 (ATerm x_114 (ATerm, ATerm, ATerm), ATerm w_56, ATerm t);
ATerm hashtable_init_0_0 (ATerm t);
ATerm hashtable_copy_0_0 (ATerm t);
ATerm hashtable_put_0_2 (ATerm b_57, ATerm c_57, ATerm t);
ATerm hashtable_get_0_1 (ATerm e_57, ATerm t);
ATerm hashtable_remove_0_1 (ATerm g_57, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm new_hashtable_0_2 (ATerm j_57, ATerm k_57, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm hashtable_clear_0_0 (ATerm t);
ATerm nestedtable_put_aux_1_2 (ATerm t_3 (ATerm), ATerm u_3, ATerm v_3, ATerm t);
ATerm nestedtable_get_aux_1_1 (ATerm w_3 (ATerm), ATerm x_3, ATerm t);
ATerm nestedtable_put_0_2 (ATerm j_58, ATerm k_58, ATerm t);
ATerm nestedtable_put_1_2 (ATerm f_115 (ATerm), ATerm l_58, ATerm m_58, ATerm t);
ATerm nestedtable_get_0_1 (ATerm o_58, ATerm t);
ATerm nestedtable_get_1_1 (ATerm g_115 (ATerm), ATerm p_58, ATerm t);
ATerm iset_get_index_0_1 (ATerm r_58, ATerm t);
ATerm iset_get_elem_0_1 (ATerm t_58, ATerm t);
ATerm iset_add_1_1 (ATerm h_115 (ATerm), ATerm v_58, ATerm t);
ATerm iset_add_0_1 (ATerm x_58, ATerm t);
ATerm iset_addlist_0_1 (ATerm z_58, ATerm t);
ATerm iset_contains_0_1 (ATerm c_59, ATerm t);
ATerm iset_remove_0_1 (ATerm d_59, ATerm t);
ATerm iset_elements_0_0 (ATerm t);
ATerm iset_union_0_1 (ATerm g_59, ATerm t);
ATerm iset_isect_0_1 (ATerm j_59, ATerm t);
ATerm iset_subset_0_1 (ATerm m_59, ATerm t);
ATerm iset_eq_0_1 (ATerm p_59, ATerm t);
ATerm new_iset_0_0 (ATerm t);
ATerm new_iset_0_2 (ATerm r_59, ATerm s_59, ATerm t);
ATerm iset_destroy_0_0 (ATerm t);
ATerm iset_clear_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
ATerm date_format_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm clock_to_seconds_0_0 (ATerm t);
ATerm clock_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm ticks_to_seconds_0_0 (ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm add_times_0_0 (ATerm t);
ATerm times_to_seconds_0_0 (ATerm t);
ATerm user_time_0_0 (ATerm t);
ATerm system_time_0_0 (ATerm t);
ATerm cuser_time_0_0 (ATerm t);
ATerm csystem_time_0_0 (ATerm t);
ATerm self_children_user_time_0_0 (ATerm t);
ATerm self_children_sys_time_0_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm profile_1_0 (ATerm i_115 (ATerm), ATerm t);
ATerm profile_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
ATerm profile_p__2_0 (ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm t);
ATerm index2month_0_0 (ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm day_of_week2index_0_0 (ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm time_0_0 (ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm now_UTC_0_0 (ATerm t);
ATerm epoch2local_time_0_0 (ATerm t);
ATerm epoch2utc_0_0 (ATerm t);
ATerm epoch2UTC_0_0 (ATerm t);
ATerm just_day_time_0_0 (ATerm t);
ATerm just_date_0_0 (ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
ATerm readdir_0_0 (ATerm t);
ATerm modification_time_0_0 (ATerm t);
ATerm file_newer_0_0 (ATerm t);
ATerm rename_file_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
ATerm fdcopy_0_0 (ATerm t);
ATerm link_file_0_0 (ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm setenv_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_last_error_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm strerror_0_0 (ATerm t);
ATerm setup_filter_pipe_0_0 (ATerm t);
ATerm pipe_source_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm pipe_sink_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t);
ATerm close_filter_pipe_1_0 (ATerm r_115 (ATerm), ATerm t);
ATerm exec_filter_pipe_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm spawn_filter_with_prog_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t);
ATerm write_to_prog_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
ATerm write_to_prog_p__2_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm t);
ATerm read_from_prog_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
ATerm read_from_prog_p__2_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t);
ATerm close_pipe_0_0 (ATerm t);
ATerm stdin_from_pipe_0_0 (ATerm t);
ATerm file_from_pipe_0_0 (ATerm t);
ATerm stdout_to_pipe_0_0 (ATerm t);
ATerm file_to_pipe_0_0 (ATerm t);
ATerm write_term_to_text_pipe_0_0 (ATerm t);
ATerm read_term_from_pipe_0_0 (ATerm t);
ATerm copy_pipe_to_file_0_0 (ATerm t);
ATerm getchar_0_0 (ATerm t);
ATerm readline_0_0 (ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm filter_text_file_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t);
ATerm printascii_0_0 (ATerm t);
ATerm rm_files_0_0 (ATerm t);
ATerm pipe_2_0 (ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm t);
ATerm pipe_3_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t);
ATerm pipe_p__3_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t);
ATerm call_tmp_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
ATerm call_out_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
ATerm transform_file_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
ATerm apply_to_file_1_0 (ATerm y_116 (ATerm), ATerm t);
ATerm copy_file_3_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t);
ATerm apply_program_1_0 (ATerm c_117 (ATerm), ATerm t);
ATerm apply_program_2_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t);
ATerm redirect_stdout_to_file_0_0 (ATerm t);
ATerm redirect_stdin_from_file_0_0 (ATerm t);
ATerm pipe_term_to_child_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t);
ATerm if_less_verbose1_1_0 (ATerm h_117 (ATerm), ATerm t);
ATerm if_less_verbose2_1_0 (ATerm i_117 (ATerm), ATerm t);
ATerm if_less_verbose3_1_0 (ATerm j_117 (ATerm), ATerm t);
ATerm if_less_verbose4_1_0 (ATerm k_117 (ATerm), ATerm t);
ATerm if_less_verbose5_1_0 (ATerm l_117 (ATerm), ATerm t);
ATerm if_less_verbose6_1_0 (ATerm m_117 (ATerm), ATerm t);
ATerm if_less_verbose7_1_0 (ATerm n_117 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm o_117 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm p_117 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm q_117 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm r_117 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm s_117 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm t_117 (ATerm), ATerm t);
ATerm if_verbose7_1_0 (ATerm u_117 (ATerm), ATerm t);
ATerm set_verbosity_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm find_config_file_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
ATerm find_config_file_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t);
ATerm find_plugins_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t);
ATerm find_plugins_2_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm t);
ATerm import_config_file_1_0 (ATerm f_118 (ATerm), ATerm t);
ATerm import_config_files_1_0 (ATerm g_118 (ATerm), ATerm t);
ATerm export_config_0_0 (ATerm t);
ATerm merge_configs_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
ATerm toggle_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm post_extend_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_configs_1_0 (ATerm h_118 (ATerm), ATerm t);
ATerm get_config_keys_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm if_less_keep1_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm if_less_keep2_1_0 (ATerm k_118 (ATerm), ATerm t);
ATerm if_less_keep3_1_0 (ATerm l_118 (ATerm), ATerm t);
ATerm if_less_keep4_1_0 (ATerm m_118 (ATerm), ATerm t);
ATerm if_less_keep5_1_0 (ATerm n_118 (ATerm), ATerm t);
ATerm if_less_keep6_1_0 (ATerm o_118 (ATerm), ATerm t);
ATerm if_less_keep7_1_0 (ATerm p_118 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm r_118 (ATerm), ATerm t);
ATerm if_keep3_1_0 (ATerm s_118 (ATerm), ATerm t);
ATerm if_keep4_1_0 (ATerm t_118 (ATerm), ATerm t);
ATerm if_keep5_1_0 (ATerm u_118 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm v_118 (ATerm), ATerm t);
ATerm if_keep7_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm set_keep_0_0 (ATerm t);
ATerm get_keep_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm exited_0_0 (ATerm t);
ATerm signaled_0_0 (ATerm t);
ATerm stopped_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm call_1_0 (ATerm x_118 (ATerm), ATerm t);
ATerm call_noisy_0_0 (ATerm t);
ATerm fork_1_0 (ATerm y_118 (ATerm), ATerm t);
ATerm fork_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm kill_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm execv_0_0 (ATerm t);
ATerm get_pid_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm number_from_signal_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm memo_scope_1_0 (ATerm c_119 (ATerm), ATerm t);
ATerm memo_1_0 (ATerm d_119 (ATerm), ATerm t);
ATerm Memo_0_0 (ATerm t);
ATerm memo_init_0_0 (ATerm t);
ATerm memo_purge_0_0 (ATerm t);
ATerm memo_2_0 (ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t);
ATerm input_file_p__0_0 (ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm output_file_p__0_0 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm get_options_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm h_119 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm t);
ATerm check_option_0_0 (ATerm t);
ATerm usage_p__0_0 (ATerm t);
ATerm iowrap_1_0 (ATerm k_119 (ATerm), ATerm t);
ATerm iowrapO_2_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t);
ATerm iowrap_3_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t);
ATerm iowrapO_3_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t);
ATerm iowrap_4_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm t);
ATerm iowrapNoOutput_2_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm t);
ATerm iowrapNoOutput_3_0 (ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm need_help_1_0 (ATerm e_120 (ATerm), ATerm t);
ATerm need_help_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm f_120 (ATerm), ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm input_options_0_0 (ATerm t);
ATerm output_options_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
ATerm version_option_0_0 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm aterm_output_option_0_0 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm g_120 (ATerm), ATerm h_120 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
ATerm io_1_0 (ATerm r_120 (ATerm), ATerm t);
ATerm output_1_0 (ATerm s_120 (ATerm), ATerm t);
ATerm input_1_0 (ATerm t_120 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm u_120 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
ATerm io_wrap_4_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t);
ATerm output_wrap_1_0 (ATerm b_121 (ATerm), ATerm t);
ATerm output_wrap_2_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm t);
ATerm input_wrap_1_0 (ATerm e_121 (ATerm), ATerm t);
ATerm input_wrap_2_0 (ATerm f_121 (ATerm), ATerm g_121 (ATerm), ATerm t);
ATerm defined_option_1_0 (ATerm h_121 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm i_121 (ATerm), ATerm t);
ATerm arg_option_value_1_0 (ATerm j_121 (ATerm), ATerm t);
ATerm Option_2_0 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm y_3 (ATerm), ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
ATerm ArgOption_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t);
ATerm Arg2Option_2_0 (ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t);
ATerm Arg2Option_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_1_0 (ATerm i_122 (ATerm), ATerm t);
ATerm parse_options_3_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_122 (ATerm), ATerm t);
ATerm register_usage_1_0 (ATerm o_122 (ATerm), ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm short_description_1_0 (ATerm p_122 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm q_122 (ATerm), ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm t);
ATerm substitute_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm substitute_6_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm (ATerm), ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_123 (ATerm (ATerm), ATerm), ATerm b_123 (ATerm), ATerm t);
ATerm substitute_5_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm (ATerm), ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm SubsVar_2_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm rename_4_0 (ATerm k_123 (ATerm (ATerm), ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm rename_3_0 (ATerm r_123 (ATerm (ATerm), ATerm), ATerm s_123 (ATerm), ATerm t_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm DistBinding_2_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm rename_2_0 (ATerm x_123 (ATerm (ATerm), ATerm), ATerm y_123 (ATerm), ATerm t);
ATerm RnVar_1_0 (ATerm a_124 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_1_0 (ATerm b_124 (ATerm), ATerm t);
ATerm DistBinding_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm equal_2_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm t);
ATerm equal_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm in_0_0 (ATerm t);
ATerm UfVar_1_0 (ATerm g_124 (ATerm), ATerm t);
ATerm UfSwap_1_0 (ATerm h_124 (ATerm), ATerm t);
ATerm unify_1_0 (ATerm i_124 (ATerm), ATerm t);
ATerm MatchVar_1_0 (ATerm j_124 (ATerm), ATerm t);
ATerm pattern_match_1_0 (ATerm k_124 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm equal_0_0 (ATerm t);
ATerm free_vars2_2_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm t);
ATerm free_vars2_3_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars2_4_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_124 (ATerm), ATerm t);
ATerm free_vars_2_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t);
ATerm free_vars_3_0 (ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm c_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars_4_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_125 (ATerm), ATerm t);
ATerm apply_test_1_3 (ATerm j_125 (ATerm), ATerm k_72, ATerm l_72, ATerm m_72, ATerm t);
ATerm apply_test_1_2 (ATerm k_125 (ATerm), ATerm n_72, ATerm o_72, ATerm t);
ATerm apply_and_check_1_3 (ATerm l_125 (ATerm), ATerm p_72, ATerm q_72, ATerm r_72, ATerm t);
ATerm apply_and_fail_1_2 (ATerm m_125 (ATerm), ATerm s_72, ATerm t_72, ATerm t);
ATerm apply_and_fail_1_3 (ATerm n_125 (ATerm), ATerm u_72, ATerm v_72, ATerm w_72, ATerm t);
ATerm apply_and_show_1_2 (ATerm o_125 (ATerm), ATerm x_72, ATerm y_72, ATerm t);
ATerm do_test_1_1 (ATerm p_125 (ATerm), ATerm z_72, ATerm t);
ATerm init_record_0_0 (ATerm t);
ATerm record_success_0_0 (ATerm t);
ATerm record_failure_0_0 (ATerm t);
ATerm check_for_failures_0_0 (ATerm t);
ATerm report_test_0_0 (ATerm t);
ATerm test_suite_2_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t);
ATerm do_test_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
ATerm testing_2_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t);
ATerm apply_test_4_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm t);
ATerm apply_test_3_0 (ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm t);
ATerm apply_and_check_4_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm t);
ATerm apply_and_fail_3_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm t);
ATerm apply_and_fail_4_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm t);
ATerm apply_and_show_3_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_3_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_3_0 (ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm w_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t);
ATerm graph_nodes_undef_chgr_3_0 (ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm t);
ATerm graph_nodes_3_0 (ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm g_127 (ATerm), ATerm h_127 (ATerm), ATerm i_127 (ATerm), ATerm t);
ATerm GnInit_0_0 (ATerm t);
ATerm GnInitRoots_0_0 (ATerm t);
ATerm GnNext_3_0 (ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t);
ATerm GnUndefined_0_0 (ATerm t);
ATerm GnExit_0_0 (ATerm t);
ATerm init_parenthesation_rules_0_0 (ATerm t);
ATerm gen_left_0_0 (ATerm t);
ATerm gen_right_0_0 (ATerm t);
ATerm gen_non_assoc_0_0 (ATerm t);
ATerm gen_none_0_0 (ATerm t);
ATerm GenLeftAssoc_0_0 (ATerm t);
ATerm LeftAssoc_0_0 (ATerm t);
ATerm GenRightAssoc_0_0 (ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm GenGreaterThan_0_0 (ATerm t);
ATerm GreaterThan_0_0 (ATerm t);
ATerm parenthesize_2_0 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm t);
ATerm parenthesize_1_0 (ATerm r_127 (ATerm), ATerm t);
ATerm Disambiguate_1_0 (ATerm h_4 (ATerm), ATerm t);
ATerm TempDirs_0_0 (ATerm t);
ATerm TempFiles_0_0 (ATerm t);
ATerm TEMP_0_0 (ATerm t);
ATerm DIR_1_0 (ATerm c_6 (ATerm), ATerm t);
ATerm FILE_1_0 (ATerm b_6 (ATerm), ATerm t);
ATerm RepoTable_1_0 (ATerm a_6 (ATerm), ATerm t);
ATerm RepoTable_2_0 (ATerm y_5 (ATerm), ATerm z_5 (ATerm), ATerm t);
ATerm RepoFile_1_0 (ATerm x_5 (ATerm), ATerm t);
ATerm XTC_0_0 (ATerm t);
ATerm FromFile_0_0 (ATerm t);
ATerm Imported_1_0 (ATerm w_5 (ATerm), ATerm t);
ATerm Import_0_0 (ATerm t);
ATerm Stack_0_0 (ATerm t);
ATerm Repository_0_0 (ATerm t);
ATerm Tool_1_0 (ATerm v_5 (ATerm), ATerm t);
ATerm xtc_transform_2_0 (ATerm x_7 (ATerm), ATerm y_7 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 = NULL,q_2 = NULL,h_0 = NULL,p_0 = NULL;
          o_2 = t;
          if(match_cons(t, sym_FILE_1))
            {
              q_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_2);
          h_0 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_2);
          p_0 = t;
          t = SSLsetAnnotations(p_0, h_0);
          LocalPopChoice(a_11);
        }
      else
        {
          t = x_10;
          t = stdin_0_0(t);
        }
      LocalPopChoice(w_10);
      t = xtc_transform_file_2_0(x_7, y_7, t);
    }
  else
    {
      t = v_10;
      t = xtc_transform_term_2_0(x_7, y_7, t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm w_7 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 = t;
      int e_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_5 = NULL,k_5 = NULL,j_2 = NULL,i_2 = NULL;
          j_5 = t;
          if(match_cons(t, sym_FILE_1))
            {
              k_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_5);
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
          i_2 = t;
          t = SSLsetAnnotations(i_2, j_2);
          LocalPopChoice(e_11);
        }
      else
        {
          t = d_11;
          t = stdin_0_0(t);
        }
      LocalPopChoice(c_11);
      t = xtc_transform_file_2_0(w_7, a_0, t);
    }
  else
    {
      t = b_11;
      t = xtc_transform_term_2_0(w_7, b_0, t);
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_7 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL;
  q_5 = t;
  t = v_7(t);
  t = xtc_find_0_0(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, q_5);
  t = call_0_0(t);
  t = q_5;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_h_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = filter_1_0(c_2, t);
  t = if_3_0(d_2, f_2, g_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_11 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_loc_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_11;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm n_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_11;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  t = term_p_11;
  t = exit_0_0(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_q_11;
  t = echo_0_0(t);
  t = term_r_11;
  t = exit_0_0(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm xtc_check_dependencies_0_0 (ATerm t)
{
  t = if_2_0(m_0, s_0, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm check_options_1_0 (ATerm u_7 (ATerm), ATerm t)
{
  static ATerm l_2 (ATerm t);
  static ATerm l_2 (ATerm t)
  {
    ATerm r_5 = NULL,i_6 = NULL;
    r_5 = t;
    t = u_7(t);
    i_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_11, i_6);
    t = set_config_0_0(t);
    t = r_5;
    return(t);
  }
  t = Option_3_0(k_2, l_2, n_2, t);
  return(t);
}
ATerm xtc_input_wrap_2_0 (ATerm s_7 (ATerm), ATerm t_7 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm r_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_7(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = input_options_0_0(t);
      }
    return(t);
  }
  static ATerm r_2 (ATerm t)
  {
    static ATerm s_2 (ATerm t);
    static ATerm s_2 (ATerm t)
    {
      ATerm d_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_6 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          j_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
          LocalPopChoice(f_12);
        }
      else
        {
          t = d_12;
          t = term_i_12;
        }
      t = t_7(t);
      return(t);
    }
    t = xtc_temp_files_1_0(s_2, t);
    return(t);
  }
  t = option_wrap_2_0(p_2, r_2, t);
  return(t);
}
ATerm xtc_input_wrap_1_0 (ATerm r_7 (ATerm), ATerm t)
{
  static ATerm w_2 (ATerm t);
  static ATerm w_2 (ATerm t)
  {
    static ATerm y_2 (ATerm t);
    static ATerm y_2 (ATerm t)
    {
      ATerm j_12 = t;
      int l_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_6 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          u_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_6);
          LocalPopChoice(l_12);
        }
      else
        {
          t = j_12;
          t = term_i_12;
        }
      t = r_7(t);
      return(t);
    }
    t = xtc_temp_files_1_0(y_2, t);
    return(t);
  }
  t = option_wrap_2_0(input_options_0_0, w_2, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm p_7 (ATerm), ATerm q_7 (ATerm), ATerm t)
{
  static ATerm a_3 (ATerm t);
  static ATerm c_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_7(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm c_3 (ATerm t)
  {
    static ATerm d_3 (ATerm t);
    static ATerm d_3 (ATerm t)
    {
      ATerm q_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          v_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_6);
          LocalPopChoice(r_12);
        }
      else
        {
          t = q_12;
          t = term_i_12;
        }
      t = q_7(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(d_3, t);
    return(t);
  }
  t = option_wrap_2_0(a_3, c_3, t);
  return(t);
}
ATerm xtc_iowrap_1_0 (ATerm o_7 (ATerm), ATerm t)
{
  static ATerm g_3 (ATerm t);
  static ATerm g_3 (ATerm t)
  {
    static ATerm h_3 (ATerm t);
    static ATerm h_3 (ATerm t)
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_6 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          w_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_6);
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          t = term_i_12;
        }
      t = o_7(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(h_3, t);
    return(t);
  }
  t = option_wrap_2_0(io_options_0_0, g_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm xtc_io_wrap_5_0 (ATerm j_7 (ATerm), ATerm k_7 (ATerm), ATerm l_7 (ATerm), ATerm m_7 (ATerm), ATerm n_7 (ATerm), ATerm t)
{
  static ATerm i_3 (ATerm t);
  static ATerm j_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_7(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        {
          ATerm x_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(z_12);
            }
          else
            {
              t = x_12;
              {
                static ATerm o_3 (ATerm t);
                static ATerm o_3 (ATerm t)
                {
                  ATerm t_2 = NULL,u_2 = NULL;
                  t_2 = t;
                  t = m_7(t);
                  u_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_h_11, u_2);
                  t = set_config_0_0(t);
                  t = t_2;
                  return(t);
                }
                t = Option_3_0(k_3, o_3, p_3, t);
              }
            }
        }
      }
    return(t);
  }
  static ATerm j_3 (ATerm t)
  {
    static ATerm i_4 (ATerm t);
    static ATerm i_4 (ATerm t)
    {
      ATerm c_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_7 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          z_7 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_7);
          LocalPopChoice(d_13);
        }
      else
        {
          t = c_13;
          t = term_i_12;
        }
      t = n_7(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_check_dependencies_0_0(t);
    t = xtc_temp_files_1_0(i_4, t);
    return(t);
  }
  t = option_wrap_5_0(i_3, k_7, l_7, _id, j_3, t);
  return(t);
}
ATerm xtc_io_wrap_3_0 (ATerm g_7 (ATerm), ATerm h_7 (ATerm), ATerm i_7 (ATerm), ATerm t)
{
  t = xtc_io_wrap_5_0(g_7, system_usage_0_0, system_about_0_0, h_7, i_7, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm e_7 (ATerm), ATerm f_7 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t);
  static ATerm l_4 (ATerm t);
  static ATerm k_4 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_7(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm l_4 (ATerm t)
  {
    static ATerm m_4 (ATerm t);
    static ATerm m_4 (ATerm t)
    {
      ATerm k_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_8 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          a_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_8);
          LocalPopChoice(u_13);
        }
      else
        {
          t = k_13;
          t = term_i_12;
        }
      t = f_7(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(m_4, t);
    return(t);
  }
  t = option_wrap_2_0(k_4, l_4, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm d_7 (ATerm), ATerm t)
{
  static ATerm n_4 (ATerm t);
  static ATerm n_4 (ATerm t)
  {
    static ATerm o_4 (ATerm t);
    static ATerm o_4 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_8 = NULL;
          t = term_g_12;
          t = get_config_0_0(t);
          b_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_8);
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          t = term_i_12;
        }
      t = d_7(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_4, t);
    return(t);
  }
  t = option_wrap_2_0(io_options_0_0, n_4, t);
  return(t);
}
ATerm xtc_input_1_0 (ATerm c_7 (ATerm), ATerm t)
{
  static ATerm p_4 (ATerm t);
  static ATerm p_4 (ATerm t)
  {
    ATerm x_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = term_g_12;
        t = get_config_0_0(t);
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_8);
        LocalPopChoice(a_14);
      }
    else
      {
        t = x_13;
        t = term_i_12;
      }
    t = c_7(t);
    return(t);
  }
  t = xtc_temp_files_1_0(p_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_14;
      t = get_config_0_0(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = term_e_14;
    }
  return(t);
}
ATerm xtc_output_1_0 (ATerm b_7 (ATerm), ATerm t)
{
  static ATerm q_4 (ATerm t);
  static ATerm q_4 (ATerm t)
  {
    t = b_7(t);
    t = copy_to_1_0(r_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_4, t);
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_8 = NULL;
      t = term_f_14;
      t = xtc_new_file_0_0(t);
      g_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_12, g_8);
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_8);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm j_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_8;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_14;
      t = get_config_0_0(t);
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      t = term_e_14;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_2 = NULL;
      t = term_d_14;
      {
        ATerm m_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(v_14);
          }
        else
          {
            t = m_14;
            t = term_e_14;
          }
      }
      x_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_12, x_2);
      t = copy_file_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_8;
      t = copy_to_1_0(s_4, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_r_11;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm a_7 (ATerm), ATerm t)
{
  static ATerm v_4 (ATerm t);
  static ATerm v_4 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = term_g_12;
        t = get_config_0_0(t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_8);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = term_i_12;
      }
    t = a_7(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  static ATerm w_4 (ATerm t);
  static ATerm w_4 (ATerm t)
  {
    ATerm r_8 = NULL;
    r_8 = t;
    t = term_e_15;
    t = table_get_0_0(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_8 != NULL) && (q_8 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_8 = ATgetFirst((ATermList) t);
        {
          ATerm f_15 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = q_8;
    t = map_1_0(a_5, t);
    t = r_8;
    t = end_scope_1_0(e_5, t);
    return(t);
  }
  t = repeat_1_0(w_4, t);
  t = exit_0_0(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_c_15;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_6 (ATerm), ATerm t)
{
  ATerm t_8 = NULL;
  static ATerm s_5 (ATerm t);
  static ATerm s_5 (ATerm t)
  {
    ATerm u_8 = NULL;
    u_8 = t;
    {
      ATerm g_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_e_15;
          t = table_get_0_0(t);
          LocalPopChoice(h_15);
        }
      else
        {
          t = g_15;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_8 != NULL) && (t_8 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_8 = ATgetFirst((ATermList) t);
        {
          ATerm j_15 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_8;
    t = map_1_0(t_5, t);
    t = u_8;
    t = end_scope_1_0(k_6, t);
    return(t);
  }
  t = begin_scope_1_0(m_5, t);
  t = restore_always_2_0(z_6, s_5, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm xtc_remove_temporaries_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = term_o_15;
  t = table_get_0_0(t);
  t = map_1_0(l_6, t);
  t = w_8;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_8, term_f_14);
  t = assert_1_0(t_6, t);
  t = x_8;
  t = close_0_0(t);
  t = y_8;
  return(t);
}
ATerm xtc_find_file_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  t = xtc_find_0_0(t);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_8);
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  t = xtc_new_file_0_0(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_r_15);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_9, a_9);
  t = print_0_0(t);
  t = b_9;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_9);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL;
  f_9 = t;
  t = xtc_new_file_0_0(t);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_9, f_9);
  t = WriteToTextFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_9);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  i_9 = t;
  t = xtc_new_file_0_0(t);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_9 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          n_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_9;
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm w_1 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL;
        t = g_10;
        t = w_1(t);
        f_3 = t;
        {
          ATerm v_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(y_15);
            }
          else
            {
              t = v_15;
              t = stderr_0_0(t);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_10, f_3);
        t = copy_file_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_10);
        LocalPopChoice(u_15);
      }
    else
      {
        t = s_15;
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_3 = NULL;
              t = g_10;
              t = w_1(t);
              m_3 = t;
              {
                ATerm d_16 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_16 = t;
                    int l_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0_0(t);
                        LocalPopChoice(l_16);
                      }
                    else
                      {
                        t = e_16;
                        {
                          ATerm m_16 = t;
                          int n_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = stderr_0_0(t);
                              LocalPopChoice(n_16);
                            }
                          else
                            {
                              t = m_16;
                              {
                                ATerm n_3 = NULL;
                                n_3 = t;
                                if((h_10 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_3;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_16;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_10, m_3);
              t = copy_file_0_0(t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_10);
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              t = g_10;
              t = w_1(t);
              if((h_10 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_10);
            }
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm v_1 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  y_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_10;
        t = v_1(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_e_14);
        t = copy_file_0_0(t);
        t = z_10;
        t = remove_file_0_0(t);
        t = term_e_14;
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_4 = NULL;
              t = y_10;
              t = v_1(t);
              t_4 = t;
              {
                ATerm x_16 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_16 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0_0(t);
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = z_16;
                        {
                          ATerm u_4 = NULL;
                          u_4 = t;
                          if((z_10 != t))
                            {
                              _fail(t);
                            }
                          t = u_4;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_16;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, z_10, t_4);
              t = rename_file_0_0(t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_4);
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = y_10;
              t = v_1(t);
              if((z_10 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_10);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_generate_2_0 (ATerm r_6 (ATerm), ATerm s_6 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,x_4 = NULL,y_4 = NULL;
  t = term_f_14;
  t = xtc_new_file_0_0(t);
  f_11 = t;
  t = s_6(t);
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_11, (ATerm) ATinsert(ATinsert(ATempty, f_11), term_d_14));
  t = conc_0_0(t);
  y_4 = t;
  t = r_6(t);
  t = xtc_find_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, y_4);
  t = call_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_11);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_generate_1_0 (ATerm q_6 (ATerm), ATerm t)
{
  t = xtc_generate_2_0(q_6, y_6, t);
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm p_6 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = p_6(t);
  t = print_to_0_0(t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm o_6 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  t = read_from_0_0(t);
  t = o_6(t);
  j_11 = t;
  t = xtc_new_file_0_0(t);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_11, j_11);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_6 (ATerm), ATerm n_6 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  l_11 = t;
  t = xtc_new_file_0_0(t);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_11, l_11);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_11);
  t = xtc_transform_file_2_0(m_6, n_6, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_1 (ATerm), ATerm u_1 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,u_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_11 = NULL,w_11 = NULL,c_5 = NULL,d_5 = NULL;
      t = o_11;
      t = xtc_new_file_0_0(t);
      v_11 = t;
      t = u_1(t);
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, (ATerm) ATinsert(ATinsert(ATempty, v_11), term_d_14));
      t = conc_0_0(t);
      d_5 = t;
      t = l_1(t);
      t = xtc_find_0_0(t);
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_5, d_5);
      t = call_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_11);
    }
  else
    {
      ATerm z_11 = NULL,c_12 = NULL,f_5 = NULL,g_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_11;
      t = xtc_new_file_0_0(t);
      z_11 = t;
      t = u_1(t);
      c_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_11), term_d_14), u_11), term_g_12));
      t = conc_0_0(t);
      g_5 = t;
      t = l_1(t);
      t = xtc_find_0_0(t);
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_5, g_5);
      t = call_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_11);
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_file_1_0 (ATerm h_6 (ATerm), ATerm t)
{
  t = xtc_transform_file_2_0(h_6, d_8, t);
  return(t);
}
ATerm xtc_transform_file_0_0 (ATerm t)
{
  if(match_cons(t, sym__3))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      ATerm f_17 = ATgetArgument(t, 1);
      ATerm i_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = NULL;
      e_12 = t;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 = NULL;
            t = term_f_14;
            t = STDIN__FILENO_0_0(t);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_12, h_12);
            t = eq_0_0(t);
            t = e_12;
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
                  ATerm k_12 = NULL;
                  t = term_f_14;
                  t = STDOUT__FILENO_0_0(t);
                  k_12 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_12, k_12);
                  t = eq_0_0(t);
                  t = e_12;
                  LocalPopChoice(q_17);
                }
              else
                {
                  t = n_17;
                  {
                    ATerm m_12 = NULL;
                    t = term_f_14;
                    t = STDERR__FILENO_0_0(t);
                    m_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_12, m_12);
                    t = eq_0_0(t);
                    t = e_12;
                  }
                }
            }
          }
      }
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = close_0_0(t);
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  t = finally_2_0(f_8, h_8, t);
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_12 = ATgetArgument(t, 0);
      t = p_12;
      t = open_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_f_14;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_f_14;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_f_14;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm w_12 = NULL;
  t = new_file_0_0(t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_12, term_f_14);
  t = assert_1_0(i_8, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_12);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm g_6 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  static ATerm k_8 (ATerm t);
  static ATerm k_8 (ATerm t)
  {
    ATerm a_13 = NULL;
    a_13 = t;
    {
      static ATerm m_8 (ATerm t);
      static ATerm m_8 (ATerm t)
      {
        t = not_null(y_12);
        t = xtc_close_fd_0_0(t);
        return(t);
      }
      t = try_1_0(m_8, t);
    }
    t = a_13;
    return(t);
  }
  t = xtc_open_fd_0_0(t);
  if(((y_12 != NULL) && (y_12 != t)))
    _fail(t);
  else
    y_12 = t;
  t = finally_2_0(g_6, k_8, t);
  return(t);
}
ATerm xtc_filter_text_file_2_0 (ATerm e_6 (ATerm), ATerm f_6 (ATerm), ATerm t)
{
  ATerm b_13 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(e_6, f_6, b_13, t);
  return(t);
}
static ATerm s_11 (ATerm e_6 (ATerm), ATerm f_6 (ATerm), ATerm l_3, ATerm t)
{
  ATerm e_13 = NULL;
  t = l_3;
  t = xtc_new_file_0_0(t);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_3, e_13);
  t = filter_text_file_2_0(e_6, f_6, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_13);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  i_13 = t;
  t = xtc_new_file_name_0_0(t);
  h_13 = t;
  t = xtc_open_fd_0_0(t);
  j_13 = t;
  t = i_13;
  {
    static ATerm n_8 (ATerm t);
    static ATerm n_8 (ATerm t)
    {
      static ATerm s_8 (ATerm t);
      static ATerm s_8 (ATerm t)
      {
        ATerm l_13 = NULL;
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_13, j_13);
        t = fdcopy_0_0(t);
        return(t);
      }
      t = File_as_fd_1_0(s_8, t);
      return(t);
    }
    t = map_1_0(n_8, t);
  }
  t = j_13;
  t = xtc_close_fd_0_0(t);
  t = h_13;
  return(t);
}
ATerm xtc_scope_1_0 (ATerm d_6 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    ATerm o_13 = NULL;
    o_13 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, not_null(m_13));
    t = table_put_0_0(t);
    t = o_13;
    return(t);
  }
  n_13 = t;
  t = xtc_get_stack_0_0(t);
  if(((m_13 != NULL) && (m_13 != t)))
    _fail(t);
  else
    m_13 = t;
  t = n_13;
  t = restore_always_2_0(d_6, v_8, t);
  return(t);
}
ATerm xtc_pop_0_0 (ATerm t)
{
  ATerm p_13 = NULL;
  t = xtc_get_stack_0_0(t);
  t = Tl_0_0(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, p_13);
  t = table_put_0_0(t);
  t = p_13;
  return(t);
}
ATerm xtc_push_table_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  t = xtc_get_stack_0_0(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, (ATerm) ATinsert(CheckATermList(r_13), (ATerm) ATmakeAppl(sym_NestedTable_1, q_13)));
  t = table_put_0_0(t);
  t = q_13;
  return(t);
}
ATerm xtc_push_file_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  t = xtc_get_stack_0_0(t);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, (ATerm) ATinsert(CheckATermList(t_13), (ATerm) ATmakeAppl(sym_RepoFile_1, s_13)));
  t = table_put_0_0(t);
  t = s_13;
  return(t);
}
ATerm xtc_get_stack_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_17;
        t = table_get_0_0(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = term_v_17;
        t = table_put_0_0(t);
        t = (ATerm) ATempty;
      }
  }
  t = y_13;
  return(t);
}
ATerm xtc_set_stack_0_1 (ATerm b_3, ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, b_3);
  t = table_put_0_0(t);
  t = z_13;
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_17;
      t = get_config_0_0(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm a_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_18;
            t = getenv_0_0(t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = a_18;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_push_default_0_0 (ATerm t)
{
  ATerm i_5 = NULL,p_5 = NULL;
  t = xtc_location_0_0(t);
  i_5 = t;
  t = xtc_get_stack_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_r_17, (ATerm) ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_RepoFile_1, i_5)));
  t = table_put_0_0(t);
  t = i_5;
  return(t);
}
ATerm can_write_repository_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      LocalPopChoice(i_18);
      t = can_write_file_0_0(t);
    }
  else
    {
      t = h_18;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(p_18);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_18;
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_19;
              }
            t = debug_1_0(c_9, t);
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = debug_1_0(e_9, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = debug_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = debug_1_0(l_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_g_19;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = say_1_0(o_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_h_19;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = say_1_0(q_9, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = say_1_0(s_9, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm xtc_read_0_1 (ATerm z_2, ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  g_14 = t;
  t = if_verbose5_1_0(g_9, t);
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_14);
        z_14 = t;
        t = z_2;
        t = hashtable_get_0_1(z_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
  }
  n_14 = t;
  t = term_y_20;
  o_14 = t;
  t = (ATerm) ATinsert(ATempty, g_14);
  p_14 = t;
  t = z_2;
  t = hashtable_put_0_2(o_14, p_14, t);
  t = n_14;
  t = if_verbose4_1_0(k_9, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_9, t);
  t = z_2;
  t = hashtable_putlist_1_1(hashtable_pushunion_0_2, z_2, t);
  t = if_verbose6_1_0(p_9, t);
  t = (ATerm) ATmakeAppl(sym_Imported_1, g_14);
  h_14 = t;
  t = (ATerm) ATempty;
  i_14 = t;
  t = z_2;
  t = hashtable_put_0_2(h_14, i_14, t);
  t = if_verbose4_1_0(r_9, t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  {
    static ATerm t_9 (ATerm t);
    static ATerm t_9 (ATerm t)
    {
      ATerm b_15 = NULL;
      t = term_z_20;
      b_15 = t;
      t = a_15;
      t = hashtable_get_0_1(b_15, t);
      {
        static ATerm u_9 (ATerm t);
        static ATerm u_9 (ATerm t)
        {
          t = xtc_read_0_1(a_15, t);
          return(t);
        }
        t = filter_1_0(u_9, t);
      }
      {
        ATerm a_21 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_21;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_9, t);
  }
  t = a_15;
  return(t);
}
ATerm aux_XtcFilesAndTables_0_0 (ATerm t)
{
  ATerm z_15 = NULL,g_16 = NULL,h_16 = NULL,k_16 = NULL,q_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_16;
  if(match_cons(t, sym_Defined_2))
    {
      k_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_16;
  if(match_string(t, "e_3"))
    {
      t = g_16;
      if(!(match_cons(t, sym_Tables_0)))
        _fail(t);
      t = z_15;
      t = Fst_0_0(t);
      t = (ATerm) ATmakeAppl(sym_NestedTable_1, q_16);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("e_0", 0, ATtrue)))
        _fail(t);
      t = z_15;
      t = Fst_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RepoFile_1, q_16);
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm bagof_XtcFilesAndTables_0_0 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_Tables_0))
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_9 (ATerm t);
          static ATerm w_9 (ATerm t)
          {
            ATerm y_16 = NULL;
            y_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_16, y_16);
            t = aux_XtcFilesAndTables_0_0(t);
            return(t);
          }
          t = w_16;
          t = extend_rewrite_1_0(v_9, t);
          t = filter_1_0(w_9, t);
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          {
            static ATerm y_9 (ATerm t);
            static ATerm y_9 (ATerm t)
            {
              ATerm a_17 = NULL;
              a_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_16, a_17);
              t = aux_XtcFilesAndTables_0_0(t);
              return(t);
            }
            t = (ATerm) ATempty;
            t = extend_rewrite_1_0(x_9, t);
            t = filter_1_0(y_9, t);
          }
        }
    }
  else
    {
      static ATerm a_10 (ATerm t);
      static ATerm a_10 (ATerm t)
      {
        ATerm d_17 = NULL;
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_16, d_17);
        t = aux_XtcFilesAndTables_0_0(t);
        return(t);
      }
      t = (ATerm) ATempty;
      t = extend_rewrite_1_0(z_9, t);
      t = filter_1_0(a_10, t);
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm XtcFilesAndTables_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = NULL,u_5 = NULL;
      o_17 = t;
      if(!(match_cons(t, sym_Tables_0)))
        _fail(t);
      t = o_17;
      t = extend_rewrite_1_0(b_10, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm j_21 = ATgetFirst((ATermList) t);
          if(match_cons(j_21, sym_Defined_2))
            {
              ATerm l_21 = ATgetArgument(j_21, 0);
              if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("e_3", 0, ATtrue)))
                _fail(t);
              u_5 = ATgetArgument(j_21, 1);
            }
          else
            _fail(t);
          {
            ATerm k_21 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_NestedTable_1, u_5);
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_17 = NULL;
            t = (ATerm) ATempty;
            t = extend_rewrite_1_0(c_10, t);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_21 = ATgetFirst((ATermList) t);
                if(match_cons(o_21, sym_Defined_2))
                  {
                    ATerm q_21 = ATgetArgument(o_21, 0);
                    if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    p_17 = ATgetArgument(o_21, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm p_21 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_RepoFile_1, p_17);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            {
              ATerm w_17 = NULL;
              w_17 = t;
              {
                ATerm r_21 = t;
                int s_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_NestedTable_1))
                      {
                        ATerm t_21 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_21);
                    {
                      ATerm x_6 = NULL;
                      t = w_17;
                      t = rewrite_1_0(d_10, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm u_21 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) u_21) != ATmakeSymbol("n_5", 0, ATtrue)))
                            _fail(t);
                          x_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_RepoFile_1, x_6);
                    }
                  }
                else
                  {
                    t = r_21;
                    {
                      ATerm p_8 = NULL;
                      if(match_cons(t, sym_RepoFile_1))
                        {
                          ATerm v_21 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = w_17;
                      t = rewrite_1_0(e_10, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm w_21 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("l_5", 0, ATtrue)))
                            _fail(t);
                          p_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_NestedTable_1, p_8);
                    }
                  }
              }
            }
          }
      }
    }
  return(t);
}
ATerm xtc_file_to_table_new_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  if(match_cons(t, sym_RepoFile_1))
    {
      b_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(b_18, t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm t_11 (ATerm e_2, ATerm t)
{
  ATerm c_18 = NULL;
  t = e_2;
  t = ReadFromFile_0_0(t);
  t = hashtable_init_0_0(t);
  t = xtc_import_0_0(t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_21, e_2));
  t = extend_assert_1_0(f_10, t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_21, (ATerm) ATmakeAppl(sym_Defined_2, term_z_21, c_18));
  t = extend_assert_1_0(i_10, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_RepoFile_1, e_2), (ATerm) ATmakeAppl(sym_Defined_2, term_a_22, c_18));
  t = assert_1_0(j_10, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_NestedTable_1, c_18), (ATerm) ATmakeAppl(sym_Defined_2, term_b_22, e_2));
  t = assert_1_0(k_10, t);
  t = (ATerm) ATmakeAppl(sym_NestedTable_1, c_18);
  return(t);
}
ATerm xtc_file_to_table_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcFilesAndTables_0_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm e_18 = NULL,f_18 = NULL;
        e_18 = t;
        if(match_cons(t, sym_RepoFile_1))
          {
            f_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_18;
        t = t_11(f_18, t);
      }
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcFilesAndTables_0_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm n_18 = NULL,o_18 = NULL;
        n_18 = t;
        if(match_cons(t, sym_RepoFile_1))
          {
            o_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_18;
        t = t_11(o_18, t);
      }
    }
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_18 = NULL;
      static ATerm l_10 (ATerm t);
      static ATerm l_10 (ATerm t)
      {
        t = nestedtable_get_1_1(m_10, not_null(j_18), t);
        return(t);
      }
      if(((j_18 != NULL) && (j_18 != t)))
        _fail(t);
      else
        j_18 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_22 = ATgetFirst((ATermList) t);
          ATerm s_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_18;
      t = xtc_get_stack_0_0(t);
      t = fetch_elem_1_0(l_10, t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = g_22;
      {
        ATerm r_18 = NULL;
        t = is_string_0_0(t);
        r_18 = t;
        t = (ATerm) ATinsert(ATempty, r_18);
        t = xtc_find_loc_0_0(t);
      }
    }
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = debug_1_0(o_10, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = debug_1_0(q_10, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(n_10, t);
      t = xtc_find_loc_0_0(t);
      t = if_verbose5_1_0(p_10, t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm s_18 = NULL;
        s_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_22), s_18), term_x_22);
        t = error_0_0(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_register_0_3 (ATerm y_1, ATerm z_1, ATerm b_2, ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  t = y_1;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATinsert(ATempty, y_1);
      }
  }
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
      x_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_18), term_b_23), b_2);
      t = concat_strings_0_0(t);
      w_18 = t;
      t = (ATerm) ATinsert(ATempty, x_18);
      y_18 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_1, w_18));
      z_18 = t;
      t = x_18;
      t = xtc_get_stack_0_0(t);
      {
        static ATerm s_10 (ATerm t);
        static ATerm s_10 (ATerm t)
        {
          t = nestedtable_put_0_2(y_18, z_18, t);
          return(t);
        }
        t = Cons_2_0(s_10, _id, t);
      }
      t = x_18;
      return(t);
    }
    t = map_1_0(r_10, t);
  }
  t = v_18;
  return(t);
}
ATerm xtc_extend_0_2 (ATerm k_0, ATerm n_0, ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  t = xtc_get_stack_0_0(t);
  {
    static ATerm t_10 (ATerm t);
    static ATerm t_10 (ATerm t)
    {
      ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
      d_19 = t;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = nestedtable_get_0_1(k_0, t);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = (ATerm) ATempty;
          }
      }
      f_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_0, f_19);
      t = union_0_0(t);
      e_19 = t;
      t = d_19;
      t = nestedtable_put_0_2(k_0, e_19, t);
      return(t);
    }
    t = Cons_2_0(t_10, _id, t);
  }
  t = c_19;
  return(t);
}
ATerm xtc_set_0_2 (ATerm c_0, ATerm i_0, ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  t = xtc_get_stack_0_0(t);
  {
    static ATerm u_10 (ATerm t);
    static ATerm u_10 (ATerm t)
    {
      t = nestedtable_put_0_2(c_0, i_0, t);
      return(t);
    }
    t = Cons_2_0(u_10, _id, t);
  }
  t = i_19;
  return(t);
}
ATerm TempDirs_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_TempDirs_0)))
    _fail(t);
  return(t);
}
ATerm TempFiles_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_TempFiles_0)))
    _fail(t);
  return(t);
}
ATerm TEMP_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_TEMP_0)))
    _fail(t);
  return(t);
}
ATerm DIR_1_0 (ATerm c_6 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,m_2 = NULL;
  n_19 = t;
  if(match_cons(t, sym_DIR_1))
    {
      l_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  k_19 = t;
  t = l_19;
  t = c_6(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_DIR_1, m_19);
  m_2 = t;
  t = SSLsetAnnotations(m_2, k_19);
  return(t);
}
ATerm FILE_1_0 (ATerm b_6 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,v_2 = NULL;
  r_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  o_19 = t;
  t = p_19;
  t = b_6(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_19);
  v_2 = t;
  t = SSLsetAnnotations(v_2, o_19);
  return(t);
}
ATerm RepoTable_1_0 (ATerm a_6 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,j_4 = NULL;
  v_19 = t;
  if(match_cons(t, sym_RepoTable_1))
    {
      t_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  s_19 = t;
  t = t_19;
  t = a_6(t);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym_RepoTable_1, u_19);
  j_4 = t;
  t = SSLsetAnnotations(j_4, s_19);
  return(t);
}
ATerm RepoTable_2_0 (ATerm y_5 (ATerm), ATerm z_5 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,z_4 = NULL;
  k_20 = t;
  if(match_cons(t, sym_RepoTable_2))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  w_19 = t;
  t = x_19;
  t = y_5(t);
  i_20 = t;
  t = y_19;
  t = z_5(t);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_RepoTable_2, i_20, j_20);
  z_4 = t;
  t = SSLsetAnnotations(z_4, w_19);
  return(t);
}
ATerm RepoFile_1_0 (ATerm x_5 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,b_5 = NULL;
  o_20 = t;
  if(match_cons(t, sym_RepoFile_1))
    {
      m_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_20);
  l_20 = t;
  t = m_20;
  t = x_5(t);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_RepoFile_1, n_20);
  b_5 = t;
  t = SSLsetAnnotations(b_5, l_20);
  return(t);
}
ATerm XTC_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XTC_0)))
    _fail(t);
  return(t);
}
ATerm FromFile_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_FromFile_0)))
    _fail(t);
  return(t);
}
ATerm Imported_1_0 (ATerm w_5 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,h_5 = NULL;
  s_20 = t;
  if(match_cons(t, sym_Imported_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_20);
  p_20 = t;
  t = q_20;
  t = w_5(t);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_20);
  h_5 = t;
  t = SSLsetAnnotations(h_5, p_20);
  return(t);
}
ATerm Import_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Import_0)))
    _fail(t);
  return(t);
}
ATerm Stack_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Stack_0)))
    _fail(t);
  return(t);
}
ATerm Repository_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Repository_0)))
    _fail(t);
  return(t);
}
ATerm Tool_1_0 (ATerm v_5 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,j_8 = NULL;
  w_20 = t;
  if(match_cons(t, sym_Tool_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_20);
  t_20 = t;
  t = u_20;
  t = v_5(t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_20);
  j_8 = t;
  t = SSLsetAnnotations(j_8, t_20);
  return(t);
}
