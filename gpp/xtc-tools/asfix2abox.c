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
ATerm term_g_30;
ATerm term_u_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_i_28;
ATerm term_k_27;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_k_8;
ATerm term_x_7;
ATerm term_w_7;
void init_constant_terms (void)
{
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_f_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_f_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_n_16);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_h_11);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_y_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_h_11);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_h_11);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_m_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_h_11);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__3, term_l_25, term_m_25, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm y_77 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_59 (ATerm));
ATerm Fst_0 (ATerm);
ATerm modification_time_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm g_65 (ATerm));
ATerm has_extension_1 (ATerm, ATerm w_73 (ATerm));
ATerm ensure_pp_table_parsed_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_config_p_0 (ATerm);
ATerm create_pp_table_args_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm build_impl_args_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm k_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm s_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm o_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm r_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm t_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm union_1 (ATerm, ATerm g_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm c_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm x_77 (ATerm));
ATerm assert_1 (ATerm, ATerm i_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm w_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm u_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm j_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm k_77 (ATerm));
ATerm asfix2abox_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm pp_options_0 (ATerm);
ATerm asfix2abox_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm crush_2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_81 (ATerm));
ATerm Program_1 (ATerm, ATerm b_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm f_51 (ATerm), ATerm g_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_72 (ATerm));
ATerm map_1 (ATerm, ATerm n_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm d_79 (ATerm), ATerm e_79 (ATerm));
ATerm io_asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm pass_conservative_0 (ATerm t)
{
  ATerm z_1 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_7;
      t = get_config_0(t);
      LocalPopChoice(v_7);
      t = (ATerm) ATinsert(ATempty, term_x_7);
    }
  else
    {
      t = z_1;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,d_1 = NULL;
  x_0 = t;
  f_0 :
  if(match_cons(x_0, sym__2))
    {
      y_0 = ATgetArgument(x_0, 0);
      d_1 = ATgetArgument(x_0, 1);
      {
        t = not_null(d_1);
        {
          ATerm y_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(z_7);
            }
          else
            {
              t = y_7;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm g_8 = t;
                  int h_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(h_8);
                    }
                  else
                    {
                      t = g_8;
                      {
                        ATerm j_1 = NULL;
                        t = Cons_2(t, _id, c_0);
                        {
                          ATerm k_1 = NULL;
                          k_1 = t;
                          if(((j_1 != NULL) && (j_1 != k_1)))
                            _fail(k_1);
                          else
                            j_1 = k_1;
                          t = (ATerm) ATinsert(CheckATermList(not_null(j_1)), not_null(y_0));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, c_0);
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
ATerm rename_file_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,z_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      z_2 = ATgetArgument(u_2, 1);
      t = SSL_rename(not_null(v_2), not_null(z_2));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm m_3 = NULL,n_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym_FILE_1))
    {
      n_3 = ATgetArgument(m_3, 0);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 = NULL;
            t = p_0(t);
            {
              p_3 = t;
              h_3 :
              if(match_cons(p_3, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), term_k_8);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(n_3);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_k_8;
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm l_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_3 = NULL;
                  ATerm s_3 = NULL;
                  t = p_0(t);
                  {
                    s_3 = t;
                    {
                      if(((r_3 != NULL) && (r_3 != s_3)))
                        _fail(s_3);
                      else
                        r_3 = s_3;
                      {
                        ATerm s_8 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_8 = t;
                            int w_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(w_8);
                              }
                            else
                              {
                                t = v_8;
                                {
                                  ATerm t_3 = NULL;
                                  t_3 = t;
                                  if(((n_3 != NULL) && (n_3 != t_3)))
                                    _fail(t_3);
                                  else
                                    n_3 = t_3;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = s_8;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(r_3));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_3));
                  ;
                  LocalPopChoice(m_8);
                }
              else
                {
                  t = l_8;
                  {
                    ATerm v_3 = NULL;
                    t = p_0(t);
                    {
                      v_3 = t;
                      if(((n_3 != NULL) && (n_3 != v_3)))
                        _fail(v_3);
                      else
                        n_3 = v_3;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_3));
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
ATerm xtc_transform_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, y_77, e_0);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  t = xtc_transform_1(t, h_0);
  return(t);
}
ATerm parse_to_temp_file_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm i_4 = NULL,j_4 = NULL;
  g_4 = t;
  {
    ATerm q_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_4));
      {
        t = xtc_parse_pp_table_0(t);
        t = rename_to_1(t, new_file_0);
      }
      return(t);
    }
    t = xtc_temp_files_1(t, q_0);
    {
      i_4 = t;
      f_4 :
      if(match_cons(i_4, sym_FILE_1))
        {
          j_4 = ATgetArgument(i_4, 0);
          {
            t = not_null(j_4);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_y_8;
                  return(t);
                }
                t = debug_1(t, s_0);
                return(t);
              }
              t = if_verbose2_1(t, r_0);
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
ATerm if_verbose2_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm z_8;
    z_8 = t;
    {
      ATerm o_4 = NULL;
      ATerm p_4 = NULL;
      t = term_e_9;
      {
        t = get_config_0(t);
        {
          p_4 = t;
          if(((o_4 != NULL) && (o_4 != p_4)))
            _fail(p_4);
          else
            o_4 = p_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), term_f_9);
        t = geq_0(t);
      }
    }
    t = z_8;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_4 = NULL;
  ATerm z_4 = NULL,a_5 = NULL;
  x_4 = t;
  {
    ATerm b_5 = NULL;
    ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
    t = not_null(x_4);
    {
      b_5 = t;
      {
        t = SSL_explode_term(not_null(b_5));
        {
          d_5 = t;
          u_4 :
          if(match_cons(d_5, sym__2))
            {
              e_5 = ATgetArgument(d_5, 0);
              f_5 = ATgetArgument(d_5, 1);
              v_4 :
              if(match_string(e_5, ""))
                {
                  w_4 :
                  if(((ATgetType(f_5) == AT_LIST) && !(ATisEmpty(f_5))))
                    {
                      g_5 = ATgetFirst((ATermList) f_5);
                      h_5 = (ATerm) ATgetNext((ATermList) f_5);
                      {
                        if(((a_5 != NULL) && (a_5 != g_5)))
                          _fail(g_5);
                        else
                          a_5 = g_5;
                        if(((z_4 != NULL) && (z_4 != h_5)))
                          _fail(h_5);
                        else
                          z_4 = h_5;
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
    t = not_null(a_5);
  }
  return(t);
}
ATerm modification_time_0 (ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  t = SSL_modification_time(not_null(m_5));
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
ATerm add_extension_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym__2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_5)), term_g_9), not_null(s_5));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lookup_pp_af_0 (ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm b_6 = NULL;
    b_6 = t;
    if(((a_6 != NULL) && (a_6 != b_6)))
      _fail(b_6);
    else
      a_6 = b_6;
  }
  t = h_9;
  {
    ATerm d_6 = NULL,f_6 = NULL;
    ATerm e_6 = NULL;
    e_6 = t;
    if(((d_6 != NULL) && (d_6 != e_6)))
      _fail(e_6);
    else
      d_6 = e_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_i_9);
      {
        t = add_extension_0(t);
        {
          t = file_exists_0(t);
          {
            f_6 = t;
            if(((c_6 != NULL) && (c_6 != f_6)))
              _fail(f_6);
            else
              c_6 = f_6;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(a_6));
      {
        ATerm k_9;
        k_9 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = k_9;
        {
          t = Fst_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_n_9;
                return(t);
              }
              t = debug_1(t, v_0);
              return(t);
            }
            t = if_verbose2_1(t, u_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm lookup_or_parse_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_t_9;
        return(t);
      }
      t = has_extension_1(t, w_0);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm k_6 = NULL;
        ATerm l_6 = NULL;
        l_6 = t;
        if(((k_6 != NULL) && (k_6 != l_6)))
          _fail(l_6);
        else
          k_6 = l_6;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_6)), term_y_9);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_65(t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = Cons_2(t, _id, n_6);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm q_6 = NULL;
  ATerm b_10;
  b_10 = t;
  {
    ATerm r_6 = NULL;
    t = w_73(t);
    {
      t = explode_string_0(t);
      {
        r_6 = t;
        if(((q_6 != NULL) && (q_6 != r_6)))
          _fail(r_6);
        else
          q_6 = r_6;
      }
    }
  }
  t = b_10;
  {
    ATerm d_10;
    d_10 = t;
    {
      t = explode_string_0(t);
      {
        ATerm z_0 (ATerm t)
        {
          ATerm s_6 = NULL;
          s_6 = t;
          if(((q_6 != NULL) && (q_6 != s_6)))
            _fail(s_6);
          else
            q_6 = s_6;
          return(t);
        }
        t = at_suffix_1(t, z_0);
      }
    }
    t = d_10;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      t = has_extension_1(t, a_1);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        t = must_be_pp_0(t);
        t = lookup_or_parse_0(t);
      }
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm h_10;
  h_10 = t;
  {
    t = error_0(t);
    {
      t = term_j_10;
      t = exit_0(t);
    }
  }
  t = h_10;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm n_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = n_10;
      {
        t = (ATerm) ATinsert(ATempty, term_w_10);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_pp_table_args_0 (ATerm t)
{
  ATerm x_6 = NULL,z_6 = NULL;
  t = get_config_p_0(t);
  {
    t = map_1(t, ensure_pp_table_parsed_0);
    {
      ATerm y_6 = NULL;
      y_6 = t;
      if(((x_6 != NULL) && (x_6 != y_6)))
        _fail(y_6);
      else
        x_6 = y_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(x_6));
        {
          t = separate_by_0(t);
          {
            ATerm a_7 = NULL;
            a_7 = t;
            if(((z_6 != NULL) && (z_6 != a_7)))
              _fail(a_7);
            else
              z_6 = a_7;
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(z_6)), term_v_10);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = term_x_10;
                    return(t);
                  }
                  t = debug_1(t, c_1);
                  return(t);
                }
                t = if_verbose5_1(t, b_1);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  t = SSL_int_to_string(not_null(e_7));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_7), not_null(l_7));
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = SSL_subtr(not_null(k_7), not_null(l_7));
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
  ATerm r_7 = NULL;
  ATerm s_7 = NULL,u_7 = NULL;
  ATerm t_7 = NULL;
  t = term_e_9;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = term_j_10;
      }
    {
      t_7 = t;
      if(((s_7 != NULL) && (s_7 != t_7)))
        _fail(t_7);
      else
        s_7 = t_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), term_j_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_7 = t;
          if(((r_7 != NULL) && (r_7 != u_7)))
            _fail(u_7);
          else
            r_7 = u_7;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_7)), term_e_9);
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL,e_8 = NULL;
  t = create_pp_table_args_0(t);
  {
    ATerm g_11;
    g_11 = t;
    {
      ATerm b_8 = NULL;
      t = term_h_11;
      {
        t = pass_verbose_0(t);
        {
          b_8 = t;
          if(((a_8 != NULL) && (a_8 != b_8)))
            _fail(b_8);
          else
            a_8 = b_8;
        }
      }
    }
    t = g_11;
    {
      ATerm j_11;
      j_11 = t;
      {
        ATerm d_8 = NULL;
        t = term_h_11;
        {
          t = create_pp_table_args_0(t);
          {
            d_8 = t;
            if(((c_8 != NULL) && (c_8 != d_8)))
              _fail(d_8);
            else
              c_8 = d_8;
          }
        }
      }
      t = j_11;
      {
        ATerm f_8 = NULL;
        t = term_h_11;
        {
          t = pass_conservative_0(t);
          {
            f_8 = t;
            if(((e_8 != NULL) && (e_8 != f_8)))
              _fail(f_8);
            else
              e_8 = f_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, not_null(a_8), not_null(c_8), not_null(e_8));
          t = concat_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_stdin_0))
    {
      ATerm q_8 = NULL;
      ATerm r_8 = NULL;
      t = term_k_11;
      {
        t = ReadFromFile_0(t);
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
      }
      t = not_null(q_8);
    }
  else
    {
      if(match_cons(o_8, sym_FILE_1))
        {
          p_8 = ATgetArgument(o_8, 0);
          {
            ATerm t_8 = NULL;
            ATerm u_8 = NULL;
            t = not_null(p_8);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_8 = t;
                  if(((t_8 != NULL) && (t_8 != u_8)))
                    _fail(u_8);
                  else
                    t_8 = u_8;
                }
              }
            }
            t = not_null(t_8);
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
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym__2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      t = SSL_WriteToBinaryFile(not_null(c_9), not_null(d_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm j_9 = NULL;
  ATerm l_9 = NULL;
  j_9 = t;
  {
    ATerm m_9 = NULL;
    t = xtc_new_file_0(t);
    {
      m_9 = t;
      {
        if(((l_9 != NULL) && (l_9 != m_9)))
          _fail(m_9);
        else
          l_9 = m_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(j_9));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(l_9);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_9));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, g_78, h_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  t = SSL_close_file(not_null(q_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      t = SSL_execvp(not_null(w_9), not_null(x_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  t = SSL_waitpid(not_null(c_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm m_10 = NULL;
  ATerm o_10 = NULL;
  m_10 = t;
  {
    t = fork_0(t);
    {
      o_10 = t;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_10 = NULL;
            q_10 = t;
            i_10 :
            if(match_int(q_10, 0))
              {
                t = not_null(m_10);
                t = k_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
              t = not_null(o_10);
              {
                t = waitpid_0(t);
                {
                  r_10 = t;
                  k_10 :
                  if(match_cons(r_10, sym_WaitStatus_3))
                    {
                      s_10 = ATgetArgument(r_10, 0);
                      t_10 = ATgetArgument(r_10, 1);
                      u_10 = ATgetArgument(r_10, 2);
                      l_10 :
                      if(match_int(s_10, 0))
                        {
                          t = not_null(m_10);
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
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym__2))
    {
      c_11 = ATgetArgument(b_11, 0);
      d_11 = ATgetArgument(b_11, 1);
      {
        ATerm e_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(d_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, e_1);
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
  ATerm i_11 = NULL;
  i_11 = t;
  t = SSL_table_keys(not_null(i_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm q_11 = NULL;
        ATerm s_11 = NULL;
        q_11 = t;
        {
          ATerm t_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(q_11));
          {
            t = table_get_0(t);
            {
              t_11 = t;
              if(((s_11 != NULL) && (s_11 != t_11)))
                _fail(t_11);
              else
                s_11 = t_11;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(s_11));
        }
        return(t);
      }
      t = map_1(t, f_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm n_11;
    n_11 = t;
    {
      ATerm y_11 = NULL;
      ATerm z_11 = NULL;
      t = term_e_9;
      {
        t = get_config_0(t);
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), term_p_11);
        t = geq_0(t);
      }
    }
    t = n_11;
    t = s_59(t);
    return(t);
  }
  t = try_1(t, g_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm r_11;
  r_11 = t;
  {
    ATerm c_12 = NULL;
    ATerm d_12 = NULL;
    d_12 = t;
    if(((c_12 != NULL) && (c_12 != d_12)))
      _fail(d_12);
    else
      c_12 = d_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(c_12));
      t = printnl_0(t);
    }
  }
  t = r_11;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm j_12 = NULL;
  ATerm l_12 = NULL,m_12 = NULL;
  j_12 = t;
  {
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_12)));
    {
      t = table_get_0(t);
      {
        n_12 = t;
        h_12 :
        if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
          {
            o_12 = ATgetFirst((ATermList) n_12);
            r_12 = (ATerm) ATgetNext((ATermList) n_12);
            i_12 :
            if(match_cons(o_12, sym__2))
              {
                p_12 = ATgetArgument(o_12, 0);
                q_12 = ATgetArgument(o_12, 1);
                {
                  if(((l_12 != NULL) && (l_12 != p_12)))
                    _fail(p_12);
                  else
                    l_12 = p_12;
                  if(((m_12 != NULL) && (m_12 != q_12)))
                    _fail(q_12);
                  else
                    m_12 = q_12;
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
    t = not_null(m_12);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym__2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      {
        ATerm d_13 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_12)));
        {
          t = table_get_0(t);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
              e_13 = t;
              w_12 :
              if(match_cons(e_13, sym__2))
                {
                  f_13 = ATgetArgument(e_13, 0);
                  g_13 = ATgetArgument(e_13, 1);
                  {
                    if(((a_13 != NULL) && (a_13 != f_13)))
                      _fail(f_13);
                    else
                      a_13 = f_13;
                    if(((d_13 != NULL) && (d_13 != g_13)))
                      _fail(g_13);
                    else
                      d_13 = g_13;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, h_1);
          }
        }
        t = not_null(d_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = filter_1(t, o_75);
              return(t);
            }
            t = Cons_2(t, o_75, i_1);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
              l_13 = t;
              k_13 :
              if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
                {
                  m_13 = ATgetFirst((ATermList) l_13);
                  n_13 = (ATerm) ATgetNext((ATermList) l_13);
                  {
                    t = not_null(n_13);
                    t = filter_1(t, o_75);
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
ATerm repeat_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm q_13 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = n_74(t);
      t = q_13(t);
      return(t);
    }
    t = try_1(t, l_1);
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm e_12;
  e_12 = t;
  {
    ATerm m_1 (ATerm t)
    {
      t = term_g_12;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm k_12 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_12;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, m_1);
  }
  t = e_12;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm s_12;
    s_12 = t;
    {
      ATerm s_13 = NULL;
      ATerm t_13 = NULL;
      t = term_e_9;
      {
        t = get_config_0(t);
        {
          t_13 = t;
          if(((s_13 != NULL) && (s_13 != t_13)))
            _fail(t_13);
          else
            s_13 = t_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_t_12);
        t = geq_0(t);
      }
    }
    t = s_12;
    t = r_59(t);
    return(t);
  }
  t = try_1(t, n_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm u_12;
    u_12 = t;
    {
      ATerm w_13 = NULL;
      ATerm x_13 = NULL;
      t = term_e_9;
      {
        t = get_config_0(t);
        {
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_v_12);
        t = geq_0(t);
      }
    }
    t = u_12;
    t = t_59(t);
    return(t);
  }
  t = try_1(t, o_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      if(((c_14 != NULL) && (c_14 != d_14)))
        _fail(d_14);
      else
        c_14 = d_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
    {
      k_14 = ATgetFirst((ATermList) j_14);
      l_14 = (ATerm) ATgetNext((ATermList) j_14);
      {
        t = l_70(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm o_14 = NULL;
            o_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(o_14));
              t = k_70(t);
            }
            return(t);
          }
          t = fetch_1(t, p_1);
        }
        t = not_null(l_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        t = not_null(v_14);
        {
          ATerm a_15 (ATerm t)
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_14);
                ;
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                {
                  ATerm h_13 = t;
                  int i_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_1 (ATerm t)
                      {
                        t = not_null(w_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_70, q_1);
                      t = a_15(t);
                      ;
                      LocalPopChoice(i_13);
                    }
                  else
                    {
                      t = h_13;
                      t = Cons_2(t, _id, a_15);
                    }
                }
              }
            return(t);
          }
          t = a_15(t);
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
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__3))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      i_15 = ATgetArgument(f_15, 2);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm m_15 = NULL;
          ATerm n_15 = NULL,p_15 = NULL;
          ATerm o_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(h_15));
          {
            ATerm o_13 = t;
            int p_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(p_13);
              }
            else
              {
                t = o_13;
                t = (ATerm) ATempty;
              }
            {
              o_15 = t;
              if(((n_15 != NULL) && (n_15 != o_15)))
                _fail(o_15);
              else
                n_15 = o_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(i_15));
            {
              t = union_0(t);
              {
                p_15 = t;
                if(((m_15 != NULL) && (m_15 != p_15)))
                  _fail(p_15);
                else
                  m_15 = p_15;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_15), not_null(h_15), not_null(m_15));
            t = set_0(t);
          }
        }
        t = j_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym__2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      {
        t = not_null(z_15);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
            c_16 = t;
            v_15 :
            if(match_cons(c_16, sym__2))
              {
                d_16 = ATgetArgument(c_16, 0);
                e_16 = ATgetArgument(c_16, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_15), not_null(d_16), not_null(e_16));
                  t = c_60(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_1);
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
  ATerm k_16 = NULL;
  ATerm r_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_16 = NULL;
      l_16 = t;
      {
        if(((k_16 != NULL) && (k_16 != l_16)))
          _fail(l_16);
        else
          k_16 = l_16;
        t = SSL_ReadFromFile(not_null(k_16));
      }
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = r_13;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_v_13;
          return(t);
        }
        t = debug_1(t, s_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm p_16 = NULL;
  ATerm r_16 = NULL;
  p_16 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = term_y_13;
        return(t);
      }
      t = debug_1(t, u_1);
      return(t);
    }
    t = if_verbose5_1(t, t_1);
    {
      ATerm z_13 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Imported_1, not_null(p_16)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_13;
        }
      {
        ATerm e_14;
        e_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_11, term_f_14, (ATerm) ATinsert(ATempty, not_null(p_16)));
          t = table_put_0(t);
        }
        t = e_14;
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_g_14;
              return(t);
            }
            t = debug_1(t, w_1);
            return(t);
          }
          t = if_verbose4_1(t, v_1);
          {
            ATerm h_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = h_14;
                t = (ATerm) ATempty;
              }
            {
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_n_14;
                  return(t);
                }
                t = say_1(t, y_1);
                return(t);
              }
              t = if_verbose6_1(t, x_1);
              {
                ATerm s_16 = NULL;
                s_16 = t;
                if(((r_16 != NULL) && (r_16 != s_16)))
                  _fail(s_16);
                else
                  r_16 = s_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(r_16));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = term_p_14;
                          return(t);
                        }
                        t = say_1(t, b_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, a_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_v_11, (ATerm)ATmakeAppl(sym_Imported_1, not_null(p_16)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm d_2 (ATerm t)
                              {
                                t = term_n_14;
                                return(t);
                              }
                              t = say_1(t, d_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, c_2);
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
  ATerm w_16 = NULL;
  w_16 = t;
  t = SSL_getenv(not_null(w_16));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_14;
            t = getenv_0(t);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_b_15;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose5_1(t, e_2);
  {
    ATerm c_15;
    c_15 = t;
    {
      ATerm d_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_15;
          t = table_get_0(t);
          ;
          LocalPopChoice(j_15);
        }
      else
        {
          t = d_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = c_15;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_l_15;
          return(t);
        }
        t = debug_1(t, h_2);
        return(t);
      }
      t = if_verbose5_1(t, g_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = debug_1(t, j_2);
        return(t);
      }
      t = if_verbose5_1(t, i_2);
      {
        t = xtc_load_0(t);
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm k_2 (ATerm t)
            {
              ATerm l_2 (ATerm t)
              {
                t = term_s_15;
                return(t);
              }
              t = debug_1(t, l_2);
              return(t);
            }
            t = if_verbose5_1(t, k_2);
          }
        }
      }
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm a_17 = NULL;
        ATerm b_17 = NULL;
        b_17 = t;
        if(((a_17 != NULL) && (a_17 != b_17)))
          _fail(b_17);
        else
          a_17 = b_17;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_16), not_null(a_17)), term_a_16);
          {
            t = error_0(t);
            {
              ATerm m_2 (ATerm t)
              {
                t = term_v_11;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_2 (ATerm t)
                    {
                      t = term_f_16;
                      return(t);
                    }
                    t = debug_1(t, n_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, m_2);
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
ATerm xtc_command_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm f_17 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm g_17 = NULL;
    t = x_77(t);
    {
      t = xtc_find_warning_0(t);
      {
        g_17 = t;
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
      }
    }
  }
  t = g_16;
  {
    ATerm h_16;
    h_16 = t;
    {
      ATerm h_17 = NULL;
      ATerm i_17 = NULL;
      i_17 = t;
      if(((h_17 != NULL) && (h_17 != i_17)))
        _fail(i_17);
      else
        h_17 = i_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
        t = call_0(t);
      }
    }
    t = h_16;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym__2))
    {
      r_17 = ATgetArgument(q_17, 0);
      s_17 = ATgetArgument(q_17, 1);
      {
        ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
        ATerm i_16;
        i_16 = t;
        {
          ATerm y_17 = NULL;
          ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
          t = i_72(t);
          {
            y_17 = t;
            {
              if(((v_17 != NULL) && (v_17 != y_17)))
                _fail(y_17);
              else
                v_17 = y_17;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_17), not_null(r_17), not_null(s_17));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_16 = t;
                    int m_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), term_n_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(m_16);
                      }
                    else
                      {
                        t = j_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_17 = t;
                      o_17 :
                      if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
                        {
                          a_18 = ATgetFirst((ATermList) z_17);
                          b_18 = (ATerm) ATgetNext((ATermList) z_17);
                          {
                            if(((w_17 != NULL) && (w_17 != a_18)))
                              _fail(a_18);
                            else
                              w_17 = a_18;
                            {
                              if(((x_17 != NULL) && (x_17 != b_18)))
                                _fail(b_18);
                              else
                                x_17 = b_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_17), term_n_16, (ATerm) ATinsert(CheckATermList(not_null(x_17)), (ATerm) ATinsert(CheckATermList(not_null(w_17)), not_null(r_17))));
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
        t = i_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm o_16;
  o_16 = t;
  {
    t = w_72(t);
    {
      ATerm o_2 (ATerm t)
      {
        t = term_q_16;
        return(t);
      }
      t = debug_1(t, o_2);
    }
  }
  t = o_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
      l_18 = t;
      g_18 :
      if(match_cons(l_18, sym__2))
        {
          m_18 = ATgetArgument(l_18, 0);
          n_18 = ATgetArgument(l_18, 1);
          {
            if(((k_18 != NULL) && (k_18 != m_18)))
              _fail(m_18);
            else
              k_18 = m_18;
            if(((j_18 != NULL) && (j_18 != n_18)))
              _fail(n_18);
            else
              j_18 = n_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_16);
      t = SSL_open_file(not_null(k_18), not_null(j_18));
    }
  else
    {
      t = t_16;
      {
        ATerm o_18 = NULL;
        ATerm p_18 = NULL;
        ATerm p_2 (ATerm t)
        {
          t = term_v_16;
          return(t);
        }
        t = obsolete_1(t, p_2);
        {
          o_18 = t;
          {
            if(((k_18 != NULL) && (k_18 != o_18)))
              _fail(o_18);
            else
              k_18 = o_18;
            {
              ATerm x_16;
              x_16 = t;
              {
                ATerm q_18 = NULL;
                t = term_y_16;
                {
                  q_18 = t;
                  if(((p_18 != NULL) && (p_18 != q_18)))
                    _fail(q_18);
                  else
                    p_18 = q_18;
                }
              }
              t = x_16;
              t = SSL_open_file(not_null(k_18), not_null(p_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm w_18 = NULL;
  ATerm y_18 = NULL;
  w_18 = t;
  {
    ATerm z_16;
    z_16 = t;
    {
      ATerm a_19 = NULL;
      t = term_c_17;
      {
        a_19 = t;
        if(((y_18 != NULL) && (y_18 != a_19)))
          _fail(a_19);
        else
          y_18 = a_19;
      }
    }
    t = z_16;
    {
      t = SSL_open_file(not_null(w_18), not_null(y_18));
      t = SSL_close_file(not_null(w_18));
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
  ATerm e_19 = NULL;
  ATerm f_19 = NULL;
  t = term_h_11;
  {
    t = new_0(t);
    {
      f_19 = t;
      if(((e_19 != NULL) && (e_19 != f_19)))
        _fail(f_19);
      else
        e_19 = f_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), term_d_17);
    {
      t = conc_strings_0(t);
      {
        ATerm q_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, q_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm j_19 = NULL;
  t = new_file_0(t);
  {
    j_19 = t;
    {
      ATerm e_17;
      e_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_y_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_h_11);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_j_17;
                return(t);
              }
              t = assert_1(t, r_2);
            }
          }
        }
      }
      t = e_17;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  s_19 :
  if(match_cons(u_19, sym_stdin_0))
    {
      ATerm w_19 = NULL;
      ATerm x_19 = NULL;
      ATerm d_20 = NULL;
      t = xtc_new_file_0(t);
      {
        x_19 = t;
        {
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
          {
            ATerm e_20 = NULL;
            t = o_0(t);
            {
              e_20 = t;
              if(((d_20 != NULL) && (d_20 != e_20)))
                _fail(e_20);
              else
                d_20 = e_20;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_19)), term_k_17));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(w_19);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_19));
    }
  else
    {
      if(match_cons(u_19, sym_FILE_1))
        {
          v_19 = ATgetArgument(u_19, 0);
          {
            ATerm g_20 = NULL;
            ATerm h_20 = NULL;
            t = not_null(v_19);
            {
              ATerm i_20 = NULL;
              t = xtc_new_file_0(t);
              {
                h_20 = t;
                {
                  if(((g_20 != NULL) && (g_20 != h_20)))
                    _fail(h_20);
                  else
                    g_20 = h_20;
                  {
                    ATerm j_20 = NULL;
                    t = o_0(t);
                    {
                      j_20 = t;
                      if(((i_20 != NULL) && (i_20 != j_20)))
                        _fail(j_20);
                      else
                        i_20 = j_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_20)), term_k_17), not_null(v_19)), term_l_17));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(g_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_20));
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
  ATerm b_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_stdin_0))
    {
      ATerm d_21 = NULL,f_21 = NULL;
      ATerm m_17;
      m_17 = t;
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
      t = m_17;
      {
        ATerm g_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(d_21));
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
ATerm FILE_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  o_21 :
  if(match_cons(u_21, sym_FILE_1))
    {
      v_21 = ATgetArgument(u_21, 0);
      {
        ATerm c_22 = NULL,l_22 = NULL;
        ATerm d_22 = NULL;
        t = SSLgetAnnotations(not_null(u_21));
        {
          d_22 = t;
          if(((c_22 != NULL) && (c_22 != d_22)))
            _fail(d_22);
          else
            c_22 = d_22;
        }
        {
          t = not_null(v_21);
          {
            ATerm o_22 = NULL;
            t = u_57(t);
            {
              l_22 = t;
              {
                ATerm p_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_22)), not_null(c_22));
                {
                  p_22 = t;
                  if(((o_22 != NULL) && (o_22 != p_22)))
                    _fail(p_22);
                  else
                    o_22 = p_22;
                }
                t = not_null(o_22);
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
ATerm xtc_transform_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  ATerm n_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(c_18);
        }
      else
        {
          t = u_17;
          t = stdin_0(t);
        }
      LocalPopChoice(t_17);
      t = xtc_transform_file_2(t, z_77, a_78);
    }
  else
    {
      t = n_17;
      t = xtc_transform_term_2(t, z_77, a_78);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      t = SSL_copy(not_null(y_22), not_null(z_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym_stderr_0))
    {
      ATerm l_23 = NULL,n_23 = NULL;
      ATerm d_18;
      d_18 = t;
      {
        ATerm m_23 = NULL;
        t = SSLgetAnnotations(not_null(j_23));
        {
          m_23 = t;
          if(((l_23 != NULL) && (l_23 != m_23)))
            _fail(m_23);
          else
            l_23 = m_23;
        }
      }
      t = d_18;
      {
        ATerm o_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_23));
        {
          o_23 = t;
          if(((n_23 != NULL) && (n_23 != o_23)))
            _fail(o_23);
          else
            n_23 = o_23;
        }
        t = not_null(n_23);
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
  ATerm w_23 = NULL;
  w_23 = t;
  v_23 :
  if(match_cons(w_23, sym_stdout_0))
    {
      ATerm a_24 = NULL,h_24 = NULL;
      ATerm e_18;
      e_18 = t;
      {
        ATerm g_24 = NULL;
        t = SSLgetAnnotations(not_null(w_23));
        {
          g_24 = t;
          if(((a_24 != NULL) && (a_24 != g_24)))
            _fail(g_24);
          else
            a_24 = g_24;
        }
      }
      t = e_18;
      {
        ATerm i_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(a_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        t = not_null(h_24);
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
  ATerm x_24 = NULL,z_24 = NULL;
  x_24 = t;
  t_24 :
  if(match_cons(x_24, sym_FILE_1))
    {
      z_24 = ATgetArgument(x_24, 0);
      {
        ATerm f_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL;
            ATerm c_25 = NULL;
            t = m_0(t);
            {
              c_25 = t;
              {
                if(((b_25 != NULL) && (b_25 != c_25)))
                  _fail(c_25);
                else
                  b_25 = c_25;
                {
                  ATerm i_18 = t;
                  int r_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(r_18);
                    }
                  else
                    {
                      t = i_18;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(b_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_24));
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = f_18;
            {
              ATerm s_18 = t;
              int t_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_25 = NULL;
                  ATerm f_25 = NULL;
                  t = m_0(t);
                  {
                    f_25 = t;
                    {
                      if(((e_25 != NULL) && (e_25 != f_25)))
                        _fail(f_25);
                      else
                        e_25 = f_25;
                      {
                        ATerm u_18 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_18 = t;
                            int x_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(x_18);
                              }
                            else
                              {
                                t = v_18;
                                {
                                  ATerm z_18 = t;
                                  int b_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_19);
                                    }
                                  else
                                    {
                                      t = z_18;
                                      {
                                        ATerm g_25 = NULL;
                                        g_25 = t;
                                        if(((z_24 != NULL) && (z_24 != g_25)))
                                          _fail(g_25);
                                        else
                                          z_24 = g_25;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_18;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(e_25));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_24));
                  ;
                  LocalPopChoice(t_18);
                }
              else
                {
                  t = s_18;
                  {
                    ATerm i_25 = NULL;
                    t = m_0(t);
                    {
                      i_25 = t;
                      if(((z_24 != NULL) && (z_24 != i_25)))
                        _fail(i_25);
                      else
                        z_24 = i_25;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_24));
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
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
    {
      t_25 = ATgetFirst((ATermList) s_25);
      u_25 = (ATerm) ATgetNext((ATermList) s_25);
      t = not_null(u_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym__2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      {
        ATerm c_19;
        c_19 = t;
        {
          ATerm f_26 = NULL;
          ATerm g_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), not_null(c_26));
          {
            ATerm d_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(g_19);
              }
            else
              {
                t = d_19;
                t = (ATerm) ATempty;
              }
            {
              g_26 = t;
              if(((f_26 != NULL) && (f_26 != g_26)))
                _fail(g_26);
              else
                f_26 = g_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_26), not_null(c_26), not_null(f_26));
            t = table_put_0(t);
          }
        }
        t = c_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  ATerm h_19;
  h_19 = t;
  {
    ATerm q_26 = NULL;
    ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
    t = f_72(t);
    {
      q_26 = t;
      {
        if(((p_26 != NULL) && (p_26 != q_26)))
          _fail(q_26);
        else
          p_26 = q_26;
        {
          ATerm i_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), term_n_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = i_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_26 = t;
            m_26 :
            if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
              {
                s_26 = ATgetFirst((ATermList) r_26);
                t_26 = (ATerm) ATgetNext((ATermList) r_26);
                {
                  if(((o_26 != NULL) && (o_26 != s_26)))
                    _fail(s_26);
                  else
                    o_26 = s_26;
                  {
                    if(((n_26 != NULL) && (n_26 != t_26)))
                      _fail(t_26);
                    else
                      n_26 = t_26;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_26), term_n_16, not_null(n_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_26);
                          {
                            ATerm s_2 (ATerm t)
                            {
                              ATerm u_26 = NULL;
                              u_26 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(u_26));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_2);
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
  t = h_19;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_remove(not_null(a_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm))
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_63(t);
      t = l_63(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        t = l_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm f_27 = NULL;
  ATerm n_19;
  n_19 = t;
  {
    ATerm g_27 = NULL;
    ATerm h_27 = NULL;
    t = e_72(t);
    {
      g_27 = t;
      {
        if(((f_27 != NULL) && (f_27 != g_27)))
          _fail(g_27);
        else
          f_27 = g_27;
        {
          ATerm i_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), term_n_16);
          {
            ATerm o_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_19);
              }
            else
              {
                t = o_19;
                t = (ATerm) ATempty;
              }
            {
              i_27 = t;
              if(((h_27 != NULL) && (h_27 != i_27)))
                _fail(i_27);
              else
                h_27 = i_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_27), term_n_16, (ATerm) ATinsert(CheckATermList(not_null(h_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_19;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = begin_scope_1(t, w_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm q_19;
      q_19 = t;
      {
        ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
        ATerm r_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_19;
            t = table_get_0(t);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = r_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_27 = t;
          m_27 :
          if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
            {
              q_27 = ATgetFirst((ATermList) p_27);
              r_27 = (ATerm) ATgetNext((ATermList) p_27);
              {
                if(((o_27 != NULL) && (o_27 != q_27)))
                  _fail(q_27);
                else
                  o_27 = q_27;
                {
                  if(((n_27 != NULL) && (n_27 != r_27)))
                    _fail(r_27);
                  else
                    n_27 = r_27;
                  {
                    t = not_null(o_27);
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, y_2);
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
      t = q_19;
      {
        ATerm a_3 (ATerm t)
        {
          t = term_j_17;
          return(t);
        }
        t = end_scope_1(t, a_3);
      }
      return(t);
    }
    t = restore_always_2(t, j_77, x_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 = NULL;
        ATerm v_27 = NULL;
        t = term_l_17;
        {
          t = get_config_0(t);
          {
            v_27 = t;
            if(((u_27 != NULL) && (u_27 != v_27)))
              _fail(v_27);
            else
              u_27 = v_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_27));
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = term_k_11;
      }
    {
      t = k_77(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_17;
              t = get_config_0(t);
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              t = term_k_8;
            }
          return(t);
        }
        t = copy_to_1(t, c_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, b_3);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm e_3 (ATerm t)
    {
      t = term_f_20;
      return(t);
    }
    ATerm f_3 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_20), term_m_20), term_l_20), term_k_20);
      return(t);
    }
    t = xtc_transform_2(t, e_3, f_3);
    {
      ATerm g_3 (ATerm t)
      {
        t = term_o_20;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_h_11;
        t = build_impl_args_0(t);
        return(t);
      }
      t = xtc_transform_2(t, g_3, i_3);
    }
    return(t);
  }
  t = xtc_io_1(t, d_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm y_27 = NULL;
    y_27 = t;
    x_27 :
    if(!(match_string(y_27, "-v")))
      {
        if(!(match_string(y_27, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_q_20;
    t = set_config_0(t);
    t = term_r_20;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_s_20;
    return(t);
  }
  t = Option_3(t, j_3, k_3, o_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm b_28 = NULL;
    b_28 = t;
    z_27 :
    if(!(match_string(b_28, "-k")))
      {
        if(!(match_string(b_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm t_20;
    t_20 = t;
    {
      ATerm c_28 = NULL;
      ATerm d_28 = NULL;
      t = string_to_int_0(t);
      {
        d_28 = t;
        if(((c_28 != NULL) && (c_28 != d_28)))
          _fail(d_28);
        else
          c_28 = d_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(c_28));
        t = set_config_0(t);
      }
    }
    t = t_20;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = ArgOption_3(t, q_3, u_3, w_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_string_to_int(not_null(g_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm o_28 = NULL;
        o_28 = t;
        j_28 :
        if(!(match_string(o_28, "-S")))
          {
            if(!(match_string(o_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_z_20;
        t = set_config_0(t);
        t = term_c_21;
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_h_21;
        return(t);
      }
      t = Option_3(t, x_3, y_3, z_3);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm p_28 = NULL;
              p_28 = t;
              k_28 :
              if(!(match_string(p_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm s_28 = NULL;
              ATerm k_21;
              k_21 = t;
              {
                ATerm q_28 = NULL;
                ATerm r_28 = NULL;
                t = string_to_int_0(t);
                {
                  r_28 = t;
                  if(((q_28 != NULL) && (q_28 != r_28)))
                    _fail(r_28);
                  else
                    q_28 = r_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(q_28));
                  t = set_config_0(t);
                }
              }
              t = k_21;
              {
                ATerm t_28 = NULL;
                t_28 = t;
                if(((s_28 != NULL) && (s_28 != t_28)))
                  _fail(t_28);
                else
                  s_28 = t_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_28));
              }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_l_21;
              return(t);
            }
            t = ArgOption_3(t, a_4, b_4, c_4);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm u_28 = NULL;
                u_28 = t;
                n_28 :
                if(!(match_string(u_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = term_n_21;
                t = set_config_0(t);
                t = term_p_21;
                return(t);
              }
              ATerm h_4 (ATerm t)
              {
                t = term_q_21;
                return(t);
              }
              t = Option_3(t, d_4, e_4, h_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm t_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = t_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    x_28 :
    if(!(match_string(a_29, "-o")))
      {
        if(!(match_string(a_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm d_29 = NULL;
    ATerm x_21;
    x_21 = t;
    {
      ATerm b_29 = NULL;
      ATerm c_29 = NULL;
      c_29 = t;
      if(((b_29 != NULL) && (b_29 != c_29)))
        _fail(c_29);
      else
        b_29 = c_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_17, not_null(b_29));
        t = set_config_0(t);
      }
    }
    t = x_21;
    {
      ATerm e_29 = NULL;
      e_29 = t;
      if(((d_29 != NULL) && (d_29 != e_29)))
        _fail(e_29);
      else
        d_29 = e_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_29));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_y_21;
    return(t);
  }
  t = ArgOption_3(t, k_4, l_4, m_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm i_29 = NULL;
          i_29 = t;
          h_29 :
          if(!(match_string(i_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_e_22;
          t = set_config_0(t);
          t = term_f_22;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_g_22;
          return(t);
        }
        t = Option_3(t, n_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm n_29 = NULL;
    n_29 = t;
    j_29 :
    if(!(match_string(n_29, "-i")))
      {
        if(!(match_string(n_29, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm s_29 = NULL;
    ATerm h_22;
    h_22 = t;
    {
      ATerm o_29 = NULL;
      ATerm p_29 = NULL;
      p_29 = t;
      if(((o_29 != NULL) && (o_29 != p_29)))
        _fail(p_29);
      else
        o_29 = p_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(o_29));
        t = set_config_0(t);
      }
    }
    t = h_22;
    {
      ATerm t_29 = NULL;
      t_29 = t;
      if(((s_29 != NULL) && (s_29 != t_29)))
        _fail(t_29);
      else
        s_29 = t_29;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_29));
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_i_22;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, y_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym__2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm i_30 = NULL;
        ATerm j_30 = NULL,l_30 = NULL;
        ATerm k_30 = NULL;
        t = not_null(e_30);
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              t = (ATerm) ATempty;
            }
          {
            k_30 = t;
            if(((j_30 != NULL) && (j_30 != k_30)))
              _fail(k_30);
            else
              j_30 = k_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_30), not_null(j_30));
          {
            t = conc_0(t);
            {
              l_30 = t;
              if(((i_30 != NULL) && (i_30 != l_30)))
                _fail(l_30);
              else
                i_30 = l_30;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_22, not_null(e_30), not_null(i_30));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  w_30 = t;
  u_30 :
  if(match_string(w_30, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
        {
          x_30 = ATgetFirst((ATermList) w_30);
          y_30 = (ATerm) ATgetNext((ATermList) w_30);
          v_30 :
          if(((ATgetType(y_30) == AT_LIST) && !(ATisEmpty(y_30))))
            {
              z_30 = ATgetFirst((ATermList) y_30);
              a_31 = (ATerm) ATgetNext((ATermList) y_30);
              {
                ATerm e_31 = NULL;
                ATerm t_22;
                t_22 = t;
                {
                  t = not_null(x_30);
                  t = j_0(t);
                }
                t = t_22;
                {
                  ATerm f_31 = NULL;
                  t = not_null(z_30);
                  {
                    t = k_0(t);
                    {
                      f_31 = t;
                      if(((e_31 != NULL) && (e_31 != f_31)))
                        _fail(f_31);
                      else
                        e_31 = f_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_31)), not_null(e_31));
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
ATerm pp_options_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm l_31 = NULL;
    l_31 = t;
    j_31 :
    if(!(match_string(l_31, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm u_22;
    u_22 = t;
    {
      ATerm m_31 = NULL;
      ATerm n_31 = NULL;
      n_31 = t;
      if(((m_31 != NULL) && (m_31 != n_31)))
        _fail(n_31);
      else
        m_31 = n_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATempty, not_null(m_31)));
        t = extend_config_0(t);
      }
    }
    t = u_22;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_v_22;
    return(t);
  }
  t = ArgOption_3(t, c_5, i_5, j_5);
  return(t);
}
ATerm asfix2abox_options_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0(t);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm k_5 (ATerm t)
              {
                ATerm q_31 = NULL;
                q_31 = t;
                p_31 :
                if(!(match_string(q_31, "-c")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_5 (ATerm t)
              {
                ATerm e_23;
                e_23 = t;
                {
                  t = term_g_23;
                  t = set_config_0(t);
                }
                t = e_23;
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = term_h_23;
                return(t);
              }
              t = Option_3(t, k_5, l_5, n_5);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm t_31 = NULL;
  ATerm k_23;
  k_23 = t;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm u_31 = NULL,v_31 = NULL;
      u_31 = t;
      s_31 :
      if(match_cons(u_31, sym_Program_1))
        {
          v_31 = ATgetArgument(u_31, 0);
          if(((t_31 != NULL) && (t_31 != v_31)))
            _fail(v_31);
          else
            t_31 = v_31;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_23), not_null(t_31)), term_p_23));
      {
        t = printnl_0(t);
        {
          t = term_j_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATempty, term_r_23));
  {
    t = printnl_0(t);
    {
      t = term_j_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  t = SSL_TicksToSeconds(not_null(y_31));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym__2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_32), not_null(f_32));
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = SSL_addr(not_null(e_32), not_null(f_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm u_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_70(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = u_23;
      {
        ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
        o_32 = t;
        n_32 :
        if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
          {
            p_32 = ATgetFirst((ATermList) o_32);
            q_32 = (ATerm) ATgetNext((ATermList) o_32);
            {
              ATerm v_32 = NULL;
              ATerm w_32 = NULL;
              t = not_null(q_32);
              {
                t = foldr_2(t, x_70, y_70);
                {
                  w_32 = t;
                  if(((v_32 != NULL) && (v_32 != w_32)))
                    _fail(w_32);
                  else
                    v_32 = w_32;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_32), not_null(v_32));
                t = y_70(t);
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
ATerm crush_2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm f_33 = NULL;
  ATerm h_33 = NULL;
  f_33 = t;
  {
    ATerm i_33 = NULL;
    ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
    t = not_null(f_33);
    {
      i_33 = t;
      {
        t = SSL_explode_term(not_null(i_33));
        {
          k_33 = t;
          e_33 :
          if(match_cons(k_33, sym__2))
            {
              l_33 = ATgetArgument(k_33, 0);
              m_33 = ATgetArgument(k_33, 1);
              if(((h_33 != NULL) && (h_33 != m_33)))
                _fail(m_33);
              else
                h_33 = m_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_33);
      t = foldr_2(t, v_69, w_69);
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
    ATerm p_5 (ATerm t)
    {
      t = term_y_20;
      return(t);
    }
    t = crush_2(t, p_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  t_33 :
  if(match_cons(u_33, sym__2))
    {
      v_33 = ATgetArgument(u_33, 0);
      w_33 = ATgetArgument(u_33, 1);
      {
        ATerm y_23;
        y_23 = t;
        {
          ATerm z_23 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_33), not_null(w_33));
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = z_23;
              t = SSL_gtr(not_null(v_33), not_null(w_33));
            }
        }
        t = y_23;
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
  ATerm r_34 = NULL;
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
      s_34 = t;
      m_34 :
      if(match_cons(s_34, sym__2))
        {
          t_34 = ATgetArgument(s_34, 0);
          u_34 = ATgetArgument(s_34, 1);
          {
            if(((r_34 != NULL) && (r_34 != t_34)))
              _fail(t_34);
            else
              r_34 = t_34;
            if(((r_34 != NULL) && (r_34 != u_34)))
              _fail(u_34);
            else
              r_34 = u_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm e_24;
    e_24 = t;
    {
      ATerm z_34 = NULL;
      ATerm a_35 = NULL;
      t = term_e_9;
      {
        t = get_config_0(t);
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), term_j_10);
        t = geq_0(t);
      }
    }
    t = e_24;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, u_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm h_35 = NULL,j_35 = NULL;
    ATerm f_24;
    f_24 = t;
    {
      ATerm i_35 = NULL;
      t = run_time_0(t);
      {
        i_35 = t;
        if(((h_35 != NULL) && (h_35 != i_35)))
          _fail(i_35);
        else
          h_35 = i_35;
      }
    }
    t = f_24;
    {
      ATerm k_35 = NULL;
      t = term_j_24;
      {
        t = get_config_0(t);
        {
          k_35 = t;
          if(((j_35 != NULL) && (j_35 != k_35)))
            _fail(k_35);
          else
            j_35 = k_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_24), not_null(h_35)), term_k_24), not_null(j_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_5);
  {
    t = term_y_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym_Version_0))
    {
      ATerm t_35 = NULL,v_35 = NULL;
      ATerm m_24;
      m_24 = t;
      {
        ATerm u_35 = NULL;
        t = SSLgetAnnotations(not_null(r_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
      }
      t = m_24;
      {
        ATerm w_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_35));
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
        t = not_null(v_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_5);
  t = t_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  t = SSL_table_create(not_null(b_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  {
    ATerm r_24;
    r_24 = t;
    {
      t = term_s_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_u_24, not_null(f_36));
          t = table_put_0(t);
        }
      }
    }
    t = r_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_table_destroy(not_null(j_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  t = SSL_exit(not_null(n_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(((ATgetType(r_36) == AT_LIST) && ATisEmpty(r_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
        {
          s_36 = ATgetFirst((ATermList) r_36);
          t_36 = (ATerm) ATgetNext((ATermList) r_36);
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
  ATerm v_24;
  v_24 = t;
  {
    ATerm w_36 = NULL;
    ATerm z_36 = NULL;
    ATerm w_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = w_24;
        {
          ATerm x_36 = NULL;
          ATerm y_36 = NULL;
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
          t = (ATerm) ATinsert(ATempty, not_null(x_36));
        }
      }
    {
      z_36 = t;
      if(((w_36 != NULL) && (w_36 != z_36)))
        _fail(z_36);
      else
        w_36 = z_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(w_36));
      t = printnl_0(t);
    }
  }
  t = v_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  k_37 = t;
  h_37 :
  if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
    {
      i_37 = ATgetFirst((ATermList) k_37);
      j_37 = (ATerm) ATgetNext((ATermList) k_37);
      {
        ATerm n_37 = NULL;
        t = not_null(j_37);
        {
          ATerm a_25;
          a_25 = t;
          {
            ATerm o_37 = NULL,q_37 = NULL,s_37 = NULL;
            ATerm d_25;
            d_25 = t;
            {
              ATerm p_37 = NULL;
              t = i_0(t);
              {
                p_37 = t;
                if(((o_37 != NULL) && (o_37 != p_37)))
                  _fail(p_37);
                else
                  o_37 = p_37;
              }
            }
            t = d_25;
            {
              ATerm r_37 = NULL;
              t = not_null(i_37);
              {
                t = g_0(t);
                {
                  r_37 = t;
                  if(((q_37 != NULL) && (q_37 != r_37)))
                    _fail(r_37);
                  else
                    q_37 = r_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_37)), not_null(q_37));
                {
                  s_37 = t;
                  if(((n_37 != NULL) && (n_37 != s_37)))
                    _fail(s_37);
                  else
                    n_37 = s_37;
                }
              }
            }
          }
          t = a_25;
          {
            ATerm x_5 (ATerm t)
            {
              t = not_null(n_37);
              return(t);
            }
            t = reverse_acc_2(t, g_0, x_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_37) == AT_LIST) && ATisEmpty(k_37)))
        {
          {
            t = term_h_11;
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
  ATerm y_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym_Program_1))
    {
      e_38 = ATgetArgument(d_38, 0);
      {
        ATerm h_38 = NULL,j_38 = NULL;
        ATerm i_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm m_38 = NULL;
            t = b_58(t);
            {
              j_38 = t;
              {
                ATerm p_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_38)), not_null(h_38));
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
  ATerm y_38 = NULL;
  ATerm h_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL;
      t = term_j_24;
      {
        t = get_config_0(t);
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
      }
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = h_25;
      {
        ATerm z_5 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm a_39 = NULL;
            a_39 = t;
            if(((y_38 != NULL) && (y_38 != a_39)))
              _fail(a_39);
            else
              y_38 = a_39;
            return(t);
          }
          t = Program_1(t, g_6);
          return(t);
        }
        t = option_defined_1(t, z_5);
      }
    }
  {
    ATerm h_6 (ATerm t)
    {
      ATerm i_6 (ATerm t)
      {
        t = not_null(y_38);
        return(t);
      }
      t = short_description_1(t, i_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_6);
    {
      t = term_k_25;
      {
        t = echo_0(t);
        {
          t = term_n_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm b_39 = NULL;
                  ATerm c_39 = NULL;
                  c_39 = t;
                  if(((b_39 != NULL) && (b_39 != c_39)))
                    _fail(c_39);
                  else
                    b_39 = c_39;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), term_o_25);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_6);
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm d_39 = NULL;
                    ATerm e_39 = NULL;
                    ATerm o_6 (ATerm t)
                    {
                      t = not_null(y_38);
                      return(t);
                    }
                    t = long_description_1(t, o_6);
                    {
                      e_39 = t;
                      if(((d_39 != NULL) && (d_39 != e_39)))
                        _fail(e_39);
                      else
                        d_39 = e_39;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), term_p_25);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_6);
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
  ATerm q_25;
  q_25 = t;
  {
    ATerm k_39 = NULL;
    ATerm l_39 = NULL;
    l_39 = t;
    if(((k_39 != NULL) && (k_39 != l_39)))
      _fail(l_39);
    else
      k_39 = l_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATempty, not_null(k_39)));
      t = printnl_0(t);
    }
  }
  t = q_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm v_25;
  v_25 = t;
  {
    t = q_72(t);
    t = debug_0(t);
  }
  t = v_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm v_39 = NULL,x_39 = NULL;
  v_39 = t;
  r_39 :
  if(match_cons(v_39, sym_Undefined_1))
    {
      x_39 = ATgetArgument(v_39, 0);
      {
        ATerm a_40 = NULL,c_40 = NULL;
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(v_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
        {
          t = not_null(x_39);
          {
            ATerm e_40 = NULL;
            t = c_58(t);
            {
              c_40 = t;
              {
                ATerm f_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_40)), not_null(a_40));
                {
                  f_40 = t;
                  if(((e_40 != NULL) && (e_40 != f_40)))
                    _fail(f_40);
                  else
                    e_40 = f_40;
                }
                t = not_null(e_40);
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
ATerm fetch_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm k_40 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_64, _id);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = Cons_2(t, _id, k_40);
      }
    return(t);
  }
  t = k_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_80 (ATerm))
{
  t = fetch_1(t, a_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Help_0))
    {
      ATerm r_40 = NULL,t_40 = NULL;
      ATerm y_25;
      y_25 = t;
      {
        ATerm s_40 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          s_40 = t;
          if(((r_40 != NULL) && (r_40 != s_40)))
            _fail(s_40);
          else
            r_40 = s_40;
        }
      }
      t = y_25;
      {
        ATerm u_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_40));
        {
          u_40 = t;
          if(((t_40 != NULL) && (t_40 != u_40)))
            _fail(u_40);
          else
            t_40 = u_40;
        }
        t = not_null(t_40);
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
  ATerm z_40 = NULL;
  z_40 = t;
  t = SSL_implode_string(not_null(z_40));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
        e_41 = t;
        d_41 :
        if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
          {
            f_41 = ATgetFirst((ATermList) e_41);
            g_41 = (ATerm) ATgetNext((ATermList) e_41);
            {
              t = not_null(f_41);
              {
                ATerm p_6 (ATerm t)
                {
                  t = not_null(g_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_6);
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
  ATerm q_41 = NULL;
  ATerm s_41 = NULL;
  q_41 = t;
  {
    ATerm t_41 = NULL;
    ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
    t = not_null(q_41);
    {
      t_41 = t;
      {
        t = SSL_explode_term(not_null(t_41));
        {
          v_41 = t;
          o_41 :
          if(match_cons(v_41, sym__2))
            {
              w_41 = ATgetArgument(v_41, 0);
              x_41 = ATgetArgument(v_41, 1);
              p_41 :
              if(match_string(w_41, ""))
                {
                  if(((s_41 != NULL) && (s_41 != x_41)))
                    _fail(x_41);
                  else
                    s_41 = x_41;
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
      t = not_null(s_41);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm b_42 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_42);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        {
          t = Nil_0(t);
          t = c_65(t);
        }
      }
    return(t);
  }
  t = b_42(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  d_42 :
  if(match_cons(j_42, sym__2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      {
        t = not_null(k_42);
        {
          ATerm t_6 (ATerm t)
          {
            t = not_null(l_42);
            return(t);
          }
          t = at_end_1(t, t_6);
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
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  t = SSL_explode_string(not_null(s_42));
  return(t);
}
ATerm _2 (ATerm t, ATerm f_51 (ATerm), ATerm g_51 (ATerm))
{
  ATerm d_43 = NULL,e_43 = NULL,h_43 = NULL;
  d_43 = t;
  c_43 :
  if(match_cons(d_43, sym__2))
    {
      e_43 = ATgetArgument(d_43, 0);
      h_43 = ATgetArgument(d_43, 1);
      {
        ATerm q_43 = NULL,s_43 = NULL;
        ATerm r_43 = NULL;
        t = SSLgetAnnotations(not_null(d_43));
        {
          r_43 = t;
          if(((q_43 != NULL) && (q_43 != r_43)))
            _fail(r_43);
          else
            q_43 = r_43;
        }
        {
          t = not_null(e_43);
          {
            ATerm i_44 = NULL;
            t = f_51(t);
            {
              s_43 = t;
              {
                t = not_null(h_43);
                {
                  ATerm k_44 = NULL;
                  t = g_51(t);
                  {
                    i_44 = t;
                    {
                      ATerm l_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_43), not_null(i_44)), not_null(q_43));
                      {
                        l_44 = t;
                        if(((k_44 != NULL) && (k_44 != l_44)))
                          _fail(l_44);
                        else
                          k_44 = l_44;
                      }
                      t = not_null(k_44);
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
  ATerm a_45 = NULL,h_45 = NULL,i_45 = NULL;
  a_45 = t;
  w_44 :
  if(match_cons(a_45, sym__2))
    {
      h_45 = ATgetArgument(a_45, 0);
      i_45 = ATgetArgument(a_45, 1);
      {
        ATerm l_26;
        l_26 = t;
        t = SSL_printnl(not_null(h_45), not_null(i_45));
        t = l_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm v_26;
  v_26 = t;
  {
    ATerm q_45 = NULL,s_45 = NULL;
    ATerm w_26;
    w_26 = t;
    {
      ATerm r_45 = NULL;
      t = p_72(t);
      {
        r_45 = t;
        if(((q_45 != NULL) && (q_45 != r_45)))
          _fail(r_45);
        else
          q_45 = r_45;
      }
    }
    t = w_26;
    {
      ATerm t_45 = NULL;
      t_45 = t;
      if(((s_45 != NULL) && (s_45 != t_45)))
        _fail(t_45);
      else
        s_45 = t_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_45)), not_null(q_45)));
        t = printnl_0(t);
      }
    }
  }
  t = v_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm x_45 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = Cons_2(t, n_64, x_45);
      }
    return(t);
  }
  t = x_45(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  t = SSL_is_string(not_null(e_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_26 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = z_26;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, u_6);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
              r_46 = t;
              q_46 :
              if(match_cons(r_46, sym_Path_1))
                {
                  s_46 = ATgetArgument(r_46, 0);
                  t = not_null(s_46);
                }
              else
                {
                  if(match_cons(r_46, sym_Var_1))
                    {
                      s_46 = ATgetArgument(r_46, 0);
                      {
                        t = not_null(s_46);
                        {
                          ATerm e_27 = t;
                          int j_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(j_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm v_6 (ATerm t)
                                {
                                  t = term_k_27;
                                  return(t);
                                }
                                t = debug_1(t, v_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_46, sym_Prefix_2))
                        {
                          s_46 = ATgetArgument(r_46, 0);
                          t_46 = ATgetArgument(r_46, 1);
                          {
                            ATerm y_46 = NULL,a_47 = NULL;
                            ATerm l_27;
                            l_27 = t;
                            {
                              ATerm z_46 = NULL;
                              t = not_null(s_46);
                              {
                                t = eval_config_0(t);
                                {
                                  z_46 = t;
                                  if(((y_46 != NULL) && (y_46 != z_46)))
                                    _fail(z_46);
                                  else
                                    y_46 = z_46;
                                }
                              }
                            }
                            t = l_27;
                            {
                              ATerm b_47 = NULL;
                              t = not_null(t_46);
                              {
                                t = eval_config_0(t);
                                {
                                  b_47 = t;
                                  if(((a_47 != NULL) && (a_47 != b_47)))
                                    _fail(b_47);
                                  else
                                    a_47 = b_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_46), not_null(a_47));
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
  ATerm j_47 = NULL;
  j_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_22, not_null(j_47));
    {
      t = table_get_0(t);
      {
        ATerm w_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_27;
            s_27 = t;
            {
              ATerm l_47 = NULL;
              ATerm m_47 = NULL;
              m_47 = t;
              if(((l_47 != NULL) && (l_47 != m_47)))
                _fail(m_47);
              else
                l_47 = m_47;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_22, not_null(j_47), not_null(l_47));
                t = table_put_0(t);
              }
            }
            t = s_27;
          }
          return(t);
        }
        t = try_1(t, w_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm t_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_62(t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = t_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  q_47 :
  if(match_cons(r_47, sym__2))
    {
      s_47 = ATgetArgument(r_47, 0);
      t_47 = ATgetArgument(r_47, 1);
      t = SSL_table_get(not_null(s_47), not_null(t_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym__3))
    {
      b_48 = ATgetArgument(a_48, 0);
      c_48 = ATgetArgument(a_48, 1);
      d_48 = ATgetArgument(a_48, 2);
      {
        ATerm a_28;
        a_28 = t;
        {
          ATerm h_48 = NULL;
          ATerm i_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_48), not_null(c_48));
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
                t = (ATerm) ATempty;
              }
            {
              i_48 = t;
              if(((h_48 != NULL) && (h_48 != i_48)))
                _fail(i_48);
              else
                h_48 = i_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_48), not_null(c_48), (ATerm) ATinsert(CheckATermList(not_null(h_48)), not_null(d_48)));
            t = table_put_0(t);
          }
        }
        t = a_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm m_48 = NULL;
  ATerm n_48 = NULL;
  t = term_h_11;
  {
    t = f_81(t);
    {
      n_48 = t;
      if(((m_48 != NULL) && (m_48 != n_48)))
        _fail(n_48);
      else
        m_48 = n_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_25, term_m_25, not_null(m_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_string(t_48, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(t_48) == AT_LIST) && !(ATisEmpty(t_48))))
        {
          u_48 = ATgetFirst((ATermList) t_48);
          v_48 = (ATerm) ATgetNext((ATermList) t_48);
          {
            ATerm y_48 = NULL;
            ATerm h_28;
            h_28 = t;
            {
              t = not_null(u_48);
              t = a_0(t);
            }
            t = h_28;
            {
              ATerm z_48 = NULL;
              t = term_h_11;
              {
                t = b_0(t);
                {
                  z_48 = t;
                  if(((y_48 != NULL) && (y_48 != z_48)))
                    _fail(z_48);
                  else
                    y_48 = z_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_48)), not_null(y_48));
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
  ATerm b_7 (ATerm t)
  {
    ATerm e_49 = NULL;
    e_49 = t;
    d_49 :
    if(!(match_string(e_49, "--help")))
      {
        if(!(match_string(e_49, "-h")))
          {
            if(!(match_string(e_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_l_28;
    {
      t = set_config_0(t);
      t = term_m_28;
    }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = term_v_28;
    return(t);
  }
  t = Option_3(t, b_7, c_7, d_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  g_49 :
  if(((ATgetType(h_49) == AT_LIST) && !(ATisEmpty(h_49))))
    {
      i_49 = ATgetFirst((ATermList) h_49);
      j_49 = (ATerm) ATgetNext((ATermList) h_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(((ATgetType(t_49) == AT_LIST) && !(ATisEmpty(t_49))))
    {
      u_49 = ATgetFirst((ATermList) t_49);
      v_49 = (ATerm) ATgetNext((ATermList) t_49);
      {
        ATerm z_49 = NULL,b_50 = NULL;
        ATerm a_50 = NULL;
        t = SSLgetAnnotations(not_null(t_49));
        {
          a_50 = t;
          if(((z_49 != NULL) && (z_49 != a_50)))
            _fail(a_50);
          else
            z_49 = a_50;
        }
        {
          t = not_null(u_49);
          {
            ATerm d_50 = NULL;
            t = o_52(t);
            {
              b_50 = t;
              {
                t = not_null(v_49);
                {
                  ATerm f_50 = NULL;
                  t = p_52(t);
                  {
                    d_50 = t;
                    {
                      ATerm g_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_50)), not_null(b_50)), not_null(z_49));
                      {
                        g_50 = t;
                        if(((f_50 != NULL) && (f_50 != g_50)))
                          _fail(g_50);
                        else
                          f_50 = g_50;
                      }
                      t = not_null(f_50);
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
  ATerm q_50 = NULL;
  q_50 = t;
  p_50 :
  if(((ATgetType(q_50) == AT_LIST) && ATisEmpty(q_50)))
    {
      {
        ATerm s_50 = NULL,u_50 = NULL;
        ATerm w_28;
        w_28 = t;
        {
          ATerm t_50 = NULL;
          t = SSLgetAnnotations(not_null(q_50));
          {
            t_50 = t;
            if(((s_50 != NULL) && (s_50 != t_50)))
              _fail(t_50);
            else
              s_50 = t_50;
          }
        }
        t = w_28;
        {
          ATerm v_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_50));
          {
            v_50 = t;
            if(((u_50 != NULL) && (u_50 != v_50)))
              _fail(v_50);
            else
              u_50 = v_50;
          }
          t = not_null(u_50);
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
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym__2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_22, not_null(c_51), not_null(d_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm y_28;
  y_28 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = term_z_28;
      t = d_81(t);
      return(t);
    }
    t = try_1(t, f_7);
  }
  t = y_28;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm n_51 = NULL;
      ATerm f_29;
      f_29 = t;
      {
        ATerm l_51 = NULL;
        ATerm m_51 = NULL;
        m_51 = t;
        if(((l_51 != NULL) && (l_51 != m_51)))
          _fail(m_51);
        else
          l_51 = m_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_24, not_null(l_51));
          t = set_config_0(t);
        }
      }
      t = f_29;
      {
        ATerm o_51 = NULL;
        o_51 = t;
        if(((n_51 != NULL) && (n_51 != o_51)))
          _fail(o_51);
        else
          n_51 = o_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_51));
      }
      return(t);
    }
    ATerm h_7 (ATerm t)
    {
      ATerm g_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                t = d_81(t);
                t = Cons_2(t, _id, h_7);
              }
            }
          ;
          LocalPopChoice(k_29);
        }
      else
        {
          t = g_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_7, h_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  ATerm q_29;
  q_29 = t;
  {
    ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
    x_51 = t;
    t_51 :
    if(match_cons(x_51, sym__3))
      {
        y_51 = ATgetArgument(x_51, 0);
        z_51 = ATgetArgument(x_51, 1);
        a_52 = ATgetArgument(x_51, 2);
        {
          if(((u_51 != NULL) && (u_51 != y_51)))
            _fail(y_51);
          else
            u_51 = y_51;
          {
            if(((v_51 != NULL) && (v_51 != z_51)))
              _fail(z_51);
            else
              v_51 = z_51;
            {
              if(((w_51 != NULL) && (w_51 != a_52)))
                _fail(a_52);
              else
                w_51 = a_52;
              t = SSL_table_put(not_null(u_51), not_null(v_51), not_null(w_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm d_52 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    t = term_u_29;
    t = table_put_0(t);
  }
  t = r_29;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm v_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_81(t);
          ;
          LocalPopChoice(w_29);
        }
      else
        {
          t = v_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_7);
    {
      ATerm n_7 (ATerm t)
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_29;
            z_29 = t;
            {
              ATerm a_30 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_28;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = a_30;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_29;
            {
              t = system_usage_0(t);
              {
                t = term_y_20;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm o_7 (ATerm t)
              {
                ATerm p_7 (ATerm t)
                {
                  ATerm e_52 = NULL;
                  e_52 = t;
                  if(((d_52 != NULL) && (d_52 != e_52)))
                    _fail(e_52);
                  else
                    d_52 = e_52;
                  return(t);
                }
                t = Undefined_1(t, p_7);
                return(t);
              }
              t = option_defined_1(t, o_7);
              {
                ATerm q_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_52)), term_g_30);
                  return(t);
                }
                t = say_1(t, q_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_7);
      {
        ATerm h_30;
        h_30 = t;
        {
          t = term_l_25;
          t = table_destroy_0(t);
        }
        t = h_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  t = parse_options_1(t, z_78);
  {
    t = store_options_0(t);
    {
      t = b_79(t);
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_79);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm o_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_79(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_30);
                }
              else
                {
                  t = o_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm d_79 (ATerm), ATerm e_79 (ATerm))
{
  t = option_wrap_4(t, d_79, default_usage_0, _id, e_79);
  return(t);
}
ATerm io_asfix2abox_0 (ATerm t)
{
  t = option_wrap_2(t, asfix2abox_options_0, asfix2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_asfix2abox_0(t);
  return(t);
}
