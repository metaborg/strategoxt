#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_RuleScope_2;
Symbol sym_ChangeSet_3;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Conc_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Hashtable_1;
Symbol sym_IndexedSet_1;
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
Symbol sym_ErrorNumber_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_TempDirs_0;
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
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
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
ATerm term_s_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("All tools available", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration found for: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--check        check tool dependencies", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_q_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_TEMP_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_g_11);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_q_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
}
#include <srts/init-stratego-module.h>
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm register_import_0_0 (ATerm t);
ATerm xtc_register_0_3 (ATerm p_3, ATerm d_4, ATerm e_4, ATerm t);
static ATerm q_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm xtc_find_version_loc_0_0 (ATerm t);
static ATerm i_8 (ATerm g_3, ATerm h_3, ATerm t);
static ATerm r_6 (ATerm s_4, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm f_7 (ATerm u_6, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_warning_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm e_6 (ATerm), ATerm f_6 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_transform_1_0 (ATerm d_6 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm c_6 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_check_dependencies_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm check_options_1_0 (ATerm b_6 (ATerm), ATerm t);
ATerm xtc_input_wrap_2_0 (ATerm z_5 (ATerm), ATerm a_6 (ATerm), ATerm t);
ATerm xtc_input_wrap_1_0 (ATerm y_5 (ATerm), ATerm t);
ATerm xtc_iowrap_2_0 (ATerm w_5 (ATerm), ATerm x_5 (ATerm), ATerm t);
ATerm xtc_iowrap_1_0 (ATerm v_5 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm xtc_io_wrap_5_0 (ATerm q_5 (ATerm), ATerm r_5 (ATerm), ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm u_5 (ATerm), ATerm t);
ATerm xtc_io_wrap_3_0 (ATerm n_5 (ATerm), ATerm o_5 (ATerm), ATerm p_5 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm l_5 (ATerm), ATerm m_5 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm k_5 (ATerm), ATerm t);
ATerm xtc_input_1_0 (ATerm j_5 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
ATerm xtc_output_1_0 (ATerm i_5 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm h_5 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_5 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
ATerm xtc_remove_temporaries_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_find_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm write_to_text_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm copy_to_1_0 (ATerm i_6 (ATerm), ATerm t);
ATerm rename_to_1_0 (ATerm h_6 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm y_4 (ATerm), ATerm z_4 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_generate_1_0 (ATerm x_4 (ATerm), ATerm t);
ATerm xtc_io_transform_text_1_0 (ATerm w_4 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm v_4 (ATerm), ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_4 (ATerm), ATerm u_4 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm a_0 (ATerm), ATerm g_6 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
ATerm xtc_transform_file_1_0 (ATerm o_4 (ATerm), ATerm t);
ATerm xtc_transform_file_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm File_as_fd_1_0 (ATerm n_4 (ATerm), ATerm t);
ATerm xtc_filter_text_file_2_0 (ATerm l_4 (ATerm), ATerm m_4 (ATerm), ATerm t);
static ATerm j_8 (ATerm l_4 (ATerm), ATerm m_4 (ATerm), ATerm n_0, ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
ATerm can_write_repository_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm Keys_0_0 (ATerm t);
ATerm Keys_1_0 (ATerm y_74 (ATerm), ATerm t);
ATerm Keys_2_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm t);
ATerm Keys_3_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm t);
ATerm Keys_4_0 (ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm t);
ATerm Keys_5_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t);
ATerm Keys_6_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t);
ATerm Keys_7_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t);
ATerm Keys_8_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm Keys_9_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm t);
ATerm Keys_10_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm t);
ATerm Defined_0_0 (ATerm t);
ATerm Defined_1_0 (ATerm b_77 (ATerm), ATerm t);
ATerm Defined_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm t);
ATerm Defined_3_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm t);
ATerm Defined_4_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm t);
ATerm Defined_5_0 (ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm t);
ATerm Defined_6_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t);
ATerm Defined_7_0 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm t);
ATerm Defined_8_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm t);
ATerm Defined_9_0 (ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm t);
ATerm Defined_10_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t);
ATerm Undefined_0_0 (ATerm t);
ATerm Dummy_0_0 (ATerm t);
ATerm Scopes_0_0 (ATerm t);
ATerm RuleScope_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm ChangeSet_3_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t);
ATerm Conc_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t);
ATerm _0_0 (ATerm t);
ATerm _1_0 (ATerm n_79 (ATerm), ATerm t);
ATerm _2_0 (ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm t);
ATerm _3_0 (ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm s_79 (ATerm), ATerm t);
ATerm _4_0 (ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm t);
ATerm _5_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t);
ATerm _6_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm t);
ATerm _7_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t);
ATerm _8_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm t);
ATerm _9_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm _10_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm t);
ATerm _11_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm _12_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t);
ATerm _13_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t);
ATerm _14_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t);
ATerm _15_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t);
ATerm _16_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t);
ATerm _17_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
ATerm _18_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm Some_1_0 (ATerm c_86 (ATerm), ATerm t);
ATerm Pipe_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t);
ATerm F__OK_0_0 (ATerm t);
ATerm R__OK_0_0 (ATerm t);
ATerm W__OK_0_0 (ATerm t);
ATerm X__OK_0_0 (ATerm t);
ATerm Stream_1_0 (ATerm f_86 (ATerm), ATerm t);
ATerm Path_1_0 (ATerm g_86 (ATerm), ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm Anno_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t);
ATerm Infinite_0_0 (ATerm t);
ATerm Hashtable_1_0 (ATerm j_86 (ATerm), ATerm t);
ATerm IndexedSet_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm EpochTime_1_0 (ATerm l_86 (ATerm), ATerm t);
ATerm ComponentTime_3_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t);
ATerm DayTime_3_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t);
ATerm Date_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t);
ATerm Dupl_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t);
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
ATerm ErrorNumber_1_0 (ATerm x_86 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm y_86 (ATerm), ATerm t);
ATerm Prefix_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t);
ATerm WaitStatus_3_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm t);
ATerm Signal_3_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t);
ATerm UnknownSignal_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm Silent_0_0 (ATerm t);
ATerm Verbose_1_0 (ATerm i_87 (ATerm), ATerm t);
ATerm Version_0_0 (ATerm t);
ATerm Input_1_0 (ATerm j_87 (ATerm), ATerm t);
ATerm Output_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm Binary_0_0 (ATerm t);
ATerm Statistics_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm Runtime_1_0 (ATerm l_87 (ATerm), ATerm t);
ATerm DeclVersion_1_0 (ATerm m_87 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm n_87 (ATerm), ATerm t);
ATerm Undefined_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm Anno__Cong_____2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t);
ATerm Pair_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t);
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
ATerm init_name_space_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm exit_name_space_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm end_scope_1_0 (ATerm w_87 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm t);
ATerm assert_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm override_key_1_0 (ATerm a_88 (ATerm), ATerm t);
ATerm rewrite_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm extend_assert_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm extend_override_key_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm extend_assert_undefined_1_0 (ATerm e_88 (ATerm), ATerm t);
ATerm extend_override_key_undefined_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm extend_rewrite_1_0 (ATerm g_88 (ATerm), ATerm t);
ATerm dr_debug_rule_set_0_1 (ATerm p_14, ATerm t);
ATerm dr_debug_rule_set_0_2 (ATerm q_14, ATerm r_14, ATerm t);
ATerm dr_print_rule_set_0_1 (ATerm s_14, ATerm t);
ATerm dr_print_rule_sets_0_1 (ATerm t_14, ATerm t);
ATerm dr_print_rule_set_0_0 (ATerm t);
ATerm dr_print_scope_0_0 (ATerm t);
ATerm dr_eq_rule_sets_0_0 (ATerm t);
ATerm dr_fold_and_intersect_3_1 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm (ATerm), ATerm), ATerm h_15, ATerm t);
ATerm dr_fold_and_intersect_3_2 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm (ATerm), ATerm), ATerm j_15, ATerm k_15, ATerm t);
ATerm dr_map_and_intersect_1_1 (ATerm o_88 (ATerm), ATerm o_15, ATerm t);
ATerm dr_fix_and_intersect_1_1 (ATerm r_88 (ATerm), ATerm p_15, ATerm t);
ATerm dr_fix_and_union_1_1 (ATerm s_88 (ATerm), ATerm s_15, ATerm t);
ATerm dr_fix_and_intersect_union_1_2 (ATerm t_88 (ATerm), ATerm v_15, ATerm w_15, ATerm t);
ATerm dr_fork_and_intersect_2_1 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm b_16, ATerm t);
ATerm dr_fork_and_union_2_1 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm e_16, ATerm t);
ATerm dr_fork_and_intersect_union_2_2 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm h_16, ATerm i_16, ATerm t);
ATerm dr_fix_and_merge_2_1 (ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm n_16, ATerm t);
ATerm dr_fix_and_merge_3_2 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm r_16, ATerm s_16, ATerm t);
ATerm fork_rule_sets_0_0 (ATerm t);
ATerm merge_rule_sets_1_0 (ATerm f_89 (ATerm), ATerm t);
ATerm dr_fork_and_merge_3_1 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm b_17, ATerm t);
ATerm dr_fork_and_merge_4_2 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm f_17, ATerm g_17, ATerm t);
ATerm dr_merge_rule_sets_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t);
ATerm dr_merge_rule_sets1_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t);
ATerm dr_merge_rule_sets2_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t);
ATerm dr_intersect_rule_sets_0_0 (ATerm t);
ATerm apply_rm_set_0_1 (ATerm p_18, ATerm t);
ATerm dr_intersect_rule_sets_symm_0_0 (ATerm t);
ATerm dr_union_rule_sets_0_0 (ATerm t);
ATerm dr_union_rule_sets_symm_0_0 (ATerm t);
ATerm dr_add_to_rule_set_0_2 (ATerm y_19, ATerm z_19, ATerm t);
ATerm dr_add_to_rule_set_0_3 (ATerm a_20, ATerm b_20, ATerm c_20, ATerm t);
ATerm dr_add_fail_0_4 (ATerm d_20, ATerm e_20, ATerm f_20, ATerm g_20, ATerm t);
ATerm dr_add_to_rule_set_1_3 (ATerm d_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm f_0, ATerm g_0, ATerm j_0, ATerm t);
ATerm dr_add_to_rule_set_vis_0_3 (ATerm f_21, ATerm g_21, ATerm h_21, ATerm t);
ATerm dr_add_to_rule_set_vis_2_3 (ATerm l_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm p_0 (ATerm, ATerm, ATerm, ATerm), ATerm r_0, ATerm s_0, ATerm t_0, ATerm t);
ATerm dr_set_in_rule_set_0_2 (ATerm h_22, ATerm i_22, ATerm t);
ATerm dr_set_in_rule_set_0_3 (ATerm j_22, ATerm k_22, ATerm l_22, ATerm t);
ATerm dr_set_fail_0_4 (ATerm m_22, ATerm n_22, ATerm o_22, ATerm p_22, ATerm t);
ATerm dr_set_in_rule_set_1_3 (ATerm u_0 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm v_0, ATerm w_0, ATerm x_0, ATerm t);
ATerm dr_set_in_rule_set_vis_0_2 (ATerm k_23, ATerm l_23, ATerm t);
ATerm dr_set_in_rule_set_vis_0_3 (ATerm m_23, ATerm n_23, ATerm o_23, ATerm t);
ATerm dr_rm_fail_0_3 (ATerm y_0, ATerm z_0, ATerm a_1, ATerm t);
ATerm dr_set_in_rule_set_vis_2_3 (ATerm b_1 (ATerm, ATerm, ATerm, ATerm, ATerm), ATerm c_1 (ATerm, ATerm, ATerm, ATerm), ATerm d_1, ATerm e_1, ATerm f_1, ATerm t);
ATerm dr_lookup_rule_0_1 (ATerm q_24, ATerm t);
ATerm dr_lookup_rule_1_1 (ATerm g_1 (ATerm), ATerm h_1, ATerm t);
ATerm dr_lookup_rule_pointer_0_1 (ATerm z_24, ATerm t);
ATerm dr_lookup_rule_pointer_1_1 (ATerm i_1 (ATerm), ATerm j_1, ATerm t);
ATerm dr_lookup_all_rules_0_1 (ATerm i_25, ATerm t);
ATerm dr_lookup_all_rules_1_1 (ATerm k_1 (ATerm), ATerm m_1, ATerm t);
ATerm dr_new_change_set_0_0 (ATerm t);
ATerm dr_start_change_set_0_0 (ATerm t);
ATerm dr_destroy_change_set_0_0 (ATerm t);
ATerm dr_commit_change_set_0_0 (ATerm t);
ATerm dr_discard_change_set_0_0 (ATerm t);
ATerm dr_commit_labels_0_1 (ATerm a_26, ATerm t);
ATerm dr_apply_change_0_1 (ATerm b_26, ATerm t);
ATerm dr_commit_to_rule_set_0_3 (ATerm g_26, ATerm h_26, ATerm i_26, ATerm t);
ATerm dr_commit_to_change_set_0_3 (ATerm j_26, ATerm k_26, ATerm l_26, ATerm t);
ATerm dr_commit_to_rule_scope_0_3 (ATerm n_26, ATerm o_26, ATerm p_26, ATerm t);
ATerm dr_apply_removal_0_0 (ATerm t);
ATerm dr_remove_from_rule_set_0_2 (ATerm v_26, ATerm w_26, ATerm t);
ATerm dr_remove_from_change_set_0_2 (ATerm x_26, ATerm y_26, ATerm t);
ATerm dr_remove_from_rule_scope_0_2 (ATerm a_27, ATerm b_27, ATerm t);
ATerm dr_new_scope_0_0 (ATerm t);
ATerm dr_new_rule_set_0_0 (ATerm t);
ATerm dr_add_scope_0_0 (ATerm t);
ATerm dr_destroy_scope_0_0 (ATerm t);
ATerm dr_leave_scope_0_0 (ATerm t);
ATerm dr_get_inner_scope_0_0 (ATerm t);
ATerm dr_label_scope_0_1 (ATerm h_27, ATerm t);
ATerm dr_get_scope_labels_0_0 (ATerm t);
ATerm dr_get_first_scope_label_1_0 (ATerm v_90 (ATerm), ATerm t);
ATerm dr_save_rule_set_0_0 (ATerm t);
ATerm dr_scope_1_1 (ATerm w_90 (ATerm), ATerm i_27, ATerm t);
ATerm dr_begin_scope_0_1 (ATerm j_27, ATerm t);
ATerm dr_end_scope_0_1 (ATerm k_27, ATerm t);
ATerm dr_scopes_1_1 (ATerm x_90 (ATerm), ATerm l_27, ATerm t);
ATerm dr_begin_scopes_0_1 (ATerm m_27, ATerm t);
ATerm dr_end_scopes_0_1 (ATerm o_27, ATerm t);
ATerm dr_start_change_set_0_1 (ATerm q_27, ATerm t);
ATerm dr_commit_change_set_0_1 (ATerm r_27, ATerm t);
ATerm dr_discard_change_set_0_1 (ATerm s_27, ATerm t);
ATerm dr_label_scope_0_2 (ATerm t_27, ATerm u_27, ATerm t);
ATerm dr_get_scope_labels_0_1 (ATerm v_27, ATerm t);
ATerm dr_get_first_scope_label_1_1 (ATerm y_90 (ATerm), ATerm w_27, ATerm t);
ATerm dr_ignore_state_1_1 (ATerm z_90 (ATerm), ATerm x_27, ATerm t);
ATerm dr_lookup_rule_0_2 (ATerm z_27, ATerm a_28, ATerm t);
ATerm dr_lookup_all_rules_0_2 (ATerm b_28, ATerm c_28, ATerm t);
ATerm dr_lookup_rule_pointer_0_2 (ATerm d_28, ATerm e_28, ATerm t);
ATerm dr_set_rule_0_3 (ATerm f_28, ATerm g_28, ATerm h_28, ATerm t);
ATerm dr_set_rule_0_4 (ATerm i_28, ATerm j_28, ATerm k_28, ATerm l_28, ATerm t);
ATerm dr_set_rule_vis_0_4 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm p_28, ATerm t);
ATerm dr_set_rules_vis_0_4 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t_28, ATerm t);
ATerm dr_undefine_rule_0_2 (ATerm u_28, ATerm v_28, ATerm t);
ATerm dr_undefine_rule_0_3 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm t);
ATerm dr_undefine_rule_vis_0_3 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t);
ATerm dr_add_rule_0_3 (ATerm c_29, ATerm d_29, ATerm e_29, ATerm t);
ATerm dr_add_rule_0_4 (ATerm f_29, ATerm g_29, ATerm h_29, ATerm i_29, ATerm t);
ATerm dr_add_rule_vis_0_4 (ATerm j_29, ATerm k_29, ATerm l_29, ATerm m_29, ATerm t);
ATerm dr_intersect_with_0_1 (ATerm n_29, ATerm t);
ATerm dr_intersect_symm_0_1 (ATerm o_29, ATerm t);
ATerm dr_union_with_0_1 (ATerm p_29, ATerm t);
ATerm dr_union_symm_0_1 (ATerm q_29, ATerm t);
ATerm dr_get_rule_set_0_1 (ATerm r_29, ATerm t);
ATerm dr_set_rule_set_0_1 (ATerm s_29, ATerm t);
ATerm dr_switch_rule_set_0_1 (ATerm t_29, ATerm t);
ATerm try_1_0 (ATerm a_91 (ATerm), ATerm t);
ATerm maybe_1_0 (ATerm b_91 (ATerm), ATerm t);
ATerm maybe_2_0 (ATerm n_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm if_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
ATerm if_3_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t);
ATerm ior_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t);
ATerm or_2_0 (ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm t);
ATerm and_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm FAIL_0_0 (ATerm t);
ATerm restore_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t);
ATerm finally_2_0 (ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm a_92 (ATerm), ATerm t);
ATerm repeat1_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t);
ATerm repeat1_1_0 (ATerm e_92 (ATerm), ATerm t);
ATerm repeat_until_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t);
ATerm while_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t);
ATerm do_while_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t);
ATerm cpl_loaded_0_0 (ATerm t);
ATerm if_cpl_loaded_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t);
ATerm if_cpl_loaded_1_0 (ATerm w_92 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm x_92 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm y_92 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm z_92 (ATerm), ATerm t);
ATerm downup_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm t);
ATerm downup2_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t);
ATerm topdownS_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_3_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm m_93 (ATerm (ATerm), ATerm), ATerm t);
ATerm don_p_t_stop_1_0 (ATerm n_93 (ATerm), ATerm t);
ATerm bottomup_para_1_0 (ATerm o_93 (ATerm), ATerm t);
ATerm spinetd_1_0 (ATerm p_93 (ATerm), ATerm t);
ATerm spinebu_1_0 (ATerm q_93 (ATerm), ATerm t);
ATerm somespinetd_1_0 (ATerm t_93 (ATerm), ATerm t);
ATerm somespinebu_1_0 (ATerm v_93 (ATerm), ATerm t);
ATerm spinetd_p__1_0 (ATerm p_1 (ATerm), ATerm t);
ATerm spinebu_p__1_0 (ATerm q_1 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm b_94 (ATerm), ATerm t);
ATerm oncebu_1_0 (ATerm d_94 (ATerm), ATerm t);
ATerm oncetd_skip_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm oncetd_stop_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm (ATerm), ATerm), ATerm t);
ATerm sometd_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm somebu_1_0 (ATerm n_94 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm p_94 (ATerm), ATerm t);
ATerm alldownup2_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t);
ATerm downup2_p__obsolete_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t);
ATerm alltd_fold_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t);
ATerm leaves_3_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm (ATerm), ATerm), ATerm t);
ATerm leaves_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t);
ATerm manybu_1_0 (ATerm h_95 (ATerm), ATerm t);
ATerm manytd_1_0 (ATerm j_95 (ATerm), ATerm t);
ATerm somedownup_1_0 (ATerm l_95 (ATerm), ATerm t);
ATerm breadthfirst_1_0 (ATerm n_95 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm is_inner_node_0_0 (ATerm t);
ATerm is_proper_subterm_set_0_0 (ATerm t);
ATerm is_proper_superterm_set_0_0 (ATerm t);
ATerm is_superterm_0_0 (ATerm t);
ATerm is_proper_superterm_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm is_proper_subterm_0_0 (ATerm t);
ATerm all_l_1_0 (ATerm p_95 (ATerm), ATerm t);
ATerm topdown_l_1_0 (ATerm q_95 (ATerm), ATerm t);
ATerm bottomup_l_1_0 (ATerm s_95 (ATerm), ATerm t);
ATerm downup_l_1_0 (ATerm u_95 (ATerm), ATerm t);
ATerm downup_l_2_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm t);
ATerm downup2_l_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t);
ATerm topdownS_l_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomupS_l_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm downupS_l_3_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_para_l_1_0 (ATerm p_96 (ATerm), ATerm t);
ATerm alltd_l_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm alldownup2_l_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t);
ATerm alltd_fold_l_2_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t);
ATerm reduce_1_0 (ATerm z_96 (ATerm), ATerm t);
ATerm outermost_1_0 (ATerm b_97 (ATerm), ATerm t);
ATerm innermost_p__1_0 (ATerm c_97 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm d_97 (ATerm), ATerm t);
ATerm innermost_old_1_0 (ATerm e_97 (ATerm), ATerm t);
ATerm pseudo_innermost3_1_0 (ATerm g_97 (ATerm), ATerm t);
ATerm innermost_memo_1_0 (ATerm j_97 (ATerm), ATerm t);
ATerm innermost_tagged_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm env_alltd_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm env_topdown_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm env_topdown_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm (ATerm), ATerm), ATerm t);
ATerm env_bottomup_1_0 (ATerm u_97 (ATerm), ATerm t);
ATerm thread_alltd_1_0 (ATerm w_97 (ATerm), ATerm t);
ATerm thread_bottomup_1_0 (ATerm y_97 (ATerm), ATerm t);
ATerm count_bottomup_1_0 (ATerm a_98 (ATerm), ATerm t);
ATerm env_oncetd_1_0 (ATerm b_98 (ATerm), ATerm t);
ATerm all_dist_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm one_dist_1_0 (ATerm e_98 (ATerm), ATerm t);
ATerm d_1_0 (ATerm f_98 (ATerm), ATerm t);
ATerm t_1_0 (ATerm g_98 (ATerm), ATerm t);
ATerm coll_1_0 (ATerm h_98 (ATerm), ATerm t);
ATerm stdioO_1_0 (ATerm i_98 (ATerm), ATerm t);
ATerm stdio_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm echo_1_0 (ATerm k_98 (ATerm), ATerm t);
ATerm printchar_0_0 (ATerm t);
ATerm printstring_0_0 (ATerm t);
ATerm debug_stdout_1_0 (ATerm l_98 (ATerm), ATerm t);
ATerm say_1_0 (ATerm m_98 (ATerm), ATerm t);
ATerm trace_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm obsolete_1_0 (ATerm p_98 (ATerm), ATerm t);
ATerm dissuader_1_0 (ATerm q_98 (ATerm), ATerm t);
ATerm Assert_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t);
ATerm risky_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t);
ATerm debug_depth_0_0 (ATerm t);
ATerm debug_depth_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm debug_depth_2_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t);
ATerm debug_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm print_strings_nl_1_0 (ATerm z_98 (ATerm), ATerm t);
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
ATerm WriteToFile_1_0 (ATerm a_99 (ATerm), ATerm t);
ATerm open_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm save_1_0 (ATerm c_99 (ATerm), ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm for_each_pair_1_0 (ATerm d_99 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm separate_by_0_1 (ATerm t_31, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm upto_0_0 (ATerm t);
ATerm UptoInit_0_0 (ATerm t);
ATerm UptoExit_0_0 (ATerm t);
ATerm UptoStep_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm k_99 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm l_99 (ATerm), ATerm t);
ATerm list_1_0 (ATerm m_99 (ATerm), ATerm t);
ATerm list_some_1_0 (ATerm n_99 (ATerm), ATerm t);
ATerm length_0_0 (ATerm t);
ATerm elem_0_0 (ATerm t);
ATerm elem_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm q_99 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm s_99 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm split_fetch_keep_1_0 (ATerm u_99 (ATerm), ATerm t);
ATerm at_tail_1_0 (ATerm v_99 (ATerm), ATerm t);
ATerm at__tail_1_0 (ATerm w_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_99 (ATerm), ATerm t);
ATerm at__end_1_0 (ATerm z_99 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm at__suffix_1_0 (ATerm d_100 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm f_100 (ATerm), ATerm t);
ATerm at__last_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm i_100 (ATerm), ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm at_init_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t);
ATerm listbu_1_0 (ATerm n_100 (ATerm), ATerm t);
ATerm listbu1_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm listdu_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm listdu2_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
ATerm RevInit_0_0 (ATerm t);
ATerm Rev_0_0 (ATerm t);
ATerm RevExit_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm reverse_1_0 (ATerm x_100 (ATerm), ATerm t);
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
ATerm Ins2_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm set_index_0_0 (ATerm t);
ATerm Sind0_0_0 (ATerm t);
ATerm Sind1_0_0 (ATerm t);
ATerm Sind2_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm get_index_0_0 (ATerm t);
ATerm Gind0_0_0 (ATerm t);
ATerm Gind1_0_0 (ATerm t);
ATerm Gind2_0_0 (ATerm t);
ATerm get__index_0_0 (ATerm t);
ATerm get_index0_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm index_0_0 (ATerm t);
ATerm Ind1_0_0 (ATerm t);
ATerm Ind2_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm zip_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm zip_p__1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm zipl_1_0 (ATerm r_101 (ATerm), ATerm t);
ATerm zipr_1_0 (ATerm s_101 (ATerm), ATerm t);
ATerm rest_zip_1_0 (ATerm t_101 (ATerm), ATerm t);
ATerm unzip_0_0 (ATerm t);
ATerm unzip_1_0 (ATerm u_101 (ATerm), ATerm t);
ATerm nzip0_1_0 (ATerm v_101 (ATerm), ATerm t);
ATerm nzip_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm lzip_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm rzip_1_0 (ATerm y_101 (ATerm), ATerm t);
ATerm zipFetch_1_0 (ATerm z_101 (ATerm), ATerm t);
ATerm lzipFetch_1_0 (ATerm b_102 (ATerm), ATerm t);
ATerm rzipFetch_1_0 (ATerm d_102 (ATerm), ATerm t);
ATerm zipPad_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t);
ATerm zip_tail_0_0 (ATerm t);
ATerm zipl_tail_match_1_0 (ATerm j_102 (ATerm), ATerm t);
ATerm zipr_tail_match_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm zip_skip_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t);
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
ATerm cart_1_0 (ATerm q_102 (ATerm), ATerm t);
ATerm join_1_0 (ATerm r_102 (ATerm), ATerm t);
ATerm Skip_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm SortL_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm LSort_1_0 (ATerm u_102 (ATerm), ATerm t);
ATerm LMerge_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm sort_list_1_0 (ATerm w_102 (ATerm), ATerm t);
ATerm isort_list_1_0 (ATerm y_102 (ATerm), ATerm t);
ATerm jsort_list_1_0 (ATerm a_103 (ATerm), ATerm t);
ATerm Uniq_0_0 (ATerm t);
ATerm uniq_0_0 (ATerm t);
ATerm qsort_1_0 (ATerm t_1 (ATerm), ATerm t);
ATerm set_eq_0_0 (ATerm t);
ATerm set_eq_1_0 (ATerm e_103 (ATerm), ATerm t);
ATerm subset_0_0 (ATerm t);
ATerm subset_1_0 (ATerm f_103 (ATerm), ATerm t);
ATerm subseteq_0_0 (ATerm t);
ATerm subseteq_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm subset_gen_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t);
ATerm isect_0_0 (ATerm t);
ATerm isect_1_0 (ATerm k_103 (ATerm), ATerm t);
ATerm diff_1_0 (ATerm m_103 (ATerm), ATerm t);
ATerm diff_p__1_0 (ATerm o_103 (ATerm), ATerm t);
ATerm sym_diff_0_0 (ATerm t);
ATerm sym_diff_1_0 (ATerm p_103 (ATerm), ATerm t);
ATerm unions_0_0 (ATerm t);
ATerm unions_1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm union_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm make_set_0_0 (ATerm t);
ATerm nub_0_0 (ATerm t);
ATerm HdMember_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm HdMember_p__2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t);
ATerm twicetd_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm atmostonce_1_0 (ATerm x_103 (ATerm), ATerm t);
ATerm atmostonce_p__1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm collect_kids_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm collect_set_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm collect_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm collect_exc_2_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm (ATerm), ATerm), ATerm t);
ATerm bu_collect_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm postorder_collect_1_0 (ATerm i_104 (ATerm), ATerm t);
ATerm postorder_collect_2_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm CollectSplit_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t);
ATerm CollectSplit_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t);
ATerm collect_split_p__1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm collect_om_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm collect_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm collect_om_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t);
ATerm collect_om_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm collect_all_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm t);
ATerm collect_all_3_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm t);
ATerm Look1_0_0 (ATerm t);
ATerm Look2_0_0 (ATerm t);
ATerm Look1_p__1_0 (ATerm n_105 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm getfirst_1_0 (ATerm p_105 (ATerm), ATerm t);
ATerm lookup_p__0_0 (ATerm t);
ATerm lookup_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm rtrim_1_0 (ATerm t_105 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm u_105 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm v_105 (ATerm), ATerm t);
ATerm foldr1_2_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm t);
ATerm foldr1_3_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm t);
ATerm foldr1_1_0 (ATerm d_106 (ATerm), ATerm t);
ATerm foldr_2_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t);
ATerm foldl_1_0 (ATerm k_106 (ATerm), ATerm t);
ATerm mapfoldr_3_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t);
ATerm mapfoldr1_3_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t);
ATerm mapconcat_1_0 (ATerm t_106 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
ATerm init_0_0 (ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm Cons_T_2_0 (ATerm x_1 (ATerm), ATerm a_2 (ATerm), ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm number_1_0 (ATerm y_106 (ATerm), ATerm t);
ATerm take_while_1_0 (ATerm z_106 (ATerm), ATerm t);
ATerm take_until_1_0 (ATerm a_107 (ATerm), ATerm t);
ATerm take_1_0 (ATerm b_107 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm c_107 (ATerm), ATerm t);
ATerm drop_until_1_0 (ATerm d_107 (ATerm), ATerm t);
ATerm split_at_1_0 (ATerm e_107 (ATerm), ATerm t);
ATerm drop_1_0 (ATerm f_107 (ATerm), ATerm t);
ATerm FoldR1_0_0 (ATerm t);
ATerm FoldR_0_0 (ATerm t);
ATerm FoldL_1_0 (ATerm g_107 (ATerm), ATerm t);
ATerm lsplit_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_107 (ATerm), ATerm t);
ATerm reverse_filter_1_0 (ATerm k_107 (ATerm), ATerm t);
ATerm filter_gen_2_0 (ATerm l_107 (ATerm), ATerm m_107 (ATerm (ATerm), ATerm), ATerm t);
ATerm skip1_1_0 (ATerm o_107 (ATerm), ATerm t);
ATerm skip2_1_0 (ATerm p_107 (ATerm), ATerm t);
ATerm filter_option_args_1_0 (ATerm q_107 (ATerm), ATerm t);
ATerm filter_options_1_0 (ATerm r_107 (ATerm), ATerm t);
ATerm list_some_filter_1_0 (ATerm s_107 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm u_107 (ATerm), ATerm t);
ATerm partition_p__1_0 (ATerm w_107 (ATerm), ATerm t);
ATerm TupleToList_0_0 (ATerm t);
ATerm ListToTuple_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Third_0_0 (ATerm t);
ATerm Dupl_0_0 (ATerm t);
ATerm split_2_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t);
ATerm split3_3_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t);
ATerm Swap_0_0 (ATerm t);
ATerm Thd_0_0 (ATerm t);
ATerm Ttl_0_0 (ATerm t);
ATerm tindex_0_0 (ATerm t);
ATerm is_tuple_0_0 (ATerm t);
ATerm flip_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm tmap_1_0 (ATerm e_108 (ATerm), ATerm t);
ATerm tconcat_1_0 (ATerm f_108 (ATerm), ATerm t);
ATerm tconcat_p__2_0 (ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm t);
ATerm tcata_2_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm t);
ATerm tfoldr_2_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm t);
ATerm tzip_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm tuple_zip_1_0 (ATerm n_108 (ATerm), ATerm t);
ATerm tuple_unzip_1_0 (ATerm p_108 (ATerm), ATerm t);
ATerm option_1_0 (ATerm r_108 (ATerm), ATerm t);
ATerm sect_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t);
ATerm string_gt_0_0 (ATerm t);
ATerm string_lt_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm q_40, ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm strcmp_0_0 (ATerm t);
ATerm strncmp_0_0 (ATerm t);
ATerm strcasecmp_0_0 (ATerm t);
ATerm split_at_space_0_0 (ATerm t);
ATerm split_at_dot_0_0 (ATerm t);
ATerm split_before_0_0 (ATerm t);
ATerm split_after_0_0 (ATerm t);
ATerm is_substring_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm string_sort_0_0 (ATerm t);
ATerm string_sort_desc_0_0 (ATerm t);
ATerm SplitInit_0_0 (ATerm t);
ATerm SplitExit_0_0 (ATerm t);
ATerm SplitNext_0_0 (ATerm t);
ATerm padd_with_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_helper_0_0 (ATerm t);
ATerm div2_0_0 (ATerm t);
ATerm string_tokenize_0_1 (ATerm r_43, ATerm t);
ATerm string_tokenize_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm list_tokenize_1_0 (ATerm g_109 (ATerm), ATerm t);
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
ATerm unquote_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm unquote_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm unquote_chars_1_0 (ATerm k_109 (ATerm), ATerm t);
ATerm unquote_chars_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t);
ATerm un_single_quote_chars_0_0 (ATerm t);
ATerm un_double_quote_chars_0_0 (ATerm t);
ATerm un_single_quote_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm quote_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm quote_chars_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm quote_chars_0_0 (ATerm t);
ATerm single_quote_chars_0_0 (ATerm t);
ATerm double_quote_chars_0_0 (ATerm t);
ATerm single_quote_0_0 (ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm q_3 (ATerm), ATerm t);
ATerm UnCify1_1_0 (ATerm s_109 (ATerm), ATerm t);
ATerm UnCify2_1_0 (ATerm t_109 (ATerm), ATerm t);
ATerm UnCify3_1_0 (ATerm u_109 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm v_109 (ATerm (ATerm), ATerm), ATerm t);
ATerm cify_0_0 (ATerm t);
ATerm uncify_0_0 (ATerm t);
ATerm UnCify_1_0 (ATerm x_109 (ATerm), ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm y_109 (ATerm), ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm a_110 (ATerm), ATerm t);
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
ATerm UnEscape_0_1 (ATerm e_45, ATerm t);
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
ATerm string_as_chars_1_0 (ATerm c_110 (ATerm), ATerm t);
ATerm is_alphanum_0_0 (ATerm t);
ATerm is_alpha_0_0 (ATerm t);
ATerm is_hexnum_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_ascii_0_0 (ATerm t);
ATerm case_char_1_0 (ATerm d_110 (ATerm), ATerm t);
ATerm to_upper_0_0 (ATerm t);
ATerm to_lower_0_0 (ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_path_1_0 (ATerm e_110 (ATerm), ATerm t);
ATerm find_file_1_0 (ATerm f_110 (ATerm), ATerm t);
ATerm find_file_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm temp_file_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
ATerm new_temp_dir_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm basename_1_0 (ATerm k_110 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm has_extension_1_0 (ATerm n_110 (ATerm), ATerm t);
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
ATerm mkdir_0_1 (ATerm u_46, ATerm t);
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
ATerm ltrim_chars_1_0 (ATerm r_110 (ATerm), ATerm t);
ATerm rtrim_chars_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm trim_chars_1_0 (ATerm t_110 (ATerm), ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm trim_trailing_whitespace_0_0 (ATerm t);
ATerm trim_leading_whitespace_0_0 (ATerm t);
ATerm trim_whitespace_0_0 (ATerm t);
ATerm string_tokenize_keep_empty_0_1 (ATerm t_47, ATerm t);
ATerm string_tokenize_keep_all_0_1 (ATerm w_47, ATerm t);
ATerm get_lines_0_0 (ATerm t);
ATerm all_lines_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm lines_0_0 (ATerm t);
ATerm indent_text_0_1 (ATerm b_48, ATerm t);
ATerm prefix_lines_0_1 (ATerm d_48, ATerm t);
ATerm nrofoccs_1_0 (ATerm x_110 (ATerm), ATerm t);
ATerm om_occurrences_1_0 (ATerm y_110 (ATerm), ATerm t);
ATerm occurrences_1_0 (ATerm z_110 (ATerm), ATerm t);
ATerm at_depth_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t);
ATerm node_size_0_0 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm crush_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t);
ATerm foldr_kids_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm t);
ATerm foldr_kids_3_0 (ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t);
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
ATerm if_annotation_2_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t);
ATerm strip_annos_0_0 (ATerm t);
ATerm catch_annos_0_0 (ATerm t);
ATerm preserve_annotation_1_0 (ATerm p_111 (ATerm), ATerm t);
ATerm preserve_annos_1_0 (ATerm q_111 (ATerm), ATerm t);
ATerm Merge_Props_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm is_same_prop_0_0 (ATerm t);
ATerm is_prop_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm apply_prop_existing_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t);
ATerm apply_2_prop_2_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm t);
ATerm apply_2_prop_1_0 (ATerm x_111 (ATerm), ATerm t);
ATerm add_prop_existing_2_0 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm t);
ATerm add_prop_empty_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t);
ATerm props_union_0_0 (ATerm t);
ATerm valid_props_term_0_0 (ATerm t);
ATerm valid_props_0_0 (ATerm t);
ATerm get_props_0_0 (ATerm t);
ATerm preserve_props_1_0 (ATerm c_112 (ATerm), ATerm t);
ATerm merge_props_1_0 (ATerm d_112 (ATerm), ATerm t);
ATerm has_prop_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm has_prop_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
ATerm get_prop_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm apply_prop_2_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm t);
ATerm replace_prop_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
ATerm add_prop_2_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm t);
ATerm set_prop_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t);
ATerm is_interval_0_0 (ATerm t);
ATerm range_1_0 (ATerm r_3 (ATerm), ATerm t);
ATerm range_next_1_0 (ATerm s_112 (ATerm), ATerm t);
ATerm range_0_1 (ATerm s_3, ATerm t);
ATerm range_0_0 (ATerm t);
ATerm sum_0_0 (ATerm t);
ATerm average_0_0 (ATerm t);
ATerm list_min_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm list_accum_1_0 (ATerm t_112 (ATerm), ATerm t);
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
ATerm comp_comp_2_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm t);
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
ATerm table_putlist_1_0 (ATerm y_112 (ATerm), ATerm t);
ATerm table_copy_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm z_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm table_rename_0_0 (ATerm t);
ATerm hashtable_eq_0_0 (ATerm t);
ATerm hashtable_eq_1_0 (ATerm z_112 (ATerm), ATerm t);
ATerm hashtable_union_0_1 (ATerm s_54, ATerm t);
ATerm hashtable_union_wempty_0_2 (ATerm v_54, ATerm w_54, ATerm t);
ATerm hashtable_union_symm_wempty_0_1 (ATerm z_54, ATerm t);
ATerm hashtable_intersect_0_1 (ATerm e_55, ATerm t);
ATerm hashtable_intersect_wempty_0_2 (ATerm i_55, ATerm j_55, ATerm t);
ATerm hashtable_intersect_symm_wempty_0_1 (ATerm n_55, ATerm t);
ATerm hashtable_merge_8_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t);
ATerm hashtable_merge_func_7_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm symmetric_yes_0_0 (ATerm t);
ATerm symmetric_no_0_0 (ATerm t);
ATerm iterate1_yes_0_0 (ATerm t);
ATerm iterate1_no_0_0 (ATerm t);
ATerm iterate2_yes_0_0 (ATerm t);
ATerm iterate2_no_0_0 (ATerm t);
ATerm remove_yes_0_0 (ATerm t);
ATerm remove_no_0_0 (ATerm t);
ATerm default_no_0_0 (ATerm t);
ATerm hashtable_push_0_2 (ATerm h_56, ATerm i_56, ATerm t);
ATerm hashtable_pushlist_0_2 (ATerm j_56, ATerm k_56, ATerm t);
ATerm hashtable_pushunion_0_2 (ATerm l_56, ATerm m_56, ATerm t);
ATerm hashtable_pop_0_1 (ATerm n_56, ATerm t);
ATerm hashtable_peek_0_1 (ATerm o_56, ATerm t);
ATerm hashtable_peekpop_0_1 (ATerm p_56, ATerm t);
ATerm hashtable_getlist_0_0 (ATerm t);
ATerm hashtable_putlist_0_1 (ATerm t_56, ATerm t);
ATerm hashtable_copy_0_0 (ATerm t);
ATerm hashtable_put_0_2 (ATerm y_56, ATerm z_56, ATerm t);
ATerm hashtable_get_0_1 (ATerm b_57, ATerm t);
ATerm hashtable_remove_0_1 (ATerm d_57, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm new_hashtable_0_2 (ATerm g_57, ATerm h_57, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm hashtable_clear_0_0 (ATerm t);
ATerm iset_get_index_0_1 (ATerm k_57, ATerm t);
ATerm iset_get_elem_0_1 (ATerm m_57, ATerm t);
ATerm iset_add_1_1 (ATerm p_113 (ATerm), ATerm o_57, ATerm t);
ATerm iset_add_0_1 (ATerm q_57, ATerm t);
ATerm iset_addlist_0_1 (ATerm s_57, ATerm t);
ATerm iset_contains_0_1 (ATerm v_57, ATerm t);
ATerm iset_remove_0_1 (ATerm w_57, ATerm t);
ATerm iset_elements_0_0 (ATerm t);
ATerm iset_union_0_1 (ATerm z_57, ATerm t);
ATerm iset_isect_0_1 (ATerm c_58, ATerm t);
ATerm iset_subset_0_1 (ATerm f_58, ATerm t);
ATerm iset_eq_0_1 (ATerm i_58, ATerm t);
ATerm new_iset_0_0 (ATerm t);
ATerm new_iset_0_2 (ATerm k_58, ATerm l_58, ATerm t);
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
ATerm profile_1_0 (ATerm q_113 (ATerm), ATerm t);
ATerm profile_2_0 (ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t);
ATerm profile_p__2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm t);
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
ATerm pipe_source_2_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm t);
ATerm pipe_sink_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t);
ATerm close_filter_pipe_1_0 (ATerm z_113 (ATerm), ATerm t);
ATerm exec_filter_pipe_1_0 (ATerm a_114 (ATerm), ATerm t);
ATerm spawn_filter_with_prog_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm t);
ATerm write_to_prog_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm t);
ATerm write_to_prog_p__2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm t);
ATerm read_from_prog_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t);
ATerm read_from_prog_p__2_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t);
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
ATerm filter_text_file_2_0 (ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm t);
ATerm printascii_0_0 (ATerm t);
ATerm rm_files_0_0 (ATerm t);
ATerm pipe_2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t);
ATerm pipe_3_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t);
ATerm pipe_p__3_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
ATerm call_tmp_3_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t);
ATerm call_out_4_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm t);
ATerm transform_file_2_0 (ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t);
ATerm apply_to_file_1_0 (ATerm g_115 (ATerm), ATerm t);
ATerm copy_file_3_0 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t);
ATerm apply_program_1_0 (ATerm k_115 (ATerm), ATerm t);
ATerm apply_program_2_0 (ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm t);
ATerm redirect_stdout_to_file_0_0 (ATerm t);
ATerm redirect_stdin_from_file_0_0 (ATerm t);
ATerm pipe_term_to_child_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm if_less_verbose1_1_0 (ATerm p_115 (ATerm), ATerm t);
ATerm if_less_verbose2_1_0 (ATerm q_115 (ATerm), ATerm t);
ATerm if_less_verbose3_1_0 (ATerm r_115 (ATerm), ATerm t);
ATerm if_less_verbose4_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm if_less_verbose5_1_0 (ATerm t_115 (ATerm), ATerm t);
ATerm if_less_verbose6_1_0 (ATerm u_115 (ATerm), ATerm t);
ATerm if_less_verbose7_1_0 (ATerm v_115 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm w_115 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm x_115 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm y_115 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm z_115 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm a_116 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm b_116 (ATerm), ATerm t);
ATerm if_verbose7_1_0 (ATerm c_116 (ATerm), ATerm t);
ATerm set_verbosity_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm find_config_file_2_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm t);
ATerm find_config_file_3_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm t);
ATerm find_plugins_3_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t);
ATerm find_plugins_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
ATerm import_config_file_1_0 (ATerm n_116 (ATerm), ATerm t);
ATerm import_config_files_1_0 (ATerm o_116 (ATerm), ATerm t);
ATerm export_config_0_0 (ATerm t);
ATerm merge_configs_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
ATerm toggle_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm post_extend_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_configs_1_0 (ATerm p_116 (ATerm), ATerm t);
ATerm get_config_keys_1_0 (ATerm q_116 (ATerm), ATerm t);
ATerm if_less_keep1_1_0 (ATerm r_116 (ATerm), ATerm t);
ATerm if_less_keep2_1_0 (ATerm s_116 (ATerm), ATerm t);
ATerm if_less_keep3_1_0 (ATerm t_116 (ATerm), ATerm t);
ATerm if_less_keep4_1_0 (ATerm u_116 (ATerm), ATerm t);
ATerm if_less_keep5_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm if_less_keep6_1_0 (ATerm w_116 (ATerm), ATerm t);
ATerm if_less_keep7_1_0 (ATerm x_116 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm y_116 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm z_116 (ATerm), ATerm t);
ATerm if_keep3_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm if_keep4_1_0 (ATerm b_117 (ATerm), ATerm t);
ATerm if_keep5_1_0 (ATerm c_117 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm d_117 (ATerm), ATerm t);
ATerm if_keep7_1_0 (ATerm e_117 (ATerm), ATerm t);
ATerm set_keep_0_0 (ATerm t);
ATerm get_keep_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm exited_0_0 (ATerm t);
ATerm signaled_0_0 (ATerm t);
ATerm stopped_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm call_1_0 (ATerm f_117 (ATerm), ATerm t);
ATerm call_noisy_0_0 (ATerm t);
ATerm fork_1_0 (ATerm g_117 (ATerm), ATerm t);
ATerm fork_2_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm j_117 (ATerm), ATerm t);
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
ATerm memo_scope_1_0 (ATerm k_117 (ATerm), ATerm t);
ATerm memo_1_0 (ATerm l_117 (ATerm), ATerm t);
ATerm Memo_0_0 (ATerm t);
ATerm memo_init_0_0 (ATerm t);
ATerm memo_purge_0_0 (ATerm t);
ATerm memo_2_0 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t);
ATerm input_file_p__0_0 (ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_117 (ATerm), ATerm t);
ATerm output_file_p__0_0 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm get_options_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm p_117 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t);
ATerm check_option_0_0 (ATerm t);
ATerm usage_p__0_0 (ATerm t);
ATerm iowrap_1_0 (ATerm s_117 (ATerm), ATerm t);
ATerm iowrapO_2_0 (ATerm t_117 (ATerm), ATerm u_117 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
ATerm iowrap_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t);
ATerm iowrapO_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t);
ATerm iowrap_4_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t);
ATerm iowrapNoOutput_2_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm t);
ATerm iowrapNoOutput_3_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm need_help_1_0 (ATerm m_118 (ATerm), ATerm t);
ATerm need_help_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm n_118 (ATerm), ATerm t);
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
ATerm option_wrap_2_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm t);
ATerm io_1_0 (ATerm z_118 (ATerm), ATerm t);
ATerm output_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm input_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm c_119 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm t);
ATerm io_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t);
ATerm output_wrap_1_0 (ATerm j_119 (ATerm), ATerm t);
ATerm output_wrap_2_0 (ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm t);
ATerm input_wrap_1_0 (ATerm m_119 (ATerm), ATerm t);
ATerm input_wrap_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t);
ATerm defined_option_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm q_119 (ATerm), ATerm t);
ATerm arg_option_value_1_0 (ATerm r_119 (ATerm), ATerm t);
ATerm Option_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm t_3 (ATerm), ATerm u_3 (ATerm), ATerm v_3 (ATerm), ATerm t);
ATerm ArgOption_3_0 (ATerm w_3 (ATerm), ATerm x_3 (ATerm), ATerm y_3 (ATerm), ATerm t);
ATerm ArgOption_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
ATerm Arg2Option_2_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm t);
ATerm Arg2Option_3_0 (ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm b_4 (ATerm), ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_1_0 (ATerm q_120 (ATerm), ATerm t);
ATerm parse_options_3_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_120 (ATerm), ATerm t);
ATerm register_usage_1_0 (ATerm w_120 (ATerm), ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm short_description_1_0 (ATerm x_120 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm y_120 (ATerm), ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t);
ATerm substitute_1_0 (ATerm d_121 (ATerm), ATerm t);
ATerm substitute_6_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm (ATerm), ATerm), ATerm g_121 (ATerm), ATerm h_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_121 (ATerm (ATerm), ATerm), ATerm j_121 (ATerm), ATerm t);
ATerm substitute_5_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm (ATerm), ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_121 (ATerm (ATerm), ATerm), ATerm t);
ATerm SubsVar_2_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm rename_4_0 (ATerm s_121 (ATerm (ATerm), ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_121 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm (ATerm), ATerm), ATerm t);
ATerm rename_3_0 (ATerm z_121 (ATerm (ATerm), ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm DistBinding_2_0 (ATerm d_122 (ATerm), ATerm e_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm rename_2_0 (ATerm f_122 (ATerm (ATerm), ATerm), ATerm g_122 (ATerm), ATerm t);
ATerm RnVar_1_0 (ATerm i_122 (ATerm (ATerm), ATerm), ATerm t);
ATerm RnBinding_1_0 (ATerm j_122 (ATerm), ATerm t);
ATerm DistBinding_1_0 (ATerm k_122 (ATerm), ATerm t);
ATerm equal_2_0 (ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t);
ATerm equal_1_0 (ATerm n_122 (ATerm), ATerm t);
ATerm in_0_0 (ATerm t);
ATerm UfVar_1_0 (ATerm o_122 (ATerm), ATerm t);
ATerm UfSwap_1_0 (ATerm p_122 (ATerm), ATerm t);
ATerm unify_1_0 (ATerm q_122 (ATerm), ATerm t);
ATerm MatchVar_1_0 (ATerm r_122 (ATerm), ATerm t);
ATerm pattern_match_1_0 (ATerm s_122 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm equal_0_0 (ATerm t);
ATerm free_vars2_2_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm t);
ATerm free_vars2_3_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm y_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars2_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_123 (ATerm), ATerm t);
ATerm free_vars_2_0 (ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm t);
ATerm free_vars_3_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm free_vars_4_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_123 (ATerm), ATerm t);
ATerm apply_test_1_3 (ATerm r_123 (ATerm), ATerm d_71, ATerm e_71, ATerm f_71, ATerm t);
ATerm apply_test_1_2 (ATerm s_123 (ATerm), ATerm g_71, ATerm h_71, ATerm t);
ATerm apply_and_check_1_3 (ATerm t_123 (ATerm), ATerm i_71, ATerm j_71, ATerm k_71, ATerm t);
ATerm apply_and_fail_1_2 (ATerm u_123 (ATerm), ATerm l_71, ATerm m_71, ATerm t);
ATerm apply_and_fail_1_3 (ATerm v_123 (ATerm), ATerm n_71, ATerm o_71, ATerm p_71, ATerm t);
ATerm apply_and_show_1_2 (ATerm w_123 (ATerm), ATerm q_71, ATerm r_71, ATerm t);
ATerm do_test_1_1 (ATerm x_123 (ATerm), ATerm s_71, ATerm t);
ATerm init_record_0_0 (ATerm t);
ATerm record_success_0_0 (ATerm t);
ATerm record_failure_0_0 (ATerm t);
ATerm check_for_failures_0_0 (ATerm t);
ATerm report_test_0_0 (ATerm t);
ATerm test_suite_2_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm t);
ATerm do_test_2_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t);
ATerm testing_2_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t);
ATerm apply_test_4_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm), ATerm t);
ATerm apply_test_3_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t);
ATerm apply_and_check_4_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm t);
ATerm apply_and_fail_3_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm t);
ATerm apply_and_fail_4_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm t);
ATerm apply_and_show_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_3_0 (ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm t);
ATerm graph_nodes_undef_3_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm t);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t);
ATerm graph_nodes_undef_chgr_3_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm graph_nodes_3_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t);
ATerm GnInit_0_0 (ATerm t);
ATerm GnInitRoots_0_0 (ATerm t);
ATerm GnNext_3_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm t);
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
ATerm parenthesize_2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm t);
ATerm parenthesize_1_0 (ATerm z_125 (ATerm), ATerm t);
ATerm Disambiguate_1_0 (ATerm c_4 (ATerm), ATerm t);
ATerm TempDirs_0_0 (ATerm t);
ATerm TempFiles_0_0 (ATerm t);
ATerm TEMP_0_0 (ATerm t);
ATerm DIR_1_0 (ATerm k_4 (ATerm), ATerm t);
ATerm FILE_1_0 (ATerm j_4 (ATerm), ATerm t);
ATerm XTC_0_0 (ATerm t);
ATerm Imported_1_0 (ATerm i_4 (ATerm), ATerm t);
ATerm Import_0_0 (ATerm t);
ATerm Repository_0_0 (ATerm t);
ATerm Tool_1_0 (ATerm h_4 (ATerm), ATerm t);
static ATerm c_0 (ATerm t)
{
  t = debug_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_b_11;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = debug_1_0(k_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  t = term_e_11;
  t = get_config_0_0(t);
  t = if_verbose2_1_0(c_0, t);
  t = term_e_11;
  t = get_config_0_0(t);
  b_0 = t;
  t = if_verbose5_1_0(i_0, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_11, term_g_11, b_0);
  t = table_union_0_0(t);
  return(t);
}
ATerm xtc_register_0_3 (ATerm p_3, ATerm d_4, ATerm e_4, ATerm t)
{
  ATerm m_0 = NULL;
  m_0 = t;
  t = xtc_load_0_0(t);
  t = p_3;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATinsert(ATempty, p_3);
      }
  }
  {
    static ATerm o_0 (ATerm t);
    static ATerm o_0 (ATerm t)
    {
      ATerm v_1 = NULL,w_1 = NULL;
      w_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_1), term_j_11), e_4);
      t = concat_strings_0_0(t);
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_11, (ATerm)ATmakeAppl(sym_Tool_1, w_1), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_4, v_1)));
      t = table_union_0_0(t);
      return(t);
    }
    t = map_1_0(o_0, t);
  }
  t = m_0;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = say_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_m_11;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm y_1 = NULL,o_2 = NULL,p_2 = NULL;
  t = term_p_11;
  t = get_config_0_0(t);
  y_1 = t;
  t = if_verbose1_1_0(q_0, t);
  t = if_verbose2_1_0(u_1, t);
  t = term_q_11;
  t = get_config_0_0(t);
  o_2 = t;
  t = if_verbose2_1_0(c_2, t);
  t = term_r_11;
  t = get_config_0_0(t);
  p_2 = t;
  t = if_verbose2_1_0(e_2, t);
  t = y_1;
  t = xtc_register_0_3(y_1, o_2, p_2, t);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, y_2));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_11 = ATgetFirst((ATermList) t);
      if(match_cons(s_11, sym__2))
        {
          ATerm u_11 = ATgetArgument(s_11, 0);
          z_2 = ATgetArgument(s_11, 1);
        }
      else
        _fail(t);
      {
        ATerm t_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_2;
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, b_3));
  t = table_get_0_0(t);
  {
    static ATerm k_2 (ATerm t);
    static ATerm k_2 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((c_3 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((k_3 != NULL) && (k_3 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(k_2, t);
  }
  t = not_null(k_3);
  return(t);
}
static ATerm i_8 (ATerm g_3, ATerm h_3, ATerm t)
{
  ATerm f_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, g_3));
  t = table_get_0_0(t);
  {
    static ATerm l_2 (ATerm t);
    static ATerm l_2 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((h_3 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((f_4 != NULL) && (f_4 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(l_2, t);
  }
  t = not_null(f_4);
  return(t);
}
static ATerm r_6 (ATerm s_4, ATerm t)
{
  ATerm d_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, s_4));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_11 = ATgetFirst((ATermList) t);
      if(match_cons(v_11, sym__2))
        {
          ATerm x_11 = ATgetArgument(v_11, 0);
          d_5 = ATgetArgument(v_11, 1);
        }
      else
        _fail(t);
      {
        ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_5;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm e_5 = NULL,j_6 = NULL,k_6 = NULL;
  t = xtc_load_0_0(t);
  k_6 = t;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_6 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, e_5));
            t = table_get_0_0(t);
            {
              static ATerm m_2 (ATerm t);
              static ATerm m_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((j_6 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((q_6 != NULL) && (q_6 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(m_2, t);
            }
            t = not_null(q_6);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = r_6(k_6, t);
          }
      }
    }
  else
    {
      t = r_6(k_6, t);
    }
  t = if_verbose5_1_0(n_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
static ATerm f_7 (ATerm u_6, ATerm t)
{
  ATerm w_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, u_6));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_12 = ATgetFirst((ATermList) t);
      if(match_cons(b_12, sym__2))
        {
          ATerm d_12 = ATgetArgument(b_12, 0);
          w_6 = ATgetArgument(b_12, 1);
        }
      else
        _fail(t);
      {
        ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_6;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_f_11;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
      t = if_verbose5_1_0(s_2, t);
      t = xtc_load_0_0(t);
      z_6 = t;
      if(match_cons(t, sym__2))
        {
          x_6 = ATgetArgument(t, 0);
          y_6 = ATgetArgument(t, 1);
          {
            ATerm h_12 = t;
            int i_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_7 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Tool_1, x_6));
                t = table_get_0_0(t);
                {
                  static ATerm u_2 (ATerm t);
                  static ATerm u_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_6 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_2, t);
                }
                t = not_null(c_7);
                LocalPopChoice(i_12);
              }
            else
              {
                t = h_12;
                t = f_7(z_6, t);
              }
          }
        }
      else
        {
          t = f_7(z_6, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm d_7 = NULL;
        d_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_12), d_7), term_j_12);
        t = error_0_0(t);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm e_6 (ATerm), ATerm f_6 (ATerm), ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_7 = NULL,q_7 = NULL,h_0 = NULL,h_2 = NULL;
          o_7 = t;
          if(match_cons(t, sym_FILE_1))
            {
              q_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_7);
          h_0 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_7);
          h_2 = t;
          t = SSLsetAnnotations(h_2, h_0);
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          t = stdin_0_0(t);
        }
      LocalPopChoice(o_12);
      t = xtc_transform_file_2_0(e_6, f_6, t);
    }
  else
    {
      t = n_12;
      t = xtc_transform_term_2_0(e_6, f_6, t);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm d_6 (ATerm), ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 = NULL,k_8 = NULL,z_1 = NULL,p_6 = NULL;
          d_8 = t;
          if(match_cons(t, sym_FILE_1))
            {
              k_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_8);
          z_1 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_8);
          p_6 = t;
          t = SSLsetAnnotations(p_6, z_1);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          t = stdin_0_0(t);
        }
      LocalPopChoice(s_12);
      t = xtc_transform_file_2_0(d_6, f_3, t);
    }
  else
    {
      t = r_12;
      t = xtc_transform_term_2_0(d_6, i_3, t);
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm c_6 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  o_8 = t;
  t = c_6(t);
  t = xtc_find_0_0(t);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
  t = call_0_0(t);
  t = o_8;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_v_12;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = filter_1_0(m_3, t);
  t = if_3_0(n_3, o_3, q_4, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_silent_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_12;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = debug_1_0(r_4, t);
  t = term_y_12;
  t = exit_0_0(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_z_12;
  t = echo_0_0(t);
  t = term_c_13;
  t = exit_0_0(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm xtc_check_dependencies_0_0 (ATerm t)
{
  t = if_2_0(j_3, l_3, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm check_options_1_0 (ATerm b_6 (ATerm), ATerm t)
{
  static ATerm f_5 (ATerm t);
  static ATerm f_5 (ATerm t)
  {
    ATerm p_8 = NULL,s_8 = NULL;
    p_8 = t;
    t = b_6(t);
    s_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_12, s_8);
    t = set_config_0_0(t);
    t = p_8;
    return(t);
  }
  t = Option_3_0(c_5, f_5, l_6, t);
  return(t);
}
ATerm xtc_input_wrap_2_0 (ATerm z_5 (ATerm), ATerm a_6 (ATerm), ATerm t)
{
  static ATerm m_6 (ATerm t);
  static ATerm v_6 (ATerm t);
  static ATerm m_6 (ATerm t)
  {
    ATerm l_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_5(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = l_13;
        t = input_options_0_0(t);
      }
    return(t);
  }
  static ATerm v_6 (ATerm t)
  {
    static ATerm a_7 (ATerm t);
    static ATerm a_7 (ATerm t)
    {
      ATerm u_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          t_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
          LocalPopChoice(w_13);
        }
      else
        {
          t = u_13;
          t = term_a_14;
        }
      t = a_6(t);
      return(t);
    }
    t = xtc_temp_files_1_0(a_7, t);
    return(t);
  }
  t = option_wrap_2_0(m_6, v_6, t);
  return(t);
}
ATerm xtc_input_wrap_1_0 (ATerm y_5 (ATerm), ATerm t)
{
  static ATerm b_7 (ATerm t);
  static ATerm b_7 (ATerm t)
  {
    static ATerm e_7 (ATerm t);
    static ATerm e_7 (ATerm t)
    {
      ATerm c_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_8 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          v_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_8);
          LocalPopChoice(d_14);
        }
      else
        {
          t = c_14;
          t = term_a_14;
        }
      t = y_5(t);
      return(t);
    }
    t = xtc_temp_files_1_0(e_7, t);
    return(t);
  }
  t = option_wrap_2_0(input_options_0_0, b_7, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm w_5 (ATerm), ATerm x_5 (ATerm), ATerm t)
{
  static ATerm g_7 (ATerm t);
  static ATerm i_7 (ATerm t);
  static ATerm g_7 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_5(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm i_7 (ATerm t)
  {
    static ATerm k_7 (ATerm t);
    static ATerm k_7 (ATerm t)
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_8 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          w_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
          LocalPopChoice(v_14);
        }
      else
        {
          t = u_14;
          t = term_a_14;
        }
      t = x_5(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(k_7, t);
    return(t);
  }
  t = option_wrap_2_0(g_7, i_7, t);
  return(t);
}
ATerm xtc_iowrap_1_0 (ATerm v_5 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    static ATerm p_7 (ATerm t);
    static ATerm p_7 (ATerm t)
    {
      ATerm d_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_8 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          x_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
          LocalPopChoice(f_16);
        }
      else
        {
          t = d_16;
          t = term_a_14;
        }
      t = v_5(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(p_7, t);
    return(t);
  }
  t = option_wrap_2_0(io_options_0_0, m_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm xtc_io_wrap_5_0 (ATerm q_5 (ATerm), ATerm r_5 (ATerm), ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm u_5 (ATerm), ATerm t)
{
  static ATerm r_7 (ATerm t);
  static ATerm s_7 (ATerm t);
  static ATerm r_7 (ATerm t)
  {
    ATerm g_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_5(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = g_16;
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0_0(t);
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              {
                static ATerm u_7 (ATerm t);
                static ATerm u_7 (ATerm t)
                {
                  ATerm f_2 = NULL,g_2 = NULL;
                  f_2 = t;
                  t = t_5(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_v_12, g_2);
                  t = set_config_0_0(t);
                  t = f_2;
                  return(t);
                }
                t = Option_3_0(t_7, u_7, v_7, t);
              }
            }
        }
      }
    return(t);
  }
  static ATerm s_7 (ATerm t)
  {
    static ATerm w_7 (ATerm t);
    static ATerm w_7 (ATerm t)
    {
      ATerm m_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_9 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          e_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_9);
          LocalPopChoice(o_16);
        }
      else
        {
          t = m_16;
          t = term_a_14;
        }
      t = u_5(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_check_dependencies_0_0(t);
    t = xtc_temp_files_1_0(w_7, t);
    return(t);
  }
  t = option_wrap_5_0(r_7, r_5, s_5, _id, s_7, t);
  return(t);
}
ATerm xtc_io_wrap_3_0 (ATerm n_5 (ATerm), ATerm o_5 (ATerm), ATerm p_5 (ATerm), ATerm t)
{
  t = xtc_io_wrap_5_0(n_5, system_usage_0_0, system_about_0_0, o_5, p_5, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm l_5 (ATerm), ATerm m_5 (ATerm), ATerm t)
{
  static ATerm x_7 (ATerm t);
  static ATerm y_7 (ATerm t);
  static ATerm x_7 (ATerm t)
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_5(t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm y_7 (ATerm t)
  {
    static ATerm z_7 (ATerm t);
    static ATerm z_7 (ATerm t)
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_9 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          f_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_9);
          LocalPopChoice(u_16);
        }
      else
        {
          t = t_16;
          t = term_a_14;
        }
      t = m_5(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(z_7, t);
    return(t);
  }
  t = option_wrap_2_0(x_7, y_7, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm k_5 (ATerm), ATerm t)
{
  static ATerm a_8 (ATerm t);
  static ATerm a_8 (ATerm t)
  {
    static ATerm b_8 (ATerm t);
    static ATerm b_8 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_9 = NULL;
          t = term_y_13;
          t = get_config_0_0(t);
          h_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, h_9);
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = term_a_14;
        }
      t = k_5(t);
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(b_8, t);
    return(t);
  }
  t = option_wrap_2_0(io_options_0_0, a_8, t);
  return(t);
}
ATerm xtc_input_1_0 (ATerm j_5 (ATerm), ATerm t)
{
  static ATerm c_8 (ATerm t);
  static ATerm c_8 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_9);
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = term_a_14;
      }
    t = j_5(t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_17;
      t = get_config_0_0(t);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = term_d_17;
    }
  return(t);
}
ATerm xtc_output_1_0 (ATerm i_5 (ATerm), ATerm t)
{
  static ATerm e_8 (ATerm t);
  static ATerm e_8 (ATerm t)
  {
    t = i_5(t);
    t = copy_to_1_0(f_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_8, t);
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_9 = NULL;
      t = term_e_17;
      t = xtc_new_file_0_0(t);
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_14, o_9);
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_9);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm h_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_9;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_17;
      t = get_config_0_0(t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      t = term_d_17;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_2 = NULL;
      t = term_c_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = term_d_17;
          }
      }
      j_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_14, j_2);
      t = copy_file_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_9;
      t = copy_to_1_0(g_8, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_c_13;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm h_5 (ATerm), ATerm t)
{
  static ATerm h_8 (ATerm t);
  static ATerm h_8 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = term_a_14;
      }
    t = h_5(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(h_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  static ATerm l_8 (ATerm t);
  static ATerm l_8 (ATerm t)
  {
    ATerm f_10 = NULL;
    f_10 = t;
    t = term_r_17;
    t = table_get_0_0(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_10 != NULL) && (e_10 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_10 = ATgetFirst((ATermList) t);
        {
          ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_10;
    t = map_1_0(m_8, t);
    t = f_10;
    t = end_scope_1_0(q_8, t);
    return(t);
  }
  t = repeat_1_0(l_8, t);
  t = exit_0_0(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_p_17;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_5 (ATerm), ATerm t)
{
  ATerm g_10 = NULL;
  static ATerm u_8 (ATerm t);
  static ATerm u_8 (ATerm t)
  {
    ATerm h_10 = NULL;
    h_10 = t;
    {
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_17;
          t = table_get_0_0(t);
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_10 != NULL) && (g_10 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_10 = ATgetFirst((ATermList) t);
        {
          ATerm v_17 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_10;
    t = map_1_0(y_8, t);
    t = h_10;
    t = end_scope_1_0(z_8, t);
    return(t);
  }
  t = begin_scope_1_0(r_8, t);
  t = restore_always_2_0(g_5, u_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm xtc_remove_temporaries_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  t = term_x_17;
  t = table_get_0_0(t);
  t = map_1_0(a_9, t);
  t = i_10;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_10 = NULL,n_10 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_10, term_e_17);
  t = assert_1_0(b_9, t);
  t = k_10;
  t = close_0_0(t);
  t = n_10;
  return(t);
}
ATerm xtc_find_file_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = xtc_find_0_0(t);
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_10);
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm r_10 = NULL,t_10 = NULL;
  r_10 = t;
  t = xtc_new_file_0_0(t);
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_10, term_y_17);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, r_10);
  t = print_0_0(t);
  t = t_10;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_10);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  w_10 = t;
  t = xtc_new_file_0_0(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
  t = WriteToTextFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_10);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm z_10 = NULL,c_11 = NULL;
  c_11 = t;
  t = xtc_new_file_0_0(t);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_10, c_11);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          k_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_11;
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm i_6 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 = NULL;
        t = k_12;
        t = i_6(t);
        q_2 = t;
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = stderr_0_0(t);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_12, q_2);
        t = copy_file_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_2 = NULL;
              t = k_12;
              t = i_6(t);
              w_2 = t;
              {
                ATerm f_18 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_18 = t;
                    int h_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0_0(t);
                        LocalPopChoice(h_18);
                      }
                    else
                      {
                        t = g_18;
                        {
                          ATerm i_18 = t;
                          int j_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = stderr_0_0(t);
                              LocalPopChoice(j_18);
                            }
                          else
                            {
                              t = i_18;
                              {
                                ATerm x_2 = NULL;
                                x_2 = t;
                                if((l_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_2;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_18;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_12, w_2);
              t = copy_file_0_0(t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = k_12;
              t = i_6(t);
              if((l_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
            }
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm h_6 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_13;
        t = h_6(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_13, term_d_17);
        t = copy_file_0_0(t);
        t = b_13;
        t = remove_file_0_0(t);
        t = term_d_17;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_4 = NULL;
              t = a_13;
              t = h_6(t);
              g_4 = t;
              {
                ATerm o_18 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_18 = t;
                    int r_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0_0(t);
                        LocalPopChoice(r_18);
                      }
                    else
                      {
                        t = q_18;
                        {
                          ATerm p_4 = NULL;
                          p_4 = t;
                          if((b_13 != t))
                            {
                              _fail(t);
                            }
                          t = p_4;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_18;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_13, g_4);
              t = rename_file_0_0(t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              t = a_13;
              t = h_6(t);
              if((b_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_13);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_generate_2_0 (ATerm y_4 (ATerm), ATerm z_4 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,a_5 = NULL,b_5 = NULL;
  t = term_e_17;
  t = xtc_new_file_0_0(t);
  f_13 = t;
  t = z_4(t);
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_13, (ATerm) ATinsert(ATinsert(ATempty, f_13), term_c_17));
  t = conc_0_0(t);
  b_5 = t;
  t = y_4(t);
  t = xtc_find_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
  t = call_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_13);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_generate_1_0 (ATerm x_4 (ATerm), ATerm t)
{
  t = xtc_generate_2_0(x_4, c_9, t);
  return(t);
}
ATerm xtc_io_transform_text_1_0 (ATerm w_4 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = w_4(t);
  t = print_to_0_0(t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm v_4 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  t = read_from_0_0(t);
  t = v_4(t);
  i_13 = t;
  t = xtc_new_file_0_0(t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_13, i_13);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_13);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_4 (ATerm), ATerm u_4 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  k_13 = t;
  t = xtc_new_file_0_0(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_13);
  t = xtc_transform_file_2_0(t_4, u_4, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm a_0 (ATerm), ATerm g_6 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_13 = NULL,p_13 = NULL,n_6 = NULL,o_6 = NULL;
      t = m_13;
      t = xtc_new_file_0_0(t);
      o_13 = t;
      t = g_6(t);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, (ATerm) ATinsert(ATinsert(ATempty, o_13), term_c_17));
      t = conc_0_0(t);
      o_6 = t;
      t = a_0(t);
      t = xtc_find_0_0(t);
      n_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_6, o_6);
      t = call_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_13);
    }
  else
    {
      ATerm r_13 = NULL,s_13 = NULL,s_6 = NULL,t_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_13;
      t = xtc_new_file_0_0(t);
      r_13 = t;
      t = g_6(t);
      s_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_13), term_c_17), n_13), term_y_13));
      t = conc_0_0(t);
      t_6 = t;
      t = a_0(t);
      t = xtc_find_0_0(t);
      s_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_6, t_6);
      t = call_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_13);
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_file_1_0 (ATerm o_4 (ATerm), ATerm t)
{
  t = xtc_transform_file_2_0(o_4, d_9, t);
  return(t);
}
ATerm xtc_transform_file_0_0 (ATerm t)
{
  if(match_cons(t, sym__3))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      ATerm t_18 = ATgetArgument(t, 1);
      ATerm u_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL;
      t_13 = t;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_13 = NULL;
            t = term_e_17;
            t = STDIN__FILENO_0_0(t);
            v_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_13, v_13);
            t = eq_0_0(t);
            t = t_13;
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm z_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_13 = NULL;
                  t = term_e_17;
                  t = STDOUT__FILENO_0_0(t);
                  x_13 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_13, x_13);
                  t = eq_0_0(t);
                  t = t_13;
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = z_18;
                  {
                    ATerm z_13 = NULL;
                    t = term_e_17;
                    t = STDERR__FILENO_0_0(t);
                    z_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_13, z_13);
                    t = eq_0_0(t);
                    t = t_13;
                  }
                }
            }
          }
      }
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      t = close_0_0(t);
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  t = finally_2_0(g_9, j_9, t);
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      b_14 = ATgetArgument(t, 0);
      t = b_14;
      t = open_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_e_17;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_e_17;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_e_17;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = new_file_0_0(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_14, term_e_17);
  t = assert_1_0(k_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_14);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm n_4 (ATerm), ATerm t)
{
  ATerm f_14 = NULL;
  static ATerm m_9 (ATerm t);
  static ATerm m_9 (ATerm t)
  {
    ATerm g_14 = NULL;
    g_14 = t;
    {
      static ATerm n_9 (ATerm t);
      static ATerm n_9 (ATerm t)
      {
        t = not_null(f_14);
        t = xtc_close_fd_0_0(t);
        return(t);
      }
      t = try_1_0(n_9, t);
    }
    t = g_14;
    return(t);
  }
  t = xtc_open_fd_0_0(t);
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  t = finally_2_0(n_4, m_9, t);
  return(t);
}
ATerm xtc_filter_text_file_2_0 (ATerm l_4 (ATerm), ATerm m_4 (ATerm), ATerm t)
{
  ATerm h_14 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_8(l_4, m_4, h_14, t);
  return(t);
}
static ATerm j_8 (ATerm l_4 (ATerm), ATerm m_4 (ATerm), ATerm n_0, ATerm t)
{
  ATerm i_14 = NULL;
  t = n_0;
  t = xtc_new_file_0_0(t);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_0, i_14);
  t = filter_text_file_2_0(l_4, m_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_14);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  k_14 = t;
  t = xtc_new_file_name_0_0(t);
  j_14 = t;
  t = xtc_open_fd_0_0(t);
  l_14 = t;
  t = k_14;
  {
    static ATerm p_9 (ATerm t);
    static ATerm p_9 (ATerm t)
    {
      static ATerm q_9 (ATerm t);
      static ATerm q_9 (ATerm t)
      {
        ATerm m_14 = NULL;
        m_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
        t = fdcopy_0_0(t);
        return(t);
      }
      t = File_as_fd_1_0(q_9, t);
      return(t);
    }
    t = map_1_0(p_9, t);
  }
  t = l_14;
  t = xtc_close_fd_0_0(t);
  t = j_14;
  return(t);
}
ATerm can_write_repository_0_0 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      LocalPopChoice(c_19);
      t = can_write_file_0_0(t);
    }
  else
    {
      t = b_19;
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = say_1_0(s_9, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_9, t);
  t = term_f_19;
  t = get_config_0_0(t);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0_0(t);
            LocalPopChoice(j_19);
            t = can_write_file_0_0(t);
          }
        else
          {
            t = i_19;
          }
        LocalPopChoice(h_19);
        {
          ATerm w_14 = NULL,x_14 = NULL;
          x_14 = t;
          t = term_f_11;
          t = table_getlist_0_0(t);
          w_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_14, w_14);
          t = WriteToBinaryFile_0_0(t);
        }
      }
    else
      {
        t = g_19;
        t = debug_1_0(t_9, t);
        _fail(t);
      }
  }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = debug_1_0(v_9, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_l_19;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_19 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_19;
      }
  }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = debug_1_0(z_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = if_verbose5_1_0(u_9, t);
  y_14 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_19;
        t = table_get_0_0(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        {
          ATerm z_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_14 = t;
          t = repeat_1_0(x_9, t);
          t = z_14;
        }
      }
  }
  t = y_14;
  t = if_verbose5_1_0(y_9, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_l_19;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_19 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_19;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  t = repeat_1_0(a_10, t);
  t = a_15;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(w_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_19;
      {
        ATerm x_19 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_20;
              }
            t = debug_1_0(b_10, t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = x_19;
            t = debug_1_0(d_10, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = debug_1_0(l_10, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = debug_1_0(o_10, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = say_1_0(s_10, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = say_1_0(x_10, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = say_1_0(a_11, t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = if_verbose5_1_0(j_10, t);
  {
    ATerm n_20 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATmakeAppl(sym_Imported_1, b_15));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_20;
      }
  }
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_11, term_q_19, (ATerm) ATinsert(ATempty, b_15));
  t = table_put_0_0(t);
  t = d_15;
  t = if_verbose4_1_0(m_10, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(p_10, t);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, c_15);
  t = table_putlist_1_0(table_append_0_0, t);
  t = if_verbose6_1_0(u_10, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_11, (ATerm)ATmakeAppl(sym_Imported_1, b_15), (ATerm) ATempty);
  t = table_put_0_0(t);
  t = if_verbose4_1_0(y_10, t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_19;
      t = get_config_0_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_20;
            t = getenv_0_0(t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
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
ATerm DIR_1_0 (ATerm k_4 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,i_15 = NULL,h_7 = NULL;
  i_15 = t;
  if(match_cons(t, sym_DIR_1))
    {
      f_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  e_15 = t;
  t = f_15;
  t = k_4(t);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_DIR_1, g_15);
  h_7 = t;
  t = SSLsetAnnotations(h_7, e_15);
  return(t);
}
ATerm FILE_1_0 (ATerm j_4 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,q_15 = NULL,j_7 = NULL;
  q_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  l_15 = t;
  t = m_15;
  t = j_4(t);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_15);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_15);
  return(t);
}
ATerm XTC_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XTC_0)))
    _fail(t);
  return(t);
}
ATerm Imported_1_0 (ATerm i_4 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL,u_15 = NULL,x_15 = NULL,l_7 = NULL;
  x_15 = t;
  if(match_cons(t, sym_Imported_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  r_15 = t;
  t = t_15;
  t = i_4(t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_15);
  l_7 = t;
  t = SSLsetAnnotations(l_7, r_15);
  return(t);
}
ATerm Import_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Import_0)))
    _fail(t);
  return(t);
}
ATerm Repository_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Repository_0)))
    _fail(t);
  return(t);
}
ATerm Tool_1_0 (ATerm h_4 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,c_16 = NULL,n_7 = NULL;
  c_16 = t;
  if(match_cons(t, sym_Tool_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  y_15 = t;
  t = z_15;
  t = h_4(t);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_16);
  n_7 = t;
  t = SSLsetAnnotations(n_7, y_15);
  return(t);
}
