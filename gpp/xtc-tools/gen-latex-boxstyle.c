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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  init_constant_terms();
}
ATerm term_h_24;
ATerm term_r_23;
ATerm term_f_23;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_d_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_h_16;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_s_13;
ATerm term_j_13;
ATerm term_d_13;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_e_8;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_k_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_b_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_x_9);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_d_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_t_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_c_14);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_c_14);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_h_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_c_14);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, (ATerm) ATempty);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv.sty", 0, ATtrue));
}
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm b_90 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm t_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_80 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm a_90 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm c_90 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm union_1 (ATerm, ATerm r_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm s_76 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm access_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_file_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_76 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm p_67 (ATerm), ATerm q_67 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_76 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_91 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm i_91 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm output_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm crush_2 (ATerm, ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_89 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_83 (ATerm));
ATerm Program_1 (ATerm, ATerm i_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm a_55 (ATerm), ATerm b_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_80 (ATerm));
ATerm map_1 (ATerm, ATerm s_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm o_63 (ATerm), ATerm p_63 (ATerm));
ATerm io_gen_latex_boxstyle_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_keys_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_table_keys(not_null(e_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm l_1 = NULL;
        ATerm n_1 = NULL;
        l_1 = t;
        {
          ATerm f_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_0), not_null(l_1));
          {
            t = table_get_0(t);
            {
              f_2 = t;
              if(((n_1 != NULL) && (n_1 != f_2)))
                _fail(f_2);
              else
                n_1 = f_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_1), not_null(n_1));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm e_6;
    e_6 = t;
    {
      ATerm n_2 = NULL;
      ATerm o_2 = NULL;
      t = term_j_6;
      {
        t = get_config_0(t);
        {
          o_2 = t;
          if(((n_2 != NULL) && (n_2 != o_2)))
            _fail(o_2);
          else
            n_2 = o_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), term_k_6);
        t = geq_0(t);
      }
    }
    t = e_6;
    t = b_90(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_6;
  l_6 = t;
  {
    ATerm r_2 = NULL;
    ATerm s_2 = NULL;
    s_2 = t;
    if(((r_2 != NULL) && (r_2 != s_2)))
      _fail(s_2);
    else
      r_2 = s_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(r_2));
      t = printnl_0(t);
    }
  }
  t = l_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_2 = NULL;
  ATerm a_3 = NULL,b_3 = NULL;
  y_2 = t;
  {
    ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_2)));
    {
      t = table_get_0(t);
      {
        c_3 = t;
        w_2 :
        if(((ATgetType(c_3) == AT_LIST) && !(ATisEmpty(c_3))))
          {
            d_3 = ATgetFirst((ATermList) c_3);
            g_3 = (ATerm) ATgetNext((ATermList) c_3);
            x_2 :
            if(match_cons(d_3, sym__2))
              {
                e_3 = ATgetArgument(d_3, 0);
                f_3 = ATgetArgument(d_3, 1);
                {
                  if(((a_3 != NULL) && (a_3 != e_3)))
                    _fail(e_3);
                  else
                    a_3 = e_3;
                  if(((b_3 != NULL) && (b_3 != f_3)))
                    _fail(f_3);
                  else
                    b_3 = f_3;
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
    t = not_null(b_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm s_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_3)));
        {
          t = table_get_0(t);
          {
            ATerm h_0 (ATerm t)
            {
              ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
              t_3 = t;
              l_3 :
              if(match_cons(t_3, sym__2))
                {
                  u_3 = ATgetArgument(t_3, 0);
                  v_3 = ATgetArgument(t_3, 1);
                  {
                    if(((p_3 != NULL) && (p_3 != u_3)))
                      _fail(u_3);
                    else
                      p_3 = u_3;
                    if(((s_3 != NULL) && (s_3 != v_3)))
                      _fail(v_3);
                    else
                      s_3 = v_3;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, h_0);
          }
        }
        t = not_null(s_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = filter_1(t, t_76);
              return(t);
            }
            t = Cons_2(t, t_76, n_0);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            {
              ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
              a_4 = t;
              z_3 :
              if(((ATgetType(a_4) == AT_LIST) && !(ATisEmpty(a_4))))
                {
                  b_4 = ATgetFirst((ATermList) a_4);
                  c_4 = (ATerm) ATgetNext((ATermList) a_4);
                  {
                    t = not_null(c_4);
                    t = filter_1(t, t_76);
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
ATerm repeat_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      t = n_78(t);
      t = f_4(t);
      return(t);
    }
    t = try_1(t, o_0);
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm a_7;
  a_7 = t;
  {
    ATerm p_0 (ATerm t)
    {
      t = term_c_7;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm f_7 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_7;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, p_0);
  }
  t = a_7;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm g_7;
  g_7 = t;
  {
    ATerm h_4 = NULL;
    ATerm i_4 = NULL;
    i_4 = t;
    if(((h_4 != NULL) && (h_4 != i_4)))
      _fail(i_4);
    else
      h_4 = i_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATempty, not_null(h_4)));
      t = printnl_0(t);
    }
  }
  t = g_7;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm h_7;
  h_7 = t;
  {
    t = n_80(t);
    t = debug_0(t);
  }
  t = h_7;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm l_7;
    l_7 = t;
    {
      ATerm l_4 = NULL;
      ATerm m_4 = NULL;
      t = term_j_6;
      {
        t = get_config_0(t);
        {
          m_4 = t;
          if(((l_4 != NULL) && (l_4 != m_4)))
            _fail(m_4);
          else
            l_4 = m_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_m_7);
        t = geq_0(t);
      }
    }
    t = l_7;
    t = a_90(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm n_7;
    n_7 = t;
    {
      ATerm p_4 = NULL;
      ATerm q_4 = NULL;
      t = term_j_6;
      {
        t = get_config_0(t);
        {
          q_4 = t;
          if(((p_4 != NULL) && (p_4 != q_4)))
            _fail(q_4);
          else
            p_4 = q_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_o_7);
        t = geq_0(t);
      }
    }
    t = n_7;
    t = c_90(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
    {
      d_5 = ATgetFirst((ATermList) c_5);
      e_5 = (ATerm) ATgetNext((ATermList) c_5);
      {
        t = w_72(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm h_5 = NULL;
            h_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), not_null(h_5));
              t = v_72(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(e_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym__2))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      {
        t = not_null(o_5);
        {
          ATerm t_5 (ATerm t)
          {
            ATerm p_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_5);
                ;
                LocalPopChoice(r_7);
              }
            else
              {
                t = p_7;
                {
                  ATerm v_7 = t;
                  int w_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(p_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_72, t_0);
                      t = t_5(t);
                      ;
                      LocalPopChoice(w_7);
                    }
                  else
                    {
                      t = v_7;
                      t = Cons_2(t, _id, t_5);
                    }
                }
              }
            return(t);
          }
          t = t_5(t);
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
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__3))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      b_6 = ATgetArgument(y_5, 2);
      {
        ATerm x_7;
        x_7 = t;
        {
          ATerm f_6 = NULL;
          ATerm g_6 = NULL,i_6 = NULL;
          ATerm h_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(a_6));
          {
            ATerm y_7 = t;
            int d_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(d_8);
              }
            else
              {
                t = y_7;
                t = (ATerm) ATempty;
              }
            {
              h_6 = t;
              if(((g_6 != NULL) && (g_6 != h_6)))
                _fail(h_6);
              else
                g_6 = h_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), not_null(b_6));
            {
              t = union_0(t);
              {
                i_6 = t;
                if(((f_6 != NULL) && (f_6 != i_6)))
                  _fail(i_6);
                else
                  f_6 = i_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_5), not_null(a_6), not_null(f_6));
            t = set_0(t);
          }
        }
        t = x_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym__2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        t = not_null(s_6);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
            v_6 = t;
            o_6 :
            if(match_cons(v_6, sym__2))
              {
                w_6 = ATgetArgument(v_6, 0);
                x_6 = ATgetArgument(v_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_6), not_null(w_6), not_null(x_6));
                  t = s_76(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm e_7 = NULL;
  e_7 = t;
  if(((d_7 != NULL) && (d_7 != e_7)))
    _fail(e_7);
  else
    d_7 = e_7;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), (ATerm) ATinsert(ATempty, term_e_8));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  ATerm q_7 (ATerm t)
  {
    t = SSL_fclose(not_null(k_7));
    return(t);
  }
  k_7 = t;
  i_7 :
  if(match_cons(k_7, sym_Stream_1))
    {
      j_7 = ATgetArgument(k_7, 0);
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(j_7));
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = q_7(t);
          }
      }
    }
  else
    {
      t = q_7(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_Stream_1))
    {
      u_7 = ATgetArgument(t_7, 0);
      t = SSL_read_term_from_stream(not_null(u_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym__2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      {
        ATerm f_8 = NULL;
        t = SSL_fopen(not_null(b_8), not_null(c_8));
        {
          ATerm g_8 = NULL;
          g_8 = t;
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_8));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_8 = NULL;
    l_8 = t;
    if(((k_8 != NULL) && (k_8 != l_8)))
      _fail(l_8);
    else
      k_8 = l_8;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_8));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm o_8 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm p_8 = NULL;
    p_8 = t;
    if(((o_8 != NULL) && (o_8 != p_8)))
      _fail(p_8);
    else
      o_8 = p_8;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_8));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm s_8 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm t_8 = NULL;
    t_8 = t;
    if(((s_8 != NULL) && (s_8 != t_8)))
      _fail(t_8);
    else
      s_8 = t_8;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_8));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(z_8, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(z_8, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm j_9 = NULL;
  ATerm l_9 = NULL,m_9 = NULL;
  j_9 = t;
  {
    ATerm n_9 = NULL;
    ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
    t = not_null(j_9);
    {
      n_9 = t;
      {
        t = SSL_explode_term(not_null(n_9));
        {
          p_9 = t;
          g_9 :
          if(match_cons(p_9, sym__2))
            {
              q_9 = ATgetArgument(p_9, 0);
              r_9 = ATgetArgument(p_9, 1);
              h_9 :
              if(match_string(q_9, ""))
                {
                  i_9 :
                  if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
                    {
                      s_9 = ATgetFirst((ATermList) r_9);
                      t_9 = (ATerm) ATgetNext((ATermList) r_9);
                      {
                        if(((m_9 != NULL) && (m_9 != s_9)))
                          _fail(s_9);
                        else
                          m_9 = s_9;
                        if(((l_9 != NULL) && (l_9 != t_9)))
                          _fail(t_9);
                        else
                          l_9 = t_9;
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
      }
    }
    t = not_null(m_9);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym__2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      {
        ATerm j_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = j_8;
            {
              ATerm n_8 = t;
              int q_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_0 (ATerm t)
                  {
                    ATerm e_10 = NULL,f_10 = NULL;
                    e_10 = t;
                    z_9 :
                    if(match_cons(e_10, sym_Path_1))
                      {
                        f_10 = ATgetArgument(e_10, 0);
                        t = not_null(f_10);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, v_0, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(q_8);
                }
              else
                {
                  t = n_8;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm r_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL;
      ATerm m_10 = NULL;
      m_10 = t;
      if(((l_10 != NULL) && (l_10 != m_10)))
        _fail(m_10);
      else
        l_10 = m_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_v_8);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = r_8;
      {
        ATerm x_0 (ATerm t)
        {
          t = term_w_8;
          return(t);
        }
        t = debug_1(t, x_0);
        _fail(t);
      }
    }
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm o_10 = NULL;
      t = read_from_stream_0(t);
      {
        o_10 = t;
        if(((n_10 != NULL) && (n_10 != o_10)))
          _fail(o_10);
        else
          n_10 = o_10;
      }
    }
    t = x_8;
    {
      t = fclose_0(t);
      t = not_null(n_10);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      t = SSL_access(not_null(u_10), not_null(v_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm a_11 = NULL;
  ATerm b_11 = NULL;
  b_11 = t;
  if(((a_11 != NULL) && (a_11 != b_11)))
    _fail(b_11);
  else
    a_11 = b_11;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), (ATerm) ATinsert(ATempty, term_a_9));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(c_9);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = b_9;
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_9;
              }
            {
              ATerm y_0 (ATerm t)
              {
                t = term_k_9;
                return(t);
              }
              t = debug_1(t, y_0);
            }
            ;
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm z_0 (ATerm t)
              {
                t = term_o_9;
                return(t);
              }
              t = debug_1(t, z_0);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm h_11 = NULL;
  f_11 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = term_u_9;
        return(t);
      }
      t = debug_1(t, b_1);
      return(t);
    }
    t = if_verbose5_1(t, a_1);
    {
      ATerm v_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(f_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_9;
        }
      {
        ATerm w_9;
        w_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_6, term_x_9, (ATerm) ATinsert(ATempty, not_null(f_11)));
          t = table_put_0(t);
        }
        t = w_9;
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              t = term_y_9;
              return(t);
            }
            t = debug_1(t, d_1);
            return(t);
          }
          t = if_verbose4_1(t, c_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm f_1 (ATerm t)
                {
                  t = term_g_10;
                  return(t);
                }
                t = say_1(t, f_1);
                return(t);
              }
              t = if_verbose6_1(t, e_1);
              {
                ATerm i_11 = NULL;
                i_11 = t;
                if(((h_11 != NULL) && (h_11 != i_11)))
                  _fail(i_11);
                else
                  h_11 = i_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(h_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm g_1 (ATerm t)
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = term_h_10;
                          return(t);
                        }
                        t = say_1(t, h_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, g_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_n_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(f_11)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm i_1 (ATerm t)
                            {
                              ATerm j_1 (ATerm t)
                              {
                                t = term_g_10;
                                return(t);
                              }
                              t = say_1(t, j_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, i_1);
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
  ATerm m_11 = NULL;
  m_11 = t;
  t = SSL_getenv(not_null(m_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_w_10;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose5_1(t, k_1);
  {
    ATerm x_10;
    x_10 = t;
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = x_10;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = term_d_11;
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
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_j_11;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, q_1);
      {
        t = xtc_load_0(t);
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = debug_1(t, t_1);
              return(t);
            }
            t = if_verbose5_1(t, s_1);
          }
        }
      }
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      {
        ATerm q_11 = NULL;
        ATerm r_11 = NULL;
        r_11 = t;
        if(((q_11 != NULL) && (q_11 != r_11)))
          _fail(r_11);
        else
          q_11 = r_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_11), not_null(q_11)), term_n_11);
          {
            t = error_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_n_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      t = term_p_11;
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
ATerm xtc_find_file_0 (ATerm t)
{
  ATerm u_11 = NULL;
  ATerm v_11 = NULL;
  t = xtc_find_0(t);
  {
    v_11 = t;
    if(((u_11 != NULL) && (u_11 != v_11)))
      _fail(v_11);
    else
      u_11 = v_11;
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_11));
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym__2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      t = SSL_copy(not_null(a_12), not_null(b_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_stderr_0))
    {
      ATerm l_12 = NULL,n_12 = NULL;
      ATerm s_11;
      s_11 = t;
      {
        ATerm m_12 = NULL;
        t = SSLgetAnnotations(not_null(j_12));
        {
          m_12 = t;
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
        }
      }
      t = s_11;
      {
        ATerm o_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_12));
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
        t = not_null(n_12);
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
  ATerm w_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_stdout_0))
    {
      ATerm y_12 = NULL,a_13 = NULL;
      ATerm t_11;
      t_11 = t;
      {
        ATerm z_12 = NULL;
        t = SSLgetAnnotations(not_null(w_12));
        {
          z_12 = t;
          if(((y_12 != NULL) && (y_12 != z_12)))
            _fail(z_12);
          else
            y_12 = z_12;
        }
      }
      t = t_11;
      {
        ATerm b_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(y_12));
        {
          b_13 = t;
          if(((a_13 != NULL) && (a_13 != b_13)))
            _fail(b_13);
          else
            a_13 = b_13;
        }
        t = not_null(a_13);
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
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_FILE_1))
    {
      o_13 = ATgetArgument(n_13, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = NULL;
            ATerm r_13 = NULL;
            t = m_0(t);
            {
              r_13 = t;
              {
                if(((q_13 != NULL) && (q_13 != r_13)))
                  _fail(r_13);
                else
                  q_13 = r_13;
                {
                  ATerm c_12 = t;
                  int d_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(d_12);
                    }
                  else
                    {
                      t = c_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(q_13));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_13));
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_13 = NULL;
                  ATerm u_13 = NULL;
                  t = m_0(t);
                  {
                    u_13 = t;
                    {
                      if(((t_13 != NULL) && (t_13 != u_13)))
                        _fail(u_13);
                      else
                        t_13 = u_13;
                      {
                        ATerm g_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_12 = t;
                            int k_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(k_12);
                              }
                            else
                              {
                                t = h_12;
                                {
                                  ATerm p_12 = t;
                                  int q_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(q_12);
                                    }
                                  else
                                    {
                                      t = p_12;
                                      {
                                        ATerm v_13 = NULL;
                                        v_13 = t;
                                        if(((o_13 != NULL) && (o_13 != v_13)))
                                          _fail(v_13);
                                        else
                                          o_13 = v_13;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = g_12;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(t_13));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_13));
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                  {
                    ATerm x_13 = NULL;
                    t = m_0(t);
                    {
                      x_13 = t;
                      if(((o_13 != NULL) && (o_13 != x_13)))
                        _fail(x_13);
                      else
                        o_13 = x_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_13));
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
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
    {
      i_14 = ATgetFirst((ATermList) h_14);
      j_14 = (ATerm) ATgetNext((ATermList) h_14);
      t = not_null(j_14);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym__2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      {
        ATerm r_12;
        r_12 = t;
        {
          ATerm u_14 = NULL;
          ATerm v_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(r_14));
          {
            ATerm s_12 = t;
            int t_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(t_12);
              }
            else
              {
                t = s_12;
                t = (ATerm) ATempty;
              }
            {
              v_14 = t;
              if(((u_14 != NULL) && (u_14 != v_14)))
                _fail(v_14);
              else
                u_14 = v_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_14), not_null(r_14), not_null(u_14));
            t = table_put_0(t);
          }
        }
        t = r_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  ATerm u_12;
  u_12 = t;
  {
    ATerm f_15 = NULL;
    ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
    t = m_76(t);
    {
      f_15 = t;
      {
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
        {
          ATerm x_12 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_d_13);
              t = table_get_0(t);
              ;
              LocalPopChoice(c_13);
            }
          else
            {
              t = x_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_15 = t;
            b_15 :
            if(((ATgetType(g_15) == AT_LIST) && !(ATisEmpty(g_15))))
              {
                h_15 = ATgetFirst((ATermList) g_15);
                i_15 = (ATerm) ATgetNext((ATermList) g_15);
                {
                  if(((d_15 != NULL) && (d_15 != h_15)))
                    _fail(h_15);
                  else
                    d_15 = h_15;
                  {
                    if(((c_15 != NULL) && (c_15 != i_15)))
                      _fail(i_15);
                    else
                      c_15 = i_15;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_15), term_d_13, not_null(c_15));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_15);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm j_15 = NULL;
                              j_15 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(j_15));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_1);
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
  t = u_12;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_remove(not_null(p_15));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm p_67 (ATerm), ATerm q_67 (ATerm))
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_67(t);
      t = q_67(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      {
        t = q_67(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm u_15 = NULL;
  ATerm g_13;
  g_13 = t;
  {
    ATerm v_15 = NULL;
    ATerm w_15 = NULL;
    t = l_76(t);
    {
      v_15 = t;
      {
        if(((u_15 != NULL) && (u_15 != v_15)))
          _fail(v_15);
        else
          u_15 = v_15;
        {
          ATerm x_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), term_d_13);
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                t = (ATerm) ATempty;
              }
            {
              x_15 = t;
              if(((w_15 != NULL) && (w_15 != x_15)))
                _fail(x_15);
              else
                w_15 = x_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_15), term_d_13, (ATerm) ATinsert(CheckATermList(not_null(w_15)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_j_13;
    return(t);
  }
  t = begin_scope_1(t, x_1);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm k_13;
      k_13 = t;
      {
        ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
        ATerm l_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_13;
            t = table_get_0(t);
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = l_13;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          e_16 = t;
          b_16 :
          if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
            {
              f_16 = ATgetFirst((ATermList) e_16);
              g_16 = (ATerm) ATgetNext((ATermList) e_16);
              {
                if(((d_16 != NULL) && (d_16 != f_16)))
                  _fail(f_16);
                else
                  d_16 = f_16;
                {
                  if(((c_16 != NULL) && (c_16 != g_16)))
                    _fail(g_16);
                  else
                    c_16 = g_16;
                  {
                    t = not_null(d_16);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, z_1);
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
      t = k_13;
      {
        ATerm a_2 (ATerm t)
        {
          t = term_j_13;
          return(t);
        }
        t = end_scope_1(t, a_2);
      }
      return(t);
    }
    t = restore_always_2(t, g_91, y_1);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    t = i_91(t);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm w_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_13;
            t = get_config_0(t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = w_13;
            t = term_a_14;
          }
        return(t);
      }
      t = copy_to_1(t, c_2);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, b_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm j_16 = NULL;
    j_16 = t;
    i_16 :
    if(!(match_string(j_16, "-v")))
      {
        if(!(match_string(j_16, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_d_14;
    t = set_config_0(t);
    t = term_e_14;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_f_14;
    return(t);
  }
  t = Option_3(t, d_2, e_2, g_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm m_16 = NULL;
    m_16 = t;
    k_16 :
    if(!(match_string(m_16, "-k")))
      {
        if(!(match_string(m_16, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm n_16 = NULL;
      ATerm o_16 = NULL;
      t = string_to_int_0(t);
      {
        o_16 = t;
        if(((n_16 != NULL) && (n_16 != o_16)))
          _fail(o_16);
        else
          n_16 = o_16;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_14, not_null(n_16));
        t = set_config_0(t);
      }
    }
    t = k_14;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_m_14;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  t = SSL_string_to_int(not_null(r_16));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm z_16 = NULL;
        z_16 = t;
        u_16 :
        if(!(match_string(z_16, "-S")))
          {
            if(!(match_string(z_16, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_w_14;
        t = set_config_0(t);
        t = term_x_14;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_y_14;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = n_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              ATerm a_17 = NULL;
              a_17 = t;
              v_16 :
              if(!(match_string(a_17, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm d_17 = NULL;
              ATerm k_15;
              k_15 = t;
              {
                ATerm b_17 = NULL;
                ATerm c_17 = NULL;
                t = string_to_int_0(t);
                {
                  c_17 = t;
                  if(((b_17 != NULL) && (b_17 != c_17)))
                    _fail(c_17);
                  else
                    b_17 = c_17;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(b_17));
                  t = set_config_0(t);
                }
              }
              t = k_15;
              {
                ATerm e_17 = NULL;
                e_17 = t;
                if(((d_17 != NULL) && (d_17 != e_17)))
                  _fail(e_17);
                else
                  d_17 = e_17;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_17));
              }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_l_15;
              return(t);
            }
            t = ArgOption_3(t, p_2, q_2, t_2);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm f_17 = NULL;
                f_17 = t;
                y_16 :
                if(!(match_string(f_17, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_n_15;
                t = set_config_0(t);
                t = term_o_15;
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_q_15;
                return(t);
              }
              t = Option_3(t, u_2, v_2, z_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm t_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = t_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  n_17 = t;
  l_17 :
  if(match_string(n_17, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_17) == AT_LIST) && !(ATisEmpty(n_17))))
        {
          o_17 = ATgetFirst((ATermList) n_17);
          p_17 = (ATerm) ATgetNext((ATermList) n_17);
          m_17 :
          if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
            {
              q_17 = ATgetFirst((ATermList) p_17);
              r_17 = (ATerm) ATgetNext((ATermList) p_17);
              {
                ATerm v_17 = NULL;
                ATerm z_15;
                z_15 = t;
                {
                  t = not_null(o_17);
                  t = j_0(t);
                }
                t = z_15;
                {
                  ATerm w_17 = NULL;
                  t = not_null(q_17);
                  {
                    t = k_0(t);
                    {
                      w_17 = t;
                      if(((v_17 != NULL) && (v_17 != w_17)))
                        _fail(w_17);
                      else
                        v_17 = w_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_17)), not_null(v_17));
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
ATerm output_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm d_18 = NULL;
    d_18 = t;
    a_18 :
    if(!(match_string(d_18, "-o")))
      {
        if(!(match_string(d_18, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm g_18 = NULL;
    ATerm a_16;
    a_16 = t;
    {
      ATerm e_18 = NULL;
      ATerm f_18 = NULL;
      f_18 = t;
      if(((e_18 != NULL) && (e_18 != f_18)))
        _fail(f_18);
      else
        e_18 = f_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_13, not_null(e_18));
        t = set_config_0(t);
      }
    }
    t = a_16;
    {
      ATerm h_18 = NULL;
      h_18 = t;
      if(((g_18 != NULL) && (g_18 != h_18)))
        _fail(h_18);
      else
        g_18 = h_18;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_18));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_h_16;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = l_16;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_18 = NULL;
          l_18 = t;
          k_18 :
          if(!(match_string(l_18, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_s_16;
          t = set_config_0(t);
          t = term_t_16;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_w_16;
          return(t);
        }
        t = Option_3(t, k_3, q_3, r_3);
      }
    }
  return(t);
}
ATerm output_options_0 (ATerm t)
{
  ATerm x_16 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = x_16;
      t = general_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm h_17;
  h_17 = t;
  {
    ATerm n_18 = NULL;
    ATerm o_18 = NULL;
    t = term_c_14;
    {
      t = whoami_0(t);
      {
        o_18 = t;
        if(((n_18 != NULL) && (n_18 != o_18)))
          _fail(o_18);
        else
          n_18 = o_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_17), not_null(n_18)), term_i_17));
      {
        t = printnl_0(t);
        {
          t = term_k_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm r_18 = NULL;
  t = report_run_time_0(t);
  {
    ATerm s_18 = NULL;
    t = term_c_14;
    {
      t = whoami_0(t);
      {
        s_18 = t;
        if(((r_18 != NULL) && (r_18 != s_18)))
          _fail(s_18);
        else
          r_18 = s_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, term_s_17), not_null(r_18)));
      {
        t = printnl_0(t);
        {
          t = term_k_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_t_17;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  t = SSL_TicksToSeconds(not_null(v_18));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym__2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm u_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_19), not_null(c_19));
            ;
            LocalPopChoice(x_17);
          }
        else
          {
            t = u_17;
            t = SSL_addr(not_null(b_19), not_null(c_19));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_75(t);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
        j_19 = t;
        i_19 :
        if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
          {
            k_19 = ATgetFirst((ATermList) j_19);
            l_19 = (ATerm) ATgetNext((ATermList) j_19);
            {
              ATerm o_19 = NULL;
              ATerm p_19 = NULL;
              t = not_null(l_19);
              {
                t = foldr_2(t, e_75, f_75);
                {
                  p_19 = t;
                  if(((o_19 != NULL) && (o_19 != p_19)))
                    _fail(p_19);
                  else
                    o_19 = p_19;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(o_19));
                t = f_75(t);
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
ATerm crush_2 (ATerm t, ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  ATerm x_19 = NULL;
  ATerm z_19 = NULL;
  x_19 = t;
  {
    ATerm a_20 = NULL;
    ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
    t = not_null(x_19);
    {
      a_20 = t;
      {
        t = SSL_explode_term(not_null(a_20));
        {
          c_20 = t;
          w_19 :
          if(match_cons(c_20, sym__2))
            {
              d_20 = ATgetArgument(c_20, 0);
              e_20 = ATgetArgument(c_20, 1);
              if(((z_19 != NULL) && (z_19 != e_20)))
                _fail(e_20);
              else
                z_19 = e_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_19);
      t = foldr_2(t, c_73, d_73);
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
    ATerm w_3 (ATerm t)
    {
      t = term_t_14;
      return(t);
    }
    t = crush_2(t, w_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        ATerm b_18;
        b_18 = t;
        {
          ATerm c_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_20), not_null(m_20));
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = c_18;
              t = SSL_gtr(not_null(l_20), not_null(m_20));
            }
        }
        t = b_18;
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
  ATerm u_20 = NULL;
  ATerm j_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
      v_20 = t;
      r_20 :
      if(match_cons(v_20, sym__2))
        {
          w_20 = ATgetArgument(v_20, 0);
          x_20 = ATgetArgument(v_20, 1);
          {
            if(((u_20 != NULL) && (u_20 != w_20)))
              _fail(w_20);
            else
              u_20 = w_20;
            if(((u_20 != NULL) && (u_20 != x_20)))
              _fail(x_20);
            else
              u_20 = x_20;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = j_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm p_18;
    p_18 = t;
    {
      ATerm e_21 = NULL;
      ATerm f_21 = NULL;
      t = term_j_6;
      {
        t = get_config_0(t);
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), term_k_17);
        t = geq_0(t);
      }
    }
    t = p_18;
    t = x_89(t);
    return(t);
  }
  t = try_1(t, x_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm k_21 = NULL,m_21 = NULL;
    ATerm q_18;
    q_18 = t;
    {
      ATerm l_21 = NULL;
      t = run_time_0(t);
      {
        l_21 = t;
        if(((k_21 != NULL) && (k_21 != l_21)))
          _fail(l_21);
        else
          k_21 = l_21;
      }
    }
    t = q_18;
    {
      ATerm n_21 = NULL;
      t = term_c_14;
      {
        t = whoami_0(t);
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), not_null(k_21)), term_t_18), not_null(m_21)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_t_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_Version_0))
    {
      ATerm y_21 = NULL,a_22 = NULL;
      ATerm w_18;
      w_18 = t;
      {
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(u_21));
        {
          z_21 = t;
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
        }
      }
      t = w_18;
      {
        ATerm b_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_21));
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
        t = not_null(a_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_19;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                ATerm g_19 = t;
                int h_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_19);
                  }
                else
                  {
                    t = g_19;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, d_4);
      }
    }
  t = i_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = SSL_table_create(not_null(g_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  {
    ATerm m_19;
    m_19 = t;
    {
      t = term_n_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_19, term_q_19, not_null(k_22));
          t = table_put_0(t);
        }
      }
    }
    t = m_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = SSL_table_destroy(not_null(o_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  t = SSL_exit(not_null(x_22));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(((ATgetType(b_23) == AT_LIST) && ATisEmpty(b_23)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
        {
          c_23 = ATgetFirst((ATermList) b_23);
          d_23 = (ATerm) ATgetNext((ATermList) b_23);
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
  ATerm r_19;
  r_19 = t;
  {
    ATerm g_23 = NULL;
    ATerm j_23 = NULL;
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        {
          ATerm h_23 = NULL;
          ATerm i_23 = NULL;
          i_23 = t;
          if(((h_23 != NULL) && (h_23 != i_23)))
            _fail(i_23);
          else
            h_23 = i_23;
          t = (ATerm) ATinsert(ATempty, not_null(h_23));
        }
      }
    {
      j_23 = t;
      if(((g_23 != NULL) && (g_23 != j_23)))
        _fail(j_23);
      else
        g_23 = j_23;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(g_23));
      t = printnl_0(t);
    }
  }
  t = r_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  y_23 = t;
  v_23 :
  if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
    {
      w_23 = ATgetFirst((ATermList) y_23);
      x_23 = (ATerm) ATgetNext((ATermList) y_23);
      {
        ATerm b_24 = NULL;
        t = not_null(x_23);
        {
          ATerm u_19;
          u_19 = t;
          {
            ATerm c_24 = NULL,e_24 = NULL,g_24 = NULL;
            ATerm v_19;
            v_19 = t;
            {
              ATerm d_24 = NULL;
              t = i_0(t);
              {
                d_24 = t;
                if(((c_24 != NULL) && (c_24 != d_24)))
                  _fail(d_24);
                else
                  c_24 = d_24;
              }
            }
            t = v_19;
            {
              ATerm f_24 = NULL;
              t = not_null(w_23);
              {
                t = g_0(t);
                {
                  f_24 = t;
                  if(((e_24 != NULL) && (e_24 != f_24)))
                    _fail(f_24);
                  else
                    e_24 = f_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_24)), not_null(e_24));
                {
                  g_24 = t;
                  if(((b_24 != NULL) && (b_24 != g_24)))
                    _fail(g_24);
                  else
                    b_24 = g_24;
                }
              }
            }
          }
          t = u_19;
          {
            ATerm e_4 (ATerm t)
            {
              t = not_null(b_24);
              return(t);
            }
            t = reverse_acc_2(t, g_0, e_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_23) == AT_LIST) && ATisEmpty(y_23)))
        {
          {
            t = term_c_14;
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
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Program_1))
    {
      s_24 = ATgetArgument(r_24, 0);
      {
        ATerm v_24 = NULL,x_24 = NULL;
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(r_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
        {
          t = not_null(s_24);
          {
            ATerm z_24 = NULL;
            t = i_61(t);
            {
              x_24 = t;
              {
                ATerm a_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_24)), not_null(v_24));
                {
                  a_25 = t;
                  if(((z_24 != NULL) && (z_24 != a_25)))
                    _fail(a_25);
                  else
                    z_24 = a_25;
                }
                t = not_null(z_24);
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
  ATerm j_25 = NULL;
  ATerm y_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL;
      t = term_t_17;
      {
        t = get_config_0(t);
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = y_19;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            ATerm l_25 = NULL;
            l_25 = t;
            if(((j_25 != NULL) && (j_25 != l_25)))
              _fail(l_25);
            else
              j_25 = l_25;
            return(t);
          }
          t = Program_1(t, k_4);
          return(t);
        }
        t = option_defined_1(t, j_4);
      }
    }
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        t = not_null(j_25);
        return(t);
      }
      t = short_description_1(t, o_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, n_4);
    {
      t = term_f_20;
      {
        t = echo_0(t);
        {
          t = term_i_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_4 (ATerm t)
                {
                  ATerm m_25 = NULL;
                  ATerm n_25 = NULL;
                  n_25 = t;
                  if(((m_25 != NULL) && (m_25 != n_25)))
                    _fail(n_25);
                  else
                    m_25 = n_25;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_25)), term_n_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_4);
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm o_25 = NULL;
                    ATerm p_25 = NULL;
                    ATerm x_4 (ATerm t)
                    {
                      t = not_null(j_25);
                      return(t);
                    }
                    t = long_description_1(t, x_4);
                    {
                      p_25 = t;
                      if(((o_25 != NULL) && (o_25 != p_25)))
                        _fail(p_25);
                      else
                        o_25 = p_25;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_25)), term_o_20);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_4);
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
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      {
        ATerm p_20;
        p_20 = t;
        t = SSL_printnl(not_null(x_25), not_null(y_25));
        t = p_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Undefined_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm l_26 = NULL,n_26 = NULL;
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(h_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
        {
          t = not_null(i_26);
          {
            ATerm p_26 = NULL;
            t = j_61(t);
            {
              n_26 = t;
              {
                ATerm q_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_26)), not_null(l_26));
                {
                  q_26 = t;
                  if(((p_26 != NULL) && (p_26 != q_26)))
                    _fail(q_26);
                  else
                    p_26 = q_26;
                }
                t = not_null(p_26);
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
ATerm fetch_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm q_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_69, _id);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = q_20;
        t = Cons_2(t, _id, v_26);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_82 (ATerm))
{
  t = fetch_1(t, b_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_Help_0))
    {
      ATerm c_27 = NULL,e_27 = NULL;
      ATerm t_20;
      t_20 = t;
      {
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(a_27));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
      }
      t = t_20;
      {
        ATerm f_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
        t = not_null(e_27);
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
  ATerm k_27 = NULL;
  k_27 = t;
  t = SSL_implode_string(not_null(k_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
        p_27 = t;
        o_27 :
        if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
          {
            q_27 = ATgetFirst((ATermList) p_27);
            r_27 = (ATerm) ATgetNext((ATermList) p_27);
            {
              t = not_null(q_27);
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(r_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_4);
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
  ATerm h_28 = NULL;
  ATerm j_28 = NULL;
  h_28 = t;
  {
    ATerm k_28 = NULL;
    ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
    t = not_null(h_28);
    {
      k_28 = t;
      {
        t = SSL_explode_term(not_null(k_28));
        {
          m_28 = t;
          f_28 :
          if(match_cons(m_28, sym__2))
            {
              n_28 = ATgetArgument(m_28, 0);
              o_28 = ATgetArgument(m_28, 1);
              g_28 :
              if(match_string(n_28, ""))
                {
                  if(((j_28 != NULL) && (j_28 != o_28)))
                    _fail(o_28);
                  else
                    j_28 = o_28;
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
      t = not_null(j_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm s_28 (ATerm t)
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_28);
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          t = Nil_0(t);
          t = h_69(t);
        }
      }
    return(t);
  }
  t = s_28(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        t = not_null(w_28);
        {
          ATerm z_4 (ATerm t)
          {
            t = not_null(x_28);
            return(t);
          }
          t = at_end_1(t, z_4);
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
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = SSL_explode_string(not_null(c_29));
  return(t);
}
ATerm _2 (ATerm t, ATerm a_55 (ATerm), ATerm b_55 (ATerm))
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym__2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        ATerm t_29 = NULL,v_29 = NULL;
        ATerm u_29 = NULL;
        t = SSLgetAnnotations(not_null(n_29));
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
        {
          t = not_null(o_29);
          {
            ATerm x_29 = NULL;
            t = a_55(t);
            {
              v_29 = t;
              {
                t = not_null(p_29);
                {
                  ATerm z_29 = NULL;
                  t = b_55(t);
                  {
                    x_29 = t;
                    {
                      ATerm a_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_29), not_null(x_29)), not_null(t_29));
                      {
                        a_30 = t;
                        if(((z_29 != NULL) && (z_29 != a_30)))
                          _fail(a_30);
                        else
                          z_29 = a_30;
                      }
                      t = not_null(z_29);
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
ATerm debug_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm g_21;
  g_21 = t;
  {
    ATerm i_30 = NULL,k_30 = NULL;
    ATerm h_21;
    h_21 = t;
    {
      ATerm j_30 = NULL;
      t = j_80(t);
      {
        j_30 = t;
        if(((i_30 != NULL) && (i_30 != j_30)))
          _fail(j_30);
        else
          i_30 = j_30;
      }
    }
    t = h_21;
    {
      ATerm l_30 = NULL;
      l_30 = t;
      if(((k_30 != NULL) && (k_30 != l_30)))
        _fail(l_30);
      else
        k_30 = l_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_30)), not_null(i_30)));
        t = printnl_0(t);
      }
    }
  }
  t = g_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm o_30 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = Cons_2(t, s_68, o_30);
      }
    return(t);
  }
  t = o_30(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_is_string(not_null(q_30));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_5);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            {
              ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
              z_30 = t;
              y_30 :
              if(match_cons(z_30, sym_Path_1))
                {
                  a_31 = ATgetArgument(z_30, 0);
                  t = not_null(a_31);
                }
              else
                {
                  if(match_cons(z_30, sym_Var_1))
                    {
                      a_31 = ATgetArgument(z_30, 0);
                      {
                        t = not_null(a_31);
                        {
                          ATerm s_21 = t;
                          int v_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(v_21);
                            }
                          else
                            {
                              t = s_21;
                              {
                                ATerm f_5 (ATerm t)
                                {
                                  t = term_w_21;
                                  return(t);
                                }
                                t = debug_1(t, f_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_30, sym_Prefix_2))
                        {
                          a_31 = ATgetArgument(z_30, 0);
                          b_31 = ATgetArgument(z_30, 1);
                          {
                            ATerm h_31 = NULL,l_31 = NULL;
                            ATerm x_21;
                            x_21 = t;
                            {
                              ATerm k_31 = NULL;
                              t = not_null(a_31);
                              {
                                t = eval_config_0(t);
                                {
                                  k_31 = t;
                                  if(((h_31 != NULL) && (h_31 != k_31)))
                                    _fail(k_31);
                                  else
                                    h_31 = k_31;
                                }
                              }
                            }
                            t = x_21;
                            {
                              ATerm m_31 = NULL;
                              t = not_null(b_31);
                              {
                                t = eval_config_0(t);
                                {
                                  m_31 = t;
                                  if(((l_31 != NULL) && (l_31 != m_31)))
                                    _fail(m_31);
                                  else
                                    l_31 = m_31;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), not_null(l_31));
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
  ATerm u_31 = NULL;
  u_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(u_31));
    {
      t = table_get_0(t);
      {
        ATerm g_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_22;
            d_22 = t;
            {
              ATerm w_31 = NULL;
              ATerm x_31 = NULL;
              x_31 = t;
              if(((w_31 != NULL) && (w_31 != x_31)))
                _fail(x_31);
              else
                w_31 = x_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(u_31), not_null(w_31));
                t = table_put_0(t);
              }
            }
            t = d_22;
          }
          return(t);
        }
        t = try_1(t, g_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_67(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym__2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      t = SSL_table_get(not_null(d_32), not_null(e_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym__3))
    {
      u_32 = ATgetArgument(n_32, 0);
      v_32 = ATgetArgument(n_32, 1);
      w_32 = ATgetArgument(n_32, 2);
      {
        ATerm h_22;
        h_22 = t;
        {
          ATerm a_33 = NULL;
          ATerm b_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_32), not_null(v_32));
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = (ATerm) ATempty;
              }
            {
              b_33 = t;
              if(((a_33 != NULL) && (a_33 != b_33)))
                _fail(b_33);
              else
                a_33 = b_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_32), not_null(v_32), (ATerm) ATinsert(CheckATermList(not_null(a_33)), not_null(w_32)));
            t = table_put_0(t);
          }
        }
        t = h_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm k_33 = NULL;
  ATerm l_33 = NULL;
  t = term_c_14;
  {
    t = g_83(t);
    {
      l_33 = t;
      if(((k_33 != NULL) && (k_33 != l_33)))
        _fail(l_33);
      else
        k_33 = l_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, not_null(k_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_string(r_33, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
        {
          s_33 = ATgetFirst((ATermList) r_33);
          t_33 = (ATerm) ATgetNext((ATermList) r_33);
          {
            ATerm w_33 = NULL;
            ATerm l_22;
            l_22 = t;
            {
              t = not_null(s_33);
              t = a_0(t);
            }
            t = l_22;
            {
              ATerm x_33 = NULL;
              t = term_c_14;
              {
                t = b_0(t);
                {
                  x_33 = t;
                  if(((w_33 != NULL) && (w_33 != x_33)))
                    _fail(x_33);
                  else
                    w_33 = x_33;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_33)), not_null(w_33));
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
  ATerm i_5 (ATerm t)
  {
    ATerm l_34 = NULL;
    l_34 = t;
    g_34 :
    if(!(match_string(l_34, "--help")))
      {
        if(!(match_string(l_34, "-h")))
          {
            if(!(match_string(l_34, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_m_22;
    {
      t = set_config_0(t);
      t = term_n_22;
    }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_p_22;
    return(t);
  }
  t = Option_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_34 = NULL,x_34 = NULL,y_34 = NULL;
  v_34 = t;
  u_34 :
  if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
    {
      x_34 = ATgetFirst((ATermList) v_34);
      y_34 = (ATerm) ATgetNext((ATermList) v_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_34)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
    {
      j_35 = ATgetFirst((ATermList) i_35);
      k_35 = (ATerm) ATgetNext((ATermList) i_35);
      {
        ATerm o_35 = NULL,q_35 = NULL;
        ATerm p_35 = NULL;
        t = SSLgetAnnotations(not_null(i_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
        }
        {
          t = not_null(j_35);
          {
            ATerm s_35 = NULL;
            t = j_56(t);
            {
              q_35 = t;
              {
                t = not_null(k_35);
                {
                  ATerm u_35 = NULL;
                  t = k_56(t);
                  {
                    s_35 = t;
                    {
                      ATerm v_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_35)), not_null(q_35)), not_null(o_35));
                      {
                        v_35 = t;
                        if(((u_35 != NULL) && (u_35 != v_35)))
                          _fail(v_35);
                        else
                          u_35 = v_35;
                      }
                      t = not_null(u_35);
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
  ATerm f_36 = NULL;
  f_36 = t;
  e_36 :
  if(((ATgetType(f_36) == AT_LIST) && ATisEmpty(f_36)))
    {
      {
        ATerm h_36 = NULL,j_36 = NULL;
        ATerm q_22;
        q_22 = t;
        {
          ATerm i_36 = NULL;
          t = SSLgetAnnotations(not_null(f_36));
          {
            i_36 = t;
            if(((h_36 != NULL) && (h_36 != i_36)))
              _fail(i_36);
            else
              h_36 = i_36;
          }
        }
        t = q_22;
        {
          ATerm k_36 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_36));
          {
            k_36 = t;
            if(((j_36 != NULL) && (j_36 != k_36)))
              _fail(k_36);
            else
              j_36 = k_36;
          }
          t = not_null(j_36);
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
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym__2))
    {
      r_36 = ATgetArgument(q_36, 0);
      s_36 = ATgetArgument(q_36, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(r_36), not_null(s_36));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm r_22;
  r_22 = t;
  {
    ATerm l_5 (ATerm t)
    {
      t = term_s_22;
      t = e_83(t);
      return(t);
    }
    t = try_1(t, l_5);
  }
  t = r_22;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm a_37 = NULL;
      ATerm t_22;
      t_22 = t;
      {
        ATerm y_36 = NULL;
        ATerm z_36 = NULL;
        z_36 = t;
        if(((y_36 != NULL) && (y_36 != z_36)))
          _fail(z_36);
        else
          y_36 = z_36;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_17, not_null(y_36));
          t = set_config_0(t);
        }
      }
      t = t_22;
      {
        ATerm b_37 = NULL;
        b_37 = t;
        if(((a_37 != NULL) && (a_37 != b_37)))
          _fail(b_37);
        else
          a_37 = b_37;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_37));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(y_22);
            }
          else
            {
              t = w_22;
              {
                t = e_83(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  ATerm z_22;
  z_22 = t;
  {
    ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
    k_37 = t;
    g_37 :
    if(match_cons(k_37, sym__3))
      {
        l_37 = ATgetArgument(k_37, 0);
        m_37 = ATgetArgument(k_37, 1);
        n_37 = ATgetArgument(k_37, 2);
        {
          if(((h_37 != NULL) && (h_37 != l_37)))
            _fail(l_37);
          else
            h_37 = l_37;
          {
            if(((i_37 != NULL) && (i_37 != m_37)))
              _fail(m_37);
            else
              i_37 = m_37;
            {
              if(((j_37 != NULL) && (j_37 != n_37)))
                _fail(n_37);
              else
                j_37 = n_37;
              t = SSL_table_put(not_null(h_37), not_null(i_37), not_null(j_37));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm q_37 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    t = term_f_23;
    t = table_put_0(t);
  }
  t = e_23;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_83(t);
          ;
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm u_5 (ATerm t)
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23;
            o_23 = t;
            {
              ATerm p_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_19;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(q_23);
                }
              else
                {
                  t = p_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_23;
            {
              t = system_usage_0(t);
              {
                t = term_t_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm r_37 = NULL;
                  r_37 = t;
                  if(((q_37 != NULL) && (q_37 != r_37)))
                    _fail(r_37);
                  else
                    q_37 = r_37;
                  return(t);
                }
                t = Undefined_1(t, w_5);
                return(t);
              }
              t = option_defined_1(t, v_5);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), term_r_23));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_17;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_5);
      {
        ATerm s_23;
        s_23 = t;
        {
          t = term_g_20;
          t = table_destroy_0(t);
        }
        t = s_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm))
{
  t = parse_options_1(t, k_63);
  {
    t = store_options_0(t);
    {
      t = m_63(t);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_63);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_63(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm o_63 (ATerm), ATerm p_63 (ATerm))
{
  t = option_wrap_4(t, o_63, default_usage_0, _id, p_63);
  return(t);
}
ATerm io_gen_latex_boxstyle_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      t = term_h_24;
      t = xtc_find_file_0(t);
      return(t);
    }
    t = xtc_output_1(t, d_6);
    return(t);
  }
  t = option_wrap_2(t, output_options_0, c_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_gen_latex_boxstyle_0(t);
  return(t);
}
