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
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
  init_constant_terms();
}
ATerm term_q_26;
ATerm term_t_25;
ATerm term_d_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_w_23;
ATerm term_m_23;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_l_15;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_f_8;
ATerm term_c_7;
ATerm term_u_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_k_5;
void init_constant_terms (void)
{
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__2, term_i_6, term_m_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_i_6, term_k_8);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-sdf", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_w_10);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_m_11);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_k_5, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_m_11);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_m_11);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_m_11);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__3, term_n_21, term_p_21, (ATerm) ATempty);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm a_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm i_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm h_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm j_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm union_1 (ATerm, ATerm f_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm s_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm e_74 (ATerm));
ATerm assert_1 (ATerm, ATerm a_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm o_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm xtc_parse_sdf_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm pre_process_sdf_0 (ATerm);
ATerm get_input_type_0 (ATerm);
ATerm ppgen_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm x_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm w_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm u_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm v_73 (ATerm));
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
ATerm ppgen_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm crush_2 (ATerm, ATerm u_69 (ATerm), ATerm v_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_80 (ATerm));
ATerm Program_1 (ATerm, ATerm q_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm v_50 (ATerm), ATerm w_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_75 (ATerm));
ATerm map_1 (ATerm, ATerm i_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm io_ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_int_to_string(not_null(e_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,y_1 = NULL;
  i_1 = t;
  e_1 :
  if(match_cons(i_1, sym__2))
    {
      j_1 = ATgetArgument(i_1, 0);
      y_1 = ATgetArgument(i_1, 1);
      {
        ATerm e_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_1), not_null(y_1));
            LocalPopChoice(g_5);
          }
        else
          {
            t = e_5;
            t = SSL_subtr(not_null(j_1), not_null(y_1));
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
  ATerm z_2 = NULL;
  ATerm a_3 = NULL,d_3 = NULL;
  ATerm c_3 = NULL;
  t = term_k_5;
  {
    ATerm m_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(s_5);
      }
    else
      {
        t = m_5;
        t = term_t_5;
      }
    {
      c_3 = t;
      if(((a_3 != NULL) && (a_3 != c_3)))
        _fail(c_3);
      else
        a_3 = c_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_t_5);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          d_3 = t;
          if(((z_2 != NULL) && (z_2 != d_3)))
            _fail(d_3);
          else
            z_2 = d_3;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_2)), term_k_5);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  k_3 :
  if(match_cons(l_3, sym_stdin_0))
    {
      ATerm n_3 = NULL;
      ATerm o_3 = NULL;
      t = term_u_5;
      {
        t = ReadFromFile_0(t);
        {
          o_3 = t;
          if(((n_3 != NULL) && (n_3 != o_3)))
            _fail(o_3);
          else
            n_3 = o_3;
        }
      }
      t = not_null(n_3);
    }
  else
    {
      if(match_cons(l_3, sym_FILE_1))
        {
          m_3 = ATgetArgument(l_3, 0);
          {
            ATerm q_3 = NULL;
            ATerm r_3 = NULL;
            t = not_null(m_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  r_3 = t;
                  if(((q_3 != NULL) && (q_3 != r_3)))
                    _fail(r_3);
                  else
                    q_3 = r_3;
                }
              }
            }
            t = not_null(q_3);
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
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      t = SSL_WriteToBinaryFile(not_null(z_3), not_null(a_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm i_4 = NULL;
  g_4 = t;
  {
    ATerm j_4 = NULL;
    t = xtc_new_file_0(t);
    {
      j_4 = t;
      {
        if(((i_4 != NULL) && (i_4 != j_4)))
          _fail(j_4);
        else
          i_4 = j_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(g_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(i_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, n_74, o_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  t = SSL_close_file(not_null(n_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  r_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      t = SSL_execvp(not_null(t_4), not_null(u_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = SSL_waitpid(not_null(z_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm j_5 = NULL;
  ATerm l_5 = NULL;
  j_5 = t;
  {
    t = fork_0(t);
    {
      l_5 = t;
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 = NULL;
            n_5 = t;
            f_5 :
            if(match_int(n_5, 0))
              {
                t = not_null(j_5);
                t = a_59(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
              t = not_null(l_5);
              {
                t = waitpid_0(t);
                {
                  o_5 = t;
                  h_5 :
                  if(match_cons(o_5, sym_WaitStatus_3))
                    {
                      p_5 = ATgetArgument(o_5, 0);
                      q_5 = ATgetArgument(o_5, 1);
                      r_5 = ATgetArgument(o_5, 2);
                      i_5 :
                      if(match_int(p_5, 0))
                        {
                          t = not_null(j_5);
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
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(a_6));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, b_0);
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
  ATerm f_6 = NULL;
  f_6 = t;
  t = SSL_table_keys(not_null(f_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm n_6 = NULL;
        ATerm p_6 = NULL;
        n_6 = t;
        {
          ATerm q_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(n_6));
          {
            t = table_get_0(t);
            {
              q_6 = t;
              if(((p_6 != NULL) && (p_6 != q_6)))
                _fail(q_6);
              else
                p_6 = q_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), not_null(p_6));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6;
      d_6 = t;
      {
        ATerm v_6 = NULL;
        ATerm w_6 = NULL;
        t = term_k_5;
        {
          t = get_config_0(t);
          {
            w_6 = t;
            if(((v_6 != NULL) && (v_6 != w_6)))
              _fail(w_6);
            else
              v_6 = w_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), term_e_6);
          t = geq_0(t);
        }
      }
      t = d_6;
      t = i_59(t);
      LocalPopChoice(c_6);
    }
  else
    {
      t = b_6;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_6;
  g_6 = t;
  {
    ATerm z_6 = NULL;
    ATerm a_7 = NULL;
    a_7 = t;
    if(((z_6 != NULL) && (z_6 != a_7)))
      _fail(a_7);
    else
      z_6 = a_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_6, not_null(z_6));
      t = printnl_0(t);
    }
  }
  t = g_6;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_7 = NULL;
  ATerm i_7 = NULL,j_7 = NULL;
  g_7 = t;
  {
    ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_7)));
    {
      t = table_get_0(t);
      {
        k_7 = t;
        e_7 :
        if(((ATgetType(k_7) == AT_LIST) && !(ATisEmpty(k_7))))
          {
            l_7 = ATgetFirst((ATermList) k_7);
            o_7 = (ATerm) ATgetNext((ATermList) k_7);
            f_7 :
            if(match_cons(l_7, sym__2))
              {
                m_7 = ATgetArgument(l_7, 0);
                n_7 = ATgetArgument(l_7, 1);
                {
                  if(((i_7 != NULL) && (i_7 != m_7)))
                    _fail(m_7);
                  else
                    i_7 = m_7;
                  if(((j_7 != NULL) && (j_7 != n_7)))
                    _fail(n_7);
                  else
                    j_7 = n_7;
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
    t = not_null(j_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      {
        ATerm a_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_7)));
        {
          t = table_get_0(t);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
              b_8 = t;
              t_7 :
              if(match_cons(b_8, sym__2))
                {
                  c_8 = ATgetArgument(b_8, 0);
                  d_8 = ATgetArgument(b_8, 1);
                  {
                    if(((x_7 != NULL) && (x_7 != c_8)))
                      _fail(c_8);
                    else
                      x_7 = c_8;
                    if(((a_8 != NULL) && (a_8 != d_8)))
                      _fail(d_8);
                    else
                      a_8 = d_8;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, f_0);
          }
        }
        t = not_null(a_8);
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
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_6;
      {
        t = table_get_0(t);
        {
          ATerm p_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_6;
      t_6 = t;
      {
        ATerm h_8 = NULL;
        ATerm i_8 = NULL;
        t = term_k_5;
        {
          t = get_config_0(t);
          {
            i_8 = t;
            if(((h_8 != NULL) && (h_8 != i_8)))
              _fail(i_8);
            else
              h_8 = i_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), term_u_6);
          t = geq_0(t);
        }
      }
      t = t_6;
      t = h_59(t);
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7;
      b_7 = t;
      {
        ATerm l_8 = NULL;
        ATerm m_8 = NULL;
        t = term_k_5;
        {
          t = get_config_0(t);
          {
            m_8 = t;
            if(((l_8 != NULL) && (l_8 != m_8)))
              _fail(m_8);
            else
              l_8 = m_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), term_c_7);
          t = geq_0(t);
        }
      }
      t = b_7;
      t = j_59(t);
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
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
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym__2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      if(((r_8 != NULL) && (r_8 != s_8)))
        _fail(s_8);
      else
        r_8 = s_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(((ATgetType(y_8) == AT_LIST) && !(ATisEmpty(y_8))))
    {
      z_8 = ATgetFirst((ATermList) y_8);
      a_9 = (ATerm) ATgetNext((ATermList) y_8);
      {
        t = k_70(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm d_9 = NULL;
            d_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(d_9));
              t = j_70(t);
            }
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(a_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym__2))
    {
      k_9 = ATgetArgument(j_9, 0);
      l_9 = ATgetArgument(j_9, 1);
      {
        t = not_null(k_9);
        {
          ATerm p_9 (ATerm t)
          {
            ATerm d_7 = t;
            int h_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_9);
                LocalPopChoice(h_7);
              }
            else
              {
                t = d_7;
                {
                  ATerm p_7 = t;
                  int q_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(l_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_70, r_0);
                      t = p_9(t);
                      LocalPopChoice(q_7);
                    }
                  else
                    {
                      t = p_7;
                      t = Cons_2(t, _id, p_9);
                    }
                }
              }
            return(t);
          }
          t = p_9(t);
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
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym__3))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      x_9 = ATgetArgument(u_9, 2);
      {
        ATerm r_7;
        r_7 = t;
        {
          ATerm b_10 = NULL;
          ATerm c_10 = NULL,e_10 = NULL;
          ATerm d_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(w_9));
          {
            ATerm s_7 = t;
            int y_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_7);
              }
            else
              {
                t = s_7;
                t = (ATerm) ATempty;
              }
            {
              d_10 = t;
              if(((c_10 != NULL) && (c_10 != d_10)))
                _fail(d_10);
              else
                c_10 = d_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(x_9));
            {
              t = union_1(t, eq_0);
              {
                e_10 = t;
                if(((b_10 != NULL) && (b_10 != e_10)))
                  _fail(e_10);
                else
                  b_10 = e_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_9), not_null(w_9), not_null(b_10));
            t = table_put_0(t);
          }
        }
        t = r_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym__2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        t = not_null(o_10);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
            r_10 = t;
            k_10 :
            if(match_cons(r_10, sym__2))
              {
                s_10 = ATgetArgument(r_10, 0);
                t_10 = ATgetArgument(r_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_10), not_null(s_10), not_null(t_10));
                  t = s_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_0);
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
  ATerm z_10 = NULL;
  ATerm z_7 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_11 = NULL;
      a_11 = t;
      {
        if(((z_10 != NULL) && (z_10 != a_11)))
          _fail(a_11);
        else
          z_10 = a_11;
        t = SSL_ReadFromFile(not_null(z_10));
      }
      LocalPopChoice(e_8);
    }
  else
    {
      t = z_7;
      {
        ATerm t_0 (ATerm t)
        {
          t = term_f_8;
          return(t);
        }
        t = debug_1(t, t_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm g_11 = NULL;
  e_11 = t;
  {
    ATerm g_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_11)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_8;
      }
    {
      ATerm j_8;
      j_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_6, term_k_8, (ATerm) ATinsert(ATempty, not_null(e_11)));
        t = table_put_0(t);
      }
      t = j_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_n_8;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose4_1(t, u_0);
        {
          ATerm o_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(t_8);
            }
          else
            {
              t = o_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_u_8;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose6_1(t, w_0);
            {
              ATerm h_11 = NULL;
              h_11 = t;
              if(((g_11 != NULL) && (g_11 != h_11)))
                _fail(h_11);
              else
                g_11 = h_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(g_11));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = term_v_8;
                        return(t);
                      }
                      t = say_1(t, z_0);
                      return(t);
                    }
                    t = if_verbose6_1(t, y_0);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_i_6, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_11)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = term_u_8;
                              return(t);
                            }
                            t = say_1(t, b_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, a_1);
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
  ATerm l_11 = NULL;
  l_11 = t;
  t = SSL_getenv(not_null(l_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_9;
      t = get_config_0(t);
      LocalPopChoice(b_9);
    }
  else
    {
      t = w_8;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_9;
            t = getenv_0(t);
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_h_9;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose5_1(t, c_1);
  {
    ATerm m_9;
    m_9 = t;
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_9;
          t = table_get_0(t);
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = m_9;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_r_9;
          return(t);
        }
        t = debug_1(t, g_1);
        return(t);
      }
      t = if_verbose5_1(t, f_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm s_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = debug_1(t, k_1);
        return(t);
      }
      t = if_verbose5_1(t, h_1);
      {
        t = xtc_load_0(t);
        {
          ATerm a_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(f_10);
            }
          else
            {
              t = a_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = term_z_9;
                return(t);
              }
              t = debug_1(t, m_1);
              return(t);
            }
            t = if_verbose5_1(t, l_1);
          }
        }
      }
      LocalPopChoice(y_9);
    }
  else
    {
      t = s_9;
      {
        ATerm p_11 = NULL;
        ATerm q_11 = NULL;
        q_11 = t;
        if(((p_11 != NULL) && (p_11 != q_11)))
          _fail(q_11);
        else
          p_11 = q_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), not_null(p_11)), term_g_10);
          {
            t = error_0(t);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_i_6;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = term_i_10;
                      return(t);
                    }
                    t = debug_1(t, o_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, n_1);
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
ATerm xtc_command_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm u_11 = NULL;
  ATerm j_10;
  j_10 = t;
  {
    ATerm v_11 = NULL;
    t = e_74(t);
    {
      t = xtc_find_0(t);
      {
        v_11 = t;
        if(((u_11 != NULL) && (u_11 != v_11)))
          _fail(v_11);
        else
          u_11 = v_11;
      }
    }
  }
  t = j_10;
  {
    ATerm p_10;
    p_10 = t;
    {
      ATerm w_11 = NULL;
      ATerm x_11 = NULL;
      x_11 = t;
      if(((w_11 != NULL) && (w_11 != x_11)))
        _fail(x_11);
      else
        w_11 = x_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(w_11));
        t = call_0(t);
      }
    }
    t = p_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
        ATerm q_10;
        q_10 = t;
        {
          ATerm n_12 = NULL;
          ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
          t = a_75(t);
          {
            n_12 = t;
            {
              if(((k_12 != NULL) && (k_12 != n_12)))
                _fail(n_12);
              else
                k_12 = n_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_12), not_null(g_12), not_null(h_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_10 = t;
                    int v_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_12), term_w_10);
                        t = table_get_0(t);
                        LocalPopChoice(v_10);
                      }
                    else
                      {
                        t = u_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_12 = t;
                      d_12 :
                      if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
                        {
                          p_12 = ATgetFirst((ATermList) o_12);
                          q_12 = (ATerm) ATgetNext((ATermList) o_12);
                          {
                            if(((l_12 != NULL) && (l_12 != p_12)))
                              _fail(p_12);
                            else
                              l_12 = p_12;
                            {
                              if(((m_12 != NULL) && (m_12 != q_12)))
                                _fail(q_12);
                              else
                                m_12 = q_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_12), term_w_10, (ATerm) ATinsert(CheckATermList(not_null(m_12)), (ATerm) ATinsert(CheckATermList(not_null(l_12)), not_null(g_12))));
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
        t = q_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm x_10;
  x_10 = t;
  {
    t = o_75(t);
    {
      ATerm p_1 (ATerm t)
      {
        t = term_y_10;
        return(t);
      }
      t = debug_1(t, p_1);
    }
  }
  t = x_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
      a_13 = t;
      v_12 :
      if(match_cons(a_13, sym__2))
        {
          b_13 = ATgetArgument(a_13, 0);
          c_13 = ATgetArgument(a_13, 1);
          {
            if(((z_12 != NULL) && (z_12 != b_13)))
              _fail(b_13);
            else
              z_12 = b_13;
            if(((y_12 != NULL) && (y_12 != c_13)))
              _fail(c_13);
            else
              y_12 = c_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_11);
      t = SSL_open_file(not_null(z_12), not_null(y_12));
    }
  else
    {
      t = b_11;
      {
        ATerm d_13 = NULL;
        ATerm e_13 = NULL;
        ATerm q_1 (ATerm t)
        {
          t = term_d_11;
          return(t);
        }
        t = obsolete_1(t, q_1);
        {
          d_13 = t;
          {
            if(((z_12 != NULL) && (z_12 != d_13)))
              _fail(d_13);
            else
              z_12 = d_13;
            {
              ATerm f_11;
              f_11 = t;
              {
                ATerm f_13 = NULL;
                t = term_i_11;
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
              }
              t = f_11;
              t = SSL_open_file(not_null(z_12), not_null(e_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm n_13 = NULL;
  l_13 = t;
  {
    ATerm j_11;
    j_11 = t;
    {
      ATerm o_13 = NULL;
      t = term_k_11;
      {
        o_13 = t;
        if(((n_13 != NULL) && (n_13 != o_13)))
          _fail(o_13);
        else
          n_13 = o_13;
      }
    }
    t = j_11;
    {
      t = SSL_open_file(not_null(l_13), not_null(n_13));
      t = SSL_close_file(not_null(l_13));
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
  ATerm s_13 = NULL;
  ATerm t_13 = NULL;
  t = term_m_11;
  {
    t = new_0(t);
    {
      t_13 = t;
      if(((s_13 != NULL) && (s_13 != t_13)))
        _fail(t_13);
      else
        s_13 = t_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_n_11);
    {
      t = conc_strings_0(t);
      {
        ATerm o_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = o_11;
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
  ATerm x_13 = NULL;
  t = new_file_0(t);
  {
    x_13 = t;
    {
      ATerm s_11;
      s_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_i_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_m_11);
            {
              ATerm r_1 (ATerm t)
              {
                t = term_t_11;
                return(t);
              }
              t = assert_1(t, r_1);
            }
          }
        }
      }
      t = s_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm h_14 = NULL,i_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym_stdin_0))
    {
      ATerm j_14 = NULL;
      ATerm k_14 = NULL;
      ATerm l_14 = NULL;
      t = xtc_new_file_0(t);
      {
        k_14 = t;
        {
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
          {
            ATerm m_14 = NULL;
            t = o_0(t);
            {
              m_14 = t;
              if(((l_14 != NULL) && (l_14 != m_14)))
                _fail(m_14);
              else
                l_14 = m_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_14)), term_y_11));
              {
                ATerm z_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = z_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(j_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_14));
    }
  else
    {
      if(match_cons(h_14, sym_FILE_1))
        {
          i_14 = ATgetArgument(h_14, 0);
          {
            ATerm o_14 = NULL;
            ATerm p_14 = NULL;
            t = not_null(i_14);
            {
              ATerm q_14 = NULL;
              t = xtc_new_file_0(t);
              {
                p_14 = t;
                {
                  if(((o_14 != NULL) && (o_14 != p_14)))
                    _fail(p_14);
                  else
                    o_14 = p_14;
                  {
                    ATerm r_14 = NULL;
                    t = o_0(t);
                    {
                      r_14 = t;
                      if(((q_14 != NULL) && (q_14 != r_14)))
                        _fail(r_14);
                      else
                        q_14 = r_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_14)), term_y_11), not_null(i_14)), term_b_12));
                      {
                        ATerm c_12 = t;
                        int i_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(i_12);
                          }
                        else
                          {
                            t = c_12;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(o_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_14));
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
  ATerm c_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_stdin_0))
    {
      ATerm e_15 = NULL,g_15 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm f_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
        }
      }
      t = j_12;
      {
        ATerm h_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(e_15));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_FILE_1))
    {
      r_15 = ATgetArgument(q_15, 0);
      {
        ATerm u_15 = NULL,w_15 = NULL;
        ATerm v_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
        {
          t = not_null(r_15);
          {
            ATerm y_15 = NULL;
            t = r_52(t);
            {
              w_15 = t;
              {
                ATerm z_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(w_15)), not_null(u_15));
                {
                  z_15 = t;
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                }
                t = not_null(y_15);
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
ATerm xtc_transform_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          t = stdin_0(t);
        }
      LocalPopChoice(s_12);
      t = xtc_transform_file_2(t, g_74, h_74);
    }
  else
    {
      t = r_12;
      t = xtc_transform_term_2(t, g_74, h_74);
    }
  return(t);
}
ATerm xtc_parse_sdf_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  t = xtc_transform_2(t, s_1, pass_verbose_0);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_x_12;
    return(t);
  }
  t = xtc_transform_2(t, t_1, pass_verbose_0);
  return(t);
}
ATerm pre_process_sdf_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  h_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      i_16 :
      if(match_cons(k_16, sym_AST_0))
        {
          t = not_null(l_16);
        }
      else
        {
          if(match_cons(k_16, sym_ParseTree_0))
            {
              t = not_null(l_16);
              t = xtc_implode_asfix_0(t);
            }
          else
            {
              if(match_cons(k_16, sym_PlainText_0))
                {
                  t = not_null(l_16);
                  t = xtc_parse_sdf_0(t);
                }
              else
                {
                  _fail(t);
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
ATerm get_input_type_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_13;
      t = get_config_0(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = term_j_13;
    }
  return(t);
}
ATerm ppgen_0 (ATerm t)
{
  ATerm u_16 = NULL,w_16 = NULL;
  ATerm k_13;
  k_13 = t;
  {
    ATerm v_16 = NULL;
    t = get_input_type_0(t);
    {
      v_16 = t;
      if(((u_16 != NULL) && (u_16 != v_16)))
        _fail(v_16);
      else
        u_16 = v_16;
    }
  }
  t = k_13;
  {
    ATerm x_16 = NULL;
    x_16 = t;
    if(((w_16 != NULL) && (w_16 != x_16)))
      _fail(x_16);
    else
      w_16 = x_16;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), not_null(w_16));
      {
        t = pre_process_sdf_0(t);
        {
          ATerm u_1 (ATerm t)
          {
            t = term_m_13;
            return(t);
          }
          t = xtc_transform_2(t, u_1, pass_verbose_0);
          {
            ATerm v_1 (ATerm t)
            {
              t = term_p_13;
              return(t);
            }
            t = xtc_transform_2(t, v_1, pass_verbose_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      t = SSL_copy(not_null(d_17), not_null(e_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym_stderr_0))
    {
      ATerm o_17 = NULL,q_17 = NULL;
      ATerm q_13;
      q_13 = t;
      {
        ATerm p_17 = NULL;
        t = SSLgetAnnotations(not_null(m_17));
        {
          p_17 = t;
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
        }
      }
      t = q_13;
      {
        ATerm r_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(o_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        t = not_null(q_17);
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
  ATerm z_17 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_stdout_0))
    {
      ATerm b_18 = NULL,d_18 = NULL;
      ATerm r_13;
      r_13 = t;
      {
        ATerm c_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          c_18 = t;
          if(((b_18 != NULL) && (b_18 != c_18)))
            _fail(c_18);
          else
            b_18 = c_18;
        }
      }
      t = r_13;
      {
        ATerm e_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(b_18));
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
        t = not_null(d_18);
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
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_FILE_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_18 = NULL;
            ATerm u_18 = NULL;
            t = m_0(t);
            {
              u_18 = t;
              {
                if(((t_18 != NULL) && (t_18 != u_18)))
                  _fail(u_18);
                else
                  t_18 = u_18;
                {
                  ATerm w_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = w_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(t_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_18));
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_18 = NULL;
                  ATerm b_19 = NULL;
                  t = m_0(t);
                  {
                    b_19 = t;
                    {
                      if(((w_18 != NULL) && (w_18 != b_19)))
                        _fail(b_19);
                      else
                        w_18 = b_19;
                      {
                        ATerm b_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_14 = t;
                            int d_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(d_14);
                              }
                            else
                              {
                                t = c_14;
                                {
                                  ATerm e_14 = t;
                                  int f_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(f_14);
                                    }
                                  else
                                    {
                                      t = e_14;
                                      {
                                        ATerm c_19 = NULL;
                                        c_19 = t;
                                        if(((r_18 != NULL) && (r_18 != c_19)))
                                          _fail(c_19);
                                        else
                                          r_18 = c_19;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(w_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_18));
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm e_19 = NULL;
                    t = m_0(t);
                    {
                      e_19 = t;
                      if(((r_18 != NULL) && (r_18 != e_19)))
                        _fail(e_19);
                      else
                        r_18 = e_19;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_18));
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
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  n_19 :
  if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
    {
      p_19 = ATgetFirst((ATermList) o_19);
      q_19 = (ATerm) ATgetNext((ATermList) o_19);
      t = not_null(q_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,e_20 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym__2))
    {
      y_19 = ATgetArgument(x_19, 0);
      e_20 = ATgetArgument(x_19, 1);
      {
        ATerm n_14;
        n_14 = t;
        {
          ATerm h_20 = NULL;
          ATerm i_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(e_20));
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
                t = (ATerm) ATempty;
              }
            {
              i_20 = t;
              if(((h_20 != NULL) && (h_20 != i_20)))
                _fail(i_20);
              else
                h_20 = i_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_19), not_null(e_20), not_null(h_20));
            t = table_put_0(t);
          }
        }
        t = n_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  ATerm u_14;
  u_14 = t;
  {
    ATerm z_20 = NULL;
    ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
    t = x_74(t);
    {
      z_20 = t;
      {
        if(((t_20 != NULL) && (t_20 != z_20)))
          _fail(z_20);
        else
          t_20 = z_20;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), term_w_10);
              t = table_get_0(t);
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            a_21 = t;
            q_20 :
            if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
              {
                b_21 = ATgetFirst((ATermList) a_21);
                c_21 = (ATerm) ATgetNext((ATermList) a_21);
                {
                  if(((s_20 != NULL) && (s_20 != b_21)))
                    _fail(b_21);
                  else
                    s_20 = b_21;
                  {
                    if(((r_20 != NULL) && (r_20 != c_21)))
                      _fail(c_21);
                    else
                      r_20 = c_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_20), term_w_10, not_null(r_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_20);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm d_21 = NULL;
                              d_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), not_null(d_21));
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
  t = u_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_remove(not_null(j_21));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_63(t);
      t = i_63(t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        t = i_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm o_21 = NULL;
  ATerm z_14;
  z_14 = t;
  {
    ATerm u_21 = NULL;
    ATerm v_21 = NULL;
    t = w_74(t);
    {
      u_21 = t;
      {
        if(((o_21 != NULL) && (o_21 != u_21)))
          _fail(u_21);
        else
          o_21 = u_21;
        {
          ATerm w_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), term_w_10);
          {
            ATerm a_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_15);
              }
            else
              {
                t = a_15;
                t = (ATerm) ATempty;
              }
            {
              w_21 = t;
              if(((v_21 != NULL) && (v_21 != w_21)))
                _fail(w_21);
              else
                v_21 = w_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_21), term_w_10, (ATerm) ATinsert(CheckATermList(not_null(v_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm m_22 = NULL,o_22 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_t_11;
    return(t);
  }
  t = begin_scope_1(t, x_1);
  {
    ATerm z_1 (ATerm t)
    {
      ATerm i_15;
      i_15 = t;
      {
        ATerm p_22 = NULL,r_22 = NULL,s_22 = NULL;
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_15;
            t = table_get_0(t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_22 = t;
          l_22 :
          if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
            {
              r_22 = ATgetFirst((ATermList) p_22);
              s_22 = (ATerm) ATgetNext((ATermList) p_22);
              {
                if(((o_22 != NULL) && (o_22 != r_22)))
                  _fail(r_22);
                else
                  o_22 = r_22;
                {
                  if(((m_22 != NULL) && (m_22 != s_22)))
                    _fail(s_22);
                  else
                    m_22 = s_22;
                  {
                    t = not_null(o_22);
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm m_15 = t;
                        int n_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(n_15);
                          }
                        else
                          {
                            t = m_15;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, a_2);
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
      t = i_15;
      {
        ATerm b_2 (ATerm t)
        {
          t = term_t_11;
          return(t);
        }
        t = end_scope_1(t, b_2);
      }
      return(t);
    }
    t = restore_always_2(t, u_73, z_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm o_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        ATerm w_22 = NULL;
        t = term_b_12;
        {
          t = get_config_0(t);
          {
            w_22 = t;
            if(((v_22 != NULL) && (v_22 != w_22)))
              _fail(w_22);
            else
              v_22 = w_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_22));
        LocalPopChoice(s_15);
      }
    else
      {
        t = o_15;
        t = term_u_5;
      }
    {
      t = v_73(t);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm t_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_11;
              t = get_config_0(t);
              LocalPopChoice(x_15);
            }
          else
            {
              t = t_15;
              t = term_a_16;
            }
          return(t);
        }
        t = copy_to_1(t, d_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, c_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm z_22 = NULL;
    z_22 = t;
    y_22 :
    if(!(match_string(z_22, "-v")))
      {
        if(!(match_string(z_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_c_16;
    t = set_config_0(t);
    t = term_d_16;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  t = Option_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm c_23 = NULL;
    c_23 = t;
    a_23 :
    if(!(match_string(c_23, "-k")))
      {
        if(!(match_string(c_23, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm f_16;
    f_16 = t;
    {
      ATerm d_23 = NULL;
      ATerm e_23 = NULL;
      t = string_to_int_0(t);
      {
        e_23 = t;
        if(((d_23 != NULL) && (d_23 != e_23)))
          _fail(e_23);
        else
          d_23 = e_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_16, not_null(d_23));
        t = set_config_0(t);
      }
    }
    t = f_16;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_m_16;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = SSL_string_to_int(not_null(h_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm p_23 = NULL;
        p_23 = t;
        k_23 :
        if(!(match_string(p_23, "-S")))
          {
            if(!(match_string(p_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_q_16;
        t = set_config_0(t);
        t = term_r_16;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_s_16;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm t_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm q_23 = NULL;
              q_23 = t;
              l_23 :
              if(!(match_string(q_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm t_23 = NULL;
              ATerm z_16;
              z_16 = t;
              {
                ATerm r_23 = NULL;
                ATerm s_23 = NULL;
                t = string_to_int_0(t);
                {
                  s_23 = t;
                  if(((r_23 != NULL) && (r_23 != s_23)))
                    _fail(s_23);
                  else
                    r_23 = s_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(r_23));
                  t = set_config_0(t);
                }
              }
              t = z_16;
              {
                ATerm u_23 = NULL;
                u_23 = t;
                if(((t_23 != NULL) && (t_23 != u_23)))
                  _fail(u_23);
                else
                  t_23 = u_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_23));
              }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_a_17;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            LocalPopChoice(y_16);
          }
        else
          {
            t = t_16;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm v_23 = NULL;
                v_23 = t;
                o_23 :
                if(!(match_string(v_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_g_17;
                t = set_config_0(t);
                t = term_h_17;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_i_17;
                return(t);
              }
              t = Option_3(t, q_2, r_2, s_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm n_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = n_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm g_24 = NULL;
    g_24 = t;
    d_24 :
    if(!(match_string(g_24, "-o")))
      {
        if(!(match_string(g_24, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm j_24 = NULL;
    ATerm t_17;
    t_17 = t;
    {
      ATerm h_24 = NULL;
      ATerm i_24 = NULL;
      i_24 = t;
      if(((h_24 != NULL) && (h_24 != i_24)))
        _fail(i_24);
      else
        h_24 = i_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(h_24));
        t = set_config_0(t);
      }
    }
    t = t_17;
    {
      ATerm k_24 = NULL;
      k_24 = t;
      if(((j_24 != NULL) && (j_24 != k_24)))
        _fail(k_24);
      else
        j_24 = k_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_24));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm o_24 = NULL;
          o_24 = t;
          n_24 :
          if(!(match_string(o_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_a_18;
          t = set_config_0(t);
          t = term_f_18;
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = term_g_18;
          return(t);
        }
        t = Option_3(t, w_2, x_2, y_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  y_24 = t;
  w_24 :
  if(match_string(y_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
        {
          z_24 = ATgetFirst((ATermList) y_24);
          a_25 = (ATerm) ATgetNext((ATermList) y_24);
          x_24 :
          if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
            {
              b_25 = ATgetFirst((ATermList) a_25);
              c_25 = (ATerm) ATgetNext((ATermList) a_25);
              {
                ATerm g_25 = NULL;
                ATerm h_18;
                h_18 = t;
                {
                  t = not_null(z_24);
                  t = j_0(t);
                }
                t = h_18;
                {
                  ATerm h_25 = NULL;
                  t = not_null(b_25);
                  {
                    t = k_0(t);
                    {
                      h_25 = t;
                      if(((g_25 != NULL) && (g_25 != h_25)))
                        _fail(h_25);
                      else
                        g_25 = h_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_25)), not_null(g_25));
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
  ATerm b_3 (ATerm t)
  {
    ATerm o_25 = NULL;
    o_25 = t;
    l_25 :
    if(!(match_string(o_25, "-i")))
      {
        if(!(match_string(o_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm r_25 = NULL;
    ATerm i_18;
    i_18 = t;
    {
      ATerm p_25 = NULL;
      ATerm q_25 = NULL;
      q_25 = t;
      if(((p_25 != NULL) && (p_25 != q_25)))
        _fail(q_25);
      else
        p_25 = q_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(p_25));
        t = set_config_0(t);
      }
    }
    t = i_18;
    {
      ATerm s_25 = NULL;
      s_25 = t;
      if(((r_25 != NULL) && (r_25 != s_25)))
        _fail(s_25);
      else
        r_25 = s_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_25));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_j_18;
    return(t);
  }
  t = ArgOption_3(t, b_3, e_3, f_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ppgen_options_0 (ATerm t)
{
  ATerm o_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm x_25 = NULL;
        x_25 = t;
        v_25 :
        if(!(match_string(x_25, "-A")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        ATerm v_18;
        v_18 = t;
        {
          t = term_y_18;
          t = set_config_0(t);
        }
        t = v_18;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_z_18;
        return(t);
      }
      t = Option_3(t, g_3, h_3, i_3);
      LocalPopChoice(s_18);
    }
  else
    {
      t = o_18;
      {
        ATerm a_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              ATerm y_25 = NULL;
              y_25 = t;
              w_25 :
              if(!(match_string(y_25, "-a")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              ATerm f_19;
              f_19 = t;
              {
                t = term_h_19;
                t = set_config_0(t);
              }
              t = f_19;
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              t = term_i_19;
              return(t);
            }
            t = Option_3(t, j_3, p_3, s_3);
            LocalPopChoice(d_19);
          }
        else
          {
            t = a_19;
            t = io_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm b_26 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm c_26 = NULL,d_26 = NULL;
      c_26 = t;
      a_26 :
      if(match_cons(c_26, sym_Program_1))
        {
          d_26 = ATgetArgument(c_26, 0);
          if(((b_26 != NULL) && (b_26 != d_26)))
            _fail(d_26);
          else
            b_26 = d_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_19), not_null(b_26)), term_k_19));
      {
        t = printnl_0(t);
        {
          t = term_t_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATempty, term_m_19));
  {
    t = printnl_0(t);
    {
      t = term_t_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_TicksToSeconds(not_null(g_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym__2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_26), not_null(n_26));
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = SSL_addr(not_null(m_26), not_null(n_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_70(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
        u_26 = t;
        t_26 :
        if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
          {
            v_26 = ATgetFirst((ATermList) u_26);
            w_26 = (ATerm) ATgetNext((ATermList) u_26);
            {
              ATerm z_26 = NULL;
              ATerm a_27 = NULL;
              t = not_null(w_26);
              {
                t = foldr_2(t, w_70, x_70);
                {
                  a_27 = t;
                  if(((z_26 != NULL) && (z_26 != a_27)))
                    _fail(a_27);
                  else
                    z_26 = a_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), not_null(z_26));
                t = x_70(t);
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
ATerm crush_2 (ATerm t, ATerm u_69 (ATerm), ATerm v_69 (ATerm))
{
  ATerm h_27 = NULL;
  ATerm j_27 = NULL;
  h_27 = t;
  {
    ATerm k_27 = NULL;
    ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
    t = not_null(h_27);
    {
      k_27 = t;
      {
        t = SSL_explode_term(not_null(k_27));
        {
          m_27 = t;
          g_27 :
          if(match_cons(m_27, sym__2))
            {
              n_27 = ATgetArgument(m_27, 0);
              o_27 = ATgetArgument(m_27, 1);
              if(((j_27 != NULL) && (j_27 != o_27)))
                _fail(o_27);
              else
                j_27 = o_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_27);
      t = foldr_2(t, u_69, v_69);
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
    ATerm u_3 (ATerm t)
    {
      t = term_p_16;
      return(t);
    }
    t = crush_2(t, u_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym__2))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      {
        ATerm v_19;
        v_19 = t;
        {
          ATerm z_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_27), not_null(w_27));
              LocalPopChoice(a_20);
            }
          else
            {
              t = z_19;
              t = SSL_gtr(not_null(v_27), not_null(w_27));
            }
        }
        t = v_19;
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
  ATerm c_28 = NULL;
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
      d_28 = t;
      b_28 :
      if(match_cons(d_28, sym__2))
        {
          e_28 = ATgetArgument(d_28, 0);
          f_28 = ATgetArgument(d_28, 1);
          {
            if(((c_28 != NULL) && (c_28 != e_28)))
              _fail(e_28);
            else
              c_28 = e_28;
            if(((c_28 != NULL) && (c_28 != f_28)))
              _fail(f_28);
            else
              c_28 = f_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm d_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_20;
      g_20 = t;
      {
        ATerm i_28 = NULL;
        ATerm j_28 = NULL;
        t = term_k_5;
        {
          t = get_config_0(t);
          {
            j_28 = t;
            if(((i_28 != NULL) && (i_28 != j_28)))
              _fail(j_28);
            else
              i_28 = j_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_28), term_t_5);
          t = geq_0(t);
        }
      }
      t = g_20;
      t = e_59(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = d_20;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm n_28 = NULL,p_28 = NULL;
    ATerm j_20;
    j_20 = t;
    {
      ATerm o_28 = NULL;
      t = run_time_0(t);
      {
        o_28 = t;
        if(((n_28 != NULL) && (n_28 != o_28)))
          _fail(o_28);
        else
          n_28 = o_28;
      }
    }
    t = j_20;
    {
      ATerm q_28 = NULL;
      t = term_k_20;
      {
        t = get_config_0(t);
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_20), not_null(n_28)), term_l_20), not_null(p_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_3);
  {
    t = term_p_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_Version_0))
    {
      ATerm z_28 = NULL,b_29 = NULL;
      ATerm n_20;
      n_20 = t;
      {
        ATerm a_29 = NULL;
        t = SSLgetAnnotations(not_null(x_28));
        {
          a_29 = t;
          if(((z_28 != NULL) && (z_28 != a_29)))
            _fail(a_29);
          else
            z_28 = a_29;
        }
      }
      t = n_20;
      {
        ATerm c_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_28));
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
        t = not_null(b_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, w_3);
  t = j_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = SSL_table_create(not_null(i_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  {
    ATerm w_20;
    w_20 = t;
    {
      t = term_x_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_20, term_y_20, not_null(o_29));
          t = table_put_0(t);
        }
      }
    }
    t = w_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  t = SSL_table_destroy(not_null(v_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  t = SSL_exit(not_null(z_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(((ATgetType(d_30) == AT_LIST) && ATisEmpty(d_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
        {
          e_30 = ATgetFirst((ATermList) d_30);
          f_30 = (ATerm) ATgetNext((ATermList) d_30);
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
  ATerm e_21;
  e_21 = t;
  {
    ATerm k_30 = NULL;
    ATerm n_30 = NULL;
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm l_30 = NULL;
          ATerm m_30 = NULL;
          m_30 = t;
          if(((l_30 != NULL) && (l_30 != m_30)))
            _fail(m_30);
          else
            l_30 = m_30;
          t = (ATerm) ATinsert(ATempty, not_null(l_30));
        }
      }
    {
      n_30 = t;
      if(((k_30 != NULL) && (k_30 != n_30)))
        _fail(n_30);
      else
        k_30 = n_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(k_30));
      t = printnl_0(t);
    }
  }
  t = e_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  y_30 = t;
  v_30 :
  if(((ATgetType(y_30) == AT_LIST) && !(ATisEmpty(y_30))))
    {
      w_30 = ATgetFirst((ATermList) y_30);
      x_30 = (ATerm) ATgetNext((ATermList) y_30);
      {
        ATerm b_31 = NULL;
        t = not_null(x_30);
        {
          ATerm h_21;
          h_21 = t;
          {
            ATerm c_31 = NULL,e_31 = NULL,g_31 = NULL;
            ATerm i_21;
            i_21 = t;
            {
              ATerm d_31 = NULL;
              t = i_0(t);
              {
                d_31 = t;
                if(((c_31 != NULL) && (c_31 != d_31)))
                  _fail(d_31);
                else
                  c_31 = d_31;
              }
            }
            t = i_21;
            {
              ATerm f_31 = NULL;
              t = not_null(w_30);
              {
                t = h_0(t);
                {
                  f_31 = t;
                  if(((e_31 != NULL) && (e_31 != f_31)))
                    _fail(f_31);
                  else
                    e_31 = f_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_31)), not_null(e_31));
                {
                  g_31 = t;
                  if(((b_31 != NULL) && (b_31 != g_31)))
                    _fail(g_31);
                  else
                    b_31 = g_31;
                }
              }
            }
          }
          t = h_21;
          {
            ATerm b_4 (ATerm t)
            {
              t = not_null(b_31);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_30) == AT_LIST) && ATisEmpty(y_30)))
        {
          {
            t = term_m_11;
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
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym_Program_1))
    {
      s_31 = ATgetArgument(r_31, 0);
      {
        ATerm v_31 = NULL,z_31 = NULL;
        ATerm w_31 = NULL;
        t = SSLgetAnnotations(not_null(r_31));
        {
          w_31 = t;
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
        }
        {
          t = not_null(s_31);
          {
            ATerm b_32 = NULL;
            t = q_57(t);
            {
              z_31 = t;
              {
                ATerm c_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_31)), not_null(v_31));
                {
                  c_32 = t;
                  if(((b_32 != NULL) && (b_32 != c_32)))
                    _fail(c_32);
                  else
                    b_32 = c_32;
                }
                t = not_null(b_32);
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
  ATerm r_32 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL;
      t = term_k_20;
      {
        t = get_config_0(t);
        {
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
        }
      }
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm e_4 (ATerm t)
          {
            ATerm t_32 = NULL;
            t_32 = t;
            if(((r_32 != NULL) && (r_32 != t_32)))
              _fail(t_32);
            else
              r_32 = t_32;
            return(t);
          }
          t = Program_1(t, e_4);
          return(t);
        }
        t = fetch_1(t, d_4);
      }
    }
  {
    t = term_m_21;
    {
      t = echo_0(t);
      {
        t = term_q_21;
        {
          t = table_get_0(t);
          {
            ATerm f_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, f_4);
            {
              ATerm h_4 (ATerm t)
              {
                ATerm u_32 = NULL;
                ATerm x_32 = NULL;
                x_32 = t;
                if(((u_32 != NULL) && (u_32 != x_32)))
                  _fail(x_32);
                else
                  u_32 = x_32;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_32)), term_r_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, h_4);
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
  ATerm s_21;
  s_21 = t;
  {
    ATerm c_33 = NULL;
    ATerm d_33 = NULL;
    d_33 = t;
    if(((c_33 != NULL) && (c_33 != d_33)))
      _fail(d_33);
    else
      c_33 = d_33;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATempty, not_null(c_33)));
      t = printnl_0(t);
    }
  }
  t = s_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm t_21;
  t_21 = t;
  {
    t = i_75(t);
    t = debug_0(t);
  }
  t = t_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm u_33 = NULL,v_33 = NULL;
  u_33 = t;
  j_33 :
  if(match_cons(u_33, sym_Undefined_1))
    {
      v_33 = ATgetArgument(u_33, 0);
      {
        ATerm z_33 = NULL,d_34 = NULL;
        ATerm c_34 = NULL;
        t = SSLgetAnnotations(not_null(u_33));
        {
          c_34 = t;
          if(((z_33 != NULL) && (z_33 != c_34)))
            _fail(c_34);
          else
            z_33 = c_34;
        }
        {
          t = not_null(v_33);
          {
            ATerm g_34 = NULL;
            t = r_57(t);
            {
              d_34 = t;
              {
                ATerm h_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_34)), not_null(z_33));
                {
                  h_34 = t;
                  if(((g_34 != NULL) && (g_34 != h_34)))
                    _fail(h_34);
                  else
                    g_34 = h_34;
                }
                t = not_null(g_34);
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
ATerm fetch_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm z_34 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_64, _id);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = Cons_2(t, _id, z_34);
      }
    return(t);
  }
  t = z_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_79 (ATerm))
{
  t = fetch_1(t, q_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym_Help_0))
    {
      ATerm m_35 = NULL,o_35 = NULL;
      ATerm z_21;
      z_21 = t;
      {
        ATerm n_35 = NULL;
        t = SSLgetAnnotations(not_null(i_35));
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
      }
      t = z_21;
      {
        ATerm s_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_35));
        {
          s_35 = t;
          if(((o_35 != NULL) && (o_35 != s_35)))
            _fail(s_35);
          else
            o_35 = s_35;
        }
        t = not_null(o_35);
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
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_implode_string(not_null(x_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
        c_36 = t;
        b_36 :
        if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
          {
            d_36 = ATgetFirst((ATermList) c_36);
            e_36 = (ATerm) ATgetNext((ATermList) c_36);
            {
              t = not_null(d_36);
              {
                ATerm k_4 (ATerm t)
                {
                  t = not_null(e_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_4);
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
  ATerm o_36 = NULL;
  ATerm q_36 = NULL;
  o_36 = t;
  {
    ATerm r_36 = NULL;
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
    t = not_null(o_36);
    {
      r_36 = t;
      {
        t = SSL_explode_term(not_null(r_36));
        {
          t_36 = t;
          m_36 :
          if(match_cons(t_36, sym__2))
            {
              u_36 = ATgetArgument(t_36, 0);
              v_36 = ATgetArgument(t_36, 1);
              n_36 :
              if(match_string(u_36, ""))
                {
                  if(((q_36 != NULL) && (q_36 != v_36)))
                    _fail(v_36);
                  else
                    q_36 = v_36;
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
      t = not_null(q_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm z_36 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_36);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          t = Nil_0(t);
          t = x_64(t);
        }
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      {
        t = not_null(d_37);
        {
          ATerm l_4 (ATerm t)
          {
            t = not_null(e_37);
            return(t);
          }
          t = at_end_1(t, l_4);
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
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = SSL_explode_string(not_null(j_37));
  return(t);
}
ATerm _2 (ATerm t, ATerm v_50 (ATerm), ATerm w_50 (ATerm))
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  r_37 :
  if(match_cons(s_37, sym__2))
    {
      t_37 = ATgetArgument(s_37, 0);
      u_37 = ATgetArgument(s_37, 1);
      {
        ATerm y_37 = NULL,a_38 = NULL;
        ATerm z_37 = NULL;
        t = SSLgetAnnotations(not_null(s_37));
        {
          z_37 = t;
          if(((y_37 != NULL) && (y_37 != z_37)))
            _fail(z_37);
          else
            y_37 = z_37;
        }
        {
          t = not_null(t_37);
          {
            ATerm c_38 = NULL;
            t = v_50(t);
            {
              a_38 = t;
              {
                t = not_null(u_37);
                {
                  ATerm e_38 = NULL;
                  t = w_50(t);
                  {
                    c_38 = t;
                    {
                      ATerm f_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_38), not_null(c_38)), not_null(y_37));
                      {
                        f_38 = t;
                        if(((e_38 != NULL) && (e_38 != f_38)))
                          _fail(f_38);
                        else
                          e_38 = f_38;
                      }
                      t = not_null(e_38);
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
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym__2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      {
        ATerm i_22;
        i_22 = t;
        t = SSL_printnl(not_null(o_38), not_null(p_38));
        t = i_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm j_22;
  j_22 = t;
  {
    ATerm v_38 = NULL,x_38 = NULL;
    ATerm k_22;
    k_22 = t;
    {
      ATerm w_38 = NULL;
      t = h_75(t);
      {
        w_38 = t;
        if(((v_38 != NULL) && (v_38 != w_38)))
          _fail(w_38);
        else
          v_38 = w_38;
      }
    }
    t = k_22;
    {
      ATerm y_38 = NULL;
      y_38 = t;
      if(((x_38 != NULL) && (x_38 != y_38)))
        _fail(y_38);
      else
        x_38 = y_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), not_null(v_38)));
        t = printnl_0(t);
      }
    }
  }
  t = j_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_64 (ATerm))
{
  ATerm b_39 (ATerm t)
  {
    ATerm n_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = n_22;
        t = Cons_2(t, i_64, b_39);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  t = SSL_is_string(not_null(d_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm x_22 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm f_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = f_23;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, m_4);
            LocalPopChoice(b_23);
          }
        else
          {
            t = x_22;
            {
              ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
              m_39 = t;
              l_39 :
              if(match_cons(m_39, sym_Path_1))
                {
                  n_39 = ATgetArgument(m_39, 0);
                  t = not_null(n_39);
                }
              else
                {
                  if(match_cons(m_39, sym_Var_1))
                    {
                      n_39 = ATgetArgument(m_39, 0);
                      {
                        t = not_null(n_39);
                        {
                          ATerm i_23 = t;
                          int j_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_23);
                            }
                          else
                            {
                              t = i_23;
                              {
                                ATerm o_4 (ATerm t)
                                {
                                  t = term_m_23;
                                  return(t);
                                }
                                t = debug_1(t, o_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_39, sym_Prefix_2))
                        {
                          n_39 = ATgetArgument(m_39, 0);
                          o_39 = ATgetArgument(m_39, 1);
                          {
                            ATerm t_39 = NULL,v_39 = NULL;
                            ATerm n_23;
                            n_23 = t;
                            {
                              ATerm u_39 = NULL;
                              t = not_null(n_39);
                              {
                                t = eval_config_0(t);
                                {
                                  u_39 = t;
                                  if(((t_39 != NULL) && (t_39 != u_39)))
                                    _fail(u_39);
                                  else
                                    t_39 = u_39;
                                }
                              }
                            }
                            t = n_23;
                            {
                              ATerm w_39 = NULL;
                              t = not_null(o_39);
                              {
                                t = eval_config_0(t);
                                {
                                  w_39 = t;
                                  if(((v_39 != NULL) && (v_39 != w_39)))
                                    _fail(w_39);
                                  else
                                    v_39 = w_39;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), not_null(v_39));
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
  ATerm e_40 = NULL;
  e_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(e_40));
    {
      t = table_get_0(t);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm z_23;
              z_23 = t;
              {
                ATerm j_40 = NULL;
                ATerm k_40 = NULL;
                k_40 = t;
                if(((j_40 != NULL) && (j_40 != k_40)))
                  _fail(k_40);
                else
                  j_40 = k_40;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_23, not_null(e_40), not_null(j_40));
                  t = table_put_0(t);
                }
              }
              t = z_23;
            }
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_62(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym__2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      t = SSL_table_get(not_null(q_40), not_null(r_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,d_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym__3))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      d_41 = ATgetArgument(y_40, 2);
      {
        ATerm c_24;
        c_24 = t;
        {
          ATerm j_41 = NULL;
          ATerm k_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), not_null(a_41));
          {
            ATerm e_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_24);
              }
            else
              {
                t = e_24;
                t = (ATerm) ATempty;
              }
            {
              k_41 = t;
              if(((j_41 != NULL) && (j_41 != k_41)))
                _fail(k_41);
              else
                j_41 = k_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_40), not_null(a_41), (ATerm) ATinsert(CheckATermList(not_null(j_41)), not_null(d_41)));
            t = table_put_0(t);
          }
        }
        t = c_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm q_41 = NULL;
  ATerm r_41 = NULL;
  t = term_m_11;
  {
    t = v_80(t);
    {
      r_41 = t;
      if(((q_41 != NULL) && (q_41 != r_41)))
        _fail(r_41);
      else
        q_41 = r_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_21, term_p_21, not_null(q_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_string(x_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
        {
          y_41 = ATgetFirst((ATermList) x_41);
          z_41 = (ATerm) ATgetNext((ATermList) x_41);
          {
            ATerm c_42 = NULL;
            ATerm l_24;
            l_24 = t;
            {
              t = not_null(y_41);
              t = a_0(t);
            }
            t = l_24;
            {
              ATerm d_42 = NULL;
              t = term_m_11;
              {
                t = d_0(t);
                {
                  d_42 = t;
                  if(((c_42 != NULL) && (c_42 != d_42)))
                    _fail(d_42);
                  else
                    c_42 = d_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_41)), not_null(c_42));
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
  ATerm p_4 (ATerm t)
  {
    ATerm k_42 = NULL;
    k_42 = t;
    j_42 :
    if(!(match_string(k_42, "--help")))
      {
        if(!(match_string(k_42, "-h")))
          {
            if(!(match_string(k_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_p_24;
    {
      t = set_config_0(t);
      t = term_q_24;
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_r_24;
    return(t);
  }
  t = Option_3(t, p_4, q_4, v_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_42 = NULL,q_42 = NULL,r_42 = NULL;
  o_42 = t;
  m_42 :
  if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
    {
      q_42 = ATgetFirst((ATermList) o_42);
      r_42 = (ATerm) ATgetNext((ATermList) o_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  a_43 :
  if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
    {
      c_43 = ATgetFirst((ATermList) b_43);
      d_43 = (ATerm) ATgetNext((ATermList) b_43);
      {
        ATerm h_43 = NULL,j_43 = NULL;
        ATerm i_43 = NULL;
        t = SSLgetAnnotations(not_null(b_43));
        {
          i_43 = t;
          if(((h_43 != NULL) && (h_43 != i_43)))
            _fail(i_43);
          else
            h_43 = i_43;
        }
        {
          t = not_null(c_43);
          {
            ATerm l_43 = NULL;
            t = e_52(t);
            {
              j_43 = t;
              {
                t = not_null(d_43);
                {
                  ATerm n_43 = NULL;
                  t = f_52(t);
                  {
                    l_43 = t;
                    {
                      ATerm o_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_43)), not_null(j_43)), not_null(h_43));
                      {
                        o_43 = t;
                        if(((n_43 != NULL) && (n_43 != o_43)))
                          _fail(o_43);
                        else
                          n_43 = o_43;
                      }
                      t = not_null(n_43);
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
  ATerm y_43 = NULL;
  y_43 = t;
  x_43 :
  if(((ATgetType(y_43) == AT_LIST) && ATisEmpty(y_43)))
    {
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm s_24;
        s_24 = t;
        {
          ATerm b_44 = NULL;
          t = SSLgetAnnotations(not_null(y_43));
          {
            b_44 = t;
            if(((a_44 != NULL) && (a_44 != b_44)))
              _fail(b_44);
            else
              a_44 = b_44;
          }
        }
        t = s_24;
        {
          ATerm d_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_44));
          {
            d_44 = t;
            if(((c_44 != NULL) && (c_44 != d_44)))
              _fail(d_44);
            else
              c_44 = d_44;
          }
          t = not_null(c_44);
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
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym__2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_23, not_null(k_44), not_null(l_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm t_24;
  t_24 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_25;
        t = t_80(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
        }
      }
  }
  t = t_24;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm t_44 = NULL;
      ATerm e_25;
      e_25 = t;
      {
        ATerm r_44 = NULL;
        ATerm s_44 = NULL;
        s_44 = t;
        if(((r_44 != NULL) && (r_44 != s_44)))
          _fail(s_44);
        else
          r_44 = s_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, not_null(r_44));
          t = set_config_0(t);
        }
      }
      t = e_25;
      {
        ATerm a_45 = NULL;
        a_45 = t;
        if(((t_44 != NULL) && (t_44 != a_45)))
          _fail(a_45);
        else
          t_44 = a_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_44));
      }
      return(t);
    }
    ATerm x_4 (ATerm t)
    {
      ATerm f_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              {
                t = t_80(t);
                t = Cons_2(t, _id, x_4);
              }
            }
          LocalPopChoice(i_25);
        }
      else
        {
          t = f_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_4, x_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  ATerm m_25;
  m_25 = t;
  {
    ATerm k_45 = NULL,m_45 = NULL,n_45 = NULL,t_45 = NULL;
    k_45 = t;
    g_45 :
    if(match_cons(k_45, sym__3))
      {
        m_45 = ATgetArgument(k_45, 0);
        n_45 = ATgetArgument(k_45, 1);
        t_45 = ATgetArgument(k_45, 2);
        {
          if(((h_45 != NULL) && (h_45 != m_45)))
            _fail(m_45);
          else
            h_45 = m_45;
          {
            if(((i_45 != NULL) && (i_45 != n_45)))
              _fail(n_45);
            else
              i_45 = n_45;
            {
              if(((j_45 != NULL) && (j_45 != t_45)))
                _fail(t_45);
              else
                j_45 = t_45;
              t = SSL_table_put(not_null(h_45), not_null(i_45), not_null(j_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm w_45 = NULL;
  ATerm n_25;
  n_25 = t;
  {
    t = term_t_25;
    t = table_put_0(t);
  }
  t = n_25;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm u_25 = t;
      int z_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_80(t);
          LocalPopChoice(z_25);
        }
      else
        {
          t = u_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_4);
    {
      ATerm e_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_26;
          h_26 = t;
          {
            ATerm i_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_m_24;
                t = get_config_0(t);
                LocalPopChoice(j_26);
              }
            else
              {
                t = i_26;
                t = fetch_1(t, Help_0);
              }
          }
          t = h_26;
          {
            t = system_usage_0(t);
            {
              t = term_p_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_26);
        }
      else
        {
          t = e_26;
          {
            ATerm o_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm x_45 = NULL;
                    x_45 = t;
                    if(((w_45 != NULL) && (w_45 != x_45)))
                      _fail(x_45);
                    else
                      w_45 = x_45;
                    return(t);
                  }
                  t = Undefined_1(t, b_5);
                  return(t);
                }
                t = fetch_1(t, a_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_45)), term_q_26);
                    return(t);
                  }
                  t = say_1(t, c_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_t_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(p_26);
              }
            else
              {
                t = o_26;
                {
                }
              }
          }
        }
      {
        ATerm r_26;
        r_26 = t;
        {
          t = term_n_21;
          t = table_destroy_0(t);
        }
        t = r_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  t = parse_options_1(t, p_78);
  {
    t = store_options_0(t);
    {
      t = r_78(t);
      {
        ATerm s_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_78);
            LocalPopChoice(x_26);
          }
        else
          {
            t = s_26;
            {
              ATerm y_26 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_78(t);
                  t = report_success_0(t);
                  LocalPopChoice(b_27);
                }
              else
                {
                  t = y_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  t = option_wrap_4(t, t_78, default_usage_0, _id, u_78);
  return(t);
}
ATerm io_ppgen_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = xtc_io_1(t, ppgen_0);
    return(t);
  }
  t = option_wrap_2(t, ppgen_options_0, d_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ppgen_0(t);
  return(t);
}